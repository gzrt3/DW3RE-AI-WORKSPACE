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


void FUN_0019b6a8_part26(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a79f8u: goto label_1a79f8;
        case 0x1a79fcu: goto label_1a79fc;
        case 0x1a7a00u: goto label_1a7a00;
        case 0x1a7a04u: goto label_1a7a04;
        case 0x1a7a08u: goto label_1a7a08;
        case 0x1a7a0cu: goto label_1a7a0c;
        case 0x1a7a10u: goto label_1a7a10;
        case 0x1a7a14u: goto label_1a7a14;
        case 0x1a7a18u: goto label_1a7a18;
        case 0x1a7a1cu: goto label_1a7a1c;
        case 0x1a7a20u: goto label_1a7a20;
        case 0x1a7a24u: goto label_1a7a24;
        case 0x1a7a28u: goto label_1a7a28;
        case 0x1a7a2cu: goto label_1a7a2c;
        case 0x1a7a30u: goto label_1a7a30;
        case 0x1a7a34u: goto label_1a7a34;
        case 0x1a7a38u: goto label_1a7a38;
        case 0x1a7a3cu: goto label_1a7a3c;
        case 0x1a7a40u: goto label_1a7a40;
        case 0x1a7a44u: goto label_1a7a44;
        case 0x1a7a48u: goto label_1a7a48;
        case 0x1a7a4cu: goto label_1a7a4c;
        case 0x1a7a50u: goto label_1a7a50;
        case 0x1a7a54u: goto label_1a7a54;
        case 0x1a7a58u: goto label_1a7a58;
        case 0x1a7a5cu: goto label_1a7a5c;
        case 0x1a7a60u: goto label_1a7a60;
        case 0x1a7a64u: goto label_1a7a64;
        case 0x1a7a68u: goto label_1a7a68;
        case 0x1a7a6cu: goto label_1a7a6c;
        case 0x1a7a70u: goto label_1a7a70;
        case 0x1a7a74u: goto label_1a7a74;
        case 0x1a7a78u: goto label_1a7a78;
        case 0x1a7a7cu: goto label_1a7a7c;
        case 0x1a7a80u: goto label_1a7a80;
        case 0x1a7a84u: goto label_1a7a84;
        case 0x1a7a88u: goto label_1a7a88;
        case 0x1a7a8cu: goto label_1a7a8c;
        case 0x1a7a90u: goto label_1a7a90;
        case 0x1a7a94u: goto label_1a7a94;
        case 0x1a7a98u: goto label_1a7a98;
        case 0x1a7a9cu: goto label_1a7a9c;
        case 0x1a7aa0u: goto label_1a7aa0;
        case 0x1a7aa4u: goto label_1a7aa4;
        case 0x1a7aa8u: goto label_1a7aa8;
        case 0x1a7aacu: goto label_1a7aac;
        case 0x1a7ab0u: goto label_1a7ab0;
        case 0x1a7ab4u: goto label_1a7ab4;
        case 0x1a7ab8u: goto label_1a7ab8;
        case 0x1a7abcu: goto label_1a7abc;
        case 0x1a7ac0u: goto label_1a7ac0;
        case 0x1a7ac4u: goto label_1a7ac4;
        case 0x1a7ac8u: goto label_1a7ac8;
        case 0x1a7accu: goto label_1a7acc;
        case 0x1a7ad0u: goto label_1a7ad0;
        case 0x1a7ad4u: goto label_1a7ad4;
        case 0x1a7ad8u: goto label_1a7ad8;
        case 0x1a7adcu: goto label_1a7adc;
        case 0x1a7ae0u: goto label_1a7ae0;
        case 0x1a7ae4u: goto label_1a7ae4;
        case 0x1a7ae8u: goto label_1a7ae8;
        case 0x1a7aecu: goto label_1a7aec;
        case 0x1a7af0u: goto label_1a7af0;
        case 0x1a7af4u: goto label_1a7af4;
        case 0x1a7af8u: goto label_1a7af8;
        case 0x1a7afcu: goto label_1a7afc;
        case 0x1a7b00u: goto label_1a7b00;
        case 0x1a7b04u: goto label_1a7b04;
        case 0x1a7b08u: goto label_1a7b08;
        case 0x1a7b0cu: goto label_1a7b0c;
        case 0x1a7b10u: goto label_1a7b10;
        case 0x1a7b14u: goto label_1a7b14;
        case 0x1a7b18u: goto label_1a7b18;
        case 0x1a7b1cu: goto label_1a7b1c;
        case 0x1a7b20u: goto label_1a7b20;
        case 0x1a7b24u: goto label_1a7b24;
        case 0x1a7b28u: goto label_1a7b28;
        case 0x1a7b2cu: goto label_1a7b2c;
        case 0x1a7b30u: goto label_1a7b30;
        case 0x1a7b34u: goto label_1a7b34;
        case 0x1a7b38u: goto label_1a7b38;
        case 0x1a7b3cu: goto label_1a7b3c;
        case 0x1a7b40u: goto label_1a7b40;
        case 0x1a7b44u: goto label_1a7b44;
        case 0x1a7b48u: goto label_1a7b48;
        case 0x1a7b4cu: goto label_1a7b4c;
        case 0x1a7b50u: goto label_1a7b50;
        case 0x1a7b54u: goto label_1a7b54;
        case 0x1a7b58u: goto label_1a7b58;
        case 0x1a7b5cu: goto label_1a7b5c;
        case 0x1a7b60u: goto label_1a7b60;
        case 0x1a7b64u: goto label_1a7b64;
        case 0x1a7b68u: goto label_1a7b68;
        case 0x1a7b6cu: goto label_1a7b6c;
        case 0x1a7b70u: goto label_1a7b70;
        case 0x1a7b74u: goto label_1a7b74;
        case 0x1a7b78u: goto label_1a7b78;
        case 0x1a7b7cu: goto label_1a7b7c;
        case 0x1a7b80u: goto label_1a7b80;
        case 0x1a7b84u: goto label_1a7b84;
        case 0x1a7b88u: goto label_1a7b88;
        case 0x1a7b8cu: goto label_1a7b8c;
        case 0x1a7b90u: goto label_1a7b90;
        case 0x1a7b94u: goto label_1a7b94;
        case 0x1a7b98u: goto label_1a7b98;
        case 0x1a7b9cu: goto label_1a7b9c;
        case 0x1a7ba0u: goto label_1a7ba0;
        case 0x1a7ba4u: goto label_1a7ba4;
        case 0x1a7ba8u: goto label_1a7ba8;
        case 0x1a7bacu: goto label_1a7bac;
        case 0x1a7bb0u: goto label_1a7bb0;
        case 0x1a7bb4u: goto label_1a7bb4;
        case 0x1a7bb8u: goto label_1a7bb8;
        case 0x1a7bbcu: goto label_1a7bbc;
        case 0x1a7bc0u: goto label_1a7bc0;
        case 0x1a7bc4u: goto label_1a7bc4;
        case 0x1a7bc8u: goto label_1a7bc8;
        case 0x1a7bccu: goto label_1a7bcc;
        case 0x1a7bd0u: goto label_1a7bd0;
        case 0x1a7bd4u: goto label_1a7bd4;
        case 0x1a7bd8u: goto label_1a7bd8;
        case 0x1a7bdcu: goto label_1a7bdc;
        case 0x1a7be0u: goto label_1a7be0;
        case 0x1a7be4u: goto label_1a7be4;
        case 0x1a7be8u: goto label_1a7be8;
        case 0x1a7becu: goto label_1a7bec;
        case 0x1a7bf0u: goto label_1a7bf0;
        case 0x1a7bf4u: goto label_1a7bf4;
        case 0x1a7bf8u: goto label_1a7bf8;
        case 0x1a7bfcu: goto label_1a7bfc;
        case 0x1a7c00u: goto label_1a7c00;
        case 0x1a7c04u: goto label_1a7c04;
        case 0x1a7c08u: goto label_1a7c08;
        case 0x1a7c0cu: goto label_1a7c0c;
        case 0x1a7c10u: goto label_1a7c10;
        case 0x1a7c14u: goto label_1a7c14;
        case 0x1a7c18u: goto label_1a7c18;
        case 0x1a7c1cu: goto label_1a7c1c;
        case 0x1a7c20u: goto label_1a7c20;
        case 0x1a7c24u: goto label_1a7c24;
        case 0x1a7c28u: goto label_1a7c28;
        case 0x1a7c2cu: goto label_1a7c2c;
        case 0x1a7c30u: goto label_1a7c30;
        case 0x1a7c34u: goto label_1a7c34;
        case 0x1a7c38u: goto label_1a7c38;
        case 0x1a7c3cu: goto label_1a7c3c;
        case 0x1a7c40u: goto label_1a7c40;
        case 0x1a7c44u: goto label_1a7c44;
        case 0x1a7c48u: goto label_1a7c48;
        case 0x1a7c4cu: goto label_1a7c4c;
        case 0x1a7c50u: goto label_1a7c50;
        case 0x1a7c54u: goto label_1a7c54;
        case 0x1a7c58u: goto label_1a7c58;
        case 0x1a7c5cu: goto label_1a7c5c;
        case 0x1a7c60u: goto label_1a7c60;
        case 0x1a7c64u: goto label_1a7c64;
        case 0x1a7c68u: goto label_1a7c68;
        case 0x1a7c6cu: goto label_1a7c6c;
        case 0x1a7c70u: goto label_1a7c70;
        case 0x1a7c74u: goto label_1a7c74;
        case 0x1a7c78u: goto label_1a7c78;
        case 0x1a7c7cu: goto label_1a7c7c;
        case 0x1a7c80u: goto label_1a7c80;
        case 0x1a7c84u: goto label_1a7c84;
        case 0x1a7c88u: goto label_1a7c88;
        case 0x1a7c8cu: goto label_1a7c8c;
        case 0x1a7c90u: goto label_1a7c90;
        case 0x1a7c94u: goto label_1a7c94;
        case 0x1a7c98u: goto label_1a7c98;
        case 0x1a7c9cu: goto label_1a7c9c;
        case 0x1a7ca0u: goto label_1a7ca0;
        case 0x1a7ca4u: goto label_1a7ca4;
        case 0x1a7ca8u: goto label_1a7ca8;
        case 0x1a7cacu: goto label_1a7cac;
        case 0x1a7cb0u: goto label_1a7cb0;
        case 0x1a7cb4u: goto label_1a7cb4;
        case 0x1a7cb8u: goto label_1a7cb8;
        case 0x1a7cbcu: goto label_1a7cbc;
        case 0x1a7cc0u: goto label_1a7cc0;
        case 0x1a7cc4u: goto label_1a7cc4;
        case 0x1a7cc8u: goto label_1a7cc8;
        case 0x1a7cccu: goto label_1a7ccc;
        case 0x1a7cd0u: goto label_1a7cd0;
        case 0x1a7cd4u: goto label_1a7cd4;
        case 0x1a7cd8u: goto label_1a7cd8;
        case 0x1a7cdcu: goto label_1a7cdc;
        case 0x1a7ce0u: goto label_1a7ce0;
        case 0x1a7ce4u: goto label_1a7ce4;
        case 0x1a7ce8u: goto label_1a7ce8;
        case 0x1a7cecu: goto label_1a7cec;
        case 0x1a7cf0u: goto label_1a7cf0;
        case 0x1a7cf4u: goto label_1a7cf4;
        case 0x1a7cf8u: goto label_1a7cf8;
        case 0x1a7cfcu: goto label_1a7cfc;
        case 0x1a7d00u: goto label_1a7d00;
        case 0x1a7d04u: goto label_1a7d04;
        case 0x1a7d08u: goto label_1a7d08;
        case 0x1a7d0cu: goto label_1a7d0c;
        case 0x1a7d10u: goto label_1a7d10;
        case 0x1a7d14u: goto label_1a7d14;
        case 0x1a7d18u: goto label_1a7d18;
        case 0x1a7d1cu: goto label_1a7d1c;
        case 0x1a7d20u: goto label_1a7d20;
        case 0x1a7d24u: goto label_1a7d24;
        case 0x1a7d28u: goto label_1a7d28;
        case 0x1a7d2cu: goto label_1a7d2c;
        case 0x1a7d30u: goto label_1a7d30;
        case 0x1a7d34u: goto label_1a7d34;
        case 0x1a7d38u: goto label_1a7d38;
        case 0x1a7d3cu: goto label_1a7d3c;
        case 0x1a7d40u: goto label_1a7d40;
        case 0x1a7d44u: goto label_1a7d44;
        case 0x1a7d48u: goto label_1a7d48;
        case 0x1a7d4cu: goto label_1a7d4c;
        case 0x1a7d50u: goto label_1a7d50;
        case 0x1a7d54u: goto label_1a7d54;
        case 0x1a7d58u: goto label_1a7d58;
        case 0x1a7d5cu: goto label_1a7d5c;
        case 0x1a7d60u: goto label_1a7d60;
        case 0x1a7d64u: goto label_1a7d64;
        case 0x1a7d68u: goto label_1a7d68;
        case 0x1a7d6cu: goto label_1a7d6c;
        case 0x1a7d70u: goto label_1a7d70;
        case 0x1a7d74u: goto label_1a7d74;
        case 0x1a7d78u: goto label_1a7d78;
        case 0x1a7d7cu: goto label_1a7d7c;
        case 0x1a7d80u: goto label_1a7d80;
        case 0x1a7d84u: goto label_1a7d84;
        case 0x1a7d88u: goto label_1a7d88;
        case 0x1a7d8cu: goto label_1a7d8c;
        case 0x1a7d90u: goto label_1a7d90;
        case 0x1a7d94u: goto label_1a7d94;
        case 0x1a7d98u: goto label_1a7d98;
        case 0x1a7d9cu: goto label_1a7d9c;
        case 0x1a7da0u: goto label_1a7da0;
        case 0x1a7da4u: goto label_1a7da4;
        case 0x1a7da8u: goto label_1a7da8;
        case 0x1a7dacu: goto label_1a7dac;
        case 0x1a7db0u: goto label_1a7db0;
        case 0x1a7db4u: goto label_1a7db4;
        case 0x1a7db8u: goto label_1a7db8;
        case 0x1a7dbcu: goto label_1a7dbc;
        case 0x1a7dc0u: goto label_1a7dc0;
        case 0x1a7dc4u: goto label_1a7dc4;
        case 0x1a7dc8u: goto label_1a7dc8;
        case 0x1a7dccu: goto label_1a7dcc;
        case 0x1a7dd0u: goto label_1a7dd0;
        case 0x1a7dd4u: goto label_1a7dd4;
        case 0x1a7dd8u: goto label_1a7dd8;
        case 0x1a7ddcu: goto label_1a7ddc;
        case 0x1a7de0u: goto label_1a7de0;
        case 0x1a7de4u: goto label_1a7de4;
        case 0x1a7de8u: goto label_1a7de8;
        case 0x1a7decu: goto label_1a7dec;
        case 0x1a7df0u: goto label_1a7df0;
        case 0x1a7df4u: goto label_1a7df4;
        case 0x1a7df8u: goto label_1a7df8;
        case 0x1a7dfcu: goto label_1a7dfc;
        case 0x1a7e00u: goto label_1a7e00;
        case 0x1a7e04u: goto label_1a7e04;
        case 0x1a7e08u: goto label_1a7e08;
        case 0x1a7e0cu: goto label_1a7e0c;
        case 0x1a7e10u: goto label_1a7e10;
        case 0x1a7e14u: goto label_1a7e14;
        case 0x1a7e18u: goto label_1a7e18;
        case 0x1a7e1cu: goto label_1a7e1c;
        case 0x1a7e20u: goto label_1a7e20;
        case 0x1a7e24u: goto label_1a7e24;
        case 0x1a7e28u: goto label_1a7e28;
        case 0x1a7e2cu: goto label_1a7e2c;
        case 0x1a7e30u: goto label_1a7e30;
        case 0x1a7e34u: goto label_1a7e34;
        case 0x1a7e38u: goto label_1a7e38;
        case 0x1a7e3cu: goto label_1a7e3c;
        case 0x1a7e40u: goto label_1a7e40;
        case 0x1a7e44u: goto label_1a7e44;
        case 0x1a7e48u: goto label_1a7e48;
        case 0x1a7e4cu: goto label_1a7e4c;
        case 0x1a7e50u: goto label_1a7e50;
        case 0x1a7e54u: goto label_1a7e54;
        case 0x1a7e58u: goto label_1a7e58;
        case 0x1a7e5cu: goto label_1a7e5c;
        case 0x1a7e60u: goto label_1a7e60;
        case 0x1a7e64u: goto label_1a7e64;
        case 0x1a7e68u: goto label_1a7e68;
        case 0x1a7e6cu: goto label_1a7e6c;
        case 0x1a7e70u: goto label_1a7e70;
        case 0x1a7e74u: goto label_1a7e74;
        case 0x1a7e78u: goto label_1a7e78;
        case 0x1a7e7cu: goto label_1a7e7c;
        case 0x1a7e80u: goto label_1a7e80;
        case 0x1a7e84u: goto label_1a7e84;
        case 0x1a7e88u: goto label_1a7e88;
        case 0x1a7e8cu: goto label_1a7e8c;
        case 0x1a7e90u: goto label_1a7e90;
        case 0x1a7e94u: goto label_1a7e94;
        case 0x1a7e98u: goto label_1a7e98;
        case 0x1a7e9cu: goto label_1a7e9c;
        case 0x1a7ea0u: goto label_1a7ea0;
        case 0x1a7ea4u: goto label_1a7ea4;
        case 0x1a7ea8u: goto label_1a7ea8;
        case 0x1a7eacu: goto label_1a7eac;
        case 0x1a7eb0u: goto label_1a7eb0;
        case 0x1a7eb4u: goto label_1a7eb4;
        case 0x1a7eb8u: goto label_1a7eb8;
        case 0x1a7ebcu: goto label_1a7ebc;
        case 0x1a7ec0u: goto label_1a7ec0;
        case 0x1a7ec4u: goto label_1a7ec4;
        case 0x1a7ec8u: goto label_1a7ec8;
        case 0x1a7eccu: goto label_1a7ecc;
        case 0x1a7ed0u: goto label_1a7ed0;
        case 0x1a7ed4u: goto label_1a7ed4;
        case 0x1a7ed8u: goto label_1a7ed8;
        case 0x1a7edcu: goto label_1a7edc;
        case 0x1a7ee0u: goto label_1a7ee0;
        case 0x1a7ee4u: goto label_1a7ee4;
        case 0x1a7ee8u: goto label_1a7ee8;
        case 0x1a7eecu: goto label_1a7eec;
        case 0x1a7ef0u: goto label_1a7ef0;
        case 0x1a7ef4u: goto label_1a7ef4;
        case 0x1a7ef8u: goto label_1a7ef8;
        case 0x1a7efcu: goto label_1a7efc;
        case 0x1a7f00u: goto label_1a7f00;
        case 0x1a7f04u: goto label_1a7f04;
        case 0x1a7f08u: goto label_1a7f08;
        case 0x1a7f0cu: goto label_1a7f0c;
        case 0x1a7f10u: goto label_1a7f10;
        case 0x1a7f14u: goto label_1a7f14;
        case 0x1a7f18u: goto label_1a7f18;
        case 0x1a7f1cu: goto label_1a7f1c;
        case 0x1a7f20u: goto label_1a7f20;
        case 0x1a7f24u: goto label_1a7f24;
        case 0x1a7f28u: goto label_1a7f28;
        case 0x1a7f2cu: goto label_1a7f2c;
        case 0x1a7f30u: goto label_1a7f30;
        case 0x1a7f34u: goto label_1a7f34;
        case 0x1a7f38u: goto label_1a7f38;
        case 0x1a7f3cu: goto label_1a7f3c;
        case 0x1a7f40u: goto label_1a7f40;
        case 0x1a7f44u: goto label_1a7f44;
        case 0x1a7f48u: goto label_1a7f48;
        case 0x1a7f4cu: goto label_1a7f4c;
        case 0x1a7f50u: goto label_1a7f50;
        case 0x1a7f54u: goto label_1a7f54;
        case 0x1a7f58u: goto label_1a7f58;
        case 0x1a7f5cu: goto label_1a7f5c;
        case 0x1a7f60u: goto label_1a7f60;
        case 0x1a7f64u: goto label_1a7f64;
        case 0x1a7f68u: goto label_1a7f68;
        case 0x1a7f6cu: goto label_1a7f6c;
        case 0x1a7f70u: goto label_1a7f70;
        case 0x1a7f74u: goto label_1a7f74;
        case 0x1a7f78u: goto label_1a7f78;
        case 0x1a7f7cu: goto label_1a7f7c;
        case 0x1a7f80u: goto label_1a7f80;
        case 0x1a7f84u: goto label_1a7f84;
        case 0x1a7f88u: goto label_1a7f88;
        case 0x1a7f8cu: goto label_1a7f8c;
        case 0x1a7f90u: goto label_1a7f90;
        case 0x1a7f94u: goto label_1a7f94;
        case 0x1a7f98u: goto label_1a7f98;
        case 0x1a7f9cu: goto label_1a7f9c;
        case 0x1a7fa0u: goto label_1a7fa0;
        case 0x1a7fa4u: goto label_1a7fa4;
        case 0x1a7fa8u: goto label_1a7fa8;
        case 0x1a7facu: goto label_1a7fac;
        case 0x1a7fb0u: goto label_1a7fb0;
        case 0x1a7fb4u: goto label_1a7fb4;
        case 0x1a7fb8u: goto label_1a7fb8;
        case 0x1a7fbcu: goto label_1a7fbc;
        case 0x1a7fc0u: goto label_1a7fc0;
        case 0x1a7fc4u: goto label_1a7fc4;
        case 0x1a7fc8u: goto label_1a7fc8;
        case 0x1a7fccu: goto label_1a7fcc;
        case 0x1a7fd0u: goto label_1a7fd0;
        case 0x1a7fd4u: goto label_1a7fd4;
        case 0x1a7fd8u: goto label_1a7fd8;
        case 0x1a7fdcu: goto label_1a7fdc;
        case 0x1a7fe0u: goto label_1a7fe0;
        case 0x1a7fe4u: goto label_1a7fe4;
        case 0x1a7fe8u: goto label_1a7fe8;
        case 0x1a7fecu: goto label_1a7fec;
        case 0x1a7ff0u: goto label_1a7ff0;
        case 0x1a7ff4u: goto label_1a7ff4;
        case 0x1a7ff8u: goto label_1a7ff8;
        case 0x1a7ffcu: goto label_1a7ffc;
        case 0x1a8000u: goto label_1a8000;
        case 0x1a8004u: goto label_1a8004;
        case 0x1a8008u: goto label_1a8008;
        case 0x1a800cu: goto label_1a800c;
        case 0x1a8010u: goto label_1a8010;
        case 0x1a8014u: goto label_1a8014;
        case 0x1a8018u: goto label_1a8018;
        case 0x1a801cu: goto label_1a801c;
        case 0x1a8020u: goto label_1a8020;
        case 0x1a8024u: goto label_1a8024;
        case 0x1a8028u: goto label_1a8028;
        case 0x1a802cu: goto label_1a802c;
        case 0x1a8030u: goto label_1a8030;
        case 0x1a8034u: goto label_1a8034;
        case 0x1a8038u: goto label_1a8038;
        case 0x1a803cu: goto label_1a803c;
        case 0x1a8040u: goto label_1a8040;
        case 0x1a8044u: goto label_1a8044;
        case 0x1a8048u: goto label_1a8048;
        case 0x1a804cu: goto label_1a804c;
        case 0x1a8050u: goto label_1a8050;
        case 0x1a8054u: goto label_1a8054;
        case 0x1a8058u: goto label_1a8058;
        case 0x1a805cu: goto label_1a805c;
        case 0x1a8060u: goto label_1a8060;
        case 0x1a8064u: goto label_1a8064;
        case 0x1a8068u: goto label_1a8068;
        case 0x1a806cu: goto label_1a806c;
        case 0x1a8070u: goto label_1a8070;
        case 0x1a8074u: goto label_1a8074;
        case 0x1a8078u: goto label_1a8078;
        case 0x1a807cu: goto label_1a807c;
        case 0x1a8080u: goto label_1a8080;
        case 0x1a8084u: goto label_1a8084;
        case 0x1a8088u: goto label_1a8088;
        case 0x1a808cu: goto label_1a808c;
        case 0x1a8090u: goto label_1a8090;
        case 0x1a8094u: goto label_1a8094;
        case 0x1a8098u: goto label_1a8098;
        case 0x1a809cu: goto label_1a809c;
        case 0x1a80a0u: goto label_1a80a0;
        case 0x1a80a4u: goto label_1a80a4;
        case 0x1a80a8u: goto label_1a80a8;
        case 0x1a80acu: goto label_1a80ac;
        case 0x1a80b0u: goto label_1a80b0;
        case 0x1a80b4u: goto label_1a80b4;
        case 0x1a80b8u: goto label_1a80b8;
        case 0x1a80bcu: goto label_1a80bc;
        case 0x1a80c0u: goto label_1a80c0;
        case 0x1a80c4u: goto label_1a80c4;
        case 0x1a80c8u: goto label_1a80c8;
        case 0x1a80ccu: goto label_1a80cc;
        case 0x1a80d0u: goto label_1a80d0;
        case 0x1a80d4u: goto label_1a80d4;
        case 0x1a80d8u: goto label_1a80d8;
        case 0x1a80dcu: goto label_1a80dc;
        case 0x1a80e0u: goto label_1a80e0;
        case 0x1a80e4u: goto label_1a80e4;
        case 0x1a80e8u: goto label_1a80e8;
        case 0x1a80ecu: goto label_1a80ec;
        case 0x1a80f0u: goto label_1a80f0;
        case 0x1a80f4u: goto label_1a80f4;
        case 0x1a80f8u: goto label_1a80f8;
        case 0x1a80fcu: goto label_1a80fc;
        case 0x1a8100u: goto label_1a8100;
        case 0x1a8104u: goto label_1a8104;
        case 0x1a8108u: goto label_1a8108;
        case 0x1a810cu: goto label_1a810c;
        case 0x1a8110u: goto label_1a8110;
        case 0x1a8114u: goto label_1a8114;
        case 0x1a8118u: goto label_1a8118;
        case 0x1a811cu: goto label_1a811c;
        case 0x1a8120u: goto label_1a8120;
        case 0x1a8124u: goto label_1a8124;
        case 0x1a8128u: goto label_1a8128;
        case 0x1a812cu: goto label_1a812c;
        case 0x1a8130u: goto label_1a8130;
        case 0x1a8134u: goto label_1a8134;
        case 0x1a8138u: goto label_1a8138;
        case 0x1a813cu: goto label_1a813c;
        case 0x1a8140u: goto label_1a8140;
        case 0x1a8144u: goto label_1a8144;
        case 0x1a8148u: goto label_1a8148;
        case 0x1a814cu: goto label_1a814c;
        case 0x1a8150u: goto label_1a8150;
        case 0x1a8154u: goto label_1a8154;
        case 0x1a8158u: goto label_1a8158;
        case 0x1a815cu: goto label_1a815c;
        case 0x1a8160u: goto label_1a8160;
        case 0x1a8164u: goto label_1a8164;
        case 0x1a8168u: goto label_1a8168;
        case 0x1a816cu: goto label_1a816c;
        case 0x1a8170u: goto label_1a8170;
        case 0x1a8174u: goto label_1a8174;
        case 0x1a8178u: goto label_1a8178;
        case 0x1a817cu: goto label_1a817c;
        case 0x1a8180u: goto label_1a8180;
        case 0x1a8184u: goto label_1a8184;
        case 0x1a8188u: goto label_1a8188;
        case 0x1a818cu: goto label_1a818c;
        case 0x1a8190u: goto label_1a8190;
        case 0x1a8194u: goto label_1a8194;
        case 0x1a8198u: goto label_1a8198;
        case 0x1a819cu: goto label_1a819c;
        case 0x1a81a0u: goto label_1a81a0;
        case 0x1a81a4u: goto label_1a81a4;
        case 0x1a81a8u: goto label_1a81a8;
        case 0x1a81acu: goto label_1a81ac;
        case 0x1a81b0u: goto label_1a81b0;
        case 0x1a81b4u: goto label_1a81b4;
        case 0x1a81b8u: goto label_1a81b8;
        case 0x1a81bcu: goto label_1a81bc;
        case 0x1a81c0u: goto label_1a81c0;
        case 0x1a81c4u: goto label_1a81c4;
        default: return;
    }

label_1a79f8:
    if (ctx->pc == 0x1A79F8u) {
        ctx->pc = 0x1A79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79F4u;
        // 0x1a79f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A79FCu;
        goto label_1a79fc;
    }
    ctx->pc = 0x1A79F4u;
    {
        const bool branch_taken_0x1a79f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79F4u;
        // 0x1a79f8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a79f4) {
            ctx->pc = 0x1A7A0Cu;
            goto label_1a7a0c;
        }
    }
    ctx->pc = 0x1A79FCu;
label_1a79fc:
    // 0x1a79fc: 0xc069cb6  jal         func_1A72D8
label_1a7a00:
    if (ctx->pc == 0x1A7A00u) {
        ctx->pc = 0x1A7A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79FCu;
        // 0x1a7a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A04u;
        goto label_1a7a04;
    }
    ctx->pc = 0x1A79FCu;
    SET_GPR_U32(ctx, 31, 0x1A7A04u);
    ctx->pc = 0x1A7A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A79FCu;
    // 0x1a7a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    { ctx->pc = 0x1a72d8; return; }
    ctx->pc = 0x1A7A04u;
label_1a7a04:
    // 0x1a7a04: 0x10000017  b           . + 4 + (0x17 << 2)
label_1a7a08:
    if (ctx->pc == 0x1A7A08u) {
        ctx->pc = 0x1A7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A04u;
        // 0x1a7a08: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A0Cu;
        goto label_1a7a0c;
    }
    ctx->pc = 0x1A7A04u;
    {
        const bool branch_taken_0x1a7a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A04u;
        // 0x1a7a08: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a04) {
            ctx->pc = 0x1A7A64u;
            goto label_1a7a64;
        }
    }
    ctx->pc = 0x1A7A0Cu;
label_1a7a0c:
    // 0x1a7a0c: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x1a7a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
label_1a7a10:
    // 0x1a7a10: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a7a14:
    // 0x1a7a14: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1a7a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a18:
    // 0x1a7a18: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a7a18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a1c:
    // 0x1a7a1c: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1a7a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a7a20:
    // 0x1a7a20: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1a7a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
label_1a7a24:
    // 0x1a7a24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a28:
    // 0x1a7a28: 0xc069b84  jal         func_1A6E10
label_1a7a2c:
    if (ctx->pc == 0x1A7A2Cu) {
        ctx->pc = 0x1A7A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A28u;
        // 0x1a7a2c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A30u;
        goto label_1a7a30;
    }
    ctx->pc = 0x1A7A28u;
    SET_GPR_U32(ctx, 31, 0x1A7A30u);
    ctx->pc = 0x1A7A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A28u;
    // 0x1a7a2c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    { ctx->pc = 0x1a6e10; return; }
    ctx->pc = 0x1A7A30u;
label_1a7a30:
    // 0x1a7a30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a7a34:
    if (ctx->pc == 0x1A7A34u) {
        ctx->pc = 0x1A7A38u;
        goto label_1a7a38;
    }
    ctx->pc = 0x1A7A30u;
    {
        const bool branch_taken_0x1a7a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7a30) {
            ctx->pc = 0x1A7A50u;
            goto label_1a7a50;
        }
    }
    ctx->pc = 0x1A7A38u;
label_1a7a38:
    // 0x1a7a38: 0xc06920c  jal         func_1A4830
label_1a7a3c:
    if (ctx->pc == 0x1A7A3Cu) {
        ctx->pc = 0x1A7A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A38u;
        // 0x1a7a3c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A40u;
        goto label_1a7a40;
    }
    ctx->pc = 0x1A7A38u;
    SET_GPR_U32(ctx, 31, 0x1A7A40u);
    ctx->pc = 0x1A7A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A38u;
    // 0x1a7a3c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A7A40u;
label_1a7a40:
    // 0x1a7a40: 0xc069cb6  jal         func_1A72D8
label_1a7a44:
    if (ctx->pc == 0x1A7A44u) {
        ctx->pc = 0x1A7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A40u;
        // 0x1a7a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A48u;
        goto label_1a7a48;
    }
    ctx->pc = 0x1A7A40u;
    SET_GPR_U32(ctx, 31, 0x1A7A48u);
    ctx->pc = 0x1A7A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A40u;
    // 0x1a7a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72D8u;
    { ctx->pc = 0x1a72d8; return; }
    ctx->pc = 0x1A7A48u;
label_1a7a48:
    // 0x1a7a48: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a7a4c:
    if (ctx->pc == 0x1A7A4Cu) {
        ctx->pc = 0x1A7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A48u;
        // 0x1a7a4c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A50u;
        goto label_1a7a50;
    }
    ctx->pc = 0x1A7A48u;
    {
        const bool branch_taken_0x1a7a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A48u;
        // 0x1a7a4c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7a48) {
            ctx->pc = 0x1A7A64u;
            goto label_1a7a64;
        }
    }
    ctx->pc = 0x1A7A50u;
label_1a7a50:
    // 0x1a7a50: 0xc069218  jal         func_1A4860
label_1a7a54:
    if (ctx->pc == 0x1A7A54u) {
        ctx->pc = 0x1A7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A50u;
        // 0x1a7a54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A58u;
        goto label_1a7a58;
    }
    ctx->pc = 0x1A7A50u;
    SET_GPR_U32(ctx, 31, 0x1A7A58u);
    ctx->pc = 0x1A7A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A50u;
    // 0x1a7a54: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A7A58u;
label_1a7a58:
    // 0x1a7a58: 0xc06920c  jal         func_1A4830
label_1a7a5c:
    if (ctx->pc == 0x1A7A5Cu) {
        ctx->pc = 0x1A7A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A58u;
        // 0x1a7a5c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A60u;
        goto label_1a7a60;
    }
    ctx->pc = 0x1A7A58u;
    SET_GPR_U32(ctx, 31, 0x1A7A60u);
    ctx->pc = 0x1A7A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7A58u;
    // 0x1a7a5c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1A7A60u;
label_1a7a60:
    // 0x1a7a60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7a64:
    // 0x1a7a64: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a7a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a7a68:
    // 0x1a7a68: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1a7a68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a7a6c:
    // 0x1a7a6c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1a7a6cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a7a70:
    // 0x1a7a70: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1a7a70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a7a74:
    // 0x1a7a74: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1a7a74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a7a78:
    // 0x1a7a78: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a7a78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a7a7c:
    // 0x1a7a7c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a7a7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a7a80:
    // 0x1a7a80: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a7a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7a84:
    // 0x1a7a84: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a7a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a7a88:
    // 0x1a7a88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a7a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7a8c:
    // 0x1a7a8c: 0x3e00008  jr          $ra
label_1a7a90:
    if (ctx->pc == 0x1A7A90u) {
        ctx->pc = 0x1A7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A8Cu;
        // 0x1a7a90: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7A94u;
        goto label_1a7a94;
    }
    ctx->pc = 0x1A7A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7A8Cu;
        // 0x1a7a90: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7A94u;
label_1a7a94:
    // 0x1a7a94: 0x0  nop
    ctx->pc = 0x1a7a94u;
    // NOP
label_1a7a98:
    // 0x1a7a98: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1a7a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a7a9c:
    // 0x1a7a9c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1a7aa0:
    if (ctx->pc == 0x1A7AA0u) {
        ctx->pc = 0x1A7AA4u;
        goto label_1a7aa4;
    }
    ctx->pc = 0x1A7A9Cu;
    {
        const bool branch_taken_0x1a7a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7a9c) {
            ctx->pc = 0x1A7AC4u;
            goto label_1a7ac4;
        }
    }
    ctx->pc = 0x1A7AA4u;
label_1a7aa4:
    // 0x1a7aa4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a7aa8:
    // 0x1a7aa8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1a7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1a7aac:
    // 0x1a7aac: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1a7ab0:
    if (ctx->pc == 0x1A7AB0u) {
        ctx->pc = 0x1A7AB4u;
        goto label_1a7ab4;
    }
    ctx->pc = 0x1A7AACu;
    {
        const bool branch_taken_0x1a7aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7aac) {
            ctx->pc = 0x1A7AC4u;
            goto label_1a7ac4;
        }
    }
    ctx->pc = 0x1A7AB4u;
label_1a7ab4:
    // 0x1a7ab4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1a7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1a7ab8:
    // 0x1a7ab8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a7ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a7abc:
    // 0x1a7abc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a7ac0:
    if (ctx->pc == 0x1A7AC0u) {
        ctx->pc = 0x1A7AC4u;
        goto label_1a7ac4;
    }
    ctx->pc = 0x1A7ABCu;
    {
        const bool branch_taken_0x1a7abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7abc) {
            ctx->pc = 0x1A7ACCu;
            goto label_1a7acc;
        }
    }
    ctx->pc = 0x1A7AC4u;
label_1a7ac4:
    // 0x1a7ac4: 0x3e00008  jr          $ra
label_1a7ac8:
    if (ctx->pc == 0x1A7AC8u) {
        ctx->pc = 0x1A7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AC4u;
        // 0x1a7ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7ACCu;
        goto label_1a7acc;
    }
    ctx->pc = 0x1A7AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AC4u;
        // 0x1a7ac8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7ACCu;
label_1a7acc:
    // 0x1a7acc: 0x3e00008  jr          $ra
label_1a7ad0:
    if (ctx->pc == 0x1A7AD0u) {
        ctx->pc = 0x1A7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7ACCu;
        // 0x1a7ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7AD4u;
        goto label_1a7ad4;
    }
    ctx->pc = 0x1A7ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7ACCu;
        // 0x1a7ad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7AD4u;
label_1a7ad4:
    // 0x1a7ad4: 0x0  nop
    ctx->pc = 0x1a7ad4u;
    // NOP
label_1a7ad8:
    // 0x1a7ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a7adc:
    // 0x1a7adc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a7ae0:
    // 0x1a7ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a7ae4:
    // 0x1a7ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ae8:
    // 0x1a7ae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a7aec:
    // 0x1a7aec: 0xc06b518  jal         func_1AD460
label_1a7af0:
    if (ctx->pc == 0x1A7AF0u) {
        ctx->pc = 0x1A7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7AECu;
        // 0x1a7af0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7AF4u;
        goto label_1a7af4;
    }
    ctx->pc = 0x1A7AECu;
    SET_GPR_U32(ctx, 31, 0x1A7AF4u);
    ctx->pc = 0x1A7AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7AECu;
    // 0x1a7af0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A7AF4u;
label_1a7af4:
    // 0x1a7af4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a7af8:
    // 0x1a7af8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1a7af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1a7afc:
    // 0x1a7afc: 0x246331c0  addiu       $v1, $v1, 0x31C0
    ctx->pc = 0x1a7afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12736));
label_1a7b00:
    // 0x1a7b00: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a7b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1a7b04:
    // 0x1a7b04: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1a7b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1a7b08:
    // 0x1a7b08: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1a7b0c:
    // 0x1a7b0c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a7b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1a7b10:
    // 0x1a7b10: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1a7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1a7b14:
    // 0x1a7b14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a7b18:
    if (ctx->pc == 0x1A7B18u) {
        ctx->pc = 0x1A7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B14u;
        // 0x1a7b18: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7B1Cu;
        goto label_1a7b1c;
    }
    ctx->pc = 0x1A7B14u;
    {
        const bool branch_taken_0x1a7b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B14u;
        // 0x1a7b18: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b14) {
            ctx->pc = 0x1A7B24u;
            goto label_1a7b24;
        }
    }
    ctx->pc = 0x1A7B1Cu;
label_1a7b1c:
    // 0x1a7b1c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a7b20:
    if (ctx->pc == 0x1A7B20u) {
        ctx->pc = 0x1A7B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B1Cu;
        // 0x1a7b20: 0xac710028  sw          $s1, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7B24u;
        goto label_1a7b24;
    }
    ctx->pc = 0x1A7B1Cu;
    {
        const bool branch_taken_0x1a7b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B1Cu;
        // 0x1a7b20: 0xac710028  sw          $s1, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7b1c) {
            ctx->pc = 0x1A7B58u;
            goto label_1a7b58;
        }
    }
    ctx->pc = 0x1A7B24u;
label_1a7b24:
    // 0x1a7b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b28:
    // 0x1a7b28: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1a7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1a7b2c:
    // 0x1a7b2c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_1a7b30:
    if (ctx->pc == 0x1A7B30u) {
        ctx->pc = 0x1A7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B2Cu;
        // 0x1a7b30: 0xac910014  sw          $s1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7B34u;
        goto label_1a7b34;
    }
    ctx->pc = 0x1A7B2Cu;
    {
        const bool branch_taken_0x1a7b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7b2c) {
            ctx->pc = 0x1A7B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7B2Cu;
            // 0x1a7b30: 0xac910014  sw          $s1, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7B58u;
            goto label_1a7b58;
        }
    }
    ctx->pc = 0x1A7B34u;
label_1a7b34:
    // 0x1a7b34: 0x0  nop
    ctx->pc = 0x1a7b34u;
    // NOP
label_1a7b38:
    // 0x1a7b38: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a7b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b3c:
    // 0x1a7b3c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1a7b40:
    // 0x1a7b40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a7b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b44:
    // 0x1a7b44: 0x0  nop
    ctx->pc = 0x1a7b44u;
    // NOP
label_1a7b48:
    // 0x1a7b48: 0x0  nop
    ctx->pc = 0x1a7b48u;
    // NOP
label_1a7b4c:
    // 0x1a7b4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a7b50:
    if (ctx->pc == 0x1A7B50u) {
        ctx->pc = 0x1A7B54u;
        goto label_1a7b54;
    }
    ctx->pc = 0x1A7B4Cu;
    {
        const bool branch_taken_0x1a7b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7b4c) {
            ctx->pc = 0x1A7B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7b38;
        }
    }
    ctx->pc = 0x1A7B54u;
label_1a7b54:
    // 0x1a7b54: 0xac910014  sw          $s1, 0x14($a0)
    ctx->pc = 0x1a7b54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
label_1a7b58:
    // 0x1a7b58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7b5c:
    // 0x1a7b5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a7b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7b60:
    // 0x1a7b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7b64:
    // 0x1a7b64: 0x806b52a  j           func_1AD4A8
label_1a7b68:
    if (ctx->pc == 0x1A7B68u) {
        ctx->pc = 0x1A7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7B64u;
        // 0x1a7b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7B6Cu;
        goto label_1a7b6c;
    }
    ctx->pc = 0x1A7B64u;
    ctx->pc = 0x1A7B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7B64u;
    // 0x1a7b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A7B6Cu;
label_1a7b6c:
    // 0x1a7b6c: 0x0  nop
    ctx->pc = 0x1a7b6cu;
    // NOP
label_1a7b70:
    // 0x1a7b70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a7b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a7b74:
    // 0x1a7b74: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a7b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1a7b78:
    // 0x1a7b78: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a7b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a7b7c:
    // 0x1a7b7c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1a7b7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b80:
    // 0x1a7b80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a7b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a7b84:
    // 0x1a7b84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a7b84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b88:
    // 0x1a7b88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a7b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a7b8c:
    // 0x1a7b8c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1a7b8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b90:
    // 0x1a7b90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a7b94:
    // 0x1a7b94: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1a7b94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a7b98:
    // 0x1a7b98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a7b9c:
    // 0x1a7b9c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1a7b9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ba0:
    // 0x1a7ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a7ba4:
    // 0x1a7ba4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a7ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ba8:
    // 0x1a7ba8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a7ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a7bac:
    // 0x1a7bac: 0xc06b518  jal         func_1AD460
label_1a7bb0:
    if (ctx->pc == 0x1A7BB0u) {
        ctx->pc = 0x1A7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BACu;
        // 0x1a7bb0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7BB4u;
        goto label_1a7bb4;
    }
    ctx->pc = 0x1A7BACu;
    SET_GPR_U32(ctx, 31, 0x1A7BB4u);
    ctx->pc = 0x1A7BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7BACu;
    // 0x1a7bb0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A7BB4u;
label_1a7bb4:
    // 0x1a7bb4: 0xaea0003c  sw          $zero, 0x3C($s5)
    ctx->pc = 0x1a7bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 0));
label_1a7bb8:
    // 0x1a7bb8: 0xaea00038  sw          $zero, 0x38($s5)
    ctx->pc = 0x1a7bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 0));
label_1a7bbc:
    // 0x1a7bbc: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x1a7bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_1a7bc0:
    // 0x1a7bc0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1a7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1a7bc4:
    // 0x1a7bc4: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x1a7bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
label_1a7bc8:
    // 0x1a7bc8: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x1a7bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
label_1a7bcc:
    // 0x1a7bcc: 0xaeb30010  sw          $s3, 0x10($s5)
    ctx->pc = 0x1a7bccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 19));
label_1a7bd0:
    // 0x1a7bd0: 0xaeb40014  sw          $s4, 0x14($s5)
    ctx->pc = 0x1a7bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 20));
label_1a7bd4:
    // 0x1a7bd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a7bd8:
    if (ctx->pc == 0x1A7BD8u) {
        ctx->pc = 0x1A7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BD4u;
        // 0x1a7bd8: 0xaeb60040  sw          $s6, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7BDCu;
        goto label_1a7bdc;
    }
    ctx->pc = 0x1A7BD4u;
    {
        const bool branch_taken_0x1a7bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BD4u;
        // 0x1a7bd8: 0xaeb60040  sw          $s6, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7bd4) {
            ctx->pc = 0x1A7BE4u;
            goto label_1a7be4;
        }
    }
    ctx->pc = 0x1A7BDCu;
label_1a7bdc:
    // 0x1a7bdc: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a7be0:
    if (ctx->pc == 0x1A7BE0u) {
        ctx->pc = 0x1A7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BDCu;
        // 0x1a7be0: 0xaed50008  sw          $s5, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7BE4u;
        goto label_1a7be4;
    }
    ctx->pc = 0x1A7BDCu;
    {
        const bool branch_taken_0x1a7bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BDCu;
        // 0x1a7be0: 0xaed50008  sw          $s5, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7bdc) {
            ctx->pc = 0x1A7C18u;
            goto label_1a7c18;
        }
    }
    ctx->pc = 0x1A7BE4u;
label_1a7be4:
    // 0x1a7be4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a7be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7be8:
    // 0x1a7be8: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1a7be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1a7bec:
    // 0x1a7bec: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_1a7bf0:
    if (ctx->pc == 0x1A7BF0u) {
        ctx->pc = 0x1A7BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7BECu;
        // 0x1a7bf0: 0xac950038  sw          $s5, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7BF4u;
        goto label_1a7bf4;
    }
    ctx->pc = 0x1A7BECu;
    {
        const bool branch_taken_0x1a7bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7bec) {
            ctx->pc = 0x1A7BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7BECu;
            // 0x1a7bf0: 0xac950038  sw          $s5, 0x38($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7C18u;
            goto label_1a7c18;
        }
    }
    ctx->pc = 0x1A7BF4u;
label_1a7bf4:
    // 0x1a7bf4: 0x0  nop
    ctx->pc = 0x1a7bf4u;
    // NOP
label_1a7bf8:
    // 0x1a7bf8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a7bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a7bfc:
    // 0x1a7bfc: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1a7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1a7c00:
    // 0x1a7c00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a7c00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c04:
    // 0x1a7c04: 0x0  nop
    ctx->pc = 0x1a7c04u;
    // NOP
label_1a7c08:
    // 0x1a7c08: 0x0  nop
    ctx->pc = 0x1a7c08u;
    // NOP
label_1a7c0c:
    // 0x1a7c0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a7c10:
    if (ctx->pc == 0x1A7C10u) {
        ctx->pc = 0x1A7C14u;
        goto label_1a7c14;
    }
    ctx->pc = 0x1A7C0Cu;
    {
        const bool branch_taken_0x1a7c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c0c) {
            ctx->pc = 0x1A7BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7bf8;
        }
    }
    ctx->pc = 0x1A7C14u;
label_1a7c14:
    // 0x1a7c14: 0xac950038  sw          $s5, 0x38($a0)
    ctx->pc = 0x1a7c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
label_1a7c18:
    // 0x1a7c18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a7c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a7c1c:
    // 0x1a7c1c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a7c1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a7c20:
    // 0x1a7c20: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a7c20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a7c24:
    // 0x1a7c24: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a7c24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7c28:
    // 0x1a7c28: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a7c28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a7c2c:
    // 0x1a7c2c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a7c2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7c30:
    // 0x1a7c30: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a7c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7c34:
    // 0x1a7c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7c38:
    // 0x1a7c38: 0x806b52a  j           func_1AD4A8
label_1a7c3c:
    if (ctx->pc == 0x1A7C3Cu) {
        ctx->pc = 0x1A7C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C38u;
        // 0x1a7c3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7C40u;
        goto label_1a7c40;
    }
    ctx->pc = 0x1A7C38u;
    ctx->pc = 0x1A7C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C38u;
    // 0x1a7c3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A7C40u;
label_1a7c40:
    // 0x1a7c40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a7c44:
    // 0x1a7c44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a7c48:
    // 0x1a7c48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a7c4c:
    // 0x1a7c4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a7c4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c50:
    // 0x1a7c50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a7c54:
    // 0x1a7c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a7c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a7c58:
    // 0x1a7c58: 0xc06b518  jal         func_1AD460
label_1a7c5c:
    if (ctx->pc == 0x1A7C5Cu) {
        ctx->pc = 0x1A7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C58u;
        // 0x1a7c5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7C60u;
        goto label_1a7c60;
    }
    ctx->pc = 0x1A7C58u;
    SET_GPR_U32(ctx, 31, 0x1A7C60u);
    ctx->pc = 0x1A7C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7C58u;
    // 0x1a7c5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A7C60u;
label_1a7c60:
    // 0x1a7c60: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1a7c60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1a7c64:
    // 0x1a7c64: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
label_1a7c68:
    if (ctx->pc == 0x1A7C68u) {
        ctx->pc = 0x1A7C6Cu;
        goto label_1a7c6c;
    }
    ctx->pc = 0x1A7C64u;
    {
        const bool branch_taken_0x1a7c64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a7c64) {
            ctx->pc = 0x1A7C78u;
            goto label_1a7c78;
        }
    }
    ctx->pc = 0x1A7C6Cu;
label_1a7c6c:
    // 0x1a7c6c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1a7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1a7c70:
    // 0x1a7c70: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a7c74:
    if (ctx->pc == 0x1A7C74u) {
        ctx->pc = 0x1A7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C70u;
        // 0x1a7c74: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7C78u;
        goto label_1a7c78;
    }
    ctx->pc = 0x1A7C70u;
    {
        const bool branch_taken_0x1a7c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C70u;
        // 0x1a7c74: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7c70) {
            ctx->pc = 0x1A7CB0u;
            goto label_1a7cb0;
        }
    }
    ctx->pc = 0x1A7C78u;
label_1a7c78:
    // 0x1a7c78: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1a7c7c:
    if (ctx->pc == 0x1A7C7Cu) {
        ctx->pc = 0x1A7C80u;
        goto label_1a7c80;
    }
    ctx->pc = 0x1A7C78u;
    {
        const bool branch_taken_0x1a7c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c78) {
            ctx->pc = 0x1A7CB0u;
            goto label_1a7cb0;
        }
    }
    ctx->pc = 0x1A7C80u;
label_1a7c80:
    // 0x1a7c80: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1a7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1a7c84:
    // 0x1a7c84: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
label_1a7c88:
    if (ctx->pc == 0x1A7C88u) {
        ctx->pc = 0x1A7C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7C84u;
        // 0x1a7c88: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7C8Cu;
        goto label_1a7c8c;
    }
    ctx->pc = 0x1A7C84u;
    {
        const bool branch_taken_0x1a7c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a7c84) {
            ctx->pc = 0x1A7C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7C84u;
            // 0x1a7c88: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7CACu;
            goto label_1a7cac;
        }
    }
    ctx->pc = 0x1A7C8Cu;
label_1a7c8c:
    // 0x1a7c8c: 0x0  nop
    ctx->pc = 0x1a7c8cu;
    // NOP
label_1a7c90:
    // 0x1a7c90: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1a7c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a7c94:
    // 0x1a7c94: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1a7c98:
    if (ctx->pc == 0x1A7C98u) {
        ctx->pc = 0x1A7C9Cu;
        goto label_1a7c9c;
    }
    ctx->pc = 0x1A7C94u;
    {
        const bool branch_taken_0x1a7c94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7c94) {
            ctx->pc = 0x1A7CB0u;
            goto label_1a7cb0;
        }
    }
    ctx->pc = 0x1A7C9Cu;
label_1a7c9c:
    // 0x1a7c9c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1a7c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1a7ca0:
    // 0x1a7ca0: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
label_1a7ca4:
    if (ctx->pc == 0x1A7CA4u) {
        ctx->pc = 0x1A7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CA0u;
        // 0x1a7ca4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7CA8u;
        goto label_1a7ca8;
    }
    ctx->pc = 0x1A7CA0u;
    {
        const bool branch_taken_0x1a7ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1A7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CA0u;
        // 0x1a7ca4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ca0) {
            ctx->pc = 0x1A7C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7c90;
        }
    }
    ctx->pc = 0x1A7CA8u;
label_1a7ca8:
    // 0x1a7ca8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1a7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1a7cac:
    // 0x1a7cac: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1a7cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1a7cb0:
    // 0x1a7cb0: 0xc06b52a  jal         func_1AD4A8
label_1a7cb4:
    if (ctx->pc == 0x1A7CB4u) {
        ctx->pc = 0x1A7CB8u;
        goto label_1a7cb8;
    }
    ctx->pc = 0x1A7CB0u;
    SET_GPR_U32(ctx, 31, 0x1A7CB8u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A7CB8u;
label_1a7cb8:
    // 0x1a7cb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a7cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7cbc:
    // 0x1a7cbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a7cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a7cc0:
    // 0x1a7cc0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a7cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7cc4:
    // 0x1a7cc4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a7cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7cc8:
    // 0x1a7cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7ccc:
    // 0x1a7ccc: 0x3e00008  jr          $ra
label_1a7cd0:
    if (ctx->pc == 0x1A7CD0u) {
        ctx->pc = 0x1A7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CCCu;
        // 0x1a7cd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7CD4u;
        goto label_1a7cd4;
    }
    ctx->pc = 0x1A7CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CCCu;
        // 0x1a7cd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7CD4u;
label_1a7cd4:
    // 0x1a7cd4: 0x0  nop
    ctx->pc = 0x1a7cd4u;
    // NOP
label_1a7cd8:
    // 0x1a7cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a7cdc:
    // 0x1a7cdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a7ce0:
    // 0x1a7ce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a7ce4:
    // 0x1a7ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a7ce8:
    // 0x1a7ce8: 0xc06b518  jal         func_1AD460
label_1a7cec:
    if (ctx->pc == 0x1A7CECu) {
        ctx->pc = 0x1A7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7CE8u;
        // 0x1a7cec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7CF0u;
        goto label_1a7cf0;
    }
    ctx->pc = 0x1A7CE8u;
    SET_GPR_U32(ctx, 31, 0x1A7CF0u);
    ctx->pc = 0x1A7CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7CE8u;
    // 0x1a7cec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A7CF0u;
label_1a7cf0:
    // 0x1a7cf0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a7cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a7cf4:
    // 0x1a7cf4: 0x246331c0  addiu       $v1, $v1, 0x31C0
    ctx->pc = 0x1a7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12736));
label_1a7cf8:
    // 0x1a7cf8: 0x8c700028  lw          $s0, 0x28($v1)
    ctx->pc = 0x1a7cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1a7cfc:
    // 0x1a7cfc: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
label_1a7d00:
    if (ctx->pc == 0x1A7D00u) {
        ctx->pc = 0x1A7D04u;
        goto label_1a7d04;
    }
    ctx->pc = 0x1A7CFCu;
    {
        const bool branch_taken_0x1a7cfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a7cfc) {
            ctx->pc = 0x1A7D10u;
            goto label_1a7d10;
        }
    }
    ctx->pc = 0x1A7D04u;
label_1a7d04:
    // 0x1a7d04: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a7d08:
    // 0x1a7d08: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a7d0c:
    if (ctx->pc == 0x1A7D0Cu) {
        ctx->pc = 0x1A7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D08u;
        // 0x1a7d0c: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D10u;
        goto label_1a7d10;
    }
    ctx->pc = 0x1A7D08u;
    {
        const bool branch_taken_0x1a7d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D08u;
        // 0x1a7d0c: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d08) {
            ctx->pc = 0x1A7D48u;
            goto label_1a7d48;
        }
    }
    ctx->pc = 0x1A7D10u;
label_1a7d10:
    // 0x1a7d10: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1a7d14:
    if (ctx->pc == 0x1A7D14u) {
        ctx->pc = 0x1A7D18u;
        goto label_1a7d18;
    }
    ctx->pc = 0x1A7D10u;
    {
        const bool branch_taken_0x1a7d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7d10) {
            ctx->pc = 0x1A7D48u;
            goto label_1a7d48;
        }
    }
    ctx->pc = 0x1A7D18u;
label_1a7d18:
    // 0x1a7d18: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a7d1c:
    // 0x1a7d1c: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
label_1a7d20:
    if (ctx->pc == 0x1A7D20u) {
        ctx->pc = 0x1A7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D1Cu;
        // 0x1a7d20: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D24u;
        goto label_1a7d24;
    }
    ctx->pc = 0x1A7D1Cu;
    {
        const bool branch_taken_0x1a7d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a7d1c) {
            ctx->pc = 0x1A7D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7D1Cu;
            // 0x1a7d20: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7D44u;
            goto label_1a7d44;
        }
    }
    ctx->pc = 0x1A7D24u;
label_1a7d24:
    // 0x1a7d24: 0x0  nop
    ctx->pc = 0x1a7d24u;
    // NOP
label_1a7d28:
    // 0x1a7d28: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1a7d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d2c:
    // 0x1a7d2c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1a7d30:
    if (ctx->pc == 0x1A7D30u) {
        ctx->pc = 0x1A7D34u;
        goto label_1a7d34;
    }
    ctx->pc = 0x1A7D2Cu;
    {
        const bool branch_taken_0x1a7d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7d2c) {
            ctx->pc = 0x1A7D48u;
            goto label_1a7d48;
        }
    }
    ctx->pc = 0x1A7D34u;
label_1a7d34:
    // 0x1a7d34: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a7d38:
    // 0x1a7d38: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
label_1a7d3c:
    if (ctx->pc == 0x1A7D3Cu) {
        ctx->pc = 0x1A7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D38u;
        // 0x1a7d3c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D40u;
        goto label_1a7d40;
    }
    ctx->pc = 0x1A7D38u;
    {
        const bool branch_taken_0x1a7d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1A7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D38u;
        // 0x1a7d3c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d38) {
            ctx->pc = 0x1A7D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7d28;
        }
    }
    ctx->pc = 0x1A7D40u;
label_1a7d40:
    // 0x1a7d40: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1a7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a7d44:
    // 0x1a7d44: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1a7d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_1a7d48:
    // 0x1a7d48: 0xc06b52a  jal         func_1AD4A8
label_1a7d4c:
    if (ctx->pc == 0x1A7D4Cu) {
        ctx->pc = 0x1A7D50u;
        goto label_1a7d50;
    }
    ctx->pc = 0x1A7D48u;
    SET_GPR_U32(ctx, 31, 0x1A7D50u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A7D50u;
label_1a7d50:
    // 0x1a7d50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a7d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7d54:
    // 0x1a7d54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7d58:
    // 0x1a7d58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a7d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7d5c:
    // 0x1a7d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7d60:
    // 0x1a7d60: 0x3e00008  jr          $ra
label_1a7d64:
    if (ctx->pc == 0x1A7D64u) {
        ctx->pc = 0x1A7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D60u;
        // 0x1a7d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D68u;
        goto label_1a7d68;
    }
    ctx->pc = 0x1A7D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D60u;
        // 0x1a7d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7D68u;
label_1a7d68:
    // 0x1a7d68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a7d6c:
    // 0x1a7d6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a7d70:
    // 0x1a7d70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a7d74:
    // 0x1a7d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a7d78:
    // 0x1a7d78: 0xc06b518  jal         func_1AD460
label_1a7d7c:
    if (ctx->pc == 0x1A7D7Cu) {
        ctx->pc = 0x1A7D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D78u;
        // 0x1a7d7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D80u;
        goto label_1a7d80;
    }
    ctx->pc = 0x1A7D78u;
    SET_GPR_U32(ctx, 31, 0x1A7D80u);
    ctx->pc = 0x1A7D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7D78u;
    // 0x1a7d7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A7D80u;
label_1a7d80:
    // 0x1a7d80: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x1a7d80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a7d84:
    // 0x1a7d84: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_1a7d88:
    if (ctx->pc == 0x1A7D88u) {
        ctx->pc = 0x1A7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D84u;
        // 0x1a7d88: 0x8e23003c  lw          $v1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D8Cu;
        goto label_1a7d8c;
    }
    ctx->pc = 0x1A7D84u;
    {
        const bool branch_taken_0x1a7d84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7d84) {
            ctx->pc = 0x1A7D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7D84u;
            // 0x1a7d88: 0x8e23003c  lw          $v1, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7D94u;
            goto label_1a7d94;
        }
    }
    ctx->pc = 0x1A7D8Cu;
label_1a7d8c:
    // 0x1a7d8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a7d90:
    if (ctx->pc == 0x1A7D90u) {
        ctx->pc = 0x1A7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D8Cu;
        // 0x1a7d90: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7D94u;
        goto label_1a7d94;
    }
    ctx->pc = 0x1A7D8Cu;
    {
        const bool branch_taken_0x1a7d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7D8Cu;
        // 0x1a7d90: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7d8c) {
            ctx->pc = 0x1A7DA0u;
            goto label_1a7da0;
        }
    }
    ctx->pc = 0x1A7D94u;
label_1a7d94:
    // 0x1a7d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7d98:
    // 0x1a7d98: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a7d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a7d9c:
    // 0x1a7d9c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a7d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a7da0:
    // 0x1a7da0: 0xc06b52a  jal         func_1AD4A8
label_1a7da4:
    if (ctx->pc == 0x1A7DA4u) {
        ctx->pc = 0x1A7DA8u;
        goto label_1a7da8;
    }
    ctx->pc = 0x1A7DA0u;
    SET_GPR_U32(ctx, 31, 0x1A7DA8u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A7DA8u;
label_1a7da8:
    // 0x1a7da8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a7da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7dac:
    // 0x1a7dac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7db0:
    // 0x1a7db0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a7db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7db4:
    // 0x1a7db4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7db8:
    // 0x1a7db8: 0x3e00008  jr          $ra
label_1a7dbc:
    if (ctx->pc == 0x1A7DBCu) {
        ctx->pc = 0x1A7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DB8u;
        // 0x1a7dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7DC0u;
        goto label_1a7dc0;
    }
    ctx->pc = 0x1A7DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DB8u;
        // 0x1a7dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7DC0u;
label_1a7dc0:
    // 0x1a7dc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a7dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a7dc4:
    // 0x1a7dc4: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a7dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1a7dc8:
    // 0x1a7dc8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a7dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a7dcc:
    // 0x1a7dcc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a7dccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7dd0:
    // 0x1a7dd0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a7dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1a7dd4:
    // 0x1a7dd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a7dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a7dd8:
    // 0x1a7dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ddc:
    // 0x1a7ddc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a7ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a7de0:
    // 0x1a7de0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a7de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a7de4:
    // 0x1a7de4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a7de8:
    // 0x1a7de8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1a7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1a7dec:
    // 0x1a7dec: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1a7decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a7df0:
    // 0x1a7df0: 0x40f809  jalr        $v0
label_1a7df4:
    if (ctx->pc == 0x1A7DF4u) {
        ctx->pc = 0x1A7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DF0u;
        // 0x1a7df4: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7DF8u;
        goto label_1a7df8;
    }
    ctx->pc = 0x1A7DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A7DF8u);
        ctx->pc = 0x1A7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DF0u;
        // 0x1a7df4: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7DF0u, 0x1A7DF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7DF8u;
label_1a7df8:
    // 0x1a7df8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a7df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7dfc:
    // 0x1a7dfc: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
label_1a7e00:
    if (ctx->pc == 0x1A7E00u) {
        ctx->pc = 0x1A7E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7DFCu;
        // 0x1a7e00: 0x8e34002c  lw          $s4, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E04u;
        goto label_1a7e04;
    }
    ctx->pc = 0x1A7DFCu;
    {
        const bool branch_taken_0x1a7dfc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7dfc) {
            ctx->pc = 0x1A7E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7DFCu;
            // 0x1a7e00: 0x8e34002c  lw          $s4, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7E04u;
            goto label_1a7e04;
        }
    }
    ctx->pc = 0x1A7E04u;
label_1a7e04:
    // 0x1a7e04: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1a7e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a7e08:
    // 0x1a7e08: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_1a7e0c:
    if (ctx->pc == 0x1A7E0Cu) {
        ctx->pc = 0x1A7E10u;
        goto label_1a7e10;
    }
    ctx->pc = 0x1A7E08u;
    {
        const bool branch_taken_0x1a7e08 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1a7e08) {
            ctx->pc = 0x1A7E18u;
            goto label_1a7e18;
        }
    }
    ctx->pc = 0x1A7E10u;
label_1a7e10:
    // 0x1a7e10: 0xc069bee  jal         func_1A6FB8
label_1a7e14:
    if (ctx->pc == 0x1A7E14u) {
        ctx->pc = 0x1A7E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E10u;
        // 0x1a7e14: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E18u;
        goto label_1a7e18;
    }
    ctx->pc = 0x1A7E10u;
    SET_GPR_U32(ctx, 31, 0x1A7E18u);
    ctx->pc = 0x1A7E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E10u;
    // 0x1a7e14: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A7E18u;
label_1a7e18:
    // 0x1a7e18: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
label_1a7e1c:
    if (ctx->pc == 0x1A7E1Cu) {
        ctx->pc = 0x1A7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E18u;
        // 0x1a7e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E20u;
        goto label_1a7e20;
    }
    ctx->pc = 0x1A7E18u;
    {
        const bool branch_taken_0x1a7e18 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1A7E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E18u;
        // 0x1a7e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e18) {
            ctx->pc = 0x1A7E28u;
            goto label_1a7e28;
        }
    }
    ctx->pc = 0x1A7E20u;
label_1a7e20:
    // 0x1a7e20: 0xc069bee  jal         func_1A6FB8
label_1a7e24:
    if (ctx->pc == 0x1A7E24u) {
        ctx->pc = 0x1A7E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E20u;
        // 0x1a7e24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E28u;
        goto label_1a7e28;
    }
    ctx->pc = 0x1A7E20u;
    SET_GPR_U32(ctx, 31, 0x1A7E28u);
    ctx->pc = 0x1A7E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E20u;
    // 0x1a7e24: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1A7E28u;
label_1a7e28:
    // 0x1a7e28: 0xc06b518  jal         func_1AD460
label_1a7e2c:
    if (ctx->pc == 0x1A7E2Cu) {
        ctx->pc = 0x1A7E30u;
        goto label_1a7e30;
    }
    ctx->pc = 0x1A7E28u;
    SET_GPR_U32(ctx, 31, 0x1A7E30u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A7E30u;
label_1a7e30:
    // 0x1a7e30: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1a7e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1a7e34:
    // 0x1a7e34: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1a7e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_1a7e38:
    // 0x1a7e38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a7e3c:
    if (ctx->pc == 0x1A7E3Cu) {
        ctx->pc = 0x1A7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E38u;
        // 0x1a7e3c: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E40u;
        goto label_1a7e40;
    }
    ctx->pc = 0x1A7E38u;
    {
        const bool branch_taken_0x1a7e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E38u;
        // 0x1a7e3c: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e38) {
            ctx->pc = 0x1A7E54u;
            goto label_1a7e54;
        }
    }
    ctx->pc = 0x1A7E40u;
label_1a7e40:
    // 0x1a7e40: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a7e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a7e44:
    // 0x1a7e44: 0xc069cca  jal         func_1A7328
label_1a7e48:
    if (ctx->pc == 0x1A7E48u) {
        ctx->pc = 0x1A7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E44u;
        // 0x1a7e48: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E4Cu;
        goto label_1a7e4c;
    }
    ctx->pc = 0x1A7E44u;
    SET_GPR_U32(ctx, 31, 0x1A7E4Cu);
    ctx->pc = 0x1A7E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E44u;
    // 0x1a7e48: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7328u;
    { ctx->pc = 0x1a7328; return; }
    ctx->pc = 0x1A7E4Cu;
label_1a7e4c:
    // 0x1a7e4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a7e50:
    if (ctx->pc == 0x1A7E50u) {
        ctx->pc = 0x1A7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E4Cu;
        // 0x1a7e50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E54u;
        goto label_1a7e54;
    }
    ctx->pc = 0x1A7E4Cu;
    {
        const bool branch_taken_0x1a7e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E4Cu;
        // 0x1a7e50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7e4c) {
            ctx->pc = 0x1A7E64u;
            goto label_1a7e64;
        }
    }
    ctx->pc = 0x1A7E54u;
label_1a7e54:
    // 0x1a7e54: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a7e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a7e58:
    // 0x1a7e58: 0xc069cbe  jal         func_1A72F8
label_1a7e5c:
    if (ctx->pc == 0x1A7E5Cu) {
        ctx->pc = 0x1A7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E58u;
        // 0x1a7e5c: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E60u;
        goto label_1a7e60;
    }
    ctx->pc = 0x1A7E58u;
    SET_GPR_U32(ctx, 31, 0x1A7E60u);
    ctx->pc = 0x1A7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7E58u;
    // 0x1a7e5c: 0x248431c0  addiu       $a0, $a0, 0x31C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72F8u;
    { ctx->pc = 0x1a72f8; return; }
    ctx->pc = 0x1A7E60u;
label_1a7e60:
    // 0x1a7e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a7e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7e64:
    // 0x1a7e64: 0xc06b52a  jal         func_1AD4A8
label_1a7e68:
    if (ctx->pc == 0x1A7E68u) {
        ctx->pc = 0x1A7E6Cu;
        goto label_1a7e6c;
    }
    ctx->pc = 0x1A7E64u;
    SET_GPR_U32(ctx, 31, 0x1A7E6Cu);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A7E6Cu;
label_1a7e6c:
    // 0x1a7e6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1a7e70:
    // 0x1a7e70: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1a7e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1a7e74:
    // 0x1a7e74: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x1a7e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_1a7e78:
    // 0x1a7e78: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a7e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1a7e7c:
    // 0x1a7e7c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1a7e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_1a7e80:
    // 0x1a7e80: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1a7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1a7e84:
    // 0x1a7e84: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1a7e88:
    if (ctx->pc == 0x1A7E88u) {
        ctx->pc = 0x1A7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7E84u;
        // 0x1a7e88: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7E8Cu;
        goto label_1a7e8c;
    }
    ctx->pc = 0x1A7E84u;
    {
        const bool branch_taken_0x1a7e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7e84) {
            ctx->pc = 0x1A7E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7E84u;
            // 0x1a7e88: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7EC0u;
            goto label_1a7ec0;
        }
    }
    ctx->pc = 0x1A7E8Cu;
label_1a7e8c:
    // 0x1a7e8c: 0x0  nop
    ctx->pc = 0x1a7e8cu;
    // NOP
label_1a7e90:
    // 0x1a7e90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a7e94:
    // 0x1a7e94: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x1a7e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1a7e98:
    // 0x1a7e98: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1a7e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_1a7e9c:
    // 0x1a7e9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ea0:
    // 0x1a7ea0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1a7ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a7ea4:
    // 0x1a7ea4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a7ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ea8:
    // 0x1a7ea8: 0xc069b84  jal         func_1A6E10
label_1a7eac:
    if (ctx->pc == 0x1A7EACu) {
        ctx->pc = 0x1A7EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EA8u;
        // 0x1a7eac: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7EB0u;
        goto label_1a7eb0;
    }
    ctx->pc = 0x1A7EA8u;
    SET_GPR_U32(ctx, 31, 0x1A7EB0u);
    ctx->pc = 0x1A7EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7EA8u;
    // 0x1a7eac: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    { ctx->pc = 0x1a6e10; return; }
    ctx->pc = 0x1A7EB0u;
label_1a7eb0:
    // 0x1a7eb0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1a7eb4:
    if (ctx->pc == 0x1A7EB4u) {
        ctx->pc = 0x1A7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EB0u;
        // 0x1a7eb4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7EB8u;
        goto label_1a7eb8;
    }
    ctx->pc = 0x1A7EB0u;
    {
        const bool branch_taken_0x1a7eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EB0u;
        // 0x1a7eb4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7eb0) {
            ctx->pc = 0x1A7E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7e90;
        }
    }
    ctx->pc = 0x1A7EB8u;
label_1a7eb8:
    // 0x1a7eb8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1a7ebc:
    if (ctx->pc == 0x1A7EBCu) {
        ctx->pc = 0x1A7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EB8u;
        // 0x1a7ebc: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7EC0u;
        goto label_1a7ec0;
    }
    ctx->pc = 0x1A7EB8u;
    {
        const bool branch_taken_0x1a7eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EB8u;
        // 0x1a7ebc: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7eb8) {
            ctx->pc = 0x1A7F6Cu;
            goto label_1a7f6c;
        }
    }
    ctx->pc = 0x1A7EC0u;
label_1a7ec0:
    // 0x1a7ec0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a7ec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ec4:
    // 0x1a7ec4: 0x1a800007  blez        $s4, . + 4 + (0x7 << 2)
label_1a7ec8:
    if (ctx->pc == 0x1A7EC8u) {
        ctx->pc = 0x1A7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EC4u;
        // 0x1a7ec8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7ECCu;
        goto label_1a7ecc;
    }
    ctx->pc = 0x1A7EC4u;
    {
        const bool branch_taken_0x1a7ec4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1A7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7EC4u;
        // 0x1a7ec8: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7ec4) {
            ctx->pc = 0x1A7EE4u;
            goto label_1a7ee4;
        }
    }
    ctx->pc = 0x1A7ECCu;
label_1a7ecc:
    // 0x1a7ecc: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1a7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1a7ed0:
    // 0x1a7ed0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a7ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7ed4:
    // 0x1a7ed4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1a7ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_1a7ed8:
    // 0x1a7ed8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a7ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1a7edc:
    // 0x1a7edc: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x1a7edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
label_1a7ee0:
    // 0x1a7ee0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1a7ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_1a7ee4:
    // 0x1a7ee4: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x1a7ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1a7ee8:
    // 0x1a7ee8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1a7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1a7eec:
    // 0x1a7eec: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1a7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_1a7ef0:
    // 0x1a7ef0: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1a7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1a7ef4:
    // 0x1a7ef4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1a7ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1a7ef8:
    // 0x1a7ef8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a7efc:
    // 0x1a7efc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a7efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a7f00:
    // 0x1a7f00: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1a7f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1a7f04:
    // 0x1a7f04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a7f08:
    // 0x1a7f08: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1a7f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a7f0c:
    // 0x1a7f0c: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x1a7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1a7f10:
    // 0x1a7f10: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1a7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1a7f14:
    // 0x1a7f14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a7f18:
    // 0x1a7f18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a7f18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a7f1c:
    // 0x1a7f1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a7f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a7f20:
    // 0x1a7f20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a7f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a7f24:
    // 0x1a7f24: 0x0  nop
    ctx->pc = 0x1a7f24u;
    // NOP
label_1a7f28:
    // 0x1a7f28: 0xc0692f8  jal         func_1A4BE0
label_1a7f2c:
    if (ctx->pc == 0x1A7F2Cu) {
        ctx->pc = 0x1A7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F28u;
        // 0x1a7f2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7F30u;
        goto label_1a7f30;
    }
    ctx->pc = 0x1A7F28u;
    SET_GPR_U32(ctx, 31, 0x1A7F30u);
    ctx->pc = 0x1A7F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7F28u;
    // 0x1a7f2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    { ctx->pc = 0x1a4be0; return; }
    ctx->pc = 0x1A7F30u;
label_1a7f30:
    // 0x1a7f30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1a7f34:
    if (ctx->pc == 0x1A7F34u) {
        ctx->pc = 0x1A7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F30u;
        // 0x1a7f34: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7F38u;
        goto label_1a7f38;
    }
    ctx->pc = 0x1A7F30u;
    {
        const bool branch_taken_0x1a7f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F30u;
        // 0x1a7f34: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f30) {
            ctx->pc = 0x1A7F68u;
            goto label_1a7f68;
        }
    }
    ctx->pc = 0x1A7F38u;
label_1a7f38:
    // 0x1a7f38: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1a7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_1a7f3c:
    // 0x1a7f3c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a7f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a7f40:
    // 0x1a7f40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a7f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1a7f44:
    // 0x1a7f44: 0x0  nop
    ctx->pc = 0x1a7f44u;
    // NOP
label_1a7f48:
    // 0x1a7f48: 0x0  nop
    ctx->pc = 0x1a7f48u;
    // NOP
label_1a7f4c:
    // 0x1a7f4c: 0x0  nop
    ctx->pc = 0x1a7f4cu;
    // NOP
label_1a7f50:
    // 0x1a7f50: 0x0  nop
    ctx->pc = 0x1a7f50u;
    // NOP
label_1a7f54:
    // 0x1a7f54: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
label_1a7f58:
    if (ctx->pc == 0x1A7F58u) {
        ctx->pc = 0x1A7F5Cu;
        goto label_1a7f5c;
    }
    ctx->pc = 0x1A7F54u;
    {
        const bool branch_taken_0x1a7f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a7f54) {
            ctx->pc = 0x1A7F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7f40;
        }
    }
    ctx->pc = 0x1A7F5Cu;
label_1a7f5c:
    // 0x1a7f5c: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
label_1a7f60:
    if (ctx->pc == 0x1A7F60u) {
        ctx->pc = 0x1A7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F5Cu;
        // 0x1a7f60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7F64u;
        goto label_1a7f64;
    }
    ctx->pc = 0x1A7F5Cu;
    {
        const bool branch_taken_0x1a7f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7f5c) {
            ctx->pc = 0x1A7F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7F5Cu;
            // 0x1a7f60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7f28;
        }
    }
    ctx->pc = 0x1A7F64u;
label_1a7f64:
    // 0x1a7f64: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a7f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a7f68:
    // 0x1a7f68: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a7f68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a7f6c:
    // 0x1a7f6c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a7f6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a7f70:
    // 0x1a7f70: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a7f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7f74:
    // 0x1a7f74: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a7f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a7f78:
    // 0x1a7f78: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a7f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7f7c:
    // 0x1a7f7c: 0x3e00008  jr          $ra
label_1a7f80:
    if (ctx->pc == 0x1A7F80u) {
        ctx->pc = 0x1A7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F7Cu;
        // 0x1a7f80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7F84u;
        goto label_1a7f84;
    }
    ctx->pc = 0x1A7F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F7Cu;
        // 0x1a7f80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7F84u;
label_1a7f84:
    // 0x1a7f84: 0x0  nop
    ctx->pc = 0x1a7f84u;
    // NOP
label_1a7f88:
    // 0x1a7f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a7f8c:
    // 0x1a7f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a7f90:
    // 0x1a7f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a7f94:
    // 0x1a7f94: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a7f98:
    if (ctx->pc == 0x1A7F98u) {
        ctx->pc = 0x1A7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F94u;
        // 0x1a7f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7F9Cu;
        goto label_1a7f9c;
    }
    ctx->pc = 0x1A7F94u;
    {
        const bool branch_taken_0x1a7f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7F94u;
        // 0x1a7f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7f94) {
            ctx->pc = 0x1A7FA8u;
            goto label_1a7fa8;
        }
    }
    ctx->pc = 0x1A7F9Cu;
label_1a7f9c:
    // 0x1a7f9c: 0x0  nop
    ctx->pc = 0x1a7f9cu;
    // NOP
label_1a7fa0:
    // 0x1a7fa0: 0xc069f70  jal         func_1A7DC0
label_1a7fa4:
    if (ctx->pc == 0x1A7FA4u) {
        ctx->pc = 0x1A7FA8u;
        goto label_1a7fa8;
    }
    ctx->pc = 0x1A7FA0u;
    SET_GPR_U32(ctx, 31, 0x1A7FA8u);
    ctx->pc = 0x1A7DC0u;
    goto label_1a7dc0;
    ctx->pc = 0x1A7FA8u;
label_1a7fa8:
    // 0x1a7fa8: 0xc069f5a  jal         func_1A7D68
label_1a7fac:
    if (ctx->pc == 0x1A7FACu) {
        ctx->pc = 0x1A7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FA8u;
        // 0x1a7fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7FB0u;
        goto label_1a7fb0;
    }
    ctx->pc = 0x1A7FA8u;
    SET_GPR_U32(ctx, 31, 0x1A7FB0u);
    ctx->pc = 0x1A7FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FA8u;
    // 0x1a7fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7D68u;
    goto label_1a7d68;
    ctx->pc = 0x1A7FB0u;
label_1a7fb0:
    // 0x1a7fb0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1a7fb4:
    if (ctx->pc == 0x1A7FB4u) {
        ctx->pc = 0x1A7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FB0u;
        // 0x1a7fb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7FB8u;
        goto label_1a7fb8;
    }
    ctx->pc = 0x1A7FB0u;
    {
        const bool branch_taken_0x1a7fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FB0u;
        // 0x1a7fb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fb0) {
            ctx->pc = 0x1A7FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7fa0;
        }
    }
    ctx->pc = 0x1A7FB8u;
label_1a7fb8:
    // 0x1a7fb8: 0xc0691d0  jal         func_1A4740
label_1a7fbc:
    if (ctx->pc == 0x1A7FBCu) {
        ctx->pc = 0x1A7FC0u;
        goto label_1a7fc0;
    }
    ctx->pc = 0x1A7FB8u;
    SET_GPR_U32(ctx, 31, 0x1A7FC0u);
    ctx->pc = 0x1A4740u;
    { ctx->pc = 0x1a4740; return; }
    ctx->pc = 0x1A7FC0u;
label_1a7fc0:
    // 0x1a7fc0: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1a7fc4:
    if (ctx->pc == 0x1A7FC4u) {
        ctx->pc = 0x1A7FC8u;
        goto label_1a7fc8;
    }
    ctx->pc = 0x1A7FC0u;
    {
        const bool branch_taken_0x1a7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7fc0) {
            ctx->pc = 0x1A7FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7fa8;
        }
    }
    ctx->pc = 0x1A7FC8u;
label_1a7fc8:
    // 0x1a7fc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a7fcc:
    // 0x1a7fcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a7fd0:
    // 0x1a7fd0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a7fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a7fd4:
    // 0x1a7fd4: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a7fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1a7fd8:
    // 0x1a7fd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a7fdc:
    // 0x1a7fdc: 0x8e025c00  lw          $v0, 0x5C00($s0)
    ctx->pc = 0x1a7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23552)));
label_1a7fe0:
    // 0x1a7fe0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_1a7fe4:
    if (ctx->pc == 0x1A7FE4u) {
        ctx->pc = 0x1A7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FE0u;
        // 0x1a7fe4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7FE8u;
        goto label_1a7fe8;
    }
    ctx->pc = 0x1A7FE0u;
    {
        const bool branch_taken_0x1a7fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FE0u;
        // 0x1a7fe4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fe0) {
            ctx->pc = 0x1A8018u;
            goto label_1a8018;
        }
    }
    ctx->pc = 0x1A7FE8u;
label_1a7fe8:
    // 0x1a7fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7fec:
    // 0x1a7fec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1a7ff0:
    // 0x1a7ff0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a7ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1a7ff4:
    // 0x1a7ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a7ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ff8:
    // 0x1a7ff8: 0xc069208  jal         func_1A4820
label_1a7ffc:
    if (ctx->pc == 0x1A7FFCu) {
        ctx->pc = 0x1A7FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FF8u;
        // 0x1a7ffc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8000u;
        goto label_1a8000;
    }
    ctx->pc = 0x1A7FF8u;
    SET_GPR_U32(ctx, 31, 0x1A8000u);
    ctx->pc = 0x1A7FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FF8u;
    // 0x1a7ffc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A8000u;
label_1a8000:
    // 0x1a8000: 0xae025c00  sw          $v0, 0x5C00($s0)
    ctx->pc = 0x1a8000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23552), GPR_U32(ctx, 2));
label_1a8004:
    // 0x1a8004: 0xc069208  jal         func_1A4820
label_1a8008:
    if (ctx->pc == 0x1A8008u) {
        ctx->pc = 0x1A8008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8004u;
        // 0x1a8008: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A800Cu;
        goto label_1a800c;
    }
    ctx->pc = 0x1A8004u;
    SET_GPR_U32(ctx, 31, 0x1A800Cu);
    ctx->pc = 0x1A8008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8004u;
    // 0x1a8008: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1A800Cu;
label_1a800c:
    // 0x1a800c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a800cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a8010:
    // 0x1a8010: 0xac625c04  sw          $v0, 0x5C04($v1)
    ctx->pc = 0x1a8010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23556), GPR_U32(ctx, 2));
label_1a8014:
    // 0x1a8014: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8018:
    // 0x1a8018: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a8018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a801c:
    // 0x1a801c: 0x3e00008  jr          $ra
label_1a8020:
    if (ctx->pc == 0x1A8020u) {
        ctx->pc = 0x1A8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A801Cu;
        // 0x1a8020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8024u;
        goto label_1a8024;
    }
    ctx->pc = 0x1A801Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A801Cu;
        // 0x1a8020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A801Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8024u;
label_1a8024:
    // 0x1a8024: 0x0  nop
    ctx->pc = 0x1a8024u;
    // NOP
label_1a8028:
    // 0x1a8028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a802c:
    // 0x1a802c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a8030:
    // 0x1a8030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a8034:
    // 0x1a8034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a8038:
    // 0x1a8038: 0xc069ff2  jal         func_1A7FC8
label_1a803c:
    if (ctx->pc == 0x1A803Cu) {
        ctx->pc = 0x1A803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8038u;
        // 0x1a803c: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8040u;
        goto label_1a8040;
    }
    ctx->pc = 0x1A8038u;
    SET_GPR_U32(ctx, 31, 0x1A8040u);
    ctx->pc = 0x1A803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8038u;
    // 0x1a803c: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FC8u;
    goto label_1a7fc8;
    ctx->pc = 0x1A8040u;
label_1a8040:
    // 0x1a8040: 0xc069218  jal         func_1A4860
label_1a8044:
    if (ctx->pc == 0x1A8044u) {
        ctx->pc = 0x1A8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8040u;
        // 0x1a8044: 0x8e245c00  lw          $a0, 0x5C00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8048u;
        goto label_1a8048;
    }
    ctx->pc = 0x1A8040u;
    SET_GPR_U32(ctx, 31, 0x1A8048u);
    ctx->pc = 0x1A8044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8040u;
    // 0x1a8044: 0x8e245c00  lw          $a0, 0x5C00($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A8048u;
label_1a8048:
    // 0x1a8048: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a8048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a804c:
    // 0x1a804c: 0x24704300  addiu       $s0, $v1, 0x4300
    ctx->pc = 0x1a804cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 17152));
label_1a8050:
    // 0x1a8050: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x1a8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_1a8054:
    // 0x1a8054: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1a8054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a8058:
    // 0x1a8058: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1a805c:
    if (ctx->pc == 0x1A805Cu) {
        ctx->pc = 0x1A805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8058u;
        // 0x1a805c: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8060u;
        goto label_1a8060;
    }
    ctx->pc = 0x1A8058u;
    {
        const bool branch_taken_0x1a8058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8058u;
        // 0x1a805c: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8058) {
            ctx->pc = 0x1A8090u;
            goto label_1a8090;
        }
    }
    ctx->pc = 0x1A8060u;
label_1a8060:
    // 0x1a8060: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a8060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a8064:
    // 0x1a8064: 0x0  nop
    ctx->pc = 0x1a8064u;
    // NOP
label_1a8068:
    // 0x1a8068: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1a806c:
    if (ctx->pc == 0x1A806Cu) {
        ctx->pc = 0x1A806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8068u;
        // 0x1a806c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8070u;
        goto label_1a8070;
    }
    ctx->pc = 0x1A8068u;
    {
        const bool branch_taken_0x1a8068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8068) {
            ctx->pc = 0x1A806Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8068u;
            // 0x1a806c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8084u;
            goto label_1a8084;
        }
    }
    ctx->pc = 0x1A8070u;
label_1a8070:
    // 0x1a8070: 0x8e245c00  lw          $a0, 0x5C00($s1)
    ctx->pc = 0x1a8070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
label_1a8074:
    // 0x1a8074: 0xc069210  jal         func_1A4840
label_1a8078:
    if (ctx->pc == 0x1A8078u) {
        ctx->pc = 0x1A8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8074u;
        // 0x1a8078: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A807Cu;
        goto label_1a807c;
    }
    ctx->pc = 0x1A8074u;
    SET_GPR_U32(ctx, 31, 0x1A807Cu);
    ctx->pc = 0x1A8078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8074u;
    // 0x1a8078: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A807Cu;
label_1a807c:
    // 0x1a807c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a8080:
    if (ctx->pc == 0x1A8080u) {
        ctx->pc = 0x1A8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A807Cu;
        // 0x1a8080: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8084u;
        goto label_1a8084;
    }
    ctx->pc = 0x1A807Cu;
    {
        const bool branch_taken_0x1a807c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A807Cu;
        // 0x1a8080: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a807c) {
            ctx->pc = 0x1A809Cu;
            goto label_1a809c;
        }
    }
    ctx->pc = 0x1A8084u;
label_1a8084:
    // 0x1a8084: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1a8084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a8088:
    // 0x1a8088: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1a808c:
    if (ctx->pc == 0x1A808Cu) {
        ctx->pc = 0x1A808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8088u;
        // 0x1a808c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8090u;
        goto label_1a8090;
    }
    ctx->pc = 0x1A8088u;
    {
        const bool branch_taken_0x1a8088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8088) {
            ctx->pc = 0x1A808Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8088u;
            // 0x1a808c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8068;
        }
    }
    ctx->pc = 0x1A8090u;
label_1a8090:
    // 0x1a8090: 0xc069210  jal         func_1A4840
label_1a8094:
    if (ctx->pc == 0x1A8094u) {
        ctx->pc = 0x1A8094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8090u;
        // 0x1a8094: 0x8e245c00  lw          $a0, 0x5C00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8098u;
        goto label_1a8098;
    }
    ctx->pc = 0x1A8090u;
    SET_GPR_U32(ctx, 31, 0x1A8098u);
    ctx->pc = 0x1A8094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8090u;
    // 0x1a8094: 0x8e245c00  lw          $a0, 0x5C00($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A8098u;
label_1a8098:
    // 0x1a8098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a809c:
    // 0x1a809c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a809cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a80a0:
    // 0x1a80a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a80a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a80a4:
    // 0x1a80a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a80a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a80a8:
    // 0x1a80a8: 0x3e00008  jr          $ra
label_1a80ac:
    if (ctx->pc == 0x1A80ACu) {
        ctx->pc = 0x1A80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80A8u;
        // 0x1a80ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80B0u;
        goto label_1a80b0;
    }
    ctx->pc = 0x1A80A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80A8u;
        // 0x1a80ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A80A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A80B0u;
label_1a80b0:
    // 0x1a80b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a80b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a80b4:
    // 0x1a80b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a80b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a80b8:
    // 0x1a80b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a80b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a80bc:
    // 0x1a80bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a80bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a80c0:
    // 0x1a80c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a80c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a80c4:
    // 0x1a80c4: 0xc069ff2  jal         func_1A7FC8
label_1a80c8:
    if (ctx->pc == 0x1A80C8u) {
        ctx->pc = 0x1A80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80C4u;
        // 0x1a80c8: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80CCu;
        goto label_1a80cc;
    }
    ctx->pc = 0x1A80C4u;
    SET_GPR_U32(ctx, 31, 0x1A80CCu);
    ctx->pc = 0x1A80C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80C4u;
    // 0x1a80c8: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7FC8u;
    goto label_1a7fc8;
    ctx->pc = 0x1A80CCu;
label_1a80cc:
    // 0x1a80cc: 0xc069218  jal         func_1A4860
label_1a80d0:
    if (ctx->pc == 0x1A80D0u) {
        ctx->pc = 0x1A80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80CCu;
        // 0x1a80d0: 0x8e245c00  lw          $a0, 0x5C00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80D4u;
        goto label_1a80d4;
    }
    ctx->pc = 0x1A80CCu;
    SET_GPR_U32(ctx, 31, 0x1A80D4u);
    ctx->pc = 0x1A80D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80CCu;
    // 0x1a80d0: 0x8e245c00  lw          $a0, 0x5C00($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1A80D4u;
label_1a80d4:
    // 0x1a80d4: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x1a80d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1a80d8:
    // 0x1a80d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1a80dc:
    if (ctx->pc == 0x1A80DCu) {
        ctx->pc = 0x1A80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80D8u;
        // 0x1a80dc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80E0u;
        goto label_1a80e0;
    }
    ctx->pc = 0x1A80D8u;
    {
        const bool branch_taken_0x1a80d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A80DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80D8u;
        // 0x1a80dc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80d8) {
            ctx->pc = 0x1A80F0u;
            goto label_1a80f0;
        }
    }
    ctx->pc = 0x1A80E0u;
label_1a80e0:
    // 0x1a80e0: 0xc069210  jal         func_1A4840
label_1a80e4:
    if (ctx->pc == 0x1A80E4u) {
        ctx->pc = 0x1A80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E0u;
        // 0x1a80e4: 0x8e245c00  lw          $a0, 0x5C00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80E8u;
        goto label_1a80e8;
    }
    ctx->pc = 0x1A80E0u;
    SET_GPR_U32(ctx, 31, 0x1A80E8u);
    ctx->pc = 0x1A80E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80E0u;
    // 0x1a80e4: 0x8e245c00  lw          $a0, 0x5C00($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A80E8u;
label_1a80e8:
    // 0x1a80e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a80ec:
    if (ctx->pc == 0x1A80ECu) {
        ctx->pc = 0x1A80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E8u;
        // 0x1a80ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A80F0u;
        goto label_1a80f0;
    }
    ctx->pc = 0x1A80E8u;
    {
        const bool branch_taken_0x1a80e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80E8u;
        // 0x1a80ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80e8) {
            ctx->pc = 0x1A8108u;
            goto label_1a8108;
        }
    }
    ctx->pc = 0x1A80F0u;
label_1a80f0:
    // 0x1a80f0: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1a80f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1a80f4:
    // 0x1a80f4: 0x24424300  addiu       $v0, $v0, 0x4300
    ctx->pc = 0x1a80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17152));
label_1a80f8:
    // 0x1a80f8: 0x8e245c00  lw          $a0, 0x5C00($s1)
    ctx->pc = 0x1a80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23552)));
label_1a80fc:
    // 0x1a80fc: 0xc069210  jal         func_1A4840
label_1a8100:
    if (ctx->pc == 0x1A8100u) {
        ctx->pc = 0x1A8100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80FCu;
        // 0x1a8100: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8104u;
        goto label_1a8104;
    }
    ctx->pc = 0x1A80FCu;
    SET_GPR_U32(ctx, 31, 0x1A8104u);
    ctx->pc = 0x1A8100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A80FCu;
    // 0x1a8100: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1A8104u;
label_1a8104:
    // 0x1a8104: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a8104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8108:
    // 0x1a8108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a810c:
    // 0x1a810c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a810cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8110:
    // 0x1a8110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8114:
    // 0x1a8114: 0x3e00008  jr          $ra
label_1a8118:
    if (ctx->pc == 0x1A8118u) {
        ctx->pc = 0x1A8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8114u;
        // 0x1a8118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A811Cu;
        goto label_1a811c;
    }
    ctx->pc = 0x1A8114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8114u;
        // 0x1a8118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A811Cu;
label_1a811c:
    // 0x1a811c: 0x0  nop
    ctx->pc = 0x1a811cu;
    // NOP
label_1a8120:
    // 0x1a8120: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a8120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a8124:
    // 0x1a8124: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a8128:
    // 0x1a8128: 0x24463ec0  addiu       $a2, $v0, 0x3EC0
    ctx->pc = 0x1a8128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
label_1a812c:
    // 0x1a812c: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1a812cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
label_1a8130:
    // 0x1a8130: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a8134:
    // 0x1a8134: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x1a8134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1a8138:
    // 0x1a8138: 0x88a20003  lwl         $v0, 0x3($a1)
    ctx->pc = 0x1a8138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_1a813c:
    // 0x1a813c: 0x98a20000  lwr         $v0, 0x0($a1)
    ctx->pc = 0x1a813cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_1a8140:
    // 0x1a8140: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x1a8140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8144:
    // 0x1a8144: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x1a8144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1a8148:
    // 0x1a8148: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x1a8148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a814c:
    // 0x1a814c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1a814cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_1a8150:
    // 0x1a8150: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x1a8150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1a8154:
    // 0x1a8154: 0x88650003  lwl         $a1, 0x3($v1)
    ctx->pc = 0x1a8154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
label_1a8158:
    // 0x1a8158: 0x98650000  lwr         $a1, 0x0($v1)
    ctx->pc = 0x1a8158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
label_1a815c:
    // 0x1a815c: 0xaba50007  swl         $a1, 0x7($sp)
    ctx->pc = 0x1a815cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8160:
    // 0x1a8160: 0xbba50004  swr         $a1, 0x4($sp)
    ctx->pc = 0x1a8160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8164:
    // 0x1a8164: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x1a8164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_1a8168:
    // 0x1a8168: 0x24c2000c  addiu       $v0, $a2, 0xC
    ctx->pc = 0x1a8168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1a816c:
    // 0x1a816c: 0x88830003  lwl         $v1, 0x3($a0)
    ctx->pc = 0x1a816cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1a8170:
    // 0x1a8170: 0x98830000  lwr         $v1, 0x0($a0)
    ctx->pc = 0x1a8170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_1a8174:
    // 0x1a8174: 0xaba3000b  swl         $v1, 0xB($sp)
    ctx->pc = 0x1a8174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8178:
    // 0x1a8178: 0xbba30008  swr         $v1, 0x8($sp)
    ctx->pc = 0x1a8178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a817c:
    // 0x1a817c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1a817cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1a8180:
    // 0x1a8180: 0x884a0003  lwl         $t2, 0x3($v0)
    ctx->pc = 0x1a8180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_1a8184:
    // 0x1a8184: 0x984a0000  lwr         $t2, 0x0($v0)
    ctx->pc = 0x1a8184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_1a8188:
    // 0x1a8188: 0xabaa000f  swl         $t2, 0xF($sp)
    ctx->pc = 0x1a8188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a818c:
    // 0x1a818c: 0xbbaa000c  swr         $t2, 0xC($sp)
    ctx->pc = 0x1a818cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1a8190:
    // 0x1a8190: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a8190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8194:
    // 0x1a8194: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1a8198:
    if (ctx->pc == 0x1A8198u) {
        ctx->pc = 0x1A8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8194u;
        // 0x1a8198: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A819Cu;
        goto label_1a819c;
    }
    ctx->pc = 0x1A8194u;
    {
        const bool branch_taken_0x1a8194 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8194u;
        // 0x1a8198: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8194) {
            ctx->pc = 0x1A81ACu;
            goto label_1a81ac;
        }
    }
    ctx->pc = 0x1A819Cu;
label_1a819c:
    // 0x1a819c: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x1a819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1a81a0:
    // 0x1a81a0: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1a81a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1a81a4:
    // 0x1a81a4: 0xc08e93e  jal         func_23A4F8
label_1a81a8:
    if (ctx->pc == 0x1A81A8u) {
        ctx->pc = 0x1A81A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81A4u;
        // 0x1a81a8: 0xa72825  or          $a1, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A81ACu;
        goto label_1a81ac;
    }
    ctx->pc = 0x1A81A4u;
    SET_GPR_U32(ctx, 31, 0x1A81ACu);
    ctx->pc = 0x1A81A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A81A4u;
    // 0x1a81a8: 0xa72825  or          $a1, $a1, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1A81ACu;
label_1a81ac:
    // 0x1a81ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a81acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a81b0:
    // 0x1a81b0: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x1a81b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1a81b4:
    // 0x1a81b4: 0x2c830019  sltiu       $v1, $a0, 0x19
    ctx->pc = 0x1a81b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_1a81b8:
    // 0x1a81b8: 0x106000a9  beqz        $v1, . + 4 + (0xA9 << 2)
label_1a81bc:
    if (ctx->pc == 0x1A81BCu) {
        ctx->pc = 0x1A81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81B8u;
        // 0x1a81bc: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A81C0u;
        goto label_1a81c0;
    }
    ctx->pc = 0x1A81B8u;
    {
        const bool branch_taken_0x1a81b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81B8u;
        // 0x1a81bc: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81b8) {
            ctx->pc = 0x1A8460u;
            { ctx->pc = 0x1a8460; return; }
        }
    }
    ctx->pc = 0x1A81C0u;
label_1a81c0:
    // 0x1a81c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a81c4:
    // 0x1a81c4: 0x2442a6c0  addiu       $v0, $v0, -0x5940
    ctx->pc = 0x1a81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944448));
    ctx->pc = 0x1a81c8u;
    return;
}

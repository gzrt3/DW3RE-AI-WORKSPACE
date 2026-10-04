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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part22(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a5a28u: goto label_1a5a28;
        case 0x1a5a2cu: goto label_1a5a2c;
        case 0x1a5a30u: goto label_1a5a30;
        case 0x1a5a34u: goto label_1a5a34;
        case 0x1a5a38u: goto label_1a5a38;
        case 0x1a5a3cu: goto label_1a5a3c;
        case 0x1a5a40u: goto label_1a5a40;
        case 0x1a5a44u: goto label_1a5a44;
        case 0x1a5a48u: goto label_1a5a48;
        case 0x1a5a4cu: goto label_1a5a4c;
        case 0x1a5a50u: goto label_1a5a50;
        case 0x1a5a54u: goto label_1a5a54;
        case 0x1a5a58u: goto label_1a5a58;
        case 0x1a5a5cu: goto label_1a5a5c;
        case 0x1a5a60u: goto label_1a5a60;
        case 0x1a5a64u: goto label_1a5a64;
        case 0x1a5a68u: goto label_1a5a68;
        case 0x1a5a6cu: goto label_1a5a6c;
        case 0x1a5a70u: goto label_1a5a70;
        case 0x1a5a74u: goto label_1a5a74;
        case 0x1a5a78u: goto label_1a5a78;
        case 0x1a5a7cu: goto label_1a5a7c;
        case 0x1a5a80u: goto label_1a5a80;
        case 0x1a5a84u: goto label_1a5a84;
        case 0x1a5a88u: goto label_1a5a88;
        case 0x1a5a8cu: goto label_1a5a8c;
        case 0x1a5a90u: goto label_1a5a90;
        case 0x1a5a94u: goto label_1a5a94;
        case 0x1a5a98u: goto label_1a5a98;
        case 0x1a5a9cu: goto label_1a5a9c;
        case 0x1a5aa0u: goto label_1a5aa0;
        case 0x1a5aa4u: goto label_1a5aa4;
        case 0x1a5aa8u: goto label_1a5aa8;
        case 0x1a5aacu: goto label_1a5aac;
        case 0x1a5ab0u: goto label_1a5ab0;
        case 0x1a5ab4u: goto label_1a5ab4;
        case 0x1a5ab8u: goto label_1a5ab8;
        case 0x1a5abcu: goto label_1a5abc;
        case 0x1a5ac0u: goto label_1a5ac0;
        case 0x1a5ac4u: goto label_1a5ac4;
        case 0x1a5ac8u: goto label_1a5ac8;
        case 0x1a5accu: goto label_1a5acc;
        case 0x1a5ad0u: goto label_1a5ad0;
        case 0x1a5ad4u: goto label_1a5ad4;
        case 0x1a5ad8u: goto label_1a5ad8;
        case 0x1a5adcu: goto label_1a5adc;
        case 0x1a5ae0u: goto label_1a5ae0;
        case 0x1a5ae4u: goto label_1a5ae4;
        case 0x1a5ae8u: goto label_1a5ae8;
        case 0x1a5aecu: goto label_1a5aec;
        case 0x1a5af0u: goto label_1a5af0;
        case 0x1a5af4u: goto label_1a5af4;
        case 0x1a5af8u: goto label_1a5af8;
        case 0x1a5afcu: goto label_1a5afc;
        case 0x1a5b00u: goto label_1a5b00;
        case 0x1a5b04u: goto label_1a5b04;
        case 0x1a5b08u: goto label_1a5b08;
        case 0x1a5b0cu: goto label_1a5b0c;
        case 0x1a5b10u: goto label_1a5b10;
        case 0x1a5b14u: goto label_1a5b14;
        case 0x1a5b18u: goto label_1a5b18;
        case 0x1a5b1cu: goto label_1a5b1c;
        case 0x1a5b20u: goto label_1a5b20;
        case 0x1a5b24u: goto label_1a5b24;
        case 0x1a5b28u: goto label_1a5b28;
        case 0x1a5b2cu: goto label_1a5b2c;
        case 0x1a5b30u: goto label_1a5b30;
        case 0x1a5b34u: goto label_1a5b34;
        case 0x1a5b38u: goto label_1a5b38;
        case 0x1a5b3cu: goto label_1a5b3c;
        case 0x1a5b40u: goto label_1a5b40;
        case 0x1a5b44u: goto label_1a5b44;
        case 0x1a5b48u: goto label_1a5b48;
        case 0x1a5b4cu: goto label_1a5b4c;
        case 0x1a5b50u: goto label_1a5b50;
        case 0x1a5b54u: goto label_1a5b54;
        case 0x1a5b58u: goto label_1a5b58;
        case 0x1a5b5cu: goto label_1a5b5c;
        case 0x1a5b60u: goto label_1a5b60;
        case 0x1a5b64u: goto label_1a5b64;
        case 0x1a5b68u: goto label_1a5b68;
        case 0x1a5b6cu: goto label_1a5b6c;
        case 0x1a5b70u: goto label_1a5b70;
        case 0x1a5b74u: goto label_1a5b74;
        case 0x1a5b78u: goto label_1a5b78;
        case 0x1a5b7cu: goto label_1a5b7c;
        case 0x1a5b80u: goto label_1a5b80;
        case 0x1a5b84u: goto label_1a5b84;
        case 0x1a5b88u: goto label_1a5b88;
        case 0x1a5b8cu: goto label_1a5b8c;
        case 0x1a5b90u: goto label_1a5b90;
        case 0x1a5b94u: goto label_1a5b94;
        case 0x1a5b98u: goto label_1a5b98;
        case 0x1a5b9cu: goto label_1a5b9c;
        case 0x1a5ba0u: goto label_1a5ba0;
        case 0x1a5ba4u: goto label_1a5ba4;
        case 0x1a5ba8u: goto label_1a5ba8;
        case 0x1a5bacu: goto label_1a5bac;
        case 0x1a5bb0u: goto label_1a5bb0;
        case 0x1a5bb4u: goto label_1a5bb4;
        case 0x1a5bb8u: goto label_1a5bb8;
        case 0x1a5bbcu: goto label_1a5bbc;
        case 0x1a5bc0u: goto label_1a5bc0;
        case 0x1a5bc4u: goto label_1a5bc4;
        case 0x1a5bc8u: goto label_1a5bc8;
        case 0x1a5bccu: goto label_1a5bcc;
        case 0x1a5bd0u: goto label_1a5bd0;
        case 0x1a5bd4u: goto label_1a5bd4;
        case 0x1a5bd8u: goto label_1a5bd8;
        case 0x1a5bdcu: goto label_1a5bdc;
        case 0x1a5be0u: goto label_1a5be0;
        case 0x1a5be4u: goto label_1a5be4;
        case 0x1a5be8u: goto label_1a5be8;
        case 0x1a5becu: goto label_1a5bec;
        case 0x1a5bf0u: goto label_1a5bf0;
        case 0x1a5bf4u: goto label_1a5bf4;
        case 0x1a5bf8u: goto label_1a5bf8;
        case 0x1a5bfcu: goto label_1a5bfc;
        case 0x1a5c00u: goto label_1a5c00;
        case 0x1a5c04u: goto label_1a5c04;
        case 0x1a5c08u: goto label_1a5c08;
        case 0x1a5c0cu: goto label_1a5c0c;
        case 0x1a5c10u: goto label_1a5c10;
        case 0x1a5c14u: goto label_1a5c14;
        case 0x1a5c18u: goto label_1a5c18;
        case 0x1a5c1cu: goto label_1a5c1c;
        case 0x1a5c20u: goto label_1a5c20;
        case 0x1a5c24u: goto label_1a5c24;
        case 0x1a5c28u: goto label_1a5c28;
        case 0x1a5c2cu: goto label_1a5c2c;
        case 0x1a5c30u: goto label_1a5c30;
        case 0x1a5c34u: goto label_1a5c34;
        case 0x1a5c38u: goto label_1a5c38;
        case 0x1a5c3cu: goto label_1a5c3c;
        case 0x1a5c40u: goto label_1a5c40;
        case 0x1a5c44u: goto label_1a5c44;
        case 0x1a5c48u: goto label_1a5c48;
        case 0x1a5c4cu: goto label_1a5c4c;
        case 0x1a5c50u: goto label_1a5c50;
        case 0x1a5c54u: goto label_1a5c54;
        case 0x1a5c58u: goto label_1a5c58;
        case 0x1a5c5cu: goto label_1a5c5c;
        case 0x1a5c60u: goto label_1a5c60;
        case 0x1a5c64u: goto label_1a5c64;
        case 0x1a5c68u: goto label_1a5c68;
        case 0x1a5c6cu: goto label_1a5c6c;
        case 0x1a5c70u: goto label_1a5c70;
        case 0x1a5c74u: goto label_1a5c74;
        case 0x1a5c78u: goto label_1a5c78;
        case 0x1a5c7cu: goto label_1a5c7c;
        case 0x1a5c80u: goto label_1a5c80;
        case 0x1a5c84u: goto label_1a5c84;
        case 0x1a5c88u: goto label_1a5c88;
        case 0x1a5c8cu: goto label_1a5c8c;
        case 0x1a5c90u: goto label_1a5c90;
        case 0x1a5c94u: goto label_1a5c94;
        case 0x1a5c98u: goto label_1a5c98;
        case 0x1a5c9cu: goto label_1a5c9c;
        case 0x1a5ca0u: goto label_1a5ca0;
        case 0x1a5ca4u: goto label_1a5ca4;
        case 0x1a5ca8u: goto label_1a5ca8;
        case 0x1a5cacu: goto label_1a5cac;
        case 0x1a5cb0u: goto label_1a5cb0;
        case 0x1a5cb4u: goto label_1a5cb4;
        case 0x1a5cb8u: goto label_1a5cb8;
        case 0x1a5cbcu: goto label_1a5cbc;
        case 0x1a5cc0u: goto label_1a5cc0;
        case 0x1a5cc4u: goto label_1a5cc4;
        case 0x1a5cc8u: goto label_1a5cc8;
        case 0x1a5cccu: goto label_1a5ccc;
        case 0x1a5cd0u: goto label_1a5cd0;
        case 0x1a5cd4u: goto label_1a5cd4;
        case 0x1a5cd8u: goto label_1a5cd8;
        case 0x1a5cdcu: goto label_1a5cdc;
        case 0x1a5ce0u: goto label_1a5ce0;
        case 0x1a5ce4u: goto label_1a5ce4;
        case 0x1a5ce8u: goto label_1a5ce8;
        case 0x1a5cecu: goto label_1a5cec;
        case 0x1a5cf0u: goto label_1a5cf0;
        case 0x1a5cf4u: goto label_1a5cf4;
        case 0x1a5cf8u: goto label_1a5cf8;
        case 0x1a5cfcu: goto label_1a5cfc;
        case 0x1a5d00u: goto label_1a5d00;
        case 0x1a5d04u: goto label_1a5d04;
        case 0x1a5d08u: goto label_1a5d08;
        case 0x1a5d0cu: goto label_1a5d0c;
        case 0x1a5d10u: goto label_1a5d10;
        case 0x1a5d14u: goto label_1a5d14;
        case 0x1a5d18u: goto label_1a5d18;
        case 0x1a5d1cu: goto label_1a5d1c;
        case 0x1a5d20u: goto label_1a5d20;
        case 0x1a5d24u: goto label_1a5d24;
        case 0x1a5d28u: goto label_1a5d28;
        case 0x1a5d2cu: goto label_1a5d2c;
        case 0x1a5d30u: goto label_1a5d30;
        case 0x1a5d34u: goto label_1a5d34;
        case 0x1a5d38u: goto label_1a5d38;
        case 0x1a5d3cu: goto label_1a5d3c;
        case 0x1a5d40u: goto label_1a5d40;
        case 0x1a5d44u: goto label_1a5d44;
        case 0x1a5d48u: goto label_1a5d48;
        case 0x1a5d4cu: goto label_1a5d4c;
        case 0x1a5d50u: goto label_1a5d50;
        case 0x1a5d54u: goto label_1a5d54;
        case 0x1a5d58u: goto label_1a5d58;
        case 0x1a5d5cu: goto label_1a5d5c;
        case 0x1a5d60u: goto label_1a5d60;
        case 0x1a5d64u: goto label_1a5d64;
        case 0x1a5d68u: goto label_1a5d68;
        case 0x1a5d6cu: goto label_1a5d6c;
        case 0x1a5d70u: goto label_1a5d70;
        case 0x1a5d74u: goto label_1a5d74;
        case 0x1a5d78u: goto label_1a5d78;
        case 0x1a5d7cu: goto label_1a5d7c;
        case 0x1a5d80u: goto label_1a5d80;
        case 0x1a5d84u: goto label_1a5d84;
        case 0x1a5d88u: goto label_1a5d88;
        case 0x1a5d8cu: goto label_1a5d8c;
        case 0x1a5d90u: goto label_1a5d90;
        case 0x1a5d94u: goto label_1a5d94;
        case 0x1a5d98u: goto label_1a5d98;
        case 0x1a5d9cu: goto label_1a5d9c;
        case 0x1a5da0u: goto label_1a5da0;
        case 0x1a5da4u: goto label_1a5da4;
        case 0x1a5da8u: goto label_1a5da8;
        case 0x1a5dacu: goto label_1a5dac;
        case 0x1a5db0u: goto label_1a5db0;
        case 0x1a5db4u: goto label_1a5db4;
        case 0x1a5db8u: goto label_1a5db8;
        case 0x1a5dbcu: goto label_1a5dbc;
        case 0x1a5dc0u: goto label_1a5dc0;
        case 0x1a5dc4u: goto label_1a5dc4;
        case 0x1a5dc8u: goto label_1a5dc8;
        case 0x1a5dccu: goto label_1a5dcc;
        case 0x1a5dd0u: goto label_1a5dd0;
        case 0x1a5dd4u: goto label_1a5dd4;
        case 0x1a5dd8u: goto label_1a5dd8;
        case 0x1a5ddcu: goto label_1a5ddc;
        case 0x1a5de0u: goto label_1a5de0;
        case 0x1a5de4u: goto label_1a5de4;
        case 0x1a5de8u: goto label_1a5de8;
        case 0x1a5decu: goto label_1a5dec;
        case 0x1a5df0u: goto label_1a5df0;
        case 0x1a5df4u: goto label_1a5df4;
        case 0x1a5df8u: goto label_1a5df8;
        case 0x1a5dfcu: goto label_1a5dfc;
        case 0x1a5e00u: goto label_1a5e00;
        case 0x1a5e04u: goto label_1a5e04;
        case 0x1a5e08u: goto label_1a5e08;
        case 0x1a5e0cu: goto label_1a5e0c;
        case 0x1a5e10u: goto label_1a5e10;
        case 0x1a5e14u: goto label_1a5e14;
        case 0x1a5e18u: goto label_1a5e18;
        case 0x1a5e1cu: goto label_1a5e1c;
        case 0x1a5e20u: goto label_1a5e20;
        case 0x1a5e24u: goto label_1a5e24;
        case 0x1a5e28u: goto label_1a5e28;
        case 0x1a5e2cu: goto label_1a5e2c;
        case 0x1a5e30u: goto label_1a5e30;
        case 0x1a5e34u: goto label_1a5e34;
        case 0x1a5e38u: goto label_1a5e38;
        case 0x1a5e3cu: goto label_1a5e3c;
        case 0x1a5e40u: goto label_1a5e40;
        case 0x1a5e44u: goto label_1a5e44;
        case 0x1a5e48u: goto label_1a5e48;
        case 0x1a5e4cu: goto label_1a5e4c;
        case 0x1a5e50u: goto label_1a5e50;
        case 0x1a5e54u: goto label_1a5e54;
        case 0x1a5e58u: goto label_1a5e58;
        case 0x1a5e5cu: goto label_1a5e5c;
        case 0x1a5e60u: goto label_1a5e60;
        case 0x1a5e64u: goto label_1a5e64;
        case 0x1a5e68u: goto label_1a5e68;
        case 0x1a5e6cu: goto label_1a5e6c;
        case 0x1a5e70u: goto label_1a5e70;
        case 0x1a5e74u: goto label_1a5e74;
        case 0x1a5e78u: goto label_1a5e78;
        case 0x1a5e7cu: goto label_1a5e7c;
        case 0x1a5e80u: goto label_1a5e80;
        case 0x1a5e84u: goto label_1a5e84;
        case 0x1a5e88u: goto label_1a5e88;
        case 0x1a5e8cu: goto label_1a5e8c;
        case 0x1a5e90u: goto label_1a5e90;
        case 0x1a5e94u: goto label_1a5e94;
        case 0x1a5e98u: goto label_1a5e98;
        case 0x1a5e9cu: goto label_1a5e9c;
        case 0x1a5ea0u: goto label_1a5ea0;
        case 0x1a5ea4u: goto label_1a5ea4;
        case 0x1a5ea8u: goto label_1a5ea8;
        case 0x1a5eacu: goto label_1a5eac;
        case 0x1a5eb0u: goto label_1a5eb0;
        case 0x1a5eb4u: goto label_1a5eb4;
        case 0x1a5eb8u: goto label_1a5eb8;
        case 0x1a5ebcu: goto label_1a5ebc;
        case 0x1a5ec0u: goto label_1a5ec0;
        case 0x1a5ec4u: goto label_1a5ec4;
        case 0x1a5ec8u: goto label_1a5ec8;
        case 0x1a5eccu: goto label_1a5ecc;
        case 0x1a5ed0u: goto label_1a5ed0;
        case 0x1a5ed4u: goto label_1a5ed4;
        case 0x1a5ed8u: goto label_1a5ed8;
        case 0x1a5edcu: goto label_1a5edc;
        case 0x1a5ee0u: goto label_1a5ee0;
        case 0x1a5ee4u: goto label_1a5ee4;
        case 0x1a5ee8u: goto label_1a5ee8;
        case 0x1a5eecu: goto label_1a5eec;
        case 0x1a5ef0u: goto label_1a5ef0;
        case 0x1a5ef4u: goto label_1a5ef4;
        case 0x1a5ef8u: goto label_1a5ef8;
        case 0x1a5efcu: goto label_1a5efc;
        case 0x1a5f00u: goto label_1a5f00;
        case 0x1a5f04u: goto label_1a5f04;
        case 0x1a5f08u: goto label_1a5f08;
        case 0x1a5f0cu: goto label_1a5f0c;
        case 0x1a5f10u: goto label_1a5f10;
        case 0x1a5f14u: goto label_1a5f14;
        case 0x1a5f18u: goto label_1a5f18;
        case 0x1a5f1cu: goto label_1a5f1c;
        case 0x1a5f20u: goto label_1a5f20;
        case 0x1a5f24u: goto label_1a5f24;
        case 0x1a5f28u: goto label_1a5f28;
        case 0x1a5f2cu: goto label_1a5f2c;
        case 0x1a5f30u: goto label_1a5f30;
        case 0x1a5f34u: goto label_1a5f34;
        case 0x1a5f38u: goto label_1a5f38;
        case 0x1a5f3cu: goto label_1a5f3c;
        case 0x1a5f40u: goto label_1a5f40;
        case 0x1a5f44u: goto label_1a5f44;
        case 0x1a5f48u: goto label_1a5f48;
        case 0x1a5f4cu: goto label_1a5f4c;
        case 0x1a5f50u: goto label_1a5f50;
        case 0x1a5f54u: goto label_1a5f54;
        case 0x1a5f58u: goto label_1a5f58;
        case 0x1a5f5cu: goto label_1a5f5c;
        case 0x1a5f60u: goto label_1a5f60;
        case 0x1a5f64u: goto label_1a5f64;
        case 0x1a5f68u: goto label_1a5f68;
        case 0x1a5f6cu: goto label_1a5f6c;
        case 0x1a5f70u: goto label_1a5f70;
        case 0x1a5f74u: goto label_1a5f74;
        case 0x1a5f78u: goto label_1a5f78;
        case 0x1a5f7cu: goto label_1a5f7c;
        case 0x1a5f80u: goto label_1a5f80;
        case 0x1a5f84u: goto label_1a5f84;
        case 0x1a5f88u: goto label_1a5f88;
        case 0x1a5f8cu: goto label_1a5f8c;
        case 0x1a5f90u: goto label_1a5f90;
        case 0x1a5f94u: goto label_1a5f94;
        case 0x1a5f98u: goto label_1a5f98;
        case 0x1a5f9cu: goto label_1a5f9c;
        case 0x1a5fa0u: goto label_1a5fa0;
        case 0x1a5fa4u: goto label_1a5fa4;
        case 0x1a5fa8u: goto label_1a5fa8;
        case 0x1a5facu: goto label_1a5fac;
        case 0x1a5fb0u: goto label_1a5fb0;
        case 0x1a5fb4u: goto label_1a5fb4;
        case 0x1a5fb8u: goto label_1a5fb8;
        case 0x1a5fbcu: goto label_1a5fbc;
        case 0x1a5fc0u: goto label_1a5fc0;
        case 0x1a5fc4u: goto label_1a5fc4;
        case 0x1a5fc8u: goto label_1a5fc8;
        case 0x1a5fccu: goto label_1a5fcc;
        case 0x1a5fd0u: goto label_1a5fd0;
        case 0x1a5fd4u: goto label_1a5fd4;
        case 0x1a5fd8u: goto label_1a5fd8;
        case 0x1a5fdcu: goto label_1a5fdc;
        case 0x1a5fe0u: goto label_1a5fe0;
        case 0x1a5fe4u: goto label_1a5fe4;
        case 0x1a5fe8u: goto label_1a5fe8;
        case 0x1a5fecu: goto label_1a5fec;
        case 0x1a5ff0u: goto label_1a5ff0;
        case 0x1a5ff4u: goto label_1a5ff4;
        case 0x1a5ff8u: goto label_1a5ff8;
        case 0x1a5ffcu: goto label_1a5ffc;
        case 0x1a6000u: goto label_1a6000;
        case 0x1a6004u: goto label_1a6004;
        case 0x1a6008u: goto label_1a6008;
        case 0x1a600cu: goto label_1a600c;
        case 0x1a6010u: goto label_1a6010;
        case 0x1a6014u: goto label_1a6014;
        case 0x1a6018u: goto label_1a6018;
        case 0x1a601cu: goto label_1a601c;
        case 0x1a6020u: goto label_1a6020;
        case 0x1a6024u: goto label_1a6024;
        case 0x1a6028u: goto label_1a6028;
        case 0x1a602cu: goto label_1a602c;
        case 0x1a6030u: goto label_1a6030;
        case 0x1a6034u: goto label_1a6034;
        case 0x1a6038u: goto label_1a6038;
        case 0x1a603cu: goto label_1a603c;
        case 0x1a6040u: goto label_1a6040;
        case 0x1a6044u: goto label_1a6044;
        case 0x1a6048u: goto label_1a6048;
        case 0x1a604cu: goto label_1a604c;
        case 0x1a6050u: goto label_1a6050;
        case 0x1a6054u: goto label_1a6054;
        case 0x1a6058u: goto label_1a6058;
        case 0x1a605cu: goto label_1a605c;
        case 0x1a6060u: goto label_1a6060;
        case 0x1a6064u: goto label_1a6064;
        case 0x1a6068u: goto label_1a6068;
        case 0x1a606cu: goto label_1a606c;
        case 0x1a6070u: goto label_1a6070;
        case 0x1a6074u: goto label_1a6074;
        case 0x1a6078u: goto label_1a6078;
        case 0x1a607cu: goto label_1a607c;
        case 0x1a6080u: goto label_1a6080;
        case 0x1a6084u: goto label_1a6084;
        case 0x1a6088u: goto label_1a6088;
        case 0x1a608cu: goto label_1a608c;
        case 0x1a6090u: goto label_1a6090;
        case 0x1a6094u: goto label_1a6094;
        case 0x1a6098u: goto label_1a6098;
        case 0x1a609cu: goto label_1a609c;
        case 0x1a60a0u: goto label_1a60a0;
        case 0x1a60a4u: goto label_1a60a4;
        case 0x1a60a8u: goto label_1a60a8;
        case 0x1a60acu: goto label_1a60ac;
        case 0x1a60b0u: goto label_1a60b0;
        case 0x1a60b4u: goto label_1a60b4;
        case 0x1a60b8u: goto label_1a60b8;
        case 0x1a60bcu: goto label_1a60bc;
        case 0x1a60c0u: goto label_1a60c0;
        case 0x1a60c4u: goto label_1a60c4;
        case 0x1a60c8u: goto label_1a60c8;
        case 0x1a60ccu: goto label_1a60cc;
        case 0x1a60d0u: goto label_1a60d0;
        case 0x1a60d4u: goto label_1a60d4;
        case 0x1a60d8u: goto label_1a60d8;
        case 0x1a60dcu: goto label_1a60dc;
        case 0x1a60e0u: goto label_1a60e0;
        case 0x1a60e4u: goto label_1a60e4;
        case 0x1a60e8u: goto label_1a60e8;
        case 0x1a60ecu: goto label_1a60ec;
        case 0x1a60f0u: goto label_1a60f0;
        case 0x1a60f4u: goto label_1a60f4;
        case 0x1a60f8u: goto label_1a60f8;
        case 0x1a60fcu: goto label_1a60fc;
        case 0x1a6100u: goto label_1a6100;
        case 0x1a6104u: goto label_1a6104;
        case 0x1a6108u: goto label_1a6108;
        case 0x1a610cu: goto label_1a610c;
        case 0x1a6110u: goto label_1a6110;
        case 0x1a6114u: goto label_1a6114;
        case 0x1a6118u: goto label_1a6118;
        case 0x1a611cu: goto label_1a611c;
        case 0x1a6120u: goto label_1a6120;
        case 0x1a6124u: goto label_1a6124;
        case 0x1a6128u: goto label_1a6128;
        case 0x1a612cu: goto label_1a612c;
        case 0x1a6130u: goto label_1a6130;
        case 0x1a6134u: goto label_1a6134;
        case 0x1a6138u: goto label_1a6138;
        case 0x1a613cu: goto label_1a613c;
        case 0x1a6140u: goto label_1a6140;
        case 0x1a6144u: goto label_1a6144;
        case 0x1a6148u: goto label_1a6148;
        case 0x1a614cu: goto label_1a614c;
        case 0x1a6150u: goto label_1a6150;
        case 0x1a6154u: goto label_1a6154;
        case 0x1a6158u: goto label_1a6158;
        case 0x1a615cu: goto label_1a615c;
        case 0x1a6160u: goto label_1a6160;
        case 0x1a6164u: goto label_1a6164;
        case 0x1a6168u: goto label_1a6168;
        case 0x1a616cu: goto label_1a616c;
        case 0x1a6170u: goto label_1a6170;
        case 0x1a6174u: goto label_1a6174;
        case 0x1a6178u: goto label_1a6178;
        case 0x1a617cu: goto label_1a617c;
        case 0x1a6180u: goto label_1a6180;
        case 0x1a6184u: goto label_1a6184;
        case 0x1a6188u: goto label_1a6188;
        case 0x1a618cu: goto label_1a618c;
        case 0x1a6190u: goto label_1a6190;
        case 0x1a6194u: goto label_1a6194;
        case 0x1a6198u: goto label_1a6198;
        case 0x1a619cu: goto label_1a619c;
        case 0x1a61a0u: goto label_1a61a0;
        case 0x1a61a4u: goto label_1a61a4;
        case 0x1a61a8u: goto label_1a61a8;
        case 0x1a61acu: goto label_1a61ac;
        case 0x1a61b0u: goto label_1a61b0;
        case 0x1a61b4u: goto label_1a61b4;
        case 0x1a61b8u: goto label_1a61b8;
        case 0x1a61bcu: goto label_1a61bc;
        case 0x1a61c0u: goto label_1a61c0;
        case 0x1a61c4u: goto label_1a61c4;
        case 0x1a61c8u: goto label_1a61c8;
        case 0x1a61ccu: goto label_1a61cc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61d4u: goto label_1a61d4;
        case 0x1a61d8u: goto label_1a61d8;
        case 0x1a61dcu: goto label_1a61dc;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61e4u: goto label_1a61e4;
        case 0x1a61e8u: goto label_1a61e8;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a61f0u: goto label_1a61f0;
        case 0x1a61f4u: goto label_1a61f4;
        default: return;
    }

label_1a5a28:
    // 0x1a5a28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5a2c:
    // 0x1a5a2c: 0x3e00008  jr          $ra
label_1a5a30:
    if (ctx->pc == 0x1A5A30u) {
        ctx->pc = 0x1A5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A2Cu;
        // 0x1a5a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A34u;
        goto label_1a5a34;
    }
    ctx->pc = 0x1A5A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A2Cu;
        // 0x1a5a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5A34u;
label_1a5a34:
    // 0x1a5a34: 0x0  nop
    ctx->pc = 0x1a5a34u;
    // NOP
label_1a5a38:
    // 0x1a5a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a5a3c:
    // 0x1a5a3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a5a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a5a40:
    // 0x1a5a40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a44:
    // 0x1a5a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a5a48:
    // 0x1a5a48: 0xc069314  jal         func_1A4C50
label_1a5a4c:
    if (ctx->pc == 0x1A5A4Cu) {
        ctx->pc = 0x1A5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A48u;
        // 0x1a5a4c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A50u;
        goto label_1a5a50;
    }
    ctx->pc = 0x1A5A48u;
    SET_GPR_U32(ctx, 31, 0x1A5A50u);
    ctx->pc = 0x1A5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5A48u;
    // 0x1a5a4c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    { ctx->pc = 0x1a4c50; return; }
    ctx->pc = 0x1A5A50u;
label_1a5a50:
    // 0x1a5a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5a54:
    // 0x1a5a54: 0x3e00008  jr          $ra
label_1a5a58:
    if (ctx->pc == 0x1A5A58u) {
        ctx->pc = 0x1A5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A54u;
        // 0x1a5a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A5Cu;
        goto label_1a5a5c;
    }
    ctx->pc = 0x1A5A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A54u;
        // 0x1a5a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5A5Cu;
label_1a5a5c:
    // 0x1a5a5c: 0x0  nop
    ctx->pc = 0x1a5a5cu;
    // NOP
label_1a5a60:
    // 0x1a5a60: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a5a64:
    // 0x1a5a64: 0x24431300  addiu       $v1, $v0, 0x1300
    ctx->pc = 0x1a5a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1a5a68:
    // 0x1a5a68: 0xac441300  sw          $a0, 0x1300($v0)
    ctx->pc = 0x1a5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4864), GPR_U32(ctx, 4));
label_1a5a6c:
    // 0x1a5a6c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1a5a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a5a70:
    // 0x1a5a70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a5a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a74:
    // 0x1a5a74: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1a5a74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_1a5a78:
    // 0x1a5a78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1a5a7c:
    // 0x1a5a7c: 0x3e00008  jr          $ra
label_1a5a80:
    if (ctx->pc == 0x1A5A80u) {
        ctx->pc = 0x1A5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A7Cu;
        // 0x1a5a80: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5A84u;
        goto label_1a5a84;
    }
    ctx->pc = 0x1A5A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5A7Cu;
        // 0x1a5a80: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5A84u;
label_1a5a84:
    // 0x1a5a84: 0x0  nop
    ctx->pc = 0x1a5a84u;
    // NOP
label_1a5a88:
    // 0x1a5a88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a5a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a8c:
    // 0x1a5a8c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a5a90:
    // 0x1a5a90: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1a5a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1a5a94:
    // 0x1a5a94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a5a98:
    // 0x1a5a98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a5a9c:
    // 0x1a5a9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a5a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a5aa0:
    // 0x1a5aa0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a5aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1a5aa4:
    // 0x1a5aa4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a5aa8:
    // 0x1a5aa8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a5aac:
    // 0x1a5aac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1a5ab0:
    if (ctx->pc == 0x1A5AB0u) {
        ctx->pc = 0x1A5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AACu;
        // 0x1a5ab0: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5AB4u;
        goto label_1a5ab4;
    }
    ctx->pc = 0x1A5AACu;
    {
        const bool branch_taken_0x1a5aac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AACu;
        // 0x1a5ab0: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5aac) {
            ctx->pc = 0x1A5ABCu;
            goto label_1a5abc;
        }
    }
    ctx->pc = 0x1A5AB4u;
label_1a5ab4:
    // 0x1a5ab4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1a5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1a5ab8:
    // 0x1a5ab8: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1a5ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1a5abc:
    // 0x1a5abc: 0x3e00008  jr          $ra
label_1a5ac0:
    if (ctx->pc == 0x1A5AC0u) {
        ctx->pc = 0x1A5AC4u;
        goto label_1a5ac4;
    }
    ctx->pc = 0x1A5ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5AC4u;
label_1a5ac4:
    // 0x1a5ac4: 0x0  nop
    ctx->pc = 0x1a5ac4u;
    // NOP
label_1a5ac8:
    // 0x1a5ac8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a5ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5acc:
    // 0x1a5acc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a5accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a5ad0:
    // 0x1a5ad0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1a5ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1a5ad4:
    // 0x1a5ad4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a5ad8:
    // 0x1a5ad8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5adc:
    // 0x1a5adc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a5ae0:
    // 0x1a5ae0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1a5ae4:
    // 0x1a5ae4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a5ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a5ae8:
    // 0x1a5ae8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a5ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1a5aec:
    // 0x1a5aec: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1a5af0:
    if (ctx->pc == 0x1A5AF0u) {
        ctx->pc = 0x1A5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AECu;
        // 0x1a5af0: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5AF4u;
        goto label_1a5af4;
    }
    ctx->pc = 0x1A5AECu;
    {
        const bool branch_taken_0x1a5aec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5AECu;
        // 0x1a5af0: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5aec) {
            ctx->pc = 0x1A5AFCu;
            goto label_1a5afc;
        }
    }
    ctx->pc = 0x1A5AF4u;
label_1a5af4:
    // 0x1a5af4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x1a5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1a5af8:
    // 0x1a5af8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1a5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1a5afc:
    // 0x1a5afc: 0x3e00008  jr          $ra
label_1a5b00:
    if (ctx->pc == 0x1A5B00u) {
        ctx->pc = 0x1A5B04u;
        goto label_1a5b04;
    }
    ctx->pc = 0x1A5AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5B04u;
label_1a5b04:
    // 0x1a5b04: 0x0  nop
    ctx->pc = 0x1a5b04u;
    // NOP
label_1a5b08:
    // 0x1a5b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a5b0c:
    // 0x1a5b0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a5b10:
    // 0x1a5b10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5b14:
    // 0x1a5b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5b18:
    // 0x1a5b18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a5b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b1c:
    // 0x1a5b1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a5b20:
    // 0x1a5b20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a5b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b24:
    // 0x1a5b24: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
label_1a5b28:
    if (ctx->pc == 0x1A5B28u) {
        ctx->pc = 0x1A5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B24u;
        // 0x1a5b28: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B2Cu;
        goto label_1a5b2c;
    }
    ctx->pc = 0x1A5B24u;
    {
        const bool branch_taken_0x1a5b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B24u;
        // 0x1a5b28: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b24) {
            ctx->pc = 0x1A5C14u;
            goto label_1a5c14;
        }
    }
    ctx->pc = 0x1A5B2Cu;
label_1a5b2c:
    // 0x1a5b2c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1a5b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_1a5b30:
    // 0x1a5b30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1a5b34:
    if (ctx->pc == 0x1A5B34u) {
        ctx->pc = 0x1A5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B30u;
        // 0x1a5b34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B38u;
        goto label_1a5b38;
    }
    ctx->pc = 0x1A5B30u;
    {
        const bool branch_taken_0x1a5b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B30u;
        // 0x1a5b34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b30) {
            ctx->pc = 0x1A5B48u;
            goto label_1a5b48;
        }
    }
    ctx->pc = 0x1A5B38u;
label_1a5b38:
    // 0x1a5b38: 0x1082004a  beq         $a0, $v0, . + 4 + (0x4A << 2)
label_1a5b3c:
    if (ctx->pc == 0x1A5B3Cu) {
        ctx->pc = 0x1A5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B38u;
        // 0x1a5b3c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B40u;
        goto label_1a5b40;
    }
    ctx->pc = 0x1A5B38u;
    {
        const bool branch_taken_0x1a5b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B38u;
        // 0x1a5b3c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b38) {
            ctx->pc = 0x1A5C64u;
            goto label_1a5c64;
        }
    }
    ctx->pc = 0x1A5B40u;
label_1a5b40:
    // 0x1a5b40: 0x10000052  b           . + 4 + (0x52 << 2)
label_1a5b44:
    if (ctx->pc == 0x1A5B44u) {
        ctx->pc = 0x1A5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B40u;
        // 0x1a5b44: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B48u;
        goto label_1a5b48;
    }
    ctx->pc = 0x1A5B40u;
    {
        const bool branch_taken_0x1a5b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B40u;
        // 0x1a5b44: 0xdfb20020  ld          $s2, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b40) {
            ctx->pc = 0x1A5C8Cu;
            goto label_1a5c8c;
        }
    }
    ctx->pc = 0x1A5B48u;
label_1a5b48:
    // 0x1a5b48: 0x1880004f  blez        $a0, . + 4 + (0x4F << 2)
label_1a5b4c:
    if (ctx->pc == 0x1A5B4Cu) {
        ctx->pc = 0x1A5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B48u;
        // 0x1a5b4c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B50u;
        goto label_1a5b50;
    }
    ctx->pc = 0x1A5B48u;
    {
        const bool branch_taken_0x1a5b48 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A5B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B48u;
        // 0x1a5b4c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b48) {
            ctx->pc = 0x1A5C88u;
            goto label_1a5c88;
        }
    }
    ctx->pc = 0x1A5B50u;
label_1a5b50:
    // 0x1a5b50: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
label_1a5b54:
    if (ctx->pc == 0x1A5B54u) {
        ctx->pc = 0x1A5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B50u;
        // 0x1a5b54: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B58u;
        goto label_1a5b58;
    }
    ctx->pc = 0x1A5B50u;
    {
        const bool branch_taken_0x1a5b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5b50) {
            ctx->pc = 0x1A5B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5B50u;
            // 0x1a5b54: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BB8u;
            goto label_1a5bb8;
        }
    }
    ctx->pc = 0x1A5B58u;
label_1a5b58:
    // 0x1a5b58: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a5b5c:
    // 0x1a5b5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a5b60:
    // 0x1a5b60: 0x2c420141  sltiu       $v0, $v0, 0x141
    ctx->pc = 0x1a5b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
label_1a5b64:
    // 0x1a5b64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a5b68:
    if (ctx->pc == 0x1A5B68u) {
        ctx->pc = 0x1A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B64u;
        // 0x1a5b68: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B6Cu;
        goto label_1a5b6c;
    }
    ctx->pc = 0x1A5B64u;
    {
        const bool branch_taken_0x1a5b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B64u;
        // 0x1a5b68: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b64) {
            ctx->pc = 0x1A5B74u;
            goto label_1a5b74;
        }
    }
    ctx->pc = 0x1A5B6Cu;
label_1a5b6c:
    // 0x1a5b6c: 0xc069a22  jal         func_1A6888
label_1a5b70:
    if (ctx->pc == 0x1A5B70u) {
        ctx->pc = 0x1A5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B6Cu;
        // 0x1a5b70: 0x2484a4e8  addiu       $a0, $a0, -0x5B18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B74u;
        goto label_1a5b74;
    }
    ctx->pc = 0x1A5B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A5B74u);
    ctx->pc = 0x1A5B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B6Cu;
    // 0x1a5b70: 0x2484a4e8  addiu       $a0, $a0, -0x5B18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A5B74u;
label_1a5b74:
    // 0x1a5b74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a5b78:
    // 0x1a5b78: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x1a5b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1a5b7c:
    // 0x1a5b7c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1a5b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a5b80:
    // 0x1a5b80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a5b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a5b84:
    // 0x1a5b84: 0xc069652  jal         func_1A5948
label_1a5b88:
    if (ctx->pc == 0x1A5B88u) {
        ctx->pc = 0x1A5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B84u;
        // 0x1a5b88: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5B8Cu;
        goto label_1a5b8c;
    }
    ctx->pc = 0x1A5B84u;
    SET_GPR_U32(ctx, 31, 0x1A5B8Cu);
    ctx->pc = 0x1A5B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B84u;
    // 0x1a5b88: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5948u;
    { ctx->pc = 0x1a5948; return; }
    ctx->pc = 0x1A5B8Cu;
label_1a5b8c:
    // 0x1a5b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a5b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b90:
    // 0x1a5b90: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1a5b94:
    if (ctx->pc == 0x1A5B94u) {
        ctx->pc = 0x1A5B98u;
        goto label_1a5b98;
    }
    ctx->pc = 0x1A5B90u;
    {
        const bool branch_taken_0x1a5b90 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a5b90) {
            ctx->pc = 0x1A5BA4u;
            goto label_1a5ba4;
        }
    }
    ctx->pc = 0x1A5B98u;
label_1a5b98:
    // 0x1a5b98: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a5b9c:
    // 0x1a5b9c: 0xc069a22  jal         func_1A6888
label_1a5ba0:
    if (ctx->pc == 0x1A5BA0u) {
        ctx->pc = 0x1A5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5B9Cu;
        // 0x1a5ba0: 0x2484a510  addiu       $a0, $a0, -0x5AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BA4u;
        goto label_1a5ba4;
    }
    ctx->pc = 0x1A5B9Cu;
    SET_GPR_U32(ctx, 31, 0x1A5BA4u);
    ctx->pc = 0x1A5BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5B9Cu;
    // 0x1a5ba0: 0x2484a510  addiu       $a0, $a0, -0x5AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A5BA4u;
label_1a5ba4:
    // 0x1a5ba4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a5ba8:
    // 0x1a5ba8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a5bac:
    // 0x1a5bac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1a5bacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1a5bb0:
    // 0x1a5bb0: 0x10000035  b           . + 4 + (0x35 << 2)
label_1a5bb4:
    if (ctx->pc == 0x1A5BB4u) {
        ctx->pc = 0x1A5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BB0u;
        // 0x1a5bb4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BB8u;
        goto label_1a5bb8;
    }
    ctx->pc = 0x1A5BB0u;
    {
        const bool branch_taken_0x1a5bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BB0u;
        // 0x1a5bb4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bb0) {
            ctx->pc = 0x1A5C88u;
            goto label_1a5c88;
        }
    }
    ctx->pc = 0x1A5BB8u;
label_1a5bb8:
    // 0x1a5bb8: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x1a5bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a5bbc:
    // 0x1a5bbc: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1a5bbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1a5bc0:
    // 0x1a5bc0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a5bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a5bc4:
    // 0x1a5bc4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1a5bc8:
    if (ctx->pc == 0x1A5BC8u) {
        ctx->pc = 0x1A5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BC4u;
        // 0x1a5bc8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BCCu;
        goto label_1a5bcc;
    }
    ctx->pc = 0x1A5BC4u;
    {
        const bool branch_taken_0x1a5bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BC4u;
        // 0x1a5bc8: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bc4) {
            ctx->pc = 0x1A5C08u;
            goto label_1a5c08;
        }
    }
    ctx->pc = 0x1A5BCCu;
label_1a5bcc:
    // 0x1a5bcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a5bd0:
    if (ctx->pc == 0x1A5BD0u) {
        ctx->pc = 0x1A5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BCCu;
        // 0x1a5bd0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BD4u;
        goto label_1a5bd4;
    }
    ctx->pc = 0x1A5BCCu;
    {
        const bool branch_taken_0x1a5bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BCCu;
        // 0x1a5bd0: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bcc) {
            ctx->pc = 0x1A5BDCu;
            goto label_1a5bdc;
        }
    }
    ctx->pc = 0x1A5BD4u;
label_1a5bd4:
    // 0x1a5bd4: 0x0  nop
    ctx->pc = 0x1a5bd4u;
    // NOP
label_1a5bd8:
    // 0x1a5bd8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1a5bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a5bdc:
    // 0x1a5bdc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a5be0:
    // 0x1a5be0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a5be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5be4:
    // 0x1a5be4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a5be8:
    // 0x1a5be8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a5bec:
    // 0x1a5bec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a5becu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a5bf0:
    // 0x1a5bf0: 0xc0696a2  jal         func_1A5A88
label_1a5bf4:
    if (ctx->pc == 0x1A5BF4u) {
        ctx->pc = 0x1A5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BF0u;
        // 0x1a5bf4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BF8u;
        goto label_1a5bf8;
    }
    ctx->pc = 0x1A5BF0u;
    SET_GPR_U32(ctx, 31, 0x1A5BF8u);
    ctx->pc = 0x1A5BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BF0u;
    // 0x1a5bf4: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A88u;
    goto label_1a5a88;
    ctx->pc = 0x1A5BF8u;
label_1a5bf8:
    // 0x1a5bf8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1a5bf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1a5bfc:
    // 0x1a5bfc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a5bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a5c00:
    // 0x1a5c00: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_1a5c04:
    if (ctx->pc == 0x1A5C04u) {
        ctx->pc = 0x1A5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C00u;
        // 0x1a5c04: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C08u;
        goto label_1a5c08;
    }
    ctx->pc = 0x1A5C00u;
    {
        const bool branch_taken_0x1a5c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c00) {
            ctx->pc = 0x1A5C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C00u;
            // 0x1a5c04: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5bd8;
        }
    }
    ctx->pc = 0x1A5C08u;
label_1a5c08:
    // 0x1a5c08: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a5c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1a5c0c:
    // 0x1a5c0c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a5c10:
    if (ctx->pc == 0x1A5C10u) {
        ctx->pc = 0x1A5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C0Cu;
        // 0x1a5c10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C14u;
        goto label_1a5c14;
    }
    ctx->pc = 0x1A5C0Cu;
    {
        const bool branch_taken_0x1a5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C0Cu;
        // 0x1a5c10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c0c) {
            ctx->pc = 0x1A5C88u;
            goto label_1a5c88;
        }
    }
    ctx->pc = 0x1A5C14u;
label_1a5c14:
    // 0x1a5c14: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1a5c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a5c18:
    // 0x1a5c18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a5c1c:
    // 0x1a5c1c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1a5c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a5c20:
    // 0x1a5c20: 0xc069660  jal         func_1A5980
label_1a5c24:
    if (ctx->pc == 0x1A5C24u) {
        ctx->pc = 0x1A5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C20u;
        // 0x1a5c24: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C28u;
        goto label_1a5c28;
    }
    ctx->pc = 0x1A5C20u;
    SET_GPR_U32(ctx, 31, 0x1A5C28u);
    ctx->pc = 0x1A5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C20u;
    // 0x1a5c24: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5980u;
    { ctx->pc = 0x1a5980; return; }
    ctx->pc = 0x1A5C28u;
label_1a5c28:
    // 0x1a5c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a5c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c2c:
    // 0x1a5c2c: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
label_1a5c30:
    if (ctx->pc == 0x1A5C30u) {
        ctx->pc = 0x1A5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C2Cu;
        // 0x1a5c30: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C34u;
        goto label_1a5c34;
    }
    ctx->pc = 0x1A5C2Cu;
    {
        const bool branch_taken_0x1a5c2c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1a5c2c) {
            ctx->pc = 0x1A5C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C2Cu;
            // 0x1a5c30: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5C48u;
            goto label_1a5c48;
        }
    }
    ctx->pc = 0x1A5C34u;
label_1a5c34:
    // 0x1a5c34: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a5c38:
    // 0x1a5c38: 0xc069a22  jal         func_1A6888
label_1a5c3c:
    if (ctx->pc == 0x1A5C3Cu) {
        ctx->pc = 0x1A5C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C38u;
        // 0x1a5c3c: 0x2484a528  addiu       $a0, $a0, -0x5AD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C40u;
        goto label_1a5c40;
    }
    ctx->pc = 0x1A5C38u;
    SET_GPR_U32(ctx, 31, 0x1A5C40u);
    ctx->pc = 0x1A5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C38u;
    // 0x1a5c3c: 0x2484a528  addiu       $a0, $a0, -0x5AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A5C40u;
label_1a5c40:
    // 0x1a5c40: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a5c44:
    if (ctx->pc == 0x1A5C44u) {
        ctx->pc = 0x1A5C48u;
        goto label_1a5c48;
    }
    ctx->pc = 0x1A5C40u;
    {
        const bool branch_taken_0x1a5c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c40) {
            ctx->pc = 0x1A5C80u;
            goto label_1a5c80;
        }
    }
    ctx->pc = 0x1A5C48u;
label_1a5c48:
    // 0x1a5c48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a5c4c:
    // 0x1a5c4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a5c50:
    // 0x1a5c50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a5c54:
    // 0x1a5c54: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1a5c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1a5c58:
    // 0x1a5c58: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1a5c5c:
    // 0x1a5c5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a5c60:
    if (ctx->pc == 0x1A5C60u) {
        ctx->pc = 0x1A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C5Cu;
        // 0x1a5c60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C64u;
        goto label_1a5c64;
    }
    ctx->pc = 0x1A5C5Cu;
    {
        const bool branch_taken_0x1a5c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C5Cu;
        // 0x1a5c60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c5c) {
            ctx->pc = 0x1A5C88u;
            goto label_1a5c88;
        }
    }
    ctx->pc = 0x1A5C64u;
label_1a5c64:
    // 0x1a5c64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a5c68:
    // 0x1a5c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a5c6c:
    if (ctx->pc == 0x1A5C6Cu) {
        ctx->pc = 0x1A5C70u;
        goto label_1a5c70;
    }
    ctx->pc = 0x1A5C68u;
    {
        const bool branch_taken_0x1a5c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c68) {
            ctx->pc = 0x1A5C80u;
            goto label_1a5c80;
        }
    }
    ctx->pc = 0x1A5C70u;
label_1a5c70:
    // 0x1a5c70: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1a5c74:
    // 0x1a5c74: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1a5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a5c78:
    // 0x1a5c78: 0xc069a22  jal         func_1A6888
label_1a5c7c:
    if (ctx->pc == 0x1A5C7Cu) {
        ctx->pc = 0x1A5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C78u;
        // 0x1a5c7c: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C80u;
        goto label_1a5c80;
    }
    ctx->pc = 0x1A5C78u;
    SET_GPR_U32(ctx, 31, 0x1A5C80u);
    ctx->pc = 0x1A5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C78u;
    // 0x1a5c7c: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1A5C80u;
label_1a5c80:
    // 0x1a5c80: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1a5c84:
    // 0x1a5c84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a5c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5c88:
    // 0x1a5c88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5c8c:
    // 0x1a5c8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5c90:
    // 0x1a5c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5c94:
    // 0x1a5c94: 0x3e00008  jr          $ra
label_1a5c98:
    if (ctx->pc == 0x1A5C98u) {
        ctx->pc = 0x1A5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C94u;
        // 0x1a5c98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C9Cu;
        goto label_1a5c9c;
    }
    ctx->pc = 0x1A5C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C94u;
        // 0x1a5c98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5C9Cu;
label_1a5c9c:
    // 0x1a5c9c: 0x0  nop
    ctx->pc = 0x1a5c9cu;
    // NOP
label_1a5ca0:
    // 0x1a5ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a5ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a5ca4:
    // 0x1a5ca4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a5ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a5ca8:
    // 0x1a5ca8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a5cac:
    // 0x1a5cac: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1a5cacu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1a5cb0:
    // 0x1a5cb0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a5cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a5cb4:
    // 0x1a5cb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cb8:
    // 0x1a5cb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a5cbc:
    // 0x1a5cbc: 0x26b31410  addiu       $s3, $s5, 0x1410
    ctx->pc = 0x1a5cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
label_1a5cc0:
    // 0x1a5cc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5cc4:
    // 0x1a5cc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cc8:
    // 0x1a5cc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5ccc:
    // 0x1a5ccc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a5cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cd0:
    // 0x1a5cd0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a5cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a5cd4:
    // 0x1a5cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cd8:
    // 0x1a5cd8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1a5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1a5cdc:
    // 0x1a5cdc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_1a5ce0:
    if (ctx->pc == 0x1A5CE0u) {
        ctx->pc = 0x1A5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CDCu;
        // 0x1a5ce0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5CE4u;
        goto label_1a5ce4;
    }
    ctx->pc = 0x1A5CDCu;
    {
        const bool branch_taken_0x1a5cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CDCu;
        // 0x1a5ce0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cdc) {
            ctx->pc = 0x1A5DCCu;
            goto label_1a5dcc;
        }
    }
    ctx->pc = 0x1A5CE4u;
label_1a5ce4:
    // 0x1a5ce4: 0xc06b518  jal         func_1AD460
label_1a5ce8:
    if (ctx->pc == 0x1A5CE8u) {
        ctx->pc = 0x1A5CECu;
        goto label_1a5cec;
    }
    ctx->pc = 0x1A5CE4u;
    SET_GPR_U32(ctx, 31, 0x1A5CECu);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A5CECu;
label_1a5cec:
    // 0x1a5cec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a5cf0:
    // 0x1a5cf0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1a5cf4:
    // 0x1a5cf4: 0x24421440  addiu       $v0, $v0, 0x1440
    ctx->pc = 0x1a5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
label_1a5cf8:
    // 0x1a5cf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5cfc:
    // 0x1a5cfc: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1a5cfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a5d00:
    // 0x1a5d00: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x1a5d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
label_1a5d04:
    // 0x1a5d04: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x1a5d04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
label_1a5d08:
    // 0x1a5d08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1a5d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a5d0c:
    // 0x1a5d0c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1a5d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a5d10:
    // 0x1a5d10: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1a5d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a5d14:
    // 0x1a5d14: 0x24c4000c  addiu       $a0, $a2, 0xC
    ctx->pc = 0x1a5d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1a5d18:
    // 0x1a5d18: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a5d18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1a5d1c:
    // 0x1a5d1c: 0x52480012  beql        $s2, $t0, . + 4 + (0x12 << 2)
label_1a5d20:
    if (ctx->pc == 0x1A5D20u) {
        ctx->pc = 0x1A5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D1Cu;
        // 0x1a5d20: 0x26b01410  addiu       $s0, $s5, 0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D24u;
        goto label_1a5d24;
    }
    ctx->pc = 0x1A5D1Cu;
    {
        const bool branch_taken_0x1a5d1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x1a5d1c) {
            ctx->pc = 0x1A5D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5D1Cu;
            // 0x1a5d20: 0x26b01410  addiu       $s0, $s5, 0x1410 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5D68u;
            goto label_1a5d68;
        }
    }
    ctx->pc = 0x1A5D24u;
label_1a5d24:
    // 0x1a5d24: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1a5d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5d28:
    // 0x1a5d28: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
label_1a5d2c:
    if (ctx->pc == 0x1A5D2Cu) {
        ctx->pc = 0x1A5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D28u;
        // 0x1a5d2c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D30u;
        goto label_1a5d30;
    }
    ctx->pc = 0x1A5D28u;
    {
        const bool branch_taken_0x1a5d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1A5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D28u;
        // 0x1a5d2c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d28) {
            ctx->pc = 0x1A5D48u;
            goto label_1a5d48;
        }
    }
    ctx->pc = 0x1A5D30u;
label_1a5d30:
    // 0x1a5d30: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1a5d30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_1a5d34:
    // 0x1a5d34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a5d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a5d38:
    // 0x1a5d38: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1a5d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
label_1a5d3c:
    // 0x1a5d3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a5d40:
    if (ctx->pc == 0x1A5D40u) {
        ctx->pc = 0x1A5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D3Cu;
        // 0x1a5d40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D44u;
        goto label_1a5d44;
    }
    ctx->pc = 0x1A5D3Cu;
    {
        const bool branch_taken_0x1a5d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D3Cu;
        // 0x1a5d40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d3c) {
            ctx->pc = 0x1A5D64u;
            goto label_1a5d64;
        }
    }
    ctx->pc = 0x1A5D44u;
label_1a5d44:
    // 0x1a5d44: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1a5d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5d48:
    // 0x1a5d48: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1a5d48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a5d4c:
    // 0x1a5d4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a5d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a5d50:
    // 0x1a5d50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a5d54:
    // 0x1a5d54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a5d58:
    // 0x1a5d58: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1a5d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
label_1a5d5c:
    // 0x1a5d5c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1a5d60:
    if (ctx->pc == 0x1A5D60u) {
        ctx->pc = 0x1A5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D5Cu;
        // 0x1a5d60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D64u;
        goto label_1a5d64;
    }
    ctx->pc = 0x1A5D5Cu;
    {
        const bool branch_taken_0x1a5d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D5Cu;
        // 0x1a5d60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d5c) {
            ctx->pc = 0x1A5D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5d18;
        }
    }
    ctx->pc = 0x1A5D64u;
label_1a5d64:
    // 0x1a5d64: 0x26b01410  addiu       $s0, $s5, 0x1410
    ctx->pc = 0x1a5d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 5136));
label_1a5d68:
    // 0x1a5d68: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1a5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1a5d6c:
    // 0x1a5d6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a5d70:
    // 0x1a5d70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a5d74:
    // 0x1a5d74: 0x80c50007  lb          $a1, 0x7($a2)
    ctx->pc = 0x1a5d74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
label_1a5d78:
    // 0x1a5d78: 0x8ea41410  lw          $a0, 0x1410($s5)
    ctx->pc = 0x1a5d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5136)));
label_1a5d7c:
    // 0x1a5d7c: 0xc06963c  jal         func_1A58F0
label_1a5d80:
    if (ctx->pc == 0x1A5D80u) {
        ctx->pc = 0x1A5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D7Cu;
        // 0x1a5d80: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D84u;
        goto label_1a5d84;
    }
    ctx->pc = 0x1A5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D84u);
    ctx->pc = 0x1A5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D7Cu;
    // 0x1a5d80: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A58F0u;
    { ctx->pc = 0x1a58f0; return; }
    ctx->pc = 0x1A5D84u;
label_1a5d84:
    // 0x1a5d84: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_1a5d88:
    if (ctx->pc == 0x1A5D88u) {
        ctx->pc = 0x1A5D8Cu;
        goto label_1a5d8c;
    }
    ctx->pc = 0x1A5D84u;
    {
        const bool branch_taken_0x1a5d84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a5d84) {
            ctx->pc = 0x1A5D9Cu;
            goto label_1a5d9c;
        }
    }
    ctx->pc = 0x1A5D8Cu;
label_1a5d8c:
    // 0x1a5d8c: 0xc06b52a  jal         func_1AD4A8
label_1a5d90:
    if (ctx->pc == 0x1A5D90u) {
        ctx->pc = 0x1A5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D8Cu;
        // 0x1a5d90: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D94u;
        goto label_1a5d94;
    }
    ctx->pc = 0x1A5D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D94u);
    ctx->pc = 0x1A5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D8Cu;
    // 0x1a5d90: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A5D94u;
label_1a5d94:
    // 0x1a5d94: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a5d98:
    if (ctx->pc == 0x1A5D98u) {
        ctx->pc = 0x1A5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D94u;
        // 0x1a5d98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D9Cu;
        goto label_1a5d9c;
    }
    ctx->pc = 0x1A5D94u;
    {
        const bool branch_taken_0x1a5d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D94u;
        // 0x1a5d98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d94) {
            ctx->pc = 0x1A5DCCu;
            goto label_1a5dcc;
        }
    }
    ctx->pc = 0x1A5D9Cu;
label_1a5d9c:
    // 0x1a5d9c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a5da0:
    // 0x1a5da0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a5da4:
    if (ctx->pc == 0x1A5DA4u) {
        ctx->pc = 0x1A5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DA0u;
        // 0x1a5da4: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5DA8u;
        goto label_1a5da8;
    }
    ctx->pc = 0x1A5DA0u;
    {
        const bool branch_taken_0x1a5da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DA0u;
        // 0x1a5da4: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5da0) {
            ctx->pc = 0x1A5DC0u;
            goto label_1a5dc0;
        }
    }
    ctx->pc = 0x1A5DA8u;
label_1a5da8:
    // 0x1a5da8: 0x8e241410  lw          $a0, 0x1410($s1)
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5136)));
label_1a5dac:
    // 0x1a5dac: 0xc069648  jal         func_1A5920
label_1a5db0:
    if (ctx->pc == 0x1A5DB0u) {
        ctx->pc = 0x1A5DB4u;
        goto label_1a5db4;
    }
    ctx->pc = 0x1A5DACu;
    SET_GPR_U32(ctx, 31, 0x1A5DB4u);
    ctx->pc = 0x1A5920u;
    { ctx->pc = 0x1a5920; return; }
    ctx->pc = 0x1A5DB4u;
label_1a5db4:
    // 0x1a5db4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a5db8:
    // 0x1a5db8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1a5dbc:
    if (ctx->pc == 0x1A5DBCu) {
        ctx->pc = 0x1A5DC0u;
        goto label_1a5dc0;
    }
    ctx->pc = 0x1A5DB8u;
    {
        const bool branch_taken_0x1a5db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5db8) {
            ctx->pc = 0x1A5DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5da8;
        }
    }
    ctx->pc = 0x1A5DC0u;
label_1a5dc0:
    // 0x1a5dc0: 0xc06b52a  jal         func_1AD4A8
label_1a5dc4:
    if (ctx->pc == 0x1A5DC4u) {
        ctx->pc = 0x1A5DC8u;
        goto label_1a5dc8;
    }
    ctx->pc = 0x1A5DC0u;
    SET_GPR_U32(ctx, 31, 0x1A5DC8u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A5DC8u;
label_1a5dc8:
    // 0x1a5dc8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a5dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a5dcc:
    // 0x1a5dcc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a5dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a5dd0:
    // 0x1a5dd0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a5dd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5dd4:
    // 0x1a5dd4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a5dd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5dd8:
    // 0x1a5dd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a5dd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5ddc:
    // 0x1a5ddc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5ddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5de0:
    // 0x1a5de0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5de4:
    // 0x1a5de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5de8:
    // 0x1a5de8: 0x3e00008  jr          $ra
label_1a5dec:
    if (ctx->pc == 0x1A5DECu) {
        ctx->pc = 0x1A5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DE8u;
        // 0x1a5dec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5DF0u;
        goto label_1a5df0;
    }
    ctx->pc = 0x1A5DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DE8u;
        // 0x1a5dec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5DF0u;
label_1a5df0:
    // 0x1a5df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a5df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a5df4:
    // 0x1a5df4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a5df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5df8:
    // 0x1a5df8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a5dfc:
    // 0x1a5dfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a5e00:
    // 0x1a5e00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a5e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e04:
    // 0x1a5e04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a5e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a5e08:
    // 0x1a5e08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a5e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e0c:
    // 0x1a5e0c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a5e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a5e10:
    // 0x1a5e10: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5e14:
    // 0x1a5e14: 0x1a400021  blez        $s2, . + 4 + (0x21 << 2)
label_1a5e18:
    if (ctx->pc == 0x1A5E18u) {
        ctx->pc = 0x1A5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E14u;
        // 0x1a5e18: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E1Cu;
        goto label_1a5e1c;
    }
    ctx->pc = 0x1A5E14u;
    {
        const bool branch_taken_0x1a5e14 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1A5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E14u;
        // 0x1a5e18: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e14) {
            ctx->pc = 0x1A5E9Cu;
            goto label_1a5e9c;
        }
    }
    ctx->pc = 0x1A5E1Cu;
label_1a5e1c:
    // 0x1a5e1c: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1a5e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1a5e20:
    // 0x1a5e20: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a5e24:
    // 0x1a5e24: 0x0  nop
    ctx->pc = 0x1a5e24u;
    // NOP
label_1a5e28:
    // 0x1a5e28: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x1a5e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a5e2c:
    // 0x1a5e2c: 0x8c441428  lw          $a0, 0x1428($v0)
    ctx->pc = 0x1a5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5160)));
label_1a5e30:
    // 0x1a5e30: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x1a5e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1a5e34:
    // 0x1a5e34: 0x0  nop
    ctx->pc = 0x1a5e34u;
    // NOP
label_1a5e38:
    // 0x1a5e38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a5e3c:
    // 0x1a5e3c: 0x0  nop
    ctx->pc = 0x1a5e3cu;
    // NOP
label_1a5e40:
    // 0x1a5e40: 0x0  nop
    ctx->pc = 0x1a5e40u;
    // NOP
label_1a5e44:
    // 0x1a5e44: 0x0  nop
    ctx->pc = 0x1a5e44u;
    // NOP
label_1a5e48:
    // 0x1a5e48: 0x0  nop
    ctx->pc = 0x1a5e48u;
    // NOP
label_1a5e4c:
    // 0x1a5e4c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1a5e50:
    if (ctx->pc == 0x1A5E50u) {
        ctx->pc = 0x1A5E54u;
        goto label_1a5e54;
    }
    ctx->pc = 0x1A5E4Cu;
    {
        const bool branch_taken_0x1a5e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5e4c) {
            ctx->pc = 0x1A5E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5e38;
        }
    }
    ctx->pc = 0x1A5E54u;
label_1a5e54:
    // 0x1a5e54: 0x26651410  addiu       $a1, $s3, 0x1410
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 5136));
label_1a5e58:
    // 0x1a5e58: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1a5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1a5e5c:
    // 0x1a5e5c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a5e60:
    // 0x1a5e60: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a5e60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5e64:
    // 0x1a5e64: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1a5e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a5e68:
    // 0x1a5e68: 0xc0696b2  jal         func_1A5AC8
label_1a5e6c:
    if (ctx->pc == 0x1A5E6Cu) {
        ctx->pc = 0x1A5E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E68u;
        // 0x1a5e6c: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E70u;
        goto label_1a5e70;
    }
    ctx->pc = 0x1A5E68u;
    SET_GPR_U32(ctx, 31, 0x1A5E70u);
    ctx->pc = 0x1A5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E68u;
    // 0x1a5e6c: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5AC8u;
    goto label_1a5ac8;
    ctx->pc = 0x1A5E70u;
label_1a5e70:
    // 0x1a5e70: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1a5e70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5e74:
    // 0x1a5e74: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a5e78:
    // 0x1a5e78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a5e7c:
    if (ctx->pc == 0x1A5E7Cu) {
        ctx->pc = 0x1A5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E78u;
        // 0x1a5e7c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E80u;
        goto label_1a5e80;
    }
    ctx->pc = 0x1A5E78u;
    {
        const bool branch_taken_0x1a5e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E78u;
        // 0x1a5e7c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e78) {
            ctx->pc = 0x1A5E88u;
            goto label_1a5e88;
        }
    }
    ctx->pc = 0x1A5E80u;
label_1a5e80:
    // 0x1a5e80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1a5e84:
    if (ctx->pc == 0x1A5E84u) {
        ctx->pc = 0x1A5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E80u;
        // 0x1a5e84: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E88u;
        goto label_1a5e88;
    }
    ctx->pc = 0x1A5E80u;
    {
        const bool branch_taken_0x1a5e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E80u;
        // 0x1a5e84: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e80) {
            ctx->pc = 0x1A5E90u;
            goto label_1a5e90;
        }
    }
    ctx->pc = 0x1A5E88u;
label_1a5e88:
    // 0x1a5e88: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a5e8c:
    if (ctx->pc == 0x1A5E8Cu) {
        ctx->pc = 0x1A5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E88u;
        // 0x1a5e8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E90u;
        goto label_1a5e90;
    }
    ctx->pc = 0x1A5E88u;
    {
        const bool branch_taken_0x1a5e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E88u;
        // 0x1a5e8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e88) {
            ctx->pc = 0x1A5EA0u;
            goto label_1a5ea0;
        }
    }
    ctx->pc = 0x1A5E90u;
label_1a5e90:
    // 0x1a5e90: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x1a5e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1a5e94:
    // 0x1a5e94: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_1a5e98:
    if (ctx->pc == 0x1A5E98u) {
        ctx->pc = 0x1A5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E94u;
        // 0x1a5e98: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5E9Cu;
        goto label_1a5e9c;
    }
    ctx->pc = 0x1A5E94u;
    {
        const bool branch_taken_0x1a5e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E94u;
        // 0x1a5e98: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e94) {
            ctx->pc = 0x1A5E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5e28;
        }
    }
    ctx->pc = 0x1A5E9Cu;
label_1a5e9c:
    // 0x1a5e9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a5e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ea0:
    // 0x1a5ea0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a5ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5ea4:
    // 0x1a5ea4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a5ea4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5ea8:
    // 0x1a5ea8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a5ea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5eac:
    // 0x1a5eac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5eb0:
    // 0x1a5eb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5eb4:
    // 0x1a5eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5eb8:
    // 0x1a5eb8: 0x3e00008  jr          $ra
label_1a5ebc:
    if (ctx->pc == 0x1A5EBCu) {
        ctx->pc = 0x1A5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EB8u;
        // 0x1a5ebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EC0u;
        goto label_1a5ec0;
    }
    ctx->pc = 0x1A5EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EB8u;
        // 0x1a5ebc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5EC0u;
label_1a5ec0:
    // 0x1a5ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a5ec4:
    // 0x1a5ec4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ec8:
    // 0x1a5ec8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5ecc:
    // 0x1a5ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5ed0:
    // 0x1a5ed0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a5ed4:
    // 0x1a5ed4: 0xc0692a8  jal         func_1A4AA0
label_1a5ed8:
    if (ctx->pc == 0x1A5ED8u) {
        ctx->pc = 0x1A5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5ED4u;
        // 0x1a5ed8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EDCu;
        goto label_1a5edc;
    }
    ctx->pc = 0x1A5ED4u;
    SET_GPR_U32(ctx, 31, 0x1A5EDCu);
    ctx->pc = 0x1A5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5ED4u;
    // 0x1a5ed8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1A5EDCu;
label_1a5edc:
    // 0x1a5edc: 0x26111410  addiu       $s1, $s0, 0x1410
    ctx->pc = 0x1a5edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5136));
label_1a5ee0:
    // 0x1a5ee0: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a5ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_1a5ee4:
    // 0x1a5ee4: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x1a5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1a5ee8:
    // 0x1a5ee8: 0x24c65b08  addiu       $a2, $a2, 0x5B08
    ctx->pc = 0x1a5ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23304));
label_1a5eec:
    // 0x1a5eec: 0xc069620  jal         func_1A5880
label_1a5ef0:
    if (ctx->pc == 0x1A5EF0u) {
        ctx->pc = 0x1A5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EECu;
        // 0x1a5ef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5EF4u;
        goto label_1a5ef4;
    }
    ctx->pc = 0x1A5EECu;
    SET_GPR_U32(ctx, 31, 0x1A5EF4u);
    ctx->pc = 0x1A5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EECu;
    // 0x1a5ef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5880u;
    { ctx->pc = 0x1a5880; return; }
    ctx->pc = 0x1A5EF4u;
label_1a5ef4:
    // 0x1a5ef4: 0xae021410  sw          $v0, 0x1410($s0)
    ctx->pc = 0x1a5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5136), GPR_U32(ctx, 2));
label_1a5ef8:
    // 0x1a5ef8: 0x8e021410  lw          $v0, 0x1410($s0)
    ctx->pc = 0x1a5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5136)));
label_1a5efc:
    // 0x1a5efc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1a5f00:
    if (ctx->pc == 0x1A5F00u) {
        ctx->pc = 0x1A5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EFCu;
        // 0x1a5f00: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F04u;
        goto label_1a5f04;
    }
    ctx->pc = 0x1A5EFCu;
    {
        const bool branch_taken_0x1a5efc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EFCu;
        // 0x1a5f00: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5efc) {
            ctx->pc = 0x1A5F0Cu;
            goto label_1a5f0c;
        }
    }
    ctx->pc = 0x1A5F04u;
label_1a5f04:
    // 0x1a5f04: 0x10000018  b           . + 4 + (0x18 << 2)
label_1a5f08:
    if (ctx->pc == 0x1A5F08u) {
        ctx->pc = 0x1A5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F04u;
        // 0x1a5f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F0Cu;
        goto label_1a5f0c;
    }
    ctx->pc = 0x1A5F04u;
    {
        const bool branch_taken_0x1a5f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F04u;
        // 0x1a5f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f04) {
            ctx->pc = 0x1A5F68u;
            goto label_1a5f68;
        }
    }
    ctx->pc = 0x1A5F0Cu;
label_1a5f0c:
    // 0x1a5f0c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a5f10:
    // 0x1a5f10: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a5f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1a5f14:
    // 0x1a5f14: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1a5f18:
    // 0x1a5f18: 0x24841580  addiu       $a0, $a0, 0x1580
    ctx->pc = 0x1a5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5504));
label_1a5f1c:
    // 0x1a5f1c: 0x24421440  addiu       $v0, $v0, 0x1440
    ctx->pc = 0x1a5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
label_1a5f20:
    // 0x1a5f20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a5f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a5f24:
    // 0x1a5f24: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1a5f28:
    // 0x1a5f28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a5f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1a5f2c:
    // 0x1a5f2c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a5f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1a5f30:
    // 0x1a5f30: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1a5f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_1a5f34:
    // 0x1a5f34: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x1a5f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1a5f38:
    // 0x1a5f38: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1a5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1a5f3c:
    // 0x1a5f3c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1a5f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1a5f40:
    // 0x1a5f40: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1a5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1a5f44:
    // 0x1a5f44: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1a5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1a5f48:
    // 0x1a5f48: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x1a5f48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
label_1a5f4c:
    // 0x1a5f4c: 0xa0450006  sb          $a1, 0x6($v0)
    ctx->pc = 0x1a5f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 5));
label_1a5f50:
    // 0x1a5f50: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x1a5f50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
label_1a5f54:
    // 0x1a5f54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a5f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1a5f58:
    // 0x1a5f58: 0xc069698  jal         func_1A5A60
label_1a5f5c:
    if (ctx->pc == 0x1A5F5Cu) {
        ctx->pc = 0x1A5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F58u;
        // 0x1a5f5c: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F60u;
        goto label_1a5f60;
    }
    ctx->pc = 0x1A5F58u;
    SET_GPR_U32(ctx, 31, 0x1A5F60u);
    ctx->pc = 0x1A5F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5F58u;
    // 0x1a5f5c: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A60u;
    goto label_1a5a60;
    ctx->pc = 0x1A5F60u;
label_1a5f60:
    // 0x1a5f60: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1a5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1a5f64:
    // 0x1a5f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5f68:
    // 0x1a5f68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5f6c:
    // 0x1a5f6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5f70:
    // 0x1a5f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5f74:
    // 0x1a5f74: 0x3e00008  jr          $ra
label_1a5f78:
    if (ctx->pc == 0x1A5F78u) {
        ctx->pc = 0x1A5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F74u;
        // 0x1a5f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5F7Cu;
        goto label_1a5f7c;
    }
    ctx->pc = 0x1A5F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F74u;
        // 0x1a5f78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5F7Cu;
label_1a5f7c:
    // 0x1a5f7c: 0x0  nop
    ctx->pc = 0x1a5f7cu;
    // NOP
label_1a5f80:
    // 0x1a5f80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a5f84:
    // 0x1a5f84: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x1a5f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_1a5f88:
    // 0x1a5f88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5f8c:
    // 0x1a5f8c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a5f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1a5f90:
    // 0x1a5f90: 0x0  nop
    ctx->pc = 0x1a5f90u;
    // NOP
label_1a5f94:
    // 0x1a5f94: 0x0  nop
    ctx->pc = 0x1a5f94u;
    // NOP
label_1a5f98:
    // 0x1a5f98: 0x0  nop
    ctx->pc = 0x1a5f98u;
    // NOP
label_1a5f9c:
    // 0x1a5f9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a5fa0:
    if (ctx->pc == 0x1A5FA0u) {
        ctx->pc = 0x1A5FA4u;
        goto label_1a5fa4;
    }
    ctx->pc = 0x1A5F9Cu;
    {
        const bool branch_taken_0x1a5f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f9c) {
            ctx->pc = 0x1A5F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5f88;
        }
    }
    ctx->pc = 0x1A5FA4u;
label_1a5fa4:
    // 0x1a5fa4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a5fa8:
    // 0x1a5fa8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a5fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5fac:
    // 0x1a5fac: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x1a5facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
label_1a5fb0:
    // 0x1a5fb0: 0x3e00008  jr          $ra
label_1a5fb4:
    if (ctx->pc == 0x1A5FB4u) {
        ctx->pc = 0x1A5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FB0u;
        // 0x1a5fb4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5FB8u;
        goto label_1a5fb8;
    }
    ctx->pc = 0x1A5FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FB0u;
        // 0x1a5fb4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5FB8u;
label_1a5fb8:
    // 0x1a5fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a5fbc:
    // 0x1a5fbc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5fc0:
    // 0x1a5fc0: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1a5fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
label_1a5fc4:
    // 0x1a5fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5fc8:
    // 0x1a5fc8: 0x8e255b60  lw          $a1, 0x5B60($s1)
    ctx->pc = 0x1a5fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23392)));
label_1a5fcc:
    // 0x1a5fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5fd0:
    // 0x1a5fd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a5fd4:
    // 0x1a5fd4: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x1a5fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
label_1a5fd8:
    // 0x1a5fd8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1a5fdc:
    if (ctx->pc == 0x1A5FDCu) {
        ctx->pc = 0x1A5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FD8u;
        // 0x1a5fdc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5FE0u;
        goto label_1a5fe0;
    }
    ctx->pc = 0x1A5FD8u;
    {
        const bool branch_taken_0x1a5fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FD8u;
        // 0x1a5fdc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fd8) {
            ctx->pc = 0x1A6000u;
            goto label_1a6000;
        }
    }
    ctx->pc = 0x1A5FE0u;
label_1a5fe0:
    // 0x1a5fe0: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a5fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1a5fe4:
    // 0x1a5fe4: 0xae205b60  sw          $zero, 0x5B60($s1)
    ctx->pc = 0x1a5fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23392), GPR_U32(ctx, 0));
label_1a5fe8:
    // 0x1a5fe8: 0x264216c0  addiu       $v0, $s2, 0x16C0
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
label_1a5fec:
    // 0x1a5fec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ff0:
    // 0x1a5ff0: 0xc06968e  jal         func_1A5A38
label_1a5ff4:
    if (ctx->pc == 0x1A5FF4u) {
        ctx->pc = 0x1A5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF0u;
        // 0x1a5ff4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5FF8u;
        goto label_1a5ff8;
    }
    ctx->pc = 0x1A5FF0u;
    SET_GPR_U32(ctx, 31, 0x1A5FF8u);
    ctx->pc = 0x1A5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5FF0u;
    // 0x1a5ff4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A38u;
    goto label_1a5a38;
    ctx->pc = 0x1A5FF8u;
label_1a5ff8:
    // 0x1a5ff8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5ffc:
    if (ctx->pc == 0x1A5FFCu) {
        ctx->pc = 0x1A5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF8u;
        // 0x1a5ffc: 0x8e255b60  lw          $a1, 0x5B60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6000u;
        goto label_1a6000;
    }
    ctx->pc = 0x1A5FF8u;
    {
        const bool branch_taken_0x1a5ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF8u;
        // 0x1a5ffc: 0x8e255b60  lw          $a1, 0x5B60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ff8) {
            ctx->pc = 0x1A6004u;
            goto label_1a6004;
        }
    }
    ctx->pc = 0x1A6000u;
label_1a6000:
    // 0x1a6000: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a6000u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1a6004:
    // 0x1a6004: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a6004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a6008:
    // 0x1a6008: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
label_1a600c:
    if (ctx->pc == 0x1A600Cu) {
        ctx->pc = 0x1A600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6008u;
        // 0x1a600c: 0x264216c0  addiu       $v0, $s2, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6010u;
        goto label_1a6010;
    }
    ctx->pc = 0x1A6008u;
    {
        const bool branch_taken_0x1a6008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6008u;
        // 0x1a600c: 0x264216c0  addiu       $v0, $s2, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6008) {
            ctx->pc = 0x1A6040u;
            goto label_1a6040;
        }
    }
    ctx->pc = 0x1A6010u;
label_1a6010:
    // 0x1a6010: 0x264416c0  addiu       $a0, $s2, 0x16C0
    ctx->pc = 0x1a6010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
label_1a6014:
    // 0x1a6014: 0xae205b60  sw          $zero, 0x5B60($s1)
    ctx->pc = 0x1a6014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23392), GPR_U32(ctx, 0));
label_1a6018:
    // 0x1a6018: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1a6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1a601c:
    // 0x1a601c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a601cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6020:
    // 0x1a6020: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1a6020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_1a6024:
    // 0x1a6024: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6028:
    // 0x1a6028: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a602c:
    // 0x1a602c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a602cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6030:
    // 0x1a6030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6034:
    // 0x1a6034: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1a6034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1a6038:
    // 0x1a6038: 0x806968e  j           func_1A5A38
label_1a603c:
    if (ctx->pc == 0x1A603Cu) {
        ctx->pc = 0x1A603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6038u;
        // 0x1a603c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6040u;
        goto label_1a6040;
    }
    ctx->pc = 0x1A6038u;
    ctx->pc = 0x1A603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6038u;
    // 0x1a603c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A38u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a5a38;
    ctx->pc = 0x1A6040u;
label_1a6040:
    // 0x1a6040: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1a6040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a6044:
    // 0x1a6044: 0xae235b60  sw          $v1, 0x5B60($s1)
    ctx->pc = 0x1a6044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23392), GPR_U32(ctx, 3));
label_1a6048:
    // 0x1a6048: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a604c:
    // 0x1a604c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1a604cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
label_1a6050:
    // 0x1a6050: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a6050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6054:
    // 0x1a6054: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6058:
    // 0x1a6058: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a605c:
    // 0x1a605c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a605cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6060:
    // 0x1a6060: 0x3e00008  jr          $ra
label_1a6064:
    if (ctx->pc == 0x1A6064u) {
        ctx->pc = 0x1A6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6060u;
        // 0x1a6064: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6068u;
        goto label_1a6068;
    }
    ctx->pc = 0x1A6060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6060u;
        // 0x1a6064: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6068u;
label_1a6068:
    // 0x1a6068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a606c:
    // 0x1a606c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a6070:
    // 0x1a6070: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1a6074:
    if (ctx->pc == 0x1A6074u) {
        ctx->pc = 0x1A6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6070u;
        // 0x1a6074: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6078u;
        goto label_1a6078;
    }
    ctx->pc = 0x1A6070u;
    {
        const bool branch_taken_0x1a6070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6070u;
        // 0x1a6074: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6070) {
            ctx->pc = 0x1A6090u;
            goto label_1a6090;
        }
    }
    ctx->pc = 0x1A6078u;
label_1a6078:
    // 0x1a6078: 0xc0697e0  jal         func_1A5F80
label_1a607c:
    if (ctx->pc == 0x1A607Cu) {
        ctx->pc = 0x1A607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6078u;
        // 0x1a607c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6080u;
        goto label_1a6080;
    }
    ctx->pc = 0x1A6078u;
    SET_GPR_U32(ctx, 31, 0x1A6080u);
    ctx->pc = 0x1A607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6078u;
    // 0x1a607c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    goto label_1a5f80;
    ctx->pc = 0x1A6080u;
label_1a6080:
    // 0x1a6080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6084:
    // 0x1a6084: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a6084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a6088:
    // 0x1a6088: 0x80697e0  j           func_1A5F80
label_1a608c:
    if (ctx->pc == 0x1A608Cu) {
        ctx->pc = 0x1A608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6088u;
        // 0x1a608c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6090u;
        goto label_1a6090;
    }
    ctx->pc = 0x1A6088u;
    ctx->pc = 0x1A608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6088u;
    // 0x1a608c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a5f80;
    ctx->pc = 0x1A6090u;
label_1a6090:
    // 0x1a6090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6094:
    // 0x1a6094: 0x80697e0  j           func_1A5F80
label_1a6098:
    if (ctx->pc == 0x1A6098u) {
        ctx->pc = 0x1A6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6094u;
        // 0x1a6098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A609Cu;
        goto label_1a609c;
    }
    ctx->pc = 0x1A6094u;
    ctx->pc = 0x1A6098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6094u;
    // 0x1a6098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5F80u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a5f80;
    ctx->pc = 0x1A609Cu;
label_1a609c:
    // 0x1a609c: 0x0  nop
    ctx->pc = 0x1a609cu;
    // NOP
label_1a60a0:
    // 0x1a60a0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a60a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a60a4:
    // 0x1a60a4: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x1a60a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
label_1a60a8:
    // 0x1a60a8: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x1a60a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
label_1a60ac:
    // 0x1a60ac: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x1a60acu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
label_1a60b0:
    // 0x1a60b0: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x1a60b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
label_1a60b4:
    // 0x1a60b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a60b8:
    if (ctx->pc == 0x1A60B8u) {
        ctx->pc = 0x1A60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60B4u;
        // 0x1a60b8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60BCu;
        goto label_1a60bc;
    }
    ctx->pc = 0x1A60B4u;
    {
        const bool branch_taken_0x1a60b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60B4u;
        // 0x1a60b8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60b4) {
            ctx->pc = 0x1A60C4u;
            goto label_1a60c4;
        }
    }
    ctx->pc = 0x1A60BCu;
label_1a60bc:
    // 0x1a60bc: 0x3e00008  jr          $ra
label_1a60c0:
    if (ctx->pc == 0x1A60C0u) {
        ctx->pc = 0x1A60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60BCu;
        // 0x1a60c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60C4u;
        goto label_1a60c4;
    }
    ctx->pc = 0x1A60BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60BCu;
        // 0x1a60c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A60BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A60C4u;
label_1a60c4:
    // 0x1a60c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a60c8:
    if (ctx->pc == 0x1A60C8u) {
        ctx->pc = 0x1A60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60C4u;
        // 0x1a60c8: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60CCu;
        goto label_1a60cc;
    }
    ctx->pc = 0x1A60C4u;
    {
        const bool branch_taken_0x1a60c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60C4u;
        // 0x1a60c8: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60c4) {
            ctx->pc = 0x1A60D4u;
            goto label_1a60d4;
        }
    }
    ctx->pc = 0x1A60CCu;
label_1a60cc:
    // 0x1a60cc: 0x3e00008  jr          $ra
label_1a60d0:
    if (ctx->pc == 0x1A60D0u) {
        ctx->pc = 0x1A60D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60CCu;
        // 0x1a60d0: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60D4u;
        goto label_1a60d4;
    }
    ctx->pc = 0x1A60CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A60D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60CCu;
        // 0x1a60d0: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A60CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A60D4u;
label_1a60d4:
    // 0x1a60d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1a60d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1a60d8:
    // 0x1a60d8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1a60d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
label_1a60dc:
    // 0x1a60dc: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x1a60dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
label_1a60e0:
    // 0x1a60e0: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
label_1a60e4:
    if (ctx->pc == 0x1A60E4u) {
        ctx->pc = 0x1A60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60E0u;
        // 0x1a60e4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A60E8u;
        goto label_1a60e8;
    }
    ctx->pc = 0x1A60E0u;
    {
        const bool branch_taken_0x1a60e0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1A60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60E0u;
        // 0x1a60e4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60e0) {
            ctx->pc = 0x1A6118u;
            goto label_1a6118;
        }
    }
    ctx->pc = 0x1A60E8u;
label_1a60e8:
    // 0x1a60e8: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x1a60e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
label_1a60ec:
    // 0x1a60ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a60f0:
    // 0x1a60f0: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x1a60f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
label_1a60f4:
    // 0x1a60f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a60f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1a60f8:
    // 0x1a60f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1a60f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1a60fc:
    // 0x1a60fc: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x1a60fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
label_1a6100:
    // 0x1a6100: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x1a6100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_1a6104:
    // 0x1a6104: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
label_1a6108:
    if (ctx->pc == 0x1A6108u) {
        ctx->pc = 0x1A6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6104u;
        // 0x1a6108: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A610Cu;
        goto label_1a610c;
    }
    ctx->pc = 0x1A6104u;
    {
        const bool branch_taken_0x1a6104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a6104) {
            ctx->pc = 0x1A6108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6104u;
            // 0x1a6108: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6124u;
            goto label_1a6124;
        }
    }
    ctx->pc = 0x1A610Cu;
label_1a610c:
    // 0x1a610c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x1a610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
label_1a6110:
    // 0x1a6110: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a6114:
    if (ctx->pc == 0x1A6114u) {
        ctx->pc = 0x1A6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6110u;
        // 0x1a6114: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6118u;
        goto label_1a6118;
    }
    ctx->pc = 0x1A6110u;
    {
        const bool branch_taken_0x1a6110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6110u;
        // 0x1a6114: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6110) {
            ctx->pc = 0x1A6124u;
            goto label_1a6124;
        }
    }
    ctx->pc = 0x1A6118u;
label_1a6118:
    // 0x1a6118: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1a6118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_1a611c:
    // 0x1a611c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a611cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1a6120:
    // 0x1a6120: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x1a6120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_1a6124:
    // 0x1a6124: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1a6124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_1a6128:
    // 0x1a6128: 0x3e00008  jr          $ra
label_1a612c:
    if (ctx->pc == 0x1A612Cu) {
        ctx->pc = 0x1A612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6128u;
        // 0x1a612c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6130u;
        goto label_1a6130;
    }
    ctx->pc = 0x1A6128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6128u;
        // 0x1a612c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6130u;
label_1a6130:
    // 0x1a6130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a6130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a6134:
    // 0x1a6134: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a6134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a6138:
    // 0x1a6138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a613c:
    // 0x1a613c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a613cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6140:
    // 0x1a6140: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a6140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a6144:
    // 0x1a6144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6148:
    // 0x1a6148: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a6148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a614c:
    // 0x1a614c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a614cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6150:
    // 0x1a6150: 0xc06def6  jal         func_1B7BD8
label_1a6154:
    if (ctx->pc == 0x1A6154u) {
        ctx->pc = 0x1A6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6150u;
        // 0x1a6154: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6158u;
        goto label_1a6158;
    }
    ctx->pc = 0x1A6150u;
    SET_GPR_U32(ctx, 31, 0x1A6158u);
    ctx->pc = 0x1A6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6150u;
    // 0x1a6154: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A6158u;
label_1a6158:
    // 0x1a6158: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_1a615c:
    if (ctx->pc == 0x1A615Cu) {
        ctx->pc = 0x1A615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6158u;
        // 0x1a615c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6160u;
        goto label_1a6160;
    }
    ctx->pc = 0x1A6158u;
    {
        const bool branch_taken_0x1a6158 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6158u;
        // 0x1a615c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6158) {
            ctx->pc = 0x1A617Cu;
            goto label_1a617c;
        }
    }
    ctx->pc = 0x1A6160u;
label_1a6160:
    // 0x1a6160: 0xc06dd8a  jal         func_1B7628
label_1a6164:
    if (ctx->pc == 0x1A6164u) {
        ctx->pc = 0x1A6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6160u;
        // 0x1a6164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6168u;
        goto label_1a6168;
    }
    ctx->pc = 0x1A6160u;
    SET_GPR_U32(ctx, 31, 0x1A6168u);
    ctx->pc = 0x1A6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6160u;
    // 0x1a6164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x1A6168u;
label_1a6168:
    // 0x1a6168: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a6168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a616c:
    // 0x1a616c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a616cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6170:
    // 0x1a6170: 0x8c625b64  lw          $v0, 0x5B64($v1)
    ctx->pc = 0x1a6170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23396)));
label_1a6174:
    // 0x1a6174: 0x40f809  jalr        $v0
label_1a6178:
    if (ctx->pc == 0x1A6178u) {
        ctx->pc = 0x1A6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6174u;
        // 0x1a6178: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A617Cu;
        goto label_1a617c;
    }
    ctx->pc = 0x1A6174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A617Cu);
        ctx->pc = 0x1A6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6174u;
        // 0x1a6178: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6174u, 0x1A617Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A617Cu;
label_1a617c:
    // 0x1a617c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a617cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1a6180:
    // 0x1a6180: 0xdc25a578  ld          $a1, -0x5A88($at)
    ctx->pc = 0x1a6180u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944120)));
label_1a6184:
    // 0x1a6184: 0xc06def6  jal         func_1B7BD8
label_1a6188:
    if (ctx->pc == 0x1A6188u) {
        ctx->pc = 0x1A6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6184u;
        // 0x1a6188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A618Cu;
        goto label_1a618c;
    }
    ctx->pc = 0x1A6184u;
    SET_GPR_U32(ctx, 31, 0x1A618Cu);
    ctx->pc = 0x1A6188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6184u;
    // 0x1a6188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A618Cu;
label_1a618c:
    // 0x1a618c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_1a6190:
    if (ctx->pc == 0x1A6190u) {
        ctx->pc = 0x1A6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A618Cu;
        // 0x1a6190: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6194u;
        goto label_1a6194;
    }
    ctx->pc = 0x1A618Cu;
    {
        const bool branch_taken_0x1a618c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A618Cu;
        // 0x1a6190: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a618c) {
            ctx->pc = 0x1A61D4u;
            goto label_1a61d4;
        }
    }
    ctx->pc = 0x1A6194u;
label_1a6194:
    // 0x1a6194: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a6198:
    if (ctx->pc == 0x1A6198u) {
        ctx->pc = 0x1A619Cu;
        goto label_1a619c;
    }
    ctx->pc = 0x1A6194u;
    {
        const bool branch_taken_0x1a6194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6194) {
            ctx->pc = 0x1A61B4u;
            goto label_1a61b4;
        }
    }
    ctx->pc = 0x1A619Cu;
label_1a619c:
    // 0x1a619c: 0x0  nop
    ctx->pc = 0x1a619cu;
    // NOP
label_1a61a0:
    // 0x1a61a0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x1a61a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_1a61a4:
    // 0x1a61a4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1a61a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_1a61a8:
    // 0x1a61a8: 0xc06dda4  jal         func_1B7690
label_1a61ac:
    if (ctx->pc == 0x1A61ACu) {
        ctx->pc = 0x1A61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A8u;
        // 0x1a61ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61B0u;
        goto label_1a61b0;
    }
    ctx->pc = 0x1A61A8u;
    SET_GPR_U32(ctx, 31, 0x1A61B0u);
    ctx->pc = 0x1A61ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61A8u;
    // 0x1a61ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x1A61B0u;
label_1a61b0:
    // 0x1a61b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a61b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a61b4:
    // 0x1a61b4: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a61b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_1a61b8:
    // 0x1a61b8: 0xdc25a580  ld          $a1, -0x5A80($at)
    ctx->pc = 0x1a61b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294944128)));
label_1a61bc:
    // 0x1a61bc: 0xc06def6  jal         func_1B7BD8
label_1a61c0:
    if (ctx->pc == 0x1A61C0u) {
        ctx->pc = 0x1A61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61BCu;
        // 0x1a61c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61C4u;
        goto label_1a61c4;
    }
    ctx->pc = 0x1A61BCu;
    SET_GPR_U32(ctx, 31, 0x1A61C4u);
    ctx->pc = 0x1A61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61BCu;
    // 0x1a61c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A61C4u;
label_1a61c4:
    // 0x1a61c4: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_1a61c8:
    if (ctx->pc == 0x1A61C8u) {
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61CCu;
        goto label_1a61cc;
    }
    ctx->pc = 0x1A61C4u;
    {
        const bool branch_taken_0x1a61c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61C4u;
        // 0x1a61c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61c4) {
            ctx->pc = 0x1A61A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a61a0;
        }
    }
    ctx->pc = 0x1A61CCu;
label_1a61cc:
    // 0x1a61cc: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a61d0:
    if (ctx->pc == 0x1A61D0u) {
        ctx->pc = 0x1A61D4u;
        goto label_1a61d4;
    }
    ctx->pc = 0x1A61CCu;
    {
        const bool branch_taken_0x1a61cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61cc) {
            ctx->pc = 0x1A6224u;
            { ctx->pc = 0x1a6224; return; }
        }
    }
    ctx->pc = 0x1A61D4u;
label_1a61d4:
    // 0x1a61d4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1a61d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_1a61d8:
    // 0x1a61d8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1a61d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_1a61dc:
    // 0x1a61dc: 0xc06def6  jal         func_1B7BD8
label_1a61e0:
    if (ctx->pc == 0x1A61E0u) {
        ctx->pc = 0x1A61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61DCu;
        // 0x1a61e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61E4u;
        goto label_1a61e4;
    }
    ctx->pc = 0x1A61DCu;
    SET_GPR_U32(ctx, 31, 0x1A61E4u);
    ctx->pc = 0x1A61E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A61DCu;
    // 0x1a61e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x1A61E4u;
label_1a61e4:
    // 0x1a61e4: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_1a61e8:
    if (ctx->pc == 0x1A61E8u) {
        ctx->pc = 0x1A61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E4u;
        // 0x1a61e8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61ECu;
        goto label_1a61ec;
    }
    ctx->pc = 0x1A61E4u;
    {
        const bool branch_taken_0x1a61e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61E4u;
        // 0x1a61e8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61e4) {
            ctx->pc = 0x1A6224u;
            { ctx->pc = 0x1a6224; return; }
        }
    }
    ctx->pc = 0x1A61ECu;
label_1a61ec:
    // 0x1a61ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a61f0:
    if (ctx->pc == 0x1A61F0u) {
        ctx->pc = 0x1A61F4u;
        goto label_1a61f4;
    }
    ctx->pc = 0x1A61ECu;
    {
        const bool branch_taken_0x1a61ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a61ec) {
            ctx->pc = 0x1A620Cu;
            { ctx->pc = 0x1a620c; return; }
        }
    }
    ctx->pc = 0x1A61F4u;
label_1a61f4:
    // 0x1a61f4: 0x0  nop
    ctx->pc = 0x1a61f4u;
    // NOP
    ctx->pc = 0x1a61f8u;
    return;
}

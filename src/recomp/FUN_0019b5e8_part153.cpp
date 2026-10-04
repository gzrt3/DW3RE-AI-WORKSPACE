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


void FUN_0019b5e8_part153(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e5968u: goto label_1e5968;
        case 0x1e596cu: goto label_1e596c;
        case 0x1e5970u: goto label_1e5970;
        case 0x1e5974u: goto label_1e5974;
        case 0x1e5978u: goto label_1e5978;
        case 0x1e597cu: goto label_1e597c;
        case 0x1e5980u: goto label_1e5980;
        case 0x1e5984u: goto label_1e5984;
        case 0x1e5988u: goto label_1e5988;
        case 0x1e598cu: goto label_1e598c;
        case 0x1e5990u: goto label_1e5990;
        case 0x1e5994u: goto label_1e5994;
        case 0x1e5998u: goto label_1e5998;
        case 0x1e599cu: goto label_1e599c;
        case 0x1e59a0u: goto label_1e59a0;
        case 0x1e59a4u: goto label_1e59a4;
        case 0x1e59a8u: goto label_1e59a8;
        case 0x1e59acu: goto label_1e59ac;
        case 0x1e59b0u: goto label_1e59b0;
        case 0x1e59b4u: goto label_1e59b4;
        case 0x1e59b8u: goto label_1e59b8;
        case 0x1e59bcu: goto label_1e59bc;
        case 0x1e59c0u: goto label_1e59c0;
        case 0x1e59c4u: goto label_1e59c4;
        case 0x1e59c8u: goto label_1e59c8;
        case 0x1e59ccu: goto label_1e59cc;
        case 0x1e59d0u: goto label_1e59d0;
        case 0x1e59d4u: goto label_1e59d4;
        case 0x1e59d8u: goto label_1e59d8;
        case 0x1e59dcu: goto label_1e59dc;
        case 0x1e59e0u: goto label_1e59e0;
        case 0x1e59e4u: goto label_1e59e4;
        case 0x1e59e8u: goto label_1e59e8;
        case 0x1e59ecu: goto label_1e59ec;
        case 0x1e59f0u: goto label_1e59f0;
        case 0x1e59f4u: goto label_1e59f4;
        case 0x1e59f8u: goto label_1e59f8;
        case 0x1e59fcu: goto label_1e59fc;
        case 0x1e5a00u: goto label_1e5a00;
        case 0x1e5a04u: goto label_1e5a04;
        case 0x1e5a08u: goto label_1e5a08;
        case 0x1e5a0cu: goto label_1e5a0c;
        case 0x1e5a10u: goto label_1e5a10;
        case 0x1e5a14u: goto label_1e5a14;
        case 0x1e5a18u: goto label_1e5a18;
        case 0x1e5a1cu: goto label_1e5a1c;
        case 0x1e5a20u: goto label_1e5a20;
        case 0x1e5a24u: goto label_1e5a24;
        case 0x1e5a28u: goto label_1e5a28;
        case 0x1e5a2cu: goto label_1e5a2c;
        case 0x1e5a30u: goto label_1e5a30;
        case 0x1e5a34u: goto label_1e5a34;
        case 0x1e5a38u: goto label_1e5a38;
        case 0x1e5a3cu: goto label_1e5a3c;
        case 0x1e5a40u: goto label_1e5a40;
        case 0x1e5a44u: goto label_1e5a44;
        case 0x1e5a48u: goto label_1e5a48;
        case 0x1e5a4cu: goto label_1e5a4c;
        case 0x1e5a50u: goto label_1e5a50;
        case 0x1e5a54u: goto label_1e5a54;
        case 0x1e5a58u: goto label_1e5a58;
        case 0x1e5a5cu: goto label_1e5a5c;
        case 0x1e5a60u: goto label_1e5a60;
        case 0x1e5a64u: goto label_1e5a64;
        case 0x1e5a68u: goto label_1e5a68;
        case 0x1e5a6cu: goto label_1e5a6c;
        case 0x1e5a70u: goto label_1e5a70;
        case 0x1e5a74u: goto label_1e5a74;
        case 0x1e5a78u: goto label_1e5a78;
        case 0x1e5a7cu: goto label_1e5a7c;
        case 0x1e5a80u: goto label_1e5a80;
        case 0x1e5a84u: goto label_1e5a84;
        case 0x1e5a88u: goto label_1e5a88;
        case 0x1e5a8cu: goto label_1e5a8c;
        case 0x1e5a90u: goto label_1e5a90;
        case 0x1e5a94u: goto label_1e5a94;
        case 0x1e5a98u: goto label_1e5a98;
        case 0x1e5a9cu: goto label_1e5a9c;
        case 0x1e5aa0u: goto label_1e5aa0;
        case 0x1e5aa4u: goto label_1e5aa4;
        case 0x1e5aa8u: goto label_1e5aa8;
        case 0x1e5aacu: goto label_1e5aac;
        case 0x1e5ab0u: goto label_1e5ab0;
        case 0x1e5ab4u: goto label_1e5ab4;
        case 0x1e5ab8u: goto label_1e5ab8;
        case 0x1e5abcu: goto label_1e5abc;
        case 0x1e5ac0u: goto label_1e5ac0;
        case 0x1e5ac4u: goto label_1e5ac4;
        case 0x1e5ac8u: goto label_1e5ac8;
        case 0x1e5accu: goto label_1e5acc;
        case 0x1e5ad0u: goto label_1e5ad0;
        case 0x1e5ad4u: goto label_1e5ad4;
        case 0x1e5ad8u: goto label_1e5ad8;
        case 0x1e5adcu: goto label_1e5adc;
        case 0x1e5ae0u: goto label_1e5ae0;
        case 0x1e5ae4u: goto label_1e5ae4;
        case 0x1e5ae8u: goto label_1e5ae8;
        case 0x1e5aecu: goto label_1e5aec;
        case 0x1e5af0u: goto label_1e5af0;
        case 0x1e5af4u: goto label_1e5af4;
        case 0x1e5af8u: goto label_1e5af8;
        case 0x1e5afcu: goto label_1e5afc;
        case 0x1e5b00u: goto label_1e5b00;
        case 0x1e5b04u: goto label_1e5b04;
        case 0x1e5b08u: goto label_1e5b08;
        case 0x1e5b0cu: goto label_1e5b0c;
        case 0x1e5b10u: goto label_1e5b10;
        case 0x1e5b14u: goto label_1e5b14;
        case 0x1e5b18u: goto label_1e5b18;
        case 0x1e5b1cu: goto label_1e5b1c;
        case 0x1e5b20u: goto label_1e5b20;
        case 0x1e5b24u: goto label_1e5b24;
        case 0x1e5b28u: goto label_1e5b28;
        case 0x1e5b2cu: goto label_1e5b2c;
        case 0x1e5b30u: goto label_1e5b30;
        case 0x1e5b34u: goto label_1e5b34;
        case 0x1e5b38u: goto label_1e5b38;
        case 0x1e5b3cu: goto label_1e5b3c;
        case 0x1e5b40u: goto label_1e5b40;
        case 0x1e5b44u: goto label_1e5b44;
        case 0x1e5b48u: goto label_1e5b48;
        case 0x1e5b4cu: goto label_1e5b4c;
        case 0x1e5b50u: goto label_1e5b50;
        case 0x1e5b54u: goto label_1e5b54;
        case 0x1e5b58u: goto label_1e5b58;
        case 0x1e5b5cu: goto label_1e5b5c;
        case 0x1e5b60u: goto label_1e5b60;
        case 0x1e5b64u: goto label_1e5b64;
        case 0x1e5b68u: goto label_1e5b68;
        case 0x1e5b6cu: goto label_1e5b6c;
        case 0x1e5b70u: goto label_1e5b70;
        case 0x1e5b74u: goto label_1e5b74;
        case 0x1e5b78u: goto label_1e5b78;
        case 0x1e5b7cu: goto label_1e5b7c;
        case 0x1e5b80u: goto label_1e5b80;
        case 0x1e5b84u: goto label_1e5b84;
        case 0x1e5b88u: goto label_1e5b88;
        case 0x1e5b8cu: goto label_1e5b8c;
        case 0x1e5b90u: goto label_1e5b90;
        case 0x1e5b94u: goto label_1e5b94;
        case 0x1e5b98u: goto label_1e5b98;
        case 0x1e5b9cu: goto label_1e5b9c;
        case 0x1e5ba0u: goto label_1e5ba0;
        case 0x1e5ba4u: goto label_1e5ba4;
        case 0x1e5ba8u: goto label_1e5ba8;
        case 0x1e5bacu: goto label_1e5bac;
        case 0x1e5bb0u: goto label_1e5bb0;
        case 0x1e5bb4u: goto label_1e5bb4;
        case 0x1e5bb8u: goto label_1e5bb8;
        case 0x1e5bbcu: goto label_1e5bbc;
        case 0x1e5bc0u: goto label_1e5bc0;
        case 0x1e5bc4u: goto label_1e5bc4;
        case 0x1e5bc8u: goto label_1e5bc8;
        case 0x1e5bccu: goto label_1e5bcc;
        case 0x1e5bd0u: goto label_1e5bd0;
        case 0x1e5bd4u: goto label_1e5bd4;
        case 0x1e5bd8u: goto label_1e5bd8;
        case 0x1e5bdcu: goto label_1e5bdc;
        case 0x1e5be0u: goto label_1e5be0;
        case 0x1e5be4u: goto label_1e5be4;
        case 0x1e5be8u: goto label_1e5be8;
        case 0x1e5becu: goto label_1e5bec;
        case 0x1e5bf0u: goto label_1e5bf0;
        case 0x1e5bf4u: goto label_1e5bf4;
        case 0x1e5bf8u: goto label_1e5bf8;
        case 0x1e5bfcu: goto label_1e5bfc;
        case 0x1e5c00u: goto label_1e5c00;
        case 0x1e5c04u: goto label_1e5c04;
        case 0x1e5c08u: goto label_1e5c08;
        case 0x1e5c0cu: goto label_1e5c0c;
        case 0x1e5c10u: goto label_1e5c10;
        case 0x1e5c14u: goto label_1e5c14;
        case 0x1e5c18u: goto label_1e5c18;
        case 0x1e5c1cu: goto label_1e5c1c;
        case 0x1e5c20u: goto label_1e5c20;
        case 0x1e5c24u: goto label_1e5c24;
        case 0x1e5c28u: goto label_1e5c28;
        case 0x1e5c2cu: goto label_1e5c2c;
        case 0x1e5c30u: goto label_1e5c30;
        case 0x1e5c34u: goto label_1e5c34;
        case 0x1e5c38u: goto label_1e5c38;
        case 0x1e5c3cu: goto label_1e5c3c;
        case 0x1e5c40u: goto label_1e5c40;
        case 0x1e5c44u: goto label_1e5c44;
        case 0x1e5c48u: goto label_1e5c48;
        case 0x1e5c4cu: goto label_1e5c4c;
        case 0x1e5c50u: goto label_1e5c50;
        case 0x1e5c54u: goto label_1e5c54;
        case 0x1e5c58u: goto label_1e5c58;
        case 0x1e5c5cu: goto label_1e5c5c;
        case 0x1e5c60u: goto label_1e5c60;
        case 0x1e5c64u: goto label_1e5c64;
        case 0x1e5c68u: goto label_1e5c68;
        case 0x1e5c6cu: goto label_1e5c6c;
        case 0x1e5c70u: goto label_1e5c70;
        case 0x1e5c74u: goto label_1e5c74;
        case 0x1e5c78u: goto label_1e5c78;
        case 0x1e5c7cu: goto label_1e5c7c;
        case 0x1e5c80u: goto label_1e5c80;
        case 0x1e5c84u: goto label_1e5c84;
        case 0x1e5c88u: goto label_1e5c88;
        case 0x1e5c8cu: goto label_1e5c8c;
        case 0x1e5c90u: goto label_1e5c90;
        case 0x1e5c94u: goto label_1e5c94;
        case 0x1e5c98u: goto label_1e5c98;
        case 0x1e5c9cu: goto label_1e5c9c;
        case 0x1e5ca0u: goto label_1e5ca0;
        case 0x1e5ca4u: goto label_1e5ca4;
        case 0x1e5ca8u: goto label_1e5ca8;
        case 0x1e5cacu: goto label_1e5cac;
        case 0x1e5cb0u: goto label_1e5cb0;
        case 0x1e5cb4u: goto label_1e5cb4;
        case 0x1e5cb8u: goto label_1e5cb8;
        case 0x1e5cbcu: goto label_1e5cbc;
        case 0x1e5cc0u: goto label_1e5cc0;
        case 0x1e5cc4u: goto label_1e5cc4;
        case 0x1e5cc8u: goto label_1e5cc8;
        case 0x1e5cccu: goto label_1e5ccc;
        case 0x1e5cd0u: goto label_1e5cd0;
        case 0x1e5cd4u: goto label_1e5cd4;
        case 0x1e5cd8u: goto label_1e5cd8;
        case 0x1e5cdcu: goto label_1e5cdc;
        case 0x1e5ce0u: goto label_1e5ce0;
        case 0x1e5ce4u: goto label_1e5ce4;
        case 0x1e5ce8u: goto label_1e5ce8;
        case 0x1e5cecu: goto label_1e5cec;
        case 0x1e5cf0u: goto label_1e5cf0;
        case 0x1e5cf4u: goto label_1e5cf4;
        case 0x1e5cf8u: goto label_1e5cf8;
        case 0x1e5cfcu: goto label_1e5cfc;
        case 0x1e5d00u: goto label_1e5d00;
        case 0x1e5d04u: goto label_1e5d04;
        case 0x1e5d08u: goto label_1e5d08;
        case 0x1e5d0cu: goto label_1e5d0c;
        case 0x1e5d10u: goto label_1e5d10;
        case 0x1e5d14u: goto label_1e5d14;
        case 0x1e5d18u: goto label_1e5d18;
        case 0x1e5d1cu: goto label_1e5d1c;
        case 0x1e5d20u: goto label_1e5d20;
        case 0x1e5d24u: goto label_1e5d24;
        case 0x1e5d28u: goto label_1e5d28;
        case 0x1e5d2cu: goto label_1e5d2c;
        case 0x1e5d30u: goto label_1e5d30;
        case 0x1e5d34u: goto label_1e5d34;
        case 0x1e5d38u: goto label_1e5d38;
        case 0x1e5d3cu: goto label_1e5d3c;
        case 0x1e5d40u: goto label_1e5d40;
        case 0x1e5d44u: goto label_1e5d44;
        case 0x1e5d48u: goto label_1e5d48;
        case 0x1e5d4cu: goto label_1e5d4c;
        case 0x1e5d50u: goto label_1e5d50;
        case 0x1e5d54u: goto label_1e5d54;
        case 0x1e5d58u: goto label_1e5d58;
        case 0x1e5d5cu: goto label_1e5d5c;
        case 0x1e5d60u: goto label_1e5d60;
        case 0x1e5d64u: goto label_1e5d64;
        case 0x1e5d68u: goto label_1e5d68;
        case 0x1e5d6cu: goto label_1e5d6c;
        case 0x1e5d70u: goto label_1e5d70;
        case 0x1e5d74u: goto label_1e5d74;
        case 0x1e5d78u: goto label_1e5d78;
        case 0x1e5d7cu: goto label_1e5d7c;
        case 0x1e5d80u: goto label_1e5d80;
        case 0x1e5d84u: goto label_1e5d84;
        case 0x1e5d88u: goto label_1e5d88;
        case 0x1e5d8cu: goto label_1e5d8c;
        case 0x1e5d90u: goto label_1e5d90;
        case 0x1e5d94u: goto label_1e5d94;
        case 0x1e5d98u: goto label_1e5d98;
        case 0x1e5d9cu: goto label_1e5d9c;
        case 0x1e5da0u: goto label_1e5da0;
        case 0x1e5da4u: goto label_1e5da4;
        case 0x1e5da8u: goto label_1e5da8;
        case 0x1e5dacu: goto label_1e5dac;
        case 0x1e5db0u: goto label_1e5db0;
        case 0x1e5db4u: goto label_1e5db4;
        case 0x1e5db8u: goto label_1e5db8;
        case 0x1e5dbcu: goto label_1e5dbc;
        case 0x1e5dc0u: goto label_1e5dc0;
        case 0x1e5dc4u: goto label_1e5dc4;
        case 0x1e5dc8u: goto label_1e5dc8;
        case 0x1e5dccu: goto label_1e5dcc;
        case 0x1e5dd0u: goto label_1e5dd0;
        case 0x1e5dd4u: goto label_1e5dd4;
        case 0x1e5dd8u: goto label_1e5dd8;
        case 0x1e5ddcu: goto label_1e5ddc;
        case 0x1e5de0u: goto label_1e5de0;
        case 0x1e5de4u: goto label_1e5de4;
        case 0x1e5de8u: goto label_1e5de8;
        case 0x1e5decu: goto label_1e5dec;
        case 0x1e5df0u: goto label_1e5df0;
        case 0x1e5df4u: goto label_1e5df4;
        case 0x1e5df8u: goto label_1e5df8;
        case 0x1e5dfcu: goto label_1e5dfc;
        case 0x1e5e00u: goto label_1e5e00;
        case 0x1e5e04u: goto label_1e5e04;
        case 0x1e5e08u: goto label_1e5e08;
        case 0x1e5e0cu: goto label_1e5e0c;
        case 0x1e5e10u: goto label_1e5e10;
        case 0x1e5e14u: goto label_1e5e14;
        case 0x1e5e18u: goto label_1e5e18;
        case 0x1e5e1cu: goto label_1e5e1c;
        case 0x1e5e20u: goto label_1e5e20;
        case 0x1e5e24u: goto label_1e5e24;
        case 0x1e5e28u: goto label_1e5e28;
        case 0x1e5e2cu: goto label_1e5e2c;
        case 0x1e5e30u: goto label_1e5e30;
        case 0x1e5e34u: goto label_1e5e34;
        case 0x1e5e38u: goto label_1e5e38;
        case 0x1e5e3cu: goto label_1e5e3c;
        case 0x1e5e40u: goto label_1e5e40;
        case 0x1e5e44u: goto label_1e5e44;
        case 0x1e5e48u: goto label_1e5e48;
        case 0x1e5e4cu: goto label_1e5e4c;
        case 0x1e5e50u: goto label_1e5e50;
        case 0x1e5e54u: goto label_1e5e54;
        case 0x1e5e58u: goto label_1e5e58;
        case 0x1e5e5cu: goto label_1e5e5c;
        case 0x1e5e60u: goto label_1e5e60;
        case 0x1e5e64u: goto label_1e5e64;
        case 0x1e5e68u: goto label_1e5e68;
        case 0x1e5e6cu: goto label_1e5e6c;
        case 0x1e5e70u: goto label_1e5e70;
        case 0x1e5e74u: goto label_1e5e74;
        case 0x1e5e78u: goto label_1e5e78;
        case 0x1e5e7cu: goto label_1e5e7c;
        case 0x1e5e80u: goto label_1e5e80;
        case 0x1e5e84u: goto label_1e5e84;
        case 0x1e5e88u: goto label_1e5e88;
        case 0x1e5e8cu: goto label_1e5e8c;
        case 0x1e5e90u: goto label_1e5e90;
        case 0x1e5e94u: goto label_1e5e94;
        case 0x1e5e98u: goto label_1e5e98;
        case 0x1e5e9cu: goto label_1e5e9c;
        case 0x1e5ea0u: goto label_1e5ea0;
        case 0x1e5ea4u: goto label_1e5ea4;
        case 0x1e5ea8u: goto label_1e5ea8;
        case 0x1e5eacu: goto label_1e5eac;
        case 0x1e5eb0u: goto label_1e5eb0;
        case 0x1e5eb4u: goto label_1e5eb4;
        case 0x1e5eb8u: goto label_1e5eb8;
        case 0x1e5ebcu: goto label_1e5ebc;
        case 0x1e5ec0u: goto label_1e5ec0;
        case 0x1e5ec4u: goto label_1e5ec4;
        case 0x1e5ec8u: goto label_1e5ec8;
        case 0x1e5eccu: goto label_1e5ecc;
        case 0x1e5ed0u: goto label_1e5ed0;
        case 0x1e5ed4u: goto label_1e5ed4;
        case 0x1e5ed8u: goto label_1e5ed8;
        case 0x1e5edcu: goto label_1e5edc;
        case 0x1e5ee0u: goto label_1e5ee0;
        case 0x1e5ee4u: goto label_1e5ee4;
        case 0x1e5ee8u: goto label_1e5ee8;
        case 0x1e5eecu: goto label_1e5eec;
        case 0x1e5ef0u: goto label_1e5ef0;
        case 0x1e5ef4u: goto label_1e5ef4;
        case 0x1e5ef8u: goto label_1e5ef8;
        case 0x1e5efcu: goto label_1e5efc;
        case 0x1e5f00u: goto label_1e5f00;
        case 0x1e5f04u: goto label_1e5f04;
        case 0x1e5f08u: goto label_1e5f08;
        case 0x1e5f0cu: goto label_1e5f0c;
        case 0x1e5f10u: goto label_1e5f10;
        case 0x1e5f14u: goto label_1e5f14;
        case 0x1e5f18u: goto label_1e5f18;
        case 0x1e5f1cu: goto label_1e5f1c;
        case 0x1e5f20u: goto label_1e5f20;
        case 0x1e5f24u: goto label_1e5f24;
        case 0x1e5f28u: goto label_1e5f28;
        case 0x1e5f2cu: goto label_1e5f2c;
        case 0x1e5f30u: goto label_1e5f30;
        case 0x1e5f34u: goto label_1e5f34;
        case 0x1e5f38u: goto label_1e5f38;
        case 0x1e5f3cu: goto label_1e5f3c;
        case 0x1e5f40u: goto label_1e5f40;
        case 0x1e5f44u: goto label_1e5f44;
        case 0x1e5f48u: goto label_1e5f48;
        case 0x1e5f4cu: goto label_1e5f4c;
        case 0x1e5f50u: goto label_1e5f50;
        case 0x1e5f54u: goto label_1e5f54;
        case 0x1e5f58u: goto label_1e5f58;
        case 0x1e5f5cu: goto label_1e5f5c;
        case 0x1e5f60u: goto label_1e5f60;
        case 0x1e5f64u: goto label_1e5f64;
        case 0x1e5f68u: goto label_1e5f68;
        case 0x1e5f6cu: goto label_1e5f6c;
        case 0x1e5f70u: goto label_1e5f70;
        case 0x1e5f74u: goto label_1e5f74;
        case 0x1e5f78u: goto label_1e5f78;
        case 0x1e5f7cu: goto label_1e5f7c;
        case 0x1e5f80u: goto label_1e5f80;
        case 0x1e5f84u: goto label_1e5f84;
        case 0x1e5f88u: goto label_1e5f88;
        case 0x1e5f8cu: goto label_1e5f8c;
        case 0x1e5f90u: goto label_1e5f90;
        case 0x1e5f94u: goto label_1e5f94;
        case 0x1e5f98u: goto label_1e5f98;
        case 0x1e5f9cu: goto label_1e5f9c;
        case 0x1e5fa0u: goto label_1e5fa0;
        case 0x1e5fa4u: goto label_1e5fa4;
        case 0x1e5fa8u: goto label_1e5fa8;
        case 0x1e5facu: goto label_1e5fac;
        case 0x1e5fb0u: goto label_1e5fb0;
        case 0x1e5fb4u: goto label_1e5fb4;
        case 0x1e5fb8u: goto label_1e5fb8;
        case 0x1e5fbcu: goto label_1e5fbc;
        case 0x1e5fc0u: goto label_1e5fc0;
        case 0x1e5fc4u: goto label_1e5fc4;
        case 0x1e5fc8u: goto label_1e5fc8;
        case 0x1e5fccu: goto label_1e5fcc;
        case 0x1e5fd0u: goto label_1e5fd0;
        case 0x1e5fd4u: goto label_1e5fd4;
        case 0x1e5fd8u: goto label_1e5fd8;
        case 0x1e5fdcu: goto label_1e5fdc;
        case 0x1e5fe0u: goto label_1e5fe0;
        case 0x1e5fe4u: goto label_1e5fe4;
        case 0x1e5fe8u: goto label_1e5fe8;
        case 0x1e5fecu: goto label_1e5fec;
        case 0x1e5ff0u: goto label_1e5ff0;
        case 0x1e5ff4u: goto label_1e5ff4;
        case 0x1e5ff8u: goto label_1e5ff8;
        case 0x1e5ffcu: goto label_1e5ffc;
        case 0x1e6000u: goto label_1e6000;
        case 0x1e6004u: goto label_1e6004;
        case 0x1e6008u: goto label_1e6008;
        case 0x1e600cu: goto label_1e600c;
        case 0x1e6010u: goto label_1e6010;
        case 0x1e6014u: goto label_1e6014;
        case 0x1e6018u: goto label_1e6018;
        case 0x1e601cu: goto label_1e601c;
        case 0x1e6020u: goto label_1e6020;
        case 0x1e6024u: goto label_1e6024;
        case 0x1e6028u: goto label_1e6028;
        case 0x1e602cu: goto label_1e602c;
        case 0x1e6030u: goto label_1e6030;
        case 0x1e6034u: goto label_1e6034;
        case 0x1e6038u: goto label_1e6038;
        case 0x1e603cu: goto label_1e603c;
        case 0x1e6040u: goto label_1e6040;
        case 0x1e6044u: goto label_1e6044;
        case 0x1e6048u: goto label_1e6048;
        case 0x1e604cu: goto label_1e604c;
        case 0x1e6050u: goto label_1e6050;
        case 0x1e6054u: goto label_1e6054;
        case 0x1e6058u: goto label_1e6058;
        case 0x1e605cu: goto label_1e605c;
        case 0x1e6060u: goto label_1e6060;
        case 0x1e6064u: goto label_1e6064;
        case 0x1e6068u: goto label_1e6068;
        case 0x1e606cu: goto label_1e606c;
        case 0x1e6070u: goto label_1e6070;
        case 0x1e6074u: goto label_1e6074;
        case 0x1e6078u: goto label_1e6078;
        case 0x1e607cu: goto label_1e607c;
        case 0x1e6080u: goto label_1e6080;
        case 0x1e6084u: goto label_1e6084;
        case 0x1e6088u: goto label_1e6088;
        case 0x1e608cu: goto label_1e608c;
        case 0x1e6090u: goto label_1e6090;
        case 0x1e6094u: goto label_1e6094;
        case 0x1e6098u: goto label_1e6098;
        case 0x1e609cu: goto label_1e609c;
        case 0x1e60a0u: goto label_1e60a0;
        case 0x1e60a4u: goto label_1e60a4;
        case 0x1e60a8u: goto label_1e60a8;
        case 0x1e60acu: goto label_1e60ac;
        case 0x1e60b0u: goto label_1e60b0;
        case 0x1e60b4u: goto label_1e60b4;
        case 0x1e60b8u: goto label_1e60b8;
        case 0x1e60bcu: goto label_1e60bc;
        case 0x1e60c0u: goto label_1e60c0;
        case 0x1e60c4u: goto label_1e60c4;
        case 0x1e60c8u: goto label_1e60c8;
        case 0x1e60ccu: goto label_1e60cc;
        case 0x1e60d0u: goto label_1e60d0;
        case 0x1e60d4u: goto label_1e60d4;
        case 0x1e60d8u: goto label_1e60d8;
        case 0x1e60dcu: goto label_1e60dc;
        case 0x1e60e0u: goto label_1e60e0;
        case 0x1e60e4u: goto label_1e60e4;
        case 0x1e60e8u: goto label_1e60e8;
        case 0x1e60ecu: goto label_1e60ec;
        case 0x1e60f0u: goto label_1e60f0;
        case 0x1e60f4u: goto label_1e60f4;
        case 0x1e60f8u: goto label_1e60f8;
        case 0x1e60fcu: goto label_1e60fc;
        case 0x1e6100u: goto label_1e6100;
        case 0x1e6104u: goto label_1e6104;
        case 0x1e6108u: goto label_1e6108;
        case 0x1e610cu: goto label_1e610c;
        case 0x1e6110u: goto label_1e6110;
        case 0x1e6114u: goto label_1e6114;
        case 0x1e6118u: goto label_1e6118;
        case 0x1e611cu: goto label_1e611c;
        case 0x1e6120u: goto label_1e6120;
        case 0x1e6124u: goto label_1e6124;
        case 0x1e6128u: goto label_1e6128;
        case 0x1e612cu: goto label_1e612c;
        case 0x1e6130u: goto label_1e6130;
        case 0x1e6134u: goto label_1e6134;
        default: return;
    }

label_1e5968:
    // 0x1e5968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e596c:
    // 0x1e596c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e5970:
    // 0x1e5970: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e5970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5974:
    // 0x1e5974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5978:
    // 0x1e5978: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e5978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e597c:
    // 0x1e597c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5980:
    // 0x1e5980: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e5980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e5984:
    // 0x1e5984: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5988:
    // 0x1e5988: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e5988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e598c:
    // 0x1e598c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e5990:
    // 0x1e5990: 0xc0901c0  jal         func_240700
label_1e5994:
    if (ctx->pc == 0x1E5994u) {
        ctx->pc = 0x1E5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5990u;
        // 0x1e5994: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5998u;
        goto label_1e5998;
    }
    ctx->pc = 0x1E5990u;
    SET_GPR_U32(ctx, 31, 0x1E5998u);
    ctx->pc = 0x1E5994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5990u;
    // 0x1e5994: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240700u;
    { ctx->pc = 0x240700; return; }
    ctx->pc = 0x1E5998u;
label_1e5998:
    // 0x1e5998: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_1e599c:
    if (ctx->pc == 0x1E599Cu) {
        ctx->pc = 0x1E59A0u;
        goto label_1e59a0;
    }
    ctx->pc = 0x1E5998u;
    {
        const bool branch_taken_0x1e5998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5998) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E59A0u;
label_1e59a0:
    // 0x1e59a0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1e59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e59a4:
    // 0x1e59a4: 0x1682001f  bne         $s4, $v0, . + 4 + (0x1F << 2)
label_1e59a8:
    if (ctx->pc == 0x1E59A8u) {
        ctx->pc = 0x1E59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59A4u;
        // 0x1e59a8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E59ACu;
        goto label_1e59ac;
    }
    ctx->pc = 0x1E59A4u;
    {
        const bool branch_taken_0x1e59a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59A4u;
        // 0x1e59a8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59a4) {
            ctx->pc = 0x1E5A24u;
            goto label_1e5a24;
        }
    }
    ctx->pc = 0x1E59ACu;
label_1e59ac:
    // 0x1e59ac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e59acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e59b0:
    // 0x1e59b0: 0x12620016  beq         $s3, $v0, . + 4 + (0x16 << 2)
label_1e59b4:
    if (ctx->pc == 0x1E59B4u) {
        ctx->pc = 0x1E59B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59B0u;
        // 0x1e59b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E59B8u;
        goto label_1e59b8;
    }
    ctx->pc = 0x1E59B0u;
    {
        const bool branch_taken_0x1e59b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E59B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E59B0u;
        // 0x1e59b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59b0) {
            ctx->pc = 0x1E5A0Cu;
            goto label_1e5a0c;
        }
    }
    ctx->pc = 0x1E59B8u;
label_1e59b8:
    // 0x1e59b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e59bc:
    // 0x1e59bc: 0x12620012  beq         $s3, $v0, . + 4 + (0x12 << 2)
label_1e59c0:
    if (ctx->pc == 0x1E59C0u) {
        ctx->pc = 0x1E59C4u;
        goto label_1e59c4;
    }
    ctx->pc = 0x1E59BCu;
    {
        const bool branch_taken_0x1e59bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e59bc) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E59C4u;
label_1e59c4:
    // 0x1e59c4: 0x2662ffef  addiu       $v0, $s3, -0x11
    ctx->pc = 0x1e59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
label_1e59c8:
    // 0x1e59c8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1e59c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e59cc:
    // 0x1e59cc: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e59d0:
    if (ctx->pc == 0x1E59D0u) {
        ctx->pc = 0x1E59D4u;
        goto label_1e59d4;
    }
    ctx->pc = 0x1E59CCu;
    {
        const bool branch_taken_0x1e59cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e59cc) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E59D4u;
label_1e59d4:
    // 0x1e59d4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1e59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1e59d8:
    // 0x1e59d8: 0x1262000b  beq         $s3, $v0, . + 4 + (0xB << 2)
label_1e59dc:
    if (ctx->pc == 0x1E59DCu) {
        ctx->pc = 0x1E59E0u;
        goto label_1e59e0;
    }
    ctx->pc = 0x1E59D8u;
    {
        const bool branch_taken_0x1e59d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e59d8) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E59E0u;
label_1e59e0:
    // 0x1e59e0: 0x2662ffdd  addiu       $v0, $s3, -0x23
    ctx->pc = 0x1e59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967261));
label_1e59e4:
    // 0x1e59e4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1e59e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e59e8:
    // 0x1e59e8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1e59ec:
    if (ctx->pc == 0x1E59ECu) {
        ctx->pc = 0x1E59F0u;
        goto label_1e59f0;
    }
    ctx->pc = 0x1E59E8u;
    {
        const bool branch_taken_0x1e59e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e59e8) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E59F0u;
label_1e59f0:
    // 0x1e59f0: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1e59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1e59f4:
    // 0x1e59f4: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_1e59f8:
    if (ctx->pc == 0x1E59F8u) {
        ctx->pc = 0x1E59FCu;
        goto label_1e59fc;
    }
    ctx->pc = 0x1E59F4u;
    {
        const bool branch_taken_0x1e59f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e59f4) {
            ctx->pc = 0x1E5A08u;
            goto label_1e5a08;
        }
    }
    ctx->pc = 0x1E59FCu;
label_1e59fc:
    // 0x1e59fc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1e59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1e5a00:
    // 0x1e5a00: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_1e5a04:
    if (ctx->pc == 0x1E5A04u) {
        ctx->pc = 0x1E5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A00u;
        // 0x1e5a04: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A08u;
        goto label_1e5a08;
    }
    ctx->pc = 0x1E5A00u;
    {
        const bool branch_taken_0x1e5a00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A00u;
        // 0x1e5a04: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a00) {
            ctx->pc = 0x1E5A18u;
            goto label_1e5a18;
        }
    }
    ctx->pc = 0x1E5A08u;
label_1e5a08:
    // 0x1e5a08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5a0c:
    // 0x1e5a0c: 0x10000033  b           . + 4 + (0x33 << 2)
label_1e5a10:
    if (ctx->pc == 0x1E5A10u) {
        ctx->pc = 0x1E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A0Cu;
        // 0x1e5a10: 0x2682fff1  addiu       $v0, $s4, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967281));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A14u;
        goto label_1e5a14;
    }
    ctx->pc = 0x1E5A0Cu;
    {
        const bool branch_taken_0x1e5a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A0Cu;
        // 0x1e5a10: 0x2682fff1  addiu       $v0, $s4, -0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a0c) {
            ctx->pc = 0x1E5ADCu;
            goto label_1e5adc;
        }
    }
    ctx->pc = 0x1E5A14u;
label_1e5a14:
    // 0x1e5a14: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5a18:
    // 0x1e5a18: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1e5a1c:
    if (ctx->pc == 0x1E5A1Cu) {
        ctx->pc = 0x1E5A20u;
        goto label_1e5a20;
    }
    ctx->pc = 0x1E5A18u;
    {
        const bool branch_taken_0x1e5a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5a18) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E5A20u;
label_1e5a20:
    // 0x1e5a20: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e5a24:
    // 0x1e5a24: 0x16820017  bne         $s4, $v0, . + 4 + (0x17 << 2)
label_1e5a28:
    if (ctx->pc == 0x1E5A28u) {
        ctx->pc = 0x1E5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A24u;
        // 0x1e5a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A2Cu;
        goto label_1e5a2c;
    }
    ctx->pc = 0x1E5A24u;
    {
        const bool branch_taken_0x1e5a24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A24u;
        // 0x1e5a28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a24) {
            ctx->pc = 0x1E5A84u;
            goto label_1e5a84;
        }
    }
    ctx->pc = 0x1E5A2Cu;
label_1e5a2c:
    // 0x1e5a2c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1e5a30:
    // 0x1e5a30: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
label_1e5a34:
    if (ctx->pc == 0x1E5A34u) {
        ctx->pc = 0x1E5A38u;
        goto label_1e5a38;
    }
    ctx->pc = 0x1E5A30u;
    {
        const bool branch_taken_0x1e5a30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a30) {
            ctx->pc = 0x1E5A78u;
            goto label_1e5a78;
        }
    }
    ctx->pc = 0x1E5A38u;
label_1e5a38:
    // 0x1e5a38: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e5a3c:
    // 0x1e5a3c: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
label_1e5a40:
    if (ctx->pc == 0x1E5A40u) {
        ctx->pc = 0x1E5A44u;
        goto label_1e5a44;
    }
    ctx->pc = 0x1E5A3Cu;
    {
        const bool branch_taken_0x1e5a3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a3c) {
            ctx->pc = 0x1E5A78u;
            goto label_1e5a78;
        }
    }
    ctx->pc = 0x1E5A44u;
label_1e5a44:
    // 0x1e5a44: 0x2662ffef  addiu       $v0, $s3, -0x11
    ctx->pc = 0x1e5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967279));
label_1e5a48:
    // 0x1e5a48: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1e5a48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1e5a4c:
    // 0x1e5a4c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_1e5a50:
    if (ctx->pc == 0x1E5A50u) {
        ctx->pc = 0x1E5A54u;
        goto label_1e5a54;
    }
    ctx->pc = 0x1E5A4Cu;
    {
        const bool branch_taken_0x1e5a4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5a4c) {
            ctx->pc = 0x1E5A78u;
            goto label_1e5a78;
        }
    }
    ctx->pc = 0x1E5A54u;
label_1e5a54:
    // 0x1e5a54: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1e5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1e5a58:
    // 0x1e5a58: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_1e5a5c:
    if (ctx->pc == 0x1E5A5Cu) {
        ctx->pc = 0x1E5A60u;
        goto label_1e5a60;
    }
    ctx->pc = 0x1E5A58u;
    {
        const bool branch_taken_0x1e5a58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a58) {
            ctx->pc = 0x1E5A78u;
            goto label_1e5a78;
        }
    }
    ctx->pc = 0x1E5A60u;
label_1e5a60:
    // 0x1e5a60: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1e5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1e5a64:
    // 0x1e5a64: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_1e5a68:
    if (ctx->pc == 0x1E5A68u) {
        ctx->pc = 0x1E5A6Cu;
        goto label_1e5a6c;
    }
    ctx->pc = 0x1E5A64u;
    {
        const bool branch_taken_0x1e5a64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a64) {
            ctx->pc = 0x1E5A78u;
            goto label_1e5a78;
        }
    }
    ctx->pc = 0x1E5A6Cu;
label_1e5a6c:
    // 0x1e5a6c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1e5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1e5a70:
    // 0x1e5a70: 0x16620019  bne         $s3, $v0, . + 4 + (0x19 << 2)
label_1e5a74:
    if (ctx->pc == 0x1E5A74u) {
        ctx->pc = 0x1E5A78u;
        goto label_1e5a78;
    }
    ctx->pc = 0x1E5A70u;
    {
        const bool branch_taken_0x1e5a70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a70) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E5A78u;
label_1e5a78:
    // 0x1e5a78: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e5a7c:
    if (ctx->pc == 0x1E5A7Cu) {
        ctx->pc = 0x1E5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A78u;
        // 0x1e5a7c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A80u;
        goto label_1e5a80;
    }
    ctx->pc = 0x1E5A78u;
    {
        const bool branch_taken_0x1e5a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A78u;
        // 0x1e5a7c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a78) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E5A80u;
label_1e5a80:
    // 0x1e5a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5a84:
    // 0x1e5a84: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
label_1e5a88:
    if (ctx->pc == 0x1E5A88u) {
        ctx->pc = 0x1E5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A84u;
        // 0x1e5a88: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5A8Cu;
        goto label_1e5a8c;
    }
    ctx->pc = 0x1E5A84u;
    {
        const bool branch_taken_0x1e5a84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5A84u;
        // 0x1e5a88: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a84) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E5A8Cu;
label_1e5a8c:
    // 0x1e5a8c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e5a90:
    // 0x1e5a90: 0x12820004  beq         $s4, $v0, . + 4 + (0x4 << 2)
label_1e5a94:
    if (ctx->pc == 0x1E5A94u) {
        ctx->pc = 0x1E5A98u;
        goto label_1e5a98;
    }
    ctx->pc = 0x1E5A90u;
    {
        const bool branch_taken_0x1e5a90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a90) {
            ctx->pc = 0x1E5AA4u;
            goto label_1e5aa4;
        }
    }
    ctx->pc = 0x1E5A98u;
label_1e5a98:
    // 0x1e5a98: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e5a9c:
    // 0x1e5a9c: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
label_1e5aa0:
    if (ctx->pc == 0x1E5AA0u) {
        ctx->pc = 0x1E5AA4u;
        goto label_1e5aa4;
    }
    ctx->pc = 0x1E5A9Cu;
    {
        const bool branch_taken_0x1e5a9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5a9c) {
            ctx->pc = 0x1E5AD4u;
            goto label_1e5ad4;
        }
    }
    ctx->pc = 0x1E5AA4u;
label_1e5aa4:
    // 0x1e5aa4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1e5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1e5aa8:
    // 0x1e5aa8: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1e5aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
label_1e5aac:
    // 0x1e5aac: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1e5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1e5ab0:
    // 0x1e5ab0: 0x2442cc20  addiu       $v0, $v0, -0x33E0
    ctx->pc = 0x1e5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954016));
label_1e5ab4:
    // 0x1e5ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5ab8:
    // 0x1e5ab8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1e5ab8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1e5abc:
    // 0x1e5abc: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1e5abcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5ac0:
    // 0x1e5ac0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ac4:
    // 0x1e5ac4: 0x901814  dsllv       $v1, $s0, $a0
    ctx->pc = 0x1e5ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (GPR_U32(ctx, 4) & 0x3F));
label_1e5ac8:
    // 0x1e5ac8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e5ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e5acc:
    // 0x1e5acc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e5ad0:
    if (ctx->pc == 0x1E5AD0u) {
        ctx->pc = 0x1E5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5ACCu;
        // 0x1e5ad0: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AD4u;
        goto label_1e5ad4;
    }
    ctx->pc = 0x1E5ACCu;
    {
        const bool branch_taken_0x1e5acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5ACCu;
        // 0x1e5ad0: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5acc) {
            ctx->pc = 0x1E5AD8u;
            goto label_1e5ad8;
        }
    }
    ctx->pc = 0x1E5AD4u;
label_1e5ad4:
    // 0x1e5ad4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ad8:
    // 0x1e5ad8: 0x2682fff1  addiu       $v0, $s4, -0xF
    ctx->pc = 0x1e5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967281));
label_1e5adc:
    // 0x1e5adc: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x1e5adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1e5ae0:
    // 0x1e5ae0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1e5ae4:
    if (ctx->pc == 0x1E5AE4u) {
        ctx->pc = 0x1E5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AE0u;
        // 0x1e5ae4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AE8u;
        goto label_1e5ae8;
    }
    ctx->pc = 0x1E5AE0u;
    {
        const bool branch_taken_0x1e5ae0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AE0u;
        // 0x1e5ae4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ae0) {
            ctx->pc = 0x1E5AF8u;
            goto label_1e5af8;
        }
    }
    ctx->pc = 0x1E5AE8u;
label_1e5ae8:
    // 0x1e5ae8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e5aec:
    // 0x1e5aec: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
label_1e5af0:
    if (ctx->pc == 0x1E5AF0u) {
        ctx->pc = 0x1E5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AECu;
        // 0x1e5af0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AF4u;
        goto label_1e5af4;
    }
    ctx->pc = 0x1E5AECu;
    {
        const bool branch_taken_0x1e5aec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AECu;
        // 0x1e5af0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5aec) {
            ctx->pc = 0x1E5B24u;
            goto label_1e5b24;
        }
    }
    ctx->pc = 0x1E5AF4u;
label_1e5af4:
    // 0x1e5af4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e5af8:
    // 0x1e5af8: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
label_1e5afc:
    if (ctx->pc == 0x1E5AFCu) {
        ctx->pc = 0x1E5B00u;
        goto label_1e5b00;
    }
    ctx->pc = 0x1E5AF8u;
    {
        const bool branch_taken_0x1e5af8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5af8) {
            ctx->pc = 0x1E5B20u;
            goto label_1e5b20;
        }
    }
    ctx->pc = 0x1E5B00u;
label_1e5b00:
    // 0x1e5b00: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e5b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e5b04:
    // 0x1e5b04: 0x8c22ccf8  lw          $v0, -0x3308($at)
    ctx->pc = 0x1e5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954232)));
label_1e5b08:
    // 0x1e5b08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e5b0c:
    if (ctx->pc == 0x1E5B0Cu) {
        ctx->pc = 0x1E5B10u;
        goto label_1e5b10;
    }
    ctx->pc = 0x1E5B08u;
    {
        const bool branch_taken_0x1e5b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b08) {
            ctx->pc = 0x1E5B20u;
            goto label_1e5b20;
        }
    }
    ctx->pc = 0x1E5B10u;
label_1e5b10:
    // 0x1e5b10: 0x8f828db4  lw          $v0, -0x724C($gp)
    ctx->pc = 0x1e5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1e5b14:
    // 0x1e5b14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1e5b18:
    if (ctx->pc == 0x1E5B18u) {
        ctx->pc = 0x1E5B1Cu;
        goto label_1e5b1c;
    }
    ctx->pc = 0x1E5B14u;
    {
        const bool branch_taken_0x1e5b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b14) {
            ctx->pc = 0x1E5B20u;
            goto label_1e5b20;
        }
    }
    ctx->pc = 0x1E5B1Cu;
label_1e5b1c:
    // 0x1e5b1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5b20:
    // 0x1e5b20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e5b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5b24:
    // 0x1e5b24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e5b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e5b28:
    // 0x1e5b28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5b28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e5b2c:
    // 0x1e5b2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5b2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5b30:
    // 0x1e5b30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5b34:
    // 0x1e5b34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5b38:
    // 0x1e5b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5b3c:
    // 0x1e5b3c: 0x3e00008  jr          $ra
label_1e5b40:
    if (ctx->pc == 0x1E5B40u) {
        ctx->pc = 0x1E5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B3Cu;
        // 0x1e5b40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B44u;
        goto label_1e5b44;
    }
    ctx->pc = 0x1E5B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B3Cu;
        // 0x1e5b40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5B44u;
label_1e5b44:
    // 0x1e5b44: 0x0  nop
    ctx->pc = 0x1e5b44u;
    // NOP
label_1e5b48:
    // 0x1e5b48: 0x0  nop
    ctx->pc = 0x1e5b48u;
    // NOP
label_1e5b4c:
    // 0x1e5b4c: 0x0  nop
    ctx->pc = 0x1e5b4cu;
    // NOP
label_1e5b50:
    // 0x1e5b50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e5b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e5b54:
    // 0x1e5b54: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e5b58:
    // 0x1e5b58: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e5b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e5b5c:
    // 0x1e5b5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e5b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e5b60:
    // 0x1e5b60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e5b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e5b64:
    // 0x1e5b64: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e5b64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5b68:
    // 0x1e5b68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e5b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e5b6c:
    // 0x1e5b6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e5b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e5b70:
    // 0x1e5b70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e5b70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5b74:
    // 0x1e5b74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e5b78:
    // 0x1e5b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e5b7c:
    // 0x1e5b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5b80:
    // 0x1e5b80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e5b80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5b84:
    // 0x1e5b84: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_1e5b88:
    if (ctx->pc == 0x1E5B88u) {
        ctx->pc = 0x1E5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B84u;
        // 0x1e5b88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B8Cu;
        goto label_1e5b8c;
    }
    ctx->pc = 0x1E5B84u;
    {
        const bool branch_taken_0x1e5b84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B84u;
        // 0x1e5b88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b84) {
            ctx->pc = 0x1E5B98u;
            goto label_1e5b98;
        }
    }
    ctx->pc = 0x1E5B8Cu;
label_1e5b8c:
    // 0x1e5b8c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e5b90:
    // 0x1e5b90: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_1e5b94:
    if (ctx->pc == 0x1E5B94u) {
        ctx->pc = 0x1E5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B90u;
        // 0x1e5b94: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B98u;
        goto label_1e5b98;
    }
    ctx->pc = 0x1E5B90u;
    {
        const bool branch_taken_0x1e5b90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B90u;
        // 0x1e5b94: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b90) {
            ctx->pc = 0x1E5BA4u;
            goto label_1e5ba4;
        }
    }
    ctx->pc = 0x1E5B98u;
label_1e5b98:
    // 0x1e5b98: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e5b9c:
    if (ctx->pc == 0x1E5B9Cu) {
        ctx->pc = 0x1E5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B98u;
        // 0x1e5b9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5BA0u;
        goto label_1e5ba0;
    }
    ctx->pc = 0x1E5B98u;
    {
        const bool branch_taken_0x1e5b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B98u;
        // 0x1e5b9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b98) {
            ctx->pc = 0x1E5BA4u;
            goto label_1e5ba4;
        }
    }
    ctx->pc = 0x1E5BA0u;
label_1e5ba0:
    // 0x1e5ba0: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x1e5ba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1e5ba4:
    // 0x1e5ba4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x1e5ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5ba8:
    // 0x1e5ba8: 0x0  nop
    ctx->pc = 0x1e5ba8u;
    // NOP
label_1e5bac:
    // 0x1e5bac: 0x8f828e94  lw          $v0, -0x716C($gp)
    ctx->pc = 0x1e5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
label_1e5bb0:
    // 0x1e5bb0: 0x14400189  bnez        $v0, . + 4 + (0x189 << 2)
label_1e5bb4:
    if (ctx->pc == 0x1E5BB4u) {
        ctx->pc = 0x1E5BB8u;
        goto label_1e5bb8;
    }
    ctx->pc = 0x1E5BB0u;
    {
        const bool branch_taken_0x1e5bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5bb0) {
            ctx->pc = 0x1E61D8u;
            { ctx->pc = 0x1e61d8; return; }
        }
    }
    ctx->pc = 0x1E5BB8u;
label_1e5bb8:
    // 0x1e5bb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5bbc:
    // 0x1e5bbc: 0x1625000f  bne         $s1, $a1, . + 4 + (0xF << 2)
label_1e5bc0:
    if (ctx->pc == 0x1E5BC0u) {
        ctx->pc = 0x1E5BC4u;
        goto label_1e5bc4;
    }
    ctx->pc = 0x1E5BBCu;
    {
        const bool branch_taken_0x1e5bbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x1e5bbc) {
            ctx->pc = 0x1E5BFCu;
            goto label_1e5bfc;
        }
    }
    ctx->pc = 0x1E5BC4u;
label_1e5bc4:
    // 0x1e5bc4: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e5bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e5bc8:
    // 0x1e5bc8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1e5bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e5bcc:
    // 0x1e5bcc: 0x24633120  addiu       $v1, $v1, 0x3120
    ctx->pc = 0x1e5bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12576));
label_1e5bd0:
    // 0x1e5bd0: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x1e5bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_1e5bd4:
    // 0x1e5bd4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1e5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e5bd8:
    // 0x1e5bd8: 0x27828ea0  addiu       $v0, $gp, -0x7160
    ctx->pc = 0x1e5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938272));
label_1e5bdc:
    // 0x1e5bdc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e5bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5be0:
    // 0x1e5be0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1e5be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e5be4:
    // 0x1e5be4: 0x27828e88  addiu       $v0, $gp, -0x7178
    ctx->pc = 0x1e5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938248));
label_1e5be8:
    // 0x1e5be8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e5bec:
    // 0x1e5bec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e5becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1e5bf0:
    // 0x1e5bf0: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e5bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e5bf4:
    // 0x1e5bf4: 0x10000178  b           . + 4 + (0x178 << 2)
label_1e5bf8:
    if (ctx->pc == 0x1E5BF8u) {
        ctx->pc = 0x1E5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BF4u;
        // 0x1e5bf8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5BFCu;
        goto label_1e5bfc;
    }
    ctx->pc = 0x1E5BF4u;
    {
        const bool branch_taken_0x1e5bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BF4u;
        // 0x1e5bf8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bf4) {
            ctx->pc = 0x1E61D8u;
            { ctx->pc = 0x1e61d8; return; }
        }
    }
    ctx->pc = 0x1E5BFCu;
label_1e5bfc:
    // 0x1e5bfc: 0x16200171  bnez        $s1, . + 4 + (0x171 << 2)
label_1e5c00:
    if (ctx->pc == 0x1E5C00u) {
        ctx->pc = 0x1E5C04u;
        goto label_1e5c04;
    }
    ctx->pc = 0x1E5BFCu;
    {
        const bool branch_taken_0x1e5bfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5bfc) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5C04u;
label_1e5c04:
    // 0x1e5c04: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1e5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1e5c08:
    // 0x1e5c08: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1e5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1e5c0c:
    // 0x1e5c0c: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x1e5c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1e5c10:
    // 0x1e5c10: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x1e5c10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e5c14:
    // 0x1e5c14: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e5c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e5c18:
    // 0x1e5c18: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_1e5c1c:
    if (ctx->pc == 0x1E5C1Cu) {
        ctx->pc = 0x1E5C20u;
        goto label_1e5c20;
    }
    ctx->pc = 0x1E5C18u;
    {
        const bool branch_taken_0x1e5c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c18) {
            ctx->pc = 0x1E5D5Cu;
            goto label_1e5d5c;
        }
    }
    ctx->pc = 0x1E5C20u;
label_1e5c20:
    // 0x1e5c20: 0x8f828e80  lw          $v0, -0x7180($gp)
    ctx->pc = 0x1e5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e5c24:
    // 0x1e5c24: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1e5c28:
    if (ctx->pc == 0x1E5C28u) {
        ctx->pc = 0x1E5C2Cu;
        goto label_1e5c2c;
    }
    ctx->pc = 0x1E5C24u;
    {
        const bool branch_taken_0x1e5c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c24) {
            ctx->pc = 0x1E5CB4u;
            goto label_1e5cb4;
        }
    }
    ctx->pc = 0x1E5C2Cu;
label_1e5c2c:
    // 0x1e5c2c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e5c30:
    // 0x1e5c30: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e5c34:
    // 0x1e5c34: 0x24423120  addiu       $v0, $v0, 0x3120
    ctx->pc = 0x1e5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12576));
label_1e5c38:
    // 0x1e5c38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5c3c:
    // 0x1e5c3c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e5c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5c40:
    // 0x1e5c40: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1e5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1e5c44:
    // 0x1e5c44: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x1e5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_1e5c48:
    // 0x1e5c48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e5c4c:
    // 0x1e5c4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5c50:
    // 0x1e5c50: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1e5c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5c54:
    // 0x1e5c54: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1e5c58:
    if (ctx->pc == 0x1E5C58u) {
        ctx->pc = 0x1E5C5Cu;
        goto label_1e5c5c;
    }
    ctx->pc = 0x1E5C54u;
    {
        const bool branch_taken_0x1e5c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e5c54) {
            ctx->pc = 0x1E5C88u;
            goto label_1e5c88;
        }
    }
    ctx->pc = 0x1E5C5Cu;
label_1e5c5c:
    // 0x1e5c5c: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_1e5c60:
    if (ctx->pc == 0x1E5C60u) {
        ctx->pc = 0x1E5C64u;
        goto label_1e5c64;
    }
    ctx->pc = 0x1E5C5Cu;
    {
        const bool branch_taken_0x1e5c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e5c5c) {
            ctx->pc = 0x1E5C80u;
            goto label_1e5c80;
        }
    }
    ctx->pc = 0x1E5C64u;
label_1e5c64:
    // 0x1e5c64: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e5c68:
    if (ctx->pc == 0x1E5C68u) {
        ctx->pc = 0x1E5C6Cu;
        goto label_1e5c6c;
    }
    ctx->pc = 0x1E5C64u;
    {
        const bool branch_taken_0x1e5c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c64) {
            ctx->pc = 0x1E5C74u;
            goto label_1e5c74;
        }
    }
    ctx->pc = 0x1E5C6Cu;
label_1e5c6c:
    // 0x1e5c6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e5c70:
    if (ctx->pc == 0x1E5C70u) {
        ctx->pc = 0x1E5C74u;
        goto label_1e5c74;
    }
    ctx->pc = 0x1E5C6Cu;
    {
        const bool branch_taken_0x1e5c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c6c) {
            ctx->pc = 0x1E5C90u;
            goto label_1e5c90;
        }
    }
    ctx->pc = 0x1E5C74u;
label_1e5c74:
    // 0x1e5c74: 0x0  nop
    ctx->pc = 0x1e5c74u;
    // NOP
label_1e5c78:
    // 0x1e5c78: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e5c7c:
    if (ctx->pc == 0x1E5C7Cu) {
        ctx->pc = 0x1E5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C78u;
        // 0x1e5c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C80u;
        goto label_1e5c80;
    }
    ctx->pc = 0x1E5C78u;
    {
        const bool branch_taken_0x1e5c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C78u;
        // 0x1e5c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c78) {
            ctx->pc = 0x1E5C94u;
            goto label_1e5c94;
        }
    }
    ctx->pc = 0x1E5C80u;
label_1e5c80:
    // 0x1e5c80: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e5c84:
    if (ctx->pc == 0x1E5C84u) {
        ctx->pc = 0x1E5C88u;
        goto label_1e5c88;
    }
    ctx->pc = 0x1E5C80u;
    {
        const bool branch_taken_0x1e5c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c80) {
            ctx->pc = 0x1E5C94u;
            goto label_1e5c94;
        }
    }
    ctx->pc = 0x1E5C88u;
label_1e5c88:
    // 0x1e5c88: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e5c8c:
    if (ctx->pc == 0x1E5C8Cu) {
        ctx->pc = 0x1E5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C88u;
        // 0x1e5c8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C90u;
        goto label_1e5c90;
    }
    ctx->pc = 0x1E5C88u;
    {
        const bool branch_taken_0x1e5c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C88u;
        // 0x1e5c8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c88) {
            ctx->pc = 0x1E5C94u;
            goto label_1e5c94;
        }
    }
    ctx->pc = 0x1E5C90u;
label_1e5c90:
    // 0x1e5c90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e5c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e5c94:
    // 0x1e5c94: 0x0  nop
    ctx->pc = 0x1e5c94u;
    // NOP
label_1e5c98:
    // 0x1e5c98: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e5c9c:
    // 0x1e5c9c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e5c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e5ca0:
    // 0x1e5ca0: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x1e5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
label_1e5ca4:
    // 0x1e5ca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5ca8:
    // 0x1e5ca8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5cac:
    // 0x1e5cac: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1e5cb0:
    if (ctx->pc == 0x1E5CB0u) {
        ctx->pc = 0x1E5CB4u;
        goto label_1e5cb4;
    }
    ctx->pc = 0x1E5CACu;
    {
        const bool branch_taken_0x1e5cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5cac) {
            ctx->pc = 0x1E5D44u;
            goto label_1e5d44;
        }
    }
    ctx->pc = 0x1E5CB4u;
label_1e5cb4:
    // 0x1e5cb4: 0x0  nop
    ctx->pc = 0x1e5cb4u;
    // NOP
label_1e5cb8:
    // 0x1e5cb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5cbc:
    // 0x1e5cbc: 0xc05b420  jal         func_16D080
label_1e5cc0:
    if (ctx->pc == 0x1E5CC0u) {
        ctx->pc = 0x1E5CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CBCu;
        // 0x1e5cc0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5CC4u;
        goto label_1e5cc4;
    }
    ctx->pc = 0x1E5CBCu;
    SET_GPR_U32(ctx, 31, 0x1E5CC4u);
    ctx->pc = 0x1E5CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5CBCu;
    // 0x1e5cc0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E5CBCu, 0x1E5CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CC4u;
label_1e5cc4:
    // 0x1e5cc4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1e5cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5cc8:
    // 0x1e5cc8: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_1e5ccc:
    if (ctx->pc == 0x1E5CCCu) {
        ctx->pc = 0x1E5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CC8u;
        // 0x1e5ccc: 0x3223000f  andi        $v1, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5CD0u;
        goto label_1e5cd0;
    }
    ctx->pc = 0x1E5CC8u;
    {
        const bool branch_taken_0x1e5cc8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1E5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CC8u;
        // 0x1e5ccc: 0x3223000f  andi        $v1, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cc8) {
            ctx->pc = 0x1E5CDCu;
            goto label_1e5cdc;
        }
    }
    ctx->pc = 0x1E5CD0u;
label_1e5cd0:
    // 0x1e5cd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e5cd4:
    if (ctx->pc == 0x1E5CD4u) {
        ctx->pc = 0x1E5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CD0u;
        // 0x1e5cd4: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5CD8u;
        goto label_1e5cd8;
    }
    ctx->pc = 0x1E5CD0u;
    {
        const bool branch_taken_0x1e5cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CD0u;
        // 0x1e5cd4: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cd0) {
            ctx->pc = 0x1E5CE0u;
            goto label_1e5ce0;
        }
    }
    ctx->pc = 0x1E5CD8u;
label_1e5cd8:
    // 0x1e5cd8: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1e5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1e5cdc:
    // 0x1e5cdc: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x1e5cdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e5ce0:
    // 0x1e5ce0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e5ce4:
    if (ctx->pc == 0x1E5CE4u) {
        ctx->pc = 0x1E5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CE0u;
        // 0x1e5ce4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5CE8u;
        goto label_1e5ce8;
    }
    ctx->pc = 0x1E5CE0u;
    {
        const bool branch_taken_0x1e5ce0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CE0u;
        // 0x1e5ce4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ce0) {
            ctx->pc = 0x1E5D08u;
            goto label_1e5d08;
        }
    }
    ctx->pc = 0x1E5CE8u;
label_1e5ce8:
    // 0x1e5ce8: 0x311c0  sll         $v0, $v1, 7
    ctx->pc = 0x1e5ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1e5cec:
    // 0x1e5cec: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_1e5cf0:
    if (ctx->pc == 0x1E5CF0u) {
        ctx->pc = 0x1E5CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CECu;
        // 0x1e5cf0: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5CF4u;
        goto label_1e5cf4;
    }
    ctx->pc = 0x1E5CECu;
    {
        const bool branch_taken_0x1e5cec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E5CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CECu;
        // 0x1e5cf0: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cec) {
            ctx->pc = 0x1E5D20u;
            goto label_1e5d20;
        }
    }
    ctx->pc = 0x1E5CF4u;
label_1e5cf4:
    // 0x1e5cf4: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1e5cf8:
    // 0x1e5cf8: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1e5cf8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1e5cfc:
    // 0x1e5cfc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e5d00:
    if (ctx->pc == 0x1E5D00u) {
        ctx->pc = 0x1E5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CFCu;
        // 0x1e5d00: 0xaf838dc8  sw          $v1, -0x7238($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938056), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D04u;
        goto label_1e5d04;
    }
    ctx->pc = 0x1E5CFCu;
    {
        const bool branch_taken_0x1e5cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CFCu;
        // 0x1e5d00: 0xaf838dc8  sw          $v1, -0x7238($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938056), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cfc) {
            ctx->pc = 0x1E5D24u;
            goto label_1e5d24;
        }
    }
    ctx->pc = 0x1E5D04u;
label_1e5d04:
    // 0x1e5d04: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e5d08:
    // 0x1e5d08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5d0c:
    // 0x1e5d0c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e5d10:
    // 0x1e5d10: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1e5d14:
    if (ctx->pc == 0x1E5D14u) {
        ctx->pc = 0x1E5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D10u;
        // 0x1e5d14: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D18u;
        goto label_1e5d18;
    }
    ctx->pc = 0x1E5D10u;
    {
        const bool branch_taken_0x1e5d10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D10u;
        // 0x1e5d14: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d10) {
            ctx->pc = 0x1E5D20u;
            goto label_1e5d20;
        }
    }
    ctx->pc = 0x1E5D18u;
label_1e5d18:
    // 0x1e5d18: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1e5d1c:
    // 0x1e5d1c: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1e5d1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1e5d20:
    // 0x1e5d20: 0xaf838dc8  sw          $v1, -0x7238($gp)
    ctx->pc = 0x1e5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938056), GPR_U32(ctx, 3));
label_1e5d24:
    // 0x1e5d24: 0xc0799a0  jal         func_1E6680
label_1e5d28:
    if (ctx->pc == 0x1E5D28u) {
        ctx->pc = 0x1E5D2Cu;
        goto label_1e5d2c;
    }
    ctx->pc = 0x1E5D24u;
    SET_GPR_U32(ctx, 31, 0x1E5D2Cu);
    ctx->pc = 0x1E6680u;
    { ctx->pc = 0x1e6680; return; }
    ctx->pc = 0x1E5D2Cu;
label_1e5d2c:
    // 0x1e5d2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e5d30:
    // 0x1e5d30: 0x2a210031  slti        $at, $s1, 0x31
    ctx->pc = 0x1e5d30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_1e5d34:
    // 0x1e5d34: 0x1420ffe4  bnez        $at, . + 4 + (-0x1C << 2)
label_1e5d38:
    if (ctx->pc == 0x1E5D38u) {
        ctx->pc = 0x1E5D3Cu;
        goto label_1e5d3c;
    }
    ctx->pc = 0x1E5D34u;
    {
        const bool branch_taken_0x1e5d34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d34) {
            ctx->pc = 0x1E5CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5cc8;
        }
    }
    ctx->pc = 0x1E5D3Cu;
label_1e5d3c:
    // 0x1e5d3c: 0x10000121  b           . + 4 + (0x121 << 2)
label_1e5d40:
    if (ctx->pc == 0x1E5D40u) {
        ctx->pc = 0x1E5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D3Cu;
        // 0x1e5d40: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D44u;
        goto label_1e5d44;
    }
    ctx->pc = 0x1E5D3Cu;
    {
        const bool branch_taken_0x1e5d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D3Cu;
        // 0x1e5d40: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d3c) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5D44u;
label_1e5d44:
    // 0x1e5d44: 0x0  nop
    ctx->pc = 0x1e5d44u;
    // NOP
label_1e5d48:
    // 0x1e5d48: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e5d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e5d4c:
    // 0x1e5d4c: 0xc05b420  jal         func_16D080
label_1e5d50:
    if (ctx->pc == 0x1E5D50u) {
        ctx->pc = 0x1E5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D4Cu;
        // 0x1e5d50: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D54u;
        goto label_1e5d54;
    }
    ctx->pc = 0x1E5D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E5D54u);
    ctx->pc = 0x1E5D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D4Cu;
    // 0x1e5d50: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E5D4Cu, 0x1E5D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D54u;
label_1e5d54:
    // 0x1e5d54: 0x1000011b  b           . + 4 + (0x11B << 2)
label_1e5d58:
    if (ctx->pc == 0x1E5D58u) {
        ctx->pc = 0x1E5D5Cu;
        goto label_1e5d5c;
    }
    ctx->pc = 0x1E5D54u;
    {
        const bool branch_taken_0x1e5d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d54) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5D5Cu;
label_1e5d5c:
    // 0x1e5d5c: 0x0  nop
    ctx->pc = 0x1e5d5cu;
    // NOP
label_1e5d60:
    // 0x1e5d60: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1e5d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e5d64:
    // 0x1e5d64: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x1e5d64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1e5d68:
    // 0x1e5d68: 0xdf8387d0  ld          $v1, -0x7830($gp)
    ctx->pc = 0x1e5d68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1e5d6c:
    // 0x1e5d6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e5d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e5d70:
    // 0x1e5d70: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_1e5d74:
    if (ctx->pc == 0x1E5D74u) {
        ctx->pc = 0x1E5D78u;
        goto label_1e5d78;
    }
    ctx->pc = 0x1E5D70u;
    {
        const bool branch_taken_0x1e5d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d70) {
            ctx->pc = 0x1E5E58u;
            goto label_1e5e58;
        }
    }
    ctx->pc = 0x1E5D78u;
label_1e5d78:
    // 0x1e5d78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e5d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5d7c:
    // 0x1e5d7c: 0xc05b420  jal         func_16D080
label_1e5d80:
    if (ctx->pc == 0x1E5D80u) {
        ctx->pc = 0x1E5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D7Cu;
        // 0x1e5d80: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5D84u;
        goto label_1e5d84;
    }
    ctx->pc = 0x1E5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1E5D84u);
    ctx->pc = 0x1E5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D7Cu;
    // 0x1e5d80: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E5D7Cu, 0x1E5D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D84u;
label_1e5d84:
    // 0x1e5d84: 0x8f828e80  lw          $v0, -0x7180($gp)
    ctx->pc = 0x1e5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e5d88:
    // 0x1e5d88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5d8c:
    // 0x1e5d8c: 0x1444001f  bne         $v0, $a0, . + 4 + (0x1F << 2)
label_1e5d90:
    if (ctx->pc == 0x1E5D90u) {
        ctx->pc = 0x1E5D94u;
        goto label_1e5d94;
    }
    ctx->pc = 0x1E5D8Cu;
    {
        const bool branch_taken_0x1e5d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e5d8c) {
            ctx->pc = 0x1E5E0Cu;
            goto label_1e5e0c;
        }
    }
    ctx->pc = 0x1E5D94u;
label_1e5d94:
    // 0x1e5d94: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e5d98:
    // 0x1e5d98: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e5d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e5d9c:
    // 0x1e5d9c: 0x24423120  addiu       $v0, $v0, 0x3120
    ctx->pc = 0x1e5d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12576));
label_1e5da0:
    // 0x1e5da0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5da4:
    // 0x1e5da4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e5da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5da8:
    // 0x1e5da8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e5dac:
    // 0x1e5dac: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1e5db0:
    if (ctx->pc == 0x1E5DB0u) {
        ctx->pc = 0x1E5DB4u;
        goto label_1e5db4;
    }
    ctx->pc = 0x1E5DACu;
    {
        const bool branch_taken_0x1e5dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5dac) {
            ctx->pc = 0x1E5DC4u;
            goto label_1e5dc4;
        }
    }
    ctx->pc = 0x1E5DB4u;
label_1e5db4:
    // 0x1e5db4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e5db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e5db8:
    // 0x1e5db8: 0x8c22ccf8  lw          $v0, -0x3308($at)
    ctx->pc = 0x1e5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954232)));
label_1e5dbc:
    // 0x1e5dbc: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
label_1e5dc0:
    if (ctx->pc == 0x1E5DC0u) {
        ctx->pc = 0x1E5DC4u;
        goto label_1e5dc4;
    }
    ctx->pc = 0x1E5DBCu;
    {
        const bool branch_taken_0x1e5dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e5dbc) {
            ctx->pc = 0x1E5DE8u;
            goto label_1e5de8;
        }
    }
    ctx->pc = 0x1E5DC4u;
label_1e5dc4:
    // 0x1e5dc4: 0x0  nop
    ctx->pc = 0x1e5dc4u;
    // NOP
label_1e5dc8:
    // 0x1e5dc8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1e5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e5dcc:
    // 0x1e5dcc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1e5dd0:
    if (ctx->pc == 0x1E5DD0u) {
        ctx->pc = 0x1E5DD4u;
        goto label_1e5dd4;
    }
    ctx->pc = 0x1E5DCCu;
    {
        const bool branch_taken_0x1e5dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5dcc) {
            ctx->pc = 0x1E5E0Cu;
            goto label_1e5e0c;
        }
    }
    ctx->pc = 0x1E5DD4u;
label_1e5dd4:
    // 0x1e5dd4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e5dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e5dd8:
    // 0x1e5dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ddc:
    // 0x1e5ddc: 0x8c23ccfc  lw          $v1, -0x3304($at)
    ctx->pc = 0x1e5ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954236)));
label_1e5de0:
    // 0x1e5de0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1e5de4:
    if (ctx->pc == 0x1E5DE4u) {
        ctx->pc = 0x1E5DE8u;
        goto label_1e5de8;
    }
    ctx->pc = 0x1E5DE0u;
    {
        const bool branch_taken_0x1e5de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5de0) {
            ctx->pc = 0x1E5E0Cu;
            goto label_1e5e0c;
        }
    }
    ctx->pc = 0x1E5DE8u;
label_1e5de8:
    // 0x1e5de8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5dec:
    // 0x1e5dec: 0xaf828e80  sw          $v0, -0x7180($gp)
    ctx->pc = 0x1e5decu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
label_1e5df0:
    // 0x1e5df0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5df4:
    // 0x1e5df4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e5df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5df8:
    // 0x1e5df8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5dfc:
    // 0x1e5dfc: 0xc079944  jal         func_1E6510
label_1e5e00:
    if (ctx->pc == 0x1E5E00u) {
        ctx->pc = 0x1E5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DFCu;
        // 0x1e5e00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E04u;
        goto label_1e5e04;
    }
    ctx->pc = 0x1E5DFCu;
    SET_GPR_U32(ctx, 31, 0x1E5E04u);
    ctx->pc = 0x1E5E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DFCu;
    // 0x1e5e00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6510u;
    { ctx->pc = 0x1e6510; return; }
    ctx->pc = 0x1E5E04u;
label_1e5e04:
    // 0x1e5e04: 0x100000ef  b           . + 4 + (0xEF << 2)
label_1e5e08:
    if (ctx->pc == 0x1E5E08u) {
        ctx->pc = 0x1E5E0Cu;
        goto label_1e5e0c;
    }
    ctx->pc = 0x1E5E04u;
    {
        const bool branch_taken_0x1e5e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e04) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5E0Cu;
label_1e5e0c:
    // 0x1e5e0c: 0x0  nop
    ctx->pc = 0x1e5e0cu;
    // NOP
label_1e5e10:
    // 0x1e5e10: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_1e5e14:
    if (ctx->pc == 0x1E5E14u) {
        ctx->pc = 0x1E5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E10u;
        // 0x1e5e14: 0x2655ffff  addiu       $s5, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E18u;
        goto label_1e5e18;
    }
    ctx->pc = 0x1E5E10u;
    {
        const bool branch_taken_0x1e5e10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E10u;
        // 0x1e5e14: 0x2655ffff  addiu       $s5, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e10) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5E18u;
label_1e5e18:
    // 0x1e5e18: 0x8f828e9c  lw          $v0, -0x7164($gp)
    ctx->pc = 0x1e5e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e5e1c:
    // 0x1e5e1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e5e20:
    if (ctx->pc == 0x1E5E20u) {
        ctx->pc = 0x1E5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E1Cu;
        // 0x1e5e20: 0x2455ffff  addiu       $s5, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E24u;
        goto label_1e5e24;
    }
    ctx->pc = 0x1E5E1Cu;
    {
        const bool branch_taken_0x1e5e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E1Cu;
        // 0x1e5e20: 0x2455ffff  addiu       $s5, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e1c) {
            ctx->pc = 0x1E5E28u;
            goto label_1e5e28;
        }
    }
    ctx->pc = 0x1E5E24u;
label_1e5e24:
    // 0x1e5e24: 0x2655ffff  addiu       $s5, $s2, -0x1
    ctx->pc = 0x1e5e24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e5e28:
    // 0x1e5e28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5e2c:
    // 0x1e5e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5e30:
    // 0x1e5e30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e5e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e5e34:
    // 0x1e5e34: 0xc079944  jal         func_1E6510
label_1e5e38:
    if (ctx->pc == 0x1E5E38u) {
        ctx->pc = 0x1E5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E34u;
        // 0x1e5e38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E3Cu;
        goto label_1e5e3c;
    }
    ctx->pc = 0x1E5E34u;
    SET_GPR_U32(ctx, 31, 0x1E5E3Cu);
    ctx->pc = 0x1E5E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E34u;
    // 0x1e5e38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6510u;
    { ctx->pc = 0x1e6510; return; }
    ctx->pc = 0x1E5E3Cu;
label_1e5e3c:
    // 0x1e5e3c: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e5e40:
    // 0x1e5e40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5e44:
    // 0x1e5e44: 0x146200df  bne         $v1, $v0, . + 4 + (0xDF << 2)
label_1e5e48:
    if (ctx->pc == 0x1E5E48u) {
        ctx->pc = 0x1E5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E44u;
        // 0x1e5e48: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E4Cu;
        goto label_1e5e4c;
    }
    ctx->pc = 0x1E5E44u;
    {
        const bool branch_taken_0x1e5e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E44u;
        // 0x1e5e48: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e44) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5E4Cu;
label_1e5e4c:
    // 0x1e5e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5e50:
    // 0x1e5e50: 0x100000dc  b           . + 4 + (0xDC << 2)
label_1e5e54:
    if (ctx->pc == 0x1E5E54u) {
        ctx->pc = 0x1E5E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E50u;
        // 0x1e5e54: 0xaf828e80  sw          $v0, -0x7180($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E58u;
        goto label_1e5e58;
    }
    ctx->pc = 0x1E5E50u;
    {
        const bool branch_taken_0x1e5e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E50u;
        // 0x1e5e54: 0xaf828e80  sw          $v0, -0x7180($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e50) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5E58u;
label_1e5e58:
    // 0x1e5e58: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e5e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e5e5c:
    // 0x1e5e5c: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x1e5e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1e5e60:
    // 0x1e5e60: 0xdf8387d0  ld          $v1, -0x7830($gp)
    ctx->pc = 0x1e5e60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1e5e64:
    // 0x1e5e64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e5e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e5e68:
    // 0x1e5e68: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_1e5e6c:
    if (ctx->pc == 0x1E5E6Cu) {
        ctx->pc = 0x1E5E70u;
        goto label_1e5e70;
    }
    ctx->pc = 0x1E5E68u;
    {
        const bool branch_taken_0x1e5e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e68) {
            ctx->pc = 0x1E5F54u;
            goto label_1e5f54;
        }
    }
    ctx->pc = 0x1E5E70u;
label_1e5e70:
    // 0x1e5e70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e5e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5e74:
    // 0x1e5e74: 0xc05b420  jal         func_16D080
label_1e5e78:
    if (ctx->pc == 0x1E5E78u) {
        ctx->pc = 0x1E5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E74u;
        // 0x1e5e78: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5E7Cu;
        goto label_1e5e7c;
    }
    ctx->pc = 0x1E5E74u;
    SET_GPR_U32(ctx, 31, 0x1E5E7Cu);
    ctx->pc = 0x1E5E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E74u;
    // 0x1e5e78: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E5E74u, 0x1E5E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E7Cu;
label_1e5e7c:
    // 0x1e5e7c: 0x8f828e80  lw          $v0, -0x7180($gp)
    ctx->pc = 0x1e5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e5e80:
    // 0x1e5e80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e5e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5e84:
    // 0x1e5e84: 0x1444001f  bne         $v0, $a0, . + 4 + (0x1F << 2)
label_1e5e88:
    if (ctx->pc == 0x1E5E88u) {
        ctx->pc = 0x1E5E8Cu;
        goto label_1e5e8c;
    }
    ctx->pc = 0x1E5E84u;
    {
        const bool branch_taken_0x1e5e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e5e84) {
            ctx->pc = 0x1E5F04u;
            goto label_1e5f04;
        }
    }
    ctx->pc = 0x1E5E8Cu;
label_1e5e8c:
    // 0x1e5e8c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e5e90:
    // 0x1e5e90: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1e5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e5e94:
    // 0x1e5e94: 0x24423120  addiu       $v0, $v0, 0x3120
    ctx->pc = 0x1e5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12576));
label_1e5e98:
    // 0x1e5e98: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5e9c:
    // 0x1e5e9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e5e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5ea0:
    // 0x1e5ea0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e5ea4:
    // 0x1e5ea4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1e5ea8:
    if (ctx->pc == 0x1E5EA8u) {
        ctx->pc = 0x1E5EACu;
        goto label_1e5eac;
    }
    ctx->pc = 0x1E5EA4u;
    {
        const bool branch_taken_0x1e5ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5ea4) {
            ctx->pc = 0x1E5EBCu;
            goto label_1e5ebc;
        }
    }
    ctx->pc = 0x1E5EACu;
label_1e5eac:
    // 0x1e5eac: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e5eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e5eb0:
    // 0x1e5eb0: 0x8c22ccf8  lw          $v0, -0x3308($at)
    ctx->pc = 0x1e5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954232)));
label_1e5eb4:
    // 0x1e5eb4: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
label_1e5eb8:
    if (ctx->pc == 0x1E5EB8u) {
        ctx->pc = 0x1E5EBCu;
        goto label_1e5ebc;
    }
    ctx->pc = 0x1E5EB4u;
    {
        const bool branch_taken_0x1e5eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e5eb4) {
            ctx->pc = 0x1E5EE0u;
            goto label_1e5ee0;
        }
    }
    ctx->pc = 0x1E5EBCu;
label_1e5ebc:
    // 0x1e5ebc: 0x0  nop
    ctx->pc = 0x1e5ebcu;
    // NOP
label_1e5ec0:
    // 0x1e5ec0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1e5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e5ec4:
    // 0x1e5ec4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1e5ec8:
    if (ctx->pc == 0x1E5EC8u) {
        ctx->pc = 0x1E5ECCu;
        goto label_1e5ecc;
    }
    ctx->pc = 0x1E5EC4u;
    {
        const bool branch_taken_0x1e5ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5ec4) {
            ctx->pc = 0x1E5F04u;
            goto label_1e5f04;
        }
    }
    ctx->pc = 0x1E5ECCu;
label_1e5ecc:
    // 0x1e5ecc: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1e5eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_1e5ed0:
    // 0x1e5ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ed4:
    // 0x1e5ed4: 0x8c23ccfc  lw          $v1, -0x3304($at)
    ctx->pc = 0x1e5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954236)));
label_1e5ed8:
    // 0x1e5ed8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1e5edc:
    if (ctx->pc == 0x1E5EDCu) {
        ctx->pc = 0x1E5EE0u;
        goto label_1e5ee0;
    }
    ctx->pc = 0x1E5ED8u;
    {
        const bool branch_taken_0x1e5ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5ed8) {
            ctx->pc = 0x1E5F04u;
            goto label_1e5f04;
        }
    }
    ctx->pc = 0x1E5EE0u;
label_1e5ee0:
    // 0x1e5ee0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5ee4:
    // 0x1e5ee4: 0xaf828e80  sw          $v0, -0x7180($gp)
    ctx->pc = 0x1e5ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
label_1e5ee8:
    // 0x1e5ee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5eec:
    // 0x1e5eec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e5eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5ef0:
    // 0x1e5ef0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ef4:
    // 0x1e5ef4: 0xc079944  jal         func_1E6510
label_1e5ef8:
    if (ctx->pc == 0x1E5EF8u) {
        ctx->pc = 0x1E5EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5EF4u;
        // 0x1e5ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5EFCu;
        goto label_1e5efc;
    }
    ctx->pc = 0x1E5EF4u;
    SET_GPR_U32(ctx, 31, 0x1E5EFCu);
    ctx->pc = 0x1E5EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5EF4u;
    // 0x1e5ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6510u;
    { ctx->pc = 0x1e6510; return; }
    ctx->pc = 0x1E5EFCu;
label_1e5efc:
    // 0x1e5efc: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_1e5f00:
    if (ctx->pc == 0x1E5F00u) {
        ctx->pc = 0x1E5F04u;
        goto label_1e5f04;
    }
    ctx->pc = 0x1E5EFCu;
    {
        const bool branch_taken_0x1e5efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5efc) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5F04u;
label_1e5f04:
    // 0x1e5f04: 0x0  nop
    ctx->pc = 0x1e5f04u;
    // NOP
label_1e5f08:
    // 0x1e5f08: 0x8f828e9c  lw          $v0, -0x7164($gp)
    ctx->pc = 0x1e5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e5f0c:
    // 0x1e5f0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e5f10:
    // 0x1e5f10: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
label_1e5f14:
    if (ctx->pc == 0x1E5F14u) {
        ctx->pc = 0x1E5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F10u;
        // 0x1e5f14: 0x26550001  addiu       $s5, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5F18u;
        goto label_1e5f18;
    }
    ctx->pc = 0x1E5F10u;
    {
        const bool branch_taken_0x1e5f10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F10u;
        // 0x1e5f14: 0x26550001  addiu       $s5, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f10) {
            ctx->pc = 0x1E5F24u;
            goto label_1e5f24;
        }
    }
    ctx->pc = 0x1E5F18u;
label_1e5f18:
    // 0x1e5f18: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e5f1c:
    if (ctx->pc == 0x1E5F1Cu) {
        ctx->pc = 0x1E5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F18u;
        // 0x1e5f1c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5F20u;
        goto label_1e5f20;
    }
    ctx->pc = 0x1E5F18u;
    {
        const bool branch_taken_0x1e5f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F18u;
        // 0x1e5f1c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f18) {
            ctx->pc = 0x1E5F24u;
            goto label_1e5f24;
        }
    }
    ctx->pc = 0x1E5F20u;
label_1e5f20:
    // 0x1e5f20: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x1e5f20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e5f24:
    // 0x1e5f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f28:
    // 0x1e5f28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e5f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f2c:
    // 0x1e5f2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e5f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5f30:
    // 0x1e5f30: 0xc079944  jal         func_1E6510
label_1e5f34:
    if (ctx->pc == 0x1E5F34u) {
        ctx->pc = 0x1E5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F30u;
        // 0x1e5f34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5F38u;
        goto label_1e5f38;
    }
    ctx->pc = 0x1E5F30u;
    SET_GPR_U32(ctx, 31, 0x1E5F38u);
    ctx->pc = 0x1E5F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F30u;
    // 0x1e5f34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6510u;
    { ctx->pc = 0x1e6510; return; }
    ctx->pc = 0x1E5F38u;
label_1e5f38:
    // 0x1e5f38: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e5f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e5f3c:
    // 0x1e5f3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5f40:
    // 0x1e5f40: 0x146200a0  bne         $v1, $v0, . + 4 + (0xA0 << 2)
label_1e5f44:
    if (ctx->pc == 0x1E5F44u) {
        ctx->pc = 0x1E5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F40u;
        // 0x1e5f44: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5F48u;
        goto label_1e5f48;
    }
    ctx->pc = 0x1E5F40u;
    {
        const bool branch_taken_0x1e5f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F40u;
        // 0x1e5f44: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f40) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5F48u;
label_1e5f48:
    // 0x1e5f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5f4c:
    // 0x1e5f4c: 0x1000009d  b           . + 4 + (0x9D << 2)
label_1e5f50:
    if (ctx->pc == 0x1E5F50u) {
        ctx->pc = 0x1E5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F4Cu;
        // 0x1e5f50: 0xaf828e80  sw          $v0, -0x7180($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5F54u;
        goto label_1e5f54;
    }
    ctx->pc = 0x1E5F4Cu;
    {
        const bool branch_taken_0x1e5f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F4Cu;
        // 0x1e5f50: 0xaf828e80  sw          $v0, -0x7180($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f4c) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5F54u;
label_1e5f54:
    // 0x1e5f54: 0x0  nop
    ctx->pc = 0x1e5f54u;
    // NOP
label_1e5f58:
    // 0x1e5f58: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1e5f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1e5f5c:
    // 0x1e5f5c: 0x432004  sllv        $a0, $v1, $v0
    ctx->pc = 0x1e5f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1e5f60:
    // 0x1e5f60: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x1e5f60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e5f64:
    // 0x1e5f64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e5f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e5f68:
    // 0x1e5f68: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1e5f6c:
    if (ctx->pc == 0x1E5F6Cu) {
        ctx->pc = 0x1E5F70u;
        goto label_1e5f70;
    }
    ctx->pc = 0x1E5F68u;
    {
        const bool branch_taken_0x1e5f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f68) {
            ctx->pc = 0x1E5F88u;
            goto label_1e5f88;
        }
    }
    ctx->pc = 0x1E5F70u;
label_1e5f70:
    // 0x1e5f70: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x1e5f70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e5f74:
    // 0x1e5f74: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1e5f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1e5f78:
    // 0x1e5f78: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1e5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_1e5f7c:
    // 0x1e5f7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e5f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e5f80:
    // 0x1e5f80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1e5f84:
    if (ctx->pc == 0x1E5F84u) {
        ctx->pc = 0x1E5F88u;
        goto label_1e5f88;
    }
    ctx->pc = 0x1E5F80u;
    {
        const bool branch_taken_0x1e5f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f80) {
            ctx->pc = 0x1E5FA8u;
            goto label_1e5fa8;
        }
    }
    ctx->pc = 0x1E5F88u;
label_1e5f88:
    // 0x1e5f88: 0x8f828e7c  lw          $v0, -0x7184($gp)
    ctx->pc = 0x1e5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
label_1e5f8c:
    // 0x1e5f8c: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_1e5f90:
    if (ctx->pc == 0x1E5F90u) {
        ctx->pc = 0x1E5F94u;
        goto label_1e5f94;
    }
    ctx->pc = 0x1E5F8Cu;
    {
        const bool branch_taken_0x1e5f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f8c) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5F94u;
label_1e5f94:
    // 0x1e5f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e5f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f98:
    // 0x1e5f98: 0xc05b420  jal         func_16D080
label_1e5f9c:
    if (ctx->pc == 0x1E5F9Cu) {
        ctx->pc = 0x1E5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F98u;
        // 0x1e5f9c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5FA0u;
        goto label_1e5fa0;
    }
    ctx->pc = 0x1E5F98u;
    SET_GPR_U32(ctx, 31, 0x1E5FA0u);
    ctx->pc = 0x1E5F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F98u;
    // 0x1e5f9c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E5F98u, 0x1E5FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FA0u;
label_1e5fa0:
    // 0x1e5fa0: 0x1000008d  b           . + 4 + (0x8D << 2)
label_1e5fa4:
    if (ctx->pc == 0x1E5FA4u) {
        ctx->pc = 0x1E5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FA0u;
        // 0x1e5fa4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5FA8u;
        goto label_1e5fa8;
    }
    ctx->pc = 0x1E5FA0u;
    {
        const bool branch_taken_0x1e5fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FA0u;
        // 0x1e5fa4: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fa0) {
            ctx->pc = 0x1E61D8u;
            { ctx->pc = 0x1e61d8; return; }
        }
    }
    ctx->pc = 0x1E5FA8u;
label_1e5fa8:
    // 0x1e5fa8: 0x8f838e78  lw          $v1, -0x7188($gp)
    ctx->pc = 0x1e5fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938232)));
label_1e5fac:
    // 0x1e5fac: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
label_1e5fb0:
    if (ctx->pc == 0x1E5FB0u) {
        ctx->pc = 0x1E5FB4u;
        goto label_1e5fb4;
    }
    ctx->pc = 0x1E5FACu;
    {
        const bool branch_taken_0x1e5fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5fac) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E5FB4u;
label_1e5fb4:
    // 0x1e5fb4: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x1e5fb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e5fb8:
    // 0x1e5fb8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1e5fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1e5fbc:
    // 0x1e5fbc: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1e5fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_1e5fc0:
    // 0x1e5fc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e5fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1e5fc4:
    // 0x1e5fc4: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_1e5fc8:
    if (ctx->pc == 0x1E5FC8u) {
        ctx->pc = 0x1E5FCCu;
        goto label_1e5fcc;
    }
    ctx->pc = 0x1E5FC4u;
    {
        const bool branch_taken_0x1e5fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5fc4) {
            ctx->pc = 0x1E60B8u;
            goto label_1e60b8;
        }
    }
    ctx->pc = 0x1E5FCCu;
label_1e5fcc:
    // 0x1e5fcc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e5fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5fd0:
    // 0x1e5fd0: 0xc05b420  jal         func_16D080
label_1e5fd4:
    if (ctx->pc == 0x1E5FD4u) {
        ctx->pc = 0x1E5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FD0u;
        // 0x1e5fd4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5FD8u;
        goto label_1e5fd8;
    }
    ctx->pc = 0x1E5FD0u;
    SET_GPR_U32(ctx, 31, 0x1E5FD8u);
    ctx->pc = 0x1E5FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FD0u;
    // 0x1e5fd4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E5FD0u, 0x1E5FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FD8u;
label_1e5fd8:
    // 0x1e5fd8: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e5fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e5fdc:
    // 0x1e5fdc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1e5fe0:
    // 0x1e5fe0: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1e5fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e5fe4:
    // 0x1e5fe4: 0x24633120  addiu       $v1, $v1, 0x3120
    ctx->pc = 0x1e5fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12576));
label_1e5fe8:
    // 0x1e5fe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e5fec:
    // 0x1e5fec: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x1e5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
label_1e5ff0:
    // 0x1e5ff0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e5ff4:
    // 0x1e5ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e5ff8:
    // 0x1e5ff8: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x1e5ff8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5ffc:
    // 0x1e5ffc: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_1e6000:
    if (ctx->pc == 0x1E6000u) {
        ctx->pc = 0x1E6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FFCu;
        // 0x1e6000: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6004u;
        goto label_1e6004;
    }
    ctx->pc = 0x1E5FFCu;
    {
        const bool branch_taken_0x1e5ffc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FFCu;
        // 0x1e6000: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ffc) {
            ctx->pc = 0x1E6020u;
            goto label_1e6020;
        }
    }
    ctx->pc = 0x1E6004u;
label_1e6004:
    // 0x1e6004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6008:
    // 0x1e6008: 0x11220005  beq         $t1, $v0, . + 4 + (0x5 << 2)
label_1e600c:
    if (ctx->pc == 0x1E600Cu) {
        ctx->pc = 0x1E6010u;
        goto label_1e6010;
    }
    ctx->pc = 0x1E6008u;
    {
        const bool branch_taken_0x1e6008 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6008) {
            ctx->pc = 0x1E6020u;
            goto label_1e6020;
        }
    }
    ctx->pc = 0x1E6010u;
label_1e6010:
    // 0x1e6010: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6014:
    // 0x1e6014: 0x11220002  beq         $t1, $v0, . + 4 + (0x2 << 2)
label_1e6018:
    if (ctx->pc == 0x1E6018u) {
        ctx->pc = 0x1E601Cu;
        goto label_1e601c;
    }
    ctx->pc = 0x1E6014u;
    {
        const bool branch_taken_0x1e6014 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6014) {
            ctx->pc = 0x1E6020u;
            goto label_1e6020;
        }
    }
    ctx->pc = 0x1E601Cu;
label_1e601c:
    // 0x1e601c: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x1e601cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e6020:
    // 0x1e6020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e6024:
    // 0x1e6024: 0x8f888e9c  lw          $t0, -0x7164($gp)
    ctx->pc = 0x1e6024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e6028:
    // 0x1e6028: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1e6028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_1e602c:
    // 0x1e602c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1e602cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1e6030:
    // 0x1e6030: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6034:
    // 0x1e6034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6038:
    // 0x1e6038: 0x24c63120  addiu       $a2, $a2, 0x3120
    ctx->pc = 0x1e6038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12576));
label_1e603c:
    // 0x1e603c: 0x24a53420  addiu       $a1, $a1, 0x3420
    ctx->pc = 0x1e603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13344));
label_1e6040:
    // 0x1e6040: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_1e6044:
    if (ctx->pc == 0x1E6044u) {
        ctx->pc = 0x1E6048u;
        goto label_1e6048;
    }
    ctx->pc = 0x1E6040u;
    {
        const bool branch_taken_0x1e6040 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6040) {
            ctx->pc = 0x1E6050u;
            goto label_1e6050;
        }
    }
    ctx->pc = 0x1E6048u;
label_1e6048:
    // 0x1e6048: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e604c:
    if (ctx->pc == 0x1E604Cu) {
        ctx->pc = 0x1E604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6048u;
        // 0x1e604c: 0x2515ffff  addiu       $s5, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6050u;
        goto label_1e6050;
    }
    ctx->pc = 0x1E6048u;
    {
        const bool branch_taken_0x1e6048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6048u;
        // 0x1e604c: 0x2515ffff  addiu       $s5, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6048) {
            ctx->pc = 0x1E6054u;
            goto label_1e6054;
        }
    }
    ctx->pc = 0x1E6050u;
label_1e6050:
    // 0x1e6050: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1e6050u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_1e6054:
    // 0x1e6054: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1e6054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1e6058:
    // 0x1e6058: 0xe8082a  slt         $at, $a3, $t0
    ctx->pc = 0x1e6058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1e605c:
    // 0x1e605c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1e6060:
    if (ctx->pc == 0x1E6060u) {
        ctx->pc = 0x1E6064u;
        goto label_1e6064;
    }
    ctx->pc = 0x1E605Cu;
    {
        const bool branch_taken_0x1e605c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e605c) {
            ctx->pc = 0x1E60A0u;
            goto label_1e60a0;
        }
    }
    ctx->pc = 0x1E6064u;
label_1e6064:
    // 0x1e6064: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x1e6064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1e6068:
    // 0x1e6068: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1e6068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1e606c:
    // 0x1e606c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e606cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6070:
    // 0x1e6070: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e6070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e6074:
    // 0x1e6074: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1e6074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6078:
    // 0x1e6078: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1e607c:
    if (ctx->pc == 0x1E607Cu) {
        ctx->pc = 0x1E6080u;
        goto label_1e6080;
    }
    ctx->pc = 0x1E6078u;
    {
        const bool branch_taken_0x1e6078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6078) {
            ctx->pc = 0x1E6094u;
            goto label_1e6094;
        }
    }
    ctx->pc = 0x1E6080u;
label_1e6080:
    // 0x1e6080: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1e6084:
    if (ctx->pc == 0x1E6084u) {
        ctx->pc = 0x1E6088u;
        goto label_1e6088;
    }
    ctx->pc = 0x1E6080u;
    {
        const bool branch_taken_0x1e6080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e6080) {
            ctx->pc = 0x1E6094u;
            goto label_1e6094;
        }
    }
    ctx->pc = 0x1E6088u;
label_1e6088:
    // 0x1e6088: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
label_1e608c:
    if (ctx->pc == 0x1E608Cu) {
        ctx->pc = 0x1E6090u;
        goto label_1e6090;
    }
    ctx->pc = 0x1E6088u;
    {
        const bool branch_taken_0x1e6088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6088) {
            ctx->pc = 0x1E6094u;
            goto label_1e6094;
        }
    }
    ctx->pc = 0x1E6090u;
label_1e6090:
    // 0x1e6090: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1e6090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e6094:
    // 0x1e6094: 0x0  nop
    ctx->pc = 0x1e6094u;
    // NOP
label_1e6098:
    // 0x1e6098: 0x1124ffe9  beq         $t1, $a0, . + 4 + (-0x17 << 2)
label_1e609c:
    if (ctx->pc == 0x1E609Cu) {
        ctx->pc = 0x1E60A0u;
        goto label_1e60a0;
    }
    ctx->pc = 0x1E6098u;
    {
        const bool branch_taken_0x1e6098 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e6098) {
            ctx->pc = 0x1E6040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6040;
        }
    }
    ctx->pc = 0x1E60A0u;
label_1e60a0:
    // 0x1e60a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e60a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e60a4:
    // 0x1e60a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e60a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1e60a8:
    // 0x1e60a8: 0xc079944  jal         func_1E6510
label_1e60ac:
    if (ctx->pc == 0x1E60ACu) {
        ctx->pc = 0x1E60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60A8u;
        // 0x1e60ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60B0u;
        goto label_1e60b0;
    }
    ctx->pc = 0x1E60A8u;
    SET_GPR_U32(ctx, 31, 0x1E60B0u);
    ctx->pc = 0x1E60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60A8u;
    // 0x1e60ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6510u;
    { ctx->pc = 0x1e6510; return; }
    ctx->pc = 0x1E60B0u;
label_1e60b0:
    // 0x1e60b0: 0x10000044  b           . + 4 + (0x44 << 2)
label_1e60b4:
    if (ctx->pc == 0x1E60B4u) {
        ctx->pc = 0x1E60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60B0u;
        // 0x1e60b4: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60B8u;
        goto label_1e60b8;
    }
    ctx->pc = 0x1E60B0u;
    {
        const bool branch_taken_0x1e60b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60B0u;
        // 0x1e60b4: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60b0) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E60B8u;
label_1e60b8:
    // 0x1e60b8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1e60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1e60bc:
    // 0x1e60bc: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1e60bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1e60c0:
    // 0x1e60c0: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1e60c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1e60c4:
    // 0x1e60c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e60c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1e60c8:
    // 0x1e60c8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1e60cc:
    if (ctx->pc == 0x1E60CCu) {
        ctx->pc = 0x1E60D0u;
        goto label_1e60d0;
    }
    ctx->pc = 0x1E60C8u;
    {
        const bool branch_taken_0x1e60c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e60c8) {
            ctx->pc = 0x1E61C4u;
            { ctx->pc = 0x1e61c4; return; }
        }
    }
    ctx->pc = 0x1E60D0u;
label_1e60d0:
    // 0x1e60d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e60d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e60d4:
    // 0x1e60d4: 0xc05b420  jal         func_16D080
label_1e60d8:
    if (ctx->pc == 0x1E60D8u) {
        ctx->pc = 0x1E60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60D4u;
        // 0x1e60d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60DCu;
        goto label_1e60dc;
    }
    ctx->pc = 0x1E60D4u;
    SET_GPR_U32(ctx, 31, 0x1E60DCu);
    ctx->pc = 0x1E60D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60D4u;
    // 0x1e60d8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1E60D4u, 0x1E60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60DCu;
label_1e60dc:
    // 0x1e60dc: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e60dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e60e0:
    // 0x1e60e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1e60e4:
    // 0x1e60e4: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1e60e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1e60e8:
    // 0x1e60e8: 0x24633120  addiu       $v1, $v1, 0x3120
    ctx->pc = 0x1e60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12576));
label_1e60ec:
    // 0x1e60ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e60ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e60f0:
    // 0x1e60f0: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x1e60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
label_1e60f4:
    // 0x1e60f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e60f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e60f8:
    // 0x1e60f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e60fc:
    // 0x1e60fc: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x1e60fcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6100:
    // 0x1e6100: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_1e6104:
    if (ctx->pc == 0x1E6104u) {
        ctx->pc = 0x1E6104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6100u;
        // 0x1e6104: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6108u;
        goto label_1e6108;
    }
    ctx->pc = 0x1E6100u;
    {
        const bool branch_taken_0x1e6100 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6100u;
        // 0x1e6104: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6100) {
            ctx->pc = 0x1E6124u;
            goto label_1e6124;
        }
    }
    ctx->pc = 0x1E6108u;
label_1e6108:
    // 0x1e6108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e610c:
    // 0x1e610c: 0x11220005  beq         $t1, $v0, . + 4 + (0x5 << 2)
label_1e6110:
    if (ctx->pc == 0x1E6110u) {
        ctx->pc = 0x1E6114u;
        goto label_1e6114;
    }
    ctx->pc = 0x1E610Cu;
    {
        const bool branch_taken_0x1e610c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e610c) {
            ctx->pc = 0x1E6124u;
            goto label_1e6124;
        }
    }
    ctx->pc = 0x1E6114u;
label_1e6114:
    // 0x1e6114: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6118:
    // 0x1e6118: 0x11220002  beq         $t1, $v0, . + 4 + (0x2 << 2)
label_1e611c:
    if (ctx->pc == 0x1E611Cu) {
        ctx->pc = 0x1E6120u;
        goto label_1e6120;
    }
    ctx->pc = 0x1E6118u;
    {
        const bool branch_taken_0x1e6118 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6118) {
            ctx->pc = 0x1E6124u;
            goto label_1e6124;
        }
    }
    ctx->pc = 0x1E6120u;
label_1e6120:
    // 0x1e6120: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x1e6120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e6124:
    // 0x1e6124: 0x0  nop
    ctx->pc = 0x1e6124u;
    // NOP
label_1e6128:
    // 0x1e6128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e612c:
    // 0x1e612c: 0x8f8a8e9c  lw          $t2, -0x7164($gp)
    ctx->pc = 0x1e612cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e6130:
    // 0x1e6130: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1e6130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
label_1e6134:
    // 0x1e6134: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1e6134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x1e6138u;
    return;
}

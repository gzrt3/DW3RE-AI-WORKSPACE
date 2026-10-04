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


void FUN_001d49b0_part3(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d5950u: goto label_1d5950;
        case 0x1d5954u: goto label_1d5954;
        case 0x1d5958u: goto label_1d5958;
        case 0x1d595cu: goto label_1d595c;
        case 0x1d5960u: goto label_1d5960;
        case 0x1d5964u: goto label_1d5964;
        case 0x1d5968u: goto label_1d5968;
        case 0x1d596cu: goto label_1d596c;
        case 0x1d5970u: goto label_1d5970;
        case 0x1d5974u: goto label_1d5974;
        case 0x1d5978u: goto label_1d5978;
        case 0x1d597cu: goto label_1d597c;
        case 0x1d5980u: goto label_1d5980;
        case 0x1d5984u: goto label_1d5984;
        case 0x1d5988u: goto label_1d5988;
        case 0x1d598cu: goto label_1d598c;
        case 0x1d5990u: goto label_1d5990;
        case 0x1d5994u: goto label_1d5994;
        case 0x1d5998u: goto label_1d5998;
        case 0x1d599cu: goto label_1d599c;
        case 0x1d59a0u: goto label_1d59a0;
        case 0x1d59a4u: goto label_1d59a4;
        case 0x1d59a8u: goto label_1d59a8;
        case 0x1d59acu: goto label_1d59ac;
        case 0x1d59b0u: goto label_1d59b0;
        case 0x1d59b4u: goto label_1d59b4;
        case 0x1d59b8u: goto label_1d59b8;
        case 0x1d59bcu: goto label_1d59bc;
        case 0x1d59c0u: goto label_1d59c0;
        case 0x1d59c4u: goto label_1d59c4;
        case 0x1d59c8u: goto label_1d59c8;
        case 0x1d59ccu: goto label_1d59cc;
        case 0x1d59d0u: goto label_1d59d0;
        case 0x1d59d4u: goto label_1d59d4;
        case 0x1d59d8u: goto label_1d59d8;
        case 0x1d59dcu: goto label_1d59dc;
        case 0x1d59e0u: goto label_1d59e0;
        case 0x1d59e4u: goto label_1d59e4;
        case 0x1d59e8u: goto label_1d59e8;
        case 0x1d59ecu: goto label_1d59ec;
        case 0x1d59f0u: goto label_1d59f0;
        case 0x1d59f4u: goto label_1d59f4;
        case 0x1d59f8u: goto label_1d59f8;
        case 0x1d59fcu: goto label_1d59fc;
        case 0x1d5a00u: goto label_1d5a00;
        case 0x1d5a04u: goto label_1d5a04;
        case 0x1d5a08u: goto label_1d5a08;
        case 0x1d5a0cu: goto label_1d5a0c;
        case 0x1d5a10u: goto label_1d5a10;
        case 0x1d5a14u: goto label_1d5a14;
        case 0x1d5a18u: goto label_1d5a18;
        case 0x1d5a1cu: goto label_1d5a1c;
        case 0x1d5a20u: goto label_1d5a20;
        case 0x1d5a24u: goto label_1d5a24;
        case 0x1d5a28u: goto label_1d5a28;
        case 0x1d5a2cu: goto label_1d5a2c;
        case 0x1d5a30u: goto label_1d5a30;
        case 0x1d5a34u: goto label_1d5a34;
        case 0x1d5a38u: goto label_1d5a38;
        case 0x1d5a3cu: goto label_1d5a3c;
        case 0x1d5a40u: goto label_1d5a40;
        case 0x1d5a44u: goto label_1d5a44;
        case 0x1d5a48u: goto label_1d5a48;
        case 0x1d5a4cu: goto label_1d5a4c;
        case 0x1d5a50u: goto label_1d5a50;
        case 0x1d5a54u: goto label_1d5a54;
        case 0x1d5a58u: goto label_1d5a58;
        case 0x1d5a5cu: goto label_1d5a5c;
        case 0x1d5a60u: goto label_1d5a60;
        case 0x1d5a64u: goto label_1d5a64;
        case 0x1d5a68u: goto label_1d5a68;
        case 0x1d5a6cu: goto label_1d5a6c;
        case 0x1d5a70u: goto label_1d5a70;
        case 0x1d5a74u: goto label_1d5a74;
        case 0x1d5a78u: goto label_1d5a78;
        case 0x1d5a7cu: goto label_1d5a7c;
        case 0x1d5a80u: goto label_1d5a80;
        case 0x1d5a84u: goto label_1d5a84;
        case 0x1d5a88u: goto label_1d5a88;
        case 0x1d5a8cu: goto label_1d5a8c;
        case 0x1d5a90u: goto label_1d5a90;
        case 0x1d5a94u: goto label_1d5a94;
        case 0x1d5a98u: goto label_1d5a98;
        case 0x1d5a9cu: goto label_1d5a9c;
        case 0x1d5aa0u: goto label_1d5aa0;
        case 0x1d5aa4u: goto label_1d5aa4;
        case 0x1d5aa8u: goto label_1d5aa8;
        case 0x1d5aacu: goto label_1d5aac;
        case 0x1d5ab0u: goto label_1d5ab0;
        case 0x1d5ab4u: goto label_1d5ab4;
        case 0x1d5ab8u: goto label_1d5ab8;
        case 0x1d5abcu: goto label_1d5abc;
        case 0x1d5ac0u: goto label_1d5ac0;
        case 0x1d5ac4u: goto label_1d5ac4;
        case 0x1d5ac8u: goto label_1d5ac8;
        case 0x1d5accu: goto label_1d5acc;
        case 0x1d5ad0u: goto label_1d5ad0;
        case 0x1d5ad4u: goto label_1d5ad4;
        case 0x1d5ad8u: goto label_1d5ad8;
        case 0x1d5adcu: goto label_1d5adc;
        case 0x1d5ae0u: goto label_1d5ae0;
        case 0x1d5ae4u: goto label_1d5ae4;
        case 0x1d5ae8u: goto label_1d5ae8;
        case 0x1d5aecu: goto label_1d5aec;
        case 0x1d5af0u: goto label_1d5af0;
        case 0x1d5af4u: goto label_1d5af4;
        case 0x1d5af8u: goto label_1d5af8;
        case 0x1d5afcu: goto label_1d5afc;
        case 0x1d5b00u: goto label_1d5b00;
        case 0x1d5b04u: goto label_1d5b04;
        case 0x1d5b08u: goto label_1d5b08;
        case 0x1d5b0cu: goto label_1d5b0c;
        case 0x1d5b10u: goto label_1d5b10;
        case 0x1d5b14u: goto label_1d5b14;
        case 0x1d5b18u: goto label_1d5b18;
        case 0x1d5b1cu: goto label_1d5b1c;
        case 0x1d5b20u: goto label_1d5b20;
        case 0x1d5b24u: goto label_1d5b24;
        case 0x1d5b28u: goto label_1d5b28;
        case 0x1d5b2cu: goto label_1d5b2c;
        case 0x1d5b30u: goto label_1d5b30;
        case 0x1d5b34u: goto label_1d5b34;
        case 0x1d5b38u: goto label_1d5b38;
        case 0x1d5b3cu: goto label_1d5b3c;
        case 0x1d5b40u: goto label_1d5b40;
        case 0x1d5b44u: goto label_1d5b44;
        case 0x1d5b48u: goto label_1d5b48;
        case 0x1d5b4cu: goto label_1d5b4c;
        case 0x1d5b50u: goto label_1d5b50;
        case 0x1d5b54u: goto label_1d5b54;
        case 0x1d5b58u: goto label_1d5b58;
        case 0x1d5b5cu: goto label_1d5b5c;
        case 0x1d5b60u: goto label_1d5b60;
        case 0x1d5b64u: goto label_1d5b64;
        case 0x1d5b68u: goto label_1d5b68;
        case 0x1d5b6cu: goto label_1d5b6c;
        case 0x1d5b70u: goto label_1d5b70;
        case 0x1d5b74u: goto label_1d5b74;
        case 0x1d5b78u: goto label_1d5b78;
        case 0x1d5b7cu: goto label_1d5b7c;
        case 0x1d5b80u: goto label_1d5b80;
        case 0x1d5b84u: goto label_1d5b84;
        case 0x1d5b88u: goto label_1d5b88;
        case 0x1d5b8cu: goto label_1d5b8c;
        case 0x1d5b90u: goto label_1d5b90;
        case 0x1d5b94u: goto label_1d5b94;
        case 0x1d5b98u: goto label_1d5b98;
        case 0x1d5b9cu: goto label_1d5b9c;
        case 0x1d5ba0u: goto label_1d5ba0;
        case 0x1d5ba4u: goto label_1d5ba4;
        case 0x1d5ba8u: goto label_1d5ba8;
        case 0x1d5bacu: goto label_1d5bac;
        case 0x1d5bb0u: goto label_1d5bb0;
        case 0x1d5bb4u: goto label_1d5bb4;
        case 0x1d5bb8u: goto label_1d5bb8;
        case 0x1d5bbcu: goto label_1d5bbc;
        case 0x1d5bc0u: goto label_1d5bc0;
        case 0x1d5bc4u: goto label_1d5bc4;
        case 0x1d5bc8u: goto label_1d5bc8;
        case 0x1d5bccu: goto label_1d5bcc;
        case 0x1d5bd0u: goto label_1d5bd0;
        case 0x1d5bd4u: goto label_1d5bd4;
        case 0x1d5bd8u: goto label_1d5bd8;
        case 0x1d5bdcu: goto label_1d5bdc;
        case 0x1d5be0u: goto label_1d5be0;
        case 0x1d5be4u: goto label_1d5be4;
        case 0x1d5be8u: goto label_1d5be8;
        case 0x1d5becu: goto label_1d5bec;
        case 0x1d5bf0u: goto label_1d5bf0;
        case 0x1d5bf4u: goto label_1d5bf4;
        case 0x1d5bf8u: goto label_1d5bf8;
        case 0x1d5bfcu: goto label_1d5bfc;
        case 0x1d5c00u: goto label_1d5c00;
        case 0x1d5c04u: goto label_1d5c04;
        case 0x1d5c08u: goto label_1d5c08;
        case 0x1d5c0cu: goto label_1d5c0c;
        case 0x1d5c10u: goto label_1d5c10;
        case 0x1d5c14u: goto label_1d5c14;
        case 0x1d5c18u: goto label_1d5c18;
        case 0x1d5c1cu: goto label_1d5c1c;
        case 0x1d5c20u: goto label_1d5c20;
        case 0x1d5c24u: goto label_1d5c24;
        case 0x1d5c28u: goto label_1d5c28;
        case 0x1d5c2cu: goto label_1d5c2c;
        case 0x1d5c30u: goto label_1d5c30;
        case 0x1d5c34u: goto label_1d5c34;
        case 0x1d5c38u: goto label_1d5c38;
        case 0x1d5c3cu: goto label_1d5c3c;
        case 0x1d5c40u: goto label_1d5c40;
        case 0x1d5c44u: goto label_1d5c44;
        case 0x1d5c48u: goto label_1d5c48;
        case 0x1d5c4cu: goto label_1d5c4c;
        case 0x1d5c50u: goto label_1d5c50;
        case 0x1d5c54u: goto label_1d5c54;
        case 0x1d5c58u: goto label_1d5c58;
        case 0x1d5c5cu: goto label_1d5c5c;
        case 0x1d5c60u: goto label_1d5c60;
        case 0x1d5c64u: goto label_1d5c64;
        case 0x1d5c68u: goto label_1d5c68;
        case 0x1d5c6cu: goto label_1d5c6c;
        case 0x1d5c70u: goto label_1d5c70;
        case 0x1d5c74u: goto label_1d5c74;
        case 0x1d5c78u: goto label_1d5c78;
        case 0x1d5c7cu: goto label_1d5c7c;
        case 0x1d5c80u: goto label_1d5c80;
        case 0x1d5c84u: goto label_1d5c84;
        case 0x1d5c88u: goto label_1d5c88;
        case 0x1d5c8cu: goto label_1d5c8c;
        case 0x1d5c90u: goto label_1d5c90;
        case 0x1d5c94u: goto label_1d5c94;
        case 0x1d5c98u: goto label_1d5c98;
        case 0x1d5c9cu: goto label_1d5c9c;
        case 0x1d5ca0u: goto label_1d5ca0;
        case 0x1d5ca4u: goto label_1d5ca4;
        case 0x1d5ca8u: goto label_1d5ca8;
        case 0x1d5cacu: goto label_1d5cac;
        case 0x1d5cb0u: goto label_1d5cb0;
        case 0x1d5cb4u: goto label_1d5cb4;
        case 0x1d5cb8u: goto label_1d5cb8;
        case 0x1d5cbcu: goto label_1d5cbc;
        case 0x1d5cc0u: goto label_1d5cc0;
        case 0x1d5cc4u: goto label_1d5cc4;
        case 0x1d5cc8u: goto label_1d5cc8;
        case 0x1d5cccu: goto label_1d5ccc;
        case 0x1d5cd0u: goto label_1d5cd0;
        case 0x1d5cd4u: goto label_1d5cd4;
        case 0x1d5cd8u: goto label_1d5cd8;
        case 0x1d5cdcu: goto label_1d5cdc;
        case 0x1d5ce0u: goto label_1d5ce0;
        case 0x1d5ce4u: goto label_1d5ce4;
        case 0x1d5ce8u: goto label_1d5ce8;
        case 0x1d5cecu: goto label_1d5cec;
        case 0x1d5cf0u: goto label_1d5cf0;
        case 0x1d5cf4u: goto label_1d5cf4;
        case 0x1d5cf8u: goto label_1d5cf8;
        case 0x1d5cfcu: goto label_1d5cfc;
        case 0x1d5d00u: goto label_1d5d00;
        case 0x1d5d04u: goto label_1d5d04;
        case 0x1d5d08u: goto label_1d5d08;
        case 0x1d5d0cu: goto label_1d5d0c;
        case 0x1d5d10u: goto label_1d5d10;
        case 0x1d5d14u: goto label_1d5d14;
        case 0x1d5d18u: goto label_1d5d18;
        case 0x1d5d1cu: goto label_1d5d1c;
        case 0x1d5d20u: goto label_1d5d20;
        case 0x1d5d24u: goto label_1d5d24;
        case 0x1d5d28u: goto label_1d5d28;
        case 0x1d5d2cu: goto label_1d5d2c;
        case 0x1d5d30u: goto label_1d5d30;
        case 0x1d5d34u: goto label_1d5d34;
        case 0x1d5d38u: goto label_1d5d38;
        case 0x1d5d3cu: goto label_1d5d3c;
        case 0x1d5d40u: goto label_1d5d40;
        case 0x1d5d44u: goto label_1d5d44;
        case 0x1d5d48u: goto label_1d5d48;
        case 0x1d5d4cu: goto label_1d5d4c;
        case 0x1d5d50u: goto label_1d5d50;
        case 0x1d5d54u: goto label_1d5d54;
        case 0x1d5d58u: goto label_1d5d58;
        case 0x1d5d5cu: goto label_1d5d5c;
        case 0x1d5d60u: goto label_1d5d60;
        case 0x1d5d64u: goto label_1d5d64;
        case 0x1d5d68u: goto label_1d5d68;
        case 0x1d5d6cu: goto label_1d5d6c;
        case 0x1d5d70u: goto label_1d5d70;
        case 0x1d5d74u: goto label_1d5d74;
        case 0x1d5d78u: goto label_1d5d78;
        case 0x1d5d7cu: goto label_1d5d7c;
        case 0x1d5d80u: goto label_1d5d80;
        case 0x1d5d84u: goto label_1d5d84;
        case 0x1d5d88u: goto label_1d5d88;
        case 0x1d5d8cu: goto label_1d5d8c;
        case 0x1d5d90u: goto label_1d5d90;
        case 0x1d5d94u: goto label_1d5d94;
        case 0x1d5d98u: goto label_1d5d98;
        case 0x1d5d9cu: goto label_1d5d9c;
        case 0x1d5da0u: goto label_1d5da0;
        case 0x1d5da4u: goto label_1d5da4;
        case 0x1d5da8u: goto label_1d5da8;
        case 0x1d5dacu: goto label_1d5dac;
        case 0x1d5db0u: goto label_1d5db0;
        case 0x1d5db4u: goto label_1d5db4;
        case 0x1d5db8u: goto label_1d5db8;
        case 0x1d5dbcu: goto label_1d5dbc;
        case 0x1d5dc0u: goto label_1d5dc0;
        case 0x1d5dc4u: goto label_1d5dc4;
        case 0x1d5dc8u: goto label_1d5dc8;
        case 0x1d5dccu: goto label_1d5dcc;
        case 0x1d5dd0u: goto label_1d5dd0;
        case 0x1d5dd4u: goto label_1d5dd4;
        case 0x1d5dd8u: goto label_1d5dd8;
        case 0x1d5ddcu: goto label_1d5ddc;
        case 0x1d5de0u: goto label_1d5de0;
        case 0x1d5de4u: goto label_1d5de4;
        case 0x1d5de8u: goto label_1d5de8;
        case 0x1d5decu: goto label_1d5dec;
        case 0x1d5df0u: goto label_1d5df0;
        case 0x1d5df4u: goto label_1d5df4;
        case 0x1d5df8u: goto label_1d5df8;
        case 0x1d5dfcu: goto label_1d5dfc;
        case 0x1d5e00u: goto label_1d5e00;
        case 0x1d5e04u: goto label_1d5e04;
        case 0x1d5e08u: goto label_1d5e08;
        case 0x1d5e0cu: goto label_1d5e0c;
        case 0x1d5e10u: goto label_1d5e10;
        case 0x1d5e14u: goto label_1d5e14;
        case 0x1d5e18u: goto label_1d5e18;
        case 0x1d5e1cu: goto label_1d5e1c;
        case 0x1d5e20u: goto label_1d5e20;
        case 0x1d5e24u: goto label_1d5e24;
        case 0x1d5e28u: goto label_1d5e28;
        case 0x1d5e2cu: goto label_1d5e2c;
        case 0x1d5e30u: goto label_1d5e30;
        case 0x1d5e34u: goto label_1d5e34;
        case 0x1d5e38u: goto label_1d5e38;
        case 0x1d5e3cu: goto label_1d5e3c;
        case 0x1d5e40u: goto label_1d5e40;
        case 0x1d5e44u: goto label_1d5e44;
        case 0x1d5e48u: goto label_1d5e48;
        case 0x1d5e4cu: goto label_1d5e4c;
        case 0x1d5e50u: goto label_1d5e50;
        case 0x1d5e54u: goto label_1d5e54;
        case 0x1d5e58u: goto label_1d5e58;
        case 0x1d5e5cu: goto label_1d5e5c;
        case 0x1d5e60u: goto label_1d5e60;
        case 0x1d5e64u: goto label_1d5e64;
        case 0x1d5e68u: goto label_1d5e68;
        case 0x1d5e6cu: goto label_1d5e6c;
        case 0x1d5e70u: goto label_1d5e70;
        case 0x1d5e74u: goto label_1d5e74;
        case 0x1d5e78u: goto label_1d5e78;
        case 0x1d5e7cu: goto label_1d5e7c;
        case 0x1d5e80u: goto label_1d5e80;
        case 0x1d5e84u: goto label_1d5e84;
        case 0x1d5e88u: goto label_1d5e88;
        case 0x1d5e8cu: goto label_1d5e8c;
        case 0x1d5e90u: goto label_1d5e90;
        case 0x1d5e94u: goto label_1d5e94;
        case 0x1d5e98u: goto label_1d5e98;
        case 0x1d5e9cu: goto label_1d5e9c;
        case 0x1d5ea0u: goto label_1d5ea0;
        case 0x1d5ea4u: goto label_1d5ea4;
        case 0x1d5ea8u: goto label_1d5ea8;
        case 0x1d5eacu: goto label_1d5eac;
        case 0x1d5eb0u: goto label_1d5eb0;
        case 0x1d5eb4u: goto label_1d5eb4;
        case 0x1d5eb8u: goto label_1d5eb8;
        case 0x1d5ebcu: goto label_1d5ebc;
        case 0x1d5ec0u: goto label_1d5ec0;
        case 0x1d5ec4u: goto label_1d5ec4;
        case 0x1d5ec8u: goto label_1d5ec8;
        case 0x1d5eccu: goto label_1d5ecc;
        case 0x1d5ed0u: goto label_1d5ed0;
        case 0x1d5ed4u: goto label_1d5ed4;
        case 0x1d5ed8u: goto label_1d5ed8;
        case 0x1d5edcu: goto label_1d5edc;
        case 0x1d5ee0u: goto label_1d5ee0;
        case 0x1d5ee4u: goto label_1d5ee4;
        case 0x1d5ee8u: goto label_1d5ee8;
        case 0x1d5eecu: goto label_1d5eec;
        case 0x1d5ef0u: goto label_1d5ef0;
        case 0x1d5ef4u: goto label_1d5ef4;
        case 0x1d5ef8u: goto label_1d5ef8;
        case 0x1d5efcu: goto label_1d5efc;
        case 0x1d5f00u: goto label_1d5f00;
        case 0x1d5f04u: goto label_1d5f04;
        case 0x1d5f08u: goto label_1d5f08;
        case 0x1d5f0cu: goto label_1d5f0c;
        case 0x1d5f10u: goto label_1d5f10;
        case 0x1d5f14u: goto label_1d5f14;
        case 0x1d5f18u: goto label_1d5f18;
        case 0x1d5f1cu: goto label_1d5f1c;
        case 0x1d5f20u: goto label_1d5f20;
        case 0x1d5f24u: goto label_1d5f24;
        case 0x1d5f28u: goto label_1d5f28;
        case 0x1d5f2cu: goto label_1d5f2c;
        case 0x1d5f30u: goto label_1d5f30;
        case 0x1d5f34u: goto label_1d5f34;
        case 0x1d5f38u: goto label_1d5f38;
        case 0x1d5f3cu: goto label_1d5f3c;
        case 0x1d5f40u: goto label_1d5f40;
        case 0x1d5f44u: goto label_1d5f44;
        case 0x1d5f48u: goto label_1d5f48;
        case 0x1d5f4cu: goto label_1d5f4c;
        case 0x1d5f50u: goto label_1d5f50;
        case 0x1d5f54u: goto label_1d5f54;
        case 0x1d5f58u: goto label_1d5f58;
        case 0x1d5f5cu: goto label_1d5f5c;
        case 0x1d5f60u: goto label_1d5f60;
        case 0x1d5f64u: goto label_1d5f64;
        case 0x1d5f68u: goto label_1d5f68;
        case 0x1d5f6cu: goto label_1d5f6c;
        case 0x1d5f70u: goto label_1d5f70;
        case 0x1d5f74u: goto label_1d5f74;
        case 0x1d5f78u: goto label_1d5f78;
        case 0x1d5f7cu: goto label_1d5f7c;
        case 0x1d5f80u: goto label_1d5f80;
        case 0x1d5f84u: goto label_1d5f84;
        case 0x1d5f88u: goto label_1d5f88;
        case 0x1d5f8cu: goto label_1d5f8c;
        case 0x1d5f90u: goto label_1d5f90;
        case 0x1d5f94u: goto label_1d5f94;
        case 0x1d5f98u: goto label_1d5f98;
        case 0x1d5f9cu: goto label_1d5f9c;
        case 0x1d5fa0u: goto label_1d5fa0;
        case 0x1d5fa4u: goto label_1d5fa4;
        case 0x1d5fa8u: goto label_1d5fa8;
        case 0x1d5facu: goto label_1d5fac;
        case 0x1d5fb0u: goto label_1d5fb0;
        case 0x1d5fb4u: goto label_1d5fb4;
        case 0x1d5fb8u: goto label_1d5fb8;
        case 0x1d5fbcu: goto label_1d5fbc;
        case 0x1d5fc0u: goto label_1d5fc0;
        case 0x1d5fc4u: goto label_1d5fc4;
        case 0x1d5fc8u: goto label_1d5fc8;
        case 0x1d5fccu: goto label_1d5fcc;
        case 0x1d5fd0u: goto label_1d5fd0;
        case 0x1d5fd4u: goto label_1d5fd4;
        case 0x1d5fd8u: goto label_1d5fd8;
        case 0x1d5fdcu: goto label_1d5fdc;
        case 0x1d5fe0u: goto label_1d5fe0;
        case 0x1d5fe4u: goto label_1d5fe4;
        case 0x1d5fe8u: goto label_1d5fe8;
        case 0x1d5fecu: goto label_1d5fec;
        case 0x1d5ff0u: goto label_1d5ff0;
        case 0x1d5ff4u: goto label_1d5ff4;
        case 0x1d5ff8u: goto label_1d5ff8;
        case 0x1d5ffcu: goto label_1d5ffc;
        case 0x1d6000u: goto label_1d6000;
        case 0x1d6004u: goto label_1d6004;
        case 0x1d6008u: goto label_1d6008;
        case 0x1d600cu: goto label_1d600c;
        case 0x1d6010u: goto label_1d6010;
        case 0x1d6014u: goto label_1d6014;
        case 0x1d6018u: goto label_1d6018;
        case 0x1d601cu: goto label_1d601c;
        case 0x1d6020u: goto label_1d6020;
        case 0x1d6024u: goto label_1d6024;
        case 0x1d6028u: goto label_1d6028;
        case 0x1d602cu: goto label_1d602c;
        case 0x1d6030u: goto label_1d6030;
        case 0x1d6034u: goto label_1d6034;
        case 0x1d6038u: goto label_1d6038;
        case 0x1d603cu: goto label_1d603c;
        case 0x1d6040u: goto label_1d6040;
        case 0x1d6044u: goto label_1d6044;
        case 0x1d6048u: goto label_1d6048;
        case 0x1d604cu: goto label_1d604c;
        case 0x1d6050u: goto label_1d6050;
        case 0x1d6054u: goto label_1d6054;
        case 0x1d6058u: goto label_1d6058;
        case 0x1d605cu: goto label_1d605c;
        case 0x1d6060u: goto label_1d6060;
        case 0x1d6064u: goto label_1d6064;
        case 0x1d6068u: goto label_1d6068;
        case 0x1d606cu: goto label_1d606c;
        case 0x1d6070u: goto label_1d6070;
        case 0x1d6074u: goto label_1d6074;
        case 0x1d6078u: goto label_1d6078;
        case 0x1d607cu: goto label_1d607c;
        case 0x1d6080u: goto label_1d6080;
        case 0x1d6084u: goto label_1d6084;
        case 0x1d6088u: goto label_1d6088;
        case 0x1d608cu: goto label_1d608c;
        case 0x1d6090u: goto label_1d6090;
        case 0x1d6094u: goto label_1d6094;
        case 0x1d6098u: goto label_1d6098;
        case 0x1d609cu: goto label_1d609c;
        case 0x1d60a0u: goto label_1d60a0;
        case 0x1d60a4u: goto label_1d60a4;
        case 0x1d60a8u: goto label_1d60a8;
        case 0x1d60acu: goto label_1d60ac;
        case 0x1d60b0u: goto label_1d60b0;
        case 0x1d60b4u: goto label_1d60b4;
        case 0x1d60b8u: goto label_1d60b8;
        case 0x1d60bcu: goto label_1d60bc;
        case 0x1d60c0u: goto label_1d60c0;
        case 0x1d60c4u: goto label_1d60c4;
        case 0x1d60c8u: goto label_1d60c8;
        case 0x1d60ccu: goto label_1d60cc;
        case 0x1d60d0u: goto label_1d60d0;
        case 0x1d60d4u: goto label_1d60d4;
        case 0x1d60d8u: goto label_1d60d8;
        case 0x1d60dcu: goto label_1d60dc;
        case 0x1d60e0u: goto label_1d60e0;
        case 0x1d60e4u: goto label_1d60e4;
        case 0x1d60e8u: goto label_1d60e8;
        case 0x1d60ecu: goto label_1d60ec;
        case 0x1d60f0u: goto label_1d60f0;
        case 0x1d60f4u: goto label_1d60f4;
        case 0x1d60f8u: goto label_1d60f8;
        case 0x1d60fcu: goto label_1d60fc;
        case 0x1d6100u: goto label_1d6100;
        case 0x1d6104u: goto label_1d6104;
        case 0x1d6108u: goto label_1d6108;
        case 0x1d610cu: goto label_1d610c;
        case 0x1d6110u: goto label_1d6110;
        case 0x1d6114u: goto label_1d6114;
        case 0x1d6118u: goto label_1d6118;
        case 0x1d611cu: goto label_1d611c;
        default: return;
    }

label_1d5950:
    // 0x1d5950: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_1d5954:
    if (ctx->pc == 0x1D5954u) {
        ctx->pc = 0x1D5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5950u;
        // 0x1d5954: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5958u;
        goto label_1d5958;
    }
    ctx->pc = 0x1D5950u;
    {
        const bool branch_taken_0x1d5950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5950u;
        // 0x1d5954: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5950) {
            ctx->pc = 0x1D58FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d58fc; return; }
        }
    }
    ctx->pc = 0x1D5958u;
label_1d5958:
    // 0x1d5958: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d595c:
    // 0x1d595c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d595cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5960:
    // 0x1d5960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5964:
    // 0x1d5964: 0x3e00008  jr          $ra
label_1d5968:
    if (ctx->pc == 0x1D5968u) {
        ctx->pc = 0x1D5968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5964u;
        // 0x1d5968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D596Cu;
        goto label_1d596c;
    }
    ctx->pc = 0x1D5964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5964u;
        // 0x1d5968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D596Cu;
label_1d596c:
    // 0x1d596c: 0x0  nop
    ctx->pc = 0x1d596cu;
    // NOP
label_1d5970:
    // 0x1d5970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d5974:
    // 0x1d5974: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1d5974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_1d5978:
    // 0x1d5978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d597c:
    // 0x1d597c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d597cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5980:
    // 0x1d5980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d5984:
    // 0x1d5984: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1d5984u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1d5988:
    // 0x1d5988: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x1d5988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
label_1d598c:
    // 0x1d598c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d598cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5990:
    // 0x1d5990: 0xa4860012  sh          $a2, 0x12($a0)
    ctx->pc = 0x1d5990u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 6));
label_1d5994:
    // 0x1d5994: 0x10c00058  beqz        $a2, . + 4 + (0x58 << 2)
label_1d5998:
    if (ctx->pc == 0x1D5998u) {
        ctx->pc = 0x1D5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5994u;
        // 0x1d5998: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D599Cu;
        goto label_1d599c;
    }
    ctx->pc = 0x1D5994u;
    {
        const bool branch_taken_0x1d5994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5994u;
        // 0x1d5998: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5994) {
            ctx->pc = 0x1D5AF8u;
            goto label_1d5af8;
        }
    }
    ctx->pc = 0x1D599Cu;
label_1d599c:
    // 0x1d599c: 0xc0439e0  jal         func_10E780
label_1d59a0:
    if (ctx->pc == 0x1D59A0u) {
        ctx->pc = 0x1D59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D599Cu;
        // 0x1d59a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D59A4u;
        goto label_1d59a4;
    }
    ctx->pc = 0x1D599Cu;
    SET_GPR_U32(ctx, 31, 0x1D59A4u);
    ctx->pc = 0x1D59A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D599Cu;
    // 0x1d59a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E780u, 0x1D599Cu, 0x1D59A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59A4u;
label_1d59a4:
    // 0x1d59a4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1d59a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1d59a8:
    // 0x1d59a8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d59ac:
    // 0x1d59ac: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1d59acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1d59b0:
    // 0x1d59b0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d59b4:
    // 0x1d59b4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1d59b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d59b8:
    // 0x1d59b8: 0xe4400150  swc1        $f0, 0x150($v0)
    ctx->pc = 0x1d59b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 336), bits); }
label_1d59bc:
    // 0x1d59bc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d59c0:
    // 0x1d59c0: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1d59c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d59c4:
    // 0x1d59c4: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x1d59c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
label_1d59c8:
    // 0x1d59c8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d59cc:
    // 0x1d59cc: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1d59ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d59d0:
    // 0x1d59d0: 0xe4400158  swc1        $f0, 0x158($v0)
    ctx->pc = 0x1d59d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 344), bits); }
label_1d59d4:
    // 0x1d59d4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d59d8:
    // 0x1d59d8: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x1d59d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d59dc:
    // 0x1d59dc: 0xe440015c  swc1        $f0, 0x15C($v0)
    ctx->pc = 0x1d59dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 348), bits); }
label_1d59e0:
    // 0x1d59e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d59e4:
    // 0x1d59e4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1d59e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d59e8:
    // 0x1d59e8: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x1d59e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
label_1d59ec:
    // 0x1d59ec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d59f0:
    // 0x1d59f0: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x1d59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d59f4:
    // 0x1d59f4: 0xe4400164  swc1        $f0, 0x164($v0)
    ctx->pc = 0x1d59f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 356), bits); }
label_1d59f8:
    // 0x1d59f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d59fc:
    // 0x1d59fc: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1d59fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5a00:
    // 0x1d5a00: 0xe4400168  swc1        $f0, 0x168($v0)
    ctx->pc = 0x1d5a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 360), bits); }
label_1d5a04:
    // 0x1d5a04: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d5a08:
    // 0x1d5a08: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x1d5a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5a0c:
    // 0x1d5a0c: 0xe440016c  swc1        $f0, 0x16C($v0)
    ctx->pc = 0x1d5a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
label_1d5a10:
    // 0x1d5a10: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1d5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d5a14:
    // 0x1d5a14: 0x90450247  lbu         $a1, 0x247($v0)
    ctx->pc = 0x1d5a14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 583)));
label_1d5a18:
    // 0x1d5a18: 0xc065238  jal         func_1948E0
label_1d5a1c:
    if (ctx->pc == 0x1D5A1Cu) {
        ctx->pc = 0x1D5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A18u;
        // 0x1d5a1c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A20u;
        goto label_1d5a20;
    }
    ctx->pc = 0x1D5A18u;
    SET_GPR_U32(ctx, 31, 0x1D5A20u);
    ctx->pc = 0x1D5A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A18u;
    // 0x1d5a1c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1948E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1948E0u, 0x1D5A18u, 0x1D5A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A20u;
label_1d5a20:
    // 0x1d5a20: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d5a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d5a24:
    // 0x1d5a24: 0x90224af0  lbu         $v0, 0x4AF0($at)
    ctx->pc = 0x1d5a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19184)));
label_1d5a28:
    // 0x1d5a28: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d5a2c:
    if (ctx->pc == 0x1D5A2Cu) {
        ctx->pc = 0x1D5A30u;
        goto label_1d5a30;
    }
    ctx->pc = 0x1D5A28u;
    {
        const bool branch_taken_0x1d5a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a28) {
            ctx->pc = 0x1D5A8Cu;
            goto label_1d5a8c;
        }
    }
    ctx->pc = 0x1D5A30u;
label_1d5a30:
    // 0x1d5a30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5a34:
    // 0x1d5a34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1d5a38:
    // 0x1d5a38: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d5a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d5a3c:
    // 0x1d5a3c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d5a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d5a40:
    // 0x1d5a40: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1d5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_1d5a44:
    // 0x1d5a44: 0x34212ef0  ori         $at, $at, 0x2EF0
    ctx->pc = 0x1d5a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12016);
label_1d5a48:
    // 0x1d5a48: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1d5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d5a4c:
    // 0x1d5a4c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d5a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d5a50:
    // 0x1d5a50: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d5a54:
    // 0x1d5a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d5a58:
    // 0x1d5a58: 0xc0541d0  jal         func_150740
label_1d5a5c:
    if (ctx->pc == 0x1D5A5Cu) {
        ctx->pc = 0x1D5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A58u;
        // 0x1d5a5c: 0x412021  addu        $a0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A60u;
        goto label_1d5a60;
    }
    ctx->pc = 0x1D5A58u;
    SET_GPR_U32(ctx, 31, 0x1D5A60u);
    ctx->pc = 0x1D5A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A58u;
    // 0x1d5a5c: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150740u, 0x1D5A58u, 0x1D5A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A60u;
label_1d5a60:
    // 0x1d5a60: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1d5a64:
    if (ctx->pc == 0x1D5A64u) {
        ctx->pc = 0x1D5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A60u;
        // 0x1d5a64: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A68u;
        goto label_1d5a68;
    }
    ctx->pc = 0x1D5A60u;
    {
        const bool branch_taken_0x1d5a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A60u;
        // 0x1d5a64: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a60) {
            ctx->pc = 0x1D5AE4u;
            goto label_1d5ae4;
        }
    }
    ctx->pc = 0x1D5A68u;
label_1d5a68:
    // 0x1d5a68: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d5a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d5a6c:
    // 0x1d5a6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5a70:
    // 0x1d5a70: 0x90830231  lbu         $v1, 0x231($a0)
    ctx->pc = 0x1d5a70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 561)));
label_1d5a74:
    // 0x1d5a74: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_1d5a78:
    if (ctx->pc == 0x1D5A78u) {
        ctx->pc = 0x1D5A7Cu;
        goto label_1d5a7c;
    }
    ctx->pc = 0x1D5A74u;
    {
        const bool branch_taken_0x1d5a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5a74) {
            ctx->pc = 0x1D5AE4u;
            goto label_1d5ae4;
        }
    }
    ctx->pc = 0x1D5A7Cu;
label_1d5a7c:
    // 0x1d5a7c: 0xc054388  jal         func_150E20
label_1d5a80:
    if (ctx->pc == 0x1D5A80u) {
        ctx->pc = 0x1D5A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A7Cu;
        // 0x1d5a80: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A84u;
        goto label_1d5a84;
    }
    ctx->pc = 0x1D5A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A84u);
    ctx->pc = 0x1D5A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5A7Cu;
    // 0x1d5a80: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1D5A7Cu, 0x1D5A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A84u;
label_1d5a84:
    // 0x1d5a84: 0x10000018  b           . + 4 + (0x18 << 2)
label_1d5a88:
    if (ctx->pc == 0x1D5A88u) {
        ctx->pc = 0x1D5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A84u;
        // 0x1d5a88: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A8Cu;
        goto label_1d5a8c;
    }
    ctx->pc = 0x1D5A84u;
    {
        const bool branch_taken_0x1d5a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A84u;
        // 0x1d5a88: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a84) {
            ctx->pc = 0x1D5AE8u;
            goto label_1d5ae8;
        }
    }
    ctx->pc = 0x1D5A8Cu;
label_1d5a8c:
    // 0x1d5a8c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d5a90:
    // 0x1d5a90: 0xdc640270  ld          $a0, 0x270($v1)
    ctx->pc = 0x1d5a90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 624)));
label_1d5a94:
    // 0x1d5a94: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x1d5a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
label_1d5a98:
    // 0x1d5a98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d5a9c:
    if (ctx->pc == 0x1D5A9Cu) {
        ctx->pc = 0x1D5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A98u;
        // 0x1d5a9c: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5AA0u;
        goto label_1d5aa0;
    }
    ctx->pc = 0x1D5A98u;
    {
        const bool branch_taken_0x1d5a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A98u;
        // 0x1d5a9c: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a98) {
            ctx->pc = 0x1D5ABCu;
            goto label_1d5abc;
        }
    }
    ctx->pc = 0x1D5AA0u;
label_1d5aa0:
    // 0x1d5aa0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d5aa4:
    // 0x1d5aa4: 0xa0620246  sb          $v0, 0x246($v1)
    ctx->pc = 0x1d5aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 582), (uint8_t)GPR_U32(ctx, 2));
label_1d5aa8:
    // 0x1d5aa8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d5aac:
    // 0x1d5aac: 0xc054388  jal         func_150E20
label_1d5ab0:
    if (ctx->pc == 0x1D5AB0u) {
        ctx->pc = 0x1D5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AACu;
        // 0x1d5ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5AB4u;
        goto label_1d5ab4;
    }
    ctx->pc = 0x1D5AACu;
    SET_GPR_U32(ctx, 31, 0x1D5AB4u);
    ctx->pc = 0x1D5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AACu;
    // 0x1d5ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1D5AACu, 0x1D5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AB4u;
label_1d5ab4:
    // 0x1d5ab4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d5ab8:
    if (ctx->pc == 0x1D5AB8u) {
        ctx->pc = 0x1D5ABCu;
        goto label_1d5abc;
    }
    ctx->pc = 0x1D5AB4u;
    {
        const bool branch_taken_0x1d5ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ab4) {
            ctx->pc = 0x1D5AE4u;
            goto label_1d5ae4;
        }
    }
    ctx->pc = 0x1D5ABCu;
label_1d5abc:
    // 0x1d5abc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d5ac0:
    if (ctx->pc == 0x1D5AC0u) {
        ctx->pc = 0x1D5AC4u;
        goto label_1d5ac4;
    }
    ctx->pc = 0x1D5ABCu;
    {
        const bool branch_taken_0x1d5abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5abc) {
            ctx->pc = 0x1D5AE0u;
            goto label_1d5ae0;
        }
    }
    ctx->pc = 0x1D5AC4u;
label_1d5ac4:
    // 0x1d5ac4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5ac8:
    // 0x1d5ac8: 0xa0620246  sb          $v0, 0x246($v1)
    ctx->pc = 0x1d5ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 582), (uint8_t)GPR_U32(ctx, 2));
label_1d5acc:
    // 0x1d5acc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1d5accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1d5ad0:
    // 0x1d5ad0: 0xc054388  jal         func_150E20
label_1d5ad4:
    if (ctx->pc == 0x1D5AD4u) {
        ctx->pc = 0x1D5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AD0u;
        // 0x1d5ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5AD8u;
        goto label_1d5ad8;
    }
    ctx->pc = 0x1D5AD0u;
    SET_GPR_U32(ctx, 31, 0x1D5AD8u);
    ctx->pc = 0x1D5AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AD0u;
    // 0x1d5ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1D5AD0u, 0x1D5AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AD8u;
label_1d5ad8:
    // 0x1d5ad8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d5adc:
    if (ctx->pc == 0x1D5ADCu) {
        ctx->pc = 0x1D5AE0u;
        goto label_1d5ae0;
    }
    ctx->pc = 0x1D5AD8u;
    {
        const bool branch_taken_0x1d5ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ad8) {
            ctx->pc = 0x1D5AE4u;
            goto label_1d5ae4;
        }
    }
    ctx->pc = 0x1D5AE0u;
label_1d5ae0:
    // 0x1d5ae0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1d5ae4:
    // 0x1d5ae4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d5ae8:
    // 0x1d5ae8: 0xc045460  jal         func_115180
label_1d5aec:
    if (ctx->pc == 0x1D5AECu) {
        ctx->pc = 0x1D5AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AE8u;
        // 0x1d5aec: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5AF0u;
        goto label_1d5af0;
    }
    ctx->pc = 0x1D5AE8u;
    SET_GPR_U32(ctx, 31, 0x1D5AF0u);
    ctx->pc = 0x1D5AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AE8u;
    // 0x1d5aec: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115180u, 0x1D5AE8u, 0x1D5AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AF0u;
label_1d5af0:
    // 0x1d5af0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d5af4:
    if (ctx->pc == 0x1D5AF4u) {
        ctx->pc = 0x1D5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AF0u;
        // 0x1d5af4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5AF8u;
        goto label_1d5af8;
    }
    ctx->pc = 0x1D5AF0u;
    {
        const bool branch_taken_0x1d5af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AF0u;
        // 0x1d5af4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5af0) {
            ctx->pc = 0x1D5B1Cu;
            goto label_1d5b1c;
        }
    }
    ctx->pc = 0x1D5AF8u;
label_1d5af8:
    // 0x1d5af8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d5af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1d5afc:
    // 0x1d5afc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1d5b00:
    // 0x1d5b00: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x1d5b00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
label_1d5b04:
    // 0x1d5b04: 0xa600001a  sh          $zero, 0x1A($s0)
    ctx->pc = 0x1d5b04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 0));
label_1d5b08:
    // 0x1d5b08: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1d5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1d5b0c:
    // 0x1d5b0c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1d5b10:
    // 0x1d5b10: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1d5b14:
    // 0x1d5b14: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d5b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1d5b18:
    // 0x1d5b18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d5b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1d5b1c:
    // 0x1d5b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b20:
    // 0x1d5b20: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x1d5b20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
label_1d5b24:
    // 0x1d5b24: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x1d5b24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
label_1d5b28:
    // 0x1d5b28: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x1d5b28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
label_1d5b2c:
    // 0x1d5b2c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d5b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1d5b30:
    // 0x1d5b30: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d5b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5b34:
    // 0x1d5b34: 0x0  nop
    ctx->pc = 0x1d5b34u;
    // NOP
label_1d5b38:
    // 0x1d5b38: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1d5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1d5b3c:
    // 0x1d5b3c: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x1d5b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
label_1d5b40:
    // 0x1d5b40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d5b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d5b44:
    // 0x1d5b44: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1d5b44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d5b48:
    // 0x1d5b48: 0x0  nop
    ctx->pc = 0x1d5b48u;
    // NOP
label_1d5b4c:
    // 0x1d5b4c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1d5b50:
    if (ctx->pc == 0x1D5B50u) {
        ctx->pc = 0x1D5B54u;
        goto label_1d5b54;
    }
    ctx->pc = 0x1D5B4Cu;
    {
        const bool branch_taken_0x1d5b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b4c) {
            ctx->pc = 0x1D5B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5b34;
        }
    }
    ctx->pc = 0x1D5B54u;
label_1d5b54:
    // 0x1d5b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5b58:
    // 0x1d5b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5b5c:
    // 0x1d5b5c: 0x3e00008  jr          $ra
label_1d5b60:
    if (ctx->pc == 0x1D5B60u) {
        ctx->pc = 0x1D5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B5Cu;
        // 0x1d5b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B64u;
        goto label_1d5b64;
    }
    ctx->pc = 0x1D5B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B5Cu;
        // 0x1d5b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5B64u;
label_1d5b64:
    // 0x1d5b64: 0x0  nop
    ctx->pc = 0x1d5b64u;
    // NOP
label_1d5b68:
    // 0x1d5b68: 0x0  nop
    ctx->pc = 0x1d5b68u;
    // NOP
label_1d5b6c:
    // 0x1d5b6c: 0x0  nop
    ctx->pc = 0x1d5b6cu;
    // NOP
label_1d5b70:
    // 0x1d5b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d5b74:
    // 0x1d5b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d5b78:
    // 0x1d5b78: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1d5b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1d5b7c:
    // 0x1d5b7c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1d5b80:
    if (ctx->pc == 0x1D5B80u) {
        ctx->pc = 0x1D5B84u;
        goto label_1d5b84;
    }
    ctx->pc = 0x1D5B7Cu;
    {
        const bool branch_taken_0x1d5b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b7c) {
            ctx->pc = 0x1D5BCCu;
            goto label_1d5bcc;
        }
    }
    ctx->pc = 0x1D5B84u;
label_1d5b84:
    // 0x1d5b84: 0xc0439cc  jal         func_10E730
label_1d5b88:
    if (ctx->pc == 0x1D5B88u) {
        ctx->pc = 0x1D5B8Cu;
        goto label_1d5b8c;
    }
    ctx->pc = 0x1D5B84u;
    SET_GPR_U32(ctx, 31, 0x1D5B8Cu);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D5B84u, 0x1D5B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B8Cu;
label_1d5b8c:
    // 0x1d5b8c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d5b90:
    // 0x1d5b90: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d5b94:
    // 0x1d5b94: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d5b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d5b98:
    // 0x1d5b98: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_1d5b9c:
    // 0x1d5b9c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d5b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d5ba0:
    // 0x1d5ba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ba4:
    // 0x1d5ba4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1d5ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d5ba8:
    // 0x1d5ba8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d5ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5bac:
    // 0x1d5bac: 0x0  nop
    ctx->pc = 0x1d5bacu;
    // NOP
label_1d5bb0:
    // 0x1d5bb0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1d5bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d5bb4:
    // 0x1d5bb4: 0xa0640068  sb          $a0, 0x68($v1)
    ctx->pc = 0x1d5bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 4));
label_1d5bb8:
    // 0x1d5bb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d5bbc:
    // 0x1d5bbc: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1d5bbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d5bc0:
    // 0x1d5bc0: 0x0  nop
    ctx->pc = 0x1d5bc0u;
    // NOP
label_1d5bc4:
    // 0x1d5bc4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1d5bc8:
    if (ctx->pc == 0x1D5BC8u) {
        ctx->pc = 0x1D5BCCu;
        goto label_1d5bcc;
    }
    ctx->pc = 0x1D5BC4u;
    {
        const bool branch_taken_0x1d5bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5bc4) {
            ctx->pc = 0x1D5BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5bac;
        }
    }
    ctx->pc = 0x1D5BCCu;
label_1d5bcc:
    // 0x1d5bcc: 0x0  nop
    ctx->pc = 0x1d5bccu;
    // NOP
label_1d5bd0:
    // 0x1d5bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5bd4:
    // 0x1d5bd4: 0x3e00008  jr          $ra
label_1d5bd8:
    if (ctx->pc == 0x1D5BD8u) {
        ctx->pc = 0x1D5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BD4u;
        // 0x1d5bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5BDCu;
        goto label_1d5bdc;
    }
    ctx->pc = 0x1D5BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BD4u;
        // 0x1d5bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5BDCu;
label_1d5bdc:
    // 0x1d5bdc: 0x0  nop
    ctx->pc = 0x1d5bdcu;
    // NOP
label_1d5be0:
    // 0x1d5be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d5be4:
    // 0x1d5be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d5be8:
    // 0x1d5be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d5bec:
    // 0x1d5bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d5bf0:
    // 0x1d5bf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5bf4:
    // 0x1d5bf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d5bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5bf8:
    // 0x1d5bf8: 0x0  nop
    ctx->pc = 0x1d5bf8u;
    // NOP
label_1d5bfc:
    // 0x1d5bfc: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d5c00:
    // 0x1d5c00: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_1d5c04:
    // 0x1d5c04: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1d5c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1d5c08:
    // 0x1d5c08: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_1d5c0c:
    // 0x1d5c0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d5c10:
    if (ctx->pc == 0x1D5C10u) {
        ctx->pc = 0x1D5C14u;
        goto label_1d5c14;
    }
    ctx->pc = 0x1D5C0Cu;
    {
        const bool branch_taken_0x1d5c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c0c) {
            ctx->pc = 0x1D5C1Cu;
            goto label_1d5c1c;
        }
    }
    ctx->pc = 0x1D5C14u;
label_1d5c14:
    // 0x1d5c14: 0xc075714  jal         func_1D5C50
label_1d5c18:
    if (ctx->pc == 0x1D5C18u) {
        ctx->pc = 0x1D5C1Cu;
        goto label_1d5c1c;
    }
    ctx->pc = 0x1D5C14u;
    SET_GPR_U32(ctx, 31, 0x1D5C1Cu);
    ctx->pc = 0x1D5C50u;
    goto label_1d5c50;
    ctx->pc = 0x1D5C1Cu;
label_1d5c1c:
    // 0x1d5c1c: 0x0  nop
    ctx->pc = 0x1d5c1cu;
    // NOP
label_1d5c20:
    // 0x1d5c20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d5c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d5c24:
    // 0x1d5c24: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d5c24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d5c28:
    // 0x1d5c28: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_1d5c2c:
    if (ctx->pc == 0x1D5C2Cu) {
        ctx->pc = 0x1D5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C28u;
        // 0x1d5c2c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5C30u;
        goto label_1d5c30;
    }
    ctx->pc = 0x1D5C28u;
    {
        const bool branch_taken_0x1d5c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C28u;
        // 0x1d5c2c: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c28) {
            ctx->pc = 0x1D5BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5bf8;
        }
    }
    ctx->pc = 0x1D5C30u;
label_1d5c30:
    // 0x1d5c30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d5c34:
    // 0x1d5c34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c38:
    // 0x1d5c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5c3c:
    // 0x1d5c3c: 0x3e00008  jr          $ra
label_1d5c40:
    if (ctx->pc == 0x1D5C40u) {
        ctx->pc = 0x1D5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C3Cu;
        // 0x1d5c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5C44u;
        goto label_1d5c44;
    }
    ctx->pc = 0x1D5C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C3Cu;
        // 0x1d5c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C44u;
label_1d5c44:
    // 0x1d5c44: 0x0  nop
    ctx->pc = 0x1d5c44u;
    // NOP
label_1d5c48:
    // 0x1d5c48: 0x0  nop
    ctx->pc = 0x1d5c48u;
    // NOP
label_1d5c4c:
    // 0x1d5c4c: 0x0  nop
    ctx->pc = 0x1d5c4cu;
    // NOP
label_1d5c50:
    // 0x1d5c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d5c54:
    // 0x1d5c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d5c58:
    // 0x1d5c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d5c5c:
    // 0x1d5c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d5c60:
    // 0x1d5c60: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x1d5c60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d5c64:
    // 0x1d5c64: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x1d5c64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
label_1d5c68:
    // 0x1d5c68: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x1d5c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_1d5c6c:
    // 0x1d5c6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1d5c70:
    if (ctx->pc == 0x1D5C70u) {
        ctx->pc = 0x1D5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C6Cu;
        // 0x1d5c70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5C74u;
        goto label_1d5c74;
    }
    ctx->pc = 0x1D5C6Cu;
    {
        const bool branch_taken_0x1d5c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C6Cu;
        // 0x1d5c70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c6c) {
            ctx->pc = 0x1D5C90u;
            goto label_1d5c90;
        }
    }
    ctx->pc = 0x1D5C74u;
label_1d5c74:
    // 0x1d5c74: 0x28610084  slti        $at, $v1, 0x84
    ctx->pc = 0x1d5c74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
label_1d5c78:
    // 0x1d5c78: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1d5c7c:
    if (ctx->pc == 0x1D5C7Cu) {
        ctx->pc = 0x1D5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C78u;
        // 0x1d5c7c: 0x28620084  slti        $v0, $v1, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5C80u;
        goto label_1d5c80;
    }
    ctx->pc = 0x1D5C78u;
    {
        const bool branch_taken_0x1d5c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C78u;
        // 0x1d5c7c: 0x28620084  slti        $v0, $v1, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c78) {
            ctx->pc = 0x1D5C94u;
            goto label_1d5c94;
        }
    }
    ctx->pc = 0x1D5C80u;
label_1d5c80:
    // 0x1d5c80: 0xc06323c  jal         func_18C8F0
label_1d5c84:
    if (ctx->pc == 0x1D5C84u) {
        ctx->pc = 0x1D5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C80u;
        // 0x1d5c84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5C88u;
        goto label_1d5c88;
    }
    ctx->pc = 0x1D5C80u;
    SET_GPR_U32(ctx, 31, 0x1D5C88u);
    ctx->pc = 0x1D5C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C80u;
    // 0x1d5c84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8F0u, 0x1D5C80u, 0x1D5C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C88u;
label_1d5c88:
    // 0x1d5c88: 0x10000142  b           . + 4 + (0x142 << 2)
label_1d5c8c:
    if (ctx->pc == 0x1D5C8Cu) {
        ctx->pc = 0x1D5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C88u;
        // 0x1d5c8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5C90u;
        goto label_1d5c90;
    }
    ctx->pc = 0x1D5C88u;
    {
        const bool branch_taken_0x1d5c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C88u;
        // 0x1d5c8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c88) {
            ctx->pc = 0x1D6194u;
            { ctx->pc = 0x1d6194; return; }
        }
    }
    ctx->pc = 0x1D5C90u;
label_1d5c90:
    // 0x1d5c90: 0x28620084  slti        $v0, $v1, 0x84
    ctx->pc = 0x1d5c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
label_1d5c94:
    // 0x1d5c94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1d5c98:
    if (ctx->pc == 0x1D5C98u) {
        ctx->pc = 0x1D5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C94u;
        // 0x1d5c98: 0x28610086  slti        $at, $v1, 0x86 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)134) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5C9Cu;
        goto label_1d5c9c;
    }
    ctx->pc = 0x1D5C94u;
    {
        const bool branch_taken_0x1d5c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C94u;
        // 0x1d5c98: 0x28610086  slti        $at, $v1, 0x86 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)134) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c94) {
            ctx->pc = 0x1D5CB4u;
            goto label_1d5cb4;
        }
    }
    ctx->pc = 0x1D5C9Cu;
label_1d5c9c:
    // 0x1d5c9c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1d5ca0:
    if (ctx->pc == 0x1D5CA0u) {
        ctx->pc = 0x1D5CA4u;
        goto label_1d5ca4;
    }
    ctx->pc = 0x1D5C9Cu;
    {
        const bool branch_taken_0x1d5c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c9c) {
            ctx->pc = 0x1D5CB4u;
            goto label_1d5cb4;
        }
    }
    ctx->pc = 0x1D5CA4u;
label_1d5ca4:
    // 0x1d5ca4: 0xc06322c  jal         func_18C8B0
label_1d5ca8:
    if (ctx->pc == 0x1D5CA8u) {
        ctx->pc = 0x1D5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CA4u;
        // 0x1d5ca8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5CACu;
        goto label_1d5cac;
    }
    ctx->pc = 0x1D5CA4u;
    SET_GPR_U32(ctx, 31, 0x1D5CACu);
    ctx->pc = 0x1D5CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA4u;
    // 0x1d5ca8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8B0u, 0x1D5CA4u, 0x1D5CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CACu;
label_1d5cac:
    // 0x1d5cac: 0x10000138  b           . + 4 + (0x138 << 2)
label_1d5cb0:
    if (ctx->pc == 0x1D5CB0u) {
        ctx->pc = 0x1D5CB4u;
        goto label_1d5cb4;
    }
    ctx->pc = 0x1D5CACu;
    {
        const bool branch_taken_0x1d5cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5cac) {
            ctx->pc = 0x1D6190u;
            { ctx->pc = 0x1d6190; return; }
        }
    }
    ctx->pc = 0x1D5CB4u;
label_1d5cb4:
    // 0x1d5cb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d5cb8:
    // 0x1d5cb8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1d5cbc:
    if (ctx->pc == 0x1D5CBCu) {
        ctx->pc = 0x1D5CC0u;
        goto label_1d5cc0;
    }
    ctx->pc = 0x1D5CB8u;
    {
        const bool branch_taken_0x1d5cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5cb8) {
            ctx->pc = 0x1D5D00u;
            goto label_1d5d00;
        }
    }
    ctx->pc = 0x1D5CC0u;
label_1d5cc0:
    // 0x1d5cc0: 0xc6020188  lwc1        $f2, 0x188($s0)
    ctx->pc = 0x1d5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d5cc4:
    // 0x1d5cc4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1d5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_1d5cc8:
    // 0x1d5cc8: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x1d5cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5ccc:
    // 0x1d5ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5cd0:
    // 0x1d5cd0: 0x0  nop
    ctx->pc = 0x1d5cd0u;
    // NOP
label_1d5cd4:
    // 0x1d5cd4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d5cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1d5cd8:
    // 0x1d5cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5cdc:
    // 0x1d5cdc: 0x0  nop
    ctx->pc = 0x1d5cdcu;
    // NOP
label_1d5ce0:
    // 0x1d5ce0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1d5ce4:
    if (ctx->pc == 0x1D5CE4u) {
        ctx->pc = 0x1D5CE8u;
        goto label_1d5ce8;
    }
    ctx->pc = 0x1D5CE0u;
    {
        const bool branch_taken_0x1d5ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5ce0) {
            ctx->pc = 0x1D5D00u;
            goto label_1d5d00;
        }
    }
    ctx->pc = 0x1D5CE8u;
label_1d5ce8:
    // 0x1d5ce8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5cec:
    // 0x1d5cec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1d5cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1d5cf0:
    // 0x1d5cf0: 0xc0630c0  jal         func_18C300
label_1d5cf4:
    if (ctx->pc == 0x1D5CF4u) {
        ctx->pc = 0x1D5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CF0u;
        // 0x1d5cf4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5CF8u;
        goto label_1d5cf8;
    }
    ctx->pc = 0x1D5CF0u;
    SET_GPR_U32(ctx, 31, 0x1D5CF8u);
    ctx->pc = 0x1D5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CF0u;
    // 0x1d5cf4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C300u, 0x1D5CF0u, 0x1D5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CF8u;
label_1d5cf8:
    // 0x1d5cf8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1d5cfc:
    if (ctx->pc == 0x1D5CFCu) {
        ctx->pc = 0x1D5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CF8u;
        // 0x1d5cfc: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5D00u;
        goto label_1d5d00;
    }
    ctx->pc = 0x1D5CF8u;
    {
        const bool branch_taken_0x1d5cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CF8u;
        // 0x1d5cfc: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cf8) {
            ctx->pc = 0x1D5D60u;
            goto label_1d5d60;
        }
    }
    ctx->pc = 0x1D5D00u;
label_1d5d00:
    // 0x1d5d00: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1d5d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5d04:
    // 0x1d5d04: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d5d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5d08:
    // 0x1d5d08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d5d08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5d0c:
    // 0x1d5d0c: 0x0  nop
    ctx->pc = 0x1d5d0cu;
    // NOP
label_1d5d10:
    // 0x1d5d10: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_1d5d14:
    if (ctx->pc == 0x1D5D14u) {
        ctx->pc = 0x1D5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D10u;
        // 0x1d5d14: 0x2402009e  addiu       $v0, $zero, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5D18u;
        goto label_1d5d18;
    }
    ctx->pc = 0x1D5D10u;
    {
        const bool branch_taken_0x1d5d10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D10u;
        // 0x1d5d14: 0x2402009e  addiu       $v0, $zero, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d10) {
            ctx->pc = 0x1D5D5Cu;
            goto label_1d5d5c;
        }
    }
    ctx->pc = 0x1D5D18u;
label_1d5d18:
    // 0x1d5d18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1d5d1c:
    if (ctx->pc == 0x1D5D1Cu) {
        ctx->pc = 0x1D5D20u;
        goto label_1d5d20;
    }
    ctx->pc = 0x1D5D18u;
    {
        const bool branch_taken_0x1d5d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5d18) {
            ctx->pc = 0x1D5D2Cu;
            goto label_1d5d2c;
        }
    }
    ctx->pc = 0x1D5D20u;
label_1d5d20:
    // 0x1d5d20: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1d5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_1d5d24:
    // 0x1d5d24: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1d5d28:
    if (ctx->pc == 0x1D5D28u) {
        ctx->pc = 0x1D5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D24u;
        // 0x1d5d28: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5D2Cu;
        goto label_1d5d2c;
    }
    ctx->pc = 0x1D5D24u;
    {
        const bool branch_taken_0x1d5d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D24u;
        // 0x1d5d28: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d24) {
            ctx->pc = 0x1D5D44u;
            goto label_1d5d44;
        }
    }
    ctx->pc = 0x1D5D2Cu;
label_1d5d2c:
    // 0x1d5d2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5d30:
    // 0x1d5d30: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1d5d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1d5d34:
    // 0x1d5d34: 0xc063130  jal         func_18C4C0
label_1d5d38:
    if (ctx->pc == 0x1D5D38u) {
        ctx->pc = 0x1D5D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D34u;
        // 0x1d5d38: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5D3Cu;
        goto label_1d5d3c;
    }
    ctx->pc = 0x1D5D34u;
    SET_GPR_U32(ctx, 31, 0x1D5D3Cu);
    ctx->pc = 0x1D5D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D34u;
    // 0x1d5d38: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C4C0u, 0x1D5D34u, 0x1D5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D3Cu;
label_1d5d3c:
    // 0x1d5d3c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d5d40:
    if (ctx->pc == 0x1D5D40u) {
        ctx->pc = 0x1D5D44u;
        goto label_1d5d44;
    }
    ctx->pc = 0x1D5D3Cu;
    {
        const bool branch_taken_0x1d5d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d3c) {
            ctx->pc = 0x1D5D5Cu;
            goto label_1d5d5c;
        }
    }
    ctx->pc = 0x1D5D44u;
label_1d5d44:
    // 0x1d5d44: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1d5d48:
    if (ctx->pc == 0x1D5D48u) {
        ctx->pc = 0x1D5D4Cu;
        goto label_1d5d4c;
    }
    ctx->pc = 0x1D5D44u;
    {
        const bool branch_taken_0x1d5d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5d44) {
            ctx->pc = 0x1D5D5Cu;
            goto label_1d5d5c;
        }
    }
    ctx->pc = 0x1D5D4Cu;
label_1d5d4c:
    // 0x1d5d4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5d50:
    // 0x1d5d50: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1d5d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1d5d54:
    // 0x1d5d54: 0xc063134  jal         func_18C4D0
label_1d5d58:
    if (ctx->pc == 0x1D5D58u) {
        ctx->pc = 0x1D5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D54u;
        // 0x1d5d58: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5D5Cu;
        goto label_1d5d5c;
    }
    ctx->pc = 0x1D5D54u;
    SET_GPR_U32(ctx, 31, 0x1D5D5Cu);
    ctx->pc = 0x1D5D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D54u;
    // 0x1d5d58: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C4D0u, 0x1D5D54u, 0x1D5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D5Cu;
label_1d5d5c:
    // 0x1d5d5c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d5d60:
    // 0x1d5d60: 0x9042023a  lbu         $v0, 0x23A($v0)
    ctx->pc = 0x1d5d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 570)));
label_1d5d64:
    // 0x1d5d64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d5d68:
    if (ctx->pc == 0x1D5D68u) {
        ctx->pc = 0x1D5D6Cu;
        goto label_1d5d6c;
    }
    ctx->pc = 0x1D5D64u;
    {
        const bool branch_taken_0x1d5d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d64) {
            ctx->pc = 0x1D5D80u;
            goto label_1d5d80;
        }
    }
    ctx->pc = 0x1D5D6Cu;
label_1d5d6c:
    // 0x1d5d6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5d70:
    // 0x1d5d70: 0xc063158  jal         func_18C560
label_1d5d74:
    if (ctx->pc == 0x1D5D74u) {
        ctx->pc = 0x1D5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D70u;
        // 0x1d5d74: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5D78u;
        goto label_1d5d78;
    }
    ctx->pc = 0x1D5D70u;
    SET_GPR_U32(ctx, 31, 0x1D5D78u);
    ctx->pc = 0x1D5D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D70u;
    // 0x1d5d74: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C560u, 0x1D5D70u, 0x1D5D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D78u;
label_1d5d78:
    // 0x1d5d78: 0x10000105  b           . + 4 + (0x105 << 2)
label_1d5d7c:
    if (ctx->pc == 0x1D5D7Cu) {
        ctx->pc = 0x1D5D80u;
        goto label_1d5d80;
    }
    ctx->pc = 0x1D5D78u;
    {
        const bool branch_taken_0x1d5d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d78) {
            ctx->pc = 0x1D6190u;
            { ctx->pc = 0x1d6190; return; }
        }
    }
    ctx->pc = 0x1D5D80u;
label_1d5d80:
    // 0x1d5d80: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d5d84:
    // 0x1d5d84: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1d5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1d5d88:
    // 0x1d5d88: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_1d5d8c:
    if (ctx->pc == 0x1D5D8Cu) {
        ctx->pc = 0x1D5D90u;
        goto label_1d5d90;
    }
    ctx->pc = 0x1D5D88u;
    {
        const bool branch_taken_0x1d5d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d88) {
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5D90u;
label_1d5d90:
    // 0x1d5d90: 0x8445003c  lh          $a1, 0x3C($v0)
    ctx->pc = 0x1d5d90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
label_1d5d94:
    // 0x1d5d94: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1d5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_1d5d98:
    // 0x1d5d98: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
label_1d5d9c:
    if (ctx->pc == 0x1D5D9Cu) {
        ctx->pc = 0x1D5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D98u;
        // 0x1d5d9c: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5DA0u;
        goto label_1d5da0;
    }
    ctx->pc = 0x1D5D98u;
    {
        const bool branch_taken_0x1d5d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D98u;
        // 0x1d5d9c: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d98) {
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5DA0u;
label_1d5da0:
    // 0x1d5da0: 0x10a3002a  beq         $a1, $v1, . + 4 + (0x2A << 2)
label_1d5da4:
    if (ctx->pc == 0x1D5DA4u) {
        ctx->pc = 0x1D5DA8u;
        goto label_1d5da8;
    }
    ctx->pc = 0x1D5DA0u;
    {
        const bool branch_taken_0x1d5da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d5da0) {
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5DA8u;
label_1d5da8:
    // 0x1d5da8: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1d5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_1d5dac:
    // 0x1d5dac: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
label_1d5db0:
    if (ctx->pc == 0x1D5DB0u) {
        ctx->pc = 0x1D5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DACu;
        // 0x1d5db0: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5DB4u;
        goto label_1d5db4;
    }
    ctx->pc = 0x1D5DACu;
    {
        const bool branch_taken_0x1d5dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DACu;
        // 0x1d5db0: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dac) {
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5DB4u;
label_1d5db4:
    // 0x1d5db4: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
label_1d5db8:
    if (ctx->pc == 0x1D5DB8u) {
        ctx->pc = 0x1D5DBCu;
        goto label_1d5dbc;
    }
    ctx->pc = 0x1D5DB4u;
    {
        const bool branch_taken_0x1d5db4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d5db4) {
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5DBCu;
label_1d5dbc:
    // 0x1d5dbc: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d5dc0:
    // 0x1d5dc0: 0x30637800  andi        $v1, $v1, 0x7800
    ctx->pc = 0x1d5dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30720);
label_1d5dc4:
    // 0x1d5dc4: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_1d5dc8:
    if (ctx->pc == 0x1D5DC8u) {
        ctx->pc = 0x1D5DCCu;
        goto label_1d5dcc;
    }
    ctx->pc = 0x1D5DC4u;
    {
        const bool branch_taken_0x1d5dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5dc4) {
            ctx->pc = 0x1D5E2Cu;
            goto label_1d5e2c;
        }
    }
    ctx->pc = 0x1D5DCCu;
label_1d5dcc:
    // 0x1d5dcc: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x1d5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_1d5dd0:
    // 0x1d5dd0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1d5dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_1d5dd4:
    // 0x1d5dd4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1d5dd8:
    if (ctx->pc == 0x1D5DD8u) {
        ctx->pc = 0x1D5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DD4u;
        // 0x1d5dd8: 0x24030079  addiu       $v1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5DDCu;
        goto label_1d5ddc;
    }
    ctx->pc = 0x1D5DD4u;
    {
        const bool branch_taken_0x1d5dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DD4u;
        // 0x1d5dd8: 0x24030079  addiu       $v1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dd4) {
            ctx->pc = 0x1D5DF4u;
            goto label_1d5df4;
        }
    }
    ctx->pc = 0x1D5DDCu;
label_1d5ddc:
    // 0x1d5ddc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1d5ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d5de0:
    // 0x1d5de0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d5de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d5de4:
    // 0x1d5de4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d5de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1d5de8:
    // 0x1d5de8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1d5dec:
    if (ctx->pc == 0x1D5DECu) {
        ctx->pc = 0x1D5DF0u;
        goto label_1d5df0;
    }
    ctx->pc = 0x1D5DE8u;
    {
        const bool branch_taken_0x1d5de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5de8) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5DF0u;
label_1d5df0:
    // 0x1d5df0: 0x24030079  addiu       $v1, $zero, 0x79
    ctx->pc = 0x1d5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_1d5df4:
    // 0x1d5df4: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_1d5df8:
    if (ctx->pc == 0x1D5DF8u) {
        ctx->pc = 0x1D5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DF4u;
        // 0x1d5df8: 0x2403007e  addiu       $v1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5DFCu;
        goto label_1d5dfc;
    }
    ctx->pc = 0x1D5DF4u;
    {
        const bool branch_taken_0x1d5df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DF4u;
        // 0x1d5df8: 0x2403007e  addiu       $v1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5df4) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5DFCu;
label_1d5dfc:
    // 0x1d5dfc: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1d5e00:
    if (ctx->pc == 0x1D5E00u) {
        ctx->pc = 0x1D5E04u;
        goto label_1d5e04;
    }
    ctx->pc = 0x1D5DFCu;
    {
        const bool branch_taken_0x1d5dfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d5dfc) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5E04u;
label_1d5e04:
    // 0x1d5e04: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1d5e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d5e08:
    // 0x1d5e08: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1d5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1d5e0c:
    // 0x1d5e0c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1d5e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1d5e10:
    // 0x1d5e10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d5e14:
    // 0x1d5e14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d5e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d5e18:
    // 0x1d5e18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d5e1c:
    if (ctx->pc == 0x1D5E1Cu) {
        ctx->pc = 0x1D5E20u;
        goto label_1d5e20;
    }
    ctx->pc = 0x1D5E18u;
    {
        const bool branch_taken_0x1d5e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e18) {
            ctx->pc = 0x1D5E2Cu;
            goto label_1d5e2c;
        }
    }
    ctx->pc = 0x1D5E20u;
label_1d5e20:
    // 0x1d5e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5e24:
    // 0x1d5e24: 0x10000024  b           . + 4 + (0x24 << 2)
label_1d5e28:
    if (ctx->pc == 0x1D5E28u) {
        ctx->pc = 0x1D5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E24u;
        // 0x1d5e28: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E2Cu;
        goto label_1d5e2c;
    }
    ctx->pc = 0x1D5E24u;
    {
        const bool branch_taken_0x1d5e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E24u;
        // 0x1d5e28: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e24) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5E2Cu;
label_1d5e2c:
    // 0x1d5e2c: 0x8443019c  lh          $v1, 0x19C($v0)
    ctx->pc = 0x1d5e2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 412)));
label_1d5e30:
    // 0x1d5e30: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1d5e34:
    if (ctx->pc == 0x1D5E34u) {
        ctx->pc = 0x1D5E38u;
        goto label_1d5e38;
    }
    ctx->pc = 0x1D5E30u;
    {
        const bool branch_taken_0x1d5e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e30) {
            ctx->pc = 0x1D5E44u;
            goto label_1d5e44;
        }
    }
    ctx->pc = 0x1D5E38u;
label_1d5e38:
    // 0x1d5e38: 0x8442019e  lh          $v0, 0x19E($v0)
    ctx->pc = 0x1d5e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 414)));
label_1d5e3c:
    // 0x1d5e3c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1d5e40:
    if (ctx->pc == 0x1D5E40u) {
        ctx->pc = 0x1D5E44u;
        goto label_1d5e44;
    }
    ctx->pc = 0x1D5E3Cu;
    {
        const bool branch_taken_0x1d5e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e3c) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5E44u;
label_1d5e44:
    // 0x1d5e44: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d5e48:
    if (ctx->pc == 0x1D5E48u) {
        ctx->pc = 0x1D5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E44u;
        // 0x1d5e48: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E4Cu;
        goto label_1d5e4c;
    }
    ctx->pc = 0x1D5E44u;
    {
        const bool branch_taken_0x1d5e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E44u;
        // 0x1d5e48: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e44) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5E4Cu;
label_1d5e4c:
    // 0x1d5e4c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x1d5e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1d5e50:
    // 0x1d5e50: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1d5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1d5e54:
    // 0x1d5e54: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1d5e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1d5e58:
    // 0x1d5e58: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d5e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d5e5c:
    // 0x1d5e5c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1d5e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1d5e60:
    // 0x1d5e60: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1d5e64:
    if (ctx->pc == 0x1D5E64u) {
        ctx->pc = 0x1D5E68u;
        goto label_1d5e68;
    }
    ctx->pc = 0x1D5E60u;
    {
        const bool branch_taken_0x1d5e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e60) {
            ctx->pc = 0x1D5E78u;
            goto label_1d5e78;
        }
    }
    ctx->pc = 0x1D5E68u;
label_1d5e68:
    // 0x1d5e68: 0x8444003c  lh          $a0, 0x3C($v0)
    ctx->pc = 0x1d5e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
label_1d5e6c:
    // 0x1d5e6c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1d5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1d5e70:
    // 0x1d5e70: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_1d5e74:
    if (ctx->pc == 0x1D5E74u) {
        ctx->pc = 0x1D5E78u;
        goto label_1d5e78;
    }
    ctx->pc = 0x1D5E70u;
    {
        const bool branch_taken_0x1d5e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5e70) {
            ctx->pc = 0x1D5E84u;
            goto label_1d5e84;
        }
    }
    ctx->pc = 0x1D5E78u;
label_1d5e78:
    // 0x1d5e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5e7c:
    // 0x1d5e7c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d5e80:
    if (ctx->pc == 0x1D5E80u) {
        ctx->pc = 0x1D5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E7Cu;
        // 0x1d5e80: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E84u;
        goto label_1d5e84;
    }
    ctx->pc = 0x1D5E7Cu;
    {
        const bool branch_taken_0x1d5e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E7Cu;
        // 0x1d5e80: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e7c) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5E84u;
label_1d5e84:
    // 0x1d5e84: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d5e88:
    // 0x1d5e88: 0x30637800  andi        $v1, $v1, 0x7800
    ctx->pc = 0x1d5e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30720);
label_1d5e8c:
    // 0x1d5e8c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1d5e90:
    if (ctx->pc == 0x1D5E90u) {
        ctx->pc = 0x1D5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E8Cu;
        // 0x1d5e90: 0x30a30020  andi        $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5E94u;
        goto label_1d5e94;
    }
    ctx->pc = 0x1D5E8Cu;
    {
        const bool branch_taken_0x1d5e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E8Cu;
        // 0x1d5e90: 0x30a30020  andi        $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e8c) {
            ctx->pc = 0x1D5EB4u;
            goto label_1d5eb4;
        }
    }
    ctx->pc = 0x1D5E94u;
label_1d5e94:
    // 0x1d5e94: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1d5e98:
    if (ctx->pc == 0x1D5E98u) {
        ctx->pc = 0x1D5E9Cu;
        goto label_1d5e9c;
    }
    ctx->pc = 0x1D5E94u;
    {
        const bool branch_taken_0x1d5e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e94) {
            ctx->pc = 0x1D5EB4u;
            goto label_1d5eb4;
        }
    }
    ctx->pc = 0x1D5E9Cu;
label_1d5e9c:
    // 0x1d5e9c: 0x8443019c  lh          $v1, 0x19C($v0)
    ctx->pc = 0x1d5e9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 412)));
label_1d5ea0:
    // 0x1d5ea0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1d5ea4:
    if (ctx->pc == 0x1D5EA4u) {
        ctx->pc = 0x1D5EA8u;
        goto label_1d5ea8;
    }
    ctx->pc = 0x1D5EA0u;
    {
        const bool branch_taken_0x1d5ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ea0) {
            ctx->pc = 0x1D5EB4u;
            goto label_1d5eb4;
        }
    }
    ctx->pc = 0x1D5EA8u;
label_1d5ea8:
    // 0x1d5ea8: 0x8442019e  lh          $v0, 0x19E($v0)
    ctx->pc = 0x1d5ea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 414)));
label_1d5eac:
    // 0x1d5eac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d5eb0:
    if (ctx->pc == 0x1D5EB0u) {
        ctx->pc = 0x1D5EB4u;
        goto label_1d5eb4;
    }
    ctx->pc = 0x1D5EACu;
    {
        const bool branch_taken_0x1d5eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5eac) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5EB4u;
label_1d5eb4:
    // 0x1d5eb4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d5eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1d5eb8:
    // 0x1d5eb8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d5ebc:
    // 0x1d5ebc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1d5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1d5ec0:
    // 0x1d5ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5ec4:
    // 0x1d5ec4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d5ec8:
    // 0x1d5ec8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d5ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d5ecc:
    // 0x1d5ecc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1d5ed0:
    // 0x1d5ed0: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x1d5ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5ed4:
    // 0x1d5ed4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1d5ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1d5ed8:
    // 0x1d5ed8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d5ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d5edc:
    // 0x1d5edc: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x1d5edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5ee0:
    // 0x1d5ee0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d5ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d5ee4:
    // 0x1d5ee4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d5ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1d5ee8:
    // 0x1d5ee8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d5eec:
    // 0x1d5eec: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x1d5eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5ef0:
    // 0x1d5ef0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1d5ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1d5ef4:
    // 0x1d5ef4: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1d5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_1d5ef8:
    // 0x1d5ef8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d5ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d5efc:
    // 0x1d5efc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1d5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d5f00:
    // 0x1d5f00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d5f04:
    // 0x1d5f04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d5f08:
    // 0x1d5f08: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1d5f0c:
    if (ctx->pc == 0x1D5F0Cu) {
        ctx->pc = 0x1D5F10u;
        goto label_1d5f10;
    }
    ctx->pc = 0x1D5F08u;
    {
        const bool branch_taken_0x1d5f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f08) {
            ctx->pc = 0x1D5F48u;
            goto label_1d5f48;
        }
    }
    ctx->pc = 0x1D5F10u;
label_1d5f10:
    // 0x1d5f10: 0xc48001d8  lwc1        $f0, 0x1D8($a0)
    ctx->pc = 0x1d5f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5f14:
    // 0x1d5f14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d5f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d5f18:
    // 0x1d5f18: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1d5f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1d5f1c:
    // 0x1d5f1c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d5f20:
    // 0x1d5f20: 0xc44001dc  lwc1        $f0, 0x1DC($v0)
    ctx->pc = 0x1d5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5f24:
    // 0x1d5f24: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1d5f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1d5f28:
    // 0x1d5f28: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1d5f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_1d5f2c:
    // 0x1d5f2c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1d5f2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1d5f30:
    // 0x1d5f30: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d5f34:
    // 0x1d5f34: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5f38:
    // 0x1d5f38: 0xc06324c  jal         func_18C930
label_1d5f3c:
    if (ctx->pc == 0x1D5F3Cu) {
        ctx->pc = 0x1D5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F38u;
        // 0x1d5f3c: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F40u;
        goto label_1d5f40;
    }
    ctx->pc = 0x1D5F38u;
    SET_GPR_U32(ctx, 31, 0x1D5F40u);
    ctx->pc = 0x1D5F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F38u;
    // 0x1d5f3c: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C930u, 0x1D5F38u, 0x1D5F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F40u;
label_1d5f40:
    // 0x1d5f40: 0x10000093  b           . + 4 + (0x93 << 2)
label_1d5f44:
    if (ctx->pc == 0x1D5F44u) {
        ctx->pc = 0x1D5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F40u;
        // 0x1d5f44: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F48u;
        goto label_1d5f48;
    }
    ctx->pc = 0x1D5F40u;
    {
        const bool branch_taken_0x1d5f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F40u;
        // 0x1d5f44: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f40) {
            ctx->pc = 0x1D6190u;
            { ctx->pc = 0x1d6190; return; }
        }
    }
    ctx->pc = 0x1D5F48u;
label_1d5f48:
    // 0x1d5f48: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d5f4c:
    // 0x1d5f4c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_1d5f50:
    if (ctx->pc == 0x1D5F50u) {
        ctx->pc = 0x1D5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F4Cu;
        // 0x1d5f50: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F54u;
        goto label_1d5f54;
    }
    ctx->pc = 0x1D5F4Cu;
    {
        const bool branch_taken_0x1d5f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F4Cu;
        // 0x1d5f50: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f4c) {
            ctx->pc = 0x1D6058u;
            goto label_1d6058;
        }
    }
    ctx->pc = 0x1D5F54u;
label_1d5f54:
    // 0x1d5f54: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1d5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_1d5f58:
    // 0x1d5f58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d5f5c:
    // 0x1d5f5c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_1d5f60:
    if (ctx->pc == 0x1D5F60u) {
        ctx->pc = 0x1D5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F5Cu;
        // 0x1d5f60: 0x24860040  addiu       $a2, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5F64u;
        goto label_1d5f64;
    }
    ctx->pc = 0x1D5F5Cu;
    {
        const bool branch_taken_0x1d5f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F5Cu;
        // 0x1d5f60: 0x24860040  addiu       $a2, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f5c) {
            ctx->pc = 0x1D603Cu;
            goto label_1d603c;
        }
    }
    ctx->pc = 0x1D5F64u;
label_1d5f64:
    // 0x1d5f64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5f68:
    // 0x1d5f68: 0x248201b0  addiu       $v0, $a0, 0x1B0
    ctx->pc = 0x1d5f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
label_1d5f6c:
    // 0x1d5f6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d5f70:
    // 0x1d5f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d5f74:
    // 0x1d5f74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5f78:
    // 0x1d5f78: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x1d5f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_1d5f7c:
    // 0x1d5f7c: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
label_1d5f80:
    if (ctx->pc == 0x1D5F80u) {
        ctx->pc = 0x1D5F84u;
        goto label_1d5f84;
    }
    ctx->pc = 0x1D5F7Cu;
    {
        const bool branch_taken_0x1d5f7c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d5f7c) {
            ctx->pc = 0x1D5FB8u;
            goto label_1d5fb8;
        }
    }
    ctx->pc = 0x1D5F84u;
label_1d5f84:
    // 0x1d5f84: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1d5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1d5f88:
    // 0x1d5f88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d5f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d5f8c:
    // 0x1d5f8c: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d5f90:
    // 0x1d5f90: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d5f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d5f94:
    // 0x1d5f94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d5f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d5f98:
    // 0x1d5f98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d5f9c:
    // 0x1d5f9c: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1d5fa0:
    // 0x1d5fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d5fa4:
    // 0x1d5fa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5fa8:
    // 0x1d5fa8: 0xc066e26  jal         func_19B898
label_1d5fac:
    if (ctx->pc == 0x1D5FACu) {
        ctx->pc = 0x1D5FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FA8u;
        // 0x1d5fac: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FB0u;
        goto label_1d5fb0;
    }
    ctx->pc = 0x1D5FA8u;
    SET_GPR_U32(ctx, 31, 0x1D5FB0u);
    ctx->pc = 0x1D5FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FA8u;
    // 0x1d5fac: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1D5FA8u, 0x1D5FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FB0u;
label_1d5fb0:
    // 0x1d5fb0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d5fb4:
    if (ctx->pc == 0x1D5FB4u) {
        ctx->pc = 0x1D5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FB0u;
        // 0x1d5fb4: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FB8u;
        goto label_1d5fb8;
    }
    ctx->pc = 0x1D5FB0u;
    {
        const bool branch_taken_0x1d5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FB0u;
        // 0x1d5fb4: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fb0) {
            ctx->pc = 0x1D5FECu;
            goto label_1d5fec;
        }
    }
    ctx->pc = 0x1D5FB8u;
label_1d5fb8:
    // 0x1d5fb8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1d5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1d5fbc:
    // 0x1d5fbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d5fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d5fc0:
    // 0x1d5fc0: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d5fc4:
    // 0x1d5fc4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d5fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d5fc8:
    // 0x1d5fc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d5fcc:
    // 0x1d5fcc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d5fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d5fd0:
    // 0x1d5fd0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d5fd4:
    // 0x1d5fd4: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1d5fd8:
    // 0x1d5fd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d5fdc:
    // 0x1d5fdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d5fe0:
    // 0x1d5fe0: 0xc066e26  jal         func_19B898
label_1d5fe4:
    if (ctx->pc == 0x1D5FE4u) {
        ctx->pc = 0x1D5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FE0u;
        // 0x1d5fe4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5FE8u;
        goto label_1d5fe8;
    }
    ctx->pc = 0x1D5FE0u;
    SET_GPR_U32(ctx, 31, 0x1D5FE8u);
    ctx->pc = 0x1D5FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FE0u;
    // 0x1d5fe4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1D5FE0u, 0x1D5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FE8u;
label_1d5fe8:
    // 0x1d5fe8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d5fec:
    // 0x1d5fec: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1d5ff0:
    // 0x1d5ff0: 0x8042021f  lb          $v0, 0x21F($v0)
    ctx->pc = 0x1d5ff0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 543)));
label_1d5ff4:
    // 0x1d5ff4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1d5ff8:
    if (ctx->pc == 0x1D5FF8u) {
        ctx->pc = 0x1D5FFCu;
        goto label_1d5ffc;
    }
    ctx->pc = 0x1D5FF4u;
    {
        const bool branch_taken_0x1d5ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ff4) {
            ctx->pc = 0x1D601Cu;
            goto label_1d601c;
        }
    }
    ctx->pc = 0x1D5FFCu;
label_1d5ffc:
    // 0x1d5ffc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d6000:
    // 0x1d6000: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x1d6000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1d6004:
    // 0x1d6004: 0xc063348  jal         func_18CD20
label_1d6008:
    if (ctx->pc == 0x1D6008u) {
        ctx->pc = 0x1D6008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6004u;
        // 0x1d6008: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D600Cu;
        goto label_1d600c;
    }
    ctx->pc = 0x1D6004u;
    SET_GPR_U32(ctx, 31, 0x1D600Cu);
    ctx->pc = 0x1D6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6004u;
    // 0x1d6008: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD20u, 0x1D6004u, 0x1D600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D600Cu;
label_1d600c:
    // 0x1d600c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d600cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d6010:
    // 0x1d6010: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d6010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1d6014:
    // 0x1d6014: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1d6018:
    if (ctx->pc == 0x1D6018u) {
        ctx->pc = 0x1D6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6014u;
        // 0x1d6018: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D601Cu;
        goto label_1d601c;
    }
    ctx->pc = 0x1D6014u;
    {
        const bool branch_taken_0x1d6014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6014u;
        // 0x1d6018: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6014) {
            ctx->pc = 0x1D6190u;
            { ctx->pc = 0x1d6190; return; }
        }
    }
    ctx->pc = 0x1D601Cu;
label_1d601c:
    // 0x1d601c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d6020:
    // 0x1d6020: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x1d6020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1d6024:
    // 0x1d6024: 0xc063320  jal         func_18CC80
label_1d6028:
    if (ctx->pc == 0x1D6028u) {
        ctx->pc = 0x1D6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6024u;
        // 0x1d6028: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D602Cu;
        goto label_1d602c;
    }
    ctx->pc = 0x1D6024u;
    SET_GPR_U32(ctx, 31, 0x1D602Cu);
    ctx->pc = 0x1D6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6024u;
    // 0x1d6028: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC80u, 0x1D6024u, 0x1D602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D602Cu;
label_1d602c:
    // 0x1d602c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d602cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d6030:
    // 0x1d6030: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d6030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1d6034:
    // 0x1d6034: 0x10000056  b           . + 4 + (0x56 << 2)
label_1d6038:
    if (ctx->pc == 0x1D6038u) {
        ctx->pc = 0x1D6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6034u;
        // 0x1d6038: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D603Cu;
        goto label_1d603c;
    }
    ctx->pc = 0x1D6034u;
    {
        const bool branch_taken_0x1d6034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6034u;
        // 0x1d6038: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6034) {
            ctx->pc = 0x1D6190u;
            { ctx->pc = 0x1d6190; return; }
        }
    }
    ctx->pc = 0x1D603Cu;
label_1d603c:
    // 0x1d603c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d603cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d6040:
    // 0x1d6040: 0xc06336c  jal         func_18CDB0
label_1d6044:
    if (ctx->pc == 0x1D6044u) {
        ctx->pc = 0x1D6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6040u;
        // 0x1d6044: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6048u;
        goto label_1d6048;
    }
    ctx->pc = 0x1D6040u;
    SET_GPR_U32(ctx, 31, 0x1D6048u);
    ctx->pc = 0x1D6044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6040u;
    // 0x1d6044: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CDB0u, 0x1D6040u, 0x1D6048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6048u;
label_1d6048:
    // 0x1d6048: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d6048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d604c:
    // 0x1d604c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d604cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1d6050:
    // 0x1d6050: 0x1000004f  b           . + 4 + (0x4F << 2)
label_1d6054:
    if (ctx->pc == 0x1D6054u) {
        ctx->pc = 0x1D6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6050u;
        // 0x1d6054: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6058u;
        goto label_1d6058;
    }
    ctx->pc = 0x1D6050u;
    {
        const bool branch_taken_0x1d6050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6050u;
        // 0x1d6054: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6050) {
            ctx->pc = 0x1D6190u;
            { ctx->pc = 0x1d6190; return; }
        }
    }
    ctx->pc = 0x1D6058u;
label_1d6058:
    // 0x1d6058: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d605c:
    if (ctx->pc == 0x1D605Cu) {
        ctx->pc = 0x1D605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6058u;
        // 0x1d605c: 0x24850150  addiu       $a1, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6060u;
        goto label_1d6060;
    }
    ctx->pc = 0x1D6058u;
    {
        const bool branch_taken_0x1d6058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6058u;
        // 0x1d605c: 0x24850150  addiu       $a1, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6058) {
            ctx->pc = 0x1D6068u;
            goto label_1d6068;
        }
    }
    ctx->pc = 0x1D6060u;
label_1d6060:
    // 0x1d6060: 0xc066e26  jal         func_19B898
label_1d6064:
    if (ctx->pc == 0x1D6064u) {
        ctx->pc = 0x1D6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6060u;
        // 0x1d6064: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6068u;
        goto label_1d6068;
    }
    ctx->pc = 0x1D6060u;
    SET_GPR_U32(ctx, 31, 0x1D6068u);
    ctx->pc = 0x1D6064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6060u;
    // 0x1d6064: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1D6060u, 0x1D6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6068u;
label_1d6068:
    // 0x1d6068: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d6068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d606c:
    // 0x1d606c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1d606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1d6070:
    // 0x1d6070: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_1d6074:
    if (ctx->pc == 0x1D6074u) {
        ctx->pc = 0x1D6078u;
        goto label_1d6078;
    }
    ctx->pc = 0x1D6070u;
    {
        const bool branch_taken_0x1d6070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6070) {
            ctx->pc = 0x1D6158u;
            { ctx->pc = 0x1d6158; return; }
        }
    }
    ctx->pc = 0x1D6078u;
label_1d6078:
    // 0x1d6078: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1d6078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d607c:
    // 0x1d607c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1d607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_1d6080:
    // 0x1d6080: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d6080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6084:
    // 0x1d6084: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d6084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d6088:
    // 0x1d6088: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_1d608c:
    if (ctx->pc == 0x1D608Cu) {
        ctx->pc = 0x1D6090u;
        goto label_1d6090;
    }
    ctx->pc = 0x1D6088u;
    {
        const bool branch_taken_0x1d6088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6088) {
            ctx->pc = 0x1D6158u;
            { ctx->pc = 0x1d6158; return; }
        }
    }
    ctx->pc = 0x1D6090u;
label_1d6090:
    // 0x1d6090: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d6090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d6094:
    // 0x1d6094: 0x248201b0  addiu       $v0, $a0, 0x1B0
    ctx->pc = 0x1d6094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
label_1d6098:
    // 0x1d6098: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d609c:
    // 0x1d609c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d60a0:
    // 0x1d60a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d60a4:
    // 0x1d60a4: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x1d60a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
label_1d60a8:
    // 0x1d60a8: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
label_1d60ac:
    if (ctx->pc == 0x1D60ACu) {
        ctx->pc = 0x1D60B0u;
        goto label_1d60b0;
    }
    ctx->pc = 0x1D60A8u;
    {
        const bool branch_taken_0x1d60a8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d60a8) {
            ctx->pc = 0x1D60E4u;
            goto label_1d60e4;
        }
    }
    ctx->pc = 0x1D60B0u;
label_1d60b0:
    // 0x1d60b0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1d60b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1d60b4:
    // 0x1d60b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d60b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d60b8:
    // 0x1d60b8: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d60bc:
    // 0x1d60bc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d60bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d60c0:
    // 0x1d60c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d60c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d60c4:
    // 0x1d60c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d60c8:
    // 0x1d60c8: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1d60cc:
    // 0x1d60cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d60d0:
    // 0x1d60d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d60d4:
    // 0x1d60d4: 0xc066e26  jal         func_19B898
label_1d60d8:
    if (ctx->pc == 0x1D60D8u) {
        ctx->pc = 0x1D60D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60D4u;
        // 0x1d60d8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D60DCu;
        goto label_1d60dc;
    }
    ctx->pc = 0x1D60D4u;
    SET_GPR_U32(ctx, 31, 0x1D60DCu);
    ctx->pc = 0x1D60D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60D4u;
    // 0x1d60d8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1D60D4u, 0x1D60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60DCu;
label_1d60dc:
    // 0x1d60dc: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d60e0:
    if (ctx->pc == 0x1D60E0u) {
        ctx->pc = 0x1D60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60DCu;
        // 0x1d60e0: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D60E4u;
        goto label_1d60e4;
    }
    ctx->pc = 0x1D60DCu;
    {
        const bool branch_taken_0x1d60dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60DCu;
        // 0x1d60e0: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60dc) {
            ctx->pc = 0x1D6118u;
            goto label_1d6118;
        }
    }
    ctx->pc = 0x1D60E4u;
label_1d60e4:
    // 0x1d60e4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1d60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1d60e8:
    // 0x1d60e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d60e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d60ec:
    // 0x1d60ec: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d60f0:
    // 0x1d60f0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d60f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d60f4:
    // 0x1d60f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d60f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d60f8:
    // 0x1d60f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d60f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d60fc:
    // 0x1d60fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d60fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d6100:
    // 0x1d6100: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d6100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1d6104:
    // 0x1d6104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d6108:
    // 0x1d6108: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d610c:
    // 0x1d610c: 0xc066e26  jal         func_19B898
label_1d6110:
    if (ctx->pc == 0x1D6110u) {
        ctx->pc = 0x1D6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D610Cu;
        // 0x1d6110: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6114u;
        goto label_1d6114;
    }
    ctx->pc = 0x1D610Cu;
    SET_GPR_U32(ctx, 31, 0x1D6114u);
    ctx->pc = 0x1D6110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D610Cu;
    // 0x1d6110: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1D610Cu, 0x1D6114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6114u;
label_1d6114:
    // 0x1d6114: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d6118:
    // 0x1d6118: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1d6118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1d611c:
    // 0x1d611c: 0x8042021f  lb          $v0, 0x21F($v0)
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 543)));
    ctx->pc = 0x1d6120u;
    return;
}

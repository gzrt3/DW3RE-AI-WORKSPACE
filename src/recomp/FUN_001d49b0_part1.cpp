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


void FUN_001d49b0_part1(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d49b0u: goto label_1d49b0;
        case 0x1d49b4u: goto label_1d49b4;
        case 0x1d49b8u: goto label_1d49b8;
        case 0x1d49bcu: goto label_1d49bc;
        case 0x1d49c0u: goto label_1d49c0;
        case 0x1d49c4u: goto label_1d49c4;
        case 0x1d49c8u: goto label_1d49c8;
        case 0x1d49ccu: goto label_1d49cc;
        case 0x1d49d0u: goto label_1d49d0;
        case 0x1d49d4u: goto label_1d49d4;
        case 0x1d49d8u: goto label_1d49d8;
        case 0x1d49dcu: goto label_1d49dc;
        case 0x1d49e0u: goto label_1d49e0;
        case 0x1d49e4u: goto label_1d49e4;
        case 0x1d49e8u: goto label_1d49e8;
        case 0x1d49ecu: goto label_1d49ec;
        case 0x1d49f0u: goto label_1d49f0;
        case 0x1d49f4u: goto label_1d49f4;
        case 0x1d49f8u: goto label_1d49f8;
        case 0x1d49fcu: goto label_1d49fc;
        case 0x1d4a00u: goto label_1d4a00;
        case 0x1d4a04u: goto label_1d4a04;
        case 0x1d4a08u: goto label_1d4a08;
        case 0x1d4a0cu: goto label_1d4a0c;
        case 0x1d4a10u: goto label_1d4a10;
        case 0x1d4a14u: goto label_1d4a14;
        case 0x1d4a18u: goto label_1d4a18;
        case 0x1d4a1cu: goto label_1d4a1c;
        case 0x1d4a20u: goto label_1d4a20;
        case 0x1d4a24u: goto label_1d4a24;
        case 0x1d4a28u: goto label_1d4a28;
        case 0x1d4a2cu: goto label_1d4a2c;
        case 0x1d4a30u: goto label_1d4a30;
        case 0x1d4a34u: goto label_1d4a34;
        case 0x1d4a38u: goto label_1d4a38;
        case 0x1d4a3cu: goto label_1d4a3c;
        case 0x1d4a40u: goto label_1d4a40;
        case 0x1d4a44u: goto label_1d4a44;
        case 0x1d4a48u: goto label_1d4a48;
        case 0x1d4a4cu: goto label_1d4a4c;
        case 0x1d4a50u: goto label_1d4a50;
        case 0x1d4a54u: goto label_1d4a54;
        case 0x1d4a58u: goto label_1d4a58;
        case 0x1d4a5cu: goto label_1d4a5c;
        case 0x1d4a60u: goto label_1d4a60;
        case 0x1d4a64u: goto label_1d4a64;
        case 0x1d4a68u: goto label_1d4a68;
        case 0x1d4a6cu: goto label_1d4a6c;
        case 0x1d4a70u: goto label_1d4a70;
        case 0x1d4a74u: goto label_1d4a74;
        case 0x1d4a78u: goto label_1d4a78;
        case 0x1d4a7cu: goto label_1d4a7c;
        case 0x1d4a80u: goto label_1d4a80;
        case 0x1d4a84u: goto label_1d4a84;
        case 0x1d4a88u: goto label_1d4a88;
        case 0x1d4a8cu: goto label_1d4a8c;
        case 0x1d4a90u: goto label_1d4a90;
        case 0x1d4a94u: goto label_1d4a94;
        case 0x1d4a98u: goto label_1d4a98;
        case 0x1d4a9cu: goto label_1d4a9c;
        case 0x1d4aa0u: goto label_1d4aa0;
        case 0x1d4aa4u: goto label_1d4aa4;
        case 0x1d4aa8u: goto label_1d4aa8;
        case 0x1d4aacu: goto label_1d4aac;
        case 0x1d4ab0u: goto label_1d4ab0;
        case 0x1d4ab4u: goto label_1d4ab4;
        case 0x1d4ab8u: goto label_1d4ab8;
        case 0x1d4abcu: goto label_1d4abc;
        case 0x1d4ac0u: goto label_1d4ac0;
        case 0x1d4ac4u: goto label_1d4ac4;
        case 0x1d4ac8u: goto label_1d4ac8;
        case 0x1d4accu: goto label_1d4acc;
        case 0x1d4ad0u: goto label_1d4ad0;
        case 0x1d4ad4u: goto label_1d4ad4;
        case 0x1d4ad8u: goto label_1d4ad8;
        case 0x1d4adcu: goto label_1d4adc;
        case 0x1d4ae0u: goto label_1d4ae0;
        case 0x1d4ae4u: goto label_1d4ae4;
        case 0x1d4ae8u: goto label_1d4ae8;
        case 0x1d4aecu: goto label_1d4aec;
        case 0x1d4af0u: goto label_1d4af0;
        case 0x1d4af4u: goto label_1d4af4;
        case 0x1d4af8u: goto label_1d4af8;
        case 0x1d4afcu: goto label_1d4afc;
        case 0x1d4b00u: goto label_1d4b00;
        case 0x1d4b04u: goto label_1d4b04;
        case 0x1d4b08u: goto label_1d4b08;
        case 0x1d4b0cu: goto label_1d4b0c;
        case 0x1d4b10u: goto label_1d4b10;
        case 0x1d4b14u: goto label_1d4b14;
        case 0x1d4b18u: goto label_1d4b18;
        case 0x1d4b1cu: goto label_1d4b1c;
        case 0x1d4b20u: goto label_1d4b20;
        case 0x1d4b24u: goto label_1d4b24;
        case 0x1d4b28u: goto label_1d4b28;
        case 0x1d4b2cu: goto label_1d4b2c;
        case 0x1d4b30u: goto label_1d4b30;
        case 0x1d4b34u: goto label_1d4b34;
        case 0x1d4b38u: goto label_1d4b38;
        case 0x1d4b3cu: goto label_1d4b3c;
        case 0x1d4b40u: goto label_1d4b40;
        case 0x1d4b44u: goto label_1d4b44;
        case 0x1d4b48u: goto label_1d4b48;
        case 0x1d4b4cu: goto label_1d4b4c;
        case 0x1d4b50u: goto label_1d4b50;
        case 0x1d4b54u: goto label_1d4b54;
        case 0x1d4b58u: goto label_1d4b58;
        case 0x1d4b5cu: goto label_1d4b5c;
        case 0x1d4b60u: goto label_1d4b60;
        case 0x1d4b64u: goto label_1d4b64;
        case 0x1d4b68u: goto label_1d4b68;
        case 0x1d4b6cu: goto label_1d4b6c;
        case 0x1d4b70u: goto label_1d4b70;
        case 0x1d4b74u: goto label_1d4b74;
        case 0x1d4b78u: goto label_1d4b78;
        case 0x1d4b7cu: goto label_1d4b7c;
        case 0x1d4b80u: goto label_1d4b80;
        case 0x1d4b84u: goto label_1d4b84;
        case 0x1d4b88u: goto label_1d4b88;
        case 0x1d4b8cu: goto label_1d4b8c;
        case 0x1d4b90u: goto label_1d4b90;
        case 0x1d4b94u: goto label_1d4b94;
        case 0x1d4b98u: goto label_1d4b98;
        case 0x1d4b9cu: goto label_1d4b9c;
        case 0x1d4ba0u: goto label_1d4ba0;
        case 0x1d4ba4u: goto label_1d4ba4;
        case 0x1d4ba8u: goto label_1d4ba8;
        case 0x1d4bacu: goto label_1d4bac;
        case 0x1d4bb0u: goto label_1d4bb0;
        case 0x1d4bb4u: goto label_1d4bb4;
        case 0x1d4bb8u: goto label_1d4bb8;
        case 0x1d4bbcu: goto label_1d4bbc;
        case 0x1d4bc0u: goto label_1d4bc0;
        case 0x1d4bc4u: goto label_1d4bc4;
        case 0x1d4bc8u: goto label_1d4bc8;
        case 0x1d4bccu: goto label_1d4bcc;
        case 0x1d4bd0u: goto label_1d4bd0;
        case 0x1d4bd4u: goto label_1d4bd4;
        case 0x1d4bd8u: goto label_1d4bd8;
        case 0x1d4bdcu: goto label_1d4bdc;
        case 0x1d4be0u: goto label_1d4be0;
        case 0x1d4be4u: goto label_1d4be4;
        case 0x1d4be8u: goto label_1d4be8;
        case 0x1d4becu: goto label_1d4bec;
        case 0x1d4bf0u: goto label_1d4bf0;
        case 0x1d4bf4u: goto label_1d4bf4;
        case 0x1d4bf8u: goto label_1d4bf8;
        case 0x1d4bfcu: goto label_1d4bfc;
        case 0x1d4c00u: goto label_1d4c00;
        case 0x1d4c04u: goto label_1d4c04;
        case 0x1d4c08u: goto label_1d4c08;
        case 0x1d4c0cu: goto label_1d4c0c;
        case 0x1d4c10u: goto label_1d4c10;
        case 0x1d4c14u: goto label_1d4c14;
        case 0x1d4c18u: goto label_1d4c18;
        case 0x1d4c1cu: goto label_1d4c1c;
        case 0x1d4c20u: goto label_1d4c20;
        case 0x1d4c24u: goto label_1d4c24;
        case 0x1d4c28u: goto label_1d4c28;
        case 0x1d4c2cu: goto label_1d4c2c;
        case 0x1d4c30u: goto label_1d4c30;
        case 0x1d4c34u: goto label_1d4c34;
        case 0x1d4c38u: goto label_1d4c38;
        case 0x1d4c3cu: goto label_1d4c3c;
        case 0x1d4c40u: goto label_1d4c40;
        case 0x1d4c44u: goto label_1d4c44;
        case 0x1d4c48u: goto label_1d4c48;
        case 0x1d4c4cu: goto label_1d4c4c;
        case 0x1d4c50u: goto label_1d4c50;
        case 0x1d4c54u: goto label_1d4c54;
        case 0x1d4c58u: goto label_1d4c58;
        case 0x1d4c5cu: goto label_1d4c5c;
        case 0x1d4c60u: goto label_1d4c60;
        case 0x1d4c64u: goto label_1d4c64;
        case 0x1d4c68u: goto label_1d4c68;
        case 0x1d4c6cu: goto label_1d4c6c;
        case 0x1d4c70u: goto label_1d4c70;
        case 0x1d4c74u: goto label_1d4c74;
        case 0x1d4c78u: goto label_1d4c78;
        case 0x1d4c7cu: goto label_1d4c7c;
        case 0x1d4c80u: goto label_1d4c80;
        case 0x1d4c84u: goto label_1d4c84;
        case 0x1d4c88u: goto label_1d4c88;
        case 0x1d4c8cu: goto label_1d4c8c;
        case 0x1d4c90u: goto label_1d4c90;
        case 0x1d4c94u: goto label_1d4c94;
        case 0x1d4c98u: goto label_1d4c98;
        case 0x1d4c9cu: goto label_1d4c9c;
        case 0x1d4ca0u: goto label_1d4ca0;
        case 0x1d4ca4u: goto label_1d4ca4;
        case 0x1d4ca8u: goto label_1d4ca8;
        case 0x1d4cacu: goto label_1d4cac;
        case 0x1d4cb0u: goto label_1d4cb0;
        case 0x1d4cb4u: goto label_1d4cb4;
        case 0x1d4cb8u: goto label_1d4cb8;
        case 0x1d4cbcu: goto label_1d4cbc;
        case 0x1d4cc0u: goto label_1d4cc0;
        case 0x1d4cc4u: goto label_1d4cc4;
        case 0x1d4cc8u: goto label_1d4cc8;
        case 0x1d4cccu: goto label_1d4ccc;
        case 0x1d4cd0u: goto label_1d4cd0;
        case 0x1d4cd4u: goto label_1d4cd4;
        case 0x1d4cd8u: goto label_1d4cd8;
        case 0x1d4cdcu: goto label_1d4cdc;
        case 0x1d4ce0u: goto label_1d4ce0;
        case 0x1d4ce4u: goto label_1d4ce4;
        case 0x1d4ce8u: goto label_1d4ce8;
        case 0x1d4cecu: goto label_1d4cec;
        case 0x1d4cf0u: goto label_1d4cf0;
        case 0x1d4cf4u: goto label_1d4cf4;
        case 0x1d4cf8u: goto label_1d4cf8;
        case 0x1d4cfcu: goto label_1d4cfc;
        case 0x1d4d00u: goto label_1d4d00;
        case 0x1d4d04u: goto label_1d4d04;
        case 0x1d4d08u: goto label_1d4d08;
        case 0x1d4d0cu: goto label_1d4d0c;
        case 0x1d4d10u: goto label_1d4d10;
        case 0x1d4d14u: goto label_1d4d14;
        case 0x1d4d18u: goto label_1d4d18;
        case 0x1d4d1cu: goto label_1d4d1c;
        case 0x1d4d20u: goto label_1d4d20;
        case 0x1d4d24u: goto label_1d4d24;
        case 0x1d4d28u: goto label_1d4d28;
        case 0x1d4d2cu: goto label_1d4d2c;
        case 0x1d4d30u: goto label_1d4d30;
        case 0x1d4d34u: goto label_1d4d34;
        case 0x1d4d38u: goto label_1d4d38;
        case 0x1d4d3cu: goto label_1d4d3c;
        case 0x1d4d40u: goto label_1d4d40;
        case 0x1d4d44u: goto label_1d4d44;
        case 0x1d4d48u: goto label_1d4d48;
        case 0x1d4d4cu: goto label_1d4d4c;
        case 0x1d4d50u: goto label_1d4d50;
        case 0x1d4d54u: goto label_1d4d54;
        case 0x1d4d58u: goto label_1d4d58;
        case 0x1d4d5cu: goto label_1d4d5c;
        case 0x1d4d60u: goto label_1d4d60;
        case 0x1d4d64u: goto label_1d4d64;
        case 0x1d4d68u: goto label_1d4d68;
        case 0x1d4d6cu: goto label_1d4d6c;
        case 0x1d4d70u: goto label_1d4d70;
        case 0x1d4d74u: goto label_1d4d74;
        case 0x1d4d78u: goto label_1d4d78;
        case 0x1d4d7cu: goto label_1d4d7c;
        case 0x1d4d80u: goto label_1d4d80;
        case 0x1d4d84u: goto label_1d4d84;
        case 0x1d4d88u: goto label_1d4d88;
        case 0x1d4d8cu: goto label_1d4d8c;
        case 0x1d4d90u: goto label_1d4d90;
        case 0x1d4d94u: goto label_1d4d94;
        case 0x1d4d98u: goto label_1d4d98;
        case 0x1d4d9cu: goto label_1d4d9c;
        case 0x1d4da0u: goto label_1d4da0;
        case 0x1d4da4u: goto label_1d4da4;
        case 0x1d4da8u: goto label_1d4da8;
        case 0x1d4dacu: goto label_1d4dac;
        case 0x1d4db0u: goto label_1d4db0;
        case 0x1d4db4u: goto label_1d4db4;
        case 0x1d4db8u: goto label_1d4db8;
        case 0x1d4dbcu: goto label_1d4dbc;
        case 0x1d4dc0u: goto label_1d4dc0;
        case 0x1d4dc4u: goto label_1d4dc4;
        case 0x1d4dc8u: goto label_1d4dc8;
        case 0x1d4dccu: goto label_1d4dcc;
        case 0x1d4dd0u: goto label_1d4dd0;
        case 0x1d4dd4u: goto label_1d4dd4;
        case 0x1d4dd8u: goto label_1d4dd8;
        case 0x1d4ddcu: goto label_1d4ddc;
        case 0x1d4de0u: goto label_1d4de0;
        case 0x1d4de4u: goto label_1d4de4;
        case 0x1d4de8u: goto label_1d4de8;
        case 0x1d4decu: goto label_1d4dec;
        case 0x1d4df0u: goto label_1d4df0;
        case 0x1d4df4u: goto label_1d4df4;
        case 0x1d4df8u: goto label_1d4df8;
        case 0x1d4dfcu: goto label_1d4dfc;
        case 0x1d4e00u: goto label_1d4e00;
        case 0x1d4e04u: goto label_1d4e04;
        case 0x1d4e08u: goto label_1d4e08;
        case 0x1d4e0cu: goto label_1d4e0c;
        case 0x1d4e10u: goto label_1d4e10;
        case 0x1d4e14u: goto label_1d4e14;
        case 0x1d4e18u: goto label_1d4e18;
        case 0x1d4e1cu: goto label_1d4e1c;
        case 0x1d4e20u: goto label_1d4e20;
        case 0x1d4e24u: goto label_1d4e24;
        case 0x1d4e28u: goto label_1d4e28;
        case 0x1d4e2cu: goto label_1d4e2c;
        case 0x1d4e30u: goto label_1d4e30;
        case 0x1d4e34u: goto label_1d4e34;
        case 0x1d4e38u: goto label_1d4e38;
        case 0x1d4e3cu: goto label_1d4e3c;
        case 0x1d4e40u: goto label_1d4e40;
        case 0x1d4e44u: goto label_1d4e44;
        case 0x1d4e48u: goto label_1d4e48;
        case 0x1d4e4cu: goto label_1d4e4c;
        case 0x1d4e50u: goto label_1d4e50;
        case 0x1d4e54u: goto label_1d4e54;
        case 0x1d4e58u: goto label_1d4e58;
        case 0x1d4e5cu: goto label_1d4e5c;
        case 0x1d4e60u: goto label_1d4e60;
        case 0x1d4e64u: goto label_1d4e64;
        case 0x1d4e68u: goto label_1d4e68;
        case 0x1d4e6cu: goto label_1d4e6c;
        case 0x1d4e70u: goto label_1d4e70;
        case 0x1d4e74u: goto label_1d4e74;
        case 0x1d4e78u: goto label_1d4e78;
        case 0x1d4e7cu: goto label_1d4e7c;
        case 0x1d4e80u: goto label_1d4e80;
        case 0x1d4e84u: goto label_1d4e84;
        case 0x1d4e88u: goto label_1d4e88;
        case 0x1d4e8cu: goto label_1d4e8c;
        case 0x1d4e90u: goto label_1d4e90;
        case 0x1d4e94u: goto label_1d4e94;
        case 0x1d4e98u: goto label_1d4e98;
        case 0x1d4e9cu: goto label_1d4e9c;
        case 0x1d4ea0u: goto label_1d4ea0;
        case 0x1d4ea4u: goto label_1d4ea4;
        case 0x1d4ea8u: goto label_1d4ea8;
        case 0x1d4eacu: goto label_1d4eac;
        case 0x1d4eb0u: goto label_1d4eb0;
        case 0x1d4eb4u: goto label_1d4eb4;
        case 0x1d4eb8u: goto label_1d4eb8;
        case 0x1d4ebcu: goto label_1d4ebc;
        case 0x1d4ec0u: goto label_1d4ec0;
        case 0x1d4ec4u: goto label_1d4ec4;
        case 0x1d4ec8u: goto label_1d4ec8;
        case 0x1d4eccu: goto label_1d4ecc;
        case 0x1d4ed0u: goto label_1d4ed0;
        case 0x1d4ed4u: goto label_1d4ed4;
        case 0x1d4ed8u: goto label_1d4ed8;
        case 0x1d4edcu: goto label_1d4edc;
        case 0x1d4ee0u: goto label_1d4ee0;
        case 0x1d4ee4u: goto label_1d4ee4;
        case 0x1d4ee8u: goto label_1d4ee8;
        case 0x1d4eecu: goto label_1d4eec;
        case 0x1d4ef0u: goto label_1d4ef0;
        case 0x1d4ef4u: goto label_1d4ef4;
        case 0x1d4ef8u: goto label_1d4ef8;
        case 0x1d4efcu: goto label_1d4efc;
        case 0x1d4f00u: goto label_1d4f00;
        case 0x1d4f04u: goto label_1d4f04;
        case 0x1d4f08u: goto label_1d4f08;
        case 0x1d4f0cu: goto label_1d4f0c;
        case 0x1d4f10u: goto label_1d4f10;
        case 0x1d4f14u: goto label_1d4f14;
        case 0x1d4f18u: goto label_1d4f18;
        case 0x1d4f1cu: goto label_1d4f1c;
        case 0x1d4f20u: goto label_1d4f20;
        case 0x1d4f24u: goto label_1d4f24;
        case 0x1d4f28u: goto label_1d4f28;
        case 0x1d4f2cu: goto label_1d4f2c;
        case 0x1d4f30u: goto label_1d4f30;
        case 0x1d4f34u: goto label_1d4f34;
        case 0x1d4f38u: goto label_1d4f38;
        case 0x1d4f3cu: goto label_1d4f3c;
        case 0x1d4f40u: goto label_1d4f40;
        case 0x1d4f44u: goto label_1d4f44;
        case 0x1d4f48u: goto label_1d4f48;
        case 0x1d4f4cu: goto label_1d4f4c;
        case 0x1d4f50u: goto label_1d4f50;
        case 0x1d4f54u: goto label_1d4f54;
        case 0x1d4f58u: goto label_1d4f58;
        case 0x1d4f5cu: goto label_1d4f5c;
        case 0x1d4f60u: goto label_1d4f60;
        case 0x1d4f64u: goto label_1d4f64;
        case 0x1d4f68u: goto label_1d4f68;
        case 0x1d4f6cu: goto label_1d4f6c;
        case 0x1d4f70u: goto label_1d4f70;
        case 0x1d4f74u: goto label_1d4f74;
        case 0x1d4f78u: goto label_1d4f78;
        case 0x1d4f7cu: goto label_1d4f7c;
        case 0x1d4f80u: goto label_1d4f80;
        case 0x1d4f84u: goto label_1d4f84;
        case 0x1d4f88u: goto label_1d4f88;
        case 0x1d4f8cu: goto label_1d4f8c;
        case 0x1d4f90u: goto label_1d4f90;
        case 0x1d4f94u: goto label_1d4f94;
        case 0x1d4f98u: goto label_1d4f98;
        case 0x1d4f9cu: goto label_1d4f9c;
        case 0x1d4fa0u: goto label_1d4fa0;
        case 0x1d4fa4u: goto label_1d4fa4;
        case 0x1d4fa8u: goto label_1d4fa8;
        case 0x1d4facu: goto label_1d4fac;
        case 0x1d4fb0u: goto label_1d4fb0;
        case 0x1d4fb4u: goto label_1d4fb4;
        case 0x1d4fb8u: goto label_1d4fb8;
        case 0x1d4fbcu: goto label_1d4fbc;
        case 0x1d4fc0u: goto label_1d4fc0;
        case 0x1d4fc4u: goto label_1d4fc4;
        case 0x1d4fc8u: goto label_1d4fc8;
        case 0x1d4fccu: goto label_1d4fcc;
        case 0x1d4fd0u: goto label_1d4fd0;
        case 0x1d4fd4u: goto label_1d4fd4;
        case 0x1d4fd8u: goto label_1d4fd8;
        case 0x1d4fdcu: goto label_1d4fdc;
        case 0x1d4fe0u: goto label_1d4fe0;
        case 0x1d4fe4u: goto label_1d4fe4;
        case 0x1d4fe8u: goto label_1d4fe8;
        case 0x1d4fecu: goto label_1d4fec;
        case 0x1d4ff0u: goto label_1d4ff0;
        case 0x1d4ff4u: goto label_1d4ff4;
        case 0x1d4ff8u: goto label_1d4ff8;
        case 0x1d4ffcu: goto label_1d4ffc;
        case 0x1d5000u: goto label_1d5000;
        case 0x1d5004u: goto label_1d5004;
        case 0x1d5008u: goto label_1d5008;
        case 0x1d500cu: goto label_1d500c;
        case 0x1d5010u: goto label_1d5010;
        case 0x1d5014u: goto label_1d5014;
        case 0x1d5018u: goto label_1d5018;
        case 0x1d501cu: goto label_1d501c;
        case 0x1d5020u: goto label_1d5020;
        case 0x1d5024u: goto label_1d5024;
        case 0x1d5028u: goto label_1d5028;
        case 0x1d502cu: goto label_1d502c;
        case 0x1d5030u: goto label_1d5030;
        case 0x1d5034u: goto label_1d5034;
        case 0x1d5038u: goto label_1d5038;
        case 0x1d503cu: goto label_1d503c;
        case 0x1d5040u: goto label_1d5040;
        case 0x1d5044u: goto label_1d5044;
        case 0x1d5048u: goto label_1d5048;
        case 0x1d504cu: goto label_1d504c;
        case 0x1d5050u: goto label_1d5050;
        case 0x1d5054u: goto label_1d5054;
        case 0x1d5058u: goto label_1d5058;
        case 0x1d505cu: goto label_1d505c;
        case 0x1d5060u: goto label_1d5060;
        case 0x1d5064u: goto label_1d5064;
        case 0x1d5068u: goto label_1d5068;
        case 0x1d506cu: goto label_1d506c;
        case 0x1d5070u: goto label_1d5070;
        case 0x1d5074u: goto label_1d5074;
        case 0x1d5078u: goto label_1d5078;
        case 0x1d507cu: goto label_1d507c;
        case 0x1d5080u: goto label_1d5080;
        case 0x1d5084u: goto label_1d5084;
        case 0x1d5088u: goto label_1d5088;
        case 0x1d508cu: goto label_1d508c;
        case 0x1d5090u: goto label_1d5090;
        case 0x1d5094u: goto label_1d5094;
        case 0x1d5098u: goto label_1d5098;
        case 0x1d509cu: goto label_1d509c;
        case 0x1d50a0u: goto label_1d50a0;
        case 0x1d50a4u: goto label_1d50a4;
        case 0x1d50a8u: goto label_1d50a8;
        case 0x1d50acu: goto label_1d50ac;
        case 0x1d50b0u: goto label_1d50b0;
        case 0x1d50b4u: goto label_1d50b4;
        case 0x1d50b8u: goto label_1d50b8;
        case 0x1d50bcu: goto label_1d50bc;
        case 0x1d50c0u: goto label_1d50c0;
        case 0x1d50c4u: goto label_1d50c4;
        case 0x1d50c8u: goto label_1d50c8;
        case 0x1d50ccu: goto label_1d50cc;
        case 0x1d50d0u: goto label_1d50d0;
        case 0x1d50d4u: goto label_1d50d4;
        case 0x1d50d8u: goto label_1d50d8;
        case 0x1d50dcu: goto label_1d50dc;
        case 0x1d50e0u: goto label_1d50e0;
        case 0x1d50e4u: goto label_1d50e4;
        case 0x1d50e8u: goto label_1d50e8;
        case 0x1d50ecu: goto label_1d50ec;
        case 0x1d50f0u: goto label_1d50f0;
        case 0x1d50f4u: goto label_1d50f4;
        case 0x1d50f8u: goto label_1d50f8;
        case 0x1d50fcu: goto label_1d50fc;
        case 0x1d5100u: goto label_1d5100;
        case 0x1d5104u: goto label_1d5104;
        case 0x1d5108u: goto label_1d5108;
        case 0x1d510cu: goto label_1d510c;
        case 0x1d5110u: goto label_1d5110;
        case 0x1d5114u: goto label_1d5114;
        case 0x1d5118u: goto label_1d5118;
        case 0x1d511cu: goto label_1d511c;
        case 0x1d5120u: goto label_1d5120;
        case 0x1d5124u: goto label_1d5124;
        case 0x1d5128u: goto label_1d5128;
        case 0x1d512cu: goto label_1d512c;
        case 0x1d5130u: goto label_1d5130;
        case 0x1d5134u: goto label_1d5134;
        case 0x1d5138u: goto label_1d5138;
        case 0x1d513cu: goto label_1d513c;
        case 0x1d5140u: goto label_1d5140;
        case 0x1d5144u: goto label_1d5144;
        case 0x1d5148u: goto label_1d5148;
        case 0x1d514cu: goto label_1d514c;
        case 0x1d5150u: goto label_1d5150;
        case 0x1d5154u: goto label_1d5154;
        case 0x1d5158u: goto label_1d5158;
        case 0x1d515cu: goto label_1d515c;
        case 0x1d5160u: goto label_1d5160;
        case 0x1d5164u: goto label_1d5164;
        case 0x1d5168u: goto label_1d5168;
        case 0x1d516cu: goto label_1d516c;
        case 0x1d5170u: goto label_1d5170;
        case 0x1d5174u: goto label_1d5174;
        case 0x1d5178u: goto label_1d5178;
        case 0x1d517cu: goto label_1d517c;
        default: return;
    }


    ctx->pc = 0x1d49b0u;

label_1d49b0:
    // 0x1d49b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d49b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d49b4:
    // 0x1d49b4: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d49b8:
    // 0x1d49b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d49b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d49bc:
    // 0x1d49bc: 0x20c0  sll         $a0, $zero, 3
    ctx->pc = 0x1d49bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_1d49c0:
    // 0x1d49c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d49c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d49c4:
    // 0x1d49c4: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_1d49c8:
    // 0x1d49c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d49c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d49cc:
    // 0x1d49cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d49ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d49d0:
    // 0x1d49d0: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x1d49d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1d49d4:
    // 0x1d49d4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d49d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d49d8:
    // 0x1d49d8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d49dc:
    if (ctx->pc == 0x1D49DCu) {
        ctx->pc = 0x1D49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49D8u;
        // 0x1d49dc: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D49E0u;
        goto label_1d49e0;
    }
    ctx->pc = 0x1D49D8u;
    {
        const bool branch_taken_0x1d49d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49D8u;
        // 0x1d49dc: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49d8) {
            ctx->pc = 0x1D4A00u;
            goto label_1d4a00;
        }
    }
    ctx->pc = 0x1D49E0u;
label_1d49e0:
    // 0x1d49e0: 0x0  nop
    ctx->pc = 0x1d49e0u;
    // NOP
label_1d49e4:
    // 0x1d49e4: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x1d49e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_1d49e8:
    // 0x1d49e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d49ec:
    if (ctx->pc == 0x1D49ECu) {
        ctx->pc = 0x1D49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49E8u;
        // 0x1d49ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D49F0u;
        goto label_1d49f0;
    }
    ctx->pc = 0x1D49E8u;
    {
        const bool branch_taken_0x1d49e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D49ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D49E8u;
        // 0x1d49ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d49e8) {
            ctx->pc = 0x1D49F8u;
            goto label_1d49f8;
        }
    }
    ctx->pc = 0x1D49F0u;
label_1d49f0:
    // 0x1d49f0: 0xc0753bc  jal         func_1D4EF0
label_1d49f4:
    if (ctx->pc == 0x1D49F4u) {
        ctx->pc = 0x1D49F8u;
        goto label_1d49f8;
    }
    ctx->pc = 0x1D49F0u;
    SET_GPR_U32(ctx, 31, 0x1D49F8u);
    ctx->pc = 0x1D4EF0u;
    goto label_1d4ef0;
    ctx->pc = 0x1D49F8u;
label_1d49f8:
    // 0x1d49f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d49f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d49fc:
    // 0x1d49fc: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x1d49fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1d4a00:
    // 0x1d4a00: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d4a00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d4a04:
    // 0x1d4a04: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1d4a08:
    if (ctx->pc == 0x1D4A08u) {
        ctx->pc = 0x1D4A0Cu;
        goto label_1d4a0c;
    }
    ctx->pc = 0x1D4A04u;
    {
        const bool branch_taken_0x1d4a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a04) {
            ctx->pc = 0x1D49E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d49e0;
        }
    }
    ctx->pc = 0x1D4A0Cu;
label_1d4a0c:
    // 0x1d4a0c: 0x8f888590  lw          $t0, -0x7A70($gp)
    ctx->pc = 0x1d4a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d4a10:
    // 0x1d4a10: 0x31030400  andi        $v1, $t0, 0x400
    ctx->pc = 0x1d4a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1024);
label_1d4a14:
    // 0x1d4a14: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_1d4a18:
    if (ctx->pc == 0x1D4A18u) {
        ctx->pc = 0x1D4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A14u;
        // 0x1d4a18: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A1Cu;
        goto label_1d4a1c;
    }
    ctx->pc = 0x1D4A14u;
    {
        const bool branch_taken_0x1d4a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A14u;
        // 0x1d4a18: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a14) {
            ctx->pc = 0x1D4C68u;
            goto label_1d4c68;
        }
    }
    ctx->pc = 0x1D4A1Cu;
label_1d4a1c:
    // 0x1d4a1c: 0x240700ad  addiu       $a3, $zero, 0xAD
    ctx->pc = 0x1d4a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_1d4a20:
    // 0x1d4a20: 0x8c2403c4  lw          $a0, 0x3C4($at)
    ctx->pc = 0x1d4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 964)));
label_1d4a24:
    // 0x1d4a24: 0x8483003c  lh          $v1, 0x3C($a0)
    ctx->pc = 0x1d4a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_1d4a28:
    // 0x1d4a28: 0x1067008f  beq         $v1, $a3, . + 4 + (0x8F << 2)
label_1d4a2c:
    if (ctx->pc == 0x1D4A2Cu) {
        ctx->pc = 0x1D4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A28u;
        // 0x1d4a2c: 0x240600a9  addiu       $a2, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A30u;
        goto label_1d4a30;
    }
    ctx->pc = 0x1D4A28u;
    {
        const bool branch_taken_0x1d4a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A28u;
        // 0x1d4a2c: 0x240600a9  addiu       $a2, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a28) {
            ctx->pc = 0x1D4C68u;
            goto label_1d4c68;
        }
    }
    ctx->pc = 0x1D4A30u;
label_1d4a30:
    // 0x1d4a30: 0x1066008d  beq         $v1, $a2, . + 4 + (0x8D << 2)
label_1d4a34:
    if (ctx->pc == 0x1D4A34u) {
        ctx->pc = 0x1D4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A30u;
        // 0x1d4a34: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A38u;
        goto label_1d4a38;
    }
    ctx->pc = 0x1D4A30u;
    {
        const bool branch_taken_0x1d4a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A30u;
        // 0x1d4a34: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a30) {
            ctx->pc = 0x1D4C68u;
            goto label_1d4c68;
        }
    }
    ctx->pc = 0x1D4A38u;
label_1d4a38:
    // 0x1d4a38: 0x8c230434  lw          $v1, 0x434($at)
    ctx->pc = 0x1d4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1076)));
label_1d4a3c:
    // 0x1d4a3c: 0x8465003c  lh          $a1, 0x3C($v1)
    ctx->pc = 0x1d4a3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
label_1d4a40:
    // 0x1d4a40: 0x10a70089  beq         $a1, $a3, . + 4 + (0x89 << 2)
label_1d4a44:
    if (ctx->pc == 0x1D4A44u) {
        ctx->pc = 0x1D4A48u;
        goto label_1d4a48;
    }
    ctx->pc = 0x1D4A40u;
    {
        const bool branch_taken_0x1d4a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x1d4a40) {
            ctx->pc = 0x1D4C68u;
            goto label_1d4c68;
        }
    }
    ctx->pc = 0x1D4A48u;
label_1d4a48:
    // 0x1d4a48: 0x10a60087  beq         $a1, $a2, . + 4 + (0x87 << 2)
label_1d4a4c:
    if (ctx->pc == 0x1D4A4Cu) {
        ctx->pc = 0x1D4A50u;
        goto label_1d4a50;
    }
    ctx->pc = 0x1D4A48u;
    {
        const bool branch_taken_0x1d4a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d4a48) {
            ctx->pc = 0x1D4C68u;
            goto label_1d4c68;
        }
    }
    ctx->pc = 0x1D4A50u;
label_1d4a50:
    // 0x1d4a50: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1d4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_1d4a54:
    // 0x1d4a54: 0x34a51800  ori         $a1, $a1, 0x1800
    ctx->pc = 0x1d4a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6144);
label_1d4a58:
    // 0x1d4a58: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x1d4a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
label_1d4a5c:
    // 0x1d4a5c: 0x14a00082  bnez        $a1, . + 4 + (0x82 << 2)
label_1d4a60:
    if (ctx->pc == 0x1D4A60u) {
        ctx->pc = 0x1D4A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A5Cu;
        // 0x1d4a60: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A64u;
        goto label_1d4a64;
    }
    ctx->pc = 0x1D4A5Cu;
    {
        const bool branch_taken_0x1d4a5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A5Cu;
        // 0x1d4a60: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a5c) {
            ctx->pc = 0x1D4C68u;
            goto label_1d4c68;
        }
    }
    ctx->pc = 0x1D4A64u;
label_1d4a64:
    // 0x1d4a64: 0x8c2803c0  lw          $t0, 0x3C0($at)
    ctx->pc = 0x1d4a64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
label_1d4a68:
    // 0x1d4a68: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d4a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d4a6c:
    // 0x1d4a6c: 0x91060234  lbu         $a2, 0x234($t0)
    ctx->pc = 0x1d4a6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 564)));
label_1d4a70:
    // 0x1d4a70: 0x8c270430  lw          $a3, 0x430($at)
    ctx->pc = 0x1d4a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1072)));
label_1d4a74:
    // 0x1d4a74: 0x90e50234  lbu         $a1, 0x234($a3)
    ctx->pc = 0x1d4a74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 564)));
label_1d4a78:
    // 0x1d4a78: 0x14c5007b  bne         $a2, $a1, . + 4 + (0x7B << 2)
label_1d4a7c:
    if (ctx->pc == 0x1D4A7Cu) {
        ctx->pc = 0x1D4A80u;
        goto label_1d4a80;
    }
    ctx->pc = 0x1D4A78u;
    {
        const bool branch_taken_0x1d4a78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d4a78) {
            ctx->pc = 0x1D4C68u;
            goto label_1d4c68;
        }
    }
    ctx->pc = 0x1D4A80u;
label_1d4a80:
    // 0x1d4a80: 0x8d050024  lw          $a1, 0x24($t0)
    ctx->pc = 0x1d4a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_1d4a84:
    // 0x1d4a84: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x1d4a84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_1d4a88:
    // 0x1d4a88: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d4a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4a8c:
    // 0x1d4a8c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1d4a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_1d4a90:
    // 0x1d4a90: 0x14a00034  bnez        $a1, . + 4 + (0x34 << 2)
label_1d4a94:
    if (ctx->pc == 0x1D4A94u) {
        ctx->pc = 0x1D4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A90u;
        // 0x1d4a94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4A98u;
        goto label_1d4a98;
    }
    ctx->pc = 0x1D4A90u;
    {
        const bool branch_taken_0x1d4a90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A90u;
        // 0x1d4a94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a90) {
            ctx->pc = 0x1D4B64u;
            goto label_1d4b64;
        }
    }
    ctx->pc = 0x1D4A98u;
label_1d4a98:
    // 0x1d4a98: 0x8ce50024  lw          $a1, 0x24($a3)
    ctx->pc = 0x1d4a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1d4a9c:
    // 0x1d4a9c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d4a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4aa0:
    // 0x1d4aa0: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1d4aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_1d4aa4:
    // 0x1d4aa4: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
label_1d4aa8:
    if (ctx->pc == 0x1D4AA8u) {
        ctx->pc = 0x1D4AACu;
        goto label_1d4aac;
    }
    ctx->pc = 0x1D4AA4u;
    {
        const bool branch_taken_0x1d4aa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4aa4) {
            ctx->pc = 0x1D4B64u;
            goto label_1d4b64;
        }
    }
    ctx->pc = 0x1D4AACu;
label_1d4aac:
    // 0x1d4aac: 0x85060222  lh          $a2, 0x222($t0)
    ctx->pc = 0x1d4aacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 546)));
label_1d4ab0:
    // 0x1d4ab0: 0x85050252  lh          $a1, 0x252($t0)
    ctx->pc = 0x1d4ab0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 594)));
label_1d4ab4:
    // 0x1d4ab4: 0x14c5002b  bne         $a2, $a1, . + 4 + (0x2B << 2)
label_1d4ab8:
    if (ctx->pc == 0x1D4AB8u) {
        ctx->pc = 0x1D4ABCu;
        goto label_1d4abc;
    }
    ctx->pc = 0x1D4AB4u;
    {
        const bool branch_taken_0x1d4ab4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d4ab4) {
            ctx->pc = 0x1D4B64u;
            goto label_1d4b64;
        }
    }
    ctx->pc = 0x1D4ABCu;
label_1d4abc:
    // 0x1d4abc: 0x84e60222  lh          $a2, 0x222($a3)
    ctx->pc = 0x1d4abcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 546)));
label_1d4ac0:
    // 0x1d4ac0: 0x84e50252  lh          $a1, 0x252($a3)
    ctx->pc = 0x1d4ac0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 594)));
label_1d4ac4:
    // 0x1d4ac4: 0x14c50027  bne         $a2, $a1, . + 4 + (0x27 << 2)
label_1d4ac8:
    if (ctx->pc == 0x1D4AC8u) {
        ctx->pc = 0x1D4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AC4u;
        // 0x1d4ac8: 0x24660150  addiu       $a2, $v1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4ACCu;
        goto label_1d4acc;
    }
    ctx->pc = 0x1D4AC4u;
    {
        const bool branch_taken_0x1d4ac4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AC4u;
        // 0x1d4ac8: 0x24660150  addiu       $a2, $v1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ac4) {
            ctx->pc = 0x1D4B64u;
            goto label_1d4b64;
        }
    }
    ctx->pc = 0x1D4ACCu;
label_1d4acc:
    // 0x1d4acc: 0x24850150  addiu       $a1, $a0, 0x150
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
label_1d4ad0:
    // 0x1d4ad0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1d4ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4ad4:
    // 0x1d4ad4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1d4ad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1d4ad8:
    // 0x1d4ad8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1d4ad8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1d4adc:
    // 0x1d4adc: 0x4a0002ff  vnop
    ctx->pc = 0x1d4adcu;
    // NOP operation, no action needed for VU0
label_1d4ae0:
    // 0x1d4ae0: 0x4a0002ff  vnop
    ctx->pc = 0x1d4ae0u;
    // NOP operation, no action needed for VU0
label_1d4ae4:
    // 0x1d4ae4: 0x4a0002ff  vnop
    ctx->pc = 0x1d4ae4u;
    // NOP operation, no action needed for VU0
label_1d4ae8:
    // 0x1d4ae8: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1d4ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1d4aec:
    // 0x1d4aec: 0x4a0002ff  vnop
    ctx->pc = 0x1d4aecu;
    // NOP operation, no action needed for VU0
label_1d4af0:
    // 0x1d4af0: 0x4a0002ff  vnop
    ctx->pc = 0x1d4af0u;
    // NOP operation, no action needed for VU0
label_1d4af4:
    // 0x1d4af4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1d4af4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1d4af8:
    // 0x1d4af8: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1d4af8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1d4afc:
    // 0x1d4afc: 0x4a0002ff  vnop
    ctx->pc = 0x1d4afcu;
    // NOP operation, no action needed for VU0
label_1d4b00:
    // 0x1d4b00: 0x4a0002ff  vnop
    ctx->pc = 0x1d4b00u;
    // NOP operation, no action needed for VU0
label_1d4b04:
    // 0x1d4b04: 0x4a0002ff  vnop
    ctx->pc = 0x1d4b04u;
    // NOP operation, no action needed for VU0
label_1d4b08:
    // 0x1d4b08: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1d4b08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1d4b0c:
    // 0x1d4b0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d4b0cu;
    // VWAITQ (Q already resolved in this runtime)
label_1d4b10:
    // 0x1d4b10: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1d4b10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1d4b14:
    // 0x1d4b14: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1d4b14u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4b18:
    // 0x1d4b18: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x1d4b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
label_1d4b1c:
    // 0x1d4b1c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d4b1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4b20:
    // 0x1d4b20: 0x0  nop
    ctx->pc = 0x1d4b20u;
    // NOP
label_1d4b24:
    // 0x1d4b24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4b28:
    // 0x1d4b28: 0x0  nop
    ctx->pc = 0x1d4b28u;
    // NOP
label_1d4b2c:
    // 0x1d4b2c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1d4b30:
    if (ctx->pc == 0x1D4B30u) {
        ctx->pc = 0x1D4B34u;
        goto label_1d4b34;
    }
    ctx->pc = 0x1D4B2Cu;
    {
        const bool branch_taken_0x1d4b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4b2c) {
            ctx->pc = 0x1D4B64u;
            goto label_1d4b64;
        }
    }
    ctx->pc = 0x1D4B34u;
label_1d4b34:
    // 0x1d4b34: 0xc4810180  lwc1        $f1, 0x180($a0)
    ctx->pc = 0x1d4b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4b38:
    // 0x1d4b38: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1d4b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4b3c:
    // 0x1d4b3c: 0xc06d448  jal         func_1B5120
label_1d4b40:
    if (ctx->pc == 0x1D4B40u) {
        ctx->pc = 0x1D4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B3Cu;
        // 0x1d4b40: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B44u;
        goto label_1d4b44;
    }
    ctx->pc = 0x1D4B3Cu;
    SET_GPR_U32(ctx, 31, 0x1D4B44u);
    ctx->pc = 0x1D4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B3Cu;
    // 0x1d4b40: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1D4B3Cu, 0x1D4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B44u;
label_1d4b44:
    // 0x1d4b44: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1d4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_1d4b48:
    // 0x1d4b48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4b4c:
    // 0x1d4b4c: 0x0  nop
    ctx->pc = 0x1d4b4cu;
    // NOP
label_1d4b50:
    // 0x1d4b50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d4b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4b54:
    // 0x1d4b54: 0x0  nop
    ctx->pc = 0x1d4b54u;
    // NOP
label_1d4b58:
    // 0x1d4b58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d4b5c:
    if (ctx->pc == 0x1D4B5Cu) {
        ctx->pc = 0x1D4B60u;
        goto label_1d4b60;
    }
    ctx->pc = 0x1D4B58u;
    {
        const bool branch_taken_0x1d4b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4b58) {
            ctx->pc = 0x1D4B64u;
            goto label_1d4b64;
        }
    }
    ctx->pc = 0x1D4B60u;
label_1d4b60:
    // 0x1d4b60: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1d4b60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1d4b64:
    // 0x1d4b64: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d4b68:
    // 0x1d4b68: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1d4b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_1d4b6c:
    // 0x1d4b6c: 0x107000db  beq         $v1, $s0, . + 4 + (0xDB << 2)
label_1d4b70:
    if (ctx->pc == 0x1D4B70u) {
        ctx->pc = 0x1D4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B6Cu;
        // 0x1d4b70: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4B74u;
        goto label_1d4b74;
    }
    ctx->pc = 0x1D4B6Cu;
    {
        const bool branch_taken_0x1d4b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1D4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B6Cu;
        // 0x1d4b70: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b6c) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4B74u;
label_1d4b74:
    // 0x1d4b74: 0x8c2403c0  lw          $a0, 0x3C0($at)
    ctx->pc = 0x1d4b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
label_1d4b78:
    // 0x1d4b78: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1d4b78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1d4b7c:
    // 0x1d4b7c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_1d4b80:
    if (ctx->pc == 0x1D4B80u) {
        ctx->pc = 0x1D4B84u;
        goto label_1d4b84;
    }
    ctx->pc = 0x1D4B7Cu;
    {
        const bool branch_taken_0x1d4b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b7c) {
            ctx->pc = 0x1D4BD4u;
            goto label_1d4bd4;
        }
    }
    ctx->pc = 0x1D4B84u;
label_1d4b84:
    // 0x1d4b84: 0xc0439cc  jal         func_10E730
label_1d4b88:
    if (ctx->pc == 0x1D4B88u) {
        ctx->pc = 0x1D4B8Cu;
        goto label_1d4b8c;
    }
    ctx->pc = 0x1D4B84u;
    SET_GPR_U32(ctx, 31, 0x1D4B8Cu);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D4B84u, 0x1D4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B8Cu;
label_1d4b8c:
    // 0x1d4b8c: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d4b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d4b90:
    // 0x1d4b90: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d4b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d4b94:
    // 0x1d4b94: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d4b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4b98:
    // 0x1d4b98: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_1d4b9c:
    // 0x1d4b9c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d4ba0:
    // 0x1d4ba0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ba4:
    // 0x1d4ba4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d4ba8:
    // 0x1d4ba8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4bac:
    // 0x1d4bac: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d4bb0:
    if (ctx->pc == 0x1D4BB0u) {
        ctx->pc = 0x1D4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BACu;
        // 0x1d4bb0: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4BB4u;
        goto label_1d4bb4;
    }
    ctx->pc = 0x1D4BACu;
    {
        const bool branch_taken_0x1d4bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4BACu;
        // 0x1d4bb0: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4bac) {
            ctx->pc = 0x1D4BC4u;
            goto label_1d4bc4;
        }
    }
    ctx->pc = 0x1D4BB4u;
label_1d4bb4:
    // 0x1d4bb4: 0x0  nop
    ctx->pc = 0x1d4bb4u;
    // NOP
label_1d4bb8:
    // 0x1d4bb8: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1d4bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1d4bbc:
    // 0x1d4bbc: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1d4bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1d4bc0:
    // 0x1d4bc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d4bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d4bc4:
    // 0x1d4bc4: 0x0  nop
    ctx->pc = 0x1d4bc4u;
    // NOP
label_1d4bc8:
    // 0x1d4bc8: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1d4bc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d4bcc:
    // 0x1d4bcc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1d4bd0:
    if (ctx->pc == 0x1D4BD0u) {
        ctx->pc = 0x1D4BD4u;
        goto label_1d4bd4;
    }
    ctx->pc = 0x1D4BCCu;
    {
        const bool branch_taken_0x1d4bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4bcc) {
            ctx->pc = 0x1D4BB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4bb4;
        }
    }
    ctx->pc = 0x1D4BD4u;
label_1d4bd4:
    // 0x1d4bd4: 0x0  nop
    ctx->pc = 0x1d4bd4u;
    // NOP
label_1d4bd8:
    // 0x1d4bd8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d4bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d4bdc:
    // 0x1d4bdc: 0x8c240430  lw          $a0, 0x430($at)
    ctx->pc = 0x1d4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1072)));
label_1d4be0:
    // 0x1d4be0: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1d4be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1d4be4:
    // 0x1d4be4: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_1d4be8:
    if (ctx->pc == 0x1D4BE8u) {
        ctx->pc = 0x1D4BECu;
        goto label_1d4bec;
    }
    ctx->pc = 0x1D4BE4u;
    {
        const bool branch_taken_0x1d4be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4be4) {
            ctx->pc = 0x1D4C3Cu;
            goto label_1d4c3c;
        }
    }
    ctx->pc = 0x1D4BECu;
label_1d4bec:
    // 0x1d4bec: 0xc0439cc  jal         func_10E730
label_1d4bf0:
    if (ctx->pc == 0x1D4BF0u) {
        ctx->pc = 0x1D4BF4u;
        goto label_1d4bf4;
    }
    ctx->pc = 0x1D4BECu;
    SET_GPR_U32(ctx, 31, 0x1D4BF4u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D4BECu, 0x1D4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BF4u;
label_1d4bf4:
    // 0x1d4bf4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d4bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d4bf8:
    // 0x1d4bf8: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d4bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d4bfc:
    // 0x1d4bfc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d4bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4c00:
    // 0x1d4c00: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_1d4c04:
    // 0x1d4c04: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d4c08:
    // 0x1d4c08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c0c:
    // 0x1d4c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d4c10:
    // 0x1d4c10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d4c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4c14:
    // 0x1d4c14: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d4c18:
    if (ctx->pc == 0x1D4C18u) {
        ctx->pc = 0x1D4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C14u;
        // 0x1d4c18: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C1Cu;
        goto label_1d4c1c;
    }
    ctx->pc = 0x1D4C14u;
    {
        const bool branch_taken_0x1d4c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C14u;
        // 0x1d4c18: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c14) {
            ctx->pc = 0x1D4C2Cu;
            goto label_1d4c2c;
        }
    }
    ctx->pc = 0x1D4C1Cu;
label_1d4c1c:
    // 0x1d4c1c: 0x0  nop
    ctx->pc = 0x1d4c1cu;
    // NOP
label_1d4c20:
    // 0x1d4c20: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1d4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1d4c24:
    // 0x1d4c24: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1d4c24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1d4c28:
    // 0x1d4c28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d4c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d4c2c:
    // 0x1d4c2c: 0x0  nop
    ctx->pc = 0x1d4c2cu;
    // NOP
label_1d4c30:
    // 0x1d4c30: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1d4c30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d4c34:
    // 0x1d4c34: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1d4c38:
    if (ctx->pc == 0x1D4C38u) {
        ctx->pc = 0x1D4C3Cu;
        goto label_1d4c3c;
    }
    ctx->pc = 0x1D4C34u;
    {
        const bool branch_taken_0x1d4c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c34) {
            ctx->pc = 0x1D4C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4c1c;
        }
    }
    ctx->pc = 0x1D4C3Cu;
label_1d4c3c:
    // 0x1d4c3c: 0x0  nop
    ctx->pc = 0x1d4c3cu;
    // NOP
label_1d4c40:
    // 0x1d4c40: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1d4c44:
    if (ctx->pc == 0x1D4C44u) {
        ctx->pc = 0x1D4C48u;
        goto label_1d4c48;
    }
    ctx->pc = 0x1D4C40u;
    {
        const bool branch_taken_0x1d4c40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c40) {
            ctx->pc = 0x1D4C58u;
            goto label_1d4c58;
        }
    }
    ctx->pc = 0x1D4C48u;
label_1d4c48:
    // 0x1d4c48: 0x8f838588  lw          $v1, -0x7A78($gp)
    ctx->pc = 0x1d4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
label_1d4c4c:
    // 0x1d4c4c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1d4c50:
    // 0x1d4c50: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_1d4c54:
    if (ctx->pc == 0x1D4C54u) {
        ctx->pc = 0x1D4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C50u;
        // 0x1d4c54: 0xaf838588  sw          $v1, -0x7A78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C58u;
        goto label_1d4c58;
    }
    ctx->pc = 0x1D4C50u;
    {
        const bool branch_taken_0x1d4c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C50u;
        // 0x1d4c54: 0xaf838588  sw          $v1, -0x7A78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c50) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4C58u;
label_1d4c58:
    // 0x1d4c58: 0x8f83858c  lw          $v1, -0x7A74($gp)
    ctx->pc = 0x1d4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
label_1d4c5c:
    // 0x1d4c5c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1d4c60:
    // 0x1d4c60: 0x1000009e  b           . + 4 + (0x9E << 2)
label_1d4c64:
    if (ctx->pc == 0x1D4C64u) {
        ctx->pc = 0x1D4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C60u;
        // 0x1d4c64: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C68u;
        goto label_1d4c68;
    }
    ctx->pc = 0x1D4C60u;
    {
        const bool branch_taken_0x1d4c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C60u;
        // 0x1d4c64: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c60) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4C68u;
label_1d4c68:
    // 0x1d4c68: 0x8f878590  lw          $a3, -0x7A70($gp)
    ctx->pc = 0x1d4c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d4c6c:
    // 0x1d4c6c: 0x30e30400  andi        $v1, $a3, 0x400
    ctx->pc = 0x1d4c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
label_1d4c70:
    // 0x1d4c70: 0x1460009a  bnez        $v1, . + 4 + (0x9A << 2)
label_1d4c74:
    if (ctx->pc == 0x1D4C74u) {
        ctx->pc = 0x1D4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C70u;
        // 0x1d4c74: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C78u;
        goto label_1d4c78;
    }
    ctx->pc = 0x1D4C70u;
    {
        const bool branch_taken_0x1d4c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C70u;
        // 0x1d4c74: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c70) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4C78u;
label_1d4c78:
    // 0x1d4c78: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1d4c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1d4c7c:
    // 0x1d4c7c: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x1d4c7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_1d4c80:
    // 0x1d4c80: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
label_1d4c84:
    if (ctx->pc == 0x1D4C84u) {
        ctx->pc = 0x1D4C88u;
        goto label_1d4c88;
    }
    ctx->pc = 0x1D4C80u;
    {
        const bool branch_taken_0x1d4c80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c80) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4C88u;
label_1d4c88:
    // 0x1d4c88: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d4c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d4c8c:
    // 0x1d4c8c: 0x90234998  lbu         $v1, 0x4998($at)
    ctx->pc = 0x1d4c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18840)));
label_1d4c90:
    // 0x1d4c90: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
label_1d4c94:
    if (ctx->pc == 0x1D4C94u) {
        ctx->pc = 0x1D4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C90u;
        // 0x1d4c94: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4C98u;
        goto label_1d4c98;
    }
    ctx->pc = 0x1D4C90u;
    {
        const bool branch_taken_0x1d4c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C90u;
        // 0x1d4c94: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c90) {
            ctx->pc = 0x1D4E60u;
            goto label_1d4e60;
        }
    }
    ctx->pc = 0x1D4C98u;
label_1d4c98:
    // 0x1d4c98: 0x8c28498c  lw          $t0, 0x498C($at)
    ctx->pc = 0x1d4c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18828)));
label_1d4c9c:
    // 0x1d4c9c: 0x11000070  beqz        $t0, . + 4 + (0x70 << 2)
label_1d4ca0:
    if (ctx->pc == 0x1D4CA0u) {
        ctx->pc = 0x1D4CA4u;
        goto label_1d4ca4;
    }
    ctx->pc = 0x1D4C9Cu;
    {
        const bool branch_taken_0x1d4c9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c9c) {
            ctx->pc = 0x1D4E60u;
            goto label_1d4e60;
        }
    }
    ctx->pc = 0x1D4CA4u;
label_1d4ca4:
    // 0x1d4ca4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d4ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d4ca8:
    // 0x1d4ca8: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x1d4ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_1d4cac:
    // 0x1d4cac: 0x8c2603c4  lw          $a2, 0x3C4($at)
    ctx->pc = 0x1d4cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 964)));
label_1d4cb0:
    // 0x1d4cb0: 0x84c3003c  lh          $v1, 0x3C($a2)
    ctx->pc = 0x1d4cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
label_1d4cb4:
    // 0x1d4cb4: 0x10650089  beq         $v1, $a1, . + 4 + (0x89 << 2)
label_1d4cb8:
    if (ctx->pc == 0x1D4CB8u) {
        ctx->pc = 0x1D4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CB4u;
        // 0x1d4cb8: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CBCu;
        goto label_1d4cbc;
    }
    ctx->pc = 0x1D4CB4u;
    {
        const bool branch_taken_0x1d4cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CB4u;
        // 0x1d4cb8: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cb4) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4CBCu;
label_1d4cbc:
    // 0x1d4cbc: 0x10640087  beq         $v1, $a0, . + 4 + (0x87 << 2)
label_1d4cc0:
    if (ctx->pc == 0x1D4CC0u) {
        ctx->pc = 0x1D4CC4u;
        goto label_1d4cc4;
    }
    ctx->pc = 0x1D4CBCu;
    {
        const bool branch_taken_0x1d4cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d4cbc) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4CC4u;
label_1d4cc4:
    // 0x1d4cc4: 0x8503003c  lh          $v1, 0x3C($t0)
    ctx->pc = 0x1d4cc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
label_1d4cc8:
    // 0x1d4cc8: 0x10650084  beq         $v1, $a1, . + 4 + (0x84 << 2)
label_1d4ccc:
    if (ctx->pc == 0x1D4CCCu) {
        ctx->pc = 0x1D4CD0u;
        goto label_1d4cd0;
    }
    ctx->pc = 0x1D4CC8u;
    {
        const bool branch_taken_0x1d4cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d4cc8) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4CD0u;
label_1d4cd0:
    // 0x1d4cd0: 0x10640082  beq         $v1, $a0, . + 4 + (0x82 << 2)
label_1d4cd4:
    if (ctx->pc == 0x1D4CD4u) {
        ctx->pc = 0x1D4CD8u;
        goto label_1d4cd8;
    }
    ctx->pc = 0x1D4CD0u;
    {
        const bool branch_taken_0x1d4cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d4cd0) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4CD8u;
label_1d4cd8:
    // 0x1d4cd8: 0x9103023a  lbu         $v1, 0x23A($t0)
    ctx->pc = 0x1d4cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 570)));
label_1d4cdc:
    // 0x1d4cdc: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
label_1d4ce0:
    if (ctx->pc == 0x1D4CE0u) {
        ctx->pc = 0x1D4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CDCu;
        // 0x1d4ce0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CE4u;
        goto label_1d4ce4;
    }
    ctx->pc = 0x1D4CDCu;
    {
        const bool branch_taken_0x1d4cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CDCu;
        // 0x1d4ce0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cdc) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4CE4u;
label_1d4ce4:
    // 0x1d4ce4: 0x8c234948  lw          $v1, 0x4948($at)
    ctx->pc = 0x1d4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18760)));
label_1d4ce8:
    // 0x1d4ce8: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
label_1d4cec:
    if (ctx->pc == 0x1D4CECu) {
        ctx->pc = 0x1D4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CE8u;
        // 0x1d4cec: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4CF0u;
        goto label_1d4cf0;
    }
    ctx->pc = 0x1D4CE8u;
    {
        const bool branch_taken_0x1d4ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CE8u;
        // 0x1d4cec: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ce8) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4CF0u;
label_1d4cf0:
    // 0x1d4cf0: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x1d4cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
label_1d4cf4:
    // 0x1d4cf4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1d4cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1d4cf8:
    // 0x1d4cf8: 0x14600078  bnez        $v1, . + 4 + (0x78 << 2)
label_1d4cfc:
    if (ctx->pc == 0x1D4CFCu) {
        ctx->pc = 0x1D4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CF8u;
        // 0x1d4cfc: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D00u;
        goto label_1d4d00;
    }
    ctx->pc = 0x1D4CF8u;
    {
        const bool branch_taken_0x1d4cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CF8u;
        // 0x1d4cfc: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cf8) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4D00u;
label_1d4d00:
    // 0x1d4d00: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1d4d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_1d4d04:
    // 0x1d4d04: 0x8c2503c0  lw          $a1, 0x3C0($at)
    ctx->pc = 0x1d4d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
label_1d4d08:
    // 0x1d4d08: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1d4d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1d4d0c:
    // 0x1d4d0c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d4d10:
    // 0x1d4d10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d4d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d4d14:
    // 0x1d4d14: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_1d4d18:
    if (ctx->pc == 0x1D4D18u) {
        ctx->pc = 0x1D4D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D14u;
        // 0x1d4d18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D1Cu;
        goto label_1d4d1c;
    }
    ctx->pc = 0x1D4D14u;
    {
        const bool branch_taken_0x1d4d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D14u;
        // 0x1d4d18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d14) {
            ctx->pc = 0x1D4DC4u;
            goto label_1d4dc4;
        }
    }
    ctx->pc = 0x1D4D1Cu;
label_1d4d1c:
    // 0x1d4d1c: 0x84a40222  lh          $a0, 0x222($a1)
    ctx->pc = 0x1d4d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 546)));
label_1d4d20:
    // 0x1d4d20: 0x84a30252  lh          $v1, 0x252($a1)
    ctx->pc = 0x1d4d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 594)));
label_1d4d24:
    // 0x1d4d24: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
label_1d4d28:
    if (ctx->pc == 0x1D4D28u) {
        ctx->pc = 0x1D4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D24u;
        // 0x1d4d28: 0x24c40150  addiu       $a0, $a2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4D2Cu;
        goto label_1d4d2c;
    }
    ctx->pc = 0x1D4D24u;
    {
        const bool branch_taken_0x1d4d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D24u;
        // 0x1d4d28: 0x24c40150  addiu       $a0, $a2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d24) {
            ctx->pc = 0x1D4DC4u;
            goto label_1d4dc4;
        }
    }
    ctx->pc = 0x1D4D2Cu;
label_1d4d2c:
    // 0x1d4d2c: 0x25030150  addiu       $v1, $t0, 0x150
    ctx->pc = 0x1d4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
label_1d4d30:
    // 0x1d4d30: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d4d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1d4d34:
    // 0x1d4d34: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1d4d34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1d4d38:
    // 0x1d4d38: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1d4d38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1d4d3c:
    // 0x1d4d3c: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d3cu;
    // NOP operation, no action needed for VU0
label_1d4d40:
    // 0x1d4d40: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d40u;
    // NOP operation, no action needed for VU0
label_1d4d44:
    // 0x1d4d44: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d44u;
    // NOP operation, no action needed for VU0
label_1d4d48:
    // 0x1d4d48: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1d4d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1d4d4c:
    // 0x1d4d4c: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d4cu;
    // NOP operation, no action needed for VU0
label_1d4d50:
    // 0x1d4d50: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d50u;
    // NOP operation, no action needed for VU0
label_1d4d54:
    // 0x1d4d54: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1d4d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
label_1d4d58:
    // 0x1d4d58: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1d4d58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1d4d5c:
    // 0x1d4d5c: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d5cu;
    // NOP operation, no action needed for VU0
label_1d4d60:
    // 0x1d4d60: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d60u;
    // NOP operation, no action needed for VU0
label_1d4d64:
    // 0x1d4d64: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d64u;
    // NOP operation, no action needed for VU0
label_1d4d68:
    // 0x1d4d68: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1d4d68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_1d4d6c:
    // 0x1d4d6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d4d6cu;
    // VWAITQ (Q already resolved in this runtime)
label_1d4d70:
    // 0x1d4d70: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1d4d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_1d4d74:
    // 0x1d4d74: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1d4d74u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4d78:
    // 0x1d4d78: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1d4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_1d4d7c:
    // 0x1d4d7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4d80:
    // 0x1d4d80: 0x0  nop
    ctx->pc = 0x1d4d80u;
    // NOP
label_1d4d84:
    // 0x1d4d84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4d84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4d88:
    // 0x1d4d88: 0x0  nop
    ctx->pc = 0x1d4d88u;
    // NOP
label_1d4d8c:
    // 0x1d4d8c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1d4d90:
    if (ctx->pc == 0x1D4D90u) {
        ctx->pc = 0x1D4D94u;
        goto label_1d4d94;
    }
    ctx->pc = 0x1D4D8Cu;
    {
        const bool branch_taken_0x1d4d8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4d8c) {
            ctx->pc = 0x1D4DC4u;
            goto label_1d4dc4;
        }
    }
    ctx->pc = 0x1D4D94u;
label_1d4d94:
    // 0x1d4d94: 0xc4c10180  lwc1        $f1, 0x180($a2)
    ctx->pc = 0x1d4d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4d98:
    // 0x1d4d98: 0xc5000180  lwc1        $f0, 0x180($t0)
    ctx->pc = 0x1d4d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4d9c:
    // 0x1d4d9c: 0xc06d448  jal         func_1B5120
label_1d4da0:
    if (ctx->pc == 0x1D4DA0u) {
        ctx->pc = 0x1D4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D9Cu;
        // 0x1d4da0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DA4u;
        goto label_1d4da4;
    }
    ctx->pc = 0x1D4D9Cu;
    SET_GPR_U32(ctx, 31, 0x1D4DA4u);
    ctx->pc = 0x1D4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D9Cu;
    // 0x1d4da0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1D4D9Cu, 0x1D4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DA4u;
label_1d4da4:
    // 0x1d4da4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1d4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_1d4da8:
    // 0x1d4da8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4dac:
    // 0x1d4dac: 0x0  nop
    ctx->pc = 0x1d4dacu;
    // NOP
label_1d4db0:
    // 0x1d4db0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d4db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4db4:
    // 0x1d4db4: 0x0  nop
    ctx->pc = 0x1d4db4u;
    // NOP
label_1d4db8:
    // 0x1d4db8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d4dbc:
    if (ctx->pc == 0x1D4DBCu) {
        ctx->pc = 0x1D4DC0u;
        goto label_1d4dc0;
    }
    ctx->pc = 0x1D4DB8u;
    {
        const bool branch_taken_0x1d4db8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4db8) {
            ctx->pc = 0x1D4DC4u;
            goto label_1d4dc4;
        }
    }
    ctx->pc = 0x1D4DC0u;
label_1d4dc0:
    // 0x1d4dc0: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1d4dc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1d4dc4:
    // 0x1d4dc4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d4dc8:
    // 0x1d4dc8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1d4dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_1d4dcc:
    // 0x1d4dcc: 0x10700043  beq         $v1, $s0, . + 4 + (0x43 << 2)
label_1d4dd0:
    if (ctx->pc == 0x1D4DD0u) {
        ctx->pc = 0x1D4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DCCu;
        // 0x1d4dd0: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4DD4u;
        goto label_1d4dd4;
    }
    ctx->pc = 0x1D4DCCu;
    {
        const bool branch_taken_0x1d4dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1D4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4DCCu;
        // 0x1d4dd0: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4dcc) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4DD4u;
label_1d4dd4:
    // 0x1d4dd4: 0x8c2403c0  lw          $a0, 0x3C0($at)
    ctx->pc = 0x1d4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
label_1d4dd8:
    // 0x1d4dd8: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1d4dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1d4ddc:
    // 0x1d4ddc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_1d4de0:
    if (ctx->pc == 0x1D4DE0u) {
        ctx->pc = 0x1D4DE4u;
        goto label_1d4de4;
    }
    ctx->pc = 0x1D4DDCu;
    {
        const bool branch_taken_0x1d4ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ddc) {
            ctx->pc = 0x1D4E34u;
            goto label_1d4e34;
        }
    }
    ctx->pc = 0x1D4DE4u;
label_1d4de4:
    // 0x1d4de4: 0xc0439cc  jal         func_10E730
label_1d4de8:
    if (ctx->pc == 0x1D4DE8u) {
        ctx->pc = 0x1D4DECu;
        goto label_1d4dec;
    }
    ctx->pc = 0x1D4DE4u;
    SET_GPR_U32(ctx, 31, 0x1D4DECu);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D4DE4u, 0x1D4DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DECu;
label_1d4dec:
    // 0x1d4dec: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d4decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d4df0:
    // 0x1d4df0: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d4df4:
    // 0x1d4df4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4df8:
    // 0x1d4df8: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d4df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_1d4dfc:
    // 0x1d4dfc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d4e00:
    // 0x1d4e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e04:
    // 0x1d4e04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d4e08:
    // 0x1d4e08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4e0c:
    // 0x1d4e0c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d4e10:
    if (ctx->pc == 0x1D4E10u) {
        ctx->pc = 0x1D4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E0Cu;
        // 0x1d4e10: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E14u;
        goto label_1d4e14;
    }
    ctx->pc = 0x1D4E0Cu;
    {
        const bool branch_taken_0x1d4e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E0Cu;
        // 0x1d4e10: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e0c) {
            ctx->pc = 0x1D4E24u;
            goto label_1d4e24;
        }
    }
    ctx->pc = 0x1D4E14u;
label_1d4e14:
    // 0x1d4e14: 0x0  nop
    ctx->pc = 0x1d4e14u;
    // NOP
label_1d4e18:
    // 0x1d4e18: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1d4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1d4e1c:
    // 0x1d4e1c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1d4e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1d4e20:
    // 0x1d4e20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d4e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d4e24:
    // 0x1d4e24: 0x0  nop
    ctx->pc = 0x1d4e24u;
    // NOP
label_1d4e28:
    // 0x1d4e28: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1d4e28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d4e2c:
    // 0x1d4e2c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1d4e30:
    if (ctx->pc == 0x1D4E30u) {
        ctx->pc = 0x1D4E34u;
        goto label_1d4e34;
    }
    ctx->pc = 0x1D4E2Cu;
    {
        const bool branch_taken_0x1d4e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e2c) {
            ctx->pc = 0x1D4E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4e14;
        }
    }
    ctx->pc = 0x1D4E34u;
label_1d4e34:
    // 0x1d4e34: 0x0  nop
    ctx->pc = 0x1d4e34u;
    // NOP
label_1d4e38:
    // 0x1d4e38: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1d4e3c:
    if (ctx->pc == 0x1D4E3Cu) {
        ctx->pc = 0x1D4E40u;
        goto label_1d4e40;
    }
    ctx->pc = 0x1D4E38u;
    {
        const bool branch_taken_0x1d4e38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e38) {
            ctx->pc = 0x1D4E50u;
            goto label_1d4e50;
        }
    }
    ctx->pc = 0x1D4E40u;
label_1d4e40:
    // 0x1d4e40: 0x8f838588  lw          $v1, -0x7A78($gp)
    ctx->pc = 0x1d4e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
label_1d4e44:
    // 0x1d4e44: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1d4e48:
    // 0x1d4e48: 0x10000024  b           . + 4 + (0x24 << 2)
label_1d4e4c:
    if (ctx->pc == 0x1D4E4Cu) {
        ctx->pc = 0x1D4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E48u;
        // 0x1d4e4c: 0xaf838588  sw          $v1, -0x7A78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E50u;
        goto label_1d4e50;
    }
    ctx->pc = 0x1D4E48u;
    {
        const bool branch_taken_0x1d4e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E48u;
        // 0x1d4e4c: 0xaf838588  sw          $v1, -0x7A78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e48) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4E50u;
label_1d4e50:
    // 0x1d4e50: 0x8f83858c  lw          $v1, -0x7A74($gp)
    ctx->pc = 0x1d4e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
label_1d4e54:
    // 0x1d4e54: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1d4e58:
    // 0x1d4e58: 0x10000020  b           . + 4 + (0x20 << 2)
label_1d4e5c:
    if (ctx->pc == 0x1D4E5Cu) {
        ctx->pc = 0x1D4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E58u;
        // 0x1d4e5c: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E60u;
        goto label_1d4e60;
    }
    ctx->pc = 0x1D4E58u;
    {
        const bool branch_taken_0x1d4e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E58u;
        // 0x1d4e5c: 0xaf83858c  sw          $v1, -0x7A74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e58) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4E60u;
label_1d4e60:
    // 0x1d4e60: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d4e64:
    // 0x1d4e64: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1d4e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_1d4e68:
    // 0x1d4e68: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_1d4e6c:
    if (ctx->pc == 0x1D4E6Cu) {
        ctx->pc = 0x1D4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E68u;
        // 0x1d4e6c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4E70u;
        goto label_1d4e70;
    }
    ctx->pc = 0x1D4E68u;
    {
        const bool branch_taken_0x1d4e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4E68u;
        // 0x1d4e6c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4e68) {
            ctx->pc = 0x1D4EDCu;
            goto label_1d4edc;
        }
    }
    ctx->pc = 0x1D4E70u;
label_1d4e70:
    // 0x1d4e70: 0x8c2403c0  lw          $a0, 0x3C0($at)
    ctx->pc = 0x1d4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
label_1d4e74:
    // 0x1d4e74: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1d4e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1d4e78:
    // 0x1d4e78: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1d4e7c:
    if (ctx->pc == 0x1D4E7Cu) {
        ctx->pc = 0x1D4E80u;
        goto label_1d4e80;
    }
    ctx->pc = 0x1D4E78u;
    {
        const bool branch_taken_0x1d4e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e78) {
            ctx->pc = 0x1D4ECCu;
            goto label_1d4ecc;
        }
    }
    ctx->pc = 0x1D4E80u;
label_1d4e80:
    // 0x1d4e80: 0xc0439cc  jal         func_10E730
label_1d4e84:
    if (ctx->pc == 0x1D4E84u) {
        ctx->pc = 0x1D4E88u;
        goto label_1d4e88;
    }
    ctx->pc = 0x1D4E80u;
    SET_GPR_U32(ctx, 31, 0x1D4E88u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x1D4E80u, 0x1D4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E88u;
label_1d4e88:
    // 0x1d4e88: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1d4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d4e8c:
    // 0x1d4e8c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d4e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d4e90:
    // 0x1d4e90: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1d4e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d4e94:
    // 0x1d4e94: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1d4e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_1d4e98:
    // 0x1d4e98: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d4e9c:
    // 0x1d4e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ea0:
    // 0x1d4ea0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d4ea4:
    // 0x1d4ea4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d4ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4ea8:
    // 0x1d4ea8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d4eac:
    if (ctx->pc == 0x1D4EACu) {
        ctx->pc = 0x1D4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EA8u;
        // 0x1d4eac: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EB0u;
        goto label_1d4eb0;
    }
    ctx->pc = 0x1D4EA8u;
    {
        const bool branch_taken_0x1d4ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EA8u;
        // 0x1d4eac: 0x24640068  addiu       $a0, $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ea8) {
            ctx->pc = 0x1D4EC0u;
            goto label_1d4ec0;
        }
    }
    ctx->pc = 0x1D4EB0u;
label_1d4eb0:
    // 0x1d4eb0: 0x0  nop
    ctx->pc = 0x1d4eb0u;
    // NOP
label_1d4eb4:
    // 0x1d4eb4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1d4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1d4eb8:
    // 0x1d4eb8: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1d4eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_1d4ebc:
    // 0x1d4ebc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d4ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d4ec0:
    // 0x1d4ec0: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x1d4ec0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d4ec4:
    // 0x1d4ec4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1d4ec8:
    if (ctx->pc == 0x1D4EC8u) {
        ctx->pc = 0x1D4ECCu;
        goto label_1d4ecc;
    }
    ctx->pc = 0x1D4EC4u;
    {
        const bool branch_taken_0x1d4ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ec4) {
            ctx->pc = 0x1D4EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4eb0;
        }
    }
    ctx->pc = 0x1D4ECCu;
label_1d4ecc:
    // 0x1d4ecc: 0x0  nop
    ctx->pc = 0x1d4eccu;
    // NOP
label_1d4ed0:
    // 0x1d4ed0: 0x8f838588  lw          $v1, -0x7A78($gp)
    ctx->pc = 0x1d4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935944)));
label_1d4ed4:
    // 0x1d4ed4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1d4ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1d4ed8:
    // 0x1d4ed8: 0xaf838588  sw          $v1, -0x7A78($gp)
    ctx->pc = 0x1d4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935944), GPR_U32(ctx, 3));
label_1d4edc:
    // 0x1d4edc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d4edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4ee0:
    // 0x1d4ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4ee4:
    // 0x1d4ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4ee8:
    // 0x1d4ee8: 0x3e00008  jr          $ra
label_1d4eec:
    if (ctx->pc == 0x1D4EECu) {
        ctx->pc = 0x1D4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EE8u;
        // 0x1d4eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4EF0u;
        goto label_1d4ef0;
    }
    ctx->pc = 0x1D4EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4EE8u;
        // 0x1d4eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4EF0u;
label_1d4ef0:
    // 0x1d4ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d4ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d4ef4:
    // 0x1d4ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d4ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d4ef8:
    // 0x1d4ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d4efc:
    // 0x1d4efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d4f00:
    // 0x1d4f00: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1d4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d4f04:
    // 0x1d4f04: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x1d4f04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d4f08:
    // 0x1d4f08: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d4f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1d4f0c:
    // 0x1d4f0c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1d4f10:
    if (ctx->pc == 0x1D4F10u) {
        ctx->pc = 0x1D4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F0Cu;
        // 0x1d4f10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F14u;
        goto label_1d4f14;
    }
    ctx->pc = 0x1D4F0Cu;
    {
        const bool branch_taken_0x1d4f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F0Cu;
        // 0x1d4f10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f0c) {
            ctx->pc = 0x1D4F50u;
            goto label_1d4f50;
        }
    }
    ctx->pc = 0x1D4F14u;
label_1d4f14:
    // 0x1d4f14: 0xc051688  jal         func_145A20
label_1d4f18:
    if (ctx->pc == 0x1D4F18u) {
        ctx->pc = 0x1D4F1Cu;
        goto label_1d4f1c;
    }
    ctx->pc = 0x1D4F14u;
    SET_GPR_U32(ctx, 31, 0x1D4F1Cu);
    ctx->pc = 0x145A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145A20u, 0x1D4F14u, 0x1D4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F1Cu;
label_1d4f1c:
    // 0x1d4f1c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1d4f20:
    // 0x1d4f20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1d4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1d4f24:
    // 0x1d4f24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d4f28:
    // 0x1d4f28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d4f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d4f2c:
    // 0x1d4f2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d4f30:
    if (ctx->pc == 0x1D4F30u) {
        ctx->pc = 0x1D4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F2Cu;
        // 0x1d4f30: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F34u;
        goto label_1d4f34;
    }
    ctx->pc = 0x1D4F2Cu;
    {
        const bool branch_taken_0x1d4f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F2Cu;
        // 0x1d4f30: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f2c) {
            ctx->pc = 0x1D4F4Cu;
            goto label_1d4f4c;
        }
    }
    ctx->pc = 0x1D4F34u;
label_1d4f34:
    // 0x1d4f34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1d4f38:
    if (ctx->pc == 0x1D4F38u) {
        ctx->pc = 0x1D4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F34u;
        // 0x1d4f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F3Cu;
        goto label_1d4f3c;
    }
    ctx->pc = 0x1D4F34u;
    {
        const bool branch_taken_0x1d4f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F34u;
        // 0x1d4f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f34) {
            ctx->pc = 0x1D4F4Cu;
            goto label_1d4f4c;
        }
    }
    ctx->pc = 0x1D4F3Cu;
label_1d4f3c:
    // 0x1d4f3c: 0xc075430  jal         func_1D50C0
label_1d4f40:
    if (ctx->pc == 0x1D4F40u) {
        ctx->pc = 0x1D4F44u;
        goto label_1d4f44;
    }
    ctx->pc = 0x1D4F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F44u);
    ctx->pc = 0x1D50C0u;
    goto label_1d50c0;
    ctx->pc = 0x1D4F44u;
label_1d4f44:
    // 0x1d4f44: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d4f48:
    if (ctx->pc == 0x1D4F48u) {
        ctx->pc = 0x1D4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F44u;
        // 0x1d4f48: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F4Cu;
        goto label_1d4f4c;
    }
    ctx->pc = 0x1D4F44u;
    {
        const bool branch_taken_0x1d4f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F44u;
        // 0x1d4f48: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f44) {
            ctx->pc = 0x1D4F54u;
            goto label_1d4f54;
        }
    }
    ctx->pc = 0x1D4F4Cu;
label_1d4f4c:
    // 0x1d4f4c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1d4f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1d4f50:
    // 0x1d4f50: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1d4f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d4f54:
    // 0x1d4f54: 0xc04fbd4  jal         func_13EF50
label_1d4f58:
    if (ctx->pc == 0x1D4F58u) {
        ctx->pc = 0x1D4F5Cu;
        goto label_1d4f5c;
    }
    ctx->pc = 0x1D4F54u;
    SET_GPR_U32(ctx, 31, 0x1D4F5Cu);
    ctx->pc = 0x13EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF50u, 0x1D4F54u, 0x1D4F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F5Cu;
label_1d4f5c:
    // 0x1d4f5c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d4f60:
    // 0x1d4f60: 0x9063023a  lbu         $v1, 0x23A($v1)
    ctx->pc = 0x1d4f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 570)));
label_1d4f64:
    // 0x1d4f64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1d4f68:
    if (ctx->pc == 0x1D4F68u) {
        ctx->pc = 0x1D4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F64u;
        // 0x1d4f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F6Cu;
        goto label_1d4f6c;
    }
    ctx->pc = 0x1D4F64u;
    {
        const bool branch_taken_0x1d4f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F64u;
        // 0x1d4f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f64) {
            ctx->pc = 0x1D4F74u;
            goto label_1d4f74;
        }
    }
    ctx->pc = 0x1D4F6Cu;
label_1d4f6c:
    // 0x1d4f6c: 0xc054638  jal         func_1518E0
label_1d4f70:
    if (ctx->pc == 0x1D4F70u) {
        ctx->pc = 0x1D4F74u;
        goto label_1d4f74;
    }
    ctx->pc = 0x1D4F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F74u);
    ctx->pc = 0x1518E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518E0u, 0x1D4F6Cu, 0x1D4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F74u;
label_1d4f74:
    // 0x1d4f74: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d4f78:
    // 0x1d4f78: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1d4f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1d4f7c:
    // 0x1d4f7c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1d4f80:
    if (ctx->pc == 0x1D4F80u) {
        ctx->pc = 0x1D4F84u;
        goto label_1d4f84;
    }
    ctx->pc = 0x1D4F7Cu;
    {
        const bool branch_taken_0x1d4f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f7c) {
            ctx->pc = 0x1D4FCCu;
            goto label_1d4fcc;
        }
    }
    ctx->pc = 0x1D4F84u;
label_1d4f84:
    // 0x1d4f84: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1d4f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d4f88:
    // 0x1d4f88: 0x84a3003c  lh          $v1, 0x3C($a1)
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
label_1d4f8c:
    // 0x1d4f8c: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1d4f8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_1d4f90:
    // 0x1d4f90: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1d4f94:
    if (ctx->pc == 0x1D4F94u) {
        ctx->pc = 0x1D4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F90u;
        // 0x1d4f94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4F98u;
        goto label_1d4f98;
    }
    ctx->pc = 0x1D4F90u;
    {
        const bool branch_taken_0x1d4f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F90u;
        // 0x1d4f94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f90) {
            ctx->pc = 0x1D4F9Cu;
            goto label_1d4f9c;
        }
    }
    ctx->pc = 0x1D4F98u;
label_1d4f98:
    // 0x1d4f98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4f9c:
    // 0x1d4f9c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1d4fa0:
    if (ctx->pc == 0x1D4FA0u) {
        ctx->pc = 0x1D4FA4u;
        goto label_1d4fa4;
    }
    ctx->pc = 0x1D4F9Cu;
    {
        const bool branch_taken_0x1d4f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f9c) {
            ctx->pc = 0x1D4FCCu;
            goto label_1d4fcc;
        }
    }
    ctx->pc = 0x1D4FA4u;
label_1d4fa4:
    // 0x1d4fa4: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x1d4fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_1d4fa8:
    // 0x1d4fa8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_1d4fac:
    // 0x1d4fac: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x1d4facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
label_1d4fb0:
    // 0x1d4fb0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d4fb4:
    // 0x1d4fb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d4fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d4fb8:
    // 0x1d4fb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d4fbc:
    if (ctx->pc == 0x1D4FBCu) {
        ctx->pc = 0x1D4FC0u;
        goto label_1d4fc0;
    }
    ctx->pc = 0x1D4FB8u;
    {
        const bool branch_taken_0x1d4fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fb8) {
            ctx->pc = 0x1D4FCCu;
            goto label_1d4fcc;
        }
    }
    ctx->pc = 0x1D4FC0u;
label_1d4fc0:
    // 0x1d4fc0: 0x84a301ae  lh          $v1, 0x1AE($a1)
    ctx->pc = 0x1d4fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 430)));
label_1d4fc4:
    // 0x1d4fc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4fc8:
    // 0x1d4fc8: 0xa4a301ae  sh          $v1, 0x1AE($a1)
    ctx->pc = 0x1d4fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 430), (uint16_t)GPR_U32(ctx, 3));
label_1d4fcc:
    // 0x1d4fcc: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d4fd0:
    // 0x1d4fd0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1d4fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1d4fd4:
    // 0x1d4fd4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1d4fd8:
    if (ctx->pc == 0x1D4FD8u) {
        ctx->pc = 0x1D4FDCu;
        goto label_1d4fdc;
    }
    ctx->pc = 0x1D4FD4u;
    {
        const bool branch_taken_0x1d4fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fd4) {
            ctx->pc = 0x1D4FECu;
            goto label_1d4fec;
        }
    }
    ctx->pc = 0x1D4FDCu;
label_1d4fdc:
    // 0x1d4fdc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d4fe0:
    // 0x1d4fe0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d4fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1d4fe4:
    // 0x1d4fe4: 0xc060754  jal         func_181D50
label_1d4fe8:
    if (ctx->pc == 0x1D4FE8u) {
        ctx->pc = 0x1D4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FE4u;
        // 0x1d4fe8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4FECu;
        goto label_1d4fec;
    }
    ctx->pc = 0x1D4FE4u;
    SET_GPR_U32(ctx, 31, 0x1D4FECu);
    ctx->pc = 0x1D4FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FE4u;
    // 0x1d4fe8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181D50u, 0x1D4FE4u, 0x1D4FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FECu;
label_1d4fec:
    // 0x1d4fec: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x1d4fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4ff0:
    // 0x1d4ff0: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x1d4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
label_1d4ff4:
    // 0x1d4ff4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d4ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1d4ff8:
    // 0x1d4ff8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4ffc:
    // 0x1d4ffc: 0x0  nop
    ctx->pc = 0x1d4ffcu;
    // NOP
label_1d5000:
    // 0x1d5000: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5000u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1d5004:
    // 0x1d5004: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d5008:
    // 0x1d5008: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d5008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1d500c:
    // 0x1d500c: 0x0  nop
    ctx->pc = 0x1d500cu;
    // NOP
label_1d5010:
    // 0x1d5010: 0xa6230018  sh          $v1, 0x18($s1)
    ctx->pc = 0x1d5010u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 3));
label_1d5014:
    // 0x1d5014: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x1d5014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5018:
    // 0x1d5018: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5018u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1d501c:
    // 0x1d501c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d501cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1d5020:
    // 0x1d5020: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d5020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1d5024:
    // 0x1d5024: 0x0  nop
    ctx->pc = 0x1d5024u;
    // NOP
label_1d5028:
    // 0x1d5028: 0xa623001a  sh          $v1, 0x1A($s1)
    ctx->pc = 0x1d5028u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 3));
label_1d502c:
    // 0x1d502c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d5030:
    // 0x1d5030: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1d5030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1d5034:
    // 0x1d5034: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1d5038:
    if (ctx->pc == 0x1D5038u) {
        ctx->pc = 0x1D5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5034u;
        // 0x1d5038: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D503Cu;
        goto label_1d503c;
    }
    ctx->pc = 0x1D5034u;
    {
        const bool branch_taken_0x1d5034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5034u;
        // 0x1d5038: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5034) {
            ctx->pc = 0x1D5048u;
            goto label_1d5048;
        }
    }
    ctx->pc = 0x1D503Cu;
label_1d503c:
    // 0x1d503c: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x1d503cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_1d5040:
    // 0x1d5040: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_1d5044:
    if (ctx->pc == 0x1D5044u) {
        ctx->pc = 0x1D5048u;
        goto label_1d5048;
    }
    ctx->pc = 0x1D5040u;
    {
        const bool branch_taken_0x1d5040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5040) {
            ctx->pc = 0x1D50A4u;
            goto label_1d50a4;
        }
    }
    ctx->pc = 0x1D5048u;
label_1d5048:
    // 0x1d5048: 0x90234af3  lbu         $v1, 0x4AF3($at)
    ctx->pc = 0x1d5048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
label_1d504c:
    // 0x1d504c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1d504cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_1d5050:
    // 0x1d5050: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_1d5054:
    if (ctx->pc == 0x1D5054u) {
        ctx->pc = 0x1D5058u;
        goto label_1d5058;
    }
    ctx->pc = 0x1D5050u;
    {
        const bool branch_taken_0x1d5050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5050) {
            ctx->pc = 0x1D509Cu;
            goto label_1d509c;
        }
    }
    ctx->pc = 0x1D5058u;
label_1d5058:
    // 0x1d5058: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d505c:
    // 0x1d505c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5060:
    // 0x1d5060: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d5064:
    // 0x1d5064: 0x920501a2  lbu         $a1, 0x1A2($s0)
    ctx->pc = 0x1d5064u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
label_1d5068:
    // 0x1d5068: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1d5068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1d506c:
    // 0x1d506c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1d506cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1d5070:
    // 0x1d5070: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_1d5074:
    if (ctx->pc == 0x1D5074u) {
        ctx->pc = 0x1D5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5070u;
        // 0x1d5074: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5078u;
        goto label_1d5078;
    }
    ctx->pc = 0x1D5070u;
    {
        const bool branch_taken_0x1d5070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5070u;
        // 0x1d5074: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5070) {
            ctx->pc = 0x1D50A4u;
            goto label_1d50a4;
        }
    }
    ctx->pc = 0x1D5078u;
label_1d5078:
    // 0x1d5078: 0xc045180  jal         func_114600
label_1d507c:
    if (ctx->pc == 0x1D507Cu) {
        ctx->pc = 0x1D5080u;
        goto label_1d5080;
    }
    ctx->pc = 0x1D5078u;
    SET_GPR_U32(ctx, 31, 0x1D5080u);
    ctx->pc = 0x114600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114600u, 0x1D5078u, 0x1D5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5080u;
label_1d5080:
    // 0x1d5080: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d5084:
    if (ctx->pc == 0x1D5084u) {
        ctx->pc = 0x1D5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5080u;
        // 0x1d5084: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5088u;
        goto label_1d5088;
    }
    ctx->pc = 0x1D5080u;
    {
        const bool branch_taken_0x1d5080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5080u;
        // 0x1d5084: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5080) {
            ctx->pc = 0x1D50A4u;
            goto label_1d50a4;
        }
    }
    ctx->pc = 0x1D5088u;
label_1d5088:
    // 0x1d5088: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d508c:
    // 0x1d508c: 0xc045a34  jal         func_1168D0
label_1d5090:
    if (ctx->pc == 0x1D5090u) {
        ctx->pc = 0x1D5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D508Cu;
        // 0x1d5090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5094u;
        goto label_1d5094;
    }
    ctx->pc = 0x1D508Cu;
    SET_GPR_U32(ctx, 31, 0x1D5094u);
    ctx->pc = 0x1D5090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D508Cu;
    // 0x1d5090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1168D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168D0u, 0x1D508Cu, 0x1D5094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5094u;
label_1d5094:
    // 0x1d5094: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d5098:
    if (ctx->pc == 0x1D5098u) {
        ctx->pc = 0x1D5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5094u;
        // 0x1d5098: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D509Cu;
        goto label_1d509c;
    }
    ctx->pc = 0x1D5094u;
    {
        const bool branch_taken_0x1d5094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5094u;
        // 0x1d5098: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5094) {
            ctx->pc = 0x1D50A8u;
            goto label_1d50a8;
        }
    }
    ctx->pc = 0x1D509Cu;
label_1d509c:
    // 0x1d509c: 0xc045a10  jal         func_116840
label_1d50a0:
    if (ctx->pc == 0x1D50A0u) {
        ctx->pc = 0x1D50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D509Cu;
        // 0x1d50a0: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D50A4u;
        goto label_1d50a4;
    }
    ctx->pc = 0x1D509Cu;
    SET_GPR_U32(ctx, 31, 0x1D50A4u);
    ctx->pc = 0x1D50A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D509Cu;
    // 0x1d50a0: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116840u, 0x1D509Cu, 0x1D50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50A4u;
label_1d50a4:
    // 0x1d50a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d50a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d50a8:
    // 0x1d50a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d50a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d50ac:
    // 0x1d50ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d50acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d50b0:
    // 0x1d50b0: 0x3e00008  jr          $ra
label_1d50b4:
    if (ctx->pc == 0x1D50B4u) {
        ctx->pc = 0x1D50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50B0u;
        // 0x1d50b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D50B8u;
        goto label_1d50b8;
    }
    ctx->pc = 0x1D50B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50B0u;
        // 0x1d50b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D50B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D50B8u;
label_1d50b8:
    // 0x1d50b8: 0x0  nop
    ctx->pc = 0x1d50b8u;
    // NOP
label_1d50bc:
    // 0x1d50bc: 0x0  nop
    ctx->pc = 0x1d50bcu;
    // NOP
label_1d50c0:
    // 0x1d50c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d50c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d50c4:
    // 0x1d50c4: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x1d50c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_1d50c8:
    // 0x1d50c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d50cc:
    // 0x1d50cc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1d50ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1d50d0:
    // 0x1d50d0: 0x8466003c  lh          $a2, 0x3C($v1)
    ctx->pc = 0x1d50d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
label_1d50d4:
    // 0x1d50d4: 0x10c5000b  beq         $a2, $a1, . + 4 + (0xB << 2)
label_1d50d8:
    if (ctx->pc == 0x1D50D8u) {
        ctx->pc = 0x1D50DCu;
        goto label_1d50dc;
    }
    ctx->pc = 0x1D50D4u;
    {
        const bool branch_taken_0x1d50d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d50d4) {
            ctx->pc = 0x1D5104u;
            goto label_1d5104;
        }
    }
    ctx->pc = 0x1D50DCu;
label_1d50dc:
    // 0x1d50dc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1d50dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d50e0:
    // 0x1d50e0: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_1d50e4:
    if (ctx->pc == 0x1D50E4u) {
        ctx->pc = 0x1D50E8u;
        goto label_1d50e8;
    }
    ctx->pc = 0x1D50E0u;
    {
        const bool branch_taken_0x1d50e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d50e0) {
            ctx->pc = 0x1D5104u;
            goto label_1d5104;
        }
    }
    ctx->pc = 0x1D50E8u;
label_1d50e8:
    // 0x1d50e8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1d50e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1d50ec:
    // 0x1d50ec: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_1d50f0:
    if (ctx->pc == 0x1D50F0u) {
        ctx->pc = 0x1D50F4u;
        goto label_1d50f4;
    }
    ctx->pc = 0x1D50ECu;
    {
        const bool branch_taken_0x1d50ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d50ec) {
            ctx->pc = 0x1D5104u;
            goto label_1d5104;
        }
    }
    ctx->pc = 0x1D50F4u;
label_1d50f4:
    // 0x1d50f4: 0xc075544  jal         func_1D5510
label_1d50f8:
    if (ctx->pc == 0x1D50F8u) {
        ctx->pc = 0x1D50FCu;
        goto label_1d50fc;
    }
    ctx->pc = 0x1D50F4u;
    SET_GPR_U32(ctx, 31, 0x1D50FCu);
    ctx->pc = 0x1D5510u;
    { ctx->pc = 0x1d5510; return; }
    ctx->pc = 0x1D50FCu;
label_1d50fc:
    // 0x1d50fc: 0x10000101  b           . + 4 + (0x101 << 2)
label_1d5100:
    if (ctx->pc == 0x1D5100u) {
        ctx->pc = 0x1D5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50FCu;
        // 0x1d5100: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5104u;
        goto label_1d5104;
    }
    ctx->pc = 0x1D50FCu;
    {
        const bool branch_taken_0x1d50fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50FCu;
        // 0x1d5100: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50fc) {
            ctx->pc = 0x1D5504u;
            { ctx->pc = 0x1d5504; return; }
        }
    }
    ctx->pc = 0x1D5104u;
label_1d5104:
    // 0x1d5104: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1d5104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_1d5108:
    // 0x1d5108: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1d5108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
label_1d510c:
    // 0x1d510c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1d510cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d5110:
    // 0x1d5110: 0x24c6c9a4  addiu       $a2, $a2, -0x365C
    ctx->pc = 0x1d5110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953380));
label_1d5114:
    // 0x1d5114: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5118:
    // 0x1d5118: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1d5118u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1d511c:
    // 0x1d511c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d511cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1d5120:
    // 0x1d5120: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1d5120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d5124:
    // 0x1d5124: 0x14c50012  bne         $a2, $a1, . + 4 + (0x12 << 2)
label_1d5128:
    if (ctx->pc == 0x1D5128u) {
        ctx->pc = 0x1D512Cu;
        goto label_1d512c;
    }
    ctx->pc = 0x1D5124u;
    {
        const bool branch_taken_0x1d5124 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d5124) {
            ctx->pc = 0x1D5170u;
            goto label_1d5170;
        }
    }
    ctx->pc = 0x1D512Cu;
label_1d512c:
    // 0x1d512c: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x1d512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d5130:
    // 0x1d5130: 0x3c0542fe  lui         $a1, 0x42FE
    ctx->pc = 0x1d5130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17150 << 16));
label_1d5134:
    // 0x1d5134: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d5134u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d5138:
    // 0x1d5138: 0xc46001d0  lwc1        $f0, 0x1D0($v1)
    ctx->pc = 0x1d5138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d513c:
    // 0x1d513c: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1d513cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_1d5140:
    // 0x1d5140: 0x34a60fdb  ori         $a2, $a1, 0xFDB
    ctx->pc = 0x1d5140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1d5144:
    // 0x1d5144: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1d5144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
label_1d5148:
    // 0x1d5148: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1d5148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1d514c:
    // 0x1d514c: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x1d514cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[3] = ctx->f[4] / ctx->f[3];
label_1d5150:
    // 0x1d5150: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1d5150u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d5154:
    // 0x1d5154: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d5154u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d5158:
    // 0x1d5158: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1d5158u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1d515c:
    // 0x1d515c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d515cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1d5160:
    // 0x1d5160: 0x0  nop
    ctx->pc = 0x1d5160u;
    // NOP
label_1d5164:
    // 0x1d5164: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d5164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d5168:
    // 0x1d5168: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d516c:
    if (ctx->pc == 0x1D516Cu) {
        ctx->pc = 0x1D516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5168u;
        // 0x1d516c: 0xe46001d0  swc1        $f0, 0x1D0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5170u;
        goto label_1d5170;
    }
    ctx->pc = 0x1D5168u;
    {
        const bool branch_taken_0x1d5168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5168u;
        // 0x1d516c: 0xe46001d0  swc1        $f0, 0x1D0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5168) {
            ctx->pc = 0x1D51ACu;
            { ctx->pc = 0x1d51ac; return; }
        }
    }
    ctx->pc = 0x1D5170u;
label_1d5170:
    // 0x1d5170: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x1d5170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d5174:
    // 0x1d5174: 0x3c0542fe  lui         $a1, 0x42FE
    ctx->pc = 0x1d5174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17150 << 16));
label_1d5178:
    // 0x1d5178: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1d5178u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d517c:
    // 0x1d517c: 0xc46001d0  lwc1        $f0, 0x1D0($v1)
    ctx->pc = 0x1d517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    ctx->pc = 0x1d5180u;
    return;
}

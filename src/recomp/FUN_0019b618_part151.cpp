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


void FUN_0019b618_part151(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e49f8u: goto label_1e49f8;
        case 0x1e49fcu: goto label_1e49fc;
        case 0x1e4a00u: goto label_1e4a00;
        case 0x1e4a04u: goto label_1e4a04;
        case 0x1e4a08u: goto label_1e4a08;
        case 0x1e4a0cu: goto label_1e4a0c;
        case 0x1e4a10u: goto label_1e4a10;
        case 0x1e4a14u: goto label_1e4a14;
        case 0x1e4a18u: goto label_1e4a18;
        case 0x1e4a1cu: goto label_1e4a1c;
        case 0x1e4a20u: goto label_1e4a20;
        case 0x1e4a24u: goto label_1e4a24;
        case 0x1e4a28u: goto label_1e4a28;
        case 0x1e4a2cu: goto label_1e4a2c;
        case 0x1e4a30u: goto label_1e4a30;
        case 0x1e4a34u: goto label_1e4a34;
        case 0x1e4a38u: goto label_1e4a38;
        case 0x1e4a3cu: goto label_1e4a3c;
        case 0x1e4a40u: goto label_1e4a40;
        case 0x1e4a44u: goto label_1e4a44;
        case 0x1e4a48u: goto label_1e4a48;
        case 0x1e4a4cu: goto label_1e4a4c;
        case 0x1e4a50u: goto label_1e4a50;
        case 0x1e4a54u: goto label_1e4a54;
        case 0x1e4a58u: goto label_1e4a58;
        case 0x1e4a5cu: goto label_1e4a5c;
        case 0x1e4a60u: goto label_1e4a60;
        case 0x1e4a64u: goto label_1e4a64;
        case 0x1e4a68u: goto label_1e4a68;
        case 0x1e4a6cu: goto label_1e4a6c;
        case 0x1e4a70u: goto label_1e4a70;
        case 0x1e4a74u: goto label_1e4a74;
        case 0x1e4a78u: goto label_1e4a78;
        case 0x1e4a7cu: goto label_1e4a7c;
        case 0x1e4a80u: goto label_1e4a80;
        case 0x1e4a84u: goto label_1e4a84;
        case 0x1e4a88u: goto label_1e4a88;
        case 0x1e4a8cu: goto label_1e4a8c;
        case 0x1e4a90u: goto label_1e4a90;
        case 0x1e4a94u: goto label_1e4a94;
        case 0x1e4a98u: goto label_1e4a98;
        case 0x1e4a9cu: goto label_1e4a9c;
        case 0x1e4aa0u: goto label_1e4aa0;
        case 0x1e4aa4u: goto label_1e4aa4;
        case 0x1e4aa8u: goto label_1e4aa8;
        case 0x1e4aacu: goto label_1e4aac;
        case 0x1e4ab0u: goto label_1e4ab0;
        case 0x1e4ab4u: goto label_1e4ab4;
        case 0x1e4ab8u: goto label_1e4ab8;
        case 0x1e4abcu: goto label_1e4abc;
        case 0x1e4ac0u: goto label_1e4ac0;
        case 0x1e4ac4u: goto label_1e4ac4;
        case 0x1e4ac8u: goto label_1e4ac8;
        case 0x1e4accu: goto label_1e4acc;
        case 0x1e4ad0u: goto label_1e4ad0;
        case 0x1e4ad4u: goto label_1e4ad4;
        case 0x1e4ad8u: goto label_1e4ad8;
        case 0x1e4adcu: goto label_1e4adc;
        case 0x1e4ae0u: goto label_1e4ae0;
        case 0x1e4ae4u: goto label_1e4ae4;
        case 0x1e4ae8u: goto label_1e4ae8;
        case 0x1e4aecu: goto label_1e4aec;
        case 0x1e4af0u: goto label_1e4af0;
        case 0x1e4af4u: goto label_1e4af4;
        case 0x1e4af8u: goto label_1e4af8;
        case 0x1e4afcu: goto label_1e4afc;
        case 0x1e4b00u: goto label_1e4b00;
        case 0x1e4b04u: goto label_1e4b04;
        case 0x1e4b08u: goto label_1e4b08;
        case 0x1e4b0cu: goto label_1e4b0c;
        case 0x1e4b10u: goto label_1e4b10;
        case 0x1e4b14u: goto label_1e4b14;
        case 0x1e4b18u: goto label_1e4b18;
        case 0x1e4b1cu: goto label_1e4b1c;
        case 0x1e4b20u: goto label_1e4b20;
        case 0x1e4b24u: goto label_1e4b24;
        case 0x1e4b28u: goto label_1e4b28;
        case 0x1e4b2cu: goto label_1e4b2c;
        case 0x1e4b30u: goto label_1e4b30;
        case 0x1e4b34u: goto label_1e4b34;
        case 0x1e4b38u: goto label_1e4b38;
        case 0x1e4b3cu: goto label_1e4b3c;
        case 0x1e4b40u: goto label_1e4b40;
        case 0x1e4b44u: goto label_1e4b44;
        case 0x1e4b48u: goto label_1e4b48;
        case 0x1e4b4cu: goto label_1e4b4c;
        case 0x1e4b50u: goto label_1e4b50;
        case 0x1e4b54u: goto label_1e4b54;
        case 0x1e4b58u: goto label_1e4b58;
        case 0x1e4b5cu: goto label_1e4b5c;
        case 0x1e4b60u: goto label_1e4b60;
        case 0x1e4b64u: goto label_1e4b64;
        case 0x1e4b68u: goto label_1e4b68;
        case 0x1e4b6cu: goto label_1e4b6c;
        case 0x1e4b70u: goto label_1e4b70;
        case 0x1e4b74u: goto label_1e4b74;
        case 0x1e4b78u: goto label_1e4b78;
        case 0x1e4b7cu: goto label_1e4b7c;
        case 0x1e4b80u: goto label_1e4b80;
        case 0x1e4b84u: goto label_1e4b84;
        case 0x1e4b88u: goto label_1e4b88;
        case 0x1e4b8cu: goto label_1e4b8c;
        case 0x1e4b90u: goto label_1e4b90;
        case 0x1e4b94u: goto label_1e4b94;
        case 0x1e4b98u: goto label_1e4b98;
        case 0x1e4b9cu: goto label_1e4b9c;
        case 0x1e4ba0u: goto label_1e4ba0;
        case 0x1e4ba4u: goto label_1e4ba4;
        case 0x1e4ba8u: goto label_1e4ba8;
        case 0x1e4bacu: goto label_1e4bac;
        case 0x1e4bb0u: goto label_1e4bb0;
        case 0x1e4bb4u: goto label_1e4bb4;
        case 0x1e4bb8u: goto label_1e4bb8;
        case 0x1e4bbcu: goto label_1e4bbc;
        case 0x1e4bc0u: goto label_1e4bc0;
        case 0x1e4bc4u: goto label_1e4bc4;
        case 0x1e4bc8u: goto label_1e4bc8;
        case 0x1e4bccu: goto label_1e4bcc;
        case 0x1e4bd0u: goto label_1e4bd0;
        case 0x1e4bd4u: goto label_1e4bd4;
        case 0x1e4bd8u: goto label_1e4bd8;
        case 0x1e4bdcu: goto label_1e4bdc;
        case 0x1e4be0u: goto label_1e4be0;
        case 0x1e4be4u: goto label_1e4be4;
        case 0x1e4be8u: goto label_1e4be8;
        case 0x1e4becu: goto label_1e4bec;
        case 0x1e4bf0u: goto label_1e4bf0;
        case 0x1e4bf4u: goto label_1e4bf4;
        case 0x1e4bf8u: goto label_1e4bf8;
        case 0x1e4bfcu: goto label_1e4bfc;
        case 0x1e4c00u: goto label_1e4c00;
        case 0x1e4c04u: goto label_1e4c04;
        case 0x1e4c08u: goto label_1e4c08;
        case 0x1e4c0cu: goto label_1e4c0c;
        case 0x1e4c10u: goto label_1e4c10;
        case 0x1e4c14u: goto label_1e4c14;
        case 0x1e4c18u: goto label_1e4c18;
        case 0x1e4c1cu: goto label_1e4c1c;
        case 0x1e4c20u: goto label_1e4c20;
        case 0x1e4c24u: goto label_1e4c24;
        case 0x1e4c28u: goto label_1e4c28;
        case 0x1e4c2cu: goto label_1e4c2c;
        case 0x1e4c30u: goto label_1e4c30;
        case 0x1e4c34u: goto label_1e4c34;
        case 0x1e4c38u: goto label_1e4c38;
        case 0x1e4c3cu: goto label_1e4c3c;
        case 0x1e4c40u: goto label_1e4c40;
        case 0x1e4c44u: goto label_1e4c44;
        case 0x1e4c48u: goto label_1e4c48;
        case 0x1e4c4cu: goto label_1e4c4c;
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c54u: goto label_1e4c54;
        case 0x1e4c58u: goto label_1e4c58;
        case 0x1e4c5cu: goto label_1e4c5c;
        case 0x1e4c60u: goto label_1e4c60;
        case 0x1e4c64u: goto label_1e4c64;
        case 0x1e4c68u: goto label_1e4c68;
        case 0x1e4c6cu: goto label_1e4c6c;
        case 0x1e4c70u: goto label_1e4c70;
        case 0x1e4c74u: goto label_1e4c74;
        case 0x1e4c78u: goto label_1e4c78;
        case 0x1e4c7cu: goto label_1e4c7c;
        case 0x1e4c80u: goto label_1e4c80;
        case 0x1e4c84u: goto label_1e4c84;
        case 0x1e4c88u: goto label_1e4c88;
        case 0x1e4c8cu: goto label_1e4c8c;
        case 0x1e4c90u: goto label_1e4c90;
        case 0x1e4c94u: goto label_1e4c94;
        case 0x1e4c98u: goto label_1e4c98;
        case 0x1e4c9cu: goto label_1e4c9c;
        case 0x1e4ca0u: goto label_1e4ca0;
        case 0x1e4ca4u: goto label_1e4ca4;
        case 0x1e4ca8u: goto label_1e4ca8;
        case 0x1e4cacu: goto label_1e4cac;
        case 0x1e4cb0u: goto label_1e4cb0;
        case 0x1e4cb4u: goto label_1e4cb4;
        case 0x1e4cb8u: goto label_1e4cb8;
        case 0x1e4cbcu: goto label_1e4cbc;
        case 0x1e4cc0u: goto label_1e4cc0;
        case 0x1e4cc4u: goto label_1e4cc4;
        case 0x1e4cc8u: goto label_1e4cc8;
        case 0x1e4cccu: goto label_1e4ccc;
        case 0x1e4cd0u: goto label_1e4cd0;
        case 0x1e4cd4u: goto label_1e4cd4;
        case 0x1e4cd8u: goto label_1e4cd8;
        case 0x1e4cdcu: goto label_1e4cdc;
        case 0x1e4ce0u: goto label_1e4ce0;
        case 0x1e4ce4u: goto label_1e4ce4;
        case 0x1e4ce8u: goto label_1e4ce8;
        case 0x1e4cecu: goto label_1e4cec;
        case 0x1e4cf0u: goto label_1e4cf0;
        case 0x1e4cf4u: goto label_1e4cf4;
        case 0x1e4cf8u: goto label_1e4cf8;
        case 0x1e4cfcu: goto label_1e4cfc;
        case 0x1e4d00u: goto label_1e4d00;
        case 0x1e4d04u: goto label_1e4d04;
        case 0x1e4d08u: goto label_1e4d08;
        case 0x1e4d0cu: goto label_1e4d0c;
        case 0x1e4d10u: goto label_1e4d10;
        case 0x1e4d14u: goto label_1e4d14;
        case 0x1e4d18u: goto label_1e4d18;
        case 0x1e4d1cu: goto label_1e4d1c;
        case 0x1e4d20u: goto label_1e4d20;
        case 0x1e4d24u: goto label_1e4d24;
        case 0x1e4d28u: goto label_1e4d28;
        case 0x1e4d2cu: goto label_1e4d2c;
        case 0x1e4d30u: goto label_1e4d30;
        case 0x1e4d34u: goto label_1e4d34;
        case 0x1e4d38u: goto label_1e4d38;
        case 0x1e4d3cu: goto label_1e4d3c;
        case 0x1e4d40u: goto label_1e4d40;
        case 0x1e4d44u: goto label_1e4d44;
        case 0x1e4d48u: goto label_1e4d48;
        case 0x1e4d4cu: goto label_1e4d4c;
        case 0x1e4d50u: goto label_1e4d50;
        case 0x1e4d54u: goto label_1e4d54;
        case 0x1e4d58u: goto label_1e4d58;
        case 0x1e4d5cu: goto label_1e4d5c;
        case 0x1e4d60u: goto label_1e4d60;
        case 0x1e4d64u: goto label_1e4d64;
        case 0x1e4d68u: goto label_1e4d68;
        case 0x1e4d6cu: goto label_1e4d6c;
        case 0x1e4d70u: goto label_1e4d70;
        case 0x1e4d74u: goto label_1e4d74;
        case 0x1e4d78u: goto label_1e4d78;
        case 0x1e4d7cu: goto label_1e4d7c;
        case 0x1e4d80u: goto label_1e4d80;
        case 0x1e4d84u: goto label_1e4d84;
        case 0x1e4d88u: goto label_1e4d88;
        case 0x1e4d8cu: goto label_1e4d8c;
        case 0x1e4d90u: goto label_1e4d90;
        case 0x1e4d94u: goto label_1e4d94;
        case 0x1e4d98u: goto label_1e4d98;
        case 0x1e4d9cu: goto label_1e4d9c;
        case 0x1e4da0u: goto label_1e4da0;
        case 0x1e4da4u: goto label_1e4da4;
        case 0x1e4da8u: goto label_1e4da8;
        case 0x1e4dacu: goto label_1e4dac;
        case 0x1e4db0u: goto label_1e4db0;
        case 0x1e4db4u: goto label_1e4db4;
        case 0x1e4db8u: goto label_1e4db8;
        case 0x1e4dbcu: goto label_1e4dbc;
        case 0x1e4dc0u: goto label_1e4dc0;
        case 0x1e4dc4u: goto label_1e4dc4;
        case 0x1e4dc8u: goto label_1e4dc8;
        case 0x1e4dccu: goto label_1e4dcc;
        case 0x1e4dd0u: goto label_1e4dd0;
        case 0x1e4dd4u: goto label_1e4dd4;
        case 0x1e4dd8u: goto label_1e4dd8;
        case 0x1e4ddcu: goto label_1e4ddc;
        case 0x1e4de0u: goto label_1e4de0;
        case 0x1e4de4u: goto label_1e4de4;
        case 0x1e4de8u: goto label_1e4de8;
        case 0x1e4decu: goto label_1e4dec;
        case 0x1e4df0u: goto label_1e4df0;
        case 0x1e4df4u: goto label_1e4df4;
        case 0x1e4df8u: goto label_1e4df8;
        case 0x1e4dfcu: goto label_1e4dfc;
        case 0x1e4e00u: goto label_1e4e00;
        case 0x1e4e04u: goto label_1e4e04;
        case 0x1e4e08u: goto label_1e4e08;
        case 0x1e4e0cu: goto label_1e4e0c;
        case 0x1e4e10u: goto label_1e4e10;
        case 0x1e4e14u: goto label_1e4e14;
        case 0x1e4e18u: goto label_1e4e18;
        case 0x1e4e1cu: goto label_1e4e1c;
        case 0x1e4e20u: goto label_1e4e20;
        case 0x1e4e24u: goto label_1e4e24;
        case 0x1e4e28u: goto label_1e4e28;
        case 0x1e4e2cu: goto label_1e4e2c;
        case 0x1e4e30u: goto label_1e4e30;
        case 0x1e4e34u: goto label_1e4e34;
        case 0x1e4e38u: goto label_1e4e38;
        case 0x1e4e3cu: goto label_1e4e3c;
        case 0x1e4e40u: goto label_1e4e40;
        case 0x1e4e44u: goto label_1e4e44;
        case 0x1e4e48u: goto label_1e4e48;
        case 0x1e4e4cu: goto label_1e4e4c;
        case 0x1e4e50u: goto label_1e4e50;
        case 0x1e4e54u: goto label_1e4e54;
        case 0x1e4e58u: goto label_1e4e58;
        case 0x1e4e5cu: goto label_1e4e5c;
        case 0x1e4e60u: goto label_1e4e60;
        case 0x1e4e64u: goto label_1e4e64;
        case 0x1e4e68u: goto label_1e4e68;
        case 0x1e4e6cu: goto label_1e4e6c;
        case 0x1e4e70u: goto label_1e4e70;
        case 0x1e4e74u: goto label_1e4e74;
        case 0x1e4e78u: goto label_1e4e78;
        case 0x1e4e7cu: goto label_1e4e7c;
        case 0x1e4e80u: goto label_1e4e80;
        case 0x1e4e84u: goto label_1e4e84;
        case 0x1e4e88u: goto label_1e4e88;
        case 0x1e4e8cu: goto label_1e4e8c;
        case 0x1e4e90u: goto label_1e4e90;
        case 0x1e4e94u: goto label_1e4e94;
        case 0x1e4e98u: goto label_1e4e98;
        case 0x1e4e9cu: goto label_1e4e9c;
        case 0x1e4ea0u: goto label_1e4ea0;
        case 0x1e4ea4u: goto label_1e4ea4;
        case 0x1e4ea8u: goto label_1e4ea8;
        case 0x1e4eacu: goto label_1e4eac;
        case 0x1e4eb0u: goto label_1e4eb0;
        case 0x1e4eb4u: goto label_1e4eb4;
        case 0x1e4eb8u: goto label_1e4eb8;
        case 0x1e4ebcu: goto label_1e4ebc;
        case 0x1e4ec0u: goto label_1e4ec0;
        case 0x1e4ec4u: goto label_1e4ec4;
        case 0x1e4ec8u: goto label_1e4ec8;
        case 0x1e4eccu: goto label_1e4ecc;
        case 0x1e4ed0u: goto label_1e4ed0;
        case 0x1e4ed4u: goto label_1e4ed4;
        case 0x1e4ed8u: goto label_1e4ed8;
        case 0x1e4edcu: goto label_1e4edc;
        case 0x1e4ee0u: goto label_1e4ee0;
        case 0x1e4ee4u: goto label_1e4ee4;
        case 0x1e4ee8u: goto label_1e4ee8;
        case 0x1e4eecu: goto label_1e4eec;
        case 0x1e4ef0u: goto label_1e4ef0;
        case 0x1e4ef4u: goto label_1e4ef4;
        case 0x1e4ef8u: goto label_1e4ef8;
        case 0x1e4efcu: goto label_1e4efc;
        case 0x1e4f00u: goto label_1e4f00;
        case 0x1e4f04u: goto label_1e4f04;
        case 0x1e4f08u: goto label_1e4f08;
        case 0x1e4f0cu: goto label_1e4f0c;
        case 0x1e4f10u: goto label_1e4f10;
        case 0x1e4f14u: goto label_1e4f14;
        case 0x1e4f18u: goto label_1e4f18;
        case 0x1e4f1cu: goto label_1e4f1c;
        case 0x1e4f20u: goto label_1e4f20;
        case 0x1e4f24u: goto label_1e4f24;
        case 0x1e4f28u: goto label_1e4f28;
        case 0x1e4f2cu: goto label_1e4f2c;
        case 0x1e4f30u: goto label_1e4f30;
        case 0x1e4f34u: goto label_1e4f34;
        case 0x1e4f38u: goto label_1e4f38;
        case 0x1e4f3cu: goto label_1e4f3c;
        case 0x1e4f40u: goto label_1e4f40;
        case 0x1e4f44u: goto label_1e4f44;
        case 0x1e4f48u: goto label_1e4f48;
        case 0x1e4f4cu: goto label_1e4f4c;
        case 0x1e4f50u: goto label_1e4f50;
        case 0x1e4f54u: goto label_1e4f54;
        case 0x1e4f58u: goto label_1e4f58;
        case 0x1e4f5cu: goto label_1e4f5c;
        case 0x1e4f60u: goto label_1e4f60;
        case 0x1e4f64u: goto label_1e4f64;
        case 0x1e4f68u: goto label_1e4f68;
        case 0x1e4f6cu: goto label_1e4f6c;
        case 0x1e4f70u: goto label_1e4f70;
        case 0x1e4f74u: goto label_1e4f74;
        case 0x1e4f78u: goto label_1e4f78;
        case 0x1e4f7cu: goto label_1e4f7c;
        case 0x1e4f80u: goto label_1e4f80;
        case 0x1e4f84u: goto label_1e4f84;
        case 0x1e4f88u: goto label_1e4f88;
        case 0x1e4f8cu: goto label_1e4f8c;
        case 0x1e4f90u: goto label_1e4f90;
        case 0x1e4f94u: goto label_1e4f94;
        case 0x1e4f98u: goto label_1e4f98;
        case 0x1e4f9cu: goto label_1e4f9c;
        case 0x1e4fa0u: goto label_1e4fa0;
        case 0x1e4fa4u: goto label_1e4fa4;
        case 0x1e4fa8u: goto label_1e4fa8;
        case 0x1e4facu: goto label_1e4fac;
        case 0x1e4fb0u: goto label_1e4fb0;
        case 0x1e4fb4u: goto label_1e4fb4;
        case 0x1e4fb8u: goto label_1e4fb8;
        case 0x1e4fbcu: goto label_1e4fbc;
        case 0x1e4fc0u: goto label_1e4fc0;
        case 0x1e4fc4u: goto label_1e4fc4;
        case 0x1e4fc8u: goto label_1e4fc8;
        case 0x1e4fccu: goto label_1e4fcc;
        case 0x1e4fd0u: goto label_1e4fd0;
        case 0x1e4fd4u: goto label_1e4fd4;
        case 0x1e4fd8u: goto label_1e4fd8;
        case 0x1e4fdcu: goto label_1e4fdc;
        case 0x1e4fe0u: goto label_1e4fe0;
        case 0x1e4fe4u: goto label_1e4fe4;
        case 0x1e4fe8u: goto label_1e4fe8;
        case 0x1e4fecu: goto label_1e4fec;
        case 0x1e4ff0u: goto label_1e4ff0;
        case 0x1e4ff4u: goto label_1e4ff4;
        case 0x1e4ff8u: goto label_1e4ff8;
        case 0x1e4ffcu: goto label_1e4ffc;
        case 0x1e5000u: goto label_1e5000;
        case 0x1e5004u: goto label_1e5004;
        case 0x1e5008u: goto label_1e5008;
        case 0x1e500cu: goto label_1e500c;
        case 0x1e5010u: goto label_1e5010;
        case 0x1e5014u: goto label_1e5014;
        case 0x1e5018u: goto label_1e5018;
        case 0x1e501cu: goto label_1e501c;
        case 0x1e5020u: goto label_1e5020;
        case 0x1e5024u: goto label_1e5024;
        case 0x1e5028u: goto label_1e5028;
        case 0x1e502cu: goto label_1e502c;
        case 0x1e5030u: goto label_1e5030;
        case 0x1e5034u: goto label_1e5034;
        case 0x1e5038u: goto label_1e5038;
        case 0x1e503cu: goto label_1e503c;
        case 0x1e5040u: goto label_1e5040;
        case 0x1e5044u: goto label_1e5044;
        case 0x1e5048u: goto label_1e5048;
        case 0x1e504cu: goto label_1e504c;
        case 0x1e5050u: goto label_1e5050;
        case 0x1e5054u: goto label_1e5054;
        case 0x1e5058u: goto label_1e5058;
        case 0x1e505cu: goto label_1e505c;
        case 0x1e5060u: goto label_1e5060;
        case 0x1e5064u: goto label_1e5064;
        case 0x1e5068u: goto label_1e5068;
        case 0x1e506cu: goto label_1e506c;
        case 0x1e5070u: goto label_1e5070;
        case 0x1e5074u: goto label_1e5074;
        case 0x1e5078u: goto label_1e5078;
        case 0x1e507cu: goto label_1e507c;
        case 0x1e5080u: goto label_1e5080;
        case 0x1e5084u: goto label_1e5084;
        case 0x1e5088u: goto label_1e5088;
        case 0x1e508cu: goto label_1e508c;
        case 0x1e5090u: goto label_1e5090;
        case 0x1e5094u: goto label_1e5094;
        case 0x1e5098u: goto label_1e5098;
        case 0x1e509cu: goto label_1e509c;
        case 0x1e50a0u: goto label_1e50a0;
        case 0x1e50a4u: goto label_1e50a4;
        case 0x1e50a8u: goto label_1e50a8;
        case 0x1e50acu: goto label_1e50ac;
        case 0x1e50b0u: goto label_1e50b0;
        case 0x1e50b4u: goto label_1e50b4;
        case 0x1e50b8u: goto label_1e50b8;
        case 0x1e50bcu: goto label_1e50bc;
        case 0x1e50c0u: goto label_1e50c0;
        case 0x1e50c4u: goto label_1e50c4;
        case 0x1e50c8u: goto label_1e50c8;
        case 0x1e50ccu: goto label_1e50cc;
        case 0x1e50d0u: goto label_1e50d0;
        case 0x1e50d4u: goto label_1e50d4;
        case 0x1e50d8u: goto label_1e50d8;
        case 0x1e50dcu: goto label_1e50dc;
        case 0x1e50e0u: goto label_1e50e0;
        case 0x1e50e4u: goto label_1e50e4;
        case 0x1e50e8u: goto label_1e50e8;
        case 0x1e50ecu: goto label_1e50ec;
        case 0x1e50f0u: goto label_1e50f0;
        case 0x1e50f4u: goto label_1e50f4;
        case 0x1e50f8u: goto label_1e50f8;
        case 0x1e50fcu: goto label_1e50fc;
        case 0x1e5100u: goto label_1e5100;
        case 0x1e5104u: goto label_1e5104;
        case 0x1e5108u: goto label_1e5108;
        case 0x1e510cu: goto label_1e510c;
        case 0x1e5110u: goto label_1e5110;
        case 0x1e5114u: goto label_1e5114;
        case 0x1e5118u: goto label_1e5118;
        case 0x1e511cu: goto label_1e511c;
        case 0x1e5120u: goto label_1e5120;
        case 0x1e5124u: goto label_1e5124;
        case 0x1e5128u: goto label_1e5128;
        case 0x1e512cu: goto label_1e512c;
        case 0x1e5130u: goto label_1e5130;
        case 0x1e5134u: goto label_1e5134;
        case 0x1e5138u: goto label_1e5138;
        case 0x1e513cu: goto label_1e513c;
        case 0x1e5140u: goto label_1e5140;
        case 0x1e5144u: goto label_1e5144;
        case 0x1e5148u: goto label_1e5148;
        case 0x1e514cu: goto label_1e514c;
        case 0x1e5150u: goto label_1e5150;
        case 0x1e5154u: goto label_1e5154;
        case 0x1e5158u: goto label_1e5158;
        case 0x1e515cu: goto label_1e515c;
        case 0x1e5160u: goto label_1e5160;
        case 0x1e5164u: goto label_1e5164;
        case 0x1e5168u: goto label_1e5168;
        case 0x1e516cu: goto label_1e516c;
        case 0x1e5170u: goto label_1e5170;
        case 0x1e5174u: goto label_1e5174;
        case 0x1e5178u: goto label_1e5178;
        case 0x1e517cu: goto label_1e517c;
        case 0x1e5180u: goto label_1e5180;
        case 0x1e5184u: goto label_1e5184;
        case 0x1e5188u: goto label_1e5188;
        case 0x1e518cu: goto label_1e518c;
        case 0x1e5190u: goto label_1e5190;
        case 0x1e5194u: goto label_1e5194;
        case 0x1e5198u: goto label_1e5198;
        case 0x1e519cu: goto label_1e519c;
        case 0x1e51a0u: goto label_1e51a0;
        case 0x1e51a4u: goto label_1e51a4;
        case 0x1e51a8u: goto label_1e51a8;
        case 0x1e51acu: goto label_1e51ac;
        case 0x1e51b0u: goto label_1e51b0;
        case 0x1e51b4u: goto label_1e51b4;
        case 0x1e51b8u: goto label_1e51b8;
        case 0x1e51bcu: goto label_1e51bc;
        case 0x1e51c0u: goto label_1e51c0;
        case 0x1e51c4u: goto label_1e51c4;
        default: return;
    }

label_1e49f8:
    // 0x1e49f8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1e49fc:
    if (ctx->pc == 0x1E49FCu) {
        ctx->pc = 0x1E4A00u;
        goto label_1e4a00;
    }
    ctx->pc = 0x1E49F8u;
    {
        const bool branch_taken_0x1e49f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e49f8) {
            ctx->pc = 0x1E49D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e49d8; return; }
        }
    }
    ctx->pc = 0x1E4A00u;
label_1e4a00:
    // 0x1e4a00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4a04:
    // 0x1e4a04: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
label_1e4a08:
    if (ctx->pc == 0x1E4A08u) {
        ctx->pc = 0x1E4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A04u;
        // 0x1e4a08: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A0Cu;
        goto label_1e4a0c;
    }
    ctx->pc = 0x1E4A04u;
    {
        const bool branch_taken_0x1e4a04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A04u;
        // 0x1e4a08: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a04) {
            ctx->pc = 0x1E4A10u;
            goto label_1e4a10;
        }
    }
    ctx->pc = 0x1E4A0Cu;
label_1e4a0c:
    // 0x1e4a0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a10:
    // 0x1e4a10: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x1e4a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e4a14:
    // 0x1e4a14: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
label_1e4a18:
    if (ctx->pc == 0x1E4A18u) {
        ctx->pc = 0x1E4A1Cu;
        goto label_1e4a1c;
    }
    ctx->pc = 0x1E4A14u;
    {
        const bool branch_taken_0x1e4a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a14) {
            ctx->pc = 0x1E4BA8u;
            goto label_1e4ba8;
        }
    }
    ctx->pc = 0x1E4A1Cu;
label_1e4a1c:
    // 0x1e4a1c: 0x8f858ea0  lw          $a1, -0x7160($gp)
    ctx->pc = 0x1e4a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938272)));
label_1e4a20:
    // 0x1e4a20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e4a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a24:
    // 0x1e4a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e4a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a28:
    // 0x1e4a28: 0xc07955c  jal         func_1E5570
label_1e4a2c:
    if (ctx->pc == 0x1E4A2Cu) {
        ctx->pc = 0x1E4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A28u;
        // 0x1e4a2c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A30u;
        goto label_1e4a30;
    }
    ctx->pc = 0x1E4A28u;
    SET_GPR_U32(ctx, 31, 0x1E4A30u);
    ctx->pc = 0x1E4A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A28u;
    // 0x1e4a2c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5570u;
    { ctx->pc = 0x1e5570; return; }
    ctx->pc = 0x1E4A30u;
label_1e4a30:
    // 0x1e4a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4a34:
    // 0x1e4a34: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_1e4a38:
    if (ctx->pc == 0x1E4A38u) {
        ctx->pc = 0x1E4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A34u;
        // 0x1e4a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A3Cu;
        goto label_1e4a3c;
    }
    ctx->pc = 0x1E4A34u;
    {
        const bool branch_taken_0x1e4a34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A34u;
        // 0x1e4a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a34) {
            ctx->pc = 0x1E4A70u;
            goto label_1e4a70;
        }
    }
    ctx->pc = 0x1E4A3Cu;
label_1e4a3c:
    // 0x1e4a3c: 0xc07b1ac  jal         func_1EC6B0
label_1e4a40:
    if (ctx->pc == 0x1E4A40u) {
        ctx->pc = 0x1E4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A3Cu;
        // 0x1e4a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A44u;
        goto label_1e4a44;
    }
    ctx->pc = 0x1E4A3Cu;
    SET_GPR_U32(ctx, 31, 0x1E4A44u);
    ctx->pc = 0x1E4A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A3Cu;
    // 0x1e4a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    { ctx->pc = 0x1ec6b0; return; }
    ctx->pc = 0x1E4A44u;
label_1e4a44:
    // 0x1e4a44: 0x8f848ea0  lw          $a0, -0x7160($gp)
    ctx->pc = 0x1e4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938272)));
label_1e4a48:
    // 0x1e4a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4a4c:
    // 0x1e4a4c: 0xaf828e58  sw          $v0, -0x71A8($gp)
    ctx->pc = 0x1e4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938200), GPR_U32(ctx, 2));
label_1e4a50:
    // 0x1e4a50: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1e4a54:
    // 0x1e4a54: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1e4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_1e4a58:
    // 0x1e4a58: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1e4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e4a5c:
    // 0x1e4a5c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e4a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e4a60:
    // 0x1e4a60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4a64:
    // 0x1e4a64: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1e4a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1e4a68:
    // 0x1e4a68: 0xaf828e54  sw          $v0, -0x71AC($gp)
    ctx->pc = 0x1e4a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938196), GPR_U32(ctx, 2));
label_1e4a6c:
    // 0x1e4a6c: 0xaf808e50  sw          $zero, -0x71B0($gp)
    ctx->pc = 0x1e4a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 0));
label_1e4a70:
    // 0x1e4a70: 0x16200016  bnez        $s1, . + 4 + (0x16 << 2)
label_1e4a74:
    if (ctx->pc == 0x1E4A74u) {
        ctx->pc = 0x1E4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A70u;
        // 0x1e4a74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A78u;
        goto label_1e4a78;
    }
    ctx->pc = 0x1E4A70u;
    {
        const bool branch_taken_0x1e4a70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A70u;
        // 0x1e4a74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a70) {
            ctx->pc = 0x1E4ACCu;
            goto label_1e4acc;
        }
    }
    ctx->pc = 0x1E4A78u;
label_1e4a78:
    // 0x1e4a78: 0x12820014  beq         $s4, $v0, . + 4 + (0x14 << 2)
label_1e4a7c:
    if (ctx->pc == 0x1E4A7Cu) {
        ctx->pc = 0x1E4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A78u;
        // 0x1e4a7c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A80u;
        goto label_1e4a80;
    }
    ctx->pc = 0x1E4A78u;
    {
        const bool branch_taken_0x1e4a78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A78u;
        // 0x1e4a7c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a78) {
            ctx->pc = 0x1E4ACCu;
            goto label_1e4acc;
        }
    }
    ctx->pc = 0x1E4A80u;
label_1e4a80:
    // 0x1e4a80: 0x8f838e9c  lw          $v1, -0x7164($gp)
    ctx->pc = 0x1e4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e4a84:
    // 0x1e4a84: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1e4a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1e4a88:
    // 0x1e4a88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a8c:
    // 0x1e4a8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a90:
    // 0x1e4a90: 0x24a53120  addiu       $a1, $a1, 0x3120
    ctx->pc = 0x1e4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12576));
label_1e4a94:
    // 0x1e4a94: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e4a98:
    if (ctx->pc == 0x1E4A98u) {
        ctx->pc = 0x1E4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A94u;
        // 0x1e4a98: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A9Cu;
        goto label_1e4a9c;
    }
    ctx->pc = 0x1E4A94u;
    {
        const bool branch_taken_0x1e4a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A94u;
        // 0x1e4a98: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a94) {
            ctx->pc = 0x1E4AC0u;
            goto label_1e4ac0;
        }
    }
    ctx->pc = 0x1E4A9Cu;
label_1e4a9c:
    // 0x1e4a9c: 0x0  nop
    ctx->pc = 0x1e4a9cu;
    // NOP
label_1e4aa0:
    // 0x1e4aa0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1e4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1e4aa4:
    // 0x1e4aa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4aa8:
    // 0x1e4aa8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_1e4aac:
    if (ctx->pc == 0x1E4AACu) {
        ctx->pc = 0x1E4AB0u;
        goto label_1e4ab0;
    }
    ctx->pc = 0x1E4AA8u;
    {
        const bool branch_taken_0x1e4aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e4aa8) {
            ctx->pc = 0x1E4AB8u;
            goto label_1e4ab8;
        }
    }
    ctx->pc = 0x1E4AB0u;
label_1e4ab0:
    // 0x1e4ab0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e4ab4:
    if (ctx->pc == 0x1E4AB4u) {
        ctx->pc = 0x1E4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AB0u;
        // 0x1e4ab4: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AB8u;
        goto label_1e4ab8;
    }
    ctx->pc = 0x1E4AB0u;
    {
        const bool branch_taken_0x1e4ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AB0u;
        // 0x1e4ab4: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ab0) {
            ctx->pc = 0x1E4ACCu;
            goto label_1e4acc;
        }
    }
    ctx->pc = 0x1E4AB8u;
label_1e4ab8:
    // 0x1e4ab8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1e4ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1e4abc:
    // 0x1e4abc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e4abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e4ac0:
    // 0x1e4ac0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1e4ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e4ac4:
    // 0x1e4ac4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1e4ac8:
    if (ctx->pc == 0x1E4AC8u) {
        ctx->pc = 0x1E4ACCu;
        goto label_1e4acc;
    }
    ctx->pc = 0x1E4AC4u;
    {
        const bool branch_taken_0x1e4ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ac4) {
            ctx->pc = 0x1E4A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a9c;
        }
    }
    ctx->pc = 0x1E4ACCu;
label_1e4acc:
    // 0x1e4acc: 0x0  nop
    ctx->pc = 0x1e4accu;
    // NOP
label_1e4ad0:
    // 0x1e4ad0: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x1e4ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e4ad4:
    // 0x1e4ad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e4ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4ad8:
    // 0x1e4ad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4adc:
    // 0x1e4adc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e4adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ae0:
    // 0x1e4ae0: 0xc079884  jal         func_1E6210
label_1e4ae4:
    if (ctx->pc == 0x1E4AE4u) {
        ctx->pc = 0x1E4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AE0u;
        // 0x1e4ae4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AE8u;
        goto label_1e4ae8;
    }
    ctx->pc = 0x1E4AE0u;
    SET_GPR_U32(ctx, 31, 0x1E4AE8u);
    ctx->pc = 0x1E4AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AE0u;
    // 0x1e4ae4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6210u;
    { ctx->pc = 0x1e6210; return; }
    ctx->pc = 0x1E4AE8u;
label_1e4ae8:
    // 0x1e4ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4aec:
    // 0x1e4aec: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x1e4aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_1e4af0:
    // 0x1e4af0: 0xc0796d4  jal         func_1E5B50
label_1e4af4:
    if (ctx->pc == 0x1E4AF4u) {
        ctx->pc = 0x1E4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AF0u;
        // 0x1e4af4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AF8u;
        goto label_1e4af8;
    }
    ctx->pc = 0x1E4AF0u;
    SET_GPR_U32(ctx, 31, 0x1E4AF8u);
    ctx->pc = 0x1E4AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AF0u;
    // 0x1e4af4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5B50u;
    { ctx->pc = 0x1e5b50; return; }
    ctx->pc = 0x1E4AF8u;
label_1e4af8:
    // 0x1e4af8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4afc:
    // 0x1e4afc: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1e4b00:
    if (ctx->pc == 0x1E4B00u) {
        ctx->pc = 0x1E4B04u;
        goto label_1e4b04;
    }
    ctx->pc = 0x1E4AFCu;
    {
        const bool branch_taken_0x1e4afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4afc) {
            ctx->pc = 0x1E4B30u;
            goto label_1e4b30;
        }
    }
    ctx->pc = 0x1E4B04u;
label_1e4b04:
    // 0x1e4b04: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x1e4b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e4b08:
    // 0x1e4b08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e4b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b0c:
    // 0x1e4b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b10:
    // 0x1e4b10: 0xc079884  jal         func_1E6210
label_1e4b14:
    if (ctx->pc == 0x1E4B14u) {
        ctx->pc = 0x1E4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B10u;
        // 0x1e4b14: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B18u;
        goto label_1e4b18;
    }
    ctx->pc = 0x1E4B10u;
    SET_GPR_U32(ctx, 31, 0x1E4B18u);
    ctx->pc = 0x1E4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B10u;
    // 0x1e4b14: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6210u;
    { ctx->pc = 0x1e6210; return; }
    ctx->pc = 0x1E4B18u;
label_1e4b18:
    // 0x1e4b18: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e4b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e4b1c:
    // 0x1e4b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4b20:
    // 0x1e4b20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e4b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b24:
    // 0x1e4b24: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1e4b24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1e4b28:
    // 0x1e4b28: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
label_1e4b2c:
    if (ctx->pc == 0x1E4B2Cu) {
        ctx->pc = 0x1E4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B28u;
        // 0x1e4b2c: 0xaf828e80  sw          $v0, -0x7180($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B30u;
        goto label_1e4b30;
    }
    ctx->pc = 0x1E4B28u;
    {
        const bool branch_taken_0x1e4b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B28u;
        // 0x1e4b2c: 0xaf828e80  sw          $v0, -0x7180($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b28) {
            ctx->pc = 0x1E4A1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a1c;
        }
    }
    ctx->pc = 0x1E4B30u;
label_1e4b30:
    // 0x1e4b30: 0x8f828e94  lw          $v0, -0x716C($gp)
    ctx->pc = 0x1e4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
label_1e4b34:
    // 0x1e4b34: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1e4b38:
    if (ctx->pc == 0x1E4B38u) {
        ctx->pc = 0x1E4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B34u;
        // 0x1e4b38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B3Cu;
        goto label_1e4b3c;
    }
    ctx->pc = 0x1E4B34u;
    {
        const bool branch_taken_0x1e4b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B34u;
        // 0x1e4b38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b34) {
            ctx->pc = 0x1E4BA8u;
            goto label_1e4ba8;
        }
    }
    ctx->pc = 0x1E4B3Cu;
label_1e4b3c:
    // 0x1e4b3c: 0x1662001a  bne         $s3, $v0, . + 4 + (0x1A << 2)
label_1e4b40:
    if (ctx->pc == 0x1E4B40u) {
        ctx->pc = 0x1E4B44u;
        goto label_1e4b44;
    }
    ctx->pc = 0x1E4B3Cu;
    {
        const bool branch_taken_0x1e4b3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4b3c) {
            ctx->pc = 0x1E4BA8u;
            goto label_1e4ba8;
        }
    }
    ctx->pc = 0x1E4B44u;
label_1e4b44:
    // 0x1e4b44: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
label_1e4b48:
    if (ctx->pc == 0x1E4B48u) {
        ctx->pc = 0x1E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B44u;
        // 0x1e4b48: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B4Cu;
        goto label_1e4b4c;
    }
    ctx->pc = 0x1E4B44u;
    {
        const bool branch_taken_0x1e4b44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B44u;
        // 0x1e4b48: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b44) {
            ctx->pc = 0x1E4B98u;
            goto label_1e4b98;
        }
    }
    ctx->pc = 0x1E4B4Cu;
label_1e4b4c:
    // 0x1e4b4c: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
label_1e4b50:
    if (ctx->pc == 0x1E4B50u) {
        ctx->pc = 0x1E4B54u;
        goto label_1e4b54;
    }
    ctx->pc = 0x1E4B4Cu;
    {
        const bool branch_taken_0x1e4b4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4b4c) {
            ctx->pc = 0x1E4B80u;
            goto label_1e4b80;
        }
    }
    ctx->pc = 0x1E4B54u;
label_1e4b54:
    // 0x1e4b54: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e4b58:
    // 0x1e4b58: 0x12820009  beq         $s4, $v0, . + 4 + (0x9 << 2)
label_1e4b5c:
    if (ctx->pc == 0x1E4B5Cu) {
        ctx->pc = 0x1E4B60u;
        goto label_1e4b60;
    }
    ctx->pc = 0x1E4B58u;
    {
        const bool branch_taken_0x1e4b58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4b58) {
            ctx->pc = 0x1E4B80u;
            goto label_1e4b80;
        }
    }
    ctx->pc = 0x1E4B60u;
label_1e4b60:
    // 0x1e4b60: 0xc07b1a8  jal         func_1EC6A0
label_1e4b64:
    if (ctx->pc == 0x1E4B64u) {
        ctx->pc = 0x1E4B68u;
        goto label_1e4b68;
    }
    ctx->pc = 0x1E4B60u;
    SET_GPR_U32(ctx, 31, 0x1E4B68u);
    ctx->pc = 0x1EC6A0u;
    { ctx->pc = 0x1ec6a0; return; }
    ctx->pc = 0x1E4B68u;
label_1e4b68:
    // 0x1e4b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e4b6c:
    if (ctx->pc == 0x1E4B6Cu) {
        ctx->pc = 0x1E4B70u;
        goto label_1e4b70;
    }
    ctx->pc = 0x1E4B68u;
    {
        const bool branch_taken_0x1e4b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b68) {
            ctx->pc = 0x1E4B80u;
            goto label_1e4b80;
        }
    }
    ctx->pc = 0x1E4B70u;
label_1e4b70:
    // 0x1e4b70: 0xc07b1a4  jal         func_1EC690
label_1e4b74:
    if (ctx->pc == 0x1E4B74u) {
        ctx->pc = 0x1E4B78u;
        goto label_1e4b78;
    }
    ctx->pc = 0x1E4B70u;
    SET_GPR_U32(ctx, 31, 0x1E4B78u);
    ctx->pc = 0x1EC690u;
    { ctx->pc = 0x1ec690; return; }
    ctx->pc = 0x1E4B78u;
label_1e4b78:
    // 0x1e4b78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e4b7c:
    if (ctx->pc == 0x1E4B7Cu) {
        ctx->pc = 0x1E4B80u;
        goto label_1e4b80;
    }
    ctx->pc = 0x1E4B78u;
    {
        const bool branch_taken_0x1e4b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b78) {
            ctx->pc = 0x1E4BA8u;
            goto label_1e4ba8;
        }
    }
    ctx->pc = 0x1E4B80u;
label_1e4b80:
    // 0x1e4b80: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x1e4b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e4b84:
    // 0x1e4b84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e4b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b88:
    // 0x1e4b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b8c:
    // 0x1e4b8c: 0xc079884  jal         func_1E6210
label_1e4b90:
    if (ctx->pc == 0x1E4B90u) {
        ctx->pc = 0x1E4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B8Cu;
        // 0x1e4b90: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B94u;
        goto label_1e4b94;
    }
    ctx->pc = 0x1E4B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4B94u);
    ctx->pc = 0x1E4B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B8Cu;
    // 0x1e4b90: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6210u;
    { ctx->pc = 0x1e6210; return; }
    ctx->pc = 0x1E4B94u;
label_1e4b94:
    // 0x1e4b94: 0xaf808e80  sw          $zero, -0x7180($gp)
    ctx->pc = 0x1e4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 0));
label_1e4b98:
    // 0x1e4b98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e4b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e4b9c:
    // 0x1e4b9c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e4b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e4ba0:
    // 0x1e4ba0: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_1e4ba4:
    if (ctx->pc == 0x1E4BA4u) {
        ctx->pc = 0x1E4BA8u;
        goto label_1e4ba8;
    }
    ctx->pc = 0x1E4BA0u;
    {
        const bool branch_taken_0x1e4ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ba0) {
            ctx->pc = 0x1E4A1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a1c;
        }
    }
    ctx->pc = 0x1E4BA8u;
label_1e4ba8:
    // 0x1e4ba8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e4ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e4bac:
    // 0x1e4bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4bb0:
    // 0x1e4bb0: 0xc04e188  jal         func_138620
label_1e4bb4:
    if (ctx->pc == 0x1E4BB4u) {
        ctx->pc = 0x1E4BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BB0u;
        // 0x1e4bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4BB8u;
        goto label_1e4bb8;
    }
    ctx->pc = 0x1E4BB0u;
    SET_GPR_U32(ctx, 31, 0x1E4BB8u);
    ctx->pc = 0x1E4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4BB0u;
    // 0x1e4bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1E4BB0u, 0x1E4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BB8u;
label_1e4bb8:
    // 0x1e4bb8: 0xc04e198  jal         func_138660
label_1e4bbc:
    if (ctx->pc == 0x1E4BBCu) {
        ctx->pc = 0x1E4BC0u;
        goto label_1e4bc0;
    }
    ctx->pc = 0x1E4BB8u;
    SET_GPR_U32(ctx, 31, 0x1E4BC0u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E4BB8u, 0x1E4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BC0u;
label_1e4bc0:
    // 0x1e4bc0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1e4bc4:
    if (ctx->pc == 0x1E4BC4u) {
        ctx->pc = 0x1E4BC8u;
        goto label_1e4bc8;
    }
    ctx->pc = 0x1E4BC0u;
    {
        const bool branch_taken_0x1e4bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bc0) {
            ctx->pc = 0x1E4BF0u;
            goto label_1e4bf0;
        }
    }
    ctx->pc = 0x1E4BC8u;
label_1e4bc8:
    // 0x1e4bc8: 0xc0799a0  jal         func_1E6680
label_1e4bcc:
    if (ctx->pc == 0x1E4BCCu) {
        ctx->pc = 0x1E4BD0u;
        goto label_1e4bd0;
    }
    ctx->pc = 0x1E4BC8u;
    SET_GPR_U32(ctx, 31, 0x1E4BD0u);
    ctx->pc = 0x1E6680u;
    { ctx->pc = 0x1e6680; return; }
    ctx->pc = 0x1E4BD0u;
label_1e4bd0:
    // 0x1e4bd0: 0xc04e198  jal         func_138660
label_1e4bd4:
    if (ctx->pc == 0x1E4BD4u) {
        ctx->pc = 0x1E4BD8u;
        goto label_1e4bd8;
    }
    ctx->pc = 0x1E4BD0u;
    SET_GPR_U32(ctx, 31, 0x1E4BD8u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E4BD0u, 0x1E4BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BD8u;
label_1e4bd8:
    // 0x1e4bd8: 0x0  nop
    ctx->pc = 0x1e4bd8u;
    // NOP
label_1e4bdc:
    // 0x1e4bdc: 0x0  nop
    ctx->pc = 0x1e4bdcu;
    // NOP
label_1e4be0:
    // 0x1e4be0: 0x0  nop
    ctx->pc = 0x1e4be0u;
    // NOP
label_1e4be4:
    // 0x1e4be4: 0x0  nop
    ctx->pc = 0x1e4be4u;
    // NOP
label_1e4be8:
    // 0x1e4be8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1e4bec:
    if (ctx->pc == 0x1E4BECu) {
        ctx->pc = 0x1E4BF0u;
        goto label_1e4bf0;
    }
    ctx->pc = 0x1E4BE8u;
    {
        const bool branch_taken_0x1e4be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4be8) {
            ctx->pc = 0x1E4BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4bc8;
        }
    }
    ctx->pc = 0x1E4BF0u;
label_1e4bf0:
    // 0x1e4bf0: 0x8f828e94  lw          $v0, -0x716C($gp)
    ctx->pc = 0x1e4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
label_1e4bf4:
    // 0x1e4bf4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1e4bf8:
    if (ctx->pc == 0x1E4BF8u) {
        ctx->pc = 0x1E4BFCu;
        goto label_1e4bfc;
    }
    ctx->pc = 0x1E4BF4u;
    {
        const bool branch_taken_0x1e4bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bf4) {
            ctx->pc = 0x1E4C1Cu;
            goto label_1e4c1c;
        }
    }
    ctx->pc = 0x1E4BFCu;
label_1e4bfc:
    // 0x1e4bfc: 0x8f828ea0  lw          $v0, -0x7160($gp)
    ctx->pc = 0x1e4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938272)));
label_1e4c00:
    // 0x1e4c00: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1e4c00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1e4c04:
    // 0x1e4c04: 0x8f828ea4  lw          $v0, -0x715C($gp)
    ctx->pc = 0x1e4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938276)));
label_1e4c08:
    // 0x1e4c08: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1e4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1e4c0c:
    // 0x1e4c0c: 0x8f828e88  lw          $v0, -0x7178($gp)
    ctx->pc = 0x1e4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938248)));
label_1e4c10:
    // 0x1e4c10: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1e4c10u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_1e4c14:
    // 0x1e4c14: 0x8f828e8c  lw          $v0, -0x7174($gp)
    ctx->pc = 0x1e4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938252)));
label_1e4c18:
    // 0x1e4c18: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1e4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_1e4c1c:
    // 0x1e4c1c: 0xc060258  jal         func_180960
label_1e4c20:
    if (ctx->pc == 0x1E4C20u) {
        ctx->pc = 0x1E4C24u;
        goto label_1e4c24;
    }
    ctx->pc = 0x1E4C1Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C24u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E4C1Cu, 0x1E4C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C24u;
label_1e4c24:
    // 0x1e4c24: 0xc060258  jal         func_180960
label_1e4c28:
    if (ctx->pc == 0x1E4C28u) {
        ctx->pc = 0x1E4C2Cu;
        goto label_1e4c2c;
    }
    ctx->pc = 0x1E4C24u;
    SET_GPR_U32(ctx, 31, 0x1E4C2Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E4C24u, 0x1E4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C2Cu;
label_1e4c2c:
    // 0x1e4c2c: 0xc079320  jal         func_1E4C80
label_1e4c30:
    if (ctx->pc == 0x1E4C30u) {
        ctx->pc = 0x1E4C34u;
        goto label_1e4c34;
    }
    ctx->pc = 0x1E4C2Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C34u);
    ctx->pc = 0x1E4C80u;
    goto label_1e4c80;
    ctx->pc = 0x1E4C34u;
label_1e4c34:
    // 0x1e4c34: 0x8f848e94  lw          $a0, -0x716C($gp)
    ctx->pc = 0x1e4c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
label_1e4c38:
    // 0x1e4c38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e4c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4c3c:
    // 0x1e4c3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e4c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e4c40:
    // 0x1e4c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4c44:
    // 0x1e4c44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e4c44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e4c48:
    // 0x1e4c48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e4c48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4c4c:
    // 0x1e4c4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e4c4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e4c50:
    // 0x1e4c50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e4c50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4c54:
    // 0x1e4c54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4c58:
    // 0x1e4c58: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1e4c58u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1e4c5c:
    // 0x1e4c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4c60:
    // 0x1e4c60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4c64:
    // 0x1e4c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4c68:
    // 0x1e4c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4c6c:
    // 0x1e4c6c: 0x3e00008  jr          $ra
label_1e4c70:
    if (ctx->pc == 0x1E4C70u) {
        ctx->pc = 0x1E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C6Cu;
        // 0x1e4c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C74u;
        goto label_1e4c74;
    }
    ctx->pc = 0x1E4C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C6Cu;
        // 0x1e4c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4C74u;
label_1e4c74:
    // 0x1e4c74: 0x0  nop
    ctx->pc = 0x1e4c74u;
    // NOP
label_1e4c78:
    // 0x1e4c78: 0x0  nop
    ctx->pc = 0x1e4c78u;
    // NOP
label_1e4c7c:
    // 0x1e4c7c: 0x0  nop
    ctx->pc = 0x1e4c7cu;
    // NOP
label_1e4c80:
    // 0x1e4c80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e4c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e4c84:
    // 0x1e4c84: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e4c88:
    // 0x1e4c88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e4c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e4c8c:
    // 0x1e4c8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e4c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e4c90:
    // 0x1e4c90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e4c94:
    // 0x1e4c94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4c98:
    // 0x1e4c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4c9c:
    // 0x1e4c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4ca0:
    // 0x1e4ca0: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
label_1e4ca4:
    // 0x1e4ca4: 0xc070ea8  jal         func_1C3AA0
label_1e4ca8:
    if (ctx->pc == 0x1E4CA8u) {
        ctx->pc = 0x1E4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA4u;
        // 0x1e4ca8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CACu;
        goto label_1e4cac;
    }
    ctx->pc = 0x1E4CA4u;
    SET_GPR_U32(ctx, 31, 0x1E4CACu);
    ctx->pc = 0x1E4CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CA4u;
    // 0x1e4ca8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E4CACu;
label_1e4cac:
    // 0x1e4cac: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
label_1e4cb0:
    // 0x1e4cb0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e4cb4:
    // 0x1e4cb4: 0xc070ea8  jal         func_1C3AA0
label_1e4cb8:
    if (ctx->pc == 0x1E4CB8u) {
        ctx->pc = 0x1E4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CB4u;
        // 0x1e4cb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CBCu;
        goto label_1e4cbc;
    }
    ctx->pc = 0x1E4CB4u;
    SET_GPR_U32(ctx, 31, 0x1E4CBCu);
    ctx->pc = 0x1E4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CB4u;
    // 0x1e4cb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E4CBCu;
label_1e4cbc:
    // 0x1e4cbc: 0xc070038  jal         func_1C00E0
label_1e4cc0:
    if (ctx->pc == 0x1E4CC0u) {
        ctx->pc = 0x1E4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CBCu;
        // 0x1e4cc0: 0x8f848e74  lw          $a0, -0x718C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CC4u;
        goto label_1e4cc4;
    }
    ctx->pc = 0x1E4CBCu;
    SET_GPR_U32(ctx, 31, 0x1E4CC4u);
    ctx->pc = 0x1E4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CBCu;
    // 0x1e4cc0: 0x8f848e74  lw          $a0, -0x718C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4CC4u;
label_1e4cc4:
    // 0x1e4cc4: 0xc070038  jal         func_1C00E0
label_1e4cc8:
    if (ctx->pc == 0x1E4CC8u) {
        ctx->pc = 0x1E4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CC4u;
        // 0x1e4cc8: 0x8f848e70  lw          $a0, -0x7190($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CCCu;
        goto label_1e4ccc;
    }
    ctx->pc = 0x1E4CC4u;
    SET_GPR_U32(ctx, 31, 0x1E4CCCu);
    ctx->pc = 0x1E4CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CC4u;
    // 0x1e4cc8: 0x8f848e70  lw          $a0, -0x7190($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4CCCu;
label_1e4ccc:
    // 0x1e4ccc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cd0:
    // 0x1e4cd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e4cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cd4:
    // 0x1e4cd4: 0x27828e68  addiu       $v0, $gp, -0x7198
    ctx->pc = 0x1e4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938216));
label_1e4cd8:
    // 0x1e4cd8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4cdc:
    // 0x1e4cdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4ce0:
    // 0x1e4ce0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4ce4:
    if (ctx->pc == 0x1E4CE4u) {
        ctx->pc = 0x1E4CE8u;
        goto label_1e4ce8;
    }
    ctx->pc = 0x1E4CE0u;
    {
        const bool branch_taken_0x1e4ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ce0) {
            ctx->pc = 0x1E4CF4u;
            goto label_1e4cf4;
        }
    }
    ctx->pc = 0x1E4CE8u;
label_1e4ce8:
    // 0x1e4ce8: 0xc070038  jal         func_1C00E0
label_1e4cec:
    if (ctx->pc == 0x1E4CECu) {
        ctx->pc = 0x1E4CF0u;
        goto label_1e4cf0;
    }
    ctx->pc = 0x1E4CE8u;
    SET_GPR_U32(ctx, 31, 0x1E4CF0u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4CF0u;
label_1e4cf0:
    // 0x1e4cf0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4cf4:
    // 0x1e4cf4: 0x0  nop
    ctx->pc = 0x1e4cf4u;
    // NOP
label_1e4cf8:
    // 0x1e4cf8: 0x27828e60  addiu       $v0, $gp, -0x71A0
    ctx->pc = 0x1e4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938208));
label_1e4cfc:
    // 0x1e4cfc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4d00:
    // 0x1e4d00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d04:
    // 0x1e4d04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4d08:
    if (ctx->pc == 0x1E4D08u) {
        ctx->pc = 0x1E4D0Cu;
        goto label_1e4d0c;
    }
    ctx->pc = 0x1E4D04u;
    {
        const bool branch_taken_0x1e4d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d04) {
            ctx->pc = 0x1E4D18u;
            goto label_1e4d18;
        }
    }
    ctx->pc = 0x1E4D0Cu;
label_1e4d0c:
    // 0x1e4d0c: 0xc070038  jal         func_1C00E0
label_1e4d10:
    if (ctx->pc == 0x1E4D10u) {
        ctx->pc = 0x1E4D14u;
        goto label_1e4d14;
    }
    ctx->pc = 0x1E4D0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D14u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4D14u;
label_1e4d14:
    // 0x1e4d14: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4d18:
    // 0x1e4d18: 0x27828e48  addiu       $v0, $gp, -0x71B8
    ctx->pc = 0x1e4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938184));
label_1e4d1c:
    // 0x1e4d1c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4d20:
    // 0x1e4d20: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d24:
    // 0x1e4d24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4d28:
    if (ctx->pc == 0x1E4D28u) {
        ctx->pc = 0x1E4D2Cu;
        goto label_1e4d2c;
    }
    ctx->pc = 0x1E4D24u;
    {
        const bool branch_taken_0x1e4d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d24) {
            ctx->pc = 0x1E4D38u;
            goto label_1e4d38;
        }
    }
    ctx->pc = 0x1E4D2Cu;
label_1e4d2c:
    // 0x1e4d2c: 0xc070038  jal         func_1C00E0
label_1e4d30:
    if (ctx->pc == 0x1E4D30u) {
        ctx->pc = 0x1E4D34u;
        goto label_1e4d34;
    }
    ctx->pc = 0x1E4D2Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D34u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4D34u;
label_1e4d34:
    // 0x1e4d34: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4d38:
    // 0x1e4d38: 0x27828e30  addiu       $v0, $gp, -0x71D0
    ctx->pc = 0x1e4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938160));
label_1e4d3c:
    // 0x1e4d3c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4d3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4d40:
    // 0x1e4d40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d44:
    // 0x1e4d44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4d48:
    if (ctx->pc == 0x1E4D48u) {
        ctx->pc = 0x1E4D4Cu;
        goto label_1e4d4c;
    }
    ctx->pc = 0x1E4D44u;
    {
        const bool branch_taken_0x1e4d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d44) {
            ctx->pc = 0x1E4D58u;
            goto label_1e4d58;
        }
    }
    ctx->pc = 0x1E4D4Cu;
label_1e4d4c:
    // 0x1e4d4c: 0xc070038  jal         func_1C00E0
label_1e4d50:
    if (ctx->pc == 0x1E4D50u) {
        ctx->pc = 0x1E4D54u;
        goto label_1e4d54;
    }
    ctx->pc = 0x1E4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D54u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4D54u;
label_1e4d54:
    // 0x1e4d54: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4d58:
    // 0x1e4d58: 0x27828e18  addiu       $v0, $gp, -0x71E8
    ctx->pc = 0x1e4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938136));
label_1e4d5c:
    // 0x1e4d5c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4d60:
    // 0x1e4d60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d64:
    // 0x1e4d64: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4d68:
    if (ctx->pc == 0x1E4D68u) {
        ctx->pc = 0x1E4D6Cu;
        goto label_1e4d6c;
    }
    ctx->pc = 0x1E4D64u;
    {
        const bool branch_taken_0x1e4d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d64) {
            ctx->pc = 0x1E4D78u;
            goto label_1e4d78;
        }
    }
    ctx->pc = 0x1E4D6Cu;
label_1e4d6c:
    // 0x1e4d6c: 0xc070038  jal         func_1C00E0
label_1e4d70:
    if (ctx->pc == 0x1E4D70u) {
        ctx->pc = 0x1E4D74u;
        goto label_1e4d74;
    }
    ctx->pc = 0x1E4D6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D74u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4D74u;
label_1e4d74:
    // 0x1e4d74: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4d78:
    // 0x1e4d78: 0x27828e00  addiu       $v0, $gp, -0x7200
    ctx->pc = 0x1e4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938112));
label_1e4d7c:
    // 0x1e4d7c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4d80:
    // 0x1e4d80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4d84:
    // 0x1e4d84: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4d88:
    if (ctx->pc == 0x1E4D88u) {
        ctx->pc = 0x1E4D8Cu;
        goto label_1e4d8c;
    }
    ctx->pc = 0x1E4D84u;
    {
        const bool branch_taken_0x1e4d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4d84) {
            ctx->pc = 0x1E4D98u;
            goto label_1e4d98;
        }
    }
    ctx->pc = 0x1E4D8Cu;
label_1e4d8c:
    // 0x1e4d8c: 0xc070038  jal         func_1C00E0
label_1e4d90:
    if (ctx->pc == 0x1E4D90u) {
        ctx->pc = 0x1E4D94u;
        goto label_1e4d94;
    }
    ctx->pc = 0x1E4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4D94u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4D94u;
label_1e4d94:
    // 0x1e4d94: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4d98:
    // 0x1e4d98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4d9c:
    // 0x1e4d9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e4d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4da0:
    // 0x1e4da0: 0x0  nop
    ctx->pc = 0x1e4da0u;
    // NOP
label_1e4da4:
    // 0x1e4da4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e4da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e4da8:
    // 0x1e4da8: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x1e4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
label_1e4dac:
    // 0x1e4dac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4db0:
    // 0x1e4db0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e4db4:
    // 0x1e4db4: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1e4db4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e4db8:
    // 0x1e4db8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e4dbc:
    // 0x1e4dbc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4dc0:
    if (ctx->pc == 0x1E4DC0u) {
        ctx->pc = 0x1E4DC4u;
        goto label_1e4dc4;
    }
    ctx->pc = 0x1E4DBCu;
    {
        const bool branch_taken_0x1e4dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4dbc) {
            ctx->pc = 0x1E4DD0u;
            goto label_1e4dd0;
        }
    }
    ctx->pc = 0x1E4DC4u;
label_1e4dc4:
    // 0x1e4dc4: 0xc070038  jal         func_1C00E0
label_1e4dc8:
    if (ctx->pc == 0x1E4DC8u) {
        ctx->pc = 0x1E4DCCu;
        goto label_1e4dcc;
    }
    ctx->pc = 0x1E4DC4u;
    SET_GPR_U32(ctx, 31, 0x1E4DCCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4DCCu;
label_1e4dcc:
    // 0x1e4dcc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1e4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1e4dd0:
    // 0x1e4dd0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e4dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e4dd4:
    // 0x1e4dd4: 0x2a220029  slti        $v0, $s1, 0x29
    ctx->pc = 0x1e4dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)41) ? 1 : 0);
label_1e4dd8:
    // 0x1e4dd8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e4ddc:
    if (ctx->pc == 0x1E4DDCu) {
        ctx->pc = 0x1E4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DD8u;
        // 0x1e4ddc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4DE0u;
        goto label_1e4de0;
    }
    ctx->pc = 0x1E4DD8u;
    {
        const bool branch_taken_0x1e4dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4DD8u;
        // 0x1e4ddc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4dd8) {
            ctx->pc = 0x1E4DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4da0;
        }
    }
    ctx->pc = 0x1E4DE0u;
label_1e4de0:
    // 0x1e4de0: 0x27828dd8  addiu       $v0, $gp, -0x7228
    ctx->pc = 0x1e4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938072));
label_1e4de4:
    // 0x1e4de4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4de8:
    // 0x1e4de8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4dec:
    // 0x1e4dec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4df0:
    if (ctx->pc == 0x1E4DF0u) {
        ctx->pc = 0x1E4DF4u;
        goto label_1e4df4;
    }
    ctx->pc = 0x1E4DECu;
    {
        const bool branch_taken_0x1e4dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4dec) {
            ctx->pc = 0x1E4E00u;
            goto label_1e4e00;
        }
    }
    ctx->pc = 0x1E4DF4u;
label_1e4df4:
    // 0x1e4df4: 0xc070038  jal         func_1C00E0
label_1e4df8:
    if (ctx->pc == 0x1E4DF8u) {
        ctx->pc = 0x1E4DFCu;
        goto label_1e4dfc;
    }
    ctx->pc = 0x1E4DF4u;
    SET_GPR_U32(ctx, 31, 0x1E4DFCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4DFCu;
label_1e4dfc:
    // 0x1e4dfc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1e4dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1e4e00:
    // 0x1e4e00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e4e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e4e04:
    // 0x1e4e04: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e4e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e4e08:
    // 0x1e4e08: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_1e4e0c:
    if (ctx->pc == 0x1E4E0Cu) {
        ctx->pc = 0x1E4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E08u;
        // 0x1e4e0c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E10u;
        goto label_1e4e10;
    }
    ctx->pc = 0x1E4E08u;
    {
        const bool branch_taken_0x1e4e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E08u;
        // 0x1e4e0c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e08) {
            ctx->pc = 0x1E4CD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4cd4;
        }
    }
    ctx->pc = 0x1E4E10u;
label_1e4e10:
    // 0x1e4e10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e14:
    // 0x1e4e14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4e18:
    // 0x1e4e18: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e4e1c:
    // 0x1e4e1c: 0x24422f80  addiu       $v0, $v0, 0x2F80
    ctx->pc = 0x1e4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
label_1e4e20:
    // 0x1e4e20: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1e4e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e4e24:
    // 0x1e4e24: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e4e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e4e28:
    // 0x1e4e28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4e2c:
    if (ctx->pc == 0x1E4E2Cu) {
        ctx->pc = 0x1E4E30u;
        goto label_1e4e30;
    }
    ctx->pc = 0x1E4E28u;
    {
        const bool branch_taken_0x1e4e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e28) {
            ctx->pc = 0x1E4E3Cu;
            goto label_1e4e3c;
        }
    }
    ctx->pc = 0x1E4E30u;
label_1e4e30:
    // 0x1e4e30: 0xc070038  jal         func_1C00E0
label_1e4e34:
    if (ctx->pc == 0x1E4E34u) {
        ctx->pc = 0x1E4E38u;
        goto label_1e4e38;
    }
    ctx->pc = 0x1E4E30u;
    SET_GPR_U32(ctx, 31, 0x1E4E38u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4E38u;
label_1e4e38:
    // 0x1e4e38: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1e4e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1e4e3c:
    // 0x1e4e3c: 0x0  nop
    ctx->pc = 0x1e4e3cu;
    // NOP
label_1e4e40:
    // 0x1e4e40: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e4e44:
    // 0x1e4e44: 0x24422e30  addiu       $v0, $v0, 0x2E30
    ctx->pc = 0x1e4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11824));
label_1e4e48:
    // 0x1e4e48: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1e4e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e4e4c:
    // 0x1e4e4c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e4e50:
    // 0x1e4e50: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4e54:
    if (ctx->pc == 0x1E4E54u) {
        ctx->pc = 0x1E4E58u;
        goto label_1e4e58;
    }
    ctx->pc = 0x1E4E50u;
    {
        const bool branch_taken_0x1e4e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4e50) {
            ctx->pc = 0x1E4E64u;
            goto label_1e4e64;
        }
    }
    ctx->pc = 0x1E4E58u;
label_1e4e58:
    // 0x1e4e58: 0xc070038  jal         func_1C00E0
label_1e4e5c:
    if (ctx->pc == 0x1E4E5Cu) {
        ctx->pc = 0x1E4E60u;
        goto label_1e4e60;
    }
    ctx->pc = 0x1E4E58u;
    SET_GPR_U32(ctx, 31, 0x1E4E60u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4E60u;
label_1e4e60:
    // 0x1e4e60: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1e4e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1e4e64:
    // 0x1e4e64: 0x0  nop
    ctx->pc = 0x1e4e64u;
    // NOP
label_1e4e68:
    // 0x1e4e68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e4e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e4e6c:
    // 0x1e4e6c: 0x2a020054  slti        $v0, $s0, 0x54
    ctx->pc = 0x1e4e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)84) ? 1 : 0);
label_1e4e70:
    // 0x1e4e70: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1e4e74:
    if (ctx->pc == 0x1E4E74u) {
        ctx->pc = 0x1E4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E70u;
        // 0x1e4e74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4E78u;
        goto label_1e4e78;
    }
    ctx->pc = 0x1E4E70u;
    {
        const bool branch_taken_0x1e4e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E70u;
        // 0x1e4e74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e70) {
            ctx->pc = 0x1E4E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4e18;
        }
    }
    ctx->pc = 0x1E4E78u;
label_1e4e78:
    // 0x1e4e78: 0xc07ab58  jal         func_1EAD60
label_1e4e7c:
    if (ctx->pc == 0x1E4E7Cu) {
        ctx->pc = 0x1E4E80u;
        goto label_1e4e80;
    }
    ctx->pc = 0x1E4E78u;
    SET_GPR_U32(ctx, 31, 0x1E4E80u);
    ctx->pc = 0x1EAD60u;
    { ctx->pc = 0x1ead60; return; }
    ctx->pc = 0x1E4E80u;
label_1e4e80:
    // 0x1e4e80: 0xc04e19c  jal         func_138670
label_1e4e84:
    if (ctx->pc == 0x1E4E84u) {
        ctx->pc = 0x1E4E88u;
        goto label_1e4e88;
    }
    ctx->pc = 0x1E4E80u;
    SET_GPR_U32(ctx, 31, 0x1E4E88u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x1E4E80u, 0x1E4E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E88u;
label_1e4e88:
    // 0x1e4e88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e4e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4e8c:
    // 0x1e4e8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4e8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4e90:
    // 0x1e4e90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4e90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4e94:
    // 0x1e4e94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4e98:
    // 0x1e4e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4e9c:
    // 0x1e4e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4ea0:
    // 0x1e4ea0: 0x3e00008  jr          $ra
label_1e4ea4:
    if (ctx->pc == 0x1E4EA4u) {
        ctx->pc = 0x1E4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EA0u;
        // 0x1e4ea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EA8u;
        goto label_1e4ea8;
    }
    ctx->pc = 0x1E4EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EA0u;
        // 0x1e4ea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4EA8u;
label_1e4ea8:
    // 0x1e4ea8: 0x0  nop
    ctx->pc = 0x1e4ea8u;
    // NOP
label_1e4eac:
    // 0x1e4eac: 0x0  nop
    ctx->pc = 0x1e4eacu;
    // NOP
label_1e4eb0:
    // 0x1e4eb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1e4eb4:
    // 0x1e4eb4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e4eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1e4eb8:
    // 0x1e4eb8: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1e4eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1e4ebc:
    // 0x1e4ebc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1e4ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1e4ec0:
    // 0x1e4ec0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1e4ec0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ec4:
    // 0x1e4ec4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1e4ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1e4ec8:
    // 0x1e4ec8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1e4ec8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ecc:
    // 0x1e4ecc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e4eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1e4ed0:
    // 0x1e4ed0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e4ed0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ed4:
    // 0x1e4ed4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e4ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1e4ed8:
    // 0x1e4ed8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e4ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1e4edc:
    // 0x1e4edc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e4edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e4ee0:
    // 0x1e4ee0: 0xc07a058  jal         func_1E8160
label_1e4ee4:
    if (ctx->pc == 0x1E4EE4u) {
        ctx->pc = 0x1E4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EE0u;
        // 0x1e4ee4: 0x7fb00030  sq          $s0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EE8u;
        goto label_1e4ee8;
    }
    ctx->pc = 0x1E4EE0u;
    SET_GPR_U32(ctx, 31, 0x1E4EE8u);
    ctx->pc = 0x1E4EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EE0u;
    // 0x1e4ee4: 0x7fb00030  sq          $s0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8160u;
    { ctx->pc = 0x1e8160; return; }
    ctx->pc = 0x1E4EE8u;
label_1e4ee8:
    // 0x1e4ee8: 0xc041738  jal         func_105CE0
label_1e4eec:
    if (ctx->pc == 0x1E4EECu) {
        ctx->pc = 0x1E4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EE8u;
        // 0x1e4eec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EF0u;
        goto label_1e4ef0;
    }
    ctx->pc = 0x1E4EE8u;
    SET_GPR_U32(ctx, 31, 0x1E4EF0u);
    ctx->pc = 0x1E4EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EE8u;
    // 0x1e4eec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1E4EE8u, 0x1E4EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EF0u;
label_1e4ef0:
    // 0x1e4ef0: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1e4ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1e4ef4:
    // 0x1e4ef4: 0xc070080  jal         func_1C0200
label_1e4ef8:
    if (ctx->pc == 0x1E4EF8u) {
        ctx->pc = 0x1E4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EF4u;
        // 0x1e4ef8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4EFCu;
        goto label_1e4efc;
    }
    ctx->pc = 0x1E4EF4u;
    SET_GPR_U32(ctx, 31, 0x1E4EFCu);
    ctx->pc = 0x1E4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EF4u;
    // 0x1e4ef8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E4EFCu;
label_1e4efc:
    // 0x1e4efc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e4efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4f00:
    // 0x1e4f00: 0xc0416e4  jal         func_105B90
label_1e4f04:
    if (ctx->pc == 0x1E4F04u) {
        ctx->pc = 0x1E4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F00u;
        // 0x1e4f04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F08u;
        goto label_1e4f08;
    }
    ctx->pc = 0x1E4F00u;
    SET_GPR_U32(ctx, 31, 0x1E4F08u);
    ctx->pc = 0x1E4F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F00u;
    // 0x1e4f04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1E4F00u, 0x1E4F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F08u;
label_1e4f08:
    // 0x1e4f08: 0xaf828e74  sw          $v0, -0x718C($gp)
    ctx->pc = 0x1e4f08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938228), GPR_U32(ctx, 2));
label_1e4f0c:
    // 0x1e4f0c: 0xc041738  jal         func_105CE0
label_1e4f10:
    if (ctx->pc == 0x1E4F10u) {
        ctx->pc = 0x1E4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F0Cu;
        // 0x1e4f10: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F14u;
        goto label_1e4f14;
    }
    ctx->pc = 0x1E4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F14u);
    ctx->pc = 0x1E4F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F0Cu;
    // 0x1e4f10: 0x240407f9  addiu       $a0, $zero, 0x7F9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1E4F0Cu, 0x1E4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F14u;
label_1e4f14:
    // 0x1e4f14: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1e4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1e4f18:
    // 0x1e4f18: 0xc070080  jal         func_1C0200
label_1e4f1c:
    if (ctx->pc == 0x1E4F1Cu) {
        ctx->pc = 0x1E4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F18u;
        // 0x1e4f1c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F20u;
        goto label_1e4f20;
    }
    ctx->pc = 0x1E4F18u;
    SET_GPR_U32(ctx, 31, 0x1E4F20u);
    ctx->pc = 0x1E4F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F18u;
    // 0x1e4f1c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E4F20u;
label_1e4f20:
    // 0x1e4f20: 0x240407f9  addiu       $a0, $zero, 0x7F9
    ctx->pc = 0x1e4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2041));
label_1e4f24:
    // 0x1e4f24: 0xc0416e4  jal         func_105B90
label_1e4f28:
    if (ctx->pc == 0x1E4F28u) {
        ctx->pc = 0x1E4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F24u;
        // 0x1e4f28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F2Cu;
        goto label_1e4f2c;
    }
    ctx->pc = 0x1E4F24u;
    SET_GPR_U32(ctx, 31, 0x1E4F2Cu);
    ctx->pc = 0x1E4F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F24u;
    // 0x1e4f28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1E4F24u, 0x1E4F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F2Cu;
label_1e4f2c:
    // 0x1e4f2c: 0xaf828e70  sw          $v0, -0x7190($gp)
    ctx->pc = 0x1e4f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938224), GPR_U32(ctx, 2));
label_1e4f30:
    // 0x1e4f30: 0xc041738  jal         func_105CE0
label_1e4f34:
    if (ctx->pc == 0x1E4F34u) {
        ctx->pc = 0x1E4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F30u;
        // 0x1e4f34: 0x240407ec  addiu       $a0, $zero, 0x7EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2028));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F38u;
        goto label_1e4f38;
    }
    ctx->pc = 0x1E4F30u;
    SET_GPR_U32(ctx, 31, 0x1E4F38u);
    ctx->pc = 0x1E4F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F30u;
    // 0x1e4f34: 0x240407ec  addiu       $a0, $zero, 0x7EC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1E4F30u, 0x1E4F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F38u;
label_1e4f38:
    // 0x1e4f38: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1e4f38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1e4f3c:
    // 0x1e4f3c: 0xc070080  jal         func_1C0200
label_1e4f40:
    if (ctx->pc == 0x1E4F40u) {
        ctx->pc = 0x1E4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F3Cu;
        // 0x1e4f40: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F44u;
        goto label_1e4f44;
    }
    ctx->pc = 0x1E4F3Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F44u);
    ctx->pc = 0x1E4F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F3Cu;
    // 0x1e4f40: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E4F44u;
label_1e4f44:
    // 0x1e4f44: 0x240407ec  addiu       $a0, $zero, 0x7EC
    ctx->pc = 0x1e4f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2028));
label_1e4f48:
    // 0x1e4f48: 0xc0416e4  jal         func_105B90
label_1e4f4c:
    if (ctx->pc == 0x1E4F4Cu) {
        ctx->pc = 0x1E4F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F48u;
        // 0x1e4f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F50u;
        goto label_1e4f50;
    }
    ctx->pc = 0x1E4F48u;
    SET_GPR_U32(ctx, 31, 0x1E4F50u);
    ctx->pc = 0x1E4F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F48u;
    // 0x1e4f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1E4F48u, 0x1E4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F50u;
label_1e4f50:
    // 0x1e4f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e4f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f54:
    // 0x1e4f54: 0xc060678  jal         func_1819E0
label_1e4f58:
    if (ctx->pc == 0x1E4F58u) {
        ctx->pc = 0x1E4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F54u;
        // 0x1e4f58: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F5Cu;
        goto label_1e4f5c;
    }
    ctx->pc = 0x1E4F54u;
    SET_GPR_U32(ctx, 31, 0x1E4F5Cu);
    ctx->pc = 0x1E4F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F54u;
    // 0x1e4f58: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1E4F54u, 0x1E4F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F5Cu;
label_1e4f5c:
    // 0x1e4f5c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1e4f5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1e4f60:
    // 0x1e4f60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e4f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f64:
    // 0x1e4f64: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1e4f64u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_1e4f68:
    // 0x1e4f68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e4f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f6c:
    // 0x1e4f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f70:
    // 0x1e4f70: 0xc0602c8  jal         func_180B20
label_1e4f74:
    if (ctx->pc == 0x1E4F74u) {
        ctx->pc = 0x1E4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F70u;
        // 0x1e4f74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F78u;
        goto label_1e4f78;
    }
    ctx->pc = 0x1E4F70u;
    SET_GPR_U32(ctx, 31, 0x1E4F78u);
    ctx->pc = 0x1E4F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F70u;
    // 0x1e4f74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1E4F70u, 0x1E4F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F78u;
label_1e4f78:
    // 0x1e4f78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e4f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f7c:
    // 0x1e4f7c: 0x26470018  addiu       $a3, $s2, 0x18
    ctx->pc = 0x1e4f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1e4f80:
    // 0x1e4f80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f84:
    // 0x1e4f84: 0x27a600ce  addiu       $a2, $sp, 0xCE
    ctx->pc = 0x1e4f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 206));
label_1e4f88:
    // 0x1e4f88: 0xc060390  jal         func_180E40
label_1e4f8c:
    if (ctx->pc == 0x1E4F8Cu) {
        ctx->pc = 0x1E4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F88u;
        // 0x1e4f8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F90u;
        goto label_1e4f90;
    }
    ctx->pc = 0x1E4F88u;
    SET_GPR_U32(ctx, 31, 0x1E4F90u);
    ctx->pc = 0x1E4F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F88u;
    // 0x1e4f8c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x1E4F88u, 0x1E4F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F90u;
label_1e4f90:
    // 0x1e4f90: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e4f94:
    // 0x1e4f94: 0x246330e0  addiu       $v1, $v1, 0x30E0
    ctx->pc = 0x1e4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12512));
label_1e4f98:
    // 0x1e4f98: 0x738821  addu        $s1, $v1, $s3
    ctx->pc = 0x1e4f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1e4f9c:
    // 0x1e4f9c: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1e4f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1e4fa0:
    // 0x1e4fa0: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1e4fa0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4fa4:
    // 0x1e4fa4: 0xc06063c  jal         func_1818F0
label_1e4fa8:
    if (ctx->pc == 0x1E4FA8u) {
        ctx->pc = 0x1E4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FA4u;
        // 0x1e4fa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FACu;
        goto label_1e4fac;
    }
    ctx->pc = 0x1E4FA4u;
    SET_GPR_U32(ctx, 31, 0x1E4FACu);
    ctx->pc = 0x1E4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4FA4u;
    // 0x1e4fa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x1E4FA4u, 0x1E4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4FACu;
label_1e4fac:
    // 0x1e4fac: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1e4facu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_1e4fb0:
    // 0x1e4fb0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e4fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e4fb4:
    // 0x1e4fb4: 0x87b100ce  lh          $s1, 0xCE($sp)
    ctx->pc = 0x1e4fb4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 206)));
label_1e4fb8:
    // 0x1e4fb8: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1e4fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_1e4fbc:
    // 0x1e4fbc: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1e4fc0:
    if (ctx->pc == 0x1E4FC0u) {
        ctx->pc = 0x1E4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FBCu;
        // 0x1e4fc0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FC4u;
        goto label_1e4fc4;
    }
    ctx->pc = 0x1E4FBCu;
    {
        const bool branch_taken_0x1e4fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FBCu;
        // 0x1e4fc0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fbc) {
            ctx->pc = 0x1E4F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4f6c;
        }
    }
    ctx->pc = 0x1E4FC4u;
label_1e4fc4:
    // 0x1e4fc4: 0xc070038  jal         func_1C00E0
label_1e4fc8:
    if (ctx->pc == 0x1E4FC8u) {
        ctx->pc = 0x1E4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FC4u;
        // 0x1e4fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FCCu;
        goto label_1e4fcc;
    }
    ctx->pc = 0x1E4FC4u;
    SET_GPR_U32(ctx, 31, 0x1E4FCCu);
    ctx->pc = 0x1E4FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4FC4u;
    // 0x1e4fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4FCCu;
label_1e4fcc:
    // 0x1e4fcc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fd0:
    // 0x1e4fd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e4fd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fd4:
    // 0x1e4fd4: 0x27828e68  addiu       $v0, $gp, -0x7198
    ctx->pc = 0x1e4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938216));
label_1e4fd8:
    // 0x1e4fd8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4fdc:
    // 0x1e4fdc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e4fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4fe0:
    // 0x1e4fe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e4fe4:
    if (ctx->pc == 0x1E4FE4u) {
        ctx->pc = 0x1E4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE0u;
        // 0x1e4fe4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FE8u;
        goto label_1e4fe8;
    }
    ctx->pc = 0x1E4FE0u;
    {
        const bool branch_taken_0x1e4fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE0u;
        // 0x1e4fe4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fe0) {
            ctx->pc = 0x1E4FF4u;
            goto label_1e4ff4;
        }
    }
    ctx->pc = 0x1E4FE8u;
label_1e4fe8:
    // 0x1e4fe8: 0xc070080  jal         func_1C0200
label_1e4fec:
    if (ctx->pc == 0x1E4FECu) {
        ctx->pc = 0x1E4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE8u;
        // 0x1e4fec: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FF0u;
        goto label_1e4ff0;
    }
    ctx->pc = 0x1E4FE8u;
    SET_GPR_U32(ctx, 31, 0x1E4FF0u);
    ctx->pc = 0x1E4FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4FE8u;
    // 0x1e4fec: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E4FF0u;
label_1e4ff0:
    // 0x1e4ff0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e4ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e4ff4:
    // 0x1e4ff4: 0x0  nop
    ctx->pc = 0x1e4ff4u;
    // NOP
label_1e4ff8:
    // 0x1e4ff8: 0x27828e30  addiu       $v0, $gp, -0x71D0
    ctx->pc = 0x1e4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938160));
label_1e4ffc:
    // 0x1e4ffc: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e5000:
    // 0x1e5000: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e5004:
    // 0x1e5004: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e5008:
    if (ctx->pc == 0x1E5008u) {
        ctx->pc = 0x1E5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5004u;
        // 0x1e5008: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E500Cu;
        goto label_1e500c;
    }
    ctx->pc = 0x1E5004u;
    {
        const bool branch_taken_0x1e5004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5004u;
        // 0x1e5008: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5004) {
            ctx->pc = 0x1E5018u;
            goto label_1e5018;
        }
    }
    ctx->pc = 0x1E500Cu;
label_1e500c:
    // 0x1e500c: 0xc070080  jal         func_1C0200
label_1e5010:
    if (ctx->pc == 0x1E5010u) {
        ctx->pc = 0x1E5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E500Cu;
        // 0x1e5010: 0x24050d10  addiu       $a1, $zero, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5014u;
        goto label_1e5014;
    }
    ctx->pc = 0x1E500Cu;
    SET_GPR_U32(ctx, 31, 0x1E5014u);
    ctx->pc = 0x1E5010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E500Cu;
    // 0x1e5010: 0x24050d10  addiu       $a1, $zero, 0xD10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E5014u;
label_1e5014:
    // 0x1e5014: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e5014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e5018:
    // 0x1e5018: 0x27828e18  addiu       $v0, $gp, -0x71E8
    ctx->pc = 0x1e5018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938136));
label_1e501c:
    // 0x1e501c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e501cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e5020:
    // 0x1e5020: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e5024:
    // 0x1e5024: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e5028:
    if (ctx->pc == 0x1E5028u) {
        ctx->pc = 0x1E5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5024u;
        // 0x1e5028: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E502Cu;
        goto label_1e502c;
    }
    ctx->pc = 0x1E5024u;
    {
        const bool branch_taken_0x1e5024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5024u;
        // 0x1e5028: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5024) {
            ctx->pc = 0x1E5038u;
            goto label_1e5038;
        }
    }
    ctx->pc = 0x1E502Cu;
label_1e502c:
    // 0x1e502c: 0xc070080  jal         func_1C0200
label_1e5030:
    if (ctx->pc == 0x1E5030u) {
        ctx->pc = 0x1E5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E502Cu;
        // 0x1e5030: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5034u;
        goto label_1e5034;
    }
    ctx->pc = 0x1E502Cu;
    SET_GPR_U32(ctx, 31, 0x1E5034u);
    ctx->pc = 0x1E5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E502Cu;
    // 0x1e5030: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E5034u;
label_1e5034:
    // 0x1e5034: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e5034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e5038:
    // 0x1e5038: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e5038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e503c:
    // 0x1e503c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e503cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5040:
    // 0x1e5040: 0x0  nop
    ctx->pc = 0x1e5040u;
    // NOP
label_1e5044:
    // 0x1e5044: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e5044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e5048:
    // 0x1e5048: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x1e5048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
label_1e504c:
    // 0x1e504c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e5050:
    // 0x1e5050: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e5050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e5054:
    // 0x1e5054: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1e5054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e5058:
    // 0x1e5058: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1e5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e505c:
    // 0x1e505c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e5060:
    if (ctx->pc == 0x1E5060u) {
        ctx->pc = 0x1E5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E505Cu;
        // 0x1e5060: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5064u;
        goto label_1e5064;
    }
    ctx->pc = 0x1E505Cu;
    {
        const bool branch_taken_0x1e505c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E505Cu;
        // 0x1e5060: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e505c) {
            ctx->pc = 0x1E5070u;
            goto label_1e5070;
        }
    }
    ctx->pc = 0x1E5064u;
label_1e5064:
    // 0x1e5064: 0xc070080  jal         func_1C0200
label_1e5068:
    if (ctx->pc == 0x1E5068u) {
        ctx->pc = 0x1E5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5064u;
        // 0x1e5068: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E506Cu;
        goto label_1e506c;
    }
    ctx->pc = 0x1E5064u;
    SET_GPR_U32(ctx, 31, 0x1E506Cu);
    ctx->pc = 0x1E5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5064u;
    // 0x1e5068: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E506Cu;
label_1e506c:
    // 0x1e506c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1e506cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1e5070:
    // 0x1e5070: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e5074:
    // 0x1e5074: 0x2a220029  slti        $v0, $s1, 0x29
    ctx->pc = 0x1e5074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)41) ? 1 : 0);
label_1e5078:
    // 0x1e5078: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e507c:
    if (ctx->pc == 0x1E507Cu) {
        ctx->pc = 0x1E507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5078u;
        // 0x1e507c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5080u;
        goto label_1e5080;
    }
    ctx->pc = 0x1E5078u;
    {
        const bool branch_taken_0x1e5078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5078u;
        // 0x1e507c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5078) {
            ctx->pc = 0x1E5040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5040;
        }
    }
    ctx->pc = 0x1E5080u;
label_1e5080:
    // 0x1e5080: 0x27828e00  addiu       $v0, $gp, -0x7200
    ctx->pc = 0x1e5080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938112));
label_1e5084:
    // 0x1e5084: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e5084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e5088:
    // 0x1e5088: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e5088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e508c:
    // 0x1e508c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e5090:
    if (ctx->pc == 0x1E5090u) {
        ctx->pc = 0x1E5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E508Cu;
        // 0x1e5090: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5094u;
        goto label_1e5094;
    }
    ctx->pc = 0x1E508Cu;
    {
        const bool branch_taken_0x1e508c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E508Cu;
        // 0x1e5090: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e508c) {
            ctx->pc = 0x1E50A0u;
            goto label_1e50a0;
        }
    }
    ctx->pc = 0x1E5094u;
label_1e5094:
    // 0x1e5094: 0xc070080  jal         func_1C0200
label_1e5098:
    if (ctx->pc == 0x1E5098u) {
        ctx->pc = 0x1E5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5094u;
        // 0x1e5098: 0x24050b30  addiu       $a1, $zero, 0xB30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E509Cu;
        goto label_1e509c;
    }
    ctx->pc = 0x1E5094u;
    SET_GPR_U32(ctx, 31, 0x1E509Cu);
    ctx->pc = 0x1E5098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5094u;
    // 0x1e5098: 0x24050b30  addiu       $a1, $zero, 0xB30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E509Cu;
label_1e509c:
    // 0x1e509c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e509cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e50a0:
    // 0x1e50a0: 0x27828dd8  addiu       $v0, $gp, -0x7228
    ctx->pc = 0x1e50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938072));
label_1e50a4:
    // 0x1e50a4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e50a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e50a8:
    // 0x1e50a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e50ac:
    // 0x1e50ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e50b0:
    if (ctx->pc == 0x1E50B0u) {
        ctx->pc = 0x1E50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50ACu;
        // 0x1e50b0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50B4u;
        goto label_1e50b4;
    }
    ctx->pc = 0x1E50ACu;
    {
        const bool branch_taken_0x1e50ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50ACu;
        // 0x1e50b0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50ac) {
            ctx->pc = 0x1E50C0u;
            goto label_1e50c0;
        }
    }
    ctx->pc = 0x1E50B4u;
label_1e50b4:
    // 0x1e50b4: 0xc070080  jal         func_1C0200
label_1e50b8:
    if (ctx->pc == 0x1E50B8u) {
        ctx->pc = 0x1E50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50B4u;
        // 0x1e50b8: 0x24050290  addiu       $a1, $zero, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50BCu;
        goto label_1e50bc;
    }
    ctx->pc = 0x1E50B4u;
    SET_GPR_U32(ctx, 31, 0x1E50BCu);
    ctx->pc = 0x1E50B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50B4u;
    // 0x1e50b8: 0x24050290  addiu       $a1, $zero, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E50BCu;
label_1e50bc:
    // 0x1e50bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e50bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e50c0:
    // 0x1e50c0: 0x27828e48  addiu       $v0, $gp, -0x71B8
    ctx->pc = 0x1e50c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938184));
label_1e50c4:
    // 0x1e50c4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e50c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e50c8:
    // 0x1e50c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e50cc:
    // 0x1e50cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e50d0:
    if (ctx->pc == 0x1E50D0u) {
        ctx->pc = 0x1E50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50CCu;
        // 0x1e50d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50D4u;
        goto label_1e50d4;
    }
    ctx->pc = 0x1E50CCu;
    {
        const bool branch_taken_0x1e50cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50CCu;
        // 0x1e50d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50cc) {
            ctx->pc = 0x1E50E0u;
            goto label_1e50e0;
        }
    }
    ctx->pc = 0x1E50D4u;
label_1e50d4:
    // 0x1e50d4: 0xc070080  jal         func_1C0200
label_1e50d8:
    if (ctx->pc == 0x1E50D8u) {
        ctx->pc = 0x1E50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50D4u;
        // 0x1e50d8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50DCu;
        goto label_1e50dc;
    }
    ctx->pc = 0x1E50D4u;
    SET_GPR_U32(ctx, 31, 0x1E50DCu);
    ctx->pc = 0x1E50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50D4u;
    // 0x1e50d8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E50DCu;
label_1e50dc:
    // 0x1e50dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e50dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e50e0:
    // 0x1e50e0: 0x27828e60  addiu       $v0, $gp, -0x71A0
    ctx->pc = 0x1e50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938208));
label_1e50e4:
    // 0x1e50e4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e50e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e50e8:
    // 0x1e50e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1e50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e50ec:
    // 0x1e50ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e50f0:
    if (ctx->pc == 0x1E50F0u) {
        ctx->pc = 0x1E50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50ECu;
        // 0x1e50f0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50F4u;
        goto label_1e50f4;
    }
    ctx->pc = 0x1E50ECu;
    {
        const bool branch_taken_0x1e50ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50ECu;
        // 0x1e50f0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50ec) {
            ctx->pc = 0x1E5100u;
            goto label_1e5100;
        }
    }
    ctx->pc = 0x1E50F4u;
label_1e50f4:
    // 0x1e50f4: 0xc070080  jal         func_1C0200
label_1e50f8:
    if (ctx->pc == 0x1E50F8u) {
        ctx->pc = 0x1E50F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50F4u;
        // 0x1e50f8: 0x240502a0  addiu       $a1, $zero, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50FCu;
        goto label_1e50fc;
    }
    ctx->pc = 0x1E50F4u;
    SET_GPR_U32(ctx, 31, 0x1E50FCu);
    ctx->pc = 0x1E50F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50F4u;
    // 0x1e50f8: 0x240502a0  addiu       $a1, $zero, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1E50FCu;
label_1e50fc:
    // 0x1e50fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e50fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e5100:
    // 0x1e5100: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e5100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e5104:
    // 0x1e5104: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e5104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e5108:
    // 0x1e5108: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_1e510c:
    if (ctx->pc == 0x1E510Cu) {
        ctx->pc = 0x1E510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5108u;
        // 0x1e510c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5110u;
        goto label_1e5110;
    }
    ctx->pc = 0x1E5108u;
    {
        const bool branch_taken_0x1e5108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5108u;
        // 0x1e510c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5108) {
            ctx->pc = 0x1E4FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4fd4;
        }
    }
    ctx->pc = 0x1E5110u;
label_1e5110:
    // 0x1e5110: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5114:
    // 0x1e5114: 0xaf958e98  sw          $s5, -0x7168($gp)
    ctx->pc = 0x1e5114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938264), GPR_U32(ctx, 21));
label_1e5118:
    // 0x1e5118: 0xac203110  sw          $zero, 0x3110($at)
    ctx->pc = 0x1e5118u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12560), GPR_U32(ctx, 0));
label_1e511c:
    // 0x1e511c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e511cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5120:
    // 0x1e5120: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5124:
    // 0x1e5124: 0xaf968ea0  sw          $s6, -0x7160($gp)
    ctx->pc = 0x1e5124u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938272), GPR_U32(ctx, 22));
label_1e5128:
    // 0x1e5128: 0xac203114  sw          $zero, 0x3114($at)
    ctx->pc = 0x1e5128u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12564), GPR_U32(ctx, 0));
label_1e512c:
    // 0x1e512c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e512cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5130:
    // 0x1e5130: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e5130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5134:
    // 0x1e5134: 0xaf978ea4  sw          $s7, -0x715C($gp)
    ctx->pc = 0x1e5134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938276), GPR_U32(ctx, 23));
label_1e5138:
    // 0x1e5138: 0xac203118  sw          $zero, 0x3118($at)
    ctx->pc = 0x1e5138u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12568), GPR_U32(ctx, 0));
label_1e513c:
    // 0x1e513c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e5140:
    // 0x1e5140: 0xaf808e88  sw          $zero, -0x7178($gp)
    ctx->pc = 0x1e5140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938248), GPR_U32(ctx, 0));
label_1e5144:
    // 0x1e5144: 0xaf808e8c  sw          $zero, -0x7174($gp)
    ctx->pc = 0x1e5144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938252), GPR_U32(ctx, 0));
label_1e5148:
    // 0x1e5148: 0xaf808e80  sw          $zero, -0x7180($gp)
    ctx->pc = 0x1e5148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 0));
label_1e514c:
    // 0x1e514c: 0xac20311c  sw          $zero, 0x311C($at)
    ctx->pc = 0x1e514cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12572), GPR_U32(ctx, 0));
label_1e5150:
    // 0x1e5150: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1e5150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1e5154:
    // 0x1e5154: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e5154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e5158:
    // 0x1e5158: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1e5158u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
label_1e515c:
    // 0x1e515c: 0x24c63420  addiu       $a2, $a2, 0x3420
    ctx->pc = 0x1e515cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13344));
label_1e5160:
    // 0x1e5160: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e5160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e5164:
    // 0x1e5164: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e5164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5168:
    // 0x1e5168: 0x24633110  addiu       $v1, $v1, 0x3110
    ctx->pc = 0x1e5168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12560));
label_1e516c:
    // 0x1e516c: 0x2508c990  addiu       $t0, $t0, -0x3670
    ctx->pc = 0x1e516cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953360));
label_1e5170:
    // 0x1e5170: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1e5170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e5174:
    // 0x1e5174: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x1e5174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1e5178:
    // 0x1e5178: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e5178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1e517c:
    // 0x1e517c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e517cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1e5180:
    // 0x1e5180: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x1e5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
label_1e5184:
    // 0x1e5184: 0x14470015  bne         $v0, $a3, . + 4 + (0x15 << 2)
label_1e5188:
    if (ctx->pc == 0x1E5188u) {
        ctx->pc = 0x1E5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5184u;
        // 0x1e5188: 0xca1021  addu        $v0, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E518Cu;
        goto label_1e518c;
    }
    ctx->pc = 0x1E5184u;
    {
        const bool branch_taken_0x1e5184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1E5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5184u;
        // 0x1e5188: 0xca1021  addu        $v0, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5184) {
            ctx->pc = 0x1E51DCu;
            { ctx->pc = 0x1e51dc; return; }
        }
    }
    ctx->pc = 0x1E518Cu;
label_1e518c:
    // 0x1e518c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e518cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1e5190:
    // 0x1e5190: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
label_1e5194:
    if (ctx->pc == 0x1E5194u) {
        ctx->pc = 0x1E5198u;
        goto label_1e5198;
    }
    ctx->pc = 0x1E5190u;
    {
        const bool branch_taken_0x1e5190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1e5190) {
            ctx->pc = 0x1E51C0u;
            goto label_1e51c0;
        }
    }
    ctx->pc = 0x1E5198u;
label_1e5198:
    // 0x1e5198: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
label_1e519c:
    if (ctx->pc == 0x1E519Cu) {
        ctx->pc = 0x1E51A0u;
        goto label_1e51a0;
    }
    ctx->pc = 0x1E5198u;
    {
        const bool branch_taken_0x1e5198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e5198) {
            ctx->pc = 0x1E51B8u;
            goto label_1e51b8;
        }
    }
    ctx->pc = 0x1E51A0u;
label_1e51a0:
    // 0x1e51a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e51a4:
    if (ctx->pc == 0x1E51A4u) {
        ctx->pc = 0x1E51A8u;
        goto label_1e51a8;
    }
    ctx->pc = 0x1E51A0u;
    {
        const bool branch_taken_0x1e51a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51a0) {
            ctx->pc = 0x1E51B0u;
            goto label_1e51b0;
        }
    }
    ctx->pc = 0x1E51A8u;
label_1e51a8:
    // 0x1e51a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e51ac:
    if (ctx->pc == 0x1E51ACu) {
        ctx->pc = 0x1E51B0u;
        goto label_1e51b0;
    }
    ctx->pc = 0x1E51A8u;
    {
        const bool branch_taken_0x1e51a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51a8) {
            ctx->pc = 0x1E51C8u;
            { ctx->pc = 0x1e51c8; return; }
        }
    }
    ctx->pc = 0x1E51B0u;
label_1e51b0:
    // 0x1e51b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e51b4:
    if (ctx->pc == 0x1E51B4u) {
        ctx->pc = 0x1E51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B0u;
        // 0x1e51b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51B8u;
        goto label_1e51b8;
    }
    ctx->pc = 0x1E51B0u;
    {
        const bool branch_taken_0x1e51b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B0u;
        // 0x1e51b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51b0) {
            ctx->pc = 0x1E51CCu;
            { ctx->pc = 0x1e51cc; return; }
        }
    }
    ctx->pc = 0x1E51B8u;
label_1e51b8:
    // 0x1e51b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e51bc:
    if (ctx->pc == 0x1E51BCu) {
        ctx->pc = 0x1E51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B8u;
        // 0x1e51bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51C0u;
        goto label_1e51c0;
    }
    ctx->pc = 0x1E51B8u;
    {
        const bool branch_taken_0x1e51b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B8u;
        // 0x1e51bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51b8) {
            ctx->pc = 0x1E51CCu;
            { ctx->pc = 0x1e51cc; return; }
        }
    }
    ctx->pc = 0x1E51C0u;
label_1e51c0:
    // 0x1e51c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e51c4:
    if (ctx->pc == 0x1E51C4u) {
        ctx->pc = 0x1E51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51C0u;
        // 0x1e51c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E51C8u;
        { ctx->pc = 0x1e51c8; return; }
    }
    ctx->pc = 0x1E51C0u;
    {
        const bool branch_taken_0x1e51c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51C0u;
        // 0x1e51c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51c0) {
            ctx->pc = 0x1E51CCu;
            { ctx->pc = 0x1e51cc; return; }
        }
    }
    ctx->pc = 0x1E51C8u;
    ctx->pc = 0x1e51c8u;
    return;
}

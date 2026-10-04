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


void FUN_0019b6a8_part112(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d19d8u: goto label_1d19d8;
        case 0x1d19dcu: goto label_1d19dc;
        case 0x1d19e0u: goto label_1d19e0;
        case 0x1d19e4u: goto label_1d19e4;
        case 0x1d19e8u: goto label_1d19e8;
        case 0x1d19ecu: goto label_1d19ec;
        case 0x1d19f0u: goto label_1d19f0;
        case 0x1d19f4u: goto label_1d19f4;
        case 0x1d19f8u: goto label_1d19f8;
        case 0x1d19fcu: goto label_1d19fc;
        case 0x1d1a00u: goto label_1d1a00;
        case 0x1d1a04u: goto label_1d1a04;
        case 0x1d1a08u: goto label_1d1a08;
        case 0x1d1a0cu: goto label_1d1a0c;
        case 0x1d1a10u: goto label_1d1a10;
        case 0x1d1a14u: goto label_1d1a14;
        case 0x1d1a18u: goto label_1d1a18;
        case 0x1d1a1cu: goto label_1d1a1c;
        case 0x1d1a20u: goto label_1d1a20;
        case 0x1d1a24u: goto label_1d1a24;
        case 0x1d1a28u: goto label_1d1a28;
        case 0x1d1a2cu: goto label_1d1a2c;
        case 0x1d1a30u: goto label_1d1a30;
        case 0x1d1a34u: goto label_1d1a34;
        case 0x1d1a38u: goto label_1d1a38;
        case 0x1d1a3cu: goto label_1d1a3c;
        case 0x1d1a40u: goto label_1d1a40;
        case 0x1d1a44u: goto label_1d1a44;
        case 0x1d1a48u: goto label_1d1a48;
        case 0x1d1a4cu: goto label_1d1a4c;
        case 0x1d1a50u: goto label_1d1a50;
        case 0x1d1a54u: goto label_1d1a54;
        case 0x1d1a58u: goto label_1d1a58;
        case 0x1d1a5cu: goto label_1d1a5c;
        case 0x1d1a60u: goto label_1d1a60;
        case 0x1d1a64u: goto label_1d1a64;
        case 0x1d1a68u: goto label_1d1a68;
        case 0x1d1a6cu: goto label_1d1a6c;
        case 0x1d1a70u: goto label_1d1a70;
        case 0x1d1a74u: goto label_1d1a74;
        case 0x1d1a78u: goto label_1d1a78;
        case 0x1d1a7cu: goto label_1d1a7c;
        case 0x1d1a80u: goto label_1d1a80;
        case 0x1d1a84u: goto label_1d1a84;
        case 0x1d1a88u: goto label_1d1a88;
        case 0x1d1a8cu: goto label_1d1a8c;
        case 0x1d1a90u: goto label_1d1a90;
        case 0x1d1a94u: goto label_1d1a94;
        case 0x1d1a98u: goto label_1d1a98;
        case 0x1d1a9cu: goto label_1d1a9c;
        case 0x1d1aa0u: goto label_1d1aa0;
        case 0x1d1aa4u: goto label_1d1aa4;
        case 0x1d1aa8u: goto label_1d1aa8;
        case 0x1d1aacu: goto label_1d1aac;
        case 0x1d1ab0u: goto label_1d1ab0;
        case 0x1d1ab4u: goto label_1d1ab4;
        case 0x1d1ab8u: goto label_1d1ab8;
        case 0x1d1abcu: goto label_1d1abc;
        case 0x1d1ac0u: goto label_1d1ac0;
        case 0x1d1ac4u: goto label_1d1ac4;
        case 0x1d1ac8u: goto label_1d1ac8;
        case 0x1d1accu: goto label_1d1acc;
        case 0x1d1ad0u: goto label_1d1ad0;
        case 0x1d1ad4u: goto label_1d1ad4;
        case 0x1d1ad8u: goto label_1d1ad8;
        case 0x1d1adcu: goto label_1d1adc;
        case 0x1d1ae0u: goto label_1d1ae0;
        case 0x1d1ae4u: goto label_1d1ae4;
        case 0x1d1ae8u: goto label_1d1ae8;
        case 0x1d1aecu: goto label_1d1aec;
        case 0x1d1af0u: goto label_1d1af0;
        case 0x1d1af4u: goto label_1d1af4;
        case 0x1d1af8u: goto label_1d1af8;
        case 0x1d1afcu: goto label_1d1afc;
        case 0x1d1b00u: goto label_1d1b00;
        case 0x1d1b04u: goto label_1d1b04;
        case 0x1d1b08u: goto label_1d1b08;
        case 0x1d1b0cu: goto label_1d1b0c;
        case 0x1d1b10u: goto label_1d1b10;
        case 0x1d1b14u: goto label_1d1b14;
        case 0x1d1b18u: goto label_1d1b18;
        case 0x1d1b1cu: goto label_1d1b1c;
        case 0x1d1b20u: goto label_1d1b20;
        case 0x1d1b24u: goto label_1d1b24;
        case 0x1d1b28u: goto label_1d1b28;
        case 0x1d1b2cu: goto label_1d1b2c;
        case 0x1d1b30u: goto label_1d1b30;
        case 0x1d1b34u: goto label_1d1b34;
        case 0x1d1b38u: goto label_1d1b38;
        case 0x1d1b3cu: goto label_1d1b3c;
        case 0x1d1b40u: goto label_1d1b40;
        case 0x1d1b44u: goto label_1d1b44;
        case 0x1d1b48u: goto label_1d1b48;
        case 0x1d1b4cu: goto label_1d1b4c;
        case 0x1d1b50u: goto label_1d1b50;
        case 0x1d1b54u: goto label_1d1b54;
        case 0x1d1b58u: goto label_1d1b58;
        case 0x1d1b5cu: goto label_1d1b5c;
        case 0x1d1b60u: goto label_1d1b60;
        case 0x1d1b64u: goto label_1d1b64;
        case 0x1d1b68u: goto label_1d1b68;
        case 0x1d1b6cu: goto label_1d1b6c;
        case 0x1d1b70u: goto label_1d1b70;
        case 0x1d1b74u: goto label_1d1b74;
        case 0x1d1b78u: goto label_1d1b78;
        case 0x1d1b7cu: goto label_1d1b7c;
        case 0x1d1b80u: goto label_1d1b80;
        case 0x1d1b84u: goto label_1d1b84;
        case 0x1d1b88u: goto label_1d1b88;
        case 0x1d1b8cu: goto label_1d1b8c;
        case 0x1d1b90u: goto label_1d1b90;
        case 0x1d1b94u: goto label_1d1b94;
        case 0x1d1b98u: goto label_1d1b98;
        case 0x1d1b9cu: goto label_1d1b9c;
        case 0x1d1ba0u: goto label_1d1ba0;
        case 0x1d1ba4u: goto label_1d1ba4;
        case 0x1d1ba8u: goto label_1d1ba8;
        case 0x1d1bacu: goto label_1d1bac;
        case 0x1d1bb0u: goto label_1d1bb0;
        case 0x1d1bb4u: goto label_1d1bb4;
        case 0x1d1bb8u: goto label_1d1bb8;
        case 0x1d1bbcu: goto label_1d1bbc;
        case 0x1d1bc0u: goto label_1d1bc0;
        case 0x1d1bc4u: goto label_1d1bc4;
        case 0x1d1bc8u: goto label_1d1bc8;
        case 0x1d1bccu: goto label_1d1bcc;
        case 0x1d1bd0u: goto label_1d1bd0;
        case 0x1d1bd4u: goto label_1d1bd4;
        case 0x1d1bd8u: goto label_1d1bd8;
        case 0x1d1bdcu: goto label_1d1bdc;
        case 0x1d1be0u: goto label_1d1be0;
        case 0x1d1be4u: goto label_1d1be4;
        case 0x1d1be8u: goto label_1d1be8;
        case 0x1d1becu: goto label_1d1bec;
        case 0x1d1bf0u: goto label_1d1bf0;
        case 0x1d1bf4u: goto label_1d1bf4;
        case 0x1d1bf8u: goto label_1d1bf8;
        case 0x1d1bfcu: goto label_1d1bfc;
        case 0x1d1c00u: goto label_1d1c00;
        case 0x1d1c04u: goto label_1d1c04;
        case 0x1d1c08u: goto label_1d1c08;
        case 0x1d1c0cu: goto label_1d1c0c;
        case 0x1d1c10u: goto label_1d1c10;
        case 0x1d1c14u: goto label_1d1c14;
        case 0x1d1c18u: goto label_1d1c18;
        case 0x1d1c1cu: goto label_1d1c1c;
        case 0x1d1c20u: goto label_1d1c20;
        case 0x1d1c24u: goto label_1d1c24;
        case 0x1d1c28u: goto label_1d1c28;
        case 0x1d1c2cu: goto label_1d1c2c;
        case 0x1d1c30u: goto label_1d1c30;
        case 0x1d1c34u: goto label_1d1c34;
        case 0x1d1c38u: goto label_1d1c38;
        case 0x1d1c3cu: goto label_1d1c3c;
        case 0x1d1c40u: goto label_1d1c40;
        case 0x1d1c44u: goto label_1d1c44;
        case 0x1d1c48u: goto label_1d1c48;
        case 0x1d1c4cu: goto label_1d1c4c;
        case 0x1d1c50u: goto label_1d1c50;
        case 0x1d1c54u: goto label_1d1c54;
        case 0x1d1c58u: goto label_1d1c58;
        case 0x1d1c5cu: goto label_1d1c5c;
        case 0x1d1c60u: goto label_1d1c60;
        case 0x1d1c64u: goto label_1d1c64;
        case 0x1d1c68u: goto label_1d1c68;
        case 0x1d1c6cu: goto label_1d1c6c;
        case 0x1d1c70u: goto label_1d1c70;
        case 0x1d1c74u: goto label_1d1c74;
        case 0x1d1c78u: goto label_1d1c78;
        case 0x1d1c7cu: goto label_1d1c7c;
        case 0x1d1c80u: goto label_1d1c80;
        case 0x1d1c84u: goto label_1d1c84;
        case 0x1d1c88u: goto label_1d1c88;
        case 0x1d1c8cu: goto label_1d1c8c;
        case 0x1d1c90u: goto label_1d1c90;
        case 0x1d1c94u: goto label_1d1c94;
        case 0x1d1c98u: goto label_1d1c98;
        case 0x1d1c9cu: goto label_1d1c9c;
        case 0x1d1ca0u: goto label_1d1ca0;
        case 0x1d1ca4u: goto label_1d1ca4;
        case 0x1d1ca8u: goto label_1d1ca8;
        case 0x1d1cacu: goto label_1d1cac;
        case 0x1d1cb0u: goto label_1d1cb0;
        case 0x1d1cb4u: goto label_1d1cb4;
        case 0x1d1cb8u: goto label_1d1cb8;
        case 0x1d1cbcu: goto label_1d1cbc;
        case 0x1d1cc0u: goto label_1d1cc0;
        case 0x1d1cc4u: goto label_1d1cc4;
        case 0x1d1cc8u: goto label_1d1cc8;
        case 0x1d1cccu: goto label_1d1ccc;
        case 0x1d1cd0u: goto label_1d1cd0;
        case 0x1d1cd4u: goto label_1d1cd4;
        case 0x1d1cd8u: goto label_1d1cd8;
        case 0x1d1cdcu: goto label_1d1cdc;
        case 0x1d1ce0u: goto label_1d1ce0;
        case 0x1d1ce4u: goto label_1d1ce4;
        case 0x1d1ce8u: goto label_1d1ce8;
        case 0x1d1cecu: goto label_1d1cec;
        case 0x1d1cf0u: goto label_1d1cf0;
        case 0x1d1cf4u: goto label_1d1cf4;
        case 0x1d1cf8u: goto label_1d1cf8;
        case 0x1d1cfcu: goto label_1d1cfc;
        case 0x1d1d00u: goto label_1d1d00;
        case 0x1d1d04u: goto label_1d1d04;
        case 0x1d1d08u: goto label_1d1d08;
        case 0x1d1d0cu: goto label_1d1d0c;
        case 0x1d1d10u: goto label_1d1d10;
        case 0x1d1d14u: goto label_1d1d14;
        case 0x1d1d18u: goto label_1d1d18;
        case 0x1d1d1cu: goto label_1d1d1c;
        case 0x1d1d20u: goto label_1d1d20;
        case 0x1d1d24u: goto label_1d1d24;
        case 0x1d1d28u: goto label_1d1d28;
        case 0x1d1d2cu: goto label_1d1d2c;
        case 0x1d1d30u: goto label_1d1d30;
        case 0x1d1d34u: goto label_1d1d34;
        case 0x1d1d38u: goto label_1d1d38;
        case 0x1d1d3cu: goto label_1d1d3c;
        case 0x1d1d40u: goto label_1d1d40;
        case 0x1d1d44u: goto label_1d1d44;
        case 0x1d1d48u: goto label_1d1d48;
        case 0x1d1d4cu: goto label_1d1d4c;
        case 0x1d1d50u: goto label_1d1d50;
        case 0x1d1d54u: goto label_1d1d54;
        case 0x1d1d58u: goto label_1d1d58;
        case 0x1d1d5cu: goto label_1d1d5c;
        case 0x1d1d60u: goto label_1d1d60;
        case 0x1d1d64u: goto label_1d1d64;
        case 0x1d1d68u: goto label_1d1d68;
        case 0x1d1d6cu: goto label_1d1d6c;
        case 0x1d1d70u: goto label_1d1d70;
        case 0x1d1d74u: goto label_1d1d74;
        case 0x1d1d78u: goto label_1d1d78;
        case 0x1d1d7cu: goto label_1d1d7c;
        case 0x1d1d80u: goto label_1d1d80;
        case 0x1d1d84u: goto label_1d1d84;
        case 0x1d1d88u: goto label_1d1d88;
        case 0x1d1d8cu: goto label_1d1d8c;
        case 0x1d1d90u: goto label_1d1d90;
        case 0x1d1d94u: goto label_1d1d94;
        case 0x1d1d98u: goto label_1d1d98;
        case 0x1d1d9cu: goto label_1d1d9c;
        case 0x1d1da0u: goto label_1d1da0;
        case 0x1d1da4u: goto label_1d1da4;
        case 0x1d1da8u: goto label_1d1da8;
        case 0x1d1dacu: goto label_1d1dac;
        case 0x1d1db0u: goto label_1d1db0;
        case 0x1d1db4u: goto label_1d1db4;
        case 0x1d1db8u: goto label_1d1db8;
        case 0x1d1dbcu: goto label_1d1dbc;
        case 0x1d1dc0u: goto label_1d1dc0;
        case 0x1d1dc4u: goto label_1d1dc4;
        case 0x1d1dc8u: goto label_1d1dc8;
        case 0x1d1dccu: goto label_1d1dcc;
        case 0x1d1dd0u: goto label_1d1dd0;
        case 0x1d1dd4u: goto label_1d1dd4;
        case 0x1d1dd8u: goto label_1d1dd8;
        case 0x1d1ddcu: goto label_1d1ddc;
        case 0x1d1de0u: goto label_1d1de0;
        case 0x1d1de4u: goto label_1d1de4;
        case 0x1d1de8u: goto label_1d1de8;
        case 0x1d1decu: goto label_1d1dec;
        case 0x1d1df0u: goto label_1d1df0;
        case 0x1d1df4u: goto label_1d1df4;
        case 0x1d1df8u: goto label_1d1df8;
        case 0x1d1dfcu: goto label_1d1dfc;
        case 0x1d1e00u: goto label_1d1e00;
        case 0x1d1e04u: goto label_1d1e04;
        case 0x1d1e08u: goto label_1d1e08;
        case 0x1d1e0cu: goto label_1d1e0c;
        case 0x1d1e10u: goto label_1d1e10;
        case 0x1d1e14u: goto label_1d1e14;
        case 0x1d1e18u: goto label_1d1e18;
        case 0x1d1e1cu: goto label_1d1e1c;
        case 0x1d1e20u: goto label_1d1e20;
        case 0x1d1e24u: goto label_1d1e24;
        case 0x1d1e28u: goto label_1d1e28;
        case 0x1d1e2cu: goto label_1d1e2c;
        case 0x1d1e30u: goto label_1d1e30;
        case 0x1d1e34u: goto label_1d1e34;
        case 0x1d1e38u: goto label_1d1e38;
        case 0x1d1e3cu: goto label_1d1e3c;
        case 0x1d1e40u: goto label_1d1e40;
        case 0x1d1e44u: goto label_1d1e44;
        case 0x1d1e48u: goto label_1d1e48;
        case 0x1d1e4cu: goto label_1d1e4c;
        case 0x1d1e50u: goto label_1d1e50;
        case 0x1d1e54u: goto label_1d1e54;
        case 0x1d1e58u: goto label_1d1e58;
        case 0x1d1e5cu: goto label_1d1e5c;
        case 0x1d1e60u: goto label_1d1e60;
        case 0x1d1e64u: goto label_1d1e64;
        case 0x1d1e68u: goto label_1d1e68;
        case 0x1d1e6cu: goto label_1d1e6c;
        case 0x1d1e70u: goto label_1d1e70;
        case 0x1d1e74u: goto label_1d1e74;
        case 0x1d1e78u: goto label_1d1e78;
        case 0x1d1e7cu: goto label_1d1e7c;
        case 0x1d1e80u: goto label_1d1e80;
        case 0x1d1e84u: goto label_1d1e84;
        case 0x1d1e88u: goto label_1d1e88;
        case 0x1d1e8cu: goto label_1d1e8c;
        case 0x1d1e90u: goto label_1d1e90;
        case 0x1d1e94u: goto label_1d1e94;
        case 0x1d1e98u: goto label_1d1e98;
        case 0x1d1e9cu: goto label_1d1e9c;
        case 0x1d1ea0u: goto label_1d1ea0;
        case 0x1d1ea4u: goto label_1d1ea4;
        case 0x1d1ea8u: goto label_1d1ea8;
        case 0x1d1eacu: goto label_1d1eac;
        case 0x1d1eb0u: goto label_1d1eb0;
        case 0x1d1eb4u: goto label_1d1eb4;
        case 0x1d1eb8u: goto label_1d1eb8;
        case 0x1d1ebcu: goto label_1d1ebc;
        case 0x1d1ec0u: goto label_1d1ec0;
        case 0x1d1ec4u: goto label_1d1ec4;
        case 0x1d1ec8u: goto label_1d1ec8;
        case 0x1d1eccu: goto label_1d1ecc;
        case 0x1d1ed0u: goto label_1d1ed0;
        case 0x1d1ed4u: goto label_1d1ed4;
        case 0x1d1ed8u: goto label_1d1ed8;
        case 0x1d1edcu: goto label_1d1edc;
        case 0x1d1ee0u: goto label_1d1ee0;
        case 0x1d1ee4u: goto label_1d1ee4;
        case 0x1d1ee8u: goto label_1d1ee8;
        case 0x1d1eecu: goto label_1d1eec;
        case 0x1d1ef0u: goto label_1d1ef0;
        case 0x1d1ef4u: goto label_1d1ef4;
        case 0x1d1ef8u: goto label_1d1ef8;
        case 0x1d1efcu: goto label_1d1efc;
        case 0x1d1f00u: goto label_1d1f00;
        case 0x1d1f04u: goto label_1d1f04;
        case 0x1d1f08u: goto label_1d1f08;
        case 0x1d1f0cu: goto label_1d1f0c;
        case 0x1d1f10u: goto label_1d1f10;
        case 0x1d1f14u: goto label_1d1f14;
        case 0x1d1f18u: goto label_1d1f18;
        case 0x1d1f1cu: goto label_1d1f1c;
        case 0x1d1f20u: goto label_1d1f20;
        case 0x1d1f24u: goto label_1d1f24;
        case 0x1d1f28u: goto label_1d1f28;
        case 0x1d1f2cu: goto label_1d1f2c;
        case 0x1d1f30u: goto label_1d1f30;
        case 0x1d1f34u: goto label_1d1f34;
        case 0x1d1f38u: goto label_1d1f38;
        case 0x1d1f3cu: goto label_1d1f3c;
        case 0x1d1f40u: goto label_1d1f40;
        case 0x1d1f44u: goto label_1d1f44;
        case 0x1d1f48u: goto label_1d1f48;
        case 0x1d1f4cu: goto label_1d1f4c;
        case 0x1d1f50u: goto label_1d1f50;
        case 0x1d1f54u: goto label_1d1f54;
        case 0x1d1f58u: goto label_1d1f58;
        case 0x1d1f5cu: goto label_1d1f5c;
        case 0x1d1f60u: goto label_1d1f60;
        case 0x1d1f64u: goto label_1d1f64;
        case 0x1d1f68u: goto label_1d1f68;
        case 0x1d1f6cu: goto label_1d1f6c;
        case 0x1d1f70u: goto label_1d1f70;
        case 0x1d1f74u: goto label_1d1f74;
        case 0x1d1f78u: goto label_1d1f78;
        case 0x1d1f7cu: goto label_1d1f7c;
        case 0x1d1f80u: goto label_1d1f80;
        case 0x1d1f84u: goto label_1d1f84;
        case 0x1d1f88u: goto label_1d1f88;
        case 0x1d1f8cu: goto label_1d1f8c;
        case 0x1d1f90u: goto label_1d1f90;
        case 0x1d1f94u: goto label_1d1f94;
        case 0x1d1f98u: goto label_1d1f98;
        case 0x1d1f9cu: goto label_1d1f9c;
        case 0x1d1fa0u: goto label_1d1fa0;
        case 0x1d1fa4u: goto label_1d1fa4;
        case 0x1d1fa8u: goto label_1d1fa8;
        case 0x1d1facu: goto label_1d1fac;
        case 0x1d1fb0u: goto label_1d1fb0;
        case 0x1d1fb4u: goto label_1d1fb4;
        case 0x1d1fb8u: goto label_1d1fb8;
        case 0x1d1fbcu: goto label_1d1fbc;
        case 0x1d1fc0u: goto label_1d1fc0;
        case 0x1d1fc4u: goto label_1d1fc4;
        case 0x1d1fc8u: goto label_1d1fc8;
        case 0x1d1fccu: goto label_1d1fcc;
        case 0x1d1fd0u: goto label_1d1fd0;
        case 0x1d1fd4u: goto label_1d1fd4;
        case 0x1d1fd8u: goto label_1d1fd8;
        case 0x1d1fdcu: goto label_1d1fdc;
        case 0x1d1fe0u: goto label_1d1fe0;
        case 0x1d1fe4u: goto label_1d1fe4;
        case 0x1d1fe8u: goto label_1d1fe8;
        case 0x1d1fecu: goto label_1d1fec;
        case 0x1d1ff0u: goto label_1d1ff0;
        case 0x1d1ff4u: goto label_1d1ff4;
        case 0x1d1ff8u: goto label_1d1ff8;
        case 0x1d1ffcu: goto label_1d1ffc;
        case 0x1d2000u: goto label_1d2000;
        case 0x1d2004u: goto label_1d2004;
        case 0x1d2008u: goto label_1d2008;
        case 0x1d200cu: goto label_1d200c;
        case 0x1d2010u: goto label_1d2010;
        case 0x1d2014u: goto label_1d2014;
        case 0x1d2018u: goto label_1d2018;
        case 0x1d201cu: goto label_1d201c;
        case 0x1d2020u: goto label_1d2020;
        case 0x1d2024u: goto label_1d2024;
        case 0x1d2028u: goto label_1d2028;
        case 0x1d202cu: goto label_1d202c;
        case 0x1d2030u: goto label_1d2030;
        case 0x1d2034u: goto label_1d2034;
        case 0x1d2038u: goto label_1d2038;
        case 0x1d203cu: goto label_1d203c;
        case 0x1d2040u: goto label_1d2040;
        case 0x1d2044u: goto label_1d2044;
        case 0x1d2048u: goto label_1d2048;
        case 0x1d204cu: goto label_1d204c;
        case 0x1d2050u: goto label_1d2050;
        case 0x1d2054u: goto label_1d2054;
        case 0x1d2058u: goto label_1d2058;
        case 0x1d205cu: goto label_1d205c;
        case 0x1d2060u: goto label_1d2060;
        case 0x1d2064u: goto label_1d2064;
        case 0x1d2068u: goto label_1d2068;
        case 0x1d206cu: goto label_1d206c;
        case 0x1d2070u: goto label_1d2070;
        case 0x1d2074u: goto label_1d2074;
        case 0x1d2078u: goto label_1d2078;
        case 0x1d207cu: goto label_1d207c;
        case 0x1d2080u: goto label_1d2080;
        case 0x1d2084u: goto label_1d2084;
        case 0x1d2088u: goto label_1d2088;
        case 0x1d208cu: goto label_1d208c;
        case 0x1d2090u: goto label_1d2090;
        case 0x1d2094u: goto label_1d2094;
        case 0x1d2098u: goto label_1d2098;
        case 0x1d209cu: goto label_1d209c;
        case 0x1d20a0u: goto label_1d20a0;
        case 0x1d20a4u: goto label_1d20a4;
        case 0x1d20a8u: goto label_1d20a8;
        case 0x1d20acu: goto label_1d20ac;
        case 0x1d20b0u: goto label_1d20b0;
        case 0x1d20b4u: goto label_1d20b4;
        case 0x1d20b8u: goto label_1d20b8;
        case 0x1d20bcu: goto label_1d20bc;
        case 0x1d20c0u: goto label_1d20c0;
        case 0x1d20c4u: goto label_1d20c4;
        case 0x1d20c8u: goto label_1d20c8;
        case 0x1d20ccu: goto label_1d20cc;
        case 0x1d20d0u: goto label_1d20d0;
        case 0x1d20d4u: goto label_1d20d4;
        case 0x1d20d8u: goto label_1d20d8;
        case 0x1d20dcu: goto label_1d20dc;
        case 0x1d20e0u: goto label_1d20e0;
        case 0x1d20e4u: goto label_1d20e4;
        case 0x1d20e8u: goto label_1d20e8;
        case 0x1d20ecu: goto label_1d20ec;
        case 0x1d20f0u: goto label_1d20f0;
        case 0x1d20f4u: goto label_1d20f4;
        case 0x1d20f8u: goto label_1d20f8;
        case 0x1d20fcu: goto label_1d20fc;
        case 0x1d2100u: goto label_1d2100;
        case 0x1d2104u: goto label_1d2104;
        case 0x1d2108u: goto label_1d2108;
        case 0x1d210cu: goto label_1d210c;
        case 0x1d2110u: goto label_1d2110;
        case 0x1d2114u: goto label_1d2114;
        case 0x1d2118u: goto label_1d2118;
        case 0x1d211cu: goto label_1d211c;
        case 0x1d2120u: goto label_1d2120;
        case 0x1d2124u: goto label_1d2124;
        case 0x1d2128u: goto label_1d2128;
        case 0x1d212cu: goto label_1d212c;
        case 0x1d2130u: goto label_1d2130;
        case 0x1d2134u: goto label_1d2134;
        case 0x1d2138u: goto label_1d2138;
        case 0x1d213cu: goto label_1d213c;
        case 0x1d2140u: goto label_1d2140;
        case 0x1d2144u: goto label_1d2144;
        case 0x1d2148u: goto label_1d2148;
        case 0x1d214cu: goto label_1d214c;
        case 0x1d2150u: goto label_1d2150;
        case 0x1d2154u: goto label_1d2154;
        case 0x1d2158u: goto label_1d2158;
        case 0x1d215cu: goto label_1d215c;
        case 0x1d2160u: goto label_1d2160;
        case 0x1d2164u: goto label_1d2164;
        case 0x1d2168u: goto label_1d2168;
        case 0x1d216cu: goto label_1d216c;
        case 0x1d2170u: goto label_1d2170;
        case 0x1d2174u: goto label_1d2174;
        case 0x1d2178u: goto label_1d2178;
        case 0x1d217cu: goto label_1d217c;
        case 0x1d2180u: goto label_1d2180;
        case 0x1d2184u: goto label_1d2184;
        case 0x1d2188u: goto label_1d2188;
        case 0x1d218cu: goto label_1d218c;
        case 0x1d2190u: goto label_1d2190;
        case 0x1d2194u: goto label_1d2194;
        case 0x1d2198u: goto label_1d2198;
        case 0x1d219cu: goto label_1d219c;
        case 0x1d21a0u: goto label_1d21a0;
        case 0x1d21a4u: goto label_1d21a4;
        default: return;
    }

label_1d19d8:
    // 0x1d19d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d19d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d19dc:
    // 0x1d19dc: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1d19dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1d19e0:
    // 0x1d19e0: 0x24060056  addiu       $a2, $zero, 0x56
    ctx->pc = 0x1d19e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1d19e4:
    // 0x1d19e4: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x1d19e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d19e8:
    // 0x1d19e8: 0x3408ffe1  ori         $t0, $zero, 0xFFE1
    ctx->pc = 0x1d19e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
label_1d19ec:
    // 0x1d19ec: 0xc05ded8  jal         func_177B60
label_1d19f0:
    if (ctx->pc == 0x1D19F0u) {
        ctx->pc = 0x1D19F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19ECu;
        // 0x1d19f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D19F4u;
        goto label_1d19f4;
    }
    ctx->pc = 0x1D19ECu;
    SET_GPR_U32(ctx, 31, 0x1D19F4u);
    ctx->pc = 0x1D19F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19ECu;
    // 0x1d19f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1D19ECu, 0x1D19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19F4u;
label_1d19f4:
    // 0x1d19f4: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x1d19f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
label_1d19f8:
    // 0x1d19f8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1d19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1d19fc:
    // 0x1d19fc: 0xa6020080  sh          $v0, 0x80($s0)
    ctx->pc = 0x1d19fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 2));
label_1d1a00:
    // 0x1d1a00: 0x96020098  lhu         $v0, 0x98($s0)
    ctx->pc = 0x1d1a00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_1d1a04:
    // 0x1d1a04: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1d1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1d1a08:
    // 0x1d1a08: 0xa6020098  sh          $v0, 0x98($s0)
    ctx->pc = 0x1d1a08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
label_1d1a0c:
    // 0x1d1a0c: 0x0  nop
    ctx->pc = 0x1d1a0cu;
    // NOP
label_1d1a10:
    // 0x1d1a10: 0xa2000070  sb          $zero, 0x70($s0)
    ctx->pc = 0x1d1a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 0));
label_1d1a14:
    // 0x1d1a14: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x1d1a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_1d1a18:
    // 0x1d1a18: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1d1a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d1a1c:
    // 0x1d1a1c: 0xa2000072  sb          $zero, 0x72($s0)
    ctx->pc = 0x1d1a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 0));
label_1d1a20:
    // 0x1d1a20: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d1a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1d1a24:
    // 0x1d1a24: 0xa2090073  sb          $t1, 0x73($s0)
    ctx->pc = 0x1d1a24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 9));
label_1d1a28:
    // 0x1d1a28: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1d1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d1a2c:
    // 0x1d1a2c: 0xae050074  sw          $a1, 0x74($s0)
    ctx->pc = 0x1d1a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 5));
label_1d1a30:
    // 0x1d1a30: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d1a34:
    // 0x1d1a34: 0xa2000088  sb          $zero, 0x88($s0)
    ctx->pc = 0x1d1a34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 0));
label_1d1a38:
    // 0x1d1a38: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d1a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d1a3c:
    // 0x1d1a3c: 0xa2000089  sb          $zero, 0x89($s0)
    ctx->pc = 0x1d1a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 0));
label_1d1a40:
    // 0x1d1a40: 0x24520b30  addiu       $s2, $v0, 0xB30
    ctx->pc = 0x1d1a40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2864));
label_1d1a44:
    // 0x1d1a44: 0xa200008a  sb          $zero, 0x8A($s0)
    ctx->pc = 0x1d1a44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 0));
label_1d1a48:
    // 0x1d1a48: 0xa209008b  sb          $t1, 0x8B($s0)
    ctx->pc = 0x1d1a48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 9));
label_1d1a4c:
    // 0x1d1a4c: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x1d1a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
label_1d1a50:
    // 0x1d1a50: 0xa20400a0  sb          $a0, 0xA0($s0)
    ctx->pc = 0x1d1a50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 4));
label_1d1a54:
    // 0x1d1a54: 0xa20000a1  sb          $zero, 0xA1($s0)
    ctx->pc = 0x1d1a54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 161), (uint8_t)GPR_U32(ctx, 0));
label_1d1a58:
    // 0x1d1a58: 0xa20300a2  sb          $v1, 0xA2($s0)
    ctx->pc = 0x1d1a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 162), (uint8_t)GPR_U32(ctx, 3));
label_1d1a5c:
    // 0x1d1a5c: 0xa20900a3  sb          $t1, 0xA3($s0)
    ctx->pc = 0x1d1a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 163), (uint8_t)GPR_U32(ctx, 9));
label_1d1a60:
    // 0x1d1a60: 0xae0500a4  sw          $a1, 0xA4($s0)
    ctx->pc = 0x1d1a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 5));
label_1d1a64:
    // 0x1d1a64: 0xa20400b8  sb          $a0, 0xB8($s0)
    ctx->pc = 0x1d1a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 4));
label_1d1a68:
    // 0x1d1a68: 0xa20000b9  sb          $zero, 0xB9($s0)
    ctx->pc = 0x1d1a68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 0));
label_1d1a6c:
    // 0x1d1a6c: 0xa20300ba  sb          $v1, 0xBA($s0)
    ctx->pc = 0x1d1a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 186), (uint8_t)GPR_U32(ctx, 3));
label_1d1a70:
    // 0x1d1a70: 0xa20900bb  sb          $t1, 0xBB($s0)
    ctx->pc = 0x1d1a70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 187), (uint8_t)GPR_U32(ctx, 9));
label_1d1a74:
    // 0x1d1a74: 0x1280001c  beqz        $s4, . + 4 + (0x1C << 2)
label_1d1a78:
    if (ctx->pc == 0x1D1A78u) {
        ctx->pc = 0x1D1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A74u;
        // 0x1d1a78: 0xae0500bc  sw          $a1, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1A7Cu;
        goto label_1d1a7c;
    }
    ctx->pc = 0x1D1A74u;
    {
        const bool branch_taken_0x1d1a74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A74u;
        // 0x1d1a78: 0xae0500bc  sw          $a1, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a74) {
            ctx->pc = 0x1D1AE8u;
            goto label_1d1ae8;
        }
    }
    ctx->pc = 0x1D1A7Cu;
label_1d1a7c:
    // 0x1d1a7c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d1a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1d1a80:
    // 0x1d1a80: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1d1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d1a84:
    // 0x1d1a84: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x1d1a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
label_1d1a88:
    // 0x1d1a88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1a8c:
    // 0x1d1a8c: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1d1a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1d1a90:
    // 0x1d1a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1a94:
    // 0x1d1a94: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d1a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d1a98:
    // 0x1d1a98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1a9c:
    // 0x1d1a9c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1d1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1d1aa0:
    // 0x1d1aa0: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1d1aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_1d1aa4:
    // 0x1d1aa4: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1d1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1aa8:
    // 0x1d1aa8: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1d1aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_1d1aac:
    // 0x1d1aac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1d1ab0:
    // 0x1d1ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ab4:
    // 0x1d1ab4: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x1d1ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1d1ab8:
    // 0x1d1ab8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1d1ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1d1abc:
    // 0x1d1abc: 0x3408ffe1  ori         $t0, $zero, 0xFFE1
    ctx->pc = 0x1d1abcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
label_1d1ac0:
    // 0x1d1ac0: 0x240a0012  addiu       $t2, $zero, 0x12
    ctx->pc = 0x1d1ac0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d1ac4:
    // 0x1d1ac4: 0xc05ded8  jal         func_177B60
label_1d1ac8:
    if (ctx->pc == 0x1D1AC8u) {
        ctx->pc = 0x1D1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AC4u;
        // 0x1d1ac8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1ACCu;
        goto label_1d1acc;
    }
    ctx->pc = 0x1D1AC4u;
    SET_GPR_U32(ctx, 31, 0x1D1ACCu);
    ctx->pc = 0x1D1AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AC4u;
    // 0x1d1ac8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1D1AC4u, 0x1D1ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ACCu;
label_1d1acc:
    // 0x1d1acc: 0x96420080  lhu         $v0, 0x80($s2)
    ctx->pc = 0x1d1accu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
label_1d1ad0:
    // 0x1d1ad0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1d1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1d1ad4:
    // 0x1d1ad4: 0xa6420080  sh          $v0, 0x80($s2)
    ctx->pc = 0x1d1ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 2));
label_1d1ad8:
    // 0x1d1ad8: 0x96420098  lhu         $v0, 0x98($s2)
    ctx->pc = 0x1d1ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 152)));
label_1d1adc:
    // 0x1d1adc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1d1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1d1ae0:
    // 0x1d1ae0: 0x10000018  b           . + 4 + (0x18 << 2)
label_1d1ae4:
    if (ctx->pc == 0x1D1AE4u) {
        ctx->pc = 0x1D1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AE0u;
        // 0x1d1ae4: 0xa6420098  sh          $v0, 0x98($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 152), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1AE8u;
        goto label_1d1ae8;
    }
    ctx->pc = 0x1D1AE0u;
    {
        const bool branch_taken_0x1d1ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AE0u;
        // 0x1d1ae4: 0xa6420098  sh          $v0, 0x98($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 152), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ae0) {
            ctx->pc = 0x1D1B44u;
            goto label_1d1b44;
        }
    }
    ctx->pc = 0x1D1AE8u;
label_1d1ae8:
    // 0x1d1ae8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d1ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1d1aec:
    // 0x1d1aec: 0xffa90008  sd          $t1, 0x8($sp)
    ctx->pc = 0x1d1aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
label_1d1af0:
    // 0x1d1af0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1d1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d1af4:
    // 0x1d1af4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1d1af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1d1af8:
    // 0x1d1af8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1afc:
    // 0x1d1afc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1b00:
    // 0x1d1b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b04:
    // 0x1d1b04: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d1b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d1b08:
    // 0x1d1b08: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x1d1b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_1d1b0c:
    // 0x1d1b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1b10:
    // 0x1d1b10: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x1d1b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1d1b14:
    // 0x1d1b14: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1d1b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_1d1b18:
    // 0x1d1b18: 0x3408ffe1  ori         $t0, $zero, 0xFFE1
    ctx->pc = 0x1d1b18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
label_1d1b1c:
    // 0x1d1b1c: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1d1b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1d1b20:
    // 0x1d1b20: 0x240a0012  addiu       $t2, $zero, 0x12
    ctx->pc = 0x1d1b20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d1b24:
    // 0x1d1b24: 0xc05ded8  jal         func_177B60
label_1d1b28:
    if (ctx->pc == 0x1D1B28u) {
        ctx->pc = 0x1D1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B24u;
        // 0x1d1b28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1B2Cu;
        goto label_1d1b2c;
    }
    ctx->pc = 0x1D1B24u;
    SET_GPR_U32(ctx, 31, 0x1D1B2Cu);
    ctx->pc = 0x1D1B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B24u;
    // 0x1d1b28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1D1B24u, 0x1D1B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B2Cu;
label_1d1b2c:
    // 0x1d1b2c: 0x96420080  lhu         $v0, 0x80($s2)
    ctx->pc = 0x1d1b2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
label_1d1b30:
    // 0x1d1b30: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1d1b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1d1b34:
    // 0x1d1b34: 0xa6420080  sh          $v0, 0x80($s2)
    ctx->pc = 0x1d1b34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 2));
label_1d1b38:
    // 0x1d1b38: 0x96420098  lhu         $v0, 0x98($s2)
    ctx->pc = 0x1d1b38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 152)));
label_1d1b3c:
    // 0x1d1b3c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1d1b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1d1b40:
    // 0x1d1b40: 0xa6420098  sh          $v0, 0x98($s2)
    ctx->pc = 0x1d1b40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 152), (uint16_t)GPR_U32(ctx, 2));
label_1d1b44:
    // 0x1d1b44: 0x0  nop
    ctx->pc = 0x1d1b44u;
    // NOP
label_1d1b48:
    // 0x1d1b48: 0xa2400070  sb          $zero, 0x70($s2)
    ctx->pc = 0x1d1b48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 0));
label_1d1b4c:
    // 0x1d1b4c: 0xa2400071  sb          $zero, 0x71($s2)
    ctx->pc = 0x1d1b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 0));
label_1d1b50:
    // 0x1d1b50: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d1b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d1b54:
    // 0x1d1b54: 0xa2400072  sb          $zero, 0x72($s2)
    ctx->pc = 0x1d1b54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 0));
label_1d1b58:
    // 0x1d1b58: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d1b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d1b5c:
    // 0x1d1b5c: 0xa2450073  sb          $a1, 0x73($s2)
    ctx->pc = 0x1d1b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 5));
label_1d1b60:
    // 0x1d1b60: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1d1b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d1b64:
    // 0x1d1b64: 0xae440074  sw          $a0, 0x74($s2)
    ctx->pc = 0x1d1b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 4));
label_1d1b68:
    // 0x1d1b68: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d1b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d1b6c:
    // 0x1d1b6c: 0xa2400088  sb          $zero, 0x88($s2)
    ctx->pc = 0x1d1b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 0));
label_1d1b70:
    // 0x1d1b70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d1b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b74:
    // 0x1d1b74: 0xa2400089  sb          $zero, 0x89($s2)
    ctx->pc = 0x1d1b74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 0));
label_1d1b78:
    // 0x1d1b78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d1b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b7c:
    // 0x1d1b7c: 0xa240008a  sb          $zero, 0x8A($s2)
    ctx->pc = 0x1d1b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 0));
label_1d1b80:
    // 0x1d1b80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b84:
    // 0x1d1b84: 0xa245008b  sb          $a1, 0x8B($s2)
    ctx->pc = 0x1d1b84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 5));
label_1d1b88:
    // 0x1d1b88: 0xae44008c  sw          $a0, 0x8C($s2)
    ctx->pc = 0x1d1b88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 4));
label_1d1b8c:
    // 0x1d1b8c: 0xa24300a0  sb          $v1, 0xA0($s2)
    ctx->pc = 0x1d1b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 160), (uint8_t)GPR_U32(ctx, 3));
label_1d1b90:
    // 0x1d1b90: 0xa24000a1  sb          $zero, 0xA1($s2)
    ctx->pc = 0x1d1b90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 161), (uint8_t)GPR_U32(ctx, 0));
label_1d1b94:
    // 0x1d1b94: 0xa24200a2  sb          $v0, 0xA2($s2)
    ctx->pc = 0x1d1b94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 162), (uint8_t)GPR_U32(ctx, 2));
label_1d1b98:
    // 0x1d1b98: 0xa24500a3  sb          $a1, 0xA3($s2)
    ctx->pc = 0x1d1b98u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 163), (uint8_t)GPR_U32(ctx, 5));
label_1d1b9c:
    // 0x1d1b9c: 0xae4400a4  sw          $a0, 0xA4($s2)
    ctx->pc = 0x1d1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 4));
label_1d1ba0:
    // 0x1d1ba0: 0xa24300b8  sb          $v1, 0xB8($s2)
    ctx->pc = 0x1d1ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 184), (uint8_t)GPR_U32(ctx, 3));
label_1d1ba4:
    // 0x1d1ba4: 0xa24000b9  sb          $zero, 0xB9($s2)
    ctx->pc = 0x1d1ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 185), (uint8_t)GPR_U32(ctx, 0));
label_1d1ba8:
    // 0x1d1ba8: 0xa24200ba  sb          $v0, 0xBA($s2)
    ctx->pc = 0x1d1ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 186), (uint8_t)GPR_U32(ctx, 2));
label_1d1bac:
    // 0x1d1bac: 0xa24500bb  sb          $a1, 0xBB($s2)
    ctx->pc = 0x1d1bacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 187), (uint8_t)GPR_U32(ctx, 5));
label_1d1bb0:
    // 0x1d1bb0: 0xae4400bc  sw          $a0, 0xBC($s2)
    ctx->pc = 0x1d1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 4));
label_1d1bb4:
    // 0x1d1bb4: 0x0  nop
    ctx->pc = 0x1d1bb4u;
    // NOP
label_1d1bb8:
    // 0x1d1bb8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d1bbc:
    // 0x1d1bbc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1d1bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d1bc0:
    // 0x1d1bc0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d1bc4:
    // 0x1d1bc4: 0xc070834  jal         func_1C20D0
label_1d1bc8:
    if (ctx->pc == 0x1D1BC8u) {
        ctx->pc = 0x1D1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC4u;
        // 0x1d1bc8: 0x24520c00  addiu       $s2, $v0, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BCCu;
        goto label_1d1bcc;
    }
    ctx->pc = 0x1D1BC4u;
    SET_GPR_U32(ctx, 31, 0x1D1BCCu);
    ctx->pc = 0x1D1BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BC4u;
    // 0x1d1bc8: 0x24520c00  addiu       $s2, $v0, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1D1BCCu;
label_1d1bcc:
    // 0x1d1bcc: 0x1280001d  beqz        $s4, . + 4 + (0x1D << 2)
label_1d1bd0:
    if (ctx->pc == 0x1D1BD0u) {
        ctx->pc = 0x1D1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BCCu;
        // 0x1d1bd0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BD4u;
        goto label_1d1bd4;
    }
    ctx->pc = 0x1D1BCCu;
    {
        const bool branch_taken_0x1d1bcc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BCCu;
        // 0x1d1bd0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bcc) {
            ctx->pc = 0x1D1C44u;
            goto label_1d1c44;
        }
    }
    ctx->pc = 0x1D1BD4u;
label_1d1bd4:
    // 0x1d1bd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d1bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1bd8:
    // 0x1d1bd8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1d1bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1d1bdc:
    // 0x1d1bdc: 0x260600b4  addiu       $a2, $s0, 0xB4
    ctx->pc = 0x1d1bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
label_1d1be0:
    // 0x1d1be0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1d1be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_1d1be4:
    // 0x1d1be4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1be8:
    // 0x1d1be8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d1be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1d1bec:
    // 0x1d1bec: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1d1becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d1bf0:
    // 0x1d1bf0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1d1bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1d1bf4:
    // 0x1d1bf4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1d1bf8:
    if (ctx->pc == 0x1D1BF8u) {
        ctx->pc = 0x1D1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF4u;
        // 0x1d1bf8: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1BFCu;
        goto label_1d1bfc;
    }
    ctx->pc = 0x1D1BF4u;
    {
        const bool branch_taken_0x1d1bf4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF4u;
        // 0x1d1bf8: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bf4) {
            ctx->pc = 0x1D1C08u;
            goto label_1d1c08;
        }
    }
    ctx->pc = 0x1D1BFCu;
label_1d1bfc:
    // 0x1d1bfc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d1c00:
    if (ctx->pc == 0x1D1C00u) {
        ctx->pc = 0x1D1C04u;
        goto label_1d1c04;
    }
    ctx->pc = 0x1D1BFCu;
    {
        const bool branch_taken_0x1d1bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1bfc) {
            ctx->pc = 0x1D1C08u;
            goto label_1d1c08;
        }
    }
    ctx->pc = 0x1D1C04u;
label_1d1c04:
    // 0x1d1c04: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1d1c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_1d1c08:
    // 0x1d1c08: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d1c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1d1c0c:
    // 0x1d1c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c10:
    // 0x1d1c10: 0x24670021  addiu       $a3, $v1, 0x21
    ctx->pc = 0x1d1c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 33));
label_1d1c14:
    // 0x1d1c14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c18:
    // 0x1d1c18: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1d1c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1d1c1c:
    // 0x1d1c1c: 0x3408ffe1  ori         $t0, $zero, 0xFFE1
    ctx->pc = 0x1d1c1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
label_1d1c20:
    // 0x1d1c20: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1d1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1d1c24:
    // 0x1d1c24: 0x24090160  addiu       $t1, $zero, 0x160
    ctx->pc = 0x1d1c24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1d1c28:
    // 0x1d1c28: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1d1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d1c2c:
    // 0x1d1c2c: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x1d1c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1d1c30:
    // 0x1d1c30: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1d1c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1d1c34:
    // 0x1d1c34: 0xc05de30  jal         func_1778C0
label_1d1c38:
    if (ctx->pc == 0x1D1C38u) {
        ctx->pc = 0x1D1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C34u;
        // 0x1d1c38: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C3Cu;
        goto label_1d1c3c;
    }
    ctx->pc = 0x1D1C34u;
    SET_GPR_U32(ctx, 31, 0x1D1C3Cu);
    ctx->pc = 0x1D1C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C34u;
    // 0x1d1c38: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D1C34u, 0x1D1C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C3Cu;
label_1d1c3c:
    // 0x1d1c3c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1d1c40:
    if (ctx->pc == 0x1D1C40u) {
        ctx->pc = 0x1D1C44u;
        goto label_1d1c44;
    }
    ctx->pc = 0x1D1C3Cu;
    {
        const bool branch_taken_0x1d1c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c3c) {
            ctx->pc = 0x1D1CA4u;
            goto label_1d1ca4;
        }
    }
    ctx->pc = 0x1D1C44u;
label_1d1c44:
    // 0x1d1c44: 0x0  nop
    ctx->pc = 0x1d1c44u;
    // NOP
label_1d1c48:
    // 0x1d1c48: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d1c4c:
    // 0x1d1c4c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1d1c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1d1c50:
    // 0x1d1c50: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x1d1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d1c54:
    // 0x1d1c54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d1c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1c58:
    // 0x1d1c58: 0x260600e4  addiu       $a2, $s0, 0xE4
    ctx->pc = 0x1d1c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
label_1d1c5c:
    // 0x1d1c5c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1d1c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1d1c60:
    // 0x1d1c60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1c64:
    // 0x1d1c64: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d1c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1d1c68:
    // 0x1d1c68: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1d1c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1d1c6c:
    // 0x1d1c6c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1d1c70:
    if (ctx->pc == 0x1D1C70u) {
        ctx->pc = 0x1D1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C6Cu;
        // 0x1d1c70: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1C74u;
        goto label_1d1c74;
    }
    ctx->pc = 0x1D1C6Cu;
    {
        const bool branch_taken_0x1d1c6c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C6Cu;
        // 0x1d1c70: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c6c) {
            ctx->pc = 0x1D1C80u;
            goto label_1d1c80;
        }
    }
    ctx->pc = 0x1D1C74u;
label_1d1c74:
    // 0x1d1c74: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1d1c78:
    if (ctx->pc == 0x1D1C78u) {
        ctx->pc = 0x1D1C7Cu;
        goto label_1d1c7c;
    }
    ctx->pc = 0x1D1C74u;
    {
        const bool branch_taken_0x1d1c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c74) {
            ctx->pc = 0x1D1C80u;
            goto label_1d1c80;
        }
    }
    ctx->pc = 0x1D1C7Cu;
label_1d1c7c:
    // 0x1d1c7c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1d1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_1d1c80:
    // 0x1d1c80: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1d1c84:
    // 0x1d1c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c88:
    // 0x1d1c88: 0x24670023  addiu       $a3, $v1, 0x23
    ctx->pc = 0x1d1c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
label_1d1c8c:
    // 0x1d1c8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1c90:
    // 0x1d1c90: 0x3408ffe1  ori         $t0, $zero, 0xFFE1
    ctx->pc = 0x1d1c90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
label_1d1c94:
    // 0x1d1c94: 0x24090160  addiu       $t1, $zero, 0x160
    ctx->pc = 0x1d1c94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1d1c98:
    // 0x1d1c98: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x1d1c98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1d1c9c:
    // 0x1d1c9c: 0xc05de30  jal         func_1778C0
label_1d1ca0:
    if (ctx->pc == 0x1D1CA0u) {
        ctx->pc = 0x1D1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C9Cu;
        // 0x1d1ca0: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1CA4u;
        goto label_1d1ca4;
    }
    ctx->pc = 0x1D1C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D1CA4u);
    ctx->pc = 0x1D1CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C9Cu;
    // 0x1d1ca0: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D1C9Cu, 0x1D1CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CA4u;
label_1d1ca4:
    // 0x1d1ca4: 0x0  nop
    ctx->pc = 0x1d1ca4u;
    // NOP
label_1d1ca8:
    // 0x1d1ca8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d1cac:
    // 0x1d1cac: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x1d1cacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d1cb0:
    // 0x1d1cb0: 0x267300a0  addiu       $s3, $s3, 0xA0
    ctx->pc = 0x1d1cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_1d1cb4:
    // 0x1d1cb4: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
label_1d1cb8:
    if (ctx->pc == 0x1D1CB8u) {
        ctx->pc = 0x1D1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CB4u;
        // 0x1d1cb8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1CBCu;
        goto label_1d1cbc;
    }
    ctx->pc = 0x1D1CB4u;
    {
        const bool branch_taken_0x1d1cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CB4u;
        // 0x1d1cb8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cb4) {
            ctx->pc = 0x1D1BB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bb4;
        }
    }
    ctx->pc = 0x1D1CBCu;
label_1d1cbc:
    // 0x1d1cbc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1d1cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1d1cc0:
    // 0x1d1cc0: 0x24631100  addiu       $v1, $v1, 0x1100
    ctx->pc = 0x1d1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4352));
label_1d1cc4:
    // 0x1d1cc4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1d1cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_1d1cc8:
    // 0x1d1cc8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d1ccc:
    // 0x1d1ccc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d1cd0:
    // 0x1d1cd0: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1d1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_1d1cd4:
    // 0x1d1cd4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d1cd8:
    // 0x1d1cd8: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1d1cd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d1cdc:
    // 0x1d1cdc: 0x1460fd10  bnez        $v1, . + 4 + (-0x2F0 << 2)
label_1d1ce0:
    if (ctx->pc == 0x1D1CE0u) {
        ctx->pc = 0x1D1CE4u;
        goto label_1d1ce4;
    }
    ctx->pc = 0x1D1CDCu;
    {
        const bool branch_taken_0x1d1cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1cdc) {
            ctx->pc = 0x1D1120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d1120; return; }
        }
    }
    ctx->pc = 0x1D1CE4u;
label_1d1ce4:
    // 0x1d1ce4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1d1ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1d1ce8:
    // 0x1d1ce8: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1d1ce8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d1cec:
    // 0x1d1cec: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1d1cecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d1cf0:
    // 0x1d1cf0: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1d1cf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d1cf4:
    // 0x1d1cf4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d1cf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1cf8:
    // 0x1d1cf8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1d1cf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d1cfc:
    // 0x1d1cfc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1d1cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d1d00:
    // 0x1d1d00: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d1d00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1d04:
    // 0x1d1d04: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d1d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1d08:
    // 0x1d1d08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d1d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1d0c:
    // 0x1d1d0c: 0x3e00008  jr          $ra
label_1d1d10:
    if (ctx->pc == 0x1D1D10u) {
        ctx->pc = 0x1D1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D0Cu;
        // 0x1d1d10: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D14u;
        goto label_1d1d14;
    }
    ctx->pc = 0x1D1D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D0Cu;
        // 0x1d1d10: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1D14u;
label_1d1d14:
    // 0x1d1d14: 0x0  nop
    ctx->pc = 0x1d1d14u;
    // NOP
label_1d1d18:
    // 0x1d1d18: 0x0  nop
    ctx->pc = 0x1d1d18u;
    // NOP
label_1d1d1c:
    // 0x1d1d1c: 0x0  nop
    ctx->pc = 0x1d1d1cu;
    // NOP
label_1d1d20:
    // 0x1d1d20: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1d1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d1d24:
    // 0x1d1d24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d1d28:
    // 0x1d1d28: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x1d1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d1d2c:
    // 0x1d1d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1d30:
    // 0x1d1d30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d1d34:
    // 0x1d1d34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1d1d38:
    // 0x1d1d38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d1d3c:
    // 0x1d1d3c: 0x24420de0  addiu       $v0, $v0, 0xDE0
    ctx->pc = 0x1d1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3552));
label_1d1d40:
    // 0x1d1d40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d1d44:
    // 0x1d1d44: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x1d1d44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d1d48:
    // 0x1d1d48: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1d1d4c:
    if (ctx->pc == 0x1D1D4Cu) {
        ctx->pc = 0x1D1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D48u;
        // 0x1d1d4c: 0x256204a0  addiu       $v0, $t3, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D50u;
        goto label_1d1d50;
    }
    ctx->pc = 0x1D1D48u;
    {
        const bool branch_taken_0x1d1d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D48u;
        // 0x1d1d4c: 0x256204a0  addiu       $v0, $t3, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d48) {
            ctx->pc = 0x1D1D64u;
            goto label_1d1d64;
        }
    }
    ctx->pc = 0x1D1D50u;
label_1d1d50:
    // 0x1d1d50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1d54:
    // 0x1d1d54: 0x24420204  addiu       $v0, $v0, 0x204
    ctx->pc = 0x1d1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 516));
label_1d1d58:
    // 0x1d1d58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d1d5c:
    // 0x1d1d5c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d1d60:
    if (ctx->pc == 0x1D1D60u) {
        ctx->pc = 0x1D1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D5Cu;
        // 0x1d1d60: 0x244a6c00  addiu       $t2, $v0, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D64u;
        goto label_1d1d64;
    }
    ctx->pc = 0x1D1D5Cu;
    {
        const bool branch_taken_0x1d1d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D5Cu;
        // 0x1d1d60: 0x244a6c00  addiu       $t2, $v0, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d5c) {
            ctx->pc = 0x1D1D74u;
            goto label_1d1d74;
        }
    }
    ctx->pc = 0x1D1D64u;
label_1d1d64:
    // 0x1d1d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1d68:
    // 0x1d1d68: 0x244201e4  addiu       $v0, $v0, 0x1E4
    ctx->pc = 0x1d1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 484));
label_1d1d6c:
    // 0x1d1d6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d1d70:
    // 0x1d1d70: 0x244a6c00  addiu       $t2, $v0, 0x6C00
    ctx->pc = 0x1d1d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1d1d74:
    // 0x1d1d74: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1d1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_1d1d78:
    // 0x1d1d78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1d1d7c:
    // 0x1d1d7c: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x1d1d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_1d1d80:
    // 0x1d1d80: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d1d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d1d84:
    // 0x1d1d84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d1d88:
    // 0x1d1d88: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1d1d8c:
    // 0x1d1d8c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x1d1d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1d1d90:
    // 0x1d1d90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d94:
    // 0x1d1d94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1d94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d98:
    // 0x1d1d98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1d98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d9c:
    // 0x1d1d9c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1d1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d1da0:
    // 0x1d1da0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d1da4:
    // 0x1d1da4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d1da8:
    // 0x1d1da8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d1dac:
    // 0x1d1dac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d1db0:
    // 0x1d1db0: 0x1632821  addu        $a1, $t3, $v1
    ctx->pc = 0x1d1db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1d1db4:
    // 0x1d1db4: 0xa4aa0178  sh          $t2, 0x178($a1)
    ctx->pc = 0x1d1db4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 376), (uint16_t)GPR_U32(ctx, 10));
label_1d1db8:
    // 0x1d1db8: 0xa4aa0148  sh          $t2, 0x148($a1)
    ctx->pc = 0x1d1db8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 328), (uint16_t)GPR_U32(ctx, 10));
label_1d1dbc:
    // 0x1d1dbc: 0xa4aa0230  sh          $t2, 0x230($a1)
    ctx->pc = 0x1d1dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 560), (uint16_t)GPR_U32(ctx, 10));
label_1d1dc0:
    // 0x1d1dc0: 0xa4aa0200  sh          $t2, 0x200($a1)
    ctx->pc = 0x1d1dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 512), (uint16_t)GPR_U32(ctx, 10));
label_1d1dc4:
    // 0x1d1dc4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d1dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d1dc8:
    // 0x1d1dc8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d1dcc:
    // 0x1d1dcc: 0xc066c72  jal         func_19B1C8
label_1d1dd0:
    if (ctx->pc == 0x1D1DD0u) {
        ctx->pc = 0x1D1DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DCCu;
        // 0x1d1dd0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DD4u;
        goto label_1d1dd4;
    }
    ctx->pc = 0x1D1DCCu;
    SET_GPR_U32(ctx, 31, 0x1D1DD4u);
    ctx->pc = 0x1D1DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1DCCu;
    // 0x1d1dd0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D1DCCu, 0x1D1DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1DD4u;
label_1d1dd4:
    // 0x1d1dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1dd8:
    // 0x1d1dd8: 0x3e00008  jr          $ra
label_1d1ddc:
    if (ctx->pc == 0x1D1DDCu) {
        ctx->pc = 0x1D1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DD8u;
        // 0x1d1ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DE0u;
        goto label_1d1de0;
    }
    ctx->pc = 0x1D1DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DD8u;
        // 0x1d1ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1DE0u;
label_1d1de0:
    // 0x1d1de0: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1d1de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d1de4:
    // 0x1d1de4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1d1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1d1de8:
    // 0x1d1de8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1d1dec:
    // 0x1d1dec: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1d1decu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
label_1d1df0:
    // 0x1d1df0: 0x24634974  addiu       $v1, $v1, 0x4974
    ctx->pc = 0x1d1df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18804));
label_1d1df4:
    // 0x1d1df4: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x1d1df4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1d1df8:
    // 0x1d1df8: 0x25294900  addiu       $t1, $t1, 0x4900
    ctx->pc = 0x1d1df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18688));
label_1d1dfc:
    // 0x1d1dfc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1d1dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d1e00:
    // 0x1d1e00: 0x85250008  lh          $a1, 0x8($t1)
    ctx->pc = 0x1d1e00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
label_1d1e04:
    // 0x1d1e04: 0x8523000a  lh          $v1, 0xA($t1)
    ctx->pc = 0x1d1e04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
label_1d1e08:
    // 0x1d1e08: 0x8f878590  lw          $a3, -0x7A70($gp)
    ctx->pc = 0x1d1e08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d1e0c:
    // 0x1d1e0c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x1d1e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d1e10:
    // 0x1d1e10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1d1e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1d1e14:
    // 0x1d1e14: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1d1e14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d1e18:
    // 0x1d1e18: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1d1e1c:
    if (ctx->pc == 0x1D1E1Cu) {
        ctx->pc = 0x1D1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E18u;
        // 0x1d1e1c: 0x30e70400  andi        $a3, $a3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E20u;
        goto label_1d1e20;
    }
    ctx->pc = 0x1D1E18u;
    {
        const bool branch_taken_0x1d1e18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E18u;
        // 0x1d1e1c: 0x30e70400  andi        $a3, $a3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e18) {
            ctx->pc = 0x1D1E28u;
            goto label_1d1e28;
        }
    }
    ctx->pc = 0x1D1E20u;
label_1d1e20:
    // 0x1d1e20: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d1e24:
    if (ctx->pc == 0x1D1E24u) {
        ctx->pc = 0x1D1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E20u;
        // 0x1d1e24: 0x43100  sll         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E28u;
        goto label_1d1e28;
    }
    ctx->pc = 0x1D1E20u;
    {
        const bool branch_taken_0x1d1e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E20u;
        // 0x1d1e24: 0x43100  sll         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e20) {
            ctx->pc = 0x1D1E30u;
            goto label_1d1e30;
        }
    }
    ctx->pc = 0x1D1E28u;
label_1d1e28:
    // 0x1d1e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1e2c:
    // 0x1d1e2c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1d1e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d1e30:
    // 0x1d1e30: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1d1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_1d1e34:
    // 0x1d1e34: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x1d1e34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1d1e38:
    // 0x1d1e38: 0x24a50de0  addiu       $a1, $a1, 0xDE0
    ctx->pc = 0x1d1e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3552));
label_1d1e3c:
    // 0x1d1e3c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1d1e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1d1e40:
    // 0x1d1e40: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1d1e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1d1e44:
    // 0x1d1e44: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d1e48:
    // 0x1d1e48: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1d1e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1d1e4c:
    // 0x1d1e4c: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
label_1d1e50:
    if (ctx->pc == 0x1D1E50u) {
        ctx->pc = 0x1D1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E4Cu;
        // 0x1d1e50: 0x248604a0  addiu       $a2, $a0, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E54u;
        goto label_1d1e54;
    }
    ctx->pc = 0x1D1E4Cu;
    {
        const bool branch_taken_0x1d1e4c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E4Cu;
        // 0x1d1e50: 0x248604a0  addiu       $a2, $a0, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e4c) {
            ctx->pc = 0x1D1E88u;
            goto label_1d1e88;
        }
    }
    ctx->pc = 0x1D1E54u;
label_1d1e54:
    // 0x1d1e54: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1d1e58:
    // 0x1d1e58: 0x25240008  addiu       $a0, $t1, 0x8
    ctx->pc = 0x1d1e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_1d1e5c:
    // 0x1d1e5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d1e60:
    // 0x1d1e60: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x1d1e60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1e64:
    // 0x1d1e64: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1d1e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d1e68:
    // 0x1d1e68: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d1e6c:
    // 0x1d1e6c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1d1e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1d1e70:
    // 0x1d1e70: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1d1e70u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d1e74:
    // 0x1d1e74: 0x0  nop
    ctx->pc = 0x1d1e74u;
    // NOP
label_1d1e78:
    // 0x1d1e78: 0x0  nop
    ctx->pc = 0x1d1e78u;
    // NOP
label_1d1e7c:
    // 0x1d1e7c: 0x1812  mflo        $v1
    ctx->pc = 0x1d1e7cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1d1e80:
    // 0x1d1e80: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d1e84:
    if (ctx->pc == 0x1D1E84u) {
        ctx->pc = 0x1D1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E80u;
        // 0x1d1e84: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E88u;
        goto label_1d1e88;
    }
    ctx->pc = 0x1D1E80u;
    {
        const bool branch_taken_0x1d1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E80u;
        // 0x1d1e84: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e80) {
            ctx->pc = 0x1D1EB0u;
            goto label_1d1eb0;
        }
    }
    ctx->pc = 0x1D1E88u;
label_1d1e88:
    // 0x1d1e88: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x1d1e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1d1e8c:
    // 0x1d1e8c: 0x25240008  addiu       $a0, $t1, 0x8
    ctx->pc = 0x1d1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_1d1e90:
    // 0x1d1e90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d1e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d1e94:
    // 0x1d1e94: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1d1e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1d1e98:
    // 0x1d1e98: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1d1e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_1d1e9c:
    // 0x1d1e9c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1d1e9cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d1ea0:
    // 0x1d1ea0: 0x0  nop
    ctx->pc = 0x1d1ea0u;
    // NOP
label_1d1ea4:
    // 0x1d1ea4: 0x0  nop
    ctx->pc = 0x1d1ea4u;
    // NOP
label_1d1ea8:
    // 0x1d1ea8: 0x1812  mflo        $v1
    ctx->pc = 0x1d1ea8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1d1eac:
    // 0x1d1eac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1d1eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1d1eb0:
    // 0x1d1eb0: 0x3e00008  jr          $ra
label_1d1eb4:
    if (ctx->pc == 0x1D1EB4u) {
        ctx->pc = 0x1D1EB8u;
        goto label_1d1eb8;
    }
    ctx->pc = 0x1D1EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1EB8u;
label_1d1eb8:
    // 0x1d1eb8: 0x0  nop
    ctx->pc = 0x1d1eb8u;
    // NOP
label_1d1ebc:
    // 0x1d1ebc: 0x0  nop
    ctx->pc = 0x1d1ebcu;
    // NOP
label_1d1ec0:
    // 0x1d1ec0: 0x3e00008  jr          $ra
label_1d1ec4:
    if (ctx->pc == 0x1D1EC4u) {
        ctx->pc = 0x1D1EC8u;
        goto label_1d1ec8;
    }
    ctx->pc = 0x1D1EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1EC8u;
label_1d1ec8:
    // 0x1d1ec8: 0x0  nop
    ctx->pc = 0x1d1ec8u;
    // NOP
label_1d1ecc:
    // 0x1d1ecc: 0x0  nop
    ctx->pc = 0x1d1eccu;
    // NOP
label_1d1ed0:
    // 0x1d1ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d1ed4:
    // 0x1d1ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d1ed8:
    // 0x1d1ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d1edc:
    // 0x1d1edc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1d1ee0:
    if (ctx->pc == 0x1D1EE0u) {
        ctx->pc = 0x1D1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EDCu;
        // 0x1d1ee0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1EE4u;
        goto label_1d1ee4;
    }
    ctx->pc = 0x1D1EDCu;
    {
        const bool branch_taken_0x1d1edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EDCu;
        // 0x1d1ee0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1edc) {
            ctx->pc = 0x1D1F1Cu;
            goto label_1d1f1c;
        }
    }
    ctx->pc = 0x1D1EE4u;
label_1d1ee4:
    // 0x1d1ee4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ee8:
    // 0x1d1ee8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d1ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1eec:
    // 0x1d1eec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1d1ef0:
    // 0x1d1ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ef4:
    // 0x1d1ef4: 0x24420de0  addiu       $v0, $v0, 0xDE0
    ctx->pc = 0x1d1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3552));
label_1d1ef8:
    // 0x1d1ef8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1efc:
    // 0x1d1efc: 0xc0747d4  jal         func_1D1F50
label_1d1f00:
    if (ctx->pc == 0x1D1F00u) {
        ctx->pc = 0x1D1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EFCu;
        // 0x1d1f00: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F04u;
        goto label_1d1f04;
    }
    ctx->pc = 0x1D1EFCu;
    SET_GPR_U32(ctx, 31, 0x1D1F04u);
    ctx->pc = 0x1D1F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EFCu;
    // 0x1d1f00: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F50u;
    goto label_1d1f50;
    ctx->pc = 0x1D1F04u;
label_1d1f04:
    // 0x1d1f04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d1f08:
    // 0x1d1f08: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d1f08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d1f0c:
    // 0x1d1f0c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1d1f10:
    if (ctx->pc == 0x1D1F10u) {
        ctx->pc = 0x1D1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F0Cu;
        // 0x1d1f10: 0x263104b0  addiu       $s1, $s1, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F14u;
        goto label_1d1f14;
    }
    ctx->pc = 0x1D1F0Cu;
    {
        const bool branch_taken_0x1d1f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F0Cu;
        // 0x1d1f10: 0x263104b0  addiu       $s1, $s1, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f0c) {
            ctx->pc = 0x1D1EECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1eec;
        }
    }
    ctx->pc = 0x1D1F14u;
label_1d1f14:
    // 0x1d1f14: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d1f18:
    if (ctx->pc == 0x1D1F18u) {
        ctx->pc = 0x1D1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F14u;
        // 0x1d1f18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F1Cu;
        goto label_1d1f1c;
    }
    ctx->pc = 0x1D1F14u;
    {
        const bool branch_taken_0x1d1f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F14u;
        // 0x1d1f18: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f14) {
            ctx->pc = 0x1D1F34u;
            goto label_1d1f34;
        }
    }
    ctx->pc = 0x1D1F1Cu;
label_1d1f1c:
    // 0x1d1f1c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1d1f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1d1f20:
    // 0x1d1f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f24:
    // 0x1d1f24: 0x24840de0  addiu       $a0, $a0, 0xDE0
    ctx->pc = 0x1d1f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3552));
label_1d1f28:
    // 0x1d1f28: 0xc0747d4  jal         func_1D1F50
label_1d1f2c:
    if (ctx->pc == 0x1D1F2Cu) {
        ctx->pc = 0x1D1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F28u;
        // 0x1d1f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F30u;
        goto label_1d1f30;
    }
    ctx->pc = 0x1D1F28u;
    SET_GPR_U32(ctx, 31, 0x1D1F30u);
    ctx->pc = 0x1D1F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F28u;
    // 0x1d1f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F50u;
    goto label_1d1f50;
    ctx->pc = 0x1D1F30u;
label_1d1f30:
    // 0x1d1f30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1f34:
    // 0x1d1f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1f38:
    // 0x1d1f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1f3c:
    // 0x1d1f3c: 0x3e00008  jr          $ra
label_1d1f40:
    if (ctx->pc == 0x1D1F40u) {
        ctx->pc = 0x1D1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F3Cu;
        // 0x1d1f40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F44u;
        goto label_1d1f44;
    }
    ctx->pc = 0x1D1F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F3Cu;
        // 0x1d1f40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1F44u;
label_1d1f44:
    // 0x1d1f44: 0x0  nop
    ctx->pc = 0x1d1f44u;
    // NOP
label_1d1f48:
    // 0x1d1f48: 0x0  nop
    ctx->pc = 0x1d1f48u;
    // NOP
label_1d1f4c:
    // 0x1d1f4c: 0x0  nop
    ctx->pc = 0x1d1f4cu;
    // NOP
label_1d1f50:
    // 0x1d1f50: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1d1f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1d1f54:
    // 0x1d1f54: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1d1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1d1f58:
    // 0x1d1f58: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1d1f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1d1f5c:
    // 0x1d1f5c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1d1f60:
    // 0x1d1f60: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1d1f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1d1f64:
    // 0x1d1f64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d1f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d1f68:
    // 0x1d1f68: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1d1f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1d1f6c:
    // 0x1d1f6c: 0x24424974  addiu       $v0, $v0, 0x4974
    ctx->pc = 0x1d1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18804));
label_1d1f70:
    // 0x1d1f70: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1d1f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1d1f74:
    // 0x1d1f74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d1f78:
    // 0x1d1f78: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d1f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1d1f7c:
    // 0x1d1f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d1f80:
    // 0x1d1f80: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1d1f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1d1f84:
    // 0x1d1f84: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d1f84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f88:
    // 0x1d1f88: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1d1f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1d1f8c:
    // 0x1d1f8c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d1f8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f90:
    // 0x1d1f90: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d1f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1d1f94:
    // 0x1d1f94: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d1f94u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f98:
    // 0x1d1f98: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d1f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1d1f9c:
    // 0x1d1f9c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d1f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d1fa0:
    // 0x1d1fa0: 0xafa60108  sw          $a2, 0x108($sp)
    ctx->pc = 0x1d1fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 6));
label_1d1fa4:
    // 0x1d1fa4: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x1d1fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
label_1d1fa8:
    // 0x1d1fa8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1d1fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d1fac:
    // 0x1d1fac: 0xac8004a0  sw          $zero, 0x4A0($a0)
    ctx->pc = 0x1d1facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1184), GPR_U32(ctx, 0));
label_1d1fb0:
    // 0x1d1fb0: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x1d1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_1d1fb4:
    // 0x1d1fb4: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1d1fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1d1fb8:
    // 0x1d1fb8: 0x569021  addu        $s2, $v0, $s6
    ctx->pc = 0x1d1fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1d1fbc:
    // 0x1d1fbc: 0xc05e234  jal         func_1788D0
label_1d1fc0:
    if (ctx->pc == 0x1D1FC0u) {
        ctx->pc = 0x1D1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FBCu;
        // 0x1d1fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1FC4u;
        goto label_1d1fc4;
    }
    ctx->pc = 0x1D1FBCu;
    SET_GPR_U32(ctx, 31, 0x1D1FC4u);
    ctx->pc = 0x1D1FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1FBCu;
    // 0x1d1fc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1D1FBCu, 0x1D1FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1FC4u;
label_1d1fc4:
    // 0x1d1fc4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1d1fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1d1fc8:
    // 0x1d1fc8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d1fcc:
    if (ctx->pc == 0x1D1FCCu) {
        ctx->pc = 0x1D1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FC8u;
        // 0x1d1fcc: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1FD0u;
        goto label_1d1fd0;
    }
    ctx->pc = 0x1D1FC8u;
    {
        const bool branch_taken_0x1d1fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FC8u;
        // 0x1d1fcc: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1fc8) {
            ctx->pc = 0x1D202Cu;
            goto label_1d202c;
        }
    }
    ctx->pc = 0x1D1FD0u;
label_1d1fd0:
    // 0x1d1fd0: 0xc070834  jal         func_1C20D0
label_1d1fd4:
    if (ctx->pc == 0x1D1FD4u) {
        ctx->pc = 0x1D1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FD0u;
        // 0x1d1fd4: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1FD8u;
        goto label_1d1fd8;
    }
    ctx->pc = 0x1D1FD0u;
    SET_GPR_U32(ctx, 31, 0x1D1FD8u);
    ctx->pc = 0x1D1FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1FD0u;
    // 0x1d1fd4: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1D1FD8u;
label_1d1fd8:
    // 0x1d1fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1fdc:
    // 0x1d1fdc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1d1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d1fe0:
    // 0x1d1fe0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1d1fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1d1fe4:
    // 0x1d1fe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1fe8:
    // 0x1d1fe8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d1fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d1fec:
    // 0x1d1fec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1ff0:
    // 0x1d1ff0: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1d1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1d1ff4:
    // 0x1d1ff4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d1ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1d1ff8:
    // 0x1d1ff8: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1d1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1ffc:
    // 0x1d1ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2000:
    // 0x1d2000: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d2000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1d2004:
    // 0x1d2004: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1d2004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1d2008:
    // 0x1d2008: 0x2447000c  addiu       $a3, $v0, 0xC
    ctx->pc = 0x1d2008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1d200c:
    // 0x1d200c: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x1d200cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_1d2010:
    // 0x1d2010: 0x3408ffe1  ori         $t0, $zero, 0xFFE1
    ctx->pc = 0x1d2010u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
label_1d2014:
    // 0x1d2014: 0x24090218  addiu       $t1, $zero, 0x218
    ctx->pc = 0x1d2014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
label_1d2018:
    // 0x1d2018: 0x240a00d0  addiu       $t2, $zero, 0xD0
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1d201c:
    // 0x1d201c: 0xc05de30  jal         func_1778C0
label_1d2020:
    if (ctx->pc == 0x1D2020u) {
        ctx->pc = 0x1D2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D201Cu;
        // 0x1d2020: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2024u;
        goto label_1d2024;
    }
    ctx->pc = 0x1D201Cu;
    SET_GPR_U32(ctx, 31, 0x1D2024u);
    ctx->pc = 0x1D2020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D201Cu;
    // 0x1d2020: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D201Cu, 0x1D2024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2024u;
label_1d2024:
    // 0x1d2024: 0x10000014  b           . + 4 + (0x14 << 2)
label_1d2028:
    if (ctx->pc == 0x1D2028u) {
        ctx->pc = 0x1D202Cu;
        goto label_1d202c;
    }
    ctx->pc = 0x1D2024u;
    {
        const bool branch_taken_0x1d2024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2024) {
            ctx->pc = 0x1D2078u;
            goto label_1d2078;
        }
    }
    ctx->pc = 0x1D202Cu;
label_1d202c:
    // 0x1d202c: 0x0  nop
    ctx->pc = 0x1d202cu;
    // NOP
label_1d2030:
    // 0x1d2030: 0xc070834  jal         func_1C20D0
label_1d2034:
    if (ctx->pc == 0x1D2034u) {
        ctx->pc = 0x1D2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2030u;
        // 0x1d2034: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2038u;
        goto label_1d2038;
    }
    ctx->pc = 0x1D2030u;
    SET_GPR_U32(ctx, 31, 0x1D2038u);
    ctx->pc = 0x1D2034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2030u;
    // 0x1d2034: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1D2038u;
label_1d2038:
    // 0x1d2038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d203c:
    // 0x1d203c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d203cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2040:
    // 0x1d2040: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1d2040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d2044:
    // 0x1d2044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2048:
    // 0x1d2048: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d2048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d204c:
    // 0x1d204c: 0x240601d4  addiu       $a2, $zero, 0x1D4
    ctx->pc = 0x1d204cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
label_1d2050:
    // 0x1d2050: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1d2050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1d2054:
    // 0x1d2054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2058:
    // 0x1d2058: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1d2058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1d205c:
    // 0x1d205c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x1d205cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2060:
    // 0x1d2060: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d2060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d2064:
    // 0x1d2064: 0x3408ffe1  ori         $t0, $zero, 0xFFE1
    ctx->pc = 0x1d2064u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
label_1d2068:
    // 0x1d2068: 0x24090178  addiu       $t1, $zero, 0x178
    ctx->pc = 0x1d2068u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_1d206c:
    // 0x1d206c: 0x240a00d0  addiu       $t2, $zero, 0xD0
    ctx->pc = 0x1d206cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1d2070:
    // 0x1d2070: 0xc05de30  jal         func_1778C0
label_1d2074:
    if (ctx->pc == 0x1D2074u) {
        ctx->pc = 0x1D2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2070u;
        // 0x1d2074: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2078u;
        goto label_1d2078;
    }
    ctx->pc = 0x1D2070u;
    SET_GPR_U32(ctx, 31, 0x1D2078u);
    ctx->pc = 0x1D2074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2070u;
    // 0x1d2074: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D2070u, 0x1D2078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2078u;
label_1d2078:
    // 0x1d2078: 0xc070834  jal         func_1C20D0
label_1d207c:
    if (ctx->pc == 0x1D207Cu) {
        ctx->pc = 0x1D207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2078u;
        // 0x1d207c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2080u;
        goto label_1d2080;
    }
    ctx->pc = 0x1D2078u;
    SET_GPR_U32(ctx, 31, 0x1D2080u);
    ctx->pc = 0x1D207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2078u;
    // 0x1d207c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1D2080u;
label_1d2080:
    // 0x1d2080: 0xffa20100  sd          $v0, 0x100($sp)
    ctx->pc = 0x1d2080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 2));
label_1d2084:
    // 0x1d2084: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1d2084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1d2088:
    // 0x1d2088: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d208c:
    if (ctx->pc == 0x1D208Cu) {
        ctx->pc = 0x1D2090u;
        goto label_1d2090;
    }
    ctx->pc = 0x1D2088u;
    {
        const bool branch_taken_0x1d2088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2088) {
            ctx->pc = 0x1D20BCu;
            goto label_1d20bc;
        }
    }
    ctx->pc = 0x1D2090u;
label_1d2090:
    // 0x1d2090: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x1d2090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
label_1d2094:
    // 0x1d2094: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x1d2094u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d2098:
    // 0x1d2098: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d2098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1d209c:
    // 0x1d209c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1d209cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1d20a0:
    // 0x1d20a0: 0x551823  subu        $v1, $v0, $s5
    ctx->pc = 0x1d20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d20a4:
    // 0x1d20a4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1d20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d20a8:
    // 0x1d20a8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1d20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_1d20ac:
    // 0x1d20ac: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1d20acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d20b0:
    // 0x1d20b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d20b4:
    // 0x1d20b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d20b8:
    if (ctx->pc == 0x1D20B8u) {
        ctx->pc = 0x1D20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20B4u;
        // 0x1d20b8: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20BCu;
        goto label_1d20bc;
    }
    ctx->pc = 0x1D20B4u;
    {
        const bool branch_taken_0x1d20b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20B4u;
        // 0x1d20b8: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20b4) {
            ctx->pc = 0x1D20DCu;
            goto label_1d20dc;
        }
    }
    ctx->pc = 0x1D20BCu;
label_1d20bc:
    // 0x1d20bc: 0x0  nop
    ctx->pc = 0x1d20bcu;
    // NOP
label_1d20c0:
    // 0x1d20c0: 0x240201e4  addiu       $v0, $zero, 0x1E4
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 484));
label_1d20c4:
    // 0x1d20c4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d20c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1d20c8:
    // 0x1d20c8: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x1d20c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d20cc:
    // 0x1d20cc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1d20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d20d0:
    // 0x1d20d0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1d20d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1d20d4:
    // 0x1d20d4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d20d8:
    // 0x1d20d8: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1d20d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_1d20dc:
    // 0x1d20dc: 0x0  nop
    ctx->pc = 0x1d20dcu;
    // NOP
label_1d20e0:
    // 0x1d20e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d20e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d20e4:
    // 0x1d20e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d20e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d20e8:
    // 0x1d20e8: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x1d20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1d20ec:
    // 0x1d20ec: 0x245300b0  addiu       $s3, $v0, 0xB0
    ctx->pc = 0x1d20ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_1d20f0:
    // 0x1d20f0: 0x3408ffe0  ori         $t0, $zero, 0xFFE0
    ctx->pc = 0x1d20f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_1d20f4:
    // 0x1d20f4: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1d20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1d20f8:
    // 0x1d20f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d20f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d20fc:
    // 0x1d20fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d20fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d2100:
    // 0x1d2100: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x1d2100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1d2104:
    // 0x1d2104: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d2104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d2108:
    // 0x1d2108: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d2108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d210c:
    // 0x1d210c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d2110:
    // 0x1d2110: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1d2110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1d2114:
    // 0x1d2114: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d2114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2118:
    // 0x1d2118: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d2118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d211c:
    // 0x1d211c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2120:
    // 0x1d2120: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1d2120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1d2124:
    // 0x1d2124: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1d2124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1d2128:
    // 0x1d2128: 0xdfa50100  ld          $a1, 0x100($sp)
    ctx->pc = 0x1d2128u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1d212c:
    // 0x1d212c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x1d212cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d2130:
    // 0x1d2130: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x1d2130u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d2134:
    // 0x1d2134: 0x8fa900f0  lw          $t1, 0xF0($sp)
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d2138:
    // 0x1d2138: 0xc05ded8  jal         func_177B60
label_1d213c:
    if (ctx->pc == 0x1D213Cu) {
        ctx->pc = 0x1D213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2138u;
        // 0x1d213c: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2140u;
        goto label_1d2140;
    }
    ctx->pc = 0x1D2138u;
    SET_GPR_U32(ctx, 31, 0x1D2140u);
    ctx->pc = 0x1D213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2138u;
    // 0x1d213c: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1D2138u, 0x1D2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2140u;
label_1d2140:
    // 0x1d2140: 0x1620003a  bnez        $s1, . + 4 + (0x3A << 2)
label_1d2144:
    if (ctx->pc == 0x1D2144u) {
        ctx->pc = 0x1D2148u;
        goto label_1d2148;
    }
    ctx->pc = 0x1D2140u;
    {
        const bool branch_taken_0x1d2140 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2140) {
            ctx->pc = 0x1D222Cu;
            { ctx->pc = 0x1d222c; return; }
        }
    }
    ctx->pc = 0x1D2148u;
label_1d2148:
    // 0x1d2148: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
label_1d214c:
    if (ctx->pc == 0x1D214Cu) {
        ctx->pc = 0x1D2150u;
        goto label_1d2150;
    }
    ctx->pc = 0x1D2148u;
    {
        const bool branch_taken_0x1d2148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2148) {
            ctx->pc = 0x1D21BCu;
            { ctx->pc = 0x1d21bc; return; }
        }
    }
    ctx->pc = 0x1D2150u;
label_1d2150:
    // 0x1d2150: 0xa2600070  sb          $zero, 0x70($s3)
    ctx->pc = 0x1d2150u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 112), (uint8_t)GPR_U32(ctx, 0));
label_1d2154:
    // 0x1d2154: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1d2154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d2158:
    // 0x1d2158: 0xa2680071  sb          $t0, 0x71($s3)
    ctx->pc = 0x1d2158u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 113), (uint8_t)GPR_U32(ctx, 8));
label_1d215c:
    // 0x1d215c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1d215cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1d2160:
    // 0x1d2160: 0xa2670072  sb          $a3, 0x72($s3)
    ctx->pc = 0x1d2160u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 114), (uint8_t)GPR_U32(ctx, 7));
label_1d2164:
    // 0x1d2164: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d2164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d2168:
    // 0x1d2168: 0xa2660073  sb          $a2, 0x73($s3)
    ctx->pc = 0x1d2168u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 115), (uint8_t)GPR_U32(ctx, 6));
label_1d216c:
    // 0x1d216c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d216cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1d2170:
    // 0x1d2170: 0xae650074  sw          $a1, 0x74($s3)
    ctx->pc = 0x1d2170u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 5));
label_1d2174:
    // 0x1d2174: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1d2174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1d2178:
    // 0x1d2178: 0xa26000a0  sb          $zero, 0xA0($s3)
    ctx->pc = 0x1d2178u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 160), (uint8_t)GPR_U32(ctx, 0));
label_1d217c:
    // 0x1d217c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1d217cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d2180:
    // 0x1d2180: 0xa26800a1  sb          $t0, 0xA1($s3)
    ctx->pc = 0x1d2180u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 161), (uint8_t)GPR_U32(ctx, 8));
label_1d2184:
    // 0x1d2184: 0xa26700a2  sb          $a3, 0xA2($s3)
    ctx->pc = 0x1d2184u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 162), (uint8_t)GPR_U32(ctx, 7));
label_1d2188:
    // 0x1d2188: 0xa26600a3  sb          $a2, 0xA3($s3)
    ctx->pc = 0x1d2188u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 163), (uint8_t)GPR_U32(ctx, 6));
label_1d218c:
    // 0x1d218c: 0xae6500a4  sw          $a1, 0xA4($s3)
    ctx->pc = 0x1d218cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 5));
label_1d2190:
    // 0x1d2190: 0xa2640088  sb          $a0, 0x88($s3)
    ctx->pc = 0x1d2190u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 136), (uint8_t)GPR_U32(ctx, 4));
label_1d2194:
    // 0x1d2194: 0xa2670089  sb          $a3, 0x89($s3)
    ctx->pc = 0x1d2194u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 137), (uint8_t)GPR_U32(ctx, 7));
label_1d2198:
    // 0x1d2198: 0xa263008a  sb          $v1, 0x8A($s3)
    ctx->pc = 0x1d2198u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 138), (uint8_t)GPR_U32(ctx, 3));
label_1d219c:
    // 0x1d219c: 0xa266008b  sb          $a2, 0x8B($s3)
    ctx->pc = 0x1d219cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 139), (uint8_t)GPR_U32(ctx, 6));
label_1d21a0:
    // 0x1d21a0: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x1d21a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
label_1d21a4:
    // 0x1d21a4: 0xa26400b8  sb          $a0, 0xB8($s3)
    ctx->pc = 0x1d21a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 184), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1d21a8u;
    return;
}

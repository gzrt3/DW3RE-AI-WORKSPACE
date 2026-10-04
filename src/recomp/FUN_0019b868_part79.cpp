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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part79(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c19c8u: goto label_1c19c8;
        case 0x1c19ccu: goto label_1c19cc;
        case 0x1c19d0u: goto label_1c19d0;
        case 0x1c19d4u: goto label_1c19d4;
        case 0x1c19d8u: goto label_1c19d8;
        case 0x1c19dcu: goto label_1c19dc;
        case 0x1c19e0u: goto label_1c19e0;
        case 0x1c19e4u: goto label_1c19e4;
        case 0x1c19e8u: goto label_1c19e8;
        case 0x1c19ecu: goto label_1c19ec;
        case 0x1c19f0u: goto label_1c19f0;
        case 0x1c19f4u: goto label_1c19f4;
        case 0x1c19f8u: goto label_1c19f8;
        case 0x1c19fcu: goto label_1c19fc;
        case 0x1c1a00u: goto label_1c1a00;
        case 0x1c1a04u: goto label_1c1a04;
        case 0x1c1a08u: goto label_1c1a08;
        case 0x1c1a0cu: goto label_1c1a0c;
        case 0x1c1a10u: goto label_1c1a10;
        case 0x1c1a14u: goto label_1c1a14;
        case 0x1c1a18u: goto label_1c1a18;
        case 0x1c1a1cu: goto label_1c1a1c;
        case 0x1c1a20u: goto label_1c1a20;
        case 0x1c1a24u: goto label_1c1a24;
        case 0x1c1a28u: goto label_1c1a28;
        case 0x1c1a2cu: goto label_1c1a2c;
        case 0x1c1a30u: goto label_1c1a30;
        case 0x1c1a34u: goto label_1c1a34;
        case 0x1c1a38u: goto label_1c1a38;
        case 0x1c1a3cu: goto label_1c1a3c;
        case 0x1c1a40u: goto label_1c1a40;
        case 0x1c1a44u: goto label_1c1a44;
        case 0x1c1a48u: goto label_1c1a48;
        case 0x1c1a4cu: goto label_1c1a4c;
        case 0x1c1a50u: goto label_1c1a50;
        case 0x1c1a54u: goto label_1c1a54;
        case 0x1c1a58u: goto label_1c1a58;
        case 0x1c1a5cu: goto label_1c1a5c;
        case 0x1c1a60u: goto label_1c1a60;
        case 0x1c1a64u: goto label_1c1a64;
        case 0x1c1a68u: goto label_1c1a68;
        case 0x1c1a6cu: goto label_1c1a6c;
        case 0x1c1a70u: goto label_1c1a70;
        case 0x1c1a74u: goto label_1c1a74;
        case 0x1c1a78u: goto label_1c1a78;
        case 0x1c1a7cu: goto label_1c1a7c;
        case 0x1c1a80u: goto label_1c1a80;
        case 0x1c1a84u: goto label_1c1a84;
        case 0x1c1a88u: goto label_1c1a88;
        case 0x1c1a8cu: goto label_1c1a8c;
        case 0x1c1a90u: goto label_1c1a90;
        case 0x1c1a94u: goto label_1c1a94;
        case 0x1c1a98u: goto label_1c1a98;
        case 0x1c1a9cu: goto label_1c1a9c;
        case 0x1c1aa0u: goto label_1c1aa0;
        case 0x1c1aa4u: goto label_1c1aa4;
        case 0x1c1aa8u: goto label_1c1aa8;
        case 0x1c1aacu: goto label_1c1aac;
        case 0x1c1ab0u: goto label_1c1ab0;
        case 0x1c1ab4u: goto label_1c1ab4;
        case 0x1c1ab8u: goto label_1c1ab8;
        case 0x1c1abcu: goto label_1c1abc;
        case 0x1c1ac0u: goto label_1c1ac0;
        case 0x1c1ac4u: goto label_1c1ac4;
        case 0x1c1ac8u: goto label_1c1ac8;
        case 0x1c1accu: goto label_1c1acc;
        case 0x1c1ad0u: goto label_1c1ad0;
        case 0x1c1ad4u: goto label_1c1ad4;
        case 0x1c1ad8u: goto label_1c1ad8;
        case 0x1c1adcu: goto label_1c1adc;
        case 0x1c1ae0u: goto label_1c1ae0;
        case 0x1c1ae4u: goto label_1c1ae4;
        case 0x1c1ae8u: goto label_1c1ae8;
        case 0x1c1aecu: goto label_1c1aec;
        case 0x1c1af0u: goto label_1c1af0;
        case 0x1c1af4u: goto label_1c1af4;
        case 0x1c1af8u: goto label_1c1af8;
        case 0x1c1afcu: goto label_1c1afc;
        case 0x1c1b00u: goto label_1c1b00;
        case 0x1c1b04u: goto label_1c1b04;
        case 0x1c1b08u: goto label_1c1b08;
        case 0x1c1b0cu: goto label_1c1b0c;
        case 0x1c1b10u: goto label_1c1b10;
        case 0x1c1b14u: goto label_1c1b14;
        case 0x1c1b18u: goto label_1c1b18;
        case 0x1c1b1cu: goto label_1c1b1c;
        case 0x1c1b20u: goto label_1c1b20;
        case 0x1c1b24u: goto label_1c1b24;
        case 0x1c1b28u: goto label_1c1b28;
        case 0x1c1b2cu: goto label_1c1b2c;
        case 0x1c1b30u: goto label_1c1b30;
        case 0x1c1b34u: goto label_1c1b34;
        case 0x1c1b38u: goto label_1c1b38;
        case 0x1c1b3cu: goto label_1c1b3c;
        case 0x1c1b40u: goto label_1c1b40;
        case 0x1c1b44u: goto label_1c1b44;
        case 0x1c1b48u: goto label_1c1b48;
        case 0x1c1b4cu: goto label_1c1b4c;
        case 0x1c1b50u: goto label_1c1b50;
        case 0x1c1b54u: goto label_1c1b54;
        case 0x1c1b58u: goto label_1c1b58;
        case 0x1c1b5cu: goto label_1c1b5c;
        case 0x1c1b60u: goto label_1c1b60;
        case 0x1c1b64u: goto label_1c1b64;
        case 0x1c1b68u: goto label_1c1b68;
        case 0x1c1b6cu: goto label_1c1b6c;
        case 0x1c1b70u: goto label_1c1b70;
        case 0x1c1b74u: goto label_1c1b74;
        case 0x1c1b78u: goto label_1c1b78;
        case 0x1c1b7cu: goto label_1c1b7c;
        case 0x1c1b80u: goto label_1c1b80;
        case 0x1c1b84u: goto label_1c1b84;
        case 0x1c1b88u: goto label_1c1b88;
        case 0x1c1b8cu: goto label_1c1b8c;
        case 0x1c1b90u: goto label_1c1b90;
        case 0x1c1b94u: goto label_1c1b94;
        case 0x1c1b98u: goto label_1c1b98;
        case 0x1c1b9cu: goto label_1c1b9c;
        case 0x1c1ba0u: goto label_1c1ba0;
        case 0x1c1ba4u: goto label_1c1ba4;
        case 0x1c1ba8u: goto label_1c1ba8;
        case 0x1c1bacu: goto label_1c1bac;
        case 0x1c1bb0u: goto label_1c1bb0;
        case 0x1c1bb4u: goto label_1c1bb4;
        case 0x1c1bb8u: goto label_1c1bb8;
        case 0x1c1bbcu: goto label_1c1bbc;
        case 0x1c1bc0u: goto label_1c1bc0;
        case 0x1c1bc4u: goto label_1c1bc4;
        case 0x1c1bc8u: goto label_1c1bc8;
        case 0x1c1bccu: goto label_1c1bcc;
        case 0x1c1bd0u: goto label_1c1bd0;
        case 0x1c1bd4u: goto label_1c1bd4;
        case 0x1c1bd8u: goto label_1c1bd8;
        case 0x1c1bdcu: goto label_1c1bdc;
        case 0x1c1be0u: goto label_1c1be0;
        case 0x1c1be4u: goto label_1c1be4;
        case 0x1c1be8u: goto label_1c1be8;
        case 0x1c1becu: goto label_1c1bec;
        case 0x1c1bf0u: goto label_1c1bf0;
        case 0x1c1bf4u: goto label_1c1bf4;
        case 0x1c1bf8u: goto label_1c1bf8;
        case 0x1c1bfcu: goto label_1c1bfc;
        case 0x1c1c00u: goto label_1c1c00;
        case 0x1c1c04u: goto label_1c1c04;
        case 0x1c1c08u: goto label_1c1c08;
        case 0x1c1c0cu: goto label_1c1c0c;
        case 0x1c1c10u: goto label_1c1c10;
        case 0x1c1c14u: goto label_1c1c14;
        case 0x1c1c18u: goto label_1c1c18;
        case 0x1c1c1cu: goto label_1c1c1c;
        case 0x1c1c20u: goto label_1c1c20;
        case 0x1c1c24u: goto label_1c1c24;
        case 0x1c1c28u: goto label_1c1c28;
        case 0x1c1c2cu: goto label_1c1c2c;
        case 0x1c1c30u: goto label_1c1c30;
        case 0x1c1c34u: goto label_1c1c34;
        case 0x1c1c38u: goto label_1c1c38;
        case 0x1c1c3cu: goto label_1c1c3c;
        case 0x1c1c40u: goto label_1c1c40;
        case 0x1c1c44u: goto label_1c1c44;
        case 0x1c1c48u: goto label_1c1c48;
        case 0x1c1c4cu: goto label_1c1c4c;
        case 0x1c1c50u: goto label_1c1c50;
        case 0x1c1c54u: goto label_1c1c54;
        case 0x1c1c58u: goto label_1c1c58;
        case 0x1c1c5cu: goto label_1c1c5c;
        case 0x1c1c60u: goto label_1c1c60;
        case 0x1c1c64u: goto label_1c1c64;
        case 0x1c1c68u: goto label_1c1c68;
        case 0x1c1c6cu: goto label_1c1c6c;
        case 0x1c1c70u: goto label_1c1c70;
        case 0x1c1c74u: goto label_1c1c74;
        case 0x1c1c78u: goto label_1c1c78;
        case 0x1c1c7cu: goto label_1c1c7c;
        case 0x1c1c80u: goto label_1c1c80;
        case 0x1c1c84u: goto label_1c1c84;
        case 0x1c1c88u: goto label_1c1c88;
        case 0x1c1c8cu: goto label_1c1c8c;
        case 0x1c1c90u: goto label_1c1c90;
        case 0x1c1c94u: goto label_1c1c94;
        case 0x1c1c98u: goto label_1c1c98;
        case 0x1c1c9cu: goto label_1c1c9c;
        case 0x1c1ca0u: goto label_1c1ca0;
        case 0x1c1ca4u: goto label_1c1ca4;
        case 0x1c1ca8u: goto label_1c1ca8;
        case 0x1c1cacu: goto label_1c1cac;
        case 0x1c1cb0u: goto label_1c1cb0;
        case 0x1c1cb4u: goto label_1c1cb4;
        case 0x1c1cb8u: goto label_1c1cb8;
        case 0x1c1cbcu: goto label_1c1cbc;
        case 0x1c1cc0u: goto label_1c1cc0;
        case 0x1c1cc4u: goto label_1c1cc4;
        case 0x1c1cc8u: goto label_1c1cc8;
        case 0x1c1cccu: goto label_1c1ccc;
        case 0x1c1cd0u: goto label_1c1cd0;
        case 0x1c1cd4u: goto label_1c1cd4;
        case 0x1c1cd8u: goto label_1c1cd8;
        case 0x1c1cdcu: goto label_1c1cdc;
        case 0x1c1ce0u: goto label_1c1ce0;
        case 0x1c1ce4u: goto label_1c1ce4;
        case 0x1c1ce8u: goto label_1c1ce8;
        case 0x1c1cecu: goto label_1c1cec;
        case 0x1c1cf0u: goto label_1c1cf0;
        case 0x1c1cf4u: goto label_1c1cf4;
        case 0x1c1cf8u: goto label_1c1cf8;
        case 0x1c1cfcu: goto label_1c1cfc;
        case 0x1c1d00u: goto label_1c1d00;
        case 0x1c1d04u: goto label_1c1d04;
        case 0x1c1d08u: goto label_1c1d08;
        case 0x1c1d0cu: goto label_1c1d0c;
        case 0x1c1d10u: goto label_1c1d10;
        case 0x1c1d14u: goto label_1c1d14;
        case 0x1c1d18u: goto label_1c1d18;
        case 0x1c1d1cu: goto label_1c1d1c;
        case 0x1c1d20u: goto label_1c1d20;
        case 0x1c1d24u: goto label_1c1d24;
        case 0x1c1d28u: goto label_1c1d28;
        case 0x1c1d2cu: goto label_1c1d2c;
        case 0x1c1d30u: goto label_1c1d30;
        case 0x1c1d34u: goto label_1c1d34;
        case 0x1c1d38u: goto label_1c1d38;
        case 0x1c1d3cu: goto label_1c1d3c;
        case 0x1c1d40u: goto label_1c1d40;
        case 0x1c1d44u: goto label_1c1d44;
        case 0x1c1d48u: goto label_1c1d48;
        case 0x1c1d4cu: goto label_1c1d4c;
        case 0x1c1d50u: goto label_1c1d50;
        case 0x1c1d54u: goto label_1c1d54;
        case 0x1c1d58u: goto label_1c1d58;
        case 0x1c1d5cu: goto label_1c1d5c;
        case 0x1c1d60u: goto label_1c1d60;
        case 0x1c1d64u: goto label_1c1d64;
        case 0x1c1d68u: goto label_1c1d68;
        case 0x1c1d6cu: goto label_1c1d6c;
        case 0x1c1d70u: goto label_1c1d70;
        case 0x1c1d74u: goto label_1c1d74;
        case 0x1c1d78u: goto label_1c1d78;
        case 0x1c1d7cu: goto label_1c1d7c;
        case 0x1c1d80u: goto label_1c1d80;
        case 0x1c1d84u: goto label_1c1d84;
        case 0x1c1d88u: goto label_1c1d88;
        case 0x1c1d8cu: goto label_1c1d8c;
        case 0x1c1d90u: goto label_1c1d90;
        case 0x1c1d94u: goto label_1c1d94;
        case 0x1c1d98u: goto label_1c1d98;
        case 0x1c1d9cu: goto label_1c1d9c;
        case 0x1c1da0u: goto label_1c1da0;
        case 0x1c1da4u: goto label_1c1da4;
        case 0x1c1da8u: goto label_1c1da8;
        case 0x1c1dacu: goto label_1c1dac;
        case 0x1c1db0u: goto label_1c1db0;
        case 0x1c1db4u: goto label_1c1db4;
        case 0x1c1db8u: goto label_1c1db8;
        case 0x1c1dbcu: goto label_1c1dbc;
        case 0x1c1dc0u: goto label_1c1dc0;
        case 0x1c1dc4u: goto label_1c1dc4;
        case 0x1c1dc8u: goto label_1c1dc8;
        case 0x1c1dccu: goto label_1c1dcc;
        case 0x1c1dd0u: goto label_1c1dd0;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1dd8u: goto label_1c1dd8;
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1de0u: goto label_1c1de0;
        case 0x1c1de4u: goto label_1c1de4;
        case 0x1c1de8u: goto label_1c1de8;
        case 0x1c1decu: goto label_1c1dec;
        case 0x1c1df0u: goto label_1c1df0;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1df8u: goto label_1c1df8;
        case 0x1c1dfcu: goto label_1c1dfc;
        case 0x1c1e00u: goto label_1c1e00;
        case 0x1c1e04u: goto label_1c1e04;
        case 0x1c1e08u: goto label_1c1e08;
        case 0x1c1e0cu: goto label_1c1e0c;
        case 0x1c1e10u: goto label_1c1e10;
        case 0x1c1e14u: goto label_1c1e14;
        case 0x1c1e18u: goto label_1c1e18;
        case 0x1c1e1cu: goto label_1c1e1c;
        case 0x1c1e20u: goto label_1c1e20;
        case 0x1c1e24u: goto label_1c1e24;
        case 0x1c1e28u: goto label_1c1e28;
        case 0x1c1e2cu: goto label_1c1e2c;
        case 0x1c1e30u: goto label_1c1e30;
        case 0x1c1e34u: goto label_1c1e34;
        case 0x1c1e38u: goto label_1c1e38;
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e40u: goto label_1c1e40;
        case 0x1c1e44u: goto label_1c1e44;
        case 0x1c1e48u: goto label_1c1e48;
        case 0x1c1e4cu: goto label_1c1e4c;
        case 0x1c1e50u: goto label_1c1e50;
        case 0x1c1e54u: goto label_1c1e54;
        case 0x1c1e58u: goto label_1c1e58;
        case 0x1c1e5cu: goto label_1c1e5c;
        case 0x1c1e60u: goto label_1c1e60;
        case 0x1c1e64u: goto label_1c1e64;
        case 0x1c1e68u: goto label_1c1e68;
        case 0x1c1e6cu: goto label_1c1e6c;
        case 0x1c1e70u: goto label_1c1e70;
        case 0x1c1e74u: goto label_1c1e74;
        case 0x1c1e78u: goto label_1c1e78;
        case 0x1c1e7cu: goto label_1c1e7c;
        case 0x1c1e80u: goto label_1c1e80;
        case 0x1c1e84u: goto label_1c1e84;
        case 0x1c1e88u: goto label_1c1e88;
        case 0x1c1e8cu: goto label_1c1e8c;
        case 0x1c1e90u: goto label_1c1e90;
        case 0x1c1e94u: goto label_1c1e94;
        case 0x1c1e98u: goto label_1c1e98;
        case 0x1c1e9cu: goto label_1c1e9c;
        case 0x1c1ea0u: goto label_1c1ea0;
        case 0x1c1ea4u: goto label_1c1ea4;
        case 0x1c1ea8u: goto label_1c1ea8;
        case 0x1c1eacu: goto label_1c1eac;
        case 0x1c1eb0u: goto label_1c1eb0;
        case 0x1c1eb4u: goto label_1c1eb4;
        case 0x1c1eb8u: goto label_1c1eb8;
        case 0x1c1ebcu: goto label_1c1ebc;
        case 0x1c1ec0u: goto label_1c1ec0;
        case 0x1c1ec4u: goto label_1c1ec4;
        case 0x1c1ec8u: goto label_1c1ec8;
        case 0x1c1eccu: goto label_1c1ecc;
        case 0x1c1ed0u: goto label_1c1ed0;
        case 0x1c1ed4u: goto label_1c1ed4;
        case 0x1c1ed8u: goto label_1c1ed8;
        case 0x1c1edcu: goto label_1c1edc;
        case 0x1c1ee0u: goto label_1c1ee0;
        case 0x1c1ee4u: goto label_1c1ee4;
        case 0x1c1ee8u: goto label_1c1ee8;
        case 0x1c1eecu: goto label_1c1eec;
        case 0x1c1ef0u: goto label_1c1ef0;
        case 0x1c1ef4u: goto label_1c1ef4;
        case 0x1c1ef8u: goto label_1c1ef8;
        case 0x1c1efcu: goto label_1c1efc;
        case 0x1c1f00u: goto label_1c1f00;
        case 0x1c1f04u: goto label_1c1f04;
        case 0x1c1f08u: goto label_1c1f08;
        case 0x1c1f0cu: goto label_1c1f0c;
        case 0x1c1f10u: goto label_1c1f10;
        case 0x1c1f14u: goto label_1c1f14;
        case 0x1c1f18u: goto label_1c1f18;
        case 0x1c1f1cu: goto label_1c1f1c;
        case 0x1c1f20u: goto label_1c1f20;
        case 0x1c1f24u: goto label_1c1f24;
        case 0x1c1f28u: goto label_1c1f28;
        case 0x1c1f2cu: goto label_1c1f2c;
        case 0x1c1f30u: goto label_1c1f30;
        case 0x1c1f34u: goto label_1c1f34;
        case 0x1c1f38u: goto label_1c1f38;
        case 0x1c1f3cu: goto label_1c1f3c;
        case 0x1c1f40u: goto label_1c1f40;
        case 0x1c1f44u: goto label_1c1f44;
        case 0x1c1f48u: goto label_1c1f48;
        case 0x1c1f4cu: goto label_1c1f4c;
        case 0x1c1f50u: goto label_1c1f50;
        case 0x1c1f54u: goto label_1c1f54;
        case 0x1c1f58u: goto label_1c1f58;
        case 0x1c1f5cu: goto label_1c1f5c;
        case 0x1c1f60u: goto label_1c1f60;
        case 0x1c1f64u: goto label_1c1f64;
        case 0x1c1f68u: goto label_1c1f68;
        case 0x1c1f6cu: goto label_1c1f6c;
        case 0x1c1f70u: goto label_1c1f70;
        case 0x1c1f74u: goto label_1c1f74;
        case 0x1c1f78u: goto label_1c1f78;
        case 0x1c1f7cu: goto label_1c1f7c;
        case 0x1c1f80u: goto label_1c1f80;
        case 0x1c1f84u: goto label_1c1f84;
        case 0x1c1f88u: goto label_1c1f88;
        case 0x1c1f8cu: goto label_1c1f8c;
        case 0x1c1f90u: goto label_1c1f90;
        case 0x1c1f94u: goto label_1c1f94;
        case 0x1c1f98u: goto label_1c1f98;
        case 0x1c1f9cu: goto label_1c1f9c;
        case 0x1c1fa0u: goto label_1c1fa0;
        case 0x1c1fa4u: goto label_1c1fa4;
        case 0x1c1fa8u: goto label_1c1fa8;
        case 0x1c1facu: goto label_1c1fac;
        case 0x1c1fb0u: goto label_1c1fb0;
        case 0x1c1fb4u: goto label_1c1fb4;
        case 0x1c1fb8u: goto label_1c1fb8;
        case 0x1c1fbcu: goto label_1c1fbc;
        case 0x1c1fc0u: goto label_1c1fc0;
        case 0x1c1fc4u: goto label_1c1fc4;
        case 0x1c1fc8u: goto label_1c1fc8;
        case 0x1c1fccu: goto label_1c1fcc;
        case 0x1c1fd0u: goto label_1c1fd0;
        case 0x1c1fd4u: goto label_1c1fd4;
        case 0x1c1fd8u: goto label_1c1fd8;
        case 0x1c1fdcu: goto label_1c1fdc;
        case 0x1c1fe0u: goto label_1c1fe0;
        case 0x1c1fe4u: goto label_1c1fe4;
        case 0x1c1fe8u: goto label_1c1fe8;
        case 0x1c1fecu: goto label_1c1fec;
        case 0x1c1ff0u: goto label_1c1ff0;
        case 0x1c1ff4u: goto label_1c1ff4;
        case 0x1c1ff8u: goto label_1c1ff8;
        case 0x1c1ffcu: goto label_1c1ffc;
        case 0x1c2000u: goto label_1c2000;
        case 0x1c2004u: goto label_1c2004;
        case 0x1c2008u: goto label_1c2008;
        case 0x1c200cu: goto label_1c200c;
        case 0x1c2010u: goto label_1c2010;
        case 0x1c2014u: goto label_1c2014;
        case 0x1c2018u: goto label_1c2018;
        case 0x1c201cu: goto label_1c201c;
        case 0x1c2020u: goto label_1c2020;
        case 0x1c2024u: goto label_1c2024;
        case 0x1c2028u: goto label_1c2028;
        case 0x1c202cu: goto label_1c202c;
        case 0x1c2030u: goto label_1c2030;
        case 0x1c2034u: goto label_1c2034;
        case 0x1c2038u: goto label_1c2038;
        case 0x1c203cu: goto label_1c203c;
        case 0x1c2040u: goto label_1c2040;
        case 0x1c2044u: goto label_1c2044;
        case 0x1c2048u: goto label_1c2048;
        case 0x1c204cu: goto label_1c204c;
        case 0x1c2050u: goto label_1c2050;
        case 0x1c2054u: goto label_1c2054;
        case 0x1c2058u: goto label_1c2058;
        case 0x1c205cu: goto label_1c205c;
        case 0x1c2060u: goto label_1c2060;
        case 0x1c2064u: goto label_1c2064;
        case 0x1c2068u: goto label_1c2068;
        case 0x1c206cu: goto label_1c206c;
        case 0x1c2070u: goto label_1c2070;
        case 0x1c2074u: goto label_1c2074;
        case 0x1c2078u: goto label_1c2078;
        case 0x1c207cu: goto label_1c207c;
        case 0x1c2080u: goto label_1c2080;
        case 0x1c2084u: goto label_1c2084;
        case 0x1c2088u: goto label_1c2088;
        case 0x1c208cu: goto label_1c208c;
        case 0x1c2090u: goto label_1c2090;
        case 0x1c2094u: goto label_1c2094;
        case 0x1c2098u: goto label_1c2098;
        case 0x1c209cu: goto label_1c209c;
        case 0x1c20a0u: goto label_1c20a0;
        case 0x1c20a4u: goto label_1c20a4;
        case 0x1c20a8u: goto label_1c20a8;
        case 0x1c20acu: goto label_1c20ac;
        case 0x1c20b0u: goto label_1c20b0;
        case 0x1c20b4u: goto label_1c20b4;
        case 0x1c20b8u: goto label_1c20b8;
        case 0x1c20bcu: goto label_1c20bc;
        case 0x1c20c0u: goto label_1c20c0;
        case 0x1c20c4u: goto label_1c20c4;
        case 0x1c20c8u: goto label_1c20c8;
        case 0x1c20ccu: goto label_1c20cc;
        case 0x1c20d0u: goto label_1c20d0;
        case 0x1c20d4u: goto label_1c20d4;
        case 0x1c20d8u: goto label_1c20d8;
        case 0x1c20dcu: goto label_1c20dc;
        case 0x1c20e0u: goto label_1c20e0;
        case 0x1c20e4u: goto label_1c20e4;
        case 0x1c20e8u: goto label_1c20e8;
        case 0x1c20ecu: goto label_1c20ec;
        case 0x1c20f0u: goto label_1c20f0;
        case 0x1c20f4u: goto label_1c20f4;
        case 0x1c20f8u: goto label_1c20f8;
        case 0x1c20fcu: goto label_1c20fc;
        case 0x1c2100u: goto label_1c2100;
        case 0x1c2104u: goto label_1c2104;
        case 0x1c2108u: goto label_1c2108;
        case 0x1c210cu: goto label_1c210c;
        case 0x1c2110u: goto label_1c2110;
        case 0x1c2114u: goto label_1c2114;
        case 0x1c2118u: goto label_1c2118;
        case 0x1c211cu: goto label_1c211c;
        case 0x1c2120u: goto label_1c2120;
        case 0x1c2124u: goto label_1c2124;
        case 0x1c2128u: goto label_1c2128;
        case 0x1c212cu: goto label_1c212c;
        case 0x1c2130u: goto label_1c2130;
        case 0x1c2134u: goto label_1c2134;
        case 0x1c2138u: goto label_1c2138;
        case 0x1c213cu: goto label_1c213c;
        case 0x1c2140u: goto label_1c2140;
        case 0x1c2144u: goto label_1c2144;
        case 0x1c2148u: goto label_1c2148;
        case 0x1c214cu: goto label_1c214c;
        case 0x1c2150u: goto label_1c2150;
        case 0x1c2154u: goto label_1c2154;
        case 0x1c2158u: goto label_1c2158;
        case 0x1c215cu: goto label_1c215c;
        case 0x1c2160u: goto label_1c2160;
        case 0x1c2164u: goto label_1c2164;
        case 0x1c2168u: goto label_1c2168;
        case 0x1c216cu: goto label_1c216c;
        case 0x1c2170u: goto label_1c2170;
        case 0x1c2174u: goto label_1c2174;
        case 0x1c2178u: goto label_1c2178;
        case 0x1c217cu: goto label_1c217c;
        case 0x1c2180u: goto label_1c2180;
        case 0x1c2184u: goto label_1c2184;
        case 0x1c2188u: goto label_1c2188;
        case 0x1c218cu: goto label_1c218c;
        case 0x1c2190u: goto label_1c2190;
        case 0x1c2194u: goto label_1c2194;
        default: return;
    }

label_1c19c8:
    if (ctx->pc == 0x1C19C8u) {
        ctx->pc = 0x1C19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19C4u;
        // 0x1c19c8: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C19CCu;
        goto label_1c19cc;
    }
    ctx->pc = 0x1C19C4u;
    {
        const bool branch_taken_0x1c19c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19C4u;
        // 0x1c19c8: 0x431821  addu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19c4) {
            ctx->pc = 0x1C19E4u;
            goto label_1c19e4;
        }
    }
    ctx->pc = 0x1C19CCu;
label_1c19cc:
    // 0x1c19cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c19d0:
    // 0x1c19d0: 0xa04300d3  sb          $v1, 0xD3($v0)
    ctx->pc = 0x1c19d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 211), (uint8_t)GPR_U32(ctx, 3));
label_1c19d4:
    // 0x1c19d4: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c19d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c19d8:
    // 0x1c19d8: 0xa04300bb  sb          $v1, 0xBB($v0)
    ctx->pc = 0x1c19d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 187), (uint8_t)GPR_U32(ctx, 3));
label_1c19dc:
    // 0x1c19dc: 0xa04300a3  sb          $v1, 0xA3($v0)
    ctx->pc = 0x1c19dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 3));
label_1c19e0:
    // 0x1c19e0: 0xa043008b  sb          $v1, 0x8B($v0)
    ctx->pc = 0x1c19e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 3));
label_1c19e4:
    // 0x1c19e4: 0x0  nop
    ctx->pc = 0x1c19e4u;
    // NOP
label_1c19e8:
    // 0x1c19e8: 0x8f828924  lw          $v0, -0x76DC($gp)
    ctx->pc = 0x1c19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
label_1c19ec:
    // 0x1c19ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1c19ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c19f0:
    // 0x1c19f0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1c19f4:
    if (ctx->pc == 0x1C19F4u) {
        ctx->pc = 0x1C19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19F0u;
        // 0x1c19f4: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C19F8u;
        goto label_1c19f8;
    }
    ctx->pc = 0x1C19F0u;
    {
        const bool branch_taken_0x1c19f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19F0u;
        // 0x1c19f4: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19f0) {
            ctx->pc = 0x1C19CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c19cc;
        }
    }
    ctx->pc = 0x1C19F8u;
label_1c19f8:
    // 0x1c19f8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1c19fc:
    if (ctx->pc == 0x1C19FCu) {
        ctx->pc = 0x1C1A00u;
        goto label_1c1a00;
    }
    ctx->pc = 0x1C19F8u;
    {
        const bool branch_taken_0x1c19f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c19f8) {
            ctx->pc = 0x1C1A60u;
            goto label_1c1a60;
        }
    }
    ctx->pc = 0x1C1A00u;
label_1c1a00:
    // 0x1c1a00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c1a04:
    // 0x1c1a04: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1c1a08:
    if (ctx->pc == 0x1C1A08u) {
        ctx->pc = 0x1C1A0Cu;
        goto label_1c1a0c;
    }
    ctx->pc = 0x1C1A04u;
    {
        const bool branch_taken_0x1c1a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a04) {
            ctx->pc = 0x1C1A60u;
            goto label_1c1a60;
        }
    }
    ctx->pc = 0x1C1A0Cu;
label_1c1a0c:
    // 0x1c1a0c: 0x8f82892c  lw          $v0, -0x76D4($gp)
    ctx->pc = 0x1c1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936876)));
label_1c1a10:
    // 0x1c1a10: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1c1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1c1a14:
    // 0x1c1a14: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1c1a18:
    if (ctx->pc == 0x1C1A18u) {
        ctx->pc = 0x1C1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A14u;
        // 0x1c1a18: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A1Cu;
        goto label_1c1a1c;
    }
    ctx->pc = 0x1C1A14u;
    {
        const bool branch_taken_0x1c1a14 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A14u;
        // 0x1c1a18: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a14) {
            ctx->pc = 0x1C1A24u;
            goto label_1c1a24;
        }
    }
    ctx->pc = 0x1C1A1Cu;
label_1c1a1c:
    // 0x1c1a1c: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1c1a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1c1a20:
    // 0x1c1a20: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1c1a20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1c1a24:
    // 0x1c1a24: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1c1a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c1a28:
    // 0x1c1a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a2c:
    // 0x1c1a2c: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1c1a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c1a30:
    // 0x1c1a30: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c1a34:
    if (ctx->pc == 0x1C1A34u) {
        ctx->pc = 0x1C1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A30u;
        // 0x1c1a34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A38u;
        goto label_1c1a38;
    }
    ctx->pc = 0x1C1A30u;
    {
        const bool branch_taken_0x1c1a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A30u;
        // 0x1c1a34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a30) {
            ctx->pc = 0x1C1A50u;
            goto label_1c1a50;
        }
    }
    ctx->pc = 0x1C1A38u;
label_1c1a38:
    // 0x1c1a38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c1a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c1a3c:
    // 0x1c1a3c: 0xa04400d3  sb          $a0, 0xD3($v0)
    ctx->pc = 0x1c1a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 211), (uint8_t)GPR_U32(ctx, 4));
label_1c1a40:
    // 0x1c1a40: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x1c1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1c1a44:
    // 0x1c1a44: 0xa04400bb  sb          $a0, 0xBB($v0)
    ctx->pc = 0x1c1a44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 187), (uint8_t)GPR_U32(ctx, 4));
label_1c1a48:
    // 0x1c1a48: 0xa04400a3  sb          $a0, 0xA3($v0)
    ctx->pc = 0x1c1a48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 4));
label_1c1a4c:
    // 0x1c1a4c: 0xa044008b  sb          $a0, 0x8B($v0)
    ctx->pc = 0x1c1a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 4));
label_1c1a50:
    // 0x1c1a50: 0x8f828924  lw          $v0, -0x76DC($gp)
    ctx->pc = 0x1c1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
label_1c1a54:
    // 0x1c1a54: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1c1a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c1a58:
    // 0x1c1a58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1c1a5c:
    if (ctx->pc == 0x1C1A5Cu) {
        ctx->pc = 0x1C1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A58u;
        // 0x1c1a5c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A60u;
        goto label_1c1a60;
    }
    ctx->pc = 0x1C1A58u;
    {
        const bool branch_taken_0x1c1a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A58u;
        // 0x1c1a5c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a58) {
            ctx->pc = 0x1C1A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1a38;
        }
    }
    ctx->pc = 0x1C1A60u;
label_1c1a60:
    // 0x1c1a60: 0x8f858924  lw          $a1, -0x76DC($gp)
    ctx->pc = 0x1c1a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
label_1c1a64:
    // 0x1c1a64: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1c1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_1c1a68:
    // 0x1c1a68: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1c1a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1c1a6c:
    // 0x1c1a6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c1a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1c1a70:
    // 0x1c1a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a74:
    // 0x1c1a74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c1a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c1a78:
    // 0x1c1a78: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1c1a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1c1a7c:
    // 0x1c1a7c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1c1a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1c1a80:
    // 0x1c1a80: 0x24720006  addiu       $s2, $v1, 0x6
    ctx->pc = 0x1c1a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_1c1a84:
    // 0x1c1a84: 0xfe220060  sd          $v0, 0x60($s1)
    ctx->pc = 0x1c1a84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 2));
label_1c1a88:
    // 0x1c1a88: 0xc05e234  jal         func_1788D0
label_1c1a8c:
    if (ctx->pc == 0x1C1A8Cu) {
        ctx->pc = 0x1C1A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A88u;
        // 0x1c1a8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A90u;
        goto label_1c1a90;
    }
    ctx->pc = 0x1C1A88u;
    SET_GPR_U32(ctx, 31, 0x1C1A90u);
    ctx->pc = 0x1C1A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A88u;
    // 0x1c1a8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C1A88u, 0x1C1A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A90u;
label_1c1a90:
    // 0x1c1a90: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x1c1a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c1a94:
    // 0x1c1a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a98:
    // 0x1c1a98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c1a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a9c:
    // 0x1c1a9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1a9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1aa0:
    // 0x1c1aa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1aa4:
    // 0x1c1aa4: 0xc066c72  jal         func_19B1C8
label_1c1aa8:
    if (ctx->pc == 0x1C1AA8u) {
        ctx->pc = 0x1C1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AA4u;
        // 0x1c1aa8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AACu;
        goto label_1c1aac;
    }
    ctx->pc = 0x1C1AA4u;
    SET_GPR_U32(ctx, 31, 0x1C1AACu);
    ctx->pc = 0x1C1AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1AA4u;
    // 0x1c1aa8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C1AA4u, 0x1C1AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AACu;
label_1c1aac:
    // 0x1c1aac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1ab0:
    // 0x1c1ab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c1ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1ab4:
    // 0x1c1ab4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1ab8:
    // 0x1c1ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1abc:
    // 0x1c1abc: 0x3e00008  jr          $ra
label_1c1ac0:
    if (ctx->pc == 0x1C1AC0u) {
        ctx->pc = 0x1C1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ABCu;
        // 0x1c1ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AC4u;
        goto label_1c1ac4;
    }
    ctx->pc = 0x1C1ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ABCu;
        // 0x1c1ac0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1AC4u;
label_1c1ac4:
    // 0x1c1ac4: 0x0  nop
    ctx->pc = 0x1c1ac4u;
    // NOP
label_1c1ac8:
    // 0x1c1ac8: 0x0  nop
    ctx->pc = 0x1c1ac8u;
    // NOP
label_1c1acc:
    // 0x1c1acc: 0x0  nop
    ctx->pc = 0x1c1accu;
    // NOP
label_1c1ad0:
    // 0x1c1ad0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c1ad4:
    if (ctx->pc == 0x1C1AD4u) {
        ctx->pc = 0x1C1AD8u;
        goto label_1c1ad8;
    }
    ctx->pc = 0x1C1AD0u;
    {
        const bool branch_taken_0x1c1ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ad0) {
            ctx->pc = 0x1C1AE0u;
            goto label_1c1ae0;
        }
    }
    ctx->pc = 0x1C1AD8u;
label_1c1ad8:
    // 0x1c1ad8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1adc:
    if (ctx->pc == 0x1C1ADCu) {
        ctx->pc = 0x1C1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AD8u;
        // 0x1c1adc: 0xaf808930  sw          $zero, -0x76D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AE0u;
        goto label_1c1ae0;
    }
    ctx->pc = 0x1C1AD8u;
    {
        const bool branch_taken_0x1c1ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AD8u;
        // 0x1c1adc: 0xaf808930  sw          $zero, -0x76D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ad8) {
            ctx->pc = 0x1C1AF4u;
            goto label_1c1af4;
        }
    }
    ctx->pc = 0x1C1AE0u;
label_1c1ae0:
    // 0x1c1ae0: 0x8f838930  lw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936880)));
label_1c1ae4:
    // 0x1c1ae4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c1ae8:
    if (ctx->pc == 0x1C1AE8u) {
        ctx->pc = 0x1C1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AE4u;
        // 0x1c1ae8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AECu;
        goto label_1c1aec;
    }
    ctx->pc = 0x1C1AE4u;
    {
        const bool branch_taken_0x1c1ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AE4u;
        // 0x1c1ae8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ae4) {
            ctx->pc = 0x1C1AF4u;
            goto label_1c1af4;
        }
    }
    ctx->pc = 0x1C1AECu;
label_1c1aec:
    // 0x1c1aec: 0xaf80893c  sw          $zero, -0x76C4($gp)
    ctx->pc = 0x1c1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 0));
label_1c1af0:
    // 0x1c1af0: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
label_1c1af4:
    // 0x1c1af4: 0x3e00008  jr          $ra
label_1c1af8:
    if (ctx->pc == 0x1C1AF8u) {
        ctx->pc = 0x1C1AFCu;
        goto label_1c1afc;
    }
    ctx->pc = 0x1C1AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1AFCu;
label_1c1afc:
    // 0x1c1afc: 0x0  nop
    ctx->pc = 0x1c1afcu;
    // NOP
label_1c1b00:
    // 0x1c1b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c1b04:
    // 0x1c1b04: 0x24050270  addiu       $a1, $zero, 0x270
    ctx->pc = 0x1c1b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_1c1b08:
    // 0x1c1b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c1b0c:
    // 0x1c1b0c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c1b10:
    // 0x1c1b10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c1b14:
    // 0x1c1b14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1b18:
    // 0x1c1b18: 0xc0550d0  jal         func_154340
label_1c1b1c:
    if (ctx->pc == 0x1C1B1Cu) {
        ctx->pc = 0x1C1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B18u;
        // 0x1c1b1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B20u;
        goto label_1c1b20;
    }
    ctx->pc = 0x1C1B18u;
    SET_GPR_U32(ctx, 31, 0x1C1B20u);
    ctx->pc = 0x1C1B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B18u;
    // 0x1c1b1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x1C1B18u, 0x1C1B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B20u;
label_1c1b20:
    // 0x1c1b20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c1b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b24:
    // 0x1c1b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b28:
    // 0x1c1b28: 0x24050270  addiu       $a1, $zero, 0x270
    ctx->pc = 0x1c1b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_1c1b2c:
    // 0x1c1b2c: 0xc055148  jal         func_154520
label_1c1b30:
    if (ctx->pc == 0x1C1B30u) {
        ctx->pc = 0x1C1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B2Cu;
        // 0x1c1b30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B34u;
        goto label_1c1b34;
    }
    ctx->pc = 0x1C1B2Cu;
    SET_GPR_U32(ctx, 31, 0x1C1B34u);
    ctx->pc = 0x1C1B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B2Cu;
    // 0x1c1b30: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1C1B2Cu, 0x1C1B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B34u;
label_1c1b34:
    // 0x1c1b34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c1b38:
    if (ctx->pc == 0x1C1B38u) {
        ctx->pc = 0x1C1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B34u;
        // 0x1c1b38: 0x2409018e  addiu       $t1, $zero, 0x18E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B3Cu;
        goto label_1c1b3c;
    }
    ctx->pc = 0x1C1B34u;
    {
        const bool branch_taken_0x1c1b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B34u;
        // 0x1c1b38: 0x2409018e  addiu       $t1, $zero, 0x18E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b34) {
            ctx->pc = 0x1C1B44u;
            goto label_1c1b44;
        }
    }
    ctx->pc = 0x1C1B3Cu;
label_1c1b3c:
    // 0x1c1b3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1b40:
    if (ctx->pc == 0x1C1B40u) {
        ctx->pc = 0x1C1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B3Cu;
        // 0x1c1b40: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B44u;
        goto label_1c1b44;
    }
    ctx->pc = 0x1C1B3Cu;
    {
        const bool branch_taken_0x1c1b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B3Cu;
        // 0x1c1b40: 0x24020280  addiu       $v0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b3c) {
            ctx->pc = 0x1C1B58u;
            goto label_1c1b58;
        }
    }
    ctx->pc = 0x1C1B44u;
label_1c1b44:
    // 0x1c1b44: 0x8f828920  lw          $v0, -0x76E0($gp)
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_1c1b48:
    // 0x1c1b48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1c1b4c:
    if (ctx->pc == 0x1C1B4Cu) {
        ctx->pc = 0x1C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B48u;
        // 0x1c1b4c: 0x2409018a  addiu       $t1, $zero, 0x18A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B50u;
        goto label_1c1b50;
    }
    ctx->pc = 0x1C1B48u;
    {
        const bool branch_taken_0x1c1b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B48u;
        // 0x1c1b4c: 0x2409018a  addiu       $t1, $zero, 0x18A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b48) {
            ctx->pc = 0x1C1B54u;
            goto label_1c1b54;
        }
    }
    ctx->pc = 0x1C1B50u;
label_1c1b50:
    // 0x1c1b50: 0x24090182  addiu       $t1, $zero, 0x182
    ctx->pc = 0x1c1b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
label_1c1b54:
    // 0x1c1b54: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1c1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1b58:
    // 0x1c1b58: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1c1b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c1b5c:
    // 0x1c1b5c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c1b60:
    if (ctx->pc == 0x1C1B60u) {
        ctx->pc = 0x1C1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B5Cu;
        // 0x1c1b60: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B64u;
        goto label_1c1b64;
    }
    ctx->pc = 0x1C1B5Cu;
    {
        const bool branch_taken_0x1c1b5c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B5Cu;
        // 0x1c1b60: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b5c) {
            ctx->pc = 0x1C1B6Cu;
            goto label_1c1b6c;
        }
    }
    ctx->pc = 0x1C1B64u;
label_1c1b64:
    // 0x1c1b64: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c1b68:
    // 0x1c1b68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c1b68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c1b6c:
    // 0x1c1b6c: 0xaf828938  sw          $v0, -0x76C8($gp)
    ctx->pc = 0x1c1b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936888), GPR_U32(ctx, 2));
label_1c1b70:
    // 0x1c1b70: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c1b74:
    // 0x1c1b74: 0x8f888938  lw          $t0, -0x76C8($gp)
    ctx->pc = 0x1c1b74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_1c1b78:
    // 0x1c1b78: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1c1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c1b7c:
    // 0x1c1b7c: 0x24060270  addiu       $a2, $zero, 0x270
    ctx->pc = 0x1c1b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_1c1b80:
    // 0x1c1b80: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1c1b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1c1b84:
    // 0x1c1b84: 0xc054e5c  jal         func_153970
label_1c1b88:
    if (ctx->pc == 0x1C1B88u) {
        ctx->pc = 0x1C1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B84u;
        // 0x1c1b88: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B8Cu;
        goto label_1c1b8c;
    }
    ctx->pc = 0x1C1B84u;
    SET_GPR_U32(ctx, 31, 0x1C1B8Cu);
    ctx->pc = 0x1C1B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1B84u;
    // 0x1c1b88: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1C1B84u, 0x1C1B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1B8Cu;
label_1c1b8c:
    // 0x1c1b8c: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c1b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1c1b90:
    // 0x1c1b90: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c1b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b94:
    // 0x1c1b94: 0x24848ec0  addiu       $a0, $a0, -0x7140
    ctx->pc = 0x1c1b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938304));
label_1c1b98:
    // 0x1c1b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b9c:
    // 0x1c1b9c: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1c1b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
label_1c1ba0:
    // 0x1c1ba0: 0xc054e74  jal         func_1539D0
label_1c1ba4:
    if (ctx->pc == 0x1C1BA4u) {
        ctx->pc = 0x1C1BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BA0u;
        // 0x1c1ba4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BA8u;
        goto label_1c1ba8;
    }
    ctx->pc = 0x1C1BA0u;
    SET_GPR_U32(ctx, 31, 0x1C1BA8u);
    ctx->pc = 0x1C1BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1BA0u;
    // 0x1c1ba4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1C1BA0u, 0x1C1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1BA8u;
label_1c1ba8:
    // 0x1c1ba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1bac:
    // 0x1c1bac: 0xaf828934  sw          $v0, -0x76CC($gp)
    ctx->pc = 0x1c1bacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 2));
label_1c1bb0:
    // 0x1c1bb0: 0xaf838930  sw          $v1, -0x76D0($gp)
    ctx->pc = 0x1c1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 3));
label_1c1bb4:
    // 0x1c1bb4: 0xaf80893c  sw          $zero, -0x76C4($gp)
    ctx->pc = 0x1c1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 0));
label_1c1bb8:
    // 0x1c1bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1bbc:
    // 0x1c1bbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1bc0:
    // 0x1c1bc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1bc4:
    // 0x1c1bc4: 0x3e00008  jr          $ra
label_1c1bc8:
    if (ctx->pc == 0x1C1BC8u) {
        ctx->pc = 0x1C1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BC4u;
        // 0x1c1bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BCCu;
        goto label_1c1bcc;
    }
    ctx->pc = 0x1C1BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BC4u;
        // 0x1c1bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BCCu;
label_1c1bcc:
    // 0x1c1bcc: 0x0  nop
    ctx->pc = 0x1c1bccu;
    // NOP
label_1c1bd0:
    // 0x1c1bd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c1bd4:
    if (ctx->pc == 0x1C1BD4u) {
        ctx->pc = 0x1C1BD8u;
        goto label_1c1bd8;
    }
    ctx->pc = 0x1C1BD0u;
    {
        const bool branch_taken_0x1c1bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bd0) {
            ctx->pc = 0x1C1BE0u;
            goto label_1c1be0;
        }
    }
    ctx->pc = 0x1C1BD8u;
label_1c1bd8:
    // 0x1c1bd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1bdc:
    if (ctx->pc == 0x1C1BDCu) {
        ctx->pc = 0x1C1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BD8u;
        // 0x1c1bdc: 0xaf808920  sw          $zero, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BE0u;
        goto label_1c1be0;
    }
    ctx->pc = 0x1C1BD8u;
    {
        const bool branch_taken_0x1c1bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BD8u;
        // 0x1c1bdc: 0xaf808920  sw          $zero, -0x76E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bd8) {
            ctx->pc = 0x1C1BF4u;
            goto label_1c1bf4;
        }
    }
    ctx->pc = 0x1C1BE0u;
label_1c1be0:
    // 0x1c1be0: 0x8f838920  lw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_1c1be4:
    // 0x1c1be4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c1be8:
    if (ctx->pc == 0x1C1BE8u) {
        ctx->pc = 0x1C1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BE4u;
        // 0x1c1be8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BECu;
        goto label_1c1bec;
    }
    ctx->pc = 0x1C1BE4u;
    {
        const bool branch_taken_0x1c1be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BE4u;
        // 0x1c1be8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1be4) {
            ctx->pc = 0x1C1BF4u;
            goto label_1c1bf4;
        }
    }
    ctx->pc = 0x1C1BECu;
label_1c1bec:
    // 0x1c1bec: 0xaf80892c  sw          $zero, -0x76D4($gp)
    ctx->pc = 0x1c1becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 0));
label_1c1bf0:
    // 0x1c1bf0: 0xaf838920  sw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 3));
label_1c1bf4:
    // 0x1c1bf4: 0x3e00008  jr          $ra
label_1c1bf8:
    if (ctx->pc == 0x1C1BF8u) {
        ctx->pc = 0x1C1BFCu;
        goto label_1c1bfc;
    }
    ctx->pc = 0x1C1BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1BFCu;
label_1c1bfc:
    // 0x1c1bfc: 0x0  nop
    ctx->pc = 0x1c1bfcu;
    // NOP
label_1c1c00:
    // 0x1c1c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1c04:
    // 0x1c1c04: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1c1c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1c08:
    // 0x1c1c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1c0c:
    // 0x1c1c0c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c1c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c1c10:
    // 0x1c1c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1c14:
    // 0x1c1c14: 0xc0550d0  jal         func_154340
label_1c1c18:
    if (ctx->pc == 0x1C1C18u) {
        ctx->pc = 0x1C1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C14u;
        // 0x1c1c18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C1Cu;
        goto label_1c1c1c;
    }
    ctx->pc = 0x1C1C14u;
    SET_GPR_U32(ctx, 31, 0x1C1C1Cu);
    ctx->pc = 0x1C1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C14u;
    // 0x1c1c18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x1C1C14u, 0x1C1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C1Cu;
label_1c1c1c:
    // 0x1c1c1c: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1c1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1c20:
    // 0x1c1c20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c1c24:
    // 0x1c1c24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c1c28:
    if (ctx->pc == 0x1C1C28u) {
        ctx->pc = 0x1C1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C24u;
        // 0x1c1c28: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C2Cu;
        goto label_1c1c2c;
    }
    ctx->pc = 0x1C1C24u;
    {
        const bool branch_taken_0x1c1c24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C24u;
        // 0x1c1c28: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c24) {
            ctx->pc = 0x1C1C34u;
            goto label_1c1c34;
        }
    }
    ctx->pc = 0x1C1C2Cu;
label_1c1c2c:
    // 0x1c1c2c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c1c30:
    // 0x1c1c30: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c1c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c1c34:
    // 0x1c1c34: 0xaf828928  sw          $v0, -0x76D8($gp)
    ctx->pc = 0x1c1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 2));
label_1c1c38:
    // 0x1c1c38: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1c1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c1c3c:
    // 0x1c1c3c: 0x8f888928  lw          $t0, -0x76D8($gp)
    ctx->pc = 0x1c1c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
label_1c1c40:
    // 0x1c1c40: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c1c44:
    // 0x1c1c44: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1c1c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1c48:
    // 0x1c1c48: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c1c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c4c:
    // 0x1c1c4c: 0x24090172  addiu       $t1, $zero, 0x172
    ctx->pc = 0x1c1c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
label_1c1c50:
    // 0x1c1c50: 0xc054e5c  jal         func_153970
label_1c1c54:
    if (ctx->pc == 0x1C1C54u) {
        ctx->pc = 0x1C1C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C50u;
        // 0x1c1c54: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C58u;
        goto label_1c1c58;
    }
    ctx->pc = 0x1C1C50u;
    SET_GPR_U32(ctx, 31, 0x1C1C58u);
    ctx->pc = 0x1C1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C50u;
    // 0x1c1c54: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1C1C50u, 0x1C1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C58u;
label_1c1c58:
    // 0x1c1c58: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1c1c5c:
    // 0x1c1c5c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c1c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c60:
    // 0x1c1c60: 0x2484d840  addiu       $a0, $a0, -0x27C0
    ctx->pc = 0x1c1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
label_1c1c64:
    // 0x1c1c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c68:
    // 0x1c1c68: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1c1c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1c1c6c:
    // 0x1c1c6c: 0xc054e74  jal         func_1539D0
label_1c1c70:
    if (ctx->pc == 0x1C1C70u) {
        ctx->pc = 0x1C1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C6Cu;
        // 0x1c1c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C74u;
        goto label_1c1c74;
    }
    ctx->pc = 0x1C1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1C74u);
    ctx->pc = 0x1C1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C6Cu;
    // 0x1c1c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1C1C6Cu, 0x1C1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C74u;
label_1c1c74:
    // 0x1c1c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1c78:
    // 0x1c1c78: 0xaf828924  sw          $v0, -0x76DC($gp)
    ctx->pc = 0x1c1c78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936868), GPR_U32(ctx, 2));
label_1c1c7c:
    // 0x1c1c7c: 0xaf838920  sw          $v1, -0x76E0($gp)
    ctx->pc = 0x1c1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936864), GPR_U32(ctx, 3));
label_1c1c80:
    // 0x1c1c80: 0xaf80892c  sw          $zero, -0x76D4($gp)
    ctx->pc = 0x1c1c80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 0));
label_1c1c84:
    // 0x1c1c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1c88:
    // 0x1c1c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1c8c:
    // 0x1c1c8c: 0x3e00008  jr          $ra
label_1c1c90:
    if (ctx->pc == 0x1C1C90u) {
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C8Cu;
        // 0x1c1c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C94u;
        goto label_1c1c94;
    }
    ctx->pc = 0x1C1C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C8Cu;
        // 0x1c1c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1C94u;
label_1c1c94:
    // 0x1c1c94: 0x0  nop
    ctx->pc = 0x1c1c94u;
    // NOP
label_1c1c98:
    // 0x1c1c98: 0x0  nop
    ctx->pc = 0x1c1c98u;
    // NOP
label_1c1c9c:
    // 0x1c1c9c: 0x0  nop
    ctx->pc = 0x1c1c9cu;
    // NOP
label_1c1ca0:
    // 0x1c1ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c1ca4:
    // 0x1c1ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c1ca8:
    // 0x1c1ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c1cac:
    // 0x1c1cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1cb0:
    // 0x1c1cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cb4:
    // 0x1c1cb4: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c1cb8:
    // 0x1c1cb8: 0x30500400  andi        $s0, $v0, 0x400
    ctx->pc = 0x1c1cb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1c1cbc:
    // 0x1c1cbc: 0xc073a04  jal         func_1CE810
label_1c1cc0:
    if (ctx->pc == 0x1C1CC0u) {
        ctx->pc = 0x1C1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CBCu;
        // 0x1c1cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CC4u;
        goto label_1c1cc4;
    }
    ctx->pc = 0x1C1CBCu;
    SET_GPR_U32(ctx, 31, 0x1C1CC4u);
    ctx->pc = 0x1C1CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CBCu;
    // 0x1c1cc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE810u;
    { ctx->pc = 0x1ce810; return; }
    ctx->pc = 0x1C1CC4u;
label_1c1cc4:
    // 0x1c1cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cc8:
    // 0x1c1cc8: 0xc074264  jal         func_1D0990
label_1c1ccc:
    if (ctx->pc == 0x1C1CCCu) {
        ctx->pc = 0x1C1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CC8u;
        // 0x1c1ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CD0u;
        goto label_1c1cd0;
    }
    ctx->pc = 0x1C1CC8u;
    SET_GPR_U32(ctx, 31, 0x1C1CD0u);
    ctx->pc = 0x1C1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CC8u;
    // 0x1c1ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0990u;
    { ctx->pc = 0x1d0990; return; }
    ctx->pc = 0x1C1CD0u;
label_1c1cd0:
    // 0x1c1cd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c1cd4:
    // 0x1c1cd4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1cd8:
    // 0x1c1cd8: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1cd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1c1cdc:
    // 0x1c1cdc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1c1ce0:
    if (ctx->pc == 0x1C1CE0u) {
        ctx->pc = 0x1C1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CDCu;
        // 0x1c1ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CE4u;
        goto label_1c1ce4;
    }
    ctx->pc = 0x1C1CDCu;
    {
        const bool branch_taken_0x1c1cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CDCu;
        // 0x1c1ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cdc) {
            ctx->pc = 0x1C1CF4u;
            goto label_1c1cf4;
        }
    }
    ctx->pc = 0x1C1CE4u;
label_1c1ce4:
    // 0x1c1ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ce8:
    // 0x1c1ce8: 0xc074748  jal         func_1D1D20
label_1c1cec:
    if (ctx->pc == 0x1C1CECu) {
        ctx->pc = 0x1C1CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CE8u;
        // 0x1c1cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CF0u;
        goto label_1c1cf0;
    }
    ctx->pc = 0x1C1CE8u;
    SET_GPR_U32(ctx, 31, 0x1C1CF0u);
    ctx->pc = 0x1C1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CE8u;
    // 0x1c1cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D20u;
    { ctx->pc = 0x1d1d20; return; }
    ctx->pc = 0x1C1CF0u;
label_1c1cf0:
    // 0x1c1cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cf4:
    // 0x1c1cf4: 0xc070f9c  jal         func_1C3E70
label_1c1cf8:
    if (ctx->pc == 0x1C1CF8u) {
        ctx->pc = 0x1C1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CF4u;
        // 0x1c1cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CFCu;
        goto label_1c1cfc;
    }
    ctx->pc = 0x1C1CF4u;
    SET_GPR_U32(ctx, 31, 0x1C1CFCu);
    ctx->pc = 0x1C1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CF4u;
    // 0x1c1cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3E70u;
    { ctx->pc = 0x1c3e70; return; }
    ctx->pc = 0x1C1CFCu;
label_1c1cfc:
    // 0x1c1cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d00:
    // 0x1c1d00: 0xc073040  jal         func_1CC100
label_1c1d04:
    if (ctx->pc == 0x1C1D04u) {
        ctx->pc = 0x1C1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D00u;
        // 0x1c1d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D08u;
        goto label_1c1d08;
    }
    ctx->pc = 0x1C1D00u;
    SET_GPR_U32(ctx, 31, 0x1C1D08u);
    ctx->pc = 0x1C1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D00u;
    // 0x1c1d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC100u;
    { ctx->pc = 0x1cc100; return; }
    ctx->pc = 0x1C1D08u;
label_1c1d08:
    // 0x1c1d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d0c:
    // 0x1c1d0c: 0xc09108c  jal         func_244230
label_1c1d10:
    if (ctx->pc == 0x1C1D10u) {
        ctx->pc = 0x1C1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D0Cu;
        // 0x1c1d10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D14u;
        goto label_1c1d14;
    }
    ctx->pc = 0x1C1D0Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D14u);
    ctx->pc = 0x1C1D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D0Cu;
    // 0x1c1d10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244230u;
    { ctx->pc = 0x244230; return; }
    ctx->pc = 0x1C1D14u;
label_1c1d14:
    // 0x1c1d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1d18:
    // 0x1c1d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1d1c:
    // 0x1c1d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1d20:
    // 0x1c1d20: 0x3e00008  jr          $ra
label_1c1d24:
    if (ctx->pc == 0x1C1D24u) {
        ctx->pc = 0x1C1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D20u;
        // 0x1c1d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D28u;
        goto label_1c1d28;
    }
    ctx->pc = 0x1C1D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D20u;
        // 0x1c1d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1D28u;
label_1c1d28:
    // 0x1c1d28: 0x0  nop
    ctx->pc = 0x1c1d28u;
    // NOP
label_1c1d2c:
    // 0x1c1d2c: 0x0  nop
    ctx->pc = 0x1c1d2cu;
    // NOP
label_1c1d30:
    // 0x1c1d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1d34:
    // 0x1c1d34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1d38:
    // 0x1c1d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1d3c:
    // 0x1c1d3c: 0xc073d70  jal         func_1CF5C0
label_1c1d40:
    if (ctx->pc == 0x1C1D40u) {
        ctx->pc = 0x1C1D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D3Cu;
        // 0x1c1d40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D44u;
        goto label_1c1d44;
    }
    ctx->pc = 0x1C1D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D44u);
    ctx->pc = 0x1C1D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D3Cu;
    // 0x1c1d40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5C0u;
    { ctx->pc = 0x1cf5c0; return; }
    ctx->pc = 0x1C1D44u;
label_1c1d44:
    // 0x1c1d44: 0xc0743a4  jal         func_1D0E90
label_1c1d48:
    if (ctx->pc == 0x1C1D48u) {
        ctx->pc = 0x1C1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D44u;
        // 0x1c1d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D4Cu;
        goto label_1c1d4c;
    }
    ctx->pc = 0x1C1D44u;
    SET_GPR_U32(ctx, 31, 0x1C1D4Cu);
    ctx->pc = 0x1C1D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D44u;
    // 0x1c1d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E90u;
    { ctx->pc = 0x1d0e90; return; }
    ctx->pc = 0x1C1D4Cu;
label_1c1d4c:
    // 0x1c1d4c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c1d50:
    // 0x1c1d50: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1d54:
    // 0x1c1d54: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1d54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1c1d58:
    // 0x1c1d58: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1c1d5c:
    if (ctx->pc == 0x1C1D5Cu) {
        ctx->pc = 0x1C1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D58u;
        // 0x1c1d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D60u;
        goto label_1c1d60;
    }
    ctx->pc = 0x1C1D58u;
    {
        const bool branch_taken_0x1c1d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D58u;
        // 0x1c1d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d58) {
            ctx->pc = 0x1C1D6Cu;
            goto label_1c1d6c;
        }
    }
    ctx->pc = 0x1C1D60u;
label_1c1d60:
    // 0x1c1d60: 0xc074778  jal         func_1D1DE0
label_1c1d64:
    if (ctx->pc == 0x1C1D64u) {
        ctx->pc = 0x1C1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D60u;
        // 0x1c1d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D68u;
        goto label_1c1d68;
    }
    ctx->pc = 0x1C1D60u;
    SET_GPR_U32(ctx, 31, 0x1C1D68u);
    ctx->pc = 0x1C1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D60u;
    // 0x1c1d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DE0u;
    { ctx->pc = 0x1d1de0; return; }
    ctx->pc = 0x1C1D68u;
label_1c1d68:
    // 0x1c1d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d6c:
    // 0x1c1d6c: 0xc071188  jal         func_1C4620
label_1c1d70:
    if (ctx->pc == 0x1C1D70u) {
        ctx->pc = 0x1C1D74u;
        goto label_1c1d74;
    }
    ctx->pc = 0x1C1D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D74u);
    ctx->pc = 0x1C4620u;
    { ctx->pc = 0x1c4620; return; }
    ctx->pc = 0x1C1D74u;
label_1c1d74:
    // 0x1c1d74: 0xc073174  jal         func_1CC5D0
label_1c1d78:
    if (ctx->pc == 0x1C1D78u) {
        ctx->pc = 0x1C1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D74u;
        // 0x1c1d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D7Cu;
        goto label_1c1d7c;
    }
    ctx->pc = 0x1C1D74u;
    SET_GPR_U32(ctx, 31, 0x1C1D7Cu);
    ctx->pc = 0x1C1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D74u;
    // 0x1c1d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5D0u;
    { ctx->pc = 0x1cc5d0; return; }
    ctx->pc = 0x1C1D7Cu;
label_1c1d7c:
    // 0x1c1d7c: 0xc091148  jal         func_244520
label_1c1d80:
    if (ctx->pc == 0x1C1D80u) {
        ctx->pc = 0x1C1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D7Cu;
        // 0x1c1d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D84u;
        goto label_1c1d84;
    }
    ctx->pc = 0x1C1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1D84u);
    ctx->pc = 0x1C1D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D7Cu;
    // 0x1c1d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244520u;
    { ctx->pc = 0x244520; return; }
    ctx->pc = 0x1C1D84u;
label_1c1d84:
    // 0x1c1d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1d88:
    // 0x1c1d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1d8c:
    // 0x1c1d8c: 0x3e00008  jr          $ra
label_1c1d90:
    if (ctx->pc == 0x1C1D90u) {
        ctx->pc = 0x1C1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D8Cu;
        // 0x1c1d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D94u;
        goto label_1c1d94;
    }
    ctx->pc = 0x1C1D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D8Cu;
        // 0x1c1d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1D94u;
label_1c1d94:
    // 0x1c1d94: 0x0  nop
    ctx->pc = 0x1c1d94u;
    // NOP
label_1c1d98:
    // 0x1c1d98: 0x0  nop
    ctx->pc = 0x1c1d98u;
    // NOP
label_1c1d9c:
    // 0x1c1d9c: 0x0  nop
    ctx->pc = 0x1c1d9cu;
    // NOP
label_1c1da0:
    // 0x1c1da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1da4:
    // 0x1c1da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c1da8:
    // 0x1c1da8: 0xc073e44  jal         func_1CF910
label_1c1dac:
    if (ctx->pc == 0x1C1DACu) {
        ctx->pc = 0x1C1DB0u;
        goto label_1c1db0;
    }
    ctx->pc = 0x1C1DA8u;
    SET_GPR_U32(ctx, 31, 0x1C1DB0u);
    ctx->pc = 0x1CF910u;
    { ctx->pc = 0x1cf910; return; }
    ctx->pc = 0x1C1DB0u;
label_1c1db0:
    // 0x1c1db0: 0xc074408  jal         func_1D1020
label_1c1db4:
    if (ctx->pc == 0x1C1DB4u) {
        ctx->pc = 0x1C1DB8u;
        goto label_1c1db8;
    }
    ctx->pc = 0x1C1DB0u;
    SET_GPR_U32(ctx, 31, 0x1C1DB8u);
    ctx->pc = 0x1D1020u;
    { ctx->pc = 0x1d1020; return; }
    ctx->pc = 0x1C1DB8u;
label_1c1db8:
    // 0x1c1db8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c1dbc:
    // 0x1c1dbc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1dc0:
    // 0x1c1dc0: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1dc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1c1dc4:
    // 0x1c1dc4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c1dc8:
    if (ctx->pc == 0x1C1DC8u) {
        ctx->pc = 0x1C1DCCu;
        goto label_1c1dcc;
    }
    ctx->pc = 0x1C1DC4u;
    {
        const bool branch_taken_0x1c1dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1dc4) {
            ctx->pc = 0x1C1DD4u;
            goto label_1c1dd4;
        }
    }
    ctx->pc = 0x1C1DCCu;
label_1c1dcc:
    // 0x1c1dcc: 0xc0747b0  jal         func_1D1EC0
label_1c1dd0:
    if (ctx->pc == 0x1C1DD0u) {
        ctx->pc = 0x1C1DD4u;
        goto label_1c1dd4;
    }
    ctx->pc = 0x1C1DCCu;
    SET_GPR_U32(ctx, 31, 0x1C1DD4u);
    ctx->pc = 0x1D1EC0u;
    { ctx->pc = 0x1d1ec0; return; }
    ctx->pc = 0x1C1DD4u;
label_1c1dd4:
    // 0x1c1dd4: 0xc0711ec  jal         func_1C47B0
label_1c1dd8:
    if (ctx->pc == 0x1C1DD8u) {
        ctx->pc = 0x1C1DDCu;
        goto label_1c1ddc;
    }
    ctx->pc = 0x1C1DD4u;
    SET_GPR_U32(ctx, 31, 0x1C1DDCu);
    ctx->pc = 0x1C47B0u;
    { ctx->pc = 0x1c47b0; return; }
    ctx->pc = 0x1C1DDCu;
label_1c1ddc:
    // 0x1c1ddc: 0xc0731ac  jal         func_1CC6B0
label_1c1de0:
    if (ctx->pc == 0x1C1DE0u) {
        ctx->pc = 0x1C1DE4u;
        goto label_1c1de4;
    }
    ctx->pc = 0x1C1DDCu;
    SET_GPR_U32(ctx, 31, 0x1C1DE4u);
    ctx->pc = 0x1CC6B0u;
    { ctx->pc = 0x1cc6b0; return; }
    ctx->pc = 0x1C1DE4u;
label_1c1de4:
    // 0x1c1de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1de8:
    // 0x1c1de8: 0x3e00008  jr          $ra
label_1c1dec:
    if (ctx->pc == 0x1C1DECu) {
        ctx->pc = 0x1C1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DE8u;
        // 0x1c1dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DF0u;
        goto label_1c1df0;
    }
    ctx->pc = 0x1C1DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DE8u;
        // 0x1c1dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1DF0u;
label_1c1df0:
    // 0x1c1df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1df4:
    // 0x1c1df4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1df8:
    // 0x1c1df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1dfc:
    // 0x1c1dfc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c1dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1c1e00:
    // 0x1c1e00: 0x30500400  andi        $s0, $v0, 0x400
    ctx->pc = 0x1c1e00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1c1e04:
    // 0x1c1e04: 0xc073e48  jal         func_1CF920
label_1c1e08:
    if (ctx->pc == 0x1C1E08u) {
        ctx->pc = 0x1C1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E04u;
        // 0x1c1e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E0Cu;
        goto label_1c1e0c;
    }
    ctx->pc = 0x1C1E04u;
    SET_GPR_U32(ctx, 31, 0x1C1E0Cu);
    ctx->pc = 0x1C1E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E04u;
    // 0x1c1e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF920u;
    { ctx->pc = 0x1cf920; return; }
    ctx->pc = 0x1C1E0Cu;
label_1c1e0c:
    // 0x1c1e0c: 0xc07440c  jal         func_1D1030
label_1c1e10:
    if (ctx->pc == 0x1C1E10u) {
        ctx->pc = 0x1C1E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E0Cu;
        // 0x1c1e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E14u;
        goto label_1c1e14;
    }
    ctx->pc = 0x1C1E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E14u);
    ctx->pc = 0x1C1E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E0Cu;
    // 0x1c1e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1030u;
    { ctx->pc = 0x1d1030; return; }
    ctx->pc = 0x1C1E14u;
label_1c1e14:
    // 0x1c1e14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c1e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c1e18:
    // 0x1c1e18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c1e1c:
    // 0x1c1e1c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1c1e1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1c1e20:
    // 0x1c1e20: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1c1e24:
    if (ctx->pc == 0x1C1E24u) {
        ctx->pc = 0x1C1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E20u;
        // 0x1c1e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E28u;
        goto label_1c1e28;
    }
    ctx->pc = 0x1C1E20u;
    {
        const bool branch_taken_0x1c1e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E20u;
        // 0x1c1e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e20) {
            ctx->pc = 0x1C1E34u;
            goto label_1c1e34;
        }
    }
    ctx->pc = 0x1C1E28u;
label_1c1e28:
    // 0x1c1e28: 0xc0747b4  jal         func_1D1ED0
label_1c1e2c:
    if (ctx->pc == 0x1C1E2Cu) {
        ctx->pc = 0x1C1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E28u;
        // 0x1c1e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E30u;
        goto label_1c1e30;
    }
    ctx->pc = 0x1C1E28u;
    SET_GPR_U32(ctx, 31, 0x1C1E30u);
    ctx->pc = 0x1C1E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E28u;
    // 0x1c1e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1ED0u;
    { ctx->pc = 0x1d1ed0; return; }
    ctx->pc = 0x1C1E30u;
label_1c1e30:
    // 0x1c1e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e34:
    // 0x1c1e34: 0xc0711f0  jal         func_1C47C0
label_1c1e38:
    if (ctx->pc == 0x1C1E38u) {
        ctx->pc = 0x1C1E3Cu;
        goto label_1c1e3c;
    }
    ctx->pc = 0x1C1E34u;
    SET_GPR_U32(ctx, 31, 0x1C1E3Cu);
    ctx->pc = 0x1C47C0u;
    { ctx->pc = 0x1c47c0; return; }
    ctx->pc = 0x1C1E3Cu;
label_1c1e3c:
    // 0x1c1e3c: 0xc0731b0  jal         func_1CC6C0
label_1c1e40:
    if (ctx->pc == 0x1C1E40u) {
        ctx->pc = 0x1C1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E3Cu;
        // 0x1c1e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E44u;
        goto label_1c1e44;
    }
    ctx->pc = 0x1C1E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E44u);
    ctx->pc = 0x1C1E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E3Cu;
    // 0x1c1e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC6C0u;
    { ctx->pc = 0x1cc6c0; return; }
    ctx->pc = 0x1C1E44u;
label_1c1e44:
    // 0x1c1e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1e48:
    // 0x1c1e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1e4c:
    // 0x1c1e4c: 0x3e00008  jr          $ra
label_1c1e50:
    if (ctx->pc == 0x1C1E50u) {
        ctx->pc = 0x1C1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E4Cu;
        // 0x1c1e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E54u;
        goto label_1c1e54;
    }
    ctx->pc = 0x1C1E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E4Cu;
        // 0x1c1e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1E54u;
label_1c1e54:
    // 0x1c1e54: 0x0  nop
    ctx->pc = 0x1c1e54u;
    // NOP
label_1c1e58:
    // 0x1c1e58: 0x0  nop
    ctx->pc = 0x1c1e58u;
    // NOP
label_1c1e5c:
    // 0x1c1e5c: 0x0  nop
    ctx->pc = 0x1c1e5cu;
    // NOP
label_1c1e60:
    // 0x1c1e60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c1e64:
    // 0x1c1e64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c1e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c1e68:
    // 0x1c1e68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c1e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c1e6c:
    // 0x1c1e6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c1e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c1e70:
    // 0x1c1e70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c1e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c1e74:
    // 0x1c1e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c1e78:
    // 0x1c1e78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e7c:
    // 0x1c1e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c1e80:
    // 0x1c1e80: 0xc041738  jal         func_105CE0
label_1c1e84:
    if (ctx->pc == 0x1C1E84u) {
        ctx->pc = 0x1C1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E80u;
        // 0x1c1e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E88u;
        goto label_1c1e88;
    }
    ctx->pc = 0x1C1E80u;
    SET_GPR_U32(ctx, 31, 0x1C1E88u);
    ctx->pc = 0x1C1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E80u;
    // 0x1c1e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C1E80u, 0x1C1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E88u;
label_1c1e88:
    // 0x1c1e88: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c1e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c1e8c:
    // 0x1c1e8c: 0xc070080  jal         func_1C0200
label_1c1e90:
    if (ctx->pc == 0x1C1E90u) {
        ctx->pc = 0x1C1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E8Cu;
        // 0x1c1e90: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E94u;
        goto label_1c1e94;
    }
    ctx->pc = 0x1C1E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C1E94u);
    ctx->pc = 0x1C1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E8Cu;
    // 0x1c1e90: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C1E94u;
label_1c1e94:
    // 0x1c1e94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c1e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e98:
    // 0x1c1e98: 0xc0416e4  jal         func_105B90
label_1c1e9c:
    if (ctx->pc == 0x1C1E9Cu) {
        ctx->pc = 0x1C1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E98u;
        // 0x1c1e9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EA0u;
        goto label_1c1ea0;
    }
    ctx->pc = 0x1C1E98u;
    SET_GPR_U32(ctx, 31, 0x1C1EA0u);
    ctx->pc = 0x1C1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E98u;
    // 0x1c1e9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C1E98u, 0x1C1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EA0u;
label_1c1ea0:
    // 0x1c1ea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ea4:
    // 0x1c1ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ea8:
    // 0x1c1ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1eac:
    // 0x1c1eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1eb0:
    // 0x1c1eb0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c1eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c1eb4:
    // 0x1c1eb4: 0x240800d0  addiu       $t0, $zero, 0xD0
    ctx->pc = 0x1c1eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1c1eb8:
    // 0x1c1eb8: 0xc0603d4  jal         func_180F50
label_1c1ebc:
    if (ctx->pc == 0x1C1EBCu) {
        ctx->pc = 0x1C1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EB8u;
        // 0x1c1ebc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EC0u;
        goto label_1c1ec0;
    }
    ctx->pc = 0x1C1EB8u;
    SET_GPR_U32(ctx, 31, 0x1C1EC0u);
    ctx->pc = 0x1C1EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1EB8u;
    // 0x1c1ebc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C1EB8u, 0x1C1EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EC0u;
label_1c1ec0:
    // 0x1c1ec0: 0xff828970  sd          $v0, -0x7690($gp)
    ctx->pc = 0x1c1ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936944), GPR_U64(ctx, 2));
label_1c1ec4:
    // 0x1c1ec4: 0xc070038  jal         func_1C00E0
label_1c1ec8:
    if (ctx->pc == 0x1C1EC8u) {
        ctx->pc = 0x1C1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EC4u;
        // 0x1c1ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1ECCu;
        goto label_1c1ecc;
    }
    ctx->pc = 0x1C1EC4u;
    SET_GPR_U32(ctx, 31, 0x1C1ECCu);
    ctx->pc = 0x1C1EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1EC4u;
    // 0x1c1ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C1ECCu;
label_1c1ecc:
    // 0x1c1ecc: 0xc041738  jal         func_105CE0
label_1c1ed0:
    if (ctx->pc == 0x1C1ED0u) {
        ctx->pc = 0x1C1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ECCu;
        // 0x1c1ed0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1ED4u;
        goto label_1c1ed4;
    }
    ctx->pc = 0x1C1ECCu;
    SET_GPR_U32(ctx, 31, 0x1C1ED4u);
    ctx->pc = 0x1C1ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1ECCu;
    // 0x1c1ed0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C1ECCu, 0x1C1ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1ED4u;
label_1c1ed4:
    // 0x1c1ed4: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c1ed8:
    // 0x1c1ed8: 0xc070080  jal         func_1C0200
label_1c1edc:
    if (ctx->pc == 0x1C1EDCu) {
        ctx->pc = 0x1C1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ED8u;
        // 0x1c1edc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EE0u;
        goto label_1c1ee0;
    }
    ctx->pc = 0x1C1ED8u;
    SET_GPR_U32(ctx, 31, 0x1C1EE0u);
    ctx->pc = 0x1C1EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1ED8u;
    // 0x1c1edc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C1EE0u;
label_1c1ee0:
    // 0x1c1ee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1ee4:
    // 0x1c1ee4: 0xc0416e4  jal         func_105B90
label_1c1ee8:
    if (ctx->pc == 0x1C1EE8u) {
        ctx->pc = 0x1C1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EE4u;
        // 0x1c1ee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EECu;
        goto label_1c1eec;
    }
    ctx->pc = 0x1C1EE4u;
    SET_GPR_U32(ctx, 31, 0x1C1EECu);
    ctx->pc = 0x1C1EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1EE4u;
    // 0x1c1ee8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C1EE4u, 0x1C1EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1EECu;
label_1c1eec:
    // 0x1c1eec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ef0:
    // 0x1c1ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ef4:
    // 0x1c1ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ef8:
    // 0x1c1ef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1efc:
    // 0x1c1efc: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1c1efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1c1f00:
    // 0x1c1f00: 0x24080130  addiu       $t0, $zero, 0x130
    ctx->pc = 0x1c1f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_1c1f04:
    // 0x1c1f04: 0xc0603d4  jal         func_180F50
label_1c1f08:
    if (ctx->pc == 0x1C1F08u) {
        ctx->pc = 0x1C1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F04u;
        // 0x1c1f08: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F0Cu;
        goto label_1c1f0c;
    }
    ctx->pc = 0x1C1F04u;
    SET_GPR_U32(ctx, 31, 0x1C1F0Cu);
    ctx->pc = 0x1C1F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F04u;
    // 0x1c1f08: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C1F04u, 0x1C1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F0Cu;
label_1c1f0c:
    // 0x1c1f0c: 0xff828960  sd          $v0, -0x76A0($gp)
    ctx->pc = 0x1c1f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936928), GPR_U64(ctx, 2));
label_1c1f10:
    // 0x1c1f10: 0xc070038  jal         func_1C00E0
label_1c1f14:
    if (ctx->pc == 0x1C1F14u) {
        ctx->pc = 0x1C1F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F10u;
        // 0x1c1f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F18u;
        goto label_1c1f18;
    }
    ctx->pc = 0x1C1F10u;
    SET_GPR_U32(ctx, 31, 0x1C1F18u);
    ctx->pc = 0x1C1F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F10u;
    // 0x1c1f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C1F18u;
label_1c1f18:
    // 0x1c1f18: 0xc041738  jal         func_105CE0
label_1c1f1c:
    if (ctx->pc == 0x1C1F1Cu) {
        ctx->pc = 0x1C1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F18u;
        // 0x1c1f1c: 0x240407f8  addiu       $a0, $zero, 0x7F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F20u;
        goto label_1c1f20;
    }
    ctx->pc = 0x1C1F18u;
    SET_GPR_U32(ctx, 31, 0x1C1F20u);
    ctx->pc = 0x1C1F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F18u;
    // 0x1c1f1c: 0x240407f8  addiu       $a0, $zero, 0x7F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C1F18u, 0x1C1F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F20u;
label_1c1f20:
    // 0x1c1f20: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c1f20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c1f24:
    // 0x1c1f24: 0xc070080  jal         func_1C0200
label_1c1f28:
    if (ctx->pc == 0x1C1F28u) {
        ctx->pc = 0x1C1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F24u;
        // 0x1c1f28: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F2Cu;
        goto label_1c1f2c;
    }
    ctx->pc = 0x1C1F24u;
    SET_GPR_U32(ctx, 31, 0x1C1F2Cu);
    ctx->pc = 0x1C1F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F24u;
    // 0x1c1f28: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C1F2Cu;
label_1c1f2c:
    // 0x1c1f2c: 0x240407f8  addiu       $a0, $zero, 0x7F8
    ctx->pc = 0x1c1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
label_1c1f30:
    // 0x1c1f30: 0xc0416e4  jal         func_105B90
label_1c1f34:
    if (ctx->pc == 0x1C1F34u) {
        ctx->pc = 0x1C1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F30u;
        // 0x1c1f34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F38u;
        goto label_1c1f38;
    }
    ctx->pc = 0x1C1F30u;
    SET_GPR_U32(ctx, 31, 0x1C1F38u);
    ctx->pc = 0x1C1F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F30u;
    // 0x1c1f34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C1F30u, 0x1C1F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F38u;
label_1c1f38:
    // 0x1c1f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f3c:
    // 0x1c1f3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f40:
    // 0x1c1f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f44:
    // 0x1c1f44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f48:
    // 0x1c1f48: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c1f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c1f4c:
    // 0x1c1f4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f50:
    // 0x1c1f50: 0xc0603d4  jal         func_180F50
label_1c1f54:
    if (ctx->pc == 0x1C1F54u) {
        ctx->pc = 0x1C1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F50u;
        // 0x1c1f54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F58u;
        goto label_1c1f58;
    }
    ctx->pc = 0x1C1F50u;
    SET_GPR_U32(ctx, 31, 0x1C1F58u);
    ctx->pc = 0x1C1F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F50u;
    // 0x1c1f54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C1F50u, 0x1C1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F58u;
label_1c1f58:
    // 0x1c1f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f5c:
    // 0x1c1f5c: 0xc070038  jal         func_1C00E0
label_1c1f60:
    if (ctx->pc == 0x1C1F60u) {
        ctx->pc = 0x1C1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F5Cu;
        // 0x1c1f60: 0xff828950  sd          $v0, -0x76B0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936912), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F64u;
        goto label_1c1f64;
    }
    ctx->pc = 0x1C1F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C1F64u);
    ctx->pc = 0x1C1F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F5Cu;
    // 0x1c1f60: 0xff828950  sd          $v0, -0x76B0($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936912), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C1F64u;
label_1c1f64:
    // 0x1c1f64: 0x1220003e  beqz        $s1, . + 4 + (0x3E << 2)
label_1c1f68:
    if (ctx->pc == 0x1C1F68u) {
        ctx->pc = 0x1C1F6Cu;
        goto label_1c1f6c;
    }
    ctx->pc = 0x1C1F64u;
    {
        const bool branch_taken_0x1c1f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f64) {
            ctx->pc = 0x1C2060u;
            goto label_1c2060;
        }
    }
    ctx->pc = 0x1C1F6Cu;
label_1c1f6c:
    // 0x1c1f6c: 0xc070de0  jal         func_1C3780
label_1c1f70:
    if (ctx->pc == 0x1C1F70u) {
        ctx->pc = 0x1C1F74u;
        goto label_1c1f74;
    }
    ctx->pc = 0x1C1F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1F74u);
    ctx->pc = 0x1C3780u;
    { ctx->pc = 0x1c3780; return; }
    ctx->pc = 0x1C1F74u;
label_1c1f74:
    // 0x1c1f74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c1f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f78:
    // 0x1c1f78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c1f78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f7c:
    // 0x1c1f7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f80:
    // 0x1c1f80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c1f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f84:
    // 0x1c1f84: 0x0  nop
    ctx->pc = 0x1c1f84u;
    // NOP
label_1c1f88:
    // 0x1c1f88: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c1f8c:
    // 0x1c1f8c: 0x2463f8d0  addiu       $v1, $v1, -0x730
    ctx->pc = 0x1c1f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965456));
label_1c1f90:
    // 0x1c1f90: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1c1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1c1f94:
    // 0x1c1f94: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1c1f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1c1f98:
    // 0x1c1f98: 0x72a021  addu        $s4, $v1, $s2
    ctx->pc = 0x1c1f98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1c1f9c:
    // 0x1c1f9c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1c1f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1c1fa0:
    // 0x1c1fa0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1c1fa4:
    if (ctx->pc == 0x1C1FA4u) {
        ctx->pc = 0x1C1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FA0u;
        // 0x1c1fa4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FA8u;
        goto label_1c1fa8;
    }
    ctx->pc = 0x1C1FA0u;
    {
        const bool branch_taken_0x1c1fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FA0u;
        // 0x1c1fa4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fa0) {
            ctx->pc = 0x1C1FB4u;
            goto label_1c1fb4;
        }
    }
    ctx->pc = 0x1C1FA8u;
label_1c1fa8:
    // 0x1c1fa8: 0xc070080  jal         func_1C0200
label_1c1fac:
    if (ctx->pc == 0x1C1FACu) {
        ctx->pc = 0x1C1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FA8u;
        // 0x1c1fac: 0x24055a80  addiu       $a1, $zero, 0x5A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FB0u;
        goto label_1c1fb0;
    }
    ctx->pc = 0x1C1FA8u;
    SET_GPR_U32(ctx, 31, 0x1C1FB0u);
    ctx->pc = 0x1C1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FA8u;
    // 0x1c1fac: 0x24055a80  addiu       $a1, $zero, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C1FB0u;
label_1c1fb0:
    // 0x1c1fb0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1c1fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1c1fb4:
    // 0x1c1fb4: 0x0  nop
    ctx->pc = 0x1c1fb4u;
    // NOP
label_1c1fb8:
    // 0x1c1fb8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c1fbc:
    // 0x1c1fbc: 0x2463f8a0  addiu       $v1, $v1, -0x760
    ctx->pc = 0x1c1fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965408));
label_1c1fc0:
    // 0x1c1fc0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1c1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1c1fc4:
    // 0x1c1fc4: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1c1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1c1fc8:
    // 0x1c1fc8: 0x72a021  addu        $s4, $v1, $s2
    ctx->pc = 0x1c1fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1c1fcc:
    // 0x1c1fcc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1c1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1c1fd0:
    // 0x1c1fd0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1c1fd4:
    if (ctx->pc == 0x1C1FD4u) {
        ctx->pc = 0x1C1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FD0u;
        // 0x1c1fd4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FD8u;
        goto label_1c1fd8;
    }
    ctx->pc = 0x1C1FD0u;
    {
        const bool branch_taken_0x1c1fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FD0u;
        // 0x1c1fd4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fd0) {
            ctx->pc = 0x1C1FE4u;
            goto label_1c1fe4;
        }
    }
    ctx->pc = 0x1C1FD8u;
label_1c1fd8:
    // 0x1c1fd8: 0xc070080  jal         func_1C0200
label_1c1fdc:
    if (ctx->pc == 0x1C1FDCu) {
        ctx->pc = 0x1C1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FD8u;
        // 0x1c1fdc: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FE0u;
        goto label_1c1fe0;
    }
    ctx->pc = 0x1C1FD8u;
    SET_GPR_U32(ctx, 31, 0x1C1FE0u);
    ctx->pc = 0x1C1FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FD8u;
    // 0x1c1fdc: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C1FE0u;
label_1c1fe0:
    // 0x1c1fe0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1c1fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1c1fe4:
    // 0x1c1fe4: 0x0  nop
    ctx->pc = 0x1c1fe4u;
    // NOP
label_1c1fe8:
    // 0x1c1fe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c1fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c1fec:
    // 0x1c1fec: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x1c1fecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_1c1ff0:
    // 0x1c1ff0: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_1c1ff4:
    if (ctx->pc == 0x1C1FF4u) {
        ctx->pc = 0x1C1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FF0u;
        // 0x1c1ff4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FF8u;
        goto label_1c1ff8;
    }
    ctx->pc = 0x1C1FF0u;
    {
        const bool branch_taken_0x1c1ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FF0u;
        // 0x1c1ff4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ff0) {
            ctx->pc = 0x1C1F84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1f84;
        }
    }
    ctx->pc = 0x1C1FF8u;
label_1c1ff8:
    // 0x1c1ff8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c1ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c1ffc:
    // 0x1c1ffc: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1c1ffcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c2000:
    // 0x1c2000: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_1c2004:
    if (ctx->pc == 0x1C2004u) {
        ctx->pc = 0x1C2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2000u;
        // 0x1c2004: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2008u;
        goto label_1c2008;
    }
    ctx->pc = 0x1C2000u;
    {
        const bool branch_taken_0x1c2000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2000u;
        // 0x1c2004: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2000) {
            ctx->pc = 0x1C1F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1f7c;
        }
    }
    ctx->pc = 0x1C2008u;
label_1c2008:
    // 0x1c2008: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c2008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c200c:
    // 0x1c200c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c200cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2010:
    // 0x1c2010: 0x27838980  addiu       $v1, $gp, -0x7680
    ctx->pc = 0x1c2010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936960));
label_1c2014:
    // 0x1c2014: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c2014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c2018:
    // 0x1c2018: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c2018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c201c:
    // 0x1c201c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1c2020:
    if (ctx->pc == 0x1C2020u) {
        ctx->pc = 0x1C2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C201Cu;
        // 0x1c2020: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2024u;
        goto label_1c2024;
    }
    ctx->pc = 0x1C201Cu;
    {
        const bool branch_taken_0x1c201c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C201Cu;
        // 0x1c2020: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c201c) {
            ctx->pc = 0x1C2030u;
            goto label_1c2030;
        }
    }
    ctx->pc = 0x1C2024u;
label_1c2024:
    // 0x1c2024: 0xc070080  jal         func_1C0200
label_1c2028:
    if (ctx->pc == 0x1C2028u) {
        ctx->pc = 0x1C2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2024u;
        // 0x1c2028: 0x24056080  addiu       $a1, $zero, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C202Cu;
        goto label_1c202c;
    }
    ctx->pc = 0x1C2024u;
    SET_GPR_U32(ctx, 31, 0x1C202Cu);
    ctx->pc = 0x1C2028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2024u;
    // 0x1c2028: 0x24056080  addiu       $a1, $zero, 0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C202Cu;
label_1c202c:
    // 0x1c202c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c202cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c2030:
    // 0x1c2030: 0x27838978  addiu       $v1, $gp, -0x7688
    ctx->pc = 0x1c2030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936952));
label_1c2034:
    // 0x1c2034: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c2034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c2038:
    // 0x1c2038: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c2038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c203c:
    // 0x1c203c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1c2040:
    if (ctx->pc == 0x1C2040u) {
        ctx->pc = 0x1C2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C203Cu;
        // 0x1c2040: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2044u;
        goto label_1c2044;
    }
    ctx->pc = 0x1C203Cu;
    {
        const bool branch_taken_0x1c203c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C203Cu;
        // 0x1c2040: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c203c) {
            ctx->pc = 0x1C2050u;
            goto label_1c2050;
        }
    }
    ctx->pc = 0x1C2044u;
label_1c2044:
    // 0x1c2044: 0xc070080  jal         func_1C0200
label_1c2048:
    if (ctx->pc == 0x1C2048u) {
        ctx->pc = 0x1C2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2044u;
        // 0x1c2048: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C204Cu;
        goto label_1c204c;
    }
    ctx->pc = 0x1C2044u;
    SET_GPR_U32(ctx, 31, 0x1C204Cu);
    ctx->pc = 0x1C2048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2044u;
    // 0x1c2048: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C204Cu;
label_1c204c:
    // 0x1c204c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c204cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c2050:
    // 0x1c2050: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c2050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c2054:
    // 0x1c2054: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1c2054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c2058:
    // 0x1c2058: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_1c205c:
    if (ctx->pc == 0x1C205Cu) {
        ctx->pc = 0x1C205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2058u;
        // 0x1c205c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2060u;
        goto label_1c2060;
    }
    ctx->pc = 0x1C2058u;
    {
        const bool branch_taken_0x1c2058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2058u;
        // 0x1c205c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2058) {
            ctx->pc = 0x1C2010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2010;
        }
    }
    ctx->pc = 0x1C2060u;
label_1c2060:
    // 0x1c2060: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c2060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c2064:
    // 0x1c2064: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c2064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c2068:
    // 0x1c2068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c2068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c206c:
    // 0x1c206c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c206cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2070:
    // 0x1c2070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2074:
    // 0x1c2074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2078:
    // 0x1c2078: 0x3e00008  jr          $ra
label_1c207c:
    if (ctx->pc == 0x1C207Cu) {
        ctx->pc = 0x1C207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2078u;
        // 0x1c207c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2080u;
        goto label_1c2080;
    }
    ctx->pc = 0x1C2078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2078u;
        // 0x1c207c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2080u;
label_1c2080:
    // 0x1c2080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c2084:
    // 0x1c2084: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1c2084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c2088:
    // 0x1c2088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c208c:
    // 0x1c208c: 0x2405010c  addiu       $a1, $zero, 0x10C
    ctx->pc = 0x1c208cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
label_1c2090:
    // 0x1c2090: 0xc060578  jal         func_1815E0
label_1c2094:
    if (ctx->pc == 0x1C2094u) {
        ctx->pc = 0x1C2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2090u;
        // 0x1c2094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2098u;
        goto label_1c2098;
    }
    ctx->pc = 0x1C2090u;
    SET_GPR_U32(ctx, 31, 0x1C2098u);
    ctx->pc = 0x1C2094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2090u;
    // 0x1c2094: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C2090u, 0x1C2098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2098u;
label_1c2098:
    // 0x1c2098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c209c:
    // 0x1c209c: 0x3e00008  jr          $ra
label_1c20a0:
    if (ctx->pc == 0x1C20A0u) {
        ctx->pc = 0x1C20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C209Cu;
        // 0x1c20a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20A4u;
        goto label_1c20a4;
    }
    ctx->pc = 0x1C209Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C209Cu;
        // 0x1c20a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C209Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C20A4u;
label_1c20a4:
    // 0x1c20a4: 0x0  nop
    ctx->pc = 0x1c20a4u;
    // NOP
label_1c20a8:
    // 0x1c20a8: 0x0  nop
    ctx->pc = 0x1c20a8u;
    // NOP
label_1c20ac:
    // 0x1c20ac: 0x0  nop
    ctx->pc = 0x1c20acu;
    // NOP
label_1c20b0:
    // 0x1c20b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c20b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c20b4:
    // 0x1c20b4: 0x24850130  addiu       $a1, $a0, 0x130
    ctx->pc = 0x1c20b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
label_1c20b8:
    // 0x1c20b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c20b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c20bc:
    // 0x1c20bc: 0xc06064c  jal         func_181930
label_1c20c0:
    if (ctx->pc == 0x1C20C0u) {
        ctx->pc = 0x1C20C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20BCu;
        // 0x1c20c0: 0xdf848960  ld          $a0, -0x76A0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20C4u;
        goto label_1c20c4;
    }
    ctx->pc = 0x1C20BCu;
    SET_GPR_U32(ctx, 31, 0x1C20C4u);
    ctx->pc = 0x1C20C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20BCu;
    // 0x1c20c0: 0xdf848960  ld          $a0, -0x76A0($gp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181930u, 0x1C20BCu, 0x1C20C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20C4u;
label_1c20c4:
    // 0x1c20c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c20c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c20c8:
    // 0x1c20c8: 0x3e00008  jr          $ra
label_1c20cc:
    if (ctx->pc == 0x1C20CCu) {
        ctx->pc = 0x1C20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20C8u;
        // 0x1c20cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20D0u;
        goto label_1c20d0;
    }
    ctx->pc = 0x1C20C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20C8u;
        // 0x1c20cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C20D0u;
label_1c20d0:
    // 0x1c20d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c20d4:
    // 0x1c20d4: 0x248500d0  addiu       $a1, $a0, 0xD0
    ctx->pc = 0x1c20d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_1c20d8:
    // 0x1c20d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c20dc:
    // 0x1c20dc: 0xc06064c  jal         func_181930
label_1c20e0:
    if (ctx->pc == 0x1C20E0u) {
        ctx->pc = 0x1C20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20DCu;
        // 0x1c20e0: 0xdf848970  ld          $a0, -0x7690($gp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936944)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20E4u;
        goto label_1c20e4;
    }
    ctx->pc = 0x1C20DCu;
    SET_GPR_U32(ctx, 31, 0x1C20E4u);
    ctx->pc = 0x1C20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20DCu;
    // 0x1c20e0: 0xdf848970  ld          $a0, -0x7690($gp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936944)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181930u, 0x1C20DCu, 0x1C20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20E4u;
label_1c20e4:
    // 0x1c20e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c20e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c20e8:
    // 0x1c20e8: 0x3e00008  jr          $ra
label_1c20ec:
    if (ctx->pc == 0x1C20ECu) {
        ctx->pc = 0x1C20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20E8u;
        // 0x1c20ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20F0u;
        goto label_1c20f0;
    }
    ctx->pc = 0x1C20E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20E8u;
        // 0x1c20ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C20F0u;
label_1c20f0:
    // 0x1c20f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c20f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1c20f4:
    // 0x1c20f4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1c20f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1c20f8:
    // 0x1c20f8: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1c20f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1c20fc:
    // 0x1c20fc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1c20fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1c2100:
    // 0x1c2100: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1c2100u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c2104:
    // 0x1c2104: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1c2104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1c2108:
    // 0x1c2108: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1c2108u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c210c:
    // 0x1c210c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1c210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1c2110:
    // 0x1c2110: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1c2110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1c2114:
    // 0x1c2114: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1c2114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1c2118:
    // 0x1c2118: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1c2118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1c211c:
    // 0x1c211c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c211cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c2120:
    // 0x1c2120: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1c2120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1c2124:
    // 0x1c2124: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1c2124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1c2128:
    // 0x1c2128: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c2128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c212c:
    // 0x1c212c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c212cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2130:
    // 0x1c2130: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c2130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c2134:
    // 0x1c2134: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1c2134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1c2138:
    // 0x1c2138: 0xdf848970  ld          $a0, -0x7690($gp)
    ctx->pc = 0x1c2138u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_1c213c:
    // 0x1c213c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c213cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c2140:
    // 0x1c2140: 0xafaa00dc  sw          $t2, 0xDC($sp)
    ctx->pc = 0x1c2140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 10));
label_1c2144:
    // 0x1c2144: 0xc06064c  jal         func_181930
label_1c2148:
    if (ctx->pc == 0x1C2148u) {
        ctx->pc = 0x1C2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2144u;
        // 0x1c2148: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C214Cu;
        goto label_1c214c;
    }
    ctx->pc = 0x1C2144u;
    SET_GPR_U32(ctx, 31, 0x1C214Cu);
    ctx->pc = 0x1C2148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2144u;
    // 0x1c2148: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181930u, 0x1C2144u, 0x1C214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C214Cu;
label_1c214c:
    // 0x1c214c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1c2150:
    if (ctx->pc == 0x1C2150u) {
        ctx->pc = 0x1C2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C214Cu;
        // 0x1c2150: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2154u;
        goto label_1c2154;
    }
    ctx->pc = 0x1C214Cu;
    {
        const bool branch_taken_0x1c214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C214Cu;
        // 0x1c2150: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c214c) {
            ctx->pc = 0x1C2204u;
            { ctx->pc = 0x1c2204; return; }
        }
    }
    ctx->pc = 0x1C2154u;
label_1c2154:
    // 0x1c2154: 0xc08f608  jal         func_23D820
label_1c2158:
    if (ctx->pc == 0x1C2158u) {
        ctx->pc = 0x1C2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2154u;
        // 0x1c2158: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C215Cu;
        goto label_1c215c;
    }
    ctx->pc = 0x1C2154u;
    SET_GPR_U32(ctx, 31, 0x1C215Cu);
    ctx->pc = 0x1C2158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2154u;
    // 0x1c2158: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D820u;
    { ctx->pc = 0x23d820; return; }
    ctx->pc = 0x1C215Cu;
label_1c215c:
    // 0x1c215c: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x1c215cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_1c2160:
    // 0x1c2160: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_1c2164:
    if (ctx->pc == 0x1C2164u) {
        ctx->pc = 0x1C2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2160u;
        // 0x1c2164: 0x28410060  slti        $at, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2168u;
        goto label_1c2168;
    }
    ctx->pc = 0x1C2160u;
    {
        const bool branch_taken_0x1c2160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2160u;
        // 0x1c2164: 0x28410060  slti        $at, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2160) {
            ctx->pc = 0x1C21F4u;
            { ctx->pc = 0x1c21f4; return; }
        }
    }
    ctx->pc = 0x1C2168u;
label_1c2168:
    // 0x1c2168: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_1c216c:
    if (ctx->pc == 0x1C216Cu) {
        ctx->pc = 0x1C216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2168u;
        // 0x1c216c: 0x2446ffe0  addiu       $a2, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2170u;
        goto label_1c2170;
    }
    ctx->pc = 0x1C2168u;
    {
        const bool branch_taken_0x1c2168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2168u;
        // 0x1c216c: 0x2446ffe0  addiu       $a2, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2168) {
            ctx->pc = 0x1C21F4u;
            { ctx->pc = 0x1c21f4; return; }
        }
    }
    ctx->pc = 0x1C2170u;
label_1c2170:
    // 0x1c2170: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1c2174:
    if (ctx->pc == 0x1C2174u) {
        ctx->pc = 0x1C2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2170u;
        // 0x1c2174: 0x610c3  sra         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2178u;
        goto label_1c2178;
    }
    ctx->pc = 0x1C2170u;
    {
        const bool branch_taken_0x1c2170 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2170u;
        // 0x1c2174: 0x610c3  sra         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2170) {
            ctx->pc = 0x1C2180u;
            goto label_1c2180;
        }
    }
    ctx->pc = 0x1C2178u;
label_1c2178:
    // 0x1c2178: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x1c2178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1c217c:
    // 0x1c217c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1c217cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1c2180:
    // 0x1c2180: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c2180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1c2184:
    // 0x1c2184: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c2184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c2188:
    // 0x1c2188: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1c2188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c218c:
    // 0x1c218c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2190:
    // 0x1c2190: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1c2190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1c2194:
    // 0x1c2194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1c2198u;
    return;
}

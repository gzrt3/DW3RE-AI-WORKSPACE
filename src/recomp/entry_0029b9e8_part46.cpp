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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part46(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b1978u: goto label_2b1978;
        case 0x2b197cu: goto label_2b197c;
        case 0x2b1980u: goto label_2b1980;
        case 0x2b1984u: goto label_2b1984;
        case 0x2b1988u: goto label_2b1988;
        case 0x2b198cu: goto label_2b198c;
        case 0x2b1990u: goto label_2b1990;
        case 0x2b1994u: goto label_2b1994;
        case 0x2b1998u: goto label_2b1998;
        case 0x2b199cu: goto label_2b199c;
        case 0x2b19a0u: goto label_2b19a0;
        case 0x2b19a4u: goto label_2b19a4;
        case 0x2b19a8u: goto label_2b19a8;
        case 0x2b19acu: goto label_2b19ac;
        case 0x2b19b0u: goto label_2b19b0;
        case 0x2b19b4u: goto label_2b19b4;
        case 0x2b19b8u: goto label_2b19b8;
        case 0x2b19bcu: goto label_2b19bc;
        case 0x2b19c0u: goto label_2b19c0;
        case 0x2b19c4u: goto label_2b19c4;
        case 0x2b19c8u: goto label_2b19c8;
        case 0x2b19ccu: goto label_2b19cc;
        case 0x2b19d0u: goto label_2b19d0;
        case 0x2b19d4u: goto label_2b19d4;
        case 0x2b19d8u: goto label_2b19d8;
        case 0x2b19dcu: goto label_2b19dc;
        case 0x2b19e0u: goto label_2b19e0;
        case 0x2b19e4u: goto label_2b19e4;
        case 0x2b19e8u: goto label_2b19e8;
        case 0x2b19ecu: goto label_2b19ec;
        case 0x2b19f0u: goto label_2b19f0;
        case 0x2b19f4u: goto label_2b19f4;
        case 0x2b19f8u: goto label_2b19f8;
        case 0x2b19fcu: goto label_2b19fc;
        case 0x2b1a00u: goto label_2b1a00;
        case 0x2b1a04u: goto label_2b1a04;
        case 0x2b1a08u: goto label_2b1a08;
        case 0x2b1a0cu: goto label_2b1a0c;
        case 0x2b1a10u: goto label_2b1a10;
        case 0x2b1a14u: goto label_2b1a14;
        case 0x2b1a18u: goto label_2b1a18;
        case 0x2b1a1cu: goto label_2b1a1c;
        case 0x2b1a20u: goto label_2b1a20;
        case 0x2b1a24u: goto label_2b1a24;
        case 0x2b1a28u: goto label_2b1a28;
        case 0x2b1a2cu: goto label_2b1a2c;
        case 0x2b1a30u: goto label_2b1a30;
        case 0x2b1a34u: goto label_2b1a34;
        case 0x2b1a38u: goto label_2b1a38;
        case 0x2b1a3cu: goto label_2b1a3c;
        case 0x2b1a40u: goto label_2b1a40;
        case 0x2b1a44u: goto label_2b1a44;
        case 0x2b1a48u: goto label_2b1a48;
        case 0x2b1a4cu: goto label_2b1a4c;
        case 0x2b1a50u: goto label_2b1a50;
        case 0x2b1a54u: goto label_2b1a54;
        case 0x2b1a58u: goto label_2b1a58;
        case 0x2b1a5cu: goto label_2b1a5c;
        case 0x2b1a60u: goto label_2b1a60;
        case 0x2b1a64u: goto label_2b1a64;
        case 0x2b1a68u: goto label_2b1a68;
        case 0x2b1a6cu: goto label_2b1a6c;
        case 0x2b1a70u: goto label_2b1a70;
        case 0x2b1a74u: goto label_2b1a74;
        case 0x2b1a78u: goto label_2b1a78;
        case 0x2b1a7cu: goto label_2b1a7c;
        case 0x2b1a80u: goto label_2b1a80;
        case 0x2b1a84u: goto label_2b1a84;
        case 0x2b1a88u: goto label_2b1a88;
        case 0x2b1a8cu: goto label_2b1a8c;
        case 0x2b1a90u: goto label_2b1a90;
        case 0x2b1a94u: goto label_2b1a94;
        case 0x2b1a98u: goto label_2b1a98;
        case 0x2b1a9cu: goto label_2b1a9c;
        case 0x2b1aa0u: goto label_2b1aa0;
        case 0x2b1aa4u: goto label_2b1aa4;
        case 0x2b1aa8u: goto label_2b1aa8;
        case 0x2b1aacu: goto label_2b1aac;
        case 0x2b1ab0u: goto label_2b1ab0;
        case 0x2b1ab4u: goto label_2b1ab4;
        case 0x2b1ab8u: goto label_2b1ab8;
        case 0x2b1abcu: goto label_2b1abc;
        case 0x2b1ac0u: goto label_2b1ac0;
        case 0x2b1ac4u: goto label_2b1ac4;
        case 0x2b1ac8u: goto label_2b1ac8;
        case 0x2b1accu: goto label_2b1acc;
        case 0x2b1ad0u: goto label_2b1ad0;
        case 0x2b1ad4u: goto label_2b1ad4;
        case 0x2b1ad8u: goto label_2b1ad8;
        case 0x2b1adcu: goto label_2b1adc;
        case 0x2b1ae0u: goto label_2b1ae0;
        case 0x2b1ae4u: goto label_2b1ae4;
        case 0x2b1ae8u: goto label_2b1ae8;
        case 0x2b1aecu: goto label_2b1aec;
        case 0x2b1af0u: goto label_2b1af0;
        case 0x2b1af4u: goto label_2b1af4;
        case 0x2b1af8u: goto label_2b1af8;
        case 0x2b1afcu: goto label_2b1afc;
        case 0x2b1b00u: goto label_2b1b00;
        case 0x2b1b04u: goto label_2b1b04;
        case 0x2b1b08u: goto label_2b1b08;
        case 0x2b1b0cu: goto label_2b1b0c;
        case 0x2b1b10u: goto label_2b1b10;
        case 0x2b1b14u: goto label_2b1b14;
        case 0x2b1b18u: goto label_2b1b18;
        case 0x2b1b1cu: goto label_2b1b1c;
        case 0x2b1b20u: goto label_2b1b20;
        case 0x2b1b24u: goto label_2b1b24;
        case 0x2b1b28u: goto label_2b1b28;
        case 0x2b1b2cu: goto label_2b1b2c;
        case 0x2b1b30u: goto label_2b1b30;
        case 0x2b1b34u: goto label_2b1b34;
        case 0x2b1b38u: goto label_2b1b38;
        case 0x2b1b3cu: goto label_2b1b3c;
        case 0x2b1b40u: goto label_2b1b40;
        case 0x2b1b44u: goto label_2b1b44;
        case 0x2b1b48u: goto label_2b1b48;
        case 0x2b1b4cu: goto label_2b1b4c;
        case 0x2b1b50u: goto label_2b1b50;
        case 0x2b1b54u: goto label_2b1b54;
        case 0x2b1b58u: goto label_2b1b58;
        case 0x2b1b5cu: goto label_2b1b5c;
        case 0x2b1b60u: goto label_2b1b60;
        case 0x2b1b64u: goto label_2b1b64;
        case 0x2b1b68u: goto label_2b1b68;
        case 0x2b1b6cu: goto label_2b1b6c;
        case 0x2b1b70u: goto label_2b1b70;
        case 0x2b1b74u: goto label_2b1b74;
        case 0x2b1b78u: goto label_2b1b78;
        case 0x2b1b7cu: goto label_2b1b7c;
        case 0x2b1b80u: goto label_2b1b80;
        case 0x2b1b84u: goto label_2b1b84;
        case 0x2b1b88u: goto label_2b1b88;
        case 0x2b1b8cu: goto label_2b1b8c;
        case 0x2b1b90u: goto label_2b1b90;
        case 0x2b1b94u: goto label_2b1b94;
        case 0x2b1b98u: goto label_2b1b98;
        case 0x2b1b9cu: goto label_2b1b9c;
        case 0x2b1ba0u: goto label_2b1ba0;
        case 0x2b1ba4u: goto label_2b1ba4;
        case 0x2b1ba8u: goto label_2b1ba8;
        case 0x2b1bacu: goto label_2b1bac;
        case 0x2b1bb0u: goto label_2b1bb0;
        case 0x2b1bb4u: goto label_2b1bb4;
        case 0x2b1bb8u: goto label_2b1bb8;
        case 0x2b1bbcu: goto label_2b1bbc;
        case 0x2b1bc0u: goto label_2b1bc0;
        case 0x2b1bc4u: goto label_2b1bc4;
        case 0x2b1bc8u: goto label_2b1bc8;
        case 0x2b1bccu: goto label_2b1bcc;
        case 0x2b1bd0u: goto label_2b1bd0;
        case 0x2b1bd4u: goto label_2b1bd4;
        case 0x2b1bd8u: goto label_2b1bd8;
        case 0x2b1bdcu: goto label_2b1bdc;
        case 0x2b1be0u: goto label_2b1be0;
        case 0x2b1be4u: goto label_2b1be4;
        case 0x2b1be8u: goto label_2b1be8;
        case 0x2b1becu: goto label_2b1bec;
        case 0x2b1bf0u: goto label_2b1bf0;
        case 0x2b1bf4u: goto label_2b1bf4;
        case 0x2b1bf8u: goto label_2b1bf8;
        case 0x2b1bfcu: goto label_2b1bfc;
        case 0x2b1c00u: goto label_2b1c00;
        case 0x2b1c04u: goto label_2b1c04;
        case 0x2b1c08u: goto label_2b1c08;
        case 0x2b1c0cu: goto label_2b1c0c;
        case 0x2b1c10u: goto label_2b1c10;
        case 0x2b1c14u: goto label_2b1c14;
        case 0x2b1c18u: goto label_2b1c18;
        case 0x2b1c1cu: goto label_2b1c1c;
        case 0x2b1c20u: goto label_2b1c20;
        case 0x2b1c24u: goto label_2b1c24;
        case 0x2b1c28u: goto label_2b1c28;
        case 0x2b1c2cu: goto label_2b1c2c;
        case 0x2b1c30u: goto label_2b1c30;
        case 0x2b1c34u: goto label_2b1c34;
        case 0x2b1c38u: goto label_2b1c38;
        case 0x2b1c3cu: goto label_2b1c3c;
        case 0x2b1c40u: goto label_2b1c40;
        case 0x2b1c44u: goto label_2b1c44;
        case 0x2b1c48u: goto label_2b1c48;
        case 0x2b1c4cu: goto label_2b1c4c;
        case 0x2b1c50u: goto label_2b1c50;
        case 0x2b1c54u: goto label_2b1c54;
        case 0x2b1c58u: goto label_2b1c58;
        case 0x2b1c5cu: goto label_2b1c5c;
        case 0x2b1c60u: goto label_2b1c60;
        case 0x2b1c64u: goto label_2b1c64;
        case 0x2b1c68u: goto label_2b1c68;
        case 0x2b1c6cu: goto label_2b1c6c;
        case 0x2b1c70u: goto label_2b1c70;
        case 0x2b1c74u: goto label_2b1c74;
        case 0x2b1c78u: goto label_2b1c78;
        case 0x2b1c7cu: goto label_2b1c7c;
        case 0x2b1c80u: goto label_2b1c80;
        case 0x2b1c84u: goto label_2b1c84;
        case 0x2b1c88u: goto label_2b1c88;
        case 0x2b1c8cu: goto label_2b1c8c;
        case 0x2b1c90u: goto label_2b1c90;
        case 0x2b1c94u: goto label_2b1c94;
        case 0x2b1c98u: goto label_2b1c98;
        case 0x2b1c9cu: goto label_2b1c9c;
        case 0x2b1ca0u: goto label_2b1ca0;
        case 0x2b1ca4u: goto label_2b1ca4;
        case 0x2b1ca8u: goto label_2b1ca8;
        case 0x2b1cacu: goto label_2b1cac;
        case 0x2b1cb0u: goto label_2b1cb0;
        case 0x2b1cb4u: goto label_2b1cb4;
        case 0x2b1cb8u: goto label_2b1cb8;
        case 0x2b1cbcu: goto label_2b1cbc;
        case 0x2b1cc0u: goto label_2b1cc0;
        case 0x2b1cc4u: goto label_2b1cc4;
        case 0x2b1cc8u: goto label_2b1cc8;
        case 0x2b1cccu: goto label_2b1ccc;
        case 0x2b1cd0u: goto label_2b1cd0;
        case 0x2b1cd4u: goto label_2b1cd4;
        case 0x2b1cd8u: goto label_2b1cd8;
        case 0x2b1cdcu: goto label_2b1cdc;
        case 0x2b1ce0u: goto label_2b1ce0;
        case 0x2b1ce4u: goto label_2b1ce4;
        case 0x2b1ce8u: goto label_2b1ce8;
        case 0x2b1cecu: goto label_2b1cec;
        case 0x2b1cf0u: goto label_2b1cf0;
        case 0x2b1cf4u: goto label_2b1cf4;
        case 0x2b1cf8u: goto label_2b1cf8;
        case 0x2b1cfcu: goto label_2b1cfc;
        case 0x2b1d00u: goto label_2b1d00;
        case 0x2b1d04u: goto label_2b1d04;
        case 0x2b1d08u: goto label_2b1d08;
        case 0x2b1d0cu: goto label_2b1d0c;
        case 0x2b1d10u: goto label_2b1d10;
        case 0x2b1d14u: goto label_2b1d14;
        case 0x2b1d18u: goto label_2b1d18;
        case 0x2b1d1cu: goto label_2b1d1c;
        case 0x2b1d20u: goto label_2b1d20;
        case 0x2b1d24u: goto label_2b1d24;
        case 0x2b1d28u: goto label_2b1d28;
        case 0x2b1d2cu: goto label_2b1d2c;
        case 0x2b1d30u: goto label_2b1d30;
        case 0x2b1d34u: goto label_2b1d34;
        case 0x2b1d38u: goto label_2b1d38;
        case 0x2b1d3cu: goto label_2b1d3c;
        case 0x2b1d40u: goto label_2b1d40;
        case 0x2b1d44u: goto label_2b1d44;
        case 0x2b1d48u: goto label_2b1d48;
        case 0x2b1d4cu: goto label_2b1d4c;
        case 0x2b1d50u: goto label_2b1d50;
        case 0x2b1d54u: goto label_2b1d54;
        case 0x2b1d58u: goto label_2b1d58;
        case 0x2b1d5cu: goto label_2b1d5c;
        case 0x2b1d60u: goto label_2b1d60;
        case 0x2b1d64u: goto label_2b1d64;
        case 0x2b1d68u: goto label_2b1d68;
        case 0x2b1d6cu: goto label_2b1d6c;
        case 0x2b1d70u: goto label_2b1d70;
        case 0x2b1d74u: goto label_2b1d74;
        case 0x2b1d78u: goto label_2b1d78;
        case 0x2b1d7cu: goto label_2b1d7c;
        case 0x2b1d80u: goto label_2b1d80;
        case 0x2b1d84u: goto label_2b1d84;
        case 0x2b1d88u: goto label_2b1d88;
        case 0x2b1d8cu: goto label_2b1d8c;
        case 0x2b1d90u: goto label_2b1d90;
        case 0x2b1d94u: goto label_2b1d94;
        case 0x2b1d98u: goto label_2b1d98;
        case 0x2b1d9cu: goto label_2b1d9c;
        case 0x2b1da0u: goto label_2b1da0;
        case 0x2b1da4u: goto label_2b1da4;
        case 0x2b1da8u: goto label_2b1da8;
        case 0x2b1dacu: goto label_2b1dac;
        case 0x2b1db0u: goto label_2b1db0;
        case 0x2b1db4u: goto label_2b1db4;
        case 0x2b1db8u: goto label_2b1db8;
        case 0x2b1dbcu: goto label_2b1dbc;
        case 0x2b1dc0u: goto label_2b1dc0;
        case 0x2b1dc4u: goto label_2b1dc4;
        case 0x2b1dc8u: goto label_2b1dc8;
        case 0x2b1dccu: goto label_2b1dcc;
        case 0x2b1dd0u: goto label_2b1dd0;
        case 0x2b1dd4u: goto label_2b1dd4;
        case 0x2b1dd8u: goto label_2b1dd8;
        case 0x2b1ddcu: goto label_2b1ddc;
        case 0x2b1de0u: goto label_2b1de0;
        case 0x2b1de4u: goto label_2b1de4;
        case 0x2b1de8u: goto label_2b1de8;
        case 0x2b1decu: goto label_2b1dec;
        case 0x2b1df0u: goto label_2b1df0;
        case 0x2b1df4u: goto label_2b1df4;
        case 0x2b1df8u: goto label_2b1df8;
        case 0x2b1dfcu: goto label_2b1dfc;
        case 0x2b1e00u: goto label_2b1e00;
        case 0x2b1e04u: goto label_2b1e04;
        case 0x2b1e08u: goto label_2b1e08;
        case 0x2b1e0cu: goto label_2b1e0c;
        case 0x2b1e10u: goto label_2b1e10;
        case 0x2b1e14u: goto label_2b1e14;
        case 0x2b1e18u: goto label_2b1e18;
        case 0x2b1e1cu: goto label_2b1e1c;
        case 0x2b1e20u: goto label_2b1e20;
        case 0x2b1e24u: goto label_2b1e24;
        case 0x2b1e28u: goto label_2b1e28;
        case 0x2b1e2cu: goto label_2b1e2c;
        case 0x2b1e30u: goto label_2b1e30;
        case 0x2b1e34u: goto label_2b1e34;
        case 0x2b1e38u: goto label_2b1e38;
        case 0x2b1e3cu: goto label_2b1e3c;
        case 0x2b1e40u: goto label_2b1e40;
        case 0x2b1e44u: goto label_2b1e44;
        case 0x2b1e48u: goto label_2b1e48;
        case 0x2b1e4cu: goto label_2b1e4c;
        case 0x2b1e50u: goto label_2b1e50;
        case 0x2b1e54u: goto label_2b1e54;
        case 0x2b1e58u: goto label_2b1e58;
        case 0x2b1e5cu: goto label_2b1e5c;
        case 0x2b1e60u: goto label_2b1e60;
        case 0x2b1e64u: goto label_2b1e64;
        case 0x2b1e68u: goto label_2b1e68;
        case 0x2b1e6cu: goto label_2b1e6c;
        case 0x2b1e70u: goto label_2b1e70;
        case 0x2b1e74u: goto label_2b1e74;
        case 0x2b1e78u: goto label_2b1e78;
        case 0x2b1e7cu: goto label_2b1e7c;
        case 0x2b1e80u: goto label_2b1e80;
        case 0x2b1e84u: goto label_2b1e84;
        case 0x2b1e88u: goto label_2b1e88;
        case 0x2b1e8cu: goto label_2b1e8c;
        case 0x2b1e90u: goto label_2b1e90;
        case 0x2b1e94u: goto label_2b1e94;
        case 0x2b1e98u: goto label_2b1e98;
        case 0x2b1e9cu: goto label_2b1e9c;
        case 0x2b1ea0u: goto label_2b1ea0;
        case 0x2b1ea4u: goto label_2b1ea4;
        case 0x2b1ea8u: goto label_2b1ea8;
        case 0x2b1eacu: goto label_2b1eac;
        case 0x2b1eb0u: goto label_2b1eb0;
        case 0x2b1eb4u: goto label_2b1eb4;
        case 0x2b1eb8u: goto label_2b1eb8;
        case 0x2b1ebcu: goto label_2b1ebc;
        case 0x2b1ec0u: goto label_2b1ec0;
        case 0x2b1ec4u: goto label_2b1ec4;
        case 0x2b1ec8u: goto label_2b1ec8;
        case 0x2b1eccu: goto label_2b1ecc;
        case 0x2b1ed0u: goto label_2b1ed0;
        case 0x2b1ed4u: goto label_2b1ed4;
        case 0x2b1ed8u: goto label_2b1ed8;
        case 0x2b1edcu: goto label_2b1edc;
        case 0x2b1ee0u: goto label_2b1ee0;
        case 0x2b1ee4u: goto label_2b1ee4;
        case 0x2b1ee8u: goto label_2b1ee8;
        case 0x2b1eecu: goto label_2b1eec;
        case 0x2b1ef0u: goto label_2b1ef0;
        case 0x2b1ef4u: goto label_2b1ef4;
        case 0x2b1ef8u: goto label_2b1ef8;
        case 0x2b1efcu: goto label_2b1efc;
        case 0x2b1f00u: goto label_2b1f00;
        case 0x2b1f04u: goto label_2b1f04;
        case 0x2b1f08u: goto label_2b1f08;
        case 0x2b1f0cu: goto label_2b1f0c;
        case 0x2b1f10u: goto label_2b1f10;
        case 0x2b1f14u: goto label_2b1f14;
        case 0x2b1f18u: goto label_2b1f18;
        case 0x2b1f1cu: goto label_2b1f1c;
        case 0x2b1f20u: goto label_2b1f20;
        case 0x2b1f24u: goto label_2b1f24;
        case 0x2b1f28u: goto label_2b1f28;
        case 0x2b1f2cu: goto label_2b1f2c;
        case 0x2b1f30u: goto label_2b1f30;
        case 0x2b1f34u: goto label_2b1f34;
        case 0x2b1f38u: goto label_2b1f38;
        case 0x2b1f3cu: goto label_2b1f3c;
        case 0x2b1f40u: goto label_2b1f40;
        case 0x2b1f44u: goto label_2b1f44;
        case 0x2b1f48u: goto label_2b1f48;
        case 0x2b1f4cu: goto label_2b1f4c;
        case 0x2b1f50u: goto label_2b1f50;
        case 0x2b1f54u: goto label_2b1f54;
        case 0x2b1f58u: goto label_2b1f58;
        case 0x2b1f5cu: goto label_2b1f5c;
        case 0x2b1f60u: goto label_2b1f60;
        case 0x2b1f64u: goto label_2b1f64;
        case 0x2b1f68u: goto label_2b1f68;
        case 0x2b1f6cu: goto label_2b1f6c;
        case 0x2b1f70u: goto label_2b1f70;
        case 0x2b1f74u: goto label_2b1f74;
        case 0x2b1f78u: goto label_2b1f78;
        case 0x2b1f7cu: goto label_2b1f7c;
        case 0x2b1f80u: goto label_2b1f80;
        case 0x2b1f84u: goto label_2b1f84;
        case 0x2b1f88u: goto label_2b1f88;
        case 0x2b1f8cu: goto label_2b1f8c;
        case 0x2b1f90u: goto label_2b1f90;
        case 0x2b1f94u: goto label_2b1f94;
        case 0x2b1f98u: goto label_2b1f98;
        case 0x2b1f9cu: goto label_2b1f9c;
        case 0x2b1fa0u: goto label_2b1fa0;
        case 0x2b1fa4u: goto label_2b1fa4;
        case 0x2b1fa8u: goto label_2b1fa8;
        case 0x2b1facu: goto label_2b1fac;
        case 0x2b1fb0u: goto label_2b1fb0;
        case 0x2b1fb4u: goto label_2b1fb4;
        case 0x2b1fb8u: goto label_2b1fb8;
        case 0x2b1fbcu: goto label_2b1fbc;
        case 0x2b1fc0u: goto label_2b1fc0;
        case 0x2b1fc4u: goto label_2b1fc4;
        case 0x2b1fc8u: goto label_2b1fc8;
        case 0x2b1fccu: goto label_2b1fcc;
        case 0x2b1fd0u: goto label_2b1fd0;
        case 0x2b1fd4u: goto label_2b1fd4;
        case 0x2b1fd8u: goto label_2b1fd8;
        case 0x2b1fdcu: goto label_2b1fdc;
        case 0x2b1fe0u: goto label_2b1fe0;
        case 0x2b1fe4u: goto label_2b1fe4;
        case 0x2b1fe8u: goto label_2b1fe8;
        case 0x2b1fecu: goto label_2b1fec;
        case 0x2b1ff0u: goto label_2b1ff0;
        case 0x2b1ff4u: goto label_2b1ff4;
        case 0x2b1ff8u: goto label_2b1ff8;
        case 0x2b1ffcu: goto label_2b1ffc;
        case 0x2b2000u: goto label_2b2000;
        case 0x2b2004u: goto label_2b2004;
        case 0x2b2008u: goto label_2b2008;
        case 0x2b200cu: goto label_2b200c;
        case 0x2b2010u: goto label_2b2010;
        case 0x2b2014u: goto label_2b2014;
        case 0x2b2018u: goto label_2b2018;
        case 0x2b201cu: goto label_2b201c;
        case 0x2b2020u: goto label_2b2020;
        case 0x2b2024u: goto label_2b2024;
        case 0x2b2028u: goto label_2b2028;
        case 0x2b202cu: goto label_2b202c;
        case 0x2b2030u: goto label_2b2030;
        case 0x2b2034u: goto label_2b2034;
        case 0x2b2038u: goto label_2b2038;
        case 0x2b203cu: goto label_2b203c;
        case 0x2b2040u: goto label_2b2040;
        case 0x2b2044u: goto label_2b2044;
        case 0x2b2048u: goto label_2b2048;
        case 0x2b204cu: goto label_2b204c;
        case 0x2b2050u: goto label_2b2050;
        case 0x2b2054u: goto label_2b2054;
        case 0x2b2058u: goto label_2b2058;
        case 0x2b205cu: goto label_2b205c;
        case 0x2b2060u: goto label_2b2060;
        case 0x2b2064u: goto label_2b2064;
        case 0x2b2068u: goto label_2b2068;
        case 0x2b206cu: goto label_2b206c;
        case 0x2b2070u: goto label_2b2070;
        case 0x2b2074u: goto label_2b2074;
        case 0x2b2078u: goto label_2b2078;
        case 0x2b207cu: goto label_2b207c;
        case 0x2b2080u: goto label_2b2080;
        case 0x2b2084u: goto label_2b2084;
        case 0x2b2088u: goto label_2b2088;
        case 0x2b208cu: goto label_2b208c;
        case 0x2b2090u: goto label_2b2090;
        case 0x2b2094u: goto label_2b2094;
        case 0x2b2098u: goto label_2b2098;
        case 0x2b209cu: goto label_2b209c;
        case 0x2b20a0u: goto label_2b20a0;
        case 0x2b20a4u: goto label_2b20a4;
        case 0x2b20a8u: goto label_2b20a8;
        case 0x2b20acu: goto label_2b20ac;
        case 0x2b20b0u: goto label_2b20b0;
        case 0x2b20b4u: goto label_2b20b4;
        case 0x2b20b8u: goto label_2b20b8;
        case 0x2b20bcu: goto label_2b20bc;
        case 0x2b20c0u: goto label_2b20c0;
        case 0x2b20c4u: goto label_2b20c4;
        case 0x2b20c8u: goto label_2b20c8;
        case 0x2b20ccu: goto label_2b20cc;
        case 0x2b20d0u: goto label_2b20d0;
        case 0x2b20d4u: goto label_2b20d4;
        case 0x2b20d8u: goto label_2b20d8;
        case 0x2b20dcu: goto label_2b20dc;
        case 0x2b20e0u: goto label_2b20e0;
        case 0x2b20e4u: goto label_2b20e4;
        case 0x2b20e8u: goto label_2b20e8;
        case 0x2b20ecu: goto label_2b20ec;
        case 0x2b20f0u: goto label_2b20f0;
        case 0x2b20f4u: goto label_2b20f4;
        case 0x2b20f8u: goto label_2b20f8;
        case 0x2b20fcu: goto label_2b20fc;
        case 0x2b2100u: goto label_2b2100;
        case 0x2b2104u: goto label_2b2104;
        case 0x2b2108u: goto label_2b2108;
        case 0x2b210cu: goto label_2b210c;
        case 0x2b2110u: goto label_2b2110;
        case 0x2b2114u: goto label_2b2114;
        case 0x2b2118u: goto label_2b2118;
        case 0x2b211cu: goto label_2b211c;
        case 0x2b2120u: goto label_2b2120;
        case 0x2b2124u: goto label_2b2124;
        case 0x2b2128u: goto label_2b2128;
        case 0x2b212cu: goto label_2b212c;
        case 0x2b2130u: goto label_2b2130;
        case 0x2b2134u: goto label_2b2134;
        case 0x2b2138u: goto label_2b2138;
        case 0x2b213cu: goto label_2b213c;
        case 0x2b2140u: goto label_2b2140;
        case 0x2b2144u: goto label_2b2144;
        default: return;
    }

label_2b1978:
    // 0x2b1978: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1978u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b197c:
    // 0x2b197c: 0x280e3430  slti        $t6, $zero, 0x3430
    ctx->pc = 0x2b197cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13360) ? 1 : 0);
label_2b1980:
    // 0x2b1980: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1980u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1984:
    // 0x2b1984: 0x0  nop
    ctx->pc = 0x2b1984u;
    // NOP
label_2b1988:
    // 0x2b1988: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1988u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b198c:
    // 0x2b198c: 0x0  nop
    ctx->pc = 0x2b198cu;
    // NOP
label_2b1990:
    // 0x2b1990: 0x8700a5  .word       0x008700A5                   # or          $zero, $a0, $a3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1990u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_2b1994:
    // 0x2b1994: 0x28102d37  slti        $s0, $zero, 0x2D37
    ctx->pc = 0x2b1994u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11575) ? 1 : 0);
label_2b1998:
    // 0x2b1998: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1998u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b199c:
    // 0x2b199c: 0x0  nop
    ctx->pc = 0x2b199cu;
    // NOP
label_2b19a0:
    // 0x2b19a0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b19a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b19a4:
    // 0x2b19a4: 0x0  nop
    ctx->pc = 0x2b19a4u;
    // NOP
label_2b19a8:
    // 0x2b19a8: 0xaa0082  .word       0x00AA0082                   # srl         $zero, $t2, 2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b19a8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 10), 2));
label_2b19ac:
    // 0x2b19ac: 0x2812362e  slti        $s2, $zero, 0x362E
    ctx->pc = 0x2b19acu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13870) ? 1 : 0);
label_2b19b0:
    // 0x2b19b0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b19b0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b19b4:
    // 0x2b19b4: 0x0  nop
    ctx->pc = 0x2b19b4u;
    // NOP
label_2b19b8:
    // 0x2b19b8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b19b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b19bc:
    // 0x2b19bc: 0x0  nop
    ctx->pc = 0x2b19bcu;
    // NOP
label_2b19c0:
    // 0x2b19c0: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b19c0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b19c4:
    // 0x2b19c4: 0x2814372d  slti        $s4, $zero, 0x372D
    ctx->pc = 0x2b19c4u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)14125) ? 1 : 0);
label_2b19c8:
    // 0x2b19c8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b19c8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b19cc:
    // 0x2b19cc: 0x0  nop
    ctx->pc = 0x2b19ccu;
    // NOP
label_2b19d0:
    // 0x2b19d0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b19d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b19d4:
    // 0x2b19d4: 0x0  nop
    ctx->pc = 0x2b19d4u;
    // NOP
label_2b19d8:
    // 0x2b19d8: 0xa0008c  .word       0x00A0008C                   # syscall     2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b19d8u;
    ctx->pc = 0x2B19DCu;
runtime->handleSyscall(rdram, ctx, 0x28002u);
label_2b19dc:
    // 0x2b19dc: 0x28023430  slti        $v0, $zero, 0x3430
    ctx->pc = 0x2b19dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13360) ? 1 : 0);
label_2b19e0:
    // 0x2b19e0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b19e0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b19e4:
    // 0x2b19e4: 0x0  nop
    ctx->pc = 0x2b19e4u;
    // NOP
label_2b19e8:
    // 0x2b19e8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b19e8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b19ec:
    // 0x2b19ec: 0x0  nop
    ctx->pc = 0x2b19ecu;
    // NOP
label_2b19f0:
    // 0x2b19f0: 0x8700b9  .word       0x008700B9                   # INVALID     $a0, $a3, 0xB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b19f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2B19F0 raw=0x008700B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b19f4:
    // 0x2b19f4: 0x28082e3c  slti        $t0, $zero, 0x2E3C
    ctx->pc = 0x2b19f4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11836) ? 1 : 0);
label_2b19f8:
    // 0x2b19f8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b19f8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b19fc:
    // 0x2b19fc: 0x0  nop
    ctx->pc = 0x2b19fcu;
    // NOP
label_2b1a00:
    // 0x2b1a00: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a00u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a04:
    // 0x2b1a04: 0x0  nop
    ctx->pc = 0x2b1a04u;
    // NOP
label_2b1a08:
    // 0x2b1a08: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a08u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b1a0c:
    // 0x2b1a0c: 0x2816362e  slti        $s6, $zero, 0x362E
    ctx->pc = 0x2b1a0cu;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13870) ? 1 : 0);
label_2b1a10:
    // 0x2b1a10: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a10u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a14:
    // 0x2b1a14: 0x0  nop
    ctx->pc = 0x2b1a14u;
    // NOP
label_2b1a18:
    // 0x2b1a18: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a18u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a1c:
    // 0x2b1a1c: 0x0  nop
    ctx->pc = 0x2b1a1cu;
    // NOP
label_2b1a20:
    // 0x2b1a20: 0x9b0091  .word       0x009B0091                   # mthi        $a0 # 001B0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a20u;
    ctx->hi = GPR_U64(ctx, 4);
label_2b1a24:
    // 0x2b1a24: 0x28023232  slti        $v0, $zero, 0x3232
    ctx->pc = 0x2b1a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12850) ? 1 : 0);
label_2b1a28:
    // 0x2b1a28: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a28u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a2c:
    // 0x2b1a2c: 0x0  nop
    ctx->pc = 0x2b1a2cu;
    // NOP
label_2b1a30:
    // 0x2b1a30: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a34:
    // 0x2b1a34: 0x0  nop
    ctx->pc = 0x2b1a34u;
    // NOP
label_2b1a38:
    // 0x2b1a38: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2b1a3c:
    // 0x2b1a3c: 0x28023034  slti        $v0, $zero, 0x3034
    ctx->pc = 0x2b1a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12340) ? 1 : 0);
label_2b1a40:
    // 0x2b1a40: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a40u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a44:
    // 0x2b1a44: 0x0  nop
    ctx->pc = 0x2b1a44u;
    // NOP
label_2b1a48:
    // 0x2b1a48: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a48u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a4c:
    // 0x2b1a4c: 0x0  nop
    ctx->pc = 0x2b1a4cu;
    // NOP
label_2b1a50:
    // 0x2b1a50: 0x9b0091  .word       0x009B0091                   # mthi        $a0 # 001B0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a50u;
    ctx->hi = GPR_U64(ctx, 4);
label_2b1a54:
    // 0x2b1a54: 0x28023232  slti        $v0, $zero, 0x3232
    ctx->pc = 0x2b1a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12850) ? 1 : 0);
label_2b1a58:
    // 0x2b1a58: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a58u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a5c:
    // 0x2b1a5c: 0x0  nop
    ctx->pc = 0x2b1a5cu;
    // NOP
label_2b1a60:
    // 0x2b1a60: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a64:
    // 0x2b1a64: 0x0  nop
    ctx->pc = 0x2b1a64u;
    // NOP
label_2b1a68:
    // 0x2b1a68: 0x8200aa  .word       0x008200AA                   # slt         $zero, $a0, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a68u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2b1a6c:
    // 0x2b1a6c: 0x28022c38  slti        $v0, $zero, 0x2C38
    ctx->pc = 0x2b1a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11320) ? 1 : 0);
label_2b1a70:
    // 0x2b1a70: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a70u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a74:
    // 0x2b1a74: 0x0  nop
    ctx->pc = 0x2b1a74u;
    // NOP
label_2b1a78:
    // 0x2b1a78: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a78u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a7c:
    // 0x2b1a7c: 0x0  nop
    ctx->pc = 0x2b1a7cu;
    // NOP
label_2b1a80:
    // 0x2b1a80: 0x9b0091  .word       0x009B0091                   # mthi        $a0 # 001B0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a80u;
    ctx->hi = GPR_U64(ctx, 4);
label_2b1a84:
    // 0x2b1a84: 0x28023331  slti        $v0, $zero, 0x3331
    ctx->pc = 0x2b1a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13105) ? 1 : 0);
label_2b1a88:
    // 0x2b1a88: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1a88u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1a8c:
    // 0x2b1a8c: 0x0  nop
    ctx->pc = 0x2b1a8cu;
    // NOP
label_2b1a90:
    // 0x2b1a90: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1a90u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1a94:
    // 0x2b1a94: 0x0  nop
    ctx->pc = 0x2b1a94u;
    // NOP
label_2b1a98:
    // 0x2b1a98: 0x8c00a0  .word       0x008C00A0                   # add         $zero, $a0, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1a98u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1a9c:
    // 0x2b1a9c: 0x28062d37  slti        $a2, $zero, 0x2D37
    ctx->pc = 0x2b1a9cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11575) ? 1 : 0);
label_2b1aa0:
    // 0x2b1aa0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1aa0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1aa4:
    // 0x2b1aa4: 0x0  nop
    ctx->pc = 0x2b1aa4u;
    // NOP
label_2b1aa8:
    // 0x2b1aa8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1aa8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1aac:
    // 0x2b1aac: 0x0  nop
    ctx->pc = 0x2b1aacu;
    // NOP
label_2b1ab0:
    // 0x2b1ab0: 0x8c00a0  .word       0x008C00A0                   # add         $zero, $a0, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1ab0u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1ab4:
    // 0x2b1ab4: 0x28002c38  slti        $zero, $zero, 0x2C38
    ctx->pc = 0x2b1ab4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11320) ? 1 : 0);
label_2b1ab8:
    // 0x2b1ab8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1ab8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1abc:
    // 0x2b1abc: 0x0  nop
    ctx->pc = 0x2b1abcu;
    // NOP
label_2b1ac0:
    // 0x2b1ac0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1ac0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1ac4:
    // 0x2b1ac4: 0x0  nop
    ctx->pc = 0x2b1ac4u;
    // NOP
label_2b1ac8:
    // 0x2b1ac8: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1ac8u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1acc:
    // 0x2b1acc: 0x28002e36  slti        $zero, $zero, 0x2E36
    ctx->pc = 0x2b1accu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11830) ? 1 : 0);
label_2b1ad0:
    // 0x2b1ad0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1ad0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1ad4:
    // 0x2b1ad4: 0x0  nop
    ctx->pc = 0x2b1ad4u;
    // NOP
label_2b1ad8:
    // 0x2b1ad8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1ad8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1adc:
    // 0x2b1adc: 0x0  nop
    ctx->pc = 0x2b1adcu;
    // NOP
label_2b1ae0:
    // 0x2b1ae0: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1ae0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2b1ae4:
    // 0x2b1ae4: 0x28082f35  slti        $t0, $zero, 0x2F35
    ctx->pc = 0x2b1ae4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12085) ? 1 : 0);
label_2b1ae8:
    // 0x2b1ae8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1ae8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1aec:
    // 0x2b1aec: 0x0  nop
    ctx->pc = 0x2b1aecu;
    // NOP
label_2b1af0:
    // 0x2b1af0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1af0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1af4:
    // 0x2b1af4: 0x0  nop
    ctx->pc = 0x2b1af4u;
    // NOP
label_2b1af8:
    // 0x2b1af8: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1af8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b1afc:
    // 0x2b1afc: 0x2814372d  slti        $s4, $zero, 0x372D
    ctx->pc = 0x2b1afcu;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)14125) ? 1 : 0);
label_2b1b00:
    // 0x2b1b00: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b00u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b04:
    // 0x2b1b04: 0x0  nop
    ctx->pc = 0x2b1b04u;
    // NOP
label_2b1b08:
    // 0x2b1b08: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b08u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b0c:
    // 0x2b1b0c: 0x0  nop
    ctx->pc = 0x2b1b0cu;
    // NOP
label_2b1b10:
    // 0x2b1b10: 0x960096  .word       0x00960096                   # dsrlv       $zero, $s6, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) >> (GPR_U32(ctx, 4) & 0x3F));
label_2b1b14:
    // 0x2b1b14: 0x28083034  slti        $t0, $zero, 0x3034
    ctx->pc = 0x2b1b14u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12340) ? 1 : 0);
label_2b1b18:
    // 0x2b1b18: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b18u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b1c:
    // 0x2b1b1c: 0x0  nop
    ctx->pc = 0x2b1b1cu;
    // NOP
label_2b1b20:
    // 0x2b1b20: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b24:
    // 0x2b1b24: 0x0  nop
    ctx->pc = 0x2b1b24u;
    // NOP
label_2b1b28:
    // 0x2b1b28: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b28u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1b2c:
    // 0x2b1b2c: 0x28002e36  slti        $zero, $zero, 0x2E36
    ctx->pc = 0x2b1b2cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11830) ? 1 : 0);
label_2b1b30:
    // 0x2b1b30: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b30u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b34:
    // 0x2b1b34: 0x0  nop
    ctx->pc = 0x2b1b34u;
    // NOP
label_2b1b38:
    // 0x2b1b38: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b38u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b3c:
    // 0x2b1b3c: 0x0  nop
    ctx->pc = 0x2b1b3cu;
    // NOP
label_2b1b40:
    // 0x2b1b40: 0xa0008c  .word       0x00A0008C                   # syscall     2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b40u;
    ctx->pc = 0x2B1B44u;
runtime->handleSyscall(rdram, ctx, 0x28002u);
label_2b1b44:
    // 0x2b1b44: 0x28063430  slti        $a2, $zero, 0x3430
    ctx->pc = 0x2b1b44u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13360) ? 1 : 0);
label_2b1b48:
    // 0x2b1b48: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b48u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b4c:
    // 0x2b1b4c: 0x0  nop
    ctx->pc = 0x2b1b4cu;
    // NOP
label_2b1b50:
    // 0x2b1b50: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b54:
    // 0x2b1b54: 0x0  nop
    ctx->pc = 0x2b1b54u;
    // NOP
label_2b1b58:
    // 0x2b1b58: 0xa0008c  .word       0x00A0008C                   # syscall     2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b58u;
    ctx->pc = 0x2B1B5Cu;
runtime->handleSyscall(rdram, ctx, 0x28002u);
label_2b1b5c:
    // 0x2b1b5c: 0x2824352f  slti        $a0, $at, 0x352F
    ctx->pc = 0x2b1b5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)13615) ? 1 : 0);
label_2b1b60:
    // 0x2b1b60: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b60u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b64:
    // 0x2b1b64: 0x0  nop
    ctx->pc = 0x2b1b64u;
    // NOP
label_2b1b68:
    // 0x2b1b68: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b68u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b6c:
    // 0x2b1b6c: 0x0  nop
    ctx->pc = 0x2b1b6cu;
    // NOP
label_2b1b70:
    // 0x2b1b70: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b70u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1b74:
    // 0x2b1b74: 0x28182f35  slti        $t8, $zero, 0x2F35
    ctx->pc = 0x2b1b74u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)12085) ? 1 : 0);
label_2b1b78:
    // 0x2b1b78: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b78u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b7c:
    // 0x2b1b7c: 0x0  nop
    ctx->pc = 0x2b1b7cu;
    // NOP
label_2b1b80:
    // 0x2b1b80: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b84:
    // 0x2b1b84: 0x0  nop
    ctx->pc = 0x2b1b84u;
    // NOP
label_2b1b88:
    // 0x2b1b88: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1b88u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b1b8c:
    // 0x2b1b8c: 0x281a362e  slti        $k0, $zero, 0x362E
    ctx->pc = 0x2b1b8cu;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13870) ? 1 : 0);
label_2b1b90:
    // 0x2b1b90: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1b90u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1b94:
    // 0x2b1b94: 0x0  nop
    ctx->pc = 0x2b1b94u;
    // NOP
label_2b1b98:
    // 0x2b1b98: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1b98u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1b9c:
    // 0x2b1b9c: 0x0  nop
    ctx->pc = 0x2b1b9cu;
    // NOP
label_2b1ba0:
    // 0x2b1ba0: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1ba0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b1ba4:
    // 0x2b1ba4: 0x281c362e  slti        $gp, $zero, 0x362E
    ctx->pc = 0x2b1ba4u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)13870) ? 1 : 0);
label_2b1ba8:
    // 0x2b1ba8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1ba8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1bac:
    // 0x2b1bac: 0x0  nop
    ctx->pc = 0x2b1bacu;
    // NOP
label_2b1bb0:
    // 0x2b1bb0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1bb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1bb4:
    // 0x2b1bb4: 0x0  nop
    ctx->pc = 0x2b1bb4u;
    // NOP
label_2b1bb8:
    // 0x2b1bb8: 0x8c00a0  .word       0x008C00A0                   # add         $zero, $a0, $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1bb8u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1bbc:
    // 0x2b1bbc: 0x281e2d37  slti        $fp, $zero, 0x2D37
    ctx->pc = 0x2b1bbcu;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)11575) ? 1 : 0);
label_2b1bc0:
    // 0x2b1bc0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1bc0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1bc4:
    // 0x2b1bc4: 0x0  nop
    ctx->pc = 0x2b1bc4u;
    // NOP
label_2b1bc8:
    // 0x2b1bc8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1bc8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1bcc:
    // 0x2b1bcc: 0x0  nop
    ctx->pc = 0x2b1bccu;
    // NOP
label_2b1bd0:
    // 0x2b1bd0: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1bd0u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1bd4:
    // 0x2b1bd4: 0x28202e36  slti        $zero, $at, 0x2E36
    ctx->pc = 0x2b1bd4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)11830) ? 1 : 0);
label_2b1bd8:
    // 0x2b1bd8: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1bd8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1bdc:
    // 0x2b1bdc: 0x0  nop
    ctx->pc = 0x2b1bdcu;
    // NOP
label_2b1be0:
    // 0x2b1be0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1be0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1be4:
    // 0x2b1be4: 0x0  nop
    ctx->pc = 0x2b1be4u;
    // NOP
label_2b1be8:
    // 0x2b1be8: 0x8700a5  .word       0x008700A5                   # or          $zero, $a0, $a3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1be8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_2b1bec:
    // 0x2b1bec: 0x28222d37  slti        $v0, $at, 0x2D37
    ctx->pc = 0x2b1becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)11575) ? 1 : 0);
label_2b1bf0:
    // 0x2b1bf0: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1bf0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1bf4:
    // 0x2b1bf4: 0x0  nop
    ctx->pc = 0x2b1bf4u;
    // NOP
label_2b1bf8:
    // 0x2b1bf8: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1bf8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1bfc:
    // 0x2b1bfc: 0x0  nop
    ctx->pc = 0x2b1bfcu;
    // NOP
label_2b1c00:
    // 0x2b1c00: 0xaf007d  .word       0x00AF007D                   # INVALID     $a1, $t7, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B1C00 raw=0x00AF007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1c04:
    // 0x2b1c04: 0x2824382c  slti        $a0, $at, 0x382C
    ctx->pc = 0x2b1c04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)14380) ? 1 : 0);
label_2b1c08:
    // 0x2b1c08: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c08u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c0c:
    // 0x2b1c0c: 0x0  nop
    ctx->pc = 0x2b1c0cu;
    // NOP
label_2b1c10:
    // 0x2b1c10: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c14:
    // 0x2b1c14: 0x0  nop
    ctx->pc = 0x2b1c14u;
    // NOP
label_2b1c18:
    // 0x2b1c18: 0x7800b4  teq         $v1, $t8, 2
    ctx->pc = 0x2b1c18u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_2b1c1c:
    // 0x2b1c1c: 0x2826283c  slti        $a2, $at, 0x283C
    ctx->pc = 0x2b1c1cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10300) ? 1 : 0);
label_2b1c20:
    // 0x2b1c20: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c20u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c24:
    // 0x2b1c24: 0x0  nop
    ctx->pc = 0x2b1c24u;
    // NOP
label_2b1c28:
    // 0x2b1c28: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c28u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c2c:
    // 0x2b1c2c: 0x0  nop
    ctx->pc = 0x2b1c2cu;
    // NOP
label_2b1c30:
    // 0x2b1c30: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c30u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1c34:
    // 0x2b1c34: 0x28283034  slti        $t0, $at, 0x3034
    ctx->pc = 0x2b1c34u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)12340) ? 1 : 0);
label_2b1c38:
    // 0x2b1c38: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c38u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c3c:
    // 0x2b1c3c: 0x0  nop
    ctx->pc = 0x2b1c3cu;
    // NOP
label_2b1c40:
    // 0x2b1c40: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c44:
    // 0x2b1c44: 0x0  nop
    ctx->pc = 0x2b1c44u;
    // NOP
label_2b1c48:
    // 0x2b1c48: 0xa0008c  .word       0x00A0008C                   # syscall     2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c48u;
    ctx->pc = 0x2B1C4Cu;
runtime->handleSyscall(rdram, ctx, 0x28002u);
label_2b1c4c:
    // 0x2b1c4c: 0x282a3430  slti        $t2, $at, 0x3430
    ctx->pc = 0x2b1c4cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)13360) ? 1 : 0);
label_2b1c50:
    // 0x2b1c50: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c50u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c54:
    // 0x2b1c54: 0x0  nop
    ctx->pc = 0x2b1c54u;
    // NOP
label_2b1c58:
    // 0x2b1c58: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c58u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c5c:
    // 0x2b1c5c: 0x0  nop
    ctx->pc = 0x2b1c5cu;
    // NOP
label_2b1c60:
    // 0x2b1c60: 0xa50087  .word       0x00A50087                   # srav        $zero, $a1, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c60u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 5) & 0x1F));
label_2b1c64:
    // 0x2b1c64: 0x282a362e  slti        $t2, $at, 0x362E
    ctx->pc = 0x2b1c64u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)13870) ? 1 : 0);
label_2b1c68:
    // 0x2b1c68: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c68u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c6c:
    // 0x2b1c6c: 0x0  nop
    ctx->pc = 0x2b1c6cu;
    // NOP
label_2b1c70:
    // 0x2b1c70: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c70u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c74:
    // 0x2b1c74: 0x0  nop
    ctx->pc = 0x2b1c74u;
    // NOP
label_2b1c78:
    // 0x2b1c78: 0x91009b  .word       0x0091009B                   # divu        $zero, $a0, $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c78u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b1c7c:
    // 0x2b1c7c: 0x282c2e36  slti        $t4, $at, 0x2E36
    ctx->pc = 0x2b1c7cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)11830) ? 1 : 0);
label_2b1c80:
    // 0x2b1c80: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c80u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c84:
    // 0x2b1c84: 0x0  nop
    ctx->pc = 0x2b1c84u;
    // NOP
label_2b1c88:
    // 0x2b1c88: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1c88u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1c8c:
    // 0x2b1c8c: 0x0  nop
    ctx->pc = 0x2b1c8cu;
    // NOP
label_2b1c90:
    // 0x2b1c90: 0xa0008c  .word       0x00A0008C                   # syscall     2 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1c90u;
    ctx->pc = 0x2B1C94u;
runtime->handleSyscall(rdram, ctx, 0x28002u);
label_2b1c94:
    // 0x2b1c94: 0x282e352f  slti        $t6, $at, 0x352F
    ctx->pc = 0x2b1c94u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)13615) ? 1 : 0);
label_2b1c98:
    // 0x2b1c98: 0x28282828  slti        $t0, $at, 0x2828
    ctx->pc = 0x2b1c98u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)10280) ? 1 : 0);
label_2b1c9c:
    // 0x2b1c9c: 0x0  nop
    ctx->pc = 0x2b1c9cu;
    // NOP
label_2b1ca0:
    // 0x2b1ca0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2b1ca0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1ca4:
    // 0x2b1ca4: 0x0  nop
    ctx->pc = 0x2b1ca4u;
    // NOP
label_2b1ca8:
    // 0x2b1ca8: 0x0  nop
    ctx->pc = 0x2b1ca8u;
    // NOP
label_2b1cac:
    // 0x2b1cac: 0x0  nop
    ctx->pc = 0x2b1cacu;
    // NOP
label_2b1cb0:
    // 0x2b1cb0: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1cb0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1cb4:
    // 0x2b1cb4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2b1cb4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2b1cb8:
    // 0x2b1cb8: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2b1cb8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2b1cbc:
    // 0x2b1cbc: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1cbcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2b1cc0:
    // 0x2b1cc0: 0x96  .word       0x00000096                   # dsrlv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1cc0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2b1cc4:
    // 0x2b1cc4: 0x0  nop
    ctx->pc = 0x2b1cc4u;
    // NOP
label_2b1cc8:
    // 0x2b1cc8: 0x0  nop
    ctx->pc = 0x2b1cc8u;
    // NOP
label_2b1ccc:
    // 0x2b1ccc: 0x0  nop
    ctx->pc = 0x2b1cccu;
    // NOP
label_2b1cd0:
    // 0x2b1cd0: 0xbc  dsll32      $zero, $zero, 2
    ctx->pc = 0x2b1cd0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 2));
label_2b1cd4:
    // 0x2b1cd4: 0xca  .word       0x000000CA                   # movz        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1cd4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2b1cd8:
    // 0x2b1cd8: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x2b1cd8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_2b1cdc:
    // 0x2b1cdc: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x2b1cdcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2b1ce0:
    // 0x2b1ce0: 0xc6  .word       0x000000C6                   # srlv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1ce0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2b1ce4:
    // 0x2b1ce4: 0x0  nop
    ctx->pc = 0x2b1ce4u;
    // NOP
label_2b1ce8:
    // 0x2b1ce8: 0x0  nop
    ctx->pc = 0x2b1ce8u;
    // NOP
label_2b1cec:
    // 0x2b1cec: 0x0  nop
    ctx->pc = 0x2b1cecu;
    // NOP
label_2b1cf0:
    // 0x2b1cf0: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x2b1cf0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_2b1cf4:
    // 0x2b1cf4: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x2b1cf4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1cf8:
    // 0x2b1cf8: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b1cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2b1cfc:
    // 0x2b1cfc: 0x48  .word       0x00000048                   # jr          $zero # 00000040 <InstrIdType: CPU_SPECIAL>
label_2b1d00:
    if (ctx->pc == 0x2B1D00u) {
        ctx->pc = 0x2B1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CFCu;
        // 0x2b1d00: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D04u;
        goto label_2b1d04;
    }
    ctx->pc = 0x2B1CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2B1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1CFCu;
        // 0x2b1d00: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1CFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B1D04u;
label_2b1d04:
    // 0x2b1d04: 0x0  nop
    ctx->pc = 0x2b1d04u;
    // NOP
label_2b1d08:
    // 0x2b1d08: 0x0  nop
    ctx->pc = 0x2b1d08u;
    // NOP
label_2b1d0c:
    // 0x2b1d0c: 0x0  nop
    ctx->pc = 0x2b1d0cu;
    // NOP
label_2b1d10:
    // 0x2b1d10: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x2b1d10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_2b1d14:
    // 0x2b1d14: 0x86  .word       0x00000086                   # srlv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1d14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2b1d18:
    // 0x2b1d18: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x2b1d18u;
    
label_2b1d1c:
    // 0x2b1d1c: 0x7a  dsrl        $zero, $zero, 1
    ctx->pc = 0x2b1d1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 1);
label_2b1d20:
    // 0x2b1d20: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1d20u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2b1d24:
    // 0x2b1d24: 0x0  nop
    ctx->pc = 0x2b1d24u;
    // NOP
label_2b1d28:
    // 0x2b1d28: 0x0  nop
    ctx->pc = 0x2b1d28u;
    // NOP
label_2b1d2c:
    // 0x2b1d2c: 0x0  nop
    ctx->pc = 0x2b1d2cu;
    // NOP
label_2b1d30:
    // 0x2b1d30: 0xc090304  jal         func_240C10
label_2b1d34:
    if (ctx->pc == 0x2B1D34u) {
        ctx->pc = 0x2B1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D30u;
        // 0x2b1d34: 0x30b0b09  .word       0x030B0B09                   # jalr        $at, $t8 # 000B0300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $1, $24 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D38u;
        goto label_2b1d38;
    }
    ctx->pc = 0x2B1D30u;
    SET_GPR_U32(ctx, 31, 0x2B1D38u);
    ctx->pc = 0x2B1D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D30u;
    // 0x2b1d34: 0x30b0b09  .word       0x030B0B09                   # jalr        $at, $t8 # 000B0300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    // JALR $1, $24 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x240C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240C10u, 0x2B1D30u, 0x2B1D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D38u;
label_2b1d38:
    // 0x2b1d38: 0xc080606  jal         func_201818
label_2b1d3c:
    if (ctx->pc == 0x2B1D3Cu) {
        ctx->pc = 0x2B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D38u;
        // 0x2b1d3c: 0x8030703  j           func_0C1C0C (Delay Slot)
        // J 0xC1C0C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D40u;
        goto label_2b1d40;
    }
    ctx->pc = 0x2B1D38u;
    SET_GPR_U32(ctx, 31, 0x2B1D40u);
    ctx->pc = 0x2B1D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D38u;
    // 0x2b1d3c: 0x8030703  j           func_0C1C0C (Delay Slot)
    // J 0xC1C0C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x201818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201818u, 0x2B1D38u, 0x2B1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D40u;
label_2b1d40:
    // 0x2b1d40: 0xc0d070c  jal         func_341C30
label_2b1d44:
    if (ctx->pc == 0x2B1D44u) {
        ctx->pc = 0x2B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D40u;
        // 0x2b1d44: 0xd0c0c0c  jal         func_4303030 (Delay Slot)
        // JAL 0x4303030 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D48u;
        goto label_2b1d48;
    }
    ctx->pc = 0x2B1D40u;
    SET_GPR_U32(ctx, 31, 0x2B1D48u);
    ctx->pc = 0x2B1D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D40u;
    // 0x2b1d44: 0xd0c0c0c  jal         func_4303030 (Delay Slot)
    // JAL 0x4303030 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C30u, 0x2B1D40u, 0x2B1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D48u;
label_2b1d48:
    // 0x2b1d48: 0x3030c0c  .word       0x03030C0C                   # syscall     48 # 03030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1d48u;
    ctx->pc = 0x2B1D4Cu;
runtime->handleSyscall(rdram, ctx, 0xC0C30u);
label_2b1d4c:
    // 0x2b1d4c: 0xb0d0d0c  j           func_C343430
label_2b1d50:
    if (ctx->pc == 0x2B1D50u) {
        ctx->pc = 0x2B1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D4Cu;
        // 0x2b1d50: 0x100e1010  beq         $zero, $t6, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x2B1D50 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D54u;
        goto label_2b1d54;
    }
    ctx->pc = 0x2B1D4Cu;
    ctx->pc = 0x2B1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D4Cu;
    // 0x2b1d50: 0x100e1010  beq         $zero, $t6, . + 4 + (0x1010 << 2) (Delay Slot)
    // Likely branch instruction at 0x2B1D50 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC343430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC343430u, 0x2B1D4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B1D54u;
label_2b1d54:
    // 0x2b1d54: 0x100c0e0e  beq         $zero, $t4, . + 4 + (0xE0E << 2)
label_2b1d58:
    if (ctx->pc == 0x2B1D58u) {
        ctx->pc = 0x2B1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D54u;
        // 0x2b1d58: 0xe0b030e  jal         func_82C0C38 (Delay Slot)
        // JAL 0x82C0C38 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D5Cu;
        goto label_2b1d5c;
    }
    ctx->pc = 0x2B1D54u;
    {
        const bool branch_taken_0x2b1d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D54u;
        // 0x2b1d58: 0xe0b030e  jal         func_82C0C38 (Delay Slot)
        // JAL 0x82C0C38 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d54) {
            ctx->pc = 0x2B5590u;
            { ctx->pc = 0x2b5590; return; }
        }
    }
    ctx->pc = 0x2B1D5Cu;
label_2b1d5c:
    // 0x2b1d5c: 0xf0e100c  jal         func_C384030
label_2b1d60:
    if (ctx->pc == 0x2B1D60u) {
        ctx->pc = 0x2B1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D5Cu;
        // 0x2b1d60: 0xe0f100d  jal         func_83C4034 (Delay Slot)
        // JAL 0x83C4034 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D64u;
        goto label_2b1d64;
    }
    ctx->pc = 0x2B1D5Cu;
    SET_GPR_U32(ctx, 31, 0x2B1D64u);
    ctx->pc = 0x2B1D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D5Cu;
    // 0x2b1d60: 0xe0f100d  jal         func_83C4034 (Delay Slot)
    // JAL 0x83C4034 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC384030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC384030u, 0x2B1D5Cu, 0x2B1D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D64u;
label_2b1d64:
    // 0x2b1d64: 0x10100e0f  beq         $zero, $s0, . + 4 + (0xE0F << 2)
label_2b1d68:
    if (ctx->pc == 0x2B1D68u) {
        ctx->pc = 0x2B1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D64u;
        // 0x2b1d68: 0x50e1010  tnei        $t0, 0x1010 (Delay Slot)
        if (GPR_S64(ctx, 8) != (int64_t)(int32_t)4112) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D6Cu;
        goto label_2b1d6c;
    }
    ctx->pc = 0x2B1D64u;
    {
        const bool branch_taken_0x2b1d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D64u;
        // 0x2b1d68: 0x50e1010  tnei        $t0, 0x1010 (Delay Slot)
        if (GPR_S64(ctx, 8) != (int64_t)(int32_t)4112) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d64) {
            ctx->pc = 0x2B55A4u;
            { ctx->pc = 0x2b55a4; return; }
        }
    }
    ctx->pc = 0x2B1D6Cu;
label_2b1d6c:
    // 0x2b1d6c: 0xd0a0610  jal         func_4281840
label_2b1d70:
    if (ctx->pc == 0x2B1D70u) {
        ctx->pc = 0x2B1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D6Cu;
        // 0x2b1d70: 0xc0c0d04  jal         func_303410 (Delay Slot)
        // JAL 0x303410 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D74u;
        goto label_2b1d74;
    }
    ctx->pc = 0x2B1D6Cu;
    SET_GPR_U32(ctx, 31, 0x2B1D74u);
    ctx->pc = 0x2B1D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D6Cu;
    // 0x2b1d70: 0xc0c0d04  jal         func_303410 (Delay Slot)
    // JAL 0x303410 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4281840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4281840u, 0x2B1D6Cu, 0x2B1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D74u;
label_2b1d74:
    // 0x2b1d74: 0xb070c0c  j           func_C1C3030
label_2b1d78:
    if (ctx->pc == 0x2B1D78u) {
        ctx->pc = 0x2B1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D74u;
        // 0x2b1d78: 0xb05040a  j           func_C141028 (Delay Slot)
        // J 0xC141028 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D7Cu;
        goto label_2b1d7c;
    }
    ctx->pc = 0x2B1D74u;
    ctx->pc = 0x2B1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D74u;
    // 0x2b1d78: 0xb05040a  j           func_C141028 (Delay Slot)
    // J 0xC141028 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xC1C3030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC1C3030u, 0x2B1D74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B1D7Cu;
label_2b1d7c:
    // 0x2b1d7c: 0xc0a1004  jal         func_284010
label_2b1d80:
    if (ctx->pc == 0x2B1D80u) {
        ctx->pc = 0x2B1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D7Cu;
        // 0x2b1d80: 0xb070b0c  j           func_C1C2C30 (Delay Slot)
        // J 0xC1C2C30 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D84u;
        goto label_2b1d84;
    }
    ctx->pc = 0x2B1D7Cu;
    SET_GPR_U32(ctx, 31, 0x2B1D84u);
    ctx->pc = 0x2B1D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1D7Cu;
    // 0x2b1d80: 0xb070b0c  j           func_C1C2C30 (Delay Slot)
    // J 0xC1C2C30 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x284010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284010u, 0x2B1D7Cu, 0x2B1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1D84u;
label_2b1d84:
    // 0x2b1d84: 0x100c0b07  beq         $zero, $t4, . + 4 + (0xB07 << 2)
label_2b1d88:
    if (ctx->pc == 0x2B1D88u) {
        ctx->pc = 0x2B1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D84u;
        // 0x2b1d88: 0x60b0c0c  tltiu       $s0, 0xC0C (Delay Slot)
        if (GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3084) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1D8Cu;
        goto label_2b1d8c;
    }
    ctx->pc = 0x2B1D84u;
    {
        const bool branch_taken_0x2b1d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D84u;
        // 0x2b1d88: 0x60b0c0c  tltiu       $s0, 0xC0C (Delay Slot)
        if (GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3084) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1d84) {
            ctx->pc = 0x2B49A4u;
            { ctx->pc = 0x2b49a4; return; }
        }
    }
    ctx->pc = 0x2B1D8Cu;
label_2b1d8c:
    // 0x2b1d8c: 0x40a0503  tlti        $zero, 0x503
    ctx->pc = 0x2b1d8cu;
    if (GPR_S64(ctx, 0) < (int64_t)(int32_t)1283) { runtime->handleTrap(rdram, ctx); }
label_2b1d90:
    // 0x2b1d90: 0x50000  sll         $zero, $a1, 0
    ctx->pc = 0x2b1d90u;
    
label_2b1d94:
    // 0x2b1d94: 0x40005  .word       0x00040005                   # INVALID     $zero, $a0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1d94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B1D94 raw=0x00040005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1d98:
    // 0x2b1d98: 0x20009  .word       0x00020009                   # jalr        $zero, $zero # 00020000 <InstrIdType: CPU_SPECIAL>
label_2b1d9c:
    if (ctx->pc == 0x2B1D9Cu) {
        ctx->pc = 0x2B1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D98u;
        // 0x2b1d9c: 0x4000b  movn        $zero, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1DA0u;
        goto label_2b1da0;
    }
    ctx->pc = 0x2B1D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2B1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1D98u;
        // 0x2b1d9c: 0x4000b  movn        $zero, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1D98u, 0x2B1DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1DA0u;
label_2b1da0:
    // 0x2b1da0: 0x5000f  .word       0x0005000F                   # sync # 00050000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1da0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2b1da4:
    // 0x2b1da4: 0x30014  dsllv       $zero, $v1, $zero
    ctx->pc = 0x2b1da4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) << (GPR_U32(ctx, 0) & 0x3F));
label_2b1da8:
    // 0x2b1da8: 0x30017  dsrav       $zero, $v1, $zero
    ctx->pc = 0x2b1da8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_2b1dac:
    // 0x2b1dac: 0x2001a  div         $zero, $zero, $v0
    ctx->pc = 0x2b1dacu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2b1db0:
    // 0x2b1db0: 0x4001c  dmult       $zero, $a0
    ctx->pc = 0x2b1db0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B1DB0 raw=0x0004001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1db4:
    // 0x2b1db4: 0x50020  add         $zero, $zero, $a1
    ctx->pc = 0x2b1db4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1db8:
    // 0x2b1db8: 0x40025  or          $zero, $zero, $a0
    ctx->pc = 0x2b1db8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 4));
label_2b1dbc:
    // 0x2b1dbc: 0x50029  .word       0x00050029                   # mtsa        $zero # 00050000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b1dbcu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2b1dc0:
    // 0x2b1dc0: 0x4002e  dsub        $zero, $zero, $a0
    ctx->pc = 0x2b1dc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b1dc4:
    // 0x2b1dc4: 0x80032  tlt         $zero, $t0, 0
    ctx->pc = 0x2b1dc4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_2b1dc8:
    // 0x2b1dc8: 0x3003a  dsrl        $zero, $v1, 0
    ctx->pc = 0x2b1dc8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) >> 0);
label_2b1dcc:
    // 0x2b1dcc: 0x4003d  .word       0x0004003D                   # INVALID     $zero, $a0, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1dccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B1DCC raw=0x0004003D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1dd0:
    // 0x2b1dd0: 0x30041  .word       0x00030041                   # INVALID     $zero, $v1, 0x41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1dd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B1DD0 raw=0x00030041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1dd4:
    // 0x2b1dd4: 0x50044  .word       0x00050044                   # sllv        $zero, $a1, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1dd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 0) & 0x1F));
label_2b1dd8:
    // 0x2b1dd8: 0x0  nop
    ctx->pc = 0x2b1dd8u;
    // NOP
label_2b1ddc:
    // 0x2b1ddc: 0x0  nop
    ctx->pc = 0x2b1ddcu;
    // NOP
label_2b1de0:
    // 0x2b1de0: 0x40049  .word       0x00040049                   # jalr        $zero, $zero # 00040040 <InstrIdType: CPU_SPECIAL>
label_2b1de4:
    if (ctx->pc == 0x2B1DE4u) {
        ctx->pc = 0x2B1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DE0u;
        // 0x2b1de4: 0x4004d  break       4, 1 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1DE8u;
        goto label_2b1de8;
    }
    ctx->pc = 0x2B1DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2B1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1DE0u;
        // 0x2b1de4: 0x4004d  break       4, 1 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1DE0u, 0x2B1DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1DE8u;
label_2b1de8:
    // 0x2b1de8: 0x50051  .word       0x00050051                   # mthi        $zero # 00050040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1de8u;
    ctx->hi = GPR_U64(ctx, 0);
label_2b1dec:
    // 0x2b1dec: 0x70056  .word       0x00070056                   # dsrlv       $zero, $a3, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1decu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 0) & 0x3F));
label_2b1df0:
    // 0x2b1df0: 0x3005d  .word       0x0003005D                   # dmultu      $zero, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1df0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2B1DF0 raw=0x0003005D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1df4:
    // 0x2b1df4: 0x30060  .word       0x00030060                   # add         $zero, $zero, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1df4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b1df8:
    // 0x2b1df8: 0x30063  .word       0x00030063                   # negu        $zero, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1df8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2b1dfc:
    // 0x2b1dfc: 0x30066  .word       0x00030066                   # xor         $zero, $zero, $v1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1dfcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 3));
label_2b1e00:
    // 0x2b1e00: 0x60069  .word       0x00060069                   # mtsa        $zero # 00060040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b1e00u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2b1e04:
    // 0x2b1e04: 0x4006f  .word       0x0004006F                   # dsubu       $zero, $zero, $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1e04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
label_2b1e08:
    // 0x2b1e08: 0x10073  tltu        $zero, $at, 1
    ctx->pc = 0x2b1e08u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2b1e0c:
    // 0x2b1e0c: 0x30074  teq         $zero, $v1, 1
    ctx->pc = 0x2b1e0cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2b1e10:
    // 0x2b1e10: 0x30077  .word       0x00030077                   # INVALID     $zero, $v1, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1e10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2B1E10 raw=0x00030077"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1e14:
    // 0x2b1e14: 0x2007a  dsrl        $zero, $v0, 1
    ctx->pc = 0x2b1e14u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) >> 1);
label_2b1e18:
    // 0x2b1e18: 0x3007c  dsll32      $zero, $v1, 1
    ctx->pc = 0x2b1e18u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) << (32 + 1));
label_2b1e1c:
    // 0x2b1e1c: 0x4007f  dsra32      $zero, $a0, 1
    ctx->pc = 0x2b1e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (32 + 1));
label_2b1e20:
    // 0x2b1e20: 0x40083  sra         $zero, $a0, 2
    ctx->pc = 0x2b1e20u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 2));
label_2b1e24:
    // 0x2b1e24: 0x60087  .word       0x00060087                   # srav        $zero, $a2, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1e24u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 0) & 0x1F));
label_2b1e28:
    // 0x2b1e28: 0x3008d  break       3, 2
    ctx->pc = 0x2b1e28u;
    runtime->handleBreak(rdram, ctx);
label_2b1e2c:
    // 0x2b1e2c: 0x50090  .word       0x00050090                   # mfhi        $zero # 00050080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1e2cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2b1e30:
    // 0x2b1e30: 0x50095  .word       0x00050095                   # INVALID     $zero, $a1, 0x95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1e30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2B1E30 raw=0x00050095"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1e34:
    // 0x2b1e34: 0x4009a  .word       0x0004009A                   # div         $zero, $zero, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1e34u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2b1e38:
    // 0x2b1e38: 0x5009e  .word       0x0005009E                   # ddiv        $zero, $zero, $a1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1e38u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B1E38 raw=0x0005009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1e3c:
    // 0x2b1e3c: 0x200a3  .word       0x000200A3                   # negu        $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1e3cu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2b1e40:
    // 0x2b1e40: 0x300a5  .word       0x000300A5                   # or          $zero, $zero, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1e40u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_2b1e44:
    // 0x2b1e44: 0x300a8  .word       0x000300A8                   # mfsa        $zero # 00030080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b1e44u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2b1e48:
    // 0x2b1e48: 0x0  nop
    ctx->pc = 0x2b1e48u;
    // NOP
label_2b1e4c:
    // 0x2b1e4c: 0x0  nop
    ctx->pc = 0x2b1e4cu;
    // NOP
label_2b1e50:
    // 0x2b1e50: 0x0  nop
    ctx->pc = 0x2b1e50u;
    // NOP
label_2b1e54:
    // 0x2b1e54: 0x0  nop
    ctx->pc = 0x2b1e54u;
    // NOP
label_2b1e58:
    // 0x2b1e58: 0x0  nop
    ctx->pc = 0x2b1e58u;
    // NOP
label_2b1e5c:
    // 0x2b1e5c: 0x0  nop
    ctx->pc = 0x2b1e5cu;
    // NOP
label_2b1e60:
    // 0x2b1e60: 0x0  nop
    ctx->pc = 0x2b1e60u;
    // NOP
label_2b1e64:
    // 0x2b1e64: 0x0  nop
    ctx->pc = 0x2b1e64u;
    // NOP
label_2b1e68:
    // 0x2b1e68: 0x0  nop
    ctx->pc = 0x2b1e68u;
    // NOP
label_2b1e6c:
    // 0x2b1e6c: 0x0  nop
    ctx->pc = 0x2b1e6cu;
    // NOP
label_2b1e70:
    // 0x2b1e70: 0x0  nop
    ctx->pc = 0x2b1e70u;
    // NOP
label_2b1e74:
    // 0x2b1e74: 0x0  nop
    ctx->pc = 0x2b1e74u;
    // NOP
label_2b1e78:
    // 0x2b1e78: 0x0  nop
    ctx->pc = 0x2b1e78u;
    // NOP
label_2b1e7c:
    // 0x2b1e7c: 0x0  nop
    ctx->pc = 0x2b1e7cu;
    // NOP
label_2b1e80:
    // 0x2b1e80: 0x0  nop
    ctx->pc = 0x2b1e80u;
    // NOP
label_2b1e84:
    // 0x2b1e84: 0x0  nop
    ctx->pc = 0x2b1e84u;
    // NOP
label_2b1e88:
    // 0x2b1e88: 0x0  nop
    ctx->pc = 0x2b1e88u;
    // NOP
label_2b1e8c:
    // 0x2b1e8c: 0x0  nop
    ctx->pc = 0x2b1e8cu;
    // NOP
label_2b1e90:
    // 0x2b1e90: 0x0  nop
    ctx->pc = 0x2b1e90u;
    // NOP
label_2b1e94:
    // 0x2b1e94: 0x0  nop
    ctx->pc = 0x2b1e94u;
    // NOP
label_2b1e98:
    // 0x2b1e98: 0x0  nop
    ctx->pc = 0x2b1e98u;
    // NOP
label_2b1e9c:
    // 0x2b1e9c: 0x0  nop
    ctx->pc = 0x2b1e9cu;
    // NOP
label_2b1ea0:
    // 0x2b1ea0: 0x0  nop
    ctx->pc = 0x2b1ea0u;
    // NOP
label_2b1ea4:
    // 0x2b1ea4: 0x0  nop
    ctx->pc = 0x2b1ea4u;
    // NOP
label_2b1ea8:
    // 0x2b1ea8: 0x0  nop
    ctx->pc = 0x2b1ea8u;
    // NOP
label_2b1eac:
    // 0x2b1eac: 0x0  nop
    ctx->pc = 0x2b1eacu;
    // NOP
label_2b1eb0:
    // 0x2b1eb0: 0x0  nop
    ctx->pc = 0x2b1eb0u;
    // NOP
label_2b1eb4:
    // 0x2b1eb4: 0x0  nop
    ctx->pc = 0x2b1eb4u;
    // NOP
label_2b1eb8:
    // 0x2b1eb8: 0x0  nop
    ctx->pc = 0x2b1eb8u;
    // NOP
label_2b1ebc:
    // 0x2b1ebc: 0x0  nop
    ctx->pc = 0x2b1ebcu;
    // NOP
label_2b1ec0:
    // 0x2b1ec0: 0x0  nop
    ctx->pc = 0x2b1ec0u;
    // NOP
label_2b1ec4:
    // 0x2b1ec4: 0x0  nop
    ctx->pc = 0x2b1ec4u;
    // NOP
label_2b1ec8:
    // 0x2b1ec8: 0x0  nop
    ctx->pc = 0x2b1ec8u;
    // NOP
label_2b1ecc:
    // 0x2b1ecc: 0x0  nop
    ctx->pc = 0x2b1eccu;
    // NOP
label_2b1ed0:
    // 0x2b1ed0: 0x0  nop
    ctx->pc = 0x2b1ed0u;
    // NOP
label_2b1ed4:
    // 0x2b1ed4: 0x0  nop
    ctx->pc = 0x2b1ed4u;
    // NOP
label_2b1ed8:
    // 0x2b1ed8: 0x0  nop
    ctx->pc = 0x2b1ed8u;
    // NOP
label_2b1edc:
    // 0x2b1edc: 0x0  nop
    ctx->pc = 0x2b1edcu;
    // NOP
label_2b1ee0:
    // 0x2b1ee0: 0x0  nop
    ctx->pc = 0x2b1ee0u;
    // NOP
label_2b1ee4:
    // 0x2b1ee4: 0x0  nop
    ctx->pc = 0x2b1ee4u;
    // NOP
label_2b1ee8:
    // 0x2b1ee8: 0x0  nop
    ctx->pc = 0x2b1ee8u;
    // NOP
label_2b1eec:
    // 0x2b1eec: 0x0  nop
    ctx->pc = 0x2b1eecu;
    // NOP
label_2b1ef0:
    // 0x2b1ef0: 0x0  nop
    ctx->pc = 0x2b1ef0u;
    // NOP
label_2b1ef4:
    // 0x2b1ef4: 0x0  nop
    ctx->pc = 0x2b1ef4u;
    // NOP
label_2b1ef8:
    // 0x2b1ef8: 0x0  nop
    ctx->pc = 0x2b1ef8u;
    // NOP
label_2b1efc:
    // 0x2b1efc: 0x0  nop
    ctx->pc = 0x2b1efcu;
    // NOP
label_2b1f00:
    // 0x2b1f00: 0x10000001  b           . + 4 + (0x1 << 2)
label_2b1f04:
    if (ctx->pc == 0x2B1F04u) {
        ctx->pc = 0x2B1F08u;
        goto label_2b1f08;
    }
    ctx->pc = 0x2B1F00u;
    {
        const bool branch_taken_0x2b1f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1f00) {
            ctx->pc = 0x2B1F08u;
            goto label_2b1f08;
        }
    }
    ctx->pc = 0x2B1F08u;
label_2b1f08:
    // 0x2b1f08: 0x0  nop
    ctx->pc = 0x2b1f08u;
    // NOP
label_2b1f0c:
    // 0x2b1f0c: 0x0  nop
    ctx->pc = 0x2b1f0cu;
    // NOP
label_2b1f10:
    // 0x2b1f10: 0x1000404  .word       0x01000404                   # sllv        $zero, $zero, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1f10u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b1f14:
    // 0x2b1f14: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x2b1f14u;
    // NOP (addi to $zero)
label_2b1f18:
    // 0x2b1f18: 0x0  nop
    ctx->pc = 0x2b1f18u;
    // NOP
label_2b1f1c:
    // 0x2b1f1c: 0x5000000  bltz        $t0, . + 4 + (0x0 << 2)
label_2b1f20:
    if (ctx->pc == 0x2B1F20u) {
        ctx->pc = 0x2B1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F1Cu;
        // 0x2b1f20: 0x10000119  b           . + 4 + (0x119 << 2) (Delay Slot)
        // Likely branch instruction at 0x2B1F20 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1F24u;
        goto label_2b1f24;
    }
    ctx->pc = 0x2B1F1Cu;
    {
        const bool branch_taken_0x2b1f1c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2B1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1F1Cu;
        // 0x2b1f20: 0x10000119  b           . + 4 + (0x119 << 2) (Delay Slot)
        // Likely branch instruction at 0x2B1F20 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f1c) {
            ctx->pc = 0x2B1F20u;
            goto label_2b1f20;
        }
    }
    ctx->pc = 0x2B1F24u;
label_2b1f24:
    // 0x2b1f24: 0x0  nop
    ctx->pc = 0x2b1f24u;
    // NOP
label_2b1f28:
    // 0x2b1f28: 0x0  nop
    ctx->pc = 0x2b1f28u;
    // NOP
label_2b1f2c:
    // 0x2b1f2c: 0x0  nop
    ctx->pc = 0x2b1f2cu;
    // NOP
label_2b1f30:
    // 0x2b1f30: 0x0  nop
    ctx->pc = 0x2b1f30u;
    // NOP
label_2b1f34:
    // 0x2b1f34: 0x4a000000  vaddx       $vf0, $vf0, $vf0x
    ctx->pc = 0x2b1f34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2b1f38:
    // 0x2b1f38: 0x40000024  .word       0x40000024                   # mfc0        $zero, Index # 00000024 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b1f38u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b1f3c:
    // 0x2b1f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f40:
    // 0x2b1f40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b1f40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b1f44:
    // 0x2b1f44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f48:
    // 0x2b1f48: 0x4000008e  .word       0x4000008E                   # mfc0        $zero, Index # 0000008E <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b1f48u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b1f4c:
    // 0x2b1f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f50:
    // 0x2b1f50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b1f50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b1f54:
    // 0x2b1f54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f58:
    // 0x2b1f58: 0x40000128  .word       0x40000128                   # mfc0        $zero, Index # 00000128 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b1f58u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b1f5c:
    // 0x2b1f5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f60:
    // 0x2b1f60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b1f60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b1f64:
    // 0x2b1f64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f68:
    // 0x2b1f68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b1f68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b1f6c:
    // 0x2b1f6c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b1f6cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b1f70:
    // 0x2b1f70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b1f70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b1f74:
    // 0x2b1f74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f78:
    // 0x2b1f78: 0x40000194  .word       0x40000194                   # mfc0        $zero, Index # 00000194 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b1f78u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b1f7c:
    // 0x2b1f7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f80:
    // 0x2b1f80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b1f80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b1f84:
    // 0x2b1f84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f88:
    // 0x2b1f88: 0x400001d7  .word       0x400001D7                   # mfc0        $zero, Index # 000001D7 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b1f88u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b1f8c:
    // 0x2b1f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f90:
    // 0x2b1f90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b1f90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b1f94:
    // 0x2b1f94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1f98:
    // 0x2b1f98: 0x40000004  .word       0x40000004                   # mfc0        $zero, Index # 00000004 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b1f98u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b1f9c:
    // 0x2b1f9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1f9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1fa0:
    // 0x2b1fa0: 0x4a800000  vaddx.y     $vf0, $vf0, $vf0x
    ctx->pc = 0x2b1fa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2b1fa4:
    // 0x2b1fa4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b1fa4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b1fa8:
    // 0x2b1fa8: 0x40000002  .word       0x40000002                   # mfc0        $zero, Index # 00000002 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b1fa8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b1fac:
    // 0x2b1fac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1facu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1fb0:
    // 0x2b1fb0: 0x4a7fdc00  vaddx.zw    $vf16, $vf27, $vf31x
    ctx->pc = 0x2b1fb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
label_2b1fb4:
    // 0x2b1fb4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b1fb4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b1fb8:
    // 0x2b1fb8: 0x4a800000  vaddx.y     $vf0, $vf0, $vf0x
    ctx->pc = 0x2b1fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2b1fbc:
    // 0x2b1fbc: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b1fbcu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b1fc0:
    // 0x2b1fc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b1fc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b1fc4:
    // 0x2b1fc4: 0x20005e  .word       0x0020005E                   # ddiv        $zero, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1fc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B1FC4 raw=0x0020005E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1fc8:
    // 0x2b1fc8: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b1fc8u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B1FC8 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b1fcc:
    // 0x2b1fcc: 0x81e0076c  lb          $zero, 0x76C($t7)
    ctx->pc = 0x2b1fccu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 1900)));
label_2b1fd0:
    // 0x2b1fd0: 0x10020003  beq         $zero, $v0, . + 4 + (0x3 << 2)
label_2b1fd4:
    if (ctx->pc == 0x2B1FD4u) {
        ctx->pc = 0x2B1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FD0u;
        // 0x2b1fd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1FD8u;
        goto label_2b1fd8;
    }
    ctx->pc = 0x2B1FD0u;
    {
        const bool branch_taken_0x2b1fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FD0u;
        // 0x2b1fd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fd0) {
            ctx->pc = 0x2B1FE0u;
            goto label_2b1fe0;
        }
    }
    ctx->pc = 0x2B1FD8u;
label_2b1fd8:
    // 0x2b1fd8: 0x81e4137c  lb          $a0, 0x137C($t7)
    ctx->pc = 0x2b1fd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b1fdc:
    // 0x2b1fdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1fdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1fe0:
    // 0x2b1fe0: 0x2200800  .word       0x02200800                   # sll         $at, $zero, 0 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b1fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2b1fe4:
    // 0x2b1fe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1fe8:
    // 0x2b1fe8: 0x81e5137c  lb          $a1, 0x137C($t7)
    ctx->pc = 0x2b1fe8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b1fec:
    // 0x2b1fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1ff0:
    // 0x2b1ff0: 0x81e6137c  lb          $a2, 0x137C($t7)
    ctx->pc = 0x2b1ff0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b1ff4:
    // 0x2b1ff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1ff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b1ff8:
    // 0x2b1ff8: 0x81e7137c  lb          $a3, 0x137C($t7)
    ctx->pc = 0x2b1ff8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b1ffc:
    // 0x2b1ffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b1ffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2000:
    // 0x2b2000: 0x81e8137c  lb          $t0, 0x137C($t7)
    ctx->pc = 0x2b2000u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2004:
    // 0x2b2004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2008:
    // 0x2b2008: 0x81e9137c  lb          $t1, 0x137C($t7)
    ctx->pc = 0x2b2008u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b200c:
    // 0x2b200c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b200cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2010:
    // 0x2b2010: 0x81ea137c  lb          $t2, 0x137C($t7)
    ctx->pc = 0x2b2010u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2014:
    // 0x2b2014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2018:
    // 0x2b2018: 0x81eb137c  lb          $t3, 0x137C($t7)
    ctx->pc = 0x2b2018u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b201c:
    // 0x2b201c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b201cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2020:
    // 0x2b2020: 0x81ec137c  lb          $t4, 0x137C($t7)
    ctx->pc = 0x2b2020u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2024:
    // 0x2b2024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2028:
    // 0x2b2028: 0x81ed137c  lb          $t5, 0x137C($t7)
    ctx->pc = 0x2b2028u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b202c:
    // 0x2b202c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b202cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2030:
    // 0x2b2030: 0x81ee137c  lb          $t6, 0x137C($t7)
    ctx->pc = 0x2b2030u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2034:
    // 0x2b2034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2038:
    // 0x2b2038: 0x81ef137c  lb          $t7, 0x137C($t7)
    ctx->pc = 0x2b2038u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b203c:
    // 0x2b203c: 0x1e0ef62  .word       0x01E0EF62                   # sub         $sp, $t7, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b203cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 15), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_2b2040:
    // 0x2b2040: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2b2044:
    if (ctx->pc == 0x2B2044u) {
        ctx->pc = 0x2B2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2040u;
        // 0x2b2044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2048u;
        goto label_2b2048;
    }
    ctx->pc = 0x2B2040u;
    {
        const bool branch_taken_0x2b2040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2040u;
        // 0x2b2044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2040) {
            ctx->pc = 0x2B2044u;
            goto label_2b2044;
        }
    }
    ctx->pc = 0x2B2048u;
label_2b2048:
    // 0x2b2048: 0x1fe0001  .word       0x01FE0001                   # INVALID     $t7, $fp, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2048u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B2048 raw=0x01FE0001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b204c:
    // 0x2b204c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b204cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2050:
    // 0x2b2050: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2050u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2054:
    // 0x2b2054: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b2054u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b2058:
    // 0x2b2058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b205c:
    // 0x2b205c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b205cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2060:
    // 0x2b2060: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
label_2b2064:
    if (ctx->pc == 0x2B2064u) {
        ctx->pc = 0x2B2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2060u;
        // 0x2b2064: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2068u;
        goto label_2b2068;
    }
    ctx->pc = 0x2B2060u;
    {
        const bool branch_taken_0x2b2060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2060u;
        // 0x2b2064: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2060) {
            ctx->pc = 0x2B2080u;
            goto label_2b2080;
        }
    }
    ctx->pc = 0x2B2068u;
label_2b2068:
    // 0x2b2068: 0x81e8137c  lb          $t0, 0x137C($t7)
    ctx->pc = 0x2b2068u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b206c:
    // 0x2b206c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b206cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2070:
    // 0x2b2070: 0x81e9137c  lb          $t1, 0x137C($t7)
    ctx->pc = 0x2b2070u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2074:
    // 0x2b2074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2078:
    // 0x2b2078: 0x81ea137c  lb          $t2, 0x137C($t7)
    ctx->pc = 0x2b2078u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b207c:
    // 0x2b207c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b207cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2080:
    // 0x2b2080: 0x81eb137c  lb          $t3, 0x137C($t7)
    ctx->pc = 0x2b2080u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2084:
    // 0x2b2084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2088:
    // 0x2b2088: 0x81ec137c  lb          $t4, 0x137C($t7)
    ctx->pc = 0x2b2088u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b208c:
    // 0x2b208c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b208cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2090:
    // 0x2b2090: 0x81ed137c  lb          $t5, 0x137C($t7)
    ctx->pc = 0x2b2090u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2094:
    // 0x2b2094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2098:
    // 0x2b2098: 0x81ee137c  lb          $t6, 0x137C($t7)
    ctx->pc = 0x2b2098u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b209c:
    // 0x2b209c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b209cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b20a0:
    // 0x2b20a0: 0x81ef137c  lb          $t7, 0x137C($t7)
    ctx->pc = 0x2b20a0u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b20a4:
    // 0x2b20a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b20a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b20a8:
    // 0x2b20a8: 0x841000f  j           func_104003C
label_2b20ac:
    if (ctx->pc == 0x2B20ACu) {
        ctx->pc = 0x2B20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20A8u;
        // 0x2b20ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B20B0u;
        goto label_2b20b0;
    }
    ctx->pc = 0x2B20A8u;
    ctx->pc = 0x2B20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B20A8u;
    // 0x2b20ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104003Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104003Cu, 0x2B20A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B20B0u;
label_2b20b0:
    // 0x2b20b0: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
label_2b20b4:
    if (ctx->pc == 0x2B20B4u) {
        ctx->pc = 0x2B20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20B0u;
        // 0x2b20b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B20B8u;
        goto label_2b20b8;
    }
    ctx->pc = 0x2B20B0u;
    {
        const bool branch_taken_0x2b20b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20B0u;
        // 0x2b20b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20b0) {
            ctx->pc = 0x2B20F4u;
            goto label_2b20f4;
        }
    }
    ctx->pc = 0x2B20B8u;
label_2b20b8:
    // 0x2b20b8: 0x100300e4  beq         $zero, $v1, . + 4 + (0xE4 << 2)
label_2b20bc:
    if (ctx->pc == 0x2B20BCu) {
        ctx->pc = 0x2B20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20B8u;
        // 0x2b20bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B20C0u;
        goto label_2b20c0;
    }
    ctx->pc = 0x2B20B8u;
    {
        const bool branch_taken_0x2b20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20B8u;
        // 0x2b20bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20b8) {
            ctx->pc = 0x2B244Cu;
            { ctx->pc = 0x2b244c; return; }
        }
    }
    ctx->pc = 0x2B20C0u;
label_2b20c0:
    // 0x2b20c0: 0x10040010  beq         $zero, $a0, . + 4 + (0x10 << 2)
label_2b20c4:
    if (ctx->pc == 0x2B20C4u) {
        ctx->pc = 0x2B20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20C0u;
        // 0x2b20c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B20C8u;
        goto label_2b20c8;
    }
    ctx->pc = 0x2B20C0u;
    {
        const bool branch_taken_0x2b20c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B20C0u;
        // 0x2b20c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b20c0) {
            ctx->pc = 0x2B2104u;
            goto label_2b2104;
        }
    }
    ctx->pc = 0x2B20C8u;
label_2b20c8:
    // 0x2b20c8: 0x81f0137c  lb          $s0, 0x137C($t7)
    ctx->pc = 0x2b20c8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b20cc:
    // 0x2b20cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b20ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b20d0:
    // 0x2b20d0: 0x81f1137c  lb          $s1, 0x137C($t7)
    ctx->pc = 0x2b20d0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b20d4:
    // 0x2b20d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b20d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b20d8:
    // 0x2b20d8: 0x81f2137c  lb          $s2, 0x137C($t7)
    ctx->pc = 0x2b20d8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b20dc:
    // 0x2b20dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b20dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b20e0:
    // 0x2b20e0: 0x81f3137c  lb          $s3, 0x137C($t7)
    ctx->pc = 0x2b20e0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b20e4:
    // 0x2b20e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b20e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b20e8:
    // 0x2b20e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b20e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b20ec:
    // 0x2b20ec: 0x1f041bc  .word       0x01F041BC                   # dsll32      $t0, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b20ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) << (32 + 6));
label_2b20f0:
    // 0x2b20f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b20f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b20f4:
    // 0x2b20f4: 0x1f048bd  .word       0x01F048BD                   # INVALID     $t7, $s0, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b20f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B20F4 raw=0x01F048BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b20f8:
    // 0x2b20f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b20f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b20fc:
    // 0x2b20fc: 0x1f050be  .word       0x01F050BE                   # dsrl32      $t2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b20fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) >> (32 + 2));
label_2b2100:
    // 0x2b2100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2104:
    // 0x2b2104: 0x1f05d0b  .word       0x01F05D0B                   # movn        $t3, $t7, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2104u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2108:
    // 0x2b2108: 0x80010ff2  lb          $at, 0xFF2($zero)
    ctx->pc = 0x2b2108u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0xFF2u));
label_2b210c:
    // 0x2b210c: 0x1f021bc  .word       0x01F021BC                   # dsll32      $a0, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b210cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 6));
label_2b2110:
    // 0x2b2110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2114:
    // 0x2b2114: 0x1f028bd  .word       0x01F028BD                   # INVALID     $t7, $s0, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2114u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2114 raw=0x01F028BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2118:
    // 0x2b2118: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2118u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b211c:
    // 0x2b211c: 0x1f030be  .word       0x01F030BE                   # dsrl32      $a2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b211cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 2));
label_2b2120:
    // 0x2b2120: 0x81e4a37d  lb          $a0, -0x5C83($t7)
    ctx->pc = 0x2b2120u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b2124:
    // 0x2b2124: 0x1f03e0b  .word       0x01F03E0B                   # movn        $a3, $t7, $s0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2124u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2128:
    // 0x2b2128: 0x81f0137c  lb          $s0, 0x137C($t7)
    ctx->pc = 0x2b2128u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b212c:
    // 0x2b212c: 0x1f141bc  .word       0x01F141BC                   # dsll32      $t0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b212cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 6));
label_2b2130:
    // 0x2b2130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2134:
    // 0x2b2134: 0x1f148bd  .word       0x01F148BD                   # INVALID     $t7, $s1, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2134u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2134 raw=0x01F148BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2138:
    // 0x2b2138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b213c:
    // 0x2b213c: 0x1f150be  .word       0x01F150BE                   # dsrl32      $t2, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b213cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2140:
    // 0x2b2140: 0x81e3c37d  lb          $v1, -0x3C83($t7)
    ctx->pc = 0x2b2140u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b2144:
    // 0x2b2144: 0x1f15d4b  .word       0x01F15D4B                   # movn        $t3, $t7, $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2144u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
    ctx->pc = 0x2b2148u;
    return;
}

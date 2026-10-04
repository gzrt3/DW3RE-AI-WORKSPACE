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


void FUN_0019b5e8_part147(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e2a88u: goto label_1e2a88;
        case 0x1e2a8cu: goto label_1e2a8c;
        case 0x1e2a90u: goto label_1e2a90;
        case 0x1e2a94u: goto label_1e2a94;
        case 0x1e2a98u: goto label_1e2a98;
        case 0x1e2a9cu: goto label_1e2a9c;
        case 0x1e2aa0u: goto label_1e2aa0;
        case 0x1e2aa4u: goto label_1e2aa4;
        case 0x1e2aa8u: goto label_1e2aa8;
        case 0x1e2aacu: goto label_1e2aac;
        case 0x1e2ab0u: goto label_1e2ab0;
        case 0x1e2ab4u: goto label_1e2ab4;
        case 0x1e2ab8u: goto label_1e2ab8;
        case 0x1e2abcu: goto label_1e2abc;
        case 0x1e2ac0u: goto label_1e2ac0;
        case 0x1e2ac4u: goto label_1e2ac4;
        case 0x1e2ac8u: goto label_1e2ac8;
        case 0x1e2accu: goto label_1e2acc;
        case 0x1e2ad0u: goto label_1e2ad0;
        case 0x1e2ad4u: goto label_1e2ad4;
        case 0x1e2ad8u: goto label_1e2ad8;
        case 0x1e2adcu: goto label_1e2adc;
        case 0x1e2ae0u: goto label_1e2ae0;
        case 0x1e2ae4u: goto label_1e2ae4;
        case 0x1e2ae8u: goto label_1e2ae8;
        case 0x1e2aecu: goto label_1e2aec;
        case 0x1e2af0u: goto label_1e2af0;
        case 0x1e2af4u: goto label_1e2af4;
        case 0x1e2af8u: goto label_1e2af8;
        case 0x1e2afcu: goto label_1e2afc;
        case 0x1e2b00u: goto label_1e2b00;
        case 0x1e2b04u: goto label_1e2b04;
        case 0x1e2b08u: goto label_1e2b08;
        case 0x1e2b0cu: goto label_1e2b0c;
        case 0x1e2b10u: goto label_1e2b10;
        case 0x1e2b14u: goto label_1e2b14;
        case 0x1e2b18u: goto label_1e2b18;
        case 0x1e2b1cu: goto label_1e2b1c;
        case 0x1e2b20u: goto label_1e2b20;
        case 0x1e2b24u: goto label_1e2b24;
        case 0x1e2b28u: goto label_1e2b28;
        case 0x1e2b2cu: goto label_1e2b2c;
        case 0x1e2b30u: goto label_1e2b30;
        case 0x1e2b34u: goto label_1e2b34;
        case 0x1e2b38u: goto label_1e2b38;
        case 0x1e2b3cu: goto label_1e2b3c;
        case 0x1e2b40u: goto label_1e2b40;
        case 0x1e2b44u: goto label_1e2b44;
        case 0x1e2b48u: goto label_1e2b48;
        case 0x1e2b4cu: goto label_1e2b4c;
        case 0x1e2b50u: goto label_1e2b50;
        case 0x1e2b54u: goto label_1e2b54;
        case 0x1e2b58u: goto label_1e2b58;
        case 0x1e2b5cu: goto label_1e2b5c;
        case 0x1e2b60u: goto label_1e2b60;
        case 0x1e2b64u: goto label_1e2b64;
        case 0x1e2b68u: goto label_1e2b68;
        case 0x1e2b6cu: goto label_1e2b6c;
        case 0x1e2b70u: goto label_1e2b70;
        case 0x1e2b74u: goto label_1e2b74;
        case 0x1e2b78u: goto label_1e2b78;
        case 0x1e2b7cu: goto label_1e2b7c;
        case 0x1e2b80u: goto label_1e2b80;
        case 0x1e2b84u: goto label_1e2b84;
        case 0x1e2b88u: goto label_1e2b88;
        case 0x1e2b8cu: goto label_1e2b8c;
        case 0x1e2b90u: goto label_1e2b90;
        case 0x1e2b94u: goto label_1e2b94;
        case 0x1e2b98u: goto label_1e2b98;
        case 0x1e2b9cu: goto label_1e2b9c;
        case 0x1e2ba0u: goto label_1e2ba0;
        case 0x1e2ba4u: goto label_1e2ba4;
        case 0x1e2ba8u: goto label_1e2ba8;
        case 0x1e2bacu: goto label_1e2bac;
        case 0x1e2bb0u: goto label_1e2bb0;
        case 0x1e2bb4u: goto label_1e2bb4;
        case 0x1e2bb8u: goto label_1e2bb8;
        case 0x1e2bbcu: goto label_1e2bbc;
        case 0x1e2bc0u: goto label_1e2bc0;
        case 0x1e2bc4u: goto label_1e2bc4;
        case 0x1e2bc8u: goto label_1e2bc8;
        case 0x1e2bccu: goto label_1e2bcc;
        case 0x1e2bd0u: goto label_1e2bd0;
        case 0x1e2bd4u: goto label_1e2bd4;
        case 0x1e2bd8u: goto label_1e2bd8;
        case 0x1e2bdcu: goto label_1e2bdc;
        case 0x1e2be0u: goto label_1e2be0;
        case 0x1e2be4u: goto label_1e2be4;
        case 0x1e2be8u: goto label_1e2be8;
        case 0x1e2becu: goto label_1e2bec;
        case 0x1e2bf0u: goto label_1e2bf0;
        case 0x1e2bf4u: goto label_1e2bf4;
        case 0x1e2bf8u: goto label_1e2bf8;
        case 0x1e2bfcu: goto label_1e2bfc;
        case 0x1e2c00u: goto label_1e2c00;
        case 0x1e2c04u: goto label_1e2c04;
        case 0x1e2c08u: goto label_1e2c08;
        case 0x1e2c0cu: goto label_1e2c0c;
        case 0x1e2c10u: goto label_1e2c10;
        case 0x1e2c14u: goto label_1e2c14;
        case 0x1e2c18u: goto label_1e2c18;
        case 0x1e2c1cu: goto label_1e2c1c;
        case 0x1e2c20u: goto label_1e2c20;
        case 0x1e2c24u: goto label_1e2c24;
        case 0x1e2c28u: goto label_1e2c28;
        case 0x1e2c2cu: goto label_1e2c2c;
        case 0x1e2c30u: goto label_1e2c30;
        case 0x1e2c34u: goto label_1e2c34;
        case 0x1e2c38u: goto label_1e2c38;
        case 0x1e2c3cu: goto label_1e2c3c;
        case 0x1e2c40u: goto label_1e2c40;
        case 0x1e2c44u: goto label_1e2c44;
        case 0x1e2c48u: goto label_1e2c48;
        case 0x1e2c4cu: goto label_1e2c4c;
        case 0x1e2c50u: goto label_1e2c50;
        case 0x1e2c54u: goto label_1e2c54;
        case 0x1e2c58u: goto label_1e2c58;
        case 0x1e2c5cu: goto label_1e2c5c;
        case 0x1e2c60u: goto label_1e2c60;
        case 0x1e2c64u: goto label_1e2c64;
        case 0x1e2c68u: goto label_1e2c68;
        case 0x1e2c6cu: goto label_1e2c6c;
        case 0x1e2c70u: goto label_1e2c70;
        case 0x1e2c74u: goto label_1e2c74;
        case 0x1e2c78u: goto label_1e2c78;
        case 0x1e2c7cu: goto label_1e2c7c;
        case 0x1e2c80u: goto label_1e2c80;
        case 0x1e2c84u: goto label_1e2c84;
        case 0x1e2c88u: goto label_1e2c88;
        case 0x1e2c8cu: goto label_1e2c8c;
        case 0x1e2c90u: goto label_1e2c90;
        case 0x1e2c94u: goto label_1e2c94;
        case 0x1e2c98u: goto label_1e2c98;
        case 0x1e2c9cu: goto label_1e2c9c;
        case 0x1e2ca0u: goto label_1e2ca0;
        case 0x1e2ca4u: goto label_1e2ca4;
        case 0x1e2ca8u: goto label_1e2ca8;
        case 0x1e2cacu: goto label_1e2cac;
        case 0x1e2cb0u: goto label_1e2cb0;
        case 0x1e2cb4u: goto label_1e2cb4;
        case 0x1e2cb8u: goto label_1e2cb8;
        case 0x1e2cbcu: goto label_1e2cbc;
        case 0x1e2cc0u: goto label_1e2cc0;
        case 0x1e2cc4u: goto label_1e2cc4;
        case 0x1e2cc8u: goto label_1e2cc8;
        case 0x1e2cccu: goto label_1e2ccc;
        case 0x1e2cd0u: goto label_1e2cd0;
        case 0x1e2cd4u: goto label_1e2cd4;
        case 0x1e2cd8u: goto label_1e2cd8;
        case 0x1e2cdcu: goto label_1e2cdc;
        case 0x1e2ce0u: goto label_1e2ce0;
        case 0x1e2ce4u: goto label_1e2ce4;
        case 0x1e2ce8u: goto label_1e2ce8;
        case 0x1e2cecu: goto label_1e2cec;
        case 0x1e2cf0u: goto label_1e2cf0;
        case 0x1e2cf4u: goto label_1e2cf4;
        case 0x1e2cf8u: goto label_1e2cf8;
        case 0x1e2cfcu: goto label_1e2cfc;
        case 0x1e2d00u: goto label_1e2d00;
        case 0x1e2d04u: goto label_1e2d04;
        case 0x1e2d08u: goto label_1e2d08;
        case 0x1e2d0cu: goto label_1e2d0c;
        case 0x1e2d10u: goto label_1e2d10;
        case 0x1e2d14u: goto label_1e2d14;
        case 0x1e2d18u: goto label_1e2d18;
        case 0x1e2d1cu: goto label_1e2d1c;
        case 0x1e2d20u: goto label_1e2d20;
        case 0x1e2d24u: goto label_1e2d24;
        case 0x1e2d28u: goto label_1e2d28;
        case 0x1e2d2cu: goto label_1e2d2c;
        case 0x1e2d30u: goto label_1e2d30;
        case 0x1e2d34u: goto label_1e2d34;
        case 0x1e2d38u: goto label_1e2d38;
        case 0x1e2d3cu: goto label_1e2d3c;
        case 0x1e2d40u: goto label_1e2d40;
        case 0x1e2d44u: goto label_1e2d44;
        case 0x1e2d48u: goto label_1e2d48;
        case 0x1e2d4cu: goto label_1e2d4c;
        case 0x1e2d50u: goto label_1e2d50;
        case 0x1e2d54u: goto label_1e2d54;
        case 0x1e2d58u: goto label_1e2d58;
        case 0x1e2d5cu: goto label_1e2d5c;
        case 0x1e2d60u: goto label_1e2d60;
        case 0x1e2d64u: goto label_1e2d64;
        case 0x1e2d68u: goto label_1e2d68;
        case 0x1e2d6cu: goto label_1e2d6c;
        case 0x1e2d70u: goto label_1e2d70;
        case 0x1e2d74u: goto label_1e2d74;
        case 0x1e2d78u: goto label_1e2d78;
        case 0x1e2d7cu: goto label_1e2d7c;
        case 0x1e2d80u: goto label_1e2d80;
        case 0x1e2d84u: goto label_1e2d84;
        case 0x1e2d88u: goto label_1e2d88;
        case 0x1e2d8cu: goto label_1e2d8c;
        case 0x1e2d90u: goto label_1e2d90;
        case 0x1e2d94u: goto label_1e2d94;
        case 0x1e2d98u: goto label_1e2d98;
        case 0x1e2d9cu: goto label_1e2d9c;
        case 0x1e2da0u: goto label_1e2da0;
        case 0x1e2da4u: goto label_1e2da4;
        case 0x1e2da8u: goto label_1e2da8;
        case 0x1e2dacu: goto label_1e2dac;
        case 0x1e2db0u: goto label_1e2db0;
        case 0x1e2db4u: goto label_1e2db4;
        case 0x1e2db8u: goto label_1e2db8;
        case 0x1e2dbcu: goto label_1e2dbc;
        case 0x1e2dc0u: goto label_1e2dc0;
        case 0x1e2dc4u: goto label_1e2dc4;
        case 0x1e2dc8u: goto label_1e2dc8;
        case 0x1e2dccu: goto label_1e2dcc;
        case 0x1e2dd0u: goto label_1e2dd0;
        case 0x1e2dd4u: goto label_1e2dd4;
        case 0x1e2dd8u: goto label_1e2dd8;
        case 0x1e2ddcu: goto label_1e2ddc;
        case 0x1e2de0u: goto label_1e2de0;
        case 0x1e2de4u: goto label_1e2de4;
        case 0x1e2de8u: goto label_1e2de8;
        case 0x1e2decu: goto label_1e2dec;
        case 0x1e2df0u: goto label_1e2df0;
        case 0x1e2df4u: goto label_1e2df4;
        case 0x1e2df8u: goto label_1e2df8;
        case 0x1e2dfcu: goto label_1e2dfc;
        case 0x1e2e00u: goto label_1e2e00;
        case 0x1e2e04u: goto label_1e2e04;
        case 0x1e2e08u: goto label_1e2e08;
        case 0x1e2e0cu: goto label_1e2e0c;
        case 0x1e2e10u: goto label_1e2e10;
        case 0x1e2e14u: goto label_1e2e14;
        case 0x1e2e18u: goto label_1e2e18;
        case 0x1e2e1cu: goto label_1e2e1c;
        case 0x1e2e20u: goto label_1e2e20;
        case 0x1e2e24u: goto label_1e2e24;
        case 0x1e2e28u: goto label_1e2e28;
        case 0x1e2e2cu: goto label_1e2e2c;
        case 0x1e2e30u: goto label_1e2e30;
        case 0x1e2e34u: goto label_1e2e34;
        case 0x1e2e38u: goto label_1e2e38;
        case 0x1e2e3cu: goto label_1e2e3c;
        case 0x1e2e40u: goto label_1e2e40;
        case 0x1e2e44u: goto label_1e2e44;
        case 0x1e2e48u: goto label_1e2e48;
        case 0x1e2e4cu: goto label_1e2e4c;
        case 0x1e2e50u: goto label_1e2e50;
        case 0x1e2e54u: goto label_1e2e54;
        case 0x1e2e58u: goto label_1e2e58;
        case 0x1e2e5cu: goto label_1e2e5c;
        case 0x1e2e60u: goto label_1e2e60;
        case 0x1e2e64u: goto label_1e2e64;
        case 0x1e2e68u: goto label_1e2e68;
        case 0x1e2e6cu: goto label_1e2e6c;
        case 0x1e2e70u: goto label_1e2e70;
        case 0x1e2e74u: goto label_1e2e74;
        case 0x1e2e78u: goto label_1e2e78;
        case 0x1e2e7cu: goto label_1e2e7c;
        case 0x1e2e80u: goto label_1e2e80;
        case 0x1e2e84u: goto label_1e2e84;
        case 0x1e2e88u: goto label_1e2e88;
        case 0x1e2e8cu: goto label_1e2e8c;
        case 0x1e2e90u: goto label_1e2e90;
        case 0x1e2e94u: goto label_1e2e94;
        case 0x1e2e98u: goto label_1e2e98;
        case 0x1e2e9cu: goto label_1e2e9c;
        case 0x1e2ea0u: goto label_1e2ea0;
        case 0x1e2ea4u: goto label_1e2ea4;
        case 0x1e2ea8u: goto label_1e2ea8;
        case 0x1e2eacu: goto label_1e2eac;
        case 0x1e2eb0u: goto label_1e2eb0;
        case 0x1e2eb4u: goto label_1e2eb4;
        case 0x1e2eb8u: goto label_1e2eb8;
        case 0x1e2ebcu: goto label_1e2ebc;
        case 0x1e2ec0u: goto label_1e2ec0;
        case 0x1e2ec4u: goto label_1e2ec4;
        case 0x1e2ec8u: goto label_1e2ec8;
        case 0x1e2eccu: goto label_1e2ecc;
        case 0x1e2ed0u: goto label_1e2ed0;
        case 0x1e2ed4u: goto label_1e2ed4;
        case 0x1e2ed8u: goto label_1e2ed8;
        case 0x1e2edcu: goto label_1e2edc;
        case 0x1e2ee0u: goto label_1e2ee0;
        case 0x1e2ee4u: goto label_1e2ee4;
        case 0x1e2ee8u: goto label_1e2ee8;
        case 0x1e2eecu: goto label_1e2eec;
        case 0x1e2ef0u: goto label_1e2ef0;
        case 0x1e2ef4u: goto label_1e2ef4;
        case 0x1e2ef8u: goto label_1e2ef8;
        case 0x1e2efcu: goto label_1e2efc;
        case 0x1e2f00u: goto label_1e2f00;
        case 0x1e2f04u: goto label_1e2f04;
        case 0x1e2f08u: goto label_1e2f08;
        case 0x1e2f0cu: goto label_1e2f0c;
        case 0x1e2f10u: goto label_1e2f10;
        case 0x1e2f14u: goto label_1e2f14;
        case 0x1e2f18u: goto label_1e2f18;
        case 0x1e2f1cu: goto label_1e2f1c;
        case 0x1e2f20u: goto label_1e2f20;
        case 0x1e2f24u: goto label_1e2f24;
        case 0x1e2f28u: goto label_1e2f28;
        case 0x1e2f2cu: goto label_1e2f2c;
        case 0x1e2f30u: goto label_1e2f30;
        case 0x1e2f34u: goto label_1e2f34;
        case 0x1e2f38u: goto label_1e2f38;
        case 0x1e2f3cu: goto label_1e2f3c;
        case 0x1e2f40u: goto label_1e2f40;
        case 0x1e2f44u: goto label_1e2f44;
        case 0x1e2f48u: goto label_1e2f48;
        case 0x1e2f4cu: goto label_1e2f4c;
        case 0x1e2f50u: goto label_1e2f50;
        case 0x1e2f54u: goto label_1e2f54;
        case 0x1e2f58u: goto label_1e2f58;
        case 0x1e2f5cu: goto label_1e2f5c;
        case 0x1e2f60u: goto label_1e2f60;
        case 0x1e2f64u: goto label_1e2f64;
        case 0x1e2f68u: goto label_1e2f68;
        case 0x1e2f6cu: goto label_1e2f6c;
        case 0x1e2f70u: goto label_1e2f70;
        case 0x1e2f74u: goto label_1e2f74;
        case 0x1e2f78u: goto label_1e2f78;
        case 0x1e2f7cu: goto label_1e2f7c;
        case 0x1e2f80u: goto label_1e2f80;
        case 0x1e2f84u: goto label_1e2f84;
        case 0x1e2f88u: goto label_1e2f88;
        case 0x1e2f8cu: goto label_1e2f8c;
        case 0x1e2f90u: goto label_1e2f90;
        case 0x1e2f94u: goto label_1e2f94;
        case 0x1e2f98u: goto label_1e2f98;
        case 0x1e2f9cu: goto label_1e2f9c;
        case 0x1e2fa0u: goto label_1e2fa0;
        case 0x1e2fa4u: goto label_1e2fa4;
        case 0x1e2fa8u: goto label_1e2fa8;
        case 0x1e2facu: goto label_1e2fac;
        case 0x1e2fb0u: goto label_1e2fb0;
        case 0x1e2fb4u: goto label_1e2fb4;
        case 0x1e2fb8u: goto label_1e2fb8;
        case 0x1e2fbcu: goto label_1e2fbc;
        case 0x1e2fc0u: goto label_1e2fc0;
        case 0x1e2fc4u: goto label_1e2fc4;
        case 0x1e2fc8u: goto label_1e2fc8;
        case 0x1e2fccu: goto label_1e2fcc;
        case 0x1e2fd0u: goto label_1e2fd0;
        case 0x1e2fd4u: goto label_1e2fd4;
        case 0x1e2fd8u: goto label_1e2fd8;
        case 0x1e2fdcu: goto label_1e2fdc;
        case 0x1e2fe0u: goto label_1e2fe0;
        case 0x1e2fe4u: goto label_1e2fe4;
        case 0x1e2fe8u: goto label_1e2fe8;
        case 0x1e2fecu: goto label_1e2fec;
        case 0x1e2ff0u: goto label_1e2ff0;
        case 0x1e2ff4u: goto label_1e2ff4;
        case 0x1e2ff8u: goto label_1e2ff8;
        case 0x1e2ffcu: goto label_1e2ffc;
        case 0x1e3000u: goto label_1e3000;
        case 0x1e3004u: goto label_1e3004;
        case 0x1e3008u: goto label_1e3008;
        case 0x1e300cu: goto label_1e300c;
        case 0x1e3010u: goto label_1e3010;
        case 0x1e3014u: goto label_1e3014;
        case 0x1e3018u: goto label_1e3018;
        case 0x1e301cu: goto label_1e301c;
        case 0x1e3020u: goto label_1e3020;
        case 0x1e3024u: goto label_1e3024;
        case 0x1e3028u: goto label_1e3028;
        case 0x1e302cu: goto label_1e302c;
        case 0x1e3030u: goto label_1e3030;
        case 0x1e3034u: goto label_1e3034;
        case 0x1e3038u: goto label_1e3038;
        case 0x1e303cu: goto label_1e303c;
        case 0x1e3040u: goto label_1e3040;
        case 0x1e3044u: goto label_1e3044;
        case 0x1e3048u: goto label_1e3048;
        case 0x1e304cu: goto label_1e304c;
        case 0x1e3050u: goto label_1e3050;
        case 0x1e3054u: goto label_1e3054;
        case 0x1e3058u: goto label_1e3058;
        case 0x1e305cu: goto label_1e305c;
        case 0x1e3060u: goto label_1e3060;
        case 0x1e3064u: goto label_1e3064;
        case 0x1e3068u: goto label_1e3068;
        case 0x1e306cu: goto label_1e306c;
        case 0x1e3070u: goto label_1e3070;
        case 0x1e3074u: goto label_1e3074;
        case 0x1e3078u: goto label_1e3078;
        case 0x1e307cu: goto label_1e307c;
        case 0x1e3080u: goto label_1e3080;
        case 0x1e3084u: goto label_1e3084;
        case 0x1e3088u: goto label_1e3088;
        case 0x1e308cu: goto label_1e308c;
        case 0x1e3090u: goto label_1e3090;
        case 0x1e3094u: goto label_1e3094;
        case 0x1e3098u: goto label_1e3098;
        case 0x1e309cu: goto label_1e309c;
        case 0x1e30a0u: goto label_1e30a0;
        case 0x1e30a4u: goto label_1e30a4;
        case 0x1e30a8u: goto label_1e30a8;
        case 0x1e30acu: goto label_1e30ac;
        case 0x1e30b0u: goto label_1e30b0;
        case 0x1e30b4u: goto label_1e30b4;
        case 0x1e30b8u: goto label_1e30b8;
        case 0x1e30bcu: goto label_1e30bc;
        case 0x1e30c0u: goto label_1e30c0;
        case 0x1e30c4u: goto label_1e30c4;
        case 0x1e30c8u: goto label_1e30c8;
        case 0x1e30ccu: goto label_1e30cc;
        case 0x1e30d0u: goto label_1e30d0;
        case 0x1e30d4u: goto label_1e30d4;
        case 0x1e30d8u: goto label_1e30d8;
        case 0x1e30dcu: goto label_1e30dc;
        case 0x1e30e0u: goto label_1e30e0;
        case 0x1e30e4u: goto label_1e30e4;
        case 0x1e30e8u: goto label_1e30e8;
        case 0x1e30ecu: goto label_1e30ec;
        case 0x1e30f0u: goto label_1e30f0;
        case 0x1e30f4u: goto label_1e30f4;
        case 0x1e30f8u: goto label_1e30f8;
        case 0x1e30fcu: goto label_1e30fc;
        case 0x1e3100u: goto label_1e3100;
        case 0x1e3104u: goto label_1e3104;
        case 0x1e3108u: goto label_1e3108;
        case 0x1e310cu: goto label_1e310c;
        case 0x1e3110u: goto label_1e3110;
        case 0x1e3114u: goto label_1e3114;
        case 0x1e3118u: goto label_1e3118;
        case 0x1e311cu: goto label_1e311c;
        case 0x1e3120u: goto label_1e3120;
        case 0x1e3124u: goto label_1e3124;
        case 0x1e3128u: goto label_1e3128;
        case 0x1e312cu: goto label_1e312c;
        case 0x1e3130u: goto label_1e3130;
        case 0x1e3134u: goto label_1e3134;
        case 0x1e3138u: goto label_1e3138;
        case 0x1e313cu: goto label_1e313c;
        case 0x1e3140u: goto label_1e3140;
        case 0x1e3144u: goto label_1e3144;
        case 0x1e3148u: goto label_1e3148;
        case 0x1e314cu: goto label_1e314c;
        case 0x1e3150u: goto label_1e3150;
        case 0x1e3154u: goto label_1e3154;
        case 0x1e3158u: goto label_1e3158;
        case 0x1e315cu: goto label_1e315c;
        case 0x1e3160u: goto label_1e3160;
        case 0x1e3164u: goto label_1e3164;
        case 0x1e3168u: goto label_1e3168;
        case 0x1e316cu: goto label_1e316c;
        case 0x1e3170u: goto label_1e3170;
        case 0x1e3174u: goto label_1e3174;
        case 0x1e3178u: goto label_1e3178;
        case 0x1e317cu: goto label_1e317c;
        case 0x1e3180u: goto label_1e3180;
        case 0x1e3184u: goto label_1e3184;
        case 0x1e3188u: goto label_1e3188;
        case 0x1e318cu: goto label_1e318c;
        case 0x1e3190u: goto label_1e3190;
        case 0x1e3194u: goto label_1e3194;
        case 0x1e3198u: goto label_1e3198;
        case 0x1e319cu: goto label_1e319c;
        case 0x1e31a0u: goto label_1e31a0;
        case 0x1e31a4u: goto label_1e31a4;
        case 0x1e31a8u: goto label_1e31a8;
        case 0x1e31acu: goto label_1e31ac;
        case 0x1e31b0u: goto label_1e31b0;
        case 0x1e31b4u: goto label_1e31b4;
        case 0x1e31b8u: goto label_1e31b8;
        case 0x1e31bcu: goto label_1e31bc;
        case 0x1e31c0u: goto label_1e31c0;
        case 0x1e31c4u: goto label_1e31c4;
        case 0x1e31c8u: goto label_1e31c8;
        case 0x1e31ccu: goto label_1e31cc;
        case 0x1e31d0u: goto label_1e31d0;
        case 0x1e31d4u: goto label_1e31d4;
        case 0x1e31d8u: goto label_1e31d8;
        case 0x1e31dcu: goto label_1e31dc;
        case 0x1e31e0u: goto label_1e31e0;
        case 0x1e31e4u: goto label_1e31e4;
        case 0x1e31e8u: goto label_1e31e8;
        case 0x1e31ecu: goto label_1e31ec;
        case 0x1e31f0u: goto label_1e31f0;
        case 0x1e31f4u: goto label_1e31f4;
        case 0x1e31f8u: goto label_1e31f8;
        case 0x1e31fcu: goto label_1e31fc;
        case 0x1e3200u: goto label_1e3200;
        case 0x1e3204u: goto label_1e3204;
        case 0x1e3208u: goto label_1e3208;
        case 0x1e320cu: goto label_1e320c;
        case 0x1e3210u: goto label_1e3210;
        case 0x1e3214u: goto label_1e3214;
        case 0x1e3218u: goto label_1e3218;
        case 0x1e321cu: goto label_1e321c;
        case 0x1e3220u: goto label_1e3220;
        case 0x1e3224u: goto label_1e3224;
        case 0x1e3228u: goto label_1e3228;
        case 0x1e322cu: goto label_1e322c;
        case 0x1e3230u: goto label_1e3230;
        case 0x1e3234u: goto label_1e3234;
        case 0x1e3238u: goto label_1e3238;
        case 0x1e323cu: goto label_1e323c;
        case 0x1e3240u: goto label_1e3240;
        case 0x1e3244u: goto label_1e3244;
        case 0x1e3248u: goto label_1e3248;
        case 0x1e324cu: goto label_1e324c;
        case 0x1e3250u: goto label_1e3250;
        case 0x1e3254u: goto label_1e3254;
        default: return;
    }

label_1e2a88:
    if (ctx->pc == 0x1E2A88u) {
        ctx->pc = 0x1E2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A84u;
        // 0x1e2a88: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A8Cu;
        goto label_1e2a8c;
    }
    ctx->pc = 0x1E2A84u;
    {
        const bool branch_taken_0x1e2a84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A84u;
        // 0x1e2a88: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a84) {
            ctx->pc = 0x1E2AD4u;
            goto label_1e2ad4;
        }
    }
    ctx->pc = 0x1E2A8Cu;
label_1e2a8c:
    // 0x1e2a8c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1e2a90:
    // 0x1e2a90: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x1e2a90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_1e2a94:
    // 0x1e2a94: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e2a98:
    if (ctx->pc == 0x1E2A98u) {
        ctx->pc = 0x1E2A9Cu;
        goto label_1e2a9c;
    }
    ctx->pc = 0x1E2A94u;
    {
        const bool branch_taken_0x1e2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2a94) {
            ctx->pc = 0x1E2AD4u;
            goto label_1e2ad4;
        }
    }
    ctx->pc = 0x1E2A9Cu;
label_1e2a9c:
    // 0x1e2a9c: 0x0  nop
    ctx->pc = 0x1e2a9cu;
    // NOP
label_1e2aa0:
    // 0x1e2aa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e2aa4:
    // 0x1e2aa4: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
label_1e2aa8:
    if (ctx->pc == 0x1E2AA8u) {
        ctx->pc = 0x1E2AACu;
        goto label_1e2aac;
    }
    ctx->pc = 0x1E2AA4u;
    {
        const bool branch_taken_0x1e2aa4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2aa4) {
            ctx->pc = 0x1E2AD0u;
            goto label_1e2ad0;
        }
    }
    ctx->pc = 0x1E2AACu;
label_1e2aac:
    // 0x1e2aac: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2ab0:
    // 0x1e2ab0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e2ab4:
    // 0x1e2ab4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1e2ab8:
    if (ctx->pc == 0x1E2AB8u) {
        ctx->pc = 0x1E2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AB4u;
        // 0x1e2ab8: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2ABCu;
        goto label_1e2abc;
    }
    ctx->pc = 0x1E2AB4u;
    {
        const bool branch_taken_0x1e2ab4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AB4u;
        // 0x1e2ab8: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ab4) {
            ctx->pc = 0x1E2AC4u;
            goto label_1e2ac4;
        }
    }
    ctx->pc = 0x1E2ABCu;
label_1e2abc:
    // 0x1e2abc: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1e2ac0:
    // 0x1e2ac0: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1e2ac0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1e2ac4:
    // 0x1e2ac4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e2ac8:
    // 0x1e2ac8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2acc:
    if (ctx->pc == 0x1E2ACCu) {
        ctx->pc = 0x1E2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AC8u;
        // 0x1e2acc: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AD0u;
        goto label_1e2ad0;
    }
    ctx->pc = 0x1E2AC8u;
    {
        const bool branch_taken_0x1e2ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AC8u;
        // 0x1e2acc: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ac8) {
            ctx->pc = 0x1E2AD4u;
            goto label_1e2ad4;
        }
    }
    ctx->pc = 0x1E2AD0u;
label_1e2ad0:
    // 0x1e2ad0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e2ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e2ad4:
    // 0x1e2ad4: 0x0  nop
    ctx->pc = 0x1e2ad4u;
    // NOP
label_1e2ad8:
    // 0x1e2ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2adc:
    // 0x1e2adc: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_1e2ae0:
    if (ctx->pc == 0x1E2AE0u) {
        ctx->pc = 0x1E2AE4u;
        goto label_1e2ae4;
    }
    ctx->pc = 0x1E2ADCu;
    {
        const bool branch_taken_0x1e2adc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2adc) {
            ctx->pc = 0x1E2AF0u;
            goto label_1e2af0;
        }
    }
    ctx->pc = 0x1E2AE4u;
label_1e2ae4:
    // 0x1e2ae4: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x1e2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e2ae8:
    // 0x1e2ae8: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
label_1e2aec:
    if (ctx->pc == 0x1E2AECu) {
        ctx->pc = 0x1E2AF0u;
        goto label_1e2af0;
    }
    ctx->pc = 0x1E2AE8u;
    {
        const bool branch_taken_0x1e2ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1e2ae8) {
            ctx->pc = 0x1E2B08u;
            goto label_1e2b08;
        }
    }
    ctx->pc = 0x1E2AF0u;
label_1e2af0:
    // 0x1e2af0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e2af4:
    // 0x1e2af4: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
label_1e2af8:
    if (ctx->pc == 0x1E2AF8u) {
        ctx->pc = 0x1E2AFCu;
        goto label_1e2afc;
    }
    ctx->pc = 0x1E2AF4u;
    {
        const bool branch_taken_0x1e2af4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2af4) {
            ctx->pc = 0x1E2B28u;
            goto label_1e2b28;
        }
    }
    ctx->pc = 0x1E2AFCu;
label_1e2afc:
    // 0x1e2afc: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x1e2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e2b00:
    // 0x1e2b00: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_1e2b04:
    if (ctx->pc == 0x1E2B04u) {
        ctx->pc = 0x1E2B08u;
        goto label_1e2b08;
    }
    ctx->pc = 0x1E2B00u;
    {
        const bool branch_taken_0x1e2b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e2b00) {
            ctx->pc = 0x1E2B28u;
            goto label_1e2b28;
        }
    }
    ctx->pc = 0x1E2B08u;
label_1e2b08:
    // 0x1e2b08: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e2b0c:
    // 0x1e2b0c: 0xa0a30130  sb          $v1, 0x130($a1)
    ctx->pc = 0x1e2b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 3));
label_1e2b10:
    // 0x1e2b10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e2b14:
    // 0x1e2b14: 0xa0a30131  sb          $v1, 0x131($a1)
    ctx->pc = 0x1e2b14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 305), (uint8_t)GPR_U32(ctx, 3));
label_1e2b18:
    // 0x1e2b18: 0xa0a30132  sb          $v1, 0x132($a1)
    ctx->pc = 0x1e2b18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 306), (uint8_t)GPR_U32(ctx, 3));
label_1e2b1c:
    // 0x1e2b1c: 0xa0a40133  sb          $a0, 0x133($a1)
    ctx->pc = 0x1e2b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 307), (uint8_t)GPR_U32(ctx, 4));
label_1e2b20:
    // 0x1e2b20: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e2b24:
    if (ctx->pc == 0x1E2B24u) {
        ctx->pc = 0x1E2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B20u;
        // 0x1e2b24: 0xaca20134  sw          $v0, 0x134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B28u;
        goto label_1e2b28;
    }
    ctx->pc = 0x1E2B20u;
    {
        const bool branch_taken_0x1e2b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B20u;
        // 0x1e2b24: 0xaca20134  sw          $v0, 0x134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b20) {
            ctx->pc = 0x1E2B44u;
            goto label_1e2b44;
        }
    }
    ctx->pc = 0x1E2B28u;
label_1e2b28:
    // 0x1e2b28: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1e2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e2b2c:
    // 0x1e2b2c: 0xa0a30130  sb          $v1, 0x130($a1)
    ctx->pc = 0x1e2b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 3));
label_1e2b30:
    // 0x1e2b30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e2b34:
    // 0x1e2b34: 0xa0a30131  sb          $v1, 0x131($a1)
    ctx->pc = 0x1e2b34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 305), (uint8_t)GPR_U32(ctx, 3));
label_1e2b38:
    // 0x1e2b38: 0xa0a30132  sb          $v1, 0x132($a1)
    ctx->pc = 0x1e2b38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 306), (uint8_t)GPR_U32(ctx, 3));
label_1e2b3c:
    // 0x1e2b3c: 0xa0a40133  sb          $a0, 0x133($a1)
    ctx->pc = 0x1e2b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 307), (uint8_t)GPR_U32(ctx, 4));
label_1e2b40:
    // 0x1e2b40: 0xaca20134  sw          $v0, 0x134($a1)
    ctx->pc = 0x1e2b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
label_1e2b44:
    // 0x1e2b44: 0x0  nop
    ctx->pc = 0x1e2b44u;
    // NOP
label_1e2b48:
    // 0x1e2b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b4c:
    // 0x1e2b4c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1e2b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1e2b50:
    // 0x1e2b50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b54:
    // 0x1e2b54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e2b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b58:
    // 0x1e2b58: 0xc066c72  jal         func_19B1C8
label_1e2b5c:
    if (ctx->pc == 0x1E2B5Cu) {
        ctx->pc = 0x1E2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B58u;
        // 0x1e2b5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B60u;
        goto label_1e2b60;
    }
    ctx->pc = 0x1E2B58u;
    SET_GPR_U32(ctx, 31, 0x1E2B60u);
    ctx->pc = 0x1E2B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2B58u;
    // 0x1e2b5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E2B58u, 0x1E2B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B60u;
label_1e2b60:
    // 0x1e2b60: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1e2b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1e2b64:
    // 0x1e2b64: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e2b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1e2b68:
    // 0x1e2b68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e2b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e2b6c:
    // 0x1e2b6c: 0x0  nop
    ctx->pc = 0x1e2b6cu;
    // NOP
label_1e2b70:
    // 0x1e2b70: 0x8f858d30  lw          $a1, -0x72D0($gp)
    ctx->pc = 0x1e2b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
label_1e2b74:
    // 0x1e2b74: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x1e2b74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1e2b78:
    // 0x1e2b78: 0x1460feb7  bnez        $v1, . + 4 + (-0x149 << 2)
label_1e2b7c:
    if (ctx->pc == 0x1E2B7Cu) {
        ctx->pc = 0x1E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B78u;
        // 0x1e2b7c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B80u;
        goto label_1e2b80;
    }
    ctx->pc = 0x1E2B78u;
    {
        const bool branch_taken_0x1e2b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B78u;
        // 0x1e2b7c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b78) {
            ctx->pc = 0x1E2658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e2658; return; }
        }
    }
    ctx->pc = 0x1E2B80u;
label_1e2b80:
    // 0x1e2b80: 0x10000155  b           . + 4 + (0x155 << 2)
label_1e2b84:
    if (ctx->pc == 0x1E2B84u) {
        ctx->pc = 0x1E2B88u;
        goto label_1e2b88;
    }
    ctx->pc = 0x1E2B80u;
    {
        const bool branch_taken_0x1e2b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b80) {
            ctx->pc = 0x1E30D8u;
            goto label_1e30d8;
        }
    }
    ctx->pc = 0x1E2B88u;
label_1e2b88:
    // 0x1e2b88: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2b8c:
    // 0x1e2b8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e2b90:
    // 0x1e2b90: 0x10830151  beq         $a0, $v1, . + 4 + (0x151 << 2)
label_1e2b94:
    if (ctx->pc == 0x1E2B94u) {
        ctx->pc = 0x1E2B98u;
        goto label_1e2b98;
    }
    ctx->pc = 0x1E2B90u;
    {
        const bool branch_taken_0x1e2b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2b90) {
            ctx->pc = 0x1E30D8u;
            goto label_1e30d8;
        }
    }
    ctx->pc = 0x1E2B98u;
label_1e2b98:
    // 0x1e2b98: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e2b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_1e2b9c:
    // 0x1e2b9c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1e2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1e2ba0:
    // 0x1e2ba0: 0x34843ffc  ori         $a0, $a0, 0x3FFC
    ctx->pc = 0x1e2ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16380);
label_1e2ba4:
    // 0x1e2ba4: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1e2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1e2ba8:
    // 0x1e2ba8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e2ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2bac:
    // 0x1e2bac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e2bacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2bb0:
    // 0x1e2bb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e2bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2bb4:
    // 0x1e2bb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e2bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2bb8:
    // 0x1e2bb8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1e2bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e2bbc:
    // 0x1e2bbc: 0x10000141  b           . + 4 + (0x141 << 2)
label_1e2bc0:
    if (ctx->pc == 0x1E2BC0u) {
        ctx->pc = 0x1E2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BBCu;
        // 0x1e2bc0: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2BC4u;
        goto label_1e2bc4;
    }
    ctx->pc = 0x1E2BBCu;
    {
        const bool branch_taken_0x1e2bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BBCu;
        // 0x1e2bc0: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2bbc) {
            ctx->pc = 0x1E30C4u;
            goto label_1e30c4;
        }
    }
    ctx->pc = 0x1E2BC4u;
label_1e2bc4:
    // 0x1e2bc4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e2bc8:
    // 0x1e2bc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e2bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e2bcc:
    // 0x1e2bcc: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e2bd0:
    // 0x1e2bd0: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1e2bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e2bd4:
    // 0x1e2bd4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e2bd8:
    // 0x1e2bd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e2bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e2bdc:
    // 0x1e2bdc: 0x24450000  addiu       $a1, $v0, 0x0
    ctx->pc = 0x1e2bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e2be0:
    // 0x1e2be0: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x1e2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1e2be4:
    // 0x1e2be4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e2be8:
    // 0x1e2be8: 0x8f878d3c  lw          $a3, -0x72C4($gp)
    ctx->pc = 0x1e2be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2bec:
    // 0x1e2bec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1e2becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1e2bf0:
    // 0x1e2bf0: 0x244300b0  addiu       $v1, $v0, 0xB0
    ctx->pc = 0x1e2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_1e2bf4:
    // 0x1e2bf4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1e2bf8:
    // 0x1e2bf8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1e2bfc:
    // 0x1e2bfc: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
label_1e2c00:
    if (ctx->pc == 0x1E2C00u) {
        ctx->pc = 0x1E2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BFCu;
        // 0x1e2c00: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C04u;
        goto label_1e2c04;
    }
    ctx->pc = 0x1E2BFCu;
    {
        const bool branch_taken_0x1e2bfc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BFCu;
        // 0x1e2c00: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2bfc) {
            ctx->pc = 0x1E2C34u;
            goto label_1e2c34;
        }
    }
    ctx->pc = 0x1E2C04u;
label_1e2c04:
    // 0x1e2c04: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2c08:
    // 0x1e2c08: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e2c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e2c0c:
    // 0x1e2c0c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1e2c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e2c10:
    // 0x1e2c10: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1e2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1e2c14:
    // 0x1e2c14: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e2c18:
    // 0x1e2c18: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e2c1c:
    // 0x1e2c1c: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
label_1e2c20:
    if (ctx->pc == 0x1E2C20u) {
        ctx->pc = 0x1E2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C1Cu;
        // 0x1e2c20: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C24u;
        goto label_1e2c24;
    }
    ctx->pc = 0x1E2C1Cu;
    {
        const bool branch_taken_0x1e2c1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C1Cu;
        // 0x1e2c20: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c1c) {
            ctx->pc = 0x1E2C6Cu;
            goto label_1e2c6c;
        }
    }
    ctx->pc = 0x1E2C24u;
label_1e2c24:
    // 0x1e2c24: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1e2c28:
    // 0x1e2c28: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x1e2c28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_1e2c2c:
    // 0x1e2c2c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e2c30:
    if (ctx->pc == 0x1E2C30u) {
        ctx->pc = 0x1E2C34u;
        goto label_1e2c34;
    }
    ctx->pc = 0x1E2C2Cu;
    {
        const bool branch_taken_0x1e2c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c2c) {
            ctx->pc = 0x1E2C6Cu;
            goto label_1e2c6c;
        }
    }
    ctx->pc = 0x1E2C34u;
label_1e2c34:
    // 0x1e2c34: 0x0  nop
    ctx->pc = 0x1e2c34u;
    // NOP
label_1e2c38:
    // 0x1e2c38: 0x14e4000b  bne         $a3, $a0, . + 4 + (0xB << 2)
label_1e2c3c:
    if (ctx->pc == 0x1E2C3Cu) {
        ctx->pc = 0x1E2C40u;
        goto label_1e2c40;
    }
    ctx->pc = 0x1E2C38u;
    {
        const bool branch_taken_0x1e2c38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e2c38) {
            ctx->pc = 0x1E2C68u;
            goto label_1e2c68;
        }
    }
    ctx->pc = 0x1E2C40u;
label_1e2c40:
    // 0x1e2c40: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x1e2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2c44:
    // 0x1e2c44: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1e2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1e2c48:
    // 0x1e2c48: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e2c4c:
    // 0x1e2c4c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e2c50:
    // 0x1e2c50: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1e2c54:
    if (ctx->pc == 0x1E2C54u) {
        ctx->pc = 0x1E2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C50u;
        // 0x1e2c54: 0x220c3  sra         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C58u;
        goto label_1e2c58;
    }
    ctx->pc = 0x1E2C50u;
    {
        const bool branch_taken_0x1e2c50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C50u;
        // 0x1e2c54: 0x220c3  sra         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c50) {
            ctx->pc = 0x1E2C6Cu;
            goto label_1e2c6c;
        }
    }
    ctx->pc = 0x1E2C58u;
label_1e2c58:
    // 0x1e2c58: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1e2c5c:
    // 0x1e2c5c: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x1e2c5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
label_1e2c60:
    // 0x1e2c60: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2c64:
    if (ctx->pc == 0x1E2C64u) {
        ctx->pc = 0x1E2C68u;
        goto label_1e2c68;
    }
    ctx->pc = 0x1E2C60u;
    {
        const bool branch_taken_0x1e2c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c60) {
            ctx->pc = 0x1E2C6Cu;
            goto label_1e2c6c;
        }
    }
    ctx->pc = 0x1E2C68u;
label_1e2c68:
    // 0x1e2c68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e2c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2c6c:
    // 0x1e2c6c: 0x0  nop
    ctx->pc = 0x1e2c6cu;
    // NOP
label_1e2c70:
    // 0x1e2c70: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x1e2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_1e2c74:
    // 0x1e2c74: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1e2c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e2c78:
    // 0x1e2c78: 0x24070384  addiu       $a3, $zero, 0x384
    ctx->pc = 0x1e2c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e2c7c:
    // 0x1e2c7c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1e2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e2c80:
    // 0x1e2c80: 0x24886c00  addiu       $t0, $a0, 0x6C00
    ctx->pc = 0x1e2c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1e2c84:
    // 0x1e2c84: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1e2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1e2c88:
    // 0x1e2c88: 0xa4a80080  sh          $t0, 0x80($a1)
    ctx->pc = 0x1e2c88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 128), (uint16_t)GPR_U32(ctx, 8));
label_1e2c8c:
    // 0x1e2c8c: 0xa4a20082  sh          $v0, 0x82($a1)
    ctx->pc = 0x1e2c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 130), (uint16_t)GPR_U32(ctx, 2));
label_1e2c90:
    // 0x1e2c90: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1e2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1e2c94:
    // 0x1e2c94: 0xaca70084  sw          $a3, 0x84($a1)
    ctx->pc = 0x1e2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 7));
label_1e2c98:
    // 0x1e2c98: 0x34069400  ori         $a2, $zero, 0x9400
    ctx->pc = 0x1e2c98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_1e2c9c:
    // 0x1e2c9c: 0xa4a60090  sh          $a2, 0x90($a1)
    ctx->pc = 0x1e2c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 6));
label_1e2ca0:
    // 0x1e2ca0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e2ca4:
    // 0x1e2ca4: 0xa4a20092  sh          $v0, 0x92($a1)
    ctx->pc = 0x1e2ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 146), (uint16_t)GPR_U32(ctx, 2));
label_1e2ca8:
    // 0x1e2ca8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1e2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1e2cac:
    // 0x1e2cac: 0xaca70094  sw          $a3, 0x94($a1)
    ctx->pc = 0x1e2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 7));
label_1e2cb0:
    // 0x1e2cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e2cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2cb4:
    // 0x1e2cb4: 0xa4a800a0  sh          $t0, 0xA0($a1)
    ctx->pc = 0x1e2cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 8));
label_1e2cb8:
    // 0x1e2cb8: 0xa4a300a2  sh          $v1, 0xA2($a1)
    ctx->pc = 0x1e2cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 162), (uint16_t)GPR_U32(ctx, 3));
label_1e2cbc:
    // 0x1e2cbc: 0xaca700a4  sw          $a3, 0xA4($a1)
    ctx->pc = 0x1e2cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 7));
label_1e2cc0:
    // 0x1e2cc0: 0xa4a600b0  sh          $a2, 0xB0($a1)
    ctx->pc = 0x1e2cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 176), (uint16_t)GPR_U32(ctx, 6));
label_1e2cc4:
    // 0x1e2cc4: 0xa4a300b2  sh          $v1, 0xB2($a1)
    ctx->pc = 0x1e2cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 178), (uint16_t)GPR_U32(ctx, 3));
label_1e2cc8:
    // 0x1e2cc8: 0xaca700b4  sw          $a3, 0xB4($a1)
    ctx->pc = 0x1e2cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 7));
label_1e2ccc:
    // 0x1e2ccc: 0x8f868d3c  lw          $a2, -0x72C4($gp)
    ctx->pc = 0x1e2cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2cd0:
    // 0x1e2cd0: 0x14c40036  bne         $a2, $a0, . + 4 + (0x36 << 2)
label_1e2cd4:
    if (ctx->pc == 0x1E2CD4u) {
        ctx->pc = 0x1E2CD8u;
        goto label_1e2cd8;
    }
    ctx->pc = 0x1E2CD0u;
    {
        const bool branch_taken_0x1e2cd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e2cd0) {
            ctx->pc = 0x1E2DACu;
            goto label_1e2dac;
        }
    }
    ctx->pc = 0x1E2CD8u;
label_1e2cd8:
    // 0x1e2cd8: 0x8f848d34  lw          $a0, -0x72CC($gp)
    ctx->pc = 0x1e2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e2cdc:
    // 0x1e2cdc: 0x14930033  bne         $a0, $s3, . + 4 + (0x33 << 2)
label_1e2ce0:
    if (ctx->pc == 0x1E2CE0u) {
        ctx->pc = 0x1E2CE4u;
        goto label_1e2ce4;
    }
    ctx->pc = 0x1E2CDCu;
    {
        const bool branch_taken_0x1e2cdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e2cdc) {
            ctx->pc = 0x1E2DACu;
            goto label_1e2dac;
        }
    }
    ctx->pc = 0x1E2CE4u;
label_1e2ce4:
    // 0x1e2ce4: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x1e2ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2ce8:
    // 0x1e2ce8: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1e2cec:
    if (ctx->pc == 0x1E2CECu) {
        ctx->pc = 0x1E2CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CE8u;
        // 0x1e2cec: 0x3088001f  andi        $t0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CF0u;
        goto label_1e2cf0;
    }
    ctx->pc = 0x1E2CE8u;
    {
        const bool branch_taken_0x1e2ce8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E2CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CE8u;
        // 0x1e2cec: 0x3088001f  andi        $t0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ce8) {
            ctx->pc = 0x1E2CFCu;
            goto label_1e2cfc;
        }
    }
    ctx->pc = 0x1E2CF0u;
label_1e2cf0:
    // 0x1e2cf0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_1e2cf4:
    if (ctx->pc == 0x1E2CF4u) {
        ctx->pc = 0x1E2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF0u;
        // 0x1e2cf4: 0x29010010  slti        $at, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2CF8u;
        goto label_1e2cf8;
    }
    ctx->pc = 0x1E2CF0u;
    {
        const bool branch_taken_0x1e2cf0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF0u;
        // 0x1e2cf4: 0x29010010  slti        $at, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cf0) {
            ctx->pc = 0x1E2D00u;
            goto label_1e2d00;
        }
    }
    ctx->pc = 0x1E2CF8u;
label_1e2cf8:
    // 0x1e2cf8: 0x2508ffe0  addiu       $t0, $t0, -0x20
    ctx->pc = 0x1e2cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
label_1e2cfc:
    // 0x1e2cfc: 0x29010010  slti        $at, $t0, 0x10
    ctx->pc = 0x1e2cfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e2d00:
    // 0x1e2d00: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e2d04:
    if (ctx->pc == 0x1E2D04u) {
        ctx->pc = 0x1E2D08u;
        goto label_1e2d08;
    }
    ctx->pc = 0x1E2D00u;
    {
        const bool branch_taken_0x1e2d00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2d00) {
            ctx->pc = 0x1E2D54u;
            goto label_1e2d54;
        }
    }
    ctx->pc = 0x1E2D08u;
label_1e2d08:
    // 0x1e2d08: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x1e2d08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1e2d0c:
    // 0x1e2d0c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2d10:
    if (ctx->pc == 0x1E2D10u) {
        ctx->pc = 0x1E2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D0Cu;
        // 0x1e2d10: 0x62103  sra         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D14u;
        goto label_1e2d14;
    }
    ctx->pc = 0x1E2D0Cu;
    {
        const bool branch_taken_0x1e2d0c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D0Cu;
        // 0x1e2d10: 0x62103  sra         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d0c) {
            ctx->pc = 0x1E2D1Cu;
            goto label_1e2d1c;
        }
    }
    ctx->pc = 0x1E2D14u;
label_1e2d14:
    // 0x1e2d14: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x1e2d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e2d18:
    // 0x1e2d18: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1e2d18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_1e2d1c:
    // 0x1e2d1c: 0x24870040  addiu       $a3, $a0, 0x40
    ctx->pc = 0x1e2d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1e2d20:
    // 0x1e2d20: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1e2d20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1e2d24:
    // 0x1e2d24: 0xa0a700a8  sb          $a3, 0xA8($a1)
    ctx->pc = 0x1e2d24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 7));
label_1e2d28:
    // 0x1e2d28: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x1e2d28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
label_1e2d2c:
    // 0x1e2d2c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2d30:
    if (ctx->pc == 0x1E2D30u) {
        ctx->pc = 0x1E2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D2Cu;
        // 0x1e2d30: 0xa0a70088  sb          $a3, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D34u;
        goto label_1e2d34;
    }
    ctx->pc = 0x1E2D2Cu;
    {
        const bool branch_taken_0x1e2d2c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D2Cu;
        // 0x1e2d30: 0xa0a70088  sb          $a3, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d2c) {
            ctx->pc = 0x1E2D3Cu;
            goto label_1e2d3c;
        }
    }
    ctx->pc = 0x1E2D34u;
label_1e2d34:
    // 0x1e2d34: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x1e2d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e2d38:
    // 0x1e2d38: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1e2d38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_1e2d3c:
    // 0x1e2d3c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e2d40:
    // 0x1e2d40: 0xa0a400a9  sb          $a0, 0xA9($a1)
    ctx->pc = 0x1e2d40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 4));
label_1e2d44:
    // 0x1e2d44: 0xa0a40089  sb          $a0, 0x89($a1)
    ctx->pc = 0x1e2d44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
label_1e2d48:
    // 0x1e2d48: 0xa0a400aa  sb          $a0, 0xAA($a1)
    ctx->pc = 0x1e2d48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 4));
label_1e2d4c:
    // 0x1e2d4c: 0x10000068  b           . + 4 + (0x68 << 2)
label_1e2d50:
    if (ctx->pc == 0x1E2D50u) {
        ctx->pc = 0x1E2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D4Cu;
        // 0x1e2d50: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D54u;
        goto label_1e2d54;
    }
    ctx->pc = 0x1E2D4Cu;
    {
        const bool branch_taken_0x1e2d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D4Cu;
        // 0x1e2d50: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d4c) {
            ctx->pc = 0x1E2EF0u;
            goto label_1e2ef0;
        }
    }
    ctx->pc = 0x1E2D54u;
label_1e2d54:
    // 0x1e2d54: 0x0  nop
    ctx->pc = 0x1e2d54u;
    // NOP
label_1e2d58:
    // 0x1e2d58: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1e2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e2d5c:
    // 0x1e2d5c: 0x884023  subu        $t0, $a0, $t0
    ctx->pc = 0x1e2d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2d60:
    // 0x1e2d60: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x1e2d60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1e2d64:
    // 0x1e2d64: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2d68:
    if (ctx->pc == 0x1E2D68u) {
        ctx->pc = 0x1E2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D64u;
        // 0x1e2d68: 0x62103  sra         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D6Cu;
        goto label_1e2d6c;
    }
    ctx->pc = 0x1E2D64u;
    {
        const bool branch_taken_0x1e2d64 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D64u;
        // 0x1e2d68: 0x62103  sra         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d64) {
            ctx->pc = 0x1E2D74u;
            goto label_1e2d74;
        }
    }
    ctx->pc = 0x1E2D6Cu;
label_1e2d6c:
    // 0x1e2d6c: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x1e2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e2d70:
    // 0x1e2d70: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1e2d70u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_1e2d74:
    // 0x1e2d74: 0x24870040  addiu       $a3, $a0, 0x40
    ctx->pc = 0x1e2d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1e2d78:
    // 0x1e2d78: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1e2d78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1e2d7c:
    // 0x1e2d7c: 0xa0a700a8  sb          $a3, 0xA8($a1)
    ctx->pc = 0x1e2d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 7));
label_1e2d80:
    // 0x1e2d80: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x1e2d80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
label_1e2d84:
    // 0x1e2d84: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2d88:
    if (ctx->pc == 0x1E2D88u) {
        ctx->pc = 0x1E2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D84u;
        // 0x1e2d88: 0xa0a70088  sb          $a3, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2D8Cu;
        goto label_1e2d8c;
    }
    ctx->pc = 0x1E2D84u;
    {
        const bool branch_taken_0x1e2d84 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D84u;
        // 0x1e2d88: 0xa0a70088  sb          $a3, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d84) {
            ctx->pc = 0x1E2D94u;
            goto label_1e2d94;
        }
    }
    ctx->pc = 0x1E2D8Cu;
label_1e2d8c:
    // 0x1e2d8c: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x1e2d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e2d90:
    // 0x1e2d90: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1e2d90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_1e2d94:
    // 0x1e2d94: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e2d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e2d98:
    // 0x1e2d98: 0xa0a400a9  sb          $a0, 0xA9($a1)
    ctx->pc = 0x1e2d98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 4));
label_1e2d9c:
    // 0x1e2d9c: 0xa0a40089  sb          $a0, 0x89($a1)
    ctx->pc = 0x1e2d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
label_1e2da0:
    // 0x1e2da0: 0xa0a400aa  sb          $a0, 0xAA($a1)
    ctx->pc = 0x1e2da0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 4));
label_1e2da4:
    // 0x1e2da4: 0x10000052  b           . + 4 + (0x52 << 2)
label_1e2da8:
    if (ctx->pc == 0x1E2DA8u) {
        ctx->pc = 0x1E2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DA4u;
        // 0x1e2da8: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DACu;
        goto label_1e2dac;
    }
    ctx->pc = 0x1E2DA4u;
    {
        const bool branch_taken_0x1e2da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DA4u;
        // 0x1e2da8: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2da4) {
            ctx->pc = 0x1E2EF0u;
            goto label_1e2ef0;
        }
    }
    ctx->pc = 0x1E2DACu;
label_1e2dac:
    // 0x1e2dac: 0x0  nop
    ctx->pc = 0x1e2dacu;
    // NOP
label_1e2db0:
    // 0x1e2db0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e2db4:
    // 0x1e2db4: 0x14c40048  bne         $a2, $a0, . + 4 + (0x48 << 2)
label_1e2db8:
    if (ctx->pc == 0x1E2DB8u) {
        ctx->pc = 0x1E2DBCu;
        goto label_1e2dbc;
    }
    ctx->pc = 0x1E2DB4u;
    {
        const bool branch_taken_0x1e2db4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e2db4) {
            ctx->pc = 0x1E2ED8u;
            goto label_1e2ed8;
        }
    }
    ctx->pc = 0x1E2DBCu;
label_1e2dbc:
    // 0x1e2dbc: 0x8f848d34  lw          $a0, -0x72CC($gp)
    ctx->pc = 0x1e2dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e2dc0:
    // 0x1e2dc0: 0x14930045  bne         $a0, $s3, . + 4 + (0x45 << 2)
label_1e2dc4:
    if (ctx->pc == 0x1E2DC4u) {
        ctx->pc = 0x1E2DC8u;
        goto label_1e2dc8;
    }
    ctx->pc = 0x1E2DC0u;
    {
        const bool branch_taken_0x1e2dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e2dc0) {
            ctx->pc = 0x1E2ED8u;
            goto label_1e2ed8;
        }
    }
    ctx->pc = 0x1E2DC8u;
label_1e2dc8:
    // 0x1e2dc8: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x1e2dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2dcc:
    // 0x1e2dcc: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1e2dd0:
    if (ctx->pc == 0x1E2DD0u) {
        ctx->pc = 0x1E2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DCCu;
        // 0x1e2dd0: 0x3088000f  andi        $t0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DD4u;
        goto label_1e2dd4;
    }
    ctx->pc = 0x1E2DCCu;
    {
        const bool branch_taken_0x1e2dcc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DCCu;
        // 0x1e2dd0: 0x3088000f  andi        $t0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dcc) {
            ctx->pc = 0x1E2DE0u;
            goto label_1e2de0;
        }
    }
    ctx->pc = 0x1E2DD4u;
label_1e2dd4:
    // 0x1e2dd4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_1e2dd8:
    if (ctx->pc == 0x1E2DD8u) {
        ctx->pc = 0x1E2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DD4u;
        // 0x1e2dd8: 0x29010008  slti        $at, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DDCu;
        goto label_1e2ddc;
    }
    ctx->pc = 0x1E2DD4u;
    {
        const bool branch_taken_0x1e2dd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DD4u;
        // 0x1e2dd8: 0x29010008  slti        $at, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2dd4) {
            ctx->pc = 0x1E2DE4u;
            goto label_1e2de4;
        }
    }
    ctx->pc = 0x1E2DDCu;
label_1e2ddc:
    // 0x1e2ddc: 0x2508fff0  addiu       $t0, $t0, -0x10
    ctx->pc = 0x1e2ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
label_1e2de0:
    // 0x1e2de0: 0x29010008  slti        $at, $t0, 0x8
    ctx->pc = 0x1e2de0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e2de4:
    // 0x1e2de4: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_1e2de8:
    if (ctx->pc == 0x1E2DE8u) {
        ctx->pc = 0x1E2DECu;
        goto label_1e2dec;
    }
    ctx->pc = 0x1E2DE4u;
    {
        const bool branch_taken_0x1e2de4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2de4) {
            ctx->pc = 0x1E2E5Cu;
            goto label_1e2e5c;
        }
    }
    ctx->pc = 0x1E2DECu;
label_1e2dec:
    // 0x1e2dec: 0x821c0  sll         $a0, $t0, 7
    ctx->pc = 0x1e2decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
label_1e2df0:
    // 0x1e2df0: 0x883023  subu        $a2, $a0, $t0
    ctx->pc = 0x1e2df0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2df4:
    // 0x1e2df4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2df8:
    if (ctx->pc == 0x1E2DF8u) {
        ctx->pc = 0x1E2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DF4u;
        // 0x1e2df8: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2DFCu;
        goto label_1e2dfc;
    }
    ctx->pc = 0x1E2DF4u;
    {
        const bool branch_taken_0x1e2df4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DF4u;
        // 0x1e2df8: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2df4) {
            ctx->pc = 0x1E2E04u;
            goto label_1e2e04;
        }
    }
    ctx->pc = 0x1E2DFCu;
label_1e2dfc:
    // 0x1e2dfc: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2e00:
    // 0x1e2e00: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2e00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2e04:
    // 0x1e2e04: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x1e2e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1e2e08:
    // 0x1e2e08: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x1e2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1e2e0c:
    // 0x1e2e0c: 0xa0a600a8  sb          $a2, 0xA8($a1)
    ctx->pc = 0x1e2e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 6));
label_1e2e10:
    // 0x1e2e10: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x1e2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2e14:
    // 0x1e2e14: 0xa0a60088  sb          $a2, 0x88($a1)
    ctx->pc = 0x1e2e14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 6));
label_1e2e18:
    // 0x1e2e18: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1e2e18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e2e1c:
    // 0x1e2e1c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2e20:
    if (ctx->pc == 0x1E2E20u) {
        ctx->pc = 0x1E2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E1Cu;
        // 0x1e2e20: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E24u;
        goto label_1e2e24;
    }
    ctx->pc = 0x1E2E1Cu;
    {
        const bool branch_taken_0x1e2e1c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E1Cu;
        // 0x1e2e20: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e1c) {
            ctx->pc = 0x1E2E2Cu;
            goto label_1e2e2c;
        }
    }
    ctx->pc = 0x1E2E24u;
label_1e2e24:
    // 0x1e2e24: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2e28:
    // 0x1e2e28: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2e28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2e2c:
    // 0x1e2e2c: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1e2e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2e30:
    // 0x1e2e30: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x1e2e30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1e2e34:
    // 0x1e2e34: 0xa0a700a9  sb          $a3, 0xA9($a1)
    ctx->pc = 0x1e2e34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 7));
label_1e2e38:
    // 0x1e2e38: 0x620c3  sra         $a0, $a2, 3
    ctx->pc = 0x1e2e38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
label_1e2e3c:
    // 0x1e2e3c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2e40:
    if (ctx->pc == 0x1E2E40u) {
        ctx->pc = 0x1E2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E3Cu;
        // 0x1e2e40: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E44u;
        goto label_1e2e44;
    }
    ctx->pc = 0x1E2E3Cu;
    {
        const bool branch_taken_0x1e2e3c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E3Cu;
        // 0x1e2e40: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e3c) {
            ctx->pc = 0x1E2E4Cu;
            goto label_1e2e4c;
        }
    }
    ctx->pc = 0x1E2E44u;
label_1e2e44:
    // 0x1e2e44: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2e48:
    // 0x1e2e48: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2e48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2e4c:
    // 0x1e2e4c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1e2e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2e50:
    // 0x1e2e50: 0xa0a400aa  sb          $a0, 0xAA($a1)
    ctx->pc = 0x1e2e50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 4));
label_1e2e54:
    // 0x1e2e54: 0x10000026  b           . + 4 + (0x26 << 2)
label_1e2e58:
    if (ctx->pc == 0x1E2E58u) {
        ctx->pc = 0x1E2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E54u;
        // 0x1e2e58: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E5Cu;
        goto label_1e2e5c;
    }
    ctx->pc = 0x1E2E54u;
    {
        const bool branch_taken_0x1e2e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E54u;
        // 0x1e2e58: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e54) {
            ctx->pc = 0x1E2EF0u;
            goto label_1e2ef0;
        }
    }
    ctx->pc = 0x1E2E5Cu;
label_1e2e5c:
    // 0x1e2e5c: 0x0  nop
    ctx->pc = 0x1e2e5cu;
    // NOP
label_1e2e60:
    // 0x1e2e60: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e2e64:
    // 0x1e2e64: 0x884023  subu        $t0, $a0, $t0
    ctx->pc = 0x1e2e64u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2e68:
    // 0x1e2e68: 0x821c0  sll         $a0, $t0, 7
    ctx->pc = 0x1e2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
label_1e2e6c:
    // 0x1e2e6c: 0x883023  subu        $a2, $a0, $t0
    ctx->pc = 0x1e2e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2e70:
    // 0x1e2e70: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2e74:
    if (ctx->pc == 0x1E2E74u) {
        ctx->pc = 0x1E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E70u;
        // 0x1e2e74: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2E78u;
        goto label_1e2e78;
    }
    ctx->pc = 0x1E2E70u;
    {
        const bool branch_taken_0x1e2e70 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E70u;
        // 0x1e2e74: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e70) {
            ctx->pc = 0x1E2E80u;
            goto label_1e2e80;
        }
    }
    ctx->pc = 0x1E2E78u;
label_1e2e78:
    // 0x1e2e78: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2e7c:
    // 0x1e2e7c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2e7cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2e80:
    // 0x1e2e80: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x1e2e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1e2e84:
    // 0x1e2e84: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x1e2e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1e2e88:
    // 0x1e2e88: 0xa0a600a8  sb          $a2, 0xA8($a1)
    ctx->pc = 0x1e2e88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 6));
label_1e2e8c:
    // 0x1e2e8c: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x1e2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2e90:
    // 0x1e2e90: 0xa0a60088  sb          $a2, 0x88($a1)
    ctx->pc = 0x1e2e90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 6));
label_1e2e94:
    // 0x1e2e94: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1e2e94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e2e98:
    // 0x1e2e98: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2e9c:
    if (ctx->pc == 0x1E2E9Cu) {
        ctx->pc = 0x1E2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E98u;
        // 0x1e2e9c: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2EA0u;
        goto label_1e2ea0;
    }
    ctx->pc = 0x1E2E98u;
    {
        const bool branch_taken_0x1e2e98 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E98u;
        // 0x1e2e9c: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e98) {
            ctx->pc = 0x1E2EA8u;
            goto label_1e2ea8;
        }
    }
    ctx->pc = 0x1E2EA0u;
label_1e2ea0:
    // 0x1e2ea0: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2ea4:
    // 0x1e2ea4: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2ea4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2ea8:
    // 0x1e2ea8: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1e2ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2eac:
    // 0x1e2eac: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x1e2eacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1e2eb0:
    // 0x1e2eb0: 0xa0a700a9  sb          $a3, 0xA9($a1)
    ctx->pc = 0x1e2eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 7));
label_1e2eb4:
    // 0x1e2eb4: 0x620c3  sra         $a0, $a2, 3
    ctx->pc = 0x1e2eb4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
label_1e2eb8:
    // 0x1e2eb8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2ebc:
    if (ctx->pc == 0x1E2EBCu) {
        ctx->pc = 0x1E2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EB8u;
        // 0x1e2ebc: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2EC0u;
        goto label_1e2ec0;
    }
    ctx->pc = 0x1E2EB8u;
    {
        const bool branch_taken_0x1e2eb8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EB8u;
        // 0x1e2ebc: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2eb8) {
            ctx->pc = 0x1E2EC8u;
            goto label_1e2ec8;
        }
    }
    ctx->pc = 0x1E2EC0u;
label_1e2ec0:
    // 0x1e2ec0: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2ec4:
    // 0x1e2ec4: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2ec4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2ec8:
    // 0x1e2ec8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1e2ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2ecc:
    // 0x1e2ecc: 0xa0a400aa  sb          $a0, 0xAA($a1)
    ctx->pc = 0x1e2eccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 4));
label_1e2ed0:
    // 0x1e2ed0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e2ed4:
    if (ctx->pc == 0x1E2ED4u) {
        ctx->pc = 0x1E2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ED0u;
        // 0x1e2ed4: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2ED8u;
        goto label_1e2ed8;
    }
    ctx->pc = 0x1E2ED0u;
    {
        const bool branch_taken_0x1e2ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ED0u;
        // 0x1e2ed4: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ed0) {
            ctx->pc = 0x1E2EF0u;
            goto label_1e2ef0;
        }
    }
    ctx->pc = 0x1E2ED8u;
label_1e2ed8:
    // 0x1e2ed8: 0xa0a000a8  sb          $zero, 0xA8($a1)
    ctx->pc = 0x1e2ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 0));
label_1e2edc:
    // 0x1e2edc: 0xa0a00088  sb          $zero, 0x88($a1)
    ctx->pc = 0x1e2edcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 0));
label_1e2ee0:
    // 0x1e2ee0: 0xa0a000a9  sb          $zero, 0xA9($a1)
    ctx->pc = 0x1e2ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 0));
label_1e2ee4:
    // 0x1e2ee4: 0xa0a00089  sb          $zero, 0x89($a1)
    ctx->pc = 0x1e2ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 0));
label_1e2ee8:
    // 0x1e2ee8: 0xa0a000aa  sb          $zero, 0xAA($a1)
    ctx->pc = 0x1e2ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 0));
label_1e2eec:
    // 0x1e2eec: 0xa0a0008a  sb          $zero, 0x8A($a1)
    ctx->pc = 0x1e2eecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 0));
label_1e2ef0:
    // 0x1e2ef0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e2ef4:
    // 0x1e2ef4: 0x248426a0  addiu       $a0, $a0, 0x26A0
    ctx->pc = 0x1e2ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9888));
label_1e2ef8:
    // 0x1e2ef8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e2ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e2efc:
    // 0x1e2efc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1e2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1e2f00:
    // 0x1e2f00: 0x24080b88  addiu       $t0, $zero, 0xB88
    ctx->pc = 0x1e2f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2952));
label_1e2f04:
    // 0x1e2f04: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1e2f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2f08:
    // 0x1e2f08: 0x74940  sll         $t1, $a3, 5
    ctx->pc = 0x1e2f08u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1e2f0c:
    // 0x1e2f0c: 0xa4a60138  sh          $a2, 0x138($a1)
    ctx->pc = 0x1e2f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 312), (uint16_t)GPR_U32(ctx, 6));
label_1e2f10:
    // 0x1e2f10: 0x73a40  sll         $a3, $a3, 9
    ctx->pc = 0x1e2f10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
label_1e2f14:
    // 0x1e2f14: 0x25260020  addiu       $a2, $t1, 0x20
    ctx->pc = 0x1e2f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_1e2f18:
    // 0x1e2f18: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1e2f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1e2f1c:
    // 0x1e2f1c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1e2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1e2f20:
    // 0x1e2f20: 0xa4a7013a  sh          $a3, 0x13A($a1)
    ctx->pc = 0x1e2f20u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 314), (uint16_t)GPR_U32(ctx, 7));
label_1e2f24:
    // 0x1e2f24: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1e2f24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1e2f28:
    // 0x1e2f28: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x1e2f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1e2f2c:
    // 0x1e2f2c: 0xa4a80148  sh          $t0, 0x148($a1)
    ctx->pc = 0x1e2f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 328), (uint16_t)GPR_U32(ctx, 8));
label_1e2f30:
    // 0x1e2f30: 0x3484c00a  ori         $a0, $a0, 0xC00A
    ctx->pc = 0x1e2f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49162);
label_1e2f34:
    // 0x1e2f34: 0x93638  dsll        $a2, $t1, 24
    ctx->pc = 0x1e2f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << 24);
label_1e2f38:
    // 0x1e2f38: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1e2f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1e2f3c:
    // 0x1e2f3c: 0xa4a7014a  sh          $a3, 0x14A($a1)
    ctx->pc = 0x1e2f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 330), (uint16_t)GPR_U32(ctx, 7));
label_1e2f40:
    // 0x1e2f40: 0x2524001f  addiu       $a0, $t1, 0x1F
    ctx->pc = 0x1e2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
label_1e2f44:
    // 0x1e2f44: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e2f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e2f48:
    // 0x1e2f48: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1e2f48u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1e2f4c:
    // 0x1e2f4c: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x1e2f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
label_1e2f50:
    // 0x1e2f50: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x1e2f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1e2f54:
    // 0x1e2f54: 0xfca40100  sd          $a0, 0x100($a1)
    ctx->pc = 0x1e2f54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 256), GPR_U64(ctx, 4));
label_1e2f58:
    // 0x1e2f58: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2f5c:
    // 0x1e2f5c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_1e2f60:
    if (ctx->pc == 0x1E2F60u) {
        ctx->pc = 0x1E2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F5Cu;
        // 0x1e2f60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F64u;
        goto label_1e2f64;
    }
    ctx->pc = 0x1E2F5Cu;
    {
        const bool branch_taken_0x1e2f5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F5Cu;
        // 0x1e2f60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f5c) {
            ctx->pc = 0x1E2F90u;
            goto label_1e2f90;
        }
    }
    ctx->pc = 0x1E2F64u;
label_1e2f64:
    // 0x1e2f64: 0x8f868d38  lw          $a2, -0x72C8($gp)
    ctx->pc = 0x1e2f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2f68:
    // 0x1e2f68: 0x24040268  addiu       $a0, $zero, 0x268
    ctx->pc = 0x1e2f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
label_1e2f6c:
    // 0x1e2f6c: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x1e2f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1e2f70:
    // 0x1e2f70: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1e2f74:
    if (ctx->pc == 0x1E2F74u) {
        ctx->pc = 0x1E2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F70u;
        // 0x1e2f74: 0x43103  sra         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F78u;
        goto label_1e2f78;
    }
    ctx->pc = 0x1E2F70u;
    {
        const bool branch_taken_0x1e2f70 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F70u;
        // 0x1e2f74: 0x43103  sra         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f70) {
            ctx->pc = 0x1E2F80u;
            goto label_1e2f80;
        }
    }
    ctx->pc = 0x1E2F78u;
label_1e2f78:
    // 0x1e2f78: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x1e2f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1e2f7c:
    // 0x1e2f7c: 0x43103  sra         $a2, $a0, 4
    ctx->pc = 0x1e2f7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
label_1e2f80:
    // 0x1e2f80: 0x240402d0  addiu       $a0, $zero, 0x2D0
    ctx->pc = 0x1e2f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1e2f84:
    // 0x1e2f84: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2f88:
    if (ctx->pc == 0x1E2F88u) {
        ctx->pc = 0x1E2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F84u;
        // 0x1e2f88: 0x863823  subu        $a3, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2F8Cu;
        goto label_1e2f8c;
    }
    ctx->pc = 0x1E2F84u;
    {
        const bool branch_taken_0x1e2f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F84u;
        // 0x1e2f88: 0x863823  subu        $a3, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f84) {
            ctx->pc = 0x1E2F90u;
            goto label_1e2f90;
        }
    }
    ctx->pc = 0x1E2F8Cu;
label_1e2f8c:
    // 0x1e2f8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f90:
    // 0x1e2f90: 0x240401b0  addiu       $a0, $zero, 0x1B0
    ctx->pc = 0x1e2f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
label_1e2f94:
    // 0x1e2f94: 0x24060384  addiu       $a2, $zero, 0x384
    ctx->pc = 0x1e2f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e2f98:
    // 0x1e2f98: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1e2f98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1e2f9c:
    // 0x1e2f9c: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x1e2f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e2fa0:
    // 0x1e2fa0: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x1e2fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_1e2fa4:
    // 0x1e2fa4: 0x248400b8  addiu       $a0, $a0, 0xB8
    ctx->pc = 0x1e2fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
label_1e2fa8:
    // 0x1e2fa8: 0xa4a70140  sh          $a3, 0x140($a1)
    ctx->pc = 0x1e2fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 7));
label_1e2fac:
    // 0x1e2fac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e2facu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e2fb0:
    // 0x1e2fb0: 0xa4a20142  sh          $v0, 0x142($a1)
    ctx->pc = 0x1e2fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 322), (uint16_t)GPR_U32(ctx, 2));
label_1e2fb4:
    // 0x1e2fb4: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1e2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1e2fb8:
    // 0x1e2fb8: 0xaca60144  sw          $a2, 0x144($a1)
    ctx->pc = 0x1e2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 324), GPR_U32(ctx, 6));
label_1e2fbc:
    // 0x1e2fbc: 0xa4a40150  sh          $a0, 0x150($a1)
    ctx->pc = 0x1e2fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 336), (uint16_t)GPR_U32(ctx, 4));
label_1e2fc0:
    // 0x1e2fc0: 0xa4a30152  sh          $v1, 0x152($a1)
    ctx->pc = 0x1e2fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 338), (uint16_t)GPR_U32(ctx, 3));
label_1e2fc4:
    // 0x1e2fc4: 0xaca60154  sw          $a2, 0x154($a1)
    ctx->pc = 0x1e2fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 6));
label_1e2fc8:
    // 0x1e2fc8: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2fcc:
    // 0x1e2fcc: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1e2fd0:
    if (ctx->pc == 0x1E2FD0u) {
        ctx->pc = 0x1E2FD4u;
        goto label_1e2fd4;
    }
    ctx->pc = 0x1E2FCCu;
    {
        const bool branch_taken_0x1e2fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2fcc) {
            ctx->pc = 0x1E2FF4u;
            goto label_1e2ff4;
        }
    }
    ctx->pc = 0x1E2FD4u;
label_1e2fd4:
    // 0x1e2fd4: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2fd8:
    // 0x1e2fd8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e2fdc:
    // 0x1e2fdc: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
label_1e2fe0:
    if (ctx->pc == 0x1E2FE0u) {
        ctx->pc = 0x1E2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FDCu;
        // 0x1e2fe0: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2FE4u;
        goto label_1e2fe4;
    }
    ctx->pc = 0x1E2FDCu;
    {
        const bool branch_taken_0x1e2fdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FDCu;
        // 0x1e2fe0: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fdc) {
            ctx->pc = 0x1E302Cu;
            goto label_1e302c;
        }
    }
    ctx->pc = 0x1E2FE4u;
label_1e2fe4:
    // 0x1e2fe4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e2fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1e2fe8:
    // 0x1e2fe8: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1e2fe8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1e2fec:
    // 0x1e2fec: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e2ff0:
    if (ctx->pc == 0x1E2FF0u) {
        ctx->pc = 0x1E2FF4u;
        goto label_1e2ff4;
    }
    ctx->pc = 0x1E2FECu;
    {
        const bool branch_taken_0x1e2fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2fec) {
            ctx->pc = 0x1E302Cu;
            goto label_1e302c;
        }
    }
    ctx->pc = 0x1E2FF4u;
label_1e2ff4:
    // 0x1e2ff4: 0x0  nop
    ctx->pc = 0x1e2ff4u;
    // NOP
label_1e2ff8:
    // 0x1e2ff8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e2ffc:
    // 0x1e2ffc: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_1e3000:
    if (ctx->pc == 0x1E3000u) {
        ctx->pc = 0x1E3004u;
        goto label_1e3004;
    }
    ctx->pc = 0x1E2FFCu;
    {
        const bool branch_taken_0x1e2ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2ffc) {
            ctx->pc = 0x1E3028u;
            goto label_1e3028;
        }
    }
    ctx->pc = 0x1E3004u;
label_1e3004:
    // 0x1e3004: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e3004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e3008:
    // 0x1e3008: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e3008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e300c:
    // 0x1e300c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1e3010:
    if (ctx->pc == 0x1E3010u) {
        ctx->pc = 0x1E3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E300Cu;
        // 0x1e3010: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3014u;
        goto label_1e3014;
    }
    ctx->pc = 0x1E300Cu;
    {
        const bool branch_taken_0x1e300c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E300Cu;
        // 0x1e3010: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e300c) {
            ctx->pc = 0x1E301Cu;
            goto label_1e301c;
        }
    }
    ctx->pc = 0x1E3014u;
label_1e3014:
    // 0x1e3014: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e3014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1e3018:
    // 0x1e3018: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1e3018u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1e301c:
    // 0x1e301c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3020:
    // 0x1e3020: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e3024:
    if (ctx->pc == 0x1E3024u) {
        ctx->pc = 0x1E3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3020u;
        // 0x1e3024: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3028u;
        goto label_1e3028;
    }
    ctx->pc = 0x1E3020u;
    {
        const bool branch_taken_0x1e3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3020u;
        // 0x1e3024: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3020) {
            ctx->pc = 0x1E302Cu;
            goto label_1e302c;
        }
    }
    ctx->pc = 0x1E3028u;
label_1e3028:
    // 0x1e3028: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e3028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e302c:
    // 0x1e302c: 0x0  nop
    ctx->pc = 0x1e302cu;
    // NOP
label_1e3030:
    // 0x1e3030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3034:
    // 0x1e3034: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_1e3038:
    if (ctx->pc == 0x1E3038u) {
        ctx->pc = 0x1E303Cu;
        goto label_1e303c;
    }
    ctx->pc = 0x1E3034u;
    {
        const bool branch_taken_0x1e3034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e3034) {
            ctx->pc = 0x1E3048u;
            goto label_1e3048;
        }
    }
    ctx->pc = 0x1E303Cu;
label_1e303c:
    // 0x1e303c: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x1e303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e3040:
    // 0x1e3040: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
label_1e3044:
    if (ctx->pc == 0x1E3044u) {
        ctx->pc = 0x1E3048u;
        goto label_1e3048;
    }
    ctx->pc = 0x1E3040u;
    {
        const bool branch_taken_0x1e3040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1e3040) {
            ctx->pc = 0x1E3060u;
            goto label_1e3060;
        }
    }
    ctx->pc = 0x1E3048u;
label_1e3048:
    // 0x1e3048: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e304c:
    // 0x1e304c: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
label_1e3050:
    if (ctx->pc == 0x1E3050u) {
        ctx->pc = 0x1E3054u;
        goto label_1e3054;
    }
    ctx->pc = 0x1E304Cu;
    {
        const bool branch_taken_0x1e304c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e304c) {
            ctx->pc = 0x1E3080u;
            goto label_1e3080;
        }
    }
    ctx->pc = 0x1E3054u;
label_1e3054:
    // 0x1e3054: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x1e3054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e3058:
    // 0x1e3058: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
label_1e305c:
    if (ctx->pc == 0x1E305Cu) {
        ctx->pc = 0x1E3060u;
        goto label_1e3060;
    }
    ctx->pc = 0x1E3058u;
    {
        const bool branch_taken_0x1e3058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1e3058) {
            ctx->pc = 0x1E3080u;
            goto label_1e3080;
        }
    }
    ctx->pc = 0x1E3060u;
label_1e3060:
    // 0x1e3060: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3064:
    // 0x1e3064: 0xa0a30130  sb          $v1, 0x130($a1)
    ctx->pc = 0x1e3064u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 3));
label_1e3068:
    // 0x1e3068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e306c:
    // 0x1e306c: 0xa0a30131  sb          $v1, 0x131($a1)
    ctx->pc = 0x1e306cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 305), (uint8_t)GPR_U32(ctx, 3));
label_1e3070:
    // 0x1e3070: 0xa0a30132  sb          $v1, 0x132($a1)
    ctx->pc = 0x1e3070u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 306), (uint8_t)GPR_U32(ctx, 3));
label_1e3074:
    // 0x1e3074: 0xa0a60133  sb          $a2, 0x133($a1)
    ctx->pc = 0x1e3074u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 307), (uint8_t)GPR_U32(ctx, 6));
label_1e3078:
    // 0x1e3078: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e307c:
    if (ctx->pc == 0x1E307Cu) {
        ctx->pc = 0x1E307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3078u;
        // 0x1e307c: 0xaca20134  sw          $v0, 0x134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3080u;
        goto label_1e3080;
    }
    ctx->pc = 0x1E3078u;
    {
        const bool branch_taken_0x1e3078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3078u;
        // 0x1e307c: 0xaca20134  sw          $v0, 0x134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3078) {
            ctx->pc = 0x1E309Cu;
            goto label_1e309c;
        }
    }
    ctx->pc = 0x1E3080u;
label_1e3080:
    // 0x1e3080: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1e3080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e3084:
    // 0x1e3084: 0xa0a30130  sb          $v1, 0x130($a1)
    ctx->pc = 0x1e3084u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 3));
label_1e3088:
    // 0x1e3088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e308c:
    // 0x1e308c: 0xa0a30131  sb          $v1, 0x131($a1)
    ctx->pc = 0x1e308cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 305), (uint8_t)GPR_U32(ctx, 3));
label_1e3090:
    // 0x1e3090: 0xa0a30132  sb          $v1, 0x132($a1)
    ctx->pc = 0x1e3090u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 306), (uint8_t)GPR_U32(ctx, 3));
label_1e3094:
    // 0x1e3094: 0xa0a60133  sb          $a2, 0x133($a1)
    ctx->pc = 0x1e3094u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 307), (uint8_t)GPR_U32(ctx, 6));
label_1e3098:
    // 0x1e3098: 0xaca20134  sw          $v0, 0x134($a1)
    ctx->pc = 0x1e3098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
label_1e309c:
    // 0x1e309c: 0x0  nop
    ctx->pc = 0x1e309cu;
    // NOP
label_1e30a0:
    // 0x1e30a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e30a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e30a4:
    // 0x1e30a4: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1e30a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1e30a8:
    // 0x1e30a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e30a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e30ac:
    // 0x1e30ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e30acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e30b0:
    // 0x1e30b0: 0xc066c72  jal         func_19B1C8
label_1e30b4:
    if (ctx->pc == 0x1E30B4u) {
        ctx->pc = 0x1E30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30B0u;
        // 0x1e30b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E30B8u;
        goto label_1e30b8;
    }
    ctx->pc = 0x1E30B0u;
    SET_GPR_U32(ctx, 31, 0x1E30B8u);
    ctx->pc = 0x1E30B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E30B0u;
    // 0x1e30b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E30B0u, 0x1E30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E30B8u;
label_1e30b8:
    // 0x1e30b8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1e30b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1e30bc:
    // 0x1e30bc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e30bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1e30c0:
    // 0x1e30c0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e30c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e30c4:
    // 0x1e30c4: 0x0  nop
    ctx->pc = 0x1e30c4u;
    // NOP
label_1e30c8:
    // 0x1e30c8: 0x8f878d30  lw          $a3, -0x72D0($gp)
    ctx->pc = 0x1e30c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
label_1e30cc:
    // 0x1e30cc: 0x267182a  slt         $v1, $s3, $a3
    ctx->pc = 0x1e30ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e30d0:
    // 0x1e30d0: 0x1460febc  bnez        $v1, . + 4 + (-0x144 << 2)
label_1e30d4:
    if (ctx->pc == 0x1E30D4u) {
        ctx->pc = 0x1E30D8u;
        goto label_1e30d8;
    }
    ctx->pc = 0x1E30D0u;
    {
        const bool branch_taken_0x1e30d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e30d0) {
            ctx->pc = 0x1E2BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2bc4;
        }
    }
    ctx->pc = 0x1E30D8u;
label_1e30d8:
    // 0x1e30d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e30d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e30dc:
    // 0x1e30dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e30dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e30e0:
    // 0x1e30e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e30e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e30e4:
    // 0x1e30e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e30e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e30e8:
    // 0x1e30e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e30e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e30ec:
    // 0x1e30ec: 0x3e00008  jr          $ra
label_1e30f0:
    if (ctx->pc == 0x1E30F0u) {
        ctx->pc = 0x1E30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30ECu;
        // 0x1e30f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E30F4u;
        goto label_1e30f4;
    }
    ctx->pc = 0x1E30ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E30ECu;
        // 0x1e30f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E30ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E30F4u;
label_1e30f4:
    // 0x1e30f4: 0x0  nop
    ctx->pc = 0x1e30f4u;
    // NOP
label_1e30f8:
    // 0x1e30f8: 0x0  nop
    ctx->pc = 0x1e30f8u;
    // NOP
label_1e30fc:
    // 0x1e30fc: 0x0  nop
    ctx->pc = 0x1e30fcu;
    // NOP
label_1e3100:
    // 0x1e3100: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e3100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1e3104:
    // 0x1e3104: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e3104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e3108:
    // 0x1e3108: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e3108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1e310c:
    // 0x1e310c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e310cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e3110:
    // 0x1e3110: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e3110u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3114:
    // 0x1e3114: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e3114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e3118:
    // 0x1e3118: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e3118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e311c:
    // 0x1e311c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e311cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3120:
    // 0x1e3120: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e3120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e3124:
    // 0x1e3124: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e3124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e3128:
    // 0x1e3128: 0x27828d40  addiu       $v0, $gp, -0x72C0
    ctx->pc = 0x1e3128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937920));
label_1e312c:
    // 0x1e312c: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x1e312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_1e3130:
    // 0x1e3130: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e3130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e3134:
    // 0x1e3134: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1e3134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3138:
    // 0x1e3138: 0xc05e234  jal         func_1788D0
label_1e313c:
    if (ctx->pc == 0x1E313Cu) {
        ctx->pc = 0x1E313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3138u;
        // 0x1e313c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3140u;
        goto label_1e3140;
    }
    ctx->pc = 0x1E3138u;
    SET_GPR_U32(ctx, 31, 0x1E3140u);
    ctx->pc = 0x1E313Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3138u;
    // 0x1e313c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E3138u, 0x1E3140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3140u;
label_1e3140:
    // 0x1e3140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e3140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3144:
    // 0x1e3144: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e3144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3148:
    // 0x1e3148: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1e3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e314c:
    // 0x1e314c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e3150:
    // 0x1e3150: 0x232a021  addu        $s4, $s1, $s2
    ctx->pc = 0x1e3150u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1e3154:
    // 0x1e3154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e3154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3158:
    // 0x1e3158: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e3158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e315c:
    // 0x1e315c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e315cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e3160:
    // 0x1e3160: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1e3160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1e3164:
    // 0x1e3164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3168:
    // 0x1e3168: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e3168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e316c:
    // 0x1e316c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e316cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e3170:
    // 0x1e3170: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3174:
    // 0x1e3174: 0xdc252a28  ld          $a1, 0x2A28($at)
    ctx->pc = 0x1e3174u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10792)));
label_1e3178:
    // 0x1e3178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e3178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e317c:
    // 0x1e317c: 0x240803b6  addiu       $t0, $zero, 0x3B6
    ctx->pc = 0x1e317cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
label_1e3180:
    // 0x1e3180: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3180u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3184:
    // 0x1e3184: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e3184u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3188:
    // 0x1e3188: 0xc05de30  jal         func_1778C0
label_1e318c:
    if (ctx->pc == 0x1E318Cu) {
        ctx->pc = 0x1E318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3188u;
        // 0x1e318c: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3190u;
        goto label_1e3190;
    }
    ctx->pc = 0x1E3188u;
    SET_GPR_U32(ctx, 31, 0x1E3190u);
    ctx->pc = 0x1E318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3188u;
    // 0x1e318c: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E3188u, 0x1E3190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3190u;
label_1e3190:
    // 0x1e3190: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e3190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e3194:
    // 0x1e3194: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1e3194u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1e3198:
    // 0x1e3198: 0xa2840080  sb          $a0, 0x80($s4)
    ctx->pc = 0x1e3198u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 4));
label_1e319c:
    // 0x1e319c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x1e319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1e31a0:
    // 0x1e31a0: 0xa2840081  sb          $a0, 0x81($s4)
    ctx->pc = 0x1e31a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 129), (uint8_t)GPR_U32(ctx, 4));
label_1e31a4:
    // 0x1e31a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e31a8:
    // 0x1e31a8: 0xa2840082  sb          $a0, 0x82($s4)
    ctx->pc = 0x1e31a8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 130), (uint8_t)GPR_U32(ctx, 4));
label_1e31ac:
    // 0x1e31ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e31acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e31b0:
    // 0x1e31b0: 0xa2840083  sb          $a0, 0x83($s4)
    ctx->pc = 0x1e31b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 131), (uint8_t)GPR_U32(ctx, 4));
label_1e31b4:
    // 0x1e31b4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e31b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e31b8:
    // 0x1e31b8: 0xae860084  sw          $a2, 0x84($s4)
    ctx->pc = 0x1e31b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 6));
label_1e31bc:
    // 0x1e31bc: 0x26840470  addiu       $a0, $s4, 0x470
    ctx->pc = 0x1e31bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1136));
label_1e31c0:
    // 0x1e31c0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x1e31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_1e31c4:
    // 0x1e31c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e31c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e31c8:
    // 0x1e31c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e31c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e31cc:
    // 0x1e31cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e31ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e31d0:
    // 0x1e31d0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e31d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e31d4:
    // 0x1e31d4: 0x240803b6  addiu       $t0, $zero, 0x3B6
    ctx->pc = 0x1e31d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
label_1e31d8:
    // 0x1e31d8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e31d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e31dc:
    // 0x1e31dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e31dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e31e0:
    // 0x1e31e0: 0xdc252a30  ld          $a1, 0x2A30($at)
    ctx->pc = 0x1e31e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10800)));
label_1e31e4:
    // 0x1e31e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e31e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e31e8:
    // 0x1e31e8: 0xc05de30  jal         func_1778C0
label_1e31ec:
    if (ctx->pc == 0x1E31ECu) {
        ctx->pc = 0x1E31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E31E8u;
        // 0x1e31ec: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E31F0u;
        goto label_1e31f0;
    }
    ctx->pc = 0x1E31E8u;
    SET_GPR_U32(ctx, 31, 0x1E31F0u);
    ctx->pc = 0x1E31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E31E8u;
    // 0x1e31ec: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E31E8u, 0x1E31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E31F0u;
label_1e31f0:
    // 0x1e31f0: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1e31f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e31f4:
    // 0x1e31f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e31f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e31f8:
    // 0x1e31f8: 0xa28b04e0  sb          $t3, 0x4E0($s4)
    ctx->pc = 0x1e31f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1248), (uint8_t)GPR_U32(ctx, 11));
label_1e31fc:
    // 0x1e31fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1e3200:
    // 0x1e3200: 0xa28b04e1  sb          $t3, 0x4E1($s4)
    ctx->pc = 0x1e3200u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1249), (uint8_t)GPR_U32(ctx, 11));
label_1e3204:
    // 0x1e3204: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1e3204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_1e3208:
    // 0x1e3208: 0xa28b04e2  sb          $t3, 0x4E2($s4)
    ctx->pc = 0x1e3208u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1250), (uint8_t)GPR_U32(ctx, 11));
label_1e320c:
    // 0x1e320c: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x1e320cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_1e3210:
    // 0x1e3210: 0xa28b04e3  sb          $t3, 0x4E3($s4)
    ctx->pc = 0x1e3210u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1251), (uint8_t)GPR_U32(ctx, 11));
label_1e3214:
    // 0x1e3214: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_1e3218:
    if (ctx->pc == 0x1E3218u) {
        ctx->pc = 0x1E3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3214u;
        // 0x1e3218: 0xae8304e4  sw          $v1, 0x4E4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E321Cu;
        goto label_1e321c;
    }
    ctx->pc = 0x1E3214u;
    {
        const bool branch_taken_0x1e3214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3214u;
        // 0x1e3218: 0xae8304e4  sw          $v1, 0x4E4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3214) {
            ctx->pc = 0x1E3148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3148;
        }
    }
    ctx->pc = 0x1E321Cu;
label_1e321c:
    // 0x1e321c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1e321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e3220:
    // 0x1e3220: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e3220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3224:
    // 0x1e3224: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e3224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e3228:
    // 0x1e3228: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e3228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e322c:
    // 0x1e322c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e322cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e3230:
    // 0x1e3230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3234:
    // 0x1e3234: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e3234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e3238:
    // 0x1e3238: 0x262408d0  addiu       $a0, $s1, 0x8D0
    ctx->pc = 0x1e3238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2256));
label_1e323c:
    // 0x1e323c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e323cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e3240:
    // 0x1e3240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e3240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3244:
    // 0x1e3244: 0xdc252a38  ld          $a1, 0x2A38($at)
    ctx->pc = 0x1e3244u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10808)));
label_1e3248:
    // 0x1e3248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e3248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e324c:
    // 0x1e324c: 0x240803b6  addiu       $t0, $zero, 0x3B6
    ctx->pc = 0x1e324cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 950));
label_1e3250:
    // 0x1e3250: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e3250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e3254:
    // 0x1e3254: 0xc05de30  jal         func_1778C0
    ctx->pc = 0x1e3258u;
    return;
}

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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part732(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b3a90u: goto label_2b3a90;
        case 0x2b3a94u: goto label_2b3a94;
        case 0x2b3a98u: goto label_2b3a98;
        case 0x2b3a9cu: goto label_2b3a9c;
        case 0x2b3aa0u: goto label_2b3aa0;
        case 0x2b3aa4u: goto label_2b3aa4;
        case 0x2b3aa8u: goto label_2b3aa8;
        case 0x2b3aacu: goto label_2b3aac;
        case 0x2b3ab0u: goto label_2b3ab0;
        case 0x2b3ab4u: goto label_2b3ab4;
        case 0x2b3ab8u: goto label_2b3ab8;
        case 0x2b3abcu: goto label_2b3abc;
        case 0x2b3ac0u: goto label_2b3ac0;
        case 0x2b3ac4u: goto label_2b3ac4;
        case 0x2b3ac8u: goto label_2b3ac8;
        case 0x2b3accu: goto label_2b3acc;
        case 0x2b3ad0u: goto label_2b3ad0;
        case 0x2b3ad4u: goto label_2b3ad4;
        case 0x2b3ad8u: goto label_2b3ad8;
        case 0x2b3adcu: goto label_2b3adc;
        case 0x2b3ae0u: goto label_2b3ae0;
        case 0x2b3ae4u: goto label_2b3ae4;
        case 0x2b3ae8u: goto label_2b3ae8;
        case 0x2b3aecu: goto label_2b3aec;
        case 0x2b3af0u: goto label_2b3af0;
        case 0x2b3af4u: goto label_2b3af4;
        case 0x2b3af8u: goto label_2b3af8;
        case 0x2b3afcu: goto label_2b3afc;
        case 0x2b3b00u: goto label_2b3b00;
        case 0x2b3b04u: goto label_2b3b04;
        case 0x2b3b08u: goto label_2b3b08;
        case 0x2b3b0cu: goto label_2b3b0c;
        case 0x2b3b10u: goto label_2b3b10;
        case 0x2b3b14u: goto label_2b3b14;
        case 0x2b3b18u: goto label_2b3b18;
        case 0x2b3b1cu: goto label_2b3b1c;
        case 0x2b3b20u: goto label_2b3b20;
        case 0x2b3b24u: goto label_2b3b24;
        case 0x2b3b28u: goto label_2b3b28;
        case 0x2b3b2cu: goto label_2b3b2c;
        case 0x2b3b30u: goto label_2b3b30;
        case 0x2b3b34u: goto label_2b3b34;
        case 0x2b3b38u: goto label_2b3b38;
        case 0x2b3b3cu: goto label_2b3b3c;
        case 0x2b3b40u: goto label_2b3b40;
        case 0x2b3b44u: goto label_2b3b44;
        case 0x2b3b48u: goto label_2b3b48;
        case 0x2b3b4cu: goto label_2b3b4c;
        case 0x2b3b50u: goto label_2b3b50;
        case 0x2b3b54u: goto label_2b3b54;
        case 0x2b3b58u: goto label_2b3b58;
        case 0x2b3b5cu: goto label_2b3b5c;
        case 0x2b3b60u: goto label_2b3b60;
        case 0x2b3b64u: goto label_2b3b64;
        case 0x2b3b68u: goto label_2b3b68;
        case 0x2b3b6cu: goto label_2b3b6c;
        case 0x2b3b70u: goto label_2b3b70;
        case 0x2b3b74u: goto label_2b3b74;
        case 0x2b3b78u: goto label_2b3b78;
        case 0x2b3b7cu: goto label_2b3b7c;
        case 0x2b3b80u: goto label_2b3b80;
        case 0x2b3b84u: goto label_2b3b84;
        case 0x2b3b88u: goto label_2b3b88;
        case 0x2b3b8cu: goto label_2b3b8c;
        case 0x2b3b90u: goto label_2b3b90;
        case 0x2b3b94u: goto label_2b3b94;
        case 0x2b3b98u: goto label_2b3b98;
        case 0x2b3b9cu: goto label_2b3b9c;
        case 0x2b3ba0u: goto label_2b3ba0;
        case 0x2b3ba4u: goto label_2b3ba4;
        case 0x2b3ba8u: goto label_2b3ba8;
        case 0x2b3bacu: goto label_2b3bac;
        case 0x2b3bb0u: goto label_2b3bb0;
        case 0x2b3bb4u: goto label_2b3bb4;
        case 0x2b3bb8u: goto label_2b3bb8;
        case 0x2b3bbcu: goto label_2b3bbc;
        case 0x2b3bc0u: goto label_2b3bc0;
        case 0x2b3bc4u: goto label_2b3bc4;
        case 0x2b3bc8u: goto label_2b3bc8;
        case 0x2b3bccu: goto label_2b3bcc;
        case 0x2b3bd0u: goto label_2b3bd0;
        case 0x2b3bd4u: goto label_2b3bd4;
        case 0x2b3bd8u: goto label_2b3bd8;
        case 0x2b3bdcu: goto label_2b3bdc;
        case 0x2b3be0u: goto label_2b3be0;
        case 0x2b3be4u: goto label_2b3be4;
        case 0x2b3be8u: goto label_2b3be8;
        case 0x2b3becu: goto label_2b3bec;
        case 0x2b3bf0u: goto label_2b3bf0;
        case 0x2b3bf4u: goto label_2b3bf4;
        case 0x2b3bf8u: goto label_2b3bf8;
        case 0x2b3bfcu: goto label_2b3bfc;
        case 0x2b3c00u: goto label_2b3c00;
        case 0x2b3c04u: goto label_2b3c04;
        case 0x2b3c08u: goto label_2b3c08;
        case 0x2b3c0cu: goto label_2b3c0c;
        case 0x2b3c10u: goto label_2b3c10;
        case 0x2b3c14u: goto label_2b3c14;
        case 0x2b3c18u: goto label_2b3c18;
        case 0x2b3c1cu: goto label_2b3c1c;
        case 0x2b3c20u: goto label_2b3c20;
        case 0x2b3c24u: goto label_2b3c24;
        case 0x2b3c28u: goto label_2b3c28;
        case 0x2b3c2cu: goto label_2b3c2c;
        case 0x2b3c30u: goto label_2b3c30;
        case 0x2b3c34u: goto label_2b3c34;
        case 0x2b3c38u: goto label_2b3c38;
        case 0x2b3c3cu: goto label_2b3c3c;
        case 0x2b3c40u: goto label_2b3c40;
        case 0x2b3c44u: goto label_2b3c44;
        case 0x2b3c48u: goto label_2b3c48;
        case 0x2b3c4cu: goto label_2b3c4c;
        case 0x2b3c50u: goto label_2b3c50;
        case 0x2b3c54u: goto label_2b3c54;
        case 0x2b3c58u: goto label_2b3c58;
        case 0x2b3c5cu: goto label_2b3c5c;
        case 0x2b3c60u: goto label_2b3c60;
        case 0x2b3c64u: goto label_2b3c64;
        case 0x2b3c68u: goto label_2b3c68;
        case 0x2b3c6cu: goto label_2b3c6c;
        case 0x2b3c70u: goto label_2b3c70;
        case 0x2b3c74u: goto label_2b3c74;
        case 0x2b3c78u: goto label_2b3c78;
        case 0x2b3c7cu: goto label_2b3c7c;
        case 0x2b3c80u: goto label_2b3c80;
        case 0x2b3c84u: goto label_2b3c84;
        case 0x2b3c88u: goto label_2b3c88;
        case 0x2b3c8cu: goto label_2b3c8c;
        case 0x2b3c90u: goto label_2b3c90;
        case 0x2b3c94u: goto label_2b3c94;
        case 0x2b3c98u: goto label_2b3c98;
        case 0x2b3c9cu: goto label_2b3c9c;
        case 0x2b3ca0u: goto label_2b3ca0;
        case 0x2b3ca4u: goto label_2b3ca4;
        case 0x2b3ca8u: goto label_2b3ca8;
        case 0x2b3cacu: goto label_2b3cac;
        case 0x2b3cb0u: goto label_2b3cb0;
        case 0x2b3cb4u: goto label_2b3cb4;
        case 0x2b3cb8u: goto label_2b3cb8;
        case 0x2b3cbcu: goto label_2b3cbc;
        case 0x2b3cc0u: goto label_2b3cc0;
        case 0x2b3cc4u: goto label_2b3cc4;
        case 0x2b3cc8u: goto label_2b3cc8;
        case 0x2b3cccu: goto label_2b3ccc;
        case 0x2b3cd0u: goto label_2b3cd0;
        case 0x2b3cd4u: goto label_2b3cd4;
        case 0x2b3cd8u: goto label_2b3cd8;
        case 0x2b3cdcu: goto label_2b3cdc;
        case 0x2b3ce0u: goto label_2b3ce0;
        case 0x2b3ce4u: goto label_2b3ce4;
        case 0x2b3ce8u: goto label_2b3ce8;
        case 0x2b3cecu: goto label_2b3cec;
        case 0x2b3cf0u: goto label_2b3cf0;
        case 0x2b3cf4u: goto label_2b3cf4;
        case 0x2b3cf8u: goto label_2b3cf8;
        case 0x2b3cfcu: goto label_2b3cfc;
        case 0x2b3d00u: goto label_2b3d00;
        case 0x2b3d04u: goto label_2b3d04;
        case 0x2b3d08u: goto label_2b3d08;
        case 0x2b3d0cu: goto label_2b3d0c;
        case 0x2b3d10u: goto label_2b3d10;
        case 0x2b3d14u: goto label_2b3d14;
        case 0x2b3d18u: goto label_2b3d18;
        case 0x2b3d1cu: goto label_2b3d1c;
        case 0x2b3d20u: goto label_2b3d20;
        case 0x2b3d24u: goto label_2b3d24;
        case 0x2b3d28u: goto label_2b3d28;
        case 0x2b3d2cu: goto label_2b3d2c;
        case 0x2b3d30u: goto label_2b3d30;
        case 0x2b3d34u: goto label_2b3d34;
        case 0x2b3d38u: goto label_2b3d38;
        case 0x2b3d3cu: goto label_2b3d3c;
        case 0x2b3d40u: goto label_2b3d40;
        case 0x2b3d44u: goto label_2b3d44;
        case 0x2b3d48u: goto label_2b3d48;
        case 0x2b3d4cu: goto label_2b3d4c;
        case 0x2b3d50u: goto label_2b3d50;
        case 0x2b3d54u: goto label_2b3d54;
        case 0x2b3d58u: goto label_2b3d58;
        case 0x2b3d5cu: goto label_2b3d5c;
        case 0x2b3d60u: goto label_2b3d60;
        case 0x2b3d64u: goto label_2b3d64;
        case 0x2b3d68u: goto label_2b3d68;
        case 0x2b3d6cu: goto label_2b3d6c;
        case 0x2b3d70u: goto label_2b3d70;
        case 0x2b3d74u: goto label_2b3d74;
        case 0x2b3d78u: goto label_2b3d78;
        case 0x2b3d7cu: goto label_2b3d7c;
        case 0x2b3d80u: goto label_2b3d80;
        case 0x2b3d84u: goto label_2b3d84;
        case 0x2b3d88u: goto label_2b3d88;
        case 0x2b3d8cu: goto label_2b3d8c;
        case 0x2b3d90u: goto label_2b3d90;
        case 0x2b3d94u: goto label_2b3d94;
        case 0x2b3d98u: goto label_2b3d98;
        case 0x2b3d9cu: goto label_2b3d9c;
        case 0x2b3da0u: goto label_2b3da0;
        case 0x2b3da4u: goto label_2b3da4;
        case 0x2b3da8u: goto label_2b3da8;
        case 0x2b3dacu: goto label_2b3dac;
        case 0x2b3db0u: goto label_2b3db0;
        case 0x2b3db4u: goto label_2b3db4;
        case 0x2b3db8u: goto label_2b3db8;
        case 0x2b3dbcu: goto label_2b3dbc;
        case 0x2b3dc0u: goto label_2b3dc0;
        case 0x2b3dc4u: goto label_2b3dc4;
        case 0x2b3dc8u: goto label_2b3dc8;
        case 0x2b3dccu: goto label_2b3dcc;
        case 0x2b3dd0u: goto label_2b3dd0;
        case 0x2b3dd4u: goto label_2b3dd4;
        case 0x2b3dd8u: goto label_2b3dd8;
        case 0x2b3ddcu: goto label_2b3ddc;
        case 0x2b3de0u: goto label_2b3de0;
        case 0x2b3de4u: goto label_2b3de4;
        case 0x2b3de8u: goto label_2b3de8;
        case 0x2b3decu: goto label_2b3dec;
        case 0x2b3df0u: goto label_2b3df0;
        case 0x2b3df4u: goto label_2b3df4;
        case 0x2b3df8u: goto label_2b3df8;
        case 0x2b3dfcu: goto label_2b3dfc;
        case 0x2b3e00u: goto label_2b3e00;
        case 0x2b3e04u: goto label_2b3e04;
        case 0x2b3e08u: goto label_2b3e08;
        case 0x2b3e0cu: goto label_2b3e0c;
        case 0x2b3e10u: goto label_2b3e10;
        case 0x2b3e14u: goto label_2b3e14;
        case 0x2b3e18u: goto label_2b3e18;
        case 0x2b3e1cu: goto label_2b3e1c;
        case 0x2b3e20u: goto label_2b3e20;
        case 0x2b3e24u: goto label_2b3e24;
        case 0x2b3e28u: goto label_2b3e28;
        case 0x2b3e2cu: goto label_2b3e2c;
        case 0x2b3e30u: goto label_2b3e30;
        case 0x2b3e34u: goto label_2b3e34;
        case 0x2b3e38u: goto label_2b3e38;
        case 0x2b3e3cu: goto label_2b3e3c;
        case 0x2b3e40u: goto label_2b3e40;
        case 0x2b3e44u: goto label_2b3e44;
        case 0x2b3e48u: goto label_2b3e48;
        case 0x2b3e4cu: goto label_2b3e4c;
        case 0x2b3e50u: goto label_2b3e50;
        case 0x2b3e54u: goto label_2b3e54;
        case 0x2b3e58u: goto label_2b3e58;
        case 0x2b3e5cu: goto label_2b3e5c;
        case 0x2b3e60u: goto label_2b3e60;
        case 0x2b3e64u: goto label_2b3e64;
        case 0x2b3e68u: goto label_2b3e68;
        case 0x2b3e6cu: goto label_2b3e6c;
        case 0x2b3e70u: goto label_2b3e70;
        case 0x2b3e74u: goto label_2b3e74;
        case 0x2b3e78u: goto label_2b3e78;
        case 0x2b3e7cu: goto label_2b3e7c;
        case 0x2b3e80u: goto label_2b3e80;
        case 0x2b3e84u: goto label_2b3e84;
        case 0x2b3e88u: goto label_2b3e88;
        case 0x2b3e8cu: goto label_2b3e8c;
        case 0x2b3e90u: goto label_2b3e90;
        case 0x2b3e94u: goto label_2b3e94;
        case 0x2b3e98u: goto label_2b3e98;
        case 0x2b3e9cu: goto label_2b3e9c;
        case 0x2b3ea0u: goto label_2b3ea0;
        case 0x2b3ea4u: goto label_2b3ea4;
        case 0x2b3ea8u: goto label_2b3ea8;
        case 0x2b3eacu: goto label_2b3eac;
        case 0x2b3eb0u: goto label_2b3eb0;
        case 0x2b3eb4u: goto label_2b3eb4;
        case 0x2b3eb8u: goto label_2b3eb8;
        case 0x2b3ebcu: goto label_2b3ebc;
        case 0x2b3ec0u: goto label_2b3ec0;
        case 0x2b3ec4u: goto label_2b3ec4;
        case 0x2b3ec8u: goto label_2b3ec8;
        case 0x2b3eccu: goto label_2b3ecc;
        case 0x2b3ed0u: goto label_2b3ed0;
        case 0x2b3ed4u: goto label_2b3ed4;
        case 0x2b3ed8u: goto label_2b3ed8;
        case 0x2b3edcu: goto label_2b3edc;
        case 0x2b3ee0u: goto label_2b3ee0;
        case 0x2b3ee4u: goto label_2b3ee4;
        case 0x2b3ee8u: goto label_2b3ee8;
        case 0x2b3eecu: goto label_2b3eec;
        case 0x2b3ef0u: goto label_2b3ef0;
        case 0x2b3ef4u: goto label_2b3ef4;
        case 0x2b3ef8u: goto label_2b3ef8;
        case 0x2b3efcu: goto label_2b3efc;
        case 0x2b3f00u: goto label_2b3f00;
        case 0x2b3f04u: goto label_2b3f04;
        case 0x2b3f08u: goto label_2b3f08;
        case 0x2b3f0cu: goto label_2b3f0c;
        case 0x2b3f10u: goto label_2b3f10;
        case 0x2b3f14u: goto label_2b3f14;
        case 0x2b3f18u: goto label_2b3f18;
        case 0x2b3f1cu: goto label_2b3f1c;
        case 0x2b3f20u: goto label_2b3f20;
        case 0x2b3f24u: goto label_2b3f24;
        case 0x2b3f28u: goto label_2b3f28;
        case 0x2b3f2cu: goto label_2b3f2c;
        case 0x2b3f30u: goto label_2b3f30;
        case 0x2b3f34u: goto label_2b3f34;
        case 0x2b3f38u: goto label_2b3f38;
        case 0x2b3f3cu: goto label_2b3f3c;
        case 0x2b3f40u: goto label_2b3f40;
        case 0x2b3f44u: goto label_2b3f44;
        case 0x2b3f48u: goto label_2b3f48;
        case 0x2b3f4cu: goto label_2b3f4c;
        case 0x2b3f50u: goto label_2b3f50;
        case 0x2b3f54u: goto label_2b3f54;
        case 0x2b3f58u: goto label_2b3f58;
        case 0x2b3f5cu: goto label_2b3f5c;
        case 0x2b3f60u: goto label_2b3f60;
        case 0x2b3f64u: goto label_2b3f64;
        case 0x2b3f68u: goto label_2b3f68;
        case 0x2b3f6cu: goto label_2b3f6c;
        case 0x2b3f70u: goto label_2b3f70;
        case 0x2b3f74u: goto label_2b3f74;
        case 0x2b3f78u: goto label_2b3f78;
        case 0x2b3f7cu: goto label_2b3f7c;
        case 0x2b3f80u: goto label_2b3f80;
        case 0x2b3f84u: goto label_2b3f84;
        case 0x2b3f88u: goto label_2b3f88;
        case 0x2b3f8cu: goto label_2b3f8c;
        case 0x2b3f90u: goto label_2b3f90;
        case 0x2b3f94u: goto label_2b3f94;
        case 0x2b3f98u: goto label_2b3f98;
        case 0x2b3f9cu: goto label_2b3f9c;
        case 0x2b3fa0u: goto label_2b3fa0;
        case 0x2b3fa4u: goto label_2b3fa4;
        case 0x2b3fa8u: goto label_2b3fa8;
        case 0x2b3facu: goto label_2b3fac;
        case 0x2b3fb0u: goto label_2b3fb0;
        case 0x2b3fb4u: goto label_2b3fb4;
        case 0x2b3fb8u: goto label_2b3fb8;
        case 0x2b3fbcu: goto label_2b3fbc;
        case 0x2b3fc0u: goto label_2b3fc0;
        case 0x2b3fc4u: goto label_2b3fc4;
        case 0x2b3fc8u: goto label_2b3fc8;
        case 0x2b3fccu: goto label_2b3fcc;
        case 0x2b3fd0u: goto label_2b3fd0;
        case 0x2b3fd4u: goto label_2b3fd4;
        case 0x2b3fd8u: goto label_2b3fd8;
        case 0x2b3fdcu: goto label_2b3fdc;
        case 0x2b3fe0u: goto label_2b3fe0;
        case 0x2b3fe4u: goto label_2b3fe4;
        case 0x2b3fe8u: goto label_2b3fe8;
        case 0x2b3fecu: goto label_2b3fec;
        case 0x2b3ff0u: goto label_2b3ff0;
        case 0x2b3ff4u: goto label_2b3ff4;
        case 0x2b3ff8u: goto label_2b3ff8;
        case 0x2b3ffcu: goto label_2b3ffc;
        case 0x2b4000u: goto label_2b4000;
        case 0x2b4004u: goto label_2b4004;
        case 0x2b4008u: goto label_2b4008;
        case 0x2b400cu: goto label_2b400c;
        case 0x2b4010u: goto label_2b4010;
        case 0x2b4014u: goto label_2b4014;
        case 0x2b4018u: goto label_2b4018;
        case 0x2b401cu: goto label_2b401c;
        case 0x2b4020u: goto label_2b4020;
        case 0x2b4024u: goto label_2b4024;
        case 0x2b4028u: goto label_2b4028;
        case 0x2b402cu: goto label_2b402c;
        case 0x2b4030u: goto label_2b4030;
        case 0x2b4034u: goto label_2b4034;
        case 0x2b4038u: goto label_2b4038;
        case 0x2b403cu: goto label_2b403c;
        case 0x2b4040u: goto label_2b4040;
        case 0x2b4044u: goto label_2b4044;
        case 0x2b4048u: goto label_2b4048;
        case 0x2b404cu: goto label_2b404c;
        case 0x2b4050u: goto label_2b4050;
        case 0x2b4054u: goto label_2b4054;
        case 0x2b4058u: goto label_2b4058;
        case 0x2b405cu: goto label_2b405c;
        case 0x2b4060u: goto label_2b4060;
        case 0x2b4064u: goto label_2b4064;
        case 0x2b4068u: goto label_2b4068;
        case 0x2b406cu: goto label_2b406c;
        case 0x2b4070u: goto label_2b4070;
        case 0x2b4074u: goto label_2b4074;
        case 0x2b4078u: goto label_2b4078;
        case 0x2b407cu: goto label_2b407c;
        case 0x2b4080u: goto label_2b4080;
        case 0x2b4084u: goto label_2b4084;
        case 0x2b4088u: goto label_2b4088;
        case 0x2b408cu: goto label_2b408c;
        case 0x2b4090u: goto label_2b4090;
        case 0x2b4094u: goto label_2b4094;
        case 0x2b4098u: goto label_2b4098;
        case 0x2b409cu: goto label_2b409c;
        case 0x2b40a0u: goto label_2b40a0;
        case 0x2b40a4u: goto label_2b40a4;
        case 0x2b40a8u: goto label_2b40a8;
        case 0x2b40acu: goto label_2b40ac;
        case 0x2b40b0u: goto label_2b40b0;
        case 0x2b40b4u: goto label_2b40b4;
        case 0x2b40b8u: goto label_2b40b8;
        case 0x2b40bcu: goto label_2b40bc;
        case 0x2b40c0u: goto label_2b40c0;
        case 0x2b40c4u: goto label_2b40c4;
        case 0x2b40c8u: goto label_2b40c8;
        case 0x2b40ccu: goto label_2b40cc;
        case 0x2b40d0u: goto label_2b40d0;
        case 0x2b40d4u: goto label_2b40d4;
        case 0x2b40d8u: goto label_2b40d8;
        case 0x2b40dcu: goto label_2b40dc;
        case 0x2b40e0u: goto label_2b40e0;
        case 0x2b40e4u: goto label_2b40e4;
        case 0x2b40e8u: goto label_2b40e8;
        case 0x2b40ecu: goto label_2b40ec;
        case 0x2b40f0u: goto label_2b40f0;
        case 0x2b40f4u: goto label_2b40f4;
        case 0x2b40f8u: goto label_2b40f8;
        case 0x2b40fcu: goto label_2b40fc;
        case 0x2b4100u: goto label_2b4100;
        case 0x2b4104u: goto label_2b4104;
        case 0x2b4108u: goto label_2b4108;
        case 0x2b410cu: goto label_2b410c;
        case 0x2b4110u: goto label_2b4110;
        case 0x2b4114u: goto label_2b4114;
        case 0x2b4118u: goto label_2b4118;
        case 0x2b411cu: goto label_2b411c;
        case 0x2b4120u: goto label_2b4120;
        case 0x2b4124u: goto label_2b4124;
        case 0x2b4128u: goto label_2b4128;
        case 0x2b412cu: goto label_2b412c;
        case 0x2b4130u: goto label_2b4130;
        case 0x2b4134u: goto label_2b4134;
        case 0x2b4138u: goto label_2b4138;
        case 0x2b413cu: goto label_2b413c;
        case 0x2b4140u: goto label_2b4140;
        case 0x2b4144u: goto label_2b4144;
        case 0x2b4148u: goto label_2b4148;
        case 0x2b414cu: goto label_2b414c;
        case 0x2b4150u: goto label_2b4150;
        case 0x2b4154u: goto label_2b4154;
        case 0x2b4158u: goto label_2b4158;
        case 0x2b415cu: goto label_2b415c;
        case 0x2b4160u: goto label_2b4160;
        case 0x2b4164u: goto label_2b4164;
        case 0x2b4168u: goto label_2b4168;
        case 0x2b416cu: goto label_2b416c;
        case 0x2b4170u: goto label_2b4170;
        case 0x2b4174u: goto label_2b4174;
        case 0x2b4178u: goto label_2b4178;
        case 0x2b417cu: goto label_2b417c;
        case 0x2b4180u: goto label_2b4180;
        case 0x2b4184u: goto label_2b4184;
        case 0x2b4188u: goto label_2b4188;
        case 0x2b418cu: goto label_2b418c;
        case 0x2b4190u: goto label_2b4190;
        case 0x2b4194u: goto label_2b4194;
        case 0x2b4198u: goto label_2b4198;
        case 0x2b419cu: goto label_2b419c;
        case 0x2b41a0u: goto label_2b41a0;
        case 0x2b41a4u: goto label_2b41a4;
        case 0x2b41a8u: goto label_2b41a8;
        case 0x2b41acu: goto label_2b41ac;
        case 0x2b41b0u: goto label_2b41b0;
        case 0x2b41b4u: goto label_2b41b4;
        case 0x2b41b8u: goto label_2b41b8;
        case 0x2b41bcu: goto label_2b41bc;
        case 0x2b41c0u: goto label_2b41c0;
        case 0x2b41c4u: goto label_2b41c4;
        case 0x2b41c8u: goto label_2b41c8;
        case 0x2b41ccu: goto label_2b41cc;
        case 0x2b41d0u: goto label_2b41d0;
        case 0x2b41d4u: goto label_2b41d4;
        case 0x2b41d8u: goto label_2b41d8;
        case 0x2b41dcu: goto label_2b41dc;
        case 0x2b41e0u: goto label_2b41e0;
        case 0x2b41e4u: goto label_2b41e4;
        case 0x2b41e8u: goto label_2b41e8;
        case 0x2b41ecu: goto label_2b41ec;
        case 0x2b41f0u: goto label_2b41f0;
        case 0x2b41f4u: goto label_2b41f4;
        case 0x2b41f8u: goto label_2b41f8;
        case 0x2b41fcu: goto label_2b41fc;
        case 0x2b4200u: goto label_2b4200;
        case 0x2b4204u: goto label_2b4204;
        case 0x2b4208u: goto label_2b4208;
        case 0x2b420cu: goto label_2b420c;
        case 0x2b4210u: goto label_2b4210;
        case 0x2b4214u: goto label_2b4214;
        case 0x2b4218u: goto label_2b4218;
        case 0x2b421cu: goto label_2b421c;
        case 0x2b4220u: goto label_2b4220;
        case 0x2b4224u: goto label_2b4224;
        case 0x2b4228u: goto label_2b4228;
        case 0x2b422cu: goto label_2b422c;
        case 0x2b4230u: goto label_2b4230;
        case 0x2b4234u: goto label_2b4234;
        case 0x2b4238u: goto label_2b4238;
        case 0x2b423cu: goto label_2b423c;
        case 0x2b4240u: goto label_2b4240;
        case 0x2b4244u: goto label_2b4244;
        case 0x2b4248u: goto label_2b4248;
        case 0x2b424cu: goto label_2b424c;
        case 0x2b4250u: goto label_2b4250;
        case 0x2b4254u: goto label_2b4254;
        case 0x2b4258u: goto label_2b4258;
        case 0x2b425cu: goto label_2b425c;
        default: return;
    }

label_2b3a90:
    // 0x2b3a90: 0x40000003  .word       0x40000003                   # mfc0        $zero, Index # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3a90u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3a94:
    // 0x2b3a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3a98:
    // 0x2b3a98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3a98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3a9c:
    // 0x2b3a9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3aa0:
    // 0x2b3aa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3aa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3aa4:
    // 0x2b3aa4: 0x1559cec  .word       0x01559CEC                   # dadd        $s3, $t2, $s5 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3aa4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 10); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_2b3aa8:
    // 0x2b3aa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3aa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3aac:
    // 0x2b3aac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3aacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ab0:
    // 0x2b3ab0: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2b3ab0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2b3ab4:
    // 0x2b3ab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ab8:
    // 0x2b3ab8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3ab8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3abc:
    // 0x2b3abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ac0:
    // 0x2b3ac0: 0x520c079e  beql        $s0, $t4, . + 4 + (0x79E << 2)
label_2b3ac4:
    if (ctx->pc == 0x2B3AC4u) {
        ctx->pc = 0x2B3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AC0u;
        // 0x2b3ac4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3AC8u;
        goto label_2b3ac8;
    }
    ctx->pc = 0x2B3AC0u;
    {
        const bool branch_taken_0x2b3ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b3ac0) {
            ctx->pc = 0x2B3AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3AC0u;
            // 0x2b3ac4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B593Cu;
            { ctx->pc = 0x2b593c; return; }
        }
    }
    ctx->pc = 0x2B3AC8u;
label_2b3ac8:
    // 0x2b3ac8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3ac8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3acc:
    // 0x2b3acc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3accu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ad0:
    // 0x2b3ad0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b3ad0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b3ad4:
    // 0x2b3ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ad8:
    // 0x2b3ad8: 0x9041005  j           func_4104014
label_2b3adc:
    if (ctx->pc == 0x2B3ADCu) {
        ctx->pc = 0x2B3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AD8u;
        // 0x2b3adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3AE0u;
        goto label_2b3ae0;
    }
    ctx->pc = 0x2B3AD8u;
    ctx->pc = 0x2B3ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AD8u;
    // 0x2b3adc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104014u, 0x2B3AD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3AE0u;
label_2b3ae0:
    // 0x2b3ae0: 0x88e1005  j           func_2384014
label_2b3ae4:
    if (ctx->pc == 0x2B3AE4u) {
        ctx->pc = 0x2B3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AE0u;
        // 0x2b3ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3AE8u;
        goto label_2b3ae8;
    }
    ctx->pc = 0x2B3AE0u;
    ctx->pc = 0x2B3AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3AE0u;
    // 0x2b3ae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384014u, 0x2B3AE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3AE8u;
label_2b3ae8:
    // 0x2b3ae8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3ae8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3aec:
    // 0x2b3aec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3aecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3af0:
    // 0x2b3af0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3af0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3af4:
    // 0x2b3af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3af8:
    // 0x2b3af8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3af8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3afc:
    // 0x2b3afc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3afcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b00:
    // 0x2b3b00: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2b3b04:
    if (ctx->pc == 0x2B3B04u) {
        ctx->pc = 0x2B3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B00u;
        // 0x2b3b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B08u;
        goto label_2b3b08;
    }
    ctx->pc = 0x2B3B00u;
    {
        const bool branch_taken_0x2b3b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B00u;
        // 0x2b3b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b00) {
            ctx->pc = 0x2BBB08u;
            { ctx->pc = 0x2bbb08; return; }
        }
    }
    ctx->pc = 0x2B3B08u;
label_2b3b08:
    // 0x2b3b08: 0xb041005  j           func_C104014
label_2b3b0c:
    if (ctx->pc == 0x2B3B0Cu) {
        ctx->pc = 0x2B3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B08u;
        // 0x2b3b0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B10u;
        goto label_2b3b10;
    }
    ctx->pc = 0x2B3B08u;
    ctx->pc = 0x2B3B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B08u;
    // 0x2b3b0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104014u, 0x2B3B08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3B10u;
label_2b3b10:
    // 0x2b3b10: 0x5a002780  blezl       $s0, . + 4 + (0x2780 << 2)
label_2b3b14:
    if (ctx->pc == 0x2B3B14u) {
        ctx->pc = 0x2B3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B10u;
        // 0x2b3b14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B18u;
        goto label_2b3b18;
    }
    ctx->pc = 0x2B3B10u;
    {
        const bool branch_taken_0x2b3b10 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b3b10) {
            ctx->pc = 0x2B3B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B10u;
            // 0x2b3b14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD914u;
            { ctx->pc = 0x2bd914; return; }
        }
    }
    ctx->pc = 0x2B3B18u;
label_2b3b18:
    // 0x2b3b18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b1c:
    // 0x2b3b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b20:
    // 0x2b3b20: 0x500e0003  beql        $zero, $t6, . + 4 + (0x3 << 2)
label_2b3b24:
    if (ctx->pc == 0x2B3B24u) {
        ctx->pc = 0x2B3B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B20u;
        // 0x2b3b24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B28u;
        goto label_2b3b28;
    }
    ctx->pc = 0x2B3B20u;
    {
        const bool branch_taken_0x2b3b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b3b20) {
            ctx->pc = 0x2B3B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B20u;
            // 0x2b3b24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3B30u;
            goto label_2b3b30;
        }
    }
    ctx->pc = 0x2B3B28u;
label_2b3b28:
    // 0x2b3b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b2c:
    // 0x2b3b2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b30:
    // 0x2b3b30: 0x400001d3  .word       0x400001D3                   # mfc0        $zero, Index # 000001D3 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3b30u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3b34:
    // 0x2b3b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b38:
    // 0x2b3b38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b3c:
    // 0x2b3b3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b40:
    // 0x2b3b40: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2b3b44:
    if (ctx->pc == 0x2B3B44u) {
        ctx->pc = 0x2B3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B40u;
        // 0x2b3b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B48u;
        goto label_2b3b48;
    }
    ctx->pc = 0x2B3B40u;
    {
        const bool branch_taken_0x2b3b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B40u;
        // 0x2b3b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b40) {
            ctx->pc = 0x2B7E6Cu;
            { ctx->pc = 0x2b7e6c; return; }
        }
    }
    ctx->pc = 0x2B3B48u;
label_2b3b48:
    // 0x2b3b48: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b3b48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b3b4c:
    // 0x2b3b4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b50:
    // 0x2b3b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b54:
    // 0x2b3b54: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3b54u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3b58:
    // 0x2b3b58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b5c:
    // 0x2b3b5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b60:
    // 0x2b3b60: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b3b60u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b3b64:
    // 0x2b3b64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b68:
    // 0x2b3b68: 0x88e0805  j           func_2382014
label_2b3b6c:
    if (ctx->pc == 0x2B3B6Cu) {
        ctx->pc = 0x2B3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B68u;
        // 0x2b3b6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B70u;
        goto label_2b3b70;
    }
    ctx->pc = 0x2B3B68u;
    ctx->pc = 0x2B3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3B68u;
    // 0x2b3b6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2382014u, 0x2B3B68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3B70u;
label_2b3b70:
    // 0x2b3b70: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2b3b70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2b3b74:
    // 0x2b3b74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b78:
    // 0x2b3b78: 0x52010037  beql        $s0, $at, . + 4 + (0x37 << 2)
label_2b3b7c:
    if (ctx->pc == 0x2B3B7Cu) {
        ctx->pc = 0x2B3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B78u;
        // 0x2b3b7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B80u;
        goto label_2b3b80;
    }
    ctx->pc = 0x2B3B78u;
    {
        const bool branch_taken_0x2b3b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3b78) {
            ctx->pc = 0x2B3B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B78u;
            // 0x2b3b7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C58u;
            goto label_2b3c58;
        }
    }
    ctx->pc = 0x2B3B80u;
label_2b3b80:
    // 0x2b3b80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b84:
    // 0x2b3b84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b88:
    // 0x2b3b88: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2b3b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2b3b8c:
    // 0x2b3b8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3b90:
    // 0x2b3b90: 0x52010034  beql        $s0, $at, . + 4 + (0x34 << 2)
label_2b3b94:
    if (ctx->pc == 0x2B3B94u) {
        ctx->pc = 0x2B3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B90u;
        // 0x2b3b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3B98u;
        goto label_2b3b98;
    }
    ctx->pc = 0x2B3B90u;
    {
        const bool branch_taken_0x2b3b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3b90) {
            ctx->pc = 0x2B3B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3B90u;
            // 0x2b3b94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C64u;
            goto label_2b3c64;
        }
    }
    ctx->pc = 0x2B3B98u;
label_2b3b98:
    // 0x2b3b98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3b98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3b9c:
    // 0x2b3b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ba0:
    // 0x2b3ba0: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2b3ba0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2b3ba4:
    // 0x2b3ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ba8:
    // 0x2b3ba8: 0x52010031  beql        $s0, $at, . + 4 + (0x31 << 2)
label_2b3bac:
    if (ctx->pc == 0x2B3BACu) {
        ctx->pc = 0x2B3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BA8u;
        // 0x2b3bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3BB0u;
        goto label_2b3bb0;
    }
    ctx->pc = 0x2B3BA8u;
    {
        const bool branch_taken_0x2b3ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3ba8) {
            ctx->pc = 0x2B3BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BA8u;
            // 0x2b3bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C70u;
            goto label_2b3c70;
        }
    }
    ctx->pc = 0x2B3BB0u;
label_2b3bb0:
    // 0x2b3bb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3bb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3bb4:
    // 0x2b3bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3bb8:
    // 0x2b3bb8: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2b3bb8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2b3bbc:
    // 0x2b3bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3bc0:
    // 0x2b3bc0: 0x5201002e  beql        $s0, $at, . + 4 + (0x2E << 2)
label_2b3bc4:
    if (ctx->pc == 0x2B3BC4u) {
        ctx->pc = 0x2B3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BC0u;
        // 0x2b3bc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3BC8u;
        goto label_2b3bc8;
    }
    ctx->pc = 0x2B3BC0u;
    {
        const bool branch_taken_0x2b3bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3bc0) {
            ctx->pc = 0x2B3BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BC0u;
            // 0x2b3bc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C7Cu;
            goto label_2b3c7c;
        }
    }
    ctx->pc = 0x2B3BC8u;
label_2b3bc8:
    // 0x2b3bc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3bc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3bcc:
    // 0x2b3bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3bd0:
    // 0x2b3bd0: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2b3bd0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2b3bd4:
    // 0x2b3bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3bd8:
    // 0x2b3bd8: 0x5201002b  beql        $s0, $at, . + 4 + (0x2B << 2)
label_2b3bdc:
    if (ctx->pc == 0x2B3BDCu) {
        ctx->pc = 0x2B3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BD8u;
        // 0x2b3bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3BE0u;
        goto label_2b3be0;
    }
    ctx->pc = 0x2B3BD8u;
    {
        const bool branch_taken_0x2b3bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3bd8) {
            ctx->pc = 0x2B3BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BD8u;
            // 0x2b3bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C88u;
            goto label_2b3c88;
        }
    }
    ctx->pc = 0x2B3BE0u;
label_2b3be0:
    // 0x2b3be0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3be0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3be4:
    // 0x2b3be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3be8:
    // 0x2b3be8: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2b3be8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2b3bec:
    // 0x2b3bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3bf0:
    // 0x2b3bf0: 0x52010028  beql        $s0, $at, . + 4 + (0x28 << 2)
label_2b3bf4:
    if (ctx->pc == 0x2B3BF4u) {
        ctx->pc = 0x2B3BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BF0u;
        // 0x2b3bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3BF8u;
        goto label_2b3bf8;
    }
    ctx->pc = 0x2B3BF0u;
    {
        const bool branch_taken_0x2b3bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3bf0) {
            ctx->pc = 0x2B3BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3BF0u;
            // 0x2b3bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3C94u;
            goto label_2b3c94;
        }
    }
    ctx->pc = 0x2B3BF8u;
label_2b3bf8:
    // 0x2b3bf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3bf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3bfc:
    // 0x2b3bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c00:
    // 0x2b3c00: 0x120f704b  beq         $s0, $t7, . + 4 + (0x704B << 2)
label_2b3c04:
    if (ctx->pc == 0x2B3C04u) {
        ctx->pc = 0x2B3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C00u;
        // 0x2b3c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3C08u;
        goto label_2b3c08;
    }
    ctx->pc = 0x2B3C00u;
    {
        const bool branch_taken_0x2b3c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C00u;
        // 0x2b3c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c00) {
            ctx->pc = 0x2CFD30u;
            return;
        }
    }
    ctx->pc = 0x2B3C08u;
label_2b3c08:
    // 0x2b3c08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c0c:
    // 0x2b3c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c10:
    // 0x2b3c10: 0x5a00781d  blezl       $s0, . + 4 + (0x781D << 2)
label_2b3c14:
    if (ctx->pc == 0x2B3C14u) {
        ctx->pc = 0x2B3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C10u;
        // 0x2b3c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3C18u;
        goto label_2b3c18;
    }
    ctx->pc = 0x2B3C10u;
    {
        const bool branch_taken_0x2b3c10 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2b3c10) {
            ctx->pc = 0x2B3C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3C10u;
            // 0x2b3c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C88u;
            return;
        }
    }
    ctx->pc = 0x2B3C18u;
label_2b3c18:
    // 0x2b3c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c1c:
    // 0x2b3c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c20:
    // 0x2b3c20: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2b3c24:
    if (ctx->pc == 0x2B3C24u) {
        ctx->pc = 0x2B3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C20u;
        // 0x2b3c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3C28u;
        goto label_2b3c28;
    }
    ctx->pc = 0x2B3C20u;
    {
        const bool branch_taken_0x2b3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C20u;
        // 0x2b3c24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c20) {
            ctx->pc = 0x2CFC6Cu;
            return;
        }
    }
    ctx->pc = 0x2B3C28u;
label_2b3c28:
    // 0x2b3c28: 0x1d61ffa  .word       0x01D61FFA                   # dsrl        $v1, $s6, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> 31);
label_2b3c2c:
    // 0x2b3c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c30:
    // 0x2b3c30: 0x1d71ffc  .word       0x01D71FFC                   # dsll32      $v1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 31));
label_2b3c34:
    // 0x2b3c34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c38:
    // 0x2b3c38: 0x1d81ffe  .word       0x01D81FFE                   # dsrl32      $v1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) >> (32 + 31));
label_2b3c3c:
    // 0x2b3c3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c40:
    // 0x2b3c40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c44:
    // 0x2b3c44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c48:
    // 0x2b3c48: 0x1f93ff8  .word       0x01F93FF8                   # dsll        $a3, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) << 31);
label_2b3c4c:
    // 0x2b3c4c: 0x960582  .word       0x00960582                   # srl         $zero, $s6, 22 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c4cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 22), 22));
label_2b3c50:
    // 0x2b3c50: 0x1fb3ffb  .word       0x01FB3FFB                   # dsra        $a3, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c50u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 27) >> 31);
label_2b3c54:
    // 0x2b3c54: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2b3c58:
    // 0x2b3c58: 0x1fc3ffe  .word       0x01FC3FFE                   # dsrl32      $a3, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 28) >> (32 + 31));
label_2b3c5c:
    // 0x2b3c5c: 0x9705c2  .word       0x009705C2                   # srl         $zero, $s7, 23 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c5cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 23), 23));
label_2b3c60:
    // 0x2b3c60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c64:
    // 0x2b3c64: 0x4005c3  .word       0x004005C3                   # sra         $zero, $zero, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 23));
label_2b3c68:
    // 0x2b3c68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c6c:
    // 0x2b3c6c: 0x980602  .word       0x00980602                   # srl         $zero, $t8, 24 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c6cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 24), 24));
label_2b3c70:
    // 0x2b3c70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c74:
    // 0x2b3c74: 0x400603  .word       0x00400603                   # sra         $zero, $zero, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 24));
label_2b3c78:
    // 0x2b3c78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c7c:
    // 0x2b3c7c: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c7cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2b3c80:
    // 0x2b3c80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c84:
    // 0x2b3c84: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c84u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2b3c88:
    // 0x2b3c88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3c88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3c8c:
    // 0x2b3c8c: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c8cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2b3c90:
    // 0x2b3c90: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2b3c94:
    // 0x2b3c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3c98:
    // 0x2b3c98: 0x3ef8803  .word       0x03EF8803                   # sra         $s1, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3c98u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 15), 0));
label_2b3c9c:
    // 0x2b3c9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3c9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ca0:
    // 0x2b3ca0: 0x3ef9006  srlv        $s2, $t7, $ra
    ctx->pc = 0x2b3ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b3ca4:
    // 0x2b3ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ca8:
    // 0x2b3ca8: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3ca8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B3CA8 raw=0x03EFC801");
 /* MITIGATED */
label_2b3cac:
    // 0x2b3cac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cb0:
    // 0x2b3cb0: 0x3efd804  sllv        $k1, $t7, $ra
    ctx->pc = 0x2b3cb0u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b3cb4:
    // 0x2b3cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cb8:
    // 0x2b3cb8: 0x3efe007  srav        $gp, $t7, $ra
    ctx->pc = 0x2b3cb8u;
    SET_GPR_S32(ctx, 28, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2b3cbc:
    // 0x2b3cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cc0:
    // 0x2b3cc0: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3cc0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2b3cc4:
    // 0x2b3cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cc8:
    // 0x2b3cc8: 0x3efb805  .word       0x03EFB805                   # INVALID     $ra, $t7, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3cc8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B3CC8 raw=0x03EFB805");
 /* MITIGATED */
label_2b3ccc:
    // 0x2b3ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cd0:
    // 0x2b3cd0: 0x3efc008  .word       0x03EFC008                   # jr          $ra # 000FC000 <InstrIdType: CPU_SPECIAL>
label_2b3cd4:
    if (ctx->pc == 0x2B3CD4u) {
        ctx->pc = 0x2B3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CD0u;
        // 0x2b3cd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3CD8u;
        goto label_2b3cd8;
    }
    ctx->pc = 0x2B3CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CD0u;
        // 0x2b3cd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3CD8u;
label_2b3cd8:
    // 0x2b3cd8: 0x100e7009  beq         $zero, $t6, . + 4 + (0x7009 << 2)
label_2b3cdc:
    if (ctx->pc == 0x2B3CDCu) {
        ctx->pc = 0x2B3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CD8u;
        // 0x2b3cdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3CE0u;
        goto label_2b3ce0;
    }
    ctx->pc = 0x2B3CD8u;
    {
        const bool branch_taken_0x2b3cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CD8u;
        // 0x2b3cdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cd8) {
            ctx->pc = 0x2CFD00u;
            return;
        }
    }
    ctx->pc = 0x2B3CE0u;
label_2b3ce0:
    // 0x2b3ce0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b3ce0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b3ce4:
    // 0x2b3ce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ce8:
    // 0x2b3ce8: 0xa8e0805  j           func_A382014
label_2b3cec:
    if (ctx->pc == 0x2B3CECu) {
        ctx->pc = 0x2B3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CE8u;
        // 0x2b3cec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3CF0u;
        goto label_2b3cf0;
    }
    ctx->pc = 0x2B3CE8u;
    ctx->pc = 0x2B3CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CE8u;
    // 0x2b3cec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382014u, 0x2B3CE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3CF0u;
label_2b3cf0:
    // 0x2b3cf0: 0x40000008  .word       0x40000008                   # mfc0        $zero, Index # 00000008 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3cf0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3cf4:
    // 0x2b3cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3cf8:
    // 0x2b3cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3cfc:
    // 0x2b3cfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3cfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d00:
    // 0x2b3d00: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2b3d00u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2b3d04:
    // 0x2b3d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d08:
    // 0x2b3d08: 0x420f000a  .word       0x420F000A                   # INVALID     $s0, $t7, 0xA # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b3d08u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xA at 0x2B3D08 raw=0x420F000A");
 /* MITIGATED */
label_2b3d0c:
    // 0x2b3d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d10:
    // 0x2b3d10: 0x100e00db  beq         $zero, $t6, . + 4 + (0xDB << 2)
label_2b3d14:
    if (ctx->pc == 0x2B3D14u) {
        ctx->pc = 0x2B3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D10u;
        // 0x2b3d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D18u;
        goto label_2b3d18;
    }
    ctx->pc = 0x2B3D10u;
    {
        const bool branch_taken_0x2b3d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D10u;
        // 0x2b3d14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d10) {
            ctx->pc = 0x2B4080u;
            goto label_2b4080;
        }
    }
    ctx->pc = 0x2B3D18u;
label_2b3d18:
    // 0x2b3d18: 0x420f0041  .word       0x420F0041                   # tlbr # 000F0040 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b3d18u;
    runtime->handleTLBR(rdram, ctx);
label_2b3d1c:
    // 0x2b3d1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d20:
    // 0x2b3d20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3d20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3d24:
    // 0x2b3d24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d28:
    // 0x2b3d28: 0x420f001c  .word       0x420F001C                   # INVALID     $s0, $t7, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b3d28u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2B3D28 raw=0x420F001C");
 /* MITIGATED */
label_2b3d2c:
    // 0x2b3d2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d30:
    // 0x2b3d30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3d30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3d34:
    // 0x2b3d34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d38:
    // 0x2b3d38: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2b3d3c:
    if (ctx->pc == 0x2B3D3Cu) {
        ctx->pc = 0x2B3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D38u;
        // 0x2b3d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D40u;
        goto label_2b3d40;
    }
    ctx->pc = 0x2B3D38u;
    {
        const bool branch_taken_0x2b3d38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D38u;
        // 0x2b3d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d38) {
            ctx->pc = 0x2B9D38u;
            { ctx->pc = 0x2b9d38; return; }
        }
    }
    ctx->pc = 0x2B3D40u;
label_2b3d40:
    // 0x2b3d40: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2b3d40u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2b3d44:
    // 0x2b3d44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d48:
    // 0x2b3d48: 0x400007a1  .word       0x400007A1                   # mfc0        $zero, Index # 000007A1 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b3d48u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b3d4c:
    // 0x2b3d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d50:
    // 0x2b3d50: 0xa213fff  j           func_884FFFC
label_2b3d54:
    if (ctx->pc == 0x2B3D54u) {
        ctx->pc = 0x2B3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D50u;
        // 0x2b3d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D58u;
        goto label_2b3d58;
    }
    ctx->pc = 0x2B3D50u;
    ctx->pc = 0x2B3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D50u;
    // 0x2b3d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2B3D50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3D58u;
label_2b3d58:
    // 0x2b3d58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3d58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3d5c:
    // 0x2b3d5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d60:
    // 0x2b3d60: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2b3d60u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2b3d64:
    // 0x2b3d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d68:
    // 0x2b3d68: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2b3d68u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2b3d6c:
    // 0x2b3d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d70:
    // 0x2b3d70: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2b3d70u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2b3d74:
    // 0x2b3d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d78:
    // 0x2b3d78: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2b3d78u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2b3d7c:
    // 0x2b3d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d80:
    // 0x2b3d80: 0x81eeab7f  lb          $t6, -0x5481($t7)
    ctx->pc = 0x2b3d80u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945663)));
label_2b3d84:
    // 0x2b3d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d88:
    // 0x2b3d88: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b3d8c:
    if (ctx->pc == 0x2B3D8Cu) {
        ctx->pc = 0x2B3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D88u;
        // 0x2b3d8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3D90u;
        goto label_2b3d90;
    }
    ctx->pc = 0x2B3D88u;
    {
        const bool branch_taken_0x2b3d88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D88u;
        // 0x2b3d8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d88) {
            ctx->pc = 0x2CFD90u;
            return;
        }
    }
    ctx->pc = 0x2B3D90u;
label_2b3d90:
    // 0x2b3d90: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2b3d90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b3d94:
    // 0x2b3d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3d98:
    // 0x2b3d98: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2b3d98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b3d9c:
    // 0x2b3d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3da0:
    // 0x2b3da0: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2b3da0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b3da4:
    // 0x2b3da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3da8:
    // 0x2b3da8: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2b3da8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b3dac:
    // 0x2b3dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3db0:
    // 0x2b3db0: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b3db4:
    if (ctx->pc == 0x2B3DB4u) {
        ctx->pc = 0x2B3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DB0u;
        // 0x2b3db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3DB8u;
        goto label_2b3db8;
    }
    ctx->pc = 0x2B3DB0u;
    {
        const bool branch_taken_0x2b3db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DB0u;
        // 0x2b3db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3db0) {
            ctx->pc = 0x2CFDB8u;
            return;
        }
    }
    ctx->pc = 0x2B3DB8u;
label_2b3db8:
    // 0x2b3db8: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2b3db8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b3dbc:
    // 0x2b3dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3dc0:
    // 0x2b3dc0: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2b3dc0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b3dc4:
    // 0x2b3dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3dc8:
    // 0x2b3dc8: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2b3dc8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b3dcc:
    // 0x2b3dcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3dd0:
    // 0x2b3dd0: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2b3dd0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b3dd4:
    // 0x2b3dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3dd8:
    // 0x2b3dd8: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2b3ddc:
    if (ctx->pc == 0x2B3DDCu) {
        ctx->pc = 0x2B3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DD8u;
        // 0x2b3ddc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3DE0u;
        goto label_2b3de0;
    }
    ctx->pc = 0x2B3DD8u;
    {
        const bool branch_taken_0x2b3dd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DD8u;
        // 0x2b3ddc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dd8) {
            ctx->pc = 0x2CFDE0u;
            return;
        }
    }
    ctx->pc = 0x2B3DE0u;
label_2b3de0:
    // 0x2b3de0: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2b3de0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2b3de4:
    // 0x2b3de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3de8:
    // 0x2b3de8: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2b3de8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2b3dec:
    // 0x2b3dec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3decu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3df0:
    // 0x2b3df0: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2b3df0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2b3df4:
    // 0x2b3df4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3df8:
    // 0x2b3df8: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2b3df8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2b3dfc:
    // 0x2b3dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e00:
    // 0x2b3e00: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b3e00u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B3E00 raw=0x48007800");
 /* MITIGATED */
label_2b3e04:
    // 0x2b3e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e08:
    // 0x2b3e08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3e08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3e0c:
    // 0x2b3e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e10:
    // 0x2b3e10: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2b3e10u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2b3e14:
    // 0x2b3e14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e18:
    // 0x2b3e18: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2b3e18u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b3e1c:
    // 0x2b3e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e20:
    // 0x2b3e20: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2b3e20u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b3e24:
    // 0x2b3e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e28:
    // 0x2b3e28: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2b3e28u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b3e2c:
    // 0x2b3e2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e30:
    // 0x2b3e30: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2b3e30u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b3e34:
    // 0x2b3e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e38:
    // 0x2b3e38: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b3e3c:
    if (ctx->pc == 0x2B3E3Cu) {
        ctx->pc = 0x2B3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E38u;
        // 0x2b3e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E40u;
        goto label_2b3e40;
    }
    ctx->pc = 0x2B3E38u;
    {
        const bool branch_taken_0x2b3e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E38u;
        // 0x2b3e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e38) {
            ctx->pc = 0x2CFE40u;
            return;
        }
    }
    ctx->pc = 0x2B3E40u;
label_2b3e40:
    // 0x2b3e40: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2b3e40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b3e44:
    // 0x2b3e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e48:
    // 0x2b3e48: 0x0  nop
    ctx->pc = 0x2b3e48u;
    // NOP
label_2b3e4c:
    // 0x2b3e4c: 0x4a000550  vmaxx       $vf21, $vf0, $vf0x
    ctx->pc = 0x2b3e4cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2b3e50:
    // 0x2b3e50: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2b3e50u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b3e54:
    // 0x2b3e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e58:
    // 0x2b3e58: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2b3e58u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b3e5c:
    // 0x2b3e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e60:
    // 0x2b3e60: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2b3e60u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b3e64:
    // 0x2b3e64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e68:
    // 0x2b3e68: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b3e6c:
    if (ctx->pc == 0x2B3E6Cu) {
        ctx->pc = 0x2B3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E68u;
        // 0x2b3e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E70u;
        goto label_2b3e70;
    }
    ctx->pc = 0x2B3E68u;
    {
        const bool branch_taken_0x2b3e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E68u;
        // 0x2b3e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e68) {
            ctx->pc = 0x2CFE70u;
            return;
        }
    }
    ctx->pc = 0x2B3E70u;
label_2b3e70:
    // 0x2b3e70: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2b3e70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2b3e74:
    // 0x2b3e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e78:
    // 0x2b3e78: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2b3e78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2b3e7c:
    // 0x2b3e7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e80:
    // 0x2b3e80: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2b3e80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2b3e84:
    // 0x2b3e84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e88:
    // 0x2b3e88: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2b3e88u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2b3e8c:
    // 0x2b3e8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3e90:
    // 0x2b3e90: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2b3e94:
    if (ctx->pc == 0x2B3E94u) {
        ctx->pc = 0x2B3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E90u;
        // 0x2b3e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3E98u;
        goto label_2b3e98;
    }
    ctx->pc = 0x2B3E90u;
    {
        const bool branch_taken_0x2b3e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E90u;
        // 0x2b3e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e90) {
            ctx->pc = 0x2CFE98u;
            return;
        }
    }
    ctx->pc = 0x2B3E98u;
label_2b3e98:
    // 0x2b3e98: 0x81f5737c  lb          $s5, 0x737C($t7)
    ctx->pc = 0x2b3e98u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b3e9c:
    // 0x2b3e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ea0:
    // 0x2b3ea0: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2b3ea0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b3ea4:
    // 0x2b3ea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ea8:
    // 0x2b3ea8: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2b3ea8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b3eac:
    // 0x2b3eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3eb0:
    // 0x2b3eb0: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2b3eb0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b3eb4:
    // 0x2b3eb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3eb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3eb8:
    // 0x2b3eb8: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2b3eb8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2b3ebc:
    // 0x2b3ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ec0:
    // 0x2b3ec0: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b3ec0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B3EC0 raw=0x48000800");
 /* MITIGATED */
label_2b3ec4:
    // 0x2b3ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ec8:
    // 0x2b3ec8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3ec8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3ecc:
    // 0x2b3ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ed0:
    // 0x2b3ed0: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b3ed4:
    if (ctx->pc == 0x2B3ED4u) {
        ctx->pc = 0x2B3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ED0u;
        // 0x2b3ed4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3ED8u;
        goto label_2b3ed8;
    }
    ctx->pc = 0x2B3ED0u;
    {
        const bool branch_taken_0x2b3ed0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ED0u;
        // 0x2b3ed4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ed0) {
            ctx->pc = 0x2B5ED0u;
            { ctx->pc = 0x2b5ed0; return; }
        }
    }
    ctx->pc = 0x2B3ED8u;
label_2b3ed8:
    // 0x2b3ed8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b3edc:
    if (ctx->pc == 0x2B3EDCu) {
        ctx->pc = 0x2B3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ED8u;
        // 0x2b3edc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3EE0u;
        goto label_2b3ee0;
    }
    ctx->pc = 0x2B3ED8u;
    {
        const bool branch_taken_0x2b3ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ED8u;
        // 0x2b3edc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ed8) {
            ctx->pc = 0x2C9EE0u;
            { ctx->pc = 0x2c9ee0; return; }
        }
    }
    ctx->pc = 0x2B3EE0u;
label_2b3ee0:
    // 0x2b3ee0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b3ee0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b3ee4:
    // 0x2b3ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ee8:
    // 0x2b3ee8: 0x10050004  beq         $zero, $a1, . + 4 + (0x4 << 2)
label_2b3eec:
    if (ctx->pc == 0x2B3EECu) {
        ctx->pc = 0x2B3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EE8u;
        // 0x2b3eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3EF0u;
        goto label_2b3ef0;
    }
    ctx->pc = 0x2B3EE8u;
    {
        const bool branch_taken_0x2b3ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EE8u;
        // 0x2b3eec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ee8) {
            ctx->pc = 0x2B3EFCu;
            goto label_2b3efc;
        }
    }
    ctx->pc = 0x2B3EF0u;
label_2b3ef0:
    // 0x2b3ef0: 0x800b2af0  lb          $t3, 0x2AF0($zero)
    ctx->pc = 0x2b3ef0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2AF0u));
label_2b3ef4:
    // 0x2b3ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ef8:
    // 0x2b3ef8: 0xb0b1000  j           func_C2C4000
label_2b3efc:
    if (ctx->pc == 0x2B3EFCu) {
        ctx->pc = 0x2B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EF8u;
        // 0x2b3efc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3F00u;
        goto label_2b3f00;
    }
    ctx->pc = 0x2B3EF8u;
    ctx->pc = 0x2B3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3EF8u;
    // 0x2b3efc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B3EF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3F00u;
label_2b3f00:
    // 0x2b3f00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f04:
    // 0x2b3f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f08:
    // 0x2b3f08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f0c:
    // 0x2b3f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f10:
    // 0x2b3f10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f14:
    // 0x2b3f14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f18:
    // 0x2b3f18: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b3f18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b3f1c:
    // 0x2b3f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f20:
    // 0x2b3f20: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b3f20u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B3F20 raw=0x48000800");
 /* MITIGATED */
label_2b3f24:
    // 0x2b3f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f28:
    // 0x2b3f28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f2c:
    // 0x2b3f2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f30:
    // 0x2b3f30: 0x420107f3  .word       0x420107F3                   # INVALID     $s0, $at, 0x7F3 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b3f30u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x33 at 0x2B3F30 raw=0x420107F3");
 /* MITIGATED */
label_2b3f34:
    // 0x2b3f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f38:
    // 0x2b3f38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f3c:
    // 0x2b3f3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f40:
    // 0x2b3f40: 0x1d61ffa  .word       0x01D61FFA                   # dsrl        $v1, $s6, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> 31);
label_2b3f44:
    // 0x2b3f44: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b3f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2b3f48:
    // 0x2b3f48: 0x1d71ffc  .word       0x01D71FFC                   # dsll32      $v1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 31));
label_2b3f4c:
    // 0x2b3f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f50:
    // 0x2b3f50: 0x1d81ffe  .word       0x01D81FFE                   # dsrl32      $v1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) >> (32 + 31));
label_2b3f54:
    // 0x2b3f54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f58:
    // 0x2b3f58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f5c:
    // 0x2b3f5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3f5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3f60:
    // 0x2b3f60: 0x1f53ff8  .word       0x01F53FF8                   # dsll        $a3, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21) << 31);
label_2b3f64:
    // 0x2b3f64: 0x960582  .word       0x00960582                   # srl         $zero, $s6, 22 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f64u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 22), 22));
label_2b3f68:
    // 0x2b3f68: 0x1f33ffb  .word       0x01F33FFB                   # dsra        $a3, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f68u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 19) >> 31);
label_2b3f6c:
    // 0x2b3f6c: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f6cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2b3f70:
    // 0x2b3f70: 0x1f43ffe  .word       0x01F43FFE                   # dsrl32      $a3, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) >> (32 + 31));
label_2b3f74:
    // 0x2b3f74: 0x9705c2  .word       0x009705C2                   # srl         $zero, $s7, 23 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f74u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 23), 23));
label_2b3f78:
    // 0x2b3f78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f7c:
    // 0x2b3f7c: 0x4005c3  .word       0x004005C3                   # sra         $zero, $zero, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f7cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 23));
label_2b3f80:
    // 0x2b3f80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f84:
    // 0x2b3f84: 0x980602  .word       0x00980602                   # srl         $zero, $t8, 24 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f84u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 24), 24));
label_2b3f88:
    // 0x2b3f88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3f88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3f8c:
    // 0x2b3f8c: 0x400603  .word       0x00400603                   # sra         $zero, $zero, 24 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f8cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 24));
label_2b3f90:
    // 0x2b3f90: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b3f90u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b3f94:
    // 0x2b3f94: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3f94u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2b3f98:
    // 0x2b3f98: 0x10080066  beq         $zero, $t0, . + 4 + (0x66 << 2)
label_2b3f9c:
    if (ctx->pc == 0x2B3F9Cu) {
        ctx->pc = 0x2B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F98u;
        // 0x2b3f9c: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3FA0u;
        goto label_2b3fa0;
    }
    ctx->pc = 0x2B3F98u;
    {
        const bool branch_taken_0x2b3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F98u;
        // 0x2b3f9c: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f98) {
            ctx->pc = 0x2B4134u;
            goto label_2b4134;
        }
    }
    ctx->pc = 0x2B3FA0u;
label_2b3fa0:
    // 0x2b3fa0: 0x10090086  beq         $zero, $t1, . + 4 + (0x86 << 2)
label_2b3fa4:
    if (ctx->pc == 0x2B3FA4u) {
        ctx->pc = 0x2B3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FA0u;
        // 0x2b3fa4: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3FA8u;
        goto label_2b3fa8;
    }
    ctx->pc = 0x2B3FA0u;
    {
        const bool branch_taken_0x2b3fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FA0u;
        // 0x2b3fa4: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fa0) {
            ctx->pc = 0x2B41BCu;
            goto label_2b41bc;
        }
    }
    ctx->pc = 0x2B3FA8u;
label_2b3fa8:
    // 0x2b3fa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3fa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3fac:
    // 0x2b3fac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3facu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fb0:
    // 0x2b3fb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3fb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3fb4:
    // 0x2b3fb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fb8:
    // 0x2b3fb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3fb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3fbc:
    // 0x2b3fbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fc0:
    // 0x2b3fc0: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3fc0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B3FC0 raw=0x03E8A801");
 /* MITIGATED */
label_2b3fc4:
    // 0x2b3fc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fc8:
    // 0x2b3fc8: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2b3fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b3fcc:
    // 0x2b3fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fd0:
    // 0x2b3fd0: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2b3fd0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b3fd4:
    // 0x2b3fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fd8:
    // 0x2b3fd8: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2b3fd8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2b3fdc:
    // 0x2b3fdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fe0:
    // 0x2b3fe0: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3fe0u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2b3fe4:
    // 0x2b3fe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3fe8:
    // 0x2b3fe8: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3fe8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B3FE8 raw=0x03E8B805");
 /* MITIGATED */
label_2b3fec:
    // 0x2b3fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3ff0:
    // 0x2b3ff0: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2b3ff4:
    if (ctx->pc == 0x2B3FF4u) {
        ctx->pc = 0x2B3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FF0u;
        // 0x2b3ff4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3FF8u;
        goto label_2b3ff8;
    }
    ctx->pc = 0x2B3FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FF0u;
        // 0x2b3ff4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3FF8u;
label_2b3ff8:
    // 0x2b3ff8: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2b3ff8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2b3ffc:
    // 0x2b3ffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3ffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4000:
    // 0x2b4000: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4000u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b4004:
    // 0x2b4004: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2b4004u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2b4008:
    // 0x2b4008: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4008u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2b400c:
    // 0x2b400c: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2b400cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2b4010:
    // 0x2b4010: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4014:
    // 0x2b4014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4018:
    // 0x2b4018: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4018u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b401c:
    // 0x2b401c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b401cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4020:
    // 0x2b4020: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4024:
    // 0x2b4024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4028:
    // 0x2b4028: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4028u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b402c:
    // 0x2b402c: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b402cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B402C raw=0x01E0E71E");
 /* MITIGATED */
label_2b4030:
    // 0x2b4030: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4030u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4034:
    // 0x2b4034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4038:
    // 0x2b4038: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4038u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b403c:
    // 0x2b403c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b403cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4040:
    // 0x2b4040: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4040u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4044:
    // 0x2b4044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4048:
    // 0x2b4048: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4048u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b404c:
    // 0x2b404c: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b404cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b4050:
    // 0x2b4050: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4050u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4054:
    // 0x2b4054: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4054u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2b4058:
    // 0x2b4058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b405c:
    // 0x2b405c: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b405cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2b4060:
    // 0x2b4060: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4060u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2b4064:
    // 0x2b4064: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2b4064u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2b4068:
    // 0x2b4068: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4068u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b406c:
    // 0x2b406c: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b406cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4070:
    // 0x2b4070: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4070u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4074:
    // 0x2b4074: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4074u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b4078:
    // 0x2b4078: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4078u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b407c:
    // 0x2b407c: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b407cu;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4080:
    // 0x2b4080: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4080u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4084:
    // 0x2b4084: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4084u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b4088:
    // 0x2b4088: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4088u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b408c:
    // 0x2b408c: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b408cu;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4090:
    // 0x2b4090: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b4090u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B4090 raw=0x437F0000");
 /* MITIGATED */
label_2b4094:
    // 0x2b4094: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b4094u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b4098:
    // 0x2b4098: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4098u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b409c:
    // 0x2b409c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b409cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b40a0:
    // 0x2b40a0: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b40a0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2b40a4:
    // 0x2b40a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b40a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b40a8:
    // 0x2b40a8: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2b40a8u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b40ac:
    // 0x2b40ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b40acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b40b0:
    // 0x2b40b0: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2b40b4:
    if (ctx->pc == 0x2B40B4u) {
        ctx->pc = 0x2B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40B0u;
        // 0x2b40b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40B8u;
        goto label_2b40b8;
    }
    ctx->pc = 0x2B40B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2B40B8u);
        ctx->pc = 0x2B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40B0u;
        // 0x2b40b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B40B0u, 0x2B40B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B40B8u;
label_2b40b8:
    // 0x2b40b8: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2b40b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2b40bc:
    // 0x2b40bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b40bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b40c0:
    // 0x2b40c0: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2b40c4:
    if (ctx->pc == 0x2B40C4u) {
        ctx->pc = 0x2B40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40C0u;
        // 0x2b40c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40C8u;
        goto label_2b40c8;
    }
    ctx->pc = 0x2B40C0u;
    {
        const bool branch_taken_0x2b40c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40C0u;
        // 0x2b40c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40c0) {
            ctx->pc = 0x2B40C4u;
            goto label_2b40c4;
        }
    }
    ctx->pc = 0x2B40C8u;
label_2b40c8:
    // 0x2b40c8: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2b40cc:
    if (ctx->pc == 0x2B40CCu) {
        ctx->pc = 0x2B40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40C8u;
        // 0x2b40cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40D0u;
        goto label_2b40d0;
    }
    ctx->pc = 0x2B40C8u;
    {
        const bool branch_taken_0x2b40c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40C8u;
        // 0x2b40cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40c8) {
            ctx->pc = 0x2B414Cu;
            goto label_2b414c;
        }
    }
    ctx->pc = 0x2B40D0u;
label_2b40d0:
    // 0x2b40d0: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2b40d4:
    if (ctx->pc == 0x2B40D4u) {
        ctx->pc = 0x2B40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D0u;
        // 0x2b40d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40D8u;
        goto label_2b40d8;
    }
    ctx->pc = 0x2B40D0u;
    {
        const bool branch_taken_0x2b40d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D0u;
        // 0x2b40d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40d0) {
            ctx->pc = 0x2B40DCu;
            goto label_2b40dc;
        }
    }
    ctx->pc = 0x2B40D8u;
label_2b40d8:
    // 0x2b40d8: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b40dc:
    if (ctx->pc == 0x2B40DCu) {
        ctx->pc = 0x2B40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D8u;
        // 0x2b40dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40E0u;
        goto label_2b40e0;
    }
    ctx->pc = 0x2B40D8u;
    {
        const bool branch_taken_0x2b40d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D8u;
        // 0x2b40dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40d8) {
            ctx->pc = 0x2BA0DCu;
            { ctx->pc = 0x2ba0dc; return; }
        }
    }
    ctx->pc = 0x2B40E0u;
label_2b40e0:
    // 0x2b40e0: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b40e4:
    if (ctx->pc == 0x2B40E4u) {
        ctx->pc = 0x2B40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40E0u;
        // 0x2b40e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40E8u;
        goto label_2b40e8;
    }
    ctx->pc = 0x2B40E0u;
    {
        const bool branch_taken_0x2b40e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40E0u;
        // 0x2b40e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40e0) {
            ctx->pc = 0x2BA164u;
            { ctx->pc = 0x2ba164; return; }
        }
    }
    ctx->pc = 0x2B40E8u;
label_2b40e8:
    // 0x2b40e8: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2b40ec:
    if (ctx->pc == 0x2B40ECu) {
        ctx->pc = 0x2B40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40E8u;
        // 0x2b40ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40F0u;
        goto label_2b40f0;
    }
    ctx->pc = 0x2B40E8u;
    {
        const bool branch_taken_0x2b40e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40E8u;
        // 0x2b40ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40e8) {
            ctx->pc = 0x2B40F8u;
            goto label_2b40f8;
        }
    }
    ctx->pc = 0x2B40F0u;
label_2b40f0:
    // 0x2b40f0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b40f4:
    if (ctx->pc == 0x2B40F4u) {
        ctx->pc = 0x2B40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40F0u;
        // 0x2b40f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40F8u;
        goto label_2b40f8;
    }
    ctx->pc = 0x2B40F0u;
    {
        const bool branch_taken_0x2b40f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40F0u;
        // 0x2b40f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40f0) {
            ctx->pc = 0x2B40F4u;
            goto label_2b40f4;
        }
    }
    ctx->pc = 0x2B40F8u;
label_2b40f8:
    // 0x2b40f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b40f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b40fc:
    // 0x2b40fc: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b40fcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b4100:
    // 0x2b4100: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b4100u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b4104:
    // 0x2b4104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4108:
    // 0x2b4108: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b4108u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b410c:
    // 0x2b410c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b410cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4110:
    // 0x2b4110: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b4110u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b4114:
    // 0x2b4114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4118:
    // 0x2b4118: 0x42020081  .word       0x42020081                   # tlbr # 00020080 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4118u;
    runtime->handleTLBR(rdram, ctx);
label_2b411c:
    // 0x2b411c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b411cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4120:
    // 0x2b4120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4124:
    // 0x2b4124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4128:
    // 0x2b4128: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b412c:
    if (ctx->pc == 0x2B412Cu) {
        ctx->pc = 0x2B412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4128u;
        // 0x2b412c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4130u;
        goto label_2b4130;
    }
    ctx->pc = 0x2B4128u;
    {
        const bool branch_taken_0x2b4128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4128u;
        // 0x2b412c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4128) {
            ctx->pc = 0x2C8130u;
            { ctx->pc = 0x2c8130; return; }
        }
    }
    ctx->pc = 0x2B4130u;
label_2b4130:
    // 0x2b4130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4134:
    // 0x2b4134: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4134u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4138:
    // 0x2b4138: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b413c:
    if (ctx->pc == 0x2B413Cu) {
        ctx->pc = 0x2B413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4138u;
        // 0x2b413c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4140u;
        goto label_2b4140;
    }
    ctx->pc = 0x2B4138u;
    {
        const bool branch_taken_0x2b4138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b4138) {
            ctx->pc = 0x2B413Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4138u;
            // 0x2b413c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6128u;
            { ctx->pc = 0x2b6128; return; }
        }
    }
    ctx->pc = 0x2B4140u;
label_2b4140:
    // 0x2b4140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4144:
    // 0x2b4144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4148:
    // 0x2b4148: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b414c:
    if (ctx->pc == 0x2B414Cu) {
        ctx->pc = 0x2B414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4148u;
        // 0x2b414c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4150u;
        goto label_2b4150;
    }
    ctx->pc = 0x2B4148u;
    {
        const bool branch_taken_0x2b4148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4148u;
        // 0x2b414c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4148) {
            ctx->pc = 0x2BA1CCu;
            { ctx->pc = 0x2ba1cc; return; }
        }
    }
    ctx->pc = 0x2B4150u;
label_2b4150:
    // 0x2b4150: 0x42020071  .word       0x42020071                   # INVALID     $s0, $v0, 0x71 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4150u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x31 at 0x2B4150 raw=0x42020071");
 /* MITIGATED */
label_2b4154:
    // 0x2b4154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4158:
    // 0x2b4158: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4158u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b415c:
    // 0x2b415c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b415cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4160:
    // 0x2b4160: 0x500b006d  beql        $zero, $t3, . + 4 + (0x6D << 2)
label_2b4164:
    if (ctx->pc == 0x2B4164u) {
        ctx->pc = 0x2B4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4160u;
        // 0x2b4164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4168u;
        goto label_2b4168;
    }
    ctx->pc = 0x2B4160u;
    {
        const bool branch_taken_0x2b4160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b4160) {
            ctx->pc = 0x2B4164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4160u;
            // 0x2b4164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4318u;
            { ctx->pc = 0x2b4318; return; }
        }
    }
    ctx->pc = 0x2B4168u;
label_2b4168:
    // 0x2b4168: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4168u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b416c:
    // 0x2b416c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b416cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4170:
    // 0x2b4170: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2b4174:
    if (ctx->pc == 0x2B4174u) {
        ctx->pc = 0x2B4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4170u;
        // 0x2b4174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4178u;
        goto label_2b4178;
    }
    ctx->pc = 0x2B4170u;
    {
        const bool branch_taken_0x2b4170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4170u;
        // 0x2b4174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4170) {
            ctx->pc = 0x2B4374u;
            { ctx->pc = 0x2b4374; return; }
        }
    }
    ctx->pc = 0x2B4178u;
label_2b4178:
    // 0x2b4178: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2b417c:
    if (ctx->pc == 0x2B417Cu) {
        ctx->pc = 0x2B417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4178u;
        // 0x2b417c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4180u;
        goto label_2b4180;
    }
    ctx->pc = 0x2B4178u;
    {
        const bool branch_taken_0x2b4178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4178u;
        // 0x2b417c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4178) {
            ctx->pc = 0x2B4184u;
            goto label_2b4184;
        }
    }
    ctx->pc = 0x2B4180u;
label_2b4180:
    // 0x2b4180: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b4184:
    if (ctx->pc == 0x2B4184u) {
        ctx->pc = 0x2B4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4180u;
        // 0x2b4184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4188u;
        goto label_2b4188;
    }
    ctx->pc = 0x2B4180u;
    {
        const bool branch_taken_0x2b4180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4180u;
        // 0x2b4184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4180) {
            ctx->pc = 0x2B4184u;
            goto label_2b4184;
        }
    }
    ctx->pc = 0x2B4188u;
label_2b4188:
    // 0x2b4188: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b418c:
    if (ctx->pc == 0x2B418Cu) {
        ctx->pc = 0x2B418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4188u;
        // 0x2b418c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4190u;
        goto label_2b4190;
    }
    ctx->pc = 0x2B4188u;
    {
        const bool branch_taken_0x2b4188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4188u;
        // 0x2b418c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4188) {
            ctx->pc = 0x2BA20Cu;
            { ctx->pc = 0x2ba20c; return; }
        }
    }
    ctx->pc = 0x2B4190u;
label_2b4190:
    // 0x2b4190: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2b4194:
    if (ctx->pc == 0x2B4194u) {
        ctx->pc = 0x2B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4190u;
        // 0x2b4194: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4198u;
        goto label_2b4198;
    }
    ctx->pc = 0x2B4190u;
    {
        const bool branch_taken_0x2b4190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4190u;
        // 0x2b4194: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4190) {
            ctx->pc = 0x2BA194u;
            { ctx->pc = 0x2ba194; return; }
        }
    }
    ctx->pc = 0x2B4198u;
label_2b4198:
    // 0x2b4198: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b4198u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b419c:
    // 0x2b419c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b419cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41a0:
    // 0x2b41a0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b41a4:
    if (ctx->pc == 0x2B41A4u) {
        ctx->pc = 0x2B41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41A0u;
        // 0x2b41a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B41A8u;
        goto label_2b41a8;
    }
    ctx->pc = 0x2B41A0u;
    {
        const bool branch_taken_0x2b41a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41A0u;
        // 0x2b41a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41a0) {
            ctx->pc = 0x2B41A4u;
            goto label_2b41a4;
        }
    }
    ctx->pc = 0x2B41A8u;
label_2b41a8:
    // 0x2b41a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b41a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b41ac:
    // 0x2b41ac: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b41acu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b41b0:
    // 0x2b41b0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b41b0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b41b4:
    // 0x2b41b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41b8:
    // 0x2b41b8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b41b8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b41bc:
    // 0x2b41bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41c0:
    // 0x2b41c0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b41c0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b41c4:
    // 0x2b41c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41c8:
    // 0x2b41c8: 0x4202006b  .word       0x4202006B                   # INVALID     $s0, $v0, 0x6B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b41c8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2B at 0x2B41C8 raw=0x4202006B");
 /* MITIGATED */
label_2b41cc:
    // 0x2b41cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41d0:
    // 0x2b41d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b41d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b41d4:
    // 0x2b41d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41d8:
    // 0x2b41d8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b41dc:
    if (ctx->pc == 0x2B41DCu) {
        ctx->pc = 0x2B41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41D8u;
        // 0x2b41dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B41E0u;
        goto label_2b41e0;
    }
    ctx->pc = 0x2B41D8u;
    {
        const bool branch_taken_0x2b41d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41D8u;
        // 0x2b41dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41d8) {
            ctx->pc = 0x2C81E0u;
            { ctx->pc = 0x2c81e0; return; }
        }
    }
    ctx->pc = 0x2B41E0u;
label_2b41e0:
    // 0x2b41e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b41e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b41e4:
    // 0x2b41e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41e8:
    // 0x2b41e8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b41ec:
    if (ctx->pc == 0x2B41ECu) {
        ctx->pc = 0x2B41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41E8u;
        // 0x2b41ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B41F0u;
        goto label_2b41f0;
    }
    ctx->pc = 0x2B41E8u;
    {
        const bool branch_taken_0x2b41e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b41e8) {
            ctx->pc = 0x2B41ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B41E8u;
            // 0x2b41ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B61D8u;
            { ctx->pc = 0x2b61d8; return; }
        }
    }
    ctx->pc = 0x2B41F0u;
label_2b41f0:
    // 0x2b41f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b41f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b41f4:
    // 0x2b41f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41f8:
    // 0x2b41f8: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b41fc:
    if (ctx->pc == 0x2B41FCu) {
        ctx->pc = 0x2B41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41F8u;
        // 0x2b41fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4200u;
        goto label_2b4200;
    }
    ctx->pc = 0x2B41F8u;
    {
        const bool branch_taken_0x2b41f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41F8u;
        // 0x2b41fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41f8) {
            ctx->pc = 0x2BA1FCu;
            { ctx->pc = 0x2ba1fc; return; }
        }
    }
    ctx->pc = 0x2B4200u;
label_2b4200:
    // 0x2b4200: 0x4202005b  .word       0x4202005B                   # INVALID     $s0, $v0, 0x5B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4200u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2B4200 raw=0x4202005B");
 /* MITIGATED */
label_2b4204:
    // 0x2b4204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4208:
    // 0x2b4208: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4208u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b420c:
    // 0x2b420c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b420cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4210:
    // 0x2b4210: 0x500b0057  beql        $zero, $t3, . + 4 + (0x57 << 2)
label_2b4214:
    if (ctx->pc == 0x2B4214u) {
        ctx->pc = 0x2B4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4210u;
        // 0x2b4214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4218u;
        goto label_2b4218;
    }
    ctx->pc = 0x2B4210u;
    {
        const bool branch_taken_0x2b4210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b4210) {
            ctx->pc = 0x2B4214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4210u;
            // 0x2b4214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4370u;
            { ctx->pc = 0x2b4370; return; }
        }
    }
    ctx->pc = 0x2B4218u;
label_2b4218:
    // 0x2b4218: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4218u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b421c:
    // 0x2b421c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b421cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4220:
    // 0x2b4220: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2b4224:
    if (ctx->pc == 0x2B4224u) {
        ctx->pc = 0x2B4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4220u;
        // 0x2b4224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4228u;
        goto label_2b4228;
    }
    ctx->pc = 0x2B4220u;
    {
        const bool branch_taken_0x2b4220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4220u;
        // 0x2b4224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4220) {
            ctx->pc = 0x2B4324u;
            { ctx->pc = 0x2b4324; return; }
        }
    }
    ctx->pc = 0x2B4228u;
label_2b4228:
    // 0x2b4228: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2b422c:
    if (ctx->pc == 0x2B422Cu) {
        ctx->pc = 0x2B422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4228u;
        // 0x2b422c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4230u;
        goto label_2b4230;
    }
    ctx->pc = 0x2B4228u;
    {
        const bool branch_taken_0x2b4228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4228u;
        // 0x2b422c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4228) {
            ctx->pc = 0x2B4230u;
            goto label_2b4230;
        }
    }
    ctx->pc = 0x2B4230u;
label_2b4230:
    // 0x2b4230: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b4234:
    if (ctx->pc == 0x2B4234u) {
        ctx->pc = 0x2B4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4230u;
        // 0x2b4234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4238u;
        goto label_2b4238;
    }
    ctx->pc = 0x2B4230u;
    {
        const bool branch_taken_0x2b4230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4230u;
        // 0x2b4234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4230) {
            ctx->pc = 0x2B4234u;
            goto label_2b4234;
        }
    }
    ctx->pc = 0x2B4238u;
label_2b4238:
    // 0x2b4238: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b423c:
    if (ctx->pc == 0x2B423Cu) {
        ctx->pc = 0x2B423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4238u;
        // 0x2b423c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4240u;
        goto label_2b4240;
    }
    ctx->pc = 0x2B4238u;
    {
        const bool branch_taken_0x2b4238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4238u;
        // 0x2b423c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4238) {
            ctx->pc = 0x2BA23Cu;
            { ctx->pc = 0x2ba23c; return; }
        }
    }
    ctx->pc = 0x2B4240u;
label_2b4240:
    // 0x2b4240: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b4244:
    if (ctx->pc == 0x2B4244u) {
        ctx->pc = 0x2B4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4240u;
        // 0x2b4244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4248u;
        goto label_2b4248;
    }
    ctx->pc = 0x2B4240u;
    {
        const bool branch_taken_0x2b4240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4240u;
        // 0x2b4244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4240) {
            ctx->pc = 0x2BA2C4u;
            { ctx->pc = 0x2ba2c4; return; }
        }
    }
    ctx->pc = 0x2B4248u;
label_2b4248:
    // 0x2b4248: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b4248u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b424c:
    // 0x2b424c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b424cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4250:
    // 0x2b4250: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b4254:
    if (ctx->pc == 0x2B4254u) {
        ctx->pc = 0x2B4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4250u;
        // 0x2b4254: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4258u;
        goto label_2b4258;
    }
    ctx->pc = 0x2B4250u;
    {
        const bool branch_taken_0x2b4250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4250u;
        // 0x2b4254: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4250) {
            ctx->pc = 0x2B4254u;
            goto label_2b4254;
        }
    }
    ctx->pc = 0x2B4258u;
label_2b4258:
    // 0x2b4258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b425c:
    // 0x2b425c: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b425cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
    ctx->pc = 0x2b4260u;
    return;
}

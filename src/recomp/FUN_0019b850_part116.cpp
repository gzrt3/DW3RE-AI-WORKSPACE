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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part116(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d3ac0u: goto label_1d3ac0;
        case 0x1d3ac4u: goto label_1d3ac4;
        case 0x1d3ac8u: goto label_1d3ac8;
        case 0x1d3accu: goto label_1d3acc;
        case 0x1d3ad0u: goto label_1d3ad0;
        case 0x1d3ad4u: goto label_1d3ad4;
        case 0x1d3ad8u: goto label_1d3ad8;
        case 0x1d3adcu: goto label_1d3adc;
        case 0x1d3ae0u: goto label_1d3ae0;
        case 0x1d3ae4u: goto label_1d3ae4;
        case 0x1d3ae8u: goto label_1d3ae8;
        case 0x1d3aecu: goto label_1d3aec;
        case 0x1d3af0u: goto label_1d3af0;
        case 0x1d3af4u: goto label_1d3af4;
        case 0x1d3af8u: goto label_1d3af8;
        case 0x1d3afcu: goto label_1d3afc;
        case 0x1d3b00u: goto label_1d3b00;
        case 0x1d3b04u: goto label_1d3b04;
        case 0x1d3b08u: goto label_1d3b08;
        case 0x1d3b0cu: goto label_1d3b0c;
        case 0x1d3b10u: goto label_1d3b10;
        case 0x1d3b14u: goto label_1d3b14;
        case 0x1d3b18u: goto label_1d3b18;
        case 0x1d3b1cu: goto label_1d3b1c;
        case 0x1d3b20u: goto label_1d3b20;
        case 0x1d3b24u: goto label_1d3b24;
        case 0x1d3b28u: goto label_1d3b28;
        case 0x1d3b2cu: goto label_1d3b2c;
        case 0x1d3b30u: goto label_1d3b30;
        case 0x1d3b34u: goto label_1d3b34;
        case 0x1d3b38u: goto label_1d3b38;
        case 0x1d3b3cu: goto label_1d3b3c;
        case 0x1d3b40u: goto label_1d3b40;
        case 0x1d3b44u: goto label_1d3b44;
        case 0x1d3b48u: goto label_1d3b48;
        case 0x1d3b4cu: goto label_1d3b4c;
        case 0x1d3b50u: goto label_1d3b50;
        case 0x1d3b54u: goto label_1d3b54;
        case 0x1d3b58u: goto label_1d3b58;
        case 0x1d3b5cu: goto label_1d3b5c;
        case 0x1d3b60u: goto label_1d3b60;
        case 0x1d3b64u: goto label_1d3b64;
        case 0x1d3b68u: goto label_1d3b68;
        case 0x1d3b6cu: goto label_1d3b6c;
        case 0x1d3b70u: goto label_1d3b70;
        case 0x1d3b74u: goto label_1d3b74;
        case 0x1d3b78u: goto label_1d3b78;
        case 0x1d3b7cu: goto label_1d3b7c;
        case 0x1d3b80u: goto label_1d3b80;
        case 0x1d3b84u: goto label_1d3b84;
        case 0x1d3b88u: goto label_1d3b88;
        case 0x1d3b8cu: goto label_1d3b8c;
        case 0x1d3b90u: goto label_1d3b90;
        case 0x1d3b94u: goto label_1d3b94;
        case 0x1d3b98u: goto label_1d3b98;
        case 0x1d3b9cu: goto label_1d3b9c;
        case 0x1d3ba0u: goto label_1d3ba0;
        case 0x1d3ba4u: goto label_1d3ba4;
        case 0x1d3ba8u: goto label_1d3ba8;
        case 0x1d3bacu: goto label_1d3bac;
        case 0x1d3bb0u: goto label_1d3bb0;
        case 0x1d3bb4u: goto label_1d3bb4;
        case 0x1d3bb8u: goto label_1d3bb8;
        case 0x1d3bbcu: goto label_1d3bbc;
        case 0x1d3bc0u: goto label_1d3bc0;
        case 0x1d3bc4u: goto label_1d3bc4;
        case 0x1d3bc8u: goto label_1d3bc8;
        case 0x1d3bccu: goto label_1d3bcc;
        case 0x1d3bd0u: goto label_1d3bd0;
        case 0x1d3bd4u: goto label_1d3bd4;
        case 0x1d3bd8u: goto label_1d3bd8;
        case 0x1d3bdcu: goto label_1d3bdc;
        case 0x1d3be0u: goto label_1d3be0;
        case 0x1d3be4u: goto label_1d3be4;
        case 0x1d3be8u: goto label_1d3be8;
        case 0x1d3becu: goto label_1d3bec;
        case 0x1d3bf0u: goto label_1d3bf0;
        case 0x1d3bf4u: goto label_1d3bf4;
        case 0x1d3bf8u: goto label_1d3bf8;
        case 0x1d3bfcu: goto label_1d3bfc;
        case 0x1d3c00u: goto label_1d3c00;
        case 0x1d3c04u: goto label_1d3c04;
        case 0x1d3c08u: goto label_1d3c08;
        case 0x1d3c0cu: goto label_1d3c0c;
        case 0x1d3c10u: goto label_1d3c10;
        case 0x1d3c14u: goto label_1d3c14;
        case 0x1d3c18u: goto label_1d3c18;
        case 0x1d3c1cu: goto label_1d3c1c;
        case 0x1d3c20u: goto label_1d3c20;
        case 0x1d3c24u: goto label_1d3c24;
        case 0x1d3c28u: goto label_1d3c28;
        case 0x1d3c2cu: goto label_1d3c2c;
        case 0x1d3c30u: goto label_1d3c30;
        case 0x1d3c34u: goto label_1d3c34;
        case 0x1d3c38u: goto label_1d3c38;
        case 0x1d3c3cu: goto label_1d3c3c;
        case 0x1d3c40u: goto label_1d3c40;
        case 0x1d3c44u: goto label_1d3c44;
        case 0x1d3c48u: goto label_1d3c48;
        case 0x1d3c4cu: goto label_1d3c4c;
        case 0x1d3c50u: goto label_1d3c50;
        case 0x1d3c54u: goto label_1d3c54;
        case 0x1d3c58u: goto label_1d3c58;
        case 0x1d3c5cu: goto label_1d3c5c;
        case 0x1d3c60u: goto label_1d3c60;
        case 0x1d3c64u: goto label_1d3c64;
        case 0x1d3c68u: goto label_1d3c68;
        case 0x1d3c6cu: goto label_1d3c6c;
        case 0x1d3c70u: goto label_1d3c70;
        case 0x1d3c74u: goto label_1d3c74;
        case 0x1d3c78u: goto label_1d3c78;
        case 0x1d3c7cu: goto label_1d3c7c;
        case 0x1d3c80u: goto label_1d3c80;
        case 0x1d3c84u: goto label_1d3c84;
        case 0x1d3c88u: goto label_1d3c88;
        case 0x1d3c8cu: goto label_1d3c8c;
        case 0x1d3c90u: goto label_1d3c90;
        case 0x1d3c94u: goto label_1d3c94;
        case 0x1d3c98u: goto label_1d3c98;
        case 0x1d3c9cu: goto label_1d3c9c;
        case 0x1d3ca0u: goto label_1d3ca0;
        case 0x1d3ca4u: goto label_1d3ca4;
        case 0x1d3ca8u: goto label_1d3ca8;
        case 0x1d3cacu: goto label_1d3cac;
        case 0x1d3cb0u: goto label_1d3cb0;
        case 0x1d3cb4u: goto label_1d3cb4;
        case 0x1d3cb8u: goto label_1d3cb8;
        case 0x1d3cbcu: goto label_1d3cbc;
        case 0x1d3cc0u: goto label_1d3cc0;
        case 0x1d3cc4u: goto label_1d3cc4;
        case 0x1d3cc8u: goto label_1d3cc8;
        case 0x1d3cccu: goto label_1d3ccc;
        case 0x1d3cd0u: goto label_1d3cd0;
        case 0x1d3cd4u: goto label_1d3cd4;
        case 0x1d3cd8u: goto label_1d3cd8;
        case 0x1d3cdcu: goto label_1d3cdc;
        case 0x1d3ce0u: goto label_1d3ce0;
        case 0x1d3ce4u: goto label_1d3ce4;
        case 0x1d3ce8u: goto label_1d3ce8;
        case 0x1d3cecu: goto label_1d3cec;
        case 0x1d3cf0u: goto label_1d3cf0;
        case 0x1d3cf4u: goto label_1d3cf4;
        case 0x1d3cf8u: goto label_1d3cf8;
        case 0x1d3cfcu: goto label_1d3cfc;
        case 0x1d3d00u: goto label_1d3d00;
        case 0x1d3d04u: goto label_1d3d04;
        case 0x1d3d08u: goto label_1d3d08;
        case 0x1d3d0cu: goto label_1d3d0c;
        case 0x1d3d10u: goto label_1d3d10;
        case 0x1d3d14u: goto label_1d3d14;
        case 0x1d3d18u: goto label_1d3d18;
        case 0x1d3d1cu: goto label_1d3d1c;
        case 0x1d3d20u: goto label_1d3d20;
        case 0x1d3d24u: goto label_1d3d24;
        case 0x1d3d28u: goto label_1d3d28;
        case 0x1d3d2cu: goto label_1d3d2c;
        case 0x1d3d30u: goto label_1d3d30;
        case 0x1d3d34u: goto label_1d3d34;
        case 0x1d3d38u: goto label_1d3d38;
        case 0x1d3d3cu: goto label_1d3d3c;
        case 0x1d3d40u: goto label_1d3d40;
        case 0x1d3d44u: goto label_1d3d44;
        case 0x1d3d48u: goto label_1d3d48;
        case 0x1d3d4cu: goto label_1d3d4c;
        case 0x1d3d50u: goto label_1d3d50;
        case 0x1d3d54u: goto label_1d3d54;
        case 0x1d3d58u: goto label_1d3d58;
        case 0x1d3d5cu: goto label_1d3d5c;
        case 0x1d3d60u: goto label_1d3d60;
        case 0x1d3d64u: goto label_1d3d64;
        case 0x1d3d68u: goto label_1d3d68;
        case 0x1d3d6cu: goto label_1d3d6c;
        case 0x1d3d70u: goto label_1d3d70;
        case 0x1d3d74u: goto label_1d3d74;
        case 0x1d3d78u: goto label_1d3d78;
        case 0x1d3d7cu: goto label_1d3d7c;
        case 0x1d3d80u: goto label_1d3d80;
        case 0x1d3d84u: goto label_1d3d84;
        case 0x1d3d88u: goto label_1d3d88;
        case 0x1d3d8cu: goto label_1d3d8c;
        case 0x1d3d90u: goto label_1d3d90;
        case 0x1d3d94u: goto label_1d3d94;
        case 0x1d3d98u: goto label_1d3d98;
        case 0x1d3d9cu: goto label_1d3d9c;
        case 0x1d3da0u: goto label_1d3da0;
        case 0x1d3da4u: goto label_1d3da4;
        case 0x1d3da8u: goto label_1d3da8;
        case 0x1d3dacu: goto label_1d3dac;
        case 0x1d3db0u: goto label_1d3db0;
        case 0x1d3db4u: goto label_1d3db4;
        case 0x1d3db8u: goto label_1d3db8;
        case 0x1d3dbcu: goto label_1d3dbc;
        case 0x1d3dc0u: goto label_1d3dc0;
        case 0x1d3dc4u: goto label_1d3dc4;
        case 0x1d3dc8u: goto label_1d3dc8;
        case 0x1d3dccu: goto label_1d3dcc;
        case 0x1d3dd0u: goto label_1d3dd0;
        case 0x1d3dd4u: goto label_1d3dd4;
        case 0x1d3dd8u: goto label_1d3dd8;
        case 0x1d3ddcu: goto label_1d3ddc;
        case 0x1d3de0u: goto label_1d3de0;
        case 0x1d3de4u: goto label_1d3de4;
        case 0x1d3de8u: goto label_1d3de8;
        case 0x1d3decu: goto label_1d3dec;
        case 0x1d3df0u: goto label_1d3df0;
        case 0x1d3df4u: goto label_1d3df4;
        case 0x1d3df8u: goto label_1d3df8;
        case 0x1d3dfcu: goto label_1d3dfc;
        case 0x1d3e00u: goto label_1d3e00;
        case 0x1d3e04u: goto label_1d3e04;
        case 0x1d3e08u: goto label_1d3e08;
        case 0x1d3e0cu: goto label_1d3e0c;
        case 0x1d3e10u: goto label_1d3e10;
        case 0x1d3e14u: goto label_1d3e14;
        case 0x1d3e18u: goto label_1d3e18;
        case 0x1d3e1cu: goto label_1d3e1c;
        case 0x1d3e20u: goto label_1d3e20;
        case 0x1d3e24u: goto label_1d3e24;
        case 0x1d3e28u: goto label_1d3e28;
        case 0x1d3e2cu: goto label_1d3e2c;
        case 0x1d3e30u: goto label_1d3e30;
        case 0x1d3e34u: goto label_1d3e34;
        case 0x1d3e38u: goto label_1d3e38;
        case 0x1d3e3cu: goto label_1d3e3c;
        case 0x1d3e40u: goto label_1d3e40;
        case 0x1d3e44u: goto label_1d3e44;
        case 0x1d3e48u: goto label_1d3e48;
        case 0x1d3e4cu: goto label_1d3e4c;
        case 0x1d3e50u: goto label_1d3e50;
        case 0x1d3e54u: goto label_1d3e54;
        case 0x1d3e58u: goto label_1d3e58;
        case 0x1d3e5cu: goto label_1d3e5c;
        case 0x1d3e60u: goto label_1d3e60;
        case 0x1d3e64u: goto label_1d3e64;
        case 0x1d3e68u: goto label_1d3e68;
        case 0x1d3e6cu: goto label_1d3e6c;
        case 0x1d3e70u: goto label_1d3e70;
        case 0x1d3e74u: goto label_1d3e74;
        case 0x1d3e78u: goto label_1d3e78;
        case 0x1d3e7cu: goto label_1d3e7c;
        case 0x1d3e80u: goto label_1d3e80;
        case 0x1d3e84u: goto label_1d3e84;
        case 0x1d3e88u: goto label_1d3e88;
        case 0x1d3e8cu: goto label_1d3e8c;
        case 0x1d3e90u: goto label_1d3e90;
        case 0x1d3e94u: goto label_1d3e94;
        case 0x1d3e98u: goto label_1d3e98;
        case 0x1d3e9cu: goto label_1d3e9c;
        case 0x1d3ea0u: goto label_1d3ea0;
        case 0x1d3ea4u: goto label_1d3ea4;
        case 0x1d3ea8u: goto label_1d3ea8;
        case 0x1d3eacu: goto label_1d3eac;
        case 0x1d3eb0u: goto label_1d3eb0;
        case 0x1d3eb4u: goto label_1d3eb4;
        case 0x1d3eb8u: goto label_1d3eb8;
        case 0x1d3ebcu: goto label_1d3ebc;
        case 0x1d3ec0u: goto label_1d3ec0;
        case 0x1d3ec4u: goto label_1d3ec4;
        case 0x1d3ec8u: goto label_1d3ec8;
        case 0x1d3eccu: goto label_1d3ecc;
        case 0x1d3ed0u: goto label_1d3ed0;
        case 0x1d3ed4u: goto label_1d3ed4;
        case 0x1d3ed8u: goto label_1d3ed8;
        case 0x1d3edcu: goto label_1d3edc;
        case 0x1d3ee0u: goto label_1d3ee0;
        case 0x1d3ee4u: goto label_1d3ee4;
        case 0x1d3ee8u: goto label_1d3ee8;
        case 0x1d3eecu: goto label_1d3eec;
        case 0x1d3ef0u: goto label_1d3ef0;
        case 0x1d3ef4u: goto label_1d3ef4;
        case 0x1d3ef8u: goto label_1d3ef8;
        case 0x1d3efcu: goto label_1d3efc;
        case 0x1d3f00u: goto label_1d3f00;
        case 0x1d3f04u: goto label_1d3f04;
        case 0x1d3f08u: goto label_1d3f08;
        case 0x1d3f0cu: goto label_1d3f0c;
        case 0x1d3f10u: goto label_1d3f10;
        case 0x1d3f14u: goto label_1d3f14;
        case 0x1d3f18u: goto label_1d3f18;
        case 0x1d3f1cu: goto label_1d3f1c;
        case 0x1d3f20u: goto label_1d3f20;
        case 0x1d3f24u: goto label_1d3f24;
        case 0x1d3f28u: goto label_1d3f28;
        case 0x1d3f2cu: goto label_1d3f2c;
        case 0x1d3f30u: goto label_1d3f30;
        case 0x1d3f34u: goto label_1d3f34;
        case 0x1d3f38u: goto label_1d3f38;
        case 0x1d3f3cu: goto label_1d3f3c;
        case 0x1d3f40u: goto label_1d3f40;
        case 0x1d3f44u: goto label_1d3f44;
        case 0x1d3f48u: goto label_1d3f48;
        case 0x1d3f4cu: goto label_1d3f4c;
        case 0x1d3f50u: goto label_1d3f50;
        case 0x1d3f54u: goto label_1d3f54;
        case 0x1d3f58u: goto label_1d3f58;
        case 0x1d3f5cu: goto label_1d3f5c;
        case 0x1d3f60u: goto label_1d3f60;
        case 0x1d3f64u: goto label_1d3f64;
        case 0x1d3f68u: goto label_1d3f68;
        case 0x1d3f6cu: goto label_1d3f6c;
        case 0x1d3f70u: goto label_1d3f70;
        case 0x1d3f74u: goto label_1d3f74;
        case 0x1d3f78u: goto label_1d3f78;
        case 0x1d3f7cu: goto label_1d3f7c;
        case 0x1d3f80u: goto label_1d3f80;
        case 0x1d3f84u: goto label_1d3f84;
        case 0x1d3f88u: goto label_1d3f88;
        case 0x1d3f8cu: goto label_1d3f8c;
        case 0x1d3f90u: goto label_1d3f90;
        case 0x1d3f94u: goto label_1d3f94;
        case 0x1d3f98u: goto label_1d3f98;
        case 0x1d3f9cu: goto label_1d3f9c;
        case 0x1d3fa0u: goto label_1d3fa0;
        case 0x1d3fa4u: goto label_1d3fa4;
        case 0x1d3fa8u: goto label_1d3fa8;
        case 0x1d3facu: goto label_1d3fac;
        case 0x1d3fb0u: goto label_1d3fb0;
        case 0x1d3fb4u: goto label_1d3fb4;
        case 0x1d3fb8u: goto label_1d3fb8;
        case 0x1d3fbcu: goto label_1d3fbc;
        case 0x1d3fc0u: goto label_1d3fc0;
        case 0x1d3fc4u: goto label_1d3fc4;
        case 0x1d3fc8u: goto label_1d3fc8;
        case 0x1d3fccu: goto label_1d3fcc;
        case 0x1d3fd0u: goto label_1d3fd0;
        case 0x1d3fd4u: goto label_1d3fd4;
        case 0x1d3fd8u: goto label_1d3fd8;
        case 0x1d3fdcu: goto label_1d3fdc;
        case 0x1d3fe0u: goto label_1d3fe0;
        case 0x1d3fe4u: goto label_1d3fe4;
        case 0x1d3fe8u: goto label_1d3fe8;
        case 0x1d3fecu: goto label_1d3fec;
        case 0x1d3ff0u: goto label_1d3ff0;
        case 0x1d3ff4u: goto label_1d3ff4;
        case 0x1d3ff8u: goto label_1d3ff8;
        case 0x1d3ffcu: goto label_1d3ffc;
        case 0x1d4000u: goto label_1d4000;
        case 0x1d4004u: goto label_1d4004;
        case 0x1d4008u: goto label_1d4008;
        case 0x1d400cu: goto label_1d400c;
        case 0x1d4010u: goto label_1d4010;
        case 0x1d4014u: goto label_1d4014;
        case 0x1d4018u: goto label_1d4018;
        case 0x1d401cu: goto label_1d401c;
        case 0x1d4020u: goto label_1d4020;
        case 0x1d4024u: goto label_1d4024;
        case 0x1d4028u: goto label_1d4028;
        case 0x1d402cu: goto label_1d402c;
        case 0x1d4030u: goto label_1d4030;
        case 0x1d4034u: goto label_1d4034;
        case 0x1d4038u: goto label_1d4038;
        case 0x1d403cu: goto label_1d403c;
        case 0x1d4040u: goto label_1d4040;
        case 0x1d4044u: goto label_1d4044;
        case 0x1d4048u: goto label_1d4048;
        case 0x1d404cu: goto label_1d404c;
        case 0x1d4050u: goto label_1d4050;
        case 0x1d4054u: goto label_1d4054;
        case 0x1d4058u: goto label_1d4058;
        case 0x1d405cu: goto label_1d405c;
        case 0x1d4060u: goto label_1d4060;
        case 0x1d4064u: goto label_1d4064;
        case 0x1d4068u: goto label_1d4068;
        case 0x1d406cu: goto label_1d406c;
        case 0x1d4070u: goto label_1d4070;
        case 0x1d4074u: goto label_1d4074;
        case 0x1d4078u: goto label_1d4078;
        case 0x1d407cu: goto label_1d407c;
        case 0x1d4080u: goto label_1d4080;
        case 0x1d4084u: goto label_1d4084;
        case 0x1d4088u: goto label_1d4088;
        case 0x1d408cu: goto label_1d408c;
        case 0x1d4090u: goto label_1d4090;
        case 0x1d4094u: goto label_1d4094;
        case 0x1d4098u: goto label_1d4098;
        case 0x1d409cu: goto label_1d409c;
        case 0x1d40a0u: goto label_1d40a0;
        case 0x1d40a4u: goto label_1d40a4;
        case 0x1d40a8u: goto label_1d40a8;
        case 0x1d40acu: goto label_1d40ac;
        case 0x1d40b0u: goto label_1d40b0;
        case 0x1d40b4u: goto label_1d40b4;
        case 0x1d40b8u: goto label_1d40b8;
        case 0x1d40bcu: goto label_1d40bc;
        case 0x1d40c0u: goto label_1d40c0;
        case 0x1d40c4u: goto label_1d40c4;
        case 0x1d40c8u: goto label_1d40c8;
        case 0x1d40ccu: goto label_1d40cc;
        case 0x1d40d0u: goto label_1d40d0;
        case 0x1d40d4u: goto label_1d40d4;
        case 0x1d40d8u: goto label_1d40d8;
        case 0x1d40dcu: goto label_1d40dc;
        case 0x1d40e0u: goto label_1d40e0;
        case 0x1d40e4u: goto label_1d40e4;
        case 0x1d40e8u: goto label_1d40e8;
        case 0x1d40ecu: goto label_1d40ec;
        case 0x1d40f0u: goto label_1d40f0;
        case 0x1d40f4u: goto label_1d40f4;
        case 0x1d40f8u: goto label_1d40f8;
        case 0x1d40fcu: goto label_1d40fc;
        case 0x1d4100u: goto label_1d4100;
        case 0x1d4104u: goto label_1d4104;
        case 0x1d4108u: goto label_1d4108;
        case 0x1d410cu: goto label_1d410c;
        case 0x1d4110u: goto label_1d4110;
        case 0x1d4114u: goto label_1d4114;
        case 0x1d4118u: goto label_1d4118;
        case 0x1d411cu: goto label_1d411c;
        case 0x1d4120u: goto label_1d4120;
        case 0x1d4124u: goto label_1d4124;
        case 0x1d4128u: goto label_1d4128;
        case 0x1d412cu: goto label_1d412c;
        case 0x1d4130u: goto label_1d4130;
        case 0x1d4134u: goto label_1d4134;
        case 0x1d4138u: goto label_1d4138;
        case 0x1d413cu: goto label_1d413c;
        case 0x1d4140u: goto label_1d4140;
        case 0x1d4144u: goto label_1d4144;
        case 0x1d4148u: goto label_1d4148;
        case 0x1d414cu: goto label_1d414c;
        case 0x1d4150u: goto label_1d4150;
        case 0x1d4154u: goto label_1d4154;
        case 0x1d4158u: goto label_1d4158;
        case 0x1d415cu: goto label_1d415c;
        case 0x1d4160u: goto label_1d4160;
        case 0x1d4164u: goto label_1d4164;
        case 0x1d4168u: goto label_1d4168;
        case 0x1d416cu: goto label_1d416c;
        case 0x1d4170u: goto label_1d4170;
        case 0x1d4174u: goto label_1d4174;
        case 0x1d4178u: goto label_1d4178;
        case 0x1d417cu: goto label_1d417c;
        case 0x1d4180u: goto label_1d4180;
        case 0x1d4184u: goto label_1d4184;
        case 0x1d4188u: goto label_1d4188;
        case 0x1d418cu: goto label_1d418c;
        case 0x1d4190u: goto label_1d4190;
        case 0x1d4194u: goto label_1d4194;
        case 0x1d4198u: goto label_1d4198;
        case 0x1d419cu: goto label_1d419c;
        case 0x1d41a0u: goto label_1d41a0;
        case 0x1d41a4u: goto label_1d41a4;
        case 0x1d41a8u: goto label_1d41a8;
        case 0x1d41acu: goto label_1d41ac;
        case 0x1d41b0u: goto label_1d41b0;
        case 0x1d41b4u: goto label_1d41b4;
        case 0x1d41b8u: goto label_1d41b8;
        case 0x1d41bcu: goto label_1d41bc;
        case 0x1d41c0u: goto label_1d41c0;
        case 0x1d41c4u: goto label_1d41c4;
        case 0x1d41c8u: goto label_1d41c8;
        case 0x1d41ccu: goto label_1d41cc;
        case 0x1d41d0u: goto label_1d41d0;
        case 0x1d41d4u: goto label_1d41d4;
        case 0x1d41d8u: goto label_1d41d8;
        case 0x1d41dcu: goto label_1d41dc;
        case 0x1d41e0u: goto label_1d41e0;
        case 0x1d41e4u: goto label_1d41e4;
        case 0x1d41e8u: goto label_1d41e8;
        case 0x1d41ecu: goto label_1d41ec;
        case 0x1d41f0u: goto label_1d41f0;
        case 0x1d41f4u: goto label_1d41f4;
        case 0x1d41f8u: goto label_1d41f8;
        case 0x1d41fcu: goto label_1d41fc;
        case 0x1d4200u: goto label_1d4200;
        case 0x1d4204u: goto label_1d4204;
        case 0x1d4208u: goto label_1d4208;
        case 0x1d420cu: goto label_1d420c;
        case 0x1d4210u: goto label_1d4210;
        case 0x1d4214u: goto label_1d4214;
        case 0x1d4218u: goto label_1d4218;
        case 0x1d421cu: goto label_1d421c;
        case 0x1d4220u: goto label_1d4220;
        case 0x1d4224u: goto label_1d4224;
        case 0x1d4228u: goto label_1d4228;
        case 0x1d422cu: goto label_1d422c;
        case 0x1d4230u: goto label_1d4230;
        case 0x1d4234u: goto label_1d4234;
        case 0x1d4238u: goto label_1d4238;
        case 0x1d423cu: goto label_1d423c;
        case 0x1d4240u: goto label_1d4240;
        case 0x1d4244u: goto label_1d4244;
        case 0x1d4248u: goto label_1d4248;
        case 0x1d424cu: goto label_1d424c;
        case 0x1d4250u: goto label_1d4250;
        case 0x1d4254u: goto label_1d4254;
        case 0x1d4258u: goto label_1d4258;
        case 0x1d425cu: goto label_1d425c;
        case 0x1d4260u: goto label_1d4260;
        case 0x1d4264u: goto label_1d4264;
        case 0x1d4268u: goto label_1d4268;
        case 0x1d426cu: goto label_1d426c;
        case 0x1d4270u: goto label_1d4270;
        case 0x1d4274u: goto label_1d4274;
        case 0x1d4278u: goto label_1d4278;
        case 0x1d427cu: goto label_1d427c;
        case 0x1d4280u: goto label_1d4280;
        case 0x1d4284u: goto label_1d4284;
        case 0x1d4288u: goto label_1d4288;
        case 0x1d428cu: goto label_1d428c;
        default: return;
    }

label_1d3ac0:
    // 0x1d3ac0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d3ac4:
    if (ctx->pc == 0x1D3AC4u) {
        ctx->pc = 0x1D3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AC0u;
        // 0x1d3ac4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3AC8u;
        goto label_1d3ac8;
    }
    ctx->pc = 0x1D3AC0u;
    {
        const bool branch_taken_0x1d3ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AC0u;
        // 0x1d3ac4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ac0) {
            ctx->pc = 0x1D3AE0u;
            goto label_1d3ae0;
        }
    }
    ctx->pc = 0x1D3AC8u;
label_1d3ac8:
    // 0x1d3ac8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d3ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d3acc:
    // 0x1d3acc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1d3accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1d3ad0:
    // 0x1d3ad0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d3ad0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3ad4:
    // 0x1d3ad4: 0x0  nop
    ctx->pc = 0x1d3ad4u;
    // NOP
label_1d3ad8:
    // 0x1d3ad8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d3adc:
    // 0x1d3adc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d3adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d3ae0:
    // 0x1d3ae0: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1d3ae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d3ae4:
    // 0x1d3ae4: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
label_1d3ae8:
    if (ctx->pc == 0x1D3AE8u) {
        ctx->pc = 0x1D3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AE4u;
        // 0x1d3ae8: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3AECu;
        goto label_1d3aec;
    }
    ctx->pc = 0x1D3AE4u;
    {
        const bool branch_taken_0x1d3ae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AE4u;
        // 0x1d3ae8: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ae4) {
            ctx->pc = 0x1D3B30u;
            goto label_1d3b30;
        }
    }
    ctx->pc = 0x1D3AECu;
label_1d3aec:
    // 0x1d3aec: 0xc421b500  lwc1        $f1, -0x4B00($at)
    ctx->pc = 0x1d3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d3af0:
    // 0x1d3af0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d3af0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d3af4:
    // 0x1d3af4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3af8:
    // 0x1d3af8: 0xe421b580  swc1        $f1, -0x4A80($at)
    ctx->pc = 0x1d3af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948224), bits); }
label_1d3afc:
    // 0x1d3afc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b00:
    // 0x1d3b00: 0xe420b570  swc1        $f0, -0x4A90($at)
    ctx->pc = 0x1d3b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948208), bits); }
label_1d3b04:
    // 0x1d3b04: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b08:
    // 0x1d3b08: 0xe420b560  swc1        $f0, -0x4AA0($at)
    ctx->pc = 0x1d3b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948192), bits); }
label_1d3b0c:
    // 0x1d3b0c: 0x46050041  sub.s       $f1, $f0, $f5
    ctx->pc = 0x1d3b0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_1d3b10:
    // 0x1d3b10: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b14:
    // 0x1d3b14: 0xe421b550  swc1        $f1, -0x4AB0($at)
    ctx->pc = 0x1d3b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948176), bits); }
label_1d3b18:
    // 0x1d3b18: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b1c:
    // 0x1d3b1c: 0xe421b540  swc1        $f1, -0x4AC0($at)
    ctx->pc = 0x1d3b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948160), bits); }
label_1d3b20:
    // 0x1d3b20: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x1d3b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1d3b24:
    // 0x1d3b24: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b28:
    // 0x1d3b28: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d3b2c:
    if (ctx->pc == 0x1D3B2Cu) {
        ctx->pc = 0x1D3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B28u;
        // 0x1d3b2c: 0xe420b530  swc1        $f0, -0x4AD0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B30u;
        goto label_1d3b30;
    }
    ctx->pc = 0x1D3B28u;
    {
        const bool branch_taken_0x1d3b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B28u;
        // 0x1d3b2c: 0xe420b530  swc1        $f0, -0x4AD0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b28) {
            ctx->pc = 0x1D3B9Cu;
            goto label_1d3b9c;
        }
    }
    ctx->pc = 0x1D3B30u;
label_1d3b30:
    // 0x1d3b30: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b34:
    // 0x1d3b34: 0xc423b500  lwc1        $f3, -0x4B00($at)
    ctx->pc = 0x1d3b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d3b38:
    // 0x1d3b38: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1d3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_1d3b3c:
    // 0x1d3b3c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d3b40:
    // 0x1d3b40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d3b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3b44:
    // 0x1d3b44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d3b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d3b48:
    // 0x1d3b48: 0x0  nop
    ctx->pc = 0x1d3b48u;
    // NOP
label_1d3b4c:
    // 0x1d3b4c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1d3b4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1d3b50:
    // 0x1d3b50: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b54:
    // 0x1d3b54: 0xe423b580  swc1        $f3, -0x4A80($at)
    ctx->pc = 0x1d3b54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948224), bits); }
label_1d3b58:
    // 0x1d3b58: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b5c:
    // 0x1d3b5c: 0xe420b570  swc1        $f0, -0x4A90($at)
    ctx->pc = 0x1d3b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948208), bits); }
label_1d3b60:
    // 0x1d3b60: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1d3b60u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_1d3b64:
    // 0x1d3b64: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b68:
    // 0x1d3b68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d3b68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1d3b6c:
    // 0x1d3b6c: 0xe421b560  swc1        $f1, -0x4AA0($at)
    ctx->pc = 0x1d3b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948192), bits); }
label_1d3b70:
    // 0x1d3b70: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x1d3b70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1d3b74:
    // 0x1d3b74: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b78:
    // 0x1d3b78: 0xe420b550  swc1        $f0, -0x4AB0($at)
    ctx->pc = 0x1d3b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948176), bits); }
label_1d3b7c:
    // 0x1d3b7c: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1d3b7cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_1d3b80:
    // 0x1d3b80: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b84:
    // 0x1d3b84: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x1d3b84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d3b88:
    // 0x1d3b88: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x1d3b88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1d3b8c:
    // 0x1d3b8c: 0xe421b540  swc1        $f1, -0x4AC0($at)
    ctx->pc = 0x1d3b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948160), bits); }
label_1d3b90:
    // 0x1d3b90: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1d3b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1d3b94:
    // 0x1d3b94: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3b98:
    // 0x1d3b98: 0xe420b530  swc1        $f0, -0x4AD0($at)
    ctx->pc = 0x1d3b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948144), bits); }
label_1d3b9c:
    // 0x1d3b9c: 0x0  nop
    ctx->pc = 0x1d3b9cu;
    // NOP
label_1d3ba0:
    // 0x1d3ba0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3ba4:
    // 0x1d3ba4: 0xc422b530  lwc1        $f2, -0x4AD0($at)
    ctx->pc = 0x1d3ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d3ba8:
    // 0x1d3ba8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1d3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
label_1d3bac:
    // 0x1d3bac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3bacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3bb0:
    // 0x1d3bb0: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1d3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_1d3bb4:
    // 0x1d3bb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3bb8:
    // 0x1d3bb8: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1d3bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1d3bbc:
    // 0x1d3bbc: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1d3bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1d3bc0:
    // 0x1d3bc0: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x1d3bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_1d3bc4:
    // 0x1d3bc4: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x1d3bc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_1d3bc8:
    // 0x1d3bc8: 0x24842190  addiu       $a0, $a0, 0x2190
    ctx->pc = 0x1d3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8592));
label_1d3bcc:
    // 0x1d3bcc: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x1d3bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
label_1d3bd0:
    // 0x1d3bd0: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1d3bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1d3bd4:
    // 0x1d3bd4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3bd8:
    // 0x1d3bd8: 0x24e7b4d0  addiu       $a3, $a3, -0x4B30
    ctx->pc = 0x1d3bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948048));
label_1d3bdc:
    // 0x1d3bdc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1d3bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3be0:
    // 0x1d3be0: 0xe422b520  swc1        $f2, -0x4AE0($at)
    ctx->pc = 0x1d3be0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948128), bits); }
label_1d3be4:
    // 0x1d3be4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3be8:
    // 0x1d3be8: 0xe420b514  swc1        $f0, -0x4AEC($at)
    ctx->pc = 0x1d3be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948116), bits); }
label_1d3bec:
    // 0x1d3bec: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3bf0:
    // 0x1d3bf0: 0xe420b534  swc1        $f0, -0x4ACC($at)
    ctx->pc = 0x1d3bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948148), bits); }
label_1d3bf4:
    // 0x1d3bf4: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x1d3bf4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_1d3bf8:
    // 0x1d3bf8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3bfc:
    // 0x1d3bfc: 0xe422b510  swc1        $f2, -0x4AF0($at)
    ctx->pc = 0x1d3bfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948112), bits); }
label_1d3c00:
    // 0x1d3c00: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x1d3c00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_1d3c04:
    // 0x1d3c04: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c08:
    // 0x1d3c08: 0xe421b524  swc1        $f1, -0x4ADC($at)
    ctx->pc = 0x1d3c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948132), bits); }
label_1d3c0c:
    // 0x1d3c0c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c10:
    // 0x1d3c10: 0xe421b544  swc1        $f1, -0x4ABC($at)
    ctx->pc = 0x1d3c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948164), bits); }
label_1d3c14:
    // 0x1d3c14: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1d3c14u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_1d3c18:
    // 0x1d3c18: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c1c:
    // 0x1d3c1c: 0xe420b574  swc1        $f0, -0x4A8C($at)
    ctx->pc = 0x1d3c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948212), bits); }
label_1d3c20:
    // 0x1d3c20: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c24:
    // 0x1d3c24: 0xe420b554  swc1        $f0, -0x4AAC($at)
    ctx->pc = 0x1d3c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948180), bits); }
label_1d3c28:
    // 0x1d3c28: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c2c:
    // 0x1d3c2c: 0xc420b544  lwc1        $f0, -0x4ABC($at)
    ctx->pc = 0x1d3c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3c30:
    // 0x1d3c30: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c34:
    // 0x1d3c34: 0xe420b584  swc1        $f0, -0x4A7C($at)
    ctx->pc = 0x1d3c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948228), bits); }
label_1d3c38:
    // 0x1d3c38: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d3c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d3c3c:
    // 0x1d3c3c: 0xc067090  jal         func_19C240
label_1d3c40:
    if (ctx->pc == 0x1D3C40u) {
        ctx->pc = 0x1D3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C3Cu;
        // 0x1d3c40: 0xe420b564  swc1        $f0, -0x4A9C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948196), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C44u;
        goto label_1d3c44;
    }
    ctx->pc = 0x1D3C3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C44u);
    ctx->pc = 0x1D3C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C3Cu;
    // 0x1d3c40: 0xe420b564  swc1        $f0, -0x4A9C($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294948196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C240u;
    { ctx->pc = 0x19c240; return; }
    ctx->pc = 0x1D3C44u;
label_1d3c44:
    // 0x1d3c44: 0x1440024c  bnez        $v0, . + 4 + (0x24C << 2)
label_1d3c48:
    if (ctx->pc == 0x1D3C48u) {
        ctx->pc = 0x1D3C4Cu;
        goto label_1d3c4c;
    }
    ctx->pc = 0x1D3C44u;
    {
        const bool branch_taken_0x1d3c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c44) {
            ctx->pc = 0x1D4578u;
            { ctx->pc = 0x1d4578; return; }
        }
    }
    ctx->pc = 0x1D3C4Cu;
label_1d3c4c:
    // 0x1d3c4c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1d3c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d3c50:
    // 0x1d3c50: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x1d3c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d3c54:
    // 0x1d3c54: 0x10200164  beqz        $at, . + 4 + (0x164 << 2)
label_1d3c58:
    if (ctx->pc == 0x1D3C58u) {
        ctx->pc = 0x1D3C5Cu;
        goto label_1d3c5c;
    }
    ctx->pc = 0x1D3C54u;
    {
        const bool branch_taken_0x1d3c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c54) {
            ctx->pc = 0x1D41E8u;
            goto label_1d41e8;
        }
    }
    ctx->pc = 0x1D3C5Cu;
label_1d3c5c:
    // 0x1d3c5c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1d3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1d3c60:
    // 0x1d3c60: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d3c64:
    // 0x1d3c64: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1d3c68:
    if (ctx->pc == 0x1D3C68u) {
        ctx->pc = 0x1D3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C64u;
        // 0x1d3c68: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C6Cu;
        goto label_1d3c6c;
    }
    ctx->pc = 0x1D3C64u;
    {
        const bool branch_taken_0x1d3c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C64u;
        // 0x1d3c68: 0x24110032  addiu       $s1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c64) {
            ctx->pc = 0x1D3C80u;
            goto label_1d3c80;
        }
    }
    ctx->pc = 0x1D3C6Cu;
label_1d3c6c:
    // 0x1d3c6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d3c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d3c70:
    // 0x1d3c70: 0x8c224968  lw          $v0, 0x4968($at)
    ctx->pc = 0x1d3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
label_1d3c74:
    // 0x1d3c74: 0x90420282  lbu         $v0, 0x282($v0)
    ctx->pc = 0x1d3c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 642)));
label_1d3c78:
    // 0x1d3c78: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d3c7c:
    if (ctx->pc == 0x1D3C7Cu) {
        ctx->pc = 0x1D3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C78u;
        // 0x1d3c7c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C80u;
        goto label_1d3c80;
    }
    ctx->pc = 0x1D3C78u;
    {
        const bool branch_taken_0x1d3c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C78u;
        // 0x1d3c7c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c78) {
            ctx->pc = 0x1D3CA8u;
            goto label_1d3ca8;
        }
    }
    ctx->pc = 0x1D3C80u;
label_1d3c80:
    // 0x1d3c80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d3c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d3c84:
    // 0x1d3c84: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1d3c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1d3c88:
    // 0x1d3c88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d3c8c:
    if (ctx->pc == 0x1D3C8Cu) {
        ctx->pc = 0x1D3C90u;
        goto label_1d3c90;
    }
    ctx->pc = 0x1D3C88u;
    {
        const bool branch_taken_0x1d3c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c88) {
            ctx->pc = 0x1D3CA8u;
            goto label_1d3ca8;
        }
    }
    ctx->pc = 0x1D3C90u;
label_1d3c90:
    // 0x1d3c90: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1d3c94:
    // 0x1d3c94: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1d3c98:
    if (ctx->pc == 0x1D3C98u) {
        ctx->pc = 0x1D3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C94u;
        // 0x1d3c98: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3C9Cu;
        goto label_1d3c9c;
    }
    ctx->pc = 0x1D3C94u;
    {
        const bool branch_taken_0x1d3c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C94u;
        // 0x1d3c98: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c94) {
            ctx->pc = 0x1D3CA8u;
            goto label_1d3ca8;
        }
    }
    ctx->pc = 0x1D3C9Cu;
label_1d3c9c:
    // 0x1d3c9c: 0x8c2249f8  lw          $v0, 0x49F8($at)
    ctx->pc = 0x1d3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18936)));
label_1d3ca0:
    // 0x1d3ca0: 0x90420282  lbu         $v0, 0x282($v0)
    ctx->pc = 0x1d3ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 642)));
label_1d3ca4:
    // 0x1d3ca4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d3ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d3ca8:
    // 0x1d3ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3cac:
    // 0x1d3cac: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_1d3cb0:
    if (ctx->pc == 0x1D3CB0u) {
        ctx->pc = 0x1D3CB4u;
        goto label_1d3cb4;
    }
    ctx->pc = 0x1D3CACu;
    {
        const bool branch_taken_0x1d3cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3cac) {
            ctx->pc = 0x1D3CBCu;
            goto label_1d3cbc;
        }
    }
    ctx->pc = 0x1D3CB4u;
label_1d3cb4:
    // 0x1d3cb4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d3cb8:
    if (ctx->pc == 0x1D3CB8u) {
        ctx->pc = 0x1D3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CB4u;
        // 0x1d3cb8: 0x26310032  addiu       $s1, $s1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3CBCu;
        goto label_1d3cbc;
    }
    ctx->pc = 0x1D3CB4u;
    {
        const bool branch_taken_0x1d3cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CB4u;
        // 0x1d3cb8: 0x26310032  addiu       $s1, $s1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cb4) {
            ctx->pc = 0x1D3CD0u;
            goto label_1d3cd0;
        }
    }
    ctx->pc = 0x1D3CBCu;
label_1d3cbc:
    // 0x1d3cbc: 0x0  nop
    ctx->pc = 0x1d3cbcu;
    // NOP
label_1d3cc0:
    // 0x1d3cc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3cc4:
    // 0x1d3cc4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_1d3cc8:
    if (ctx->pc == 0x1D3CC8u) {
        ctx->pc = 0x1D3CCCu;
        goto label_1d3ccc;
    }
    ctx->pc = 0x1D3CC4u;
    {
        const bool branch_taken_0x1d3cc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3cc4) {
            ctx->pc = 0x1D3CD0u;
            goto label_1d3cd0;
        }
    }
    ctx->pc = 0x1D3CCCu;
label_1d3ccc:
    // 0x1d3ccc: 0x26310096  addiu       $s1, $s1, 0x96
    ctx->pc = 0x1d3cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 150));
label_1d3cd0:
    // 0x1d3cd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3cd4:
    // 0x1d3cd4: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1d3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_1d3cd8:
    // 0x1d3cd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d3cd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3cdc:
    // 0x1d3cdc: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1d3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_1d3ce0:
    // 0x1d3ce0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d3ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d3ce4:
    // 0x1d3ce4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1d3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d3ce8:
    // 0x1d3ce8: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_1d3cec:
    // 0x1d3cec: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1d3cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1d3cf0:
    // 0x1d3cf0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d3cf4:
    // 0x1d3cf4: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x1d3cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d3cf8:
    // 0x1d3cf8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1d3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1d3cfc:
    // 0x1d3cfc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1d3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1d3d00:
    // 0x1d3d00: 0x2463b4d0  addiu       $v1, $v1, -0x4B30
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948048));
label_1d3d04:
    // 0x1d3d04: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x1d3d04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d3d08:
    // 0x1d3d08: 0xc066d7a  jal         func_19B5E8
label_1d3d0c:
    if (ctx->pc == 0x1D3D0Cu) {
        ctx->pc = 0x1D3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D08u;
        // 0x1d3d0c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D10u;
        goto label_1d3d10;
    }
    ctx->pc = 0x1D3D08u;
    SET_GPR_U32(ctx, 31, 0x1D3D10u);
    ctx->pc = 0x1D3D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D08u;
    // 0x1d3d0c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1D3D08u, 0x1D3D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D10u;
label_1d3d10:
    // 0x1d3d10: 0x27b5025c  addiu       $s5, $sp, 0x25C
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_1d3d14:
    // 0x1d3d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d3d18:
    // 0x1d3d18: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3d1c:
    // 0x1d3d1c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x1d3d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_1d3d20:
    // 0x1d3d20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3d24:
    // 0x1d3d24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d3d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3d28:
    // 0x1d3d28: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1d3d28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1d3d2c:
    // 0x1d3d2c: 0x0  nop
    ctx->pc = 0x1d3d2cu;
    // NOP
label_1d3d30:
    // 0x1d3d30: 0x0  nop
    ctx->pc = 0x1d3d30u;
    // NOP
label_1d3d34:
    // 0x1d3d34: 0xc066e14  jal         func_19B850
label_1d3d38:
    if (ctx->pc == 0x1D3D38u) {
        ctx->pc = 0x1D3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D34u;
        // 0x1d3d38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D3Cu;
        goto label_1d3d3c;
    }
    ctx->pc = 0x1D3D34u;
    SET_GPR_U32(ctx, 31, 0x1D3D3Cu);
    ctx->pc = 0x1D3D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D34u;
    // 0x1d3d38: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1D3D3Cu;
label_1d3d3c:
    // 0x1d3d3c: 0xc07f198  jal         func_1FC660
label_1d3d40:
    if (ctx->pc == 0x1D3D40u) {
        ctx->pc = 0x1D3D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D3Cu;
        // 0x1d3d40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D44u;
        goto label_1d3d44;
    }
    ctx->pc = 0x1D3D3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D44u);
    ctx->pc = 0x1D3D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D3Cu;
    // 0x1d3d40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1D3D44u;
label_1d3d44:
    // 0x1d3d44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d3d44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d3d48:
    // 0x1d3d48: 0xc07f190  jal         func_1FC640
label_1d3d4c:
    if (ctx->pc == 0x1D3D4Cu) {
        ctx->pc = 0x1D3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D48u;
        // 0x1d3d4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D50u;
        goto label_1d3d50;
    }
    ctx->pc = 0x1D3D48u;
    SET_GPR_U32(ctx, 31, 0x1D3D50u);
    ctx->pc = 0x1D3D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D48u;
    // 0x1d3d4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1D3D50u;
label_1d3d50:
    // 0x1d3d50: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1d3d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d3d54:
    // 0x1d3d54: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1d3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1d3d58:
    // 0x1d3d58: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x1d3d58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1d3d5c:
    // 0x1d3d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3d60:
    // 0x1d3d60: 0x0  nop
    ctx->pc = 0x1d3d60u;
    // NOP
label_1d3d64:
    // 0x1d3d64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d3d64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3d68:
    // 0x1d3d68: 0x0  nop
    ctx->pc = 0x1d3d68u;
    // NOP
label_1d3d6c:
    // 0x1d3d6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d3d70:
    if (ctx->pc == 0x1D3D70u) {
        ctx->pc = 0x1D3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D6Cu;
        // 0x1d3d70: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D74u;
        goto label_1d3d74;
    }
    ctx->pc = 0x1D3D6Cu;
    {
        const bool branch_taken_0x1d3d6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D6Cu;
        // 0x1d3d70: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d6c) {
            ctx->pc = 0x1D3D7Cu;
            goto label_1d3d7c;
        }
    }
    ctx->pc = 0x1D3D74u;
label_1d3d74:
    // 0x1d3d74: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d3d78:
    if (ctx->pc == 0x1D3D78u) {
        ctx->pc = 0x1D3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D74u;
        // 0x1d3d78: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3D7Cu;
        goto label_1d3d7c;
    }
    ctx->pc = 0x1D3D74u;
    {
        const bool branch_taken_0x1d3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D74u;
        // 0x1d3d78: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d74) {
            ctx->pc = 0x1D3D9Cu;
            goto label_1d3d9c;
        }
    }
    ctx->pc = 0x1D3D7Cu;
label_1d3d7c:
    // 0x1d3d7c: 0x0  nop
    ctx->pc = 0x1d3d7cu;
    // NOP
label_1d3d80:
    // 0x1d3d80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3d80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3d84:
    // 0x1d3d84: 0x0  nop
    ctx->pc = 0x1d3d84u;
    // NOP
label_1d3d88:
    // 0x1d3d88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d3d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3d8c:
    // 0x1d3d8c: 0x0  nop
    ctx->pc = 0x1d3d8cu;
    // NOP
label_1d3d90:
    // 0x1d3d90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d3d94:
    if (ctx->pc == 0x1D3D94u) {
        ctx->pc = 0x1D3D98u;
        goto label_1d3d98;
    }
    ctx->pc = 0x1D3D90u;
    {
        const bool branch_taken_0x1d3d90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3d90) {
            ctx->pc = 0x1D3D9Cu;
            goto label_1d3d9c;
        }
    }
    ctx->pc = 0x1D3D98u;
label_1d3d98:
    // 0x1d3d98: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d3d9c:
    // 0x1d3d9c: 0x0  nop
    ctx->pc = 0x1d3d9cu;
    // NOP
label_1d3da0:
    // 0x1d3da0: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1d3da4:
    // 0x1d3da4: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x1d3da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3da8:
    // 0x1d3da8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d3da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1d3dac:
    // 0x1d3dac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3db0:
    // 0x1d3db0: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_1d3db4:
    // 0x1d3db4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d3db8:
    // 0x1d3db8: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x1d3db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_1d3dbc:
    // 0x1d3dbc: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3dc0:
    // 0x1d3dc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d3dc4:
    // 0x1d3dc4: 0xc066e34  jal         func_19B8D0
label_1d3dc8:
    if (ctx->pc == 0x1D3DC8u) {
        ctx->pc = 0x1D3DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DC4u;
        // 0x1d3dc8: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3DCCu;
        goto label_1d3dcc;
    }
    ctx->pc = 0x1D3DC4u;
    SET_GPR_U32(ctx, 31, 0x1D3DCCu);
    ctx->pc = 0x1D3DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DC4u;
    // 0x1d3dc8: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1D3DCCu;
label_1d3dcc:
    // 0x1d3dcc: 0x26e60010  addiu       $a2, $s7, 0x10
    ctx->pc = 0x1d3dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_1d3dd0:
    // 0x1d3dd0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1d3dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_1d3dd4:
    // 0x1d3dd4: 0xc066d7a  jal         func_19B5E8
label_1d3dd8:
    if (ctx->pc == 0x1D3DD8u) {
        ctx->pc = 0x1D3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DD4u;
        // 0x1d3dd8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3DDCu;
        goto label_1d3ddc;
    }
    ctx->pc = 0x1D3DD4u;
    SET_GPR_U32(ctx, 31, 0x1D3DDCu);
    ctx->pc = 0x1D3DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DD4u;
    // 0x1d3dd8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1D3DD4u, 0x1D3DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DDCu;
label_1d3ddc:
    // 0x1d3ddc: 0x27b5026c  addiu       $s5, $sp, 0x26C
    ctx->pc = 0x1d3ddcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_1d3de0:
    // 0x1d3de0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d3de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d3de4:
    // 0x1d3de4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3de8:
    // 0x1d3de8: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x1d3de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_1d3dec:
    // 0x1d3dec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3df0:
    // 0x1d3df0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d3df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3df4:
    // 0x1d3df4: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1d3df4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1d3df8:
    // 0x1d3df8: 0x0  nop
    ctx->pc = 0x1d3df8u;
    // NOP
label_1d3dfc:
    // 0x1d3dfc: 0x0  nop
    ctx->pc = 0x1d3dfcu;
    // NOP
label_1d3e00:
    // 0x1d3e00: 0xc066e14  jal         func_19B850
label_1d3e04:
    if (ctx->pc == 0x1D3E04u) {
        ctx->pc = 0x1D3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E00u;
        // 0x1d3e04: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E08u;
        goto label_1d3e08;
    }
    ctx->pc = 0x1D3E00u;
    SET_GPR_U32(ctx, 31, 0x1D3E08u);
    ctx->pc = 0x1D3E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E00u;
    // 0x1d3e04: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1D3E08u;
label_1d3e08:
    // 0x1d3e08: 0xc07f198  jal         func_1FC660
label_1d3e0c:
    if (ctx->pc == 0x1D3E0Cu) {
        ctx->pc = 0x1D3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E08u;
        // 0x1d3e0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E10u;
        goto label_1d3e10;
    }
    ctx->pc = 0x1D3E08u;
    SET_GPR_U32(ctx, 31, 0x1D3E10u);
    ctx->pc = 0x1D3E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E08u;
    // 0x1d3e0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1D3E10u;
label_1d3e10:
    // 0x1d3e10: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d3e10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d3e14:
    // 0x1d3e14: 0xc07f190  jal         func_1FC640
label_1d3e18:
    if (ctx->pc == 0x1D3E18u) {
        ctx->pc = 0x1D3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E14u;
        // 0x1d3e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E1Cu;
        goto label_1d3e1c;
    }
    ctx->pc = 0x1D3E14u;
    SET_GPR_U32(ctx, 31, 0x1D3E1Cu);
    ctx->pc = 0x1D3E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E14u;
    // 0x1d3e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1D3E1Cu;
label_1d3e1c:
    // 0x1d3e1c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1d3e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d3e20:
    // 0x1d3e20: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1d3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1d3e24:
    // 0x1d3e24: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x1d3e24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1d3e28:
    // 0x1d3e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3e2c:
    // 0x1d3e2c: 0x0  nop
    ctx->pc = 0x1d3e2cu;
    // NOP
label_1d3e30:
    // 0x1d3e30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d3e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3e34:
    // 0x1d3e34: 0x0  nop
    ctx->pc = 0x1d3e34u;
    // NOP
label_1d3e38:
    // 0x1d3e38: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d3e3c:
    if (ctx->pc == 0x1D3E3Cu) {
        ctx->pc = 0x1D3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E38u;
        // 0x1d3e3c: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E40u;
        goto label_1d3e40;
    }
    ctx->pc = 0x1D3E38u;
    {
        const bool branch_taken_0x1d3e38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E38u;
        // 0x1d3e3c: 0xe6a10000  swc1        $f1, 0x0($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e38) {
            ctx->pc = 0x1D3E48u;
            goto label_1d3e48;
        }
    }
    ctx->pc = 0x1D3E40u;
label_1d3e40:
    // 0x1d3e40: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d3e44:
    if (ctx->pc == 0x1D3E44u) {
        ctx->pc = 0x1D3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E40u;
        // 0x1d3e44: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E48u;
        goto label_1d3e48;
    }
    ctx->pc = 0x1D3E40u;
    {
        const bool branch_taken_0x1d3e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E40u;
        // 0x1d3e44: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e40) {
            ctx->pc = 0x1D3E64u;
            goto label_1d3e64;
        }
    }
    ctx->pc = 0x1D3E48u;
label_1d3e48:
    // 0x1d3e48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d3e4c:
    // 0x1d3e4c: 0x0  nop
    ctx->pc = 0x1d3e4cu;
    // NOP
label_1d3e50:
    // 0x1d3e50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d3e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d3e54:
    // 0x1d3e54: 0x0  nop
    ctx->pc = 0x1d3e54u;
    // NOP
label_1d3e58:
    // 0x1d3e58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d3e5c:
    if (ctx->pc == 0x1D3E5Cu) {
        ctx->pc = 0x1D3E60u;
        goto label_1d3e60;
    }
    ctx->pc = 0x1D3E58u;
    {
        const bool branch_taken_0x1d3e58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3e58) {
            ctx->pc = 0x1D3E64u;
            goto label_1d3e64;
        }
    }
    ctx->pc = 0x1D3E60u;
label_1d3e60:
    // 0x1d3e60: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_1d3e64:
    // 0x1d3e64: 0x0  nop
    ctx->pc = 0x1d3e64u;
    // NOP
label_1d3e68:
    // 0x1d3e68: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1d3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1d3e6c:
    // 0x1d3e6c: 0xc7a00268  lwc1        $f0, 0x268($sp)
    ctx->pc = 0x1d3e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3e70:
    // 0x1d3e70: 0x27b70180  addiu       $s7, $sp, 0x180
    ctx->pc = 0x1d3e70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1d3e74:
    // 0x1d3e74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d3e78:
    // 0x1d3e78: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x1d3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_1d3e7c:
    // 0x1d3e7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d3e80:
    // 0x1d3e80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d3e84:
    // 0x1d3e84: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x1d3e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_1d3e88:
    // 0x1d3e88: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1d3e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d3e8c:
    // 0x1d3e8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d3e90:
    // 0x1d3e90: 0xc066e34  jal         func_19B8D0
label_1d3e94:
    if (ctx->pc == 0x1D3E94u) {
        ctx->pc = 0x1D3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E90u;
        // 0x1d3e94: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3E98u;
        goto label_1d3e98;
    }
    ctx->pc = 0x1D3E90u;
    SET_GPR_U32(ctx, 31, 0x1D3E98u);
    ctx->pc = 0x1D3E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E90u;
    // 0x1d3e94: 0xe6a00000  swc1        $f0, 0x0($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1D3E98u;
label_1d3e98:
    // 0x1d3e98: 0x87a40170  lh          $a0, 0x170($sp)
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
label_1d3e9c:
    // 0x1d3e9c: 0x27a20174  addiu       $v0, $sp, 0x174
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_1d3ea0:
    // 0x1d3ea0: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x1d3ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_1d3ea4:
    // 0x1d3ea4: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x1d3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_1d3ea8:
    // 0x1d3ea8: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x1d3ea8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d3eac:
    // 0x1d3eac: 0xa6440080  sh          $a0, 0x80($s2)
    ctx->pc = 0x1d3eacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 128), (uint16_t)GPR_U32(ctx, 4));
label_1d3eb0:
    // 0x1d3eb0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d3eb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d3eb4:
    // 0x1d3eb4: 0xa6440082  sh          $a0, 0x82($s2)
    ctx->pc = 0x1d3eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 130), (uint16_t)GPR_U32(ctx, 4));
label_1d3eb8:
    // 0x1d3eb8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d3eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3ebc:
    // 0x1d3ebc: 0xae440084  sw          $a0, 0x84($s2)
    ctx->pc = 0x1d3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 4));
label_1d3ec0:
    // 0x1d3ec0: 0x86e40000  lh          $a0, 0x0($s7)
    ctx->pc = 0x1d3ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_1d3ec4:
    // 0x1d3ec4: 0xa6440090  sh          $a0, 0x90($s2)
    ctx->pc = 0x1d3ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 144), (uint16_t)GPR_U32(ctx, 4));
label_1d3ec8:
    // 0x1d3ec8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1d3ec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1d3ecc:
    // 0x1d3ecc: 0xa6440092  sh          $a0, 0x92($s2)
    ctx->pc = 0x1d3eccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 146), (uint16_t)GPR_U32(ctx, 4));
label_1d3ed0:
    // 0x1d3ed0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d3ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3ed4:
    // 0x1d3ed4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1d3ed8:
    if (ctx->pc == 0x1D3ED8u) {
        ctx->pc = 0x1D3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ED4u;
        // 0x1d3ed8: 0xae440094  sw          $a0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3EDCu;
        goto label_1d3edc;
    }
    ctx->pc = 0x1D3ED4u;
    {
        const bool branch_taken_0x1d3ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ED4u;
        // 0x1d3ed8: 0xae440094  sw          $a0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ed4) {
            ctx->pc = 0x1D3F00u;
            goto label_1d3f00;
        }
    }
    ctx->pc = 0x1D3EDCu;
label_1d3edc:
    // 0x1d3edc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1d3edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d3ee0:
    // 0x1d3ee0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d3ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1d3ee4:
    // 0x1d3ee4: 0xa2440070  sb          $a0, 0x70($s2)
    ctx->pc = 0x1d3ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 4));
label_1d3ee8:
    // 0x1d3ee8: 0xa2440071  sb          $a0, 0x71($s2)
    ctx->pc = 0x1d3ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 4));
label_1d3eec:
    // 0x1d3eec: 0xa2440072  sb          $a0, 0x72($s2)
    ctx->pc = 0x1d3eecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 4));
label_1d3ef0:
    // 0x1d3ef0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1d3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d3ef4:
    // 0x1d3ef4: 0xa2440073  sb          $a0, 0x73($s2)
    ctx->pc = 0x1d3ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 4));
label_1d3ef8:
    // 0x1d3ef8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d3efc:
    if (ctx->pc == 0x1D3EFCu) {
        ctx->pc = 0x1D3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EF8u;
        // 0x1d3efc: 0xae450074  sw          $a1, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3F00u;
        goto label_1d3f00;
    }
    ctx->pc = 0x1D3EF8u;
    {
        const bool branch_taken_0x1d3ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EF8u;
        // 0x1d3efc: 0xae450074  sw          $a1, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ef8) {
            ctx->pc = 0x1D3F1Cu;
            goto label_1d3f1c;
        }
    }
    ctx->pc = 0x1D3F00u;
label_1d3f00:
    // 0x1d3f00: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d3f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d3f04:
    // 0x1d3f04: 0xa2450070  sb          $a1, 0x70($s2)
    ctx->pc = 0x1d3f04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 5));
label_1d3f08:
    // 0x1d3f08: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d3f0c:
    // 0x1d3f0c: 0xa2450071  sb          $a1, 0x71($s2)
    ctx->pc = 0x1d3f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 5));
label_1d3f10:
    // 0x1d3f10: 0xa2450072  sb          $a1, 0x72($s2)
    ctx->pc = 0x1d3f10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 5));
label_1d3f14:
    // 0x1d3f14: 0xa25e0073  sb          $fp, 0x73($s2)
    ctx->pc = 0x1d3f14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 30));
label_1d3f18:
    // 0x1d3f18: 0xae440074  sw          $a0, 0x74($s2)
    ctx->pc = 0x1d3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 4));
label_1d3f1c:
    // 0x1d3f1c: 0x0  nop
    ctx->pc = 0x1d3f1cu;
    // NOP
label_1d3f20:
    // 0x1d3f20: 0x2a010003  slti        $at, $s0, 0x3
    ctx->pc = 0x1d3f20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d3f24:
    // 0x1d3f24: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_1d3f28:
    if (ctx->pc == 0x1D3F28u) {
        ctx->pc = 0x1D3F2Cu;
        goto label_1d3f2c;
    }
    ctx->pc = 0x1D3F24u;
    {
        const bool branch_taken_0x1d3f24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3f24) {
            ctx->pc = 0x1D3F70u;
            goto label_1d3f70;
        }
    }
    ctx->pc = 0x1D3F2Cu;
label_1d3f2c:
    // 0x1d3f2c: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x1d3f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d3f30:
    // 0x1d3f30: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1d3f34:
    // 0x1d3f34: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d3f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d3f38:
    // 0x1d3f38: 0x24a5b260  addiu       $a1, $a1, -0x4DA0
    ctx->pc = 0x1d3f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947424));
label_1d3f3c:
    // 0x1d3f3c: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d3f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d3f40:
    // 0x1d3f40: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1d3f40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1d3f44:
    // 0x1d3f44: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d3f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1d3f48:
    // 0x1d3f48: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1d3f4c:
    // 0x1d3f4c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3f50:
    // 0x1d3f50: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x1d3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1d3f54:
    // 0x1d3f54: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x1d3f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_1d3f58:
    // 0x1d3f58: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d3f5c:
    // 0x1d3f5c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d3f60:
    // 0x1d3f60: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3f64:
    // 0x1d3f64: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d3f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d3f68:
    // 0x1d3f68: 0x10000065  b           . + 4 + (0x65 << 2)
label_1d3f6c:
    if (ctx->pc == 0x1D3F6Cu) {
        ctx->pc = 0x1D3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F68u;
        // 0x1d3f6c: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3F70u;
        goto label_1d3f70;
    }
    ctx->pc = 0x1D3F68u;
    {
        const bool branch_taken_0x1d3f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F68u;
        // 0x1d3f6c: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f68) {
            ctx->pc = 0x1D4100u;
            goto label_1d4100;
        }
    }
    ctx->pc = 0x1D3F70u;
label_1d3f70:
    // 0x1d3f70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d3f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d3f74:
    // 0x1d3f74: 0x16040023  bne         $s0, $a0, . + 4 + (0x23 << 2)
label_1d3f78:
    if (ctx->pc == 0x1D3F78u) {
        ctx->pc = 0x1D3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F74u;
        // 0x1d3f78: 0x2a210064  slti        $at, $s1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3F7Cu;
        goto label_1d3f7c;
    }
    ctx->pc = 0x1D3F74u;
    {
        const bool branch_taken_0x1d3f74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F74u;
        // 0x1d3f78: 0x2a210064  slti        $at, $s1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f74) {
            ctx->pc = 0x1D4004u;
            goto label_1d4004;
        }
    }
    ctx->pc = 0x1D3F7Cu;
label_1d3f7c:
    // 0x1d3f7c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_1d3f80:
    if (ctx->pc == 0x1D3F80u) {
        ctx->pc = 0x1D3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F7Cu;
        // 0x1d3f80: 0x3c046666  lui         $a0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3F84u;
        goto label_1d3f84;
    }
    ctx->pc = 0x1D3F7Cu;
    {
        const bool branch_taken_0x1d3f7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F7Cu;
        // 0x1d3f80: 0x3c046666  lui         $a0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f7c) {
            ctx->pc = 0x1D3FBCu;
            goto label_1d3fbc;
        }
    }
    ctx->pc = 0x1D3F84u;
label_1d3f84:
    // 0x1d3f84: 0x1137c2  srl         $a2, $s1, 31
    ctx->pc = 0x1d3f84u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_1d3f88:
    // 0x1d3f88: 0x34856667  ori         $a1, $a0, 0x6667
    ctx->pc = 0x1d3f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
label_1d3f8c:
    // 0x1d3f8c: 0xb10018  mult        $zero, $a1, $s1
    ctx->pc = 0x1d3f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1d3f90:
    // 0x1d3f90: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d3f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d3f94:
    // 0x1d3f94: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d3f98:
    // 0x1d3f98: 0x2810  mfhi        $a1
    ctx->pc = 0x1d3f98u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1d3f9c:
    // 0x1d3f9c: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1d3f9cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_1d3fa0:
    // 0x1d3fa0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3fa4:
    // 0x1d3fa4: 0x24a6000e  addiu       $a2, $a1, 0xE
    ctx->pc = 0x1d3fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_1d3fa8:
    // 0x1d3fa8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d3fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d3fac:
    // 0x1d3fac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3fb0:
    // 0x1d3fb0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d3fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d3fb4:
    // 0x1d3fb4: 0x10000052  b           . + 4 + (0x52 << 2)
label_1d3fb8:
    if (ctx->pc == 0x1D3FB8u) {
        ctx->pc = 0x1D3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FB4u;
        // 0x1d3fb8: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3FBCu;
        goto label_1d3fbc;
    }
    ctx->pc = 0x1D3FB4u;
    {
        const bool branch_taken_0x1d3fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FB4u;
        // 0x1d3fb8: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fb4) {
            ctx->pc = 0x1D4100u;
            goto label_1d4100;
        }
    }
    ctx->pc = 0x1D3FBCu;
label_1d3fbc:
    // 0x1d3fbc: 0x0  nop
    ctx->pc = 0x1d3fbcu;
    // NOP
label_1d3fc0:
    // 0x1d3fc0: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1d3fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
label_1d3fc4:
    // 0x1d3fc4: 0x3484851f  ori         $a0, $a0, 0x851F
    ctx->pc = 0x1d3fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
label_1d3fc8:
    // 0x1d3fc8: 0x1137c2  srl         $a2, $s1, 31
    ctx->pc = 0x1d3fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_1d3fcc:
    // 0x1d3fcc: 0x910018  mult        $zero, $a0, $s1
    ctx->pc = 0x1d3fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1d3fd0:
    // 0x1d3fd0: 0x0  nop
    ctx->pc = 0x1d3fd0u;
    // NOP
label_1d3fd4:
    // 0x1d3fd4: 0x0  nop
    ctx->pc = 0x1d3fd4u;
    // NOP
label_1d3fd8:
    // 0x1d3fd8: 0x2810  mfhi        $a1
    ctx->pc = 0x1d3fd8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1d3fdc:
    // 0x1d3fdc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d3fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d3fe0:
    // 0x1d3fe0: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d3fe4:
    // 0x1d3fe4: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1d3fe4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
label_1d3fe8:
    // 0x1d3fe8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3fec:
    // 0x1d3fec: 0x24a6000e  addiu       $a2, $a1, 0xE
    ctx->pc = 0x1d3fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_1d3ff0:
    // 0x1d3ff0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d3ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d3ff4:
    // 0x1d3ff4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d3ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d3ff8:
    // 0x1d3ff8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d3ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d3ffc:
    // 0x1d3ffc: 0x10000040  b           . + 4 + (0x40 << 2)
label_1d4000:
    if (ctx->pc == 0x1D4000u) {
        ctx->pc = 0x1D4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FFCu;
        // 0x1d4000: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4004u;
        goto label_1d4004;
    }
    ctx->pc = 0x1D3FFCu;
    {
        const bool branch_taken_0x1d3ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FFCu;
        // 0x1d4000: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ffc) {
            ctx->pc = 0x1D4100u;
            goto label_1d4100;
        }
    }
    ctx->pc = 0x1D4004u;
label_1d4004:
    // 0x1d4004: 0x0  nop
    ctx->pc = 0x1d4004u;
    // NOP
label_1d4008:
    // 0x1d4008: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d4008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d400c:
    // 0x1d400c: 0x16040023  bne         $s0, $a0, . + 4 + (0x23 << 2)
label_1d4010:
    if (ctx->pc == 0x1D4010u) {
        ctx->pc = 0x1D4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D400Cu;
        // 0x1d4010: 0x2a210064  slti        $at, $s1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4014u;
        goto label_1d4014;
    }
    ctx->pc = 0x1D400Cu;
    {
        const bool branch_taken_0x1d400c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D400Cu;
        // 0x1d4010: 0x2a210064  slti        $at, $s1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d400c) {
            ctx->pc = 0x1D409Cu;
            goto label_1d409c;
        }
    }
    ctx->pc = 0x1D4014u;
label_1d4014:
    // 0x1d4014: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1d4018:
    if (ctx->pc == 0x1D4018u) {
        ctx->pc = 0x1D4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4014u;
        // 0x1d4018: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D401Cu;
        goto label_1d401c;
    }
    ctx->pc = 0x1D4014u;
    {
        const bool branch_taken_0x1d4014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4014u;
        // 0x1d4018: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4014) {
            ctx->pc = 0x1D4048u;
            goto label_1d4048;
        }
    }
    ctx->pc = 0x1D401Cu;
label_1d401c:
    // 0x1d401c: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d401cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d4020:
    // 0x1d4020: 0x225001a  div         $zero, $s1, $a1
    ctx->pc = 0x1d4020u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d4024:
    // 0x1d4024: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d4024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d4028:
    // 0x1d4028: 0x0  nop
    ctx->pc = 0x1d4028u;
    // NOP
label_1d402c:
    // 0x1d402c: 0x2810  mfhi        $a1
    ctx->pc = 0x1d402cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1d4030:
    // 0x1d4030: 0x24a6000e  addiu       $a2, $a1, 0xE
    ctx->pc = 0x1d4030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_1d4034:
    // 0x1d4034: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d4034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d4038:
    // 0x1d4038: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d4038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d403c:
    // 0x1d403c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d403cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d4040:
    // 0x1d4040: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1d4044:
    if (ctx->pc == 0x1D4044u) {
        ctx->pc = 0x1D4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4040u;
        // 0x1d4044: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4048u;
        goto label_1d4048;
    }
    ctx->pc = 0x1D4040u;
    {
        const bool branch_taken_0x1d4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4040u;
        // 0x1d4044: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4040) {
            ctx->pc = 0x1D4100u;
            goto label_1d4100;
        }
    }
    ctx->pc = 0x1D4048u;
label_1d4048:
    // 0x1d4048: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1d4048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1d404c:
    // 0x1d404c: 0x224001a  div         $zero, $s1, $a0
    ctx->pc = 0x1d404cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d4050:
    // 0x1d4050: 0x0  nop
    ctx->pc = 0x1d4050u;
    // NOP
label_1d4054:
    // 0x1d4054: 0x0  nop
    ctx->pc = 0x1d4054u;
    // NOP
label_1d4058:
    // 0x1d4058: 0x3010  mfhi        $a2
    ctx->pc = 0x1d4058u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1d405c:
    // 0x1d405c: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1d405cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
label_1d4060:
    // 0x1d4060: 0x34856667  ori         $a1, $a0, 0x6667
    ctx->pc = 0x1d4060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
label_1d4064:
    // 0x1d4064: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d4064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d4068:
    // 0x1d4068: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1d4068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1d406c:
    // 0x1d406c: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d406cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d4070:
    // 0x1d4070: 0x0  nop
    ctx->pc = 0x1d4070u;
    // NOP
label_1d4074:
    // 0x1d4074: 0x2810  mfhi        $a1
    ctx->pc = 0x1d4074u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1d4078:
    // 0x1d4078: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1d4078u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_1d407c:
    // 0x1d407c: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x1d407cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
label_1d4080:
    // 0x1d4080: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d4080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d4084:
    // 0x1d4084: 0x24a6000e  addiu       $a2, $a1, 0xE
    ctx->pc = 0x1d4084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_1d4088:
    // 0x1d4088: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d4088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d408c:
    // 0x1d408c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d408cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d4090:
    // 0x1d4090: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d4090u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d4094:
    // 0x1d4094: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1d4098:
    if (ctx->pc == 0x1D4098u) {
        ctx->pc = 0x1D4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4094u;
        // 0x1d4098: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D409Cu;
        goto label_1d409c;
    }
    ctx->pc = 0x1D4094u;
    {
        const bool branch_taken_0x1d4094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4094u;
        // 0x1d4098: 0x853021  addu        $a2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4094) {
            ctx->pc = 0x1D4100u;
            goto label_1d4100;
        }
    }
    ctx->pc = 0x1D409Cu;
label_1d409c:
    // 0x1d409c: 0x0  nop
    ctx->pc = 0x1d409cu;
    // NOP
label_1d40a0:
    // 0x1d40a0: 0x2a210064  slti        $at, $s1, 0x64
    ctx->pc = 0x1d40a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
label_1d40a4:
    // 0x1d40a4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1d40a8:
    if (ctx->pc == 0x1D40A8u) {
        ctx->pc = 0x1D40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40A4u;
        // 0x1d40a8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40ACu;
        goto label_1d40ac;
    }
    ctx->pc = 0x1D40A4u;
    {
        const bool branch_taken_0x1d40a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40A4u;
        // 0x1d40a8: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40a4) {
            ctx->pc = 0x1D40D0u;
            goto label_1d40d0;
        }
    }
    ctx->pc = 0x1D40ACu;
label_1d40ac:
    // 0x1d40ac: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x1d40acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_1d40b0:
    // 0x1d40b0: 0xa2450070  sb          $a1, 0x70($s2)
    ctx->pc = 0x1d40b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 112), (uint8_t)GPR_U32(ctx, 5));
label_1d40b4:
    // 0x1d40b4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d40b8:
    // 0x1d40b8: 0xa2450071  sb          $a1, 0x71($s2)
    ctx->pc = 0x1d40b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 113), (uint8_t)GPR_U32(ctx, 5));
label_1d40bc:
    // 0x1d40bc: 0x24c6b24e  addiu       $a2, $a2, -0x4DB2
    ctx->pc = 0x1d40bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947406));
label_1d40c0:
    // 0x1d40c0: 0xa2450072  sb          $a1, 0x72($s2)
    ctx->pc = 0x1d40c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 5));
label_1d40c4:
    // 0x1d40c4: 0xa2400073  sb          $zero, 0x73($s2)
    ctx->pc = 0x1d40c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 115), (uint8_t)GPR_U32(ctx, 0));
label_1d40c8:
    // 0x1d40c8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d40cc:
    if (ctx->pc == 0x1D40CCu) {
        ctx->pc = 0x1D40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40C8u;
        // 0x1d40cc: 0xae440074  sw          $a0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40D0u;
        goto label_1d40d0;
    }
    ctx->pc = 0x1D40C8u;
    {
        const bool branch_taken_0x1d40c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40C8u;
        // 0x1d40cc: 0xae440074  sw          $a0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40c8) {
            ctx->pc = 0x1D4100u;
            goto label_1d4100;
        }
    }
    ctx->pc = 0x1D40D0u;
label_1d40d0:
    // 0x1d40d0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1d40d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d40d4:
    // 0x1d40d4: 0x224001a  div         $zero, $s1, $a0
    ctx->pc = 0x1d40d4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d40d8:
    // 0x1d40d8: 0x0  nop
    ctx->pc = 0x1d40d8u;
    // NOP
label_1d40dc:
    // 0x1d40dc: 0x0  nop
    ctx->pc = 0x1d40dcu;
    // NOP
label_1d40e0:
    // 0x1d40e0: 0x2810  mfhi        $a1
    ctx->pc = 0x1d40e0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1d40e4:
    // 0x1d40e4: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d40e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d40e8:
    // 0x1d40e8: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d40e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d40ec:
    // 0x1d40ec: 0x24a6000e  addiu       $a2, $a1, 0xE
    ctx->pc = 0x1d40ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_1d40f0:
    // 0x1d40f0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d40f4:
    // 0x1d40f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d40f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d40f8:
    // 0x1d40f8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d40f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d40fc:
    // 0x1d40fc: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x1d40fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d4100:
    // 0x1d4100: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x1d4100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1d4104:
    // 0x1d4104: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x1d4104u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1d4108:
    // 0x1d4108: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d4108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d410c:
    // 0x1d410c: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1d410cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_1d4110:
    // 0x1d4110: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x1d4110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_1d4114:
    // 0x1d4114: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x1d4114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_1d4118:
    // 0x1d4118: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1d4118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1d411c:
    // 0x1d411c: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x1d411cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_1d4120:
    // 0x1d4120: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1d4120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1d4124:
    // 0x1d4124: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x1d4124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_1d4128:
    // 0x1d4128: 0x94c50002  lhu         $a1, 0x2($a2)
    ctx->pc = 0x1d4128u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_1d412c:
    // 0x1d412c: 0x2a040006  slti        $a0, $s0, 0x6
    ctx->pc = 0x1d412cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d4130:
    // 0x1d4130: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1d4130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1d4134:
    // 0x1d4134: 0x94c60004  lhu         $a2, 0x4($a2)
    ctx->pc = 0x1d4134u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_1d4138:
    // 0x1d4138: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1d4138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1d413c:
    // 0x1d413c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d4140:
    // 0x1d4140: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x1d4140u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
label_1d4144:
    // 0x1d4144: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d4144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4148:
    // 0x1d4148: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1d4148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1d414c:
    // 0x1d414c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d414cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1d4150:
    // 0x1d4150: 0x87a50170  lh          $a1, 0x170($sp)
    ctx->pc = 0x1d4150u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
label_1d4154:
    // 0x1d4154: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d4154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1d4158:
    // 0x1d4158: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d4158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1d415c:
    // 0x1d415c: 0xa6450078  sh          $a1, 0x78($s2)
    ctx->pc = 0x1d415cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 120), (uint16_t)GPR_U32(ctx, 5));
label_1d4160:
    // 0x1d4160: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1d4160u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4164:
    // 0x1d4164: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d4164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1d4168:
    // 0x1d4168: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d4168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1d416c:
    // 0x1d416c: 0xa645007a  sh          $a1, 0x7A($s2)
    ctx->pc = 0x1d416cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 5));
label_1d4170:
    // 0x1d4170: 0x86e50000  lh          $a1, 0x0($s7)
    ctx->pc = 0x1d4170u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_1d4174:
    // 0x1d4174: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d4174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1d4178:
    // 0x1d4178: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d4178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1d417c:
    // 0x1d417c: 0xa6450088  sh          $a1, 0x88($s2)
    ctx->pc = 0x1d417cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 136), (uint16_t)GPR_U32(ctx, 5));
label_1d4180:
    // 0x1d4180: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x1d4180u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1d4184:
    // 0x1d4184: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d4184u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1d4188:
    // 0x1d4188: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d4188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1d418c:
    // 0x1d418c: 0xa645008a  sh          $a1, 0x8A($s2)
    ctx->pc = 0x1d418cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 138), (uint16_t)GPR_U32(ctx, 5));
label_1d4190:
    // 0x1d4190: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d4190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4194:
    // 0x1d4194: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x1d4194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1d4198:
    // 0x1d4198: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x1d4198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1d419c:
    // 0x1d419c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d41a0:
    // 0x1d41a0: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1d41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1d41a4:
    // 0x1d41a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d41a8:
    // 0x1d41a8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1d41a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_1d41ac:
    // 0x1d41ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d41acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1d41b0:
    // 0x1d41b0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1d41b0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_1d41b4:
    // 0x1d41b4: 0x51e38  dsll        $v1, $a1, 24
    ctx->pc = 0x1d41b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 24);
label_1d41b8:
    // 0x1d41b8: 0x62bb8  dsll        $a1, $a2, 14
    ctx->pc = 0x1d41b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 14);
label_1d41bc:
    // 0x1d41bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d41bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1d41c0:
    // 0x1d41c0: 0x73138  dsll        $a2, $a3, 4
    ctx->pc = 0x1d41c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 4);
label_1d41c4:
    // 0x1d41c4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1d41c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1d41c8:
    // 0x1d41c8: 0x34c6000a  ori         $a2, $a2, 0xA
    ctx->pc = 0x1d41c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
label_1d41cc:
    // 0x1d41cc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1d41ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1d41d0:
    // 0x1d41d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1d41d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1d41d4:
    // 0x1d41d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d41d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d41d8:
    // 0x1d41d8: 0x1480fec1  bnez        $a0, . + 4 + (-0x13F << 2)
label_1d41dc:
    if (ctx->pc == 0x1D41DCu) {
        ctx->pc = 0x1D41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41D8u;
        // 0x1d41dc: 0xfe420040  sd          $v0, 0x40($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D41E0u;
        goto label_1d41e0;
    }
    ctx->pc = 0x1D41D8u;
    {
        const bool branch_taken_0x1d41d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41D8u;
        // 0x1d41dc: 0xfe420040  sd          $v0, 0x40($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d41d8) {
            ctx->pc = 0x1D3CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3ce0;
        }
    }
    ctx->pc = 0x1D41E0u;
label_1d41e0:
    // 0x1d41e0: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_1d41e4:
    if (ctx->pc == 0x1D41E4u) {
        ctx->pc = 0x1D41E8u;
        goto label_1d41e8;
    }
    ctx->pc = 0x1D41E0u;
    {
        const bool branch_taken_0x1d41e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d41e0) {
            ctx->pc = 0x1D4548u;
            { ctx->pc = 0x1d4548; return; }
        }
    }
    ctx->pc = 0x1D41E8u;
label_1d41e8:
    // 0x1d41e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d41e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d41ec:
    // 0x1d41ec: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x1d41ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_1d41f0:
    // 0x1d41f0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d41f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d41f4:
    // 0x1d41f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d41f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d41f8:
    // 0x1d41f8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d41fc:
    // 0x1d41fc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1d41fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1d4200:
    // 0x1d4200: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1d4200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1d4204:
    // 0x1d4204: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1d4204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_1d4208:
    // 0x1d4208: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d4208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d420c:
    // 0x1d420c: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x1d420cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d4210:
    // 0x1d4210: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d4210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1d4214:
    // 0x1d4214: 0x2442b4d0  addiu       $v0, $v0, -0x4B30
    ctx->pc = 0x1d4214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948048));
label_1d4218:
    // 0x1d4218: 0x57b021  addu        $s6, $v0, $s7
    ctx->pc = 0x1d4218u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1d421c:
    // 0x1d421c: 0xc066d7a  jal         func_19B5E8
label_1d4220:
    if (ctx->pc == 0x1D4220u) {
        ctx->pc = 0x1D4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D421Cu;
        // 0x1d4220: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4224u;
        goto label_1d4224;
    }
    ctx->pc = 0x1D421Cu;
    SET_GPR_U32(ctx, 31, 0x1D4224u);
    ctx->pc = 0x1D4220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D421Cu;
    // 0x1d4220: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1D421Cu, 0x1D4224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4224u;
label_1d4224:
    // 0x1d4224: 0x27b1027c  addiu       $s1, $sp, 0x27C
    ctx->pc = 0x1d4224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_1d4228:
    // 0x1d4228: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d422c:
    // 0x1d422c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4230:
    // 0x1d4230: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1d4230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1d4234:
    // 0x1d4234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4238:
    // 0x1d4238: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d4238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d423c:
    // 0x1d423c: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1d423cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1d4240:
    // 0x1d4240: 0x0  nop
    ctx->pc = 0x1d4240u;
    // NOP
label_1d4244:
    // 0x1d4244: 0x0  nop
    ctx->pc = 0x1d4244u;
    // NOP
label_1d4248:
    // 0x1d4248: 0xc066e14  jal         func_19B850
label_1d424c:
    if (ctx->pc == 0x1D424Cu) {
        ctx->pc = 0x1D424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4248u;
        // 0x1d424c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4250u;
        goto label_1d4250;
    }
    ctx->pc = 0x1D4248u;
    SET_GPR_U32(ctx, 31, 0x1D4250u);
    ctx->pc = 0x1D424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4248u;
    // 0x1d424c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1D4250u;
label_1d4250:
    // 0x1d4250: 0xc07f198  jal         func_1FC660
label_1d4254:
    if (ctx->pc == 0x1D4254u) {
        ctx->pc = 0x1D4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4250u;
        // 0x1d4254: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4258u;
        goto label_1d4258;
    }
    ctx->pc = 0x1D4250u;
    SET_GPR_U32(ctx, 31, 0x1D4258u);
    ctx->pc = 0x1D4254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4250u;
    // 0x1d4254: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1D4258u;
label_1d4258:
    // 0x1d4258: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d4258u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d425c:
    // 0x1d425c: 0xc07f190  jal         func_1FC640
label_1d4260:
    if (ctx->pc == 0x1D4260u) {
        ctx->pc = 0x1D4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D425Cu;
        // 0x1d4260: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4264u;
        goto label_1d4264;
    }
    ctx->pc = 0x1D425Cu;
    SET_GPR_U32(ctx, 31, 0x1D4264u);
    ctx->pc = 0x1D4260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D425Cu;
    // 0x1d4260: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1D4264u;
label_1d4264:
    // 0x1d4264: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1d4264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d4268:
    // 0x1d4268: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1d4268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1d426c:
    // 0x1d426c: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x1d426cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1d4270:
    // 0x1d4270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4274:
    // 0x1d4274: 0x0  nop
    ctx->pc = 0x1d4274u;
    // NOP
label_1d4278:
    // 0x1d4278: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d4278u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d427c:
    // 0x1d427c: 0x0  nop
    ctx->pc = 0x1d427cu;
    // NOP
label_1d4280:
    // 0x1d4280: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d4284:
    if (ctx->pc == 0x1D4284u) {
        ctx->pc = 0x1D4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4280u;
        // 0x1d4284: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4288u;
        goto label_1d4288;
    }
    ctx->pc = 0x1D4280u;
    {
        const bool branch_taken_0x1d4280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4280u;
        // 0x1d4284: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4280) {
            ctx->pc = 0x1D4290u;
            { ctx->pc = 0x1d4290; return; }
        }
    }
    ctx->pc = 0x1D4288u;
label_1d4288:
    // 0x1d4288: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d428c:
    if (ctx->pc == 0x1D428Cu) {
        ctx->pc = 0x1D428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4288u;
        // 0x1d428c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4290u;
        { ctx->pc = 0x1d4290; return; }
    }
    ctx->pc = 0x1D4288u;
    {
        const bool branch_taken_0x1d4288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4288u;
        // 0x1d428c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4288) {
            ctx->pc = 0x1D42ACu;
            { ctx->pc = 0x1d42ac; return; }
        }
    }
    ctx->pc = 0x1D4290u;
    ctx->pc = 0x1d4290u;
    return;
}

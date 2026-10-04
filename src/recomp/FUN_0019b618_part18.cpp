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


void FUN_0019b618_part18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a3ae8u: goto label_1a3ae8;
        case 0x1a3aecu: goto label_1a3aec;
        case 0x1a3af0u: goto label_1a3af0;
        case 0x1a3af4u: goto label_1a3af4;
        case 0x1a3af8u: goto label_1a3af8;
        case 0x1a3afcu: goto label_1a3afc;
        case 0x1a3b00u: goto label_1a3b00;
        case 0x1a3b04u: goto label_1a3b04;
        case 0x1a3b08u: goto label_1a3b08;
        case 0x1a3b0cu: goto label_1a3b0c;
        case 0x1a3b10u: goto label_1a3b10;
        case 0x1a3b14u: goto label_1a3b14;
        case 0x1a3b18u: goto label_1a3b18;
        case 0x1a3b1cu: goto label_1a3b1c;
        case 0x1a3b20u: goto label_1a3b20;
        case 0x1a3b24u: goto label_1a3b24;
        case 0x1a3b28u: goto label_1a3b28;
        case 0x1a3b2cu: goto label_1a3b2c;
        case 0x1a3b30u: goto label_1a3b30;
        case 0x1a3b34u: goto label_1a3b34;
        case 0x1a3b38u: goto label_1a3b38;
        case 0x1a3b3cu: goto label_1a3b3c;
        case 0x1a3b40u: goto label_1a3b40;
        case 0x1a3b44u: goto label_1a3b44;
        case 0x1a3b48u: goto label_1a3b48;
        case 0x1a3b4cu: goto label_1a3b4c;
        case 0x1a3b50u: goto label_1a3b50;
        case 0x1a3b54u: goto label_1a3b54;
        case 0x1a3b58u: goto label_1a3b58;
        case 0x1a3b5cu: goto label_1a3b5c;
        case 0x1a3b60u: goto label_1a3b60;
        case 0x1a3b64u: goto label_1a3b64;
        case 0x1a3b68u: goto label_1a3b68;
        case 0x1a3b6cu: goto label_1a3b6c;
        case 0x1a3b70u: goto label_1a3b70;
        case 0x1a3b74u: goto label_1a3b74;
        case 0x1a3b78u: goto label_1a3b78;
        case 0x1a3b7cu: goto label_1a3b7c;
        case 0x1a3b80u: goto label_1a3b80;
        case 0x1a3b84u: goto label_1a3b84;
        case 0x1a3b88u: goto label_1a3b88;
        case 0x1a3b8cu: goto label_1a3b8c;
        case 0x1a3b90u: goto label_1a3b90;
        case 0x1a3b94u: goto label_1a3b94;
        case 0x1a3b98u: goto label_1a3b98;
        case 0x1a3b9cu: goto label_1a3b9c;
        case 0x1a3ba0u: goto label_1a3ba0;
        case 0x1a3ba4u: goto label_1a3ba4;
        case 0x1a3ba8u: goto label_1a3ba8;
        case 0x1a3bacu: goto label_1a3bac;
        case 0x1a3bb0u: goto label_1a3bb0;
        case 0x1a3bb4u: goto label_1a3bb4;
        case 0x1a3bb8u: goto label_1a3bb8;
        case 0x1a3bbcu: goto label_1a3bbc;
        case 0x1a3bc0u: goto label_1a3bc0;
        case 0x1a3bc4u: goto label_1a3bc4;
        case 0x1a3bc8u: goto label_1a3bc8;
        case 0x1a3bccu: goto label_1a3bcc;
        case 0x1a3bd0u: goto label_1a3bd0;
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3bd8u: goto label_1a3bd8;
        case 0x1a3bdcu: goto label_1a3bdc;
        case 0x1a3be0u: goto label_1a3be0;
        case 0x1a3be4u: goto label_1a3be4;
        case 0x1a3be8u: goto label_1a3be8;
        case 0x1a3becu: goto label_1a3bec;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3bf4u: goto label_1a3bf4;
        case 0x1a3bf8u: goto label_1a3bf8;
        case 0x1a3bfcu: goto label_1a3bfc;
        case 0x1a3c00u: goto label_1a3c00;
        case 0x1a3c04u: goto label_1a3c04;
        case 0x1a3c08u: goto label_1a3c08;
        case 0x1a3c0cu: goto label_1a3c0c;
        case 0x1a3c10u: goto label_1a3c10;
        case 0x1a3c14u: goto label_1a3c14;
        case 0x1a3c18u: goto label_1a3c18;
        case 0x1a3c1cu: goto label_1a3c1c;
        case 0x1a3c20u: goto label_1a3c20;
        case 0x1a3c24u: goto label_1a3c24;
        case 0x1a3c28u: goto label_1a3c28;
        case 0x1a3c2cu: goto label_1a3c2c;
        case 0x1a3c30u: goto label_1a3c30;
        case 0x1a3c34u: goto label_1a3c34;
        case 0x1a3c38u: goto label_1a3c38;
        case 0x1a3c3cu: goto label_1a3c3c;
        case 0x1a3c40u: goto label_1a3c40;
        case 0x1a3c44u: goto label_1a3c44;
        case 0x1a3c48u: goto label_1a3c48;
        case 0x1a3c4cu: goto label_1a3c4c;
        case 0x1a3c50u: goto label_1a3c50;
        case 0x1a3c54u: goto label_1a3c54;
        case 0x1a3c58u: goto label_1a3c58;
        case 0x1a3c5cu: goto label_1a3c5c;
        case 0x1a3c60u: goto label_1a3c60;
        case 0x1a3c64u: goto label_1a3c64;
        case 0x1a3c68u: goto label_1a3c68;
        case 0x1a3c6cu: goto label_1a3c6c;
        case 0x1a3c70u: goto label_1a3c70;
        case 0x1a3c74u: goto label_1a3c74;
        case 0x1a3c78u: goto label_1a3c78;
        case 0x1a3c7cu: goto label_1a3c7c;
        case 0x1a3c80u: goto label_1a3c80;
        case 0x1a3c84u: goto label_1a3c84;
        case 0x1a3c88u: goto label_1a3c88;
        case 0x1a3c8cu: goto label_1a3c8c;
        case 0x1a3c90u: goto label_1a3c90;
        case 0x1a3c94u: goto label_1a3c94;
        case 0x1a3c98u: goto label_1a3c98;
        case 0x1a3c9cu: goto label_1a3c9c;
        case 0x1a3ca0u: goto label_1a3ca0;
        case 0x1a3ca4u: goto label_1a3ca4;
        case 0x1a3ca8u: goto label_1a3ca8;
        case 0x1a3cacu: goto label_1a3cac;
        case 0x1a3cb0u: goto label_1a3cb0;
        case 0x1a3cb4u: goto label_1a3cb4;
        case 0x1a3cb8u: goto label_1a3cb8;
        case 0x1a3cbcu: goto label_1a3cbc;
        case 0x1a3cc0u: goto label_1a3cc0;
        case 0x1a3cc4u: goto label_1a3cc4;
        case 0x1a3cc8u: goto label_1a3cc8;
        case 0x1a3cccu: goto label_1a3ccc;
        case 0x1a3cd0u: goto label_1a3cd0;
        case 0x1a3cd4u: goto label_1a3cd4;
        case 0x1a3cd8u: goto label_1a3cd8;
        case 0x1a3cdcu: goto label_1a3cdc;
        case 0x1a3ce0u: goto label_1a3ce0;
        case 0x1a3ce4u: goto label_1a3ce4;
        case 0x1a3ce8u: goto label_1a3ce8;
        case 0x1a3cecu: goto label_1a3cec;
        case 0x1a3cf0u: goto label_1a3cf0;
        case 0x1a3cf4u: goto label_1a3cf4;
        case 0x1a3cf8u: goto label_1a3cf8;
        case 0x1a3cfcu: goto label_1a3cfc;
        case 0x1a3d00u: goto label_1a3d00;
        case 0x1a3d04u: goto label_1a3d04;
        case 0x1a3d08u: goto label_1a3d08;
        case 0x1a3d0cu: goto label_1a3d0c;
        case 0x1a3d10u: goto label_1a3d10;
        case 0x1a3d14u: goto label_1a3d14;
        case 0x1a3d18u: goto label_1a3d18;
        case 0x1a3d1cu: goto label_1a3d1c;
        case 0x1a3d20u: goto label_1a3d20;
        case 0x1a3d24u: goto label_1a3d24;
        case 0x1a3d28u: goto label_1a3d28;
        case 0x1a3d2cu: goto label_1a3d2c;
        case 0x1a3d30u: goto label_1a3d30;
        case 0x1a3d34u: goto label_1a3d34;
        case 0x1a3d38u: goto label_1a3d38;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d40u: goto label_1a3d40;
        case 0x1a3d44u: goto label_1a3d44;
        case 0x1a3d48u: goto label_1a3d48;
        case 0x1a3d4cu: goto label_1a3d4c;
        case 0x1a3d50u: goto label_1a3d50;
        case 0x1a3d54u: goto label_1a3d54;
        case 0x1a3d58u: goto label_1a3d58;
        case 0x1a3d5cu: goto label_1a3d5c;
        case 0x1a3d60u: goto label_1a3d60;
        case 0x1a3d64u: goto label_1a3d64;
        case 0x1a3d68u: goto label_1a3d68;
        case 0x1a3d6cu: goto label_1a3d6c;
        case 0x1a3d70u: goto label_1a3d70;
        case 0x1a3d74u: goto label_1a3d74;
        case 0x1a3d78u: goto label_1a3d78;
        case 0x1a3d7cu: goto label_1a3d7c;
        case 0x1a3d80u: goto label_1a3d80;
        case 0x1a3d84u: goto label_1a3d84;
        case 0x1a3d88u: goto label_1a3d88;
        case 0x1a3d8cu: goto label_1a3d8c;
        case 0x1a3d90u: goto label_1a3d90;
        case 0x1a3d94u: goto label_1a3d94;
        case 0x1a3d98u: goto label_1a3d98;
        case 0x1a3d9cu: goto label_1a3d9c;
        case 0x1a3da0u: goto label_1a3da0;
        case 0x1a3da4u: goto label_1a3da4;
        case 0x1a3da8u: goto label_1a3da8;
        case 0x1a3dacu: goto label_1a3dac;
        case 0x1a3db0u: goto label_1a3db0;
        case 0x1a3db4u: goto label_1a3db4;
        case 0x1a3db8u: goto label_1a3db8;
        case 0x1a3dbcu: goto label_1a3dbc;
        case 0x1a3dc0u: goto label_1a3dc0;
        case 0x1a3dc4u: goto label_1a3dc4;
        case 0x1a3dc8u: goto label_1a3dc8;
        case 0x1a3dccu: goto label_1a3dcc;
        case 0x1a3dd0u: goto label_1a3dd0;
        case 0x1a3dd4u: goto label_1a3dd4;
        case 0x1a3dd8u: goto label_1a3dd8;
        case 0x1a3ddcu: goto label_1a3ddc;
        case 0x1a3de0u: goto label_1a3de0;
        case 0x1a3de4u: goto label_1a3de4;
        case 0x1a3de8u: goto label_1a3de8;
        case 0x1a3decu: goto label_1a3dec;
        case 0x1a3df0u: goto label_1a3df0;
        case 0x1a3df4u: goto label_1a3df4;
        case 0x1a3df8u: goto label_1a3df8;
        case 0x1a3dfcu: goto label_1a3dfc;
        case 0x1a3e00u: goto label_1a3e00;
        case 0x1a3e04u: goto label_1a3e04;
        case 0x1a3e08u: goto label_1a3e08;
        case 0x1a3e0cu: goto label_1a3e0c;
        case 0x1a3e10u: goto label_1a3e10;
        case 0x1a3e14u: goto label_1a3e14;
        case 0x1a3e18u: goto label_1a3e18;
        case 0x1a3e1cu: goto label_1a3e1c;
        case 0x1a3e20u: goto label_1a3e20;
        case 0x1a3e24u: goto label_1a3e24;
        case 0x1a3e28u: goto label_1a3e28;
        case 0x1a3e2cu: goto label_1a3e2c;
        case 0x1a3e30u: goto label_1a3e30;
        case 0x1a3e34u: goto label_1a3e34;
        case 0x1a3e38u: goto label_1a3e38;
        case 0x1a3e3cu: goto label_1a3e3c;
        case 0x1a3e40u: goto label_1a3e40;
        case 0x1a3e44u: goto label_1a3e44;
        case 0x1a3e48u: goto label_1a3e48;
        case 0x1a3e4cu: goto label_1a3e4c;
        case 0x1a3e50u: goto label_1a3e50;
        case 0x1a3e54u: goto label_1a3e54;
        case 0x1a3e58u: goto label_1a3e58;
        case 0x1a3e5cu: goto label_1a3e5c;
        case 0x1a3e60u: goto label_1a3e60;
        case 0x1a3e64u: goto label_1a3e64;
        case 0x1a3e68u: goto label_1a3e68;
        case 0x1a3e6cu: goto label_1a3e6c;
        case 0x1a3e70u: goto label_1a3e70;
        case 0x1a3e74u: goto label_1a3e74;
        case 0x1a3e78u: goto label_1a3e78;
        case 0x1a3e7cu: goto label_1a3e7c;
        case 0x1a3e80u: goto label_1a3e80;
        case 0x1a3e84u: goto label_1a3e84;
        case 0x1a3e88u: goto label_1a3e88;
        case 0x1a3e8cu: goto label_1a3e8c;
        case 0x1a3e90u: goto label_1a3e90;
        case 0x1a3e94u: goto label_1a3e94;
        case 0x1a3e98u: goto label_1a3e98;
        case 0x1a3e9cu: goto label_1a3e9c;
        case 0x1a3ea0u: goto label_1a3ea0;
        case 0x1a3ea4u: goto label_1a3ea4;
        case 0x1a3ea8u: goto label_1a3ea8;
        case 0x1a3eacu: goto label_1a3eac;
        case 0x1a3eb0u: goto label_1a3eb0;
        case 0x1a3eb4u: goto label_1a3eb4;
        case 0x1a3eb8u: goto label_1a3eb8;
        case 0x1a3ebcu: goto label_1a3ebc;
        case 0x1a3ec0u: goto label_1a3ec0;
        case 0x1a3ec4u: goto label_1a3ec4;
        case 0x1a3ec8u: goto label_1a3ec8;
        case 0x1a3eccu: goto label_1a3ecc;
        case 0x1a3ed0u: goto label_1a3ed0;
        case 0x1a3ed4u: goto label_1a3ed4;
        case 0x1a3ed8u: goto label_1a3ed8;
        case 0x1a3edcu: goto label_1a3edc;
        case 0x1a3ee0u: goto label_1a3ee0;
        case 0x1a3ee4u: goto label_1a3ee4;
        case 0x1a3ee8u: goto label_1a3ee8;
        case 0x1a3eecu: goto label_1a3eec;
        case 0x1a3ef0u: goto label_1a3ef0;
        case 0x1a3ef4u: goto label_1a3ef4;
        case 0x1a3ef8u: goto label_1a3ef8;
        case 0x1a3efcu: goto label_1a3efc;
        case 0x1a3f00u: goto label_1a3f00;
        case 0x1a3f04u: goto label_1a3f04;
        case 0x1a3f08u: goto label_1a3f08;
        case 0x1a3f0cu: goto label_1a3f0c;
        case 0x1a3f10u: goto label_1a3f10;
        case 0x1a3f14u: goto label_1a3f14;
        case 0x1a3f18u: goto label_1a3f18;
        case 0x1a3f1cu: goto label_1a3f1c;
        case 0x1a3f20u: goto label_1a3f20;
        case 0x1a3f24u: goto label_1a3f24;
        case 0x1a3f28u: goto label_1a3f28;
        case 0x1a3f2cu: goto label_1a3f2c;
        case 0x1a3f30u: goto label_1a3f30;
        case 0x1a3f34u: goto label_1a3f34;
        case 0x1a3f38u: goto label_1a3f38;
        case 0x1a3f3cu: goto label_1a3f3c;
        case 0x1a3f40u: goto label_1a3f40;
        case 0x1a3f44u: goto label_1a3f44;
        case 0x1a3f48u: goto label_1a3f48;
        case 0x1a3f4cu: goto label_1a3f4c;
        case 0x1a3f50u: goto label_1a3f50;
        case 0x1a3f54u: goto label_1a3f54;
        case 0x1a3f58u: goto label_1a3f58;
        case 0x1a3f5cu: goto label_1a3f5c;
        case 0x1a3f60u: goto label_1a3f60;
        case 0x1a3f64u: goto label_1a3f64;
        case 0x1a3f68u: goto label_1a3f68;
        case 0x1a3f6cu: goto label_1a3f6c;
        case 0x1a3f70u: goto label_1a3f70;
        case 0x1a3f74u: goto label_1a3f74;
        case 0x1a3f78u: goto label_1a3f78;
        case 0x1a3f7cu: goto label_1a3f7c;
        case 0x1a3f80u: goto label_1a3f80;
        case 0x1a3f84u: goto label_1a3f84;
        case 0x1a3f88u: goto label_1a3f88;
        case 0x1a3f8cu: goto label_1a3f8c;
        case 0x1a3f90u: goto label_1a3f90;
        case 0x1a3f94u: goto label_1a3f94;
        case 0x1a3f98u: goto label_1a3f98;
        case 0x1a3f9cu: goto label_1a3f9c;
        case 0x1a3fa0u: goto label_1a3fa0;
        case 0x1a3fa4u: goto label_1a3fa4;
        case 0x1a3fa8u: goto label_1a3fa8;
        case 0x1a3facu: goto label_1a3fac;
        case 0x1a3fb0u: goto label_1a3fb0;
        case 0x1a3fb4u: goto label_1a3fb4;
        case 0x1a3fb8u: goto label_1a3fb8;
        case 0x1a3fbcu: goto label_1a3fbc;
        case 0x1a3fc0u: goto label_1a3fc0;
        case 0x1a3fc4u: goto label_1a3fc4;
        case 0x1a3fc8u: goto label_1a3fc8;
        case 0x1a3fccu: goto label_1a3fcc;
        case 0x1a3fd0u: goto label_1a3fd0;
        case 0x1a3fd4u: goto label_1a3fd4;
        case 0x1a3fd8u: goto label_1a3fd8;
        case 0x1a3fdcu: goto label_1a3fdc;
        case 0x1a3fe0u: goto label_1a3fe0;
        case 0x1a3fe4u: goto label_1a3fe4;
        case 0x1a3fe8u: goto label_1a3fe8;
        case 0x1a3fecu: goto label_1a3fec;
        case 0x1a3ff0u: goto label_1a3ff0;
        case 0x1a3ff4u: goto label_1a3ff4;
        case 0x1a3ff8u: goto label_1a3ff8;
        case 0x1a3ffcu: goto label_1a3ffc;
        case 0x1a4000u: goto label_1a4000;
        case 0x1a4004u: goto label_1a4004;
        case 0x1a4008u: goto label_1a4008;
        case 0x1a400cu: goto label_1a400c;
        case 0x1a4010u: goto label_1a4010;
        case 0x1a4014u: goto label_1a4014;
        case 0x1a4018u: goto label_1a4018;
        case 0x1a401cu: goto label_1a401c;
        case 0x1a4020u: goto label_1a4020;
        case 0x1a4024u: goto label_1a4024;
        case 0x1a4028u: goto label_1a4028;
        case 0x1a402cu: goto label_1a402c;
        case 0x1a4030u: goto label_1a4030;
        case 0x1a4034u: goto label_1a4034;
        case 0x1a4038u: goto label_1a4038;
        case 0x1a403cu: goto label_1a403c;
        case 0x1a4040u: goto label_1a4040;
        case 0x1a4044u: goto label_1a4044;
        case 0x1a4048u: goto label_1a4048;
        case 0x1a404cu: goto label_1a404c;
        case 0x1a4050u: goto label_1a4050;
        case 0x1a4054u: goto label_1a4054;
        case 0x1a4058u: goto label_1a4058;
        case 0x1a405cu: goto label_1a405c;
        case 0x1a4060u: goto label_1a4060;
        case 0x1a4064u: goto label_1a4064;
        case 0x1a4068u: goto label_1a4068;
        case 0x1a406cu: goto label_1a406c;
        case 0x1a4070u: goto label_1a4070;
        case 0x1a4074u: goto label_1a4074;
        case 0x1a4078u: goto label_1a4078;
        case 0x1a407cu: goto label_1a407c;
        case 0x1a4080u: goto label_1a4080;
        case 0x1a4084u: goto label_1a4084;
        case 0x1a4088u: goto label_1a4088;
        case 0x1a408cu: goto label_1a408c;
        case 0x1a4090u: goto label_1a4090;
        case 0x1a4094u: goto label_1a4094;
        case 0x1a4098u: goto label_1a4098;
        case 0x1a409cu: goto label_1a409c;
        case 0x1a40a0u: goto label_1a40a0;
        case 0x1a40a4u: goto label_1a40a4;
        case 0x1a40a8u: goto label_1a40a8;
        case 0x1a40acu: goto label_1a40ac;
        case 0x1a40b0u: goto label_1a40b0;
        case 0x1a40b4u: goto label_1a40b4;
        case 0x1a40b8u: goto label_1a40b8;
        case 0x1a40bcu: goto label_1a40bc;
        case 0x1a40c0u: goto label_1a40c0;
        case 0x1a40c4u: goto label_1a40c4;
        case 0x1a40c8u: goto label_1a40c8;
        case 0x1a40ccu: goto label_1a40cc;
        case 0x1a40d0u: goto label_1a40d0;
        case 0x1a40d4u: goto label_1a40d4;
        case 0x1a40d8u: goto label_1a40d8;
        case 0x1a40dcu: goto label_1a40dc;
        case 0x1a40e0u: goto label_1a40e0;
        case 0x1a40e4u: goto label_1a40e4;
        case 0x1a40e8u: goto label_1a40e8;
        case 0x1a40ecu: goto label_1a40ec;
        case 0x1a40f0u: goto label_1a40f0;
        case 0x1a40f4u: goto label_1a40f4;
        case 0x1a40f8u: goto label_1a40f8;
        case 0x1a40fcu: goto label_1a40fc;
        case 0x1a4100u: goto label_1a4100;
        case 0x1a4104u: goto label_1a4104;
        case 0x1a4108u: goto label_1a4108;
        case 0x1a410cu: goto label_1a410c;
        case 0x1a4110u: goto label_1a4110;
        case 0x1a4114u: goto label_1a4114;
        case 0x1a4118u: goto label_1a4118;
        case 0x1a411cu: goto label_1a411c;
        case 0x1a4120u: goto label_1a4120;
        case 0x1a4124u: goto label_1a4124;
        case 0x1a4128u: goto label_1a4128;
        case 0x1a412cu: goto label_1a412c;
        case 0x1a4130u: goto label_1a4130;
        case 0x1a4134u: goto label_1a4134;
        case 0x1a4138u: goto label_1a4138;
        case 0x1a413cu: goto label_1a413c;
        case 0x1a4140u: goto label_1a4140;
        case 0x1a4144u: goto label_1a4144;
        case 0x1a4148u: goto label_1a4148;
        case 0x1a414cu: goto label_1a414c;
        case 0x1a4150u: goto label_1a4150;
        case 0x1a4154u: goto label_1a4154;
        case 0x1a4158u: goto label_1a4158;
        case 0x1a415cu: goto label_1a415c;
        case 0x1a4160u: goto label_1a4160;
        case 0x1a4164u: goto label_1a4164;
        case 0x1a4168u: goto label_1a4168;
        case 0x1a416cu: goto label_1a416c;
        case 0x1a4170u: goto label_1a4170;
        case 0x1a4174u: goto label_1a4174;
        case 0x1a4178u: goto label_1a4178;
        case 0x1a417cu: goto label_1a417c;
        case 0x1a4180u: goto label_1a4180;
        case 0x1a4184u: goto label_1a4184;
        case 0x1a4188u: goto label_1a4188;
        case 0x1a418cu: goto label_1a418c;
        case 0x1a4190u: goto label_1a4190;
        case 0x1a4194u: goto label_1a4194;
        case 0x1a4198u: goto label_1a4198;
        case 0x1a419cu: goto label_1a419c;
        case 0x1a41a0u: goto label_1a41a0;
        case 0x1a41a4u: goto label_1a41a4;
        case 0x1a41a8u: goto label_1a41a8;
        case 0x1a41acu: goto label_1a41ac;
        case 0x1a41b0u: goto label_1a41b0;
        case 0x1a41b4u: goto label_1a41b4;
        case 0x1a41b8u: goto label_1a41b8;
        case 0x1a41bcu: goto label_1a41bc;
        case 0x1a41c0u: goto label_1a41c0;
        case 0x1a41c4u: goto label_1a41c4;
        case 0x1a41c8u: goto label_1a41c8;
        case 0x1a41ccu: goto label_1a41cc;
        case 0x1a41d0u: goto label_1a41d0;
        case 0x1a41d4u: goto label_1a41d4;
        case 0x1a41d8u: goto label_1a41d8;
        case 0x1a41dcu: goto label_1a41dc;
        case 0x1a41e0u: goto label_1a41e0;
        case 0x1a41e4u: goto label_1a41e4;
        case 0x1a41e8u: goto label_1a41e8;
        case 0x1a41ecu: goto label_1a41ec;
        case 0x1a41f0u: goto label_1a41f0;
        case 0x1a41f4u: goto label_1a41f4;
        case 0x1a41f8u: goto label_1a41f8;
        case 0x1a41fcu: goto label_1a41fc;
        case 0x1a4200u: goto label_1a4200;
        case 0x1a4204u: goto label_1a4204;
        case 0x1a4208u: goto label_1a4208;
        case 0x1a420cu: goto label_1a420c;
        case 0x1a4210u: goto label_1a4210;
        case 0x1a4214u: goto label_1a4214;
        case 0x1a4218u: goto label_1a4218;
        case 0x1a421cu: goto label_1a421c;
        case 0x1a4220u: goto label_1a4220;
        case 0x1a4224u: goto label_1a4224;
        case 0x1a4228u: goto label_1a4228;
        case 0x1a422cu: goto label_1a422c;
        case 0x1a4230u: goto label_1a4230;
        case 0x1a4234u: goto label_1a4234;
        case 0x1a4238u: goto label_1a4238;
        case 0x1a423cu: goto label_1a423c;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4244u: goto label_1a4244;
        case 0x1a4248u: goto label_1a4248;
        case 0x1a424cu: goto label_1a424c;
        case 0x1a4250u: goto label_1a4250;
        case 0x1a4254u: goto label_1a4254;
        case 0x1a4258u: goto label_1a4258;
        case 0x1a425cu: goto label_1a425c;
        case 0x1a4260u: goto label_1a4260;
        case 0x1a4264u: goto label_1a4264;
        case 0x1a4268u: goto label_1a4268;
        case 0x1a426cu: goto label_1a426c;
        case 0x1a4270u: goto label_1a4270;
        case 0x1a4274u: goto label_1a4274;
        case 0x1a4278u: goto label_1a4278;
        case 0x1a427cu: goto label_1a427c;
        case 0x1a4280u: goto label_1a4280;
        case 0x1a4284u: goto label_1a4284;
        case 0x1a4288u: goto label_1a4288;
        case 0x1a428cu: goto label_1a428c;
        case 0x1a4290u: goto label_1a4290;
        case 0x1a4294u: goto label_1a4294;
        case 0x1a4298u: goto label_1a4298;
        case 0x1a429cu: goto label_1a429c;
        case 0x1a42a0u: goto label_1a42a0;
        case 0x1a42a4u: goto label_1a42a4;
        case 0x1a42a8u: goto label_1a42a8;
        case 0x1a42acu: goto label_1a42ac;
        case 0x1a42b0u: goto label_1a42b0;
        case 0x1a42b4u: goto label_1a42b4;
        default: return;
    }

label_1a3ae8:
    // 0x1a3ae8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a3ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3aec:
    // 0x1a3aec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a3aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a3af0:
    // 0x1a3af0: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1a3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_1a3af4:
    // 0x1a3af4: 0xc068b12  jal         func_1A2C48
label_1a3af8:
    if (ctx->pc == 0x1A3AF8u) {
        ctx->pc = 0x1A3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AF4u;
        // 0x1a3af8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3AFCu;
        goto label_1a3afc;
    }
    ctx->pc = 0x1A3AF4u;
    SET_GPR_U32(ctx, 31, 0x1A3AFCu);
    ctx->pc = 0x1A3AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AF4u;
    // 0x1a3af8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x1A3AFCu;
label_1a3afc:
    // 0x1a3afc: 0xc067ca0  jal         func_19F280
label_1a3b00:
    if (ctx->pc == 0x1A3B00u) {
        ctx->pc = 0x1A3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3AFCu;
        // 0x1a3b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B04u;
        goto label_1a3b04;
    }
    ctx->pc = 0x1A3AFCu;
    SET_GPR_U32(ctx, 31, 0x1A3B04u);
    ctx->pc = 0x1A3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3AFCu;
    // 0x1a3b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A3B04u;
label_1a3b04:
    // 0x1a3b04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a3b08:
    // 0x1a3b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b0c:
    // 0x1a3b0c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1a3b10:
    // 0x1a3b10: 0xc067ca0  jal         func_19F280
label_1a3b14:
    if (ctx->pc == 0x1A3B14u) {
        ctx->pc = 0x1A3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B10u;
        // 0x1a3b14: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B18u;
        goto label_1a3b18;
    }
    ctx->pc = 0x1A3B10u;
    SET_GPR_U32(ctx, 31, 0x1A3B18u);
    ctx->pc = 0x1A3B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B10u;
    // 0x1a3b14: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A3B18u;
label_1a3b18:
    // 0x1a3b18: 0xc06b518  jal         func_1AD460
label_1a3b1c:
    if (ctx->pc == 0x1A3B1Cu) {
        ctx->pc = 0x1A3B20u;
        goto label_1a3b20;
    }
    ctx->pc = 0x1A3B18u;
    SET_GPR_U32(ctx, 31, 0x1A3B20u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A3B20u;
label_1a3b20:
    // 0x1a3b20: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
label_1a3b24:
    // 0x1a3b24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a3b28:
    // 0x1a3b28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a3b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a3b2c:
    // 0x1a3b2c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a3b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
label_1a3b30:
    // 0x1a3b30: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x1a3b30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_1a3b34:
    // 0x1a3b34: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a3b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a3b38:
    // 0x1a3b38: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1a3b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1a3b3c:
    // 0x1a3b3c: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1a3b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
label_1a3b40:
    // 0x1a3b40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a3b44:
    // 0x1a3b44: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a3b48:
    // 0x1a3b48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1a3b4c:
    // 0x1a3b4c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1a3b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
label_1a3b50:
    // 0x1a3b50: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x1a3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1a3b54:
    // 0x1a3b54: 0xc06b52a  jal         func_1AD4A8
label_1a3b58:
    if (ctx->pc == 0x1A3B58u) {
        ctx->pc = 0x1A3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B54u;
        // 0x1a3b58: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B5Cu;
        goto label_1a3b5c;
    }
    ctx->pc = 0x1A3B54u;
    SET_GPR_U32(ctx, 31, 0x1A3B5Cu);
    ctx->pc = 0x1A3B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B54u;
    // 0x1a3b58: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A3B5Cu;
label_1a3b5c:
    // 0x1a3b5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a3b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a3b60:
    // 0x1a3b60: 0xc067c94  jal         func_19F250
label_1a3b64:
    if (ctx->pc == 0x1A3B64u) {
        ctx->pc = 0x1A3B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B60u;
        // 0x1a3b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B68u;
        goto label_1a3b68;
    }
    ctx->pc = 0x1A3B60u;
    SET_GPR_U32(ctx, 31, 0x1A3B68u);
    ctx->pc = 0x1A3B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B60u;
    // 0x1a3b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    { ctx->pc = 0x19f250; return; }
    ctx->pc = 0x1A3B68u;
label_1a3b68:
    // 0x1a3b68: 0xc067ca0  jal         func_19F280
label_1a3b6c:
    if (ctx->pc == 0x1A3B6Cu) {
        ctx->pc = 0x1A3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B68u;
        // 0x1a3b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B70u;
        goto label_1a3b70;
    }
    ctx->pc = 0x1A3B68u;
    SET_GPR_U32(ctx, 31, 0x1A3B70u);
    ctx->pc = 0x1A3B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B68u;
    // 0x1a3b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    { ctx->pc = 0x19f280; return; }
    ctx->pc = 0x1A3B70u;
label_1a3b70:
    // 0x1a3b70: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x1a3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
label_1a3b74:
    // 0x1a3b74: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3b78:
    // 0x1a3b78: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a3b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1a3b7c:
    // 0x1a3b7c: 0xc068b12  jal         func_1A2C48
label_1a3b80:
    if (ctx->pc == 0x1A3B80u) {
        ctx->pc = 0x1A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B7Cu;
        // 0x1a3b80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B84u;
        goto label_1a3b84;
    }
    ctx->pc = 0x1A3B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A3B84u);
    ctx->pc = 0x1A3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B7Cu;
    // 0x1a3b80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    { ctx->pc = 0x1a2c48; return; }
    ctx->pc = 0x1A3B84u;
label_1a3b84:
    // 0x1a3b84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a3b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a3b88:
    // 0x1a3b88: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a3b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3b8c:
    // 0x1a3b8c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a3b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3b90:
    // 0x1a3b90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a3b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3b94:
    // 0x1a3b94: 0x3e00008  jr          $ra
label_1a3b98:
    if (ctx->pc == 0x1A3B98u) {
        ctx->pc = 0x1A3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B94u;
        // 0x1a3b98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3B9Cu;
        goto label_1a3b9c;
    }
    ctx->pc = 0x1A3B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3B94u;
        // 0x1a3b98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3B9Cu;
label_1a3b9c:
    // 0x1a3b9c: 0x0  nop
    ctx->pc = 0x1a3b9cu;
    // NOP
label_1a3ba0:
    // 0x1a3ba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a3ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a3ba4:
    // 0x1a3ba4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a3ba8:
    // 0x1a3ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3bac:
    // 0x1a3bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a3bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bb0:
    // 0x1a3bb0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a3bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a3bb4:
    // 0x1a3bb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a3bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3bb8:
    // 0x1a3bb8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a3bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a3bbc:
    // 0x1a3bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bc0:
    // 0x1a3bc0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a3bc4:
    // 0x1a3bc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a3bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a3bc8:
    // 0x1a3bc8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a3bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a3bcc:
    // 0x1a3bcc: 0xc06781e  jal         func_19E078
label_1a3bd0:
    if (ctx->pc == 0x1A3BD0u) {
        ctx->pc = 0x1A3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BCCu;
        // 0x1a3bd0: 0xae300848  sw          $s0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BD4u;
        goto label_1a3bd4;
    }
    ctx->pc = 0x1A3BCCu;
    SET_GPR_U32(ctx, 31, 0x1A3BD4u);
    ctx->pc = 0x1A3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BCCu;
    // 0x1a3bd0: 0xae300848  sw          $s0, 0x848($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E078u;
    { ctx->pc = 0x19e078; return; }
    ctx->pc = 0x1A3BD4u;
label_1a3bd4:
    // 0x1a3bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3bd8:
    // 0x1a3bd8: 0xc067dd2  jal         func_19F748
label_1a3bdc:
    if (ctx->pc == 0x1A3BDCu) {
        ctx->pc = 0x1A3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3BD8u;
        // 0x1a3bdc: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3BE0u;
        goto label_1a3be0;
    }
    ctx->pc = 0x1A3BD8u;
    SET_GPR_U32(ctx, 31, 0x1A3BE0u);
    ctx->pc = 0x1A3BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3BD8u;
    // 0x1a3bdc: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3BE0u;
label_1a3be0:
    // 0x1a3be0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a3be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3be4:
    // 0x1a3be4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1a3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_1a3be8:
    // 0x1a3be8: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x1a3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
label_1a3bec:
    // 0x1a3bec: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x1a3becu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1a3bf0:
    // 0x1a3bf0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1a3bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1a3bf4:
    // 0x1a3bf4: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x1a3bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
label_1a3bf8:
    // 0x1a3bf8: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x1a3bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
label_1a3bfc:
    // 0x1a3bfc: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x1a3bfcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_1a3c00:
    // 0x1a3c00: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x1a3c00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_1a3c04:
    // 0x1a3c04: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_1a3c08:
    if (ctx->pc == 0x1A3C08u) {
        ctx->pc = 0x1A3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C04u;
        // 0x1a3c08: 0xae220140  sw          $v0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C0Cu;
        goto label_1a3c0c;
    }
    ctx->pc = 0x1A3C04u;
    {
        const bool branch_taken_0x1a3c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C04u;
        // 0x1a3c08: 0xae220140  sw          $v0, 0x140($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c04) {
            ctx->pc = 0x1A3C1Cu;
            goto label_1a3c1c;
        }
    }
    ctx->pc = 0x1A3C0Cu;
label_1a3c0c:
    // 0x1a3c0c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a3c10:
    // 0x1a3c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c14:
    // 0x1a3c14: 0xc068d2c  jal         func_1A34B0
label_1a3c18:
    if (ctx->pc == 0x1A3C18u) {
        ctx->pc = 0x1A3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C14u;
        // 0x1a3c18: 0x24a5a3c0  addiu       $a1, $a1, -0x5C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C1Cu;
        goto label_1a3c1c;
    }
    ctx->pc = 0x1A3C14u;
    SET_GPR_U32(ctx, 31, 0x1A3C1Cu);
    ctx->pc = 0x1A3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C14u;
    // 0x1a3c18: 0x24a5a3c0  addiu       $a1, $a1, -0x5C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A3C1Cu;
label_1a3c1c:
    // 0x1a3c1c: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x1a3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
label_1a3c20:
    // 0x1a3c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c24:
    // 0x1a3c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a3c28:
    // 0x1a3c28: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a3c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a3c2c:
    // 0x1a3c2c: 0xae22013c  sw          $v0, 0x13C($s1)
    ctx->pc = 0x1a3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 2));
label_1a3c30:
    // 0x1a3c30: 0xc067dd2  jal         func_19F748
label_1a3c34:
    if (ctx->pc == 0x1A3C34u) {
        ctx->pc = 0x1A3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C30u;
        // 0x1a3c34: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C38u;
        goto label_1a3c38;
    }
    ctx->pc = 0x1A3C30u;
    SET_GPR_U32(ctx, 31, 0x1A3C38u);
    ctx->pc = 0x1A3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C30u;
    // 0x1a3c34: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3C38u;
label_1a3c38:
    // 0x1a3c38: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x1a3c38u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_1a3c3c:
    // 0x1a3c3c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1a3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1a3c40:
    // 0x1a3c40: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_1a3c44:
    if (ctx->pc == 0x1A3C44u) {
        ctx->pc = 0x1A3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C40u;
        // 0x1a3c44: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C48u;
        goto label_1a3c48;
    }
    ctx->pc = 0x1A3C40u;
    {
        const bool branch_taken_0x1a3c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C40u;
        // 0x1a3c44: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c40) {
            ctx->pc = 0x1A3C64u;
            goto label_1a3c64;
        }
    }
    ctx->pc = 0x1A3C48u;
label_1a3c48:
    // 0x1a3c48: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_1a3c4c:
    if (ctx->pc == 0x1A3C4Cu) {
        ctx->pc = 0x1A3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C48u;
        // 0x1a3c4c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C50u;
        goto label_1a3c50;
    }
    ctx->pc = 0x1A3C48u;
    {
        const bool branch_taken_0x1a3c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C48u;
        // 0x1a3c4c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c48) {
            ctx->pc = 0x1A3C64u;
            goto label_1a3c64;
        }
    }
    ctx->pc = 0x1A3C50u;
label_1a3c50:
    // 0x1a3c50: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_1a3c54:
    if (ctx->pc == 0x1A3C54u) {
        ctx->pc = 0x1A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C50u;
        // 0x1a3c54: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C58u;
        goto label_1a3c58;
    }
    ctx->pc = 0x1A3C50u;
    {
        const bool branch_taken_0x1a3c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C50u;
        // 0x1a3c54: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c50) {
            ctx->pc = 0x1A3C64u;
            goto label_1a3c64;
        }
    }
    ctx->pc = 0x1A3C58u;
label_1a3c58:
    // 0x1a3c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c5c:
    // 0x1a3c5c: 0xc068d2c  jal         func_1A34B0
label_1a3c60:
    if (ctx->pc == 0x1A3C60u) {
        ctx->pc = 0x1A3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C5Cu;
        // 0x1a3c60: 0x24a5a3e8  addiu       $a1, $a1, -0x5C18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C64u;
        goto label_1a3c64;
    }
    ctx->pc = 0x1A3C5Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C64u);
    ctx->pc = 0x1A3C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C5Cu;
    // 0x1a3c60: 0x24a5a3e8  addiu       $a1, $a1, -0x5C18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A3C64u;
label_1a3c64:
    // 0x1a3c64: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x1a3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_1a3c68:
    // 0x1a3c68: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
label_1a3c6c:
    // 0x1a3c6c: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x1a3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_1a3c70:
    // 0x1a3c70: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x1a3c70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
label_1a3c74:
    // 0x1a3c74: 0x8e260134  lw          $a2, 0x134($s1)
    ctx->pc = 0x1a3c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_1a3c78:
    // 0x1a3c78: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x1a3c78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
label_1a3c7c:
    // 0x1a3c7c: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x1a3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_1a3c80:
    // 0x1a3c80: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x1a3c80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
label_1a3c84:
    // 0x1a3c84: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1a3c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
label_1a3c88:
    // 0x1a3c88: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1a3c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1a3c8c:
    // 0x1a3c8c: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1a3c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_1a3c90:
    // 0x1a3c90: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1a3c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1a3c94:
    // 0x1a3c94: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1a3c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1a3c98:
    // 0x1a3c98: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1a3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1a3c9c:
    // 0x1a3c9c: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x1a3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
label_1a3ca0:
    // 0x1a3ca0: 0xae270124  sw          $a3, 0x124($s1)
    ctx->pc = 0x1a3ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 7));
label_1a3ca4:
    // 0x1a3ca4: 0xae250128  sw          $a1, 0x128($s1)
    ctx->pc = 0x1a3ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 5));
label_1a3ca8:
    // 0x1a3ca8: 0xae260134  sw          $a2, 0x134($s1)
    ctx->pc = 0x1a3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 6));
label_1a3cac:
    // 0x1a3cac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a3cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a3cb0:
    // 0x1a3cb0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a3cb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a3cb4:
    // 0x1a3cb4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a3cb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a3cb8:
    // 0x1a3cb8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a3cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a3cbc:
    // 0x1a3cbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3cc0:
    // 0x1a3cc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a3cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3cc4:
    // 0x1a3cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3cc8:
    // 0x1a3cc8: 0x3e00008  jr          $ra
label_1a3ccc:
    if (ctx->pc == 0x1A3CCCu) {
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC8u;
        // 0x1a3ccc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CD0u;
        goto label_1a3cd0;
    }
    ctx->pc = 0x1A3CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC8u;
        // 0x1a3ccc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3CD0u;
label_1a3cd0:
    // 0x1a3cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a3cd4:
    // 0x1a3cd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a3cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3cd8:
    // 0x1a3cd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3cdc:
    // 0x1a3cdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3ce0:
    // 0x1a3ce0: 0xc067dd2  jal         func_19F748
label_1a3ce4:
    if (ctx->pc == 0x1A3CE4u) {
        ctx->pc = 0x1A3CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CE0u;
        // 0x1a3ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CE8u;
        goto label_1a3ce8;
    }
    ctx->pc = 0x1A3CE0u;
    SET_GPR_U32(ctx, 31, 0x1A3CE8u);
    ctx->pc = 0x1A3CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CE0u;
    // 0x1a3ce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3CE8u;
label_1a3ce8:
    // 0x1a3ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3cec:
    // 0x1a3cec: 0xc067dd2  jal         func_19F748
label_1a3cf0:
    if (ctx->pc == 0x1A3CF0u) {
        ctx->pc = 0x1A3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CECu;
        // 0x1a3cf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CF4u;
        goto label_1a3cf4;
    }
    ctx->pc = 0x1A3CECu;
    SET_GPR_U32(ctx, 31, 0x1A3CF4u);
    ctx->pc = 0x1A3CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CECu;
    // 0x1a3cf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3CF4u;
label_1a3cf4:
    // 0x1a3cf4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a3cf8:
    if (ctx->pc == 0x1A3CF8u) {
        ctx->pc = 0x1A3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CF4u;
        // 0x1a3cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CFCu;
        goto label_1a3cfc;
    }
    ctx->pc = 0x1A3CF4u;
    {
        const bool branch_taken_0x1a3cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CF4u;
        // 0x1a3cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3cf4) {
            ctx->pc = 0x1A3D20u;
            goto label_1a3d20;
        }
    }
    ctx->pc = 0x1A3CFCu;
label_1a3cfc:
    // 0x1a3cfc: 0xc067dd2  jal         func_19F748
label_1a3d00:
    if (ctx->pc == 0x1A3D00u) {
        ctx->pc = 0x1A3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CFCu;
        // 0x1a3d00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D04u;
        goto label_1a3d04;
    }
    ctx->pc = 0x1A3CFCu;
    SET_GPR_U32(ctx, 31, 0x1A3D04u);
    ctx->pc = 0x1A3D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CFCu;
    // 0x1a3d00: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3D04u;
label_1a3d04:
    // 0x1a3d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d08:
    // 0x1a3d08: 0xc067dd2  jal         func_19F748
label_1a3d0c:
    if (ctx->pc == 0x1A3D0Cu) {
        ctx->pc = 0x1A3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D08u;
        // 0x1a3d0c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D10u;
        goto label_1a3d10;
    }
    ctx->pc = 0x1A3D08u;
    SET_GPR_U32(ctx, 31, 0x1A3D10u);
    ctx->pc = 0x1A3D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D08u;
    // 0x1a3d0c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3D10u;
label_1a3d10:
    // 0x1a3d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d14:
    // 0x1a3d14: 0xc067dd2  jal         func_19F748
label_1a3d18:
    if (ctx->pc == 0x1A3D18u) {
        ctx->pc = 0x1A3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D14u;
        // 0x1a3d18: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D1Cu;
        goto label_1a3d1c;
    }
    ctx->pc = 0x1A3D14u;
    SET_GPR_U32(ctx, 31, 0x1A3D1Cu);
    ctx->pc = 0x1A3D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D14u;
    // 0x1a3d18: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3D1Cu;
label_1a3d1c:
    // 0x1a3d1c: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x1a3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
label_1a3d20:
    // 0x1a3d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d24:
    // 0x1a3d24: 0xc067dd2  jal         func_19F748
label_1a3d28:
    if (ctx->pc == 0x1A3D28u) {
        ctx->pc = 0x1A3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D24u;
        // 0x1a3d28: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D2Cu;
        goto label_1a3d2c;
    }
    ctx->pc = 0x1A3D24u;
    SET_GPR_U32(ctx, 31, 0x1A3D2Cu);
    ctx->pc = 0x1A3D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D24u;
    // 0x1a3d28: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3D2Cu;
label_1a3d2c:
    // 0x1a3d2c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x1a3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_1a3d30:
    // 0x1a3d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d34:
    // 0x1a3d34: 0xc067dd2  jal         func_19F748
label_1a3d38:
    if (ctx->pc == 0x1A3D38u) {
        ctx->pc = 0x1A3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D34u;
        // 0x1a3d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D3Cu;
        goto label_1a3d3c;
    }
    ctx->pc = 0x1A3D34u;
    SET_GPR_U32(ctx, 31, 0x1A3D3Cu);
    ctx->pc = 0x1A3D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D34u;
    // 0x1a3d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3D3Cu;
label_1a3d3c:
    // 0x1a3d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d40:
    // 0x1a3d40: 0xc067dd2  jal         func_19F748
label_1a3d44:
    if (ctx->pc == 0x1A3D44u) {
        ctx->pc = 0x1A3D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D40u;
        // 0x1a3d44: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D48u;
        goto label_1a3d48;
    }
    ctx->pc = 0x1A3D40u;
    SET_GPR_U32(ctx, 31, 0x1A3D48u);
    ctx->pc = 0x1A3D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D40u;
    // 0x1a3d44: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    { ctx->pc = 0x19f748; return; }
    ctx->pc = 0x1A3D48u;
label_1a3d48:
    // 0x1a3d48: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x1a3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
label_1a3d4c:
    // 0x1a3d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3d50:
    // 0x1a3d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3d54:
    // 0x1a3d54: 0x3e00008  jr          $ra
label_1a3d58:
    if (ctx->pc == 0x1A3D58u) {
        ctx->pc = 0x1A3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D54u;
        // 0x1a3d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D5Cu;
        goto label_1a3d5c;
    }
    ctx->pc = 0x1A3D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D54u;
        // 0x1a3d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3D5Cu;
label_1a3d5c:
    // 0x1a3d5c: 0x0  nop
    ctx->pc = 0x1a3d5cu;
    // NOP
label_1a3d60:
    // 0x1a3d60: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a3d64:
    // 0x1a3d64: 0x8068d2c  j           func_1A34B0
label_1a3d68:
    if (ctx->pc == 0x1A3D68u) {
        ctx->pc = 0x1A3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D64u;
        // 0x1a3d68: 0x24a5a408  addiu       $a1, $a1, -0x5BF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D6Cu;
        goto label_1a3d6c;
    }
    ctx->pc = 0x1A3D64u;
    ctx->pc = 0x1A3D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D64u;
    // 0x1a3d68: 0x24a5a408  addiu       $a1, $a1, -0x5BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A3D6Cu;
label_1a3d6c:
    // 0x1a3d6c: 0x0  nop
    ctx->pc = 0x1a3d6cu;
    // NOP
label_1a3d70:
    // 0x1a3d70: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a3d74:
    // 0x1a3d74: 0x8068d2c  j           func_1A34B0
label_1a3d78:
    if (ctx->pc == 0x1A3D78u) {
        ctx->pc = 0x1A3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D74u;
        // 0x1a3d78: 0x24a5a438  addiu       $a1, $a1, -0x5BC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D7Cu;
        goto label_1a3d7c;
    }
    ctx->pc = 0x1A3D74u;
    ctx->pc = 0x1A3D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D74u;
    // 0x1a3d78: 0x24a5a438  addiu       $a1, $a1, -0x5BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A3D7Cu;
label_1a3d7c:
    // 0x1a3d7c: 0x0  nop
    ctx->pc = 0x1a3d7cu;
    // NOP
label_1a3d80:
    // 0x1a3d80: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a3d84:
    // 0x1a3d84: 0x8068d2c  j           func_1A34B0
label_1a3d88:
    if (ctx->pc == 0x1A3D88u) {
        ctx->pc = 0x1A3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D84u;
        // 0x1a3d88: 0x24a5a450  addiu       $a1, $a1, -0x5BB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D8Cu;
        goto label_1a3d8c;
    }
    ctx->pc = 0x1A3D84u;
    ctx->pc = 0x1A3D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D84u;
    // 0x1a3d88: 0x24a5a450  addiu       $a1, $a1, -0x5BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A3D8Cu;
label_1a3d8c:
    // 0x1a3d8c: 0x0  nop
    ctx->pc = 0x1a3d8cu;
    // NOP
label_1a3d90:
    // 0x1a3d90: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a3d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1a3d94:
    // 0x1a3d94: 0x8068d2c  j           func_1A34B0
label_1a3d98:
    if (ctx->pc == 0x1A3D98u) {
        ctx->pc = 0x1A3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D94u;
        // 0x1a3d98: 0x24a5a488  addiu       $a1, $a1, -0x5B78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D9Cu;
        goto label_1a3d9c;
    }
    ctx->pc = 0x1A3D94u;
    ctx->pc = 0x1A3D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D94u;
    // 0x1a3d98: 0x24a5a488  addiu       $a1, $a1, -0x5B78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A3D9Cu;
label_1a3d9c:
    // 0x1a3d9c: 0x0  nop
    ctx->pc = 0x1a3d9cu;
    // NOP
label_1a3da0:
    // 0x1a3da0: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1a3da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a3da4:
    // 0x1a3da4: 0x8068fa4  j           func_1A3E90
label_1a3da8:
    if (ctx->pc == 0x1A3DA8u) {
        ctx->pc = 0x1A3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DA4u;
        // 0x1a3da8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3DACu;
        goto label_1a3dac;
    }
    ctx->pc = 0x1A3DA4u;
    ctx->pc = 0x1A3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DA4u;
    // 0x1a3da8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3E90u;
    goto label_1a3e90;
    ctx->pc = 0x1A3DACu;
label_1a3dac:
    // 0x1a3dac: 0x0  nop
    ctx->pc = 0x1a3dacu;
    // NOP
label_1a3db0:
    // 0x1a3db0: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1a3db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a3db4:
    // 0x1a3db4: 0x8068fde  j           func_1A3F78
label_1a3db8:
    if (ctx->pc == 0x1A3DB8u) {
        ctx->pc = 0x1A3DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DB4u;
        // 0x1a3db8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3DBCu;
        goto label_1a3dbc;
    }
    ctx->pc = 0x1A3DB4u;
    ctx->pc = 0x1A3DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DB4u;
    // 0x1a3db8: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F78u;
    goto label_1a3f78;
    ctx->pc = 0x1A3DBCu;
label_1a3dbc:
    // 0x1a3dbc: 0x0  nop
    ctx->pc = 0x1a3dbcu;
    // NOP
label_1a3dc0:
    // 0x1a3dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a3dc4:
    // 0x1a3dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3dc8:
    // 0x1a3dc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3dcc:
    // 0x1a3dcc: 0xc06b518  jal         func_1AD460
label_1a3dd0:
    if (ctx->pc == 0x1A3DD0u) {
        ctx->pc = 0x1A3DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DCCu;
        // 0x1a3dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3DD4u;
        goto label_1a3dd4;
    }
    ctx->pc = 0x1A3DCCu;
    SET_GPR_U32(ctx, 31, 0x1A3DD4u);
    ctx->pc = 0x1A3DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DCCu;
    // 0x1a3dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A3DD4u;
label_1a3dd4:
    // 0x1a3dd4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1a3dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_1a3dd8:
    // 0x1a3dd8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1a3dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_1a3ddc:
    // 0x1a3ddc: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x1a3ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
label_1a3de0:
    // 0x1a3de0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1a3de0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_1a3de4:
    // 0x1a3de4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3de8:
    // 0x1a3de8: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x1a3de8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
label_1a3dec:
    // 0x1a3dec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a3decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a3df0:
    // 0x1a3df0: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1a3df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
label_1a3df4:
    // 0x1a3df4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1a3df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1a3df8:
    // 0x1a3df8: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x1a3df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
label_1a3dfc:
    // 0x1a3dfc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a3dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1a3e00:
    // 0x1a3e00: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1a3e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1a3e04:
    // 0x1a3e04: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1a3e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1a3e08:
    // 0x1a3e08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3e0c:
    // 0x1a3e0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3e10:
    // 0x1a3e10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3e14:
    // 0x1a3e14: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1a3e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1a3e18:
    // 0x1a3e18: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1a3e1c:
    // 0x1a3e1c: 0x806b52a  j           func_1AD4A8
label_1a3e20:
    if (ctx->pc == 0x1A3E20u) {
        ctx->pc = 0x1A3E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E1Cu;
        // 0x1a3e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E24u;
        goto label_1a3e24;
    }
    ctx->pc = 0x1A3E1Cu;
    ctx->pc = 0x1A3E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E1Cu;
    // 0x1a3e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A3E24u;
label_1a3e24:
    // 0x1a3e24: 0x0  nop
    ctx->pc = 0x1a3e24u;
    // NOP
label_1a3e28:
    // 0x1a3e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a3e2c:
    // 0x1a3e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3e30:
    // 0x1a3e30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3e34:
    // 0x1a3e34: 0xc06b518  jal         func_1AD460
label_1a3e38:
    if (ctx->pc == 0x1A3E38u) {
        ctx->pc = 0x1A3E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E34u;
        // 0x1a3e38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E3Cu;
        goto label_1a3e3c;
    }
    ctx->pc = 0x1A3E34u;
    SET_GPR_U32(ctx, 31, 0x1A3E3Cu);
    ctx->pc = 0x1A3E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E34u;
    // 0x1a3e38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A3E3Cu;
label_1a3e3c:
    // 0x1a3e3c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1a3e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_1a3e40:
    // 0x1a3e40: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1a3e40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_1a3e44:
    // 0x1a3e44: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x1a3e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
label_1a3e48:
    // 0x1a3e48: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1a3e48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_1a3e4c:
    // 0x1a3e4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3e50:
    // 0x1a3e50: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x1a3e50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
label_1a3e54:
    // 0x1a3e54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a3e58:
    // 0x1a3e58: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1a3e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
label_1a3e5c:
    // 0x1a3e5c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1a3e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1a3e60:
    // 0x1a3e60: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x1a3e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
label_1a3e64:
    // 0x1a3e64: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a3e64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1a3e68:
    // 0x1a3e68: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1a3e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1a3e6c:
    // 0x1a3e6c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1a3e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1a3e70:
    // 0x1a3e70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3e74:
    // 0x1a3e74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3e78:
    // 0x1a3e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3e7c:
    // 0x1a3e7c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1a3e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1a3e80:
    // 0x1a3e80: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1a3e84:
    // 0x1a3e84: 0x806b52a  j           func_1AD4A8
label_1a3e88:
    if (ctx->pc == 0x1A3E88u) {
        ctx->pc = 0x1A3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E84u;
        // 0x1a3e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E8Cu;
        goto label_1a3e8c;
    }
    ctx->pc = 0x1A3E84u;
    ctx->pc = 0x1A3E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E84u;
    // 0x1a3e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A3E8Cu;
label_1a3e8c:
    // 0x1a3e8c: 0x0  nop
    ctx->pc = 0x1a3e8cu;
    // NOP
label_1a3e90:
    // 0x1a3e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a3e94:
    // 0x1a3e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3e98:
    // 0x1a3e98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e9c:
    // 0x1a3e9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3ea0:
    // 0x1a3ea0: 0xc068f8a  jal         func_1A3E28
label_1a3ea4:
    if (ctx->pc == 0x1A3EA4u) {
        ctx->pc = 0x1A3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EA0u;
        // 0x1a3ea4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EA8u;
        goto label_1a3ea8;
    }
    ctx->pc = 0x1A3EA0u;
    SET_GPR_U32(ctx, 31, 0x1A3EA8u);
    ctx->pc = 0x1A3EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EA0u;
    // 0x1a3ea4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3E28u;
    goto label_1a3e28;
    ctx->pc = 0x1A3EA8u;
label_1a3ea8:
    // 0x1a3ea8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a3eac:
    // 0x1a3eac: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1a3eacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_1a3eb0:
    // 0x1a3eb0: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a3eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
label_1a3eb4:
    // 0x1a3eb4: 0x34c6b430  ori         $a2, $a2, 0xB430
    ctx->pc = 0x1a3eb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46128);
label_1a3eb8:
    // 0x1a3eb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a3eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a3ebc:
    // 0x1a3ebc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a3ec0:
    // 0x1a3ec0: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x1a3ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
label_1a3ec4:
    // 0x1a3ec4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1a3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_1a3ec8:
    // 0x1a3ec8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a3ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1a3ecc:
    // 0x1a3ecc: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x1a3eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
label_1a3ed0:
    // 0x1a3ed0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1a3ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_1a3ed4:
    // 0x1a3ed4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a3ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a3ed8:
    // 0x1a3ed8: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x1a3ed8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
label_1a3edc:
    // 0x1a3edc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a3edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1a3ee0:
    // 0x1a3ee0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3ee4:
    // 0x1a3ee4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1a3ee8:
    // 0x1a3ee8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3eec:
    // 0x1a3eec: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a3eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a3ef0:
    // 0x1a3ef0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1a3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a3ef4:
    // 0x1a3ef4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1a3ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_1a3ef8:
    // 0x1a3ef8: 0x0  nop
    ctx->pc = 0x1a3ef8u;
    // NOP
label_1a3efc:
    // 0x1a3efc: 0x0  nop
    ctx->pc = 0x1a3efcu;
    // NOP
label_1a3f00:
    // 0x1a3f00: 0x0  nop
    ctx->pc = 0x1a3f00u;
    // NOP
label_1a3f04:
    // 0x1a3f04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1a3f08:
    if (ctx->pc == 0x1A3F08u) {
        ctx->pc = 0x1A3F0Cu;
        goto label_1a3f0c;
    }
    ctx->pc = 0x1A3F04u;
    {
        const bool branch_taken_0x1a3f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f04) {
            ctx->pc = 0x1A3EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3ef0;
        }
    }
    ctx->pc = 0x1A3F0Cu;
label_1a3f0c:
    // 0x1a3f0c: 0xc068f70  jal         func_1A3DC0
label_1a3f10:
    if (ctx->pc == 0x1A3F10u) {
        ctx->pc = 0x1A3F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F0Cu;
        // 0x1a3f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F14u;
        goto label_1a3f14;
    }
    ctx->pc = 0x1A3F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A3F14u);
    ctx->pc = 0x1A3F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F0Cu;
    // 0x1a3f10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DC0u;
    goto label_1a3dc0;
    ctx->pc = 0x1A3F14u;
label_1a3f14:
    // 0x1a3f14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a3f18:
    // 0x1a3f18: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1a3f18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_1a3f1c:
    // 0x1a3f1c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1a3f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
label_1a3f20:
    // 0x1a3f20: 0x34e7b020  ori         $a3, $a3, 0xB020
    ctx->pc = 0x1a3f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)45088);
label_1a3f24:
    // 0x1a3f24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a3f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a3f28:
    // 0x1a3f28: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1a3f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_1a3f2c:
    // 0x1a3f2c: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x1a3f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
label_1a3f30:
    // 0x1a3f30: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1a3f30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_1a3f34:
    // 0x1a3f34: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1a3f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1a3f38:
    // 0x1a3f38: 0x34c62020  ori         $a2, $a2, 0x2020
    ctx->pc = 0x1a3f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8224);
label_1a3f3c:
    // 0x1a3f3c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a3f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a3f40:
    // 0x1a3f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3f44:
    // 0x1a3f44: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a3f48:
    // 0x1a3f48: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1a3f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_1a3f4c:
    // 0x1a3f4c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1a3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_1a3f50:
    // 0x1a3f50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a3f54:
    // 0x1a3f54: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1a3f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1a3f58:
    // 0x1a3f58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a3f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a3f5c:
    // 0x1a3f5c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1a3f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1a3f60:
    // 0x1a3f60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3f64:
    // 0x1a3f64: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a3f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1a3f68:
    // 0x1a3f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3f6c:
    // 0x1a3f6c: 0x3e00008  jr          $ra
label_1a3f70:
    if (ctx->pc == 0x1A3F70u) {
        ctx->pc = 0x1A3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F6Cu;
        // 0x1a3f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F74u;
        goto label_1a3f74;
    }
    ctx->pc = 0x1A3F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F6Cu;
        // 0x1a3f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3F74u;
label_1a3f74:
    // 0x1a3f74: 0x0  nop
    ctx->pc = 0x1a3f74u;
    // NOP
label_1a3f78:
    // 0x1a3f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a3f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a3f7c:
    // 0x1a3f7c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a3f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a3f80:
    // 0x1a3f80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a3f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a3f84:
    // 0x1a3f84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a3f88:
    // 0x1a3f88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3f8c:
    // 0x1a3f8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a3f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a3f90:
    // 0x1a3f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f94:
    // 0x1a3f94: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1a3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a3f98:
    // 0x1a3f98: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a3f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a3f9c:
    // 0x1a3f9c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x1a3f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_1a3fa0:
    // 0x1a3fa0: 0x3053007f  andi        $s3, $v0, 0x7F
    ctx->pc = 0x1a3fa0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_1a3fa4:
    // 0x1a3fa4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1a3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_1a3fa8:
    // 0x1a3fa8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1a3fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1a3fac:
    // 0x1a3fac: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1a3facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_1a3fb0:
    // 0x1a3fb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a3fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3fb4:
    // 0x1a3fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a3fb8:
    // 0x1a3fb8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x1a3fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3fbc:
    // 0x1a3fbc: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1a3fbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a3fc0:
    // 0x1a3fc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1a3fc4:
    // 0x1a3fc4: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_1a3fc8:
    if (ctx->pc == 0x1A3FC8u) {
        ctx->pc = 0x1A3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FC4u;
        // 0x1a3fc8: 0xa28823  subu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FCCu;
        goto label_1a3fcc;
    }
    ctx->pc = 0x1A3FC4u;
    {
        const bool branch_taken_0x1a3fc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FC4u;
        // 0x1a3fc8: 0xa28823  subu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3fc4) {
            ctx->pc = 0x1A3FFCu;
            goto label_1a3ffc;
        }
    }
    ctx->pc = 0x1A3FCCu;
label_1a3fcc:
    // 0x1a3fcc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a3fd0:
    // 0x1a3fd0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a3fd4:
    if (ctx->pc == 0x1A3FD4u) {
        ctx->pc = 0x1A3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FD0u;
        // 0x1a3fd4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FD8u;
        goto label_1a3fd8;
    }
    ctx->pc = 0x1A3FD0u;
    {
        const bool branch_taken_0x1a3fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FD0u;
        // 0x1a3fd4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3fd0) {
            ctx->pc = 0x1A3FFCu;
            goto label_1a3ffc;
        }
    }
    ctx->pc = 0x1A3FD8u;
label_1a3fd8:
    // 0x1a3fd8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a3fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a3fdc:
    // 0x1a3fdc: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1a3fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
label_1a3fe0:
    // 0x1a3fe0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x1a3fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
label_1a3fe4:
    // 0x1a3fe4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1a3fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_1a3fe8:
    // 0x1a3fe8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a3fec:
    // 0x1a3fec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1a3ff0:
    // 0x1a3ff0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1a3ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a3ff4:
    // 0x1a3ff4: 0xc068f70  jal         func_1A3DC0
label_1a3ff8:
    if (ctx->pc == 0x1A3FF8u) {
        ctx->pc = 0x1A3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FF4u;
        // 0x1a3ff8: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FFCu;
        goto label_1a3ffc;
    }
    ctx->pc = 0x1A3FF4u;
    SET_GPR_U32(ctx, 31, 0x1A3FFCu);
    ctx->pc = 0x1A3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3FF4u;
    // 0x1a3ff8: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DC0u;
    goto label_1a3dc0;
    ctx->pc = 0x1A3FFCu;
label_1a3ffc:
    // 0x1a3ffc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a3ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a4000:
    // 0x1a4000: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a4000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a4004:
    // 0x1a4004: 0x0  nop
    ctx->pc = 0x1a4004u;
    // NOP
label_1a4008:
    // 0x1a4008: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a4008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a400c:
    // 0x1a400c: 0x0  nop
    ctx->pc = 0x1a400cu;
    // NOP
label_1a4010:
    // 0x1a4010: 0x0  nop
    ctx->pc = 0x1a4010u;
    // NOP
label_1a4014:
    // 0x1a4014: 0x0  nop
    ctx->pc = 0x1a4014u;
    // NOP
label_1a4018:
    // 0x1a4018: 0x0  nop
    ctx->pc = 0x1a4018u;
    // NOP
label_1a401c:
    // 0x1a401c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a4020:
    if (ctx->pc == 0x1A4020u) {
        ctx->pc = 0x1A4024u;
        goto label_1a4024;
    }
    ctx->pc = 0x1A401Cu;
    {
        const bool branch_taken_0x1a401c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a401c) {
            ctx->pc = 0x1A4008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4008;
        }
    }
    ctx->pc = 0x1A4024u;
label_1a4024:
    // 0x1a4024: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a4028:
    // 0x1a4028: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a402c:
    // 0x1a402c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1a4030:
    // 0x1a4030: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a4030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a4034:
    // 0x1a4034: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x1a4034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
label_1a4038:
    // 0x1a4038: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a4038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a403c:
    // 0x1a403c: 0x0  nop
    ctx->pc = 0x1a403cu;
    // NOP
label_1a4040:
    // 0x1a4040: 0x0  nop
    ctx->pc = 0x1a4040u;
    // NOP
label_1a4044:
    // 0x1a4044: 0x0  nop
    ctx->pc = 0x1a4044u;
    // NOP
label_1a4048:
    // 0x1a4048: 0x0  nop
    ctx->pc = 0x1a4048u;
    // NOP
label_1a404c:
    // 0x1a404c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a4050:
    if (ctx->pc == 0x1A4050u) {
        ctx->pc = 0x1A4054u;
        goto label_1a4054;
    }
    ctx->pc = 0x1A404Cu;
    {
        const bool branch_taken_0x1a404c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a404c) {
            ctx->pc = 0x1A4038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4038;
        }
    }
    ctx->pc = 0x1A4054u;
label_1a4054:
    // 0x1a4054: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_1a4058:
    if (ctx->pc == 0x1A4058u) {
        ctx->pc = 0x1A4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4054u;
        // 0x1a4058: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A405Cu;
        goto label_1a405c;
    }
    ctx->pc = 0x1A4054u;
    {
        const bool branch_taken_0x1a4054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4054u;
        // 0x1a4058: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4054) {
            ctx->pc = 0x1A40B0u;
            goto label_1a40b0;
        }
    }
    ctx->pc = 0x1A405Cu;
label_1a405c:
    // 0x1a405c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_1a4060:
    if (ctx->pc == 0x1A4060u) {
        ctx->pc = 0x1A4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A405Cu;
        // 0x1a4060: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4064u;
        goto label_1a4064;
    }
    ctx->pc = 0x1A405Cu;
    {
        const bool branch_taken_0x1a405c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A405Cu;
        // 0x1a4060: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a405c) {
            ctx->pc = 0x1A40B4u;
            goto label_1a40b4;
        }
    }
    ctx->pc = 0x1A4064u;
label_1a4064:
    // 0x1a4064: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a4068:
    // 0x1a4068: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a4068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a406c:
    // 0x1a406c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
label_1a4070:
    // 0x1a4070: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x1a4070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
label_1a4074:
    // 0x1a4074: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1a4074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1a4078:
    // 0x1a4078: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a407c:
    // 0x1a407c: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1a407cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
label_1a4080:
    // 0x1a4080: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a4080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a4084:
    // 0x1a4084: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a4084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4088:
    // 0x1a4088: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a4088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a408c:
    // 0x1a408c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a408cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a4090:
    // 0x1a4090: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x1a4090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_1a4094:
    // 0x1a4094: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a4094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4098:
    // 0x1a4098: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1a4098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a409c:
    // 0x1a409c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a409cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a40a0:
    // 0x1a40a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a40a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a40a4:
    // 0x1a40a4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x1a40a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_1a40a8:
    // 0x1a40a8: 0x8068f8a  j           func_1A3E28
label_1a40ac:
    if (ctx->pc == 0x1A40ACu) {
        ctx->pc = 0x1A40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40A8u;
        // 0x1a40ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40B0u;
        goto label_1a40b0;
    }
    ctx->pc = 0x1A40A8u;
    ctx->pc = 0x1A40ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A40A8u;
    // 0x1a40ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3E28u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1a3e28;
    ctx->pc = 0x1A40B0u;
label_1a40b0:
    // 0x1a40b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a40b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a40b4:
    // 0x1a40b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a40b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a40b8:
    // 0x1a40b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a40b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a40bc:
    // 0x1a40bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a40bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a40c0:
    // 0x1a40c0: 0x3e00008  jr          $ra
label_1a40c4:
    if (ctx->pc == 0x1A40C4u) {
        ctx->pc = 0x1A40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40C0u;
        // 0x1a40c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40C8u;
        goto label_1a40c8;
    }
    ctx->pc = 0x1A40C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40C0u;
        // 0x1a40c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A40C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A40C8u;
label_1a40c8:
    // 0x1a40c8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1a40cc:
    if (ctx->pc == 0x1A40CCu) {
        ctx->pc = 0x1A40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40C8u;
        // 0x1a40cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40D0u;
        goto label_1a40d0;
    }
    ctx->pc = 0x1A40C8u;
    {
        const bool branch_taken_0x1a40c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40C8u;
        // 0x1a40cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40c8) {
            ctx->pc = 0x1A40E4u;
            goto label_1a40e4;
        }
    }
    ctx->pc = 0x1A40D0u;
label_1a40d0:
    // 0x1a40d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a40d4:
    // 0x1a40d4: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_1a40d8:
    if (ctx->pc == 0x1A40D8u) {
        ctx->pc = 0x1A40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40D4u;
        // 0x1a40d8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A40DCu;
        goto label_1a40dc;
    }
    ctx->pc = 0x1A40D4u;
    {
        const bool branch_taken_0x1a40d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A40D4u;
        // 0x1a40d8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a40d4) {
            ctx->pc = 0x1A4114u;
            goto label_1a4114;
        }
    }
    ctx->pc = 0x1A40DCu;
label_1a40dc:
    // 0x1a40dc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a40e0:
    if (ctx->pc == 0x1A40E0u) {
        ctx->pc = 0x1A40E4u;
        goto label_1a40e4;
    }
    ctx->pc = 0x1A40DCu;
    {
        const bool branch_taken_0x1a40dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a40dc) {
            ctx->pc = 0x1A4128u;
            goto label_1a4128;
        }
    }
    ctx->pc = 0x1A40E4u;
label_1a40e4:
    // 0x1a40e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a40e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a40e8:
    // 0x1a40e8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a40e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a40ec:
    // 0x1a40ec: 0x0  nop
    ctx->pc = 0x1a40ecu;
    // NOP
label_1a40f0:
    // 0x1a40f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a40f4:
    // 0x1a40f4: 0x0  nop
    ctx->pc = 0x1a40f4u;
    // NOP
label_1a40f8:
    // 0x1a40f8: 0x0  nop
    ctx->pc = 0x1a40f8u;
    // NOP
label_1a40fc:
    // 0x1a40fc: 0x0  nop
    ctx->pc = 0x1a40fcu;
    // NOP
label_1a4100:
    // 0x1a4100: 0x0  nop
    ctx->pc = 0x1a4100u;
    // NOP
label_1a4104:
    // 0x1a4104: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a4108:
    if (ctx->pc == 0x1A4108u) {
        ctx->pc = 0x1A410Cu;
        goto label_1a410c;
    }
    ctx->pc = 0x1A4104u;
    {
        const bool branch_taken_0x1a4104 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a4104) {
            ctx->pc = 0x1A40F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a40f0;
        }
    }
    ctx->pc = 0x1A410Cu;
label_1a410c:
    // 0x1a410c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a4110:
    if (ctx->pc == 0x1A4110u) {
        ctx->pc = 0x1A4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A410Cu;
        // 0x1a4110: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4114u;
        goto label_1a4114;
    }
    ctx->pc = 0x1A410Cu;
    {
        const bool branch_taken_0x1a410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A410Cu;
        // 0x1a4110: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a410c) {
            ctx->pc = 0x1A4124u;
            goto label_1a4124;
        }
    }
    ctx->pc = 0x1A4114u;
label_1a4114:
    // 0x1a4114: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a4118:
    // 0x1a4118: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1a4118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_1a411c:
    // 0x1a411c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4120:
    // 0x1a4120: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1a4120u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1a4124:
    // 0x1a4124: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a4124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a4128:
    // 0x1a4128: 0x3e00008  jr          $ra
label_1a412c:
    if (ctx->pc == 0x1A412Cu) {
        ctx->pc = 0x1A4130u;
        goto label_1a4130;
    }
    ctx->pc = 0x1A4128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4130u;
label_1a4130:
    // 0x1a4130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4134:
    // 0x1a4134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4138:
    // 0x1a4138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a413c:
    // 0x1a413c: 0xc06b518  jal         func_1AD460
label_1a4140:
    if (ctx->pc == 0x1A4140u) {
        ctx->pc = 0x1A4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A413Cu;
        // 0x1a4140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4144u;
        goto label_1a4144;
    }
    ctx->pc = 0x1A413Cu;
    SET_GPR_U32(ctx, 31, 0x1A4144u);
    ctx->pc = 0x1A4140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A413Cu;
    // 0x1a4140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A4144u;
label_1a4144:
    // 0x1a4144: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1a4144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_1a4148:
    // 0x1a4148: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1a4148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_1a414c:
    // 0x1a414c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x1a414cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
label_1a4150:
    // 0x1a4150: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1a4150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_1a4154:
    // 0x1a4154: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a4154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a4158:
    // 0x1a4158: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x1a4158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
label_1a415c:
    // 0x1a415c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a415cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a4160:
    // 0x1a4160: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1a4160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
label_1a4164:
    // 0x1a4164: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1a4164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1a4168:
    // 0x1a4168: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x1a4168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
label_1a416c:
    // 0x1a416c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a416cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1a4170:
    // 0x1a4170: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1a4170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_1a4174:
    // 0x1a4174: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1a4174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1a4178:
    // 0x1a4178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a417c:
    // 0x1a417c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a417cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a4180:
    // 0x1a4180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4184:
    // 0x1a4184: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1a4184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1a4188:
    // 0x1a4188: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1a4188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1a418c:
    // 0x1a418c: 0x806b52a  j           func_1AD4A8
label_1a4190:
    if (ctx->pc == 0x1A4190u) {
        ctx->pc = 0x1A4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A418Cu;
        // 0x1a4190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4194u;
        goto label_1a4194;
    }
    ctx->pc = 0x1A418Cu;
    ctx->pc = 0x1A4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A418Cu;
    // 0x1a4190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A4194u;
label_1a4194:
    // 0x1a4194: 0x0  nop
    ctx->pc = 0x1a4194u;
    // NOP
label_1a4198:
    // 0x1a4198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a419c:
    // 0x1a419c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a41a0:
    // 0x1a41a0: 0xc06904c  jal         func_1A4130
label_1a41a4:
    if (ctx->pc == 0x1A41A4u) {
        ctx->pc = 0x1A41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41A0u;
        // 0x1a41a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41A8u;
        goto label_1a41a8;
    }
    ctx->pc = 0x1A41A0u;
    SET_GPR_U32(ctx, 31, 0x1A41A8u);
    ctx->pc = 0x1A41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A41A0u;
    // 0x1a41a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4130u;
    goto label_1a4130;
    ctx->pc = 0x1A41A8u;
label_1a41a8:
    // 0x1a41a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a41ac:
    // 0x1a41ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a41acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1a41b0:
    // 0x1a41b0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1a41b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_1a41b4:
    // 0x1a41b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a41b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a41b8:
    // 0x1a41b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a41bc:
    // 0x1a41bc: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1a41bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_1a41c0:
    // 0x1a41c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a41c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a41c4:
    // 0x1a41c4: 0x0  nop
    ctx->pc = 0x1a41c4u;
    // NOP
label_1a41c8:
    // 0x1a41c8: 0x0  nop
    ctx->pc = 0x1a41c8u;
    // NOP
label_1a41cc:
    // 0x1a41cc: 0x0  nop
    ctx->pc = 0x1a41ccu;
    // NOP
label_1a41d0:
    // 0x1a41d0: 0x0  nop
    ctx->pc = 0x1a41d0u;
    // NOP
label_1a41d4:
    // 0x1a41d4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a41d8:
    if (ctx->pc == 0x1A41D8u) {
        ctx->pc = 0x1A41DCu;
        goto label_1a41dc;
    }
    ctx->pc = 0x1A41D4u;
    {
        const bool branch_taken_0x1a41d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a41d4) {
            ctx->pc = 0x1A41C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a41c0;
        }
    }
    ctx->pc = 0x1A41DCu;
label_1a41dc:
    // 0x1a41dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a41e0:
    // 0x1a41e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a41e4:
    // 0x1a41e4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a41e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1a41e8:
    // 0x1a41e8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a41e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a41ec:
    // 0x1a41ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a41ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a41f0:
    // 0x1a41f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a41f4:
    // 0x1a41f4: 0x0  nop
    ctx->pc = 0x1a41f4u;
    // NOP
label_1a41f8:
    // 0x1a41f8: 0x0  nop
    ctx->pc = 0x1a41f8u;
    // NOP
label_1a41fc:
    // 0x1a41fc: 0x0  nop
    ctx->pc = 0x1a41fcu;
    // NOP
label_1a4200:
    // 0x1a4200: 0x0  nop
    ctx->pc = 0x1a4200u;
    // NOP
label_1a4204:
    // 0x1a4204: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a4208:
    if (ctx->pc == 0x1A4208u) {
        ctx->pc = 0x1A420Cu;
        goto label_1a420c;
    }
    ctx->pc = 0x1A4204u;
    {
        const bool branch_taken_0x1a4204 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a4204) {
            ctx->pc = 0x1A41F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a41f0;
        }
    }
    ctx->pc = 0x1A420Cu;
label_1a420c:
    // 0x1a420c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1a420cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1a4210:
    // 0x1a4210: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a4210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a4214:
    // 0x1a4214: 0x24a55ad0  addiu       $a1, $a1, 0x5AD0
    ctx->pc = 0x1a4214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23248));
label_1a4218:
    // 0x1a4218: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x1a4218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
label_1a421c:
    // 0x1a421c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1a421cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1a4220:
    // 0x1a4220: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1a4220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_1a4224:
    // 0x1a4224: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x1a4224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
label_1a4228:
    // 0x1a4228: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x1a4228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
label_1a422c:
    // 0x1a422c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a422cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1a4230:
    // 0x1a4230: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1a4230u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_1a4234:
    // 0x1a4234: 0x35082010  ori         $t0, $t0, 0x2010
    ctx->pc = 0x1a4234u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8208);
label_1a4238:
    // 0x1a4238: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x1a4238u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_1a423c:
    // 0x1a423c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a423cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1a4240:
    // 0x1a4240: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x1a4240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_1a4244:
    // 0x1a4244: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a4244u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1a4248:
    // 0x1a4248: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x1a4248u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_1a424c:
    // 0x1a424c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a424cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1a4250:
    // 0x1a4250: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x1a4250u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 64)));
label_1a4254:
    // 0x1a4254: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a4254u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1a4258:
    // 0x1a4258: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x1a4258u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 64)));
label_1a425c:
    // 0x1a425c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a425cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1a4260:
    // 0x1a4260: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x1a4260u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 64)));
label_1a4264:
    // 0x1a4264: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a4264u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1a4268:
    // 0x1a4268: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x1a4268u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 64)));
label_1a426c:
    // 0x1a426c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a426cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_1a4270:
    // 0x1a4270: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1a4270u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_1a4274:
    // 0x1a4274: 0x0  nop
    ctx->pc = 0x1a4274u;
    // NOP
label_1a4278:
    // 0x1a4278: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1a4278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1a427c:
    // 0x1a427c: 0x0  nop
    ctx->pc = 0x1a427cu;
    // NOP
label_1a4280:
    // 0x1a4280: 0x0  nop
    ctx->pc = 0x1a4280u;
    // NOP
label_1a4284:
    // 0x1a4284: 0x0  nop
    ctx->pc = 0x1a4284u;
    // NOP
label_1a4288:
    // 0x1a4288: 0x0  nop
    ctx->pc = 0x1a4288u;
    // NOP
label_1a428c:
    // 0x1a428c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a4290:
    if (ctx->pc == 0x1A4290u) {
        ctx->pc = 0x1A4294u;
        goto label_1a4294;
    }
    ctx->pc = 0x1A428Cu;
    {
        const bool branch_taken_0x1a428c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a428c) {
            ctx->pc = 0x1A4278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4278;
        }
    }
    ctx->pc = 0x1A4294u;
label_1a4294:
    // 0x1a4294: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a4298:
    // 0x1a4298: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x1a4298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
label_1a429c:
    // 0x1a429c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1a42a0:
    // 0x1a42a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a42a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a42a4:
    // 0x1a42a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a42a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a42a8:
    // 0x1a42a8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1a42a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_1a42ac:
    // 0x1a42ac: 0x0  nop
    ctx->pc = 0x1a42acu;
    // NOP
label_1a42b0:
    // 0x1a42b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a42b4:
    // 0x1a42b4: 0x0  nop
    ctx->pc = 0x1a42b4u;
    // NOP
    ctx->pc = 0x1a42b8u;
    return;
}

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


void FUN_0014eba0_part339(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f3c40u: goto label_1f3c40;
        case 0x1f3c44u: goto label_1f3c44;
        case 0x1f3c48u: goto label_1f3c48;
        case 0x1f3c4cu: goto label_1f3c4c;
        case 0x1f3c50u: goto label_1f3c50;
        case 0x1f3c54u: goto label_1f3c54;
        case 0x1f3c58u: goto label_1f3c58;
        case 0x1f3c5cu: goto label_1f3c5c;
        case 0x1f3c60u: goto label_1f3c60;
        case 0x1f3c64u: goto label_1f3c64;
        case 0x1f3c68u: goto label_1f3c68;
        case 0x1f3c6cu: goto label_1f3c6c;
        case 0x1f3c70u: goto label_1f3c70;
        case 0x1f3c74u: goto label_1f3c74;
        case 0x1f3c78u: goto label_1f3c78;
        case 0x1f3c7cu: goto label_1f3c7c;
        case 0x1f3c80u: goto label_1f3c80;
        case 0x1f3c84u: goto label_1f3c84;
        case 0x1f3c88u: goto label_1f3c88;
        case 0x1f3c8cu: goto label_1f3c8c;
        case 0x1f3c90u: goto label_1f3c90;
        case 0x1f3c94u: goto label_1f3c94;
        case 0x1f3c98u: goto label_1f3c98;
        case 0x1f3c9cu: goto label_1f3c9c;
        case 0x1f3ca0u: goto label_1f3ca0;
        case 0x1f3ca4u: goto label_1f3ca4;
        case 0x1f3ca8u: goto label_1f3ca8;
        case 0x1f3cacu: goto label_1f3cac;
        case 0x1f3cb0u: goto label_1f3cb0;
        case 0x1f3cb4u: goto label_1f3cb4;
        case 0x1f3cb8u: goto label_1f3cb8;
        case 0x1f3cbcu: goto label_1f3cbc;
        case 0x1f3cc0u: goto label_1f3cc0;
        case 0x1f3cc4u: goto label_1f3cc4;
        case 0x1f3cc8u: goto label_1f3cc8;
        case 0x1f3cccu: goto label_1f3ccc;
        case 0x1f3cd0u: goto label_1f3cd0;
        case 0x1f3cd4u: goto label_1f3cd4;
        case 0x1f3cd8u: goto label_1f3cd8;
        case 0x1f3cdcu: goto label_1f3cdc;
        case 0x1f3ce0u: goto label_1f3ce0;
        case 0x1f3ce4u: goto label_1f3ce4;
        case 0x1f3ce8u: goto label_1f3ce8;
        case 0x1f3cecu: goto label_1f3cec;
        case 0x1f3cf0u: goto label_1f3cf0;
        case 0x1f3cf4u: goto label_1f3cf4;
        case 0x1f3cf8u: goto label_1f3cf8;
        case 0x1f3cfcu: goto label_1f3cfc;
        case 0x1f3d00u: goto label_1f3d00;
        case 0x1f3d04u: goto label_1f3d04;
        case 0x1f3d08u: goto label_1f3d08;
        case 0x1f3d0cu: goto label_1f3d0c;
        case 0x1f3d10u: goto label_1f3d10;
        case 0x1f3d14u: goto label_1f3d14;
        case 0x1f3d18u: goto label_1f3d18;
        case 0x1f3d1cu: goto label_1f3d1c;
        case 0x1f3d20u: goto label_1f3d20;
        case 0x1f3d24u: goto label_1f3d24;
        case 0x1f3d28u: goto label_1f3d28;
        case 0x1f3d2cu: goto label_1f3d2c;
        case 0x1f3d30u: goto label_1f3d30;
        case 0x1f3d34u: goto label_1f3d34;
        case 0x1f3d38u: goto label_1f3d38;
        case 0x1f3d3cu: goto label_1f3d3c;
        case 0x1f3d40u: goto label_1f3d40;
        case 0x1f3d44u: goto label_1f3d44;
        case 0x1f3d48u: goto label_1f3d48;
        case 0x1f3d4cu: goto label_1f3d4c;
        case 0x1f3d50u: goto label_1f3d50;
        case 0x1f3d54u: goto label_1f3d54;
        case 0x1f3d58u: goto label_1f3d58;
        case 0x1f3d5cu: goto label_1f3d5c;
        case 0x1f3d60u: goto label_1f3d60;
        case 0x1f3d64u: goto label_1f3d64;
        case 0x1f3d68u: goto label_1f3d68;
        case 0x1f3d6cu: goto label_1f3d6c;
        case 0x1f3d70u: goto label_1f3d70;
        case 0x1f3d74u: goto label_1f3d74;
        case 0x1f3d78u: goto label_1f3d78;
        case 0x1f3d7cu: goto label_1f3d7c;
        case 0x1f3d80u: goto label_1f3d80;
        case 0x1f3d84u: goto label_1f3d84;
        case 0x1f3d88u: goto label_1f3d88;
        case 0x1f3d8cu: goto label_1f3d8c;
        case 0x1f3d90u: goto label_1f3d90;
        case 0x1f3d94u: goto label_1f3d94;
        case 0x1f3d98u: goto label_1f3d98;
        case 0x1f3d9cu: goto label_1f3d9c;
        case 0x1f3da0u: goto label_1f3da0;
        case 0x1f3da4u: goto label_1f3da4;
        case 0x1f3da8u: goto label_1f3da8;
        case 0x1f3dacu: goto label_1f3dac;
        case 0x1f3db0u: goto label_1f3db0;
        case 0x1f3db4u: goto label_1f3db4;
        case 0x1f3db8u: goto label_1f3db8;
        case 0x1f3dbcu: goto label_1f3dbc;
        case 0x1f3dc0u: goto label_1f3dc0;
        case 0x1f3dc4u: goto label_1f3dc4;
        case 0x1f3dc8u: goto label_1f3dc8;
        case 0x1f3dccu: goto label_1f3dcc;
        case 0x1f3dd0u: goto label_1f3dd0;
        case 0x1f3dd4u: goto label_1f3dd4;
        case 0x1f3dd8u: goto label_1f3dd8;
        case 0x1f3ddcu: goto label_1f3ddc;
        case 0x1f3de0u: goto label_1f3de0;
        case 0x1f3de4u: goto label_1f3de4;
        case 0x1f3de8u: goto label_1f3de8;
        case 0x1f3decu: goto label_1f3dec;
        case 0x1f3df0u: goto label_1f3df0;
        case 0x1f3df4u: goto label_1f3df4;
        case 0x1f3df8u: goto label_1f3df8;
        case 0x1f3dfcu: goto label_1f3dfc;
        case 0x1f3e00u: goto label_1f3e00;
        case 0x1f3e04u: goto label_1f3e04;
        case 0x1f3e08u: goto label_1f3e08;
        case 0x1f3e0cu: goto label_1f3e0c;
        case 0x1f3e10u: goto label_1f3e10;
        case 0x1f3e14u: goto label_1f3e14;
        case 0x1f3e18u: goto label_1f3e18;
        case 0x1f3e1cu: goto label_1f3e1c;
        case 0x1f3e20u: goto label_1f3e20;
        case 0x1f3e24u: goto label_1f3e24;
        case 0x1f3e28u: goto label_1f3e28;
        case 0x1f3e2cu: goto label_1f3e2c;
        case 0x1f3e30u: goto label_1f3e30;
        case 0x1f3e34u: goto label_1f3e34;
        case 0x1f3e38u: goto label_1f3e38;
        case 0x1f3e3cu: goto label_1f3e3c;
        case 0x1f3e40u: goto label_1f3e40;
        case 0x1f3e44u: goto label_1f3e44;
        case 0x1f3e48u: goto label_1f3e48;
        case 0x1f3e4cu: goto label_1f3e4c;
        case 0x1f3e50u: goto label_1f3e50;
        case 0x1f3e54u: goto label_1f3e54;
        case 0x1f3e58u: goto label_1f3e58;
        case 0x1f3e5cu: goto label_1f3e5c;
        case 0x1f3e60u: goto label_1f3e60;
        case 0x1f3e64u: goto label_1f3e64;
        case 0x1f3e68u: goto label_1f3e68;
        case 0x1f3e6cu: goto label_1f3e6c;
        case 0x1f3e70u: goto label_1f3e70;
        case 0x1f3e74u: goto label_1f3e74;
        case 0x1f3e78u: goto label_1f3e78;
        case 0x1f3e7cu: goto label_1f3e7c;
        case 0x1f3e80u: goto label_1f3e80;
        case 0x1f3e84u: goto label_1f3e84;
        case 0x1f3e88u: goto label_1f3e88;
        case 0x1f3e8cu: goto label_1f3e8c;
        case 0x1f3e90u: goto label_1f3e90;
        case 0x1f3e94u: goto label_1f3e94;
        case 0x1f3e98u: goto label_1f3e98;
        case 0x1f3e9cu: goto label_1f3e9c;
        case 0x1f3ea0u: goto label_1f3ea0;
        case 0x1f3ea4u: goto label_1f3ea4;
        case 0x1f3ea8u: goto label_1f3ea8;
        case 0x1f3eacu: goto label_1f3eac;
        case 0x1f3eb0u: goto label_1f3eb0;
        case 0x1f3eb4u: goto label_1f3eb4;
        case 0x1f3eb8u: goto label_1f3eb8;
        case 0x1f3ebcu: goto label_1f3ebc;
        case 0x1f3ec0u: goto label_1f3ec0;
        case 0x1f3ec4u: goto label_1f3ec4;
        case 0x1f3ec8u: goto label_1f3ec8;
        case 0x1f3eccu: goto label_1f3ecc;
        case 0x1f3ed0u: goto label_1f3ed0;
        case 0x1f3ed4u: goto label_1f3ed4;
        case 0x1f3ed8u: goto label_1f3ed8;
        case 0x1f3edcu: goto label_1f3edc;
        case 0x1f3ee0u: goto label_1f3ee0;
        case 0x1f3ee4u: goto label_1f3ee4;
        case 0x1f3ee8u: goto label_1f3ee8;
        case 0x1f3eecu: goto label_1f3eec;
        case 0x1f3ef0u: goto label_1f3ef0;
        case 0x1f3ef4u: goto label_1f3ef4;
        case 0x1f3ef8u: goto label_1f3ef8;
        case 0x1f3efcu: goto label_1f3efc;
        case 0x1f3f00u: goto label_1f3f00;
        case 0x1f3f04u: goto label_1f3f04;
        case 0x1f3f08u: goto label_1f3f08;
        case 0x1f3f0cu: goto label_1f3f0c;
        case 0x1f3f10u: goto label_1f3f10;
        case 0x1f3f14u: goto label_1f3f14;
        case 0x1f3f18u: goto label_1f3f18;
        case 0x1f3f1cu: goto label_1f3f1c;
        case 0x1f3f20u: goto label_1f3f20;
        case 0x1f3f24u: goto label_1f3f24;
        case 0x1f3f28u: goto label_1f3f28;
        case 0x1f3f2cu: goto label_1f3f2c;
        case 0x1f3f30u: goto label_1f3f30;
        case 0x1f3f34u: goto label_1f3f34;
        case 0x1f3f38u: goto label_1f3f38;
        case 0x1f3f3cu: goto label_1f3f3c;
        case 0x1f3f40u: goto label_1f3f40;
        case 0x1f3f44u: goto label_1f3f44;
        case 0x1f3f48u: goto label_1f3f48;
        case 0x1f3f4cu: goto label_1f3f4c;
        case 0x1f3f50u: goto label_1f3f50;
        case 0x1f3f54u: goto label_1f3f54;
        case 0x1f3f58u: goto label_1f3f58;
        case 0x1f3f5cu: goto label_1f3f5c;
        case 0x1f3f60u: goto label_1f3f60;
        case 0x1f3f64u: goto label_1f3f64;
        case 0x1f3f68u: goto label_1f3f68;
        case 0x1f3f6cu: goto label_1f3f6c;
        case 0x1f3f70u: goto label_1f3f70;
        case 0x1f3f74u: goto label_1f3f74;
        case 0x1f3f78u: goto label_1f3f78;
        case 0x1f3f7cu: goto label_1f3f7c;
        case 0x1f3f80u: goto label_1f3f80;
        case 0x1f3f84u: goto label_1f3f84;
        case 0x1f3f88u: goto label_1f3f88;
        case 0x1f3f8cu: goto label_1f3f8c;
        case 0x1f3f90u: goto label_1f3f90;
        case 0x1f3f94u: goto label_1f3f94;
        case 0x1f3f98u: goto label_1f3f98;
        case 0x1f3f9cu: goto label_1f3f9c;
        case 0x1f3fa0u: goto label_1f3fa0;
        case 0x1f3fa4u: goto label_1f3fa4;
        case 0x1f3fa8u: goto label_1f3fa8;
        case 0x1f3facu: goto label_1f3fac;
        case 0x1f3fb0u: goto label_1f3fb0;
        case 0x1f3fb4u: goto label_1f3fb4;
        case 0x1f3fb8u: goto label_1f3fb8;
        case 0x1f3fbcu: goto label_1f3fbc;
        case 0x1f3fc0u: goto label_1f3fc0;
        case 0x1f3fc4u: goto label_1f3fc4;
        case 0x1f3fc8u: goto label_1f3fc8;
        case 0x1f3fccu: goto label_1f3fcc;
        case 0x1f3fd0u: goto label_1f3fd0;
        case 0x1f3fd4u: goto label_1f3fd4;
        case 0x1f3fd8u: goto label_1f3fd8;
        case 0x1f3fdcu: goto label_1f3fdc;
        case 0x1f3fe0u: goto label_1f3fe0;
        case 0x1f3fe4u: goto label_1f3fe4;
        case 0x1f3fe8u: goto label_1f3fe8;
        case 0x1f3fecu: goto label_1f3fec;
        case 0x1f3ff0u: goto label_1f3ff0;
        case 0x1f3ff4u: goto label_1f3ff4;
        case 0x1f3ff8u: goto label_1f3ff8;
        case 0x1f3ffcu: goto label_1f3ffc;
        case 0x1f4000u: goto label_1f4000;
        case 0x1f4004u: goto label_1f4004;
        case 0x1f4008u: goto label_1f4008;
        case 0x1f400cu: goto label_1f400c;
        case 0x1f4010u: goto label_1f4010;
        case 0x1f4014u: goto label_1f4014;
        case 0x1f4018u: goto label_1f4018;
        case 0x1f401cu: goto label_1f401c;
        case 0x1f4020u: goto label_1f4020;
        case 0x1f4024u: goto label_1f4024;
        case 0x1f4028u: goto label_1f4028;
        case 0x1f402cu: goto label_1f402c;
        case 0x1f4030u: goto label_1f4030;
        case 0x1f4034u: goto label_1f4034;
        case 0x1f4038u: goto label_1f4038;
        case 0x1f403cu: goto label_1f403c;
        case 0x1f4040u: goto label_1f4040;
        case 0x1f4044u: goto label_1f4044;
        case 0x1f4048u: goto label_1f4048;
        case 0x1f404cu: goto label_1f404c;
        case 0x1f4050u: goto label_1f4050;
        case 0x1f4054u: goto label_1f4054;
        case 0x1f4058u: goto label_1f4058;
        case 0x1f405cu: goto label_1f405c;
        case 0x1f4060u: goto label_1f4060;
        case 0x1f4064u: goto label_1f4064;
        case 0x1f4068u: goto label_1f4068;
        case 0x1f406cu: goto label_1f406c;
        case 0x1f4070u: goto label_1f4070;
        case 0x1f4074u: goto label_1f4074;
        case 0x1f4078u: goto label_1f4078;
        case 0x1f407cu: goto label_1f407c;
        case 0x1f4080u: goto label_1f4080;
        case 0x1f4084u: goto label_1f4084;
        case 0x1f4088u: goto label_1f4088;
        case 0x1f408cu: goto label_1f408c;
        case 0x1f4090u: goto label_1f4090;
        case 0x1f4094u: goto label_1f4094;
        case 0x1f4098u: goto label_1f4098;
        case 0x1f409cu: goto label_1f409c;
        case 0x1f40a0u: goto label_1f40a0;
        case 0x1f40a4u: goto label_1f40a4;
        case 0x1f40a8u: goto label_1f40a8;
        case 0x1f40acu: goto label_1f40ac;
        case 0x1f40b0u: goto label_1f40b0;
        case 0x1f40b4u: goto label_1f40b4;
        case 0x1f40b8u: goto label_1f40b8;
        case 0x1f40bcu: goto label_1f40bc;
        case 0x1f40c0u: goto label_1f40c0;
        case 0x1f40c4u: goto label_1f40c4;
        case 0x1f40c8u: goto label_1f40c8;
        case 0x1f40ccu: goto label_1f40cc;
        case 0x1f40d0u: goto label_1f40d0;
        case 0x1f40d4u: goto label_1f40d4;
        case 0x1f40d8u: goto label_1f40d8;
        case 0x1f40dcu: goto label_1f40dc;
        case 0x1f40e0u: goto label_1f40e0;
        case 0x1f40e4u: goto label_1f40e4;
        case 0x1f40e8u: goto label_1f40e8;
        case 0x1f40ecu: goto label_1f40ec;
        case 0x1f40f0u: goto label_1f40f0;
        case 0x1f40f4u: goto label_1f40f4;
        case 0x1f40f8u: goto label_1f40f8;
        case 0x1f40fcu: goto label_1f40fc;
        case 0x1f4100u: goto label_1f4100;
        case 0x1f4104u: goto label_1f4104;
        case 0x1f4108u: goto label_1f4108;
        case 0x1f410cu: goto label_1f410c;
        case 0x1f4110u: goto label_1f4110;
        case 0x1f4114u: goto label_1f4114;
        case 0x1f4118u: goto label_1f4118;
        case 0x1f411cu: goto label_1f411c;
        case 0x1f4120u: goto label_1f4120;
        case 0x1f4124u: goto label_1f4124;
        case 0x1f4128u: goto label_1f4128;
        case 0x1f412cu: goto label_1f412c;
        case 0x1f4130u: goto label_1f4130;
        case 0x1f4134u: goto label_1f4134;
        case 0x1f4138u: goto label_1f4138;
        case 0x1f413cu: goto label_1f413c;
        case 0x1f4140u: goto label_1f4140;
        case 0x1f4144u: goto label_1f4144;
        case 0x1f4148u: goto label_1f4148;
        case 0x1f414cu: goto label_1f414c;
        case 0x1f4150u: goto label_1f4150;
        case 0x1f4154u: goto label_1f4154;
        case 0x1f4158u: goto label_1f4158;
        case 0x1f415cu: goto label_1f415c;
        case 0x1f4160u: goto label_1f4160;
        case 0x1f4164u: goto label_1f4164;
        case 0x1f4168u: goto label_1f4168;
        case 0x1f416cu: goto label_1f416c;
        case 0x1f4170u: goto label_1f4170;
        case 0x1f4174u: goto label_1f4174;
        case 0x1f4178u: goto label_1f4178;
        case 0x1f417cu: goto label_1f417c;
        case 0x1f4180u: goto label_1f4180;
        case 0x1f4184u: goto label_1f4184;
        case 0x1f4188u: goto label_1f4188;
        case 0x1f418cu: goto label_1f418c;
        case 0x1f4190u: goto label_1f4190;
        case 0x1f4194u: goto label_1f4194;
        case 0x1f4198u: goto label_1f4198;
        case 0x1f419cu: goto label_1f419c;
        case 0x1f41a0u: goto label_1f41a0;
        case 0x1f41a4u: goto label_1f41a4;
        case 0x1f41a8u: goto label_1f41a8;
        case 0x1f41acu: goto label_1f41ac;
        case 0x1f41b0u: goto label_1f41b0;
        case 0x1f41b4u: goto label_1f41b4;
        case 0x1f41b8u: goto label_1f41b8;
        case 0x1f41bcu: goto label_1f41bc;
        case 0x1f41c0u: goto label_1f41c0;
        case 0x1f41c4u: goto label_1f41c4;
        case 0x1f41c8u: goto label_1f41c8;
        case 0x1f41ccu: goto label_1f41cc;
        case 0x1f41d0u: goto label_1f41d0;
        case 0x1f41d4u: goto label_1f41d4;
        case 0x1f41d8u: goto label_1f41d8;
        case 0x1f41dcu: goto label_1f41dc;
        case 0x1f41e0u: goto label_1f41e0;
        case 0x1f41e4u: goto label_1f41e4;
        case 0x1f41e8u: goto label_1f41e8;
        case 0x1f41ecu: goto label_1f41ec;
        case 0x1f41f0u: goto label_1f41f0;
        case 0x1f41f4u: goto label_1f41f4;
        case 0x1f41f8u: goto label_1f41f8;
        case 0x1f41fcu: goto label_1f41fc;
        case 0x1f4200u: goto label_1f4200;
        case 0x1f4204u: goto label_1f4204;
        case 0x1f4208u: goto label_1f4208;
        case 0x1f420cu: goto label_1f420c;
        case 0x1f4210u: goto label_1f4210;
        case 0x1f4214u: goto label_1f4214;
        case 0x1f4218u: goto label_1f4218;
        case 0x1f421cu: goto label_1f421c;
        case 0x1f4220u: goto label_1f4220;
        case 0x1f4224u: goto label_1f4224;
        case 0x1f4228u: goto label_1f4228;
        case 0x1f422cu: goto label_1f422c;
        case 0x1f4230u: goto label_1f4230;
        case 0x1f4234u: goto label_1f4234;
        case 0x1f4238u: goto label_1f4238;
        case 0x1f423cu: goto label_1f423c;
        case 0x1f4240u: goto label_1f4240;
        case 0x1f4244u: goto label_1f4244;
        case 0x1f4248u: goto label_1f4248;
        case 0x1f424cu: goto label_1f424c;
        case 0x1f4250u: goto label_1f4250;
        case 0x1f4254u: goto label_1f4254;
        case 0x1f4258u: goto label_1f4258;
        case 0x1f425cu: goto label_1f425c;
        case 0x1f4260u: goto label_1f4260;
        case 0x1f4264u: goto label_1f4264;
        case 0x1f4268u: goto label_1f4268;
        case 0x1f426cu: goto label_1f426c;
        case 0x1f4270u: goto label_1f4270;
        case 0x1f4274u: goto label_1f4274;
        case 0x1f4278u: goto label_1f4278;
        case 0x1f427cu: goto label_1f427c;
        case 0x1f4280u: goto label_1f4280;
        case 0x1f4284u: goto label_1f4284;
        case 0x1f4288u: goto label_1f4288;
        case 0x1f428cu: goto label_1f428c;
        case 0x1f4290u: goto label_1f4290;
        case 0x1f4294u: goto label_1f4294;
        case 0x1f4298u: goto label_1f4298;
        case 0x1f429cu: goto label_1f429c;
        case 0x1f42a0u: goto label_1f42a0;
        case 0x1f42a4u: goto label_1f42a4;
        case 0x1f42a8u: goto label_1f42a8;
        case 0x1f42acu: goto label_1f42ac;
        case 0x1f42b0u: goto label_1f42b0;
        case 0x1f42b4u: goto label_1f42b4;
        case 0x1f42b8u: goto label_1f42b8;
        case 0x1f42bcu: goto label_1f42bc;
        case 0x1f42c0u: goto label_1f42c0;
        case 0x1f42c4u: goto label_1f42c4;
        case 0x1f42c8u: goto label_1f42c8;
        case 0x1f42ccu: goto label_1f42cc;
        case 0x1f42d0u: goto label_1f42d0;
        case 0x1f42d4u: goto label_1f42d4;
        case 0x1f42d8u: goto label_1f42d8;
        case 0x1f42dcu: goto label_1f42dc;
        case 0x1f42e0u: goto label_1f42e0;
        case 0x1f42e4u: goto label_1f42e4;
        case 0x1f42e8u: goto label_1f42e8;
        case 0x1f42ecu: goto label_1f42ec;
        case 0x1f42f0u: goto label_1f42f0;
        case 0x1f42f4u: goto label_1f42f4;
        case 0x1f42f8u: goto label_1f42f8;
        case 0x1f42fcu: goto label_1f42fc;
        case 0x1f4300u: goto label_1f4300;
        case 0x1f4304u: goto label_1f4304;
        case 0x1f4308u: goto label_1f4308;
        case 0x1f430cu: goto label_1f430c;
        case 0x1f4310u: goto label_1f4310;
        case 0x1f4314u: goto label_1f4314;
        case 0x1f4318u: goto label_1f4318;
        case 0x1f431cu: goto label_1f431c;
        case 0x1f4320u: goto label_1f4320;
        case 0x1f4324u: goto label_1f4324;
        case 0x1f4328u: goto label_1f4328;
        case 0x1f432cu: goto label_1f432c;
        case 0x1f4330u: goto label_1f4330;
        case 0x1f4334u: goto label_1f4334;
        case 0x1f4338u: goto label_1f4338;
        case 0x1f433cu: goto label_1f433c;
        case 0x1f4340u: goto label_1f4340;
        case 0x1f4344u: goto label_1f4344;
        case 0x1f4348u: goto label_1f4348;
        case 0x1f434cu: goto label_1f434c;
        case 0x1f4350u: goto label_1f4350;
        case 0x1f4354u: goto label_1f4354;
        case 0x1f4358u: goto label_1f4358;
        case 0x1f435cu: goto label_1f435c;
        case 0x1f4360u: goto label_1f4360;
        case 0x1f4364u: goto label_1f4364;
        case 0x1f4368u: goto label_1f4368;
        case 0x1f436cu: goto label_1f436c;
        case 0x1f4370u: goto label_1f4370;
        case 0x1f4374u: goto label_1f4374;
        case 0x1f4378u: goto label_1f4378;
        case 0x1f437cu: goto label_1f437c;
        case 0x1f4380u: goto label_1f4380;
        case 0x1f4384u: goto label_1f4384;
        case 0x1f4388u: goto label_1f4388;
        case 0x1f438cu: goto label_1f438c;
        case 0x1f4390u: goto label_1f4390;
        case 0x1f4394u: goto label_1f4394;
        case 0x1f4398u: goto label_1f4398;
        case 0x1f439cu: goto label_1f439c;
        case 0x1f43a0u: goto label_1f43a0;
        case 0x1f43a4u: goto label_1f43a4;
        case 0x1f43a8u: goto label_1f43a8;
        case 0x1f43acu: goto label_1f43ac;
        case 0x1f43b0u: goto label_1f43b0;
        case 0x1f43b4u: goto label_1f43b4;
        case 0x1f43b8u: goto label_1f43b8;
        case 0x1f43bcu: goto label_1f43bc;
        case 0x1f43c0u: goto label_1f43c0;
        case 0x1f43c4u: goto label_1f43c4;
        case 0x1f43c8u: goto label_1f43c8;
        case 0x1f43ccu: goto label_1f43cc;
        case 0x1f43d0u: goto label_1f43d0;
        case 0x1f43d4u: goto label_1f43d4;
        case 0x1f43d8u: goto label_1f43d8;
        case 0x1f43dcu: goto label_1f43dc;
        case 0x1f43e0u: goto label_1f43e0;
        case 0x1f43e4u: goto label_1f43e4;
        case 0x1f43e8u: goto label_1f43e8;
        case 0x1f43ecu: goto label_1f43ec;
        case 0x1f43f0u: goto label_1f43f0;
        case 0x1f43f4u: goto label_1f43f4;
        case 0x1f43f8u: goto label_1f43f8;
        case 0x1f43fcu: goto label_1f43fc;
        case 0x1f4400u: goto label_1f4400;
        case 0x1f4404u: goto label_1f4404;
        case 0x1f4408u: goto label_1f4408;
        case 0x1f440cu: goto label_1f440c;
        default: return;
    }

label_1f3c40:
    // 0x1f3c40: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f3c40u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f3c44:
    // 0x1f3c44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3c48:
    // 0x1f3c48: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f3c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f3c4c:
    // 0x1f3c4c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3c50:
    // 0x1f3c50: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f3c50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3c54:
    // 0x1f3c54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3c58:
    // 0x1f3c58: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f3c58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f3c5c:
    // 0x1f3c5c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3c60:
    // 0x1f3c60: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3c64:
    // 0x1f3c64: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3c68:
    // 0x1f3c68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3c6c:
    // 0x1f3c6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3c70:
    // 0x1f3c70: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3c70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3c74:
    // 0x1f3c74: 0xc08f20e  jal         func_23C838
label_1f3c78:
    if (ctx->pc == 0x1F3C78u) {
        ctx->pc = 0x1F3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C74u;
        // 0x1f3c78: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C7Cu;
        goto label_1f3c7c;
    }
    ctx->pc = 0x1F3C74u;
    SET_GPR_U32(ctx, 31, 0x1F3C7Cu);
    ctx->pc = 0x1F3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C74u;
    // 0x1f3c78: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3C7Cu;
label_1f3c7c:
    // 0x1f3c7c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3c80:
    // 0x1f3c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3c84:
    // 0x1f3c84: 0xc08f20e  jal         func_23C838
label_1f3c88:
    if (ctx->pc == 0x1F3C88u) {
        ctx->pc = 0x1F3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C84u;
        // 0x1f3c88: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3C8Cu;
        goto label_1f3c8c;
    }
    ctx->pc = 0x1F3C84u;
    SET_GPR_U32(ctx, 31, 0x1F3C8Cu);
    ctx->pc = 0x1F3C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C84u;
    // 0x1f3c88: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3C8Cu;
label_1f3c8c:
    // 0x1f3c8c: 0x10000438  b           . + 4 + (0x438 << 2)
label_1f3c90:
    if (ctx->pc == 0x1F3C90u) {
        ctx->pc = 0x1F3C94u;
        goto label_1f3c94;
    }
    ctx->pc = 0x1F3C8Cu;
    {
        const bool branch_taken_0x1f3c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3c8c) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3C94u;
label_1f3c94:
    // 0x1f3c94: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1f3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_1f3c98:
    // 0x1f3c98: 0x16830049  bne         $s4, $v1, . + 4 + (0x49 << 2)
label_1f3c9c:
    if (ctx->pc == 0x1F3C9Cu) {
        ctx->pc = 0x1F3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C98u;
        // 0x1f3c9c: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3CA0u;
        goto label_1f3ca0;
    }
    ctx->pc = 0x1F3C98u;
    {
        const bool branch_taken_0x1f3c98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C98u;
        // 0x1f3c9c: 0x2403003f  addiu       $v1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c98) {
            ctx->pc = 0x1F3DC0u;
            goto label_1f3dc0;
        }
    }
    ctx->pc = 0x1F3CA0u;
label_1f3ca0:
    // 0x1f3ca0: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f3ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f3ca4:
    // 0x1f3ca4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f3ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f3ca8:
    // 0x1f3ca8: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f3ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f3cac:
    // 0x1f3cac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f3cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3cb0:
    // 0x1f3cb0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3cb4:
    // 0x1f3cb4: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f3cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f3cb8:
    // 0x1f3cb8: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f3cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f3cbc:
    // 0x1f3cbc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3cc0:
    // 0x1f3cc0: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f3cc0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f3cc4:
    // 0x1f3cc4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3cc8:
    // 0x1f3cc8: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3ccc:
    // 0x1f3ccc: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f3cccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f3cd0:
    // 0x1f3cd0: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f3cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f3cd4:
    // 0x1f3cd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3cd8:
    // 0x1f3cd8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f3cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f3cdc:
    // 0x1f3cdc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3ce0:
    // 0x1f3ce0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f3ce0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3ce4:
    // 0x1f3ce4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3ce8:
    // 0x1f3ce8: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f3ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f3cec:
    // 0x1f3cec: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3cf0:
    // 0x1f3cf0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3cf4:
    // 0x1f3cf4: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3cf8:
    // 0x1f3cf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3cfc:
    // 0x1f3cfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3d00:
    // 0x1f3d00: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3d04:
    // 0x1f3d04: 0xc08f20e  jal         func_23C838
label_1f3d08:
    if (ctx->pc == 0x1F3D08u) {
        ctx->pc = 0x1F3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D04u;
        // 0x1f3d08: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D0Cu;
        goto label_1f3d0c;
    }
    ctx->pc = 0x1F3D04u;
    SET_GPR_U32(ctx, 31, 0x1F3D0Cu);
    ctx->pc = 0x1F3D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D04u;
    // 0x1f3d08: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3D0Cu;
label_1f3d0c:
    // 0x1f3d0c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3d10:
    // 0x1f3d10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f3d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3d14:
    // 0x1f3d14: 0x8c297fd0  lw          $t1, 0x7FD0($at)
    ctx->pc = 0x1f3d14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f3d18:
    // 0x1f3d18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f3d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d1c:
    // 0x1f3d1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f3d1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3d20:
    // 0x1f3d20: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3d24:
    // 0x1f3d24: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1f3d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1f3d28:
    // 0x1f3d28: 0x24633b80  addiu       $v1, $v1, 0x3B80
    ctx->pc = 0x1f3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
label_1f3d2c:
    // 0x1f3d2c: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1f3d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1f3d30:
    // 0x1f3d30: 0x0  nop
    ctx->pc = 0x1f3d30u;
    // NOP
label_1f3d34:
    // 0x1f3d34: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x1f3d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1f3d38:
    // 0x1f3d38: 0x9082367c  lbu         $v0, 0x367C($a0)
    ctx->pc = 0x1f3d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13948)));
label_1f3d3c:
    // 0x1f3d3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f3d40:
    if (ctx->pc == 0x1F3D40u) {
        ctx->pc = 0x1F3D44u;
        goto label_1f3d44;
    }
    ctx->pc = 0x1F3D3Cu;
    {
        const bool branch_taken_0x1f3d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d3c) {
            ctx->pc = 0x1F3D74u;
            goto label_1f3d74;
        }
    }
    ctx->pc = 0x1F3D44u;
label_1f3d44:
    // 0x1f3d44: 0x8c823674  lw          $v0, 0x3674($a0)
    ctx->pc = 0x1f3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13940)));
label_1f3d48:
    // 0x1f3d48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f3d4c:
    if (ctx->pc == 0x1F3D4Cu) {
        ctx->pc = 0x1F3D50u;
        goto label_1f3d50;
    }
    ctx->pc = 0x1F3D48u;
    {
        const bool branch_taken_0x1f3d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d48) {
            ctx->pc = 0x1F3D74u;
            goto label_1f3d74;
        }
    }
    ctx->pc = 0x1F3D50u;
label_1f3d50:
    // 0x1f3d50: 0x8c843670  lw          $a0, 0x3670($a0)
    ctx->pc = 0x1f3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13936)));
label_1f3d54:
    // 0x1f3d54: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1f3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1f3d58:
    // 0x1f3d58: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f3d5c:
    // 0x1f3d5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3d60:
    // 0x1f3d60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f3d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3d64:
    // 0x1f3d64: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
label_1f3d68:
    if (ctx->pc == 0x1F3D68u) {
        ctx->pc = 0x1F3D6Cu;
        goto label_1f3d6c;
    }
    ctx->pc = 0x1F3D64u;
    {
        const bool branch_taken_0x1f3d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x1f3d64) {
            ctx->pc = 0x1F3D74u;
            goto label_1f3d74;
        }
    }
    ctx->pc = 0x1F3D6Cu;
label_1f3d6c:
    // 0x1f3d6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f3d70:
    if (ctx->pc == 0x1F3D70u) {
        ctx->pc = 0x1F3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D6Cu;
        // 0x1f3d70: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D74u;
        goto label_1f3d74;
    }
    ctx->pc = 0x1F3D6Cu;
    {
        const bool branch_taken_0x1f3d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D6Cu;
        // 0x1f3d70: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d6c) {
            ctx->pc = 0x1F3D84u;
            goto label_1f3d84;
        }
    }
    ctx->pc = 0x1F3D74u;
label_1f3d74:
    // 0x1f3d74: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f3d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f3d78:
    // 0x1f3d78: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f3d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f3d7c:
    // 0x1f3d7c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f3d80:
    if (ctx->pc == 0x1F3D80u) {
        ctx->pc = 0x1F3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D7Cu;
        // 0x1f3d80: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3D84u;
        goto label_1f3d84;
    }
    ctx->pc = 0x1F3D7Cu;
    {
        const bool branch_taken_0x1f3d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D7Cu;
        // 0x1f3d80: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d7c) {
            ctx->pc = 0x1F3D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3d30;
        }
    }
    ctx->pc = 0x1F3D84u;
label_1f3d84:
    // 0x1f3d84: 0x0  nop
    ctx->pc = 0x1f3d84u;
    // NOP
label_1f3d88:
    // 0x1f3d88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3d8c:
    // 0x1f3d8c: 0x14c203f8  bne         $a2, $v0, . + 4 + (0x3F8 << 2)
label_1f3d90:
    if (ctx->pc == 0x1F3D90u) {
        ctx->pc = 0x1F3D94u;
        goto label_1f3d94;
    }
    ctx->pc = 0x1F3D8Cu;
    {
        const bool branch_taken_0x1f3d8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3d8c) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3D94u;
label_1f3d94:
    // 0x1f3d94: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3d98:
    // 0x1f3d98: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3d9c:
    // 0x1f3d9c: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1f3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1f3da0:
    // 0x1f3da0: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3da4:
    // 0x1f3da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3da8:
    // 0x1f3da8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1f3da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1f3dac:
    // 0x1f3dac: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3db0:
    // 0x1f3db0: 0xc08f20e  jal         func_23C838
label_1f3db4:
    if (ctx->pc == 0x1F3DB4u) {
        ctx->pc = 0x1F3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DB0u;
        // 0x1f3db4: 0x24a5d300  addiu       $a1, $a1, -0x2D00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3DB8u;
        goto label_1f3db8;
    }
    ctx->pc = 0x1F3DB0u;
    SET_GPR_U32(ctx, 31, 0x1F3DB8u);
    ctx->pc = 0x1F3DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3DB0u;
    // 0x1f3db4: 0x24a5d300  addiu       $a1, $a1, -0x2D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3DB8u;
label_1f3db8:
    // 0x1f3db8: 0x100003ed  b           . + 4 + (0x3ED << 2)
label_1f3dbc:
    if (ctx->pc == 0x1F3DBCu) {
        ctx->pc = 0x1F3DC0u;
        goto label_1f3dc0;
    }
    ctx->pc = 0x1F3DB8u;
    {
        const bool branch_taken_0x1f3db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3db8) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3DC0u;
label_1f3dc0:
    // 0x1f3dc0: 0x1683001d  bne         $s4, $v1, . + 4 + (0x1D << 2)
label_1f3dc4:
    if (ctx->pc == 0x1F3DC4u) {
        ctx->pc = 0x1F3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DC0u;
        // 0x1f3dc4: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3DC8u;
        goto label_1f3dc8;
    }
    ctx->pc = 0x1F3DC0u;
    {
        const bool branch_taken_0x1f3dc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DC0u;
        // 0x1f3dc4: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3dc0) {
            ctx->pc = 0x1F3E38u;
            goto label_1f3e38;
        }
    }
    ctx->pc = 0x1F3DC8u;
label_1f3dc8:
    // 0x1f3dc8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f3dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f3dcc:
    // 0x1f3dcc: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f3dccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f3dd0:
    // 0x1f3dd0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3dd4:
    // 0x1f3dd4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3dd8:
    // 0x1f3dd8: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f3dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f3ddc:
    // 0x1f3ddc: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f3de0:
    // 0x1f3de0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3de4:
    // 0x1f3de4: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f3de4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f3de8:
    // 0x1f3de8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3dec:
    // 0x1f3dec: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f3decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3df0:
    // 0x1f3df0: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f3df0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f3df4:
    // 0x1f3df4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f3df4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f3df8:
    // 0x1f3df8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3dfc:
    // 0x1f3dfc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f3dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f3e00:
    // 0x1f3e00: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3e04:
    // 0x1f3e04: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f3e04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3e08:
    // 0x1f3e08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3e0c:
    // 0x1f3e0c: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f3e10:
    // 0x1f3e10: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3e14:
    // 0x1f3e14: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3e18:
    // 0x1f3e18: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3e1c:
    // 0x1f3e1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3e20:
    // 0x1f3e20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3e24:
    // 0x1f3e24: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3e24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3e28:
    // 0x1f3e28: 0xc08f20e  jal         func_23C838
label_1f3e2c:
    if (ctx->pc == 0x1F3E2Cu) {
        ctx->pc = 0x1F3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E28u;
        // 0x1f3e2c: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E30u;
        goto label_1f3e30;
    }
    ctx->pc = 0x1F3E28u;
    SET_GPR_U32(ctx, 31, 0x1F3E30u);
    ctx->pc = 0x1F3E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E28u;
    // 0x1f3e2c: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3E30u;
label_1f3e30:
    // 0x1f3e30: 0x100003cf  b           . + 4 + (0x3CF << 2)
label_1f3e34:
    if (ctx->pc == 0x1F3E34u) {
        ctx->pc = 0x1F3E38u;
        goto label_1f3e38;
    }
    ctx->pc = 0x1F3E30u;
    {
        const bool branch_taken_0x1f3e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3e30) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3E38u;
label_1f3e38:
    // 0x1f3e38: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1f3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1f3e3c:
    // 0x1f3e3c: 0x16830011  bne         $s4, $v1, . + 4 + (0x11 << 2)
label_1f3e40:
    if (ctx->pc == 0x1F3E40u) {
        ctx->pc = 0x1F3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E3Cu;
        // 0x1f3e40: 0x24030043  addiu       $v1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E44u;
        goto label_1f3e44;
    }
    ctx->pc = 0x1F3E3Cu;
    {
        const bool branch_taken_0x1f3e3c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E3Cu;
        // 0x1f3e40: 0x24030043  addiu       $v1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e3c) {
            ctx->pc = 0x1F3E84u;
            goto label_1f3e84;
        }
    }
    ctx->pc = 0x1F3E44u;
label_1f3e44:
    // 0x1f3e44: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3e48:
    // 0x1f3e48: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3e4c:
    // 0x1f3e4c: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3e50:
    // 0x1f3e50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f3e54:
    // 0x1f3e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3e58:
    // 0x1f3e58: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3e5c:
    // 0x1f3e5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3e60:
    // 0x1f3e60: 0xac227fd0  sw          $v0, 0x7FD0($at)
    ctx->pc = 0x1f3e60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32720), GPR_U32(ctx, 2));
label_1f3e64:
    // 0x1f3e64: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3e68:
    // 0x1f3e68: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3e6c:
    // 0x1f3e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3e70:
    // 0x1f3e70: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3e74:
    // 0x1f3e74: 0xc08f20e  jal         func_23C838
label_1f3e78:
    if (ctx->pc == 0x1F3E78u) {
        ctx->pc = 0x1F3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E74u;
        // 0x1f3e78: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E7Cu;
        goto label_1f3e7c;
    }
    ctx->pc = 0x1F3E74u;
    SET_GPR_U32(ctx, 31, 0x1F3E7Cu);
    ctx->pc = 0x1F3E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3E74u;
    // 0x1f3e78: 0x24a5d2d0  addiu       $a1, $a1, -0x2D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3E7Cu;
label_1f3e7c:
    // 0x1f3e7c: 0x100003bc  b           . + 4 + (0x3BC << 2)
label_1f3e80:
    if (ctx->pc == 0x1F3E80u) {
        ctx->pc = 0x1F3E84u;
        goto label_1f3e84;
    }
    ctx->pc = 0x1F3E7Cu;
    {
        const bool branch_taken_0x1f3e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3e7c) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3E84u;
label_1f3e84:
    // 0x1f3e84: 0x16830010  bne         $s4, $v1, . + 4 + (0x10 << 2)
label_1f3e88:
    if (ctx->pc == 0x1F3E88u) {
        ctx->pc = 0x1F3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E84u;
        // 0x1f3e88: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3E8Cu;
        goto label_1f3e8c;
    }
    ctx->pc = 0x1F3E84u;
    {
        const bool branch_taken_0x1f3e84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3E84u;
        // 0x1f3e88: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3e84) {
            ctx->pc = 0x1F3EC8u;
            goto label_1f3ec8;
        }
    }
    ctx->pc = 0x1F3E8Cu;
label_1f3e8c:
    // 0x1f3e8c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3e90:
    // 0x1f3e90: 0x8c237fd0  lw          $v1, 0x7FD0($at)
    ctx->pc = 0x1f3e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f3e94:
    // 0x1f3e94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f3e98:
    // 0x1f3e98: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3e9c:
    // 0x1f3e9c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3ea0:
    // 0x1f3ea0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3ea4:
    // 0x1f3ea4: 0xac227fe0  sw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f3ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32736), GPR_U32(ctx, 2));
label_1f3ea8:
    // 0x1f3ea8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3eac:
    // 0x1f3eac: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3eb0:
    // 0x1f3eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3eb4:
    // 0x1f3eb4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3eb8:
    // 0x1f3eb8: 0xc08f20e  jal         func_23C838
label_1f3ebc:
    if (ctx->pc == 0x1F3EBCu) {
        ctx->pc = 0x1F3EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EB8u;
        // 0x1f3ebc: 0x24a5d280  addiu       $a1, $a1, -0x2D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3EC0u;
        goto label_1f3ec0;
    }
    ctx->pc = 0x1F3EB8u;
    SET_GPR_U32(ctx, 31, 0x1F3EC0u);
    ctx->pc = 0x1F3EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EB8u;
    // 0x1f3ebc: 0x24a5d280  addiu       $a1, $a1, -0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3EC0u;
label_1f3ec0:
    // 0x1f3ec0: 0x100003ab  b           . + 4 + (0x3AB << 2)
label_1f3ec4:
    if (ctx->pc == 0x1F3EC4u) {
        ctx->pc = 0x1F3EC8u;
        goto label_1f3ec8;
    }
    ctx->pc = 0x1F3EC0u;
    {
        const bool branch_taken_0x1f3ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ec0) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3EC8u;
label_1f3ec8:
    // 0x1f3ec8: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1f3ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1f3ecc:
    // 0x1f3ecc: 0x1683000e  bne         $s4, $v1, . + 4 + (0xE << 2)
label_1f3ed0:
    if (ctx->pc == 0x1F3ED0u) {
        ctx->pc = 0x1F3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3ECCu;
        // 0x1f3ed0: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3ED4u;
        goto label_1f3ed4;
    }
    ctx->pc = 0x1F3ECCu;
    {
        const bool branch_taken_0x1f3ecc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3ECCu;
        // 0x1f3ed0: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ecc) {
            ctx->pc = 0x1F3F08u;
            goto label_1f3f08;
        }
    }
    ctx->pc = 0x1F3ED4u;
label_1f3ed4:
    // 0x1f3ed4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3ed8:
    // 0x1f3ed8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3edc:
    // 0x1f3edc: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3ee0:
    // 0x1f3ee0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3ee4:
    // 0x1f3ee4: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3ee8:
    // 0x1f3ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3eec:
    // 0x1f3eec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3ef0:
    // 0x1f3ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3ef4:
    // 0x1f3ef4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3ef8:
    // 0x1f3ef8: 0xc08f20e  jal         func_23C838
label_1f3efc:
    if (ctx->pc == 0x1F3EFCu) {
        ctx->pc = 0x1F3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3EF8u;
        // 0x1f3efc: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F00u;
        goto label_1f3f00;
    }
    ctx->pc = 0x1F3EF8u;
    SET_GPR_U32(ctx, 31, 0x1F3F00u);
    ctx->pc = 0x1F3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3EF8u;
    // 0x1f3efc: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3F00u;
label_1f3f00:
    // 0x1f3f00: 0x1000039b  b           . + 4 + (0x39B << 2)
label_1f3f04:
    if (ctx->pc == 0x1F3F04u) {
        ctx->pc = 0x1F3F08u;
        goto label_1f3f08;
    }
    ctx->pc = 0x1F3F00u;
    {
        const bool branch_taken_0x1f3f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f00) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3F08u;
label_1f3f08:
    // 0x1f3f08: 0x1683000d  bne         $s4, $v1, . + 4 + (0xD << 2)
label_1f3f0c:
    if (ctx->pc == 0x1F3F0Cu) {
        ctx->pc = 0x1F3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F08u;
        // 0x1f3f0c: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F10u;
        goto label_1f3f10;
    }
    ctx->pc = 0x1F3F08u;
    {
        const bool branch_taken_0x1f3f08 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F08u;
        // 0x1f3f0c: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f08) {
            ctx->pc = 0x1F3F40u;
            goto label_1f3f40;
        }
    }
    ctx->pc = 0x1F3F10u;
label_1f3f10:
    // 0x1f3f10: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3f14:
    // 0x1f3f14: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3f18:
    // 0x1f3f18: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3f1c:
    // 0x1f3f1c: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3f20:
    // 0x1f3f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f24:
    // 0x1f3f24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3f28:
    // 0x1f3f28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3f2c:
    // 0x1f3f2c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3f30:
    // 0x1f3f30: 0xc08f20e  jal         func_23C838
label_1f3f34:
    if (ctx->pc == 0x1F3F34u) {
        ctx->pc = 0x1F3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F30u;
        // 0x1f3f34: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F38u;
        goto label_1f3f38;
    }
    ctx->pc = 0x1F3F30u;
    SET_GPR_U32(ctx, 31, 0x1F3F38u);
    ctx->pc = 0x1F3F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F30u;
    // 0x1f3f34: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3F38u;
label_1f3f38:
    // 0x1f3f38: 0x1000038d  b           . + 4 + (0x38D << 2)
label_1f3f3c:
    if (ctx->pc == 0x1F3F3Cu) {
        ctx->pc = 0x1F3F40u;
        goto label_1f3f40;
    }
    ctx->pc = 0x1F3F38u;
    {
        const bool branch_taken_0x1f3f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f38) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3F40u;
label_1f3f40:
    // 0x1f3f40: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x1f3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1f3f44:
    // 0x1f3f44: 0x16830007  bne         $s4, $v1, . + 4 + (0x7 << 2)
label_1f3f48:
    if (ctx->pc == 0x1F3F48u) {
        ctx->pc = 0x1F3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F44u;
        // 0x1f3f48: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F4Cu;
        goto label_1f3f4c;
    }
    ctx->pc = 0x1F3F44u;
    {
        const bool branch_taken_0x1f3f44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F44u;
        // 0x1f3f48: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f44) {
            ctx->pc = 0x1F3F64u;
            goto label_1f3f64;
        }
    }
    ctx->pc = 0x1F3F4Cu;
label_1f3f4c:
    // 0x1f3f4c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3f50:
    // 0x1f3f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3f54:
    // 0x1f3f54: 0xc08f20e  jal         func_23C838
label_1f3f58:
    if (ctx->pc == 0x1F3F58u) {
        ctx->pc = 0x1F3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F54u;
        // 0x1f3f58: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F5Cu;
        goto label_1f3f5c;
    }
    ctx->pc = 0x1F3F54u;
    SET_GPR_U32(ctx, 31, 0x1F3F5Cu);
    ctx->pc = 0x1F3F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3F54u;
    // 0x1f3f58: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3F5Cu;
label_1f3f5c:
    // 0x1f3f5c: 0x10000384  b           . + 4 + (0x384 << 2)
label_1f3f60:
    if (ctx->pc == 0x1F3F60u) {
        ctx->pc = 0x1F3F64u;
        goto label_1f3f64;
    }
    ctx->pc = 0x1F3F5Cu;
    {
        const bool branch_taken_0x1f3f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3f5c) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F3F64u;
label_1f3f64:
    // 0x1f3f64: 0x16830028  bne         $s4, $v1, . + 4 + (0x28 << 2)
label_1f3f68:
    if (ctx->pc == 0x1F3F68u) {
        ctx->pc = 0x1F3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F64u;
        // 0x1f3f68: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3F6Cu;
        goto label_1f3f6c;
    }
    ctx->pc = 0x1F3F64u;
    {
        const bool branch_taken_0x1f3f64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3F64u;
        // 0x1f3f68: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3f64) {
            ctx->pc = 0x1F4008u;
            goto label_1f4008;
        }
    }
    ctx->pc = 0x1F3F6Cu;
label_1f3f6c:
    // 0x1f3f6c: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f3f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f3f70:
    // 0x1f3f70: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f3f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f3f74:
    // 0x1f3f74: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f3f78:
    // 0x1f3f78: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3f7c:
    // 0x1f3f7c: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f3f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f3f80:
    // 0x1f3f80: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f3f84:
    // 0x1f3f84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f3f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f3f88:
    // 0x1f3f88: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f3f88u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f3f8c:
    // 0x1f3f8c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3f90:
    // 0x1f3f90: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3f94:
    // 0x1f3f94: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f3f94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f3f98:
    // 0x1f3f98: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f3f98u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f3f9c:
    // 0x1f3f9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3fa0:
    // 0x1f3fa0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f3fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f3fa4:
    // 0x1f3fa4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3fa8:
    // 0x1f3fa8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f3fa8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f3fac:
    // 0x1f3fac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3fb0:
    // 0x1f3fb0: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f3fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f3fb4:
    // 0x1f3fb4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3fb8:
    // 0x1f3fb8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3fbc:
    // 0x1f3fbc: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f3fc0:
    // 0x1f3fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f3fc4:
    // 0x1f3fc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3fc8:
    // 0x1f3fc8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f3fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3fcc:
    // 0x1f3fcc: 0xc08f20e  jal         func_23C838
label_1f3fd0:
    if (ctx->pc == 0x1F3FD0u) {
        ctx->pc = 0x1F3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FCCu;
        // 0x1f3fd0: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F3FD4u;
        goto label_1f3fd4;
    }
    ctx->pc = 0x1F3FCCu;
    SET_GPR_U32(ctx, 31, 0x1F3FD4u);
    ctx->pc = 0x1F3FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FCCu;
    // 0x1f3fd0: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F3FD4u;
label_1f3fd4:
    // 0x1f3fd4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f3fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f3fd8:
    // 0x1f3fd8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f3fdc:
    // 0x1f3fdc: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f3fe0:
    // 0x1f3fe0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f3fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f3fe4:
    // 0x1f3fe4: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f3fe8:
    // 0x1f3fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3fec:
    // 0x1f3fec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f3fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f3ff0:
    // 0x1f3ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f3ff4:
    // 0x1f3ff4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f3ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f3ff8:
    // 0x1f3ff8: 0xc08f20e  jal         func_23C838
label_1f3ffc:
    if (ctx->pc == 0x1F3FFCu) {
        ctx->pc = 0x1F3FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3FF8u;
        // 0x1f3ffc: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4000u;
        goto label_1f4000;
    }
    ctx->pc = 0x1F3FF8u;
    SET_GPR_U32(ctx, 31, 0x1F4000u);
    ctx->pc = 0x1F3FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3FF8u;
    // 0x1f3ffc: 0x24a5d320  addiu       $a1, $a1, -0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4000u;
label_1f4000:
    // 0x1f4000: 0x1000035b  b           . + 4 + (0x35B << 2)
label_1f4004:
    if (ctx->pc == 0x1F4004u) {
        ctx->pc = 0x1F4008u;
        goto label_1f4008;
    }
    ctx->pc = 0x1F4000u;
    {
        const bool branch_taken_0x1f4000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4000) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F4008u;
label_1f4008:
    // 0x1f4008: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1f4008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1f400c:
    // 0x1f400c: 0x16830067  bne         $s4, $v1, . + 4 + (0x67 << 2)
label_1f4010:
    if (ctx->pc == 0x1F4010u) {
        ctx->pc = 0x1F4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F400Cu;
        // 0x1f4010: 0x24030049  addiu       $v1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4014u;
        goto label_1f4014;
    }
    ctx->pc = 0x1F400Cu;
    {
        const bool branch_taken_0x1f400c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F400Cu;
        // 0x1f4010: 0x24030049  addiu       $v1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f400c) {
            ctx->pc = 0x1F41ACu;
            goto label_1f41ac;
        }
    }
    ctx->pc = 0x1F4014u;
label_1f4014:
    // 0x1f4014: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f4014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f4018:
    // 0x1f4018: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1f4018u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_1f401c:
    // 0x1f401c: 0x8c2625b8  lw          $a2, 0x25B8($at)
    ctx->pc = 0x1f401cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9656)));
label_1f4020:
    // 0x1f4020: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x1f4020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
label_1f4024:
    // 0x1f4024: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4028:
    // 0x1f4028: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f402c:
    // 0x1f402c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f402cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4030:
    // 0x1f4030: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1f4030u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f4034:
    // 0x1f4034: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4038:
    // 0x1f4038: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1f4038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f403c:
    // 0x1f403c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f403cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4040:
    // 0x1f4040: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x1f4040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1f4044:
    // 0x1f4044: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4044u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4048:
    // 0x1f4048: 0xac267fd4  sw          $a2, 0x7FD4($at)
    ctx->pc = 0x1f4048u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32724), GPR_U32(ctx, 6));
label_1f404c:
    // 0x1f404c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1f404cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_1f4050:
    // 0x1f4050: 0x25081300  addiu       $t0, $t0, 0x1300
    ctx->pc = 0x1f4050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4864));
label_1f4054:
    // 0x1f4054: 0x0  nop
    ctx->pc = 0x1f4054u;
    // NOP
label_1f4058:
    // 0x1f4058: 0x1053821  addu        $a3, $t0, $a1
    ctx->pc = 0x1f4058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1f405c:
    // 0x1f405c: 0x90e6367c  lbu         $a2, 0x367C($a3)
    ctx->pc = 0x1f405cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13948)));
label_1f4060:
    // 0x1f4060: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_1f4064:
    if (ctx->pc == 0x1F4064u) {
        ctx->pc = 0x1F4068u;
        goto label_1f4068;
    }
    ctx->pc = 0x1F4060u;
    {
        const bool branch_taken_0x1f4060 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4060) {
            ctx->pc = 0x1F4098u;
            goto label_1f4098;
        }
    }
    ctx->pc = 0x1F4068u;
label_1f4068:
    // 0x1f4068: 0x8ce63674  lw          $a2, 0x3674($a3)
    ctx->pc = 0x1f4068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13940)));
label_1f406c:
    // 0x1f406c: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
label_1f4070:
    if (ctx->pc == 0x1F4070u) {
        ctx->pc = 0x1F4074u;
        goto label_1f4074;
    }
    ctx->pc = 0x1F406Cu;
    {
        const bool branch_taken_0x1f406c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f406c) {
            ctx->pc = 0x1F4098u;
            goto label_1f4098;
        }
    }
    ctx->pc = 0x1F4074u;
label_1f4074:
    // 0x1f4074: 0x8ce73670  lw          $a3, 0x3670($a3)
    ctx->pc = 0x1f4074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13936)));
label_1f4078:
    // 0x1f4078: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1f4078u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f407c:
    // 0x1f407c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f407cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4080:
    // 0x1f4080: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x1f4080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1f4084:
    // 0x1f4084: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4084u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4088:
    // 0x1f4088: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
label_1f408c:
    if (ctx->pc == 0x1F408Cu) {
        ctx->pc = 0x1F4090u;
        goto label_1f4090;
    }
    ctx->pc = 0x1F4088u;
    {
        const bool branch_taken_0x1f4088 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f4088) {
            ctx->pc = 0x1F4098u;
            goto label_1f4098;
        }
    }
    ctx->pc = 0x1F4090u;
label_1f4090:
    // 0x1f4090: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f4094:
    if (ctx->pc == 0x1F4094u) {
        ctx->pc = 0x1F4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4090u;
        // 0x1f4094: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4098u;
        goto label_1f4098;
    }
    ctx->pc = 0x1F4090u;
    {
        const bool branch_taken_0x1f4090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4090u;
        // 0x1f4094: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4090) {
            ctx->pc = 0x1F40A8u;
            goto label_1f40a8;
        }
    }
    ctx->pc = 0x1F4098u;
label_1f4098:
    // 0x1f4098: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f4098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f409c:
    // 0x1f409c: 0x28860002  slti        $a2, $a0, 0x2
    ctx->pc = 0x1f409cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f40a0:
    // 0x1f40a0: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
label_1f40a4:
    if (ctx->pc == 0x1F40A4u) {
        ctx->pc = 0x1F40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40A0u;
        // 0x1f40a4: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F40A8u;
        goto label_1f40a8;
    }
    ctx->pc = 0x1F40A0u;
    {
        const bool branch_taken_0x1f40a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40A0u;
        // 0x1f40a4: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f40a0) {
            ctx->pc = 0x1F4054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4054;
        }
    }
    ctx->pc = 0x1F40A8u;
label_1f40a8:
    // 0x1f40a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f40a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f40ac:
    // 0x1f40ac: 0x14670021  bne         $v1, $a3, . + 4 + (0x21 << 2)
label_1f40b0:
    if (ctx->pc == 0x1F40B0u) {
        ctx->pc = 0x1F40B4u;
        goto label_1f40b4;
    }
    ctx->pc = 0x1F40ACu;
    {
        const bool branch_taken_0x1f40ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f40ac) {
            ctx->pc = 0x1F4134u;
            goto label_1f4134;
        }
    }
    ctx->pc = 0x1F40B4u;
label_1f40b4:
    // 0x1f40b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f40b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f40b8:
    // 0x1f40b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f40b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f40bc:
    // 0x1f40bc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1f40bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1f40c0:
    // 0x1f40c0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f40c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1f40c4:
    // 0x1f40c4: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x1f40c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
label_1f40c8:
    // 0x1f40c8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1f40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f40cc:
    // 0x1f40cc: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x1f40ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_1f40d0:
    // 0x1f40d0: 0x0  nop
    ctx->pc = 0x1f40d0u;
    // NOP
label_1f40d4:
    // 0x1f40d4: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x1f40d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f40d8:
    // 0x1f40d8: 0x90a2367c  lbu         $v0, 0x367C($a1)
    ctx->pc = 0x1f40d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_1f40dc:
    // 0x1f40dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f40e0:
    if (ctx->pc == 0x1F40E0u) {
        ctx->pc = 0x1F40E4u;
        goto label_1f40e4;
    }
    ctx->pc = 0x1F40DCu;
    {
        const bool branch_taken_0x1f40dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f40dc) {
            ctx->pc = 0x1F4114u;
            goto label_1f4114;
        }
    }
    ctx->pc = 0x1F40E4u;
label_1f40e4:
    // 0x1f40e4: 0x8ca23674  lw          $v0, 0x3674($a1)
    ctx->pc = 0x1f40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_1f40e8:
    // 0x1f40e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f40ec:
    if (ctx->pc == 0x1F40ECu) {
        ctx->pc = 0x1F40F0u;
        goto label_1f40f0;
    }
    ctx->pc = 0x1F40E8u;
    {
        const bool branch_taken_0x1f40e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f40e8) {
            ctx->pc = 0x1F4114u;
            goto label_1f4114;
        }
    }
    ctx->pc = 0x1F40F0u;
label_1f40f0:
    // 0x1f40f0: 0x8ca53670  lw          $a1, 0x3670($a1)
    ctx->pc = 0x1f40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13936)));
label_1f40f4:
    // 0x1f40f4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1f40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f40f8:
    // 0x1f40f8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f40fc:
    // 0x1f40fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f4100:
    // 0x1f4100: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f4100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4104:
    // 0x1f4104: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f4108:
    if (ctx->pc == 0x1F4108u) {
        ctx->pc = 0x1F410Cu;
        goto label_1f410c;
    }
    ctx->pc = 0x1F4104u;
    {
        const bool branch_taken_0x1f4104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f4104) {
            ctx->pc = 0x1F4114u;
            goto label_1f4114;
        }
    }
    ctx->pc = 0x1F410Cu;
label_1f410c:
    // 0x1f410c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f4110:
    if (ctx->pc == 0x1F4110u) {
        ctx->pc = 0x1F4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F410Cu;
        // 0x1f4110: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4114u;
        goto label_1f4114;
    }
    ctx->pc = 0x1F410Cu;
    {
        const bool branch_taken_0x1f410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F410Cu;
        // 0x1f4110: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f410c) {
            ctx->pc = 0x1F4124u;
            goto label_1f4124;
        }
    }
    ctx->pc = 0x1F4114u;
label_1f4114:
    // 0x1f4114: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f4114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f4118:
    // 0x1f4118: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f4118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f411c:
    // 0x1f411c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f4120:
    if (ctx->pc == 0x1F4120u) {
        ctx->pc = 0x1F4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F411Cu;
        // 0x1f4120: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4124u;
        goto label_1f4124;
    }
    ctx->pc = 0x1F411Cu;
    {
        const bool branch_taken_0x1f411c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F411Cu;
        // 0x1f4120: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f411c) {
            ctx->pc = 0x1F40D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f40d0;
        }
    }
    ctx->pc = 0x1F4124u;
label_1f4124:
    // 0x1f4124: 0x0  nop
    ctx->pc = 0x1f4124u;
    // NOP
label_1f4128:
    // 0x1f4128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f4128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f412c:
    // 0x1f412c: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
label_1f4130:
    if (ctx->pc == 0x1F4130u) {
        ctx->pc = 0x1F4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F412Cu;
        // 0x1f4130: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4134u;
        goto label_1f4134;
    }
    ctx->pc = 0x1F412Cu;
    {
        const bool branch_taken_0x1f412c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F412Cu;
        // 0x1f4130: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f412c) {
            ctx->pc = 0x1F4168u;
            goto label_1f4168;
        }
    }
    ctx->pc = 0x1F4134u;
label_1f4134:
    // 0x1f4134: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4138:
    // 0x1f4138: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f4138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f413c:
    // 0x1f413c: 0x8c237fd4  lw          $v1, 0x7FD4($at)
    ctx->pc = 0x1f413cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32724)));
label_1f4140:
    // 0x1f4140: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4144:
    // 0x1f4144: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f4144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f4148:
    // 0x1f4148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f414c:
    // 0x1f414c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f414cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f4150:
    // 0x1f4150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f4150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f4154:
    // 0x1f4154: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4158:
    // 0x1f4158: 0xc08f20e  jal         func_23C838
label_1f415c:
    if (ctx->pc == 0x1F415Cu) {
        ctx->pc = 0x1F415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4158u;
        // 0x1f415c: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4160u;
        goto label_1f4160;
    }
    ctx->pc = 0x1F4158u;
    SET_GPR_U32(ctx, 31, 0x1F4160u);
    ctx->pc = 0x1F415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4158u;
    // 0x1f415c: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4160u;
label_1f4160:
    // 0x1f4160: 0x10000303  b           . + 4 + (0x303 << 2)
label_1f4164:
    if (ctx->pc == 0x1F4164u) {
        ctx->pc = 0x1F4168u;
        goto label_1f4168;
    }
    ctx->pc = 0x1F4160u;
    {
        const bool branch_taken_0x1f4160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4160) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F4168u;
label_1f4168:
    // 0x1f4168: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f4168u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f416c:
    // 0x1f416c: 0x8c237fd0  lw          $v1, 0x7FD0($at)
    ctx->pc = 0x1f416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f4170:
    // 0x1f4170: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4174:
    // 0x1f4174: 0x24c62930  addiu       $a2, $a2, 0x2930
    ctx->pc = 0x1f4174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10544));
label_1f4178:
    // 0x1f4178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f417c:
    // 0x1f417c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f417cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4180:
    // 0x1f4180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f4180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f4184:
    // 0x1f4184: 0x8c227fd4  lw          $v0, 0x7FD4($at)
    ctx->pc = 0x1f4184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32724)));
label_1f4188:
    // 0x1f4188: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1f4188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f418c:
    // 0x1f418c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f418cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4190:
    // 0x1f4190: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1f4190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1f4194:
    // 0x1f4194: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1f4194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f4198:
    // 0x1f4198: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f419c:
    // 0x1f419c: 0xc08f20e  jal         func_23C838
label_1f41a0:
    if (ctx->pc == 0x1F41A0u) {
        ctx->pc = 0x1F41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F419Cu;
        // 0x1f41a0: 0x24a5d4c0  addiu       $a1, $a1, -0x2B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F41A4u;
        goto label_1f41a4;
    }
    ctx->pc = 0x1F419Cu;
    SET_GPR_U32(ctx, 31, 0x1F41A4u);
    ctx->pc = 0x1F41A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F419Cu;
    // 0x1f41a0: 0x24a5d4c0  addiu       $a1, $a1, -0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F41A4u;
label_1f41a4:
    // 0x1f41a4: 0x100002f2  b           . + 4 + (0x2F2 << 2)
label_1f41a8:
    if (ctx->pc == 0x1F41A8u) {
        ctx->pc = 0x1F41ACu;
        goto label_1f41ac;
    }
    ctx->pc = 0x1F41A4u;
    {
        const bool branch_taken_0x1f41a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f41a4) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F41ACu;
label_1f41ac:
    // 0x1f41ac: 0x1683001d  bne         $s4, $v1, . + 4 + (0x1D << 2)
label_1f41b0:
    if (ctx->pc == 0x1F41B0u) {
        ctx->pc = 0x1F41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41ACu;
        // 0x1f41b0: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F41B4u;
        goto label_1f41b4;
    }
    ctx->pc = 0x1F41ACu;
    {
        const bool branch_taken_0x1f41ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41ACu;
        // 0x1f41b0: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41ac) {
            ctx->pc = 0x1F4224u;
            goto label_1f4224;
        }
    }
    ctx->pc = 0x1F41B4u;
label_1f41b4:
    // 0x1f41b4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f41b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f41b8:
    // 0x1f41b8: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f41b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f41bc:
    // 0x1f41bc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f41c0:
    // 0x1f41c0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f41c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f41c4:
    // 0x1f41c4: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f41c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f41c8:
    // 0x1f41c8: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f41c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f41cc:
    // 0x1f41cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f41ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f41d0:
    // 0x1f41d0: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f41d0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f41d4:
    // 0x1f41d4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f41d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f41d8:
    // 0x1f41d8: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f41dc:
    // 0x1f41dc: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f41dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f41e0:
    // 0x1f41e0: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f41e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f41e4:
    // 0x1f41e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f41e8:
    // 0x1f41e8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f41e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f41ec:
    // 0x1f41ec: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f41ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f41f0:
    // 0x1f41f0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f41f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f41f4:
    // 0x1f41f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f41f8:
    // 0x1f41f8: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f41f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f41fc:
    // 0x1f41fc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f41fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4200:
    // 0x1f4200: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4204:
    // 0x1f4204: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f4208:
    // 0x1f4208: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f420c:
    // 0x1f420c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f420cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4210:
    // 0x1f4210: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4214:
    // 0x1f4214: 0xc08f20e  jal         func_23C838
label_1f4218:
    if (ctx->pc == 0x1F4218u) {
        ctx->pc = 0x1F4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4214u;
        // 0x1f4218: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F421Cu;
        goto label_1f421c;
    }
    ctx->pc = 0x1F4214u;
    SET_GPR_U32(ctx, 31, 0x1F421Cu);
    ctx->pc = 0x1F4218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4214u;
    // 0x1f4218: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F421Cu;
label_1f421c:
    // 0x1f421c: 0x100002d4  b           . + 4 + (0x2D4 << 2)
label_1f4220:
    if (ctx->pc == 0x1F4220u) {
        ctx->pc = 0x1F4224u;
        goto label_1f4224;
    }
    ctx->pc = 0x1F421Cu;
    {
        const bool branch_taken_0x1f421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f421c) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F4224u;
label_1f4224:
    // 0x1f4224: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1f4224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1f4228:
    // 0x1f4228: 0x16830007  bne         $s4, $v1, . + 4 + (0x7 << 2)
label_1f422c:
    if (ctx->pc == 0x1F422Cu) {
        ctx->pc = 0x1F422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4228u;
        // 0x1f422c: 0x2403004b  addiu       $v1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4230u;
        goto label_1f4230;
    }
    ctx->pc = 0x1F4228u;
    {
        const bool branch_taken_0x1f4228 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4228u;
        // 0x1f422c: 0x2403004b  addiu       $v1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4228) {
            ctx->pc = 0x1F4248u;
            goto label_1f4248;
        }
    }
    ctx->pc = 0x1F4230u;
label_1f4230:
    // 0x1f4230: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4234:
    // 0x1f4234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4238:
    // 0x1f4238: 0xc08f20e  jal         func_23C838
label_1f423c:
    if (ctx->pc == 0x1F423Cu) {
        ctx->pc = 0x1F423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4238u;
        // 0x1f423c: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4240u;
        goto label_1f4240;
    }
    ctx->pc = 0x1F4238u;
    SET_GPR_U32(ctx, 31, 0x1F4240u);
    ctx->pc = 0x1F423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4238u;
    // 0x1f423c: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4240u;
label_1f4240:
    // 0x1f4240: 0x100002cb  b           . + 4 + (0x2CB << 2)
label_1f4244:
    if (ctx->pc == 0x1F4244u) {
        ctx->pc = 0x1F4248u;
        goto label_1f4248;
    }
    ctx->pc = 0x1F4240u;
    {
        const bool branch_taken_0x1f4240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4240) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F4248u;
label_1f4248:
    // 0x1f4248: 0x1683001d  bne         $s4, $v1, . + 4 + (0x1D << 2)
label_1f424c:
    if (ctx->pc == 0x1F424Cu) {
        ctx->pc = 0x1F424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4248u;
        // 0x1f424c: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4250u;
        goto label_1f4250;
    }
    ctx->pc = 0x1F4248u;
    {
        const bool branch_taken_0x1f4248 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4248u;
        // 0x1f424c: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4248) {
            ctx->pc = 0x1F42C0u;
            goto label_1f42c0;
        }
    }
    ctx->pc = 0x1F4250u;
label_1f4250:
    // 0x1f4250: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f4250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f4254:
    // 0x1f4254: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f4254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f4258:
    // 0x1f4258: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f4258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f425c:
    // 0x1f425c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f425cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4260:
    // 0x1f4260: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f4260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f4264:
    // 0x1f4264: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f4264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f4268:
    // 0x1f4268: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f4268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f426c:
    // 0x1f426c: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f426cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f4270:
    // 0x1f4270: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4274:
    // 0x1f4274: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f4274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4278:
    // 0x1f4278: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f4278u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f427c:
    // 0x1f427c: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f427cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f4280:
    // 0x1f4280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4284:
    // 0x1f4284: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f4284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4288:
    // 0x1f4288: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f428c:
    // 0x1f428c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f428cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4290:
    // 0x1f4290: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4294:
    // 0x1f4294: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f4294u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f4298:
    // 0x1f4298: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f429c:
    // 0x1f429c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f429cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f42a0:
    // 0x1f42a0: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f42a4:
    // 0x1f42a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f42a8:
    // 0x1f42a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f42ac:
    // 0x1f42ac: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f42acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f42b0:
    // 0x1f42b0: 0xc08f20e  jal         func_23C838
label_1f42b4:
    if (ctx->pc == 0x1F42B4u) {
        ctx->pc = 0x1F42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42B0u;
        // 0x1f42b4: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F42B8u;
        goto label_1f42b8;
    }
    ctx->pc = 0x1F42B0u;
    SET_GPR_U32(ctx, 31, 0x1F42B8u);
    ctx->pc = 0x1F42B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F42B0u;
    // 0x1f42b4: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F42B8u;
label_1f42b8:
    // 0x1f42b8: 0x100002ad  b           . + 4 + (0x2AD << 2)
label_1f42bc:
    if (ctx->pc == 0x1F42BCu) {
        ctx->pc = 0x1F42C0u;
        goto label_1f42c0;
    }
    ctx->pc = 0x1F42B8u;
    {
        const bool branch_taken_0x1f42b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f42b8) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F42C0u;
label_1f42c0:
    // 0x1f42c0: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x1f42c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1f42c4:
    // 0x1f42c4: 0x1683001e  bne         $s4, $v1, . + 4 + (0x1E << 2)
label_1f42c8:
    if (ctx->pc == 0x1F42C8u) {
        ctx->pc = 0x1F42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42C4u;
        // 0x1f42c8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F42CCu;
        goto label_1f42cc;
    }
    ctx->pc = 0x1F42C4u;
    {
        const bool branch_taken_0x1f42c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F42C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42C4u;
        // 0x1f42c8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f42c4) {
            ctx->pc = 0x1F4340u;
            goto label_1f4340;
        }
    }
    ctx->pc = 0x1F42CCu;
label_1f42cc:
    // 0x1f42cc: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f42ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f42d0:
    // 0x1f42d0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f42d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f42d4:
    // 0x1f42d4: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f42d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f42d8:
    // 0x1f42d8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f42d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f42dc:
    // 0x1f42dc: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f42dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f42e0:
    // 0x1f42e0: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f42e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f42e4:
    // 0x1f42e4: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f42e8:
    // 0x1f42e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f42ec:
    // 0x1f42ec: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f42ecu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f42f0:
    // 0x1f42f0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f42f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f42f4:
    // 0x1f42f4: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f42f8:
    // 0x1f42f8: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f42f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f42fc:
    // 0x1f42fc: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f42fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f4300:
    // 0x1f4300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4304:
    // 0x1f4304: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f4304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4308:
    // 0x1f4308: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f430c:
    // 0x1f430c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f430cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4310:
    // 0x1f4310: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4314:
    // 0x1f4314: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f4314u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f4318:
    // 0x1f4318: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f431c:
    // 0x1f431c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f431cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4320:
    // 0x1f4320: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f4324:
    // 0x1f4324: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4328:
    // 0x1f4328: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f432c:
    // 0x1f432c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f432cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4330:
    // 0x1f4330: 0xc08f20e  jal         func_23C838
label_1f4334:
    if (ctx->pc == 0x1F4334u) {
        ctx->pc = 0x1F4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4330u;
        // 0x1f4334: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4338u;
        goto label_1f4338;
    }
    ctx->pc = 0x1F4330u;
    SET_GPR_U32(ctx, 31, 0x1F4338u);
    ctx->pc = 0x1F4334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4330u;
    // 0x1f4334: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4338u;
label_1f4338:
    // 0x1f4338: 0x1000028d  b           . + 4 + (0x28D << 2)
label_1f433c:
    if (ctx->pc == 0x1F433Cu) {
        ctx->pc = 0x1F4340u;
        goto label_1f4340;
    }
    ctx->pc = 0x1F4338u;
    {
        const bool branch_taken_0x1f4338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4338) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F4340u;
label_1f4340:
    // 0x1f4340: 0x1683001d  bne         $s4, $v1, . + 4 + (0x1D << 2)
label_1f4344:
    if (ctx->pc == 0x1F4344u) {
        ctx->pc = 0x1F4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4340u;
        // 0x1f4344: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4348u;
        goto label_1f4348;
    }
    ctx->pc = 0x1F4340u;
    {
        const bool branch_taken_0x1f4340 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4340u;
        // 0x1f4344: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4340) {
            ctx->pc = 0x1F43B8u;
            goto label_1f43b8;
        }
    }
    ctx->pc = 0x1F4348u;
label_1f4348:
    // 0x1f4348: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f4348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f434c:
    // 0x1f434c: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f434cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f4350:
    // 0x1f4350: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f4350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f4354:
    // 0x1f4354: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4358:
    // 0x1f4358: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f4358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f435c:
    // 0x1f435c: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f4360:
    // 0x1f4360: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4364:
    // 0x1f4364: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f4364u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f4368:
    // 0x1f4368: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f436c:
    // 0x1f436c: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4370:
    // 0x1f4370: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f4370u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f4374:
    // 0x1f4374: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f4374u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f4378:
    // 0x1f4378: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f437c:
    // 0x1f437c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f437cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4380:
    // 0x1f4380: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4384:
    // 0x1f4384: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4384u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4388:
    // 0x1f4388: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f438c:
    // 0x1f438c: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f438cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f4390:
    // 0x1f4390: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4394:
    // 0x1f4394: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4398:
    // 0x1f4398: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f439c:
    // 0x1f439c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f439cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f43a0:
    // 0x1f43a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f43a4:
    // 0x1f43a4: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f43a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f43a8:
    // 0x1f43a8: 0xc08f20e  jal         func_23C838
label_1f43ac:
    if (ctx->pc == 0x1F43ACu) {
        ctx->pc = 0x1F43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43A8u;
        // 0x1f43ac: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F43B0u;
        goto label_1f43b0;
    }
    ctx->pc = 0x1F43A8u;
    SET_GPR_U32(ctx, 31, 0x1F43B0u);
    ctx->pc = 0x1F43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F43A8u;
    // 0x1f43ac: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F43B0u;
label_1f43b0:
    // 0x1f43b0: 0x1000026f  b           . + 4 + (0x26F << 2)
label_1f43b4:
    if (ctx->pc == 0x1F43B4u) {
        ctx->pc = 0x1F43B8u;
        goto label_1f43b8;
    }
    ctx->pc = 0x1F43B0u;
    {
        const bool branch_taken_0x1f43b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f43b0) {
            ctx->pc = 0x1F4D70u;
            { ctx->pc = 0x1f4d70; return; }
        }
    }
    ctx->pc = 0x1F43B8u;
label_1f43b8:
    // 0x1f43b8: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x1f43b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1f43bc:
    // 0x1f43bc: 0x1683001e  bne         $s4, $v1, . + 4 + (0x1E << 2)
label_1f43c0:
    if (ctx->pc == 0x1F43C0u) {
        ctx->pc = 0x1F43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43BCu;
        // 0x1f43c0: 0x24030054  addiu       $v1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F43C4u;
        goto label_1f43c4;
    }
    ctx->pc = 0x1F43BCu;
    {
        const bool branch_taken_0x1f43bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43BCu;
        // 0x1f43c0: 0x24030054  addiu       $v1, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43bc) {
            ctx->pc = 0x1F4438u;
            { ctx->pc = 0x1f4438; return; }
        }
    }
    ctx->pc = 0x1F43C4u;
label_1f43c4:
    // 0x1f43c4: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f43c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f43c8:
    // 0x1f43c8: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f43c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f43cc:
    // 0x1f43cc: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f43ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f43d0:
    // 0x1f43d0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f43d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f43d4:
    // 0x1f43d4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f43d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f43d8:
    // 0x1f43d8: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f43d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f43dc:
    // 0x1f43dc: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f43dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f43e0:
    // 0x1f43e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f43e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f43e4:
    // 0x1f43e4: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f43e4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f43e8:
    // 0x1f43e8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f43e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f43ec:
    // 0x1f43ec: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f43f0:
    // 0x1f43f0: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f43f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f43f4:
    // 0x1f43f4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f43f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f43f8:
    // 0x1f43f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f43fc:
    // 0x1f43fc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f43fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4400:
    // 0x1f4400: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4404:
    // 0x1f4404: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4404u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4408:
    // 0x1f4408: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f440c:
    // 0x1f440c: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f440cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
    ctx->pc = 0x1f4410u;
    return;
}

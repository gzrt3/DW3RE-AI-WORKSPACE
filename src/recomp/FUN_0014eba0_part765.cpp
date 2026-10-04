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


void FUN_0014eba0_part765(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c3c60u: goto label_2c3c60;
        case 0x2c3c64u: goto label_2c3c64;
        case 0x2c3c68u: goto label_2c3c68;
        case 0x2c3c6cu: goto label_2c3c6c;
        case 0x2c3c70u: goto label_2c3c70;
        case 0x2c3c74u: goto label_2c3c74;
        case 0x2c3c78u: goto label_2c3c78;
        case 0x2c3c7cu: goto label_2c3c7c;
        case 0x2c3c80u: goto label_2c3c80;
        case 0x2c3c84u: goto label_2c3c84;
        case 0x2c3c88u: goto label_2c3c88;
        case 0x2c3c8cu: goto label_2c3c8c;
        case 0x2c3c90u: goto label_2c3c90;
        case 0x2c3c94u: goto label_2c3c94;
        case 0x2c3c98u: goto label_2c3c98;
        case 0x2c3c9cu: goto label_2c3c9c;
        case 0x2c3ca0u: goto label_2c3ca0;
        case 0x2c3ca4u: goto label_2c3ca4;
        case 0x2c3ca8u: goto label_2c3ca8;
        case 0x2c3cacu: goto label_2c3cac;
        case 0x2c3cb0u: goto label_2c3cb0;
        case 0x2c3cb4u: goto label_2c3cb4;
        case 0x2c3cb8u: goto label_2c3cb8;
        case 0x2c3cbcu: goto label_2c3cbc;
        case 0x2c3cc0u: goto label_2c3cc0;
        case 0x2c3cc4u: goto label_2c3cc4;
        case 0x2c3cc8u: goto label_2c3cc8;
        case 0x2c3cccu: goto label_2c3ccc;
        case 0x2c3cd0u: goto label_2c3cd0;
        case 0x2c3cd4u: goto label_2c3cd4;
        case 0x2c3cd8u: goto label_2c3cd8;
        case 0x2c3cdcu: goto label_2c3cdc;
        case 0x2c3ce0u: goto label_2c3ce0;
        case 0x2c3ce4u: goto label_2c3ce4;
        case 0x2c3ce8u: goto label_2c3ce8;
        case 0x2c3cecu: goto label_2c3cec;
        case 0x2c3cf0u: goto label_2c3cf0;
        case 0x2c3cf4u: goto label_2c3cf4;
        case 0x2c3cf8u: goto label_2c3cf8;
        case 0x2c3cfcu: goto label_2c3cfc;
        case 0x2c3d00u: goto label_2c3d00;
        case 0x2c3d04u: goto label_2c3d04;
        case 0x2c3d08u: goto label_2c3d08;
        case 0x2c3d0cu: goto label_2c3d0c;
        case 0x2c3d10u: goto label_2c3d10;
        case 0x2c3d14u: goto label_2c3d14;
        case 0x2c3d18u: goto label_2c3d18;
        case 0x2c3d1cu: goto label_2c3d1c;
        case 0x2c3d20u: goto label_2c3d20;
        case 0x2c3d24u: goto label_2c3d24;
        case 0x2c3d28u: goto label_2c3d28;
        case 0x2c3d2cu: goto label_2c3d2c;
        case 0x2c3d30u: goto label_2c3d30;
        case 0x2c3d34u: goto label_2c3d34;
        case 0x2c3d38u: goto label_2c3d38;
        case 0x2c3d3cu: goto label_2c3d3c;
        case 0x2c3d40u: goto label_2c3d40;
        case 0x2c3d44u: goto label_2c3d44;
        case 0x2c3d48u: goto label_2c3d48;
        case 0x2c3d4cu: goto label_2c3d4c;
        case 0x2c3d50u: goto label_2c3d50;
        case 0x2c3d54u: goto label_2c3d54;
        case 0x2c3d58u: goto label_2c3d58;
        case 0x2c3d5cu: goto label_2c3d5c;
        case 0x2c3d60u: goto label_2c3d60;
        case 0x2c3d64u: goto label_2c3d64;
        case 0x2c3d68u: goto label_2c3d68;
        case 0x2c3d6cu: goto label_2c3d6c;
        case 0x2c3d70u: goto label_2c3d70;
        case 0x2c3d74u: goto label_2c3d74;
        case 0x2c3d78u: goto label_2c3d78;
        case 0x2c3d7cu: goto label_2c3d7c;
        case 0x2c3d80u: goto label_2c3d80;
        case 0x2c3d84u: goto label_2c3d84;
        case 0x2c3d88u: goto label_2c3d88;
        case 0x2c3d8cu: goto label_2c3d8c;
        case 0x2c3d90u: goto label_2c3d90;
        case 0x2c3d94u: goto label_2c3d94;
        case 0x2c3d98u: goto label_2c3d98;
        case 0x2c3d9cu: goto label_2c3d9c;
        case 0x2c3da0u: goto label_2c3da0;
        case 0x2c3da4u: goto label_2c3da4;
        case 0x2c3da8u: goto label_2c3da8;
        case 0x2c3dacu: goto label_2c3dac;
        case 0x2c3db0u: goto label_2c3db0;
        case 0x2c3db4u: goto label_2c3db4;
        case 0x2c3db8u: goto label_2c3db8;
        case 0x2c3dbcu: goto label_2c3dbc;
        case 0x2c3dc0u: goto label_2c3dc0;
        case 0x2c3dc4u: goto label_2c3dc4;
        case 0x2c3dc8u: goto label_2c3dc8;
        case 0x2c3dccu: goto label_2c3dcc;
        case 0x2c3dd0u: goto label_2c3dd0;
        case 0x2c3dd4u: goto label_2c3dd4;
        case 0x2c3dd8u: goto label_2c3dd8;
        case 0x2c3ddcu: goto label_2c3ddc;
        case 0x2c3de0u: goto label_2c3de0;
        case 0x2c3de4u: goto label_2c3de4;
        case 0x2c3de8u: goto label_2c3de8;
        case 0x2c3decu: goto label_2c3dec;
        case 0x2c3df0u: goto label_2c3df0;
        case 0x2c3df4u: goto label_2c3df4;
        case 0x2c3df8u: goto label_2c3df8;
        case 0x2c3dfcu: goto label_2c3dfc;
        case 0x2c3e00u: goto label_2c3e00;
        case 0x2c3e04u: goto label_2c3e04;
        case 0x2c3e08u: goto label_2c3e08;
        case 0x2c3e0cu: goto label_2c3e0c;
        case 0x2c3e10u: goto label_2c3e10;
        case 0x2c3e14u: goto label_2c3e14;
        case 0x2c3e18u: goto label_2c3e18;
        case 0x2c3e1cu: goto label_2c3e1c;
        case 0x2c3e20u: goto label_2c3e20;
        case 0x2c3e24u: goto label_2c3e24;
        case 0x2c3e28u: goto label_2c3e28;
        case 0x2c3e2cu: goto label_2c3e2c;
        case 0x2c3e30u: goto label_2c3e30;
        case 0x2c3e34u: goto label_2c3e34;
        case 0x2c3e38u: goto label_2c3e38;
        case 0x2c3e3cu: goto label_2c3e3c;
        case 0x2c3e40u: goto label_2c3e40;
        case 0x2c3e44u: goto label_2c3e44;
        case 0x2c3e48u: goto label_2c3e48;
        case 0x2c3e4cu: goto label_2c3e4c;
        case 0x2c3e50u: goto label_2c3e50;
        case 0x2c3e54u: goto label_2c3e54;
        case 0x2c3e58u: goto label_2c3e58;
        case 0x2c3e5cu: goto label_2c3e5c;
        case 0x2c3e60u: goto label_2c3e60;
        case 0x2c3e64u: goto label_2c3e64;
        case 0x2c3e68u: goto label_2c3e68;
        case 0x2c3e6cu: goto label_2c3e6c;
        case 0x2c3e70u: goto label_2c3e70;
        case 0x2c3e74u: goto label_2c3e74;
        case 0x2c3e78u: goto label_2c3e78;
        case 0x2c3e7cu: goto label_2c3e7c;
        case 0x2c3e80u: goto label_2c3e80;
        case 0x2c3e84u: goto label_2c3e84;
        case 0x2c3e88u: goto label_2c3e88;
        case 0x2c3e8cu: goto label_2c3e8c;
        case 0x2c3e90u: goto label_2c3e90;
        case 0x2c3e94u: goto label_2c3e94;
        case 0x2c3e98u: goto label_2c3e98;
        case 0x2c3e9cu: goto label_2c3e9c;
        case 0x2c3ea0u: goto label_2c3ea0;
        case 0x2c3ea4u: goto label_2c3ea4;
        case 0x2c3ea8u: goto label_2c3ea8;
        case 0x2c3eacu: goto label_2c3eac;
        case 0x2c3eb0u: goto label_2c3eb0;
        case 0x2c3eb4u: goto label_2c3eb4;
        case 0x2c3eb8u: goto label_2c3eb8;
        case 0x2c3ebcu: goto label_2c3ebc;
        case 0x2c3ec0u: goto label_2c3ec0;
        case 0x2c3ec4u: goto label_2c3ec4;
        case 0x2c3ec8u: goto label_2c3ec8;
        case 0x2c3eccu: goto label_2c3ecc;
        case 0x2c3ed0u: goto label_2c3ed0;
        case 0x2c3ed4u: goto label_2c3ed4;
        case 0x2c3ed8u: goto label_2c3ed8;
        case 0x2c3edcu: goto label_2c3edc;
        case 0x2c3ee0u: goto label_2c3ee0;
        case 0x2c3ee4u: goto label_2c3ee4;
        case 0x2c3ee8u: goto label_2c3ee8;
        case 0x2c3eecu: goto label_2c3eec;
        case 0x2c3ef0u: goto label_2c3ef0;
        case 0x2c3ef4u: goto label_2c3ef4;
        case 0x2c3ef8u: goto label_2c3ef8;
        case 0x2c3efcu: goto label_2c3efc;
        case 0x2c3f00u: goto label_2c3f00;
        case 0x2c3f04u: goto label_2c3f04;
        case 0x2c3f08u: goto label_2c3f08;
        case 0x2c3f0cu: goto label_2c3f0c;
        case 0x2c3f10u: goto label_2c3f10;
        case 0x2c3f14u: goto label_2c3f14;
        case 0x2c3f18u: goto label_2c3f18;
        case 0x2c3f1cu: goto label_2c3f1c;
        case 0x2c3f20u: goto label_2c3f20;
        case 0x2c3f24u: goto label_2c3f24;
        case 0x2c3f28u: goto label_2c3f28;
        case 0x2c3f2cu: goto label_2c3f2c;
        case 0x2c3f30u: goto label_2c3f30;
        case 0x2c3f34u: goto label_2c3f34;
        case 0x2c3f38u: goto label_2c3f38;
        case 0x2c3f3cu: goto label_2c3f3c;
        case 0x2c3f40u: goto label_2c3f40;
        case 0x2c3f44u: goto label_2c3f44;
        case 0x2c3f48u: goto label_2c3f48;
        case 0x2c3f4cu: goto label_2c3f4c;
        case 0x2c3f50u: goto label_2c3f50;
        case 0x2c3f54u: goto label_2c3f54;
        case 0x2c3f58u: goto label_2c3f58;
        case 0x2c3f5cu: goto label_2c3f5c;
        case 0x2c3f60u: goto label_2c3f60;
        case 0x2c3f64u: goto label_2c3f64;
        case 0x2c3f68u: goto label_2c3f68;
        case 0x2c3f6cu: goto label_2c3f6c;
        case 0x2c3f70u: goto label_2c3f70;
        case 0x2c3f74u: goto label_2c3f74;
        case 0x2c3f78u: goto label_2c3f78;
        case 0x2c3f7cu: goto label_2c3f7c;
        case 0x2c3f80u: goto label_2c3f80;
        case 0x2c3f84u: goto label_2c3f84;
        case 0x2c3f88u: goto label_2c3f88;
        case 0x2c3f8cu: goto label_2c3f8c;
        case 0x2c3f90u: goto label_2c3f90;
        case 0x2c3f94u: goto label_2c3f94;
        case 0x2c3f98u: goto label_2c3f98;
        case 0x2c3f9cu: goto label_2c3f9c;
        case 0x2c3fa0u: goto label_2c3fa0;
        case 0x2c3fa4u: goto label_2c3fa4;
        case 0x2c3fa8u: goto label_2c3fa8;
        case 0x2c3facu: goto label_2c3fac;
        case 0x2c3fb0u: goto label_2c3fb0;
        case 0x2c3fb4u: goto label_2c3fb4;
        case 0x2c3fb8u: goto label_2c3fb8;
        case 0x2c3fbcu: goto label_2c3fbc;
        case 0x2c3fc0u: goto label_2c3fc0;
        case 0x2c3fc4u: goto label_2c3fc4;
        case 0x2c3fc8u: goto label_2c3fc8;
        case 0x2c3fccu: goto label_2c3fcc;
        case 0x2c3fd0u: goto label_2c3fd0;
        case 0x2c3fd4u: goto label_2c3fd4;
        case 0x2c3fd8u: goto label_2c3fd8;
        case 0x2c3fdcu: goto label_2c3fdc;
        case 0x2c3fe0u: goto label_2c3fe0;
        case 0x2c3fe4u: goto label_2c3fe4;
        case 0x2c3fe8u: goto label_2c3fe8;
        case 0x2c3fecu: goto label_2c3fec;
        case 0x2c3ff0u: goto label_2c3ff0;
        case 0x2c3ff4u: goto label_2c3ff4;
        case 0x2c3ff8u: goto label_2c3ff8;
        case 0x2c3ffcu: goto label_2c3ffc;
        case 0x2c4000u: goto label_2c4000;
        case 0x2c4004u: goto label_2c4004;
        case 0x2c4008u: goto label_2c4008;
        case 0x2c400cu: goto label_2c400c;
        case 0x2c4010u: goto label_2c4010;
        case 0x2c4014u: goto label_2c4014;
        case 0x2c4018u: goto label_2c4018;
        case 0x2c401cu: goto label_2c401c;
        case 0x2c4020u: goto label_2c4020;
        case 0x2c4024u: goto label_2c4024;
        case 0x2c4028u: goto label_2c4028;
        case 0x2c402cu: goto label_2c402c;
        case 0x2c4030u: goto label_2c4030;
        case 0x2c4034u: goto label_2c4034;
        case 0x2c4038u: goto label_2c4038;
        case 0x2c403cu: goto label_2c403c;
        case 0x2c4040u: goto label_2c4040;
        case 0x2c4044u: goto label_2c4044;
        case 0x2c4048u: goto label_2c4048;
        case 0x2c404cu: goto label_2c404c;
        case 0x2c4050u: goto label_2c4050;
        case 0x2c4054u: goto label_2c4054;
        case 0x2c4058u: goto label_2c4058;
        case 0x2c405cu: goto label_2c405c;
        case 0x2c4060u: goto label_2c4060;
        case 0x2c4064u: goto label_2c4064;
        case 0x2c4068u: goto label_2c4068;
        case 0x2c406cu: goto label_2c406c;
        case 0x2c4070u: goto label_2c4070;
        case 0x2c4074u: goto label_2c4074;
        case 0x2c4078u: goto label_2c4078;
        case 0x2c407cu: goto label_2c407c;
        case 0x2c4080u: goto label_2c4080;
        case 0x2c4084u: goto label_2c4084;
        case 0x2c4088u: goto label_2c4088;
        case 0x2c408cu: goto label_2c408c;
        case 0x2c4090u: goto label_2c4090;
        case 0x2c4094u: goto label_2c4094;
        case 0x2c4098u: goto label_2c4098;
        case 0x2c409cu: goto label_2c409c;
        case 0x2c40a0u: goto label_2c40a0;
        case 0x2c40a4u: goto label_2c40a4;
        case 0x2c40a8u: goto label_2c40a8;
        case 0x2c40acu: goto label_2c40ac;
        case 0x2c40b0u: goto label_2c40b0;
        case 0x2c40b4u: goto label_2c40b4;
        case 0x2c40b8u: goto label_2c40b8;
        case 0x2c40bcu: goto label_2c40bc;
        case 0x2c40c0u: goto label_2c40c0;
        case 0x2c40c4u: goto label_2c40c4;
        case 0x2c40c8u: goto label_2c40c8;
        case 0x2c40ccu: goto label_2c40cc;
        case 0x2c40d0u: goto label_2c40d0;
        case 0x2c40d4u: goto label_2c40d4;
        case 0x2c40d8u: goto label_2c40d8;
        case 0x2c40dcu: goto label_2c40dc;
        case 0x2c40e0u: goto label_2c40e0;
        case 0x2c40e4u: goto label_2c40e4;
        case 0x2c40e8u: goto label_2c40e8;
        case 0x2c40ecu: goto label_2c40ec;
        case 0x2c40f0u: goto label_2c40f0;
        case 0x2c40f4u: goto label_2c40f4;
        case 0x2c40f8u: goto label_2c40f8;
        case 0x2c40fcu: goto label_2c40fc;
        case 0x2c4100u: goto label_2c4100;
        case 0x2c4104u: goto label_2c4104;
        case 0x2c4108u: goto label_2c4108;
        case 0x2c410cu: goto label_2c410c;
        case 0x2c4110u: goto label_2c4110;
        case 0x2c4114u: goto label_2c4114;
        case 0x2c4118u: goto label_2c4118;
        case 0x2c411cu: goto label_2c411c;
        case 0x2c4120u: goto label_2c4120;
        case 0x2c4124u: goto label_2c4124;
        case 0x2c4128u: goto label_2c4128;
        case 0x2c412cu: goto label_2c412c;
        case 0x2c4130u: goto label_2c4130;
        case 0x2c4134u: goto label_2c4134;
        case 0x2c4138u: goto label_2c4138;
        case 0x2c413cu: goto label_2c413c;
        case 0x2c4140u: goto label_2c4140;
        case 0x2c4144u: goto label_2c4144;
        case 0x2c4148u: goto label_2c4148;
        case 0x2c414cu: goto label_2c414c;
        case 0x2c4150u: goto label_2c4150;
        case 0x2c4154u: goto label_2c4154;
        case 0x2c4158u: goto label_2c4158;
        case 0x2c415cu: goto label_2c415c;
        case 0x2c4160u: goto label_2c4160;
        case 0x2c4164u: goto label_2c4164;
        case 0x2c4168u: goto label_2c4168;
        case 0x2c416cu: goto label_2c416c;
        case 0x2c4170u: goto label_2c4170;
        case 0x2c4174u: goto label_2c4174;
        case 0x2c4178u: goto label_2c4178;
        case 0x2c417cu: goto label_2c417c;
        case 0x2c4180u: goto label_2c4180;
        case 0x2c4184u: goto label_2c4184;
        case 0x2c4188u: goto label_2c4188;
        case 0x2c418cu: goto label_2c418c;
        case 0x2c4190u: goto label_2c4190;
        case 0x2c4194u: goto label_2c4194;
        case 0x2c4198u: goto label_2c4198;
        case 0x2c419cu: goto label_2c419c;
        case 0x2c41a0u: goto label_2c41a0;
        case 0x2c41a4u: goto label_2c41a4;
        case 0x2c41a8u: goto label_2c41a8;
        case 0x2c41acu: goto label_2c41ac;
        case 0x2c41b0u: goto label_2c41b0;
        case 0x2c41b4u: goto label_2c41b4;
        case 0x2c41b8u: goto label_2c41b8;
        case 0x2c41bcu: goto label_2c41bc;
        case 0x2c41c0u: goto label_2c41c0;
        case 0x2c41c4u: goto label_2c41c4;
        case 0x2c41c8u: goto label_2c41c8;
        case 0x2c41ccu: goto label_2c41cc;
        case 0x2c41d0u: goto label_2c41d0;
        case 0x2c41d4u: goto label_2c41d4;
        case 0x2c41d8u: goto label_2c41d8;
        case 0x2c41dcu: goto label_2c41dc;
        case 0x2c41e0u: goto label_2c41e0;
        case 0x2c41e4u: goto label_2c41e4;
        case 0x2c41e8u: goto label_2c41e8;
        case 0x2c41ecu: goto label_2c41ec;
        case 0x2c41f0u: goto label_2c41f0;
        case 0x2c41f4u: goto label_2c41f4;
        case 0x2c41f8u: goto label_2c41f8;
        case 0x2c41fcu: goto label_2c41fc;
        case 0x2c4200u: goto label_2c4200;
        case 0x2c4204u: goto label_2c4204;
        case 0x2c4208u: goto label_2c4208;
        case 0x2c420cu: goto label_2c420c;
        case 0x2c4210u: goto label_2c4210;
        case 0x2c4214u: goto label_2c4214;
        case 0x2c4218u: goto label_2c4218;
        case 0x2c421cu: goto label_2c421c;
        case 0x2c4220u: goto label_2c4220;
        case 0x2c4224u: goto label_2c4224;
        case 0x2c4228u: goto label_2c4228;
        case 0x2c422cu: goto label_2c422c;
        case 0x2c4230u: goto label_2c4230;
        case 0x2c4234u: goto label_2c4234;
        case 0x2c4238u: goto label_2c4238;
        case 0x2c423cu: goto label_2c423c;
        case 0x2c4240u: goto label_2c4240;
        case 0x2c4244u: goto label_2c4244;
        case 0x2c4248u: goto label_2c4248;
        case 0x2c424cu: goto label_2c424c;
        case 0x2c4250u: goto label_2c4250;
        case 0x2c4254u: goto label_2c4254;
        case 0x2c4258u: goto label_2c4258;
        case 0x2c425cu: goto label_2c425c;
        case 0x2c4260u: goto label_2c4260;
        case 0x2c4264u: goto label_2c4264;
        case 0x2c4268u: goto label_2c4268;
        case 0x2c426cu: goto label_2c426c;
        case 0x2c4270u: goto label_2c4270;
        case 0x2c4274u: goto label_2c4274;
        case 0x2c4278u: goto label_2c4278;
        case 0x2c427cu: goto label_2c427c;
        case 0x2c4280u: goto label_2c4280;
        case 0x2c4284u: goto label_2c4284;
        case 0x2c4288u: goto label_2c4288;
        case 0x2c428cu: goto label_2c428c;
        case 0x2c4290u: goto label_2c4290;
        case 0x2c4294u: goto label_2c4294;
        case 0x2c4298u: goto label_2c4298;
        case 0x2c429cu: goto label_2c429c;
        case 0x2c42a0u: goto label_2c42a0;
        case 0x2c42a4u: goto label_2c42a4;
        case 0x2c42a8u: goto label_2c42a8;
        case 0x2c42acu: goto label_2c42ac;
        case 0x2c42b0u: goto label_2c42b0;
        case 0x2c42b4u: goto label_2c42b4;
        case 0x2c42b8u: goto label_2c42b8;
        case 0x2c42bcu: goto label_2c42bc;
        case 0x2c42c0u: goto label_2c42c0;
        case 0x2c42c4u: goto label_2c42c4;
        case 0x2c42c8u: goto label_2c42c8;
        case 0x2c42ccu: goto label_2c42cc;
        case 0x2c42d0u: goto label_2c42d0;
        case 0x2c42d4u: goto label_2c42d4;
        case 0x2c42d8u: goto label_2c42d8;
        case 0x2c42dcu: goto label_2c42dc;
        case 0x2c42e0u: goto label_2c42e0;
        case 0x2c42e4u: goto label_2c42e4;
        case 0x2c42e8u: goto label_2c42e8;
        case 0x2c42ecu: goto label_2c42ec;
        case 0x2c42f0u: goto label_2c42f0;
        case 0x2c42f4u: goto label_2c42f4;
        case 0x2c42f8u: goto label_2c42f8;
        case 0x2c42fcu: goto label_2c42fc;
        case 0x2c4300u: goto label_2c4300;
        case 0x2c4304u: goto label_2c4304;
        case 0x2c4308u: goto label_2c4308;
        case 0x2c430cu: goto label_2c430c;
        case 0x2c4310u: goto label_2c4310;
        case 0x2c4314u: goto label_2c4314;
        case 0x2c4318u: goto label_2c4318;
        case 0x2c431cu: goto label_2c431c;
        case 0x2c4320u: goto label_2c4320;
        case 0x2c4324u: goto label_2c4324;
        case 0x2c4328u: goto label_2c4328;
        case 0x2c432cu: goto label_2c432c;
        case 0x2c4330u: goto label_2c4330;
        case 0x2c4334u: goto label_2c4334;
        case 0x2c4338u: goto label_2c4338;
        case 0x2c433cu: goto label_2c433c;
        case 0x2c4340u: goto label_2c4340;
        case 0x2c4344u: goto label_2c4344;
        case 0x2c4348u: goto label_2c4348;
        case 0x2c434cu: goto label_2c434c;
        case 0x2c4350u: goto label_2c4350;
        case 0x2c4354u: goto label_2c4354;
        case 0x2c4358u: goto label_2c4358;
        case 0x2c435cu: goto label_2c435c;
        case 0x2c4360u: goto label_2c4360;
        case 0x2c4364u: goto label_2c4364;
        case 0x2c4368u: goto label_2c4368;
        case 0x2c436cu: goto label_2c436c;
        case 0x2c4370u: goto label_2c4370;
        case 0x2c4374u: goto label_2c4374;
        case 0x2c4378u: goto label_2c4378;
        case 0x2c437cu: goto label_2c437c;
        case 0x2c4380u: goto label_2c4380;
        case 0x2c4384u: goto label_2c4384;
        case 0x2c4388u: goto label_2c4388;
        case 0x2c438cu: goto label_2c438c;
        case 0x2c4390u: goto label_2c4390;
        case 0x2c4394u: goto label_2c4394;
        case 0x2c4398u: goto label_2c4398;
        case 0x2c439cu: goto label_2c439c;
        case 0x2c43a0u: goto label_2c43a0;
        case 0x2c43a4u: goto label_2c43a4;
        case 0x2c43a8u: goto label_2c43a8;
        case 0x2c43acu: goto label_2c43ac;
        case 0x2c43b0u: goto label_2c43b0;
        case 0x2c43b4u: goto label_2c43b4;
        case 0x2c43b8u: goto label_2c43b8;
        case 0x2c43bcu: goto label_2c43bc;
        case 0x2c43c0u: goto label_2c43c0;
        case 0x2c43c4u: goto label_2c43c4;
        case 0x2c43c8u: goto label_2c43c8;
        case 0x2c43ccu: goto label_2c43cc;
        case 0x2c43d0u: goto label_2c43d0;
        case 0x2c43d4u: goto label_2c43d4;
        case 0x2c43d8u: goto label_2c43d8;
        case 0x2c43dcu: goto label_2c43dc;
        case 0x2c43e0u: goto label_2c43e0;
        case 0x2c43e4u: goto label_2c43e4;
        case 0x2c43e8u: goto label_2c43e8;
        case 0x2c43ecu: goto label_2c43ec;
        case 0x2c43f0u: goto label_2c43f0;
        case 0x2c43f4u: goto label_2c43f4;
        case 0x2c43f8u: goto label_2c43f8;
        case 0x2c43fcu: goto label_2c43fc;
        case 0x2c4400u: goto label_2c4400;
        case 0x2c4404u: goto label_2c4404;
        case 0x2c4408u: goto label_2c4408;
        case 0x2c440cu: goto label_2c440c;
        case 0x2c4410u: goto label_2c4410;
        case 0x2c4414u: goto label_2c4414;
        case 0x2c4418u: goto label_2c4418;
        case 0x2c441cu: goto label_2c441c;
        case 0x2c4420u: goto label_2c4420;
        case 0x2c4424u: goto label_2c4424;
        case 0x2c4428u: goto label_2c4428;
        case 0x2c442cu: goto label_2c442c;
        default: return;
    }

label_2c3c60:
    // 0x2c3c60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3c60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3c64:
    // 0x2c3c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c68:
    // 0x2c3c68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3c68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3c6c:
    // 0x2c3c6c: 0x1f99e47  .word       0x01F99E47                   # srav        $s3, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3c6cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2c3c70:
    // 0x2c3c70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3c70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3c74:
    // 0x2c3c74: 0x1fa4e87  .word       0x01FA4E87                   # srav        $t1, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3c74u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2c3c78:
    // 0x2c3c78: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2c3c78u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2c3c7c:
    // 0x2c3c7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c80:
    // 0x2c3c80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3c80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3c84:
    // 0x2c3c84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c88:
    // 0x2c3c88: 0x500c0007  beql        $zero, $t4, . + 4 + (0x7 << 2)
label_2c3c8c:
    if (ctx->pc == 0x2C3C8Cu) {
        ctx->pc = 0x2C3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C88u;
        // 0x2c3c8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C90u;
        goto label_2c3c90;
    }
    ctx->pc = 0x2C3C88u;
    {
        const bool branch_taken_0x2c3c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c3c88) {
            ctx->pc = 0x2C3C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3C88u;
            // 0x2c3c8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3CA8u;
            goto label_2c3ca8;
        }
    }
    ctx->pc = 0x2C3C90u;
label_2c3c90:
    // 0x2c3c90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3c90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3c94:
    // 0x2c3c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3c98:
    // 0x2c3c98: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2c3c98u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2c3c9c:
    // 0x2c3c9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3c9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ca0:
    // 0x2c3ca0: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2c3ca0u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2c3ca4:
    // 0x2c3ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ca8:
    // 0x2c3ca8: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2c3cac:
    if (ctx->pc == 0x2C3CACu) {
        ctx->pc = 0x2C3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CA8u;
        // 0x2c3cac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3CB0u;
        goto label_2c3cb0;
    }
    ctx->pc = 0x2C3CA8u;
    {
        const bool branch_taken_0x2c3ca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CA8u;
        // 0x2c3cac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ca8) {
            ctx->pc = 0x2DBCB0u;
            return;
        }
    }
    ctx->pc = 0x2C3CB0u;
label_2c3cb0:
    // 0x2c3cb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3cb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3cb4:
    // 0x2c3cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3cb8:
    // 0x2c3cb8: 0x400007f9  .word       0x400007F9                   # mfc0        $zero, Index # 000007F9 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c3cb8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c3cbc:
    // 0x2c3cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3cc0:
    // 0x2c3cc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3cc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3cc4:
    // 0x2c3cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3cc8:
    // 0x2c3cc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3cc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3ccc:
    // 0x2c3ccc: 0x1d9d6ec  .word       0x01D9D6EC                   # dadd        $k0, $t6, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3cccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_2c3cd0:
    // 0x2c3cd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3cd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3cd4:
    // 0x2c3cd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3cd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3cd8:
    // 0x2c3cd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3cd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3cdc:
    // 0x2c3cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ce0:
    // 0x2c3ce0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3ce0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3ce4:
    // 0x2c3ce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3ce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ce8:
    // 0x2c3ce8: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2c3ce8u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2c3cec:
    // 0x2c3cec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3cecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3cf0:
    // 0x2c3cf0: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2c3cf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2c3cf4:
    // 0x2c3cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3cf8:
    // 0x2c3cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3cfc:
    // 0x2c3cfc: 0x800760  .word       0x00800760                   # add         $zero, $a0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3cfcu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2c3d00:
    // 0x2c3d00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d04:
    // 0x2c3d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3d08:
    // 0x2c3d08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d0c:
    // 0x2c3d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3d10:
    // 0x2c3d10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d14:
    // 0x2c3d14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3d14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3d18:
    // 0x2c3d18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d1c:
    // 0x2c3d1c: 0x9de9fd  .word       0x009DE9FD                   # INVALID     $a0, $sp, -0x1603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d1cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C3D1C raw=0x009DE9FD");
 /* MITIGATED */
label_2c3d20:
    // 0x2c3d20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d24:
    // 0x2c3d24: 0x1f34e2c  .word       0x01F34E2C                   # dadd        $t1, $t7, $s3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d24u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_2c3d28:
    // 0x2c3d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d2c:
    // 0x2c3d2c: 0x1f4566c  .word       0x01F4566C                   # dadd        $t2, $t7, $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d2cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_2c3d30:
    // 0x2c3d30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d34:
    // 0x2c3d34: 0x1f586ac  .word       0x01F586AC                   # dadd        $s0, $t7, $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d34u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2c3d38:
    // 0x2c3d38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d3c:
    // 0x2c3d3c: 0x1f68eec  .word       0x01F68EEC                   # dadd        $s1, $t7, $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d3cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 22); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2c3d40:
    // 0x2c3d40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d44:
    // 0x2c3d44: 0x1f7972c  .word       0x01F7972C                   # dadd        $s2, $t7, $s7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d44u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 23); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2c3d48:
    // 0x2c3d48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d4c:
    // 0x2c3d4c: 0x1fdc619  .word       0x01FDC619                   # multu       $t7, $sp # 0000C600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d4cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_2c3d50:
    // 0x2c3d50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d54:
    // 0x2c3d54: 0x1fdce59  .word       0x01FDCE59                   # multu       $t7, $sp # 0000CE40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d54u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2c3d58:
    // 0x2c3d58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d5c:
    // 0x2c3d5c: 0x1fdd699  .word       0x01FDD699                   # multu       $t7, $sp # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d5cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2c3d60:
    // 0x2c3d60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d64:
    // 0x2c3d64: 0x1fdded9  .word       0x01FDDED9                   # multu       $t7, $sp # 0000DEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d64u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2c3d68:
    // 0x2c3d68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d6c:
    // 0x2c3d6c: 0x1fde719  .word       0x01FDE719                   # multu       $t7, $sp # 0000E700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3d6cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2c3d70:
    // 0x2c3d70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d74:
    // 0x2c3d74: 0x1f3c628  .word       0x01F3C628                   # mfsa        $t8 # 01F30600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3d74u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_2c3d78:
    // 0x2c3d78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d7c:
    // 0x2c3d7c: 0x1f4ce68  .word       0x01F4CE68                   # mfsa        $t9 # 01F40640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3d7cu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2c3d80:
    // 0x2c3d80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d84:
    // 0x2c3d84: 0x1f5d6a8  .word       0x01F5D6A8                   # mfsa        $k0 # 01F50680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3d84u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2c3d88:
    // 0x2c3d88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d8c:
    // 0x2c3d8c: 0x1f6dee8  .word       0x01F6DEE8                   # mfsa        $k1 # 01F606C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3d8cu;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2c3d90:
    // 0x2c3d90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3d90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3d94:
    // 0x2c3d94: 0x1f7e728  .word       0x01F7E728                   # mfsa        $gp # 01F70700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c3d94u;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_2c3d98:
    // 0x2c3d98: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c3d98u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C3D98 raw=0x48000800");
 /* MITIGATED */
label_2c3d9c:
    // 0x2c3d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3da0:
    // 0x2c3da0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3da0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3da4:
    // 0x2c3da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3da8:
    // 0x2c3da8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c3da8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c3dac:
    // 0x2c3dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3db0:
    // 0x2c3db0: 0x808613fe  lb          $a2, 0x13FE($a0)
    ctx->pc = 0x2c3db0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5118)));
label_2c3db4:
    // 0x2c3db4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3db4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3db8:
    // 0x2c3db8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3db8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C3DB8 raw=0x01FA0005");
 /* MITIGATED */
label_2c3dbc:
    // 0x2c3dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3dc0:
    // 0x2c3dc0: 0x1f41800  .word       0x01F41800                   # sll         $v1, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2c3dc4:
    // 0x2c3dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3dc8:
    // 0x2c3dc8: 0x1f0000a  movz        $zero, $t7, $s0
    ctx->pc = 0x2c3dc8u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2c3dcc:
    // 0x2c3dcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3dccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3dd0:
    // 0x2c3dd0: 0x1f1000b  movn        $zero, $t7, $s1
    ctx->pc = 0x2c3dd0u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2c3dd4:
    // 0x2c3dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3dd8:
    // 0x2c3dd8: 0x1f2000c  .word       0x01F2000C                   # syscall     0 # 01F20000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3dd8u;
    ctx->pc = 0x2C3DDCu;
runtime->handleSyscall(rdram, ctx, 0x7C800u);
label_2c3ddc:
    // 0x2c3ddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3ddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3de0:
    // 0x2c3de0: 0x1f3000d  break       499
    ctx->pc = 0x2c3de0u;
    runtime->handleBreak(rdram, ctx);
label_2c3de4:
    // 0x2c3de4: 0x1f481bc  .word       0x01F481BC                   # dsll32      $s0, $s4, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3de4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 6));
label_2c3de8:
    // 0x2c3de8: 0x800a31f0  lb          $t2, 0x31F0($zero)
    ctx->pc = 0x2c3de8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x31F0u));
label_2c3dec:
    // 0x2c3dec: 0x1f488bd  .word       0x01F488BD                   # INVALID     $t7, $s4, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3decu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C3DEC raw=0x01F488BD");
 /* MITIGATED */
label_2c3df0:
    // 0x2c3df0: 0x800a39f0  lb          $t2, 0x39F0($zero)
    ctx->pc = 0x2c3df0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x39F0u));
label_2c3df4:
    // 0x2c3df4: 0x1f490be  .word       0x01F490BE                   # dsrl32      $s2, $s4, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3df4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) >> (32 + 2));
label_2c3df8:
    // 0x2c3df8: 0x800a39f0  lb          $t2, 0x39F0($zero)
    ctx->pc = 0x2c3df8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x39F0u));
label_2c3dfc:
    // 0x2c3dfc: 0x1f49d4b  .word       0x01F49D4B                   # movn        $s3, $t7, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3dfcu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
label_2c3e00:
    // 0x2c3e00: 0x10073801  beq         $zero, $a3, . + 4 + (0x3801 << 2)
label_2c3e04:
    if (ctx->pc == 0x2C3E04u) {
        ctx->pc = 0x2C3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E00u;
        // 0x2c3e04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E08u;
        goto label_2c3e08;
    }
    ctx->pc = 0x2C3E00u;
    {
        const bool branch_taken_0x2c3e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C3E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E00u;
        // 0x2c3e04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e00) {
            ctx->pc = 0x2D1E08u;
            return;
        }
    }
    ctx->pc = 0x2C3E08u;
label_2c3e08:
    // 0x2c3e08: 0x802713ff  lb          $a3, 0x13FF($at)
    ctx->pc = 0x2c3e08u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5119)));
label_2c3e0c:
    // 0x2c3e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3e10:
    // 0x2c3e10: 0x81e6d37d  lb          $a2, -0x2C83($t7)
    ctx->pc = 0x2c3e10u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2c3e14:
    // 0x2c3e14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3e14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3e18:
    // 0x2c3e18: 0x81e7d37d  lb          $a3, -0x2C83($t7)
    ctx->pc = 0x2c3e18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2c3e1c:
    // 0x2c3e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3e20:
    // 0x2c3e20: 0xb0a37ff  j           func_C28DFFC
label_2c3e24:
    if (ctx->pc == 0x2C3E24u) {
        ctx->pc = 0x2C3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E20u;
        // 0x2c3e24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E28u;
        goto label_2c3e28;
    }
    ctx->pc = 0x2C3E20u;
    ctx->pc = 0x2C3E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E20u;
    // 0x2c3e24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC28DFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC28DFFCu, 0x2C3E20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C3E28u;
label_2c3e28:
    // 0x2c3e28: 0xb0a3fff  j           func_C28FFFC
label_2c3e2c:
    if (ctx->pc == 0x2C3E2Cu) {
        ctx->pc = 0x2C3E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E28u;
        // 0x2c3e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E30u;
        goto label_2c3e30;
    }
    ctx->pc = 0x2C3E28u;
    ctx->pc = 0x2C3E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E28u;
    // 0x2c3e2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC28FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC28FFFCu, 0x2C3E28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C3E30u;
label_2c3e30:
    // 0x2c3e30: 0x81f503bc  lb          $s5, 0x3BC($t7)
    ctx->pc = 0x2c3e30u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c3e34:
    // 0x2c3e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3e38:
    // 0x2c3e38: 0x19a1803  .word       0x019A1803                   # sra         $v1, $k0, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 26), 0));
label_2c3e3c:
    // 0x2c3e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3e40:
    // 0x2c3e40: 0x19b1804  sllv        $v1, $k1, $t4
    ctx->pc = 0x2c3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 27), GPR_U32(ctx, 12) & 0x1F));
label_2c3e44:
    // 0x2c3e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3e48:
    // 0x2c3e48: 0x1f81801  .word       0x01F81801                   # INVALID     $t7, $t8, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e48u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C3E48 raw=0x01F81801");
 /* MITIGATED */
label_2c3e4c:
    // 0x2c3e4c: 0x400683  .word       0x00400683                   # sra         $zero, $zero, 26 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e4cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 26));
label_2c3e50:
    // 0x2c3e50: 0x1f91802  .word       0x01F91802                   # srl         $v1, $t9, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 25), 0));
label_2c3e54:
    // 0x2c3e54: 0x4006c3  .word       0x004006C3                   # sra         $zero, $zero, 27 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 27));
label_2c3e58:
    // 0x2c3e58: 0x1f41805  .word       0x01F41805                   # INVALID     $t7, $s4, 0x1805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e58u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C3E58 raw=0x01F41805");
 /* MITIGATED */
label_2c3e5c:
    // 0x2c3e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3e60:
    // 0x2c3e60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3e60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3e64:
    // 0x2c3e64: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2c3e68:
    // 0x2c3e68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3e68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3e6c:
    // 0x2c3e6c: 0x20f5e1  .word       0x0020F5E1                   # addu        $fp, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2c3e70:
    // 0x2c3e70: 0x0  nop
    ctx->pc = 0x2c3e70u;
    // NOP
label_2c3e74:
    // 0x2c3e74: 0x4a140650  vmaxx       $vf25, $vf0, $vf20x
    ctx->pc = 0x2c3e74u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_2c3e78:
    // 0x2c3e78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3e78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3e7c:
    // 0x2c3e7c: 0x1c0ad9c  .word       0x01C0AD9C                   # dmult       $t6, $zero # 0000AD80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e7cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C3E7C raw=0x01C0AD9C");
 /* MITIGATED */
label_2c3e80:
    // 0x2c3e80: 0x10063003  beq         $zero, $a2, . + 4 + (0x3003 << 2)
label_2c3e84:
    if (ctx->pc == 0x2C3E84u) {
        ctx->pc = 0x2C3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E80u;
        // 0x2c3e84: 0x1c0d69c  .word       0x01C0D69C                   # dmult       $t6, $zero # 0000D680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C3E84 raw=0x01C0D69C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E88u;
        goto label_2c3e88;
    }
    ctx->pc = 0x2C3E80u;
    {
        const bool branch_taken_0x2c3e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E80u;
        // 0x2c3e84: 0x1c0d69c  .word       0x01C0D69C                   # dmult       $t6, $zero # 0000D680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C3E84 raw=0x01C0D69C");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e80) {
            ctx->pc = 0x2CFE90u;
            return;
        }
    }
    ctx->pc = 0x2C3E88u;
label_2c3e88:
    // 0x2c3e88: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2c3e8c:
    if (ctx->pc == 0x2C3E8Cu) {
        ctx->pc = 0x2C3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E88u;
        // 0x2c3e8c: 0x1c0dedc  .word       0x01C0DEDC                   # dmult       $t6, $zero # 0000DEC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C3E8C raw=0x01C0DEDC");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E90u;
        goto label_2c3e90;
    }
    ctx->pc = 0x2C3E88u;
    {
        const bool branch_taken_0x2c3e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E88u;
        // 0x2c3e8c: 0x1c0dedc  .word       0x01C0DEDC                   # dmult       $t6, $zero # 0000DEC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C3E8C raw=0x01C0DEDC");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e88) {
            ctx->pc = 0x2D1E98u;
            return;
        }
    }
    ctx->pc = 0x2C3E90u;
label_2c3e90:
    // 0x2c3e90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3e90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3e94:
    // 0x2c3e94: 0x20bddf  .word       0x0020BDDF                   # ddivu       $s7, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e94u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C3E94 raw=0x0020BDDF");
 /* MITIGATED */
label_2c3e98:
    // 0x2c3e98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3e98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3e9c:
    // 0x2c3e9c: 0x1f8c17c  .word       0x01F8C17C                   # dsll32      $t8, $t8, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3e9cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 5));
label_2c3ea0:
    // 0x2c3ea0: 0x3e6d7fd  .word       0x03E6D7FD                   # INVALID     $ra, $a2, -0x2803 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3ea0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C3EA0 raw=0x03E6D7FD");
 /* MITIGATED */
label_2c3ea4:
    // 0x2c3ea4: 0x1f9c97c  .word       0x01F9C97C                   # dsll32      $t9, $t9, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3ea4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 5));
label_2c3ea8:
    // 0x2c3ea8: 0x3e7dffd  .word       0x03E7DFFD                   # INVALID     $ra, $a3, -0x2003 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3ea8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C3EA8 raw=0x03E7DFFD");
 /* MITIGATED */
label_2c3eac:
    // 0x2c3eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3eb0:
    // 0x2c3eb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3eb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3eb4:
    // 0x2c3eb4: 0x20bd90  .word       0x0020BD90                   # mfhi        $s7 # 00200580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3eb4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_2c3eb8:
    // 0x2c3eb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3eb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3ebc:
    // 0x2c3ebc: 0x1f481bc  .word       0x01F481BC                   # dsll32      $s0, $s4, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3ebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 6));
label_2c3ec0:
    // 0x2c3ec0: 0x3e6c7fe  .word       0x03E6C7FE                   # dsrl32      $t8, $a2, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3ec0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) >> (32 + 31));
label_2c3ec4:
    // 0x2c3ec4: 0x1f488bd  .word       0x01F488BD                   # INVALID     $t7, $s4, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3ec4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C3EC4 raw=0x01F488BD");
 /* MITIGATED */
label_2c3ec8:
    // 0x2c3ec8: 0x3e7cffe  .word       0x03E7CFFE                   # dsrl32      $t9, $a3, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3ec8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 7) >> (32 + 31));
label_2c3ecc:
    // 0x2c3ecc: 0x1f490be  .word       0x01F490BE                   # dsrl32      $s2, $s4, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3eccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) >> (32 + 2));
label_2c3ed0:
    // 0x2c3ed0: 0x10031805  beq         $zero, $v1, . + 4 + (0x1805 << 2)
label_2c3ed4:
    if (ctx->pc == 0x2C3ED4u) {
        ctx->pc = 0x2C3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3ED0u;
        // 0x2c3ed4: 0x1f6b17d  .word       0x01F6B17D                   # INVALID     $t7, $s6, -0x4E83 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C3ED4 raw=0x01F6B17D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3ED8u;
        goto label_2c3ed8;
    }
    ctx->pc = 0x2C3ED0u;
    {
        const bool branch_taken_0x2c3ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3ED0u;
        // 0x2c3ed4: 0x1f6b17d  .word       0x01F6B17D                   # INVALID     $t7, $s6, -0x4E83 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C3ED4 raw=0x01F6B17D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ed0) {
            ctx->pc = 0x2C9EE8u;
            { ctx->pc = 0x2c9ee8; return; }
        }
    }
    ctx->pc = 0x2C3ED8u;
label_2c3ed8:
    // 0x2c3ed8: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2c3ed8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2c3edc:
    // 0x2c3edc: 0x1f49d4b  .word       0x01F49D4B                   # movn        $s3, $t7, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3edcu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
label_2c3ee0:
    // 0x2c3ee0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3ee0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3ee4:
    // 0x2c3ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ee8:
    // 0x2c3ee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c3ee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c3eec:
    // 0x2c3eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ef0:
    // 0x2c3ef0: 0x3e6b7ff  .word       0x03E6B7FF                   # dsra32      $s6, $a2, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3ef0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 6) >> (32 + 31));
label_2c3ef4:
    // 0x2c3ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3ef8:
    // 0x2c3ef8: 0x520a07e7  beql        $s0, $t2, . + 4 + (0x7E7 << 2)
label_2c3efc:
    if (ctx->pc == 0x2C3EFCu) {
        ctx->pc = 0x2C3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EF8u;
        // 0x2c3efc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F00u;
        goto label_2c3f00;
    }
    ctx->pc = 0x2C3EF8u;
    {
        const bool branch_taken_0x2c3ef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c3ef8) {
            ctx->pc = 0x2C3EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3EF8u;
            // 0x2c3efc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5E98u;
            { ctx->pc = 0x2c5e98; return; }
        }
    }
    ctx->pc = 0x2C3F00u;
label_2c3f00:
    // 0x2c3f00: 0x3e7b7ff  .word       0x03E7B7FF                   # dsra32      $s6, $a3, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c3f00u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 7) >> (32 + 31));
label_2c3f04:
    // 0x2c3f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3f08:
    // 0x2c3f08: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c3f08u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C3F08 raw=0x48000800");
 /* MITIGATED */
label_2c3f0c:
    // 0x2c3f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3f10:
    // 0x2c3f10: 0x808713ff  lb          $a3, 0x13FF($a0)
    ctx->pc = 0x2c3f10u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5119)));
label_2c3f14:
    // 0x2c3f14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c3f14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c3f18:
    // 0x2c3f18: 0x0  nop
    ctx->pc = 0x2c3f18u;
    // NOP
label_2c3f1c:
    // 0x2c3f1c: 0x0  nop
    ctx->pc = 0x2c3f1cu;
    // NOP
label_2c3f20:
    // 0x2c3f20: 0x0  nop
    ctx->pc = 0x2c3f20u;
    // NOP
label_2c3f24:
    // 0x2c3f24: 0x0  nop
    ctx->pc = 0x2c3f24u;
    // NOP
label_2c3f28:
    // 0x2c3f28: 0x0  nop
    ctx->pc = 0x2c3f28u;
    // NOP
label_2c3f2c:
    // 0x2c3f2c: 0x0  nop
    ctx->pc = 0x2c3f2cu;
    // NOP
label_2c3f30:
    // 0x2c3f30: 0x0  nop
    ctx->pc = 0x2c3f30u;
    // NOP
label_2c3f34:
    // 0x2c3f34: 0x0  nop
    ctx->pc = 0x2c3f34u;
    // NOP
label_2c3f38:
    // 0x2c3f38: 0x0  nop
    ctx->pc = 0x2c3f38u;
    // NOP
label_2c3f3c:
    // 0x2c3f3c: 0x0  nop
    ctx->pc = 0x2c3f3cu;
    // NOP
label_2c3f40:
    // 0x2c3f40: 0x0  nop
    ctx->pc = 0x2c3f40u;
    // NOP
label_2c3f44:
    // 0x2c3f44: 0x0  nop
    ctx->pc = 0x2c3f44u;
    // NOP
label_2c3f48:
    // 0x2c3f48: 0x0  nop
    ctx->pc = 0x2c3f48u;
    // NOP
label_2c3f4c:
    // 0x2c3f4c: 0x0  nop
    ctx->pc = 0x2c3f4cu;
    // NOP
label_2c3f50:
    // 0x2c3f50: 0x0  nop
    ctx->pc = 0x2c3f50u;
    // NOP
label_2c3f54:
    // 0x2c3f54: 0x0  nop
    ctx->pc = 0x2c3f54u;
    // NOP
label_2c3f58:
    // 0x2c3f58: 0x0  nop
    ctx->pc = 0x2c3f58u;
    // NOP
label_2c3f5c:
    // 0x2c3f5c: 0x0  nop
    ctx->pc = 0x2c3f5cu;
    // NOP
label_2c3f60:
    // 0x2c3f60: 0x0  nop
    ctx->pc = 0x2c3f60u;
    // NOP
label_2c3f64:
    // 0x2c3f64: 0x0  nop
    ctx->pc = 0x2c3f64u;
    // NOP
label_2c3f68:
    // 0x2c3f68: 0x0  nop
    ctx->pc = 0x2c3f68u;
    // NOP
label_2c3f6c:
    // 0x2c3f6c: 0x0  nop
    ctx->pc = 0x2c3f6cu;
    // NOP
label_2c3f70:
    // 0x2c3f70: 0x0  nop
    ctx->pc = 0x2c3f70u;
    // NOP
label_2c3f74:
    // 0x2c3f74: 0x0  nop
    ctx->pc = 0x2c3f74u;
    // NOP
label_2c3f78:
    // 0x2c3f78: 0x0  nop
    ctx->pc = 0x2c3f78u;
    // NOP
label_2c3f7c:
    // 0x2c3f7c: 0x0  nop
    ctx->pc = 0x2c3f7cu;
    // NOP
label_2c3f80:
    // 0x2c3f80: 0x0  nop
    ctx->pc = 0x2c3f80u;
    // NOP
label_2c3f84:
    // 0x2c3f84: 0x0  nop
    ctx->pc = 0x2c3f84u;
    // NOP
label_2c3f88:
    // 0x2c3f88: 0x0  nop
    ctx->pc = 0x2c3f88u;
    // NOP
label_2c3f8c:
    // 0x2c3f8c: 0x0  nop
    ctx->pc = 0x2c3f8cu;
    // NOP
label_2c3f90:
    // 0x2c3f90: 0x0  nop
    ctx->pc = 0x2c3f90u;
    // NOP
label_2c3f94:
    // 0x2c3f94: 0x0  nop
    ctx->pc = 0x2c3f94u;
    // NOP
label_2c3f98:
    // 0x2c3f98: 0x0  nop
    ctx->pc = 0x2c3f98u;
    // NOP
label_2c3f9c:
    // 0x2c3f9c: 0x0  nop
    ctx->pc = 0x2c3f9cu;
    // NOP
label_2c3fa0:
    // 0x2c3fa0: 0x0  nop
    ctx->pc = 0x2c3fa0u;
    // NOP
label_2c3fa4:
    // 0x2c3fa4: 0x0  nop
    ctx->pc = 0x2c3fa4u;
    // NOP
label_2c3fa8:
    // 0x2c3fa8: 0x0  nop
    ctx->pc = 0x2c3fa8u;
    // NOP
label_2c3fac:
    // 0x2c3fac: 0x0  nop
    ctx->pc = 0x2c3facu;
    // NOP
label_2c3fb0:
    // 0x2c3fb0: 0x0  nop
    ctx->pc = 0x2c3fb0u;
    // NOP
label_2c3fb4:
    // 0x2c3fb4: 0x0  nop
    ctx->pc = 0x2c3fb4u;
    // NOP
label_2c3fb8:
    // 0x2c3fb8: 0x0  nop
    ctx->pc = 0x2c3fb8u;
    // NOP
label_2c3fbc:
    // 0x2c3fbc: 0x0  nop
    ctx->pc = 0x2c3fbcu;
    // NOP
label_2c3fc0:
    // 0x2c3fc0: 0x0  nop
    ctx->pc = 0x2c3fc0u;
    // NOP
label_2c3fc4:
    // 0x2c3fc4: 0x0  nop
    ctx->pc = 0x2c3fc4u;
    // NOP
label_2c3fc8:
    // 0x2c3fc8: 0x0  nop
    ctx->pc = 0x2c3fc8u;
    // NOP
label_2c3fcc:
    // 0x2c3fcc: 0x0  nop
    ctx->pc = 0x2c3fccu;
    // NOP
label_2c3fd0:
    // 0x2c3fd0: 0x0  nop
    ctx->pc = 0x2c3fd0u;
    // NOP
label_2c3fd4:
    // 0x2c3fd4: 0x0  nop
    ctx->pc = 0x2c3fd4u;
    // NOP
label_2c3fd8:
    // 0x2c3fd8: 0x0  nop
    ctx->pc = 0x2c3fd8u;
    // NOP
label_2c3fdc:
    // 0x2c3fdc: 0x0  nop
    ctx->pc = 0x2c3fdcu;
    // NOP
label_2c3fe0:
    // 0x2c3fe0: 0x0  nop
    ctx->pc = 0x2c3fe0u;
    // NOP
label_2c3fe4:
    // 0x2c3fe4: 0x0  nop
    ctx->pc = 0x2c3fe4u;
    // NOP
label_2c3fe8:
    // 0x2c3fe8: 0x0  nop
    ctx->pc = 0x2c3fe8u;
    // NOP
label_2c3fec:
    // 0x2c3fec: 0x0  nop
    ctx->pc = 0x2c3fecu;
    // NOP
label_2c3ff0:
    // 0x2c3ff0: 0x0  nop
    ctx->pc = 0x2c3ff0u;
    // NOP
label_2c3ff4:
    // 0x2c3ff4: 0x0  nop
    ctx->pc = 0x2c3ff4u;
    // NOP
label_2c3ff8:
    // 0x2c3ff8: 0x0  nop
    ctx->pc = 0x2c3ff8u;
    // NOP
label_2c3ffc:
    // 0x2c3ffc: 0x0  nop
    ctx->pc = 0x2c3ffcu;
    // NOP
label_2c4000:
    // 0x2c4000: 0x10000001  b           . + 4 + (0x1 << 2)
label_2c4004:
    if (ctx->pc == 0x2C4004u) {
        ctx->pc = 0x2C4008u;
        goto label_2c4008;
    }
    ctx->pc = 0x2C4000u;
    {
        const bool branch_taken_0x2c4000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4000) {
            ctx->pc = 0x2C4008u;
            goto label_2c4008;
        }
    }
    ctx->pc = 0x2C4008u;
label_2c4008:
    // 0x2c4008: 0x0  nop
    ctx->pc = 0x2c4008u;
    // NOP
label_2c400c:
    // 0x2c400c: 0x0  nop
    ctx->pc = 0x2c400cu;
    // NOP
label_2c4010:
    // 0x2c4010: 0x1000404  .word       0x01000404                   # sllv        $zero, $zero, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4010u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c4014:
    // 0x2c4014: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x2c4014u;
    // NOP (addi to $zero)
label_2c4018:
    // 0x2c4018: 0x0  nop
    ctx->pc = 0x2c4018u;
    // NOP
label_2c401c:
    // 0x2c401c: 0x5000000  bltz        $t0, . + 4 + (0x0 << 2)
label_2c4020:
    if (ctx->pc == 0x2C4020u) {
        ctx->pc = 0x2C4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C401Cu;
        // 0x2c4020: 0x100000d7  b           . + 4 + (0xD7 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C4020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4024u;
        goto label_2c4024;
    }
    ctx->pc = 0x2C401Cu;
    {
        const bool branch_taken_0x2c401c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2C4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C401Cu;
        // 0x2c4020: 0x100000d7  b           . + 4 + (0xD7 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C4020 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c401c) {
            ctx->pc = 0x2C4020u;
            goto label_2c4020;
        }
    }
    ctx->pc = 0x2C4024u;
label_2c4024:
    // 0x2c4024: 0x0  nop
    ctx->pc = 0x2c4024u;
    // NOP
label_2c4028:
    // 0x2c4028: 0x0  nop
    ctx->pc = 0x2c4028u;
    // NOP
label_2c402c:
    // 0x2c402c: 0x0  nop
    ctx->pc = 0x2c402cu;
    // NOP
label_2c4030:
    // 0x2c4030: 0x0  nop
    ctx->pc = 0x2c4030u;
    // NOP
label_2c4034:
    // 0x2c4034: 0x4a000000  vaddx       $vf0, $vf0, $vf0x
    ctx->pc = 0x2c4034u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2c4038:
    // 0x2c4038: 0x40000063  .word       0x40000063                   # mfc0        $zero, Index # 00000063 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4038u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c403c:
    // 0x2c403c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c403cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4040:
    // 0x2c4040: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4040u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4044:
    // 0x2c4044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4048:
    // 0x2c4048: 0x400000a0  .word       0x400000A0                   # mfc0        $zero, Index # 000000A0 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4048u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c404c:
    // 0x2c404c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c404cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4050:
    // 0x2c4050: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4050u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4054:
    // 0x2c4054: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4058:
    // 0x2c4058: 0x4000000f  .word       0x4000000F                   # mfc0        $zero, Index # 0000000F <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4058u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c405c:
    // 0x2c405c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c405cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4060:
    // 0x2c4060: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4060u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4064:
    // 0x2c4064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4068:
    // 0x2c4068: 0x400000dd  .word       0x400000DD                   # mfc0        $zero, Index # 000000DD <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4068u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c406c:
    // 0x2c406c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c406cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4070:
    // 0x2c4070: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4070u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4074:
    // 0x2c4074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4078:
    // 0x2c4078: 0x4000015f  .word       0x4000015F                   # mfc0        $zero, Index # 0000015F <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4078u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c407c:
    // 0x2c407c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c407cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4080:
    // 0x2c4080: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4080u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4084:
    // 0x2c4084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4088:
    // 0x2c4088: 0x40000161  .word       0x40000161                   # mfc0        $zero, Index # 00000161 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4088u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c408c:
    // 0x2c408c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c408cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4090:
    // 0x2c4090: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4090u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4094:
    // 0x2c4094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4098:
    // 0x2c4098: 0x40000166  .word       0x40000166                   # mfc0        $zero, Index # 00000166 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4098u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c409c:
    // 0x2c409c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c409cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40a0:
    // 0x2c40a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c40a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c40a4:
    // 0x2c40a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40a8:
    // 0x2c40a8: 0x40000177  .word       0x40000177                   # mfc0        $zero, Index # 00000177 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c40a8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c40ac:
    // 0x2c40ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40b0:
    // 0x2c40b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c40b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c40b4:
    // 0x2c40b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40b8:
    // 0x2c40b8: 0x40000188  .word       0x40000188                   # mfc0        $zero, Index # 00000188 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c40b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c40bc:
    // 0x2c40bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40c0:
    // 0x2c40c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c40c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c40c4:
    // 0x2c40c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40c8:
    // 0x2c40c8: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c40c8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c40cc:
    // 0x2c40cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40d0:
    // 0x2c40d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c40d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c40d4:
    // 0x2c40d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40d8:
    // 0x2c40d8: 0x420f0008  .word       0x420F0008                   # tlbp # 000F0000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c40d8u;
    runtime->handleTLBP(rdram, ctx);
label_2c40dc:
    // 0x2c40dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40e0:
    // 0x2c40e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c40e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c40e4:
    // 0x2c40e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40e8:
    // 0x2c40e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c40e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c40ec:
    // 0x2c40ec: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c40ecu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c40f0:
    // 0x2c40f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c40f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c40f4:
    // 0x2c40f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c40f8:
    // 0x2c40f8: 0x81eaeb3c  lb          $t2, -0x14C4($t7)
    ctx->pc = 0x2c40f8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294961980)));
label_2c40fc:
    // 0x2c40fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c40fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4100:
    // 0x2c4100: 0x420f0014  .word       0x420F0014                   # INVALID     $s0, $t7, 0x14 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c4100u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x14 at 0x2C4100 raw=0x420F0014");
 /* MITIGATED */
label_2c4104:
    // 0x2c4104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4108:
    // 0x2c4108: 0x810bfb3c  lb          $t3, -0x4C4($t0)
    ctx->pc = 0x2c4108u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294966076)));
label_2c410c:
    // 0x2c410c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c410cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4110:
    // 0x2c4110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4114:
    // 0x2c4114: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4114u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4118:
    // 0x2c4118: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4118u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c411c:
    // 0x2c411c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c411cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4120:
    // 0x2c4120: 0x81eaeb3c  lb          $t2, -0x14C4($t7)
    ctx->pc = 0x2c4120u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294961980)));
label_2c4124:
    // 0x2c4124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4128:
    // 0x2c4128: 0x810bfb3c  lb          $t3, -0x4C4($t0)
    ctx->pc = 0x2c4128u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294966076)));
label_2c412c:
    // 0x2c412c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c412cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4130:
    // 0x2c4130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4134:
    // 0x2c4134: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4134u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4138:
    // 0x2c4138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c413c:
    // 0x2c413c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c413cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4140:
    // 0x2c4140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4144:
    // 0x2c4144: 0x1d509ff  .word       0x01D509FF                   # dsra32      $at, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4144u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 21) >> (32 + 7));
label_2c4148:
    // 0x2c4148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c414c:
    // 0x2c414c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c414cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4150:
    // 0x2c4150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4154:
    // 0x2c4154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4158:
    // 0x2c4158: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4158u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c415c:
    // 0x2c415c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c415cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4160:
    // 0x2c4160: 0x24000001  addiu       $zero, $zero, 0x1
    ctx->pc = 0x2c4160u;
    // NOP (addiu $zero, ...)
label_2c4164:
    // 0x2c4164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4168:
    // 0x2c4168: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c416c:
    if (ctx->pc == 0x2C416Cu) {
        ctx->pc = 0x2C416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4168u;
        // 0x2c416c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4170u;
        goto label_2c4170;
    }
    ctx->pc = 0x2C4168u;
    {
        const bool branch_taken_0x2c4168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4168) {
            ctx->pc = 0x2C416Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4168u;
            // 0x2c416c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4178u;
            goto label_2c4178;
        }
    }
    ctx->pc = 0x2C4170u;
label_2c4170:
    // 0x2c4170: 0x24000002  addiu       $zero, $zero, 0x2
    ctx->pc = 0x2c4170u;
    // NOP (addiu $zero, ...)
label_2c4174:
    // 0x2c4174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4178:
    // 0x2c4178: 0x400007f6  .word       0x400007F6                   # mfc0        $zero, Index # 000007F6 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4178u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c417c:
    // 0x2c417c: 0x1150847  .word       0x01150847                   # srav        $at, $s5, $t0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c417cu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 21), GPR_U32(ctx, 8) & 0x1F));
label_2c4180:
    // 0x2c4180: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4184:
    // 0x2c4184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4188:
    // 0x2c4188: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c418c:
    if (ctx->pc == 0x2C418Cu) {
        ctx->pc = 0x2C418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4188u;
        // 0x2c418c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4190u;
        goto label_2c4190;
    }
    ctx->pc = 0x2C4188u;
    {
        const bool branch_taken_0x2c4188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4188) {
            ctx->pc = 0x2C418Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4188u;
            // 0x2c418c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4198u;
            goto label_2c4198;
        }
    }
    ctx->pc = 0x2C4190u;
label_2c4190:
    // 0x2c4190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4194:
    // 0x2c4194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4198:
    // 0x2c4198: 0x400007f2  .word       0x400007F2                   # mfc0        $zero, Index # 000007F2 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4198u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c419c:
    // 0x2c419c: 0x1150843  .word       0x01150843                   # sra         $at, $s5, 1 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c419cu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 21), 1));
label_2c41a0:
    // 0x2c41a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c41a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c41a4:
    // 0x2c41a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c41a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c41a8:
    // 0x2c41a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c41a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c41ac:
    // 0x2c41ac: 0x1d609ff  .word       0x01D609FF                   # dsra32      $at, $s6, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c41acu;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 22) >> (32 + 7));
label_2c41b0:
    // 0x2c41b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c41b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c41b4:
    // 0x2c41b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c41b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c41b8:
    // 0x2c41b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c41b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c41bc:
    // 0x2c41bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c41bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c41c0:
    // 0x2c41c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c41c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c41c4:
    // 0x2c41c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c41c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c41c8:
    // 0x2c41c8: 0x24000001  addiu       $zero, $zero, 0x1
    ctx->pc = 0x2c41c8u;
    // NOP (addiu $zero, ...)
label_2c41cc:
    // 0x2c41cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c41ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c41d0:
    // 0x2c41d0: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c41d4:
    if (ctx->pc == 0x2C41D4u) {
        ctx->pc = 0x2C41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41D0u;
        // 0x2c41d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C41D8u;
        goto label_2c41d8;
    }
    ctx->pc = 0x2C41D0u;
    {
        const bool branch_taken_0x2c41d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c41d0) {
            ctx->pc = 0x2C41D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C41D0u;
            // 0x2c41d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C41E0u;
            goto label_2c41e0;
        }
    }
    ctx->pc = 0x2C41D8u;
label_2c41d8:
    // 0x2c41d8: 0x24000002  addiu       $zero, $zero, 0x2
    ctx->pc = 0x2c41d8u;
    // NOP (addiu $zero, ...)
label_2c41dc:
    // 0x2c41dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c41dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c41e0:
    // 0x2c41e0: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c41e0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c41e4:
    // 0x2c41e4: 0x115086c  .word       0x0115086C                   # dadd        $at, $t0, $s5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c41e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2c41e8:
    // 0x2c41e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c41e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c41ec:
    // 0x2c41ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c41ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c41f0:
    // 0x2c41f0: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c41f4:
    if (ctx->pc == 0x2C41F4u) {
        ctx->pc = 0x2C41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41F0u;
        // 0x2c41f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C41F8u;
        goto label_2c41f8;
    }
    ctx->pc = 0x2C41F0u;
    {
        const bool branch_taken_0x2c41f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c41f0) {
            ctx->pc = 0x2C41F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C41F0u;
            // 0x2c41f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4200u;
            goto label_2c4200;
        }
    }
    ctx->pc = 0x2C41F8u;
label_2c41f8:
    // 0x2c41f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c41f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c41fc:
    // 0x2c41fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c41fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4200:
    // 0x2c4200: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4200u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4204:
    // 0x2c4204: 0x101a868  .word       0x0101A868                   # mfsa        $s5 # 01010040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4204u;
    SET_GPR_U32(ctx, 21, ctx->sa);
label_2c4208:
    // 0x2c4208: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4208u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c420c:
    // 0x2c420c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c420cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4210:
    // 0x2c4210: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4210u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4214:
    // 0x2c4214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4218:
    // 0x2c4218: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4218u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c421c:
    // 0x2c421c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c421cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4220:
    // 0x2c4220: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4220u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4224:
    // 0x2c4224: 0x1d809ff  .word       0x01D809FF                   # dsra32      $at, $t8, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4224u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 24) >> (32 + 7));
label_2c4228:
    // 0x2c4228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c422c:
    // 0x2c422c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c422cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4230:
    // 0x2c4230: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4230u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4234:
    // 0x2c4234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4238:
    // 0x2c4238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c423c:
    // 0x2c423c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c423cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4240:
    // 0x2c4240: 0x24000001  addiu       $zero, $zero, 0x1
    ctx->pc = 0x2c4240u;
    // NOP (addiu $zero, ...)
label_2c4244:
    // 0x2c4244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4248:
    // 0x2c4248: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c424c:
    if (ctx->pc == 0x2C424Cu) {
        ctx->pc = 0x2C424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4248u;
        // 0x2c424c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4250u;
        goto label_2c4250;
    }
    ctx->pc = 0x2C4248u;
    {
        const bool branch_taken_0x2c4248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4248) {
            ctx->pc = 0x2C424Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4248u;
            // 0x2c424c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4258u;
            goto label_2c4258;
        }
    }
    ctx->pc = 0x2C4250u;
label_2c4250:
    // 0x2c4250: 0x24000002  addiu       $zero, $zero, 0x2
    ctx->pc = 0x2c4250u;
    // NOP (addiu $zero, ...)
label_2c4254:
    // 0x2c4254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4258:
    // 0x2c4258: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4258u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c425c:
    // 0x2c425c: 0x101b06c  .word       0x0101B06C                   # dadd        $s6, $t0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c425cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2c4260:
    // 0x2c4260: 0x810bf33c  lb          $t3, -0xCC4($t0)
    ctx->pc = 0x2c4260u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294964028)));
label_2c4264:
    // 0x2c4264: 0x1fe52aa  .word       0x01FE52AA                   # slt         $t2, $t7, $fp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4264u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2c4268:
    // 0x2c4268: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c426c:
    if (ctx->pc == 0x2C426Cu) {
        ctx->pc = 0x2C426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4268u;
        // 0x2c426c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4270u;
        goto label_2c4270;
    }
    ctx->pc = 0x2C4268u;
    {
        const bool branch_taken_0x2c4268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4268) {
            ctx->pc = 0x2C426Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4268u;
            // 0x2c426c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4278u;
            goto label_2c4278;
        }
    }
    ctx->pc = 0x2C4270u;
label_2c4270:
    // 0x2c4270: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4274:
    // 0x2c4274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4278:
    // 0x2c4278: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c427c:
    // 0x2c427c: 0x101b86c  .word       0x0101B86C                   # dadd        $s7, $t0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c427cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2c4280:
    // 0x2c4280: 0x810bf33c  lb          $t3, -0xCC4($t0)
    ctx->pc = 0x2c4280u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294964028)));
label_2c4284:
    // 0x2c4284: 0x1fe52aa  .word       0x01FE52AA                   # slt         $t2, $t7, $fp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4284u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2c4288:
    // 0x2c4288: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c428c:
    // 0x2c428c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c428cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4290:
    // 0x2c4290: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4290u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4294:
    // 0x2c4294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4298:
    // 0x2c4298: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4298u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c429c:
    // 0x2c429c: 0x10108ea  .word       0x010108EA                   # slt         $at, $t0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c429cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c42a0:
    // 0x2c42a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42a4:
    // 0x2c42a4: 0x101092a  .word       0x0101092A                   # slt         $at, $t0, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c42a8:
    // 0x2c42a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42ac:
    // 0x2c42ac: 0x101096a  .word       0x0101096A                   # slt         $at, $t0, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c42b0:
    // 0x2c42b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42b4:
    // 0x2c42b4: 0x10108aa  .word       0x010108AA                   # slt         $at, $t0, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c42b8:
    // 0x2c42b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42bc:
    // 0x2c42bc: 0x10118ea  .word       0x010118EA                   # slt         $v1, $t0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c42c0:
    // 0x2c42c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42c4:
    // 0x2c42c4: 0x104212a  .word       0x0104212A                   # slt         $a0, $t0, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2c42c8:
    // 0x2c42c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42cc:
    // 0x2c42cc: 0x105296a  .word       0x0105296A                   # slt         $a1, $t0, $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42ccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2c42d0:
    // 0x2c42d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42d4:
    // 0x2c42d4: 0x10211ea  .word       0x010211EA                   # slt         $v0, $t0, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c42d8:
    // 0x2c42d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42dc:
    // 0x2c42dc: 0x1023a2a  .word       0x01023A2A                   # slt         $a3, $t0, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42dcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c42e0:
    // 0x2c42e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42e4:
    // 0x2c42e4: 0x101212a  .word       0x0101212A                   # slt         $a0, $t0, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c42e8:
    // 0x2c42e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42ec:
    // 0x2c42ec: 0x103296a  .word       0x0103296A                   # slt         $a1, $t0, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2c42f0:
    // 0x2c42f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42f4:
    // 0x2c42f4: 0x11c0abe  .word       0x011C0ABE                   # dsrl32      $at, $gp, 10 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 28) >> (32 + 10));
label_2c42f8:
    // 0x2c42f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c42f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c42fc:
    // 0x2c42fc: 0x11c18bd  .word       0x011C18BD                   # INVALID     $t0, $gp, 0x18BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c42fcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C42FC raw=0x011C18BD");
 /* MITIGATED */
label_2c4300:
    // 0x2c4300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4304:
    // 0x2c4304: 0x11c20be  .word       0x011C20BE                   # dsrl32      $a0, $gp, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 28) >> (32 + 2));
label_2c4308:
    // 0x2c4308: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4308u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c430c:
    // 0x2c430c: 0x11c284b  .word       0x011C284B                   # movn        $a1, $t0, $gp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c430cu;
    if (GPR_U64(ctx, 28) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
label_2c4310:
    // 0x2c4310: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4310u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4314:
    // 0x2c4314: 0x1073a6a  .word       0x01073A6A                   # slt         $a3, $t0, $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4314u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2c4318:
    // 0x2c4318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c431c:
    // 0x2c431c: 0x10bfabe  .word       0x010BFABE                   # dsrl32      $ra, $t3, 10 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c431cu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 11) >> (32 + 10));
label_2c4320:
    // 0x2c4320: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4320u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4324:
    // 0x2c4324: 0x10a10bc  .word       0x010A10BC                   # dsll32      $v0, $t2, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 2));
label_2c4328:
    // 0x2c4328: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4328u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c432c:
    // 0x2c432c: 0x10a38bd  .word       0x010A38BD                   # INVALID     $t0, $t2, 0x38BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c432cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C432C raw=0x010A38BD");
 /* MITIGATED */
label_2c4330:
    // 0x2c4330: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4330u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4334:
    // 0x2c4334: 0x10a40be  .word       0x010A40BE                   # dsrl32      $t0, $t2, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4334u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> (32 + 2));
label_2c4338:
    // 0x2c4338: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4338u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c433c:
    // 0x2c433c: 0x10a488b  .word       0x010A488B                   # movn        $t1, $t0, $t2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c433cu;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
label_2c4340:
    // 0x2c4340: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4340u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4344:
    // 0x2c4344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4348:
    // 0x2c4348: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c4348u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C4348 raw=0x48007800");
 /* MITIGATED */
label_2c434c:
    // 0x2c434c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c434cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4350:
    // 0x2c4350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4354:
    // 0x2c4354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4358:
    // 0x2c4358: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4358u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c435c:
    // 0x2c435c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c435cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4360:
    // 0x2c4360: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4360u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4364:
    // 0x2c4364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4368:
    // 0x2c4368: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4368u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c436c:
    // 0x2c436c: 0x1d509ff  .word       0x01D509FF                   # dsra32      $at, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c436cu;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 21) >> (32 + 7));
label_2c4370:
    // 0x2c4370: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4370u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4374:
    // 0x2c4374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4378:
    // 0x2c4378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c437c:
    // 0x2c437c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c437cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4380:
    // 0x2c4380: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4380u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4384:
    // 0x2c4384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4388:
    // 0x2c4388: 0x24000001  addiu       $zero, $zero, 0x1
    ctx->pc = 0x2c4388u;
    // NOP (addiu $zero, ...)
label_2c438c:
    // 0x2c438c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c438cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4390:
    // 0x2c4390: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c4394:
    if (ctx->pc == 0x2C4394u) {
        ctx->pc = 0x2C4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4390u;
        // 0x2c4394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4398u;
        goto label_2c4398;
    }
    ctx->pc = 0x2C4390u;
    {
        const bool branch_taken_0x2c4390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4390) {
            ctx->pc = 0x2C4394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4390u;
            // 0x2c4394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C43A0u;
            goto label_2c43a0;
        }
    }
    ctx->pc = 0x2C4398u;
label_2c4398:
    // 0x2c4398: 0x24000002  addiu       $zero, $zero, 0x2
    ctx->pc = 0x2c4398u;
    // NOP (addiu $zero, ...)
label_2c439c:
    // 0x2c439c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c439cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c43a0:
    // 0x2c43a0: 0x400007f6  .word       0x400007F6                   # mfc0        $zero, Index # 000007F6 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c43a0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c43a4:
    // 0x2c43a4: 0x1150847  .word       0x01150847                   # srav        $at, $s5, $t0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c43a4u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 21), GPR_U32(ctx, 8) & 0x1F));
label_2c43a8:
    // 0x2c43a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c43a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c43ac:
    // 0x2c43ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c43acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c43b0:
    // 0x2c43b0: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c43b4:
    if (ctx->pc == 0x2C43B4u) {
        ctx->pc = 0x2C43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43B0u;
        // 0x2c43b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C43B8u;
        goto label_2c43b8;
    }
    ctx->pc = 0x2C43B0u;
    {
        const bool branch_taken_0x2c43b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c43b0) {
            ctx->pc = 0x2C43B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C43B0u;
            // 0x2c43b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C43C0u;
            goto label_2c43c0;
        }
    }
    ctx->pc = 0x2C43B8u;
label_2c43b8:
    // 0x2c43b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c43b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c43bc:
    // 0x2c43bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c43bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c43c0:
    // 0x2c43c0: 0x400007f2  .word       0x400007F2                   # mfc0        $zero, Index # 000007F2 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c43c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c43c4:
    // 0x2c43c4: 0x1150843  .word       0x01150843                   # sra         $at, $s5, 1 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c43c4u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 21), 1));
label_2c43c8:
    // 0x2c43c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c43c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c43cc:
    // 0x2c43cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c43ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c43d0:
    // 0x2c43d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c43d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c43d4:
    // 0x2c43d4: 0x1d609ff  .word       0x01D609FF                   # dsra32      $at, $s6, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c43d4u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 22) >> (32 + 7));
label_2c43d8:
    // 0x2c43d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c43d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c43dc:
    // 0x2c43dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c43dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c43e0:
    // 0x2c43e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c43e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c43e4:
    // 0x2c43e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c43e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c43e8:
    // 0x2c43e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c43e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c43ec:
    // 0x2c43ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c43ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c43f0:
    // 0x2c43f0: 0x24000001  addiu       $zero, $zero, 0x1
    ctx->pc = 0x2c43f0u;
    // NOP (addiu $zero, ...)
label_2c43f4:
    // 0x2c43f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c43f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c43f8:
    // 0x2c43f8: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c43fc:
    if (ctx->pc == 0x2C43FCu) {
        ctx->pc = 0x2C43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C43F8u;
        // 0x2c43fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4400u;
        goto label_2c4400;
    }
    ctx->pc = 0x2C43F8u;
    {
        const bool branch_taken_0x2c43f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c43f8) {
            ctx->pc = 0x2C43FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C43F8u;
            // 0x2c43fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4408u;
            goto label_2c4408;
        }
    }
    ctx->pc = 0x2C4400u;
label_2c4400:
    // 0x2c4400: 0x24000002  addiu       $zero, $zero, 0x2
    ctx->pc = 0x2c4400u;
    // NOP (addiu $zero, ...)
label_2c4404:
    // 0x2c4404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4408:
    // 0x2c4408: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4408u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c440c:
    // 0x2c440c: 0x115086c  .word       0x0115086C                   # dadd        $at, $t0, $s5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c440cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2c4410:
    // 0x2c4410: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4410u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4414:
    // 0x2c4414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4418:
    // 0x2c4418: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c441c:
    if (ctx->pc == 0x2C441Cu) {
        ctx->pc = 0x2C441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4418u;
        // 0x2c441c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4420u;
        goto label_2c4420;
    }
    ctx->pc = 0x2C4418u;
    {
        const bool branch_taken_0x2c4418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4418) {
            ctx->pc = 0x2C441Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4418u;
            // 0x2c441c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4428u;
            goto label_2c4428;
        }
    }
    ctx->pc = 0x2C4420u;
label_2c4420:
    // 0x2c4420: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4424:
    // 0x2c4424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4428:
    // 0x2c4428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c442c:
    // 0x2c442c: 0x101a868  .word       0x0101A868                   # mfsa        $s5 # 01010040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c442cu;
    SET_GPR_U32(ctx, 21, ctx->sa);
    ctx->pc = 0x2c4430u;
    return;
}

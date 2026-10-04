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


void FUN_0019b5e8_part51(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b3c88u: goto label_1b3c88;
        case 0x1b3c8cu: goto label_1b3c8c;
        case 0x1b3c90u: goto label_1b3c90;
        case 0x1b3c94u: goto label_1b3c94;
        case 0x1b3c98u: goto label_1b3c98;
        case 0x1b3c9cu: goto label_1b3c9c;
        case 0x1b3ca0u: goto label_1b3ca0;
        case 0x1b3ca4u: goto label_1b3ca4;
        case 0x1b3ca8u: goto label_1b3ca8;
        case 0x1b3cacu: goto label_1b3cac;
        case 0x1b3cb0u: goto label_1b3cb0;
        case 0x1b3cb4u: goto label_1b3cb4;
        case 0x1b3cb8u: goto label_1b3cb8;
        case 0x1b3cbcu: goto label_1b3cbc;
        case 0x1b3cc0u: goto label_1b3cc0;
        case 0x1b3cc4u: goto label_1b3cc4;
        case 0x1b3cc8u: goto label_1b3cc8;
        case 0x1b3cccu: goto label_1b3ccc;
        case 0x1b3cd0u: goto label_1b3cd0;
        case 0x1b3cd4u: goto label_1b3cd4;
        case 0x1b3cd8u: goto label_1b3cd8;
        case 0x1b3cdcu: goto label_1b3cdc;
        case 0x1b3ce0u: goto label_1b3ce0;
        case 0x1b3ce4u: goto label_1b3ce4;
        case 0x1b3ce8u: goto label_1b3ce8;
        case 0x1b3cecu: goto label_1b3cec;
        case 0x1b3cf0u: goto label_1b3cf0;
        case 0x1b3cf4u: goto label_1b3cf4;
        case 0x1b3cf8u: goto label_1b3cf8;
        case 0x1b3cfcu: goto label_1b3cfc;
        case 0x1b3d00u: goto label_1b3d00;
        case 0x1b3d04u: goto label_1b3d04;
        case 0x1b3d08u: goto label_1b3d08;
        case 0x1b3d0cu: goto label_1b3d0c;
        case 0x1b3d10u: goto label_1b3d10;
        case 0x1b3d14u: goto label_1b3d14;
        case 0x1b3d18u: goto label_1b3d18;
        case 0x1b3d1cu: goto label_1b3d1c;
        case 0x1b3d20u: goto label_1b3d20;
        case 0x1b3d24u: goto label_1b3d24;
        case 0x1b3d28u: goto label_1b3d28;
        case 0x1b3d2cu: goto label_1b3d2c;
        case 0x1b3d30u: goto label_1b3d30;
        case 0x1b3d34u: goto label_1b3d34;
        case 0x1b3d38u: goto label_1b3d38;
        case 0x1b3d3cu: goto label_1b3d3c;
        case 0x1b3d40u: goto label_1b3d40;
        case 0x1b3d44u: goto label_1b3d44;
        case 0x1b3d48u: goto label_1b3d48;
        case 0x1b3d4cu: goto label_1b3d4c;
        case 0x1b3d50u: goto label_1b3d50;
        case 0x1b3d54u: goto label_1b3d54;
        case 0x1b3d58u: goto label_1b3d58;
        case 0x1b3d5cu: goto label_1b3d5c;
        case 0x1b3d60u: goto label_1b3d60;
        case 0x1b3d64u: goto label_1b3d64;
        case 0x1b3d68u: goto label_1b3d68;
        case 0x1b3d6cu: goto label_1b3d6c;
        case 0x1b3d70u: goto label_1b3d70;
        case 0x1b3d74u: goto label_1b3d74;
        case 0x1b3d78u: goto label_1b3d78;
        case 0x1b3d7cu: goto label_1b3d7c;
        case 0x1b3d80u: goto label_1b3d80;
        case 0x1b3d84u: goto label_1b3d84;
        case 0x1b3d88u: goto label_1b3d88;
        case 0x1b3d8cu: goto label_1b3d8c;
        case 0x1b3d90u: goto label_1b3d90;
        case 0x1b3d94u: goto label_1b3d94;
        case 0x1b3d98u: goto label_1b3d98;
        case 0x1b3d9cu: goto label_1b3d9c;
        case 0x1b3da0u: goto label_1b3da0;
        case 0x1b3da4u: goto label_1b3da4;
        case 0x1b3da8u: goto label_1b3da8;
        case 0x1b3dacu: goto label_1b3dac;
        case 0x1b3db0u: goto label_1b3db0;
        case 0x1b3db4u: goto label_1b3db4;
        case 0x1b3db8u: goto label_1b3db8;
        case 0x1b3dbcu: goto label_1b3dbc;
        case 0x1b3dc0u: goto label_1b3dc0;
        case 0x1b3dc4u: goto label_1b3dc4;
        case 0x1b3dc8u: goto label_1b3dc8;
        case 0x1b3dccu: goto label_1b3dcc;
        case 0x1b3dd0u: goto label_1b3dd0;
        case 0x1b3dd4u: goto label_1b3dd4;
        case 0x1b3dd8u: goto label_1b3dd8;
        case 0x1b3ddcu: goto label_1b3ddc;
        case 0x1b3de0u: goto label_1b3de0;
        case 0x1b3de4u: goto label_1b3de4;
        case 0x1b3de8u: goto label_1b3de8;
        case 0x1b3decu: goto label_1b3dec;
        case 0x1b3df0u: goto label_1b3df0;
        case 0x1b3df4u: goto label_1b3df4;
        case 0x1b3df8u: goto label_1b3df8;
        case 0x1b3dfcu: goto label_1b3dfc;
        case 0x1b3e00u: goto label_1b3e00;
        case 0x1b3e04u: goto label_1b3e04;
        case 0x1b3e08u: goto label_1b3e08;
        case 0x1b3e0cu: goto label_1b3e0c;
        case 0x1b3e10u: goto label_1b3e10;
        case 0x1b3e14u: goto label_1b3e14;
        case 0x1b3e18u: goto label_1b3e18;
        case 0x1b3e1cu: goto label_1b3e1c;
        case 0x1b3e20u: goto label_1b3e20;
        case 0x1b3e24u: goto label_1b3e24;
        case 0x1b3e28u: goto label_1b3e28;
        case 0x1b3e2cu: goto label_1b3e2c;
        case 0x1b3e30u: goto label_1b3e30;
        case 0x1b3e34u: goto label_1b3e34;
        case 0x1b3e38u: goto label_1b3e38;
        case 0x1b3e3cu: goto label_1b3e3c;
        case 0x1b3e40u: goto label_1b3e40;
        case 0x1b3e44u: goto label_1b3e44;
        case 0x1b3e48u: goto label_1b3e48;
        case 0x1b3e4cu: goto label_1b3e4c;
        case 0x1b3e50u: goto label_1b3e50;
        case 0x1b3e54u: goto label_1b3e54;
        case 0x1b3e58u: goto label_1b3e58;
        case 0x1b3e5cu: goto label_1b3e5c;
        case 0x1b3e60u: goto label_1b3e60;
        case 0x1b3e64u: goto label_1b3e64;
        case 0x1b3e68u: goto label_1b3e68;
        case 0x1b3e6cu: goto label_1b3e6c;
        case 0x1b3e70u: goto label_1b3e70;
        case 0x1b3e74u: goto label_1b3e74;
        case 0x1b3e78u: goto label_1b3e78;
        case 0x1b3e7cu: goto label_1b3e7c;
        case 0x1b3e80u: goto label_1b3e80;
        case 0x1b3e84u: goto label_1b3e84;
        case 0x1b3e88u: goto label_1b3e88;
        case 0x1b3e8cu: goto label_1b3e8c;
        case 0x1b3e90u: goto label_1b3e90;
        case 0x1b3e94u: goto label_1b3e94;
        case 0x1b3e98u: goto label_1b3e98;
        case 0x1b3e9cu: goto label_1b3e9c;
        case 0x1b3ea0u: goto label_1b3ea0;
        case 0x1b3ea4u: goto label_1b3ea4;
        case 0x1b3ea8u: goto label_1b3ea8;
        case 0x1b3eacu: goto label_1b3eac;
        case 0x1b3eb0u: goto label_1b3eb0;
        case 0x1b3eb4u: goto label_1b3eb4;
        case 0x1b3eb8u: goto label_1b3eb8;
        case 0x1b3ebcu: goto label_1b3ebc;
        case 0x1b3ec0u: goto label_1b3ec0;
        case 0x1b3ec4u: goto label_1b3ec4;
        case 0x1b3ec8u: goto label_1b3ec8;
        case 0x1b3eccu: goto label_1b3ecc;
        case 0x1b3ed0u: goto label_1b3ed0;
        case 0x1b3ed4u: goto label_1b3ed4;
        case 0x1b3ed8u: goto label_1b3ed8;
        case 0x1b3edcu: goto label_1b3edc;
        case 0x1b3ee0u: goto label_1b3ee0;
        case 0x1b3ee4u: goto label_1b3ee4;
        case 0x1b3ee8u: goto label_1b3ee8;
        case 0x1b3eecu: goto label_1b3eec;
        case 0x1b3ef0u: goto label_1b3ef0;
        case 0x1b3ef4u: goto label_1b3ef4;
        case 0x1b3ef8u: goto label_1b3ef8;
        case 0x1b3efcu: goto label_1b3efc;
        case 0x1b3f00u: goto label_1b3f00;
        case 0x1b3f04u: goto label_1b3f04;
        case 0x1b3f08u: goto label_1b3f08;
        case 0x1b3f0cu: goto label_1b3f0c;
        case 0x1b3f10u: goto label_1b3f10;
        case 0x1b3f14u: goto label_1b3f14;
        case 0x1b3f18u: goto label_1b3f18;
        case 0x1b3f1cu: goto label_1b3f1c;
        case 0x1b3f20u: goto label_1b3f20;
        case 0x1b3f24u: goto label_1b3f24;
        case 0x1b3f28u: goto label_1b3f28;
        case 0x1b3f2cu: goto label_1b3f2c;
        case 0x1b3f30u: goto label_1b3f30;
        case 0x1b3f34u: goto label_1b3f34;
        case 0x1b3f38u: goto label_1b3f38;
        case 0x1b3f3cu: goto label_1b3f3c;
        case 0x1b3f40u: goto label_1b3f40;
        case 0x1b3f44u: goto label_1b3f44;
        case 0x1b3f48u: goto label_1b3f48;
        case 0x1b3f4cu: goto label_1b3f4c;
        case 0x1b3f50u: goto label_1b3f50;
        case 0x1b3f54u: goto label_1b3f54;
        case 0x1b3f58u: goto label_1b3f58;
        case 0x1b3f5cu: goto label_1b3f5c;
        case 0x1b3f60u: goto label_1b3f60;
        case 0x1b3f64u: goto label_1b3f64;
        case 0x1b3f68u: goto label_1b3f68;
        case 0x1b3f6cu: goto label_1b3f6c;
        case 0x1b3f70u: goto label_1b3f70;
        case 0x1b3f74u: goto label_1b3f74;
        case 0x1b3f78u: goto label_1b3f78;
        case 0x1b3f7cu: goto label_1b3f7c;
        case 0x1b3f80u: goto label_1b3f80;
        case 0x1b3f84u: goto label_1b3f84;
        case 0x1b3f88u: goto label_1b3f88;
        case 0x1b3f8cu: goto label_1b3f8c;
        case 0x1b3f90u: goto label_1b3f90;
        case 0x1b3f94u: goto label_1b3f94;
        case 0x1b3f98u: goto label_1b3f98;
        case 0x1b3f9cu: goto label_1b3f9c;
        case 0x1b3fa0u: goto label_1b3fa0;
        case 0x1b3fa4u: goto label_1b3fa4;
        case 0x1b3fa8u: goto label_1b3fa8;
        case 0x1b3facu: goto label_1b3fac;
        case 0x1b3fb0u: goto label_1b3fb0;
        case 0x1b3fb4u: goto label_1b3fb4;
        case 0x1b3fb8u: goto label_1b3fb8;
        case 0x1b3fbcu: goto label_1b3fbc;
        case 0x1b3fc0u: goto label_1b3fc0;
        case 0x1b3fc4u: goto label_1b3fc4;
        case 0x1b3fc8u: goto label_1b3fc8;
        case 0x1b3fccu: goto label_1b3fcc;
        case 0x1b3fd0u: goto label_1b3fd0;
        case 0x1b3fd4u: goto label_1b3fd4;
        case 0x1b3fd8u: goto label_1b3fd8;
        case 0x1b3fdcu: goto label_1b3fdc;
        case 0x1b3fe0u: goto label_1b3fe0;
        case 0x1b3fe4u: goto label_1b3fe4;
        case 0x1b3fe8u: goto label_1b3fe8;
        case 0x1b3fecu: goto label_1b3fec;
        case 0x1b3ff0u: goto label_1b3ff0;
        case 0x1b3ff4u: goto label_1b3ff4;
        case 0x1b3ff8u: goto label_1b3ff8;
        case 0x1b3ffcu: goto label_1b3ffc;
        case 0x1b4000u: goto label_1b4000;
        case 0x1b4004u: goto label_1b4004;
        case 0x1b4008u: goto label_1b4008;
        case 0x1b400cu: goto label_1b400c;
        case 0x1b4010u: goto label_1b4010;
        case 0x1b4014u: goto label_1b4014;
        case 0x1b4018u: goto label_1b4018;
        case 0x1b401cu: goto label_1b401c;
        case 0x1b4020u: goto label_1b4020;
        case 0x1b4024u: goto label_1b4024;
        case 0x1b4028u: goto label_1b4028;
        case 0x1b402cu: goto label_1b402c;
        case 0x1b4030u: goto label_1b4030;
        case 0x1b4034u: goto label_1b4034;
        case 0x1b4038u: goto label_1b4038;
        case 0x1b403cu: goto label_1b403c;
        case 0x1b4040u: goto label_1b4040;
        case 0x1b4044u: goto label_1b4044;
        case 0x1b4048u: goto label_1b4048;
        case 0x1b404cu: goto label_1b404c;
        case 0x1b4050u: goto label_1b4050;
        case 0x1b4054u: goto label_1b4054;
        case 0x1b4058u: goto label_1b4058;
        case 0x1b405cu: goto label_1b405c;
        case 0x1b4060u: goto label_1b4060;
        case 0x1b4064u: goto label_1b4064;
        case 0x1b4068u: goto label_1b4068;
        case 0x1b406cu: goto label_1b406c;
        case 0x1b4070u: goto label_1b4070;
        case 0x1b4074u: goto label_1b4074;
        case 0x1b4078u: goto label_1b4078;
        case 0x1b407cu: goto label_1b407c;
        case 0x1b4080u: goto label_1b4080;
        case 0x1b4084u: goto label_1b4084;
        case 0x1b4088u: goto label_1b4088;
        case 0x1b408cu: goto label_1b408c;
        case 0x1b4090u: goto label_1b4090;
        case 0x1b4094u: goto label_1b4094;
        case 0x1b4098u: goto label_1b4098;
        case 0x1b409cu: goto label_1b409c;
        case 0x1b40a0u: goto label_1b40a0;
        case 0x1b40a4u: goto label_1b40a4;
        case 0x1b40a8u: goto label_1b40a8;
        case 0x1b40acu: goto label_1b40ac;
        case 0x1b40b0u: goto label_1b40b0;
        case 0x1b40b4u: goto label_1b40b4;
        case 0x1b40b8u: goto label_1b40b8;
        case 0x1b40bcu: goto label_1b40bc;
        case 0x1b40c0u: goto label_1b40c0;
        case 0x1b40c4u: goto label_1b40c4;
        case 0x1b40c8u: goto label_1b40c8;
        case 0x1b40ccu: goto label_1b40cc;
        case 0x1b40d0u: goto label_1b40d0;
        case 0x1b40d4u: goto label_1b40d4;
        case 0x1b40d8u: goto label_1b40d8;
        case 0x1b40dcu: goto label_1b40dc;
        case 0x1b40e0u: goto label_1b40e0;
        case 0x1b40e4u: goto label_1b40e4;
        case 0x1b40e8u: goto label_1b40e8;
        case 0x1b40ecu: goto label_1b40ec;
        case 0x1b40f0u: goto label_1b40f0;
        case 0x1b40f4u: goto label_1b40f4;
        case 0x1b40f8u: goto label_1b40f8;
        case 0x1b40fcu: goto label_1b40fc;
        case 0x1b4100u: goto label_1b4100;
        case 0x1b4104u: goto label_1b4104;
        case 0x1b4108u: goto label_1b4108;
        case 0x1b410cu: goto label_1b410c;
        case 0x1b4110u: goto label_1b4110;
        case 0x1b4114u: goto label_1b4114;
        case 0x1b4118u: goto label_1b4118;
        case 0x1b411cu: goto label_1b411c;
        case 0x1b4120u: goto label_1b4120;
        case 0x1b4124u: goto label_1b4124;
        case 0x1b4128u: goto label_1b4128;
        case 0x1b412cu: goto label_1b412c;
        case 0x1b4130u: goto label_1b4130;
        case 0x1b4134u: goto label_1b4134;
        case 0x1b4138u: goto label_1b4138;
        case 0x1b413cu: goto label_1b413c;
        case 0x1b4140u: goto label_1b4140;
        case 0x1b4144u: goto label_1b4144;
        case 0x1b4148u: goto label_1b4148;
        case 0x1b414cu: goto label_1b414c;
        case 0x1b4150u: goto label_1b4150;
        case 0x1b4154u: goto label_1b4154;
        case 0x1b4158u: goto label_1b4158;
        case 0x1b415cu: goto label_1b415c;
        case 0x1b4160u: goto label_1b4160;
        case 0x1b4164u: goto label_1b4164;
        case 0x1b4168u: goto label_1b4168;
        case 0x1b416cu: goto label_1b416c;
        case 0x1b4170u: goto label_1b4170;
        case 0x1b4174u: goto label_1b4174;
        case 0x1b4178u: goto label_1b4178;
        case 0x1b417cu: goto label_1b417c;
        case 0x1b4180u: goto label_1b4180;
        case 0x1b4184u: goto label_1b4184;
        case 0x1b4188u: goto label_1b4188;
        case 0x1b418cu: goto label_1b418c;
        case 0x1b4190u: goto label_1b4190;
        case 0x1b4194u: goto label_1b4194;
        case 0x1b4198u: goto label_1b4198;
        case 0x1b419cu: goto label_1b419c;
        case 0x1b41a0u: goto label_1b41a0;
        case 0x1b41a4u: goto label_1b41a4;
        case 0x1b41a8u: goto label_1b41a8;
        case 0x1b41acu: goto label_1b41ac;
        case 0x1b41b0u: goto label_1b41b0;
        case 0x1b41b4u: goto label_1b41b4;
        case 0x1b41b8u: goto label_1b41b8;
        case 0x1b41bcu: goto label_1b41bc;
        case 0x1b41c0u: goto label_1b41c0;
        case 0x1b41c4u: goto label_1b41c4;
        case 0x1b41c8u: goto label_1b41c8;
        case 0x1b41ccu: goto label_1b41cc;
        case 0x1b41d0u: goto label_1b41d0;
        case 0x1b41d4u: goto label_1b41d4;
        case 0x1b41d8u: goto label_1b41d8;
        case 0x1b41dcu: goto label_1b41dc;
        case 0x1b41e0u: goto label_1b41e0;
        case 0x1b41e4u: goto label_1b41e4;
        case 0x1b41e8u: goto label_1b41e8;
        case 0x1b41ecu: goto label_1b41ec;
        case 0x1b41f0u: goto label_1b41f0;
        case 0x1b41f4u: goto label_1b41f4;
        case 0x1b41f8u: goto label_1b41f8;
        case 0x1b41fcu: goto label_1b41fc;
        case 0x1b4200u: goto label_1b4200;
        case 0x1b4204u: goto label_1b4204;
        case 0x1b4208u: goto label_1b4208;
        case 0x1b420cu: goto label_1b420c;
        case 0x1b4210u: goto label_1b4210;
        case 0x1b4214u: goto label_1b4214;
        case 0x1b4218u: goto label_1b4218;
        case 0x1b421cu: goto label_1b421c;
        case 0x1b4220u: goto label_1b4220;
        case 0x1b4224u: goto label_1b4224;
        case 0x1b4228u: goto label_1b4228;
        case 0x1b422cu: goto label_1b422c;
        case 0x1b4230u: goto label_1b4230;
        case 0x1b4234u: goto label_1b4234;
        case 0x1b4238u: goto label_1b4238;
        case 0x1b423cu: goto label_1b423c;
        case 0x1b4240u: goto label_1b4240;
        case 0x1b4244u: goto label_1b4244;
        case 0x1b4248u: goto label_1b4248;
        case 0x1b424cu: goto label_1b424c;
        case 0x1b4250u: goto label_1b4250;
        case 0x1b4254u: goto label_1b4254;
        case 0x1b4258u: goto label_1b4258;
        case 0x1b425cu: goto label_1b425c;
        case 0x1b4260u: goto label_1b4260;
        case 0x1b4264u: goto label_1b4264;
        case 0x1b4268u: goto label_1b4268;
        case 0x1b426cu: goto label_1b426c;
        case 0x1b4270u: goto label_1b4270;
        case 0x1b4274u: goto label_1b4274;
        case 0x1b4278u: goto label_1b4278;
        case 0x1b427cu: goto label_1b427c;
        case 0x1b4280u: goto label_1b4280;
        case 0x1b4284u: goto label_1b4284;
        case 0x1b4288u: goto label_1b4288;
        case 0x1b428cu: goto label_1b428c;
        case 0x1b4290u: goto label_1b4290;
        case 0x1b4294u: goto label_1b4294;
        case 0x1b4298u: goto label_1b4298;
        case 0x1b429cu: goto label_1b429c;
        case 0x1b42a0u: goto label_1b42a0;
        case 0x1b42a4u: goto label_1b42a4;
        case 0x1b42a8u: goto label_1b42a8;
        case 0x1b42acu: goto label_1b42ac;
        case 0x1b42b0u: goto label_1b42b0;
        case 0x1b42b4u: goto label_1b42b4;
        case 0x1b42b8u: goto label_1b42b8;
        case 0x1b42bcu: goto label_1b42bc;
        case 0x1b42c0u: goto label_1b42c0;
        case 0x1b42c4u: goto label_1b42c4;
        case 0x1b42c8u: goto label_1b42c8;
        case 0x1b42ccu: goto label_1b42cc;
        case 0x1b42d0u: goto label_1b42d0;
        case 0x1b42d4u: goto label_1b42d4;
        case 0x1b42d8u: goto label_1b42d8;
        case 0x1b42dcu: goto label_1b42dc;
        case 0x1b42e0u: goto label_1b42e0;
        case 0x1b42e4u: goto label_1b42e4;
        case 0x1b42e8u: goto label_1b42e8;
        case 0x1b42ecu: goto label_1b42ec;
        case 0x1b42f0u: goto label_1b42f0;
        case 0x1b42f4u: goto label_1b42f4;
        case 0x1b42f8u: goto label_1b42f8;
        case 0x1b42fcu: goto label_1b42fc;
        case 0x1b4300u: goto label_1b4300;
        case 0x1b4304u: goto label_1b4304;
        case 0x1b4308u: goto label_1b4308;
        case 0x1b430cu: goto label_1b430c;
        case 0x1b4310u: goto label_1b4310;
        case 0x1b4314u: goto label_1b4314;
        case 0x1b4318u: goto label_1b4318;
        case 0x1b431cu: goto label_1b431c;
        case 0x1b4320u: goto label_1b4320;
        case 0x1b4324u: goto label_1b4324;
        case 0x1b4328u: goto label_1b4328;
        case 0x1b432cu: goto label_1b432c;
        case 0x1b4330u: goto label_1b4330;
        case 0x1b4334u: goto label_1b4334;
        case 0x1b4338u: goto label_1b4338;
        case 0x1b433cu: goto label_1b433c;
        case 0x1b4340u: goto label_1b4340;
        case 0x1b4344u: goto label_1b4344;
        case 0x1b4348u: goto label_1b4348;
        case 0x1b434cu: goto label_1b434c;
        case 0x1b4350u: goto label_1b4350;
        case 0x1b4354u: goto label_1b4354;
        case 0x1b4358u: goto label_1b4358;
        case 0x1b435cu: goto label_1b435c;
        case 0x1b4360u: goto label_1b4360;
        case 0x1b4364u: goto label_1b4364;
        case 0x1b4368u: goto label_1b4368;
        case 0x1b436cu: goto label_1b436c;
        case 0x1b4370u: goto label_1b4370;
        case 0x1b4374u: goto label_1b4374;
        case 0x1b4378u: goto label_1b4378;
        case 0x1b437cu: goto label_1b437c;
        case 0x1b4380u: goto label_1b4380;
        case 0x1b4384u: goto label_1b4384;
        case 0x1b4388u: goto label_1b4388;
        case 0x1b438cu: goto label_1b438c;
        case 0x1b4390u: goto label_1b4390;
        case 0x1b4394u: goto label_1b4394;
        case 0x1b4398u: goto label_1b4398;
        case 0x1b439cu: goto label_1b439c;
        case 0x1b43a0u: goto label_1b43a0;
        case 0x1b43a4u: goto label_1b43a4;
        case 0x1b43a8u: goto label_1b43a8;
        case 0x1b43acu: goto label_1b43ac;
        case 0x1b43b0u: goto label_1b43b0;
        case 0x1b43b4u: goto label_1b43b4;
        case 0x1b43b8u: goto label_1b43b8;
        case 0x1b43bcu: goto label_1b43bc;
        case 0x1b43c0u: goto label_1b43c0;
        case 0x1b43c4u: goto label_1b43c4;
        case 0x1b43c8u: goto label_1b43c8;
        case 0x1b43ccu: goto label_1b43cc;
        case 0x1b43d0u: goto label_1b43d0;
        case 0x1b43d4u: goto label_1b43d4;
        case 0x1b43d8u: goto label_1b43d8;
        case 0x1b43dcu: goto label_1b43dc;
        case 0x1b43e0u: goto label_1b43e0;
        case 0x1b43e4u: goto label_1b43e4;
        case 0x1b43e8u: goto label_1b43e8;
        case 0x1b43ecu: goto label_1b43ec;
        case 0x1b43f0u: goto label_1b43f0;
        case 0x1b43f4u: goto label_1b43f4;
        case 0x1b43f8u: goto label_1b43f8;
        case 0x1b43fcu: goto label_1b43fc;
        case 0x1b4400u: goto label_1b4400;
        case 0x1b4404u: goto label_1b4404;
        case 0x1b4408u: goto label_1b4408;
        case 0x1b440cu: goto label_1b440c;
        case 0x1b4410u: goto label_1b4410;
        case 0x1b4414u: goto label_1b4414;
        case 0x1b4418u: goto label_1b4418;
        case 0x1b441cu: goto label_1b441c;
        case 0x1b4420u: goto label_1b4420;
        case 0x1b4424u: goto label_1b4424;
        case 0x1b4428u: goto label_1b4428;
        case 0x1b442cu: goto label_1b442c;
        case 0x1b4430u: goto label_1b4430;
        case 0x1b4434u: goto label_1b4434;
        case 0x1b4438u: goto label_1b4438;
        case 0x1b443cu: goto label_1b443c;
        case 0x1b4440u: goto label_1b4440;
        case 0x1b4444u: goto label_1b4444;
        case 0x1b4448u: goto label_1b4448;
        case 0x1b444cu: goto label_1b444c;
        case 0x1b4450u: goto label_1b4450;
        case 0x1b4454u: goto label_1b4454;
        default: return;
    }

label_1b3c88:
    // 0x1b3c88: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x1b3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
label_1b3c8c:
    // 0x1b3c8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b3c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b3c90:
    // 0x1b3c90: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1b3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b3c94:
    // 0x1b3c94: 0x2863001a  slti        $v1, $v1, 0x1A
    ctx->pc = 0x1b3c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
label_1b3c98:
    // 0x1b3c98: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
label_1b3c9c:
    if (ctx->pc == 0x1B3C9Cu) {
        ctx->pc = 0x1B3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3C98u;
        // 0x1b3c9c: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3CA0u;
        goto label_1b3ca0;
    }
    ctx->pc = 0x1B3C98u;
    {
        const bool branch_taken_0x1b3c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3c98) {
            ctx->pc = 0x1B3C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3C98u;
            // 0x1b3c9c: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3CE0u;
            goto label_1b3ce0;
        }
    }
    ctx->pc = 0x1B3CA0u;
label_1b3ca0:
    // 0x1b3ca0: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x1b3ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
label_1b3ca4:
    // 0x1b3ca4: 0x3421a300  ori         $at, $at, 0xA300
    ctx->pc = 0x1b3ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41728);
label_1b3ca8:
    // 0x1b3ca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3cac:
    // 0x1b3cac: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x1b3cacu;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
label_1b3cb0:
    // 0x1b3cb0: 0x3c01248d  lui         $at, 0x248D
    ctx->pc = 0x1b3cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9357 << 16));
label_1b3cb4:
    // 0x1b3cb4: 0x34213132  ori         $at, $at, 0x3132
    ctx->pc = 0x1b3cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12594);
label_1b3cb8:
    // 0x1b3cb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3cbc:
    // 0x1b3cbc: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x1b3cbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_1b3cc0:
    // 0x1b3cc0: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1b3cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_1b3cc4:
    // 0x1b3cc4: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1b3cc4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b3cc8:
    // 0x1b3cc8: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1b3cc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1b3ccc:
    // 0x1b3ccc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b3cccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1b3cd0:
    // 0x1b3cd0: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x1b3cd0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1b3cd4:
    // 0x1b3cd4: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1b3cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b3cd8:
    // 0x1b3cd8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b3cdc:
    // 0x1b3cdc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3ce0:
    // 0x1b3ce0: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x1b3ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_1b3ce4:
    // 0x1b3ce4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b3ce4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1b3ce8:
    // 0x1b3ce8: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
label_1b3cec:
    if (ctx->pc == 0x1B3CECu) {
        ctx->pc = 0x1B3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CE8u;
        // 0x1b3cec: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3CF0u;
        goto label_1b3cf0;
    }
    ctx->pc = 0x1B3CE8u;
    {
        const bool branch_taken_0x1b3ce8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CE8u;
        // 0x1b3cec: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ce8) {
            ctx->pc = 0x1B3D00u;
            goto label_1b3d00;
        }
    }
    ctx->pc = 0x1B3CF0u;
label_1b3cf0:
    // 0x1b3cf0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b3cf0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b3cf4:
    // 0x1b3cf4: 0x10000033  b           . + 4 + (0x33 << 2)
label_1b3cf8:
    if (ctx->pc == 0x1B3CF8u) {
        ctx->pc = 0x1B3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CF4u;
        // 0x1b3cf8: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3CFCu;
        goto label_1b3cfc;
    }
    ctx->pc = 0x1B3CF4u;
    {
        const bool branch_taken_0x1b3cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CF4u;
        // 0x1b3cf8: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3cf4) {
            ctx->pc = 0x1B3DC4u;
            goto label_1b3dc4;
        }
    }
    ctx->pc = 0x1B3CFCu;
label_1b3cfc:
    // 0x1b3cfc: 0x0  nop
    ctx->pc = 0x1b3cfcu;
    // NOP
label_1b3d00:
    // 0x1b3d00: 0x10000033  b           . + 4 + (0x33 << 2)
label_1b3d04:
    if (ctx->pc == 0x1B3D04u) {
        ctx->pc = 0x1B3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D00u;
        // 0x1b3d04: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3D08u;
        goto label_1b3d08;
    }
    ctx->pc = 0x1B3D00u;
    {
        const bool branch_taken_0x1b3d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D00u;
        // 0x1b3d04: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d00) {
            ctx->pc = 0x1B3DD0u;
            goto label_1b3dd0;
        }
    }
    ctx->pc = 0x1B3D08u;
label_1b3d08:
    // 0x1b3d08: 0x2446ff7a  addiu       $a2, $v0, -0x86
    ctx->pc = 0x1b3d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967162));
label_1b3d0c:
    // 0x1b3d0c: 0x61dc0  sll         $v1, $a2, 23
    ctx->pc = 0x1b3d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
label_1b3d10:
    // 0x1b3d10: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1b3d10u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1b3d14:
    // 0x1b3d14: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1b3d14u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b3d18:
    // 0x1b3d18: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1b3d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_1b3d1c:
    // 0x1b3d1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b3d20:
    // 0x1b3d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b3d24:
    // 0x1b3d24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b3d28:
    // 0x1b3d28: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b3d2c:
    // 0x1b3d2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b3d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b3d30:
    // 0x1b3d30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1b3d34:
    // 0x1b3d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3d38:
    // 0x1b3d38: 0x0  nop
    ctx->pc = 0x1b3d38u;
    // NOP
label_1b3d3c:
    // 0x1b3d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b3d40:
    // 0x1b3d40: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x1b3d40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1b3d44:
    // 0x1b3d44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b3d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b3d48:
    // 0x1b3d48: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b3d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1b3d4c:
    // 0x1b3d4c: 0x461fff6  bgez        $v1, . + 4 + (-0xA << 2)
label_1b3d50:
    if (ctx->pc == 0x1B3D50u) {
        ctx->pc = 0x1B3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D4Cu;
        // 0x1b3d50: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3D54u;
        goto label_1b3d54;
    }
    ctx->pc = 0x1B3D4Cu;
    {
        const bool branch_taken_0x1b3d4c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D4Cu;
        // 0x1b3d50: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d4c) {
            ctx->pc = 0x1B3D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3d28;
        }
    }
    ctx->pc = 0x1B3D54u;
label_1b3d54:
    // 0x1b3d54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b3d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3d58:
    // 0x1b3d58: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b3d58u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b3d5c:
    // 0x1b3d5c: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x1b3d5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1b3d60:
    // 0x1b3d60: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b3d60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3d64:
    // 0x1b3d64: 0x0  nop
    ctx->pc = 0x1b3d64u;
    // NOP
label_1b3d68:
    // 0x1b3d68: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1b3d6c:
    if (ctx->pc == 0x1B3D6Cu) {
        ctx->pc = 0x1B3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D68u;
        // 0x1b3d6c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3D70u;
        goto label_1b3d70;
    }
    ctx->pc = 0x1B3D68u;
    {
        const bool branch_taken_0x1b3d68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D68u;
        // 0x1b3d6c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d68) {
            ctx->pc = 0x1B3D94u;
            goto label_1b3d94;
        }
    }
    ctx->pc = 0x1B3D70u;
label_1b3d70:
    // 0x1b3d70: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x1b3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1b3d74:
    // 0x1b3d74: 0x0  nop
    ctx->pc = 0x1b3d74u;
    // NOP
label_1b3d78:
    // 0x1b3d78: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1b3d7c:
    // 0x1b3d7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3d80:
    // 0x1b3d80: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1b3d80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b3d84:
    // 0x1b3d84: 0x0  nop
    ctx->pc = 0x1b3d84u;
    // NOP
label_1b3d88:
    // 0x1b3d88: 0x0  nop
    ctx->pc = 0x1b3d88u;
    // NOP
label_1b3d8c:
    // 0x1b3d8c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
label_1b3d90:
    if (ctx->pc == 0x1B3D90u) {
        ctx->pc = 0x1B3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D8Cu;
        // 0x1b3d90: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3D94u;
        goto label_1b3d94;
    }
    ctx->pc = 0x1B3D8Cu;
    {
        const bool branch_taken_0x1b3d8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3D8Cu;
        // 0x1b3d90: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3d8c) {
            ctx->pc = 0x1B3D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3d78;
        }
    }
    ctx->pc = 0x1B3D94u;
label_1b3d94:
    // 0x1b3d94: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x1b3d94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
label_1b3d98:
    // 0x1b3d98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b3d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b3d9c:
    // 0x1b3d9c: 0x2529ae00  addiu       $t1, $t1, -0x5200
    ctx->pc = 0x1b3d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946304));
label_1b3da0:
    // 0x1b3da0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b3da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b3da4:
    // 0x1b3da4: 0xc06d00c  jal         func_1B4030
label_1b3da8:
    if (ctx->pc == 0x1B3DA8u) {
        ctx->pc = 0x1B3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DA4u;
        // 0x1b3da8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3DACu;
        goto label_1b3dac;
    }
    ctx->pc = 0x1B3DA4u;
    SET_GPR_U32(ctx, 31, 0x1B3DACu);
    ctx->pc = 0x1B3DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3DA4u;
    // 0x1b3da8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4030u;
    goto label_1b4030;
    ctx->pc = 0x1B3DACu;
label_1b3dac:
    // 0x1b3dac: 0x6410008  bgez        $s2, . + 4 + (0x8 << 2)
label_1b3db0:
    if (ctx->pc == 0x1B3DB0u) {
        ctx->pc = 0x1B3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DACu;
        // 0x1b3db0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3DB4u;
        goto label_1b3db4;
    }
    ctx->pc = 0x1B3DACu;
    {
        const bool branch_taken_0x1b3dac = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DACu;
        // 0x1b3db0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3dac) {
            ctx->pc = 0x1B3DD0u;
            goto label_1b3dd0;
        }
    }
    ctx->pc = 0x1B3DB4u;
label_1b3db4:
    // 0x1b3db4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b3db8:
    // 0x1b3db8: 0x51023  negu        $v0, $a1
    ctx->pc = 0x1b3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_1b3dbc:
    // 0x1b3dbc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3dc0:
    // 0x1b3dc0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b3dc0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b3dc4:
    // 0x1b3dc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b3dc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b3dc8:
    // 0x1b3dc8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1b3dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1b3dcc:
    // 0x1b3dcc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1b3dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1b3dd0:
    // 0x1b3dd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b3dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b3dd4:
    // 0x1b3dd4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b3dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b3dd8:
    // 0x1b3dd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b3dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b3ddc:
    // 0x1b3ddc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b3ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b3de0:
    // 0x1b3de0: 0x3e00008  jr          $ra
label_1b3de4:
    if (ctx->pc == 0x1B3DE4u) {
        ctx->pc = 0x1B3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DE0u;
        // 0x1b3de4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3DE8u;
        goto label_1b3de8;
    }
    ctx->pc = 0x1B3DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3DE0u;
        // 0x1b3de4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3DE8u;
label_1b3de8:
    // 0x1b3de8: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x1b3de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1b3dec:
    // 0x1b3dec: 0x0  nop
    ctx->pc = 0x1b3decu;
    // NOP
label_1b3df0:
    // 0x1b3df0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b3df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b3df4:
    // 0x1b3df4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b3df8:
    // 0x1b3df8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_1b3dfc:
    // 0x1b3dfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b3e00:
    // 0x1b3e00: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b3e04:
    // 0x1b3e04: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b3e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1b3e08:
    // 0x1b3e08: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1b3e08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b3e0c:
    // 0x1b3e0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b3e10:
    if (ctx->pc == 0x1B3E10u) {
        ctx->pc = 0x1B3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E0Cu;
        // 0x1b3e10: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3E14u;
        goto label_1b3e14;
    }
    ctx->pc = 0x1B3E0Cu;
    {
        const bool branch_taken_0x1b3e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E0Cu;
        // 0x1b3e10: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e0c) {
            ctx->pc = 0x1B3E2Cu;
            goto label_1b3e2c;
        }
    }
    ctx->pc = 0x1B3E14u;
label_1b3e14:
    // 0x1b3e14: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
label_1b3e18:
    if (ctx->pc == 0x1B3E18u) {
        ctx->pc = 0x1B3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E14u;
        // 0x1b3e18: 0x53dc3  sra         $a3, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3E1Cu;
        goto label_1b3e1c;
    }
    ctx->pc = 0x1B3E14u;
    {
        const bool branch_taken_0x1b3e14 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1B3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E14u;
        // 0x1b3e18: 0x53dc3  sra         $a3, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e14) {
            ctx->pc = 0x1B3E38u;
            goto label_1b3e38;
        }
    }
    ctx->pc = 0x1B3E1Cu;
label_1b3e1c:
    // 0x1b3e1c: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x1b3e1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
label_1b3e20:
    // 0x1b3e20: 0x0  nop
    ctx->pc = 0x1b3e20u;
    // NOP
label_1b3e24:
    // 0x1b3e24: 0x0  nop
    ctx->pc = 0x1b3e24u;
    // NOP
label_1b3e28:
    // 0x1b3e28: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1b3e28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
label_1b3e2c:
    // 0x1b3e2c: 0x3e00008  jr          $ra
label_1b3e30:
    if (ctx->pc == 0x1B3E30u) {
        ctx->pc = 0x1B3E34u;
        goto label_1b3e34;
    }
    ctx->pc = 0x1B3E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3E34u;
label_1b3e34:
    // 0x1b3e34: 0x0  nop
    ctx->pc = 0x1b3e34u;
    // NOP
label_1b3e38:
    // 0x1b3e38: 0x24e7ff81  addiu       $a3, $a3, -0x7F
    ctx->pc = 0x1b3e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967169));
label_1b3e3c:
    // 0x1b3e3c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_1b3e40:
    // 0x1b3e40: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b3e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1b3e44:
    // 0x1b3e44: 0x30e40001  andi        $a0, $a3, 0x1
    ctx->pc = 0x1b3e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1b3e48:
    // 0x1b3e48: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1b3e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b3e4c:
    // 0x1b3e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b3e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e50:
    // 0x1b3e50: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_1b3e54:
    // 0x1b3e54: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_1b3e58:
    // 0x1b3e58: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_1b3e5c:
    // 0x1b3e5c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1b3e60:
    // 0x1b3e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3e64:
    // 0x1b3e64: 0x0  nop
    ctx->pc = 0x1b3e64u;
    // NOP
label_1b3e68:
    // 0x1b3e68: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x1b3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1b3e6c:
    // 0x1b3e6c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b3e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b3e70:
    // 0x1b3e70: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1b3e74:
    if (ctx->pc == 0x1B3E74u) {
        ctx->pc = 0x1B3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E70u;
        // 0x1b3e74: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3E78u;
        goto label_1b3e78;
    }
    ctx->pc = 0x1B3E70u;
    {
        const bool branch_taken_0x1b3e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e70) {
            ctx->pc = 0x1B3E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3E70u;
            // 0x1b3e74: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3E88u;
            goto label_1b3e88;
        }
    }
    ctx->pc = 0x1B3E78u;
label_1b3e78:
    // 0x1b3e78: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1b3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b3e7c:
    // 0x1b3e7c: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1b3e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b3e80:
    // 0x1b3e80: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1b3e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1b3e84:
    // 0x1b3e84: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1b3e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1b3e88:
    // 0x1b3e88: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
label_1b3e8c:
    if (ctx->pc == 0x1B3E8Cu) {
        ctx->pc = 0x1B3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E88u;
        // 0x1b3e8c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3E90u;
        goto label_1b3e90;
    }
    ctx->pc = 0x1B3E88u;
    {
        const bool branch_taken_0x1b3e88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E88u;
        // 0x1b3e8c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e88) {
            ctx->pc = 0x1B3E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3e68;
        }
    }
    ctx->pc = 0x1B3E90u;
label_1b3e90:
    // 0x1b3e90: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1b3e94:
    if (ctx->pc == 0x1B3E94u) {
        ctx->pc = 0x1B3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E90u;
        // 0x1b3e94: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3E98u;
        goto label_1b3e98;
    }
    ctx->pc = 0x1B3E90u;
    {
        const bool branch_taken_0x1b3e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E90u;
        // 0x1b3e94: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e90) {
            ctx->pc = 0x1B3E9Cu;
            goto label_1b3e9c;
        }
    }
    ctx->pc = 0x1B3E98u;
label_1b3e98:
    // 0x1b3e98: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1b3e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b3e9c:
    // 0x1b3e9c: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x1b3e9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
label_1b3ea0:
    // 0x1b3ea0: 0x71dc0  sll         $v1, $a3, 23
    ctx->pc = 0x1b3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 23));
label_1b3ea4:
    // 0x1b3ea4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1b3ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_1b3ea8:
    // 0x1b3ea8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b3eac:
    // 0x1b3eac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1b3eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b3eb0:
    // 0x1b3eb0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b3eb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3eb4:
    // 0x1b3eb4: 0x3e00008  jr          $ra
label_1b3eb8:
    if (ctx->pc == 0x1B3EB8u) {
        ctx->pc = 0x1B3EBCu;
        goto label_1b3ebc;
    }
    ctx->pc = 0x1B3EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3EBCu;
label_1b3ebc:
    // 0x1b3ebc: 0x0  nop
    ctx->pc = 0x1b3ebcu;
    // NOP
label_1b3ec0:
    // 0x1b3ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b3ec4:
    // 0x1b3ec4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b3ec4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b3ec8:
    // 0x1b3ec8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b3ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b3ecc:
    // 0x1b3ecc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b3eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b3ed0:
    // 0x1b3ed0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b3ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3ed4:
    // 0x1b3ed4: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b3ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b3ed8:
    // 0x1b3ed8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1b3ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1b3edc:
    // 0x1b3edc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b3ee0:
    // 0x1b3ee0: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x1b3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
label_1b3ee4:
    // 0x1b3ee4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1b3ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1b3ee8:
    // 0x1b3ee8: 0x3c043e99  lui         $a0, 0x3E99
    ctx->pc = 0x1b3ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16025 << 16));
label_1b3eec:
    // 0x1b3eec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b3ef0:
    // 0x1b3ef0: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1b3ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39321);
label_1b3ef4:
    // 0x1b3ef4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b3ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b3ef8:
    // 0x1b3ef8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b3efc:
    if (ctx->pc == 0x1B3EFCu) {
        ctx->pc = 0x1B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EF8u;
        // 0x1b3efc: 0x83202a  slt         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3F00u;
        goto label_1b3f00;
    }
    ctx->pc = 0x1B3EF8u;
    {
        const bool branch_taken_0x1b3ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3EF8u;
        // 0x1b3efc: 0x83202a  slt         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ef8) {
            ctx->pc = 0x1B3F10u;
            goto label_1b3f10;
        }
    }
    ctx->pc = 0x1B3F00u;
label_1b3f00:
    // 0x1b3f00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b3f04:
    // 0x1b3f04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3f08:
    // 0x1b3f08: 0x10a00047  beqz        $a1, . + 4 + (0x47 << 2)
label_1b3f0c:
    if (ctx->pc == 0x1B3F0Cu) {
        ctx->pc = 0x1B3F10u;
        goto label_1b3f10;
    }
    ctx->pc = 0x1B3F08u;
    {
        const bool branch_taken_0x1b3f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3f08) {
            ctx->pc = 0x1B4028u;
            goto label_1b4028;
        }
    }
    ctx->pc = 0x1B3F10u;
label_1b3f10:
    // 0x1b3f10: 0x460c6102  mul.s       $f4, $f12, $f12
    ctx->pc = 0x1b3f10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1b3f14:
    // 0x1b3f14: 0x3c01ad47  lui         $at, 0xAD47
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44359 << 16));
label_1b3f18:
    // 0x1b3f18: 0x3421d74e  ori         $at, $at, 0xD74E
    ctx->pc = 0x1b3f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55118);
label_1b3f1c:
    // 0x1b3f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3f20:
    // 0x1b3f20: 0x3c01310f  lui         $at, 0x310F
    ctx->pc = 0x1b3f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12559 << 16));
label_1b3f24:
    // 0x1b3f24: 0x342174f6  ori         $at, $at, 0x74F6
    ctx->pc = 0x1b3f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29942);
label_1b3f28:
    // 0x1b3f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3f2c:
    // 0x1b3f2c: 0x0  nop
    ctx->pc = 0x1b3f2cu;
    // NOP
label_1b3f30:
    // 0x1b3f30: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b3f34:
    // 0x1b3f34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b3f38:
    // 0x1b3f38: 0x3c01b493  lui         $at, 0xB493
    ctx->pc = 0x1b3f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46227 << 16));
label_1b3f3c:
    // 0x1b3f3c: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x1b3f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
label_1b3f40:
    // 0x1b3f40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3f44:
    // 0x1b3f44: 0x0  nop
    ctx->pc = 0x1b3f44u;
    // NOP
label_1b3f48:
    // 0x1b3f48: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b3f4c:
    // 0x1b3f4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b3f50:
    // 0x1b3f50: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x1b3f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
label_1b3f54:
    // 0x1b3f54: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1b3f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
label_1b3f58:
    // 0x1b3f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3f5c:
    // 0x1b3f5c: 0x0  nop
    ctx->pc = 0x1b3f5cu;
    // NOP
label_1b3f60:
    // 0x1b3f60: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b3f64:
    // 0x1b3f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b3f68:
    // 0x1b3f68: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x1b3f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
label_1b3f6c:
    // 0x1b3f6c: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1b3f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
label_1b3f70:
    // 0x1b3f70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3f74:
    // 0x1b3f74: 0x0  nop
    ctx->pc = 0x1b3f74u;
    // NOP
label_1b3f78:
    // 0x1b3f78: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b3f7c:
    // 0x1b3f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b3f80:
    // 0x1b3f80: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1b3f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
label_1b3f84:
    // 0x1b3f84: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b3f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1b3f88:
    // 0x1b3f88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b3f8c:
    // 0x1b3f8c: 0x0  nop
    ctx->pc = 0x1b3f8cu;
    // NOP
label_1b3f90:
    // 0x1b3f90: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b3f94:
    // 0x1b3f94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b3f98:
    // 0x1b3f98: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_1b3f9c:
    if (ctx->pc == 0x1B3F9Cu) {
        ctx->pc = 0x1B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F98u;
        // 0x1b3f9c: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3FA0u;
        goto label_1b3fa0;
    }
    ctx->pc = 0x1B3F98u;
    {
        const bool branch_taken_0x1b3f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F98u;
        // 0x1b3f9c: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f98) {
            ctx->pc = 0x1B3FD0u;
            goto label_1b3fd0;
        }
    }
    ctx->pc = 0x1B3FA0u;
label_1b3fa0:
    // 0x1b3fa0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1b3fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1b3fa4:
    // 0x1b3fa4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b3fa8:
    // 0x1b3fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3fac:
    // 0x1b3fac: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x1b3facu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
label_1b3fb0:
    // 0x1b3fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b3fb4:
    // 0x1b3fb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b3fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b3fb8:
    // 0x1b3fb8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b3fbc:
    // 0x1b3fbc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b3fbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1b3fc0:
    // 0x1b3fc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b3fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b3fc4:
    // 0x1b3fc4: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b3fc8:
    if (ctx->pc == 0x1B3FC8u) {
        ctx->pc = 0x1B3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FC4u;
        // 0x1b3fc8: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3FCCu;
        goto label_1b3fcc;
    }
    ctx->pc = 0x1B3FC4u;
    {
        const bool branch_taken_0x1b3fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FC4u;
        // 0x1b3fc8: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fc4) {
            ctx->pc = 0x1B4028u;
            goto label_1b4028;
        }
    }
    ctx->pc = 0x1B3FCCu;
label_1b3fcc:
    // 0x1b3fcc: 0x0  nop
    ctx->pc = 0x1b3fccu;
    // NOP
label_1b3fd0:
    // 0x1b3fd0: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x1b3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
label_1b3fd4:
    // 0x1b3fd4: 0x3c013e90  lui         $at, 0x3E90
    ctx->pc = 0x1b3fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16016 << 16));
label_1b3fd8:
    // 0x1b3fd8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b3fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b3fdc:
    // 0x1b3fdc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b3fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b3fe0:
    // 0x1b3fe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b3fe4:
    if (ctx->pc == 0x1B3FE4u) {
        ctx->pc = 0x1B3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FE0u;
        // 0x1b3fe4: 0x3c02ff00  lui         $v0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3FE8u;
        goto label_1b3fe8;
    }
    ctx->pc = 0x1B3FE0u;
    {
        const bool branch_taken_0x1b3fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FE0u;
        // 0x1b3fe4: 0x3c02ff00  lui         $v0, 0xFF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fe0) {
            ctx->pc = 0x1B3FF0u;
            goto label_1b3ff0;
        }
    }
    ctx->pc = 0x1B3FE8u;
label_1b3fe8:
    // 0x1b3fe8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b3fec:
    // 0x1b3fec: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1b3fecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b3ff0:
    // 0x1b3ff0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b3ff4:
    // 0x1b3ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b3ff8:
    // 0x1b3ff8: 0x0  nop
    ctx->pc = 0x1b3ff8u;
    // NOP
label_1b3ffc:
    // 0x1b3ffc: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x1b3ffcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1b4000:
    // 0x1b4000: 0x460d60c2  mul.s       $f3, $f12, $f13
    ctx->pc = 0x1b4000u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
label_1b4004:
    // 0x1b4004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4008:
    // 0x1b4008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b400c:
    // 0x1b400c: 0x0  nop
    ctx->pc = 0x1b400cu;
    // NOP
label_1b4010:
    // 0x1b4010: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b4010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b4014:
    // 0x1b4014: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x1b4014u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1b4018:
    // 0x1b4018: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1b4018u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1b401c:
    // 0x1b401c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1b401cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_1b4020:
    // 0x1b4020: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b4020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b4024:
    // 0x1b4024: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4024u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b4028:
    // 0x1b4028: 0x3e00008  jr          $ra
label_1b402c:
    if (ctx->pc == 0x1B402Cu) {
        ctx->pc = 0x1B402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4028u;
        // 0x1b402c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4030u;
        goto label_1b4030;
    }
    ctx->pc = 0x1B4028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4028u;
        // 0x1b402c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4030u;
label_1b4030:
    // 0x1b4030: 0x24c2fffd  addiu       $v0, $a2, -0x3
    ctx->pc = 0x1b4030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_1b4034:
    // 0x1b4034: 0x24ca0004  addiu       $t2, $a2, 0x4
    ctx->pc = 0x1b4034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1b4038:
    // 0x1b4038: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b4038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1b403c:
    // 0x1b403c: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1b403cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_1b4040:
    // 0x1b4040: 0x143100b  movn        $v0, $t2, $v1
    ctx->pc = 0x1b4040u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
label_1b4044:
    // 0x1b4044: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x1b4044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
label_1b4048:
    // 0x1b4048: 0x2b8c3  sra         $s7, $v0, 3
    ctx->pc = 0x1b4048u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 3));
label_1b404c:
    // 0x1b404c: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x1b404cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
label_1b4050:
    // 0x1b4050: 0x2ae20000  slti        $v0, $s7, 0x0
    ctx->pc = 0x1b4050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)0) ? 1 : 0);
label_1b4054:
    // 0x1b4054: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1b4054u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1b4058:
    // 0x1b4058: 0x2b80b  movn        $s7, $zero, $v0
    ctx->pc = 0x1b4058u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_1b405c:
    // 0x1b405c: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x1b405cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
label_1b4060:
    // 0x1b4060: 0x3c14002d  lui         $s4, 0x2D
    ctx->pc = 0x1b4060u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)45 << 16));
label_1b4064:
    // 0x1b4064: 0x288a021  addu        $s4, $s4, $t0
    ctx->pc = 0x1b4064u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
label_1b4068:
    // 0x1b4068: 0x8e94b1c0  lw          $s4, -0x4E40($s4)
    ctx->pc = 0x1b4068u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294947264)));
label_1b406c:
    // 0x1b406c: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x1b406cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
label_1b4070:
    // 0x1b4070: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x1b4070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
label_1b4074:
    // 0x1b4074: 0x24f2ffff  addiu       $s2, $a3, -0x1
    ctx->pc = 0x1b4074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1b4078:
    // 0x1b4078: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1b4078u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b407c:
    // 0x1b407c: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x1b407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_1b4080:
    // 0x1b4080: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x1b4080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
label_1b4084:
    // 0x1b4084: 0x24d1fff8  addiu       $s1, $a2, -0x8
    ctx->pc = 0x1b4084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_1b4088:
    // 0x1b4088: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x1b4088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
label_1b408c:
    // 0x1b408c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1b408cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b4090:
    // 0x1b4090: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x1b4090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
label_1b4094:
    // 0x1b4094: 0x2f22823  subu        $a1, $s7, $s2
    ctx->pc = 0x1b4094u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_1b4098:
    // 0x1b4098: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x1b4098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
label_1b409c:
    // 0x1b409c: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x1b409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
label_1b40a0:
    // 0x1b40a0: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x1b40a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
label_1b40a4:
    // 0x1b40a4: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x1b40a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
label_1b40a8:
    // 0x1b40a8: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1b40a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_1b40ac:
    // 0x1b40ac: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x1b40acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_1b40b0:
    // 0x1b40b0: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
label_1b40b4:
    if (ctx->pc == 0x1B40B4u) {
        ctx->pc = 0x1B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40B0u;
        // 0x1b40b4: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B40B8u;
        goto label_1b40b8;
    }
    ctx->pc = 0x1B40B0u;
    {
        const bool branch_taken_0x1b40b0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40B0u;
        // 0x1b40b4: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40b0) {
            ctx->pc = 0x1B40F0u;
            goto label_1b40f0;
        }
    }
    ctx->pc = 0x1B40B8u;
label_1b40b8:
    // 0x1b40b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1b40b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b40bc:
    // 0x1b40bc: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1b40bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b40c0:
    // 0x1b40c0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1b40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1b40c4:
    // 0x1b40c4: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1b40c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b40c8:
    // 0x1b40c8: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_1b40cc:
    if (ctx->pc == 0x1B40CCu) {
        ctx->pc = 0x1B40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40C8u;
        // 0x1b40cc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B40D0u;
        goto label_1b40d0;
    }
    ctx->pc = 0x1B40C8u;
    {
        const bool branch_taken_0x1b40c8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1b40c8) {
            ctx->pc = 0x1B40CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B40C8u;
            // 0x1b40cc: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B40DCu;
            goto label_1b40dc;
        }
    }
    ctx->pc = 0x1B40D0u;
label_1b40d0:
    // 0x1b40d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b40d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b40d4:
    // 0x1b40d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b40d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b40d8:
    // 0x1b40d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b40d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b40dc:
    // 0x1b40dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b40dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b40e0:
    // 0x1b40e0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1b40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1b40e4:
    // 0x1b40e4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1b40e8:
    // 0x1b40e8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
label_1b40ec:
    if (ctx->pc == 0x1B40ECu) {
        ctx->pc = 0x1B40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40E8u;
        // 0x1b40ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B40F0u;
        goto label_1b40f0;
    }
    ctx->pc = 0x1B40E8u;
    {
        const bool branch_taken_0x1b40e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40E8u;
        // 0x1b40ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40e8) {
            ctx->pc = 0x1B40C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b40c8;
        }
    }
    ctx->pc = 0x1B40F0u;
label_1b40f0:
    // 0x1b40f0: 0x680001b  bltz        $s4, . + 4 + (0x1B << 2)
label_1b40f4:
    if (ctx->pc == 0x1B40F4u) {
        ctx->pc = 0x1B40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40F0u;
        // 0x1b40f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B40F8u;
        goto label_1b40f8;
    }
    ctx->pc = 0x1B40F0u;
    {
        const bool branch_taken_0x1b40f0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1B40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B40F0u;
        // 0x1b40f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b40f0) {
            ctx->pc = 0x1B4160u;
            goto label_1b4160;
        }
    }
    ctx->pc = 0x1B40F8u;
label_1b40f8:
    // 0x1b40f8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1b40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b40fc:
    // 0x1b40fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b40fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b4100:
    // 0x1b4100: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b4100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b4104:
    // 0x1b4104: 0x0  nop
    ctx->pc = 0x1b4104u;
    // NOP
label_1b4108:
    // 0x1b4108: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b4108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b410c:
    // 0x1b410c: 0x642000f  bltzl       $s2, . + 4 + (0xF << 2)
label_1b4110:
    if (ctx->pc == 0x1B4110u) {
        ctx->pc = 0x1B4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B410Cu;
        // 0x1b4110: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4114u;
        goto label_1b4114;
    }
    ctx->pc = 0x1B410Cu;
    {
        const bool branch_taken_0x1b410c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1b410c) {
            ctx->pc = 0x1B4110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B410Cu;
            // 0x1b4110: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B414Cu;
            goto label_1b414c;
        }
    }
    ctx->pc = 0x1B4114u;
label_1b4114:
    // 0x1b4114: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b4114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b4118:
    // 0x1b4118: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b4118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b411c:
    // 0x1b411c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1b411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1b4120:
    // 0x1b4120: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b4120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b4124:
    // 0x1b4124: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x1b4124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b4128:
    // 0x1b4128: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b412c:
    // 0x1b412c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1b412cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1b4130:
    // 0x1b4130: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b4130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4134:
    // 0x1b4134: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b4134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1b4138:
    // 0x1b4138: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b4138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b413c:
    // 0x1b413c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b413cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b4140:
    // 0x1b4140: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_1b4144:
    if (ctx->pc == 0x1B4144u) {
        ctx->pc = 0x1B4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4140u;
        // 0x1b4144: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4148u;
        goto label_1b4148;
    }
    ctx->pc = 0x1B4140u;
    {
        const bool branch_taken_0x1b4140 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4140u;
        // 0x1b4144: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4140) {
            ctx->pc = 0x1B4128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4128;
        }
    }
    ctx->pc = 0x1B4148u;
label_1b4148:
    // 0x1b4148: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b4148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b414c:
    // 0x1b414c: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x1b414cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_1b4150:
    // 0x1b4150: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x1b4150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b4154:
    // 0x1b4154: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b4154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b4158:
    // 0x1b4158: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
label_1b415c:
    if (ctx->pc == 0x1B415Cu) {
        ctx->pc = 0x1B415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4158u;
        // 0x1b415c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4160u;
        goto label_1b4160;
    }
    ctx->pc = 0x1B4158u;
    {
        const bool branch_taken_0x1b4158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4158u;
        // 0x1b415c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4158) {
            ctx->pc = 0x1B4108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4108;
        }
    }
    ctx->pc = 0x1B4160u;
label_1b4160:
    // 0x1b4160: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1b4160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b4164:
    // 0x1b4164: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x1b4164u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1b4168:
    // 0x1b4168: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1b4168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b416c:
    // 0x1b416c: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1b416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1b4170:
    // 0x1b4170: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4174:
    // 0x1b4174: 0x1a000019  blez        $s0, . + 4 + (0x19 << 2)
label_1b4178:
    if (ctx->pc == 0x1B4178u) {
        ctx->pc = 0x1B4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4174u;
        // 0x1b4178: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B417Cu;
        goto label_1b417c;
    }
    ctx->pc = 0x1B4174u;
    {
        const bool branch_taken_0x1b4174 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4174u;
        // 0x1b4178: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4174) {
            ctx->pc = 0x1B41DCu;
            goto label_1b41dc;
        }
    }
    ctx->pc = 0x1B417Cu;
label_1b417c:
    // 0x1b417c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1b417cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_1b4180:
    // 0x1b4180: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b4180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b4184:
    // 0x1b4184: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x1b4184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1b4188:
    // 0x1b4188: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1b4188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_1b418c:
    // 0x1b418c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b418cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b4190:
    // 0x1b4190: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b4190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b4194:
    // 0x1b4194: 0x0  nop
    ctx->pc = 0x1b4194u;
    // NOP
label_1b4198:
    // 0x1b4198: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x1b4198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_1b419c:
    // 0x1b419c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1b419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b41a0:
    // 0x1b41a0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b41a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b41a4:
    // 0x1b41a4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1b41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1b41a8:
    // 0x1b41a8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b41a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1b41ac:
    // 0x1b41ac: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1b41acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b41b0:
    // 0x1b41b0: 0x0  nop
    ctx->pc = 0x1b41b0u;
    // NOP
label_1b41b4:
    // 0x1b41b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b41b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b41b8:
    // 0x1b41b8: 0x0  nop
    ctx->pc = 0x1b41b8u;
    // NOP
label_1b41bc:
    // 0x1b41bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b41bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b41c0:
    // 0x1b41c0: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x1b41c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b41c4:
    // 0x1b41c4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b41c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1b41c8:
    // 0x1b41c8: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x1b41c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b41cc:
    // 0x1b41cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b41ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1b41d0:
    // 0x1b41d0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1b41d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b41d4:
    // 0x1b41d4: 0x1ca0fff0  bgtz        $a1, . + 4 + (-0x10 << 2)
label_1b41d8:
    if (ctx->pc == 0x1B41D8u) {
        ctx->pc = 0x1B41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41D4u;
        // 0x1b41d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B41DCu;
        goto label_1b41dc;
    }
    ctx->pc = 0x1B41D4u;
    {
        const bool branch_taken_0x1b41d4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1B41D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41D4u;
        // 0x1b41d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b41d4) {
            ctx->pc = 0x1B4198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4198;
        }
    }
    ctx->pc = 0x1B41DCu;
label_1b41dc:
    // 0x1b41dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b41dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b41e0:
    // 0x1b41e0: 0xc06d48e  jal         func_1B5238
label_1b41e4:
    if (ctx->pc == 0x1B41E4u) {
        ctx->pc = 0x1B41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41E0u;
        // 0x1b41e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B41E8u;
        goto label_1b41e8;
    }
    ctx->pc = 0x1B41E0u;
    SET_GPR_U32(ctx, 31, 0x1B41E8u);
    ctx->pc = 0x1B41E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41E0u;
    // 0x1b41e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5238u;
    { ctx->pc = 0x1b5238; return; }
    ctx->pc = 0x1B41E8u;
label_1b41e8:
    // 0x1b41e8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x1b41e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_1b41ec:
    // 0x1b41ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b41ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b41f0:
    // 0x1b41f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b41f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1b41f4:
    // 0x1b41f4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b41f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b41f8:
    // 0x1b41f8: 0xc06d452  jal         func_1B5148
label_1b41fc:
    if (ctx->pc == 0x1B41FCu) {
        ctx->pc = 0x1B41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B41F8u;
        // 0x1b41fc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4200u;
        goto label_1b4200;
    }
    ctx->pc = 0x1B41F8u;
    SET_GPR_U32(ctx, 31, 0x1B4200u);
    ctx->pc = 0x1B41FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B41F8u;
    // 0x1b41fc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5148u;
    { ctx->pc = 0x1b5148; return; }
    ctx->pc = 0x1B4200u;
label_1b4200:
    // 0x1b4200: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1b4200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_1b4204:
    // 0x1b4204: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4208:
    // 0x1b4208: 0x0  nop
    ctx->pc = 0x1b4208u;
    // NOP
label_1b420c:
    // 0x1b420c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b420cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b4210:
    // 0x1b4210: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1b4210u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1b4214:
    // 0x1b4214: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b4218:
    // 0x1b4218: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x1b4218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_1b421c:
    // 0x1b421c: 0x0  nop
    ctx->pc = 0x1b421cu;
    // NOP
label_1b4220:
    // 0x1b4220: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1b4220u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4224:
    // 0x1b4224: 0x0  nop
    ctx->pc = 0x1b4224u;
    // NOP
label_1b4228:
    // 0x1b4228: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b4228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b422c:
    // 0x1b422c: 0x1a200010  blez        $s1, . + 4 + (0x10 << 2)
label_1b4230:
    if (ctx->pc == 0x1B4230u) {
        ctx->pc = 0x1B4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B422Cu;
        // 0x1b4230: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4234u;
        goto label_1b4234;
    }
    ctx->pc = 0x1B422Cu;
    {
        const bool branch_taken_0x1b422c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B422Cu;
        // 0x1b4230: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b422c) {
            ctx->pc = 0x1B4270u;
            goto label_1b4270;
        }
    }
    ctx->pc = 0x1B4234u;
label_1b4234:
    // 0x1b4234: 0x2663fffc  addiu       $v1, $s3, -0x4
    ctx->pc = 0x1b4234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_1b4238:
    // 0x1b4238: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b4238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1b423c:
    // 0x1b423c: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x1b423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1b4240:
    // 0x1b4240: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1b4240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1b4244:
    // 0x1b4244: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b4244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b4248:
    // 0x1b4248: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b4248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b424c:
    // 0x1b424c: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x1b424cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1b4250:
    // 0x1b4250: 0x433007  srav        $a2, $v1, $v0
    ctx->pc = 0x1b4250u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1b4254:
    // 0x1b4254: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x1b4254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_1b4258:
    // 0x1b4258: 0x2a6a821  addu        $s5, $s5, $a2
    ctx->pc = 0x1b4258u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_1b425c:
    // 0x1b425c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b425cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b4260:
    // 0x1b4260: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1b4260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1b4264:
    // 0x1b4264: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b4268:
    if (ctx->pc == 0x1B4268u) {
        ctx->pc = 0x1B4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4264u;
        // 0x1b4268: 0x83b007  srav        $s6, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B426Cu;
        goto label_1b426c;
    }
    ctx->pc = 0x1B4264u;
    {
        const bool branch_taken_0x1b4264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4264u;
        // 0x1b4268: 0x83b007  srav        $s6, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4264) {
            ctx->pc = 0x1B42A4u;
            goto label_1b42a4;
        }
    }
    ctx->pc = 0x1B426Cu;
label_1b426c:
    // 0x1b426c: 0x0  nop
    ctx->pc = 0x1b426cu;
    // NOP
label_1b4270:
    // 0x1b4270: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_1b4274:
    if (ctx->pc == 0x1B4274u) {
        ctx->pc = 0x1B4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4270u;
        // 0x1b4274: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4278u;
        goto label_1b4278;
    }
    ctx->pc = 0x1B4270u;
    {
        const bool branch_taken_0x1b4270 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4270u;
        // 0x1b4274: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4270) {
            ctx->pc = 0x1B4288u;
            goto label_1b4288;
        }
    }
    ctx->pc = 0x1B4278u;
label_1b4278:
    // 0x1b4278: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x1b4278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_1b427c:
    // 0x1b427c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b4280:
    if (ctx->pc == 0x1B4280u) {
        ctx->pc = 0x1B4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B427Cu;
        // 0x1b4280: 0x3b203  sra         $s6, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4284u;
        goto label_1b4284;
    }
    ctx->pc = 0x1B427Cu;
    {
        const bool branch_taken_0x1b427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B427Cu;
        // 0x1b4280: 0x3b203  sra         $s6, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b427c) {
            ctx->pc = 0x1B42A4u;
            goto label_1b42a4;
        }
    }
    ctx->pc = 0x1B4284u;
label_1b4284:
    // 0x1b4284: 0x0  nop
    ctx->pc = 0x1b4284u;
    // NOP
label_1b4288:
    // 0x1b4288: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b4288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b428c:
    // 0x1b428c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b428cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4290:
    // 0x1b4290: 0x0  nop
    ctx->pc = 0x1b4290u;
    // NOP
label_1b4294:
    // 0x1b4294: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1b4294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4298:
    // 0x1b4298: 0x0  nop
    ctx->pc = 0x1b4298u;
    // NOP
label_1b429c:
    // 0x1b429c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1b42a0:
    if (ctx->pc == 0x1B42A0u) {
        ctx->pc = 0x1B42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B429Cu;
        // 0x1b42a0: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42A4u;
        goto label_1b42a4;
    }
    ctx->pc = 0x1B429Cu;
    {
        const bool branch_taken_0x1b429c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b429c) {
            ctx->pc = 0x1B42A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B429Cu;
            // 0x1b42a0: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B42A4u;
            goto label_1b42a4;
        }
    }
    ctx->pc = 0x1B42A4u;
label_1b42a4:
    // 0x1b42a4: 0x1ac00032  blez        $s6, . + 4 + (0x32 << 2)
label_1b42a8:
    if (ctx->pc == 0x1B42A8u) {
        ctx->pc = 0x1B42ACu;
        goto label_1b42ac;
    }
    ctx->pc = 0x1B42A4u;
    {
        const bool branch_taken_0x1b42a4 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x1b42a4) {
            ctx->pc = 0x1B4370u;
            goto label_1b4370;
        }
    }
    ctx->pc = 0x1B42ACu;
label_1b42ac:
    // 0x1b42ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1b42acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1b42b0:
    // 0x1b42b0: 0x1a000012  blez        $s0, . + 4 + (0x12 << 2)
label_1b42b4:
    if (ctx->pc == 0x1B42B4u) {
        ctx->pc = 0x1B42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42B0u;
        // 0x1b42b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42B8u;
        goto label_1b42b8;
    }
    ctx->pc = 0x1B42B0u;
    {
        const bool branch_taken_0x1b42b0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42B0u;
        // 0x1b42b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42b0) {
            ctx->pc = 0x1B42FCu;
            goto label_1b42fc;
        }
    }
    ctx->pc = 0x1B42B8u;
label_1b42b8:
    // 0x1b42b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b42b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1b42bc:
    // 0x1b42bc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1b42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b42c0:
    // 0x1b42c0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1b42c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b42c4:
    // 0x1b42c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b42c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b42c8:
    // 0x1b42c8: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_1b42cc:
    if (ctx->pc == 0x1B42CCu) {
        ctx->pc = 0x1B42CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42C8u;
        // 0x1b42cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42D0u;
        goto label_1b42d0;
    }
    ctx->pc = 0x1B42C8u;
    {
        const bool branch_taken_0x1b42c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B42CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42C8u;
        // 0x1b42cc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42c8) {
            ctx->pc = 0x1B42E0u;
            goto label_1b42e0;
        }
    }
    ctx->pc = 0x1B42D0u;
label_1b42d0:
    // 0x1b42d0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1b42d4:
    if (ctx->pc == 0x1B42D4u) {
        ctx->pc = 0x1B42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42D0u;
        // 0x1b42d4: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42D8u;
        goto label_1b42d8;
    }
    ctx->pc = 0x1B42D0u;
    {
        const bool branch_taken_0x1b42d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42D0u;
        // 0x1b42d4: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42d0) {
            ctx->pc = 0x1B42E8u;
            goto label_1b42e8;
        }
    }
    ctx->pc = 0x1B42D8u;
label_1b42d8:
    // 0x1b42d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b42dc:
    if (ctx->pc == 0x1B42DCu) {
        ctx->pc = 0x1B42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42D8u;
        // 0x1b42dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42E0u;
        goto label_1b42e0;
    }
    ctx->pc = 0x1B42D8u;
    {
        const bool branch_taken_0x1b42d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42D8u;
        // 0x1b42dc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42d8) {
            ctx->pc = 0x1B42E4u;
            goto label_1b42e4;
        }
    }
    ctx->pc = 0x1B42E0u;
label_1b42e0:
    // 0x1b42e0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x1b42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1b42e4:
    // 0x1b42e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1b42e8:
    // 0x1b42e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b42e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b42ec:
    // 0x1b42ec: 0x0  nop
    ctx->pc = 0x1b42ecu;
    // NOP
label_1b42f0:
    // 0x1b42f0: 0x0  nop
    ctx->pc = 0x1b42f0u;
    // NOP
label_1b42f4:
    // 0x1b42f4: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
label_1b42f8:
    if (ctx->pc == 0x1B42F8u) {
        ctx->pc = 0x1B42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42F4u;
        // 0x1b42f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B42FCu;
        goto label_1b42fc;
    }
    ctx->pc = 0x1B42F4u;
    {
        const bool branch_taken_0x1b42f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42F4u;
        // 0x1b42f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42f4) {
            ctx->pc = 0x1B42C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b42c8;
        }
    }
    ctx->pc = 0x1B42FCu;
label_1b42fc:
    // 0x1b42fc: 0x1a200013  blez        $s1, . + 4 + (0x13 << 2)
label_1b4300:
    if (ctx->pc == 0x1B4300u) {
        ctx->pc = 0x1B4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42FCu;
        // 0x1b4300: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4304u;
        goto label_1b4304;
    }
    ctx->pc = 0x1B42FCu;
    {
        const bool branch_taken_0x1b42fc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B42FCu;
        // 0x1b4300: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b42fc) {
            ctx->pc = 0x1B434Cu;
            goto label_1b434c;
        }
    }
    ctx->pc = 0x1B4304u;
label_1b4304:
    // 0x1b4304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4308:
    // 0x1b4308: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_1b430c:
    if (ctx->pc == 0x1B430Cu) {
        ctx->pc = 0x1B430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4308u;
        // 0x1b430c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4310u;
        goto label_1b4310;
    }
    ctx->pc = 0x1B4308u;
    {
        const bool branch_taken_0x1b4308 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4308u;
        // 0x1b430c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4308) {
            ctx->pc = 0x1B4320u;
            goto label_1b4320;
        }
    }
    ctx->pc = 0x1B4310u;
label_1b4310:
    // 0x1b4310: 0x52220009  beql        $s1, $v0, . + 4 + (0x9 << 2)
label_1b4314:
    if (ctx->pc == 0x1B4314u) {
        ctx->pc = 0x1B4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4310u;
        // 0x1b4314: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4318u;
        goto label_1b4318;
    }
    ctx->pc = 0x1B4310u;
    {
        const bool branch_taken_0x1b4310 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4310) {
            ctx->pc = 0x1B4314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4310u;
            // 0x1b4314: 0x2662fffc  addiu       $v0, $s3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4338u;
            goto label_1b4338;
        }
    }
    ctx->pc = 0x1B4318u;
label_1b4318:
    // 0x1b4318: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b431c:
    if (ctx->pc == 0x1B431Cu) {
        ctx->pc = 0x1B4320u;
        goto label_1b4320;
    }
    ctx->pc = 0x1B4318u;
    {
        const bool branch_taken_0x1b4318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4318) {
            ctx->pc = 0x1B434Cu;
            goto label_1b434c;
        }
    }
    ctx->pc = 0x1B4320u;
label_1b4320:
    // 0x1b4320: 0x2662fffc  addiu       $v0, $s3, -0x4
    ctx->pc = 0x1b4320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_1b4324:
    // 0x1b4324: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1b4324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1b4328:
    // 0x1b4328: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b4328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b432c:
    // 0x1b432c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b4330:
    if (ctx->pc == 0x1B4330u) {
        ctx->pc = 0x1B4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B432Cu;
        // 0x1b4330: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4334u;
        goto label_1b4334;
    }
    ctx->pc = 0x1B432Cu;
    {
        const bool branch_taken_0x1b432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B432Cu;
        // 0x1b4330: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b432c) {
            ctx->pc = 0x1B4344u;
            goto label_1b4344;
        }
    }
    ctx->pc = 0x1B4334u;
label_1b4334:
    // 0x1b4334: 0x0  nop
    ctx->pc = 0x1b4334u;
    // NOP
label_1b4338:
    // 0x1b4338: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1b4338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1b433c:
    // 0x1b433c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b4340:
    // 0x1b4340: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1b4340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_1b4344:
    // 0x1b4344: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b4344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1b4348:
    // 0x1b4348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b434c:
    // 0x1b434c: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
label_1b4350:
    if (ctx->pc == 0x1B4350u) {
        ctx->pc = 0x1B4354u;
        goto label_1b4354;
    }
    ctx->pc = 0x1B434Cu;
    {
        const bool branch_taken_0x1b434c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b434c) {
            ctx->pc = 0x1B4370u;
            goto label_1b4370;
        }
    }
    ctx->pc = 0x1B4354u;
label_1b4354:
    // 0x1b4354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4358:
    // 0x1b4358: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b4358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b435c:
    // 0x1b435c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_1b4360:
    if (ctx->pc == 0x1B4360u) {
        ctx->pc = 0x1B4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B435Cu;
        // 0x1b4360: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4364u;
        goto label_1b4364;
    }
    ctx->pc = 0x1B435Cu;
    {
        const bool branch_taken_0x1b435c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B435Cu;
        // 0x1b4360: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b435c) {
            ctx->pc = 0x1B4370u;
            goto label_1b4370;
        }
    }
    ctx->pc = 0x1B4364u;
label_1b4364:
    // 0x1b4364: 0xc06d48e  jal         func_1B5238
label_1b4368:
    if (ctx->pc == 0x1B4368u) {
        ctx->pc = 0x1B4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4364u;
        // 0x1b4368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B436Cu;
        goto label_1b436c;
    }
    ctx->pc = 0x1B4364u;
    SET_GPR_U32(ctx, 31, 0x1B436Cu);
    ctx->pc = 0x1B4368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4364u;
    // 0x1b4368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5238u;
    { ctx->pc = 0x1b5238; return; }
    ctx->pc = 0x1B436Cu;
label_1b436c:
    // 0x1b436c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1b436cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1b4370:
    // 0x1b4370: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4374:
    // 0x1b4374: 0x0  nop
    ctx->pc = 0x1b4374u;
    // NOP
label_1b4378:
    // 0x1b4378: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1b4378u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b437c:
    // 0x1b437c: 0x0  nop
    ctx->pc = 0x1b437cu;
    // NOP
label_1b4380:
    // 0x1b4380: 0x45000053  bc1f        . + 4 + (0x53 << 2)
label_1b4384:
    if (ctx->pc == 0x1B4384u) {
        ctx->pc = 0x1B4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4380u;
        // 0x1b4384: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4388u;
        goto label_1b4388;
    }
    ctx->pc = 0x1B4380u;
    {
        const bool branch_taken_0x1b4380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4380u;
        // 0x1b4384: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4380) {
            ctx->pc = 0x1B44D0u;
            { ctx->pc = 0x1b44d0; return; }
        }
    }
    ctx->pc = 0x1B4388u;
label_1b4388:
    // 0x1b4388: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x1b4388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1b438c:
    // 0x1b438c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1b4390:
    if (ctx->pc == 0x1B4390u) {
        ctx->pc = 0x1B4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B438Cu;
        // 0x1b4390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4394u;
        goto label_1b4394;
    }
    ctx->pc = 0x1B438Cu;
    {
        const bool branch_taken_0x1b438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B438Cu;
        // 0x1b4390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b438c) {
            ctx->pc = 0x1B43BCu;
            goto label_1b43bc;
        }
    }
    ctx->pc = 0x1B4394u;
label_1b4394:
    // 0x1b4394: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b4394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b4398:
    // 0x1b4398: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1b4398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1b439c:
    // 0x1b439c: 0x0  nop
    ctx->pc = 0x1b439cu;
    // NOP
label_1b43a0:
    // 0x1b43a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b43a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b43a4:
    // 0x1b43a4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1b43a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_1b43a8:
    // 0x1b43a8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b43a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b43ac:
    // 0x1b43ac: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x1b43acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1b43b0:
    // 0x1b43b0: 0x0  nop
    ctx->pc = 0x1b43b0u;
    // NOP
label_1b43b4:
    // 0x1b43b4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1b43b8:
    if (ctx->pc == 0x1B43B8u) {
        ctx->pc = 0x1B43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43B4u;
        // 0x1b43b8: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B43BCu;
        goto label_1b43bc;
    }
    ctx->pc = 0x1B43B4u;
    {
        const bool branch_taken_0x1b43b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B43B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43B4u;
        // 0x1b43b8: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43b4) {
            ctx->pc = 0x1B43A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b43a0;
        }
    }
    ctx->pc = 0x1B43BCu;
label_1b43bc:
    // 0x1b43bc: 0x14a00040  bnez        $a1, . + 4 + (0x40 << 2)
label_1b43c0:
    if (ctx->pc == 0x1B43C0u) {
        ctx->pc = 0x1B43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43BCu;
        // 0x1b43c0: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B43C4u;
        goto label_1b43c4;
    }
    ctx->pc = 0x1B43BCu;
    {
        const bool branch_taken_0x1b43bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43BCu;
        // 0x1b43c0: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43bc) {
            ctx->pc = 0x1B44C0u;
            { ctx->pc = 0x1b44c0; return; }
        }
    }
    ctx->pc = 0x1B43C4u;
label_1b43c4:
    // 0x1b43c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b43c8:
    // 0x1b43c8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1b43cc:
    // 0x1b43cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b43ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b43d0:
    // 0x1b43d0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_1b43d4:
    if (ctx->pc == 0x1B43D4u) {
        ctx->pc = 0x1B43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43D0u;
        // 0x1b43d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B43D8u;
        goto label_1b43d8;
    }
    ctx->pc = 0x1B43D0u;
    {
        const bool branch_taken_0x1b43d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43D0u;
        // 0x1b43d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43d0) {
            ctx->pc = 0x1B4404u;
            goto label_1b4404;
        }
    }
    ctx->pc = 0x1B43D8u;
label_1b43d8:
    // 0x1b43d8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x1b43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_1b43dc:
    // 0x1b43dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1b43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1b43e0:
    // 0x1b43e0: 0x2443fffc  addiu       $v1, $v0, -0x4
    ctx->pc = 0x1b43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1b43e4:
    // 0x1b43e4: 0x0  nop
    ctx->pc = 0x1b43e4u;
    // NOP
label_1b43e8:
    // 0x1b43e8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1b43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1b43ec:
    // 0x1b43ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b43f0:
    // 0x1b43f0: 0x0  nop
    ctx->pc = 0x1b43f0u;
    // NOP
label_1b43f4:
    // 0x1b43f4: 0x0  nop
    ctx->pc = 0x1b43f4u;
    // NOP
label_1b43f8:
    // 0x1b43f8: 0x0  nop
    ctx->pc = 0x1b43f8u;
    // NOP
label_1b43fc:
    // 0x1b43fc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1b4400:
    if (ctx->pc == 0x1B4400u) {
        ctx->pc = 0x1B4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43FCu;
        // 0x1b4400: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4404u;
        goto label_1b4404;
    }
    ctx->pc = 0x1B43FCu;
    {
        const bool branch_taken_0x1b43fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B43FCu;
        // 0x1b4400: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b43fc) {
            ctx->pc = 0x1B43E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b43e8;
        }
    }
    ctx->pc = 0x1B4404u;
label_1b4404:
    // 0x1b4404: 0x2084821  addu        $t1, $s0, $t0
    ctx->pc = 0x1b4404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_1b4408:
    // 0x1b4408: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x1b4408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b440c:
    // 0x1b440c: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x1b440cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b4410:
    // 0x1b4410: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
label_1b4414:
    if (ctx->pc == 0x1B4414u) {
        ctx->pc = 0x1B4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4410u;
        // 0x1b4414: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4418u;
        goto label_1b4418;
    }
    ctx->pc = 0x1B4410u;
    {
        const bool branch_taken_0x1b4410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4410u;
        // 0x1b4414: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4410) {
            ctx->pc = 0x1B4164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4164;
        }
    }
    ctx->pc = 0x1B4418u;
label_1b4418:
    // 0x1b4418: 0x8fab0148  lw          $t3, 0x148($sp)
    ctx->pc = 0x1b4418u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_1b441c:
    // 0x1b441c: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x1b441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_1b4420:
    // 0x1b4420: 0x2e62021  addu        $a0, $s7, $a2
    ctx->pc = 0x1b4420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
label_1b4424:
    // 0x1b4424: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b4424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1b4428:
    // 0x1b4428: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b4428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b442c:
    // 0x1b442c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b442cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b4430:
    // 0x1b4430: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1b4430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b4434:
    // 0x1b4434: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x1b4434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b4438:
    // 0x1b4438: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x1b4438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1b443c:
    // 0x1b443c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1b443cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b4440:
    // 0x1b4440: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1b4440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1b4444:
    // 0x1b4444: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x1b4444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b4448:
    // 0x1b4448: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1b4448u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1b444c:
    // 0x1b444c: 0x0  nop
    ctx->pc = 0x1b444cu;
    // NOP
label_1b4450:
    // 0x1b4450: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1b4450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4454:
    // 0x1b4454: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b4454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    ctx->pc = 0x1b4458u;
    return;
}

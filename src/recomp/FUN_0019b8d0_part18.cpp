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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1a42b8u: goto label_1a42b8;
        case 0x1a42bcu: goto label_1a42bc;
        case 0x1a42c0u: goto label_1a42c0;
        case 0x1a42c4u: goto label_1a42c4;
        case 0x1a42c8u: goto label_1a42c8;
        case 0x1a42ccu: goto label_1a42cc;
        case 0x1a42d0u: goto label_1a42d0;
        case 0x1a42d4u: goto label_1a42d4;
        case 0x1a42d8u: goto label_1a42d8;
        case 0x1a42dcu: goto label_1a42dc;
        case 0x1a42e0u: goto label_1a42e0;
        case 0x1a42e4u: goto label_1a42e4;
        case 0x1a42e8u: goto label_1a42e8;
        case 0x1a42ecu: goto label_1a42ec;
        case 0x1a42f0u: goto label_1a42f0;
        case 0x1a42f4u: goto label_1a42f4;
        case 0x1a42f8u: goto label_1a42f8;
        case 0x1a42fcu: goto label_1a42fc;
        case 0x1a4300u: goto label_1a4300;
        case 0x1a4304u: goto label_1a4304;
        case 0x1a4308u: goto label_1a4308;
        case 0x1a430cu: goto label_1a430c;
        case 0x1a4310u: goto label_1a4310;
        case 0x1a4314u: goto label_1a4314;
        case 0x1a4318u: goto label_1a4318;
        case 0x1a431cu: goto label_1a431c;
        case 0x1a4320u: goto label_1a4320;
        case 0x1a4324u: goto label_1a4324;
        case 0x1a4328u: goto label_1a4328;
        case 0x1a432cu: goto label_1a432c;
        case 0x1a4330u: goto label_1a4330;
        case 0x1a4334u: goto label_1a4334;
        case 0x1a4338u: goto label_1a4338;
        case 0x1a433cu: goto label_1a433c;
        case 0x1a4340u: goto label_1a4340;
        case 0x1a4344u: goto label_1a4344;
        case 0x1a4348u: goto label_1a4348;
        case 0x1a434cu: goto label_1a434c;
        case 0x1a4350u: goto label_1a4350;
        case 0x1a4354u: goto label_1a4354;
        case 0x1a4358u: goto label_1a4358;
        case 0x1a435cu: goto label_1a435c;
        case 0x1a4360u: goto label_1a4360;
        case 0x1a4364u: goto label_1a4364;
        case 0x1a4368u: goto label_1a4368;
        case 0x1a436cu: goto label_1a436c;
        case 0x1a4370u: goto label_1a4370;
        case 0x1a4374u: goto label_1a4374;
        case 0x1a4378u: goto label_1a4378;
        case 0x1a437cu: goto label_1a437c;
        case 0x1a4380u: goto label_1a4380;
        case 0x1a4384u: goto label_1a4384;
        case 0x1a4388u: goto label_1a4388;
        case 0x1a438cu: goto label_1a438c;
        case 0x1a4390u: goto label_1a4390;
        case 0x1a4394u: goto label_1a4394;
        case 0x1a4398u: goto label_1a4398;
        case 0x1a439cu: goto label_1a439c;
        case 0x1a43a0u: goto label_1a43a0;
        case 0x1a43a4u: goto label_1a43a4;
        case 0x1a43a8u: goto label_1a43a8;
        case 0x1a43acu: goto label_1a43ac;
        case 0x1a43b0u: goto label_1a43b0;
        case 0x1a43b4u: goto label_1a43b4;
        case 0x1a43b8u: goto label_1a43b8;
        case 0x1a43bcu: goto label_1a43bc;
        case 0x1a43c0u: goto label_1a43c0;
        case 0x1a43c4u: goto label_1a43c4;
        case 0x1a43c8u: goto label_1a43c8;
        case 0x1a43ccu: goto label_1a43cc;
        case 0x1a43d0u: goto label_1a43d0;
        case 0x1a43d4u: goto label_1a43d4;
        case 0x1a43d8u: goto label_1a43d8;
        case 0x1a43dcu: goto label_1a43dc;
        case 0x1a43e0u: goto label_1a43e0;
        case 0x1a43e4u: goto label_1a43e4;
        case 0x1a43e8u: goto label_1a43e8;
        case 0x1a43ecu: goto label_1a43ec;
        case 0x1a43f0u: goto label_1a43f0;
        case 0x1a43f4u: goto label_1a43f4;
        case 0x1a43f8u: goto label_1a43f8;
        case 0x1a43fcu: goto label_1a43fc;
        case 0x1a4400u: goto label_1a4400;
        case 0x1a4404u: goto label_1a4404;
        case 0x1a4408u: goto label_1a4408;
        case 0x1a440cu: goto label_1a440c;
        case 0x1a4410u: goto label_1a4410;
        case 0x1a4414u: goto label_1a4414;
        case 0x1a4418u: goto label_1a4418;
        case 0x1a441cu: goto label_1a441c;
        case 0x1a4420u: goto label_1a4420;
        case 0x1a4424u: goto label_1a4424;
        case 0x1a4428u: goto label_1a4428;
        case 0x1a442cu: goto label_1a442c;
        case 0x1a4430u: goto label_1a4430;
        case 0x1a4434u: goto label_1a4434;
        case 0x1a4438u: goto label_1a4438;
        case 0x1a443cu: goto label_1a443c;
        case 0x1a4440u: goto label_1a4440;
        case 0x1a4444u: goto label_1a4444;
        case 0x1a4448u: goto label_1a4448;
        case 0x1a444cu: goto label_1a444c;
        case 0x1a4450u: goto label_1a4450;
        case 0x1a4454u: goto label_1a4454;
        case 0x1a4458u: goto label_1a4458;
        case 0x1a445cu: goto label_1a445c;
        case 0x1a4460u: goto label_1a4460;
        case 0x1a4464u: goto label_1a4464;
        case 0x1a4468u: goto label_1a4468;
        case 0x1a446cu: goto label_1a446c;
        case 0x1a4470u: goto label_1a4470;
        case 0x1a4474u: goto label_1a4474;
        case 0x1a4478u: goto label_1a4478;
        case 0x1a447cu: goto label_1a447c;
        case 0x1a4480u: goto label_1a4480;
        case 0x1a4484u: goto label_1a4484;
        case 0x1a4488u: goto label_1a4488;
        case 0x1a448cu: goto label_1a448c;
        case 0x1a4490u: goto label_1a4490;
        case 0x1a4494u: goto label_1a4494;
        case 0x1a4498u: goto label_1a4498;
        case 0x1a449cu: goto label_1a449c;
        case 0x1a44a0u: goto label_1a44a0;
        case 0x1a44a4u: goto label_1a44a4;
        case 0x1a44a8u: goto label_1a44a8;
        case 0x1a44acu: goto label_1a44ac;
        case 0x1a44b0u: goto label_1a44b0;
        case 0x1a44b4u: goto label_1a44b4;
        case 0x1a44b8u: goto label_1a44b8;
        case 0x1a44bcu: goto label_1a44bc;
        case 0x1a44c0u: goto label_1a44c0;
        case 0x1a44c4u: goto label_1a44c4;
        case 0x1a44c8u: goto label_1a44c8;
        case 0x1a44ccu: goto label_1a44cc;
        case 0x1a44d0u: goto label_1a44d0;
        case 0x1a44d4u: goto label_1a44d4;
        case 0x1a44d8u: goto label_1a44d8;
        case 0x1a44dcu: goto label_1a44dc;
        case 0x1a44e0u: goto label_1a44e0;
        case 0x1a44e4u: goto label_1a44e4;
        case 0x1a44e8u: goto label_1a44e8;
        case 0x1a44ecu: goto label_1a44ec;
        case 0x1a44f0u: goto label_1a44f0;
        case 0x1a44f4u: goto label_1a44f4;
        case 0x1a44f8u: goto label_1a44f8;
        case 0x1a44fcu: goto label_1a44fc;
        case 0x1a4500u: goto label_1a4500;
        case 0x1a4504u: goto label_1a4504;
        case 0x1a4508u: goto label_1a4508;
        case 0x1a450cu: goto label_1a450c;
        case 0x1a4510u: goto label_1a4510;
        case 0x1a4514u: goto label_1a4514;
        case 0x1a4518u: goto label_1a4518;
        case 0x1a451cu: goto label_1a451c;
        case 0x1a4520u: goto label_1a4520;
        case 0x1a4524u: goto label_1a4524;
        case 0x1a4528u: goto label_1a4528;
        case 0x1a452cu: goto label_1a452c;
        case 0x1a4530u: goto label_1a4530;
        case 0x1a4534u: goto label_1a4534;
        case 0x1a4538u: goto label_1a4538;
        case 0x1a453cu: goto label_1a453c;
        case 0x1a4540u: goto label_1a4540;
        case 0x1a4544u: goto label_1a4544;
        case 0x1a4548u: goto label_1a4548;
        case 0x1a454cu: goto label_1a454c;
        case 0x1a4550u: goto label_1a4550;
        case 0x1a4554u: goto label_1a4554;
        case 0x1a4558u: goto label_1a4558;
        case 0x1a455cu: goto label_1a455c;
        case 0x1a4560u: goto label_1a4560;
        case 0x1a4564u: goto label_1a4564;
        case 0x1a4568u: goto label_1a4568;
        case 0x1a456cu: goto label_1a456c;
        default: return;
    }

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
label_1a42b8:
    // 0x1a42b8: 0x0  nop
    ctx->pc = 0x1a42b8u;
    // NOP
label_1a42bc:
    // 0x1a42bc: 0x0  nop
    ctx->pc = 0x1a42bcu;
    // NOP
label_1a42c0:
    // 0x1a42c0: 0x0  nop
    ctx->pc = 0x1a42c0u;
    // NOP
label_1a42c4:
    // 0x1a42c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a42c8:
    if (ctx->pc == 0x1A42C8u) {
        ctx->pc = 0x1A42CCu;
        goto label_1a42cc;
    }
    ctx->pc = 0x1A42C4u;
    {
        const bool branch_taken_0x1a42c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a42c4) {
            ctx->pc = 0x1A42B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a42b0;
        }
    }
    ctx->pc = 0x1A42CCu;
label_1a42cc:
    // 0x1a42cc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a42d0:
    // 0x1a42d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a42d4:
    // 0x1a42d4: 0x24635b20  addiu       $v1, $v1, 0x5B20
    ctx->pc = 0x1a42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23328));
label_1a42d8:
    // 0x1a42d8: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x1a42d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
label_1a42dc:
    // 0x1a42dc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1a42dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a42e0:
    // 0x1a42e0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1a42e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_1a42e4:
    // 0x1a42e4: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x1a42e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
label_1a42e8:
    // 0x1a42e8: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1a42e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
label_1a42ec:
    // 0x1a42ec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a42ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1a42f0:
    // 0x1a42f0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1a42f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_1a42f4:
    // 0x1a42f4: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x1a42f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
label_1a42f8:
    // 0x1a42f8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1a42f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_1a42fc:
    // 0x1a42fc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a42fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_1a4300:
    // 0x1a4300: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1a4300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1a4304:
    // 0x1a4304: 0x0  nop
    ctx->pc = 0x1a4304u;
    // NOP
label_1a4308:
    // 0x1a4308: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1a4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a430c:
    // 0x1a430c: 0x0  nop
    ctx->pc = 0x1a430cu;
    // NOP
label_1a4310:
    // 0x1a4310: 0x0  nop
    ctx->pc = 0x1a4310u;
    // NOP
label_1a4314:
    // 0x1a4314: 0x0  nop
    ctx->pc = 0x1a4314u;
    // NOP
label_1a4318:
    // 0x1a4318: 0x0  nop
    ctx->pc = 0x1a4318u;
    // NOP
label_1a431c:
    // 0x1a431c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a4320:
    if (ctx->pc == 0x1A4320u) {
        ctx->pc = 0x1A4324u;
        goto label_1a4324;
    }
    ctx->pc = 0x1A431Cu;
    {
        const bool branch_taken_0x1a431c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a431c) {
            ctx->pc = 0x1A4308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4308;
        }
    }
    ctx->pc = 0x1A4324u;
label_1a4324:
    // 0x1a4324: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a4328:
    // 0x1a4328: 0x3c039000  lui         $v1, 0x9000
    ctx->pc = 0x1a4328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36864 << 16));
label_1a432c:
    // 0x1a432c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a432cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1a4330:
    // 0x1a4330: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a4330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a4334:
    // 0x1a4334: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a4334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a4338:
    // 0x1a4338: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1a4338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_1a433c:
    // 0x1a433c: 0x0  nop
    ctx->pc = 0x1a433cu;
    // NOP
label_1a4340:
    // 0x1a4340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a4340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4344:
    // 0x1a4344: 0x0  nop
    ctx->pc = 0x1a4344u;
    // NOP
label_1a4348:
    // 0x1a4348: 0x0  nop
    ctx->pc = 0x1a4348u;
    // NOP
label_1a434c:
    // 0x1a434c: 0x0  nop
    ctx->pc = 0x1a434cu;
    // NOP
label_1a4350:
    // 0x1a4350: 0x0  nop
    ctx->pc = 0x1a4350u;
    // NOP
label_1a4354:
    // 0x1a4354: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a4358:
    if (ctx->pc == 0x1A4358u) {
        ctx->pc = 0x1A435Cu;
        goto label_1a435c;
    }
    ctx->pc = 0x1A4354u;
    {
        const bool branch_taken_0x1a4354 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a4354) {
            ctx->pc = 0x1A4340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4340;
        }
    }
    ctx->pc = 0x1A435Cu;
label_1a435c:
    // 0x1a435c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a435cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a4360:
    // 0x1a4360: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a4360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1a4364:
    // 0x1a4364: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1a4364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
label_1a4368:
    // 0x1a4368: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a4368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a436c:
    // 0x1a436c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a436cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a4370:
    // 0x1a4370: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1a4370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_1a4374:
    // 0x1a4374: 0x0  nop
    ctx->pc = 0x1a4374u;
    // NOP
label_1a4378:
    // 0x1a4378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a437c:
    // 0x1a437c: 0x0  nop
    ctx->pc = 0x1a437cu;
    // NOP
label_1a4380:
    // 0x1a4380: 0x0  nop
    ctx->pc = 0x1a4380u;
    // NOP
label_1a4384:
    // 0x1a4384: 0x0  nop
    ctx->pc = 0x1a4384u;
    // NOP
label_1a4388:
    // 0x1a4388: 0x0  nop
    ctx->pc = 0x1a4388u;
    // NOP
label_1a438c:
    // 0x1a438c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a4390:
    if (ctx->pc == 0x1A4390u) {
        ctx->pc = 0x1A4394u;
        goto label_1a4394;
    }
    ctx->pc = 0x1A438Cu;
    {
        const bool branch_taken_0x1a438c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a438c) {
            ctx->pc = 0x1A4378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4378;
        }
    }
    ctx->pc = 0x1A4394u;
label_1a4394:
    // 0x1a4394: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a4398:
    // 0x1a4398: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a439c:
    // 0x1a439c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a439cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1a43a0:
    // 0x1a43a0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a43a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_1a43a4:
    // 0x1a43a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a43a8:
    // 0x1a43a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a43ac:
    // 0x1a43ac: 0x0  nop
    ctx->pc = 0x1a43acu;
    // NOP
label_1a43b0:
    // 0x1a43b0: 0x0  nop
    ctx->pc = 0x1a43b0u;
    // NOP
label_1a43b4:
    // 0x1a43b4: 0x0  nop
    ctx->pc = 0x1a43b4u;
    // NOP
label_1a43b8:
    // 0x1a43b8: 0x0  nop
    ctx->pc = 0x1a43b8u;
    // NOP
label_1a43bc:
    // 0x1a43bc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
label_1a43c0:
    if (ctx->pc == 0x1A43C0u) {
        ctx->pc = 0x1A43C4u;
        goto label_1a43c4;
    }
    ctx->pc = 0x1A43BCu;
    {
        const bool branch_taken_0x1a43bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a43bc) {
            ctx->pc = 0x1A43A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a43a8;
        }
    }
    ctx->pc = 0x1A43C4u;
label_1a43c4:
    // 0x1a43c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a43c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a43c8:
    // 0x1a43c8: 0x3e00008  jr          $ra
label_1a43cc:
    if (ctx->pc == 0x1A43CCu) {
        ctx->pc = 0x1A43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43C8u;
        // 0x1a43cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A43D0u;
        goto label_1a43d0;
    }
    ctx->pc = 0x1A43C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43C8u;
        // 0x1a43cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A43D0u;
label_1a43d0:
    // 0x1a43d0: 0x0  nop
    ctx->pc = 0x1a43d0u;
    // NOP
label_1a43d4:
    // 0x1a43d4: 0x0  nop
    ctx->pc = 0x1a43d4u;
    // NOP
label_1a43d8:
    // 0x1a43d8: 0x0  nop
    ctx->pc = 0x1a43d8u;
    // NOP
label_1a43dc:
    // 0x1a43dc: 0x0  nop
    ctx->pc = 0x1a43dcu;
    // NOP
label_1a43e0:
    // 0x1a43e0: 0x0  nop
    ctx->pc = 0x1a43e0u;
    // NOP
label_1a43e4:
    // 0x1a43e4: 0x0  nop
    ctx->pc = 0x1a43e4u;
    // NOP
label_1a43e8:
    // 0x1a43e8: 0x0  nop
    ctx->pc = 0x1a43e8u;
    // NOP
label_1a43ec:
    // 0x1a43ec: 0x0  nop
    ctx->pc = 0x1a43ecu;
    // NOP
label_1a43f0:
    // 0x1a43f0: 0x0  nop
    ctx->pc = 0x1a43f0u;
    // NOP
label_1a43f4:
    // 0x1a43f4: 0x0  nop
    ctx->pc = 0x1a43f4u;
    // NOP
label_1a43f8:
    // 0x1a43f8: 0x0  nop
    ctx->pc = 0x1a43f8u;
    // NOP
label_1a43fc:
    // 0x1a43fc: 0x0  nop
    ctx->pc = 0x1a43fcu;
    // NOP
label_1a4400:
    // 0x1a4400: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1a4400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
label_1a4404:
    // 0x1a4404: 0xc  syscall     0
    ctx->pc = 0x1a4404u;
    ctx->pc = 0x1A4408u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4408:
    // 0x1a4408: 0x3e00008  jr          $ra
label_1a440c:
    if (ctx->pc == 0x1A440Cu) {
        ctx->pc = 0x1A4410u;
        goto label_1a4410;
    }
    ctx->pc = 0x1A4408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4410u;
label_1a4410:
    // 0x1a4410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4414:
    // 0x1a4414: 0xc  syscall     0
    ctx->pc = 0x1a4414u;
    ctx->pc = 0x1A4418u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4418:
    // 0x1a4418: 0x3e00008  jr          $ra
label_1a441c:
    if (ctx->pc == 0x1A441Cu) {
        ctx->pc = 0x1A4420u;
        goto label_1a4420;
    }
    ctx->pc = 0x1A4418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4420u;
label_1a4420:
    // 0x1a4420: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a4420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4424:
    // 0x1a4424: 0xc  syscall     0
    ctx->pc = 0x1a4424u;
    ctx->pc = 0x1A4428u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4428:
    // 0x1a4428: 0x3e00008  jr          $ra
label_1a442c:
    if (ctx->pc == 0x1A442Cu) {
        ctx->pc = 0x1A4430u;
        goto label_1a4430;
    }
    ctx->pc = 0x1A4428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4430u;
label_1a4430:
    // 0x1a4430: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a4430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a4434:
    // 0x1a4434: 0xc  syscall     0
    ctx->pc = 0x1a4434u;
    ctx->pc = 0x1A4438u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4438:
    // 0x1a4438: 0x3e00008  jr          $ra
label_1a443c:
    if (ctx->pc == 0x1A443Cu) {
        ctx->pc = 0x1A4440u;
        goto label_1a4440;
    }
    ctx->pc = 0x1A4438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4440u;
label_1a4440:
    // 0x1a4440: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a4440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a4444:
    // 0x1a4444: 0xc  syscall     0
    ctx->pc = 0x1a4444u;
    ctx->pc = 0x1A4448u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4448:
    // 0x1a4448: 0x3e00008  jr          $ra
label_1a444c:
    if (ctx->pc == 0x1A444Cu) {
        ctx->pc = 0x1A4450u;
        goto label_1a4450;
    }
    ctx->pc = 0x1A4448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4450u;
label_1a4450:
    // 0x1a4450: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a4450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a4454:
    // 0x1a4454: 0xc  syscall     0
    ctx->pc = 0x1a4454u;
    ctx->pc = 0x1A4458u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4458:
    // 0x1a4458: 0x3e00008  jr          $ra
label_1a445c:
    if (ctx->pc == 0x1A445Cu) {
        ctx->pc = 0x1A4460u;
        goto label_1a4460;
    }
    ctx->pc = 0x1A4458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4460u;
label_1a4460:
    // 0x1a4460: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a4460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a4464:
    // 0x1a4464: 0xc  syscall     0
    ctx->pc = 0x1a4464u;
    ctx->pc = 0x1A4468u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4468:
    // 0x1a4468: 0x3e00008  jr          $ra
label_1a446c:
    if (ctx->pc == 0x1A446Cu) {
        ctx->pc = 0x1A4470u;
        goto label_1a4470;
    }
    ctx->pc = 0x1A4468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4470u;
label_1a4470:
    // 0x1a4470: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a4470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1a4474:
    // 0x1a4474: 0xc  syscall     0
    ctx->pc = 0x1a4474u;
    ctx->pc = 0x1A4478u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4478:
    // 0x1a4478: 0x3e00008  jr          $ra
label_1a447c:
    if (ctx->pc == 0x1A447Cu) {
        ctx->pc = 0x1A4480u;
        goto label_1a4480;
    }
    ctx->pc = 0x1A4478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4480u;
label_1a4480:
    // 0x1a4480: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a4480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a4484:
    // 0x1a4484: 0xc  syscall     0
    ctx->pc = 0x1a4484u;
    ctx->pc = 0x1A4488u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4488:
    // 0x1a4488: 0x3e00008  jr          $ra
label_1a448c:
    if (ctx->pc == 0x1A448Cu) {
        ctx->pc = 0x1A4490u;
        goto label_1a4490;
    }
    ctx->pc = 0x1A4488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4490u;
label_1a4490:
    // 0x1a4490: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1a4490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a4494:
    // 0x1a4494: 0xc  syscall     0
    ctx->pc = 0x1a4494u;
    ctx->pc = 0x1A4498u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4498:
    // 0x1a4498: 0x3e00008  jr          $ra
label_1a449c:
    if (ctx->pc == 0x1A449Cu) {
        ctx->pc = 0x1A44A0u;
        goto label_1a44a0;
    }
    ctx->pc = 0x1A4498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A44A0u;
label_1a44a0:
    // 0x1a44a0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1a44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a44a4:
    // 0x1a44a4: 0xc  syscall     0
    ctx->pc = 0x1a44a4u;
    ctx->pc = 0x1A44A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a44a8:
    // 0x1a44a8: 0x3e00008  jr          $ra
label_1a44ac:
    if (ctx->pc == 0x1A44ACu) {
        ctx->pc = 0x1A44B0u;
        goto label_1a44b0;
    }
    ctx->pc = 0x1A44A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A44B0u;
label_1a44b0:
    // 0x1a44b0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1a44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1a44b4:
    // 0x1a44b4: 0xc  syscall     0
    ctx->pc = 0x1a44b4u;
    ctx->pc = 0x1A44B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a44b8:
    // 0x1a44b8: 0x3e00008  jr          $ra
label_1a44bc:
    if (ctx->pc == 0x1A44BCu) {
        ctx->pc = 0x1A44C0u;
        goto label_1a44c0;
    }
    ctx->pc = 0x1A44B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A44C0u;
label_1a44c0:
    // 0x1a44c0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a44c4:
    // 0x1a44c4: 0xc  syscall     0
    ctx->pc = 0x1a44c4u;
    ctx->pc = 0x1A44C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a44c8:
    // 0x1a44c8: 0x3e00008  jr          $ra
label_1a44cc:
    if (ctx->pc == 0x1A44CCu) {
        ctx->pc = 0x1A44D0u;
        goto label_1a44d0;
    }
    ctx->pc = 0x1A44C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A44D0u;
label_1a44d0:
    // 0x1a44d0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1a44d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a44d4:
    // 0x1a44d4: 0xc  syscall     0
    ctx->pc = 0x1a44d4u;
    ctx->pc = 0x1A44D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a44d8:
    // 0x1a44d8: 0x3e00008  jr          $ra
label_1a44dc:
    if (ctx->pc == 0x1A44DCu) {
        ctx->pc = 0x1A44E0u;
        goto label_1a44e0;
    }
    ctx->pc = 0x1A44D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A44E0u;
label_1a44e0:
    // 0x1a44e0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a44e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1a44e4:
    // 0x1a44e4: 0xc  syscall     0
    ctx->pc = 0x1a44e4u;
    ctx->pc = 0x1A44E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a44e8:
    // 0x1a44e8: 0x3e00008  jr          $ra
label_1a44ec:
    if (ctx->pc == 0x1A44ECu) {
        ctx->pc = 0x1A44F0u;
        goto label_1a44f0;
    }
    ctx->pc = 0x1A44E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A44F0u;
label_1a44f0:
    // 0x1a44f0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1a44f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1a44f4:
    // 0x1a44f4: 0xc  syscall     0
    ctx->pc = 0x1a44f4u;
    ctx->pc = 0x1A44F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a44f8:
    // 0x1a44f8: 0x3e00008  jr          $ra
label_1a44fc:
    if (ctx->pc == 0x1A44FCu) {
        ctx->pc = 0x1A4500u;
        goto label_1a4500;
    }
    ctx->pc = 0x1A44F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4500u;
label_1a4500:
    // 0x1a4500: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a4500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4504:
    // 0x1a4504: 0xc  syscall     0
    ctx->pc = 0x1a4504u;
    ctx->pc = 0x1A4508u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4508:
    // 0x1a4508: 0x3e00008  jr          $ra
label_1a450c:
    if (ctx->pc == 0x1A450Cu) {
        ctx->pc = 0x1A4510u;
        goto label_1a4510;
    }
    ctx->pc = 0x1A4508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4510u;
label_1a4510:
    // 0x1a4510: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a4510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a4514:
    // 0x1a4514: 0xc  syscall     0
    ctx->pc = 0x1a4514u;
    ctx->pc = 0x1A4518u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4518:
    // 0x1a4518: 0x3e00008  jr          $ra
label_1a451c:
    if (ctx->pc == 0x1A451Cu) {
        ctx->pc = 0x1A4520u;
        goto label_1a4520;
    }
    ctx->pc = 0x1A4518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4520u;
label_1a4520:
    // 0x1a4520: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1a4520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1a4524:
    // 0x1a4524: 0xc  syscall     0
    ctx->pc = 0x1a4524u;
    ctx->pc = 0x1A4528u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4528:
    // 0x1a4528: 0x3e00008  jr          $ra
label_1a452c:
    if (ctx->pc == 0x1A452Cu) {
        ctx->pc = 0x1A4530u;
        goto label_1a4530;
    }
    ctx->pc = 0x1A4528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4530u;
label_1a4530:
    // 0x1a4530: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1a4530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1a4534:
    // 0x1a4534: 0xc  syscall     0
    ctx->pc = 0x1a4534u;
    ctx->pc = 0x1A4538u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4538:
    // 0x1a4538: 0x3e00008  jr          $ra
label_1a453c:
    if (ctx->pc == 0x1A453Cu) {
        ctx->pc = 0x1A4540u;
        goto label_1a4540;
    }
    ctx->pc = 0x1A4538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4540u;
label_1a4540:
    // 0x1a4540: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1a4540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1a4544:
    // 0x1a4544: 0xc  syscall     0
    ctx->pc = 0x1a4544u;
    ctx->pc = 0x1A4548u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4548:
    // 0x1a4548: 0x3e00008  jr          $ra
label_1a454c:
    if (ctx->pc == 0x1A454Cu) {
        ctx->pc = 0x1A4550u;
        goto label_1a4550;
    }
    ctx->pc = 0x1A4548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4550u;
label_1a4550:
    // 0x1a4550: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1a4550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1a4554:
    // 0x1a4554: 0xc  syscall     0
    ctx->pc = 0x1a4554u;
    ctx->pc = 0x1A4558u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4558:
    // 0x1a4558: 0x3e00008  jr          $ra
label_1a455c:
    if (ctx->pc == 0x1A455Cu) {
        ctx->pc = 0x1A4560u;
        goto label_1a4560;
    }
    ctx->pc = 0x1A4558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4560u;
label_1a4560:
    // 0x1a4560: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a4560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a4564:
    // 0x1a4564: 0xc  syscall     0
    ctx->pc = 0x1a4564u;
    ctx->pc = 0x1A4568u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4568:
    // 0x1a4568: 0x3e00008  jr          $ra
label_1a456c:
    if (ctx->pc == 0x1A456Cu) {
        ctx->pc = 0x1A4570u;
        { ctx->pc = 0x1a4570; return; }
    }
    ctx->pc = 0x1A4568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4570u;
    ctx->pc = 0x1a4570u;
    return;
}

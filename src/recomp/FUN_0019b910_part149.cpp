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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part149(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e3d50u: goto label_1e3d50;
        case 0x1e3d54u: goto label_1e3d54;
        case 0x1e3d58u: goto label_1e3d58;
        case 0x1e3d5cu: goto label_1e3d5c;
        case 0x1e3d60u: goto label_1e3d60;
        case 0x1e3d64u: goto label_1e3d64;
        case 0x1e3d68u: goto label_1e3d68;
        case 0x1e3d6cu: goto label_1e3d6c;
        case 0x1e3d70u: goto label_1e3d70;
        case 0x1e3d74u: goto label_1e3d74;
        case 0x1e3d78u: goto label_1e3d78;
        case 0x1e3d7cu: goto label_1e3d7c;
        case 0x1e3d80u: goto label_1e3d80;
        case 0x1e3d84u: goto label_1e3d84;
        case 0x1e3d88u: goto label_1e3d88;
        case 0x1e3d8cu: goto label_1e3d8c;
        case 0x1e3d90u: goto label_1e3d90;
        case 0x1e3d94u: goto label_1e3d94;
        case 0x1e3d98u: goto label_1e3d98;
        case 0x1e3d9cu: goto label_1e3d9c;
        case 0x1e3da0u: goto label_1e3da0;
        case 0x1e3da4u: goto label_1e3da4;
        case 0x1e3da8u: goto label_1e3da8;
        case 0x1e3dacu: goto label_1e3dac;
        case 0x1e3db0u: goto label_1e3db0;
        case 0x1e3db4u: goto label_1e3db4;
        case 0x1e3db8u: goto label_1e3db8;
        case 0x1e3dbcu: goto label_1e3dbc;
        case 0x1e3dc0u: goto label_1e3dc0;
        case 0x1e3dc4u: goto label_1e3dc4;
        case 0x1e3dc8u: goto label_1e3dc8;
        case 0x1e3dccu: goto label_1e3dcc;
        case 0x1e3dd0u: goto label_1e3dd0;
        case 0x1e3dd4u: goto label_1e3dd4;
        case 0x1e3dd8u: goto label_1e3dd8;
        case 0x1e3ddcu: goto label_1e3ddc;
        case 0x1e3de0u: goto label_1e3de0;
        case 0x1e3de4u: goto label_1e3de4;
        case 0x1e3de8u: goto label_1e3de8;
        case 0x1e3decu: goto label_1e3dec;
        case 0x1e3df0u: goto label_1e3df0;
        case 0x1e3df4u: goto label_1e3df4;
        case 0x1e3df8u: goto label_1e3df8;
        case 0x1e3dfcu: goto label_1e3dfc;
        case 0x1e3e00u: goto label_1e3e00;
        case 0x1e3e04u: goto label_1e3e04;
        case 0x1e3e08u: goto label_1e3e08;
        case 0x1e3e0cu: goto label_1e3e0c;
        case 0x1e3e10u: goto label_1e3e10;
        case 0x1e3e14u: goto label_1e3e14;
        case 0x1e3e18u: goto label_1e3e18;
        case 0x1e3e1cu: goto label_1e3e1c;
        case 0x1e3e20u: goto label_1e3e20;
        case 0x1e3e24u: goto label_1e3e24;
        case 0x1e3e28u: goto label_1e3e28;
        case 0x1e3e2cu: goto label_1e3e2c;
        case 0x1e3e30u: goto label_1e3e30;
        case 0x1e3e34u: goto label_1e3e34;
        case 0x1e3e38u: goto label_1e3e38;
        case 0x1e3e3cu: goto label_1e3e3c;
        case 0x1e3e40u: goto label_1e3e40;
        case 0x1e3e44u: goto label_1e3e44;
        case 0x1e3e48u: goto label_1e3e48;
        case 0x1e3e4cu: goto label_1e3e4c;
        case 0x1e3e50u: goto label_1e3e50;
        case 0x1e3e54u: goto label_1e3e54;
        case 0x1e3e58u: goto label_1e3e58;
        case 0x1e3e5cu: goto label_1e3e5c;
        case 0x1e3e60u: goto label_1e3e60;
        case 0x1e3e64u: goto label_1e3e64;
        case 0x1e3e68u: goto label_1e3e68;
        case 0x1e3e6cu: goto label_1e3e6c;
        case 0x1e3e70u: goto label_1e3e70;
        case 0x1e3e74u: goto label_1e3e74;
        case 0x1e3e78u: goto label_1e3e78;
        case 0x1e3e7cu: goto label_1e3e7c;
        case 0x1e3e80u: goto label_1e3e80;
        case 0x1e3e84u: goto label_1e3e84;
        case 0x1e3e88u: goto label_1e3e88;
        case 0x1e3e8cu: goto label_1e3e8c;
        case 0x1e3e90u: goto label_1e3e90;
        case 0x1e3e94u: goto label_1e3e94;
        case 0x1e3e98u: goto label_1e3e98;
        case 0x1e3e9cu: goto label_1e3e9c;
        case 0x1e3ea0u: goto label_1e3ea0;
        case 0x1e3ea4u: goto label_1e3ea4;
        case 0x1e3ea8u: goto label_1e3ea8;
        case 0x1e3eacu: goto label_1e3eac;
        case 0x1e3eb0u: goto label_1e3eb0;
        case 0x1e3eb4u: goto label_1e3eb4;
        case 0x1e3eb8u: goto label_1e3eb8;
        case 0x1e3ebcu: goto label_1e3ebc;
        case 0x1e3ec0u: goto label_1e3ec0;
        case 0x1e3ec4u: goto label_1e3ec4;
        case 0x1e3ec8u: goto label_1e3ec8;
        case 0x1e3eccu: goto label_1e3ecc;
        case 0x1e3ed0u: goto label_1e3ed0;
        case 0x1e3ed4u: goto label_1e3ed4;
        case 0x1e3ed8u: goto label_1e3ed8;
        case 0x1e3edcu: goto label_1e3edc;
        case 0x1e3ee0u: goto label_1e3ee0;
        case 0x1e3ee4u: goto label_1e3ee4;
        case 0x1e3ee8u: goto label_1e3ee8;
        case 0x1e3eecu: goto label_1e3eec;
        case 0x1e3ef0u: goto label_1e3ef0;
        case 0x1e3ef4u: goto label_1e3ef4;
        case 0x1e3ef8u: goto label_1e3ef8;
        case 0x1e3efcu: goto label_1e3efc;
        case 0x1e3f00u: goto label_1e3f00;
        case 0x1e3f04u: goto label_1e3f04;
        case 0x1e3f08u: goto label_1e3f08;
        case 0x1e3f0cu: goto label_1e3f0c;
        case 0x1e3f10u: goto label_1e3f10;
        case 0x1e3f14u: goto label_1e3f14;
        case 0x1e3f18u: goto label_1e3f18;
        case 0x1e3f1cu: goto label_1e3f1c;
        case 0x1e3f20u: goto label_1e3f20;
        case 0x1e3f24u: goto label_1e3f24;
        case 0x1e3f28u: goto label_1e3f28;
        case 0x1e3f2cu: goto label_1e3f2c;
        case 0x1e3f30u: goto label_1e3f30;
        case 0x1e3f34u: goto label_1e3f34;
        case 0x1e3f38u: goto label_1e3f38;
        case 0x1e3f3cu: goto label_1e3f3c;
        case 0x1e3f40u: goto label_1e3f40;
        case 0x1e3f44u: goto label_1e3f44;
        case 0x1e3f48u: goto label_1e3f48;
        case 0x1e3f4cu: goto label_1e3f4c;
        case 0x1e3f50u: goto label_1e3f50;
        case 0x1e3f54u: goto label_1e3f54;
        case 0x1e3f58u: goto label_1e3f58;
        case 0x1e3f5cu: goto label_1e3f5c;
        case 0x1e3f60u: goto label_1e3f60;
        case 0x1e3f64u: goto label_1e3f64;
        case 0x1e3f68u: goto label_1e3f68;
        case 0x1e3f6cu: goto label_1e3f6c;
        case 0x1e3f70u: goto label_1e3f70;
        case 0x1e3f74u: goto label_1e3f74;
        case 0x1e3f78u: goto label_1e3f78;
        case 0x1e3f7cu: goto label_1e3f7c;
        case 0x1e3f80u: goto label_1e3f80;
        case 0x1e3f84u: goto label_1e3f84;
        case 0x1e3f88u: goto label_1e3f88;
        case 0x1e3f8cu: goto label_1e3f8c;
        case 0x1e3f90u: goto label_1e3f90;
        case 0x1e3f94u: goto label_1e3f94;
        case 0x1e3f98u: goto label_1e3f98;
        case 0x1e3f9cu: goto label_1e3f9c;
        case 0x1e3fa0u: goto label_1e3fa0;
        case 0x1e3fa4u: goto label_1e3fa4;
        case 0x1e3fa8u: goto label_1e3fa8;
        case 0x1e3facu: goto label_1e3fac;
        case 0x1e3fb0u: goto label_1e3fb0;
        case 0x1e3fb4u: goto label_1e3fb4;
        case 0x1e3fb8u: goto label_1e3fb8;
        case 0x1e3fbcu: goto label_1e3fbc;
        case 0x1e3fc0u: goto label_1e3fc0;
        case 0x1e3fc4u: goto label_1e3fc4;
        case 0x1e3fc8u: goto label_1e3fc8;
        case 0x1e3fccu: goto label_1e3fcc;
        case 0x1e3fd0u: goto label_1e3fd0;
        case 0x1e3fd4u: goto label_1e3fd4;
        case 0x1e3fd8u: goto label_1e3fd8;
        case 0x1e3fdcu: goto label_1e3fdc;
        case 0x1e3fe0u: goto label_1e3fe0;
        case 0x1e3fe4u: goto label_1e3fe4;
        case 0x1e3fe8u: goto label_1e3fe8;
        case 0x1e3fecu: goto label_1e3fec;
        case 0x1e3ff0u: goto label_1e3ff0;
        case 0x1e3ff4u: goto label_1e3ff4;
        case 0x1e3ff8u: goto label_1e3ff8;
        case 0x1e3ffcu: goto label_1e3ffc;
        case 0x1e4000u: goto label_1e4000;
        case 0x1e4004u: goto label_1e4004;
        case 0x1e4008u: goto label_1e4008;
        case 0x1e400cu: goto label_1e400c;
        case 0x1e4010u: goto label_1e4010;
        case 0x1e4014u: goto label_1e4014;
        case 0x1e4018u: goto label_1e4018;
        case 0x1e401cu: goto label_1e401c;
        case 0x1e4020u: goto label_1e4020;
        case 0x1e4024u: goto label_1e4024;
        case 0x1e4028u: goto label_1e4028;
        case 0x1e402cu: goto label_1e402c;
        case 0x1e4030u: goto label_1e4030;
        case 0x1e4034u: goto label_1e4034;
        case 0x1e4038u: goto label_1e4038;
        case 0x1e403cu: goto label_1e403c;
        case 0x1e4040u: goto label_1e4040;
        case 0x1e4044u: goto label_1e4044;
        case 0x1e4048u: goto label_1e4048;
        case 0x1e404cu: goto label_1e404c;
        case 0x1e4050u: goto label_1e4050;
        case 0x1e4054u: goto label_1e4054;
        case 0x1e4058u: goto label_1e4058;
        case 0x1e405cu: goto label_1e405c;
        case 0x1e4060u: goto label_1e4060;
        case 0x1e4064u: goto label_1e4064;
        case 0x1e4068u: goto label_1e4068;
        case 0x1e406cu: goto label_1e406c;
        case 0x1e4070u: goto label_1e4070;
        case 0x1e4074u: goto label_1e4074;
        case 0x1e4078u: goto label_1e4078;
        case 0x1e407cu: goto label_1e407c;
        case 0x1e4080u: goto label_1e4080;
        case 0x1e4084u: goto label_1e4084;
        case 0x1e4088u: goto label_1e4088;
        case 0x1e408cu: goto label_1e408c;
        case 0x1e4090u: goto label_1e4090;
        case 0x1e4094u: goto label_1e4094;
        case 0x1e4098u: goto label_1e4098;
        case 0x1e409cu: goto label_1e409c;
        case 0x1e40a0u: goto label_1e40a0;
        case 0x1e40a4u: goto label_1e40a4;
        case 0x1e40a8u: goto label_1e40a8;
        case 0x1e40acu: goto label_1e40ac;
        case 0x1e40b0u: goto label_1e40b0;
        case 0x1e40b4u: goto label_1e40b4;
        case 0x1e40b8u: goto label_1e40b8;
        case 0x1e40bcu: goto label_1e40bc;
        case 0x1e40c0u: goto label_1e40c0;
        case 0x1e40c4u: goto label_1e40c4;
        case 0x1e40c8u: goto label_1e40c8;
        case 0x1e40ccu: goto label_1e40cc;
        case 0x1e40d0u: goto label_1e40d0;
        case 0x1e40d4u: goto label_1e40d4;
        case 0x1e40d8u: goto label_1e40d8;
        case 0x1e40dcu: goto label_1e40dc;
        case 0x1e40e0u: goto label_1e40e0;
        case 0x1e40e4u: goto label_1e40e4;
        case 0x1e40e8u: goto label_1e40e8;
        case 0x1e40ecu: goto label_1e40ec;
        case 0x1e40f0u: goto label_1e40f0;
        case 0x1e40f4u: goto label_1e40f4;
        case 0x1e40f8u: goto label_1e40f8;
        case 0x1e40fcu: goto label_1e40fc;
        case 0x1e4100u: goto label_1e4100;
        case 0x1e4104u: goto label_1e4104;
        case 0x1e4108u: goto label_1e4108;
        case 0x1e410cu: goto label_1e410c;
        case 0x1e4110u: goto label_1e4110;
        case 0x1e4114u: goto label_1e4114;
        case 0x1e4118u: goto label_1e4118;
        case 0x1e411cu: goto label_1e411c;
        case 0x1e4120u: goto label_1e4120;
        case 0x1e4124u: goto label_1e4124;
        case 0x1e4128u: goto label_1e4128;
        case 0x1e412cu: goto label_1e412c;
        case 0x1e4130u: goto label_1e4130;
        case 0x1e4134u: goto label_1e4134;
        case 0x1e4138u: goto label_1e4138;
        case 0x1e413cu: goto label_1e413c;
        case 0x1e4140u: goto label_1e4140;
        case 0x1e4144u: goto label_1e4144;
        case 0x1e4148u: goto label_1e4148;
        case 0x1e414cu: goto label_1e414c;
        case 0x1e4150u: goto label_1e4150;
        case 0x1e4154u: goto label_1e4154;
        case 0x1e4158u: goto label_1e4158;
        case 0x1e415cu: goto label_1e415c;
        case 0x1e4160u: goto label_1e4160;
        case 0x1e4164u: goto label_1e4164;
        case 0x1e4168u: goto label_1e4168;
        case 0x1e416cu: goto label_1e416c;
        case 0x1e4170u: goto label_1e4170;
        case 0x1e4174u: goto label_1e4174;
        case 0x1e4178u: goto label_1e4178;
        case 0x1e417cu: goto label_1e417c;
        case 0x1e4180u: goto label_1e4180;
        case 0x1e4184u: goto label_1e4184;
        case 0x1e4188u: goto label_1e4188;
        case 0x1e418cu: goto label_1e418c;
        case 0x1e4190u: goto label_1e4190;
        case 0x1e4194u: goto label_1e4194;
        case 0x1e4198u: goto label_1e4198;
        case 0x1e419cu: goto label_1e419c;
        case 0x1e41a0u: goto label_1e41a0;
        case 0x1e41a4u: goto label_1e41a4;
        case 0x1e41a8u: goto label_1e41a8;
        case 0x1e41acu: goto label_1e41ac;
        case 0x1e41b0u: goto label_1e41b0;
        case 0x1e41b4u: goto label_1e41b4;
        case 0x1e41b8u: goto label_1e41b8;
        case 0x1e41bcu: goto label_1e41bc;
        case 0x1e41c0u: goto label_1e41c0;
        case 0x1e41c4u: goto label_1e41c4;
        case 0x1e41c8u: goto label_1e41c8;
        case 0x1e41ccu: goto label_1e41cc;
        case 0x1e41d0u: goto label_1e41d0;
        case 0x1e41d4u: goto label_1e41d4;
        case 0x1e41d8u: goto label_1e41d8;
        case 0x1e41dcu: goto label_1e41dc;
        case 0x1e41e0u: goto label_1e41e0;
        case 0x1e41e4u: goto label_1e41e4;
        case 0x1e41e8u: goto label_1e41e8;
        case 0x1e41ecu: goto label_1e41ec;
        case 0x1e41f0u: goto label_1e41f0;
        case 0x1e41f4u: goto label_1e41f4;
        case 0x1e41f8u: goto label_1e41f8;
        case 0x1e41fcu: goto label_1e41fc;
        case 0x1e4200u: goto label_1e4200;
        case 0x1e4204u: goto label_1e4204;
        case 0x1e4208u: goto label_1e4208;
        case 0x1e420cu: goto label_1e420c;
        case 0x1e4210u: goto label_1e4210;
        case 0x1e4214u: goto label_1e4214;
        case 0x1e4218u: goto label_1e4218;
        case 0x1e421cu: goto label_1e421c;
        case 0x1e4220u: goto label_1e4220;
        case 0x1e4224u: goto label_1e4224;
        case 0x1e4228u: goto label_1e4228;
        case 0x1e422cu: goto label_1e422c;
        case 0x1e4230u: goto label_1e4230;
        case 0x1e4234u: goto label_1e4234;
        case 0x1e4238u: goto label_1e4238;
        case 0x1e423cu: goto label_1e423c;
        case 0x1e4240u: goto label_1e4240;
        case 0x1e4244u: goto label_1e4244;
        case 0x1e4248u: goto label_1e4248;
        case 0x1e424cu: goto label_1e424c;
        case 0x1e4250u: goto label_1e4250;
        case 0x1e4254u: goto label_1e4254;
        case 0x1e4258u: goto label_1e4258;
        case 0x1e425cu: goto label_1e425c;
        case 0x1e4260u: goto label_1e4260;
        case 0x1e4264u: goto label_1e4264;
        case 0x1e4268u: goto label_1e4268;
        case 0x1e426cu: goto label_1e426c;
        case 0x1e4270u: goto label_1e4270;
        case 0x1e4274u: goto label_1e4274;
        case 0x1e4278u: goto label_1e4278;
        case 0x1e427cu: goto label_1e427c;
        case 0x1e4280u: goto label_1e4280;
        case 0x1e4284u: goto label_1e4284;
        case 0x1e4288u: goto label_1e4288;
        case 0x1e428cu: goto label_1e428c;
        case 0x1e4290u: goto label_1e4290;
        case 0x1e4294u: goto label_1e4294;
        case 0x1e4298u: goto label_1e4298;
        case 0x1e429cu: goto label_1e429c;
        case 0x1e42a0u: goto label_1e42a0;
        case 0x1e42a4u: goto label_1e42a4;
        case 0x1e42a8u: goto label_1e42a8;
        case 0x1e42acu: goto label_1e42ac;
        case 0x1e42b0u: goto label_1e42b0;
        case 0x1e42b4u: goto label_1e42b4;
        case 0x1e42b8u: goto label_1e42b8;
        case 0x1e42bcu: goto label_1e42bc;
        case 0x1e42c0u: goto label_1e42c0;
        case 0x1e42c4u: goto label_1e42c4;
        case 0x1e42c8u: goto label_1e42c8;
        case 0x1e42ccu: goto label_1e42cc;
        case 0x1e42d0u: goto label_1e42d0;
        case 0x1e42d4u: goto label_1e42d4;
        case 0x1e42d8u: goto label_1e42d8;
        case 0x1e42dcu: goto label_1e42dc;
        case 0x1e42e0u: goto label_1e42e0;
        case 0x1e42e4u: goto label_1e42e4;
        case 0x1e42e8u: goto label_1e42e8;
        case 0x1e42ecu: goto label_1e42ec;
        case 0x1e42f0u: goto label_1e42f0;
        case 0x1e42f4u: goto label_1e42f4;
        case 0x1e42f8u: goto label_1e42f8;
        case 0x1e42fcu: goto label_1e42fc;
        case 0x1e4300u: goto label_1e4300;
        case 0x1e4304u: goto label_1e4304;
        case 0x1e4308u: goto label_1e4308;
        case 0x1e430cu: goto label_1e430c;
        case 0x1e4310u: goto label_1e4310;
        case 0x1e4314u: goto label_1e4314;
        case 0x1e4318u: goto label_1e4318;
        case 0x1e431cu: goto label_1e431c;
        case 0x1e4320u: goto label_1e4320;
        case 0x1e4324u: goto label_1e4324;
        case 0x1e4328u: goto label_1e4328;
        case 0x1e432cu: goto label_1e432c;
        case 0x1e4330u: goto label_1e4330;
        case 0x1e4334u: goto label_1e4334;
        case 0x1e4338u: goto label_1e4338;
        case 0x1e433cu: goto label_1e433c;
        case 0x1e4340u: goto label_1e4340;
        case 0x1e4344u: goto label_1e4344;
        case 0x1e4348u: goto label_1e4348;
        case 0x1e434cu: goto label_1e434c;
        case 0x1e4350u: goto label_1e4350;
        case 0x1e4354u: goto label_1e4354;
        case 0x1e4358u: goto label_1e4358;
        case 0x1e435cu: goto label_1e435c;
        case 0x1e4360u: goto label_1e4360;
        case 0x1e4364u: goto label_1e4364;
        case 0x1e4368u: goto label_1e4368;
        case 0x1e436cu: goto label_1e436c;
        case 0x1e4370u: goto label_1e4370;
        case 0x1e4374u: goto label_1e4374;
        case 0x1e4378u: goto label_1e4378;
        case 0x1e437cu: goto label_1e437c;
        case 0x1e4380u: goto label_1e4380;
        case 0x1e4384u: goto label_1e4384;
        case 0x1e4388u: goto label_1e4388;
        case 0x1e438cu: goto label_1e438c;
        case 0x1e4390u: goto label_1e4390;
        case 0x1e4394u: goto label_1e4394;
        case 0x1e4398u: goto label_1e4398;
        case 0x1e439cu: goto label_1e439c;
        case 0x1e43a0u: goto label_1e43a0;
        case 0x1e43a4u: goto label_1e43a4;
        case 0x1e43a8u: goto label_1e43a8;
        case 0x1e43acu: goto label_1e43ac;
        case 0x1e43b0u: goto label_1e43b0;
        case 0x1e43b4u: goto label_1e43b4;
        case 0x1e43b8u: goto label_1e43b8;
        case 0x1e43bcu: goto label_1e43bc;
        case 0x1e43c0u: goto label_1e43c0;
        case 0x1e43c4u: goto label_1e43c4;
        case 0x1e43c8u: goto label_1e43c8;
        case 0x1e43ccu: goto label_1e43cc;
        case 0x1e43d0u: goto label_1e43d0;
        case 0x1e43d4u: goto label_1e43d4;
        case 0x1e43d8u: goto label_1e43d8;
        case 0x1e43dcu: goto label_1e43dc;
        case 0x1e43e0u: goto label_1e43e0;
        case 0x1e43e4u: goto label_1e43e4;
        case 0x1e43e8u: goto label_1e43e8;
        case 0x1e43ecu: goto label_1e43ec;
        case 0x1e43f0u: goto label_1e43f0;
        case 0x1e43f4u: goto label_1e43f4;
        case 0x1e43f8u: goto label_1e43f8;
        case 0x1e43fcu: goto label_1e43fc;
        case 0x1e4400u: goto label_1e4400;
        case 0x1e4404u: goto label_1e4404;
        case 0x1e4408u: goto label_1e4408;
        case 0x1e440cu: goto label_1e440c;
        case 0x1e4410u: goto label_1e4410;
        case 0x1e4414u: goto label_1e4414;
        case 0x1e4418u: goto label_1e4418;
        case 0x1e441cu: goto label_1e441c;
        case 0x1e4420u: goto label_1e4420;
        case 0x1e4424u: goto label_1e4424;
        case 0x1e4428u: goto label_1e4428;
        case 0x1e442cu: goto label_1e442c;
        case 0x1e4430u: goto label_1e4430;
        case 0x1e4434u: goto label_1e4434;
        case 0x1e4438u: goto label_1e4438;
        case 0x1e443cu: goto label_1e443c;
        case 0x1e4440u: goto label_1e4440;
        case 0x1e4444u: goto label_1e4444;
        case 0x1e4448u: goto label_1e4448;
        case 0x1e444cu: goto label_1e444c;
        case 0x1e4450u: goto label_1e4450;
        case 0x1e4454u: goto label_1e4454;
        case 0x1e4458u: goto label_1e4458;
        case 0x1e445cu: goto label_1e445c;
        case 0x1e4460u: goto label_1e4460;
        case 0x1e4464u: goto label_1e4464;
        case 0x1e4468u: goto label_1e4468;
        case 0x1e446cu: goto label_1e446c;
        case 0x1e4470u: goto label_1e4470;
        case 0x1e4474u: goto label_1e4474;
        case 0x1e4478u: goto label_1e4478;
        case 0x1e447cu: goto label_1e447c;
        case 0x1e4480u: goto label_1e4480;
        case 0x1e4484u: goto label_1e4484;
        case 0x1e4488u: goto label_1e4488;
        case 0x1e448cu: goto label_1e448c;
        case 0x1e4490u: goto label_1e4490;
        case 0x1e4494u: goto label_1e4494;
        case 0x1e4498u: goto label_1e4498;
        case 0x1e449cu: goto label_1e449c;
        case 0x1e44a0u: goto label_1e44a0;
        case 0x1e44a4u: goto label_1e44a4;
        case 0x1e44a8u: goto label_1e44a8;
        case 0x1e44acu: goto label_1e44ac;
        case 0x1e44b0u: goto label_1e44b0;
        case 0x1e44b4u: goto label_1e44b4;
        case 0x1e44b8u: goto label_1e44b8;
        case 0x1e44bcu: goto label_1e44bc;
        case 0x1e44c0u: goto label_1e44c0;
        case 0x1e44c4u: goto label_1e44c4;
        case 0x1e44c8u: goto label_1e44c8;
        case 0x1e44ccu: goto label_1e44cc;
        case 0x1e44d0u: goto label_1e44d0;
        case 0x1e44d4u: goto label_1e44d4;
        case 0x1e44d8u: goto label_1e44d8;
        case 0x1e44dcu: goto label_1e44dc;
        case 0x1e44e0u: goto label_1e44e0;
        case 0x1e44e4u: goto label_1e44e4;
        case 0x1e44e8u: goto label_1e44e8;
        case 0x1e44ecu: goto label_1e44ec;
        case 0x1e44f0u: goto label_1e44f0;
        case 0x1e44f4u: goto label_1e44f4;
        case 0x1e44f8u: goto label_1e44f8;
        case 0x1e44fcu: goto label_1e44fc;
        case 0x1e4500u: goto label_1e4500;
        case 0x1e4504u: goto label_1e4504;
        case 0x1e4508u: goto label_1e4508;
        case 0x1e450cu: goto label_1e450c;
        case 0x1e4510u: goto label_1e4510;
        case 0x1e4514u: goto label_1e4514;
        case 0x1e4518u: goto label_1e4518;
        case 0x1e451cu: goto label_1e451c;
        default: return;
    }

label_1e3d50:
    // 0x1e3d50: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x1e3d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_1e3d54:
    // 0x1e3d54: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1e3d54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1e3d58:
    // 0x1e3d58: 0xa0a20078  sb          $v0, 0x78($a1)
    ctx->pc = 0x1e3d58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 2));
label_1e3d5c:
    // 0x1e3d5c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1e3d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1e3d60:
    // 0x1e3d60: 0xa0a30079  sb          $v1, 0x79($a1)
    ctx->pc = 0x1e3d60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 3));
label_1e3d64:
    // 0x1e3d64: 0xa0a6007a  sb          $a2, 0x7A($a1)
    ctx->pc = 0x1e3d64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 122), (uint8_t)GPR_U32(ctx, 6));
label_1e3d68:
    // 0x1e3d68: 0xa0a0007b  sb          $zero, 0x7B($a1)
    ctx->pc = 0x1e3d68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 123), (uint8_t)GPR_U32(ctx, 0));
label_1e3d6c:
    // 0x1e3d6c: 0xaca7007c  sw          $a3, 0x7C($a1)
    ctx->pc = 0x1e3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 7));
label_1e3d70:
    // 0x1e3d70: 0xa0a20098  sb          $v0, 0x98($a1)
    ctx->pc = 0x1e3d70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 152), (uint8_t)GPR_U32(ctx, 2));
label_1e3d74:
    // 0x1e3d74: 0xa0a30099  sb          $v1, 0x99($a1)
    ctx->pc = 0x1e3d74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 153), (uint8_t)GPR_U32(ctx, 3));
label_1e3d78:
    // 0x1e3d78: 0xa0a6009a  sb          $a2, 0x9A($a1)
    ctx->pc = 0x1e3d78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 154), (uint8_t)GPR_U32(ctx, 6));
label_1e3d7c:
    // 0x1e3d7c: 0xa0a0009b  sb          $zero, 0x9B($a1)
    ctx->pc = 0x1e3d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 155), (uint8_t)GPR_U32(ctx, 0));
label_1e3d80:
    // 0x1e3d80: 0xaca7009c  sw          $a3, 0x9C($a1)
    ctx->pc = 0x1e3d80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 7));
label_1e3d84:
    // 0x1e3d84: 0xa0a20088  sb          $v0, 0x88($a1)
    ctx->pc = 0x1e3d84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 2));
label_1e3d88:
    // 0x1e3d88: 0xa0a30089  sb          $v1, 0x89($a1)
    ctx->pc = 0x1e3d88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 3));
label_1e3d8c:
    // 0x1e3d8c: 0xa0a6008a  sb          $a2, 0x8A($a1)
    ctx->pc = 0x1e3d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 6));
label_1e3d90:
    // 0x1e3d90: 0x8f888d68  lw          $t0, -0x7298($gp)
    ctx->pc = 0x1e3d90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e3d94:
    // 0x1e3d94: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1e3d98:
    if (ctx->pc == 0x1E3D98u) {
        ctx->pc = 0x1E3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D94u;
        // 0x1e3d98: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3D9Cu;
        goto label_1e3d9c;
    }
    ctx->pc = 0x1E3D94u;
    {
        const bool branch_taken_0x1e3d94 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3D94u;
        // 0x1e3d98: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d94) {
            ctx->pc = 0x1E3DA4u;
            goto label_1e3da4;
        }
    }
    ctx->pc = 0x1E3D9Cu;
label_1e3d9c:
    // 0x1e3d9c: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x1e3d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1e3da0:
    // 0x1e3da0: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1e3da0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1e3da4:
    // 0x1e3da4: 0xa0a7008b  sb          $a3, 0x8B($a1)
    ctx->pc = 0x1e3da4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 139), (uint8_t)GPR_U32(ctx, 7));
label_1e3da8:
    // 0x1e3da8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1e3da8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1e3dac:
    // 0x1e3dac: 0xaca7008c  sw          $a3, 0x8C($a1)
    ctx->pc = 0x1e3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 7));
label_1e3db0:
    // 0x1e3db0: 0xa0a200a8  sb          $v0, 0xA8($a1)
    ctx->pc = 0x1e3db0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 2));
label_1e3db4:
    // 0x1e3db4: 0xa0a300a9  sb          $v1, 0xA9($a1)
    ctx->pc = 0x1e3db4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 3));
label_1e3db8:
    // 0x1e3db8: 0xa0a600aa  sb          $a2, 0xAA($a1)
    ctx->pc = 0x1e3db8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 6));
label_1e3dbc:
    // 0x1e3dbc: 0x8f888d68  lw          $t0, -0x7298($gp)
    ctx->pc = 0x1e3dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e3dc0:
    // 0x1e3dc0: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1e3dc4:
    if (ctx->pc == 0x1E3DC4u) {
        ctx->pc = 0x1E3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DC0u;
        // 0x1e3dc4: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3DC8u;
        goto label_1e3dc8;
    }
    ctx->pc = 0x1E3DC0u;
    {
        const bool branch_taken_0x1e3dc0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DC0u;
        // 0x1e3dc4: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dc0) {
            ctx->pc = 0x1E3DD0u;
            goto label_1e3dd0;
        }
    }
    ctx->pc = 0x1E3DC8u;
label_1e3dc8:
    // 0x1e3dc8: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x1e3dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1e3dcc:
    // 0x1e3dcc: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1e3dccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1e3dd0:
    // 0x1e3dd0: 0xa0a700ab  sb          $a3, 0xAB($a1)
    ctx->pc = 0x1e3dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 171), (uint8_t)GPR_U32(ctx, 7));
label_1e3dd4:
    // 0x1e3dd4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1e3dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1e3dd8:
    // 0x1e3dd8: 0xaca700ac  sw          $a3, 0xAC($a1)
    ctx->pc = 0x1e3dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 7));
label_1e3ddc:
    // 0x1e3ddc: 0xa0a20128  sb          $v0, 0x128($a1)
    ctx->pc = 0x1e3ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 296), (uint8_t)GPR_U32(ctx, 2));
label_1e3de0:
    // 0x1e3de0: 0xa0a30129  sb          $v1, 0x129($a1)
    ctx->pc = 0x1e3de0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 297), (uint8_t)GPR_U32(ctx, 3));
label_1e3de4:
    // 0x1e3de4: 0xa0a6012a  sb          $a2, 0x12A($a1)
    ctx->pc = 0x1e3de4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 298), (uint8_t)GPR_U32(ctx, 6));
label_1e3de8:
    // 0x1e3de8: 0x8f888d68  lw          $t0, -0x7298($gp)
    ctx->pc = 0x1e3de8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e3dec:
    // 0x1e3dec: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1e3df0:
    if (ctx->pc == 0x1E3DF0u) {
        ctx->pc = 0x1E3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DECu;
        // 0x1e3df0: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3DF4u;
        goto label_1e3df4;
    }
    ctx->pc = 0x1E3DECu;
    {
        const bool branch_taken_0x1e3dec = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3DECu;
        // 0x1e3df0: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dec) {
            ctx->pc = 0x1E3DFCu;
            goto label_1e3dfc;
        }
    }
    ctx->pc = 0x1E3DF4u;
label_1e3df4:
    // 0x1e3df4: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x1e3df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1e3df8:
    // 0x1e3df8: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1e3df8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1e3dfc:
    // 0x1e3dfc: 0xa0a7012b  sb          $a3, 0x12B($a1)
    ctx->pc = 0x1e3dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 299), (uint8_t)GPR_U32(ctx, 7));
label_1e3e00:
    // 0x1e3e00: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1e3e00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1e3e04:
    // 0x1e3e04: 0xaca7012c  sw          $a3, 0x12C($a1)
    ctx->pc = 0x1e3e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 7));
label_1e3e08:
    // 0x1e3e08: 0xa0a20138  sb          $v0, 0x138($a1)
    ctx->pc = 0x1e3e08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 312), (uint8_t)GPR_U32(ctx, 2));
label_1e3e0c:
    // 0x1e3e0c: 0xa0a30139  sb          $v1, 0x139($a1)
    ctx->pc = 0x1e3e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 313), (uint8_t)GPR_U32(ctx, 3));
label_1e3e10:
    // 0x1e3e10: 0xa0a6013a  sb          $a2, 0x13A($a1)
    ctx->pc = 0x1e3e10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 314), (uint8_t)GPR_U32(ctx, 6));
label_1e3e14:
    // 0x1e3e14: 0x8f888d68  lw          $t0, -0x7298($gp)
    ctx->pc = 0x1e3e14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e3e18:
    // 0x1e3e18: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1e3e1c:
    if (ctx->pc == 0x1E3E1Cu) {
        ctx->pc = 0x1E3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E18u;
        // 0x1e3e1c: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E20u;
        goto label_1e3e20;
    }
    ctx->pc = 0x1E3E18u;
    {
        const bool branch_taken_0x1e3e18 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E18u;
        // 0x1e3e1c: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e18) {
            ctx->pc = 0x1E3E28u;
            goto label_1e3e28;
        }
    }
    ctx->pc = 0x1E3E20u;
label_1e3e20:
    // 0x1e3e20: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x1e3e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1e3e24:
    // 0x1e3e24: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1e3e24u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1e3e28:
    // 0x1e3e28: 0xa0a7013b  sb          $a3, 0x13B($a1)
    ctx->pc = 0x1e3e28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 315), (uint8_t)GPR_U32(ctx, 7));
label_1e3e2c:
    // 0x1e3e2c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1e3e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1e3e30:
    // 0x1e3e30: 0xaca7013c  sw          $a3, 0x13C($a1)
    ctx->pc = 0x1e3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 7));
label_1e3e34:
    // 0x1e3e34: 0xa0a20148  sb          $v0, 0x148($a1)
    ctx->pc = 0x1e3e34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 328), (uint8_t)GPR_U32(ctx, 2));
label_1e3e38:
    // 0x1e3e38: 0xa0a30149  sb          $v1, 0x149($a1)
    ctx->pc = 0x1e3e38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 329), (uint8_t)GPR_U32(ctx, 3));
label_1e3e3c:
    // 0x1e3e3c: 0xa0a6014a  sb          $a2, 0x14A($a1)
    ctx->pc = 0x1e3e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 330), (uint8_t)GPR_U32(ctx, 6));
label_1e3e40:
    // 0x1e3e40: 0x8f888d68  lw          $t0, -0x7298($gp)
    ctx->pc = 0x1e3e40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e3e44:
    // 0x1e3e44: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1e3e48:
    if (ctx->pc == 0x1E3E48u) {
        ctx->pc = 0x1E3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E44u;
        // 0x1e3e48: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E4Cu;
        goto label_1e3e4c;
    }
    ctx->pc = 0x1E3E44u;
    {
        const bool branch_taken_0x1e3e44 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E44u;
        // 0x1e3e48: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e44) {
            ctx->pc = 0x1E3E54u;
            goto label_1e3e54;
        }
    }
    ctx->pc = 0x1E3E4Cu;
label_1e3e4c:
    // 0x1e3e4c: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x1e3e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1e3e50:
    // 0x1e3e50: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1e3e50u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1e3e54:
    // 0x1e3e54: 0xa0a7014b  sb          $a3, 0x14B($a1)
    ctx->pc = 0x1e3e54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 331), (uint8_t)GPR_U32(ctx, 7));
label_1e3e58:
    // 0x1e3e58: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1e3e58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1e3e5c:
    // 0x1e3e5c: 0xaca7014c  sw          $a3, 0x14C($a1)
    ctx->pc = 0x1e3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 332), GPR_U32(ctx, 7));
label_1e3e60:
    // 0x1e3e60: 0xa0a20158  sb          $v0, 0x158($a1)
    ctx->pc = 0x1e3e60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 344), (uint8_t)GPR_U32(ctx, 2));
label_1e3e64:
    // 0x1e3e64: 0xa0a30159  sb          $v1, 0x159($a1)
    ctx->pc = 0x1e3e64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 345), (uint8_t)GPR_U32(ctx, 3));
label_1e3e68:
    // 0x1e3e68: 0xa0a6015a  sb          $a2, 0x15A($a1)
    ctx->pc = 0x1e3e68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 346), (uint8_t)GPR_U32(ctx, 6));
label_1e3e6c:
    // 0x1e3e6c: 0x8f888d68  lw          $t0, -0x7298($gp)
    ctx->pc = 0x1e3e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e3e70:
    // 0x1e3e70: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1e3e74:
    if (ctx->pc == 0x1E3E74u) {
        ctx->pc = 0x1E3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E70u;
        // 0x1e3e74: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E78u;
        goto label_1e3e78;
    }
    ctx->pc = 0x1E3E70u;
    {
        const bool branch_taken_0x1e3e70 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E70u;
        // 0x1e3e74: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e70) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3E78u;
label_1e3e78:
    // 0x1e3e78: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x1e3e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1e3e7c:
    // 0x1e3e7c: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1e3e7cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1e3e80:
    // 0x1e3e80: 0xa0a7015b  sb          $a3, 0x15B($a1)
    ctx->pc = 0x1e3e80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 347), (uint8_t)GPR_U32(ctx, 7));
label_1e3e84:
    // 0x1e3e84: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1e3e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1e3e88:
    // 0x1e3e88: 0xaca7015c  sw          $a3, 0x15C($a1)
    ctx->pc = 0x1e3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 348), GPR_U32(ctx, 7));
label_1e3e8c:
    // 0x1e3e8c: 0xa0a201d8  sb          $v0, 0x1D8($a1)
    ctx->pc = 0x1e3e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 472), (uint8_t)GPR_U32(ctx, 2));
label_1e3e90:
    // 0x1e3e90: 0xa0a301d9  sb          $v1, 0x1D9($a1)
    ctx->pc = 0x1e3e90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 473), (uint8_t)GPR_U32(ctx, 3));
label_1e3e94:
    // 0x1e3e94: 0xa0a601da  sb          $a2, 0x1DA($a1)
    ctx->pc = 0x1e3e94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 474), (uint8_t)GPR_U32(ctx, 6));
label_1e3e98:
    // 0x1e3e98: 0x8f888d68  lw          $t0, -0x7298($gp)
    ctx->pc = 0x1e3e98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e3e9c:
    // 0x1e3e9c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1e3ea0:
    if (ctx->pc == 0x1E3EA0u) {
        ctx->pc = 0x1E3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E9Cu;
        // 0x1e3ea0: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3EA4u;
        goto label_1e3ea4;
    }
    ctx->pc = 0x1E3E9Cu;
    {
        const bool branch_taken_0x1e3e9c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E9Cu;
        // 0x1e3ea0: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e9c) {
            ctx->pc = 0x1E3EACu;
            goto label_1e3eac;
        }
    }
    ctx->pc = 0x1E3EA4u;
label_1e3ea4:
    // 0x1e3ea4: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x1e3ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1e3ea8:
    // 0x1e3ea8: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1e3ea8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1e3eac:
    // 0x1e3eac: 0xa0a701db  sb          $a3, 0x1DB($a1)
    ctx->pc = 0x1e3eacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 475), (uint8_t)GPR_U32(ctx, 7));
label_1e3eb0:
    // 0x1e3eb0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1e3eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1e3eb4:
    // 0x1e3eb4: 0xaca701dc  sw          $a3, 0x1DC($a1)
    ctx->pc = 0x1e3eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 476), GPR_U32(ctx, 7));
label_1e3eb8:
    // 0x1e3eb8: 0xa0a201f8  sb          $v0, 0x1F8($a1)
    ctx->pc = 0x1e3eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 504), (uint8_t)GPR_U32(ctx, 2));
label_1e3ebc:
    // 0x1e3ebc: 0xa0a301f9  sb          $v1, 0x1F9($a1)
    ctx->pc = 0x1e3ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 505), (uint8_t)GPR_U32(ctx, 3));
label_1e3ec0:
    // 0x1e3ec0: 0xa0a601fa  sb          $a2, 0x1FA($a1)
    ctx->pc = 0x1e3ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 506), (uint8_t)GPR_U32(ctx, 6));
label_1e3ec4:
    // 0x1e3ec4: 0x8f888d68  lw          $t0, -0x7298($gp)
    ctx->pc = 0x1e3ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e3ec8:
    // 0x1e3ec8: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1e3ecc:
    if (ctx->pc == 0x1E3ECCu) {
        ctx->pc = 0x1E3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EC8u;
        // 0x1e3ecc: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3ED0u;
        goto label_1e3ed0;
    }
    ctx->pc = 0x1E3EC8u;
    {
        const bool branch_taken_0x1e3ec8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1E3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3EC8u;
        // 0x1e3ecc: 0x83883  sra         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ec8) {
            ctx->pc = 0x1E3ED8u;
            goto label_1e3ed8;
        }
    }
    ctx->pc = 0x1E3ED0u;
label_1e3ed0:
    // 0x1e3ed0: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x1e3ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_1e3ed4:
    // 0x1e3ed4: 0x73883  sra         $a3, $a3, 2
    ctx->pc = 0x1e3ed4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 2));
label_1e3ed8:
    // 0x1e3ed8: 0xa0a701fb  sb          $a3, 0x1FB($a1)
    ctx->pc = 0x1e3ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 507), (uint8_t)GPR_U32(ctx, 7));
label_1e3edc:
    // 0x1e3edc: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1e3edcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_1e3ee0:
    // 0x1e3ee0: 0xaca801fc  sw          $t0, 0x1FC($a1)
    ctx->pc = 0x1e3ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 508), GPR_U32(ctx, 8));
label_1e3ee4:
    // 0x1e3ee4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1e3ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e3ee8:
    // 0x1e3ee8: 0xa0a201e8  sb          $v0, 0x1E8($a1)
    ctx->pc = 0x1e3ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 488), (uint8_t)GPR_U32(ctx, 2));
label_1e3eec:
    // 0x1e3eec: 0xa0a301e9  sb          $v1, 0x1E9($a1)
    ctx->pc = 0x1e3eecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 489), (uint8_t)GPR_U32(ctx, 3));
label_1e3ef0:
    // 0x1e3ef0: 0xa0a601ea  sb          $a2, 0x1EA($a1)
    ctx->pc = 0x1e3ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 490), (uint8_t)GPR_U32(ctx, 6));
label_1e3ef4:
    // 0x1e3ef4: 0xa0a001eb  sb          $zero, 0x1EB($a1)
    ctx->pc = 0x1e3ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 491), (uint8_t)GPR_U32(ctx, 0));
label_1e3ef8:
    // 0x1e3ef8: 0xaca801ec  sw          $t0, 0x1EC($a1)
    ctx->pc = 0x1e3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 492), GPR_U32(ctx, 8));
label_1e3efc:
    // 0x1e3efc: 0xa0a20208  sb          $v0, 0x208($a1)
    ctx->pc = 0x1e3efcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 520), (uint8_t)GPR_U32(ctx, 2));
label_1e3f00:
    // 0x1e3f00: 0xa0a30209  sb          $v1, 0x209($a1)
    ctx->pc = 0x1e3f00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 521), (uint8_t)GPR_U32(ctx, 3));
label_1e3f04:
    // 0x1e3f04: 0xa0a6020a  sb          $a2, 0x20A($a1)
    ctx->pc = 0x1e3f04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 522), (uint8_t)GPR_U32(ctx, 6));
label_1e3f08:
    // 0x1e3f08: 0xa0a0020b  sb          $zero, 0x20B($a1)
    ctx->pc = 0x1e3f08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 523), (uint8_t)GPR_U32(ctx, 0));
label_1e3f0c:
    // 0x1e3f0c: 0xaca8020c  sw          $t0, 0x20C($a1)
    ctx->pc = 0x1e3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 8));
label_1e3f10:
    // 0x1e3f10: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x1e3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e3f14:
    // 0x1e3f14: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
label_1e3f18:
    if (ctx->pc == 0x1E3F18u) {
        ctx->pc = 0x1E3F1Cu;
        goto label_1e3f1c;
    }
    ctx->pc = 0x1E3F14u;
    {
        const bool branch_taken_0x1e3f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e3f14) {
            ctx->pc = 0x1E3F34u;
            goto label_1e3f34;
        }
    }
    ctx->pc = 0x1E3F1Cu;
label_1e3f1c:
    // 0x1e3f1c: 0x8f828d6c  lw          $v0, -0x7294($gp)
    ctx->pc = 0x1e3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
label_1e3f20:
    // 0x1e3f20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e3f24:
    if (ctx->pc == 0x1E3F24u) {
        ctx->pc = 0x1E3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F20u;
        // 0x1e3f24: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F28u;
        goto label_1e3f28;
    }
    ctx->pc = 0x1E3F20u;
    {
        const bool branch_taken_0x1e3f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F20u;
        // 0x1e3f24: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f20) {
            ctx->pc = 0x1E3F34u;
            goto label_1e3f34;
        }
    }
    ctx->pc = 0x1E3F28u;
label_1e3f28:
    // 0x1e3f28: 0xdc222a18  ld          $v0, 0x2A18($at)
    ctx->pc = 0x1e3f28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 10776)));
label_1e3f2c:
    // 0x1e3f2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e3f30:
    if (ctx->pc == 0x1E3F30u) {
        ctx->pc = 0x1E3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F2Cu;
        // 0x1e3f30: 0xfca20280  sd          $v0, 0x280($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 640), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F34u;
        goto label_1e3f34;
    }
    ctx->pc = 0x1E3F2Cu;
    {
        const bool branch_taken_0x1e3f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F2Cu;
        // 0x1e3f30: 0xfca20280  sd          $v0, 0x280($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 640), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f2c) {
            ctx->pc = 0x1E3F50u;
            goto label_1e3f50;
        }
    }
    ctx->pc = 0x1E3F34u;
label_1e3f34:
    // 0x1e3f34: 0x8f838d6c  lw          $v1, -0x7294($gp)
    ctx->pc = 0x1e3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
label_1e3f38:
    // 0x1e3f38: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e3f3c:
    // 0x1e3f3c: 0x24422960  addiu       $v0, $v0, 0x2960
    ctx->pc = 0x1e3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10592));
label_1e3f40:
    // 0x1e3f40: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e3f44:
    // 0x1e3f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3f48:
    // 0x1e3f48: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1e3f48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1e3f4c:
    // 0x1e3f4c: 0xfca20280  sd          $v0, 0x280($a1)
    ctx->pc = 0x1e3f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 640), GPR_U64(ctx, 2));
label_1e3f50:
    // 0x1e3f50: 0x83838d68  lb          $v1, -0x7298($gp)
    ctx->pc = 0x1e3f50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e3f54:
    // 0x1e3f54: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e3f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e3f58:
    // 0x1e3f58: 0xa0a30293  sb          $v1, 0x293($a1)
    ctx->pc = 0x1e3f58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 659), (uint8_t)GPR_U32(ctx, 3));
label_1e3f5c:
    // 0x1e3f5c: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e3f60:
    // 0x1e3f60: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_1e3f64:
    if (ctx->pc == 0x1E3F64u) {
        ctx->pc = 0x1E3F68u;
        goto label_1e3f68;
    }
    ctx->pc = 0x1E3F60u;
    {
        const bool branch_taken_0x1e3f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e3f60) {
            ctx->pc = 0x1E3FF0u;
            goto label_1e3ff0;
        }
    }
    ctx->pc = 0x1E3F68u;
label_1e3f68:
    // 0x1e3f68: 0x8f868d6c  lw          $a2, -0x7294($gp)
    ctx->pc = 0x1e3f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
label_1e3f6c:
    // 0x1e3f6c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1e3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e3f70:
    // 0x1e3f70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e3f74:
    // 0x1e3f74: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e3f78:
    // 0x1e3f78: 0x80660000  lb          $a2, 0x0($v1)
    ctx->pc = 0x1e3f78u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e3f7c:
    // 0x1e3f7c: 0x10c2001c  beq         $a2, $v0, . + 4 + (0x1C << 2)
label_1e3f80:
    if (ctx->pc == 0x1E3F80u) {
        ctx->pc = 0x1E3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F7Cu;
        // 0x1e3f80: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3F84u;
        goto label_1e3f84;
    }
    ctx->pc = 0x1E3F7Cu;
    {
        const bool branch_taken_0x1e3f7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F7Cu;
        // 0x1e3f80: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f7c) {
            ctx->pc = 0x1E3FF0u;
            goto label_1e3ff0;
        }
    }
    ctx->pc = 0x1E3F84u;
label_1e3f84:
    // 0x1e3f84: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e3f88:
    // 0x1e3f88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1e3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e3f8c:
    // 0x1e3f8c: 0xa4a20478  sh          $v0, 0x478($a1)
    ctx->pc = 0x1e3f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1144), (uint16_t)GPR_U32(ctx, 2));
label_1e3f90:
    // 0x1e3f90: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1e3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1e3f94:
    // 0x1e3f94: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1e3f94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e3f98:
    // 0x1e3f98: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1e3f9c:
    // 0x1e3f9c: 0x24031308  addiu       $v1, $zero, 0x1308
    ctx->pc = 0x1e3f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4872));
label_1e3fa0:
    // 0x1e3fa0: 0xa4a2047a  sh          $v0, 0x47A($a1)
    ctx->pc = 0x1e3fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1146), (uint16_t)GPR_U32(ctx, 2));
label_1e3fa4:
    // 0x1e3fa4: 0x73638  dsll        $a2, $a3, 24
    ctx->pc = 0x1e3fa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << 24);
label_1e3fa8:
    // 0x1e3fa8: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x1e3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_1e3fac:
    // 0x1e3fac: 0xa4a30488  sh          $v1, 0x488($a1)
    ctx->pc = 0x1e3facu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1160), (uint16_t)GPR_U32(ctx, 3));
label_1e3fb0:
    // 0x1e3fb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e3fb4:
    // 0x1e3fb4: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e3fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e3fb8:
    // 0x1e3fb8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1e3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1e3fbc:
    // 0x1e3fbc: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x1e3fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
label_1e3fc0:
    // 0x1e3fc0: 0xa4a2048a  sh          $v0, 0x48A($a1)
    ctx->pc = 0x1e3fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1162), (uint16_t)GPR_U32(ctx, 2));
label_1e3fc4:
    // 0x1e3fc4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1e3fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1e3fc8:
    // 0x1e3fc8: 0x24e2002f  addiu       $v0, $a3, 0x2F
    ctx->pc = 0x1e3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 47));
label_1e3fcc:
    // 0x1e3fcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e3fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1e3fd0:
    // 0x1e3fd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e3fd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e3fd4:
    // 0x1e3fd4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1e3fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1e3fd8:
    // 0x1e3fd8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1e3fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e3fdc:
    // 0x1e3fdc: 0xfca20440  sd          $v0, 0x440($a1)
    ctx->pc = 0x1e3fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 1088), GPR_U64(ctx, 2));
label_1e3fe0:
    // 0x1e3fe0: 0x83828d68  lb          $v0, -0x7298($gp)
    ctx->pc = 0x1e3fe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e3fe4:
    // 0x1e3fe4: 0xa0a20473  sb          $v0, 0x473($a1)
    ctx->pc = 0x1e3fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1139), (uint8_t)GPR_U32(ctx, 2));
label_1e3fe8:
    // 0x1e3fe8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1e3fec:
    if (ctx->pc == 0x1E3FECu) {
        ctx->pc = 0x1E3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FE8u;
        // 0x1e3fec: 0xa0a00333  sb          $zero, 0x333($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 819), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3FF0u;
        goto label_1e3ff0;
    }
    ctx->pc = 0x1E3FE8u;
    {
        const bool branch_taken_0x1e3fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3FE8u;
        // 0x1e3fec: 0xa0a00333  sb          $zero, 0x333($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 819), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3fe8) {
            ctx->pc = 0x1E4060u;
            goto label_1e4060;
        }
    }
    ctx->pc = 0x1E3FF0u;
label_1e3ff0:
    // 0x1e3ff0: 0x8f878d6c  lw          $a3, -0x7294($gp)
    ctx->pc = 0x1e3ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
label_1e3ff4:
    // 0x1e3ff4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1e3ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e3ff8:
    // 0x1e3ff8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e3ffc:
    // 0x1e3ffc: 0x24061308  addiu       $a2, $zero, 0x1308
    ctx->pc = 0x1e3ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4872));
label_1e4000:
    // 0x1e4000: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1e4000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_1e4004:
    // 0x1e4004: 0xa4a30338  sh          $v1, 0x338($a1)
    ctx->pc = 0x1e4004u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 824), (uint16_t)GPR_U32(ctx, 3));
label_1e4008:
    // 0x1e4008: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1e4008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1e400c:
    // 0x1e400c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1e400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1e4010:
    // 0x1e4010: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x1e4010u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e4014:
    // 0x1e4014: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1e4014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1e4018:
    // 0x1e4018: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x1e4018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1e401c:
    // 0x1e401c: 0x25030030  addiu       $v1, $t0, 0x30
    ctx->pc = 0x1e401cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_1e4020:
    // 0x1e4020: 0xa4a7033a  sh          $a3, 0x33A($a1)
    ctx->pc = 0x1e4020u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 826), (uint16_t)GPR_U32(ctx, 7));
label_1e4024:
    // 0x1e4024: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e4024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e4028:
    // 0x1e4028: 0xa4a60348  sh          $a2, 0x348($a1)
    ctx->pc = 0x1e4028u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 840), (uint16_t)GPR_U32(ctx, 6));
label_1e402c:
    // 0x1e402c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1e4030:
    // 0x1e4030: 0xa4a3034a  sh          $v1, 0x34A($a1)
    ctx->pc = 0x1e4030u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 842), (uint16_t)GPR_U32(ctx, 3));
label_1e4034:
    // 0x1e4034: 0x81e38  dsll        $v1, $t0, 24
    ctx->pc = 0x1e4034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 24);
label_1e4038:
    // 0x1e4038: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e4038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e403c:
    // 0x1e403c: 0x2502002f  addiu       $v0, $t0, 0x2F
    ctx->pc = 0x1e403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 47));
label_1e4040:
    // 0x1e4040: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e4040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1e4044:
    // 0x1e4044: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e4044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e4048:
    // 0x1e4048: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1e4048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1e404c:
    // 0x1e404c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1e404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1e4050:
    // 0x1e4050: 0xfca20300  sd          $v0, 0x300($a1)
    ctx->pc = 0x1e4050u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 768), GPR_U64(ctx, 2));
label_1e4054:
    // 0x1e4054: 0x83828d68  lb          $v0, -0x7298($gp)
    ctx->pc = 0x1e4054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e4058:
    // 0x1e4058: 0xa0a20333  sb          $v0, 0x333($a1)
    ctx->pc = 0x1e4058u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 819), (uint8_t)GPR_U32(ctx, 2));
label_1e405c:
    // 0x1e405c: 0xa0a00473  sb          $zero, 0x473($a1)
    ctx->pc = 0x1e405cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1139), (uint8_t)GPR_U32(ctx, 0));
label_1e4060:
    // 0x1e4060: 0x8f878d6c  lw          $a3, -0x7294($gp)
    ctx->pc = 0x1e4060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
label_1e4064:
    // 0x1e4064: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e4064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e4068:
    // 0x1e4068: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e4068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1e406c:
    // 0x1e406c: 0x24080d08  addiu       $t0, $zero, 0xD08
    ctx->pc = 0x1e406cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3336));
label_1e4070:
    // 0x1e4070: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x1e4070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_1e4074:
    // 0x1e4074: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e4074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e4078:
    // 0x1e4078: 0x74940  sll         $t1, $a3, 5
    ctx->pc = 0x1e4078u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1e407c:
    // 0x1e407c: 0xa4a603d8  sh          $a2, 0x3D8($a1)
    ctx->pc = 0x1e407cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 984), (uint16_t)GPR_U32(ctx, 6));
label_1e4080:
    // 0x1e4080: 0x73a40  sll         $a3, $a3, 9
    ctx->pc = 0x1e4080u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 9));
label_1e4084:
    // 0x1e4084: 0x25260020  addiu       $a2, $t1, 0x20
    ctx->pc = 0x1e4084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_1e4088:
    // 0x1e4088: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1e4088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1e408c:
    // 0x1e408c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1e408cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1e4090:
    // 0x1e4090: 0xa4a703da  sh          $a3, 0x3DA($a1)
    ctx->pc = 0x1e4090u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 986), (uint16_t)GPR_U32(ctx, 7));
label_1e4094:
    // 0x1e4094: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x1e4094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1e4098:
    // 0x1e4098: 0xa4a803e8  sh          $t0, 0x3E8($a1)
    ctx->pc = 0x1e4098u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1000), (uint16_t)GPR_U32(ctx, 8));
label_1e409c:
    // 0x1e409c: 0x93638  dsll        $a2, $t1, 24
    ctx->pc = 0x1e409cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << 24);
label_1e40a0:
    // 0x1e40a0: 0xa4a703ea  sh          $a3, 0x3EA($a1)
    ctx->pc = 0x1e40a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1002), (uint16_t)GPR_U32(ctx, 7));
label_1e40a4:
    // 0x1e40a4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1e40a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1e40a8:
    // 0x1e40a8: 0x2523001f  addiu       $v1, $t1, 0x1F
    ctx->pc = 0x1e40a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
label_1e40ac:
    // 0x1e40ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e40acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1e40b0:
    // 0x1e40b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e40b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1e40b4:
    // 0x1e40b4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1e40b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_1e40b8:
    // 0x1e40b8: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1e40b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1e40bc:
    // 0x1e40bc: 0xfca303a0  sd          $v1, 0x3A0($a1)
    ctx->pc = 0x1e40bcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 928), GPR_U64(ctx, 3));
label_1e40c0:
    // 0x1e40c0: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e40c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e40c4:
    // 0x1e40c4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e40c8:
    if (ctx->pc == 0x1E40C8u) {
        ctx->pc = 0x1E40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40C4u;
        // 0x1e40c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40CCu;
        goto label_1e40cc;
    }
    ctx->pc = 0x1E40C4u;
    {
        const bool branch_taken_0x1e40c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40C4u;
        // 0x1e40c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40c4) {
            ctx->pc = 0x1E40D4u;
            goto label_1e40d4;
        }
    }
    ctx->pc = 0x1E40CCu;
label_1e40cc:
    // 0x1e40cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e40d0:
    if (ctx->pc == 0x1E40D0u) {
        ctx->pc = 0x1E40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40CCu;
        // 0x1e40d0: 0xa0a203d3  sb          $v0, 0x3D3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 979), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40D4u;
        goto label_1e40d4;
    }
    ctx->pc = 0x1E40CCu;
    {
        const bool branch_taken_0x1e40cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40CCu;
        // 0x1e40d0: 0xa0a203d3  sb          $v0, 0x3D3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 979), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40cc) {
            ctx->pc = 0x1E40E0u;
            goto label_1e40e0;
        }
    }
    ctx->pc = 0x1E40D4u;
label_1e40d4:
    // 0x1e40d4: 0x8f828d68  lw          $v0, -0x7298($gp)
    ctx->pc = 0x1e40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e40d8:
    // 0x1e40d8: 0x0  nop
    ctx->pc = 0x1e40d8u;
    // NOP
label_1e40dc:
    // 0x1e40dc: 0xa0a203d3  sb          $v0, 0x3D3($a1)
    ctx->pc = 0x1e40dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 979), (uint8_t)GPR_U32(ctx, 2));
label_1e40e0:
    // 0x1e40e0: 0x10000043  b           . + 4 + (0x43 << 2)
label_1e40e4:
    if (ctx->pc == 0x1E40E4u) {
        ctx->pc = 0x1E40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40E0u;
        // 0x1e40e4: 0x83828d64  lb          $v0, -0x729C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937956)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40E8u;
        goto label_1e40e8;
    }
    ctx->pc = 0x1E40E0u;
    {
        const bool branch_taken_0x1e40e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40E0u;
        // 0x1e40e4: 0x83828d64  lb          $v0, -0x729C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40e0) {
            ctx->pc = 0x1E41F0u;
            goto label_1e41f0;
        }
    }
    ctx->pc = 0x1E40E8u;
label_1e40e8:
    // 0x1e40e8: 0xa0a00078  sb          $zero, 0x78($a1)
    ctx->pc = 0x1e40e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 0));
label_1e40ec:
    // 0x1e40ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e40f0:
    // 0x1e40f0: 0xa0a00079  sb          $zero, 0x79($a1)
    ctx->pc = 0x1e40f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 0));
label_1e40f4:
    // 0x1e40f4: 0xa0a0007a  sb          $zero, 0x7A($a1)
    ctx->pc = 0x1e40f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 122), (uint8_t)GPR_U32(ctx, 0));
label_1e40f8:
    // 0x1e40f8: 0xa0a0007b  sb          $zero, 0x7B($a1)
    ctx->pc = 0x1e40f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 123), (uint8_t)GPR_U32(ctx, 0));
label_1e40fc:
    // 0x1e40fc: 0xaca2007c  sw          $v0, 0x7C($a1)
    ctx->pc = 0x1e40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 2));
label_1e4100:
    // 0x1e4100: 0xa0a00088  sb          $zero, 0x88($a1)
    ctx->pc = 0x1e4100u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 0));
label_1e4104:
    // 0x1e4104: 0xa0a00089  sb          $zero, 0x89($a1)
    ctx->pc = 0x1e4104u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 0));
label_1e4108:
    // 0x1e4108: 0xa0a0008a  sb          $zero, 0x8A($a1)
    ctx->pc = 0x1e4108u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 0));
label_1e410c:
    // 0x1e410c: 0xa0a0008b  sb          $zero, 0x8B($a1)
    ctx->pc = 0x1e410cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 139), (uint8_t)GPR_U32(ctx, 0));
label_1e4110:
    // 0x1e4110: 0xaca2008c  sw          $v0, 0x8C($a1)
    ctx->pc = 0x1e4110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 2));
label_1e4114:
    // 0x1e4114: 0xa0a00098  sb          $zero, 0x98($a1)
    ctx->pc = 0x1e4114u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 152), (uint8_t)GPR_U32(ctx, 0));
label_1e4118:
    // 0x1e4118: 0xa0a00099  sb          $zero, 0x99($a1)
    ctx->pc = 0x1e4118u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 153), (uint8_t)GPR_U32(ctx, 0));
label_1e411c:
    // 0x1e411c: 0xa0a0009a  sb          $zero, 0x9A($a1)
    ctx->pc = 0x1e411cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 154), (uint8_t)GPR_U32(ctx, 0));
label_1e4120:
    // 0x1e4120: 0xa0a0009b  sb          $zero, 0x9B($a1)
    ctx->pc = 0x1e4120u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 155), (uint8_t)GPR_U32(ctx, 0));
label_1e4124:
    // 0x1e4124: 0xaca2009c  sw          $v0, 0x9C($a1)
    ctx->pc = 0x1e4124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 2));
label_1e4128:
    // 0x1e4128: 0xa0a000a8  sb          $zero, 0xA8($a1)
    ctx->pc = 0x1e4128u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 0));
label_1e412c:
    // 0x1e412c: 0xa0a000a9  sb          $zero, 0xA9($a1)
    ctx->pc = 0x1e412cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 0));
label_1e4130:
    // 0x1e4130: 0xa0a000aa  sb          $zero, 0xAA($a1)
    ctx->pc = 0x1e4130u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 0));
label_1e4134:
    // 0x1e4134: 0xa0a000ab  sb          $zero, 0xAB($a1)
    ctx->pc = 0x1e4134u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 171), (uint8_t)GPR_U32(ctx, 0));
label_1e4138:
    // 0x1e4138: 0xaca200ac  sw          $v0, 0xAC($a1)
    ctx->pc = 0x1e4138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 2));
label_1e413c:
    // 0x1e413c: 0xa0a00128  sb          $zero, 0x128($a1)
    ctx->pc = 0x1e413cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 296), (uint8_t)GPR_U32(ctx, 0));
label_1e4140:
    // 0x1e4140: 0xa0a00129  sb          $zero, 0x129($a1)
    ctx->pc = 0x1e4140u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 297), (uint8_t)GPR_U32(ctx, 0));
label_1e4144:
    // 0x1e4144: 0xa0a0012a  sb          $zero, 0x12A($a1)
    ctx->pc = 0x1e4144u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 298), (uint8_t)GPR_U32(ctx, 0));
label_1e4148:
    // 0x1e4148: 0xa0a0012b  sb          $zero, 0x12B($a1)
    ctx->pc = 0x1e4148u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 299), (uint8_t)GPR_U32(ctx, 0));
label_1e414c:
    // 0x1e414c: 0xaca2012c  sw          $v0, 0x12C($a1)
    ctx->pc = 0x1e414cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 2));
label_1e4150:
    // 0x1e4150: 0xa0a00138  sb          $zero, 0x138($a1)
    ctx->pc = 0x1e4150u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 312), (uint8_t)GPR_U32(ctx, 0));
label_1e4154:
    // 0x1e4154: 0xa0a00139  sb          $zero, 0x139($a1)
    ctx->pc = 0x1e4154u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 313), (uint8_t)GPR_U32(ctx, 0));
label_1e4158:
    // 0x1e4158: 0xa0a0013a  sb          $zero, 0x13A($a1)
    ctx->pc = 0x1e4158u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 314), (uint8_t)GPR_U32(ctx, 0));
label_1e415c:
    // 0x1e415c: 0xa0a0013b  sb          $zero, 0x13B($a1)
    ctx->pc = 0x1e415cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 315), (uint8_t)GPR_U32(ctx, 0));
label_1e4160:
    // 0x1e4160: 0xaca2013c  sw          $v0, 0x13C($a1)
    ctx->pc = 0x1e4160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 2));
label_1e4164:
    // 0x1e4164: 0xa0a00148  sb          $zero, 0x148($a1)
    ctx->pc = 0x1e4164u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 328), (uint8_t)GPR_U32(ctx, 0));
label_1e4168:
    // 0x1e4168: 0xa0a00149  sb          $zero, 0x149($a1)
    ctx->pc = 0x1e4168u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 329), (uint8_t)GPR_U32(ctx, 0));
label_1e416c:
    // 0x1e416c: 0xa0a0014a  sb          $zero, 0x14A($a1)
    ctx->pc = 0x1e416cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 330), (uint8_t)GPR_U32(ctx, 0));
label_1e4170:
    // 0x1e4170: 0xa0a0014b  sb          $zero, 0x14B($a1)
    ctx->pc = 0x1e4170u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 331), (uint8_t)GPR_U32(ctx, 0));
label_1e4174:
    // 0x1e4174: 0xaca2014c  sw          $v0, 0x14C($a1)
    ctx->pc = 0x1e4174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 332), GPR_U32(ctx, 2));
label_1e4178:
    // 0x1e4178: 0xa0a00158  sb          $zero, 0x158($a1)
    ctx->pc = 0x1e4178u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 344), (uint8_t)GPR_U32(ctx, 0));
label_1e417c:
    // 0x1e417c: 0xa0a00159  sb          $zero, 0x159($a1)
    ctx->pc = 0x1e417cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 345), (uint8_t)GPR_U32(ctx, 0));
label_1e4180:
    // 0x1e4180: 0xa0a0015a  sb          $zero, 0x15A($a1)
    ctx->pc = 0x1e4180u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 346), (uint8_t)GPR_U32(ctx, 0));
label_1e4184:
    // 0x1e4184: 0xa0a0015b  sb          $zero, 0x15B($a1)
    ctx->pc = 0x1e4184u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 347), (uint8_t)GPR_U32(ctx, 0));
label_1e4188:
    // 0x1e4188: 0xaca2015c  sw          $v0, 0x15C($a1)
    ctx->pc = 0x1e4188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 348), GPR_U32(ctx, 2));
label_1e418c:
    // 0x1e418c: 0xa0a001d8  sb          $zero, 0x1D8($a1)
    ctx->pc = 0x1e418cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 472), (uint8_t)GPR_U32(ctx, 0));
label_1e4190:
    // 0x1e4190: 0xa0a001d9  sb          $zero, 0x1D9($a1)
    ctx->pc = 0x1e4190u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 473), (uint8_t)GPR_U32(ctx, 0));
label_1e4194:
    // 0x1e4194: 0xa0a001da  sb          $zero, 0x1DA($a1)
    ctx->pc = 0x1e4194u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 474), (uint8_t)GPR_U32(ctx, 0));
label_1e4198:
    // 0x1e4198: 0xa0a001db  sb          $zero, 0x1DB($a1)
    ctx->pc = 0x1e4198u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 475), (uint8_t)GPR_U32(ctx, 0));
label_1e419c:
    // 0x1e419c: 0xaca201dc  sw          $v0, 0x1DC($a1)
    ctx->pc = 0x1e419cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 476), GPR_U32(ctx, 2));
label_1e41a0:
    // 0x1e41a0: 0xa0a001e8  sb          $zero, 0x1E8($a1)
    ctx->pc = 0x1e41a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 488), (uint8_t)GPR_U32(ctx, 0));
label_1e41a4:
    // 0x1e41a4: 0xa0a001e9  sb          $zero, 0x1E9($a1)
    ctx->pc = 0x1e41a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 489), (uint8_t)GPR_U32(ctx, 0));
label_1e41a8:
    // 0x1e41a8: 0xa0a001ea  sb          $zero, 0x1EA($a1)
    ctx->pc = 0x1e41a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 490), (uint8_t)GPR_U32(ctx, 0));
label_1e41ac:
    // 0x1e41ac: 0xa0a001eb  sb          $zero, 0x1EB($a1)
    ctx->pc = 0x1e41acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 491), (uint8_t)GPR_U32(ctx, 0));
label_1e41b0:
    // 0x1e41b0: 0xaca201ec  sw          $v0, 0x1EC($a1)
    ctx->pc = 0x1e41b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 492), GPR_U32(ctx, 2));
label_1e41b4:
    // 0x1e41b4: 0xa0a001f8  sb          $zero, 0x1F8($a1)
    ctx->pc = 0x1e41b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 504), (uint8_t)GPR_U32(ctx, 0));
label_1e41b8:
    // 0x1e41b8: 0xa0a001f9  sb          $zero, 0x1F9($a1)
    ctx->pc = 0x1e41b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 505), (uint8_t)GPR_U32(ctx, 0));
label_1e41bc:
    // 0x1e41bc: 0xa0a001fa  sb          $zero, 0x1FA($a1)
    ctx->pc = 0x1e41bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 506), (uint8_t)GPR_U32(ctx, 0));
label_1e41c0:
    // 0x1e41c0: 0xa0a001fb  sb          $zero, 0x1FB($a1)
    ctx->pc = 0x1e41c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 507), (uint8_t)GPR_U32(ctx, 0));
label_1e41c4:
    // 0x1e41c4: 0xaca201fc  sw          $v0, 0x1FC($a1)
    ctx->pc = 0x1e41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 508), GPR_U32(ctx, 2));
label_1e41c8:
    // 0x1e41c8: 0xa0a00208  sb          $zero, 0x208($a1)
    ctx->pc = 0x1e41c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 520), (uint8_t)GPR_U32(ctx, 0));
label_1e41cc:
    // 0x1e41cc: 0xa0a00209  sb          $zero, 0x209($a1)
    ctx->pc = 0x1e41ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 521), (uint8_t)GPR_U32(ctx, 0));
label_1e41d0:
    // 0x1e41d0: 0xa0a0020a  sb          $zero, 0x20A($a1)
    ctx->pc = 0x1e41d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 522), (uint8_t)GPR_U32(ctx, 0));
label_1e41d4:
    // 0x1e41d4: 0xa0a0020b  sb          $zero, 0x20B($a1)
    ctx->pc = 0x1e41d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 523), (uint8_t)GPR_U32(ctx, 0));
label_1e41d8:
    // 0x1e41d8: 0xaca2020c  sw          $v0, 0x20C($a1)
    ctx->pc = 0x1e41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 2));
label_1e41dc:
    // 0x1e41dc: 0xa0a00293  sb          $zero, 0x293($a1)
    ctx->pc = 0x1e41dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 659), (uint8_t)GPR_U32(ctx, 0));
label_1e41e0:
    // 0x1e41e0: 0xa0a00333  sb          $zero, 0x333($a1)
    ctx->pc = 0x1e41e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 819), (uint8_t)GPR_U32(ctx, 0));
label_1e41e4:
    // 0x1e41e4: 0xa0a003d3  sb          $zero, 0x3D3($a1)
    ctx->pc = 0x1e41e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 979), (uint8_t)GPR_U32(ctx, 0));
label_1e41e8:
    // 0x1e41e8: 0xa0a00473  sb          $zero, 0x473($a1)
    ctx->pc = 0x1e41e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1139), (uint8_t)GPR_U32(ctx, 0));
label_1e41ec:
    // 0x1e41ec: 0x83828d64  lb          $v0, -0x729C($gp)
    ctx->pc = 0x1e41ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937956)));
label_1e41f0:
    // 0x1e41f0: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1e41f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1e41f4:
    // 0x1e41f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e41f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e41f8:
    // 0x1e41f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e41f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e41fc:
    // 0x1e41fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e41fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4200:
    // 0x1e4200: 0xc066c72  jal         func_19B1C8
label_1e4204:
    if (ctx->pc == 0x1E4204u) {
        ctx->pc = 0x1E4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4200u;
        // 0x1e4204: 0xa0a20513  sb          $v0, 0x513($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1299), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4208u;
        goto label_1e4208;
    }
    ctx->pc = 0x1E4200u;
    SET_GPR_U32(ctx, 31, 0x1E4208u);
    ctx->pc = 0x1E4204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4200u;
    // 0x1e4204: 0xa0a20513  sb          $v0, 0x513($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 1299), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E4200u, 0x1E4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4208u;
label_1e4208:
    // 0x1e4208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e420c:
    // 0x1e420c: 0x3e00008  jr          $ra
label_1e4210:
    if (ctx->pc == 0x1E4210u) {
        ctx->pc = 0x1E4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E420Cu;
        // 0x1e4210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4214u;
        goto label_1e4214;
    }
    ctx->pc = 0x1E420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E420Cu;
        // 0x1e4210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E420Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4214u;
label_1e4214:
    // 0x1e4214: 0x0  nop
    ctx->pc = 0x1e4214u;
    // NOP
label_1e4218:
    // 0x1e4218: 0x0  nop
    ctx->pc = 0x1e4218u;
    // NOP
label_1e421c:
    // 0x1e421c: 0x0  nop
    ctx->pc = 0x1e421cu;
    // NOP
label_1e4220:
    // 0x1e4220: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e4220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1e4224:
    // 0x1e4224: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e4224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e4228:
    // 0x1e4228: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e4228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1e422c:
    // 0x1e422c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1e422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1e4230:
    // 0x1e4230: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1e4230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1e4234:
    // 0x1e4234: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1e4234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1e4238:
    // 0x1e4238: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e4238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1e423c:
    // 0x1e423c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e4240:
    // 0x1e4240: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e4240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e4244:
    // 0x1e4244: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e4244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e4248:
    // 0x1e4248: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e4248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e424c:
    // 0x1e424c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e4250:
    // 0x1e4250: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e4250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e4254:
    // 0x1e4254: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
label_1e4258:
    if (ctx->pc == 0x1E4258u) {
        ctx->pc = 0x1E425Cu;
        goto label_1e425c;
    }
    ctx->pc = 0x1E4254u;
    {
        const bool branch_taken_0x1e4254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4254) {
            ctx->pc = 0x1E43C8u;
            goto label_1e43c8;
        }
    }
    ctx->pc = 0x1E425Cu;
label_1e425c:
    // 0x1e425c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e4260:
    if (ctx->pc == 0x1E4260u) {
        ctx->pc = 0x1E4264u;
        goto label_1e4264;
    }
    ctx->pc = 0x1E425Cu;
    {
        const bool branch_taken_0x1e425c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e425c) {
            ctx->pc = 0x1E426Cu;
            goto label_1e426c;
        }
    }
    ctx->pc = 0x1E4264u;
label_1e4264:
    // 0x1e4264: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e4268:
    if (ctx->pc == 0x1E4268u) {
        ctx->pc = 0x1E4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4264u;
        // 0x1e4268: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E426Cu;
        goto label_1e426c;
    }
    ctx->pc = 0x1E4264u;
    {
        const bool branch_taken_0x1e4264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4264u;
        // 0x1e4268: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4264) {
            ctx->pc = 0x1E4270u;
            goto label_1e4270;
        }
    }
    ctx->pc = 0x1E426Cu;
label_1e426c:
    // 0x1e426c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e4270:
    // 0x1e4270: 0xaf828d84  sw          $v0, -0x727C($gp)
    ctx->pc = 0x1e4270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937988), GPR_U32(ctx, 2));
label_1e4274:
    // 0x1e4274: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1e4274u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4278:
    // 0x1e4278: 0xaf808d80  sw          $zero, -0x7280($gp)
    ctx->pc = 0x1e4278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937984), GPR_U32(ctx, 0));
label_1e427c:
    // 0x1e427c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e427cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4280:
    // 0x1e4280: 0x27828d88  addiu       $v0, $gp, -0x7278
    ctx->pc = 0x1e4280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
label_1e4284:
    // 0x1e4284: 0x240501d6  addiu       $a1, $zero, 0x1D6
    ctx->pc = 0x1e4284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
label_1e4288:
    // 0x1e4288: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1e4288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1e428c:
    // 0x1e428c: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1e428cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4290:
    // 0x1e4290: 0xc05e234  jal         func_1788D0
label_1e4294:
    if (ctx->pc == 0x1E4294u) {
        ctx->pc = 0x1E4294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4290u;
        // 0x1e4294: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4298u;
        goto label_1e4298;
    }
    ctx->pc = 0x1E4290u;
    SET_GPR_U32(ctx, 31, 0x1E4298u);
    ctx->pc = 0x1E4294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4290u;
    // 0x1e4294: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E4290u, 0x1E4298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4298u;
label_1e4298:
    // 0x1e4298: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e429c:
    // 0x1e429c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e429cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e42a0:
    // 0x1e42a0: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1e42a4:
    if (ctx->pc == 0x1E42A4u) {
        ctx->pc = 0x1E42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42A0u;
        // 0x1e42a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42A8u;
        goto label_1e42a8;
    }
    ctx->pc = 0x1E42A0u;
    {
        const bool branch_taken_0x1e42a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42A0u;
        // 0x1e42a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42a0) {
            ctx->pc = 0x1E4358u;
            goto label_1e4358;
        }
    }
    ctx->pc = 0x1E42A8u;
label_1e42a8:
    // 0x1e42a8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1e42ac:
    // 0x1e42ac: 0x2442b7b0  addiu       $v0, $v0, -0x4850
    ctx->pc = 0x1e42acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948784));
label_1e42b0:
    // 0x1e42b0: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1e42b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e42b4:
    // 0x1e42b4: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x1e42b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e42b8:
    // 0x1e42b8: 0x2d2a021  addu        $s4, $s6, $s2
    ctx->pc = 0x1e42b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_1e42bc:
    // 0x1e42bc: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1e42bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1e42c0:
    // 0x1e42c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e42c4:
    // 0x1e42c4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e42c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e42c8:
    // 0x1e42c8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e42c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e42cc:
    // 0x1e42cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e42d0:
    // 0x1e42d0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e42d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e42d4:
    // 0x1e42d4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e42d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e42d8:
    // 0x1e42d8: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1e42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1e42dc:
    // 0x1e42dc: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x1e42dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1e42e0:
    // 0x1e42e0: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x1e42e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e42e4:
    // 0x1e42e4: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x1e42e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_1e42e8:
    // 0x1e42e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e42e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e42ec:
    // 0x1e42ec: 0xdc252930  ld          $a1, 0x2930($at)
    ctx->pc = 0x1e42ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10544)));
label_1e42f0:
    // 0x1e42f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e42f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e42f4:
    // 0x1e42f4: 0x26750002  addiu       $s5, $s3, 0x2
    ctx->pc = 0x1e42f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_1e42f8:
    // 0x1e42f8: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x1e42f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1e42fc:
    // 0x1e42fc: 0xc05de30  jal         func_1778C0
label_1e4300:
    if (ctx->pc == 0x1E4300u) {
        ctx->pc = 0x1E4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42FCu;
        // 0x1e4300: 0x2447fffc  addiu       $a3, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4304u;
        goto label_1e4304;
    }
    ctx->pc = 0x1E42FCu;
    SET_GPR_U32(ctx, 31, 0x1E4304u);
    ctx->pc = 0x1E4300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42FCu;
    // 0x1e4300: 0x2447fffc  addiu       $a3, $v0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E42FCu, 0x1E4304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4304u;
label_1e4304:
    // 0x1e4304: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1e4304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e4308:
    // 0x1e4308: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e430c:
    // 0x1e430c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1e430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1e4310:
    // 0x1e4310: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e4310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e4314:
    // 0x1e4314: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e4314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e4318:
    // 0x1e4318: 0x26840e70  addiu       $a0, $s4, 0xE70
    ctx->pc = 0x1e4318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3696));
label_1e431c:
    // 0x1e431c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4320:
    // 0x1e4320: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e4320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e4324:
    // 0x1e4324: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e4324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e4328:
    // 0x1e4328: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x1e4328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e432c:
    // 0x1e432c: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x1e432cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1e4330:
    // 0x1e4330: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e4330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4334:
    // 0x1e4334: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1e4334u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1e4338:
    // 0x1e4338: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e4338u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e433c:
    // 0x1e433c: 0xdc252928  ld          $a1, 0x2928($at)
    ctx->pc = 0x1e433cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10536)));
label_1e4340:
    // 0x1e4340: 0x2466fff8  addiu       $a2, $v1, -0x8
    ctx->pc = 0x1e4340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1e4344:
    // 0x1e4344: 0xc05de30  jal         func_1778C0
label_1e4348:
    if (ctx->pc == 0x1E4348u) {
        ctx->pc = 0x1E4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4344u;
        // 0x1e4348: 0x2447fff8  addiu       $a3, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E434Cu;
        goto label_1e434c;
    }
    ctx->pc = 0x1E4344u;
    SET_GPR_U32(ctx, 31, 0x1E434Cu);
    ctx->pc = 0x1E4348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4344u;
    // 0x1e4348: 0x2447fff8  addiu       $a3, $v0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E4344u, 0x1E434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E434Cu;
label_1e434c:
    // 0x1e434c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e434cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1e4350:
    // 0x1e4350: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x1e4350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_1e4354:
    // 0x1e4354: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e4354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e4358:
    // 0x1e4358: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e4358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e435c:
    // 0x1e435c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e4360:
    // 0x1e4360: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1e4364:
    if (ctx->pc == 0x1E4364u) {
        ctx->pc = 0x1E4364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4360u;
        // 0x1e4364: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4368u;
        goto label_1e4368;
    }
    ctx->pc = 0x1E4360u;
    {
        const bool branch_taken_0x1e4360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4360u;
        // 0x1e4364: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4360) {
            ctx->pc = 0x1E436Cu;
            goto label_1e436c;
        }
    }
    ctx->pc = 0x1E4368u;
label_1e4368:
    // 0x1e4368: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1e4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e436c:
    // 0x1e436c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e436cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4370:
    // 0x1e4370: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_1e4374:
    if (ctx->pc == 0x1E4374u) {
        ctx->pc = 0x1E4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4370u;
        // 0x1e4374: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4378u;
        goto label_1e4378;
    }
    ctx->pc = 0x1E4370u;
    {
        const bool branch_taken_0x1e4370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4370u;
        // 0x1e4374: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4370) {
            ctx->pc = 0x1E42A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e42a8;
        }
    }
    ctx->pc = 0x1E4378u;
label_1e4378:
    // 0x1e4378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e437c:
    // 0x1e437c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1e437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1e4380:
    // 0x1e4380: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e4380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e4384:
    // 0x1e4384: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e4384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e4388:
    // 0x1e4388: 0x26c41cd0  addiu       $a0, $s6, 0x1CD0
    ctx->pc = 0x1e4388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 7376));
label_1e438c:
    // 0x1e438c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e4390:
    // 0x1e4390: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1e4390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e4394:
    // 0x1e4394: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e4394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e4398:
    // 0x1e4398: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1e4398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e439c:
    // 0x1e439c: 0xdc252938  ld          $a1, 0x2938($at)
    ctx->pc = 0x1e439cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10552)));
label_1e43a0:
    // 0x1e43a0: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x1e43a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e43a4:
    // 0x1e43a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e43a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e43a8:
    // 0x1e43a8: 0xc05de30  jal         func_1778C0
label_1e43ac:
    if (ctx->pc == 0x1E43ACu) {
        ctx->pc = 0x1E43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43A8u;
        // 0x1e43ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E43B0u;
        goto label_1e43b0;
    }
    ctx->pc = 0x1E43A8u;
    SET_GPR_U32(ctx, 31, 0x1E43B0u);
    ctx->pc = 0x1E43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43A8u;
    // 0x1e43ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E43A8u, 0x1E43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E43B0u;
label_1e43b0:
    // 0x1e43b0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1e43b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1e43b4:
    // 0x1e43b4: 0x2bc30002  slti        $v1, $fp, 0x2
    ctx->pc = 0x1e43b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e43b8:
    // 0x1e43b8: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
label_1e43bc:
    if (ctx->pc == 0x1E43BCu) {
        ctx->pc = 0x1E43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43B8u;
        // 0x1e43bc: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E43C0u;
        goto label_1e43c0;
    }
    ctx->pc = 0x1E43B8u;
    {
        const bool branch_taken_0x1e43b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43B8u;
        // 0x1e43bc: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43b8) {
            ctx->pc = 0x1E4280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4280;
        }
    }
    ctx->pc = 0x1E43C0u;
label_1e43c0:
    // 0x1e43c0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_1e43c4:
    if (ctx->pc == 0x1E43C4u) {
        ctx->pc = 0x1E43C8u;
        goto label_1e43c8;
    }
    ctx->pc = 0x1E43C0u;
    {
        const bool branch_taken_0x1e43c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e43c0) {
            ctx->pc = 0x1E4530u;
            { ctx->pc = 0x1e4530; return; }
        }
    }
    ctx->pc = 0x1E43C8u;
label_1e43c8:
    // 0x1e43c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e43cc:
    if (ctx->pc == 0x1E43CCu) {
        ctx->pc = 0x1E43D0u;
        goto label_1e43d0;
    }
    ctx->pc = 0x1E43C8u;
    {
        const bool branch_taken_0x1e43c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e43c8) {
            ctx->pc = 0x1E43D8u;
            goto label_1e43d8;
        }
    }
    ctx->pc = 0x1E43D0u;
label_1e43d0:
    // 0x1e43d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e43d4:
    if (ctx->pc == 0x1E43D4u) {
        ctx->pc = 0x1E43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43D0u;
        // 0x1e43d4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E43D8u;
        goto label_1e43d8;
    }
    ctx->pc = 0x1E43D0u;
    {
        const bool branch_taken_0x1e43d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43D0u;
        // 0x1e43d4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43d0) {
            ctx->pc = 0x1E43DCu;
            goto label_1e43dc;
        }
    }
    ctx->pc = 0x1E43D8u;
label_1e43d8:
    // 0x1e43d8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e43dc:
    // 0x1e43dc: 0xaf828d84  sw          $v0, -0x727C($gp)
    ctx->pc = 0x1e43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937988), GPR_U32(ctx, 2));
label_1e43e0:
    // 0x1e43e0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e43e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e43e4:
    // 0x1e43e4: 0xaf808d80  sw          $zero, -0x7280($gp)
    ctx->pc = 0x1e43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937984), GPR_U32(ctx, 0));
label_1e43e8:
    // 0x1e43e8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1e43e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e43ec:
    // 0x1e43ec: 0x27828d88  addiu       $v0, $gp, -0x7278
    ctx->pc = 0x1e43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
label_1e43f0:
    // 0x1e43f0: 0x2405019a  addiu       $a1, $zero, 0x19A
    ctx->pc = 0x1e43f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
label_1e43f4:
    // 0x1e43f4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1e43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1e43f8:
    // 0x1e43f8: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1e43f8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e43fc:
    // 0x1e43fc: 0xc05e234  jal         func_1788D0
label_1e4400:
    if (ctx->pc == 0x1E4400u) {
        ctx->pc = 0x1E4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E43FCu;
        // 0x1e4400: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4404u;
        goto label_1e4404;
    }
    ctx->pc = 0x1E43FCu;
    SET_GPR_U32(ctx, 31, 0x1E4404u);
    ctx->pc = 0x1E4400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E43FCu;
    // 0x1e4400: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E43FCu, 0x1E4404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4404u;
label_1e4404:
    // 0x1e4404: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e4404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4408:
    // 0x1e4408: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e440c:
    // 0x1e440c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1e4410:
    if (ctx->pc == 0x1E4410u) {
        ctx->pc = 0x1E4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E440Cu;
        // 0x1e4410: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4414u;
        goto label_1e4414;
    }
    ctx->pc = 0x1E440Cu;
    {
        const bool branch_taken_0x1e440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E440Cu;
        // 0x1e4410: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e440c) {
            ctx->pc = 0x1E44C8u;
            goto label_1e44c8;
        }
    }
    ctx->pc = 0x1E4414u;
label_1e4414:
    // 0x1e4414: 0x0  nop
    ctx->pc = 0x1e4414u;
    // NOP
label_1e4418:
    // 0x1e4418: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e4418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1e441c:
    // 0x1e441c: 0x2442b7b0  addiu       $v0, $v0, -0x4850
    ctx->pc = 0x1e441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948784));
label_1e4420:
    // 0x1e4420: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1e4420u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e4424:
    // 0x1e4424: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x1e4424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e4428:
    // 0x1e4428: 0x2d19821  addu        $s3, $s6, $s1
    ctx->pc = 0x1e4428u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_1e442c:
    // 0x1e442c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1e442cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1e4430:
    // 0x1e4430: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4434:
    // 0x1e4434: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e4434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e4438:
    // 0x1e4438: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e4438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e443c:
    // 0x1e443c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4440:
    // 0x1e4440: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e4440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e4444:
    // 0x1e4444: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e4444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e4448:
    // 0x1e4448: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1e4448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e444c:
    // 0x1e444c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x1e444cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1e4450:
    // 0x1e4450: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x1e4450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e4454:
    // 0x1e4454: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x1e4454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1e4458:
    // 0x1e4458: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e4458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e445c:
    // 0x1e445c: 0xdc252930  ld          $a1, 0x2930($at)
    ctx->pc = 0x1e445cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10544)));
label_1e4460:
    // 0x1e4460: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e4460u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4464:
    // 0x1e4464: 0x26550002  addiu       $s5, $s2, 0x2
    ctx->pc = 0x1e4464u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_1e4468:
    // 0x1e4468: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x1e4468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1e446c:
    // 0x1e446c: 0xc05de30  jal         func_1778C0
label_1e4470:
    if (ctx->pc == 0x1E4470u) {
        ctx->pc = 0x1E4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E446Cu;
        // 0x1e4470: 0x2447fffc  addiu       $a3, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4474u;
        goto label_1e4474;
    }
    ctx->pc = 0x1E446Cu;
    SET_GPR_U32(ctx, 31, 0x1E4474u);
    ctx->pc = 0x1E4470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E446Cu;
    // 0x1e4470: 0x2447fffc  addiu       $a3, $v0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E446Cu, 0x1E4474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4474u;
label_1e4474:
    // 0x1e4474: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1e4474u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e4478:
    // 0x1e4478: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e447c:
    // 0x1e447c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1e447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1e4480:
    // 0x1e4480: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e4480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e4484:
    // 0x1e4484: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e4484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e4488:
    // 0x1e4488: 0x26640c90  addiu       $a0, $s3, 0xC90
    ctx->pc = 0x1e4488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3216));
label_1e448c:
    // 0x1e448c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4490:
    // 0x1e4490: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e4490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e4494:
    // 0x1e4494: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e4494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e4498:
    // 0x1e4498: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x1e4498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e449c:
    // 0x1e449c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x1e449cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1e44a0:
    // 0x1e44a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e44a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e44a4:
    // 0x1e44a4: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1e44a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1e44a8:
    // 0x1e44a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e44a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e44ac:
    // 0x1e44ac: 0xdc252928  ld          $a1, 0x2928($at)
    ctx->pc = 0x1e44acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10536)));
label_1e44b0:
    // 0x1e44b0: 0x2466fff8  addiu       $a2, $v1, -0x8
    ctx->pc = 0x1e44b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1e44b4:
    // 0x1e44b4: 0xc05de30  jal         func_1778C0
label_1e44b8:
    if (ctx->pc == 0x1E44B8u) {
        ctx->pc = 0x1E44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44B4u;
        // 0x1e44b8: 0x2447fff8  addiu       $a3, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44BCu;
        goto label_1e44bc;
    }
    ctx->pc = 0x1E44B4u;
    SET_GPR_U32(ctx, 31, 0x1E44BCu);
    ctx->pc = 0x1E44B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E44B4u;
    // 0x1e44b8: 0x2447fff8  addiu       $a3, $v0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E44B4u, 0x1E44BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E44BCu;
label_1e44bc:
    // 0x1e44bc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e44bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1e44c0:
    // 0x1e44c0: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x1e44c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_1e44c4:
    // 0x1e44c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e44c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e44c8:
    // 0x1e44c8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e44cc:
    // 0x1e44cc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e44d0:
    // 0x1e44d0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1e44d4:
    if (ctx->pc == 0x1E44D4u) {
        ctx->pc = 0x1E44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44D0u;
        // 0x1e44d4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44D8u;
        goto label_1e44d8;
    }
    ctx->pc = 0x1E44D0u;
    {
        const bool branch_taken_0x1e44d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44D0u;
        // 0x1e44d4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44d0) {
            ctx->pc = 0x1E44DCu;
            goto label_1e44dc;
        }
    }
    ctx->pc = 0x1E44D8u;
label_1e44d8:
    // 0x1e44d8: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1e44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e44dc:
    // 0x1e44dc: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e44dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e44e0:
    // 0x1e44e0: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_1e44e4:
    if (ctx->pc == 0x1E44E4u) {
        ctx->pc = 0x1E44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44E0u;
        // 0x1e44e4: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E44E8u;
        goto label_1e44e8;
    }
    ctx->pc = 0x1E44E0u;
    {
        const bool branch_taken_0x1e44e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44E0u;
        // 0x1e44e4: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44e0) {
            ctx->pc = 0x1E4414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4414;
        }
    }
    ctx->pc = 0x1E44E8u;
label_1e44e8:
    // 0x1e44e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e44ec:
    // 0x1e44ec: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1e44ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1e44f0:
    // 0x1e44f0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e44f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e44f4:
    // 0x1e44f4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e44f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e44f8:
    // 0x1e44f8: 0x26c41910  addiu       $a0, $s6, 0x1910
    ctx->pc = 0x1e44f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 6416));
label_1e44fc:
    // 0x1e44fc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e44fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e4500:
    // 0x1e4500: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1e4500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e4504:
    // 0x1e4504: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e4504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e4508:
    // 0x1e4508: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1e4508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e450c:
    // 0x1e450c: 0xdc252938  ld          $a1, 0x2938($at)
    ctx->pc = 0x1e450cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10552)));
label_1e4510:
    // 0x1e4510: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x1e4510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e4514:
    // 0x1e4514: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e4514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4518:
    // 0x1e4518: 0xc05de30  jal         func_1778C0
label_1e451c:
    if (ctx->pc == 0x1E451Cu) {
        ctx->pc = 0x1E451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4518u;
        // 0x1e451c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4520u;
        { ctx->pc = 0x1e4520; return; }
    }
    ctx->pc = 0x1E4518u;
    SET_GPR_U32(ctx, 31, 0x1E4520u);
    ctx->pc = 0x1E451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4518u;
    // 0x1e451c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E4518u, 0x1E4520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4520u;
    ctx->pc = 0x1e4520u;
    return;
}

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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part51(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1b4458u: goto label_1b4458;
        case 0x1b445cu: goto label_1b445c;
        case 0x1b4460u: goto label_1b4460;
        case 0x1b4464u: goto label_1b4464;
        case 0x1b4468u: goto label_1b4468;
        case 0x1b446cu: goto label_1b446c;
        case 0x1b4470u: goto label_1b4470;
        case 0x1b4474u: goto label_1b4474;
        case 0x1b4478u: goto label_1b4478;
        case 0x1b447cu: goto label_1b447c;
        case 0x1b4480u: goto label_1b4480;
        case 0x1b4484u: goto label_1b4484;
        case 0x1b4488u: goto label_1b4488;
        case 0x1b448cu: goto label_1b448c;
        case 0x1b4490u: goto label_1b4490;
        case 0x1b4494u: goto label_1b4494;
        case 0x1b4498u: goto label_1b4498;
        case 0x1b449cu: goto label_1b449c;
        case 0x1b44a0u: goto label_1b44a0;
        case 0x1b44a4u: goto label_1b44a4;
        case 0x1b44a8u: goto label_1b44a8;
        case 0x1b44acu: goto label_1b44ac;
        case 0x1b44b0u: goto label_1b44b0;
        case 0x1b44b4u: goto label_1b44b4;
        case 0x1b44b8u: goto label_1b44b8;
        case 0x1b44bcu: goto label_1b44bc;
        case 0x1b44c0u: goto label_1b44c0;
        case 0x1b44c4u: goto label_1b44c4;
        case 0x1b44c8u: goto label_1b44c8;
        case 0x1b44ccu: goto label_1b44cc;
        case 0x1b44d0u: goto label_1b44d0;
        case 0x1b44d4u: goto label_1b44d4;
        case 0x1b44d8u: goto label_1b44d8;
        case 0x1b44dcu: goto label_1b44dc;
        case 0x1b44e0u: goto label_1b44e0;
        case 0x1b44e4u: goto label_1b44e4;
        case 0x1b44e8u: goto label_1b44e8;
        case 0x1b44ecu: goto label_1b44ec;
        case 0x1b44f0u: goto label_1b44f0;
        case 0x1b44f4u: goto label_1b44f4;
        case 0x1b44f8u: goto label_1b44f8;
        case 0x1b44fcu: goto label_1b44fc;
        case 0x1b4500u: goto label_1b4500;
        case 0x1b4504u: goto label_1b4504;
        case 0x1b4508u: goto label_1b4508;
        case 0x1b450cu: goto label_1b450c;
        case 0x1b4510u: goto label_1b4510;
        case 0x1b4514u: goto label_1b4514;
        case 0x1b4518u: goto label_1b4518;
        case 0x1b451cu: goto label_1b451c;
        case 0x1b4520u: goto label_1b4520;
        case 0x1b4524u: goto label_1b4524;
        case 0x1b4528u: goto label_1b4528;
        case 0x1b452cu: goto label_1b452c;
        case 0x1b4530u: goto label_1b4530;
        case 0x1b4534u: goto label_1b4534;
        case 0x1b4538u: goto label_1b4538;
        case 0x1b453cu: goto label_1b453c;
        case 0x1b4540u: goto label_1b4540;
        case 0x1b4544u: goto label_1b4544;
        case 0x1b4548u: goto label_1b4548;
        case 0x1b454cu: goto label_1b454c;
        case 0x1b4550u: goto label_1b4550;
        case 0x1b4554u: goto label_1b4554;
        case 0x1b4558u: goto label_1b4558;
        case 0x1b455cu: goto label_1b455c;
        case 0x1b4560u: goto label_1b4560;
        case 0x1b4564u: goto label_1b4564;
        case 0x1b4568u: goto label_1b4568;
        case 0x1b456cu: goto label_1b456c;
        case 0x1b4570u: goto label_1b4570;
        case 0x1b4574u: goto label_1b4574;
        case 0x1b4578u: goto label_1b4578;
        case 0x1b457cu: goto label_1b457c;
        case 0x1b4580u: goto label_1b4580;
        case 0x1b4584u: goto label_1b4584;
        case 0x1b4588u: goto label_1b4588;
        case 0x1b458cu: goto label_1b458c;
        case 0x1b4590u: goto label_1b4590;
        case 0x1b4594u: goto label_1b4594;
        case 0x1b4598u: goto label_1b4598;
        case 0x1b459cu: goto label_1b459c;
        case 0x1b45a0u: goto label_1b45a0;
        case 0x1b45a4u: goto label_1b45a4;
        case 0x1b45a8u: goto label_1b45a8;
        case 0x1b45acu: goto label_1b45ac;
        case 0x1b45b0u: goto label_1b45b0;
        case 0x1b45b4u: goto label_1b45b4;
        case 0x1b45b8u: goto label_1b45b8;
        case 0x1b45bcu: goto label_1b45bc;
        case 0x1b45c0u: goto label_1b45c0;
        case 0x1b45c4u: goto label_1b45c4;
        case 0x1b45c8u: goto label_1b45c8;
        case 0x1b45ccu: goto label_1b45cc;
        case 0x1b45d0u: goto label_1b45d0;
        case 0x1b45d4u: goto label_1b45d4;
        case 0x1b45d8u: goto label_1b45d8;
        case 0x1b45dcu: goto label_1b45dc;
        case 0x1b45e0u: goto label_1b45e0;
        case 0x1b45e4u: goto label_1b45e4;
        case 0x1b45e8u: goto label_1b45e8;
        case 0x1b45ecu: goto label_1b45ec;
        case 0x1b45f0u: goto label_1b45f0;
        case 0x1b45f4u: goto label_1b45f4;
        case 0x1b45f8u: goto label_1b45f8;
        case 0x1b45fcu: goto label_1b45fc;
        case 0x1b4600u: goto label_1b4600;
        case 0x1b4604u: goto label_1b4604;
        case 0x1b4608u: goto label_1b4608;
        case 0x1b460cu: goto label_1b460c;
        case 0x1b4610u: goto label_1b4610;
        case 0x1b4614u: goto label_1b4614;
        case 0x1b4618u: goto label_1b4618;
        case 0x1b461cu: goto label_1b461c;
        case 0x1b4620u: goto label_1b4620;
        case 0x1b4624u: goto label_1b4624;
        case 0x1b4628u: goto label_1b4628;
        case 0x1b462cu: goto label_1b462c;
        case 0x1b4630u: goto label_1b4630;
        case 0x1b4634u: goto label_1b4634;
        case 0x1b4638u: goto label_1b4638;
        case 0x1b463cu: goto label_1b463c;
        case 0x1b4640u: goto label_1b4640;
        case 0x1b4644u: goto label_1b4644;
        case 0x1b4648u: goto label_1b4648;
        case 0x1b464cu: goto label_1b464c;
        case 0x1b4650u: goto label_1b4650;
        case 0x1b4654u: goto label_1b4654;
        case 0x1b4658u: goto label_1b4658;
        case 0x1b465cu: goto label_1b465c;
        case 0x1b4660u: goto label_1b4660;
        case 0x1b4664u: goto label_1b4664;
        case 0x1b4668u: goto label_1b4668;
        case 0x1b466cu: goto label_1b466c;
        case 0x1b4670u: goto label_1b4670;
        case 0x1b4674u: goto label_1b4674;
        case 0x1b4678u: goto label_1b4678;
        case 0x1b467cu: goto label_1b467c;
        case 0x1b4680u: goto label_1b4680;
        case 0x1b4684u: goto label_1b4684;
        case 0x1b4688u: goto label_1b4688;
        case 0x1b468cu: goto label_1b468c;
        case 0x1b4690u: goto label_1b4690;
        case 0x1b4694u: goto label_1b4694;
        case 0x1b4698u: goto label_1b4698;
        case 0x1b469cu: goto label_1b469c;
        case 0x1b46a0u: goto label_1b46a0;
        case 0x1b46a4u: goto label_1b46a4;
        case 0x1b46a8u: goto label_1b46a8;
        case 0x1b46acu: goto label_1b46ac;
        case 0x1b46b0u: goto label_1b46b0;
        case 0x1b46b4u: goto label_1b46b4;
        case 0x1b46b8u: goto label_1b46b8;
        case 0x1b46bcu: goto label_1b46bc;
        case 0x1b46c0u: goto label_1b46c0;
        case 0x1b46c4u: goto label_1b46c4;
        case 0x1b46c8u: goto label_1b46c8;
        case 0x1b46ccu: goto label_1b46cc;
        case 0x1b46d0u: goto label_1b46d0;
        case 0x1b46d4u: goto label_1b46d4;
        default: return;
    }

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
            goto label_1b44d0;
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
            goto label_1b44c0;
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
label_1b4458:
    // 0x1b4458: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x1b4458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_1b445c:
    // 0x1b445c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b445cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4460:
    // 0x1b4460: 0x640000d  bltz        $s2, . + 4 + (0xD << 2)
label_1b4464:
    if (ctx->pc == 0x1B4464u) {
        ctx->pc = 0x1B4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4460u;
        // 0x1b4464: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4468u;
        goto label_1b4468;
    }
    ctx->pc = 0x1B4460u;
    {
        const bool branch_taken_0x1b4460 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1B4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4460u;
        // 0x1b4464: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4460) {
            ctx->pc = 0x1B4498u;
            goto label_1b4498;
        }
    }
    ctx->pc = 0x1B4468u;
label_1b4468:
    // 0x1b4468: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b4468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b446c:
    // 0x1b446c: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x1b446cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1b4470:
    // 0x1b4470: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1b4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1b4474:
    // 0x1b4474: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x1b4474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b4478:
    // 0x1b4478: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1b4478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b447c:
    // 0x1b447c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1b447cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1b4480:
    // 0x1b4480: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1b4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4484:
    // 0x1b4484: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b4484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1b4488:
    // 0x1b4488: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b4488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b448c:
    // 0x1b448c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b448cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b4490:
    // 0x1b4490: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_1b4494:
    if (ctx->pc == 0x1B4494u) {
        ctx->pc = 0x1B4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4490u;
        // 0x1b4494: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4498u;
        goto label_1b4498;
    }
    ctx->pc = 0x1B4490u;
    {
        const bool branch_taken_0x1b4490 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4490u;
        // 0x1b4494: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4490) {
            ctx->pc = 0x1B4478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4478;
        }
    }
    ctx->pc = 0x1B4498u;
label_1b4498:
    // 0x1b4498: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b449c:
    // 0x1b449c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1b449cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b44a0:
    // 0x1b44a0: 0x146102a  slt         $v0, $t2, $a2
    ctx->pc = 0x1b44a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1b44a4:
    // 0x1b44a4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1b44a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1b44a8:
    // 0x1b44a8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1b44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1b44ac:
    // 0x1b44ac: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
label_1b44b0:
    if (ctx->pc == 0x1B44B0u) {
        ctx->pc = 0x1B44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44ACu;
        // 0x1b44b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B44B4u;
        goto label_1b44b4;
    }
    ctx->pc = 0x1B44ACu;
    {
        const bool branch_taken_0x1b44ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44ACu;
        // 0x1b44b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44ac) {
            ctx->pc = 0x1B4450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4450;
        }
    }
    ctx->pc = 0x1B44B4u;
label_1b44b4:
    // 0x1b44b4: 0x1000ff2b  b           . + 4 + (-0xD5 << 2)
label_1b44b8:
    if (ctx->pc == 0x1B44B8u) {
        ctx->pc = 0x1B44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44B4u;
        // 0x1b44b8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B44BCu;
        goto label_1b44bc;
    }
    ctx->pc = 0x1B44B4u;
    {
        const bool branch_taken_0x1b44b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44B4u;
        // 0x1b44b8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44b4) {
            ctx->pc = 0x1B4164u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4164;
        }
    }
    ctx->pc = 0x1B44BCu;
label_1b44bc:
    // 0x1b44bc: 0x0  nop
    ctx->pc = 0x1b44bcu;
    // NOP
label_1b44c0:
    // 0x1b44c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b44c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b44c4:
    // 0x1b44c4: 0x0  nop
    ctx->pc = 0x1b44c4u;
    // NOP
label_1b44c8:
    // 0x1b44c8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1b44c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b44cc:
    // 0x1b44cc: 0x0  nop
    ctx->pc = 0x1b44ccu;
    // NOP
label_1b44d0:
    // 0x1b44d0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1b44d4:
    if (ctx->pc == 0x1B44D4u) {
        ctx->pc = 0x1B44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44D0u;
        // 0x1b44d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B44D8u;
        goto label_1b44d8;
    }
    ctx->pc = 0x1B44D0u;
    {
        const bool branch_taken_0x1b44d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44D0u;
        // 0x1b44d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44d0) {
            ctx->pc = 0x1B4520u;
            goto label_1b4520;
        }
    }
    ctx->pc = 0x1B44D8u;
label_1b44d8:
    // 0x1b44d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b44d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1b44dc:
    // 0x1b44dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1b44e0:
    // 0x1b44e0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1b44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1b44e4:
    // 0x1b44e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b44e8:
    // 0x1b44e8: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
label_1b44ec:
    if (ctx->pc == 0x1B44ECu) {
        ctx->pc = 0x1B44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44E8u;
        // 0x1b44ec: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B44F0u;
        goto label_1b44f0;
    }
    ctx->pc = 0x1B44E8u;
    {
        const bool branch_taken_0x1b44e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44E8u;
        // 0x1b44ec: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44e8) {
            ctx->pc = 0x1B45A8u;
            goto label_1b45a8;
        }
    }
    ctx->pc = 0x1B44F0u;
label_1b44f0:
    // 0x1b44f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b44f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b44f4:
    // 0x1b44f4: 0x0  nop
    ctx->pc = 0x1b44f4u;
    // NOP
label_1b44f8:
    // 0x1b44f8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1b44f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1b44fc:
    // 0x1b44fc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b44fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1b4500:
    // 0x1b4500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b4500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b4504:
    // 0x1b4504: 0x0  nop
    ctx->pc = 0x1b4504u;
    // NOP
label_1b4508:
    // 0x1b4508: 0x0  nop
    ctx->pc = 0x1b4508u;
    // NOP
label_1b450c:
    // 0x1b450c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1b4510:
    if (ctx->pc == 0x1B4510u) {
        ctx->pc = 0x1B4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B450Cu;
        // 0x1b4510: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4514u;
        goto label_1b4514;
    }
    ctx->pc = 0x1B450Cu;
    {
        const bool branch_taken_0x1b450c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B450Cu;
        // 0x1b4510: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b450c) {
            ctx->pc = 0x1B44F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b44f8;
        }
    }
    ctx->pc = 0x1B4514u;
label_1b4514:
    // 0x1b4514: 0x10000024  b           . + 4 + (0x24 << 2)
label_1b4518:
    if (ctx->pc == 0x1B4518u) {
        ctx->pc = 0x1B451Cu;
        goto label_1b451c;
    }
    ctx->pc = 0x1B4514u;
    {
        const bool branch_taken_0x1b4514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4514) {
            ctx->pc = 0x1B45A8u;
            goto label_1b45a8;
        }
    }
    ctx->pc = 0x1B451Cu;
label_1b451c:
    // 0x1b451c: 0x0  nop
    ctx->pc = 0x1b451cu;
    // NOP
label_1b4520:
    // 0x1b4520: 0xc06d48e  jal         func_1B5238
label_1b4524:
    if (ctx->pc == 0x1B4524u) {
        ctx->pc = 0x1B4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4520u;
        // 0x1b4524: 0x112023  negu        $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4528u;
        goto label_1b4528;
    }
    ctx->pc = 0x1B4520u;
    SET_GPR_U32(ctx, 31, 0x1B4528u);
    ctx->pc = 0x1B4524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4520u;
    // 0x1b4524: 0x112023  negu        $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5238u;
    { ctx->pc = 0x1b5238; return; }
    ctx->pc = 0x1B4528u;
label_1b4528:
    // 0x1b4528: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x1b4528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_1b452c:
    // 0x1b452c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b452cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4530:
    // 0x1b4530: 0x0  nop
    ctx->pc = 0x1b4530u;
    // NOP
label_1b4534:
    // 0x1b4534: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b4534u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1b4538:
    // 0x1b4538: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x1b4538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b453c:
    // 0x1b453c: 0x0  nop
    ctx->pc = 0x1b453cu;
    // NOP
label_1b4540:
    // 0x1b4540: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_1b4544:
    if (ctx->pc == 0x1B4544u) {
        ctx->pc = 0x1B4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4540u;
        // 0x1b4544: 0x3b31021  addu        $v0, $sp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4548u;
        goto label_1b4548;
    }
    ctx->pc = 0x1B4540u;
    {
        const bool branch_taken_0x1b4540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4540u;
        // 0x1b4544: 0x3b31021  addu        $v0, $sp, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4540) {
            ctx->pc = 0x1B45A0u;
            goto label_1b45a0;
        }
    }
    ctx->pc = 0x1B4548u;
label_1b4548:
    // 0x1b4548: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1b4548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_1b454c:
    // 0x1b454c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b454cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4550:
    // 0x1b4550: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b4550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b4554:
    // 0x1b4554: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1b4554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1b4558:
    // 0x1b4558: 0x3b32021  addu        $a0, $sp, $s3
    ctx->pc = 0x1b4558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 19)));
label_1b455c:
    // 0x1b455c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b455cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1b4560:
    // 0x1b4560: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b4560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1b4564:
    // 0x1b4564: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1b4568:
    // 0x1b4568: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1b4568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b456c:
    // 0x1b456c: 0x0  nop
    ctx->pc = 0x1b456cu;
    // NOP
label_1b4570:
    // 0x1b4570: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4574:
    // 0x1b4574: 0x0  nop
    ctx->pc = 0x1b4574u;
    // NOP
label_1b4578:
    // 0x1b4578: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b457c:
    // 0x1b457c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x1b457cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1b4580:
    // 0x1b4580: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b4580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1b4584:
    // 0x1b4584: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4584u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1b4588:
    // 0x1b4588: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1b4588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b458c:
    // 0x1b458c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b458cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b4590:
    // 0x1b4590: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b4590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b4594:
    // 0x1b4594: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b4598:
    if (ctx->pc == 0x1B4598u) {
        ctx->pc = 0x1B4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4594u;
        // 0x1b4598: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B459Cu;
        goto label_1b459c;
    }
    ctx->pc = 0x1B4594u;
    {
        const bool branch_taken_0x1b4594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4594u;
        // 0x1b4598: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4594) {
            ctx->pc = 0x1B45A8u;
            goto label_1b45a8;
        }
    }
    ctx->pc = 0x1B459Cu;
label_1b459c:
    // 0x1b459c: 0x0  nop
    ctx->pc = 0x1b459cu;
    // NOP
label_1b45a0:
    // 0x1b45a0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b45a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b45a4:
    // 0x1b45a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b45a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b45a8:
    // 0x1b45a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b45a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b45ac:
    // 0x1b45ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b45acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b45b0:
    // 0x1b45b0: 0xc06d48e  jal         func_1B5238
label_1b45b4:
    if (ctx->pc == 0x1B45B4u) {
        ctx->pc = 0x1B45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45B0u;
        // 0x1b45b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B45B8u;
        goto label_1b45b8;
    }
    ctx->pc = 0x1B45B0u;
    SET_GPR_U32(ctx, 31, 0x1B45B8u);
    ctx->pc = 0x1B45B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45B0u;
    // 0x1b45b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5238u;
    { ctx->pc = 0x1b5238; return; }
    ctx->pc = 0x1B45B8u;
label_1b45b8:
    // 0x1b45b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b45b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b45bc:
    // 0x1b45bc: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
label_1b45c0:
    if (ctx->pc == 0x1B45C0u) {
        ctx->pc = 0x1B45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45BCu;
        // 0x1b45c0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B45C4u;
        goto label_1b45c4;
    }
    ctx->pc = 0x1B45BCu;
    {
        const bool branch_taken_0x1b45bc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1B45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45BCu;
        // 0x1b45c0: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45bc) {
            ctx->pc = 0x1B4604u;
            goto label_1b4604;
        }
    }
    ctx->pc = 0x1B45C4u;
label_1b45c4:
    // 0x1b45c4: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1b45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b45c8:
    // 0x1b45c8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1b45c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_1b45cc:
    // 0x1b45cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b45ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b45d0:
    // 0x1b45d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b45d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b45d4:
    // 0x1b45d4: 0x0  nop
    ctx->pc = 0x1b45d4u;
    // NOP
label_1b45d8:
    // 0x1b45d8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b45dc:
    // 0x1b45dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b45dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b45e0:
    // 0x1b45e0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b45e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1b45e4:
    // 0x1b45e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b45e8:
    // 0x1b45e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b45e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b45ec:
    // 0x1b45ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b45ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b45f0:
    // 0x1b45f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b45f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1b45f4:
    // 0x1b45f4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1b45f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1b45f8:
    // 0x1b45f8: 0x4c1fff7  bgez        $a2, . + 4 + (-0x9 << 2)
label_1b45fc:
    if (ctx->pc == 0x1B45FCu) {
        ctx->pc = 0x1B45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45F8u;
        // 0x1b45fc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4600u;
        goto label_1b4600;
    }
    ctx->pc = 0x1B45F8u;
    {
        const bool branch_taken_0x1b45f8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45F8u;
        // 0x1b45fc: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b45f8) {
            ctx->pc = 0x1B45D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b45d8;
        }
    }
    ctx->pc = 0x1B4600u;
label_1b4600:
    // 0x1b4600: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b4600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4604:
    // 0x1b4604: 0x4c00024  bltz        $a2, . + 4 + (0x24 << 2)
label_1b4608:
    if (ctx->pc == 0x1B4608u) {
        ctx->pc = 0x1B4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4604u;
        // 0x1b4608: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B460Cu;
        goto label_1b460c;
    }
    ctx->pc = 0x1B4604u;
    {
        const bool branch_taken_0x1b4604 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1B4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4604u;
        // 0x1b4608: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4604) {
            ctx->pc = 0x1B4698u;
            goto label_1b4698;
        }
    }
    ctx->pc = 0x1B460Cu;
label_1b460c:
    // 0x1b460c: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x1b460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b4610:
    // 0x1b4610: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1b4610u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b4614:
    // 0x1b4614: 0x244cb1d0  addiu       $t4, $v0, -0x4E30
    ctx->pc = 0x1b4614u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947280));
label_1b4618:
    // 0x1b4618: 0x27ab00a0  addiu       $t3, $sp, 0xA0
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b461c:
    // 0x1b461c: 0x0  nop
    ctx->pc = 0x1b461cu;
    // NOP
label_1b4620:
    // 0x1b4620: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b4620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4624:
    // 0x1b4624: 0x6800016  bltz        $s4, . + 4 + (0x16 << 2)
label_1b4628:
    if (ctx->pc == 0x1B4628u) {
        ctx->pc = 0x1B4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4624u;
        // 0x1b4628: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B462Cu;
        goto label_1b462c;
    }
    ctx->pc = 0x1B4624u;
    {
        const bool branch_taken_0x1b4624 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1B4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4624u;
        // 0x1b4628: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4624) {
            ctx->pc = 0x1B4680u;
            goto label_1b4680;
        }
    }
    ctx->pc = 0x1B462Cu;
label_1b462c:
    // 0x1b462c: 0x2063823  subu        $a3, $s0, $a2
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1b4630:
    // 0x1b4630: 0x4e00014  bltz        $a3, . + 4 + (0x14 << 2)
label_1b4634:
    if (ctx->pc == 0x1B4634u) {
        ctx->pc = 0x1B4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4630u;
        // 0x1b4634: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4638u;
        goto label_1b4638;
    }
    ctx->pc = 0x1B4630u;
    {
        const bool branch_taken_0x1b4630 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1B4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4630u;
        // 0x1b4634: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4630) {
            ctx->pc = 0x1B4684u;
            goto label_1b4684;
        }
    }
    ctx->pc = 0x1B4638u;
label_1b4638:
    // 0x1b4638: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b4638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b463c:
    // 0x1b463c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x1b463cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_1b4640:
    // 0x1b4640: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x1b4640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1b4644:
    // 0x1b4644: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b4644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4648:
    // 0x1b4648: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b4648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1b464c:
    // 0x1b464c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1b464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4650:
    // 0x1b4650: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b4650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1b4654:
    // 0x1b4654: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1b4654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1b4658:
    // 0x1b4658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b4658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b465c:
    // 0x1b465c: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x1b465cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1b4660:
    // 0x1b4660: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x1b4660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1b4664:
    // 0x1b4664: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1b4668:
    if (ctx->pc == 0x1B4668u) {
        ctx->pc = 0x1B4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4664u;
        // 0x1b4668: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B466Cu;
        goto label_1b466c;
    }
    ctx->pc = 0x1B4664u;
    {
        const bool branch_taken_0x1b4664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4664u;
        // 0x1b4668: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4664) {
            ctx->pc = 0x1B4684u;
            goto label_1b4684;
        }
    }
    ctx->pc = 0x1B466Cu;
label_1b466c:
    // 0x1b466c: 0x5060fff6  beql        $v1, $zero, . + 4 + (-0xA << 2)
label_1b4670:
    if (ctx->pc == 0x1B4670u) {
        ctx->pc = 0x1B4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B466Cu;
        // 0x1b4670: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4674u;
        goto label_1b4674;
    }
    ctx->pc = 0x1B466Cu;
    {
        const bool branch_taken_0x1b466c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b466c) {
            ctx->pc = 0x1B4670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B466Cu;
            // 0x1b4670: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4648;
        }
    }
    ctx->pc = 0x1B4674u;
label_1b4674:
    // 0x1b4674: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b4678:
    if (ctx->pc == 0x1B4678u) {
        ctx->pc = 0x1B4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4674u;
        // 0x1b4678: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B467Cu;
        goto label_1b467c;
    }
    ctx->pc = 0x1B4674u;
    {
        const bool branch_taken_0x1b4674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4674u;
        // 0x1b4678: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4674) {
            ctx->pc = 0x1B4688u;
            goto label_1b4688;
        }
    }
    ctx->pc = 0x1B467Cu;
label_1b467c:
    // 0x1b467c: 0x0  nop
    ctx->pc = 0x1b467cu;
    // NOP
label_1b4680:
    // 0x1b4680: 0x2063823  subu        $a3, $s0, $a2
    ctx->pc = 0x1b4680u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1b4684:
    // 0x1b4684: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1b4684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1b4688:
    // 0x1b4688: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b468c:
    // 0x1b468c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1b468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_1b4690:
    // 0x1b4690: 0x4c1ffe3  bgez        $a2, . + 4 + (-0x1D << 2)
label_1b4694:
    if (ctx->pc == 0x1B4694u) {
        ctx->pc = 0x1B4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4690u;
        // 0x1b4694: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4698u;
        goto label_1b4698;
    }
    ctx->pc = 0x1B4690u;
    {
        const bool branch_taken_0x1b4690 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4690u;
        // 0x1b4694: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4690) {
            ctx->pc = 0x1B4620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4620;
        }
    }
    ctx->pc = 0x1B4698u;
label_1b4698:
    // 0x1b4698: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x1b4698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_1b469c:
    // 0x1b469c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1b469cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b46a0:
    // 0x1b46a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1b46a4:
    if (ctx->pc == 0x1B46A4u) {
        ctx->pc = 0x1B46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46A0u;
        // 0x1b46a4: 0x8fa60144  lw          $a2, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B46A8u;
        goto label_1b46a8;
    }
    ctx->pc = 0x1B46A0u;
    {
        const bool branch_taken_0x1b46a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46a0) {
            ctx->pc = 0x1B46A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B46A0u;
            // 0x1b46a4: 0x8fa60144  lw          $a2, 0x144($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B46C0u;
            goto label_1b46c0;
        }
    }
    ctx->pc = 0x1B46A8u;
label_1b46a8:
    // 0x1b46a8: 0x5ca0001d  bgtzl       $a1, . + 4 + (0x1D << 2)
label_1b46ac:
    if (ctx->pc == 0x1B46ACu) {
        ctx->pc = 0x1B46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46A8u;
        // 0x1b46ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B46B0u;
        goto label_1b46b0;
    }
    ctx->pc = 0x1B46A8u;
    {
        const bool branch_taken_0x1b46a8 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1b46a8) {
            ctx->pc = 0x1B46ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B46A8u;
            // 0x1b46ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4720u;
            { ctx->pc = 0x1b4720; return; }
        }
    }
    ctx->pc = 0x1B46B0u;
label_1b46b0:
    // 0x1b46b0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1b46b4:
    if (ctx->pc == 0x1B46B4u) {
        ctx->pc = 0x1B46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46B0u;
        // 0x1b46b4: 0x32a20007  andi        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B46B8u;
        goto label_1b46b8;
    }
    ctx->pc = 0x1B46B0u;
    {
        const bool branch_taken_0x1b46b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46B0u;
        // 0x1b46b4: 0x32a20007  andi        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46b0) {
            ctx->pc = 0x1B46D8u;
            { ctx->pc = 0x1b46d8; return; }
        }
    }
    ctx->pc = 0x1B46B8u;
label_1b46b8:
    // 0x1b46b8: 0x1000007a  b           . + 4 + (0x7A << 2)
label_1b46bc:
    if (ctx->pc == 0x1B46BCu) {
        ctx->pc = 0x1B46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46B8u;
        // 0x1b46bc: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B46C0u;
        goto label_1b46c0;
    }
    ctx->pc = 0x1B46B8u;
    {
        const bool branch_taken_0x1b46b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46B8u;
        // 0x1b46bc: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46b8) {
            ctx->pc = 0x1B48A4u;
            { ctx->pc = 0x1b48a4; return; }
        }
    }
    ctx->pc = 0x1B46C0u;
label_1b46c0:
    // 0x1b46c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b46c4:
    // 0x1b46c4: 0x10c20038  beq         $a2, $v0, . + 4 + (0x38 << 2)
label_1b46c8:
    if (ctx->pc == 0x1B46C8u) {
        ctx->pc = 0x1B46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46C4u;
        // 0x1b46c8: 0x32a20007  andi        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B46CCu;
        goto label_1b46cc;
    }
    ctx->pc = 0x1B46C4u;
    {
        const bool branch_taken_0x1b46c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46C4u;
        // 0x1b46c8: 0x32a20007  andi        $v0, $s5, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46c4) {
            ctx->pc = 0x1B47A8u;
            { ctx->pc = 0x1b47a8; return; }
        }
    }
    ctx->pc = 0x1B46CCu;
label_1b46cc:
    // 0x1b46cc: 0x10000075  b           . + 4 + (0x75 << 2)
label_1b46d0:
    if (ctx->pc == 0x1B46D0u) {
        ctx->pc = 0x1B46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46CCu;
        // 0x1b46d0: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B46D4u;
        goto label_1b46d4;
    }
    ctx->pc = 0x1B46CCu;
    {
        const bool branch_taken_0x1b46cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46CCu;
        // 0x1b46d0: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46cc) {
            ctx->pc = 0x1B48A4u;
            { ctx->pc = 0x1b48a4; return; }
        }
    }
    ctx->pc = 0x1B46D4u;
label_1b46d4:
    // 0x1b46d4: 0x0  nop
    ctx->pc = 0x1b46d4u;
    // NOP
    ctx->pc = 0x1b46d8u;
    return;
}

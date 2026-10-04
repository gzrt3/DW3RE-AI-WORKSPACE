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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part117(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1d4290u: goto label_1d4290;
        case 0x1d4294u: goto label_1d4294;
        case 0x1d4298u: goto label_1d4298;
        case 0x1d429cu: goto label_1d429c;
        case 0x1d42a0u: goto label_1d42a0;
        case 0x1d42a4u: goto label_1d42a4;
        case 0x1d42a8u: goto label_1d42a8;
        case 0x1d42acu: goto label_1d42ac;
        case 0x1d42b0u: goto label_1d42b0;
        case 0x1d42b4u: goto label_1d42b4;
        case 0x1d42b8u: goto label_1d42b8;
        case 0x1d42bcu: goto label_1d42bc;
        case 0x1d42c0u: goto label_1d42c0;
        case 0x1d42c4u: goto label_1d42c4;
        case 0x1d42c8u: goto label_1d42c8;
        case 0x1d42ccu: goto label_1d42cc;
        case 0x1d42d0u: goto label_1d42d0;
        case 0x1d42d4u: goto label_1d42d4;
        case 0x1d42d8u: goto label_1d42d8;
        case 0x1d42dcu: goto label_1d42dc;
        case 0x1d42e0u: goto label_1d42e0;
        case 0x1d42e4u: goto label_1d42e4;
        case 0x1d42e8u: goto label_1d42e8;
        case 0x1d42ecu: goto label_1d42ec;
        case 0x1d42f0u: goto label_1d42f0;
        case 0x1d42f4u: goto label_1d42f4;
        case 0x1d42f8u: goto label_1d42f8;
        case 0x1d42fcu: goto label_1d42fc;
        case 0x1d4300u: goto label_1d4300;
        case 0x1d4304u: goto label_1d4304;
        case 0x1d4308u: goto label_1d4308;
        case 0x1d430cu: goto label_1d430c;
        case 0x1d4310u: goto label_1d4310;
        case 0x1d4314u: goto label_1d4314;
        case 0x1d4318u: goto label_1d4318;
        case 0x1d431cu: goto label_1d431c;
        case 0x1d4320u: goto label_1d4320;
        case 0x1d4324u: goto label_1d4324;
        case 0x1d4328u: goto label_1d4328;
        case 0x1d432cu: goto label_1d432c;
        case 0x1d4330u: goto label_1d4330;
        case 0x1d4334u: goto label_1d4334;
        case 0x1d4338u: goto label_1d4338;
        case 0x1d433cu: goto label_1d433c;
        case 0x1d4340u: goto label_1d4340;
        case 0x1d4344u: goto label_1d4344;
        case 0x1d4348u: goto label_1d4348;
        case 0x1d434cu: goto label_1d434c;
        case 0x1d4350u: goto label_1d4350;
        case 0x1d4354u: goto label_1d4354;
        case 0x1d4358u: goto label_1d4358;
        case 0x1d435cu: goto label_1d435c;
        case 0x1d4360u: goto label_1d4360;
        case 0x1d4364u: goto label_1d4364;
        case 0x1d4368u: goto label_1d4368;
        case 0x1d436cu: goto label_1d436c;
        case 0x1d4370u: goto label_1d4370;
        case 0x1d4374u: goto label_1d4374;
        case 0x1d4378u: goto label_1d4378;
        case 0x1d437cu: goto label_1d437c;
        case 0x1d4380u: goto label_1d4380;
        case 0x1d4384u: goto label_1d4384;
        case 0x1d4388u: goto label_1d4388;
        case 0x1d438cu: goto label_1d438c;
        case 0x1d4390u: goto label_1d4390;
        case 0x1d4394u: goto label_1d4394;
        case 0x1d4398u: goto label_1d4398;
        case 0x1d439cu: goto label_1d439c;
        case 0x1d43a0u: goto label_1d43a0;
        case 0x1d43a4u: goto label_1d43a4;
        case 0x1d43a8u: goto label_1d43a8;
        case 0x1d43acu: goto label_1d43ac;
        case 0x1d43b0u: goto label_1d43b0;
        case 0x1d43b4u: goto label_1d43b4;
        case 0x1d43b8u: goto label_1d43b8;
        case 0x1d43bcu: goto label_1d43bc;
        case 0x1d43c0u: goto label_1d43c0;
        case 0x1d43c4u: goto label_1d43c4;
        case 0x1d43c8u: goto label_1d43c8;
        case 0x1d43ccu: goto label_1d43cc;
        case 0x1d43d0u: goto label_1d43d0;
        case 0x1d43d4u: goto label_1d43d4;
        case 0x1d43d8u: goto label_1d43d8;
        case 0x1d43dcu: goto label_1d43dc;
        case 0x1d43e0u: goto label_1d43e0;
        case 0x1d43e4u: goto label_1d43e4;
        case 0x1d43e8u: goto label_1d43e8;
        case 0x1d43ecu: goto label_1d43ec;
        case 0x1d43f0u: goto label_1d43f0;
        case 0x1d43f4u: goto label_1d43f4;
        case 0x1d43f8u: goto label_1d43f8;
        case 0x1d43fcu: goto label_1d43fc;
        case 0x1d4400u: goto label_1d4400;
        case 0x1d4404u: goto label_1d4404;
        case 0x1d4408u: goto label_1d4408;
        case 0x1d440cu: goto label_1d440c;
        case 0x1d4410u: goto label_1d4410;
        case 0x1d4414u: goto label_1d4414;
        case 0x1d4418u: goto label_1d4418;
        case 0x1d441cu: goto label_1d441c;
        case 0x1d4420u: goto label_1d4420;
        case 0x1d4424u: goto label_1d4424;
        case 0x1d4428u: goto label_1d4428;
        case 0x1d442cu: goto label_1d442c;
        case 0x1d4430u: goto label_1d4430;
        case 0x1d4434u: goto label_1d4434;
        case 0x1d4438u: goto label_1d4438;
        case 0x1d443cu: goto label_1d443c;
        case 0x1d4440u: goto label_1d4440;
        case 0x1d4444u: goto label_1d4444;
        case 0x1d4448u: goto label_1d4448;
        case 0x1d444cu: goto label_1d444c;
        case 0x1d4450u: goto label_1d4450;
        case 0x1d4454u: goto label_1d4454;
        case 0x1d4458u: goto label_1d4458;
        case 0x1d445cu: goto label_1d445c;
        case 0x1d4460u: goto label_1d4460;
        case 0x1d4464u: goto label_1d4464;
        case 0x1d4468u: goto label_1d4468;
        case 0x1d446cu: goto label_1d446c;
        case 0x1d4470u: goto label_1d4470;
        case 0x1d4474u: goto label_1d4474;
        case 0x1d4478u: goto label_1d4478;
        case 0x1d447cu: goto label_1d447c;
        case 0x1d4480u: goto label_1d4480;
        case 0x1d4484u: goto label_1d4484;
        case 0x1d4488u: goto label_1d4488;
        case 0x1d448cu: goto label_1d448c;
        case 0x1d4490u: goto label_1d4490;
        case 0x1d4494u: goto label_1d4494;
        case 0x1d4498u: goto label_1d4498;
        case 0x1d449cu: goto label_1d449c;
        case 0x1d44a0u: goto label_1d44a0;
        case 0x1d44a4u: goto label_1d44a4;
        case 0x1d44a8u: goto label_1d44a8;
        case 0x1d44acu: goto label_1d44ac;
        case 0x1d44b0u: goto label_1d44b0;
        case 0x1d44b4u: goto label_1d44b4;
        case 0x1d44b8u: goto label_1d44b8;
        case 0x1d44bcu: goto label_1d44bc;
        case 0x1d44c0u: goto label_1d44c0;
        case 0x1d44c4u: goto label_1d44c4;
        case 0x1d44c8u: goto label_1d44c8;
        case 0x1d44ccu: goto label_1d44cc;
        case 0x1d44d0u: goto label_1d44d0;
        case 0x1d44d4u: goto label_1d44d4;
        case 0x1d44d8u: goto label_1d44d8;
        case 0x1d44dcu: goto label_1d44dc;
        case 0x1d44e0u: goto label_1d44e0;
        case 0x1d44e4u: goto label_1d44e4;
        case 0x1d44e8u: goto label_1d44e8;
        case 0x1d44ecu: goto label_1d44ec;
        case 0x1d44f0u: goto label_1d44f0;
        case 0x1d44f4u: goto label_1d44f4;
        case 0x1d44f8u: goto label_1d44f8;
        case 0x1d44fcu: goto label_1d44fc;
        case 0x1d4500u: goto label_1d4500;
        case 0x1d4504u: goto label_1d4504;
        case 0x1d4508u: goto label_1d4508;
        case 0x1d450cu: goto label_1d450c;
        case 0x1d4510u: goto label_1d4510;
        case 0x1d4514u: goto label_1d4514;
        case 0x1d4518u: goto label_1d4518;
        case 0x1d451cu: goto label_1d451c;
        case 0x1d4520u: goto label_1d4520;
        case 0x1d4524u: goto label_1d4524;
        case 0x1d4528u: goto label_1d4528;
        case 0x1d452cu: goto label_1d452c;
        case 0x1d4530u: goto label_1d4530;
        case 0x1d4534u: goto label_1d4534;
        case 0x1d4538u: goto label_1d4538;
        case 0x1d453cu: goto label_1d453c;
        case 0x1d4540u: goto label_1d4540;
        case 0x1d4544u: goto label_1d4544;
        case 0x1d4548u: goto label_1d4548;
        case 0x1d454cu: goto label_1d454c;
        case 0x1d4550u: goto label_1d4550;
        case 0x1d4554u: goto label_1d4554;
        case 0x1d4558u: goto label_1d4558;
        case 0x1d455cu: goto label_1d455c;
        case 0x1d4560u: goto label_1d4560;
        case 0x1d4564u: goto label_1d4564;
        case 0x1d4568u: goto label_1d4568;
        case 0x1d456cu: goto label_1d456c;
        case 0x1d4570u: goto label_1d4570;
        case 0x1d4574u: goto label_1d4574;
        case 0x1d4578u: goto label_1d4578;
        case 0x1d457cu: goto label_1d457c;
        case 0x1d4580u: goto label_1d4580;
        case 0x1d4584u: goto label_1d4584;
        case 0x1d4588u: goto label_1d4588;
        case 0x1d458cu: goto label_1d458c;
        case 0x1d4590u: goto label_1d4590;
        case 0x1d4594u: goto label_1d4594;
        case 0x1d4598u: goto label_1d4598;
        case 0x1d459cu: goto label_1d459c;
        case 0x1d45a0u: goto label_1d45a0;
        case 0x1d45a4u: goto label_1d45a4;
        case 0x1d45a8u: goto label_1d45a8;
        case 0x1d45acu: goto label_1d45ac;
        case 0x1d45b0u: goto label_1d45b0;
        case 0x1d45b4u: goto label_1d45b4;
        case 0x1d45b8u: goto label_1d45b8;
        case 0x1d45bcu: goto label_1d45bc;
        case 0x1d45c0u: goto label_1d45c0;
        case 0x1d45c4u: goto label_1d45c4;
        case 0x1d45c8u: goto label_1d45c8;
        case 0x1d45ccu: goto label_1d45cc;
        case 0x1d45d0u: goto label_1d45d0;
        case 0x1d45d4u: goto label_1d45d4;
        case 0x1d45d8u: goto label_1d45d8;
        case 0x1d45dcu: goto label_1d45dc;
        case 0x1d45e0u: goto label_1d45e0;
        case 0x1d45e4u: goto label_1d45e4;
        case 0x1d45e8u: goto label_1d45e8;
        case 0x1d45ecu: goto label_1d45ec;
        case 0x1d45f0u: goto label_1d45f0;
        case 0x1d45f4u: goto label_1d45f4;
        case 0x1d45f8u: goto label_1d45f8;
        case 0x1d45fcu: goto label_1d45fc;
        case 0x1d4600u: goto label_1d4600;
        case 0x1d4604u: goto label_1d4604;
        case 0x1d4608u: goto label_1d4608;
        case 0x1d460cu: goto label_1d460c;
        case 0x1d4610u: goto label_1d4610;
        case 0x1d4614u: goto label_1d4614;
        case 0x1d4618u: goto label_1d4618;
        case 0x1d461cu: goto label_1d461c;
        case 0x1d4620u: goto label_1d4620;
        case 0x1d4624u: goto label_1d4624;
        case 0x1d4628u: goto label_1d4628;
        case 0x1d462cu: goto label_1d462c;
        case 0x1d4630u: goto label_1d4630;
        case 0x1d4634u: goto label_1d4634;
        case 0x1d4638u: goto label_1d4638;
        case 0x1d463cu: goto label_1d463c;
        case 0x1d4640u: goto label_1d4640;
        case 0x1d4644u: goto label_1d4644;
        case 0x1d4648u: goto label_1d4648;
        case 0x1d464cu: goto label_1d464c;
        case 0x1d4650u: goto label_1d4650;
        case 0x1d4654u: goto label_1d4654;
        case 0x1d4658u: goto label_1d4658;
        case 0x1d465cu: goto label_1d465c;
        case 0x1d4660u: goto label_1d4660;
        case 0x1d4664u: goto label_1d4664;
        case 0x1d4668u: goto label_1d4668;
        case 0x1d466cu: goto label_1d466c;
        case 0x1d4670u: goto label_1d4670;
        case 0x1d4674u: goto label_1d4674;
        case 0x1d4678u: goto label_1d4678;
        case 0x1d467cu: goto label_1d467c;
        case 0x1d4680u: goto label_1d4680;
        case 0x1d4684u: goto label_1d4684;
        case 0x1d4688u: goto label_1d4688;
        case 0x1d468cu: goto label_1d468c;
        case 0x1d4690u: goto label_1d4690;
        case 0x1d4694u: goto label_1d4694;
        case 0x1d4698u: goto label_1d4698;
        case 0x1d469cu: goto label_1d469c;
        case 0x1d46a0u: goto label_1d46a0;
        case 0x1d46a4u: goto label_1d46a4;
        case 0x1d46a8u: goto label_1d46a8;
        case 0x1d46acu: goto label_1d46ac;
        case 0x1d46b0u: goto label_1d46b0;
        case 0x1d46b4u: goto label_1d46b4;
        case 0x1d46b8u: goto label_1d46b8;
        case 0x1d46bcu: goto label_1d46bc;
        case 0x1d46c0u: goto label_1d46c0;
        case 0x1d46c4u: goto label_1d46c4;
        case 0x1d46c8u: goto label_1d46c8;
        case 0x1d46ccu: goto label_1d46cc;
        case 0x1d46d0u: goto label_1d46d0;
        case 0x1d46d4u: goto label_1d46d4;
        case 0x1d46d8u: goto label_1d46d8;
        case 0x1d46dcu: goto label_1d46dc;
        case 0x1d46e0u: goto label_1d46e0;
        case 0x1d46e4u: goto label_1d46e4;
        case 0x1d46e8u: goto label_1d46e8;
        case 0x1d46ecu: goto label_1d46ec;
        case 0x1d46f0u: goto label_1d46f0;
        case 0x1d46f4u: goto label_1d46f4;
        case 0x1d46f8u: goto label_1d46f8;
        case 0x1d46fcu: goto label_1d46fc;
        case 0x1d4700u: goto label_1d4700;
        case 0x1d4704u: goto label_1d4704;
        case 0x1d4708u: goto label_1d4708;
        case 0x1d470cu: goto label_1d470c;
        case 0x1d4710u: goto label_1d4710;
        case 0x1d4714u: goto label_1d4714;
        case 0x1d4718u: goto label_1d4718;
        case 0x1d471cu: goto label_1d471c;
        case 0x1d4720u: goto label_1d4720;
        case 0x1d4724u: goto label_1d4724;
        case 0x1d4728u: goto label_1d4728;
        case 0x1d472cu: goto label_1d472c;
        case 0x1d4730u: goto label_1d4730;
        case 0x1d4734u: goto label_1d4734;
        case 0x1d4738u: goto label_1d4738;
        case 0x1d473cu: goto label_1d473c;
        case 0x1d4740u: goto label_1d4740;
        case 0x1d4744u: goto label_1d4744;
        case 0x1d4748u: goto label_1d4748;
        case 0x1d474cu: goto label_1d474c;
        case 0x1d4750u: goto label_1d4750;
        case 0x1d4754u: goto label_1d4754;
        case 0x1d4758u: goto label_1d4758;
        case 0x1d475cu: goto label_1d475c;
        case 0x1d4760u: goto label_1d4760;
        case 0x1d4764u: goto label_1d4764;
        case 0x1d4768u: goto label_1d4768;
        case 0x1d476cu: goto label_1d476c;
        case 0x1d4770u: goto label_1d4770;
        case 0x1d4774u: goto label_1d4774;
        case 0x1d4778u: goto label_1d4778;
        case 0x1d477cu: goto label_1d477c;
        case 0x1d4780u: goto label_1d4780;
        case 0x1d4784u: goto label_1d4784;
        case 0x1d4788u: goto label_1d4788;
        case 0x1d478cu: goto label_1d478c;
        case 0x1d4790u: goto label_1d4790;
        case 0x1d4794u: goto label_1d4794;
        case 0x1d4798u: goto label_1d4798;
        case 0x1d479cu: goto label_1d479c;
        case 0x1d47a0u: goto label_1d47a0;
        case 0x1d47a4u: goto label_1d47a4;
        case 0x1d47a8u: goto label_1d47a8;
        case 0x1d47acu: goto label_1d47ac;
        case 0x1d47b0u: goto label_1d47b0;
        case 0x1d47b4u: goto label_1d47b4;
        case 0x1d47b8u: goto label_1d47b8;
        case 0x1d47bcu: goto label_1d47bc;
        case 0x1d47c0u: goto label_1d47c0;
        case 0x1d47c4u: goto label_1d47c4;
        case 0x1d47c8u: goto label_1d47c8;
        case 0x1d47ccu: goto label_1d47cc;
        case 0x1d47d0u: goto label_1d47d0;
        case 0x1d47d4u: goto label_1d47d4;
        case 0x1d47d8u: goto label_1d47d8;
        case 0x1d47dcu: goto label_1d47dc;
        case 0x1d47e0u: goto label_1d47e0;
        case 0x1d47e4u: goto label_1d47e4;
        case 0x1d47e8u: goto label_1d47e8;
        case 0x1d47ecu: goto label_1d47ec;
        case 0x1d47f0u: goto label_1d47f0;
        case 0x1d47f4u: goto label_1d47f4;
        case 0x1d47f8u: goto label_1d47f8;
        case 0x1d47fcu: goto label_1d47fc;
        case 0x1d4800u: goto label_1d4800;
        case 0x1d4804u: goto label_1d4804;
        case 0x1d4808u: goto label_1d4808;
        case 0x1d480cu: goto label_1d480c;
        case 0x1d4810u: goto label_1d4810;
        case 0x1d4814u: goto label_1d4814;
        case 0x1d4818u: goto label_1d4818;
        case 0x1d481cu: goto label_1d481c;
        case 0x1d4820u: goto label_1d4820;
        case 0x1d4824u: goto label_1d4824;
        case 0x1d4828u: goto label_1d4828;
        case 0x1d482cu: goto label_1d482c;
        case 0x1d4830u: goto label_1d4830;
        case 0x1d4834u: goto label_1d4834;
        case 0x1d4838u: goto label_1d4838;
        case 0x1d483cu: goto label_1d483c;
        case 0x1d4840u: goto label_1d4840;
        case 0x1d4844u: goto label_1d4844;
        case 0x1d4848u: goto label_1d4848;
        case 0x1d484cu: goto label_1d484c;
        case 0x1d4850u: goto label_1d4850;
        case 0x1d4854u: goto label_1d4854;
        case 0x1d4858u: goto label_1d4858;
        case 0x1d485cu: goto label_1d485c;
        case 0x1d4860u: goto label_1d4860;
        case 0x1d4864u: goto label_1d4864;
        case 0x1d4868u: goto label_1d4868;
        case 0x1d486cu: goto label_1d486c;
        case 0x1d4870u: goto label_1d4870;
        case 0x1d4874u: goto label_1d4874;
        case 0x1d4878u: goto label_1d4878;
        case 0x1d487cu: goto label_1d487c;
        case 0x1d4880u: goto label_1d4880;
        case 0x1d4884u: goto label_1d4884;
        case 0x1d4888u: goto label_1d4888;
        case 0x1d488cu: goto label_1d488c;
        case 0x1d4890u: goto label_1d4890;
        case 0x1d4894u: goto label_1d4894;
        case 0x1d4898u: goto label_1d4898;
        case 0x1d489cu: goto label_1d489c;
        case 0x1d48a0u: goto label_1d48a0;
        case 0x1d48a4u: goto label_1d48a4;
        case 0x1d48a8u: goto label_1d48a8;
        case 0x1d48acu: goto label_1d48ac;
        case 0x1d48b0u: goto label_1d48b0;
        case 0x1d48b4u: goto label_1d48b4;
        default: return;
    }

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
            { ctx->pc = 0x1d3ce0; return; }
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
            goto label_1d4548;
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
            goto label_1d4290;
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
        goto label_1d4290;
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
            goto label_1d42ac;
        }
    }
    ctx->pc = 0x1D4290u;
label_1d4290:
    // 0x1d4290: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4294:
    // 0x1d4294: 0x0  nop
    ctx->pc = 0x1d4294u;
    // NOP
label_1d4298:
    // 0x1d4298: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d429c:
    // 0x1d429c: 0x0  nop
    ctx->pc = 0x1d429cu;
    // NOP
label_1d42a0:
    // 0x1d42a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d42a4:
    if (ctx->pc == 0x1D42A4u) {
        ctx->pc = 0x1D42A8u;
        goto label_1d42a8;
    }
    ctx->pc = 0x1D42A0u;
    {
        const bool branch_taken_0x1d42a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d42a0) {
            ctx->pc = 0x1D42ACu;
            goto label_1d42ac;
        }
    }
    ctx->pc = 0x1D42A8u;
label_1d42a8:
    // 0x1d42a8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1d42a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1d42ac:
    // 0x1d42ac: 0x0  nop
    ctx->pc = 0x1d42acu;
    // NOP
label_1d42b0:
    // 0x1d42b0: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1d42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1d42b4:
    // 0x1d42b4: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x1d42b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d42b8:
    // 0x1d42b8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1d42b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1d42bc:
    // 0x1d42bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d42bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d42c0:
    // 0x1d42c0: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x1d42c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1d42c4:
    // 0x1d42c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d42c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d42c8:
    // 0x1d42c8: 0xe7a00278  swc1        $f0, 0x278($sp)
    ctx->pc = 0x1d42c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
label_1d42cc:
    // 0x1d42cc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d42ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d42d0:
    // 0x1d42d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d42d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d42d4:
    // 0x1d42d4: 0xc066e34  jal         func_19B8D0
label_1d42d8:
    if (ctx->pc == 0x1D42D8u) {
        ctx->pc = 0x1D42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42D4u;
        // 0x1d42d8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42DCu;
        goto label_1d42dc;
    }
    ctx->pc = 0x1D42D4u;
    SET_GPR_U32(ctx, 31, 0x1D42DCu);
    ctx->pc = 0x1D42D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42D4u;
    // 0x1d42d8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1D42DCu;
label_1d42dc:
    // 0x1d42dc: 0x26c60010  addiu       $a2, $s6, 0x10
    ctx->pc = 0x1d42dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_1d42e0:
    // 0x1d42e0: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1d42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1d42e4:
    // 0x1d42e4: 0xc066d7a  jal         func_19B5E8
label_1d42e8:
    if (ctx->pc == 0x1D42E8u) {
        ctx->pc = 0x1D42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42E4u;
        // 0x1d42e8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42ECu;
        goto label_1d42ec;
    }
    ctx->pc = 0x1D42E4u;
    SET_GPR_U32(ctx, 31, 0x1D42ECu);
    ctx->pc = 0x1D42E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42E4u;
    // 0x1d42e8: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1D42E4u, 0x1D42ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42ECu;
label_1d42ec:
    // 0x1d42ec: 0x27b1028c  addiu       $s1, $sp, 0x28C
    ctx->pc = 0x1d42ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 652));
label_1d42f0:
    // 0x1d42f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d42f4:
    // 0x1d42f4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d42f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d42f8:
    // 0x1d42f8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1d42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1d42fc:
    // 0x1d42fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d42fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4300:
    // 0x1d4300: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d4300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4304:
    // 0x1d4304: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1d4304u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1d4308:
    // 0x1d4308: 0x0  nop
    ctx->pc = 0x1d4308u;
    // NOP
label_1d430c:
    // 0x1d430c: 0x0  nop
    ctx->pc = 0x1d430cu;
    // NOP
label_1d4310:
    // 0x1d4310: 0xc066e14  jal         func_19B850
label_1d4314:
    if (ctx->pc == 0x1D4314u) {
        ctx->pc = 0x1D4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4310u;
        // 0x1d4314: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4318u;
        goto label_1d4318;
    }
    ctx->pc = 0x1D4310u;
    SET_GPR_U32(ctx, 31, 0x1D4318u);
    ctx->pc = 0x1D4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4310u;
    // 0x1d4314: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1D4318u;
label_1d4318:
    // 0x1d4318: 0xc07f198  jal         func_1FC660
label_1d431c:
    if (ctx->pc == 0x1D431Cu) {
        ctx->pc = 0x1D431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4318u;
        // 0x1d431c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4320u;
        goto label_1d4320;
    }
    ctx->pc = 0x1D4318u;
    SET_GPR_U32(ctx, 31, 0x1D4320u);
    ctx->pc = 0x1D431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4318u;
    // 0x1d431c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1D4320u;
label_1d4320:
    // 0x1d4320: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d4320u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d4324:
    // 0x1d4324: 0xc07f190  jal         func_1FC640
label_1d4328:
    if (ctx->pc == 0x1D4328u) {
        ctx->pc = 0x1D4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4324u;
        // 0x1d4328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D432Cu;
        goto label_1d432c;
    }
    ctx->pc = 0x1D4324u;
    SET_GPR_U32(ctx, 31, 0x1D432Cu);
    ctx->pc = 0x1D4328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4324u;
    // 0x1d4328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1D432Cu;
label_1d432c:
    // 0x1d432c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1d432cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d4330:
    // 0x1d4330: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1d4330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1d4334:
    // 0x1d4334: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x1d4334u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1d4338:
    // 0x1d4338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d433c:
    // 0x1d433c: 0x0  nop
    ctx->pc = 0x1d433cu;
    // NOP
label_1d4340:
    // 0x1d4340: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d4340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4344:
    // 0x1d4344: 0x0  nop
    ctx->pc = 0x1d4344u;
    // NOP
label_1d4348:
    // 0x1d4348: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d434c:
    if (ctx->pc == 0x1D434Cu) {
        ctx->pc = 0x1D434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4348u;
        // 0x1d434c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4350u;
        goto label_1d4350;
    }
    ctx->pc = 0x1D4348u;
    {
        const bool branch_taken_0x1d4348 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4348u;
        // 0x1d434c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4348) {
            ctx->pc = 0x1D4358u;
            goto label_1d4358;
        }
    }
    ctx->pc = 0x1D4350u;
label_1d4350:
    // 0x1d4350: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d4354:
    if (ctx->pc == 0x1D4354u) {
        ctx->pc = 0x1D4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4350u;
        // 0x1d4354: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4358u;
        goto label_1d4358;
    }
    ctx->pc = 0x1D4350u;
    {
        const bool branch_taken_0x1d4350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4350u;
        // 0x1d4354: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4350) {
            ctx->pc = 0x1D4374u;
            goto label_1d4374;
        }
    }
    ctx->pc = 0x1D4358u;
label_1d4358:
    // 0x1d4358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d435c:
    // 0x1d435c: 0x0  nop
    ctx->pc = 0x1d435cu;
    // NOP
label_1d4360:
    // 0x1d4360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4364:
    // 0x1d4364: 0x0  nop
    ctx->pc = 0x1d4364u;
    // NOP
label_1d4368:
    // 0x1d4368: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d436c:
    if (ctx->pc == 0x1D436Cu) {
        ctx->pc = 0x1D4370u;
        goto label_1d4370;
    }
    ctx->pc = 0x1D4368u;
    {
        const bool branch_taken_0x1d4368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4368) {
            ctx->pc = 0x1D4374u;
            goto label_1d4374;
        }
    }
    ctx->pc = 0x1D4370u;
label_1d4370:
    // 0x1d4370: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1d4370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1d4374:
    // 0x1d4374: 0x0  nop
    ctx->pc = 0x1d4374u;
    // NOP
label_1d4378:
    // 0x1d4378: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1d4378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1d437c:
    // 0x1d437c: 0xc7a00288  lwc1        $f0, 0x288($sp)
    ctx->pc = 0x1d437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4380:
    // 0x1d4380: 0x27b60180  addiu       $s6, $sp, 0x180
    ctx->pc = 0x1d4380u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1d4384:
    // 0x1d4384: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4388:
    // 0x1d4388: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x1d4388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1d438c:
    // 0x1d438c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d438cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d4390:
    // 0x1d4390: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d4390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d4394:
    // 0x1d4394: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x1d4394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_1d4398:
    // 0x1d4398: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1d4398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d439c:
    // 0x1d439c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d439cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d43a0:
    // 0x1d43a0: 0xc066e34  jal         func_19B8D0
label_1d43a4:
    if (ctx->pc == 0x1D43A4u) {
        ctx->pc = 0x1D43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43A0u;
        // 0x1d43a4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D43A8u;
        goto label_1d43a8;
    }
    ctx->pc = 0x1D43A0u;
    SET_GPR_U32(ctx, 31, 0x1D43A8u);
    ctx->pc = 0x1D43A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43A0u;
    // 0x1d43a4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1D43A8u;
label_1d43a8:
    // 0x1d43a8: 0x87a60170  lh          $a2, 0x170($sp)
    ctx->pc = 0x1d43a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
label_1d43ac:
    // 0x1d43ac: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x1d43acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_1d43b0:
    // 0x1d43b0: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1d43b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
label_1d43b4:
    // 0x1d43b4: 0x27a20174  addiu       $v0, $sp, 0x174
    ctx->pc = 0x1d43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_1d43b8:
    // 0x1d43b8: 0x27a70178  addiu       $a3, $sp, 0x178
    ctx->pc = 0x1d43b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_1d43bc:
    // 0x1d43bc: 0x27a30184  addiu       $v1, $sp, 0x184
    ctx->pc = 0x1d43bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_1d43c0:
    // 0x1d43c0: 0x24a5b260  addiu       $a1, $a1, -0x4DA0
    ctx->pc = 0x1d43c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947424));
label_1d43c4:
    // 0x1d43c4: 0x2484b1a0  addiu       $a0, $a0, -0x4E60
    ctx->pc = 0x1d43c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
label_1d43c8:
    // 0x1d43c8: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x1d43c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d43cc:
    // 0x1d43cc: 0xa6a60080  sh          $a2, 0x80($s5)
    ctx->pc = 0x1d43ccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 6));
label_1d43d0:
    // 0x1d43d0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1d43d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d43d4:
    // 0x1d43d4: 0xa6a60082  sh          $a2, 0x82($s5)
    ctx->pc = 0x1d43d4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 130), (uint16_t)GPR_U32(ctx, 6));
label_1d43d8:
    // 0x1d43d8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1d43d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d43dc:
    // 0x1d43dc: 0xaea60084  sw          $a2, 0x84($s5)
    ctx->pc = 0x1d43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 6));
label_1d43e0:
    // 0x1d43e0: 0x86c60000  lh          $a2, 0x0($s6)
    ctx->pc = 0x1d43e0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_1d43e4:
    // 0x1d43e4: 0xa6a60090  sh          $a2, 0x90($s5)
    ctx->pc = 0x1d43e4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 6));
label_1d43e8:
    // 0x1d43e8: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x1d43e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1d43ec:
    // 0x1d43ec: 0xa6a60092  sh          $a2, 0x92($s5)
    ctx->pc = 0x1d43ecu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 6));
label_1d43f0:
    // 0x1d43f0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1d43f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d43f4:
    // 0x1d43f4: 0xaea60094  sw          $a2, 0x94($s5)
    ctx->pc = 0x1d43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 6));
label_1d43f8:
    // 0x1d43f8: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x1d43f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1d43fc:
    // 0x1d43fc: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x1d43fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1d4400:
    // 0x1d4400: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1d4400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1d4404:
    // 0x1d4404: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1d4404u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1d4408:
    // 0x1d4408: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d4408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d440c:
    // 0x1d440c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x1d440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1d4410:
    // 0x1d4410: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x1d4410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1d4414:
    // 0x1d4414: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1d4414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4418:
    // 0x1d4418: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1d4418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d441c:
    // 0x1d441c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d441cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1d4420:
    // 0x1d4420: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d4420u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1d4424:
    // 0x1d4424: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1d4424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d4428:
    // 0x1d4428: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x1d4428u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1d442c:
    // 0x1d442c: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x1d442cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_1d4430:
    // 0x1d4430: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x1d4430u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1d4434:
    // 0x1d4434: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1d4434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1d4438:
    // 0x1d4438: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x1d4438u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1d443c:
    // 0x1d443c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x1d443cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1d4440:
    // 0x1d4440: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d4440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d4444:
    // 0x1d4444: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x1d4444u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
label_1d4448:
    // 0x1d4448: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d4448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d444c:
    // 0x1d444c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1d444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1d4450:
    // 0x1d4450: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1d4450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1d4454:
    // 0x1d4454: 0x87a40170  lh          $a0, 0x170($sp)
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
label_1d4458:
    // 0x1d4458: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d445c:
    // 0x1d445c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1d4460:
    // 0x1d4460: 0xa6a40078  sh          $a0, 0x78($s5)
    ctx->pc = 0x1d4460u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 4));
label_1d4464:
    // 0x1d4464: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1d4464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4468:
    // 0x1d4468: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d446c:
    // 0x1d446c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d446cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1d4470:
    // 0x1d4470: 0xa6a4007a  sh          $a0, 0x7A($s5)
    ctx->pc = 0x1d4470u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 122), (uint16_t)GPR_U32(ctx, 4));
label_1d4474:
    // 0x1d4474: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x1d4474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_1d4478:
    // 0x1d4478: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4478u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d447c:
    // 0x1d447c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1d4480:
    // 0x1d4480: 0xa6a40088  sh          $a0, 0x88($s5)
    ctx->pc = 0x1d4480u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 136), (uint16_t)GPR_U32(ctx, 4));
label_1d4484:
    // 0x1d4484: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1d4484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1d4488:
    // 0x1d4488: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d4488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d448c:
    // 0x1d448c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1d4490:
    // 0x1d4490: 0xa6a4008a  sh          $a0, 0x8A($s5)
    ctx->pc = 0x1d4490u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 138), (uint16_t)GPR_U32(ctx, 4));
label_1d4494:
    // 0x1d4494: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d4494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d4498:
    // 0x1d4498: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1d4498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1d449c:
    // 0x1d449c: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x1d449cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1d44a0:
    // 0x1d44a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d44a4:
    // 0x1d44a4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1d44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1d44a8:
    // 0x1d44a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d44ac:
    // 0x1d44ac: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1d44acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_1d44b0:
    // 0x1d44b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d44b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1d44b4:
    // 0x1d44b4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d44b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_1d44b8:
    // 0x1d44b8: 0x41e38  dsll        $v1, $a0, 24
    ctx->pc = 0x1d44b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 24);
label_1d44bc:
    // 0x1d44bc: 0x523b8  dsll        $a0, $a1, 14
    ctx->pc = 0x1d44bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 14);
label_1d44c0:
    // 0x1d44c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d44c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1d44c4:
    // 0x1d44c4: 0x62938  dsll        $a1, $a2, 4
    ctx->pc = 0x1d44c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 4);
label_1d44c8:
    // 0x1d44c8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1d44c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_1d44cc:
    // 0x1d44cc: 0x34a5000a  ori         $a1, $a1, 0xA
    ctx->pc = 0x1d44ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10);
label_1d44d0:
    // 0x1d44d0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1d44d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1d44d4:
    // 0x1d44d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d44d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1d44d8:
    // 0x1d44d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d44d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d44dc:
    // 0x1d44dc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1d44e0:
    if (ctx->pc == 0x1D44E0u) {
        ctx->pc = 0x1D44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44DCu;
        // 0x1d44e0: 0xfea20040  sd          $v0, 0x40($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D44E4u;
        goto label_1d44e4;
    }
    ctx->pc = 0x1D44DCu;
    {
        const bool branch_taken_0x1d44dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44DCu;
        // 0x1d44e0: 0xfea20040  sd          $v0, 0x40($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44dc) {
            ctx->pc = 0x1D4508u;
            goto label_1d4508;
        }
    }
    ctx->pc = 0x1D44E4u;
label_1d44e4:
    // 0x1d44e4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d44e8:
    // 0x1d44e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d44ec:
    // 0x1d44ec: 0xa2a20070  sb          $v0, 0x70($s5)
    ctx->pc = 0x1d44ecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 112), (uint8_t)GPR_U32(ctx, 2));
label_1d44f0:
    // 0x1d44f0: 0xa2a20071  sb          $v0, 0x71($s5)
    ctx->pc = 0x1d44f0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 113), (uint8_t)GPR_U32(ctx, 2));
label_1d44f4:
    // 0x1d44f4: 0xa2a20072  sb          $v0, 0x72($s5)
    ctx->pc = 0x1d44f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 114), (uint8_t)GPR_U32(ctx, 2));
label_1d44f8:
    // 0x1d44f8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d44fc:
    // 0x1d44fc: 0xa2a20073  sb          $v0, 0x73($s5)
    ctx->pc = 0x1d44fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 115), (uint8_t)GPR_U32(ctx, 2));
label_1d4500:
    // 0x1d4500: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d4504:
    if (ctx->pc == 0x1D4504u) {
        ctx->pc = 0x1D4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4500u;
        // 0x1d4504: 0xaea30074  sw          $v1, 0x74($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4508u;
        goto label_1d4508;
    }
    ctx->pc = 0x1D4500u;
    {
        const bool branch_taken_0x1d4500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4500u;
        // 0x1d4504: 0xaea30074  sw          $v1, 0x74($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4500) {
            ctx->pc = 0x1D4524u;
            goto label_1d4524;
        }
    }
    ctx->pc = 0x1D4508u;
label_1d4508:
    // 0x1d4508: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1d4508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d450c:
    // 0x1d450c: 0xa2a30070  sb          $v1, 0x70($s5)
    ctx->pc = 0x1d450cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 112), (uint8_t)GPR_U32(ctx, 3));
label_1d4510:
    // 0x1d4510: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d4514:
    // 0x1d4514: 0xa2a30071  sb          $v1, 0x71($s5)
    ctx->pc = 0x1d4514u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 113), (uint8_t)GPR_U32(ctx, 3));
label_1d4518:
    // 0x1d4518: 0xa2a30072  sb          $v1, 0x72($s5)
    ctx->pc = 0x1d4518u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 114), (uint8_t)GPR_U32(ctx, 3));
label_1d451c:
    // 0x1d451c: 0xa2be0073  sb          $fp, 0x73($s5)
    ctx->pc = 0x1d451cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 115), (uint8_t)GPR_U32(ctx, 30));
label_1d4520:
    // 0x1d4520: 0xaea20074  sw          $v0, 0x74($s5)
    ctx->pc = 0x1d4520u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 2));
label_1d4524:
    // 0x1d4524: 0x0  nop
    ctx->pc = 0x1d4524u;
    // NOP
label_1d4528:
    // 0x1d4528: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1d4528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1d452c:
    // 0x1d452c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d452cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d4530:
    // 0x1d4530: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x1d4530u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
label_1d4534:
    // 0x1d4534: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1d4534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1d4538:
    // 0x1d4538: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1d4538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_1d453c:
    // 0x1d453c: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x1d453cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d4540:
    // 0x1d4540: 0x1440ff2d  bnez        $v0, . + 4 + (-0xD3 << 2)
label_1d4544:
    if (ctx->pc == 0x1D4544u) {
        ctx->pc = 0x1D4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4540u;
        // 0x1d4544: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4548u;
        goto label_1d4548;
    }
    ctx->pc = 0x1D4540u;
    {
        const bool branch_taken_0x1d4540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4540u;
        // 0x1d4544: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4540) {
            ctx->pc = 0x1D41F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d41f8;
        }
    }
    ctx->pc = 0x1D4548u;
label_1d4548:
    // 0x1d4548: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d4548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d454c:
    // 0x1d454c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d4550:
    // 0x1d4550: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d4550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1d4554:
    // 0x1d4554: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d4554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d4558:
    // 0x1d4558: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1d4558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1d455c:
    // 0x1d455c: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x1d455cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_1d4560:
    // 0x1d4560: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d4560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4564:
    // 0x1d4564: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d4564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4568:
    // 0x1d4568: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d4568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d456c:
    // 0x1d456c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d4570:
    // 0x1d4570: 0xc066c72  jal         func_19B1C8
label_1d4574:
    if (ctx->pc == 0x1D4574u) {
        ctx->pc = 0x1D4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4570u;
        // 0x1d4574: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4578u;
        goto label_1d4578;
    }
    ctx->pc = 0x1D4570u;
    SET_GPR_U32(ctx, 31, 0x1D4578u);
    ctx->pc = 0x1D4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4570u;
    // 0x1d4574: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D4570u, 0x1D4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4578u;
label_1d4578:
    // 0x1d4578: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1d4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1d457c:
    // 0x1d457c: 0x246303d0  addiu       $v1, $v1, 0x3D0
    ctx->pc = 0x1d457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 976));
label_1d4580:
    // 0x1d4580: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1d4580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_1d4584:
    // 0x1d4584: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1d4584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1d4588:
    // 0x1d4588: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1d4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1d458c:
    // 0x1d458c: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x1d458cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_1d4590:
    // 0x1d4590: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d4590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d4594:
    // 0x1d4594: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4598:
    // 0x1d4598: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1d4598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1d459c:
    // 0x1d459c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d45a0:
    // 0x1d45a0: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x1d45a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d45a4:
    // 0x1d45a4: 0x1460fc6f  bnez        $v1, . + 4 + (-0x391 << 2)
label_1d45a8:
    if (ctx->pc == 0x1D45A8u) {
        ctx->pc = 0x1D45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45A4u;
        // 0x1d45a8: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D45ACu;
        goto label_1d45ac;
    }
    ctx->pc = 0x1D45A4u;
    {
        const bool branch_taken_0x1d45a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45A4u;
        // 0x1d45a8: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45a4) {
            ctx->pc = 0x1D3764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d3764; return; }
        }
    }
    ctx->pc = 0x1D45ACu;
label_1d45ac:
    // 0x1d45ac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d45acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1d45b0:
    // 0x1d45b0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d45b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d45b4:
    // 0x1d45b4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d45b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d45b8:
    // 0x1d45b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d45b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d45bc:
    // 0x1d45bc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d45bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d45c0:
    // 0x1d45c0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d45c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d45c4:
    // 0x1d45c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d45c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d45c8:
    // 0x1d45c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d45c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d45cc:
    // 0x1d45cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d45ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d45d0:
    // 0x1d45d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d45d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d45d4:
    // 0x1d45d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d45d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d45d8:
    // 0x1d45d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d45d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d45dc:
    // 0x1d45dc: 0x3e00008  jr          $ra
label_1d45e0:
    if (ctx->pc == 0x1D45E0u) {
        ctx->pc = 0x1D45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45DCu;
        // 0x1d45e0: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D45E4u;
        goto label_1d45e4;
    }
    ctx->pc = 0x1D45DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45DCu;
        // 0x1d45e0: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D45DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D45E4u;
label_1d45e4:
    // 0x1d45e4: 0x0  nop
    ctx->pc = 0x1d45e4u;
    // NOP
label_1d45e8:
    // 0x1d45e8: 0x0  nop
    ctx->pc = 0x1d45e8u;
    // NOP
label_1d45ec:
    // 0x1d45ec: 0x0  nop
    ctx->pc = 0x1d45ecu;
    // NOP
label_1d45f0:
    // 0x1d45f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d45f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d45f4:
    // 0x1d45f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d45f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d45f8:
    // 0x1d45f8: 0x3c034320  lui         $v1, 0x4320
    ctx->pc = 0x1d45f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17184 << 16));
label_1d45fc:
    // 0x1d45fc: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1d45fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1d4600:
    // 0x1d4600: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d4604:
    // 0x1d4604: 0x248402e0  addiu       $a0, $a0, 0x2E0
    ctx->pc = 0x1d4604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_1d4608:
    // 0x1d4608: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x1d4608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1d460c:
    // 0x1d460c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d4610:
    // 0x1d4610: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1d4614:
    if (ctx->pc == 0x1D4614u) {
        ctx->pc = 0x1D4618u;
        goto label_1d4618;
    }
    ctx->pc = 0x1D4610u;
    {
        const bool branch_taken_0x1d4610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4610) {
            ctx->pc = 0x1D4678u;
            goto label_1d4678;
        }
    }
    ctx->pc = 0x1D4618u;
label_1d4618:
    // 0x1d4618: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1d4618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1d461c:
    // 0x1d461c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1d4620:
    // 0x1d4620: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1d4620u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1d4624:
    // 0x1d4624: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1d4624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1d4628:
    // 0x1d4628: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_1d462c:
    if (ctx->pc == 0x1D462Cu) {
        ctx->pc = 0x1D4630u;
        goto label_1d4630;
    }
    ctx->pc = 0x1D4628u;
    {
        const bool branch_taken_0x1d4628 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1d4628) {
            ctx->pc = 0x1D4638u;
            goto label_1d4638;
        }
    }
    ctx->pc = 0x1D4630u;
label_1d4630:
    // 0x1d4630: 0x10000011  b           . + 4 + (0x11 << 2)
label_1d4634:
    if (ctx->pc == 0x1D4634u) {
        ctx->pc = 0x1D4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4630u;
        // 0x1d4634: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4638u;
        goto label_1d4638;
    }
    ctx->pc = 0x1D4630u;
    {
        const bool branch_taken_0x1d4630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4630u;
        // 0x1d4634: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4630) {
            ctx->pc = 0x1D4678u;
            goto label_1d4678;
        }
    }
    ctx->pc = 0x1D4638u;
label_1d4638:
    // 0x1d4638: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1d4638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d463c:
    // 0x1d463c: 0xc4600150  lwc1        $f0, 0x150($v1)
    ctx->pc = 0x1d463cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4640:
    // 0x1d4640: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x1d4640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_1d4644:
    // 0x1d4644: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1d4644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d4648:
    // 0x1d4648: 0xc4600154  lwc1        $f0, 0x154($v1)
    ctx->pc = 0x1d4648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d464c:
    // 0x1d464c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x1d464cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_1d4650:
    // 0x1d4650: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1d4650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d4654:
    // 0x1d4654: 0xc4600158  lwc1        $f0, 0x158($v1)
    ctx->pc = 0x1d4654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4658:
    // 0x1d4658: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x1d4658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_1d465c:
    // 0x1d465c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1d465cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d4660:
    // 0x1d4660: 0xc460015c  lwc1        $f0, 0x15C($v1)
    ctx->pc = 0x1d4660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4664:
    // 0x1d4664: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x1d4664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_1d4668:
    // 0x1d4668: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1d4668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1d466c:
    // 0x1d466c: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x1d466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4670:
    // 0x1d4670: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d4670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1d4674:
    // 0x1d4674: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x1d4674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_1d4678:
    // 0x1d4678: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d4678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d467c:
    // 0x1d467c: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x1d467cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d4680:
    // 0x1d4680: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
label_1d4684:
    if (ctx->pc == 0x1D4684u) {
        ctx->pc = 0x1D4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4680u;
        // 0x1d4684: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4688u;
        goto label_1d4688;
    }
    ctx->pc = 0x1D4680u;
    {
        const bool branch_taken_0x1d4680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4680u;
        // 0x1d4684: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4680) {
            ctx->pc = 0x1D4608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4608;
        }
    }
    ctx->pc = 0x1D4688u;
label_1d4688:
    // 0x1d4688: 0x3e00008  jr          $ra
label_1d468c:
    if (ctx->pc == 0x1D468Cu) {
        ctx->pc = 0x1D4690u;
        goto label_1d4690;
    }
    ctx->pc = 0x1D4688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4690u;
label_1d4690:
    // 0x1d4690: 0x8f898c48  lw          $t1, -0x73B8($gp)
    ctx->pc = 0x1d4690u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_1d4694:
    // 0x1d4694: 0x3c08004b  lui         $t0, 0x4B
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)75 << 16));
label_1d4698:
    // 0x1d4698: 0x250802e0  addiu       $t0, $t0, 0x2E0
    ctx->pc = 0x1d4698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 736));
label_1d469c:
    // 0x1d469c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d46a0:
    // 0x1d46a0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1d46a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d46a4:
    // 0x1d46a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d46a8:
    // 0x1d46a8: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x1d46a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1d46ac:
    // 0x1d46ac: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1d46acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1d46b0:
    // 0x1d46b0: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1d46b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_1d46b4:
    // 0x1d46b4: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x1d46b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
label_1d46b8:
    // 0x1d46b8: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x1d46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_1d46bc:
    // 0x1d46bc: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x1d46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
label_1d46c0:
    // 0x1d46c0: 0x8f848c48  lw          $a0, -0x73B8($gp)
    ctx->pc = 0x1d46c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_1d46c4:
    // 0x1d46c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d46c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d46c8:
    // 0x1d46c8: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1d46c8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1d46cc:
    // 0x1d46cc: 0x0  nop
    ctx->pc = 0x1d46ccu;
    // NOP
label_1d46d0:
    // 0x1d46d0: 0x0  nop
    ctx->pc = 0x1d46d0u;
    // NOP
label_1d46d4:
    // 0x1d46d4: 0x1810  mfhi        $v1
    ctx->pc = 0x1d46d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1d46d8:
    // 0x1d46d8: 0x3e00008  jr          $ra
label_1d46dc:
    if (ctx->pc == 0x1D46DCu) {
        ctx->pc = 0x1D46DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46D8u;
        // 0x1d46dc: 0xaf838c48  sw          $v1, -0x73B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D46E0u;
        goto label_1d46e0;
    }
    ctx->pc = 0x1D46D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D46DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46D8u;
        // 0x1d46dc: 0xaf838c48  sw          $v1, -0x73B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D46D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D46E0u;
label_1d46e0:
    // 0x1d46e0: 0x3e00008  jr          $ra
label_1d46e4:
    if (ctx->pc == 0x1D46E4u) {
        ctx->pc = 0x1D46E8u;
        goto label_1d46e8;
    }
    ctx->pc = 0x1D46E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D46E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D46E8u;
label_1d46e8:
    // 0x1d46e8: 0x0  nop
    ctx->pc = 0x1d46e8u;
    // NOP
label_1d46ec:
    // 0x1d46ec: 0x0  nop
    ctx->pc = 0x1d46ecu;
    // NOP
label_1d46f0:
    // 0x1d46f0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d46f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1d46f4:
    // 0x1d46f4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d46f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d46f8:
    // 0x1d46f8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d46f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1d46fc:
    // 0x1d46fc: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d46fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1d4700:
    // 0x1d4700: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d4700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1d4704:
    // 0x1d4704: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d4704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1d4708:
    // 0x1d4708: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d4708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1d470c:
    // 0x1d470c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1d4710:
    // 0x1d4710: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d4710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1d4714:
    // 0x1d4714: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d4714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1d4718:
    // 0x1d4718: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d4718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d471c:
    // 0x1d471c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1d4720:
    // 0x1d4720: 0xac2002e0  sw          $zero, 0x2E0($at)
    ctx->pc = 0x1d4720u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 736), GPR_U32(ctx, 0));
label_1d4724:
    // 0x1d4724: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d4724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d4728:
    // 0x1d4728: 0xaf808c48  sw          $zero, -0x73B8($gp)
    ctx->pc = 0x1d4728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 0));
label_1d472c:
    // 0x1d472c: 0xac200300  sw          $zero, 0x300($at)
    ctx->pc = 0x1d472cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 768), GPR_U32(ctx, 0));
label_1d4730:
    // 0x1d4730: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d4730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d4734:
    // 0x1d4734: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1d4734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_1d4738:
    // 0x1d4738: 0xac200320  sw          $zero, 0x320($at)
    ctx->pc = 0x1d4738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 800), GPR_U32(ctx, 0));
label_1d473c:
    // 0x1d473c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d473cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d4740:
    // 0x1d4740: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1d4740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1d4744:
    // 0x1d4744: 0xac200340  sw          $zero, 0x340($at)
    ctx->pc = 0x1d4744u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 832), GPR_U32(ctx, 0));
label_1d4748:
    // 0x1d4748: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d4748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d474c:
    // 0x1d474c: 0xac200360  sw          $zero, 0x360($at)
    ctx->pc = 0x1d474cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 864), GPR_U32(ctx, 0));
label_1d4750:
    // 0x1d4750: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d4750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1d4754:
    // 0x1d4754: 0xac200380  sw          $zero, 0x380($at)
    ctx->pc = 0x1d4754u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 896), GPR_U32(ctx, 0));
label_1d4758:
    // 0x1d4758: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d4758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d475c:
    // 0x1d475c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1d475cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1d4760:
    // 0x1d4760: 0x2463a760  addiu       $v1, $v1, -0x58A0
    ctx->pc = 0x1d4760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944608));
label_1d4764:
    // 0x1d4764: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d4764u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4768:
    // 0x1d4768: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d4768u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d476c:
    // 0x1d476c: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x1d476cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d4770:
    // 0x1d4770: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d4770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4774:
    // 0x1d4774: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d4774u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4778:
    // 0x1d4778: 0x3d61021  addu        $v0, $fp, $s6
    ctx->pc = 0x1d4778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 22)));
label_1d477c:
    // 0x1d477c: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x1d477cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d4780:
    // 0x1d4780: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1d4780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1d4784:
    // 0x1d4784: 0xc05e234  jal         func_1788D0
label_1d4788:
    if (ctx->pc == 0x1D4788u) {
        ctx->pc = 0x1D4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4784u;
        // 0x1d4788: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D478Cu;
        goto label_1d478c;
    }
    ctx->pc = 0x1D4784u;
    SET_GPR_U32(ctx, 31, 0x1D478Cu);
    ctx->pc = 0x1D4788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4784u;
    // 0x1d4788: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1D4784u, 0x1D478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D478Cu;
label_1d478c:
    // 0x1d478c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d478cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4790:
    // 0x1d4790: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d4790u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4794:
    // 0x1d4794: 0x0  nop
    ctx->pc = 0x1d4794u;
    // NOP
label_1d4798:
    // 0x1d4798: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x1d4798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_1d479c:
    // 0x1d479c: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1d479cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d47a0:
    // 0x1d47a0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1d47a4:
    if (ctx->pc == 0x1D47A4u) {
        ctx->pc = 0x1D47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A0u;
        // 0x1d47a4: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47A8u;
        goto label_1d47a8;
    }
    ctx->pc = 0x1D47A0u;
    {
        const bool branch_taken_0x1d47a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A0u;
        // 0x1d47a4: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47a0) {
            ctx->pc = 0x1D47B8u;
            goto label_1d47b8;
        }
    }
    ctx->pc = 0x1D47A8u;
label_1d47a8:
    // 0x1d47a8: 0xc070834  jal         func_1C20D0
label_1d47ac:
    if (ctx->pc == 0x1D47ACu) {
        ctx->pc = 0x1D47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A8u;
        // 0x1d47ac: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47B0u;
        goto label_1d47b0;
    }
    ctx->pc = 0x1D47A8u;
    SET_GPR_U32(ctx, 31, 0x1D47B0u);
    ctx->pc = 0x1D47ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47A8u;
    // 0x1d47ac: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1D47B0u;
label_1d47b0:
    // 0x1d47b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d47b4:
    if (ctx->pc == 0x1D47B4u) {
        ctx->pc = 0x1D47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B0u;
        // 0x1d47b4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47B8u;
        goto label_1d47b8;
    }
    ctx->pc = 0x1D47B0u;
    {
        const bool branch_taken_0x1d47b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B0u;
        // 0x1d47b4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b0) {
            ctx->pc = 0x1D47C4u;
            goto label_1d47c4;
        }
    }
    ctx->pc = 0x1D47B8u;
label_1d47b8:
    // 0x1d47b8: 0xc070834  jal         func_1C20D0
label_1d47bc:
    if (ctx->pc == 0x1D47BCu) {
        ctx->pc = 0x1D47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B8u;
        // 0x1d47bc: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47C0u;
        goto label_1d47c0;
    }
    ctx->pc = 0x1D47B8u;
    SET_GPR_U32(ctx, 31, 0x1D47C0u);
    ctx->pc = 0x1D47BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47B8u;
    // 0x1d47bc: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1D47C0u;
label_1d47c0:
    // 0x1d47c0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d47c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1d47c4:
    // 0x1d47c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d47c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d47c8:
    // 0x1d47c8: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x1d47c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_1d47cc:
    // 0x1d47cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d47d0:
    // 0x1d47d0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1d47d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1d47d4:
    // 0x1d47d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d47d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d47d8:
    // 0x1d47d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d47d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d47dc:
    // 0x1d47dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d47dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d47e0:
    // 0x1d47e0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1d47e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1d47e4:
    // 0x1d47e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d47e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d47e8:
    // 0x1d47e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d47e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d47ec:
    // 0x1d47ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d47ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d47f0:
    // 0x1d47f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d47f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d47f4:
    // 0x1d47f4: 0xc05de30  jal         func_1778C0
label_1d47f8:
    if (ctx->pc == 0x1D47F8u) {
        ctx->pc = 0x1D47F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47F4u;
        // 0x1d47f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47FCu;
        goto label_1d47fc;
    }
    ctx->pc = 0x1D47F4u;
    SET_GPR_U32(ctx, 31, 0x1D47FCu);
    ctx->pc = 0x1D47F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47F4u;
    // 0x1d47f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1D47F4u, 0x1D47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47FCu;
label_1d47fc:
    // 0x1d47fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d47fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d4800:
    // 0x1d4800: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x1d4800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d4804:
    // 0x1d4804: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_1d4808:
    if (ctx->pc == 0x1D4808u) {
        ctx->pc = 0x1D4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4804u;
        // 0x1d4808: 0x269400a0  addiu       $s4, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D480Cu;
        goto label_1d480c;
    }
    ctx->pc = 0x1D4804u;
    {
        const bool branch_taken_0x1d4804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4804u;
        // 0x1d4808: 0x269400a0  addiu       $s4, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4804) {
            ctx->pc = 0x1D4794u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4794;
        }
    }
    ctx->pc = 0x1D480Cu;
label_1d480c:
    // 0x1d480c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d480cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d4810:
    // 0x1d4810: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1d4810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d4814:
    // 0x1d4814: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
label_1d4818:
    if (ctx->pc == 0x1D4818u) {
        ctx->pc = 0x1D4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4814u;
        // 0x1d4818: 0x26b503d0  addiu       $s5, $s5, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D481Cu;
        goto label_1d481c;
    }
    ctx->pc = 0x1D4814u;
    {
        const bool branch_taken_0x1d4814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4814u;
        // 0x1d4818: 0x26b503d0  addiu       $s5, $s5, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4814) {
            ctx->pc = 0x1D4778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4778;
        }
    }
    ctx->pc = 0x1D481Cu;
label_1d481c:
    // 0x1d481c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1d481cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1d4820:
    // 0x1d4820: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x1d4820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d4824:
    // 0x1d4824: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_1d4828:
    if (ctx->pc == 0x1D4828u) {
        ctx->pc = 0x1D4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4824u;
        // 0x1d4828: 0x26d616e0  addiu       $s6, $s6, 0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 5856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D482Cu;
        goto label_1d482c;
    }
    ctx->pc = 0x1D4824u;
    {
        const bool branch_taken_0x1d4824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4824u;
        // 0x1d4828: 0x26d616e0  addiu       $s6, $s6, 0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 5856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4824) {
            ctx->pc = 0x1D4770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4770;
        }
    }
    ctx->pc = 0x1D482Cu;
label_1d482c:
    // 0x1d482c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1d482cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d4830:
    // 0x1d4830: 0x24632dc0  addiu       $v1, $v1, 0x2DC0
    ctx->pc = 0x1d4830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11712));
label_1d4834:
    // 0x1d4834: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1d4834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_1d4838:
    // 0x1d4838: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d4838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d483c:
    // 0x1d483c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d483cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d4840:
    // 0x1d4840: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1d4840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1d4844:
    // 0x1d4844: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1d4844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d4848:
    // 0x1d4848: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1d4848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d484c:
    // 0x1d484c: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
label_1d4850:
    if (ctx->pc == 0x1D4850u) {
        ctx->pc = 0x1D4854u;
        goto label_1d4854;
    }
    ctx->pc = 0x1D484Cu;
    {
        const bool branch_taken_0x1d484c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d484c) {
            ctx->pc = 0x1D4758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4758;
        }
    }
    ctx->pc = 0x1D4854u;
label_1d4854:
    // 0x1d4854: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d4854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1d4858:
    // 0x1d4858: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d4858u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d485c:
    // 0x1d485c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d485cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d4860:
    // 0x1d4860: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d4860u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d4864:
    // 0x1d4864: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d4864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d4868:
    // 0x1d4868: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d4868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d486c:
    // 0x1d486c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d486cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d4870:
    // 0x1d4870: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d4870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d4874:
    // 0x1d4874: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d4874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d4878:
    // 0x1d4878: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d4878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d487c:
    // 0x1d487c: 0x3e00008  jr          $ra
label_1d4880:
    if (ctx->pc == 0x1D4880u) {
        ctx->pc = 0x1D4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D487Cu;
        // 0x1d4880: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4884u;
        goto label_1d4884;
    }
    ctx->pc = 0x1D487Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D487Cu;
        // 0x1d4880: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D487Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4884u;
label_1d4884:
    // 0x1d4884: 0x0  nop
    ctx->pc = 0x1d4884u;
    // NOP
label_1d4888:
    // 0x1d4888: 0x0  nop
    ctx->pc = 0x1d4888u;
    // NOP
label_1d488c:
    // 0x1d488c: 0x0  nop
    ctx->pc = 0x1d488cu;
    // NOP
label_1d4890:
    // 0x1d4890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d4894:
    // 0x1d4894: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d4894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1d4898:
    // 0x1d4898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d4898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d489c:
    // 0x1d489c: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x1d489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_1d48a0:
    // 0x1d48a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d48a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d48a4:
    // 0x1d48a4: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1d48a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1d48a8:
    // 0x1d48a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1d48ac:
    if (ctx->pc == 0x1D48ACu) {
        ctx->pc = 0x1D48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A8u;
        // 0x1d48ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48B0u;
        goto label_1d48b0;
    }
    ctx->pc = 0x1D48A8u;
    {
        const bool branch_taken_0x1d48a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A8u;
        // 0x1d48ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48a8) {
            ctx->pc = 0x1D48B8u;
            { ctx->pc = 0x1d48b8; return; }
        }
    }
    ctx->pc = 0x1D48B0u;
label_1d48b0:
    // 0x1d48b0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1d48b4:
    if (ctx->pc == 0x1D48B4u) {
        ctx->pc = 0x1D48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48B0u;
        // 0x1d48b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48B8u;
        { ctx->pc = 0x1d48b8; return; }
    }
    ctx->pc = 0x1D48B0u;
    {
        const bool branch_taken_0x1d48b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48B0u;
        // 0x1d48b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48b0) {
            ctx->pc = 0x1D49A0u;
            { ctx->pc = 0x1d49a0; return; }
        }
    }
    ctx->pc = 0x1D48B8u;
    ctx->pc = 0x1d48b8u;
    return;
}

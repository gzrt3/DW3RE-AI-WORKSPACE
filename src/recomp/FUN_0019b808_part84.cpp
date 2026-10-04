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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c4078u: goto label_1c4078;
        case 0x1c407cu: goto label_1c407c;
        case 0x1c4080u: goto label_1c4080;
        case 0x1c4084u: goto label_1c4084;
        case 0x1c4088u: goto label_1c4088;
        case 0x1c408cu: goto label_1c408c;
        case 0x1c4090u: goto label_1c4090;
        case 0x1c4094u: goto label_1c4094;
        case 0x1c4098u: goto label_1c4098;
        case 0x1c409cu: goto label_1c409c;
        case 0x1c40a0u: goto label_1c40a0;
        case 0x1c40a4u: goto label_1c40a4;
        case 0x1c40a8u: goto label_1c40a8;
        case 0x1c40acu: goto label_1c40ac;
        case 0x1c40b0u: goto label_1c40b0;
        case 0x1c40b4u: goto label_1c40b4;
        case 0x1c40b8u: goto label_1c40b8;
        case 0x1c40bcu: goto label_1c40bc;
        case 0x1c40c0u: goto label_1c40c0;
        case 0x1c40c4u: goto label_1c40c4;
        case 0x1c40c8u: goto label_1c40c8;
        case 0x1c40ccu: goto label_1c40cc;
        case 0x1c40d0u: goto label_1c40d0;
        case 0x1c40d4u: goto label_1c40d4;
        case 0x1c40d8u: goto label_1c40d8;
        case 0x1c40dcu: goto label_1c40dc;
        case 0x1c40e0u: goto label_1c40e0;
        case 0x1c40e4u: goto label_1c40e4;
        case 0x1c40e8u: goto label_1c40e8;
        case 0x1c40ecu: goto label_1c40ec;
        case 0x1c40f0u: goto label_1c40f0;
        case 0x1c40f4u: goto label_1c40f4;
        case 0x1c40f8u: goto label_1c40f8;
        case 0x1c40fcu: goto label_1c40fc;
        case 0x1c4100u: goto label_1c4100;
        case 0x1c4104u: goto label_1c4104;
        case 0x1c4108u: goto label_1c4108;
        case 0x1c410cu: goto label_1c410c;
        case 0x1c4110u: goto label_1c4110;
        case 0x1c4114u: goto label_1c4114;
        case 0x1c4118u: goto label_1c4118;
        case 0x1c411cu: goto label_1c411c;
        case 0x1c4120u: goto label_1c4120;
        case 0x1c4124u: goto label_1c4124;
        case 0x1c4128u: goto label_1c4128;
        case 0x1c412cu: goto label_1c412c;
        case 0x1c4130u: goto label_1c4130;
        case 0x1c4134u: goto label_1c4134;
        case 0x1c4138u: goto label_1c4138;
        case 0x1c413cu: goto label_1c413c;
        case 0x1c4140u: goto label_1c4140;
        case 0x1c4144u: goto label_1c4144;
        case 0x1c4148u: goto label_1c4148;
        case 0x1c414cu: goto label_1c414c;
        case 0x1c4150u: goto label_1c4150;
        case 0x1c4154u: goto label_1c4154;
        case 0x1c4158u: goto label_1c4158;
        case 0x1c415cu: goto label_1c415c;
        case 0x1c4160u: goto label_1c4160;
        case 0x1c4164u: goto label_1c4164;
        case 0x1c4168u: goto label_1c4168;
        case 0x1c416cu: goto label_1c416c;
        case 0x1c4170u: goto label_1c4170;
        case 0x1c4174u: goto label_1c4174;
        case 0x1c4178u: goto label_1c4178;
        case 0x1c417cu: goto label_1c417c;
        case 0x1c4180u: goto label_1c4180;
        case 0x1c4184u: goto label_1c4184;
        case 0x1c4188u: goto label_1c4188;
        case 0x1c418cu: goto label_1c418c;
        case 0x1c4190u: goto label_1c4190;
        case 0x1c4194u: goto label_1c4194;
        case 0x1c4198u: goto label_1c4198;
        case 0x1c419cu: goto label_1c419c;
        case 0x1c41a0u: goto label_1c41a0;
        case 0x1c41a4u: goto label_1c41a4;
        case 0x1c41a8u: goto label_1c41a8;
        case 0x1c41acu: goto label_1c41ac;
        case 0x1c41b0u: goto label_1c41b0;
        case 0x1c41b4u: goto label_1c41b4;
        case 0x1c41b8u: goto label_1c41b8;
        case 0x1c41bcu: goto label_1c41bc;
        case 0x1c41c0u: goto label_1c41c0;
        case 0x1c41c4u: goto label_1c41c4;
        case 0x1c41c8u: goto label_1c41c8;
        case 0x1c41ccu: goto label_1c41cc;
        case 0x1c41d0u: goto label_1c41d0;
        case 0x1c41d4u: goto label_1c41d4;
        case 0x1c41d8u: goto label_1c41d8;
        case 0x1c41dcu: goto label_1c41dc;
        case 0x1c41e0u: goto label_1c41e0;
        case 0x1c41e4u: goto label_1c41e4;
        case 0x1c41e8u: goto label_1c41e8;
        case 0x1c41ecu: goto label_1c41ec;
        case 0x1c41f0u: goto label_1c41f0;
        case 0x1c41f4u: goto label_1c41f4;
        case 0x1c41f8u: goto label_1c41f8;
        case 0x1c41fcu: goto label_1c41fc;
        case 0x1c4200u: goto label_1c4200;
        case 0x1c4204u: goto label_1c4204;
        case 0x1c4208u: goto label_1c4208;
        case 0x1c420cu: goto label_1c420c;
        case 0x1c4210u: goto label_1c4210;
        case 0x1c4214u: goto label_1c4214;
        case 0x1c4218u: goto label_1c4218;
        case 0x1c421cu: goto label_1c421c;
        case 0x1c4220u: goto label_1c4220;
        case 0x1c4224u: goto label_1c4224;
        case 0x1c4228u: goto label_1c4228;
        case 0x1c422cu: goto label_1c422c;
        case 0x1c4230u: goto label_1c4230;
        case 0x1c4234u: goto label_1c4234;
        case 0x1c4238u: goto label_1c4238;
        case 0x1c423cu: goto label_1c423c;
        case 0x1c4240u: goto label_1c4240;
        case 0x1c4244u: goto label_1c4244;
        case 0x1c4248u: goto label_1c4248;
        case 0x1c424cu: goto label_1c424c;
        case 0x1c4250u: goto label_1c4250;
        case 0x1c4254u: goto label_1c4254;
        case 0x1c4258u: goto label_1c4258;
        case 0x1c425cu: goto label_1c425c;
        case 0x1c4260u: goto label_1c4260;
        case 0x1c4264u: goto label_1c4264;
        case 0x1c4268u: goto label_1c4268;
        case 0x1c426cu: goto label_1c426c;
        case 0x1c4270u: goto label_1c4270;
        case 0x1c4274u: goto label_1c4274;
        case 0x1c4278u: goto label_1c4278;
        case 0x1c427cu: goto label_1c427c;
        case 0x1c4280u: goto label_1c4280;
        case 0x1c4284u: goto label_1c4284;
        case 0x1c4288u: goto label_1c4288;
        case 0x1c428cu: goto label_1c428c;
        case 0x1c4290u: goto label_1c4290;
        case 0x1c4294u: goto label_1c4294;
        case 0x1c4298u: goto label_1c4298;
        case 0x1c429cu: goto label_1c429c;
        case 0x1c42a0u: goto label_1c42a0;
        case 0x1c42a4u: goto label_1c42a4;
        case 0x1c42a8u: goto label_1c42a8;
        case 0x1c42acu: goto label_1c42ac;
        case 0x1c42b0u: goto label_1c42b0;
        case 0x1c42b4u: goto label_1c42b4;
        case 0x1c42b8u: goto label_1c42b8;
        case 0x1c42bcu: goto label_1c42bc;
        case 0x1c42c0u: goto label_1c42c0;
        case 0x1c42c4u: goto label_1c42c4;
        case 0x1c42c8u: goto label_1c42c8;
        case 0x1c42ccu: goto label_1c42cc;
        case 0x1c42d0u: goto label_1c42d0;
        case 0x1c42d4u: goto label_1c42d4;
        case 0x1c42d8u: goto label_1c42d8;
        case 0x1c42dcu: goto label_1c42dc;
        case 0x1c42e0u: goto label_1c42e0;
        case 0x1c42e4u: goto label_1c42e4;
        case 0x1c42e8u: goto label_1c42e8;
        case 0x1c42ecu: goto label_1c42ec;
        case 0x1c42f0u: goto label_1c42f0;
        case 0x1c42f4u: goto label_1c42f4;
        case 0x1c42f8u: goto label_1c42f8;
        case 0x1c42fcu: goto label_1c42fc;
        case 0x1c4300u: goto label_1c4300;
        case 0x1c4304u: goto label_1c4304;
        case 0x1c4308u: goto label_1c4308;
        case 0x1c430cu: goto label_1c430c;
        case 0x1c4310u: goto label_1c4310;
        case 0x1c4314u: goto label_1c4314;
        case 0x1c4318u: goto label_1c4318;
        case 0x1c431cu: goto label_1c431c;
        case 0x1c4320u: goto label_1c4320;
        case 0x1c4324u: goto label_1c4324;
        case 0x1c4328u: goto label_1c4328;
        case 0x1c432cu: goto label_1c432c;
        case 0x1c4330u: goto label_1c4330;
        case 0x1c4334u: goto label_1c4334;
        case 0x1c4338u: goto label_1c4338;
        case 0x1c433cu: goto label_1c433c;
        case 0x1c4340u: goto label_1c4340;
        case 0x1c4344u: goto label_1c4344;
        case 0x1c4348u: goto label_1c4348;
        case 0x1c434cu: goto label_1c434c;
        case 0x1c4350u: goto label_1c4350;
        case 0x1c4354u: goto label_1c4354;
        case 0x1c4358u: goto label_1c4358;
        case 0x1c435cu: goto label_1c435c;
        case 0x1c4360u: goto label_1c4360;
        case 0x1c4364u: goto label_1c4364;
        case 0x1c4368u: goto label_1c4368;
        case 0x1c436cu: goto label_1c436c;
        case 0x1c4370u: goto label_1c4370;
        case 0x1c4374u: goto label_1c4374;
        case 0x1c4378u: goto label_1c4378;
        case 0x1c437cu: goto label_1c437c;
        case 0x1c4380u: goto label_1c4380;
        case 0x1c4384u: goto label_1c4384;
        case 0x1c4388u: goto label_1c4388;
        case 0x1c438cu: goto label_1c438c;
        case 0x1c4390u: goto label_1c4390;
        case 0x1c4394u: goto label_1c4394;
        case 0x1c4398u: goto label_1c4398;
        case 0x1c439cu: goto label_1c439c;
        case 0x1c43a0u: goto label_1c43a0;
        case 0x1c43a4u: goto label_1c43a4;
        case 0x1c43a8u: goto label_1c43a8;
        case 0x1c43acu: goto label_1c43ac;
        case 0x1c43b0u: goto label_1c43b0;
        case 0x1c43b4u: goto label_1c43b4;
        case 0x1c43b8u: goto label_1c43b8;
        case 0x1c43bcu: goto label_1c43bc;
        case 0x1c43c0u: goto label_1c43c0;
        case 0x1c43c4u: goto label_1c43c4;
        case 0x1c43c8u: goto label_1c43c8;
        case 0x1c43ccu: goto label_1c43cc;
        case 0x1c43d0u: goto label_1c43d0;
        case 0x1c43d4u: goto label_1c43d4;
        case 0x1c43d8u: goto label_1c43d8;
        case 0x1c43dcu: goto label_1c43dc;
        case 0x1c43e0u: goto label_1c43e0;
        case 0x1c43e4u: goto label_1c43e4;
        case 0x1c43e8u: goto label_1c43e8;
        case 0x1c43ecu: goto label_1c43ec;
        case 0x1c43f0u: goto label_1c43f0;
        case 0x1c43f4u: goto label_1c43f4;
        case 0x1c43f8u: goto label_1c43f8;
        case 0x1c43fcu: goto label_1c43fc;
        case 0x1c4400u: goto label_1c4400;
        case 0x1c4404u: goto label_1c4404;
        case 0x1c4408u: goto label_1c4408;
        case 0x1c440cu: goto label_1c440c;
        case 0x1c4410u: goto label_1c4410;
        case 0x1c4414u: goto label_1c4414;
        case 0x1c4418u: goto label_1c4418;
        case 0x1c441cu: goto label_1c441c;
        case 0x1c4420u: goto label_1c4420;
        case 0x1c4424u: goto label_1c4424;
        case 0x1c4428u: goto label_1c4428;
        case 0x1c442cu: goto label_1c442c;
        case 0x1c4430u: goto label_1c4430;
        case 0x1c4434u: goto label_1c4434;
        case 0x1c4438u: goto label_1c4438;
        case 0x1c443cu: goto label_1c443c;
        case 0x1c4440u: goto label_1c4440;
        case 0x1c4444u: goto label_1c4444;
        case 0x1c4448u: goto label_1c4448;
        case 0x1c444cu: goto label_1c444c;
        case 0x1c4450u: goto label_1c4450;
        case 0x1c4454u: goto label_1c4454;
        case 0x1c4458u: goto label_1c4458;
        case 0x1c445cu: goto label_1c445c;
        case 0x1c4460u: goto label_1c4460;
        case 0x1c4464u: goto label_1c4464;
        case 0x1c4468u: goto label_1c4468;
        case 0x1c446cu: goto label_1c446c;
        case 0x1c4470u: goto label_1c4470;
        case 0x1c4474u: goto label_1c4474;
        case 0x1c4478u: goto label_1c4478;
        case 0x1c447cu: goto label_1c447c;
        case 0x1c4480u: goto label_1c4480;
        case 0x1c4484u: goto label_1c4484;
        case 0x1c4488u: goto label_1c4488;
        case 0x1c448cu: goto label_1c448c;
        case 0x1c4490u: goto label_1c4490;
        case 0x1c4494u: goto label_1c4494;
        case 0x1c4498u: goto label_1c4498;
        case 0x1c449cu: goto label_1c449c;
        case 0x1c44a0u: goto label_1c44a0;
        case 0x1c44a4u: goto label_1c44a4;
        case 0x1c44a8u: goto label_1c44a8;
        case 0x1c44acu: goto label_1c44ac;
        case 0x1c44b0u: goto label_1c44b0;
        case 0x1c44b4u: goto label_1c44b4;
        case 0x1c44b8u: goto label_1c44b8;
        case 0x1c44bcu: goto label_1c44bc;
        case 0x1c44c0u: goto label_1c44c0;
        case 0x1c44c4u: goto label_1c44c4;
        case 0x1c44c8u: goto label_1c44c8;
        case 0x1c44ccu: goto label_1c44cc;
        case 0x1c44d0u: goto label_1c44d0;
        case 0x1c44d4u: goto label_1c44d4;
        case 0x1c44d8u: goto label_1c44d8;
        case 0x1c44dcu: goto label_1c44dc;
        case 0x1c44e0u: goto label_1c44e0;
        case 0x1c44e4u: goto label_1c44e4;
        case 0x1c44e8u: goto label_1c44e8;
        case 0x1c44ecu: goto label_1c44ec;
        case 0x1c44f0u: goto label_1c44f0;
        case 0x1c44f4u: goto label_1c44f4;
        case 0x1c44f8u: goto label_1c44f8;
        case 0x1c44fcu: goto label_1c44fc;
        case 0x1c4500u: goto label_1c4500;
        case 0x1c4504u: goto label_1c4504;
        case 0x1c4508u: goto label_1c4508;
        case 0x1c450cu: goto label_1c450c;
        case 0x1c4510u: goto label_1c4510;
        case 0x1c4514u: goto label_1c4514;
        case 0x1c4518u: goto label_1c4518;
        case 0x1c451cu: goto label_1c451c;
        case 0x1c4520u: goto label_1c4520;
        case 0x1c4524u: goto label_1c4524;
        case 0x1c4528u: goto label_1c4528;
        case 0x1c452cu: goto label_1c452c;
        case 0x1c4530u: goto label_1c4530;
        case 0x1c4534u: goto label_1c4534;
        case 0x1c4538u: goto label_1c4538;
        case 0x1c453cu: goto label_1c453c;
        case 0x1c4540u: goto label_1c4540;
        case 0x1c4544u: goto label_1c4544;
        case 0x1c4548u: goto label_1c4548;
        case 0x1c454cu: goto label_1c454c;
        case 0x1c4550u: goto label_1c4550;
        case 0x1c4554u: goto label_1c4554;
        case 0x1c4558u: goto label_1c4558;
        case 0x1c455cu: goto label_1c455c;
        case 0x1c4560u: goto label_1c4560;
        case 0x1c4564u: goto label_1c4564;
        case 0x1c4568u: goto label_1c4568;
        case 0x1c456cu: goto label_1c456c;
        case 0x1c4570u: goto label_1c4570;
        case 0x1c4574u: goto label_1c4574;
        case 0x1c4578u: goto label_1c4578;
        case 0x1c457cu: goto label_1c457c;
        case 0x1c4580u: goto label_1c4580;
        case 0x1c4584u: goto label_1c4584;
        case 0x1c4588u: goto label_1c4588;
        case 0x1c458cu: goto label_1c458c;
        case 0x1c4590u: goto label_1c4590;
        case 0x1c4594u: goto label_1c4594;
        case 0x1c4598u: goto label_1c4598;
        case 0x1c459cu: goto label_1c459c;
        case 0x1c45a0u: goto label_1c45a0;
        case 0x1c45a4u: goto label_1c45a4;
        case 0x1c45a8u: goto label_1c45a8;
        case 0x1c45acu: goto label_1c45ac;
        case 0x1c45b0u: goto label_1c45b0;
        case 0x1c45b4u: goto label_1c45b4;
        case 0x1c45b8u: goto label_1c45b8;
        case 0x1c45bcu: goto label_1c45bc;
        case 0x1c45c0u: goto label_1c45c0;
        case 0x1c45c4u: goto label_1c45c4;
        case 0x1c45c8u: goto label_1c45c8;
        case 0x1c45ccu: goto label_1c45cc;
        case 0x1c45d0u: goto label_1c45d0;
        case 0x1c45d4u: goto label_1c45d4;
        case 0x1c45d8u: goto label_1c45d8;
        case 0x1c45dcu: goto label_1c45dc;
        case 0x1c45e0u: goto label_1c45e0;
        case 0x1c45e4u: goto label_1c45e4;
        case 0x1c45e8u: goto label_1c45e8;
        case 0x1c45ecu: goto label_1c45ec;
        case 0x1c45f0u: goto label_1c45f0;
        case 0x1c45f4u: goto label_1c45f4;
        case 0x1c45f8u: goto label_1c45f8;
        case 0x1c45fcu: goto label_1c45fc;
        case 0x1c4600u: goto label_1c4600;
        case 0x1c4604u: goto label_1c4604;
        case 0x1c4608u: goto label_1c4608;
        case 0x1c460cu: goto label_1c460c;
        case 0x1c4610u: goto label_1c4610;
        case 0x1c4614u: goto label_1c4614;
        case 0x1c4618u: goto label_1c4618;
        case 0x1c461cu: goto label_1c461c;
        case 0x1c4620u: goto label_1c4620;
        case 0x1c4624u: goto label_1c4624;
        case 0x1c4628u: goto label_1c4628;
        case 0x1c462cu: goto label_1c462c;
        case 0x1c4630u: goto label_1c4630;
        case 0x1c4634u: goto label_1c4634;
        case 0x1c4638u: goto label_1c4638;
        case 0x1c463cu: goto label_1c463c;
        case 0x1c4640u: goto label_1c4640;
        case 0x1c4644u: goto label_1c4644;
        case 0x1c4648u: goto label_1c4648;
        case 0x1c464cu: goto label_1c464c;
        case 0x1c4650u: goto label_1c4650;
        case 0x1c4654u: goto label_1c4654;
        case 0x1c4658u: goto label_1c4658;
        case 0x1c465cu: goto label_1c465c;
        case 0x1c4660u: goto label_1c4660;
        case 0x1c4664u: goto label_1c4664;
        case 0x1c4668u: goto label_1c4668;
        case 0x1c466cu: goto label_1c466c;
        case 0x1c4670u: goto label_1c4670;
        case 0x1c4674u: goto label_1c4674;
        case 0x1c4678u: goto label_1c4678;
        case 0x1c467cu: goto label_1c467c;
        case 0x1c4680u: goto label_1c4680;
        case 0x1c4684u: goto label_1c4684;
        case 0x1c4688u: goto label_1c4688;
        case 0x1c468cu: goto label_1c468c;
        case 0x1c4690u: goto label_1c4690;
        case 0x1c4694u: goto label_1c4694;
        case 0x1c4698u: goto label_1c4698;
        case 0x1c469cu: goto label_1c469c;
        case 0x1c46a0u: goto label_1c46a0;
        case 0x1c46a4u: goto label_1c46a4;
        case 0x1c46a8u: goto label_1c46a8;
        case 0x1c46acu: goto label_1c46ac;
        case 0x1c46b0u: goto label_1c46b0;
        case 0x1c46b4u: goto label_1c46b4;
        case 0x1c46b8u: goto label_1c46b8;
        case 0x1c46bcu: goto label_1c46bc;
        case 0x1c46c0u: goto label_1c46c0;
        case 0x1c46c4u: goto label_1c46c4;
        case 0x1c46c8u: goto label_1c46c8;
        case 0x1c46ccu: goto label_1c46cc;
        case 0x1c46d0u: goto label_1c46d0;
        case 0x1c46d4u: goto label_1c46d4;
        case 0x1c46d8u: goto label_1c46d8;
        case 0x1c46dcu: goto label_1c46dc;
        case 0x1c46e0u: goto label_1c46e0;
        case 0x1c46e4u: goto label_1c46e4;
        case 0x1c46e8u: goto label_1c46e8;
        case 0x1c46ecu: goto label_1c46ec;
        case 0x1c46f0u: goto label_1c46f0;
        case 0x1c46f4u: goto label_1c46f4;
        case 0x1c46f8u: goto label_1c46f8;
        case 0x1c46fcu: goto label_1c46fc;
        case 0x1c4700u: goto label_1c4700;
        case 0x1c4704u: goto label_1c4704;
        case 0x1c4708u: goto label_1c4708;
        case 0x1c470cu: goto label_1c470c;
        case 0x1c4710u: goto label_1c4710;
        case 0x1c4714u: goto label_1c4714;
        case 0x1c4718u: goto label_1c4718;
        case 0x1c471cu: goto label_1c471c;
        case 0x1c4720u: goto label_1c4720;
        case 0x1c4724u: goto label_1c4724;
        case 0x1c4728u: goto label_1c4728;
        case 0x1c472cu: goto label_1c472c;
        case 0x1c4730u: goto label_1c4730;
        case 0x1c4734u: goto label_1c4734;
        case 0x1c4738u: goto label_1c4738;
        case 0x1c473cu: goto label_1c473c;
        case 0x1c4740u: goto label_1c4740;
        case 0x1c4744u: goto label_1c4744;
        case 0x1c4748u: goto label_1c4748;
        case 0x1c474cu: goto label_1c474c;
        case 0x1c4750u: goto label_1c4750;
        case 0x1c4754u: goto label_1c4754;
        case 0x1c4758u: goto label_1c4758;
        case 0x1c475cu: goto label_1c475c;
        case 0x1c4760u: goto label_1c4760;
        case 0x1c4764u: goto label_1c4764;
        case 0x1c4768u: goto label_1c4768;
        case 0x1c476cu: goto label_1c476c;
        case 0x1c4770u: goto label_1c4770;
        case 0x1c4774u: goto label_1c4774;
        case 0x1c4778u: goto label_1c4778;
        case 0x1c477cu: goto label_1c477c;
        case 0x1c4780u: goto label_1c4780;
        case 0x1c4784u: goto label_1c4784;
        case 0x1c4788u: goto label_1c4788;
        case 0x1c478cu: goto label_1c478c;
        case 0x1c4790u: goto label_1c4790;
        case 0x1c4794u: goto label_1c4794;
        case 0x1c4798u: goto label_1c4798;
        case 0x1c479cu: goto label_1c479c;
        case 0x1c47a0u: goto label_1c47a0;
        case 0x1c47a4u: goto label_1c47a4;
        case 0x1c47a8u: goto label_1c47a8;
        case 0x1c47acu: goto label_1c47ac;
        case 0x1c47b0u: goto label_1c47b0;
        case 0x1c47b4u: goto label_1c47b4;
        case 0x1c47b8u: goto label_1c47b8;
        case 0x1c47bcu: goto label_1c47bc;
        case 0x1c47c0u: goto label_1c47c0;
        case 0x1c47c4u: goto label_1c47c4;
        case 0x1c47c8u: goto label_1c47c8;
        case 0x1c47ccu: goto label_1c47cc;
        case 0x1c47d0u: goto label_1c47d0;
        case 0x1c47d4u: goto label_1c47d4;
        case 0x1c47d8u: goto label_1c47d8;
        case 0x1c47dcu: goto label_1c47dc;
        case 0x1c47e0u: goto label_1c47e0;
        case 0x1c47e4u: goto label_1c47e4;
        case 0x1c47e8u: goto label_1c47e8;
        case 0x1c47ecu: goto label_1c47ec;
        case 0x1c47f0u: goto label_1c47f0;
        case 0x1c47f4u: goto label_1c47f4;
        case 0x1c47f8u: goto label_1c47f8;
        case 0x1c47fcu: goto label_1c47fc;
        case 0x1c4800u: goto label_1c4800;
        case 0x1c4804u: goto label_1c4804;
        case 0x1c4808u: goto label_1c4808;
        case 0x1c480cu: goto label_1c480c;
        case 0x1c4810u: goto label_1c4810;
        case 0x1c4814u: goto label_1c4814;
        case 0x1c4818u: goto label_1c4818;
        case 0x1c481cu: goto label_1c481c;
        case 0x1c4820u: goto label_1c4820;
        case 0x1c4824u: goto label_1c4824;
        case 0x1c4828u: goto label_1c4828;
        case 0x1c482cu: goto label_1c482c;
        case 0x1c4830u: goto label_1c4830;
        case 0x1c4834u: goto label_1c4834;
        case 0x1c4838u: goto label_1c4838;
        case 0x1c483cu: goto label_1c483c;
        case 0x1c4840u: goto label_1c4840;
        case 0x1c4844u: goto label_1c4844;
        default: return;
    }

label_1c4078:
    if (ctx->pc == 0x1C4078u) {
        ctx->pc = 0x1C4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4074u;
        // 0x1c4078: 0x24190034  addiu       $t9, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C407Cu;
        goto label_1c407c;
    }
    ctx->pc = 0x1C4074u;
    {
        const bool branch_taken_0x1c4074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4074u;
        // 0x1c4078: 0x24190034  addiu       $t9, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4074) {
            ctx->pc = 0x1C4084u;
            goto label_1c4084;
        }
    }
    ctx->pc = 0x1C407Cu;
label_1c407c:
    // 0x1c407c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c4080:
    if (ctx->pc == 0x1C4080u) {
        ctx->pc = 0x1C4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C407Cu;
        // 0x1c4080: 0x2419005a  addiu       $t9, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4084u;
        goto label_1c4084;
    }
    ctx->pc = 0x1C407Cu;
    {
        const bool branch_taken_0x1c407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C407Cu;
        // 0x1c4080: 0x2419005a  addiu       $t9, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c407c) {
            ctx->pc = 0x1C40B0u;
            goto label_1c40b0;
        }
    }
    ctx->pc = 0x1C4084u;
label_1c4084:
    // 0x1c4084: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c4088:
    if (ctx->pc == 0x1C4088u) {
        ctx->pc = 0x1C4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4084u;
        // 0x1c4088: 0x8c890008  lw          $t1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C408Cu;
        goto label_1c408c;
    }
    ctx->pc = 0x1C4084u;
    {
        const bool branch_taken_0x1c4084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4084u;
        // 0x1c4088: 0x8c890008  lw          $t1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4084) {
            ctx->pc = 0x1C40B4u;
            goto label_1c40b4;
        }
    }
    ctx->pc = 0x1C408Cu;
label_1c408c:
    // 0x1c408c: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x1c408cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1c4090:
    // 0x1c4090: 0x290303e8  slti        $v1, $t0, 0x3E8
    ctx->pc = 0x1c4090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)1000) ? 1 : 0);
label_1c4094:
    // 0x1c4094: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1c4098:
    if (ctx->pc == 0x1C4098u) {
        ctx->pc = 0x1C4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4094u;
        // 0x1c4098: 0x29030064  slti        $v1, $t0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C409Cu;
        goto label_1c409c;
    }
    ctx->pc = 0x1C4094u;
    {
        const bool branch_taken_0x1c4094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4094u;
        // 0x1c4098: 0x29030064  slti        $v1, $t0, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4094) {
            ctx->pc = 0x1C40A4u;
            goto label_1c40a4;
        }
    }
    ctx->pc = 0x1C409Cu;
label_1c409c:
    // 0x1c409c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c40a0:
    if (ctx->pc == 0x1C40A0u) {
        ctx->pc = 0x1C40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C409Cu;
        // 0x1c40a0: 0x24190050  addiu       $t9, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40A4u;
        goto label_1c40a4;
    }
    ctx->pc = 0x1C409Cu;
    {
        const bool branch_taken_0x1c409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C409Cu;
        // 0x1c40a0: 0x24190050  addiu       $t9, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c409c) {
            ctx->pc = 0x1C40B0u;
            goto label_1c40b0;
        }
    }
    ctx->pc = 0x1C40A4u;
label_1c40a4:
    // 0x1c40a4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1c40a8:
    if (ctx->pc == 0x1C40A8u) {
        ctx->pc = 0x1C40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40A4u;
        // 0x1c40a8: 0x2419fff0  addiu       $t9, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40ACu;
        goto label_1c40ac;
    }
    ctx->pc = 0x1C40A4u;
    {
        const bool branch_taken_0x1c40a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40A4u;
        // 0x1c40a8: 0x2419fff0  addiu       $t9, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40a4) {
            ctx->pc = 0x1C40B0u;
            goto label_1c40b0;
        }
    }
    ctx->pc = 0x1C40ACu;
label_1c40ac:
    // 0x1c40ac: 0x24190020  addiu       $t9, $zero, 0x20
    ctx->pc = 0x1c40acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c40b0:
    // 0x1c40b0: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x1c40b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c40b4:
    // 0x1c40b4: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x1c40b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
label_1c40b8:
    // 0x1c40b8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1c40bc:
    if (ctx->pc == 0x1C40BCu) {
        ctx->pc = 0x1C40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40B8u;
        // 0x1c40bc: 0x29210011  slti        $at, $t1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40C0u;
        goto label_1c40c0;
    }
    ctx->pc = 0x1C40B8u;
    {
        const bool branch_taken_0x1c40b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40B8u;
        // 0x1c40bc: 0x29210011  slti        $at, $t1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40b8) {
            ctx->pc = 0x1C40CCu;
            goto label_1c40cc;
        }
    }
    ctx->pc = 0x1C40C0u;
label_1c40c0:
    // 0x1c40c0: 0x9c100  sll         $t8, $t1, 4
    ctx->pc = 0x1c40c0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1c40c4:
    // 0x1c40c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c40c8:
    if (ctx->pc == 0x1C40C8u) {
        ctx->pc = 0x1C40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40C4u;
        // 0x1c40c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40CCu;
        goto label_1c40cc;
    }
    ctx->pc = 0x1C40C4u;
    {
        const bool branch_taken_0x1c40c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40C4u;
        // 0x1c40c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40c4) {
            ctx->pc = 0x1C40F0u;
            goto label_1c40f0;
        }
    }
    ctx->pc = 0x1C40CCu;
label_1c40cc:
    // 0x1c40cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1c40d0:
    if (ctx->pc == 0x1C40D0u) {
        ctx->pc = 0x1C40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40CCu;
        // 0x1c40d0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40D4u;
        goto label_1c40d4;
    }
    ctx->pc = 0x1C40CCu;
    {
        const bool branch_taken_0x1c40cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40CCu;
        // 0x1c40d0: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40cc) {
            ctx->pc = 0x1C40E0u;
            goto label_1c40e0;
        }
    }
    ctx->pc = 0x1C40D4u;
label_1c40d4:
    // 0x1c40d4: 0x24180080  addiu       $t8, $zero, 0x80
    ctx->pc = 0x1c40d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c40d8:
    // 0x1c40d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c40dc:
    if (ctx->pc == 0x1C40DCu) {
        ctx->pc = 0x1C40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40D8u;
        // 0x1c40dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C40E0u;
        goto label_1c40e0;
    }
    ctx->pc = 0x1C40D8u;
    {
        const bool branch_taken_0x1c40d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C40D8u;
        // 0x1c40dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40d8) {
            ctx->pc = 0x1C40F0u;
            goto label_1c40f0;
        }
    }
    ctx->pc = 0x1C40E0u;
label_1c40e0:
    // 0x1c40e0: 0x2523fff0  addiu       $v1, $t1, -0x10
    ctx->pc = 0x1c40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
label_1c40e4:
    // 0x1c40e4: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1c40e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1c40e8:
    // 0x1c40e8: 0x348c0  sll         $t1, $v1, 3
    ctx->pc = 0x1c40e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c40ec:
    // 0x1c40ec: 0x8c100  sll         $t8, $t0, 4
    ctx->pc = 0x1c40ecu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1c40f0:
    // 0x1c40f0: 0x240f03e8  addiu       $t7, $zero, 0x3E8
    ctx->pc = 0x1c40f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1c40f4:
    // 0x1c40f4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1c40f4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c40f8:
    // 0x1c40f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c40f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c40fc:
    // 0x1c40fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c40fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4100:
    // 0x1c4100: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c4100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4104:
    // 0x1c4104: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1c4104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1c4108:
    // 0x1c4108: 0x9a040  sll         $s4, $t1, 1
    ctx->pc = 0x1c4108u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1c410c:
    // 0x1c410c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c410cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c4110:
    // 0x1c4110: 0x9a880  sll         $s5, $t1, 2
    ctx->pc = 0x1c4110u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1c4114:
    // 0x1c4114: 0x36940  sll         $t5, $v1, 5
    ctx->pc = 0x1c4114u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1c4118:
    // 0x1c4118: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1c4118u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c411c:
    // 0x1c411c: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x1c411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1c4120:
    // 0x1c4120: 0x241e0408  addiu       $fp, $zero, 0x408
    ctx->pc = 0x1c4120u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
label_1c4124:
    // 0x1c4124: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1c4124u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_1c4128:
    // 0x1c4128: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1c4128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_1c412c:
    // 0x1c412c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1c412cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_1c4130:
    // 0x1c4130: 0x8c8a000c  lw          $t2, 0xC($a0)
    ctx->pc = 0x1c4130u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1c4134:
    // 0x1c4134: 0xb14821  addu        $t1, $a1, $s1
    ctx->pc = 0x1c4134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1c4138:
    // 0x1c4138: 0x25300010  addiu       $s0, $t1, 0x10
    ctx->pc = 0x1c4138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_1c413c:
    // 0x1c413c: 0x25e9ffff  addiu       $t1, $t7, -0x1
    ctx->pc = 0x1c413cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_1c4140:
    // 0x1c4140: 0x12a082a  slt         $at, $t1, $t2
    ctx->pc = 0x1c4140u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1c4144:
    // 0x1c4144: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1c4148:
    if (ctx->pc == 0x1C4148u) {
        ctx->pc = 0x1C4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4144u;
        // 0x1c4148: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C414Cu;
        goto label_1c414c;
    }
    ctx->pc = 0x1C4144u;
    {
        const bool branch_taken_0x1c4144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4144u;
        // 0x1c4148: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4144) {
            ctx->pc = 0x1C4174u;
            goto label_1c4174;
        }
    }
    ctx->pc = 0x1C414Cu;
label_1c414c:
    // 0x1c414c: 0x14f001a  div         $zero, $t2, $t7
    ctx->pc = 0x1c414cu;
    { int32_t divisor = GPR_S32(ctx, 15);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c4150:
    // 0x1c4150: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x1c4150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c4154:
    // 0x1c4154: 0x0  nop
    ctx->pc = 0x1c4154u;
    // NOP
label_1c4158:
    // 0x1c4158: 0x5012  mflo        $t2
    ctx->pc = 0x1c4158u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_1c415c:
    // 0x1c415c: 0x149001a  div         $zero, $t2, $t1
    ctx->pc = 0x1c415cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c4160:
    // 0x1c4160: 0x0  nop
    ctx->pc = 0x1c4160u;
    // NOP
label_1c4164:
    // 0x1c4164: 0x0  nop
    ctx->pc = 0x1c4164u;
    // NOP
label_1c4168:
    // 0x1c4168: 0xb010  mfhi        $s6
    ctx->pc = 0x1c4168u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_1c416c:
    // 0x1c416c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c4170:
    if (ctx->pc == 0x1C4170u) {
        ctx->pc = 0x1C4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C416Cu;
        // 0x1c4170: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4174u;
        goto label_1c4174;
    }
    ctx->pc = 0x1C416Cu;
    {
        const bool branch_taken_0x1c416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C416Cu;
        // 0x1c4170: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c416c) {
            ctx->pc = 0x1C4188u;
            goto label_1c4188;
        }
    }
    ctx->pc = 0x1C4174u;
label_1c4174:
    // 0x1c4174: 0x15c90003  bne         $t6, $t1, . + 4 + (0x3 << 2)
label_1c4178:
    if (ctx->pc == 0x1C4178u) {
        ctx->pc = 0x1C4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4174u;
        // 0x1c4178: 0x2416000a  addiu       $s6, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C417Cu;
        goto label_1c417c;
    }
    ctx->pc = 0x1C4174u;
    {
        const bool branch_taken_0x1c4174 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 9));
        ctx->pc = 0x1C4178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4174u;
        // 0x1c4178: 0x2416000a  addiu       $s6, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4174) {
            ctx->pc = 0x1C4184u;
            goto label_1c4184;
        }
    }
    ctx->pc = 0x1C417Cu;
label_1c417c:
    // 0x1c417c: 0x10000001  b           . + 4 + (0x1 << 2)
label_1c4180:
    if (ctx->pc == 0x1C4180u) {
        ctx->pc = 0x1C4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C417Cu;
        // 0x1c4180: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4184u;
        goto label_1c4184;
    }
    ctx->pc = 0x1C417Cu;
    {
        const bool branch_taken_0x1c417c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C417Cu;
        // 0x1c4180: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c417c) {
            ctx->pc = 0x1C4184u;
            goto label_1c4184;
        }
    }
    ctx->pc = 0x1C4184u;
label_1c4184:
    // 0x1c4184: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x1c4184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c4188:
    // 0x1c4188: 0x16c9000a  bne         $s6, $t1, . + 4 + (0xA << 2)
label_1c418c:
    if (ctx->pc == 0x1C418Cu) {
        ctx->pc = 0x1C4190u;
        goto label_1c4190;
    }
    ctx->pc = 0x1C4188u;
    {
        const bool branch_taken_0x1c4188 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 9));
        if (branch_taken_0x1c4188) {
            ctx->pc = 0x1C41B4u;
            goto label_1c41b4;
        }
    }
    ctx->pc = 0x1C4190u;
label_1c4190:
    // 0x1c4190: 0xa6000082  sh          $zero, 0x82($s0)
    ctx->pc = 0x1c4190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 0));
label_1c4194:
    // 0x1c4194: 0xa6000080  sh          $zero, 0x80($s0)
    ctx->pc = 0x1c4194u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 0));
label_1c4198:
    // 0x1c4198: 0xa600009a  sh          $zero, 0x9A($s0)
    ctx->pc = 0x1c4198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 0));
label_1c419c:
    // 0x1c419c: 0xa6000098  sh          $zero, 0x98($s0)
    ctx->pc = 0x1c419cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
label_1c41a0:
    // 0x1c41a0: 0xa60000b2  sh          $zero, 0xB2($s0)
    ctx->pc = 0x1c41a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 178), (uint16_t)GPR_U32(ctx, 0));
label_1c41a4:
    // 0x1c41a4: 0xa60000b0  sh          $zero, 0xB0($s0)
    ctx->pc = 0x1c41a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 176), (uint16_t)GPR_U32(ctx, 0));
label_1c41a8:
    // 0x1c41a8: 0xa60000ca  sh          $zero, 0xCA($s0)
    ctx->pc = 0x1c41a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 202), (uint16_t)GPR_U32(ctx, 0));
label_1c41ac:
    // 0x1c41ac: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1c41b0:
    if (ctx->pc == 0x1C41B0u) {
        ctx->pc = 0x1C41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41ACu;
        // 0x1c41b0: 0xa60000c8  sh          $zero, 0xC8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C41B4u;
        goto label_1c41b4;
    }
    ctx->pc = 0x1C41ACu;
    {
        const bool branch_taken_0x1c41ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41ACu;
        // 0x1c41b0: 0xa60000c8  sh          $zero, 0xC8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41ac) {
            ctx->pc = 0x1C42A8u;
            goto label_1c42a8;
        }
    }
    ctx->pc = 0x1C41B4u;
label_1c41b4:
    // 0x1c41b4: 0x0  nop
    ctx->pc = 0x1c41b4u;
    // NOP
label_1c41b8:
    // 0x1c41b8: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_1c41bc:
    if (ctx->pc == 0x1C41BCu) {
        ctx->pc = 0x1C41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41B8u;
        // 0x1c41bc: 0x3324821  addu        $t1, $t9, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C41C0u;
        goto label_1c41c0;
    }
    ctx->pc = 0x1C41B8u;
    {
        const bool branch_taken_0x1c41b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41B8u;
        // 0x1c41bc: 0x3324821  addu        $t1, $t9, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41b8) {
            ctx->pc = 0x1C41D0u;
            goto label_1c41d0;
        }
    }
    ctx->pc = 0x1C41C0u;
label_1c41c0:
    // 0x1c41c0: 0x25ab0023  addiu       $t3, $t5, 0x23
    ctx->pc = 0x1c41c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 35));
label_1c41c4:
    // 0x1c41c4: 0x252c0099  addiu       $t4, $t1, 0x99
    ctx->pc = 0x1c41c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 153));
label_1c41c8:
    // 0x1c41c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c41cc:
    if (ctx->pc == 0x1C41CCu) {
        ctx->pc = 0x1C41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41C8u;
        // 0x1c41cc: 0x256a0099  addiu       $t2, $t3, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 153));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C41D0u;
        goto label_1c41d0;
    }
    ctx->pc = 0x1C41C8u;
    {
        const bool branch_taken_0x1c41c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41C8u;
        // 0x1c41cc: 0x256a0099  addiu       $t2, $t3, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41c8) {
            ctx->pc = 0x1C41E0u;
            goto label_1c41e0;
        }
    }
    ctx->pc = 0x1C41D0u;
label_1c41d0:
    // 0x1c41d0: 0x3334821  addu        $t1, $t9, $s3
    ctx->pc = 0x1c41d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 19)));
label_1c41d4:
    // 0x1c41d4: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1c41d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c41d8:
    // 0x1c41d8: 0x252c00c0  addiu       $t4, $t1, 0xC0
    ctx->pc = 0x1c41d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 192));
label_1c41dc:
    // 0x1c41dc: 0x240a0140  addiu       $t2, $zero, 0x140
    ctx->pc = 0x1c41dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1c41e0:
    // 0x1c41e0: 0x1344821  addu        $t1, $t1, $s4
    ctx->pc = 0x1c41e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
label_1c41e4:
    // 0x1c41e4: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1c41e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1c41e8:
    // 0x1c41e8: 0x1946023  subu        $t4, $t4, $s4
    ctx->pc = 0x1c41e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 20)));
label_1c41ec:
    // 0x1c41ec: 0x25296c00  addiu       $t1, $t1, 0x6C00
    ctx->pc = 0x1c41ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
label_1c41f0:
    // 0x1c41f0: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x1c41f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_1c41f4:
    // 0x1c41f4: 0xa60900b0  sh          $t1, 0xB0($s0)
    ctx->pc = 0x1c41f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 176), (uint16_t)GPR_U32(ctx, 9));
label_1c41f8:
    // 0x1c41f8: 0x1755823  subu        $t3, $t3, $s5
    ctx->pc = 0x1c41f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 21)));
label_1c41fc:
    // 0x1c41fc: 0x258c6c00  addiu       $t4, $t4, 0x6C00
    ctx->pc = 0x1c41fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 27648));
label_1c4200:
    // 0x1c4200: 0xa6090080  sh          $t1, 0x80($s0)
    ctx->pc = 0x1c4200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 9));
label_1c4204:
    // 0x1c4204: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x1c4204u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_1c4208:
    // 0x1c4208: 0xa60c00c8  sh          $t4, 0xC8($s0)
    ctx->pc = 0x1c4208u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 12));
label_1c420c:
    // 0x1c420c: 0x1555021  addu        $t2, $t2, $s5
    ctx->pc = 0x1c420cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
label_1c4210:
    // 0x1c4210: 0x256b7900  addiu       $t3, $t3, 0x7900
    ctx->pc = 0x1c4210u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
label_1c4214:
    // 0x1c4214: 0xa60c0098  sh          $t4, 0x98($s0)
    ctx->pc = 0x1c4214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 12));
label_1c4218:
    // 0x1c4218: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1c4218u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1c421c:
    // 0x1c421c: 0x16b180  sll         $s6, $s6, 6
    ctx->pc = 0x1c421cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
label_1c4220:
    // 0x1c4220: 0xa60b009a  sh          $t3, 0x9A($s0)
    ctx->pc = 0x1c4220u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 11));
label_1c4224:
    // 0x1c4224: 0x26d60100  addiu       $s6, $s6, 0x100
    ctx->pc = 0x1c4224u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 256));
label_1c4228:
    // 0x1c4228: 0x254a7900  addiu       $t2, $t2, 0x7900
    ctx->pc = 0x1c4228u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30976));
label_1c422c:
    // 0x1c422c: 0xa60b0082  sh          $t3, 0x82($s0)
    ctx->pc = 0x1c422cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 11));
label_1c4230:
    // 0x1c4230: 0x164900  sll         $t1, $s6, 4
    ctx->pc = 0x1c4230u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_1c4234:
    // 0x1c4234: 0xa60a00ca  sh          $t2, 0xCA($s0)
    ctx->pc = 0x1c4234u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 202), (uint16_t)GPR_U32(ctx, 10));
label_1c4238:
    // 0x1c4238: 0x16603c  dsll32      $t4, $s6, 0
    ctx->pc = 0x1c4238u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 22) << (32 + 0));
label_1c423c:
    // 0x1c423c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1c423cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_1c4240:
    // 0x1c4240: 0x26d70040  addiu       $s7, $s6, 0x40
    ctx->pc = 0x1c4240u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_1c4244:
    // 0x1c4244: 0xc5938  dsll        $t3, $t4, 4
    ctx->pc = 0x1c4244u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 4);
label_1c4248:
    // 0x1c4248: 0xa60a00b2  sh          $t2, 0xB2($s0)
    ctx->pc = 0x1c4248u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 178), (uint16_t)GPR_U32(ctx, 10));
label_1c424c:
    // 0x1c424c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1c424cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_1c4250:
    // 0x1c4250: 0x175100  sll         $t2, $s7, 4
    ctx->pc = 0x1c4250u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_1c4254:
    // 0x1c4254: 0xa6090078  sh          $t1, 0x78($s0)
    ctx->pc = 0x1c4254u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 9));
label_1c4258:
    // 0x1c4258: 0x26ecffff  addiu       $t4, $s7, -0x1
    ctx->pc = 0x1c4258u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_1c425c:
    // 0x1c425c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x1c425cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_1c4260:
    // 0x1c4260: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x1c4260u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_1c4264:
    // 0x1c4264: 0xa608007a  sh          $t0, 0x7A($s0)
    ctx->pc = 0x1c4264u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 8));
label_1c4268:
    // 0x1c4268: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1c4268u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_1c426c:
    // 0x1c426c: 0xa60a0090  sh          $t2, 0x90($s0)
    ctx->pc = 0x1c426cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 10));
label_1c4270:
    // 0x1c4270: 0x356b000a  ori         $t3, $t3, 0xA
    ctx->pc = 0x1c4270u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)10);
label_1c4274:
    // 0x1c4274: 0xa6080092  sh          $t0, 0x92($s0)
    ctx->pc = 0x1c4274u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 8));
label_1c4278:
    // 0x1c4278: 0xc63b8  dsll        $t4, $t4, 14
    ctx->pc = 0x1c4278u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 14);
label_1c427c:
    // 0x1c427c: 0xa60900a8  sh          $t1, 0xA8($s0)
    ctx->pc = 0x1c427cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 9));
label_1c4280:
    // 0x1c4280: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x1c4280u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_1c4284:
    // 0x1c4284: 0xa61e00aa  sh          $fp, 0xAA($s0)
    ctx->pc = 0x1c4284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 30));
label_1c4288:
    // 0x1c4288: 0x1665825  or          $t3, $t3, $a2
    ctx->pc = 0x1c4288u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
label_1c428c:
    // 0x1c428c: 0xa60a00c0  sh          $t2, 0xC0($s0)
    ctx->pc = 0x1c428cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 10));
label_1c4290:
    // 0x1c4290: 0xa61e00c2  sh          $fp, 0xC2($s0)
    ctx->pc = 0x1c4290u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 30));
label_1c4294:
    // 0x1c4294: 0xfe0b0040  sd          $t3, 0x40($s0)
    ctx->pc = 0x1c4294u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 11));
label_1c4298:
    // 0x1c4298: 0xa2180073  sb          $t8, 0x73($s0)
    ctx->pc = 0x1c4298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 24));
label_1c429c:
    // 0x1c429c: 0xa218008b  sb          $t8, 0x8B($s0)
    ctx->pc = 0x1c429cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 24));
label_1c42a0:
    // 0x1c42a0: 0xa21800a3  sb          $t8, 0xA3($s0)
    ctx->pc = 0x1c42a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 163), (uint8_t)GPR_U32(ctx, 24));
label_1c42a4:
    // 0x1c42a4: 0xa21800bb  sb          $t8, 0xBB($s0)
    ctx->pc = 0x1c42a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 187), (uint8_t)GPR_U32(ctx, 24));
label_1c42a8:
    // 0x1c42a8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1c42a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_1c42ac:
    // 0x1c42ac: 0x6f0018  mult        $zero, $v1, $t7
    ctx->pc = 0x1c42acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c42b0:
    // 0x1c42b0: 0xf5fc2  srl         $t3, $t7, 31
    ctx->pc = 0x1c42b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
label_1c42b4:
    // 0x1c42b4: 0x29c90004  slti        $t1, $t6, 0x4
    ctx->pc = 0x1c42b4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)4) ? 1 : 0);
label_1c42b8:
    // 0x1c42b8: 0x263100d0  addiu       $s1, $s1, 0xD0
    ctx->pc = 0x1c42b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_1c42bc:
    // 0x1c42bc: 0x2652004c  addiu       $s2, $s2, 0x4C
    ctx->pc = 0x1c42bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_1c42c0:
    // 0x1c42c0: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1c42c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1c42c4:
    // 0x1c42c4: 0x5010  mfhi        $t2
    ctx->pc = 0x1c42c4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_1c42c8:
    // 0x1c42c8: 0xa5083  sra         $t2, $t2, 2
    ctx->pc = 0x1c42c8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 2));
label_1c42cc:
    // 0x1c42cc: 0x1520ff98  bnez        $t1, . + 4 + (-0x68 << 2)
label_1c42d0:
    if (ctx->pc == 0x1C42D0u) {
        ctx->pc = 0x1C42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42CCu;
        // 0x1c42d0: 0x14b7821  addu        $t7, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C42D4u;
        goto label_1c42d4;
    }
    ctx->pc = 0x1C42CCu;
    {
        const bool branch_taken_0x1c42cc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42CCu;
        // 0x1c42d0: 0x14b7821  addu        $t7, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42cc) {
            ctx->pc = 0x1C4130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4130;
        }
    }
    ctx->pc = 0x1C42D4u;
label_1c42d4:
    // 0x1c42d4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c42d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c42d8:
    // 0x1c42d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c42d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c42dc:
    // 0x1c42dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c42dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c42e0:
    // 0x1c42e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c42e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c42e4:
    // 0x1c42e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c42e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c42e8:
    // 0x1c42e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c42e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c42ec:
    // 0x1c42ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c42ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c42f0:
    // 0x1c42f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c42f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c42f4:
    // 0x1c42f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c42f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c42f8:
    // 0x1c42f8: 0x3e00008  jr          $ra
label_1c42fc:
    if (ctx->pc == 0x1C42FCu) {
        ctx->pc = 0x1C42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42F8u;
        // 0x1c42fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4300u;
        goto label_1c4300;
    }
    ctx->pc = 0x1C42F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42F8u;
        // 0x1c42fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C42F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4300u;
label_1c4300:
    // 0x1c4300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c4300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1c4304:
    // 0x1c4304: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1c4304u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4308:
    // 0x1c4308: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c4308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1c430c:
    // 0x1c430c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1c4310:
    // 0x1c4310: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c4310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1c4314:
    // 0x1c4314: 0x241703e8  addiu       $s7, $zero, 0x3E8
    ctx->pc = 0x1c4314u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1c4318:
    // 0x1c4318: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c4318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c431c:
    // 0x1c431c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c431cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c4320:
    // 0x1c4320: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c4320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c4324:
    // 0x1c4324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c4324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c4328:
    // 0x1c4328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c432c:
    // 0x1c432c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c432cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c4330:
    // 0x1c4330: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1c4330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_1c4334:
    // 0x1c4334: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x1c4334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
label_1c4338:
    // 0x1c4338: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x1c4338u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c433c:
    // 0x1c433c: 0x346baaab  ori         $t3, $v1, 0xAAAB
    ctx->pc = 0x1c433cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_1c4340:
    // 0x1c4340: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1c4340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c4344:
    // 0x1c4344: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1c4344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1c4348:
    // 0x1c4348: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x1c4348u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c434c:
    // 0x1c434c: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x1c434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1c4350:
    // 0x1c4350: 0x64140  sll         $t0, $a2, 5
    ctx->pc = 0x1c4350u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1c4354:
    // 0x1c4354: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c4354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1c4358:
    // 0x1c4358: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x1c4358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_1c435c:
    // 0x1c435c: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1c435cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_1c4360:
    // 0x1c4360: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x1c4360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_1c4364:
    // 0x1c4364: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x1c4364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_1c4368:
    // 0x1c4368: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1c4368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c436c:
    // 0x1c436c: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x1c436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_1c4370:
    // 0x1c4370: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1c4370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1c4374:
    // 0x1c4374: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1c4378:
    if (ctx->pc == 0x1C4378u) {
        ctx->pc = 0x1C437Cu;
        goto label_1c437c;
    }
    ctx->pc = 0x1C4374u;
    {
        const bool branch_taken_0x1c4374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4374) {
            ctx->pc = 0x1C43A4u;
            goto label_1c43a4;
        }
    }
    ctx->pc = 0x1C437Cu;
label_1c437c:
    // 0x1c437c: 0xd7001a  div         $zero, $a2, $s7
    ctx->pc = 0x1c437cu;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c4380:
    // 0x1c4380: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c4380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c4384:
    // 0x1c4384: 0x0  nop
    ctx->pc = 0x1c4384u;
    // NOP
label_1c4388:
    // 0x1c4388: 0x3012  mflo        $a2
    ctx->pc = 0x1c4388u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_1c438c:
    // 0x1c438c: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x1c438cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c4390:
    // 0x1c4390: 0x0  nop
    ctx->pc = 0x1c4390u;
    // NOP
label_1c4394:
    // 0x1c4394: 0x0  nop
    ctx->pc = 0x1c4394u;
    // NOP
label_1c4398:
    // 0x1c4398: 0xf010  mfhi        $fp
    ctx->pc = 0x1c4398u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_1c439c:
    // 0x1c439c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c43a0:
    if (ctx->pc == 0x1C43A0u) {
        ctx->pc = 0x1C43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C439Cu;
        // 0x1c43a0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43A4u;
        goto label_1c43a4;
    }
    ctx->pc = 0x1C439Cu;
    {
        const bool branch_taken_0x1c439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C439Cu;
        // 0x1c43a0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c439c) {
            ctx->pc = 0x1C43B8u;
            goto label_1c43b8;
        }
    }
    ctx->pc = 0x1C43A4u;
label_1c43a4:
    // 0x1c43a4: 0x15ac0003  bne         $t5, $t4, . + 4 + (0x3 << 2)
label_1c43a8:
    if (ctx->pc == 0x1C43A8u) {
        ctx->pc = 0x1C43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43A4u;
        // 0x1c43a8: 0x241e000a  addiu       $fp, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43ACu;
        goto label_1c43ac;
    }
    ctx->pc = 0x1C43A4u;
    {
        const bool branch_taken_0x1c43a4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 12));
        ctx->pc = 0x1C43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43A4u;
        // 0x1c43a8: 0x241e000a  addiu       $fp, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43a4) {
            ctx->pc = 0x1C43B4u;
            goto label_1c43b4;
        }
    }
    ctx->pc = 0x1C43ACu;
label_1c43ac:
    // 0x1c43ac: 0x10000001  b           . + 4 + (0x1 << 2)
label_1c43b0:
    if (ctx->pc == 0x1C43B0u) {
        ctx->pc = 0x1C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43ACu;
        // 0x1c43b0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43B4u;
        goto label_1c43b4;
    }
    ctx->pc = 0x1C43ACu;
    {
        const bool branch_taken_0x1c43ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43ACu;
        // 0x1c43b0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43ac) {
            ctx->pc = 0x1C43B4u;
            goto label_1c43b4;
        }
    }
    ctx->pc = 0x1C43B4u;
label_1c43b4:
    // 0x1c43b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c43b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c43b8:
    // 0x1c43b8: 0x25a60001  addiu       $a2, $t5, 0x1
    ctx->pc = 0x1c43b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1c43bc:
    // 0x1c43bc: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x1c43bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1c43c0:
    // 0x1c43c0: 0x66c823  subu        $t9, $v1, $a2
    ctx->pc = 0x1c43c0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c43c4:
    // 0x1c43c4: 0x7210003  bgez        $t9, . + 4 + (0x3 << 2)
label_1c43c8:
    if (ctx->pc == 0x1C43C8u) {
        ctx->pc = 0x1C43CCu;
        goto label_1c43cc;
    }
    ctx->pc = 0x1C43C4u;
    {
        const bool branch_taken_0x1c43c4 = (GPR_S32(ctx, 25) >= 0);
        if (branch_taken_0x1c43c4) {
            ctx->pc = 0x1C43D4u;
            goto label_1c43d4;
        }
    }
    ctx->pc = 0x1C43CCu;
label_1c43cc:
    // 0x1c43cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c43d0:
    if (ctx->pc == 0x1C43D0u) {
        ctx->pc = 0x1C43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43CCu;
        // 0x1c43d0: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43D4u;
        goto label_1c43d4;
    }
    ctx->pc = 0x1C43CCu;
    {
        const bool branch_taken_0x1c43cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43CCu;
        // 0x1c43d0: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43cc) {
            ctx->pc = 0x1C43ECu;
            goto label_1c43ec;
        }
    }
    ctx->pc = 0x1C43D4u;
label_1c43d4:
    // 0x1c43d4: 0x0  nop
    ctx->pc = 0x1c43d4u;
    // NOP
label_1c43d8:
    // 0x1c43d8: 0x2b23000c  slti        $v1, $t9, 0xC
    ctx->pc = 0x1c43d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)12) ? 1 : 0);
label_1c43dc:
    // 0x1c43dc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1c43e0:
    if (ctx->pc == 0x1C43E0u) {
        ctx->pc = 0x1C43E4u;
        goto label_1c43e4;
    }
    ctx->pc = 0x1C43DCu;
    {
        const bool branch_taken_0x1c43dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c43dc) {
            ctx->pc = 0x1C43ECu;
            goto label_1c43ec;
        }
    }
    ctx->pc = 0x1C43E4u;
label_1c43e4:
    // 0x1c43e4: 0x2419000c  addiu       $t9, $zero, 0xC
    ctx->pc = 0x1c43e4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c43e8:
    // 0x1c43e8: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x1c43e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c43ec:
    // 0x1c43ec: 0x0  nop
    ctx->pc = 0x1c43ecu;
    // NOP
label_1c43f0:
    // 0x1c43f0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c43f4:
    // 0x1c43f4: 0x791823  subu        $v1, $v1, $t9
    ctx->pc = 0x1c43f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
label_1c43f8:
    // 0x1c43f8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1c43f8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c43fc:
    // 0x1c43fc: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1c43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1c4400:
    // 0x1c4400: 0x1630018  mult        $zero, $t3, $v1
    ctx->pc = 0x1c4400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c4404:
    // 0x1c4404: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x1c4404u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1c4408:
    // 0x1c4408: 0x0  nop
    ctx->pc = 0x1c4408u;
    // NOP
label_1c440c:
    // 0x1c440c: 0x1810  mfhi        $v1
    ctx->pc = 0x1c440cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1c4410:
    // 0x1c4410: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1c4410u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1c4414:
    // 0x1c4414: 0x66c021  addu        $t8, $v1, $a2
    ctx->pc = 0x1c4414u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c4418:
    // 0x1c4418: 0x18d1823  subu        $v1, $t4, $t5
    ctx->pc = 0x1c4418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_1c441c:
    // 0x1c441c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1c441cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c4420:
    // 0x1c4420: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1c4420u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1c4424:
    // 0x1c4424: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1c4424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1c4428:
    // 0x1c4428: 0x694821  addu        $t1, $v1, $t1
    ctx->pc = 0x1c4428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1c442c:
    // 0x1c442c: 0x1e1980  sll         $v1, $fp, 6
    ctx->pc = 0x1c442cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
label_1c4430:
    // 0x1c4430: 0x246f0100  addiu       $t7, $v1, 0x100
    ctx->pc = 0x1c4430u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1c4434:
    // 0x1c4434: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1c4434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1c4438:
    // 0x1c4438: 0xf8100  sll         $s0, $t7, 4
    ctx->pc = 0x1c4438u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_1c443c:
    // 0x1c443c: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x1c443cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_1c4440:
    // 0x1c4440: 0x26160008  addiu       $s6, $s0, 0x8
    ctx->pc = 0x1c4440u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1c4444:
    // 0x1c4444: 0x25e30040  addiu       $v1, $t7, 0x40
    ctx->pc = 0x1c4444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 64));
label_1c4448:
    // 0x1c4448: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x1c4448u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1c444c:
    // 0x1c444c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1c444cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
label_1c4450:
    // 0x1c4450: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c4450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c4454:
    // 0x1c4454: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1c4454u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
label_1c4458:
    // 0x1c4458: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c4458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1c445c:
    // 0x1c445c: 0xf7938  dsll        $t7, $t7, 4
    ctx->pc = 0x1c445cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 4);
label_1c4460:
    // 0x1c4460: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c4460u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1c4464:
    // 0x1c4464: 0x35ef000a  ori         $t7, $t7, 0xA
    ctx->pc = 0x1c4464u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)10);
label_1c4468:
    // 0x1c4468: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x1c4468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
label_1c446c:
    // 0x1c446c: 0x26150008  addiu       $s5, $s0, 0x8
    ctx->pc = 0x1c446cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1c4470:
    // 0x1c4470: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x1c4470u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
label_1c4474:
    // 0x1c4474: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x1c4474u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c4478:
    // 0x1c4478: 0x1e3a025  or          $s4, $t7, $v1
    ctx->pc = 0x1c4478u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
label_1c447c:
    // 0x1c447c: 0x0  nop
    ctx->pc = 0x1c447cu;
    // NOP
label_1c4480:
    // 0x1c4480: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c4480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1c4484:
    // 0x1c4484: 0x1c37821  addu        $t7, $t6, $v1
    ctx->pc = 0x1c4484u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
label_1c4488:
    // 0x1c4488: 0xf1880  sll         $v1, $t7, 2
    ctx->pc = 0x1c4488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_1c448c:
    // 0x1c448c: 0x6f1821  addu        $v1, $v1, $t7
    ctx->pc = 0x1c448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
label_1c4490:
    // 0x1c4490: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1c4490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1c4494:
    // 0x1c4494: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1c4494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1c4498:
    // 0x1c4498: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x1c4498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1c449c:
    // 0x1c449c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c44a0:
    // 0x1c44a0: 0x13c30005  beq         $fp, $v1, . + 4 + (0x5 << 2)
label_1c44a4:
    if (ctx->pc == 0x1C44A4u) {
        ctx->pc = 0x1C44A8u;
        goto label_1c44a8;
    }
    ctx->pc = 0x1C44A0u;
    {
        const bool branch_taken_0x1c44a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c44a0) {
            ctx->pc = 0x1C44B8u;
            goto label_1c44b8;
        }
    }
    ctx->pc = 0x1C44A8u;
label_1c44a8:
    // 0x1c44a8: 0x17200008  bnez        $t9, . + 4 + (0x8 << 2)
label_1c44ac:
    if (ctx->pc == 0x1C44ACu) {
        ctx->pc = 0x1C44B0u;
        goto label_1c44b0;
    }
    ctx->pc = 0x1C44A8u;
    {
        const bool branch_taken_0x1c44a8 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c44a8) {
            ctx->pc = 0x1C44CCu;
            goto label_1c44cc;
        }
    }
    ctx->pc = 0x1C44B0u;
label_1c44b0:
    // 0x1c44b0: 0x11cc0006  beq         $t6, $t4, . + 4 + (0x6 << 2)
label_1c44b4:
    if (ctx->pc == 0x1C44B4u) {
        ctx->pc = 0x1C44B8u;
        goto label_1c44b8;
    }
    ctx->pc = 0x1C44B0u;
    {
        const bool branch_taken_0x1c44b0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 12));
        if (branch_taken_0x1c44b0) {
            ctx->pc = 0x1C44CCu;
            goto label_1c44cc;
        }
    }
    ctx->pc = 0x1C44B8u;
label_1c44b8:
    // 0x1c44b8: 0xa6000082  sh          $zero, 0x82($s0)
    ctx->pc = 0x1c44b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 0));
label_1c44bc:
    // 0x1c44bc: 0xa6000080  sh          $zero, 0x80($s0)
    ctx->pc = 0x1c44bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 0));
label_1c44c0:
    // 0x1c44c0: 0xa6000092  sh          $zero, 0x92($s0)
    ctx->pc = 0x1c44c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 0));
label_1c44c4:
    // 0x1c44c4: 0x10000038  b           . + 4 + (0x38 << 2)
label_1c44c8:
    if (ctx->pc == 0x1C44C8u) {
        ctx->pc = 0x1C44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44C4u;
        // 0x1c44c8: 0xa6000090  sh          $zero, 0x90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44CCu;
        goto label_1c44cc;
    }
    ctx->pc = 0x1C44C4u;
    {
        const bool branch_taken_0x1c44c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44C4u;
        // 0x1c44c8: 0xa6000090  sh          $zero, 0x90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44c4) {
            ctx->pc = 0x1C45A8u;
            goto label_1c45a8;
        }
    }
    ctx->pc = 0x1C44CCu;
label_1c44cc:
    // 0x1c44cc: 0x0  nop
    ctx->pc = 0x1c44ccu;
    // NOP
label_1c44d0:
    // 0x1c44d0: 0x14e1823  subu        $v1, $t2, $t6
    ctx->pc = 0x1c44d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
label_1c44d4:
    // 0x1c44d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1c44d8:
    // 0x1c44d8: 0x3231818  mult        $v1, $t9, $v1
    ctx->pc = 0x1c44d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1c44dc:
    // 0x1c44dc: 0x1630018  mult        $zero, $t3, $v1
    ctx->pc = 0x1c44dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c44e0:
    // 0x1c44e0: 0x37fc2  srl         $t7, $v1, 31
    ctx->pc = 0x1c44e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1c44e4:
    // 0x1c44e4: 0x0  nop
    ctx->pc = 0x1c44e4u;
    // NOP
label_1c44e8:
    // 0x1c44e8: 0x1810  mfhi        $v1
    ctx->pc = 0x1c44e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1c44ec:
    // 0x1c44ec: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1c44ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1c44f0:
    // 0x1c44f0: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_1c44f4:
    if (ctx->pc == 0x1C44F4u) {
        ctx->pc = 0x1C44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44F0u;
        // 0x1c44f4: 0x6f7821  addu        $t7, $v1, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44F8u;
        goto label_1c44f8;
    }
    ctx->pc = 0x1C44F0u;
    {
        const bool branch_taken_0x1c44f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44F0u;
        // 0x1c44f4: 0x6f7821  addu        $t7, $v1, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44f0) {
            ctx->pc = 0x1C4510u;
            goto label_1c4510;
        }
    }
    ctx->pc = 0x1C44F8u;
label_1c44f8:
    // 0x1c44f8: 0x2403022e  addiu       $v1, $zero, 0x22E
    ctx->pc = 0x1c44f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 558));
label_1c44fc:
    // 0x1c44fc: 0x251100a6  addiu       $s1, $t0, 0xA6
    ctx->pc = 0x1c44fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 166));
label_1c4500:
    // 0x1c4500: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x1c4500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1c4504:
    // 0x1c4504: 0x26330033  addiu       $s3, $s1, 0x33
    ctx->pc = 0x1c4504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 51));
label_1c4508:
    // 0x1c4508: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c450c:
    if (ctx->pc == 0x1C450Cu) {
        ctx->pc = 0x1C450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4508u;
        // 0x1c450c: 0x24720033  addiu       $s2, $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4510u;
        goto label_1c4510;
    }
    ctx->pc = 0x1C4508u;
    {
        const bool branch_taken_0x1c4508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4508u;
        // 0x1c450c: 0x24720033  addiu       $s2, $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4508) {
            ctx->pc = 0x1C4524u;
            goto label_1c4524;
        }
    }
    ctx->pc = 0x1C4510u;
label_1c4510:
    // 0x1c4510: 0x2403021a  addiu       $v1, $zero, 0x21A
    ctx->pc = 0x1c4510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
label_1c4514:
    // 0x1c4514: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1c4514u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c4518:
    // 0x1c4518: 0x24110160  addiu       $s1, $zero, 0x160
    ctx->pc = 0x1c4518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1c451c:
    // 0x1c451c: 0x24720040  addiu       $s2, $v1, 0x40
    ctx->pc = 0x1c451cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1c4520:
    // 0x1c4520: 0x241301a0  addiu       $s3, $zero, 0x1A0
    ctx->pc = 0x1c4520u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_1c4524:
    // 0x1c4524: 0x0  nop
    ctx->pc = 0x1c4524u;
    // NOP
label_1c4528:
    // 0x1c4528: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c4528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1c452c:
    // 0x1c452c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1c452cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1c4530:
    // 0x1c4530: 0x24f9021  addu        $s2, $s2, $t7
    ctx->pc = 0x1c4530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
label_1c4534:
    // 0x1c4534: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x1c4534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
label_1c4538:
    // 0x1c4538: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1c4538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1c453c:
    // 0x1c453c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1c453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1c4540:
    // 0x1c4540: 0xf9043  sra         $s2, $t7, 1
    ctx->pc = 0x1c4540u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 15), 1));
label_1c4544:
    // 0x1c4544: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1c4548:
    if (ctx->pc == 0x1C4548u) {
        ctx->pc = 0x1C4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4544u;
        // 0x1c4548: 0xa6030090  sh          $v1, 0x90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C454Cu;
        goto label_1c454c;
    }
    ctx->pc = 0x1C4544u;
    {
        const bool branch_taken_0x1c4544 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x1C4548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4544u;
        // 0x1c4548: 0xa6030090  sh          $v1, 0x90($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4544) {
            ctx->pc = 0x1C4554u;
            goto label_1c4554;
        }
    }
    ctx->pc = 0x1C454Cu;
label_1c454c:
    // 0x1c454c: 0x25e30001  addiu       $v1, $t7, 0x1
    ctx->pc = 0x1c454cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_1c4550:
    // 0x1c4550: 0x39043  sra         $s2, $v1, 1
    ctx->pc = 0x1c4550u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 1));
label_1c4554:
    // 0x1c4554: 0x2321823  subu        $v1, $s1, $s2
    ctx->pc = 0x1c4554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1c4558:
    // 0x1c4558: 0x2727821  addu        $t7, $s3, $s2
    ctx->pc = 0x1c4558u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_1c455c:
    // 0x1c455c: 0x388c0  sll         $s1, $v1, 3
    ctx->pc = 0x1c455cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c4560:
    // 0x1c4560: 0xf18c0  sll         $v1, $t7, 3
    ctx->pc = 0x1c4560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 3));
label_1c4564:
    // 0x1c4564: 0x26317900  addiu       $s1, $s1, 0x7900
    ctx->pc = 0x1c4564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30976));
label_1c4568:
    // 0x1c4568: 0x246f7900  addiu       $t7, $v1, 0x7900
    ctx->pc = 0x1c4568u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1c456c:
    // 0x1c456c: 0xa6110082  sh          $s1, 0x82($s0)
    ctx->pc = 0x1c456cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 17));
label_1c4570:
    // 0x1c4570: 0xa60f0092  sh          $t7, 0x92($s0)
    ctx->pc = 0x1c4570u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 15));
label_1c4574:
    // 0x1c4574: 0x25c30001  addiu       $v1, $t6, 0x1
    ctx->pc = 0x1c4574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_1c4578:
    // 0x1c4578: 0x3037818  mult        $t7, $t8, $v1
    ctx->pc = 0x1c4578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_1c457c:
    // 0x1c457c: 0xa6160078  sh          $s6, 0x78($s0)
    ctx->pc = 0x1c457cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 22));
label_1c4580:
    // 0x1c4580: 0xa60a007a  sh          $t2, 0x7A($s0)
    ctx->pc = 0x1c4580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 10));
label_1c4584:
    // 0x1c4584: 0xa6150088  sh          $s5, 0x88($s0)
    ctx->pc = 0x1c4584u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 21));
label_1c4588:
    // 0x1c4588: 0x24030408  addiu       $v1, $zero, 0x408
    ctx->pc = 0x1c4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
label_1c458c:
    // 0x1c458c: 0xa603008a  sh          $v1, 0x8A($s0)
    ctx->pc = 0x1c458cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 3));
label_1c4590:
    // 0x1c4590: 0xf1883  sra         $v1, $t7, 2
    ctx->pc = 0x1c4590u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 15), 2));
label_1c4594:
    // 0x1c4594: 0x5e10003  bgez        $t7, . + 4 + (0x3 << 2)
label_1c4598:
    if (ctx->pc == 0x1C4598u) {
        ctx->pc = 0x1C4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4594u;
        // 0x1c4598: 0xfe140040  sd          $s4, 0x40($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C459Cu;
        goto label_1c459c;
    }
    ctx->pc = 0x1C4594u;
    {
        const bool branch_taken_0x1c4594 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x1C4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4594u;
        // 0x1c4598: 0xfe140040  sd          $s4, 0x40($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4594) {
            ctx->pc = 0x1C45A4u;
            goto label_1c45a4;
        }
    }
    ctx->pc = 0x1C459Cu;
label_1c459c:
    // 0x1c459c: 0x25e30003  addiu       $v1, $t7, 0x3
    ctx->pc = 0x1c459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 3));
label_1c45a0:
    // 0x1c45a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1c45a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1c45a4:
    // 0x1c45a4: 0xa2030073  sb          $v1, 0x73($s0)
    ctx->pc = 0x1c45a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 3));
label_1c45a8:
    // 0x1c45a8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1c45a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_1c45ac:
    // 0x1c45ac: 0x29c30004  slti        $v1, $t6, 0x4
    ctx->pc = 0x1c45acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)4) ? 1 : 0);
label_1c45b0:
    // 0x1c45b0: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_1c45b4:
    if (ctx->pc == 0x1C45B4u) {
        ctx->pc = 0x1C45B8u;
        goto label_1c45b8;
    }
    ctx->pc = 0x1C45B0u;
    {
        const bool branch_taken_0x1c45b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c45b0) {
            ctx->pc = 0x1C447Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c447c;
        }
    }
    ctx->pc = 0x1C45B8u;
label_1c45b8:
    // 0x1c45b8: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x1c45b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c45bc:
    // 0x1c45bc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1c45bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1c45c0:
    // 0x1c45c0: 0x174fc2  srl         $t1, $s7, 31
    ctx->pc = 0x1c45c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 23), 31));
label_1c45c4:
    // 0x1c45c4: 0x770018  mult        $zero, $v1, $s7
    ctx->pc = 0x1c45c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c45c8:
    // 0x1c45c8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1c45cc:
    // 0x1c45cc: 0x0  nop
    ctx->pc = 0x1c45ccu;
    // NOP
label_1c45d0:
    // 0x1c45d0: 0x3010  mfhi        $a2
    ctx->pc = 0x1c45d0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_1c45d4:
    // 0x1c45d4: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1c45d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_1c45d8:
    // 0x1c45d8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1c45d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1c45dc:
    // 0x1c45dc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1c45dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1c45e0:
    // 0x1c45e0: 0x29a30004  slti        $v1, $t5, 0x4
    ctx->pc = 0x1c45e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
label_1c45e4:
    // 0x1c45e4: 0x1460ff60  bnez        $v1, . + 4 + (-0xA0 << 2)
label_1c45e8:
    if (ctx->pc == 0x1C45E8u) {
        ctx->pc = 0x1C45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45E4u;
        // 0x1c45e8: 0xc9b821  addu        $s7, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C45ECu;
        goto label_1c45ec;
    }
    ctx->pc = 0x1C45E4u;
    {
        const bool branch_taken_0x1c45e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45E4u;
        // 0x1c45e8: 0xc9b821  addu        $s7, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45e4) {
            ctx->pc = 0x1C4368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4368;
        }
    }
    ctx->pc = 0x1C45ECu;
label_1c45ec:
    // 0x1c45ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c45ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c45f0:
    // 0x1c45f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c45f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c45f4:
    // 0x1c45f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c45f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c45f8:
    // 0x1c45f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c45f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c45fc:
    // 0x1c45fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c45fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c4600:
    // 0x1c4600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c4600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4604:
    // 0x1c4604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4608:
    // 0x1c4608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c460c:
    // 0x1c460c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c460cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4610:
    // 0x1c4610: 0x3e00008  jr          $ra
label_1c4614:
    if (ctx->pc == 0x1C4614u) {
        ctx->pc = 0x1C4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4610u;
        // 0x1c4614: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4618u;
        goto label_1c4618;
    }
    ctx->pc = 0x1C4610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4610u;
        // 0x1c4614: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4618u;
label_1c4618:
    // 0x1c4618: 0x0  nop
    ctx->pc = 0x1c4618u;
    // NOP
label_1c461c:
    // 0x1c461c: 0x0  nop
    ctx->pc = 0x1c461cu;
    // NOP
label_1c4620:
    // 0x1c4620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c4624:
    // 0x1c4624: 0x24021d70  addiu       $v0, $zero, 0x1D70
    ctx->pc = 0x1c4624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7536));
label_1c4628:
    // 0x1c4628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c462c:
    // 0x1c462c: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x1c462cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1c4630:
    // 0x1c4630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c4634:
    // 0x1c4634: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c4634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c4638:
    // 0x1c4638: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1c4638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1c463c:
    // 0x1c463c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c463cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1c4640:
    // 0x1c4640: 0x24a5fbc0  addiu       $a1, $a1, -0x440
    ctx->pc = 0x1c4640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966208));
label_1c4644:
    // 0x1c4644: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1c4644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1c4648:
    // 0x1c4648: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1c4648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c464c:
    // 0x1c464c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1c4650:
    if (ctx->pc == 0x1C4650u) {
        ctx->pc = 0x1C4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C464Cu;
        // 0x1c4650: 0x24b01d60  addiu       $s0, $a1, 0x1D60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 7520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4654u;
        goto label_1c4654;
    }
    ctx->pc = 0x1C464Cu;
    {
        const bool branch_taken_0x1c464c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C464Cu;
        // 0x1c4650: 0x24b01d60  addiu       $s0, $a1, 0x1D60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 7520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c464c) {
            ctx->pc = 0x1C4664u;
            goto label_1c4664;
        }
    }
    ctx->pc = 0x1C4654u;
label_1c4654:
    // 0x1c4654: 0xc08a614  jal         func_229850
label_1c4658:
    if (ctx->pc == 0x1C4658u) {
        ctx->pc = 0x1C465Cu;
        goto label_1c465c;
    }
    ctx->pc = 0x1C4654u;
    SET_GPR_U32(ctx, 31, 0x1C465Cu);
    ctx->pc = 0x229850u;
    { ctx->pc = 0x229850; return; }
    ctx->pc = 0x1C465Cu;
label_1c465c:
    // 0x1c465c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c4660:
    if (ctx->pc == 0x1C4660u) {
        ctx->pc = 0x1C4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C465Cu;
        // 0x1c4660: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4664u;
        goto label_1c4664;
    }
    ctx->pc = 0x1C465Cu;
    {
        const bool branch_taken_0x1c465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C465Cu;
        // 0x1c4660: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c465c) {
            ctx->pc = 0x1C4670u;
            goto label_1c4670;
        }
    }
    ctx->pc = 0x1C4664u;
label_1c4664:
    // 0x1c4664: 0xc0448d4  jal         func_112350
label_1c4668:
    if (ctx->pc == 0x1C4668u) {
        ctx->pc = 0x1C466Cu;
        goto label_1c466c;
    }
    ctx->pc = 0x1C4664u;
    SET_GPR_U32(ctx, 31, 0x1C466Cu);
    ctx->pc = 0x112350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112350u, 0x1C4664u, 0x1C466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C466Cu;
label_1c466c:
    // 0x1c466c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c466cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4670:
    // 0x1c4670: 0x28a12710  slti        $at, $a1, 0x2710
    ctx->pc = 0x1c4670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1c4674:
    // 0x1c4674: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1c4678:
    if (ctx->pc == 0x1C4678u) {
        ctx->pc = 0x1C467Cu;
        goto label_1c467c;
    }
    ctx->pc = 0x1C4674u;
    {
        const bool branch_taken_0x1c4674 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4674) {
            ctx->pc = 0x1C4680u;
            goto label_1c4680;
        }
    }
    ctx->pc = 0x1C467Cu;
label_1c467c:
    // 0x1c467c: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1c467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1c4680:
    // 0x1c4680: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c4680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c4684:
    // 0x1c4684: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
label_1c4688:
    if (ctx->pc == 0x1C4688u) {
        ctx->pc = 0x1C4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4684u;
        // 0x1c4688: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C468Cu;
        goto label_1c468c;
    }
    ctx->pc = 0x1C4684u;
    {
        const bool branch_taken_0x1c4684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4684u;
        // 0x1c4688: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4684) {
            ctx->pc = 0x1C4698u;
            goto label_1c4698;
        }
    }
    ctx->pc = 0x1C468Cu;
label_1c468c:
    // 0x1c468c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c468cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1c4690:
    // 0x1c4690: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c4694:
    if (ctx->pc == 0x1C4694u) {
        ctx->pc = 0x1C4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4690u;
        // 0x1c4694: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4698u;
        goto label_1c4698;
    }
    ctx->pc = 0x1C4690u;
    {
        const bool branch_taken_0x1c4690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4690u;
        // 0x1c4694: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4690) {
            ctx->pc = 0x1C46ACu;
            goto label_1c46ac;
        }
    }
    ctx->pc = 0x1C4698u;
label_1c4698:
    // 0x1c4698: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c4698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c469c:
    // 0x1c469c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1c46a0:
    if (ctx->pc == 0x1C46A0u) {
        ctx->pc = 0x1C46A4u;
        goto label_1c46a4;
    }
    ctx->pc = 0x1C469Cu;
    {
        const bool branch_taken_0x1c469c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c469c) {
            ctx->pc = 0x1C46ACu;
            goto label_1c46ac;
        }
    }
    ctx->pc = 0x1C46A4u;
label_1c46a4:
    // 0x1c46a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c46a8:
    // 0x1c46a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c46a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1c46ac:
    // 0x1c46ac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c46acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c46b0:
    // 0x1c46b0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1c46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c46b4:
    // 0x1c46b4: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1c46b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1c46b8:
    // 0x1c46b8: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
label_1c46bc:
    if (ctx->pc == 0x1C46BCu) {
        ctx->pc = 0x1C46C0u;
        goto label_1c46c0;
    }
    ctx->pc = 0x1C46B8u;
    {
        const bool branch_taken_0x1c46b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c46b8) {
            ctx->pc = 0x1C4720u;
            goto label_1c4720;
        }
    }
    ctx->pc = 0x1C46C0u;
label_1c46c0:
    // 0x1c46c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c46c4:
    // 0x1c46c4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1c46c8:
    if (ctx->pc == 0x1C46C8u) {
        ctx->pc = 0x1C46CCu;
        goto label_1c46cc;
    }
    ctx->pc = 0x1C46C4u;
    {
        const bool branch_taken_0x1c46c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c46c4) {
            ctx->pc = 0x1C4714u;
            goto label_1c4714;
        }
    }
    ctx->pc = 0x1C46CCu;
label_1c46cc:
    // 0x1c46cc: 0xc08a618  jal         func_229860
label_1c46d0:
    if (ctx->pc == 0x1C46D0u) {
        ctx->pc = 0x1C46D4u;
        goto label_1c46d4;
    }
    ctx->pc = 0x1C46CCu;
    SET_GPR_U32(ctx, 31, 0x1C46D4u);
    ctx->pc = 0x229860u;
    { ctx->pc = 0x229860; return; }
    ctx->pc = 0x1C46D4u;
label_1c46d4:
    // 0x1c46d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c46d8:
    if (ctx->pc == 0x1C46D8u) {
        ctx->pc = 0x1C46DCu;
        goto label_1c46dc;
    }
    ctx->pc = 0x1C46D4u;
    {
        const bool branch_taken_0x1c46d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c46d4) {
            ctx->pc = 0x1C46E4u;
            goto label_1c46e4;
        }
    }
    ctx->pc = 0x1C46DCu;
label_1c46dc:
    // 0x1c46dc: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1c46e0:
    if (ctx->pc == 0x1C46E0u) {
        ctx->pc = 0x1C46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C46DCu;
        // 0x1c46e0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C46E4u;
        goto label_1c46e4;
    }
    ctx->pc = 0x1C46DCu;
    {
        const bool branch_taken_0x1c46dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C46DCu;
        // 0x1c46e0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c46dc) {
            ctx->pc = 0x1C4798u;
            goto label_1c4798;
        }
    }
    ctx->pc = 0x1C46E4u;
label_1c46e4:
    // 0x1c46e4: 0xc08a618  jal         func_229860
label_1c46e8:
    if (ctx->pc == 0x1C46E8u) {
        ctx->pc = 0x1C46ECu;
        goto label_1c46ec;
    }
    ctx->pc = 0x1C46E4u;
    SET_GPR_U32(ctx, 31, 0x1C46ECu);
    ctx->pc = 0x229860u;
    { ctx->pc = 0x229860; return; }
    ctx->pc = 0x1C46ECu;
label_1c46ec:
    // 0x1c46ec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1c46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c46f0:
    // 0x1c46f0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c46f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c46f4:
    // 0x1c46f4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1c46f8:
    if (ctx->pc == 0x1C46F8u) {
        ctx->pc = 0x1C46FCu;
        goto label_1c46fc;
    }
    ctx->pc = 0x1C46F4u;
    {
        const bool branch_taken_0x1c46f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c46f4) {
            ctx->pc = 0x1C4798u;
            goto label_1c4798;
        }
    }
    ctx->pc = 0x1C46FCu;
label_1c46fc:
    // 0x1c46fc: 0xc08a618  jal         func_229860
label_1c4700:
    if (ctx->pc == 0x1C4700u) {
        ctx->pc = 0x1C4704u;
        goto label_1c4704;
    }
    ctx->pc = 0x1C46FCu;
    SET_GPR_U32(ctx, 31, 0x1C4704u);
    ctx->pc = 0x229860u;
    { ctx->pc = 0x229860; return; }
    ctx->pc = 0x1C4704u;
label_1c4704:
    // 0x1c4704: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1c4704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1c4708:
    // 0x1c4708: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1c4708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1c470c:
    // 0x1c470c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1c4710:
    if (ctx->pc == 0x1C4710u) {
        ctx->pc = 0x1C4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C470Cu;
        // 0x1c4710: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4714u;
        goto label_1c4714;
    }
    ctx->pc = 0x1C470Cu;
    {
        const bool branch_taken_0x1c470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C470Cu;
        // 0x1c4710: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c470c) {
            ctx->pc = 0x1C4798u;
            goto label_1c4798;
        }
    }
    ctx->pc = 0x1C4714u;
label_1c4714:
    // 0x1c4714: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c4714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c4718:
    // 0x1c4718: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1c471c:
    if (ctx->pc == 0x1C471Cu) {
        ctx->pc = 0x1C471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4718u;
        // 0x1c471c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4720u;
        goto label_1c4720;
    }
    ctx->pc = 0x1C4718u;
    {
        const bool branch_taken_0x1c4718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4718u;
        // 0x1c471c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4718) {
            ctx->pc = 0x1C4798u;
            goto label_1c4798;
        }
    }
    ctx->pc = 0x1C4720u;
label_1c4720:
    // 0x1c4720: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c4720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c4724:
    // 0x1c4724: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1c4728:
    if (ctx->pc == 0x1C4728u) {
        ctx->pc = 0x1C472Cu;
        goto label_1c472c;
    }
    ctx->pc = 0x1C4724u;
    {
        const bool branch_taken_0x1c4724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4724) {
            ctx->pc = 0x1C4744u;
            goto label_1c4744;
        }
    }
    ctx->pc = 0x1C472Cu;
label_1c472c:
    // 0x1c472c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1c472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c4730:
    // 0x1c4730: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1c4730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c4734:
    // 0x1c4734: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_1c4738:
    if (ctx->pc == 0x1C4738u) {
        ctx->pc = 0x1C4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4734u;
        // 0x1c4738: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C473Cu;
        goto label_1c473c;
    }
    ctx->pc = 0x1C4734u;
    {
        const bool branch_taken_0x1c4734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4734u;
        // 0x1c4738: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4734) {
            ctx->pc = 0x1C4798u;
            goto label_1c4798;
        }
    }
    ctx->pc = 0x1C473Cu;
label_1c473c:
    // 0x1c473c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1c4740:
    if (ctx->pc == 0x1C4740u) {
        ctx->pc = 0x1C4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C473Cu;
        // 0x1c4740: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4744u;
        goto label_1c4744;
    }
    ctx->pc = 0x1C473Cu;
    {
        const bool branch_taken_0x1c473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C473Cu;
        // 0x1c4740: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c473c) {
            ctx->pc = 0x1C4798u;
            goto label_1c4798;
        }
    }
    ctx->pc = 0x1C4744u;
label_1c4744:
    // 0x1c4744: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c4744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c4748:
    // 0x1c4748: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1c4748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1c474c:
    // 0x1c474c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c4750:
    // 0x1c4750: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_1c4754:
    if (ctx->pc == 0x1C4754u) {
        ctx->pc = 0x1C4758u;
        goto label_1c4758;
    }
    ctx->pc = 0x1C4750u;
    {
        const bool branch_taken_0x1c4750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4750) {
            ctx->pc = 0x1C4798u;
            goto label_1c4798;
        }
    }
    ctx->pc = 0x1C4758u;
label_1c4758:
    // 0x1c4758: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1c4758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1c475c:
    // 0x1c475c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x1c475cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1c4760:
    // 0x1c4760: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1c4760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1c4764:
    // 0x1c4764: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x1c4764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c4768:
    // 0x1c4768: 0x0  nop
    ctx->pc = 0x1c4768u;
    // NOP
label_1c476c:
    // 0x1c476c: 0x0  nop
    ctx->pc = 0x1c476cu;
    // NOP
label_1c4770:
    // 0x1c4770: 0x1810  mfhi        $v1
    ctx->pc = 0x1c4770u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1c4774:
    // 0x1c4774: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1c4774u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1c4778:
    // 0x1c4778: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c477c:
    // 0x1c477c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c4780:
    // 0x1c4780: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c4784:
    // 0x1c4784: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c4784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c4788:
    // 0x1c4788: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c4788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c478c:
    // 0x1c478c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c4790:
    // 0x1c4790: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c4790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c4794:
    // 0x1c4794: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1c4794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1c4798:
    // 0x1c4798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c479c:
    // 0x1c479c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c479cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c47a0:
    // 0x1c47a0: 0x3e00008  jr          $ra
label_1c47a4:
    if (ctx->pc == 0x1C47A4u) {
        ctx->pc = 0x1C47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47A0u;
        // 0x1c47a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C47A8u;
        goto label_1c47a8;
    }
    ctx->pc = 0x1C47A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47A0u;
        // 0x1c47a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C47A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C47A8u;
label_1c47a8:
    // 0x1c47a8: 0x0  nop
    ctx->pc = 0x1c47a8u;
    // NOP
label_1c47ac:
    // 0x1c47ac: 0x0  nop
    ctx->pc = 0x1c47acu;
    // NOP
label_1c47b0:
    // 0x1c47b0: 0x3e00008  jr          $ra
label_1c47b4:
    if (ctx->pc == 0x1C47B4u) {
        ctx->pc = 0x1C47B8u;
        goto label_1c47b8;
    }
    ctx->pc = 0x1C47B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C47B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C47B8u;
label_1c47b8:
    // 0x1c47b8: 0x0  nop
    ctx->pc = 0x1c47b8u;
    // NOP
label_1c47bc:
    // 0x1c47bc: 0x0  nop
    ctx->pc = 0x1c47bcu;
    // NOP
label_1c47c0:
    // 0x1c47c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c47c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1c47c4:
    // 0x1c47c4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1c47c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1c47c8:
    // 0x1c47c8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1c47c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1c47cc:
    // 0x1c47cc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1c47ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1c47d0:
    // 0x1c47d0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1c47d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1c47d4:
    // 0x1c47d4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1c47d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1c47d8:
    // 0x1c47d8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c47d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1c47dc:
    // 0x1c47dc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1c47dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1c47e0:
    // 0x1c47e0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c47e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1c47e4:
    // 0x1c47e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c47e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c47e8:
    // 0x1c47e8: 0x1080008c  beqz        $a0, . + 4 + (0x8C << 2)
label_1c47ec:
    if (ctx->pc == 0x1C47ECu) {
        ctx->pc = 0x1C47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47E8u;
        // 0x1c47ec: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C47F0u;
        goto label_1c47f0;
    }
    ctx->pc = 0x1C47E8u;
    {
        const bool branch_taken_0x1c47e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47E8u;
        // 0x1c47ec: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47e8) {
            ctx->pc = 0x1C4A1Cu;
            { ctx->pc = 0x1c4a1c; return; }
        }
    }
    ctx->pc = 0x1C47F0u;
label_1c47f0:
    // 0x1c47f0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1c47f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_1c47f4:
    // 0x1c47f4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1c47f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1c47f8:
    // 0x1c47f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c47f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c47fc:
    // 0x1c47fc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1c47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c4800:
    // 0x1c4800: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1c4800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1c4804:
    // 0x1c4804: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1c4808:
    if (ctx->pc == 0x1C4808u) {
        ctx->pc = 0x1C480Cu;
        goto label_1c480c;
    }
    ctx->pc = 0x1C4804u;
    {
        const bool branch_taken_0x1c4804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4804) {
            ctx->pc = 0x1C4848u;
            { ctx->pc = 0x1c4848; return; }
        }
    }
    ctx->pc = 0x1C480Cu;
label_1c480c:
    // 0x1c480c: 0xc08a614  jal         func_229850
label_1c4810:
    if (ctx->pc == 0x1C4810u) {
        ctx->pc = 0x1C4814u;
        goto label_1c4814;
    }
    ctx->pc = 0x1C480Cu;
    SET_GPR_U32(ctx, 31, 0x1C4814u);
    ctx->pc = 0x229850u;
    { ctx->pc = 0x229850; return; }
    ctx->pc = 0x1C4814u;
label_1c4814:
    // 0x1c4814: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x1c4814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1c4818:
    // 0x1c4818: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1c481c:
    if (ctx->pc == 0x1C481Cu) {
        ctx->pc = 0x1C4820u;
        goto label_1c4820;
    }
    ctx->pc = 0x1C4818u;
    {
        const bool branch_taken_0x1c4818 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4818) {
            ctx->pc = 0x1C4824u;
            goto label_1c4824;
        }
    }
    ctx->pc = 0x1C4820u;
label_1c4820:
    // 0x1c4820: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x1c4820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1c4824:
    // 0x1c4824: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1c4824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1c4828:
    // 0x1c4828: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c4828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1c482c:
    // 0x1c482c: 0x2484fbc0  addiu       $a0, $a0, -0x440
    ctx->pc = 0x1c482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966208));
label_1c4830:
    // 0x1c4830: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c4830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c4834:
    // 0x1c4834: 0xac601d60  sw          $zero, 0x1D60($v1)
    ctx->pc = 0x1c4834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7520), GPR_U32(ctx, 0));
label_1c4838:
    // 0x1c4838: 0xac621d64  sw          $v0, 0x1D64($v1)
    ctx->pc = 0x1c4838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7524), GPR_U32(ctx, 2));
label_1c483c:
    // 0x1c483c: 0xac601d68  sw          $zero, 0x1D68($v1)
    ctx->pc = 0x1c483cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7528), GPR_U32(ctx, 0));
label_1c4840:
    // 0x1c4840: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1c4844:
    if (ctx->pc == 0x1C4844u) {
        ctx->pc = 0x1C4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4840u;
        // 0x1c4844: 0xac601d6c  sw          $zero, 0x1D6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4848u;
        { ctx->pc = 0x1c4848; return; }
    }
    ctx->pc = 0x1C4840u;
    {
        const bool branch_taken_0x1c4840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4840u;
        // 0x1c4844: 0xac601d6c  sw          $zero, 0x1D6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4840) {
            ctx->pc = 0x1C48B4u;
            { ctx->pc = 0x1c48b4; return; }
        }
    }
    ctx->pc = 0x1C4848u;
    ctx->pc = 0x1c4848u;
    return;
}

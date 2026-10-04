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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part51(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b4088u: goto label_2b4088;
        case 0x2b408cu: goto label_2b408c;
        case 0x2b4090u: goto label_2b4090;
        case 0x2b4094u: goto label_2b4094;
        case 0x2b4098u: goto label_2b4098;
        case 0x2b409cu: goto label_2b409c;
        case 0x2b40a0u: goto label_2b40a0;
        case 0x2b40a4u: goto label_2b40a4;
        case 0x2b40a8u: goto label_2b40a8;
        case 0x2b40acu: goto label_2b40ac;
        case 0x2b40b0u: goto label_2b40b0;
        case 0x2b40b4u: goto label_2b40b4;
        case 0x2b40b8u: goto label_2b40b8;
        case 0x2b40bcu: goto label_2b40bc;
        case 0x2b40c0u: goto label_2b40c0;
        case 0x2b40c4u: goto label_2b40c4;
        case 0x2b40c8u: goto label_2b40c8;
        case 0x2b40ccu: goto label_2b40cc;
        case 0x2b40d0u: goto label_2b40d0;
        case 0x2b40d4u: goto label_2b40d4;
        case 0x2b40d8u: goto label_2b40d8;
        case 0x2b40dcu: goto label_2b40dc;
        case 0x2b40e0u: goto label_2b40e0;
        case 0x2b40e4u: goto label_2b40e4;
        case 0x2b40e8u: goto label_2b40e8;
        case 0x2b40ecu: goto label_2b40ec;
        case 0x2b40f0u: goto label_2b40f0;
        case 0x2b40f4u: goto label_2b40f4;
        case 0x2b40f8u: goto label_2b40f8;
        case 0x2b40fcu: goto label_2b40fc;
        case 0x2b4100u: goto label_2b4100;
        case 0x2b4104u: goto label_2b4104;
        case 0x2b4108u: goto label_2b4108;
        case 0x2b410cu: goto label_2b410c;
        case 0x2b4110u: goto label_2b4110;
        case 0x2b4114u: goto label_2b4114;
        case 0x2b4118u: goto label_2b4118;
        case 0x2b411cu: goto label_2b411c;
        case 0x2b4120u: goto label_2b4120;
        case 0x2b4124u: goto label_2b4124;
        case 0x2b4128u: goto label_2b4128;
        case 0x2b412cu: goto label_2b412c;
        case 0x2b4130u: goto label_2b4130;
        case 0x2b4134u: goto label_2b4134;
        case 0x2b4138u: goto label_2b4138;
        case 0x2b413cu: goto label_2b413c;
        case 0x2b4140u: goto label_2b4140;
        case 0x2b4144u: goto label_2b4144;
        case 0x2b4148u: goto label_2b4148;
        case 0x2b414cu: goto label_2b414c;
        case 0x2b4150u: goto label_2b4150;
        case 0x2b4154u: goto label_2b4154;
        case 0x2b4158u: goto label_2b4158;
        case 0x2b415cu: goto label_2b415c;
        case 0x2b4160u: goto label_2b4160;
        case 0x2b4164u: goto label_2b4164;
        case 0x2b4168u: goto label_2b4168;
        case 0x2b416cu: goto label_2b416c;
        case 0x2b4170u: goto label_2b4170;
        case 0x2b4174u: goto label_2b4174;
        case 0x2b4178u: goto label_2b4178;
        case 0x2b417cu: goto label_2b417c;
        case 0x2b4180u: goto label_2b4180;
        case 0x2b4184u: goto label_2b4184;
        case 0x2b4188u: goto label_2b4188;
        case 0x2b418cu: goto label_2b418c;
        case 0x2b4190u: goto label_2b4190;
        case 0x2b4194u: goto label_2b4194;
        case 0x2b4198u: goto label_2b4198;
        case 0x2b419cu: goto label_2b419c;
        case 0x2b41a0u: goto label_2b41a0;
        case 0x2b41a4u: goto label_2b41a4;
        case 0x2b41a8u: goto label_2b41a8;
        case 0x2b41acu: goto label_2b41ac;
        case 0x2b41b0u: goto label_2b41b0;
        case 0x2b41b4u: goto label_2b41b4;
        case 0x2b41b8u: goto label_2b41b8;
        case 0x2b41bcu: goto label_2b41bc;
        case 0x2b41c0u: goto label_2b41c0;
        case 0x2b41c4u: goto label_2b41c4;
        case 0x2b41c8u: goto label_2b41c8;
        case 0x2b41ccu: goto label_2b41cc;
        case 0x2b41d0u: goto label_2b41d0;
        case 0x2b41d4u: goto label_2b41d4;
        case 0x2b41d8u: goto label_2b41d8;
        case 0x2b41dcu: goto label_2b41dc;
        case 0x2b41e0u: goto label_2b41e0;
        case 0x2b41e4u: goto label_2b41e4;
        case 0x2b41e8u: goto label_2b41e8;
        case 0x2b41ecu: goto label_2b41ec;
        case 0x2b41f0u: goto label_2b41f0;
        case 0x2b41f4u: goto label_2b41f4;
        case 0x2b41f8u: goto label_2b41f8;
        case 0x2b41fcu: goto label_2b41fc;
        case 0x2b4200u: goto label_2b4200;
        case 0x2b4204u: goto label_2b4204;
        case 0x2b4208u: goto label_2b4208;
        case 0x2b420cu: goto label_2b420c;
        case 0x2b4210u: goto label_2b4210;
        case 0x2b4214u: goto label_2b4214;
        case 0x2b4218u: goto label_2b4218;
        case 0x2b421cu: goto label_2b421c;
        case 0x2b4220u: goto label_2b4220;
        case 0x2b4224u: goto label_2b4224;
        case 0x2b4228u: goto label_2b4228;
        case 0x2b422cu: goto label_2b422c;
        case 0x2b4230u: goto label_2b4230;
        case 0x2b4234u: goto label_2b4234;
        case 0x2b4238u: goto label_2b4238;
        case 0x2b423cu: goto label_2b423c;
        case 0x2b4240u: goto label_2b4240;
        case 0x2b4244u: goto label_2b4244;
        case 0x2b4248u: goto label_2b4248;
        case 0x2b424cu: goto label_2b424c;
        case 0x2b4250u: goto label_2b4250;
        case 0x2b4254u: goto label_2b4254;
        case 0x2b4258u: goto label_2b4258;
        case 0x2b425cu: goto label_2b425c;
        case 0x2b4260u: goto label_2b4260;
        case 0x2b4264u: goto label_2b4264;
        case 0x2b4268u: goto label_2b4268;
        case 0x2b426cu: goto label_2b426c;
        case 0x2b4270u: goto label_2b4270;
        case 0x2b4274u: goto label_2b4274;
        case 0x2b4278u: goto label_2b4278;
        case 0x2b427cu: goto label_2b427c;
        case 0x2b4280u: goto label_2b4280;
        case 0x2b4284u: goto label_2b4284;
        case 0x2b4288u: goto label_2b4288;
        case 0x2b428cu: goto label_2b428c;
        case 0x2b4290u: goto label_2b4290;
        case 0x2b4294u: goto label_2b4294;
        case 0x2b4298u: goto label_2b4298;
        case 0x2b429cu: goto label_2b429c;
        case 0x2b42a0u: goto label_2b42a0;
        case 0x2b42a4u: goto label_2b42a4;
        case 0x2b42a8u: goto label_2b42a8;
        case 0x2b42acu: goto label_2b42ac;
        case 0x2b42b0u: goto label_2b42b0;
        case 0x2b42b4u: goto label_2b42b4;
        case 0x2b42b8u: goto label_2b42b8;
        case 0x2b42bcu: goto label_2b42bc;
        case 0x2b42c0u: goto label_2b42c0;
        case 0x2b42c4u: goto label_2b42c4;
        case 0x2b42c8u: goto label_2b42c8;
        case 0x2b42ccu: goto label_2b42cc;
        case 0x2b42d0u: goto label_2b42d0;
        case 0x2b42d4u: goto label_2b42d4;
        case 0x2b42d8u: goto label_2b42d8;
        case 0x2b42dcu: goto label_2b42dc;
        case 0x2b42e0u: goto label_2b42e0;
        case 0x2b42e4u: goto label_2b42e4;
        case 0x2b42e8u: goto label_2b42e8;
        case 0x2b42ecu: goto label_2b42ec;
        case 0x2b42f0u: goto label_2b42f0;
        case 0x2b42f4u: goto label_2b42f4;
        case 0x2b42f8u: goto label_2b42f8;
        case 0x2b42fcu: goto label_2b42fc;
        case 0x2b4300u: goto label_2b4300;
        case 0x2b4304u: goto label_2b4304;
        case 0x2b4308u: goto label_2b4308;
        case 0x2b430cu: goto label_2b430c;
        case 0x2b4310u: goto label_2b4310;
        case 0x2b4314u: goto label_2b4314;
        case 0x2b4318u: goto label_2b4318;
        case 0x2b431cu: goto label_2b431c;
        case 0x2b4320u: goto label_2b4320;
        case 0x2b4324u: goto label_2b4324;
        case 0x2b4328u: goto label_2b4328;
        case 0x2b432cu: goto label_2b432c;
        case 0x2b4330u: goto label_2b4330;
        case 0x2b4334u: goto label_2b4334;
        case 0x2b4338u: goto label_2b4338;
        case 0x2b433cu: goto label_2b433c;
        case 0x2b4340u: goto label_2b4340;
        case 0x2b4344u: goto label_2b4344;
        case 0x2b4348u: goto label_2b4348;
        case 0x2b434cu: goto label_2b434c;
        case 0x2b4350u: goto label_2b4350;
        case 0x2b4354u: goto label_2b4354;
        case 0x2b4358u: goto label_2b4358;
        case 0x2b435cu: goto label_2b435c;
        case 0x2b4360u: goto label_2b4360;
        case 0x2b4364u: goto label_2b4364;
        case 0x2b4368u: goto label_2b4368;
        case 0x2b436cu: goto label_2b436c;
        case 0x2b4370u: goto label_2b4370;
        case 0x2b4374u: goto label_2b4374;
        case 0x2b4378u: goto label_2b4378;
        case 0x2b437cu: goto label_2b437c;
        case 0x2b4380u: goto label_2b4380;
        case 0x2b4384u: goto label_2b4384;
        case 0x2b4388u: goto label_2b4388;
        case 0x2b438cu: goto label_2b438c;
        case 0x2b4390u: goto label_2b4390;
        case 0x2b4394u: goto label_2b4394;
        case 0x2b4398u: goto label_2b4398;
        case 0x2b439cu: goto label_2b439c;
        case 0x2b43a0u: goto label_2b43a0;
        case 0x2b43a4u: goto label_2b43a4;
        case 0x2b43a8u: goto label_2b43a8;
        case 0x2b43acu: goto label_2b43ac;
        case 0x2b43b0u: goto label_2b43b0;
        case 0x2b43b4u: goto label_2b43b4;
        case 0x2b43b8u: goto label_2b43b8;
        case 0x2b43bcu: goto label_2b43bc;
        case 0x2b43c0u: goto label_2b43c0;
        case 0x2b43c4u: goto label_2b43c4;
        case 0x2b43c8u: goto label_2b43c8;
        case 0x2b43ccu: goto label_2b43cc;
        case 0x2b43d0u: goto label_2b43d0;
        case 0x2b43d4u: goto label_2b43d4;
        case 0x2b43d8u: goto label_2b43d8;
        case 0x2b43dcu: goto label_2b43dc;
        case 0x2b43e0u: goto label_2b43e0;
        case 0x2b43e4u: goto label_2b43e4;
        case 0x2b43e8u: goto label_2b43e8;
        case 0x2b43ecu: goto label_2b43ec;
        case 0x2b43f0u: goto label_2b43f0;
        case 0x2b43f4u: goto label_2b43f4;
        case 0x2b43f8u: goto label_2b43f8;
        case 0x2b43fcu: goto label_2b43fc;
        case 0x2b4400u: goto label_2b4400;
        case 0x2b4404u: goto label_2b4404;
        case 0x2b4408u: goto label_2b4408;
        case 0x2b440cu: goto label_2b440c;
        case 0x2b4410u: goto label_2b4410;
        case 0x2b4414u: goto label_2b4414;
        case 0x2b4418u: goto label_2b4418;
        case 0x2b441cu: goto label_2b441c;
        case 0x2b4420u: goto label_2b4420;
        case 0x2b4424u: goto label_2b4424;
        case 0x2b4428u: goto label_2b4428;
        case 0x2b442cu: goto label_2b442c;
        case 0x2b4430u: goto label_2b4430;
        case 0x2b4434u: goto label_2b4434;
        case 0x2b4438u: goto label_2b4438;
        case 0x2b443cu: goto label_2b443c;
        case 0x2b4440u: goto label_2b4440;
        case 0x2b4444u: goto label_2b4444;
        case 0x2b4448u: goto label_2b4448;
        case 0x2b444cu: goto label_2b444c;
        case 0x2b4450u: goto label_2b4450;
        case 0x2b4454u: goto label_2b4454;
        case 0x2b4458u: goto label_2b4458;
        case 0x2b445cu: goto label_2b445c;
        case 0x2b4460u: goto label_2b4460;
        case 0x2b4464u: goto label_2b4464;
        case 0x2b4468u: goto label_2b4468;
        case 0x2b446cu: goto label_2b446c;
        case 0x2b4470u: goto label_2b4470;
        case 0x2b4474u: goto label_2b4474;
        case 0x2b4478u: goto label_2b4478;
        case 0x2b447cu: goto label_2b447c;
        case 0x2b4480u: goto label_2b4480;
        case 0x2b4484u: goto label_2b4484;
        case 0x2b4488u: goto label_2b4488;
        case 0x2b448cu: goto label_2b448c;
        case 0x2b4490u: goto label_2b4490;
        case 0x2b4494u: goto label_2b4494;
        case 0x2b4498u: goto label_2b4498;
        case 0x2b449cu: goto label_2b449c;
        case 0x2b44a0u: goto label_2b44a0;
        case 0x2b44a4u: goto label_2b44a4;
        case 0x2b44a8u: goto label_2b44a8;
        case 0x2b44acu: goto label_2b44ac;
        case 0x2b44b0u: goto label_2b44b0;
        case 0x2b44b4u: goto label_2b44b4;
        case 0x2b44b8u: goto label_2b44b8;
        case 0x2b44bcu: goto label_2b44bc;
        case 0x2b44c0u: goto label_2b44c0;
        case 0x2b44c4u: goto label_2b44c4;
        case 0x2b44c8u: goto label_2b44c8;
        case 0x2b44ccu: goto label_2b44cc;
        case 0x2b44d0u: goto label_2b44d0;
        case 0x2b44d4u: goto label_2b44d4;
        case 0x2b44d8u: goto label_2b44d8;
        case 0x2b44dcu: goto label_2b44dc;
        case 0x2b44e0u: goto label_2b44e0;
        case 0x2b44e4u: goto label_2b44e4;
        case 0x2b44e8u: goto label_2b44e8;
        case 0x2b44ecu: goto label_2b44ec;
        case 0x2b44f0u: goto label_2b44f0;
        case 0x2b44f4u: goto label_2b44f4;
        case 0x2b44f8u: goto label_2b44f8;
        case 0x2b44fcu: goto label_2b44fc;
        case 0x2b4500u: goto label_2b4500;
        case 0x2b4504u: goto label_2b4504;
        case 0x2b4508u: goto label_2b4508;
        case 0x2b450cu: goto label_2b450c;
        case 0x2b4510u: goto label_2b4510;
        case 0x2b4514u: goto label_2b4514;
        case 0x2b4518u: goto label_2b4518;
        case 0x2b451cu: goto label_2b451c;
        case 0x2b4520u: goto label_2b4520;
        case 0x2b4524u: goto label_2b4524;
        case 0x2b4528u: goto label_2b4528;
        case 0x2b452cu: goto label_2b452c;
        case 0x2b4530u: goto label_2b4530;
        case 0x2b4534u: goto label_2b4534;
        case 0x2b4538u: goto label_2b4538;
        case 0x2b453cu: goto label_2b453c;
        case 0x2b4540u: goto label_2b4540;
        case 0x2b4544u: goto label_2b4544;
        case 0x2b4548u: goto label_2b4548;
        case 0x2b454cu: goto label_2b454c;
        case 0x2b4550u: goto label_2b4550;
        case 0x2b4554u: goto label_2b4554;
        case 0x2b4558u: goto label_2b4558;
        case 0x2b455cu: goto label_2b455c;
        case 0x2b4560u: goto label_2b4560;
        case 0x2b4564u: goto label_2b4564;
        case 0x2b4568u: goto label_2b4568;
        case 0x2b456cu: goto label_2b456c;
        case 0x2b4570u: goto label_2b4570;
        case 0x2b4574u: goto label_2b4574;
        case 0x2b4578u: goto label_2b4578;
        case 0x2b457cu: goto label_2b457c;
        case 0x2b4580u: goto label_2b4580;
        case 0x2b4584u: goto label_2b4584;
        case 0x2b4588u: goto label_2b4588;
        case 0x2b458cu: goto label_2b458c;
        case 0x2b4590u: goto label_2b4590;
        case 0x2b4594u: goto label_2b4594;
        case 0x2b4598u: goto label_2b4598;
        case 0x2b459cu: goto label_2b459c;
        case 0x2b45a0u: goto label_2b45a0;
        case 0x2b45a4u: goto label_2b45a4;
        case 0x2b45a8u: goto label_2b45a8;
        case 0x2b45acu: goto label_2b45ac;
        case 0x2b45b0u: goto label_2b45b0;
        case 0x2b45b4u: goto label_2b45b4;
        case 0x2b45b8u: goto label_2b45b8;
        case 0x2b45bcu: goto label_2b45bc;
        case 0x2b45c0u: goto label_2b45c0;
        case 0x2b45c4u: goto label_2b45c4;
        case 0x2b45c8u: goto label_2b45c8;
        case 0x2b45ccu: goto label_2b45cc;
        case 0x2b45d0u: goto label_2b45d0;
        case 0x2b45d4u: goto label_2b45d4;
        case 0x2b45d8u: goto label_2b45d8;
        case 0x2b45dcu: goto label_2b45dc;
        case 0x2b45e0u: goto label_2b45e0;
        case 0x2b45e4u: goto label_2b45e4;
        case 0x2b45e8u: goto label_2b45e8;
        case 0x2b45ecu: goto label_2b45ec;
        case 0x2b45f0u: goto label_2b45f0;
        case 0x2b45f4u: goto label_2b45f4;
        case 0x2b45f8u: goto label_2b45f8;
        case 0x2b45fcu: goto label_2b45fc;
        case 0x2b4600u: goto label_2b4600;
        case 0x2b4604u: goto label_2b4604;
        case 0x2b4608u: goto label_2b4608;
        case 0x2b460cu: goto label_2b460c;
        case 0x2b4610u: goto label_2b4610;
        case 0x2b4614u: goto label_2b4614;
        case 0x2b4618u: goto label_2b4618;
        case 0x2b461cu: goto label_2b461c;
        case 0x2b4620u: goto label_2b4620;
        case 0x2b4624u: goto label_2b4624;
        case 0x2b4628u: goto label_2b4628;
        case 0x2b462cu: goto label_2b462c;
        case 0x2b4630u: goto label_2b4630;
        case 0x2b4634u: goto label_2b4634;
        case 0x2b4638u: goto label_2b4638;
        case 0x2b463cu: goto label_2b463c;
        case 0x2b4640u: goto label_2b4640;
        case 0x2b4644u: goto label_2b4644;
        case 0x2b4648u: goto label_2b4648;
        case 0x2b464cu: goto label_2b464c;
        case 0x2b4650u: goto label_2b4650;
        case 0x2b4654u: goto label_2b4654;
        case 0x2b4658u: goto label_2b4658;
        case 0x2b465cu: goto label_2b465c;
        case 0x2b4660u: goto label_2b4660;
        case 0x2b4664u: goto label_2b4664;
        case 0x2b4668u: goto label_2b4668;
        case 0x2b466cu: goto label_2b466c;
        case 0x2b4670u: goto label_2b4670;
        case 0x2b4674u: goto label_2b4674;
        case 0x2b4678u: goto label_2b4678;
        case 0x2b467cu: goto label_2b467c;
        case 0x2b4680u: goto label_2b4680;
        case 0x2b4684u: goto label_2b4684;
        case 0x2b4688u: goto label_2b4688;
        case 0x2b468cu: goto label_2b468c;
        case 0x2b4690u: goto label_2b4690;
        case 0x2b4694u: goto label_2b4694;
        case 0x2b4698u: goto label_2b4698;
        case 0x2b469cu: goto label_2b469c;
        case 0x2b46a0u: goto label_2b46a0;
        case 0x2b46a4u: goto label_2b46a4;
        case 0x2b46a8u: goto label_2b46a8;
        case 0x2b46acu: goto label_2b46ac;
        case 0x2b46b0u: goto label_2b46b0;
        case 0x2b46b4u: goto label_2b46b4;
        case 0x2b46b8u: goto label_2b46b8;
        case 0x2b46bcu: goto label_2b46bc;
        case 0x2b46c0u: goto label_2b46c0;
        case 0x2b46c4u: goto label_2b46c4;
        case 0x2b46c8u: goto label_2b46c8;
        case 0x2b46ccu: goto label_2b46cc;
        case 0x2b46d0u: goto label_2b46d0;
        case 0x2b46d4u: goto label_2b46d4;
        case 0x2b46d8u: goto label_2b46d8;
        case 0x2b46dcu: goto label_2b46dc;
        case 0x2b46e0u: goto label_2b46e0;
        case 0x2b46e4u: goto label_2b46e4;
        case 0x2b46e8u: goto label_2b46e8;
        case 0x2b46ecu: goto label_2b46ec;
        case 0x2b46f0u: goto label_2b46f0;
        case 0x2b46f4u: goto label_2b46f4;
        case 0x2b46f8u: goto label_2b46f8;
        case 0x2b46fcu: goto label_2b46fc;
        case 0x2b4700u: goto label_2b4700;
        case 0x2b4704u: goto label_2b4704;
        case 0x2b4708u: goto label_2b4708;
        case 0x2b470cu: goto label_2b470c;
        case 0x2b4710u: goto label_2b4710;
        case 0x2b4714u: goto label_2b4714;
        case 0x2b4718u: goto label_2b4718;
        case 0x2b471cu: goto label_2b471c;
        case 0x2b4720u: goto label_2b4720;
        case 0x2b4724u: goto label_2b4724;
        case 0x2b4728u: goto label_2b4728;
        case 0x2b472cu: goto label_2b472c;
        case 0x2b4730u: goto label_2b4730;
        case 0x2b4734u: goto label_2b4734;
        case 0x2b4738u: goto label_2b4738;
        case 0x2b473cu: goto label_2b473c;
        case 0x2b4740u: goto label_2b4740;
        case 0x2b4744u: goto label_2b4744;
        case 0x2b4748u: goto label_2b4748;
        case 0x2b474cu: goto label_2b474c;
        case 0x2b4750u: goto label_2b4750;
        case 0x2b4754u: goto label_2b4754;
        case 0x2b4758u: goto label_2b4758;
        case 0x2b475cu: goto label_2b475c;
        case 0x2b4760u: goto label_2b4760;
        case 0x2b4764u: goto label_2b4764;
        case 0x2b4768u: goto label_2b4768;
        case 0x2b476cu: goto label_2b476c;
        case 0x2b4770u: goto label_2b4770;
        case 0x2b4774u: goto label_2b4774;
        case 0x2b4778u: goto label_2b4778;
        case 0x2b477cu: goto label_2b477c;
        case 0x2b4780u: goto label_2b4780;
        case 0x2b4784u: goto label_2b4784;
        case 0x2b4788u: goto label_2b4788;
        case 0x2b478cu: goto label_2b478c;
        case 0x2b4790u: goto label_2b4790;
        case 0x2b4794u: goto label_2b4794;
        case 0x2b4798u: goto label_2b4798;
        case 0x2b479cu: goto label_2b479c;
        case 0x2b47a0u: goto label_2b47a0;
        case 0x2b47a4u: goto label_2b47a4;
        case 0x2b47a8u: goto label_2b47a8;
        case 0x2b47acu: goto label_2b47ac;
        case 0x2b47b0u: goto label_2b47b0;
        case 0x2b47b4u: goto label_2b47b4;
        case 0x2b47b8u: goto label_2b47b8;
        case 0x2b47bcu: goto label_2b47bc;
        case 0x2b47c0u: goto label_2b47c0;
        case 0x2b47c4u: goto label_2b47c4;
        case 0x2b47c8u: goto label_2b47c8;
        case 0x2b47ccu: goto label_2b47cc;
        case 0x2b47d0u: goto label_2b47d0;
        case 0x2b47d4u: goto label_2b47d4;
        case 0x2b47d8u: goto label_2b47d8;
        case 0x2b47dcu: goto label_2b47dc;
        case 0x2b47e0u: goto label_2b47e0;
        case 0x2b47e4u: goto label_2b47e4;
        case 0x2b47e8u: goto label_2b47e8;
        case 0x2b47ecu: goto label_2b47ec;
        case 0x2b47f0u: goto label_2b47f0;
        case 0x2b47f4u: goto label_2b47f4;
        case 0x2b47f8u: goto label_2b47f8;
        case 0x2b47fcu: goto label_2b47fc;
        case 0x2b4800u: goto label_2b4800;
        case 0x2b4804u: goto label_2b4804;
        case 0x2b4808u: goto label_2b4808;
        case 0x2b480cu: goto label_2b480c;
        case 0x2b4810u: goto label_2b4810;
        case 0x2b4814u: goto label_2b4814;
        case 0x2b4818u: goto label_2b4818;
        case 0x2b481cu: goto label_2b481c;
        case 0x2b4820u: goto label_2b4820;
        case 0x2b4824u: goto label_2b4824;
        case 0x2b4828u: goto label_2b4828;
        case 0x2b482cu: goto label_2b482c;
        case 0x2b4830u: goto label_2b4830;
        case 0x2b4834u: goto label_2b4834;
        case 0x2b4838u: goto label_2b4838;
        case 0x2b483cu: goto label_2b483c;
        case 0x2b4840u: goto label_2b4840;
        case 0x2b4844u: goto label_2b4844;
        case 0x2b4848u: goto label_2b4848;
        case 0x2b484cu: goto label_2b484c;
        case 0x2b4850u: goto label_2b4850;
        case 0x2b4854u: goto label_2b4854;
        default: return;
    }

label_2b4088:
    // 0x2b4088: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4088u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b408c:
    // 0x2b408c: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b408cu;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4090:
    // 0x2b4090: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b4090u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B4090 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4094:
    // 0x2b4094: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b4094u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b4098:
    // 0x2b4098: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4098u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b409c:
    // 0x2b409c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b409cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b40a0:
    // 0x2b40a0: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b40a0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2b40a4:
    // 0x2b40a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b40a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b40a8:
    // 0x2b40a8: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2b40a8u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b40ac:
    // 0x2b40ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b40acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b40b0:
    // 0x2b40b0: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2b40b4:
    if (ctx->pc == 0x2B40B4u) {
        ctx->pc = 0x2B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40B0u;
        // 0x2b40b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40B8u;
        goto label_2b40b8;
    }
    ctx->pc = 0x2B40B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2B40B8u);
        ctx->pc = 0x2B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40B0u;
        // 0x2b40b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B40B0u, 0x2B40B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B40B8u;
label_2b40b8:
    // 0x2b40b8: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2b40b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2b40bc:
    // 0x2b40bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b40bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b40c0:
    // 0x2b40c0: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2b40c4:
    if (ctx->pc == 0x2B40C4u) {
        ctx->pc = 0x2B40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40C0u;
        // 0x2b40c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40C8u;
        goto label_2b40c8;
    }
    ctx->pc = 0x2B40C0u;
    {
        const bool branch_taken_0x2b40c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40C0u;
        // 0x2b40c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40c0) {
            ctx->pc = 0x2B40C4u;
            goto label_2b40c4;
        }
    }
    ctx->pc = 0x2B40C8u;
label_2b40c8:
    // 0x2b40c8: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2b40cc:
    if (ctx->pc == 0x2B40CCu) {
        ctx->pc = 0x2B40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40C8u;
        // 0x2b40cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40D0u;
        goto label_2b40d0;
    }
    ctx->pc = 0x2B40C8u;
    {
        const bool branch_taken_0x2b40c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40C8u;
        // 0x2b40cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40c8) {
            ctx->pc = 0x2B414Cu;
            goto label_2b414c;
        }
    }
    ctx->pc = 0x2B40D0u;
label_2b40d0:
    // 0x2b40d0: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2b40d4:
    if (ctx->pc == 0x2B40D4u) {
        ctx->pc = 0x2B40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D0u;
        // 0x2b40d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40D8u;
        goto label_2b40d8;
    }
    ctx->pc = 0x2B40D0u;
    {
        const bool branch_taken_0x2b40d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D0u;
        // 0x2b40d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40d0) {
            ctx->pc = 0x2B40DCu;
            goto label_2b40dc;
        }
    }
    ctx->pc = 0x2B40D8u;
label_2b40d8:
    // 0x2b40d8: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b40dc:
    if (ctx->pc == 0x2B40DCu) {
        ctx->pc = 0x2B40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D8u;
        // 0x2b40dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40E0u;
        goto label_2b40e0;
    }
    ctx->pc = 0x2B40D8u;
    {
        const bool branch_taken_0x2b40d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D8u;
        // 0x2b40dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40d8) {
            ctx->pc = 0x2BA0DCu;
            { ctx->pc = 0x2ba0dc; return; }
        }
    }
    ctx->pc = 0x2B40E0u;
label_2b40e0:
    // 0x2b40e0: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b40e4:
    if (ctx->pc == 0x2B40E4u) {
        ctx->pc = 0x2B40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40E0u;
        // 0x2b40e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40E8u;
        goto label_2b40e8;
    }
    ctx->pc = 0x2B40E0u;
    {
        const bool branch_taken_0x2b40e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40E0u;
        // 0x2b40e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40e0) {
            ctx->pc = 0x2BA164u;
            { ctx->pc = 0x2ba164; return; }
        }
    }
    ctx->pc = 0x2B40E8u;
label_2b40e8:
    // 0x2b40e8: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2b40ec:
    if (ctx->pc == 0x2B40ECu) {
        ctx->pc = 0x2B40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40E8u;
        // 0x2b40ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40F0u;
        goto label_2b40f0;
    }
    ctx->pc = 0x2B40E8u;
    {
        const bool branch_taken_0x2b40e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40E8u;
        // 0x2b40ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40e8) {
            ctx->pc = 0x2B40F8u;
            goto label_2b40f8;
        }
    }
    ctx->pc = 0x2B40F0u;
label_2b40f0:
    // 0x2b40f0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b40f4:
    if (ctx->pc == 0x2B40F4u) {
        ctx->pc = 0x2B40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40F0u;
        // 0x2b40f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B40F8u;
        goto label_2b40f8;
    }
    ctx->pc = 0x2B40F0u;
    {
        const bool branch_taken_0x2b40f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40F0u;
        // 0x2b40f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40f0) {
            ctx->pc = 0x2B40F4u;
            goto label_2b40f4;
        }
    }
    ctx->pc = 0x2B40F8u;
label_2b40f8:
    // 0x2b40f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b40f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b40fc:
    // 0x2b40fc: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b40fcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b4100:
    // 0x2b4100: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b4100u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b4104:
    // 0x2b4104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4108:
    // 0x2b4108: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b4108u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b410c:
    // 0x2b410c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b410cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4110:
    // 0x2b4110: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b4110u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b4114:
    // 0x2b4114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4118:
    // 0x2b4118: 0x42020081  .word       0x42020081                   # tlbr # 00020080 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4118u;
    runtime->handleTLBR(rdram, ctx);
label_2b411c:
    // 0x2b411c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b411cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4120:
    // 0x2b4120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4124:
    // 0x2b4124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4128:
    // 0x2b4128: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b412c:
    if (ctx->pc == 0x2B412Cu) {
        ctx->pc = 0x2B412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4128u;
        // 0x2b412c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4130u;
        goto label_2b4130;
    }
    ctx->pc = 0x2B4128u;
    {
        const bool branch_taken_0x2b4128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4128u;
        // 0x2b412c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4128) {
            ctx->pc = 0x2C8130u;
            return;
        }
    }
    ctx->pc = 0x2B4130u;
label_2b4130:
    // 0x2b4130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4134:
    // 0x2b4134: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4134u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4138:
    // 0x2b4138: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b413c:
    if (ctx->pc == 0x2B413Cu) {
        ctx->pc = 0x2B413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4138u;
        // 0x2b413c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4140u;
        goto label_2b4140;
    }
    ctx->pc = 0x2B4138u;
    {
        const bool branch_taken_0x2b4138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b4138) {
            ctx->pc = 0x2B413Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4138u;
            // 0x2b413c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6128u;
            { ctx->pc = 0x2b6128; return; }
        }
    }
    ctx->pc = 0x2B4140u;
label_2b4140:
    // 0x2b4140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4144:
    // 0x2b4144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4148:
    // 0x2b4148: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b414c:
    if (ctx->pc == 0x2B414Cu) {
        ctx->pc = 0x2B414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4148u;
        // 0x2b414c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4150u;
        goto label_2b4150;
    }
    ctx->pc = 0x2B4148u;
    {
        const bool branch_taken_0x2b4148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4148u;
        // 0x2b414c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4148) {
            ctx->pc = 0x2BA1CCu;
            { ctx->pc = 0x2ba1cc; return; }
        }
    }
    ctx->pc = 0x2B4150u;
label_2b4150:
    // 0x2b4150: 0x42020071  .word       0x42020071                   # INVALID     $s0, $v0, 0x71 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4150u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x31 at 0x2B4150 raw=0x42020071"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4154:
    // 0x2b4154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4158:
    // 0x2b4158: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4158u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b415c:
    // 0x2b415c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b415cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4160:
    // 0x2b4160: 0x500b006d  beql        $zero, $t3, . + 4 + (0x6D << 2)
label_2b4164:
    if (ctx->pc == 0x2B4164u) {
        ctx->pc = 0x2B4164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4160u;
        // 0x2b4164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4168u;
        goto label_2b4168;
    }
    ctx->pc = 0x2B4160u;
    {
        const bool branch_taken_0x2b4160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b4160) {
            ctx->pc = 0x2B4164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4160u;
            // 0x2b4164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4318u;
            goto label_2b4318;
        }
    }
    ctx->pc = 0x2B4168u;
label_2b4168:
    // 0x2b4168: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4168u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b416c:
    // 0x2b416c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b416cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4170:
    // 0x2b4170: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2b4174:
    if (ctx->pc == 0x2B4174u) {
        ctx->pc = 0x2B4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4170u;
        // 0x2b4174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4178u;
        goto label_2b4178;
    }
    ctx->pc = 0x2B4170u;
    {
        const bool branch_taken_0x2b4170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4170u;
        // 0x2b4174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4170) {
            ctx->pc = 0x2B4374u;
            goto label_2b4374;
        }
    }
    ctx->pc = 0x2B4178u;
label_2b4178:
    // 0x2b4178: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2b417c:
    if (ctx->pc == 0x2B417Cu) {
        ctx->pc = 0x2B417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4178u;
        // 0x2b417c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4180u;
        goto label_2b4180;
    }
    ctx->pc = 0x2B4178u;
    {
        const bool branch_taken_0x2b4178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4178u;
        // 0x2b417c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4178) {
            ctx->pc = 0x2B4184u;
            goto label_2b4184;
        }
    }
    ctx->pc = 0x2B4180u;
label_2b4180:
    // 0x2b4180: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b4184:
    if (ctx->pc == 0x2B4184u) {
        ctx->pc = 0x2B4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4180u;
        // 0x2b4184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4188u;
        goto label_2b4188;
    }
    ctx->pc = 0x2B4180u;
    {
        const bool branch_taken_0x2b4180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4180u;
        // 0x2b4184: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4180) {
            ctx->pc = 0x2B4184u;
            goto label_2b4184;
        }
    }
    ctx->pc = 0x2B4188u;
label_2b4188:
    // 0x2b4188: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b418c:
    if (ctx->pc == 0x2B418Cu) {
        ctx->pc = 0x2B418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4188u;
        // 0x2b418c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4190u;
        goto label_2b4190;
    }
    ctx->pc = 0x2B4188u;
    {
        const bool branch_taken_0x2b4188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4188u;
        // 0x2b418c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4188) {
            ctx->pc = 0x2BA20Cu;
            { ctx->pc = 0x2ba20c; return; }
        }
    }
    ctx->pc = 0x2B4190u;
label_2b4190:
    // 0x2b4190: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2b4194:
    if (ctx->pc == 0x2B4194u) {
        ctx->pc = 0x2B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4190u;
        // 0x2b4194: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4198u;
        goto label_2b4198;
    }
    ctx->pc = 0x2B4190u;
    {
        const bool branch_taken_0x2b4190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4190u;
        // 0x2b4194: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4190) {
            ctx->pc = 0x2BA194u;
            { ctx->pc = 0x2ba194; return; }
        }
    }
    ctx->pc = 0x2B4198u;
label_2b4198:
    // 0x2b4198: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b4198u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b419c:
    // 0x2b419c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b419cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41a0:
    // 0x2b41a0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b41a4:
    if (ctx->pc == 0x2B41A4u) {
        ctx->pc = 0x2B41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41A0u;
        // 0x2b41a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B41A8u;
        goto label_2b41a8;
    }
    ctx->pc = 0x2B41A0u;
    {
        const bool branch_taken_0x2b41a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41A0u;
        // 0x2b41a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41a0) {
            ctx->pc = 0x2B41A4u;
            goto label_2b41a4;
        }
    }
    ctx->pc = 0x2B41A8u;
label_2b41a8:
    // 0x2b41a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b41a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b41ac:
    // 0x2b41ac: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b41acu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b41b0:
    // 0x2b41b0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b41b0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b41b4:
    // 0x2b41b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41b8:
    // 0x2b41b8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b41b8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b41bc:
    // 0x2b41bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41c0:
    // 0x2b41c0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b41c0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b41c4:
    // 0x2b41c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41c8:
    // 0x2b41c8: 0x4202006b  .word       0x4202006B                   # INVALID     $s0, $v0, 0x6B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b41c8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2B at 0x2B41C8 raw=0x4202006B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b41cc:
    // 0x2b41cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41d0:
    // 0x2b41d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b41d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b41d4:
    // 0x2b41d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41d8:
    // 0x2b41d8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b41dc:
    if (ctx->pc == 0x2B41DCu) {
        ctx->pc = 0x2B41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41D8u;
        // 0x2b41dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B41E0u;
        goto label_2b41e0;
    }
    ctx->pc = 0x2B41D8u;
    {
        const bool branch_taken_0x2b41d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41D8u;
        // 0x2b41dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41d8) {
            ctx->pc = 0x2C81E0u;
            return;
        }
    }
    ctx->pc = 0x2B41E0u;
label_2b41e0:
    // 0x2b41e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b41e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b41e4:
    // 0x2b41e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41e8:
    // 0x2b41e8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b41ec:
    if (ctx->pc == 0x2B41ECu) {
        ctx->pc = 0x2B41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41E8u;
        // 0x2b41ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B41F0u;
        goto label_2b41f0;
    }
    ctx->pc = 0x2B41E8u;
    {
        const bool branch_taken_0x2b41e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b41e8) {
            ctx->pc = 0x2B41ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B41E8u;
            // 0x2b41ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B61D8u;
            { ctx->pc = 0x2b61d8; return; }
        }
    }
    ctx->pc = 0x2B41F0u;
label_2b41f0:
    // 0x2b41f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b41f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b41f4:
    // 0x2b41f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b41f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b41f8:
    // 0x2b41f8: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b41fc:
    if (ctx->pc == 0x2B41FCu) {
        ctx->pc = 0x2B41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41F8u;
        // 0x2b41fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4200u;
        goto label_2b4200;
    }
    ctx->pc = 0x2B41F8u;
    {
        const bool branch_taken_0x2b41f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41F8u;
        // 0x2b41fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41f8) {
            ctx->pc = 0x2BA1FCu;
            { ctx->pc = 0x2ba1fc; return; }
        }
    }
    ctx->pc = 0x2B4200u;
label_2b4200:
    // 0x2b4200: 0x4202005b  .word       0x4202005B                   # INVALID     $s0, $v0, 0x5B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4200u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2B4200 raw=0x4202005B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4204:
    // 0x2b4204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4208:
    // 0x2b4208: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4208u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b420c:
    // 0x2b420c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b420cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4210:
    // 0x2b4210: 0x500b0057  beql        $zero, $t3, . + 4 + (0x57 << 2)
label_2b4214:
    if (ctx->pc == 0x2B4214u) {
        ctx->pc = 0x2B4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4210u;
        // 0x2b4214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4218u;
        goto label_2b4218;
    }
    ctx->pc = 0x2B4210u;
    {
        const bool branch_taken_0x2b4210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b4210) {
            ctx->pc = 0x2B4214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4210u;
            // 0x2b4214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4370u;
            goto label_2b4370;
        }
    }
    ctx->pc = 0x2B4218u;
label_2b4218:
    // 0x2b4218: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4218u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b421c:
    // 0x2b421c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b421cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4220:
    // 0x2b4220: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2b4224:
    if (ctx->pc == 0x2B4224u) {
        ctx->pc = 0x2B4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4220u;
        // 0x2b4224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4228u;
        goto label_2b4228;
    }
    ctx->pc = 0x2B4220u;
    {
        const bool branch_taken_0x2b4220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4220u;
        // 0x2b4224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4220) {
            ctx->pc = 0x2B4324u;
            goto label_2b4324;
        }
    }
    ctx->pc = 0x2B4228u;
label_2b4228:
    // 0x2b4228: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2b422c:
    if (ctx->pc == 0x2B422Cu) {
        ctx->pc = 0x2B422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4228u;
        // 0x2b422c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4230u;
        goto label_2b4230;
    }
    ctx->pc = 0x2B4228u;
    {
        const bool branch_taken_0x2b4228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4228u;
        // 0x2b422c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4228) {
            ctx->pc = 0x2B4230u;
            goto label_2b4230;
        }
    }
    ctx->pc = 0x2B4230u;
label_2b4230:
    // 0x2b4230: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2b4234:
    if (ctx->pc == 0x2B4234u) {
        ctx->pc = 0x2B4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4230u;
        // 0x2b4234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4238u;
        goto label_2b4238;
    }
    ctx->pc = 0x2B4230u;
    {
        const bool branch_taken_0x2b4230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B4234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4230u;
        // 0x2b4234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4230) {
            ctx->pc = 0x2B4234u;
            goto label_2b4234;
        }
    }
    ctx->pc = 0x2B4238u;
label_2b4238:
    // 0x2b4238: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b423c:
    if (ctx->pc == 0x2B423Cu) {
        ctx->pc = 0x2B423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4238u;
        // 0x2b423c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4240u;
        goto label_2b4240;
    }
    ctx->pc = 0x2B4238u;
    {
        const bool branch_taken_0x2b4238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4238u;
        // 0x2b423c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4238) {
            ctx->pc = 0x2BA23Cu;
            { ctx->pc = 0x2ba23c; return; }
        }
    }
    ctx->pc = 0x2B4240u;
label_2b4240:
    // 0x2b4240: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b4244:
    if (ctx->pc == 0x2B4244u) {
        ctx->pc = 0x2B4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4240u;
        // 0x2b4244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4248u;
        goto label_2b4248;
    }
    ctx->pc = 0x2B4240u;
    {
        const bool branch_taken_0x2b4240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4240u;
        // 0x2b4244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4240) {
            ctx->pc = 0x2BA2C4u;
            { ctx->pc = 0x2ba2c4; return; }
        }
    }
    ctx->pc = 0x2B4248u;
label_2b4248:
    // 0x2b4248: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b4248u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b424c:
    // 0x2b424c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b424cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4250:
    // 0x2b4250: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b4254:
    if (ctx->pc == 0x2B4254u) {
        ctx->pc = 0x2B4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4250u;
        // 0x2b4254: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4258u;
        goto label_2b4258;
    }
    ctx->pc = 0x2B4250u;
    {
        const bool branch_taken_0x2b4250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4250u;
        // 0x2b4254: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4250) {
            ctx->pc = 0x2B4254u;
            goto label_2b4254;
        }
    }
    ctx->pc = 0x2B4258u;
label_2b4258:
    // 0x2b4258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b425c:
    // 0x2b425c: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b425cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2b4260:
    // 0x2b4260: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b4260u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b4264:
    // 0x2b4264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4268:
    // 0x2b4268: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b4268u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b426c:
    // 0x2b426c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b426cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4270:
    // 0x2b4270: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b4270u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b4274:
    // 0x2b4274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4278:
    // 0x2b4278: 0x42020055  .word       0x42020055                   # INVALID     $s0, $v0, 0x55 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4278u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x15 at 0x2B4278 raw=0x42020055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b427c:
    // 0x2b427c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b427cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4280:
    // 0x2b4280: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4280u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4284:
    // 0x2b4284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4288:
    // 0x2b4288: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b428c:
    if (ctx->pc == 0x2B428Cu) {
        ctx->pc = 0x2B428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4288u;
        // 0x2b428c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4290u;
        goto label_2b4290;
    }
    ctx->pc = 0x2B4288u;
    {
        const bool branch_taken_0x2b4288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4288u;
        // 0x2b428c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4288) {
            ctx->pc = 0x2C8290u;
            return;
        }
    }
    ctx->pc = 0x2B4290u;
label_2b4290:
    // 0x2b4290: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4290u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4294:
    // 0x2b4294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4298:
    // 0x2b4298: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b429c:
    if (ctx->pc == 0x2B429Cu) {
        ctx->pc = 0x2B429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4298u;
        // 0x2b429c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B42A0u;
        goto label_2b42a0;
    }
    ctx->pc = 0x2B4298u;
    {
        const bool branch_taken_0x2b4298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b4298) {
            ctx->pc = 0x2B429Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4298u;
            // 0x2b429c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6288u;
            { ctx->pc = 0x2b6288; return; }
        }
    }
    ctx->pc = 0x2B42A0u;
label_2b42a0:
    // 0x2b42a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b42a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b42a4:
    // 0x2b42a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b42a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b42a8:
    // 0x2b42a8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b42ac:
    if (ctx->pc == 0x2B42ACu) {
        ctx->pc = 0x2B42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42A8u;
        // 0x2b42ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B42B0u;
        goto label_2b42b0;
    }
    ctx->pc = 0x2B42A8u;
    {
        const bool branch_taken_0x2b42a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42A8u;
        // 0x2b42ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42a8) {
            ctx->pc = 0x2BA32Cu;
            { ctx->pc = 0x2ba32c; return; }
        }
    }
    ctx->pc = 0x2B42B0u;
label_2b42b0:
    // 0x2b42b0: 0x42020045  .word       0x42020045                   # INVALID     $s0, $v0, 0x45 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b42b0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x5 at 0x2B42B0 raw=0x42020045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b42b4:
    // 0x2b42b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b42b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b42b8:
    // 0x2b42b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b42b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b42bc:
    // 0x2b42bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b42bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b42c0:
    // 0x2b42c0: 0x500b0041  beql        $zero, $t3, . + 4 + (0x41 << 2)
label_2b42c4:
    if (ctx->pc == 0x2B42C4u) {
        ctx->pc = 0x2B42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42C0u;
        // 0x2b42c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B42C8u;
        goto label_2b42c8;
    }
    ctx->pc = 0x2B42C0u;
    {
        const bool branch_taken_0x2b42c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b42c0) {
            ctx->pc = 0x2B42C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B42C0u;
            // 0x2b42c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B43C8u;
            goto label_2b43c8;
        }
    }
    ctx->pc = 0x2B42C8u;
label_2b42c8:
    // 0x2b42c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b42c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b42cc:
    // 0x2b42cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b42ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b42d0:
    // 0x2b42d0: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2b42d4:
    if (ctx->pc == 0x2B42D4u) {
        ctx->pc = 0x2B42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42D0u;
        // 0x2b42d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B42D8u;
        goto label_2b42d8;
    }
    ctx->pc = 0x2B42D0u;
    {
        const bool branch_taken_0x2b42d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42D0u;
        // 0x2b42d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42d0) {
            ctx->pc = 0x2B4AD4u;
            { ctx->pc = 0x2b4ad4; return; }
        }
    }
    ctx->pc = 0x2B42D8u;
label_2b42d8:
    // 0x2b42d8: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2b42dc:
    if (ctx->pc == 0x2B42DCu) {
        ctx->pc = 0x2B42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42D8u;
        // 0x2b42dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B42E0u;
        goto label_2b42e0;
    }
    ctx->pc = 0x2B42D8u;
    {
        const bool branch_taken_0x2b42d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42D8u;
        // 0x2b42dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42d8) {
            ctx->pc = 0x2B42FCu;
            goto label_2b42fc;
        }
    }
    ctx->pc = 0x2B42E0u;
label_2b42e0:
    // 0x2b42e0: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2b42e4:
    if (ctx->pc == 0x2B42E4u) {
        ctx->pc = 0x2B42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42E0u;
        // 0x2b42e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B42E8u;
        goto label_2b42e8;
    }
    ctx->pc = 0x2B42E0u;
    {
        const bool branch_taken_0x2b42e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42E0u;
        // 0x2b42e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42e0) {
            ctx->pc = 0x2B42E8u;
            goto label_2b42e8;
        }
    }
    ctx->pc = 0x2B42E8u;
label_2b42e8:
    // 0x2b42e8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b42ec:
    if (ctx->pc == 0x2B42ECu) {
        ctx->pc = 0x2B42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42E8u;
        // 0x2b42ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B42F0u;
        goto label_2b42f0;
    }
    ctx->pc = 0x2B42E8u;
    {
        const bool branch_taken_0x2b42e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42E8u;
        // 0x2b42ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42e8) {
            ctx->pc = 0x2BA36Cu;
            { ctx->pc = 0x2ba36c; return; }
        }
    }
    ctx->pc = 0x2B42F0u;
label_2b42f0:
    // 0x2b42f0: 0x10091800  beq         $zero, $t1, . + 4 + (0x1800 << 2)
label_2b42f4:
    if (ctx->pc == 0x2B42F4u) {
        ctx->pc = 0x2B42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42F0u;
        // 0x2b42f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B42F8u;
        goto label_2b42f8;
    }
    ctx->pc = 0x2B42F0u;
    {
        const bool branch_taken_0x2b42f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B42F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42F0u;
        // 0x2b42f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42f0) {
            ctx->pc = 0x2BA2F4u;
            { ctx->pc = 0x2ba2f4; return; }
        }
    }
    ctx->pc = 0x2B42F8u;
label_2b42f8:
    // 0x2b42f8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b42f8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b42fc:
    // 0x2b42fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b42fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4300:
    // 0x2b4300: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b4304:
    if (ctx->pc == 0x2B4304u) {
        ctx->pc = 0x2B4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4300u;
        // 0x2b4304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4308u;
        goto label_2b4308;
    }
    ctx->pc = 0x2B4300u;
    {
        const bool branch_taken_0x2b4300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4300u;
        // 0x2b4304: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4300) {
            ctx->pc = 0x2B4304u;
            goto label_2b4304;
        }
    }
    ctx->pc = 0x2B4308u;
label_2b4308:
    // 0x2b4308: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4308u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b430c:
    // 0x2b430c: 0x1000707  .word       0x01000707                   # srav        $zero, $zero, $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b430cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2b4310:
    // 0x2b4310: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b4310u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b4314:
    // 0x2b4314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4318:
    // 0x2b4318: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b4318u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b431c:
    // 0x2b431c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b431cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4320:
    // 0x2b4320: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b4320u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b4324:
    // 0x2b4324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4328:
    // 0x2b4328: 0x4202003f  .word       0x4202003F                   # INVALID     $s0, $v0, 0x3F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4328u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3F at 0x2B4328 raw=0x4202003F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b432c:
    // 0x2b432c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b432cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4330:
    // 0x2b4330: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4330u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4334:
    // 0x2b4334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4338:
    // 0x2b4338: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b433c:
    if (ctx->pc == 0x2B433Cu) {
        ctx->pc = 0x2B433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4338u;
        // 0x2b433c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4340u;
        goto label_2b4340;
    }
    ctx->pc = 0x2B4338u;
    {
        const bool branch_taken_0x2b4338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4338u;
        // 0x2b433c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4338) {
            ctx->pc = 0x2C8340u;
            return;
        }
    }
    ctx->pc = 0x2B4340u;
label_2b4340:
    // 0x2b4340: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4340u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4344:
    // 0x2b4344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4348:
    // 0x2b4348: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b434c:
    if (ctx->pc == 0x2B434Cu) {
        ctx->pc = 0x2B434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4348u;
        // 0x2b434c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4350u;
        goto label_2b4350;
    }
    ctx->pc = 0x2B4348u;
    {
        const bool branch_taken_0x2b4348 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b4348) {
            ctx->pc = 0x2B434Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4348u;
            // 0x2b434c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6338u;
            { ctx->pc = 0x2b6338; return; }
        }
    }
    ctx->pc = 0x2B4350u;
label_2b4350:
    // 0x2b4350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4354:
    // 0x2b4354: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4354u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4358:
    // 0x2b4358: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b435c:
    if (ctx->pc == 0x2B435Cu) {
        ctx->pc = 0x2B435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4358u;
        // 0x2b435c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4360u;
        goto label_2b4360;
    }
    ctx->pc = 0x2B4358u;
    {
        const bool branch_taken_0x2b4358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4358u;
        // 0x2b435c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4358) {
            ctx->pc = 0x2BA35Cu;
            { ctx->pc = 0x2ba35c; return; }
        }
    }
    ctx->pc = 0x2B4360u;
label_2b4360:
    // 0x2b4360: 0x4202002f  .word       0x4202002F                   # INVALID     $s0, $v0, 0x2F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4360u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2F at 0x2B4360 raw=0x4202002F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4364:
    // 0x2b4364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4368:
    // 0x2b4368: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4368u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b436c:
    // 0x2b436c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b436cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4370:
    // 0x2b4370: 0x500b002b  beql        $zero, $t3, . + 4 + (0x2B << 2)
label_2b4374:
    if (ctx->pc == 0x2B4374u) {
        ctx->pc = 0x2B4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4370u;
        // 0x2b4374: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4378u;
        goto label_2b4378;
    }
    ctx->pc = 0x2B4370u;
    {
        const bool branch_taken_0x2b4370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b4370) {
            ctx->pc = 0x2B4374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4370u;
            // 0x2b4374: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4420u;
            goto label_2b4420;
        }
    }
    ctx->pc = 0x2B4378u;
label_2b4378:
    // 0x2b4378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b437c:
    // 0x2b437c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b437cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4380:
    // 0x2b4380: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2b4384:
    if (ctx->pc == 0x2B4384u) {
        ctx->pc = 0x2B4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4380u;
        // 0x2b4384: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4388u;
        goto label_2b4388;
    }
    ctx->pc = 0x2B4380u;
    {
        const bool branch_taken_0x2b4380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4380u;
        // 0x2b4384: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4380) {
            ctx->pc = 0x2B4784u;
            goto label_2b4784;
        }
    }
    ctx->pc = 0x2B4388u;
label_2b4388:
    // 0x2b4388: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2b438c:
    if (ctx->pc == 0x2B438Cu) {
        ctx->pc = 0x2B438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4388u;
        // 0x2b438c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4390u;
        goto label_2b4390;
    }
    ctx->pc = 0x2B4388u;
    {
        const bool branch_taken_0x2b4388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4388u;
        // 0x2b438c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4388) {
            ctx->pc = 0x2B439Cu;
            goto label_2b439c;
        }
    }
    ctx->pc = 0x2B4390u;
label_2b4390:
    // 0x2b4390: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2b4394:
    if (ctx->pc == 0x2B4394u) {
        ctx->pc = 0x2B4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4390u;
        // 0x2b4394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4398u;
        goto label_2b4398;
    }
    ctx->pc = 0x2B4390u;
    {
        const bool branch_taken_0x2b4390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4390u;
        // 0x2b4394: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4390) {
            ctx->pc = 0x2B4398u;
            goto label_2b4398;
        }
    }
    ctx->pc = 0x2B4398u;
label_2b4398:
    // 0x2b4398: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2b439c:
    if (ctx->pc == 0x2B439Cu) {
        ctx->pc = 0x2B439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4398u;
        // 0x2b439c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43A0u;
        goto label_2b43a0;
    }
    ctx->pc = 0x2B4398u;
    {
        const bool branch_taken_0x2b4398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4398u;
        // 0x2b439c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4398) {
            ctx->pc = 0x2BA39Cu;
            { ctx->pc = 0x2ba39c; return; }
        }
    }
    ctx->pc = 0x2B43A0u;
label_2b43a0:
    // 0x2b43a0: 0x10091820  beq         $zero, $t1, . + 4 + (0x1820 << 2)
label_2b43a4:
    if (ctx->pc == 0x2B43A4u) {
        ctx->pc = 0x2B43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43A0u;
        // 0x2b43a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43A8u;
        goto label_2b43a8;
    }
    ctx->pc = 0x2B43A0u;
    {
        const bool branch_taken_0x2b43a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B43A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43A0u;
        // 0x2b43a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43a0) {
            ctx->pc = 0x2BA424u;
            { ctx->pc = 0x2ba424; return; }
        }
    }
    ctx->pc = 0x2B43A8u;
label_2b43a8:
    // 0x2b43a8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b43a8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b43ac:
    // 0x2b43ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b43acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b43b0:
    // 0x2b43b0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b43b4:
    if (ctx->pc == 0x2B43B4u) {
        ctx->pc = 0x2B43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43B0u;
        // 0x2b43b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43B8u;
        goto label_2b43b8;
    }
    ctx->pc = 0x2B43B0u;
    {
        const bool branch_taken_0x2b43b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43B0u;
        // 0x2b43b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43b0) {
            ctx->pc = 0x2B43B4u;
            goto label_2b43b4;
        }
    }
    ctx->pc = 0x2B43B8u;
label_2b43b8:
    // 0x2b43b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b43b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b43bc:
    // 0x2b43bc: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b43bcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2b43c0:
    // 0x2b43c0: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b43c0u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b43c4:
    // 0x2b43c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b43c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b43c8:
    // 0x2b43c8: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b43c8u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b43cc:
    // 0x2b43cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b43ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b43d0:
    // 0x2b43d0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b43d0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b43d4:
    // 0x2b43d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b43d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b43d8:
    // 0x2b43d8: 0x42020029  .word       0x42020029                   # INVALID     $s0, $v0, 0x29 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b43d8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2B43D8 raw=0x42020029"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b43dc:
    // 0x2b43dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b43dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b43e0:
    // 0x2b43e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b43e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b43e4:
    // 0x2b43e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b43e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b43e8:
    // 0x2b43e8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2b43ec:
    if (ctx->pc == 0x2B43ECu) {
        ctx->pc = 0x2B43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43E8u;
        // 0x2b43ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B43F0u;
        goto label_2b43f0;
    }
    ctx->pc = 0x2B43E8u;
    {
        const bool branch_taken_0x2b43e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B43ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43E8u;
        // 0x2b43ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43e8) {
            ctx->pc = 0x2C83F0u;
            return;
        }
    }
    ctx->pc = 0x2B43F0u;
label_2b43f0:
    // 0x2b43f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b43f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b43f4:
    // 0x2b43f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b43f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b43f8:
    // 0x2b43f8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2b43fc:
    if (ctx->pc == 0x2B43FCu) {
        ctx->pc = 0x2B43FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43F8u;
        // 0x2b43fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4400u;
        goto label_2b4400;
    }
    ctx->pc = 0x2B43F8u;
    {
        const bool branch_taken_0x2b43f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b43f8) {
            ctx->pc = 0x2B43FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43F8u;
            // 0x2b43fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B63E8u;
            { ctx->pc = 0x2b63e8; return; }
        }
    }
    ctx->pc = 0x2B4400u;
label_2b4400:
    // 0x2b4400: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4400u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4404:
    // 0x2b4404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4408:
    // 0x2b4408: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b440c:
    if (ctx->pc == 0x2B440Cu) {
        ctx->pc = 0x2B440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4408u;
        // 0x2b440c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4410u;
        goto label_2b4410;
    }
    ctx->pc = 0x2B4408u;
    {
        const bool branch_taken_0x2b4408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4408u;
        // 0x2b440c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4408) {
            ctx->pc = 0x2BA48Cu;
            { ctx->pc = 0x2ba48c; return; }
        }
    }
    ctx->pc = 0x2B4410u;
label_2b4410:
    // 0x2b4410: 0x42020019  .word       0x42020019                   # INVALID     $s0, $v0, 0x19 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4410u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x19 at 0x2B4410 raw=0x42020019"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4414:
    // 0x2b4414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4418:
    // 0x2b4418: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4418u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b441c:
    // 0x2b441c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b441cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4420:
    // 0x2b4420: 0x500b0015  beql        $zero, $t3, . + 4 + (0x15 << 2)
label_2b4424:
    if (ctx->pc == 0x2B4424u) {
        ctx->pc = 0x2B4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4420u;
        // 0x2b4424: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4428u;
        goto label_2b4428;
    }
    ctx->pc = 0x2B4420u;
    {
        const bool branch_taken_0x2b4420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b4420) {
            ctx->pc = 0x2B4424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4420u;
            // 0x2b4424: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4478u;
            goto label_2b4478;
        }
    }
    ctx->pc = 0x2B4428u;
label_2b4428:
    // 0x2b4428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b442c:
    // 0x2b442c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b442cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4430:
    // 0x2b4430: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2b4430u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2b4434:
    // 0x2b4434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4438:
    // 0x2b4438: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b4438u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b443c:
    // 0x2b443c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b443cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4440:
    // 0x2b4440: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2b4444:
    if (ctx->pc == 0x2B4444u) {
        ctx->pc = 0x2B4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4440u;
        // 0x2b4444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4448u;
        goto label_2b4448;
    }
    ctx->pc = 0x2B4440u;
    {
        const bool branch_taken_0x2b4440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4440u;
        // 0x2b4444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4440) {
            ctx->pc = 0x2B4444u;
            goto label_2b4444;
        }
    }
    ctx->pc = 0x2B4448u;
label_2b4448:
    // 0x2b4448: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2b444c:
    if (ctx->pc == 0x2B444Cu) {
        ctx->pc = 0x2B444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4448u;
        // 0x2b444c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4450u;
        goto label_2b4450;
    }
    ctx->pc = 0x2B4448u;
    {
        const bool branch_taken_0x2b4448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4448u;
        // 0x2b444c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4448) {
            ctx->pc = 0x2B45E4u;
            goto label_2b45e4;
        }
    }
    ctx->pc = 0x2B4450u;
label_2b4450:
    // 0x2b4450: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4454:
    // 0x2b4454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4458:
    // 0x2b4458: 0x5203080e  beql        $s0, $v1, . + 4 + (0x80E << 2)
label_2b445c:
    if (ctx->pc == 0x2B445Cu) {
        ctx->pc = 0x2B445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4458u;
        // 0x2b445c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4460u;
        goto label_2b4460;
    }
    ctx->pc = 0x2B4458u;
    {
        const bool branch_taken_0x2b4458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b4458) {
            ctx->pc = 0x2B445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4458u;
            // 0x2b445c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6494u;
            { ctx->pc = 0x2b6494; return; }
        }
    }
    ctx->pc = 0x2B4460u;
label_2b4460:
    // 0x2b4460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4464:
    // 0x2b4464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4468:
    // 0x2b4468: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4468u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b446c:
    // 0x2b446c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b446cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4470:
    // 0x2b4470: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2b4474:
    if (ctx->pc == 0x2B4474u) {
        ctx->pc = 0x2B4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4470u;
        // 0x2b4474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4478u;
        goto label_2b4478;
    }
    ctx->pc = 0x2B4470u;
    {
        const bool branch_taken_0x2b4470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4470u;
        // 0x2b4474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4470) {
            ctx->pc = 0x2BA574u;
            { ctx->pc = 0x2ba574; return; }
        }
    }
    ctx->pc = 0x2B4478u;
label_2b4478:
    // 0x2b4478: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b4478u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b447c:
    // 0x2b447c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b447cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4480:
    // 0x2b4480: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B4480 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4484:
    // 0x2b4484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4488:
    // 0x2b4488: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2b448c:
    if (ctx->pc == 0x2B448Cu) {
        ctx->pc = 0x2B448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4488u;
        // 0x2b448c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4490u;
        goto label_2b4490;
    }
    ctx->pc = 0x2B4488u;
    {
        const bool branch_taken_0x2b4488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4488u;
        // 0x2b448c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4488) {
            ctx->pc = 0x2B8490u;
            { ctx->pc = 0x2b8490; return; }
        }
    }
    ctx->pc = 0x2B4490u;
label_2b4490:
    // 0x2b4490: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2b4494:
    if (ctx->pc == 0x2B4494u) {
        ctx->pc = 0x2B4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4490u;
        // 0x2b4494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4498u;
        goto label_2b4498;
    }
    ctx->pc = 0x2B4490u;
    {
        const bool branch_taken_0x2b4490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4490u;
        // 0x2b4494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4490) {
            ctx->pc = 0x2BA514u;
            { ctx->pc = 0x2ba514; return; }
        }
    }
    ctx->pc = 0x2B4498u;
label_2b4498:
    // 0x2b4498: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2b449c:
    if (ctx->pc == 0x2B449Cu) {
        ctx->pc = 0x2B449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4498u;
        // 0x2b449c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44A0u;
        goto label_2b44a0;
    }
    ctx->pc = 0x2B4498u;
    {
        const bool branch_taken_0x2b4498 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4498u;
        // 0x2b449c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4498) {
            ctx->pc = 0x2CA498u;
            return;
        }
    }
    ctx->pc = 0x2B44A0u;
label_2b44a0:
    // 0x2b44a0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b44a4:
    if (ctx->pc == 0x2B44A4u) {
        ctx->pc = 0x2B44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44A0u;
        // 0x2b44a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44A8u;
        goto label_2b44a8;
    }
    ctx->pc = 0x2B44A0u;
    {
        const bool branch_taken_0x2b44a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44A0u;
        // 0x2b44a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44a0) {
            ctx->pc = 0x2CA4A8u;
            return;
        }
    }
    ctx->pc = 0x2B44A8u;
label_2b44a8:
    // 0x2b44a8: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b44a8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b44ac:
    // 0x2b44ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b44acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b44b0:
    // 0x2b44b0: 0xb0b1000  j           func_C2C4000
label_2b44b4:
    if (ctx->pc == 0x2B44B4u) {
        ctx->pc = 0x2B44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44B0u;
        // 0x2b44b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44B8u;
        goto label_2b44b8;
    }
    ctx->pc = 0x2B44B0u;
    ctx->pc = 0x2B44B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44B0u;
    // 0x2b44b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B44B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B44B8u;
label_2b44b8:
    // 0x2b44b8: 0x42010061  .word       0x42010061                   # INVALID     $s0, $at, 0x61 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b44b8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2B44B8 raw=0x42010061"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b44bc:
    // 0x2b44bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b44bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b44c0:
    // 0x2b44c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b44c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b44c4:
    // 0x2b44c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b44c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b44c8:
    // 0x2b44c8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b44c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b44cc:
    // 0x2b44cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b44ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b44d0:
    // 0x2b44d0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b44d0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B44D0 raw=0x48007800");
 /* MITIGATED */
label_2b44d4:
    // 0x2b44d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b44d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b44d8:
    // 0x2b44d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b44d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b44dc:
    // 0x2b44dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b44dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b44e0:
    // 0x2b44e0: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b44e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2b44e4:
    // 0x2b44e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b44e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b44e8:
    // 0x2b44e8: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b44e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B44E8 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b44ec:
    // 0x2b44ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b44ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b44f0:
    // 0x2b44f0: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b44f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2b44f4:
    // 0x2b44f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b44f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b44f8:
    // 0x2b44f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b44f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b44fc:
    // 0x2b44fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b44fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4500:
    // 0x2b4500: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2b4500u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b4504:
    // 0x2b4504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4508:
    // 0x2b4508: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2b4508u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b450c:
    // 0x2b450c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b450cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4510:
    // 0x2b4510: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2b4510u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b4514:
    // 0x2b4514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4518:
    // 0x2b4518: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b4518u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B4518 raw=0x48001000");
 /* MITIGATED */
label_2b451c:
    // 0x2b451c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b451cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4520:
    // 0x2b4520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4524:
    // 0x2b4524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4528:
    // 0x2b4528: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2b4528u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b452c:
    // 0x2b452c: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b452cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b4530:
    // 0x2b4530: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2b4530u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b4534:
    // 0x2b4534: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b4534u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b4538:
    // 0x2b4538: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2b4538u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2b453c:
    // 0x2b453c: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b453cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2b4540:
    // 0x2b4540: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4540u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4544:
    // 0x2b4544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4548:
    // 0x2b4548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b454c:
    // 0x2b454c: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b454cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2b4550:
    // 0x2b4550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4554:
    // 0x2b4554: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4554u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2b4558:
    // 0x2b4558: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4558u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b455c:
    // 0x2b455c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b455cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4560:
    // 0x2b4560: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4560u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4564:
    // 0x2b4564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4568:
    // 0x2b4568: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4568u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b456c:
    // 0x2b456c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b456cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4570:
    // 0x2b4570: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2b4570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2b4574:
    // 0x2b4574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4578:
    // 0x2b4578: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2b4578u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2b457c:
    // 0x2b457c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b457cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4580:
    // 0x2b4580: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4584:
    // 0x2b4584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4588:
    // 0x2b4588: 0x5004000f  beql        $zero, $a0, . + 4 + (0xF << 2)
label_2b458c:
    if (ctx->pc == 0x2B458Cu) {
        ctx->pc = 0x2B458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4588u;
        // 0x2b458c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4590u;
        goto label_2b4590;
    }
    ctx->pc = 0x2B4588u;
    {
        const bool branch_taken_0x2b4588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b4588) {
            ctx->pc = 0x2B458Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4588u;
            // 0x2b458c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B45C8u;
            goto label_2b45c8;
        }
    }
    ctx->pc = 0x2B4590u;
label_2b4590:
    // 0x2b4590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4594:
    // 0x2b4594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4598:
    // 0x2b4598: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2b4598u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2b459c:
    // 0x2b459c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b459cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b45a0:
    // 0x2b45a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b45a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b45a4:
    // 0x2b45a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b45a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b45a8:
    // 0x2b45a8: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2b45ac:
    if (ctx->pc == 0x2B45ACu) {
        ctx->pc = 0x2B45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45A8u;
        // 0x2b45ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B45B0u;
        goto label_2b45b0;
    }
    ctx->pc = 0x2B45A8u;
    {
        const bool branch_taken_0x2b45a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b45a8) {
            ctx->pc = 0x2B45ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B45A8u;
            // 0x2b45ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B45B8u;
            goto label_2b45b8;
        }
    }
    ctx->pc = 0x2B45B0u;
label_2b45b0:
    // 0x2b45b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b45b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b45b4:
    // 0x2b45b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b45b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b45b8:
    // 0x2b45b8: 0x4000001c  .word       0x4000001C                   # mfc0        $zero, Index # 0000001C <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b45b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b45bc:
    // 0x2b45bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b45bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b45c0:
    // 0x2b45c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b45c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b45c4:
    // 0x2b45c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b45c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b45c8:
    // 0x2b45c8: 0x4201001c  .word       0x4201001C                   # INVALID     $s0, $at, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b45c8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2B45C8 raw=0x4201001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b45cc:
    // 0x2b45cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b45ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b45d0:
    // 0x2b45d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b45d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b45d4:
    // 0x2b45d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b45d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b45d8:
    // 0x2b45d8: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2b45d8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2b45dc:
    // 0x2b45dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b45dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b45e0:
    // 0x2b45e0: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2b45e0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2b45e4:
    // 0x2b45e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b45e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b45e8:
    // 0x2b45e8: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2b45e8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2b45ec:
    // 0x2b45ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b45ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b45f0:
    // 0x2b45f0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b45f4:
    if (ctx->pc == 0x2B45F4u) {
        ctx->pc = 0x2B45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45F0u;
        // 0x2b45f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B45F8u;
        goto label_2b45f8;
    }
    ctx->pc = 0x2B45F0u;
    {
        const bool branch_taken_0x2b45f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45F0u;
        // 0x2b45f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45f0) {
            ctx->pc = 0x2CA5F8u;
            return;
        }
    }
    ctx->pc = 0x2B45F8u;
label_2b45f8:
    // 0x2b45f8: 0x40000014  .word       0x40000014                   # mfc0        $zero, Index # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b45f8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b45fc:
    // 0x2b45fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b45fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4600:
    // 0x2b4600: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4600u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4604:
    // 0x2b4604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4608:
    // 0x2b4608: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2b4608u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2b460c:
    // 0x2b460c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b460cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4610:
    // 0x2b4610: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4610u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4614:
    // 0x2b4614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4618:
    // 0x2b4618: 0x5004000c  beql        $zero, $a0, . + 4 + (0xC << 2)
label_2b461c:
    if (ctx->pc == 0x2B461Cu) {
        ctx->pc = 0x2B461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4618u;
        // 0x2b461c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4620u;
        goto label_2b4620;
    }
    ctx->pc = 0x2B4618u;
    {
        const bool branch_taken_0x2b4618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b4618) {
            ctx->pc = 0x2B461Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4618u;
            // 0x2b461c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B464Cu;
            goto label_2b464c;
        }
    }
    ctx->pc = 0x2B4620u;
label_2b4620:
    // 0x2b4620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4624:
    // 0x2b4624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4628:
    // 0x2b4628: 0x42010010  .word       0x42010010                   # rfe # 00010000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4628u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x10 at 0x2B4628 raw=0x42010010"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b462c:
    // 0x2b462c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b462cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4630:
    // 0x2b4630: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4630u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4634:
    // 0x2b4634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4638:
    // 0x2b4638: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2b4638u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2b463c:
    // 0x2b463c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b463cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4640:
    // 0x2b4640: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2b4640u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2b4644:
    // 0x2b4644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4648:
    // 0x2b4648: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2b4648u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b464c:
    // 0x2b464c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b464cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4650:
    // 0x2b4650: 0x0  nop
    ctx->pc = 0x2b4650u;
    // NOP
label_2b4654:
    // 0x2b4654: 0x4ac50650  vmaxx.yz    $vf25, $vf0, $vf5x
    ctx->pc = 0x2b4654u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_2b4658:
    // 0x2b4658: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2b4658u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2b465c:
    // 0x2b465c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b465cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4660:
    // 0x2b4660: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2b4660u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2b4664:
    // 0x2b4664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4668:
    // 0x2b4668: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2b4668u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2b466c:
    // 0x2b466c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b466cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4670:
    // 0x2b4670: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2b4674:
    if (ctx->pc == 0x2B4674u) {
        ctx->pc = 0x2B4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4670u;
        // 0x2b4674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4678u;
        goto label_2b4678;
    }
    ctx->pc = 0x2B4670u;
    {
        const bool branch_taken_0x2b4670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4670u;
        // 0x2b4674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4670) {
            ctx->pc = 0x2CA67Cu;
            return;
        }
    }
    ctx->pc = 0x2B4678u;
label_2b4678:
    // 0x2b4678: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b4678u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b467c:
    // 0x2b467c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b467cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4680:
    // 0x2b4680: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4680u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4684:
    // 0x2b4684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4688:
    // 0x2b4688: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2b4688u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2b468c:
    // 0x2b468c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b468cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4690:
    // 0x2b4690: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2b4690u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2b4694:
    // 0x2b4694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4698:
    // 0x2b4698: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2b4698u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b469c:
    // 0x2b469c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b469cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b46a0:
    // 0x2b46a0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b46a4:
    if (ctx->pc == 0x2B46A4u) {
        ctx->pc = 0x2B46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46A0u;
        // 0x2b46a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B46A8u;
        goto label_2b46a8;
    }
    ctx->pc = 0x2B46A0u;
    {
        const bool branch_taken_0x2b46a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B46A0u;
        // 0x2b46a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b46a0) {
            ctx->pc = 0x2CA6A8u;
            return;
        }
    }
    ctx->pc = 0x2B46A8u;
label_2b46a8:
    // 0x2b46a8: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b46a8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B46A8 raw=0x48001000");
 /* MITIGATED */
label_2b46ac:
    // 0x2b46ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b46acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b46b0:
    // 0x2b46b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b46b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b46b4:
    // 0x2b46b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b46b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b46b8:
    // 0x2b46b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b46b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b46bc:
    // 0x2b46bc: 0x3c8e58  .word       0x003C8E58                   # mult        $s1, $at, $gp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b46bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2b46c0:
    // 0x2b46c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b46c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b46c4:
    // 0x2b46c4: 0x3cae98  .word       0x003CAE98                   # mult        $s5, $at, $gp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b46c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2b46c8:
    // 0x2b46c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b46c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b46cc:
    // 0x2b46cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b46ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b46d0:
    // 0x2b46d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b46d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b46d4:
    // 0x2b46d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b46d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b46d8:
    // 0x2b46d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b46d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b46dc:
    // 0x2b46dc: 0x1f98e47  .word       0x01F98E47                   # srav        $s1, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b46dcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2b46e0:
    // 0x2b46e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b46e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b46e4:
    // 0x2b46e4: 0x1faae87  .word       0x01FAAE87                   # srav        $s5, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b46e4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2b46e8:
    // 0x2b46e8: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2b46e8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2b46ec:
    // 0x2b46ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b46ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b46f0:
    // 0x2b46f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b46f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b46f4:
    // 0x2b46f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b46f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b46f8:
    // 0x2b46f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b46f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b46fc:
    // 0x2b46fc: 0x1f9c9fd  .word       0x01F9C9FD                   # INVALID     $t7, $t9, -0x3603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b46fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B46FC raw=0x01F9C9FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4700:
    // 0x2b4700: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4700u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4704:
    // 0x2b4704: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4704u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B4704 raw=0x01FAD1FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4708:
    // 0x2b4708: 0x500c0004  beql        $zero, $t4, . + 4 + (0x4 << 2)
label_2b470c:
    if (ctx->pc == 0x2B470Cu) {
        ctx->pc = 0x2B470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4708u;
        // 0x2b470c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4710u;
        goto label_2b4710;
    }
    ctx->pc = 0x2B4708u;
    {
        const bool branch_taken_0x2b4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2b4708) {
            ctx->pc = 0x2B470Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4708u;
            // 0x2b470c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B471Cu;
            goto label_2b471c;
        }
    }
    ctx->pc = 0x2B4710u;
label_2b4710:
    // 0x2b4710: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2b4714:
    if (ctx->pc == 0x2B4714u) {
        ctx->pc = 0x2B4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4710u;
        // 0x2b4714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4718u;
        goto label_2b4718;
    }
    ctx->pc = 0x2B4710u;
    {
        const bool branch_taken_0x2b4710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4710u;
        // 0x2b4714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4710) {
            ctx->pc = 0x2CC718u;
            return;
        }
    }
    ctx->pc = 0x2B4718u;
label_2b4718:
    // 0x2b4718: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2b4718u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2b471c:
    // 0x2b471c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b471cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4720:
    // 0x2b4720: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b4720u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b4724:
    // 0x2b4724: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4724u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4728:
    // 0x2b4728: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2b4728u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2b472c:
    // 0x2b472c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b472cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4730:
    // 0x2b4730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4734:
    // 0x2b4734: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b4734u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2b4738:
    // 0x2b4738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b473c:
    // 0x2b473c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b473cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4740:
    // 0x2b4740: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4740u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4744:
    // 0x2b4744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4748:
    // 0x2b4748: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4748u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b474c:
    // 0x2b474c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b474cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4750:
    // 0x2b4750: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2b4750u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2b4754:
    // 0x2b4754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4758:
    // 0x2b4758: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2b4758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2b475c:
    // 0x2b475c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b475cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4760:
    // 0x2b4760: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4760u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4764:
    // 0x2b4764: 0x1000760  .word       0x01000760                   # add         $zero, $t0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4764u;
    {     int32_t rs_val = GPR_S32(ctx, 8);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2b4768:
    // 0x2b4768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b476c:
    // 0x2b476c: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b476cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2b4770:
    // 0x2b4770: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4770u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4774:
    // 0x2b4774: 0x1f2b6ac  .word       0x01F2B6AC                   # dadd        $s6, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4774u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2b4778:
    // 0x2b4778: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4778u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b477c:
    // 0x2b477c: 0x1f3beec  .word       0x01F3BEEC                   # dadd        $s7, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b477cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2b4780:
    // 0x2b4780: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4780u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4784:
    // 0x2b4784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4788:
    // 0x2b4788: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4788u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b478c:
    // 0x2b478c: 0x1fdce58  .word       0x01FDCE58                   # mult        $t9, $t7, $sp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b478cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2b4790:
    // 0x2b4790: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4790u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4794:
    // 0x2b4794: 0x1fdd698  .word       0x01FDD698                   # mult        $k0, $t7, $sp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b4794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2b4798:
    // 0x2b4798: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4798u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b479c:
    // 0x2b479c: 0x1fdded8  .word       0x01FDDED8                   # mult        $k1, $t7, $sp # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b479cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2b47a0:
    // 0x2b47a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b47a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b47a4:
    // 0x2b47a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b47a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b47a8:
    // 0x2b47a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b47a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b47ac:
    // 0x2b47ac: 0x1f1ce68  .word       0x01F1CE68                   # mfsa        $t9 # 01F10640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b47acu;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2b47b0:
    // 0x2b47b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b47b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b47b4:
    // 0x2b47b4: 0x1f2d6a8  .word       0x01F2D6A8                   # mfsa        $k0 # 01F20680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b47b4u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2b47b8:
    // 0x2b47b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b47b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b47bc:
    // 0x2b47bc: 0x1f3dee8  .word       0x01F3DEE8                   # mfsa        $k1 # 01F306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b47bcu;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2b47c0:
    // 0x2b47c0: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b47c0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B47C0 raw=0x48000800");
 /* MITIGATED */
label_2b47c4:
    // 0x2b47c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b47c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b47c8:
    // 0x2b47c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b47c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b47cc:
    // 0x2b47cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b47ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b47d0:
    // 0x2b47d0: 0x1f1000a  movz        $zero, $t7, $s1
    ctx->pc = 0x2b47d0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2b47d4:
    // 0x2b47d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b47d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b47d8:
    // 0x2b47d8: 0x1f2000b  movn        $zero, $t7, $s2
    ctx->pc = 0x2b47d8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2b47dc:
    // 0x2b47dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b47dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b47e0:
    // 0x2b47e0: 0x1f3000c  .word       0x01F3000C                   # syscall     0 # 01F30000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b47e0u;
    ctx->pc = 0x2B47E4u;
runtime->handleSyscall(rdram, ctx, 0x7CC00u);
label_2b47e4:
    // 0x2b47e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b47e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b47e8:
    // 0x2b47e8: 0x1f4000d  break       500
    ctx->pc = 0x2b47e8u;
    runtime->handleBreak(rdram, ctx);
label_2b47ec:
    // 0x2b47ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b47ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b47f0:
    // 0x2b47f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b47f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b47f4:
    // 0x2b47f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b47f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b47f8:
    // 0x2b47f8: 0x10071001  beq         $zero, $a3, . + 4 + (0x1001 << 2)
label_2b47fc:
    if (ctx->pc == 0x2B47FCu) {
        ctx->pc = 0x2B47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47F8u;
        // 0x2b47fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4800u;
        goto label_2b4800;
    }
    ctx->pc = 0x2B47F8u;
    {
        const bool branch_taken_0x2b47f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47F8u;
        // 0x2b47fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b47f8) {
            ctx->pc = 0x2B8800u;
            { ctx->pc = 0x2b8800; return; }
        }
    }
    ctx->pc = 0x2B4800u;
label_2b4800:
    // 0x2b4800: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2b4804:
    // 0x2b4804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4808:
    // 0x2b4808: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4808u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b480c:
    // 0x2b480c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b480cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4810:
    // 0x2b4810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4814:
    // 0x2b4814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4818:
    // 0x2b4818: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4818u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b481c:
    // 0x2b481c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b481cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4820:
    // 0x2b4820: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4820u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4824:
    // 0x2b4824: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4824u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2b4828:
    // 0x2b4828: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4828u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b482c:
    // 0x2b482c: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b482cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B482C raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4830:
    // 0x2b4830: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4830u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4834:
    // 0x2b4834: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4834u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2b4838:
    // 0x2b4838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b483c:
    // 0x2b483c: 0x1f5a64b  .word       0x01F5A64B                   # movn        $s4, $t7, $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b483cu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2b4840:
    // 0x2b4840: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4840u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4844:
    // 0x2b4844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4848:
    // 0x2b4848: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4848u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b484c:
    // 0x2b484c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b484cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4850:
    // 0x2b4850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4854:
    // 0x2b4854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2b4858u;
    return;
}

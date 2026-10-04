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


void FUN_0014eba0_part176(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1a4570u: goto label_1a4570;
        case 0x1a4574u: goto label_1a4574;
        case 0x1a4578u: goto label_1a4578;
        case 0x1a457cu: goto label_1a457c;
        case 0x1a4580u: goto label_1a4580;
        case 0x1a4584u: goto label_1a4584;
        case 0x1a4588u: goto label_1a4588;
        case 0x1a458cu: goto label_1a458c;
        case 0x1a4590u: goto label_1a4590;
        case 0x1a4594u: goto label_1a4594;
        case 0x1a4598u: goto label_1a4598;
        case 0x1a459cu: goto label_1a459c;
        case 0x1a45a0u: goto label_1a45a0;
        case 0x1a45a4u: goto label_1a45a4;
        case 0x1a45a8u: goto label_1a45a8;
        case 0x1a45acu: goto label_1a45ac;
        case 0x1a45b0u: goto label_1a45b0;
        case 0x1a45b4u: goto label_1a45b4;
        case 0x1a45b8u: goto label_1a45b8;
        case 0x1a45bcu: goto label_1a45bc;
        case 0x1a45c0u: goto label_1a45c0;
        case 0x1a45c4u: goto label_1a45c4;
        case 0x1a45c8u: goto label_1a45c8;
        case 0x1a45ccu: goto label_1a45cc;
        case 0x1a45d0u: goto label_1a45d0;
        case 0x1a45d4u: goto label_1a45d4;
        case 0x1a45d8u: goto label_1a45d8;
        case 0x1a45dcu: goto label_1a45dc;
        case 0x1a45e0u: goto label_1a45e0;
        case 0x1a45e4u: goto label_1a45e4;
        case 0x1a45e8u: goto label_1a45e8;
        case 0x1a45ecu: goto label_1a45ec;
        case 0x1a45f0u: goto label_1a45f0;
        case 0x1a45f4u: goto label_1a45f4;
        case 0x1a45f8u: goto label_1a45f8;
        case 0x1a45fcu: goto label_1a45fc;
        case 0x1a4600u: goto label_1a4600;
        case 0x1a4604u: goto label_1a4604;
        case 0x1a4608u: goto label_1a4608;
        case 0x1a460cu: goto label_1a460c;
        case 0x1a4610u: goto label_1a4610;
        case 0x1a4614u: goto label_1a4614;
        case 0x1a4618u: goto label_1a4618;
        case 0x1a461cu: goto label_1a461c;
        case 0x1a4620u: goto label_1a4620;
        case 0x1a4624u: goto label_1a4624;
        case 0x1a4628u: goto label_1a4628;
        case 0x1a462cu: goto label_1a462c;
        case 0x1a4630u: goto label_1a4630;
        case 0x1a4634u: goto label_1a4634;
        case 0x1a4638u: goto label_1a4638;
        case 0x1a463cu: goto label_1a463c;
        case 0x1a4640u: goto label_1a4640;
        case 0x1a4644u: goto label_1a4644;
        case 0x1a4648u: goto label_1a4648;
        case 0x1a464cu: goto label_1a464c;
        case 0x1a4650u: goto label_1a4650;
        case 0x1a4654u: goto label_1a4654;
        case 0x1a4658u: goto label_1a4658;
        case 0x1a465cu: goto label_1a465c;
        case 0x1a4660u: goto label_1a4660;
        case 0x1a4664u: goto label_1a4664;
        case 0x1a4668u: goto label_1a4668;
        case 0x1a466cu: goto label_1a466c;
        case 0x1a4670u: goto label_1a4670;
        case 0x1a4674u: goto label_1a4674;
        case 0x1a4678u: goto label_1a4678;
        case 0x1a467cu: goto label_1a467c;
        case 0x1a4680u: goto label_1a4680;
        case 0x1a4684u: goto label_1a4684;
        case 0x1a4688u: goto label_1a4688;
        case 0x1a468cu: goto label_1a468c;
        case 0x1a4690u: goto label_1a4690;
        case 0x1a4694u: goto label_1a4694;
        case 0x1a4698u: goto label_1a4698;
        case 0x1a469cu: goto label_1a469c;
        case 0x1a46a0u: goto label_1a46a0;
        case 0x1a46a4u: goto label_1a46a4;
        case 0x1a46a8u: goto label_1a46a8;
        case 0x1a46acu: goto label_1a46ac;
        case 0x1a46b0u: goto label_1a46b0;
        case 0x1a46b4u: goto label_1a46b4;
        case 0x1a46b8u: goto label_1a46b8;
        case 0x1a46bcu: goto label_1a46bc;
        case 0x1a46c0u: goto label_1a46c0;
        case 0x1a46c4u: goto label_1a46c4;
        case 0x1a46c8u: goto label_1a46c8;
        case 0x1a46ccu: goto label_1a46cc;
        case 0x1a46d0u: goto label_1a46d0;
        case 0x1a46d4u: goto label_1a46d4;
        case 0x1a46d8u: goto label_1a46d8;
        case 0x1a46dcu: goto label_1a46dc;
        case 0x1a46e0u: goto label_1a46e0;
        case 0x1a46e4u: goto label_1a46e4;
        case 0x1a46e8u: goto label_1a46e8;
        case 0x1a46ecu: goto label_1a46ec;
        case 0x1a46f0u: goto label_1a46f0;
        case 0x1a46f4u: goto label_1a46f4;
        case 0x1a46f8u: goto label_1a46f8;
        case 0x1a46fcu: goto label_1a46fc;
        case 0x1a4700u: goto label_1a4700;
        case 0x1a4704u: goto label_1a4704;
        case 0x1a4708u: goto label_1a4708;
        case 0x1a470cu: goto label_1a470c;
        case 0x1a4710u: goto label_1a4710;
        case 0x1a4714u: goto label_1a4714;
        case 0x1a4718u: goto label_1a4718;
        case 0x1a471cu: goto label_1a471c;
        case 0x1a4720u: goto label_1a4720;
        case 0x1a4724u: goto label_1a4724;
        case 0x1a4728u: goto label_1a4728;
        case 0x1a472cu: goto label_1a472c;
        case 0x1a4730u: goto label_1a4730;
        case 0x1a4734u: goto label_1a4734;
        case 0x1a4738u: goto label_1a4738;
        case 0x1a473cu: goto label_1a473c;
        case 0x1a4740u: goto label_1a4740;
        case 0x1a4744u: goto label_1a4744;
        case 0x1a4748u: goto label_1a4748;
        case 0x1a474cu: goto label_1a474c;
        case 0x1a4750u: goto label_1a4750;
        case 0x1a4754u: goto label_1a4754;
        case 0x1a4758u: goto label_1a4758;
        case 0x1a475cu: goto label_1a475c;
        case 0x1a4760u: goto label_1a4760;
        case 0x1a4764u: goto label_1a4764;
        case 0x1a4768u: goto label_1a4768;
        case 0x1a476cu: goto label_1a476c;
        case 0x1a4770u: goto label_1a4770;
        case 0x1a4774u: goto label_1a4774;
        case 0x1a4778u: goto label_1a4778;
        case 0x1a477cu: goto label_1a477c;
        case 0x1a4780u: goto label_1a4780;
        case 0x1a4784u: goto label_1a4784;
        case 0x1a4788u: goto label_1a4788;
        case 0x1a478cu: goto label_1a478c;
        case 0x1a4790u: goto label_1a4790;
        case 0x1a4794u: goto label_1a4794;
        case 0x1a4798u: goto label_1a4798;
        case 0x1a479cu: goto label_1a479c;
        case 0x1a47a0u: goto label_1a47a0;
        case 0x1a47a4u: goto label_1a47a4;
        case 0x1a47a8u: goto label_1a47a8;
        case 0x1a47acu: goto label_1a47ac;
        case 0x1a47b0u: goto label_1a47b0;
        case 0x1a47b4u: goto label_1a47b4;
        case 0x1a47b8u: goto label_1a47b8;
        case 0x1a47bcu: goto label_1a47bc;
        case 0x1a47c0u: goto label_1a47c0;
        case 0x1a47c4u: goto label_1a47c4;
        case 0x1a47c8u: goto label_1a47c8;
        case 0x1a47ccu: goto label_1a47cc;
        case 0x1a47d0u: goto label_1a47d0;
        case 0x1a47d4u: goto label_1a47d4;
        case 0x1a47d8u: goto label_1a47d8;
        case 0x1a47dcu: goto label_1a47dc;
        case 0x1a47e0u: goto label_1a47e0;
        case 0x1a47e4u: goto label_1a47e4;
        case 0x1a47e8u: goto label_1a47e8;
        case 0x1a47ecu: goto label_1a47ec;
        case 0x1a47f0u: goto label_1a47f0;
        case 0x1a47f4u: goto label_1a47f4;
        case 0x1a47f8u: goto label_1a47f8;
        case 0x1a47fcu: goto label_1a47fc;
        case 0x1a4800u: goto label_1a4800;
        case 0x1a4804u: goto label_1a4804;
        case 0x1a4808u: goto label_1a4808;
        case 0x1a480cu: goto label_1a480c;
        case 0x1a4810u: goto label_1a4810;
        case 0x1a4814u: goto label_1a4814;
        case 0x1a4818u: goto label_1a4818;
        case 0x1a481cu: goto label_1a481c;
        case 0x1a4820u: goto label_1a4820;
        case 0x1a4824u: goto label_1a4824;
        case 0x1a4828u: goto label_1a4828;
        case 0x1a482cu: goto label_1a482c;
        case 0x1a4830u: goto label_1a4830;
        case 0x1a4834u: goto label_1a4834;
        case 0x1a4838u: goto label_1a4838;
        case 0x1a483cu: goto label_1a483c;
        case 0x1a4840u: goto label_1a4840;
        case 0x1a4844u: goto label_1a4844;
        case 0x1a4848u: goto label_1a4848;
        case 0x1a484cu: goto label_1a484c;
        case 0x1a4850u: goto label_1a4850;
        case 0x1a4854u: goto label_1a4854;
        case 0x1a4858u: goto label_1a4858;
        case 0x1a485cu: goto label_1a485c;
        case 0x1a4860u: goto label_1a4860;
        case 0x1a4864u: goto label_1a4864;
        case 0x1a4868u: goto label_1a4868;
        case 0x1a486cu: goto label_1a486c;
        case 0x1a4870u: goto label_1a4870;
        case 0x1a4874u: goto label_1a4874;
        case 0x1a4878u: goto label_1a4878;
        case 0x1a487cu: goto label_1a487c;
        case 0x1a4880u: goto label_1a4880;
        case 0x1a4884u: goto label_1a4884;
        case 0x1a4888u: goto label_1a4888;
        case 0x1a488cu: goto label_1a488c;
        case 0x1a4890u: goto label_1a4890;
        case 0x1a4894u: goto label_1a4894;
        case 0x1a4898u: goto label_1a4898;
        case 0x1a489cu: goto label_1a489c;
        case 0x1a48a0u: goto label_1a48a0;
        case 0x1a48a4u: goto label_1a48a4;
        case 0x1a48a8u: goto label_1a48a8;
        case 0x1a48acu: goto label_1a48ac;
        case 0x1a48b0u: goto label_1a48b0;
        case 0x1a48b4u: goto label_1a48b4;
        case 0x1a48b8u: goto label_1a48b8;
        case 0x1a48bcu: goto label_1a48bc;
        case 0x1a48c0u: goto label_1a48c0;
        case 0x1a48c4u: goto label_1a48c4;
        case 0x1a48c8u: goto label_1a48c8;
        case 0x1a48ccu: goto label_1a48cc;
        case 0x1a48d0u: goto label_1a48d0;
        case 0x1a48d4u: goto label_1a48d4;
        case 0x1a48d8u: goto label_1a48d8;
        case 0x1a48dcu: goto label_1a48dc;
        case 0x1a48e0u: goto label_1a48e0;
        case 0x1a48e4u: goto label_1a48e4;
        case 0x1a48e8u: goto label_1a48e8;
        case 0x1a48ecu: goto label_1a48ec;
        case 0x1a48f0u: goto label_1a48f0;
        case 0x1a48f4u: goto label_1a48f4;
        case 0x1a48f8u: goto label_1a48f8;
        case 0x1a48fcu: goto label_1a48fc;
        case 0x1a4900u: goto label_1a4900;
        case 0x1a4904u: goto label_1a4904;
        case 0x1a4908u: goto label_1a4908;
        case 0x1a490cu: goto label_1a490c;
        case 0x1a4910u: goto label_1a4910;
        case 0x1a4914u: goto label_1a4914;
        case 0x1a4918u: goto label_1a4918;
        case 0x1a491cu: goto label_1a491c;
        case 0x1a4920u: goto label_1a4920;
        case 0x1a4924u: goto label_1a4924;
        case 0x1a4928u: goto label_1a4928;
        case 0x1a492cu: goto label_1a492c;
        case 0x1a4930u: goto label_1a4930;
        case 0x1a4934u: goto label_1a4934;
        case 0x1a4938u: goto label_1a4938;
        case 0x1a493cu: goto label_1a493c;
        case 0x1a4940u: goto label_1a4940;
        case 0x1a4944u: goto label_1a4944;
        case 0x1a4948u: goto label_1a4948;
        case 0x1a494cu: goto label_1a494c;
        case 0x1a4950u: goto label_1a4950;
        case 0x1a4954u: goto label_1a4954;
        case 0x1a4958u: goto label_1a4958;
        case 0x1a495cu: goto label_1a495c;
        case 0x1a4960u: goto label_1a4960;
        case 0x1a4964u: goto label_1a4964;
        case 0x1a4968u: goto label_1a4968;
        case 0x1a496cu: goto label_1a496c;
        case 0x1a4970u: goto label_1a4970;
        case 0x1a4974u: goto label_1a4974;
        case 0x1a4978u: goto label_1a4978;
        case 0x1a497cu: goto label_1a497c;
        case 0x1a4980u: goto label_1a4980;
        case 0x1a4984u: goto label_1a4984;
        case 0x1a4988u: goto label_1a4988;
        case 0x1a498cu: goto label_1a498c;
        case 0x1a4990u: goto label_1a4990;
        case 0x1a4994u: goto label_1a4994;
        case 0x1a4998u: goto label_1a4998;
        case 0x1a499cu: goto label_1a499c;
        case 0x1a49a0u: goto label_1a49a0;
        case 0x1a49a4u: goto label_1a49a4;
        case 0x1a49a8u: goto label_1a49a8;
        case 0x1a49acu: goto label_1a49ac;
        case 0x1a49b0u: goto label_1a49b0;
        case 0x1a49b4u: goto label_1a49b4;
        case 0x1a49b8u: goto label_1a49b8;
        case 0x1a49bcu: goto label_1a49bc;
        case 0x1a49c0u: goto label_1a49c0;
        case 0x1a49c4u: goto label_1a49c4;
        case 0x1a49c8u: goto label_1a49c8;
        case 0x1a49ccu: goto label_1a49cc;
        case 0x1a49d0u: goto label_1a49d0;
        case 0x1a49d4u: goto label_1a49d4;
        case 0x1a49d8u: goto label_1a49d8;
        case 0x1a49dcu: goto label_1a49dc;
        case 0x1a49e0u: goto label_1a49e0;
        case 0x1a49e4u: goto label_1a49e4;
        case 0x1a49e8u: goto label_1a49e8;
        case 0x1a49ecu: goto label_1a49ec;
        case 0x1a49f0u: goto label_1a49f0;
        case 0x1a49f4u: goto label_1a49f4;
        case 0x1a49f8u: goto label_1a49f8;
        case 0x1a49fcu: goto label_1a49fc;
        case 0x1a4a00u: goto label_1a4a00;
        case 0x1a4a04u: goto label_1a4a04;
        case 0x1a4a08u: goto label_1a4a08;
        case 0x1a4a0cu: goto label_1a4a0c;
        case 0x1a4a10u: goto label_1a4a10;
        case 0x1a4a14u: goto label_1a4a14;
        case 0x1a4a18u: goto label_1a4a18;
        case 0x1a4a1cu: goto label_1a4a1c;
        case 0x1a4a20u: goto label_1a4a20;
        case 0x1a4a24u: goto label_1a4a24;
        case 0x1a4a28u: goto label_1a4a28;
        case 0x1a4a2cu: goto label_1a4a2c;
        case 0x1a4a30u: goto label_1a4a30;
        case 0x1a4a34u: goto label_1a4a34;
        case 0x1a4a38u: goto label_1a4a38;
        case 0x1a4a3cu: goto label_1a4a3c;
        case 0x1a4a40u: goto label_1a4a40;
        case 0x1a4a44u: goto label_1a4a44;
        case 0x1a4a48u: goto label_1a4a48;
        case 0x1a4a4cu: goto label_1a4a4c;
        case 0x1a4a50u: goto label_1a4a50;
        case 0x1a4a54u: goto label_1a4a54;
        case 0x1a4a58u: goto label_1a4a58;
        case 0x1a4a5cu: goto label_1a4a5c;
        case 0x1a4a60u: goto label_1a4a60;
        case 0x1a4a64u: goto label_1a4a64;
        case 0x1a4a68u: goto label_1a4a68;
        case 0x1a4a6cu: goto label_1a4a6c;
        case 0x1a4a70u: goto label_1a4a70;
        case 0x1a4a74u: goto label_1a4a74;
        case 0x1a4a78u: goto label_1a4a78;
        case 0x1a4a7cu: goto label_1a4a7c;
        case 0x1a4a80u: goto label_1a4a80;
        case 0x1a4a84u: goto label_1a4a84;
        case 0x1a4a88u: goto label_1a4a88;
        case 0x1a4a8cu: goto label_1a4a8c;
        case 0x1a4a90u: goto label_1a4a90;
        case 0x1a4a94u: goto label_1a4a94;
        case 0x1a4a98u: goto label_1a4a98;
        case 0x1a4a9cu: goto label_1a4a9c;
        default: return;
    }

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
        goto label_1a4570;
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
label_1a4570:
    // 0x1a4570: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1a4570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1a4574:
    // 0x1a4574: 0xc  syscall     0
    ctx->pc = 0x1a4574u;
    ctx->pc = 0x1A4578u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4578:
    // 0x1a4578: 0x3e00008  jr          $ra
label_1a457c:
    if (ctx->pc == 0x1A457Cu) {
        ctx->pc = 0x1A4580u;
        goto label_1a4580;
    }
    ctx->pc = 0x1A4578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4580u;
label_1a4580:
    // 0x1a4580: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x1a4580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1a4584:
    // 0x1a4584: 0xc  syscall     0
    ctx->pc = 0x1a4584u;
    ctx->pc = 0x1A4588u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4588:
    // 0x1a4588: 0x3e00008  jr          $ra
label_1a458c:
    if (ctx->pc == 0x1A458Cu) {
        ctx->pc = 0x1A4590u;
        goto label_1a4590;
    }
    ctx->pc = 0x1A4588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4590u;
label_1a4590:
    // 0x1a4590: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1a4590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1a4594:
    // 0x1a4594: 0xc  syscall     0
    ctx->pc = 0x1a4594u;
    ctx->pc = 0x1A4598u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4598:
    // 0x1a4598: 0x3e00008  jr          $ra
label_1a459c:
    if (ctx->pc == 0x1A459Cu) {
        ctx->pc = 0x1A45A0u;
        goto label_1a45a0;
    }
    ctx->pc = 0x1A4598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A45A0u;
label_1a45a0:
    // 0x1a45a0: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x1a45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1a45a4:
    // 0x1a45a4: 0xc  syscall     0
    ctx->pc = 0x1a45a4u;
    ctx->pc = 0x1A45A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a45a8:
    // 0x1a45a8: 0x3e00008  jr          $ra
label_1a45ac:
    if (ctx->pc == 0x1A45ACu) {
        ctx->pc = 0x1A45B0u;
        goto label_1a45b0;
    }
    ctx->pc = 0x1A45A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A45A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A45B0u;
label_1a45b0:
    // 0x1a45b0: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x1a45b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
label_1a45b4:
    // 0x1a45b4: 0xc  syscall     0
    ctx->pc = 0x1a45b4u;
    ctx->pc = 0x1A45B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a45b8:
    // 0x1a45b8: 0x3e00008  jr          $ra
label_1a45bc:
    if (ctx->pc == 0x1A45BCu) {
        ctx->pc = 0x1A45C0u;
        goto label_1a45c0;
    }
    ctx->pc = 0x1A45B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A45B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A45C0u;
label_1a45c0:
    // 0x1a45c0: 0x2403ffe6  addiu       $v1, $zero, -0x1A
    ctx->pc = 0x1a45c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967270));
label_1a45c4:
    // 0x1a45c4: 0xc  syscall     0
    ctx->pc = 0x1a45c4u;
    ctx->pc = 0x1A45C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a45c8:
    // 0x1a45c8: 0x3e00008  jr          $ra
label_1a45cc:
    if (ctx->pc == 0x1A45CCu) {
        ctx->pc = 0x1A45D0u;
        goto label_1a45d0;
    }
    ctx->pc = 0x1A45C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A45C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A45D0u;
label_1a45d0:
    // 0x1a45d0: 0x2403ffe5  addiu       $v1, $zero, -0x1B
    ctx->pc = 0x1a45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
label_1a45d4:
    // 0x1a45d4: 0xc  syscall     0
    ctx->pc = 0x1a45d4u;
    ctx->pc = 0x1A45D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a45d8:
    // 0x1a45d8: 0x3e00008  jr          $ra
label_1a45dc:
    if (ctx->pc == 0x1A45DCu) {
        ctx->pc = 0x1A45E0u;
        goto label_1a45e0;
    }
    ctx->pc = 0x1A45D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A45D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A45E0u;
label_1a45e0:
    // 0x1a45e0: 0x2403ffe4  addiu       $v1, $zero, -0x1C
    ctx->pc = 0x1a45e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_1a45e4:
    // 0x1a45e4: 0xc  syscall     0
    ctx->pc = 0x1a45e4u;
    ctx->pc = 0x1A45E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a45e8:
    // 0x1a45e8: 0x3e00008  jr          $ra
label_1a45ec:
    if (ctx->pc == 0x1A45ECu) {
        ctx->pc = 0x1A45F0u;
        goto label_1a45f0;
    }
    ctx->pc = 0x1A45E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A45E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A45F0u;
label_1a45f0:
    // 0x1a45f0: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x1a45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
label_1a45f4:
    // 0x1a45f4: 0xc  syscall     0
    ctx->pc = 0x1a45f4u;
    ctx->pc = 0x1A45F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a45f8:
    // 0x1a45f8: 0x3e00008  jr          $ra
label_1a45fc:
    if (ctx->pc == 0x1A45FCu) {
        ctx->pc = 0x1A4600u;
        goto label_1a4600;
    }
    ctx->pc = 0x1A45F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A45F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4600u;
label_1a4600:
    // 0x1a4600: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x1a4600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
label_1a4604:
    // 0x1a4604: 0xc  syscall     0
    ctx->pc = 0x1a4604u;
    ctx->pc = 0x1A4608u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4608:
    // 0x1a4608: 0x3e00008  jr          $ra
label_1a460c:
    if (ctx->pc == 0x1A460Cu) {
        ctx->pc = 0x1A4610u;
        goto label_1a4610;
    }
    ctx->pc = 0x1A4608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4610u;
label_1a4610:
    // 0x1a4610: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x1a4610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
label_1a4614:
    // 0x1a4614: 0xc  syscall     0
    ctx->pc = 0x1a4614u;
    ctx->pc = 0x1A4618u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4618:
    // 0x1a4618: 0x3e00008  jr          $ra
label_1a461c:
    if (ctx->pc == 0x1A461Cu) {
        ctx->pc = 0x1A4620u;
        goto label_1a4620;
    }
    ctx->pc = 0x1A4618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4620u;
label_1a4620:
    // 0x1a4620: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1a4620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a4624:
    // 0x1a4624: 0xc  syscall     0
    ctx->pc = 0x1a4624u;
    ctx->pc = 0x1A4628u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4628:
    // 0x1a4628: 0x3e00008  jr          $ra
label_1a462c:
    if (ctx->pc == 0x1A462Cu) {
        ctx->pc = 0x1A4630u;
        goto label_1a4630;
    }
    ctx->pc = 0x1A4628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4630u;
label_1a4630:
    // 0x1a4630: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1a4630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1a4634:
    // 0x1a4634: 0xc  syscall     0
    ctx->pc = 0x1a4634u;
    ctx->pc = 0x1A4638u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4638:
    // 0x1a4638: 0x3e00008  jr          $ra
label_1a463c:
    if (ctx->pc == 0x1A463Cu) {
        ctx->pc = 0x1A4640u;
        goto label_1a4640;
    }
    ctx->pc = 0x1A4638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4640u;
label_1a4640:
    // 0x1a4640: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x1a4640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1a4644:
    // 0x1a4644: 0xc  syscall     0
    ctx->pc = 0x1a4644u;
    ctx->pc = 0x1A4648u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4648:
    // 0x1a4648: 0x3e00008  jr          $ra
label_1a464c:
    if (ctx->pc == 0x1A464Cu) {
        ctx->pc = 0x1A4650u;
        goto label_1a4650;
    }
    ctx->pc = 0x1A4648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4650u;
label_1a4650:
    // 0x1a4650: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1a4650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1a4654:
    // 0x1a4654: 0xc  syscall     0
    ctx->pc = 0x1a4654u;
    ctx->pc = 0x1A4658u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4658:
    // 0x1a4658: 0x3e00008  jr          $ra
label_1a465c:
    if (ctx->pc == 0x1A465Cu) {
        ctx->pc = 0x1A4660u;
        goto label_1a4660;
    }
    ctx->pc = 0x1A4658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4660u;
label_1a4660:
    // 0x1a4660: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1a4660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1a4664:
    // 0x1a4664: 0xc  syscall     0
    ctx->pc = 0x1a4664u;
    ctx->pc = 0x1A4668u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4668:
    // 0x1a4668: 0x3e00008  jr          $ra
label_1a466c:
    if (ctx->pc == 0x1A466Cu) {
        ctx->pc = 0x1A4670u;
        goto label_1a4670;
    }
    ctx->pc = 0x1A4668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4670u;
label_1a4670:
    // 0x1a4670: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x1a4670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_1a4674:
    // 0x1a4674: 0xc  syscall     0
    ctx->pc = 0x1a4674u;
    ctx->pc = 0x1A4678u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4678:
    // 0x1a4678: 0x3e00008  jr          $ra
label_1a467c:
    if (ctx->pc == 0x1A467Cu) {
        ctx->pc = 0x1A4680u;
        goto label_1a4680;
    }
    ctx->pc = 0x1A4678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4680u;
label_1a4680:
    // 0x1a4680: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x1a4680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
label_1a4684:
    // 0x1a4684: 0xc  syscall     0
    ctx->pc = 0x1a4684u;
    ctx->pc = 0x1A4688u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4688:
    // 0x1a4688: 0x3e00008  jr          $ra
label_1a468c:
    if (ctx->pc == 0x1A468Cu) {
        ctx->pc = 0x1A4690u;
        goto label_1a4690;
    }
    ctx->pc = 0x1A4688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4690u;
label_1a4690:
    // 0x1a4690: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x1a4690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1a4694:
    // 0x1a4694: 0xc  syscall     0
    ctx->pc = 0x1a4694u;
    ctx->pc = 0x1A4698u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4698:
    // 0x1a4698: 0x3e00008  jr          $ra
label_1a469c:
    if (ctx->pc == 0x1A469Cu) {
        ctx->pc = 0x1A46A0u;
        goto label_1a46a0;
    }
    ctx->pc = 0x1A4698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A46A0u;
label_1a46a0:
    // 0x1a46a0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1a46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1a46a4:
    // 0x1a46a4: 0xc  syscall     0
    ctx->pc = 0x1a46a4u;
    ctx->pc = 0x1A46A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a46a8:
    // 0x1a46a8: 0x3e00008  jr          $ra
label_1a46ac:
    if (ctx->pc == 0x1A46ACu) {
        ctx->pc = 0x1A46B0u;
        goto label_1a46b0;
    }
    ctx->pc = 0x1A46A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A46B0u;
label_1a46b0:
    // 0x1a46b0: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1a46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1a46b4:
    // 0x1a46b4: 0xc  syscall     0
    ctx->pc = 0x1a46b4u;
    ctx->pc = 0x1A46B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a46b8:
    // 0x1a46b8: 0x3e00008  jr          $ra
label_1a46bc:
    if (ctx->pc == 0x1A46BCu) {
        ctx->pc = 0x1A46C0u;
        goto label_1a46c0;
    }
    ctx->pc = 0x1A46B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A46C0u;
label_1a46c0:
    // 0x1a46c0: 0x2403ffd6  addiu       $v1, $zero, -0x2A
    ctx->pc = 0x1a46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967254));
label_1a46c4:
    // 0x1a46c4: 0xc  syscall     0
    ctx->pc = 0x1a46c4u;
    ctx->pc = 0x1A46C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a46c8:
    // 0x1a46c8: 0x3e00008  jr          $ra
label_1a46cc:
    if (ctx->pc == 0x1A46CCu) {
        ctx->pc = 0x1A46D0u;
        goto label_1a46d0;
    }
    ctx->pc = 0x1A46C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A46D0u;
label_1a46d0:
    // 0x1a46d0: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x1a46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1a46d4:
    // 0x1a46d4: 0xc  syscall     0
    ctx->pc = 0x1a46d4u;
    ctx->pc = 0x1A46D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a46d8:
    // 0x1a46d8: 0x3e00008  jr          $ra
label_1a46dc:
    if (ctx->pc == 0x1A46DCu) {
        ctx->pc = 0x1A46E0u;
        goto label_1a46e0;
    }
    ctx->pc = 0x1A46D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A46E0u;
label_1a46e0:
    // 0x1a46e0: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x1a46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
label_1a46e4:
    // 0x1a46e4: 0xc  syscall     0
    ctx->pc = 0x1a46e4u;
    ctx->pc = 0x1A46E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a46e8:
    // 0x1a46e8: 0x3e00008  jr          $ra
label_1a46ec:
    if (ctx->pc == 0x1A46ECu) {
        ctx->pc = 0x1A46F0u;
        goto label_1a46f0;
    }
    ctx->pc = 0x1A46E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A46F0u;
label_1a46f0:
    // 0x1a46f0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a46f4:
    // 0x1a46f4: 0xc  syscall     0
    ctx->pc = 0x1a46f4u;
    ctx->pc = 0x1A46F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a46f8:
    // 0x1a46f8: 0x3e00008  jr          $ra
label_1a46fc:
    if (ctx->pc == 0x1A46FCu) {
        ctx->pc = 0x1A4700u;
        goto label_1a4700;
    }
    ctx->pc = 0x1A46F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4700u;
label_1a4700:
    // 0x1a4700: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x1a4700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
label_1a4704:
    // 0x1a4704: 0xc  syscall     0
    ctx->pc = 0x1a4704u;
    ctx->pc = 0x1A4708u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4708:
    // 0x1a4708: 0x3e00008  jr          $ra
label_1a470c:
    if (ctx->pc == 0x1A470Cu) {
        ctx->pc = 0x1A4710u;
        goto label_1a4710;
    }
    ctx->pc = 0x1A4708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4710u;
label_1a4710:
    // 0x1a4710: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1a4710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1a4714:
    // 0x1a4714: 0xc  syscall     0
    ctx->pc = 0x1a4714u;
    ctx->pc = 0x1A4718u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4718:
    // 0x1a4718: 0x3e00008  jr          $ra
label_1a471c:
    if (ctx->pc == 0x1A471Cu) {
        ctx->pc = 0x1A4720u;
        goto label_1a4720;
    }
    ctx->pc = 0x1A4718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4720u;
label_1a4720:
    // 0x1a4720: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1a4720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a4724:
    // 0x1a4724: 0xc  syscall     0
    ctx->pc = 0x1a4724u;
    ctx->pc = 0x1A4728u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4728:
    // 0x1a4728: 0x3e00008  jr          $ra
label_1a472c:
    if (ctx->pc == 0x1A472Cu) {
        ctx->pc = 0x1A4730u;
        goto label_1a4730;
    }
    ctx->pc = 0x1A4728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4730u;
label_1a4730:
    // 0x1a4730: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x1a4730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1a4734:
    // 0x1a4734: 0xc  syscall     0
    ctx->pc = 0x1a4734u;
    ctx->pc = 0x1A4738u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4738:
    // 0x1a4738: 0x3e00008  jr          $ra
label_1a473c:
    if (ctx->pc == 0x1A473Cu) {
        ctx->pc = 0x1A4740u;
        goto label_1a4740;
    }
    ctx->pc = 0x1A4738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4740u;
label_1a4740:
    // 0x1a4740: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1a4740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1a4744:
    // 0x1a4744: 0xc  syscall     0
    ctx->pc = 0x1a4744u;
    ctx->pc = 0x1A4748u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4748:
    // 0x1a4748: 0x3e00008  jr          $ra
label_1a474c:
    if (ctx->pc == 0x1A474Cu) {
        ctx->pc = 0x1A4750u;
        goto label_1a4750;
    }
    ctx->pc = 0x1A4748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4750u;
label_1a4750:
    // 0x1a4750: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x1a4750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1a4754:
    // 0x1a4754: 0xc  syscall     0
    ctx->pc = 0x1a4754u;
    ctx->pc = 0x1A4758u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4758:
    // 0x1a4758: 0x3e00008  jr          $ra
label_1a475c:
    if (ctx->pc == 0x1A475Cu) {
        ctx->pc = 0x1A4760u;
        goto label_1a4760;
    }
    ctx->pc = 0x1A4758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4760u;
label_1a4760:
    // 0x1a4760: 0x2403ffcc  addiu       $v1, $zero, -0x34
    ctx->pc = 0x1a4760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
label_1a4764:
    // 0x1a4764: 0xc  syscall     0
    ctx->pc = 0x1a4764u;
    ctx->pc = 0x1A4768u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4768:
    // 0x1a4768: 0x3e00008  jr          $ra
label_1a476c:
    if (ctx->pc == 0x1A476Cu) {
        ctx->pc = 0x1A4770u;
        goto label_1a4770;
    }
    ctx->pc = 0x1A4768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4770u;
label_1a4770:
    // 0x1a4770: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x1a4770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1a4774:
    // 0x1a4774: 0xc  syscall     0
    ctx->pc = 0x1a4774u;
    ctx->pc = 0x1A4778u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4778:
    // 0x1a4778: 0x3e00008  jr          $ra
label_1a477c:
    if (ctx->pc == 0x1A477Cu) {
        ctx->pc = 0x1A4780u;
        goto label_1a4780;
    }
    ctx->pc = 0x1A4778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4780u;
label_1a4780:
    // 0x1a4780: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x1a4780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
label_1a4784:
    // 0x1a4784: 0xc  syscall     0
    ctx->pc = 0x1a4784u;
    ctx->pc = 0x1A4788u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4788:
    // 0x1a4788: 0x3e00008  jr          $ra
label_1a478c:
    if (ctx->pc == 0x1A478Cu) {
        ctx->pc = 0x1A4790u;
        goto label_1a4790;
    }
    ctx->pc = 0x1A4788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4790u;
label_1a4790:
    // 0x1a4790: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1a4790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1a4794:
    // 0x1a4794: 0xc  syscall     0
    ctx->pc = 0x1a4794u;
    ctx->pc = 0x1A4798u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4798:
    // 0x1a4798: 0x3e00008  jr          $ra
label_1a479c:
    if (ctx->pc == 0x1A479Cu) {
        ctx->pc = 0x1A47A0u;
        goto label_1a47a0;
    }
    ctx->pc = 0x1A4798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47A0u;
label_1a47a0:
    // 0x1a47a0: 0x2403ffc8  addiu       $v1, $zero, -0x38
    ctx->pc = 0x1a47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967240));
label_1a47a4:
    // 0x1a47a4: 0xc  syscall     0
    ctx->pc = 0x1a47a4u;
    ctx->pc = 0x1A47A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a47a8:
    // 0x1a47a8: 0x3e00008  jr          $ra
label_1a47ac:
    if (ctx->pc == 0x1A47ACu) {
        ctx->pc = 0x1A47B0u;
        goto label_1a47b0;
    }
    ctx->pc = 0x1A47A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47B0u;
label_1a47b0:
    // 0x1a47b0: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1a47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1a47b4:
    // 0x1a47b4: 0xc  syscall     0
    ctx->pc = 0x1a47b4u;
    ctx->pc = 0x1A47B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a47b8:
    // 0x1a47b8: 0x3e00008  jr          $ra
label_1a47bc:
    if (ctx->pc == 0x1A47BCu) {
        ctx->pc = 0x1A47C0u;
        goto label_1a47c0;
    }
    ctx->pc = 0x1A47B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47C0u;
label_1a47c0:
    // 0x1a47c0: 0x2403ffc6  addiu       $v1, $zero, -0x3A
    ctx->pc = 0x1a47c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967238));
label_1a47c4:
    // 0x1a47c4: 0xc  syscall     0
    ctx->pc = 0x1a47c4u;
    ctx->pc = 0x1A47C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a47c8:
    // 0x1a47c8: 0x3e00008  jr          $ra
label_1a47cc:
    if (ctx->pc == 0x1A47CCu) {
        ctx->pc = 0x1A47D0u;
        goto label_1a47d0;
    }
    ctx->pc = 0x1A47C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47D0u;
label_1a47d0:
    // 0x1a47d0: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x1a47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1a47d4:
    // 0x1a47d4: 0xc  syscall     0
    ctx->pc = 0x1a47d4u;
    ctx->pc = 0x1A47D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a47d8:
    // 0x1a47d8: 0x3e00008  jr          $ra
label_1a47dc:
    if (ctx->pc == 0x1A47DCu) {
        ctx->pc = 0x1A47E0u;
        goto label_1a47e0;
    }
    ctx->pc = 0x1A47D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47E0u;
label_1a47e0:
    // 0x1a47e0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1a47e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a47e4:
    // 0x1a47e4: 0xc  syscall     0
    ctx->pc = 0x1a47e4u;
    ctx->pc = 0x1A47E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a47e8:
    // 0x1a47e8: 0x3e00008  jr          $ra
label_1a47ec:
    if (ctx->pc == 0x1A47ECu) {
        ctx->pc = 0x1A47F0u;
        goto label_1a47f0;
    }
    ctx->pc = 0x1A47E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A47F0u;
label_1a47f0:
    // 0x1a47f0: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x1a47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_1a47f4:
    // 0x1a47f4: 0xc  syscall     0
    ctx->pc = 0x1a47f4u;
    ctx->pc = 0x1A47F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a47f8:
    // 0x1a47f8: 0x3e00008  jr          $ra
label_1a47fc:
    if (ctx->pc == 0x1A47FCu) {
        ctx->pc = 0x1A4800u;
        goto label_1a4800;
    }
    ctx->pc = 0x1A47F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A47F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4800u;
label_1a4800:
    // 0x1a4800: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1a4800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_1a4804:
    // 0x1a4804: 0xc  syscall     0
    ctx->pc = 0x1a4804u;
    ctx->pc = 0x1A4808u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4808:
    // 0x1a4808: 0x3e00008  jr          $ra
label_1a480c:
    if (ctx->pc == 0x1A480Cu) {
        ctx->pc = 0x1A4810u;
        goto label_1a4810;
    }
    ctx->pc = 0x1A4808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4810u;
label_1a4810:
    // 0x1a4810: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1a4810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1a4814:
    // 0x1a4814: 0xc  syscall     0
    ctx->pc = 0x1a4814u;
    ctx->pc = 0x1A4818u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4818:
    // 0x1a4818: 0x3e00008  jr          $ra
label_1a481c:
    if (ctx->pc == 0x1A481Cu) {
        ctx->pc = 0x1A4820u;
        goto label_1a4820;
    }
    ctx->pc = 0x1A4818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4820u;
label_1a4820:
    // 0x1a4820: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1a4820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1a4824:
    // 0x1a4824: 0xc  syscall     0
    ctx->pc = 0x1a4824u;
    ctx->pc = 0x1A4828u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4828:
    // 0x1a4828: 0x3e00008  jr          $ra
label_1a482c:
    if (ctx->pc == 0x1A482Cu) {
        ctx->pc = 0x1A4830u;
        goto label_1a4830;
    }
    ctx->pc = 0x1A4828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4830u;
label_1a4830:
    // 0x1a4830: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1a4830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1a4834:
    // 0x1a4834: 0xc  syscall     0
    ctx->pc = 0x1a4834u;
    ctx->pc = 0x1A4838u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4838:
    // 0x1a4838: 0x3e00008  jr          $ra
label_1a483c:
    if (ctx->pc == 0x1A483Cu) {
        ctx->pc = 0x1A4840u;
        goto label_1a4840;
    }
    ctx->pc = 0x1A4838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4840u;
label_1a4840:
    // 0x1a4840: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1a4840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1a4844:
    // 0x1a4844: 0xc  syscall     0
    ctx->pc = 0x1a4844u;
    ctx->pc = 0x1A4848u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4848:
    // 0x1a4848: 0x3e00008  jr          $ra
label_1a484c:
    if (ctx->pc == 0x1A484Cu) {
        ctx->pc = 0x1A4850u;
        goto label_1a4850;
    }
    ctx->pc = 0x1A4848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4850u;
label_1a4850:
    // 0x1a4850: 0x2403ffbd  addiu       $v1, $zero, -0x43
    ctx->pc = 0x1a4850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967229));
label_1a4854:
    // 0x1a4854: 0xc  syscall     0
    ctx->pc = 0x1a4854u;
    ctx->pc = 0x1A4858u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4858:
    // 0x1a4858: 0x3e00008  jr          $ra
label_1a485c:
    if (ctx->pc == 0x1A485Cu) {
        ctx->pc = 0x1A4860u;
        goto label_1a4860;
    }
    ctx->pc = 0x1A4858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4860u;
label_1a4860:
    // 0x1a4860: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1a4860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1a4864:
    // 0x1a4864: 0xc  syscall     0
    ctx->pc = 0x1a4864u;
    ctx->pc = 0x1A4868u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4868:
    // 0x1a4868: 0x3e00008  jr          $ra
label_1a486c:
    if (ctx->pc == 0x1A486Cu) {
        ctx->pc = 0x1A4870u;
        goto label_1a4870;
    }
    ctx->pc = 0x1A4868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4870u;
label_1a4870:
    // 0x1a4870: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x1a4870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_1a4874:
    // 0x1a4874: 0xc  syscall     0
    ctx->pc = 0x1a4874u;
    ctx->pc = 0x1A4878u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4878:
    // 0x1a4878: 0x3e00008  jr          $ra
label_1a487c:
    if (ctx->pc == 0x1A487Cu) {
        ctx->pc = 0x1A4880u;
        goto label_1a4880;
    }
    ctx->pc = 0x1A4878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4880u;
label_1a4880:
    // 0x1a4880: 0x2403ffba  addiu       $v1, $zero, -0x46
    ctx->pc = 0x1a4880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
label_1a4884:
    // 0x1a4884: 0xc  syscall     0
    ctx->pc = 0x1a4884u;
    ctx->pc = 0x1A4888u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4888:
    // 0x1a4888: 0x3e00008  jr          $ra
label_1a488c:
    if (ctx->pc == 0x1A488Cu) {
        ctx->pc = 0x1A4890u;
        goto label_1a4890;
    }
    ctx->pc = 0x1A4888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4890u;
label_1a4890:
    // 0x1a4890: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1a4890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1a4894:
    // 0x1a4894: 0xc  syscall     0
    ctx->pc = 0x1a4894u;
    ctx->pc = 0x1A4898u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4898:
    // 0x1a4898: 0x3e00008  jr          $ra
label_1a489c:
    if (ctx->pc == 0x1A489Cu) {
        ctx->pc = 0x1A48A0u;
        goto label_1a48a0;
    }
    ctx->pc = 0x1A4898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A48A0u;
label_1a48a0:
    // 0x1a48a0: 0x2403ffb8  addiu       $v1, $zero, -0x48
    ctx->pc = 0x1a48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
label_1a48a4:
    // 0x1a48a4: 0xc  syscall     0
    ctx->pc = 0x1a48a4u;
    ctx->pc = 0x1A48A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a48a8:
    // 0x1a48a8: 0x3e00008  jr          $ra
label_1a48ac:
    if (ctx->pc == 0x1A48ACu) {
        ctx->pc = 0x1A48B0u;
        goto label_1a48b0;
    }
    ctx->pc = 0x1A48A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A48B0u;
label_1a48b0:
    // 0x1a48b0: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x1a48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_1a48b4:
    // 0x1a48b4: 0xc  syscall     0
    ctx->pc = 0x1a48b4u;
    ctx->pc = 0x1A48B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a48b8:
    // 0x1a48b8: 0x3e00008  jr          $ra
label_1a48bc:
    if (ctx->pc == 0x1A48BCu) {
        ctx->pc = 0x1A48C0u;
        goto label_1a48c0;
    }
    ctx->pc = 0x1A48B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A48C0u;
label_1a48c0:
    // 0x1a48c0: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1a48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1a48c4:
    // 0x1a48c4: 0xc  syscall     0
    ctx->pc = 0x1a48c4u;
    ctx->pc = 0x1A48C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a48c8:
    // 0x1a48c8: 0x3e00008  jr          $ra
label_1a48cc:
    if (ctx->pc == 0x1A48CCu) {
        ctx->pc = 0x1A48D0u;
        goto label_1a48d0;
    }
    ctx->pc = 0x1A48C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A48D0u;
label_1a48d0:
    // 0x1a48d0: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x1a48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1a48d4:
    // 0x1a48d4: 0xc  syscall     0
    ctx->pc = 0x1a48d4u;
    ctx->pc = 0x1A48D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a48d8:
    // 0x1a48d8: 0x3e00008  jr          $ra
label_1a48dc:
    if (ctx->pc == 0x1A48DCu) {
        ctx->pc = 0x1A48E0u;
        goto label_1a48e0;
    }
    ctx->pc = 0x1A48D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A48E0u;
label_1a48e0:
    // 0x1a48e0: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x1a48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1a48e4:
    // 0x1a48e4: 0xc  syscall     0
    ctx->pc = 0x1a48e4u;
    ctx->pc = 0x1A48E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a48e8:
    // 0x1a48e8: 0x3e00008  jr          $ra
label_1a48ec:
    if (ctx->pc == 0x1A48ECu) {
        ctx->pc = 0x1A48F0u;
        goto label_1a48f0;
    }
    ctx->pc = 0x1A48E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A48F0u;
label_1a48f0:
    // 0x1a48f0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1a48f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_1a48f4:
    // 0x1a48f4: 0xc  syscall     0
    ctx->pc = 0x1a48f4u;
    ctx->pc = 0x1A48F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a48f8:
    // 0x1a48f8: 0x3e00008  jr          $ra
label_1a48fc:
    if (ctx->pc == 0x1A48FCu) {
        ctx->pc = 0x1A4900u;
        goto label_1a4900;
    }
    ctx->pc = 0x1A48F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4900u;
label_1a4900:
    // 0x1a4900: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x1a4900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1a4904:
    // 0x1a4904: 0xc  syscall     0
    ctx->pc = 0x1a4904u;
    ctx->pc = 0x1A4908u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4908:
    // 0x1a4908: 0x3e00008  jr          $ra
label_1a490c:
    if (ctx->pc == 0x1A490Cu) {
        ctx->pc = 0x1A4910u;
        goto label_1a4910;
    }
    ctx->pc = 0x1A4908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4910u;
label_1a4910:
    // 0x1a4910: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x1a4910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1a4914:
    // 0x1a4914: 0xc  syscall     0
    ctx->pc = 0x1a4914u;
    ctx->pc = 0x1A4918u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4918:
    // 0x1a4918: 0x3e00008  jr          $ra
label_1a491c:
    if (ctx->pc == 0x1A491Cu) {
        ctx->pc = 0x1A4920u;
        goto label_1a4920;
    }
    ctx->pc = 0x1A4918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4920u;
label_1a4920:
    // 0x1a4920: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1a4920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1a4924:
    // 0x1a4924: 0xc  syscall     0
    ctx->pc = 0x1a4924u;
    ctx->pc = 0x1A4928u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4928:
    // 0x1a4928: 0x3e00008  jr          $ra
label_1a492c:
    if (ctx->pc == 0x1A492Cu) {
        ctx->pc = 0x1A4930u;
        goto label_1a4930;
    }
    ctx->pc = 0x1A4928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4930u;
label_1a4930:
    // 0x1a4930: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x1a4930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1a4934:
    // 0x1a4934: 0xc  syscall     0
    ctx->pc = 0x1a4934u;
    ctx->pc = 0x1A4938u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4938:
    // 0x1a4938: 0x3e00008  jr          $ra
label_1a493c:
    if (ctx->pc == 0x1A493Cu) {
        ctx->pc = 0x1A4940u;
        goto label_1a4940;
    }
    ctx->pc = 0x1A4938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4940u;
label_1a4940:
    // 0x1a4940: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1a4940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1a4944:
    // 0x1a4944: 0xc  syscall     0
    ctx->pc = 0x1a4944u;
    ctx->pc = 0x1A4948u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4948:
    // 0x1a4948: 0x3e00008  jr          $ra
label_1a494c:
    if (ctx->pc == 0x1A494Cu) {
        ctx->pc = 0x1A4950u;
        goto label_1a4950;
    }
    ctx->pc = 0x1A4948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4950u;
label_1a4950:
    // 0x1a4950: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x1a4950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
label_1a4954:
    // 0x1a4954: 0xc  syscall     0
    ctx->pc = 0x1a4954u;
    ctx->pc = 0x1A4958u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4958:
    // 0x1a4958: 0x3e00008  jr          $ra
label_1a495c:
    if (ctx->pc == 0x1A495Cu) {
        ctx->pc = 0x1A4960u;
        goto label_1a4960;
    }
    ctx->pc = 0x1A4958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4960u;
label_1a4960:
    // 0x1a4960: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x1a4960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1a4964:
    // 0x1a4964: 0xc  syscall     0
    ctx->pc = 0x1a4964u;
    ctx->pc = 0x1A4968u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4968:
    // 0x1a4968: 0x3e00008  jr          $ra
label_1a496c:
    if (ctx->pc == 0x1A496Cu) {
        ctx->pc = 0x1A4970u;
        goto label_1a4970;
    }
    ctx->pc = 0x1A4968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4970u;
label_1a4970:
    // 0x1a4970: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x1a4970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
label_1a4974:
    // 0x1a4974: 0xc  syscall     0
    ctx->pc = 0x1a4974u;
    ctx->pc = 0x1A4978u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4978:
    // 0x1a4978: 0x3e00008  jr          $ra
label_1a497c:
    if (ctx->pc == 0x1A497Cu) {
        ctx->pc = 0x1A4980u;
        goto label_1a4980;
    }
    ctx->pc = 0x1A4978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4980u;
label_1a4980:
    // 0x1a4980: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1a4980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1a4984:
    // 0x1a4984: 0xc  syscall     0
    ctx->pc = 0x1a4984u;
    ctx->pc = 0x1A4988u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4988:
    // 0x1a4988: 0x3e00008  jr          $ra
label_1a498c:
    if (ctx->pc == 0x1A498Cu) {
        ctx->pc = 0x1A4990u;
        goto label_1a4990;
    }
    ctx->pc = 0x1A4988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4990u;
label_1a4990:
    // 0x1a4990: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x1a4990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_1a4994:
    // 0x1a4994: 0xc  syscall     0
    ctx->pc = 0x1a4994u;
    ctx->pc = 0x1A4998u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4998:
    // 0x1a4998: 0x3e00008  jr          $ra
label_1a499c:
    if (ctx->pc == 0x1A499Cu) {
        ctx->pc = 0x1A49A0u;
        goto label_1a49a0;
    }
    ctx->pc = 0x1A4998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A49A0u;
label_1a49a0:
    // 0x1a49a0: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x1a49a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
label_1a49a4:
    // 0x1a49a4: 0xc  syscall     0
    ctx->pc = 0x1a49a4u;
    ctx->pc = 0x1A49A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a49a8:
    // 0x1a49a8: 0x3e00008  jr          $ra
label_1a49ac:
    if (ctx->pc == 0x1A49ACu) {
        ctx->pc = 0x1A49B0u;
        goto label_1a49b0;
    }
    ctx->pc = 0x1A49A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A49B0u;
label_1a49b0:
    // 0x1a49b0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x1a49b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1a49b4:
    // 0x1a49b4: 0xc  syscall     0
    ctx->pc = 0x1a49b4u;
    ctx->pc = 0x1A49B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a49b8:
    // 0x1a49b8: 0x3e00008  jr          $ra
label_1a49bc:
    if (ctx->pc == 0x1A49BCu) {
        ctx->pc = 0x1A49C0u;
        goto label_1a49c0;
    }
    ctx->pc = 0x1A49B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A49C0u;
label_1a49c0:
    // 0x1a49c0: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x1a49c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
label_1a49c4:
    // 0x1a49c4: 0xc  syscall     0
    ctx->pc = 0x1a49c4u;
    ctx->pc = 0x1A49C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a49c8:
    // 0x1a49c8: 0x3e00008  jr          $ra
label_1a49cc:
    if (ctx->pc == 0x1A49CCu) {
        ctx->pc = 0x1A49D0u;
        goto label_1a49d0;
    }
    ctx->pc = 0x1A49C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A49D0u;
label_1a49d0:
    // 0x1a49d0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1a49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_1a49d4:
    // 0x1a49d4: 0xc  syscall     0
    ctx->pc = 0x1a49d4u;
    ctx->pc = 0x1A49D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a49d8:
    // 0x1a49d8: 0x3e00008  jr          $ra
label_1a49dc:
    if (ctx->pc == 0x1A49DCu) {
        ctx->pc = 0x1A49E0u;
        goto label_1a49e0;
    }
    ctx->pc = 0x1A49D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A49E0u;
label_1a49e0:
    // 0x1a49e0: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x1a49e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_1a49e4:
    // 0x1a49e4: 0xc  syscall     0
    ctx->pc = 0x1a49e4u;
    ctx->pc = 0x1A49E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a49e8:
    // 0x1a49e8: 0x3e00008  jr          $ra
label_1a49ec:
    if (ctx->pc == 0x1A49ECu) {
        ctx->pc = 0x1A49F0u;
        goto label_1a49f0;
    }
    ctx->pc = 0x1A49E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A49F0u;
label_1a49f0:
    // 0x1a49f0: 0x2403ffa4  addiu       $v1, $zero, -0x5C
    ctx->pc = 0x1a49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967204));
label_1a49f4:
    // 0x1a49f4: 0xc  syscall     0
    ctx->pc = 0x1a49f4u;
    ctx->pc = 0x1A49F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a49f8:
    // 0x1a49f8: 0x3e00008  jr          $ra
label_1a49fc:
    if (ctx->pc == 0x1A49FCu) {
        ctx->pc = 0x1A4A00u;
        goto label_1a4a00;
    }
    ctx->pc = 0x1A49F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A49F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A00u;
label_1a4a00:
    // 0x1a4a00: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x1a4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_1a4a04:
    // 0x1a4a04: 0xc  syscall     0
    ctx->pc = 0x1a4a04u;
    ctx->pc = 0x1A4A08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4a08:
    // 0x1a4a08: 0x3e00008  jr          $ra
label_1a4a0c:
    if (ctx->pc == 0x1A4A0Cu) {
        ctx->pc = 0x1A4A10u;
        goto label_1a4a10;
    }
    ctx->pc = 0x1A4A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A10u;
label_1a4a10:
    // 0x1a4a10: 0x2403ffa3  addiu       $v1, $zero, -0x5D
    ctx->pc = 0x1a4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967203));
label_1a4a14:
    // 0x1a4a14: 0xc  syscall     0
    ctx->pc = 0x1a4a14u;
    ctx->pc = 0x1A4A18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4a18:
    // 0x1a4a18: 0x3e00008  jr          $ra
label_1a4a1c:
    if (ctx->pc == 0x1A4A1Cu) {
        ctx->pc = 0x1A4A20u;
        goto label_1a4a20;
    }
    ctx->pc = 0x1A4A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A20u;
label_1a4a20:
    // 0x1a4a20: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x1a4a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_1a4a24:
    // 0x1a4a24: 0xc  syscall     0
    ctx->pc = 0x1a4a24u;
    ctx->pc = 0x1A4A28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4a28:
    // 0x1a4a28: 0x3e00008  jr          $ra
label_1a4a2c:
    if (ctx->pc == 0x1A4A2Cu) {
        ctx->pc = 0x1A4A30u;
        goto label_1a4a30;
    }
    ctx->pc = 0x1A4A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A30u;
label_1a4a30:
    // 0x1a4a30: 0x2403ffa2  addiu       $v1, $zero, -0x5E
    ctx->pc = 0x1a4a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
label_1a4a34:
    // 0x1a4a34: 0xc  syscall     0
    ctx->pc = 0x1a4a34u;
    ctx->pc = 0x1A4A38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4a38:
    // 0x1a4a38: 0x3e00008  jr          $ra
label_1a4a3c:
    if (ctx->pc == 0x1A4A3Cu) {
        ctx->pc = 0x1A4A40u;
        goto label_1a4a40;
    }
    ctx->pc = 0x1A4A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A40u;
label_1a4a40:
    // 0x1a4a40: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x1a4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_1a4a44:
    // 0x1a4a44: 0xc  syscall     0
    ctx->pc = 0x1a4a44u;
    ctx->pc = 0x1A4A48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4a48:
    // 0x1a4a48: 0x3e00008  jr          $ra
label_1a4a4c:
    if (ctx->pc == 0x1A4A4Cu) {
        ctx->pc = 0x1A4A50u;
        goto label_1a4a50;
    }
    ctx->pc = 0x1A4A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A50u;
label_1a4a50:
    // 0x1a4a50: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x1a4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
label_1a4a54:
    // 0x1a4a54: 0xc  syscall     0
    ctx->pc = 0x1a4a54u;
    ctx->pc = 0x1A4A58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4a58:
    // 0x1a4a58: 0x3e00008  jr          $ra
label_1a4a5c:
    if (ctx->pc == 0x1A4A5Cu) {
        ctx->pc = 0x1A4A60u;
        goto label_1a4a60;
    }
    ctx->pc = 0x1A4A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A60u;
label_1a4a60:
    // 0x1a4a60: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1a4a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1a4a64:
    // 0x1a4a64: 0xc  syscall     0
    ctx->pc = 0x1a4a64u;
    ctx->pc = 0x1A4A68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4a68:
    // 0x1a4a68: 0x3e00008  jr          $ra
label_1a4a6c:
    if (ctx->pc == 0x1A4A6Cu) {
        ctx->pc = 0x1A4A70u;
        goto label_1a4a70;
    }
    ctx->pc = 0x1A4A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A70u;
label_1a4a70:
    // 0x1a4a70: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x1a4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_1a4a74:
    // 0x1a4a74: 0xc  syscall     0
    ctx->pc = 0x1a4a74u;
    ctx->pc = 0x1A4A78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4a78:
    // 0x1a4a78: 0x3e00008  jr          $ra
label_1a4a7c:
    if (ctx->pc == 0x1A4A7Cu) {
        ctx->pc = 0x1A4A80u;
        goto label_1a4a80;
    }
    ctx->pc = 0x1A4A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A80u;
label_1a4a80:
    // 0x1a4a80: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1a4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_1a4a84:
    // 0x1a4a84: 0xc  syscall     0
    ctx->pc = 0x1a4a84u;
    ctx->pc = 0x1A4A88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4a88:
    // 0x1a4a88: 0x3e00008  jr          $ra
label_1a4a8c:
    if (ctx->pc == 0x1A4A8Cu) {
        ctx->pc = 0x1A4A90u;
        goto label_1a4a90;
    }
    ctx->pc = 0x1A4A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A90u;
label_1a4a90:
    // 0x1a4a90: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1a4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1a4a94:
    // 0x1a4a94: 0xc  syscall     0
    ctx->pc = 0x1a4a94u;
    ctx->pc = 0x1A4A98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4a98:
    // 0x1a4a98: 0x3e00008  jr          $ra
label_1a4a9c:
    if (ctx->pc == 0x1A4A9Cu) {
        ctx->pc = 0x1A4AA0u;
        { ctx->pc = 0x1a4aa0; return; }
    }
    ctx->pc = 0x1A4A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4AA0u;
    ctx->pc = 0x1a4aa0u;
    return;
}

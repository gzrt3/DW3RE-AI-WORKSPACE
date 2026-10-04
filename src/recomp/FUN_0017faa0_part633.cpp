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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part633(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2b4858u: goto label_2b4858;
        case 0x2b485cu: goto label_2b485c;
        case 0x2b4860u: goto label_2b4860;
        case 0x2b4864u: goto label_2b4864;
        case 0x2b4868u: goto label_2b4868;
        case 0x2b486cu: goto label_2b486c;
        case 0x2b4870u: goto label_2b4870;
        case 0x2b4874u: goto label_2b4874;
        case 0x2b4878u: goto label_2b4878;
        case 0x2b487cu: goto label_2b487c;
        case 0x2b4880u: goto label_2b4880;
        case 0x2b4884u: goto label_2b4884;
        case 0x2b4888u: goto label_2b4888;
        case 0x2b488cu: goto label_2b488c;
        case 0x2b4890u: goto label_2b4890;
        case 0x2b4894u: goto label_2b4894;
        case 0x2b4898u: goto label_2b4898;
        case 0x2b489cu: goto label_2b489c;
        case 0x2b48a0u: goto label_2b48a0;
        case 0x2b48a4u: goto label_2b48a4;
        case 0x2b48a8u: goto label_2b48a8;
        case 0x2b48acu: goto label_2b48ac;
        case 0x2b48b0u: goto label_2b48b0;
        case 0x2b48b4u: goto label_2b48b4;
        case 0x2b48b8u: goto label_2b48b8;
        case 0x2b48bcu: goto label_2b48bc;
        case 0x2b48c0u: goto label_2b48c0;
        case 0x2b48c4u: goto label_2b48c4;
        case 0x2b48c8u: goto label_2b48c8;
        case 0x2b48ccu: goto label_2b48cc;
        case 0x2b48d0u: goto label_2b48d0;
        case 0x2b48d4u: goto label_2b48d4;
        case 0x2b48d8u: goto label_2b48d8;
        case 0x2b48dcu: goto label_2b48dc;
        case 0x2b48e0u: goto label_2b48e0;
        case 0x2b48e4u: goto label_2b48e4;
        case 0x2b48e8u: goto label_2b48e8;
        case 0x2b48ecu: goto label_2b48ec;
        case 0x2b48f0u: goto label_2b48f0;
        case 0x2b48f4u: goto label_2b48f4;
        case 0x2b48f8u: goto label_2b48f8;
        case 0x2b48fcu: goto label_2b48fc;
        case 0x2b4900u: goto label_2b4900;
        case 0x2b4904u: goto label_2b4904;
        case 0x2b4908u: goto label_2b4908;
        case 0x2b490cu: goto label_2b490c;
        case 0x2b4910u: goto label_2b4910;
        case 0x2b4914u: goto label_2b4914;
        case 0x2b4918u: goto label_2b4918;
        case 0x2b491cu: goto label_2b491c;
        case 0x2b4920u: goto label_2b4920;
        case 0x2b4924u: goto label_2b4924;
        case 0x2b4928u: goto label_2b4928;
        case 0x2b492cu: goto label_2b492c;
        case 0x2b4930u: goto label_2b4930;
        case 0x2b4934u: goto label_2b4934;
        case 0x2b4938u: goto label_2b4938;
        case 0x2b493cu: goto label_2b493c;
        case 0x2b4940u: goto label_2b4940;
        case 0x2b4944u: goto label_2b4944;
        case 0x2b4948u: goto label_2b4948;
        case 0x2b494cu: goto label_2b494c;
        case 0x2b4950u: goto label_2b4950;
        case 0x2b4954u: goto label_2b4954;
        case 0x2b4958u: goto label_2b4958;
        case 0x2b495cu: goto label_2b495c;
        case 0x2b4960u: goto label_2b4960;
        case 0x2b4964u: goto label_2b4964;
        case 0x2b4968u: goto label_2b4968;
        case 0x2b496cu: goto label_2b496c;
        case 0x2b4970u: goto label_2b4970;
        case 0x2b4974u: goto label_2b4974;
        case 0x2b4978u: goto label_2b4978;
        case 0x2b497cu: goto label_2b497c;
        case 0x2b4980u: goto label_2b4980;
        case 0x2b4984u: goto label_2b4984;
        case 0x2b4988u: goto label_2b4988;
        case 0x2b498cu: goto label_2b498c;
        case 0x2b4990u: goto label_2b4990;
        case 0x2b4994u: goto label_2b4994;
        case 0x2b4998u: goto label_2b4998;
        case 0x2b499cu: goto label_2b499c;
        case 0x2b49a0u: goto label_2b49a0;
        case 0x2b49a4u: goto label_2b49a4;
        case 0x2b49a8u: goto label_2b49a8;
        case 0x2b49acu: goto label_2b49ac;
        case 0x2b49b0u: goto label_2b49b0;
        case 0x2b49b4u: goto label_2b49b4;
        case 0x2b49b8u: goto label_2b49b8;
        case 0x2b49bcu: goto label_2b49bc;
        case 0x2b49c0u: goto label_2b49c0;
        case 0x2b49c4u: goto label_2b49c4;
        case 0x2b49c8u: goto label_2b49c8;
        case 0x2b49ccu: goto label_2b49cc;
        case 0x2b49d0u: goto label_2b49d0;
        case 0x2b49d4u: goto label_2b49d4;
        case 0x2b49d8u: goto label_2b49d8;
        case 0x2b49dcu: goto label_2b49dc;
        case 0x2b49e0u: goto label_2b49e0;
        case 0x2b49e4u: goto label_2b49e4;
        case 0x2b49e8u: goto label_2b49e8;
        case 0x2b49ecu: goto label_2b49ec;
        case 0x2b49f0u: goto label_2b49f0;
        case 0x2b49f4u: goto label_2b49f4;
        case 0x2b49f8u: goto label_2b49f8;
        case 0x2b49fcu: goto label_2b49fc;
        case 0x2b4a00u: goto label_2b4a00;
        case 0x2b4a04u: goto label_2b4a04;
        case 0x2b4a08u: goto label_2b4a08;
        case 0x2b4a0cu: goto label_2b4a0c;
        case 0x2b4a10u: goto label_2b4a10;
        case 0x2b4a14u: goto label_2b4a14;
        case 0x2b4a18u: goto label_2b4a18;
        case 0x2b4a1cu: goto label_2b4a1c;
        case 0x2b4a20u: goto label_2b4a20;
        case 0x2b4a24u: goto label_2b4a24;
        case 0x2b4a28u: goto label_2b4a28;
        case 0x2b4a2cu: goto label_2b4a2c;
        case 0x2b4a30u: goto label_2b4a30;
        case 0x2b4a34u: goto label_2b4a34;
        case 0x2b4a38u: goto label_2b4a38;
        case 0x2b4a3cu: goto label_2b4a3c;
        case 0x2b4a40u: goto label_2b4a40;
        case 0x2b4a44u: goto label_2b4a44;
        case 0x2b4a48u: goto label_2b4a48;
        case 0x2b4a4cu: goto label_2b4a4c;
        case 0x2b4a50u: goto label_2b4a50;
        case 0x2b4a54u: goto label_2b4a54;
        case 0x2b4a58u: goto label_2b4a58;
        case 0x2b4a5cu: goto label_2b4a5c;
        case 0x2b4a60u: goto label_2b4a60;
        case 0x2b4a64u: goto label_2b4a64;
        case 0x2b4a68u: goto label_2b4a68;
        case 0x2b4a6cu: goto label_2b4a6c;
        case 0x2b4a70u: goto label_2b4a70;
        case 0x2b4a74u: goto label_2b4a74;
        case 0x2b4a78u: goto label_2b4a78;
        case 0x2b4a7cu: goto label_2b4a7c;
        case 0x2b4a80u: goto label_2b4a80;
        case 0x2b4a84u: goto label_2b4a84;
        case 0x2b4a88u: goto label_2b4a88;
        case 0x2b4a8cu: goto label_2b4a8c;
        case 0x2b4a90u: goto label_2b4a90;
        case 0x2b4a94u: goto label_2b4a94;
        case 0x2b4a98u: goto label_2b4a98;
        case 0x2b4a9cu: goto label_2b4a9c;
        case 0x2b4aa0u: goto label_2b4aa0;
        case 0x2b4aa4u: goto label_2b4aa4;
        case 0x2b4aa8u: goto label_2b4aa8;
        case 0x2b4aacu: goto label_2b4aac;
        case 0x2b4ab0u: goto label_2b4ab0;
        case 0x2b4ab4u: goto label_2b4ab4;
        case 0x2b4ab8u: goto label_2b4ab8;
        case 0x2b4abcu: goto label_2b4abc;
        case 0x2b4ac0u: goto label_2b4ac0;
        case 0x2b4ac4u: goto label_2b4ac4;
        case 0x2b4ac8u: goto label_2b4ac8;
        case 0x2b4accu: goto label_2b4acc;
        case 0x2b4ad0u: goto label_2b4ad0;
        case 0x2b4ad4u: goto label_2b4ad4;
        case 0x2b4ad8u: goto label_2b4ad8;
        case 0x2b4adcu: goto label_2b4adc;
        case 0x2b4ae0u: goto label_2b4ae0;
        case 0x2b4ae4u: goto label_2b4ae4;
        case 0x2b4ae8u: goto label_2b4ae8;
        case 0x2b4aecu: goto label_2b4aec;
        case 0x2b4af0u: goto label_2b4af0;
        case 0x2b4af4u: goto label_2b4af4;
        case 0x2b4af8u: goto label_2b4af8;
        case 0x2b4afcu: goto label_2b4afc;
        case 0x2b4b00u: goto label_2b4b00;
        case 0x2b4b04u: goto label_2b4b04;
        case 0x2b4b08u: goto label_2b4b08;
        case 0x2b4b0cu: goto label_2b4b0c;
        case 0x2b4b10u: goto label_2b4b10;
        case 0x2b4b14u: goto label_2b4b14;
        case 0x2b4b18u: goto label_2b4b18;
        case 0x2b4b1cu: goto label_2b4b1c;
        case 0x2b4b20u: goto label_2b4b20;
        case 0x2b4b24u: goto label_2b4b24;
        case 0x2b4b28u: goto label_2b4b28;
        case 0x2b4b2cu: goto label_2b4b2c;
        case 0x2b4b30u: goto label_2b4b30;
        case 0x2b4b34u: goto label_2b4b34;
        case 0x2b4b38u: goto label_2b4b38;
        case 0x2b4b3cu: goto label_2b4b3c;
        case 0x2b4b40u: goto label_2b4b40;
        case 0x2b4b44u: goto label_2b4b44;
        case 0x2b4b48u: goto label_2b4b48;
        case 0x2b4b4cu: goto label_2b4b4c;
        case 0x2b4b50u: goto label_2b4b50;
        case 0x2b4b54u: goto label_2b4b54;
        case 0x2b4b58u: goto label_2b4b58;
        case 0x2b4b5cu: goto label_2b4b5c;
        case 0x2b4b60u: goto label_2b4b60;
        case 0x2b4b64u: goto label_2b4b64;
        case 0x2b4b68u: goto label_2b4b68;
        case 0x2b4b6cu: goto label_2b4b6c;
        case 0x2b4b70u: goto label_2b4b70;
        case 0x2b4b74u: goto label_2b4b74;
        case 0x2b4b78u: goto label_2b4b78;
        case 0x2b4b7cu: goto label_2b4b7c;
        case 0x2b4b80u: goto label_2b4b80;
        case 0x2b4b84u: goto label_2b4b84;
        case 0x2b4b88u: goto label_2b4b88;
        case 0x2b4b8cu: goto label_2b4b8c;
        case 0x2b4b90u: goto label_2b4b90;
        case 0x2b4b94u: goto label_2b4b94;
        case 0x2b4b98u: goto label_2b4b98;
        case 0x2b4b9cu: goto label_2b4b9c;
        case 0x2b4ba0u: goto label_2b4ba0;
        case 0x2b4ba4u: goto label_2b4ba4;
        case 0x2b4ba8u: goto label_2b4ba8;
        case 0x2b4bacu: goto label_2b4bac;
        case 0x2b4bb0u: goto label_2b4bb0;
        case 0x2b4bb4u: goto label_2b4bb4;
        case 0x2b4bb8u: goto label_2b4bb8;
        case 0x2b4bbcu: goto label_2b4bbc;
        case 0x2b4bc0u: goto label_2b4bc0;
        case 0x2b4bc4u: goto label_2b4bc4;
        case 0x2b4bc8u: goto label_2b4bc8;
        case 0x2b4bccu: goto label_2b4bcc;
        case 0x2b4bd0u: goto label_2b4bd0;
        case 0x2b4bd4u: goto label_2b4bd4;
        case 0x2b4bd8u: goto label_2b4bd8;
        case 0x2b4bdcu: goto label_2b4bdc;
        case 0x2b4be0u: goto label_2b4be0;
        case 0x2b4be4u: goto label_2b4be4;
        case 0x2b4be8u: goto label_2b4be8;
        case 0x2b4becu: goto label_2b4bec;
        default: return;
    }

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
label_2b4858:
    // 0x2b4858: 0x81f903bc  lb          $t9, 0x3BC($t7)
    ctx->pc = 0x2b4858u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b485c:
    // 0x2b485c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b485cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4860:
    // 0x2b4860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4864:
    // 0x2b4864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4868:
    // 0x2b4868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b486c:
    // 0x2b486c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b486cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4870:
    // 0x2b4870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4874:
    // 0x2b4874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4878:
    // 0x2b4878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b487c:
    // 0x2b487c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b487cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4880:
    // 0x2b4880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4884:
    // 0x2b4884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4888:
    // 0x2b4888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b488c:
    // 0x2b488c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b488cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2b4890:
    // 0x2b4890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4894:
    // 0x2b4894: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4894u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2b4898:
    // 0x2b4898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b489c:
    // 0x2b489c: 0x1e0ce1c  .word       0x01E0CE1C                   # dmult       $t7, $zero # 0000CE00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b489cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B489C raw=0x01E0CE1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b48a0:
    // 0x2b48a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48a4:
    // 0x2b48a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48a8:
    // 0x2b48a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48ac:
    // 0x2b48ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48b0:
    // 0x2b48b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48b4:
    // 0x2b48b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48b8:
    // 0x2b48b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48bc:
    // 0x2b48bc: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b48bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2B48BC raw=0x0020D69F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b48c0:
    // 0x2b48c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48c4:
    // 0x2b48c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48c8:
    // 0x2b48c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48cc:
    // 0x2b48cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48d0:
    // 0x2b48d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48d4:
    // 0x2b48d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48d8:
    // 0x2b48d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48dc:
    // 0x2b48dc: 0x20d610  .word       0x0020D610                   # mfhi        $k0 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b48dcu;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2b48e0:
    // 0x2b48e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48e4:
    // 0x2b48e4: 0x1fac17d  .word       0x01FAC17D                   # INVALID     $t7, $k0, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b48e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B48E4 raw=0x01FAC17D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b48e8:
    // 0x2b48e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48ec:
    // 0x2b48ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48f0:
    // 0x2b48f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48f4:
    // 0x2b48f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b48f8:
    // 0x2b48f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b48f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b48fc:
    // 0x2b48fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b48fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4900:
    // 0x2b4900: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4900u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2b4904:
    // 0x2b4904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4908:
    // 0x2b4908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b490c:
    // 0x2b490c: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b490cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2b4910:
    // 0x2b4910: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4910u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2b4914:
    // 0x2b4914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4918:
    // 0x2b4918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b491c:
    // 0x2b491c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b491cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4920:
    // 0x2b4920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4924:
    // 0x2b4924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4928:
    // 0x2b4928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b492c:
    // 0x2b492c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b492cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4930:
    // 0x2b4930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4934:
    // 0x2b4934: 0x1c0b71c  .word       0x01C0B71C                   # dmult       $t6, $zero # 0000B700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4934u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B4934 raw=0x01C0B71C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4938:
    // 0x2b4938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b493c:
    // 0x2b493c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b493cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4940:
    // 0x2b4940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4944:
    // 0x2b4944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4948:
    // 0x2b4948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b494c:
    // 0x2b494c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b494cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4950:
    // 0x2b4950: 0x3e7e000  .word       0x03E7E000                   # sll         $gp, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4950u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2b4954:
    // 0x2b4954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4958:
    // 0x2b4958: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4958u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B4958 raw=0x01FB4001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b495c:
    // 0x2b495c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b495cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4960:
    // 0x2b4960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4964:
    // 0x2b4964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4968:
    // 0x2b4968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b496c:
    // 0x2b496c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b496cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4970:
    // 0x2b4970: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4970u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4974:
    // 0x2b4974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4978:
    // 0x2b4978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b497c:
    // 0x2b497c: 0x1fdd97c  .word       0x01FDD97C                   # dsll32      $k1, $sp, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b497cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 29) << (32 + 5));
label_2b4980:
    // 0x2b4980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4984:
    // 0x2b4984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4988:
    // 0x2b4988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b498c:
    // 0x2b498c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b498cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4990:
    // 0x2b4990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4994:
    // 0x2b4994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4998:
    // 0x2b4998: 0x3e7e801  .word       0x03E7E801                   # INVALID     $ra, $a3, -0x17FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4998u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B4998 raw=0x03E7E801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b499c:
    // 0x2b499c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b499cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49a0:
    // 0x2b49a0: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2b49a4:
    if (ctx->pc == 0x2B49A4u) {
        ctx->pc = 0x2B49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49A0u;
        // 0x2b49a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B49A8u;
        goto label_2b49a8;
    }
    ctx->pc = 0x2B49A0u;
    {
        const bool branch_taken_0x2b49a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49A0u;
        // 0x2b49a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49a0) {
            ctx->pc = 0x2C29B0u;
            return;
        }
    }
    ctx->pc = 0x2B49A8u;
label_2b49a8:
    // 0x2b49a8: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2b49ac:
    if (ctx->pc == 0x2B49ACu) {
        ctx->pc = 0x2B49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49A8u;
        // 0x2b49ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B49B0u;
        goto label_2b49b0;
    }
    ctx->pc = 0x2B49A8u;
    {
        const bool branch_taken_0x2b49a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49A8u;
        // 0x2b49ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49a8) {
            ctx->pc = 0x2C49B8u;
            return;
        }
    }
    ctx->pc = 0x2B49B0u;
label_2b49b0:
    // 0x2b49b0: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2b49b0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2b49b4:
    // 0x2b49b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49b8:
    // 0x2b49b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b49b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b49bc:
    // 0x2b49bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49c0:
    // 0x2b49c0: 0x520a07c7  beql        $s0, $t2, . + 4 + (0x7C7 << 2)
label_2b49c4:
    if (ctx->pc == 0x2B49C4u) {
        ctx->pc = 0x2B49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49C0u;
        // 0x2b49c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B49C8u;
        goto label_2b49c8;
    }
    ctx->pc = 0x2B49C0u;
    {
        const bool branch_taken_0x2b49c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b49c0) {
            ctx->pc = 0x2B49C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B49C0u;
            // 0x2b49c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B68E0u;
            { ctx->pc = 0x2b68e0; return; }
        }
    }
    ctx->pc = 0x2B49C8u;
label_2b49c8:
    // 0x2b49c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b49c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b49cc:
    // 0x2b49cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49d0:
    // 0x2b49d0: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2b49d0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2B49D0 raw=0x48000800");
 /* MITIGATED */
label_2b49d4:
    // 0x2b49d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49d8:
    // 0x2b49d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b49d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b49dc:
    // 0x2b49dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49e0:
    // 0x2b49e0: 0x4201069e  .word       0x4201069E                   # INVALID     $s0, $at, 0x69E # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b49e0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1E at 0x2B49E0 raw=0x4201069E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b49e4:
    // 0x2b49e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49e8:
    // 0x2b49e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b49e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b49ec:
    // 0x2b49ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49f0:
    // 0x2b49f0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b49f0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b49f4:
    // 0x2b49f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b49f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b49f8:
    // 0x2b49f8: 0x10011006  beq         $zero, $at, . + 4 + (0x1006 << 2)
label_2b49fc:
    if (ctx->pc == 0x2B49FCu) {
        ctx->pc = 0x2B49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49F8u;
        // 0x2b49fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A00u;
        goto label_2b4a00;
    }
    ctx->pc = 0x2B49F8u;
    {
        const bool branch_taken_0x2b49f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49F8u;
        // 0x2b49fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49f8) {
            ctx->pc = 0x2B8A14u;
            { ctx->pc = 0x2b8a14; return; }
        }
    }
    ctx->pc = 0x2B4A00u;
label_2b4a00:
    // 0x2b4a00: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2b4a04:
    if (ctx->pc == 0x2B4A04u) {
        ctx->pc = 0x2B4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A00u;
        // 0x2b4a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A08u;
        goto label_2b4a08;
    }
    ctx->pc = 0x2B4A00u;
    {
        const bool branch_taken_0x2b4a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A00u;
        // 0x2b4a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a00) {
            ctx->pc = 0x2B4B9Cu;
            goto label_2b4b9c;
        }
    }
    ctx->pc = 0x2B4A08u;
label_2b4a08:
    // 0x2b4a08: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B4A08 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4a0c:
    // 0x2b4a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a10:
    // 0x2b4a10: 0x10021046  beq         $zero, $v0, . + 4 + (0x1046 << 2)
label_2b4a14:
    if (ctx->pc == 0x2B4A14u) {
        ctx->pc = 0x2B4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A10u;
        // 0x2b4a14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A18u;
        goto label_2b4a18;
    }
    ctx->pc = 0x2B4A10u;
    {
        const bool branch_taken_0x2b4a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A10u;
        // 0x2b4a14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a10) {
            ctx->pc = 0x2B8B2Cu;
            { ctx->pc = 0x2b8b2c; return; }
        }
    }
    ctx->pc = 0x2B4A18u;
label_2b4a18:
    // 0x2b4a18: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2b4a1c:
    if (ctx->pc == 0x2B4A1Cu) {
        ctx->pc = 0x2B4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A18u;
        // 0x2b4a1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A20u;
        goto label_2b4a20;
    }
    ctx->pc = 0x2B4A18u;
    {
        const bool branch_taken_0x2b4a18 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A18u;
        // 0x2b4a1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a18) {
            ctx->pc = 0x2B6A18u;
            { ctx->pc = 0x2b6a18; return; }
        }
    }
    ctx->pc = 0x2B4A20u;
label_2b4a20:
    // 0x2b4a20: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2b4a24:
    if (ctx->pc == 0x2B4A24u) {
        ctx->pc = 0x2B4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A20u;
        // 0x2b4a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A28u;
        goto label_2b4a28;
    }
    ctx->pc = 0x2B4A20u;
    {
        const bool branch_taken_0x2b4a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2B4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A20u;
        // 0x2b4a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a20) {
            ctx->pc = 0x2CAA28u;
            return;
        }
    }
    ctx->pc = 0x2B4A28u;
label_2b4a28:
    // 0x2b4a28: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a28u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b4a2c:
    // 0x2b4a2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a30:
    // 0x2b4a30: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B4A30 raw=0x03E2D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4a34:
    // 0x2b4a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a38:
    // 0x2b4a38: 0xb0b1000  j           func_C2C4000
label_2b4a3c:
    if (ctx->pc == 0x2B4A3Cu) {
        ctx->pc = 0x2B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A38u;
        // 0x2b4a3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A40u;
        goto label_2b4a40;
    }
    ctx->pc = 0x2B4A38u;
    ctx->pc = 0x2B4A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A38u;
    // 0x2b4a3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2B4A38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B4A40u;
label_2b4a40:
    // 0x2b4a40: 0xa800fff  j           func_A003FFC
label_2b4a44:
    if (ctx->pc == 0x2B4A44u) {
        ctx->pc = 0x2B4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A40u;
        // 0x2b4a44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A48u;
        goto label_2b4a48;
    }
    ctx->pc = 0x2B4A40u;
    ctx->pc = 0x2B4A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A40u;
    // 0x2b4a44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2B4A40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B4A48u;
label_2b4a48:
    // 0x2b4a48: 0xb030fff  j           func_C0C3FFC
label_2b4a4c:
    if (ctx->pc == 0x2B4A4Cu) {
        ctx->pc = 0x2B4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A48u;
        // 0x2b4a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A50u;
        goto label_2b4a50;
    }
    ctx->pc = 0x2B4A48u;
    ctx->pc = 0x2B4A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A48u;
    // 0x2b4a4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2B4A48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B4A50u;
label_2b4a50:
    // 0x2b4a50: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2b4a54:
    if (ctx->pc == 0x2B4A54u) {
        ctx->pc = 0x2B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A50u;
        // 0x2b4a54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A58u;
        goto label_2b4a58;
    }
    ctx->pc = 0x2B4A50u;
    {
        const bool branch_taken_0x2b4a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A50u;
        // 0x2b4a54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a50) {
            ctx->pc = 0x2D0A9Cu;
            return;
        }
    }
    ctx->pc = 0x2B4A58u;
label_2b4a58:
    // 0x2b4a58: 0x1f67ff9  .word       0x01F67FF9                   # INVALID     $t7, $s6, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a58u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2B4A58 raw=0x01F67FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4a5c:
    // 0x2b4a5c: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2b4a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2b4a60:
    // 0x2b4a60: 0x1f77ffc  .word       0x01F77FFC                   # dsll32      $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) << (32 + 31));
label_2b4a64:
    // 0x2b4a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a68:
    // 0x2b4a68: 0x1f87fff  .word       0x01F87FFF                   # dsra32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a68u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 24) >> (32 + 31));
label_2b4a6c:
    // 0x2b4a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a70:
    // 0x2b4a70: 0x1f57ff8  .word       0x01F57FF8                   # dsll        $t7, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 21) << 31);
label_2b4a74:
    // 0x2b4a74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a78:
    // 0x2b4a78: 0x1f37ffb  .word       0x01F37FFB                   # dsra        $t7, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a78u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 19) >> 31);
label_2b4a7c:
    // 0x2b4a7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a80:
    // 0x2b4a80: 0x1f47ffe  .word       0x01F47FFE                   # dsrl32      $t7, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 20) >> (32 + 31));
label_2b4a84:
    // 0x2b4a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a88:
    // 0x2b4a88: 0x1f07ff7  .word       0x01F07FF7                   # INVALID     $t7, $s0, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2B4A88 raw=0x01F07FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4a8c:
    // 0x2b4a8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a90:
    // 0x2b4a90: 0x1f17ffa  .word       0x01F17FFA                   # dsrl        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 31);
label_2b4a94:
    // 0x2b4a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4a98:
    // 0x2b4a98: 0x1f27ffd  .word       0x01F27FFD                   # INVALID     $t7, $s2, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4a98u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B4A98 raw=0x01F27FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4a9c:
    // 0x2b4a9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4aa0:
    // 0x2b4aa0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2b4aa0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2b4aa4:
    // 0x2b4aa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4aa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4aa8:
    // 0x2b4aa8: 0x10081006  beq         $zero, $t0, . + 4 + (0x1006 << 2)
label_2b4aac:
    if (ctx->pc == 0x2B4AACu) {
        ctx->pc = 0x2B4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AA8u;
        // 0x2b4aac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4AB0u;
        goto label_2b4ab0;
    }
    ctx->pc = 0x2B4AA8u;
    {
        const bool branch_taken_0x2b4aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AA8u;
        // 0x2b4aac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4aa8) {
            ctx->pc = 0x2B8AC4u;
            { ctx->pc = 0x2b8ac4; return; }
        }
    }
    ctx->pc = 0x2B4AB0u;
label_2b4ab0:
    // 0x2b4ab0: 0x10091026  beq         $zero, $t1, . + 4 + (0x1026 << 2)
label_2b4ab4:
    if (ctx->pc == 0x2B4AB4u) {
        ctx->pc = 0x2B4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AB0u;
        // 0x2b4ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4AB8u;
        goto label_2b4ab8;
    }
    ctx->pc = 0x2B4AB0u;
    {
        const bool branch_taken_0x2b4ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AB0u;
        // 0x2b4ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ab0) {
            ctx->pc = 0x2B8B4Cu;
            { ctx->pc = 0x2b8b4c; return; }
        }
    }
    ctx->pc = 0x2B4AB8u;
label_2b4ab8:
    // 0x2b4ab8: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4ab8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B4AB8 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4abc:
    // 0x2b4abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ac0:
    // 0x2b4ac0: 0x3e89804  sllv        $s3, $t0, $ra
    ctx->pc = 0x2b4ac0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b4ac4:
    // 0x2b4ac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ac8:
    // 0x2b4ac8: 0x3e8a007  srav        $s4, $t0, $ra
    ctx->pc = 0x2b4ac8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b4acc:
    // 0x2b4acc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4accu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ad0:
    // 0x2b4ad0: 0x3e8a80a  movz        $s5, $ra, $t0
    ctx->pc = 0x2b4ad0u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 31));
label_2b4ad4:
    // 0x2b4ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ad8:
    // 0x2b4ad8: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4ad8u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2b4adc:
    // 0x2b4adc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4adcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ae0:
    // 0x2b4ae0: 0x3e8b805  .word       0x03E8B805                   # INVALID     $ra, $t0, -0x47FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4ae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2B4AE0 raw=0x03E8B805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4ae4:
    // 0x2b4ae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ae8:
    // 0x2b4ae8: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2b4aec:
    if (ctx->pc == 0x2B4AECu) {
        ctx->pc = 0x2B4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AE8u;
        // 0x2b4aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4AF0u;
        goto label_2b4af0;
    }
    ctx->pc = 0x2B4AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AE8u;
        // 0x2b4aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4AF0u;
label_2b4af0:
    // 0x2b4af0: 0x3e8b00b  movn        $s6, $ra, $t0
    ctx->pc = 0x2b4af0u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 31));
label_2b4af4:
    // 0x2b4af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4af8:
    // 0x2b4af8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4af8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b4afc:
    // 0x2b4afc: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2b4afcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2b4b00:
    // 0x2b4b00: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4b00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2b4b04:
    // 0x2b4b04: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2b4b04u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2b4b08:
    // 0x2b4b08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b0c:
    // 0x2b4b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b10:
    // 0x2b4b10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b14:
    // 0x2b4b14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b18:
    // 0x2b4b18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b1c:
    // 0x2b4b1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b20:
    // 0x2b4b20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b24:
    // 0x2b4b24: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B4B24 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4b28:
    // 0x2b4b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b2c:
    // 0x2b4b2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b30:
    // 0x2b4b30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b34:
    // 0x2b4b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b38:
    // 0x2b4b38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b3c:
    // 0x2b4b3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b40:
    // 0x2b4b40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b44:
    // 0x2b4b44: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b44u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2b4b48:
    // 0x2b4b48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b4c:
    // 0x2b4b4c: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b4cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2b4b50:
    // 0x2b4b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b54:
    // 0x2b4b54: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b54u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2b4b58:
    // 0x2b4b58: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b4b58u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2b4b5c:
    // 0x2b4b5c: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2b4b5cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2b4b60:
    // 0x2b4b60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b64:
    // 0x2b4b64: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b64u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4b68:
    // 0x2b4b68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b6c:
    // 0x2b4b6c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b6cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b4b70:
    // 0x2b4b70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b74:
    // 0x2b4b74: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b74u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4b78:
    // 0x2b4b78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b7c:
    // 0x2b4b7c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b7cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2b4b80:
    // 0x2b4b80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4b80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4b84:
    // 0x2b4b84: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b84u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2b4b88:
    // 0x2b4b88: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b4b88u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B4B88 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4b8c:
    // 0x2b4b8c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b4b8cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b4b90:
    // 0x2b4b90: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b90u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2b4b94:
    // 0x2b4b94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4b98:
    // 0x2b4b98: 0x3e8b803  .word       0x03E8B803                   # sra         $s7, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b4b98u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 0));
label_2b4b9c:
    // 0x2b4b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ba0:
    // 0x2b4ba0: 0x3e8c006  srlv        $t8, $t0, $ra
    ctx->pc = 0x2b4ba0u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2b4ba4:
    // 0x2b4ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4ba8:
    // 0x2b4ba8: 0x3e8b009  .word       0x03E8B009                   # jalr        $s6, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2b4bac:
    if (ctx->pc == 0x2B4BACu) {
        ctx->pc = 0x2B4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BA8u;
        // 0x2b4bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4BB0u;
        goto label_2b4bb0;
    }
    ctx->pc = 0x2B4BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 22, 0x2B4BB0u);
        ctx->pc = 0x2B4BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BA8u;
        // 0x2b4bac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4BA8u, 0x2B4BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B4BB0u;
label_2b4bb0:
    // 0x2b4bb0: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2b4bb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2b4bb4:
    // 0x2b4bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4bb8:
    // 0x2b4bb8: 0x420f06a1  .word       0x420F06A1                   # INVALID     $s0, $t7, 0x6A1 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2b4bb8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2B4BB8 raw=0x420F06A1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b4bbc:
    // 0x2b4bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4bc0:
    // 0x2b4bc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4bc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4bc4:
    // 0x2b4bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4bc8:
    // 0x2b4bc8: 0x500a000c  beql        $zero, $t2, . + 4 + (0xC << 2)
label_2b4bcc:
    if (ctx->pc == 0x2B4BCCu) {
        ctx->pc = 0x2B4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BC8u;
        // 0x2b4bcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4BD0u;
        goto label_2b4bd0;
    }
    ctx->pc = 0x2B4BC8u;
    {
        const bool branch_taken_0x2b4bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2b4bc8) {
            ctx->pc = 0x2B4BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4BC8u;
            // 0x2b4bcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4BFCu;
            { ctx->pc = 0x2b4bfc; return; }
        }
    }
    ctx->pc = 0x2B4BD0u;
label_2b4bd0:
    // 0x2b4bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b4bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b4bd4:
    // 0x2b4bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4bd8:
    // 0x2b4bd8: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2b4bdc:
    if (ctx->pc == 0x2B4BDCu) {
        ctx->pc = 0x2B4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BD8u;
        // 0x2b4bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4BE0u;
        goto label_2b4be0;
    }
    ctx->pc = 0x2B4BD8u;
    {
        const bool branch_taken_0x2b4bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BD8u;
        // 0x2b4bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4bd8) {
            ctx->pc = 0x2BACDCu;
            { ctx->pc = 0x2bacdc; return; }
        }
    }
    ctx->pc = 0x2B4BE0u;
label_2b4be0:
    // 0x2b4be0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2b4be0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2b4be4:
    // 0x2b4be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b4be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b4be8:
    // 0x2b4be8: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2b4bec:
    if (ctx->pc == 0x2B4BECu) {
        ctx->pc = 0x2B4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BE8u;
        // 0x2b4bec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4BF0u;
        { ctx->pc = 0x2b4bf0; return; }
    }
    ctx->pc = 0x2B4BE8u;
    {
        const bool branch_taken_0x2b4be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BE8u;
        // 0x2b4bec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4be8) {
            ctx->pc = 0x2B8BF0u;
            { ctx->pc = 0x2b8bf0; return; }
        }
    }
    ctx->pc = 0x2B4BF0u;
    ctx->pc = 0x2b4bf0u;
    return;
}

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


void FUN_0014eba0_part766(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c4430u: goto label_2c4430;
        case 0x2c4434u: goto label_2c4434;
        case 0x2c4438u: goto label_2c4438;
        case 0x2c443cu: goto label_2c443c;
        case 0x2c4440u: goto label_2c4440;
        case 0x2c4444u: goto label_2c4444;
        case 0x2c4448u: goto label_2c4448;
        case 0x2c444cu: goto label_2c444c;
        case 0x2c4450u: goto label_2c4450;
        case 0x2c4454u: goto label_2c4454;
        case 0x2c4458u: goto label_2c4458;
        case 0x2c445cu: goto label_2c445c;
        case 0x2c4460u: goto label_2c4460;
        case 0x2c4464u: goto label_2c4464;
        case 0x2c4468u: goto label_2c4468;
        case 0x2c446cu: goto label_2c446c;
        case 0x2c4470u: goto label_2c4470;
        case 0x2c4474u: goto label_2c4474;
        case 0x2c4478u: goto label_2c4478;
        case 0x2c447cu: goto label_2c447c;
        case 0x2c4480u: goto label_2c4480;
        case 0x2c4484u: goto label_2c4484;
        case 0x2c4488u: goto label_2c4488;
        case 0x2c448cu: goto label_2c448c;
        case 0x2c4490u: goto label_2c4490;
        case 0x2c4494u: goto label_2c4494;
        case 0x2c4498u: goto label_2c4498;
        case 0x2c449cu: goto label_2c449c;
        case 0x2c44a0u: goto label_2c44a0;
        case 0x2c44a4u: goto label_2c44a4;
        case 0x2c44a8u: goto label_2c44a8;
        case 0x2c44acu: goto label_2c44ac;
        case 0x2c44b0u: goto label_2c44b0;
        case 0x2c44b4u: goto label_2c44b4;
        case 0x2c44b8u: goto label_2c44b8;
        case 0x2c44bcu: goto label_2c44bc;
        case 0x2c44c0u: goto label_2c44c0;
        case 0x2c44c4u: goto label_2c44c4;
        case 0x2c44c8u: goto label_2c44c8;
        case 0x2c44ccu: goto label_2c44cc;
        case 0x2c44d0u: goto label_2c44d0;
        case 0x2c44d4u: goto label_2c44d4;
        case 0x2c44d8u: goto label_2c44d8;
        case 0x2c44dcu: goto label_2c44dc;
        case 0x2c44e0u: goto label_2c44e0;
        case 0x2c44e4u: goto label_2c44e4;
        case 0x2c44e8u: goto label_2c44e8;
        case 0x2c44ecu: goto label_2c44ec;
        case 0x2c44f0u: goto label_2c44f0;
        case 0x2c44f4u: goto label_2c44f4;
        case 0x2c44f8u: goto label_2c44f8;
        case 0x2c44fcu: goto label_2c44fc;
        case 0x2c4500u: goto label_2c4500;
        case 0x2c4504u: goto label_2c4504;
        case 0x2c4508u: goto label_2c4508;
        case 0x2c450cu: goto label_2c450c;
        case 0x2c4510u: goto label_2c4510;
        case 0x2c4514u: goto label_2c4514;
        case 0x2c4518u: goto label_2c4518;
        case 0x2c451cu: goto label_2c451c;
        case 0x2c4520u: goto label_2c4520;
        case 0x2c4524u: goto label_2c4524;
        case 0x2c4528u: goto label_2c4528;
        case 0x2c452cu: goto label_2c452c;
        case 0x2c4530u: goto label_2c4530;
        case 0x2c4534u: goto label_2c4534;
        case 0x2c4538u: goto label_2c4538;
        case 0x2c453cu: goto label_2c453c;
        case 0x2c4540u: goto label_2c4540;
        case 0x2c4544u: goto label_2c4544;
        case 0x2c4548u: goto label_2c4548;
        case 0x2c454cu: goto label_2c454c;
        case 0x2c4550u: goto label_2c4550;
        case 0x2c4554u: goto label_2c4554;
        case 0x2c4558u: goto label_2c4558;
        case 0x2c455cu: goto label_2c455c;
        case 0x2c4560u: goto label_2c4560;
        case 0x2c4564u: goto label_2c4564;
        case 0x2c4568u: goto label_2c4568;
        case 0x2c456cu: goto label_2c456c;
        case 0x2c4570u: goto label_2c4570;
        case 0x2c4574u: goto label_2c4574;
        case 0x2c4578u: goto label_2c4578;
        case 0x2c457cu: goto label_2c457c;
        case 0x2c4580u: goto label_2c4580;
        case 0x2c4584u: goto label_2c4584;
        case 0x2c4588u: goto label_2c4588;
        case 0x2c458cu: goto label_2c458c;
        case 0x2c4590u: goto label_2c4590;
        case 0x2c4594u: goto label_2c4594;
        case 0x2c4598u: goto label_2c4598;
        case 0x2c459cu: goto label_2c459c;
        case 0x2c45a0u: goto label_2c45a0;
        case 0x2c45a4u: goto label_2c45a4;
        case 0x2c45a8u: goto label_2c45a8;
        case 0x2c45acu: goto label_2c45ac;
        case 0x2c45b0u: goto label_2c45b0;
        case 0x2c45b4u: goto label_2c45b4;
        case 0x2c45b8u: goto label_2c45b8;
        case 0x2c45bcu: goto label_2c45bc;
        case 0x2c45c0u: goto label_2c45c0;
        case 0x2c45c4u: goto label_2c45c4;
        case 0x2c45c8u: goto label_2c45c8;
        case 0x2c45ccu: goto label_2c45cc;
        case 0x2c45d0u: goto label_2c45d0;
        case 0x2c45d4u: goto label_2c45d4;
        case 0x2c45d8u: goto label_2c45d8;
        case 0x2c45dcu: goto label_2c45dc;
        case 0x2c45e0u: goto label_2c45e0;
        case 0x2c45e4u: goto label_2c45e4;
        case 0x2c45e8u: goto label_2c45e8;
        case 0x2c45ecu: goto label_2c45ec;
        case 0x2c45f0u: goto label_2c45f0;
        case 0x2c45f4u: goto label_2c45f4;
        case 0x2c45f8u: goto label_2c45f8;
        case 0x2c45fcu: goto label_2c45fc;
        case 0x2c4600u: goto label_2c4600;
        case 0x2c4604u: goto label_2c4604;
        case 0x2c4608u: goto label_2c4608;
        case 0x2c460cu: goto label_2c460c;
        case 0x2c4610u: goto label_2c4610;
        case 0x2c4614u: goto label_2c4614;
        case 0x2c4618u: goto label_2c4618;
        case 0x2c461cu: goto label_2c461c;
        case 0x2c4620u: goto label_2c4620;
        case 0x2c4624u: goto label_2c4624;
        case 0x2c4628u: goto label_2c4628;
        case 0x2c462cu: goto label_2c462c;
        case 0x2c4630u: goto label_2c4630;
        case 0x2c4634u: goto label_2c4634;
        case 0x2c4638u: goto label_2c4638;
        case 0x2c463cu: goto label_2c463c;
        case 0x2c4640u: goto label_2c4640;
        case 0x2c4644u: goto label_2c4644;
        case 0x2c4648u: goto label_2c4648;
        case 0x2c464cu: goto label_2c464c;
        case 0x2c4650u: goto label_2c4650;
        case 0x2c4654u: goto label_2c4654;
        case 0x2c4658u: goto label_2c4658;
        case 0x2c465cu: goto label_2c465c;
        case 0x2c4660u: goto label_2c4660;
        case 0x2c4664u: goto label_2c4664;
        case 0x2c4668u: goto label_2c4668;
        case 0x2c466cu: goto label_2c466c;
        case 0x2c4670u: goto label_2c4670;
        case 0x2c4674u: goto label_2c4674;
        case 0x2c4678u: goto label_2c4678;
        case 0x2c467cu: goto label_2c467c;
        case 0x2c4680u: goto label_2c4680;
        case 0x2c4684u: goto label_2c4684;
        case 0x2c4688u: goto label_2c4688;
        case 0x2c468cu: goto label_2c468c;
        case 0x2c4690u: goto label_2c4690;
        case 0x2c4694u: goto label_2c4694;
        case 0x2c4698u: goto label_2c4698;
        case 0x2c469cu: goto label_2c469c;
        case 0x2c46a0u: goto label_2c46a0;
        case 0x2c46a4u: goto label_2c46a4;
        case 0x2c46a8u: goto label_2c46a8;
        case 0x2c46acu: goto label_2c46ac;
        case 0x2c46b0u: goto label_2c46b0;
        case 0x2c46b4u: goto label_2c46b4;
        case 0x2c46b8u: goto label_2c46b8;
        case 0x2c46bcu: goto label_2c46bc;
        case 0x2c46c0u: goto label_2c46c0;
        case 0x2c46c4u: goto label_2c46c4;
        case 0x2c46c8u: goto label_2c46c8;
        case 0x2c46ccu: goto label_2c46cc;
        case 0x2c46d0u: goto label_2c46d0;
        case 0x2c46d4u: goto label_2c46d4;
        case 0x2c46d8u: goto label_2c46d8;
        case 0x2c46dcu: goto label_2c46dc;
        case 0x2c46e0u: goto label_2c46e0;
        case 0x2c46e4u: goto label_2c46e4;
        case 0x2c46e8u: goto label_2c46e8;
        case 0x2c46ecu: goto label_2c46ec;
        case 0x2c46f0u: goto label_2c46f0;
        case 0x2c46f4u: goto label_2c46f4;
        case 0x2c46f8u: goto label_2c46f8;
        case 0x2c46fcu: goto label_2c46fc;
        case 0x2c4700u: goto label_2c4700;
        case 0x2c4704u: goto label_2c4704;
        case 0x2c4708u: goto label_2c4708;
        case 0x2c470cu: goto label_2c470c;
        case 0x2c4710u: goto label_2c4710;
        case 0x2c4714u: goto label_2c4714;
        case 0x2c4718u: goto label_2c4718;
        case 0x2c471cu: goto label_2c471c;
        case 0x2c4720u: goto label_2c4720;
        case 0x2c4724u: goto label_2c4724;
        case 0x2c4728u: goto label_2c4728;
        case 0x2c472cu: goto label_2c472c;
        case 0x2c4730u: goto label_2c4730;
        case 0x2c4734u: goto label_2c4734;
        case 0x2c4738u: goto label_2c4738;
        case 0x2c473cu: goto label_2c473c;
        case 0x2c4740u: goto label_2c4740;
        case 0x2c4744u: goto label_2c4744;
        case 0x2c4748u: goto label_2c4748;
        case 0x2c474cu: goto label_2c474c;
        case 0x2c4750u: goto label_2c4750;
        case 0x2c4754u: goto label_2c4754;
        case 0x2c4758u: goto label_2c4758;
        case 0x2c475cu: goto label_2c475c;
        case 0x2c4760u: goto label_2c4760;
        case 0x2c4764u: goto label_2c4764;
        case 0x2c4768u: goto label_2c4768;
        case 0x2c476cu: goto label_2c476c;
        case 0x2c4770u: goto label_2c4770;
        case 0x2c4774u: goto label_2c4774;
        case 0x2c4778u: goto label_2c4778;
        case 0x2c477cu: goto label_2c477c;
        case 0x2c4780u: goto label_2c4780;
        case 0x2c4784u: goto label_2c4784;
        case 0x2c4788u: goto label_2c4788;
        case 0x2c478cu: goto label_2c478c;
        case 0x2c4790u: goto label_2c4790;
        case 0x2c4794u: goto label_2c4794;
        case 0x2c4798u: goto label_2c4798;
        case 0x2c479cu: goto label_2c479c;
        case 0x2c47a0u: goto label_2c47a0;
        case 0x2c47a4u: goto label_2c47a4;
        case 0x2c47a8u: goto label_2c47a8;
        case 0x2c47acu: goto label_2c47ac;
        case 0x2c47b0u: goto label_2c47b0;
        case 0x2c47b4u: goto label_2c47b4;
        case 0x2c47b8u: goto label_2c47b8;
        case 0x2c47bcu: goto label_2c47bc;
        case 0x2c47c0u: goto label_2c47c0;
        case 0x2c47c4u: goto label_2c47c4;
        case 0x2c47c8u: goto label_2c47c8;
        case 0x2c47ccu: goto label_2c47cc;
        case 0x2c47d0u: goto label_2c47d0;
        case 0x2c47d4u: goto label_2c47d4;
        case 0x2c47d8u: goto label_2c47d8;
        case 0x2c47dcu: goto label_2c47dc;
        case 0x2c47e0u: goto label_2c47e0;
        case 0x2c47e4u: goto label_2c47e4;
        case 0x2c47e8u: goto label_2c47e8;
        case 0x2c47ecu: goto label_2c47ec;
        case 0x2c47f0u: goto label_2c47f0;
        case 0x2c47f4u: goto label_2c47f4;
        case 0x2c47f8u: goto label_2c47f8;
        case 0x2c47fcu: goto label_2c47fc;
        case 0x2c4800u: goto label_2c4800;
        case 0x2c4804u: goto label_2c4804;
        case 0x2c4808u: goto label_2c4808;
        case 0x2c480cu: goto label_2c480c;
        case 0x2c4810u: goto label_2c4810;
        case 0x2c4814u: goto label_2c4814;
        case 0x2c4818u: goto label_2c4818;
        case 0x2c481cu: goto label_2c481c;
        case 0x2c4820u: goto label_2c4820;
        case 0x2c4824u: goto label_2c4824;
        case 0x2c4828u: goto label_2c4828;
        case 0x2c482cu: goto label_2c482c;
        case 0x2c4830u: goto label_2c4830;
        case 0x2c4834u: goto label_2c4834;
        case 0x2c4838u: goto label_2c4838;
        case 0x2c483cu: goto label_2c483c;
        case 0x2c4840u: goto label_2c4840;
        case 0x2c4844u: goto label_2c4844;
        case 0x2c4848u: goto label_2c4848;
        case 0x2c484cu: goto label_2c484c;
        case 0x2c4850u: goto label_2c4850;
        case 0x2c4854u: goto label_2c4854;
        case 0x2c4858u: goto label_2c4858;
        case 0x2c485cu: goto label_2c485c;
        case 0x2c4860u: goto label_2c4860;
        case 0x2c4864u: goto label_2c4864;
        case 0x2c4868u: goto label_2c4868;
        case 0x2c486cu: goto label_2c486c;
        case 0x2c4870u: goto label_2c4870;
        case 0x2c4874u: goto label_2c4874;
        case 0x2c4878u: goto label_2c4878;
        case 0x2c487cu: goto label_2c487c;
        case 0x2c4880u: goto label_2c4880;
        case 0x2c4884u: goto label_2c4884;
        case 0x2c4888u: goto label_2c4888;
        case 0x2c488cu: goto label_2c488c;
        case 0x2c4890u: goto label_2c4890;
        case 0x2c4894u: goto label_2c4894;
        case 0x2c4898u: goto label_2c4898;
        case 0x2c489cu: goto label_2c489c;
        case 0x2c48a0u: goto label_2c48a0;
        case 0x2c48a4u: goto label_2c48a4;
        case 0x2c48a8u: goto label_2c48a8;
        case 0x2c48acu: goto label_2c48ac;
        case 0x2c48b0u: goto label_2c48b0;
        case 0x2c48b4u: goto label_2c48b4;
        case 0x2c48b8u: goto label_2c48b8;
        case 0x2c48bcu: goto label_2c48bc;
        case 0x2c48c0u: goto label_2c48c0;
        case 0x2c48c4u: goto label_2c48c4;
        case 0x2c48c8u: goto label_2c48c8;
        case 0x2c48ccu: goto label_2c48cc;
        case 0x2c48d0u: goto label_2c48d0;
        case 0x2c48d4u: goto label_2c48d4;
        case 0x2c48d8u: goto label_2c48d8;
        case 0x2c48dcu: goto label_2c48dc;
        case 0x2c48e0u: goto label_2c48e0;
        case 0x2c48e4u: goto label_2c48e4;
        case 0x2c48e8u: goto label_2c48e8;
        case 0x2c48ecu: goto label_2c48ec;
        case 0x2c48f0u: goto label_2c48f0;
        case 0x2c48f4u: goto label_2c48f4;
        case 0x2c48f8u: goto label_2c48f8;
        case 0x2c48fcu: goto label_2c48fc;
        case 0x2c4900u: goto label_2c4900;
        case 0x2c4904u: goto label_2c4904;
        case 0x2c4908u: goto label_2c4908;
        case 0x2c490cu: goto label_2c490c;
        case 0x2c4910u: goto label_2c4910;
        case 0x2c4914u: goto label_2c4914;
        case 0x2c4918u: goto label_2c4918;
        case 0x2c491cu: goto label_2c491c;
        case 0x2c4920u: goto label_2c4920;
        case 0x2c4924u: goto label_2c4924;
        case 0x2c4928u: goto label_2c4928;
        case 0x2c492cu: goto label_2c492c;
        case 0x2c4930u: goto label_2c4930;
        case 0x2c4934u: goto label_2c4934;
        case 0x2c4938u: goto label_2c4938;
        case 0x2c493cu: goto label_2c493c;
        case 0x2c4940u: goto label_2c4940;
        case 0x2c4944u: goto label_2c4944;
        case 0x2c4948u: goto label_2c4948;
        case 0x2c494cu: goto label_2c494c;
        case 0x2c4950u: goto label_2c4950;
        case 0x2c4954u: goto label_2c4954;
        case 0x2c4958u: goto label_2c4958;
        case 0x2c495cu: goto label_2c495c;
        case 0x2c4960u: goto label_2c4960;
        case 0x2c4964u: goto label_2c4964;
        case 0x2c4968u: goto label_2c4968;
        case 0x2c496cu: goto label_2c496c;
        case 0x2c4970u: goto label_2c4970;
        case 0x2c4974u: goto label_2c4974;
        case 0x2c4978u: goto label_2c4978;
        case 0x2c497cu: goto label_2c497c;
        case 0x2c4980u: goto label_2c4980;
        case 0x2c4984u: goto label_2c4984;
        case 0x2c4988u: goto label_2c4988;
        case 0x2c498cu: goto label_2c498c;
        case 0x2c4990u: goto label_2c4990;
        case 0x2c4994u: goto label_2c4994;
        case 0x2c4998u: goto label_2c4998;
        case 0x2c499cu: goto label_2c499c;
        case 0x2c49a0u: goto label_2c49a0;
        case 0x2c49a4u: goto label_2c49a4;
        case 0x2c49a8u: goto label_2c49a8;
        case 0x2c49acu: goto label_2c49ac;
        case 0x2c49b0u: goto label_2c49b0;
        case 0x2c49b4u: goto label_2c49b4;
        case 0x2c49b8u: goto label_2c49b8;
        case 0x2c49bcu: goto label_2c49bc;
        case 0x2c49c0u: goto label_2c49c0;
        case 0x2c49c4u: goto label_2c49c4;
        case 0x2c49c8u: goto label_2c49c8;
        case 0x2c49ccu: goto label_2c49cc;
        case 0x2c49d0u: goto label_2c49d0;
        case 0x2c49d4u: goto label_2c49d4;
        case 0x2c49d8u: goto label_2c49d8;
        case 0x2c49dcu: goto label_2c49dc;
        case 0x2c49e0u: goto label_2c49e0;
        case 0x2c49e4u: goto label_2c49e4;
        case 0x2c49e8u: goto label_2c49e8;
        case 0x2c49ecu: goto label_2c49ec;
        case 0x2c49f0u: goto label_2c49f0;
        case 0x2c49f4u: goto label_2c49f4;
        case 0x2c49f8u: goto label_2c49f8;
        case 0x2c49fcu: goto label_2c49fc;
        case 0x2c4a00u: goto label_2c4a00;
        case 0x2c4a04u: goto label_2c4a04;
        case 0x2c4a08u: goto label_2c4a08;
        case 0x2c4a0cu: goto label_2c4a0c;
        case 0x2c4a10u: goto label_2c4a10;
        case 0x2c4a14u: goto label_2c4a14;
        case 0x2c4a18u: goto label_2c4a18;
        case 0x2c4a1cu: goto label_2c4a1c;
        case 0x2c4a20u: goto label_2c4a20;
        case 0x2c4a24u: goto label_2c4a24;
        case 0x2c4a28u: goto label_2c4a28;
        case 0x2c4a2cu: goto label_2c4a2c;
        case 0x2c4a30u: goto label_2c4a30;
        case 0x2c4a34u: goto label_2c4a34;
        case 0x2c4a38u: goto label_2c4a38;
        case 0x2c4a3cu: goto label_2c4a3c;
        case 0x2c4a40u: goto label_2c4a40;
        case 0x2c4a44u: goto label_2c4a44;
        case 0x2c4a48u: goto label_2c4a48;
        case 0x2c4a4cu: goto label_2c4a4c;
        case 0x2c4a50u: goto label_2c4a50;
        case 0x2c4a54u: goto label_2c4a54;
        case 0x2c4a58u: goto label_2c4a58;
        case 0x2c4a5cu: goto label_2c4a5c;
        case 0x2c4a60u: goto label_2c4a60;
        case 0x2c4a64u: goto label_2c4a64;
        case 0x2c4a68u: goto label_2c4a68;
        case 0x2c4a6cu: goto label_2c4a6c;
        case 0x2c4a70u: goto label_2c4a70;
        case 0x2c4a74u: goto label_2c4a74;
        case 0x2c4a78u: goto label_2c4a78;
        case 0x2c4a7cu: goto label_2c4a7c;
        case 0x2c4a80u: goto label_2c4a80;
        case 0x2c4a84u: goto label_2c4a84;
        case 0x2c4a88u: goto label_2c4a88;
        case 0x2c4a8cu: goto label_2c4a8c;
        case 0x2c4a90u: goto label_2c4a90;
        case 0x2c4a94u: goto label_2c4a94;
        case 0x2c4a98u: goto label_2c4a98;
        case 0x2c4a9cu: goto label_2c4a9c;
        case 0x2c4aa0u: goto label_2c4aa0;
        case 0x2c4aa4u: goto label_2c4aa4;
        case 0x2c4aa8u: goto label_2c4aa8;
        case 0x2c4aacu: goto label_2c4aac;
        case 0x2c4ab0u: goto label_2c4ab0;
        case 0x2c4ab4u: goto label_2c4ab4;
        case 0x2c4ab8u: goto label_2c4ab8;
        case 0x2c4abcu: goto label_2c4abc;
        case 0x2c4ac0u: goto label_2c4ac0;
        case 0x2c4ac4u: goto label_2c4ac4;
        case 0x2c4ac8u: goto label_2c4ac8;
        case 0x2c4accu: goto label_2c4acc;
        case 0x2c4ad0u: goto label_2c4ad0;
        case 0x2c4ad4u: goto label_2c4ad4;
        case 0x2c4ad8u: goto label_2c4ad8;
        case 0x2c4adcu: goto label_2c4adc;
        case 0x2c4ae0u: goto label_2c4ae0;
        case 0x2c4ae4u: goto label_2c4ae4;
        case 0x2c4ae8u: goto label_2c4ae8;
        case 0x2c4aecu: goto label_2c4aec;
        case 0x2c4af0u: goto label_2c4af0;
        case 0x2c4af4u: goto label_2c4af4;
        case 0x2c4af8u: goto label_2c4af8;
        case 0x2c4afcu: goto label_2c4afc;
        case 0x2c4b00u: goto label_2c4b00;
        case 0x2c4b04u: goto label_2c4b04;
        case 0x2c4b08u: goto label_2c4b08;
        case 0x2c4b0cu: goto label_2c4b0c;
        case 0x2c4b10u: goto label_2c4b10;
        case 0x2c4b14u: goto label_2c4b14;
        case 0x2c4b18u: goto label_2c4b18;
        case 0x2c4b1cu: goto label_2c4b1c;
        case 0x2c4b20u: goto label_2c4b20;
        case 0x2c4b24u: goto label_2c4b24;
        case 0x2c4b28u: goto label_2c4b28;
        case 0x2c4b2cu: goto label_2c4b2c;
        case 0x2c4b30u: goto label_2c4b30;
        case 0x2c4b34u: goto label_2c4b34;
        case 0x2c4b38u: goto label_2c4b38;
        case 0x2c4b3cu: goto label_2c4b3c;
        case 0x2c4b40u: goto label_2c4b40;
        case 0x2c4b44u: goto label_2c4b44;
        case 0x2c4b48u: goto label_2c4b48;
        case 0x2c4b4cu: goto label_2c4b4c;
        case 0x2c4b50u: goto label_2c4b50;
        case 0x2c4b54u: goto label_2c4b54;
        case 0x2c4b58u: goto label_2c4b58;
        case 0x2c4b5cu: goto label_2c4b5c;
        case 0x2c4b60u: goto label_2c4b60;
        case 0x2c4b64u: goto label_2c4b64;
        case 0x2c4b68u: goto label_2c4b68;
        case 0x2c4b6cu: goto label_2c4b6c;
        case 0x2c4b70u: goto label_2c4b70;
        case 0x2c4b74u: goto label_2c4b74;
        case 0x2c4b78u: goto label_2c4b78;
        case 0x2c4b7cu: goto label_2c4b7c;
        case 0x2c4b80u: goto label_2c4b80;
        case 0x2c4b84u: goto label_2c4b84;
        case 0x2c4b88u: goto label_2c4b88;
        case 0x2c4b8cu: goto label_2c4b8c;
        case 0x2c4b90u: goto label_2c4b90;
        case 0x2c4b94u: goto label_2c4b94;
        case 0x2c4b98u: goto label_2c4b98;
        case 0x2c4b9cu: goto label_2c4b9c;
        case 0x2c4ba0u: goto label_2c4ba0;
        case 0x2c4ba4u: goto label_2c4ba4;
        case 0x2c4ba8u: goto label_2c4ba8;
        case 0x2c4bacu: goto label_2c4bac;
        case 0x2c4bb0u: goto label_2c4bb0;
        case 0x2c4bb4u: goto label_2c4bb4;
        case 0x2c4bb8u: goto label_2c4bb8;
        case 0x2c4bbcu: goto label_2c4bbc;
        case 0x2c4bc0u: goto label_2c4bc0;
        case 0x2c4bc4u: goto label_2c4bc4;
        case 0x2c4bc8u: goto label_2c4bc8;
        case 0x2c4bccu: goto label_2c4bcc;
        case 0x2c4bd0u: goto label_2c4bd0;
        case 0x2c4bd4u: goto label_2c4bd4;
        case 0x2c4bd8u: goto label_2c4bd8;
        case 0x2c4bdcu: goto label_2c4bdc;
        case 0x2c4be0u: goto label_2c4be0;
        case 0x2c4be4u: goto label_2c4be4;
        case 0x2c4be8u: goto label_2c4be8;
        case 0x2c4becu: goto label_2c4bec;
        case 0x2c4bf0u: goto label_2c4bf0;
        case 0x2c4bf4u: goto label_2c4bf4;
        case 0x2c4bf8u: goto label_2c4bf8;
        case 0x2c4bfcu: goto label_2c4bfc;
        default: return;
    }

label_2c4430:
    // 0x2c4430: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4430u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4434:
    // 0x2c4434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4438:
    // 0x2c4438: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4438u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c443c:
    // 0x2c443c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c443cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4440:
    // 0x2c4440: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4440u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4444:
    // 0x2c4444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4448:
    // 0x2c4448: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4448u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c444c:
    // 0x2c444c: 0x1d809ff  .word       0x01D809FF                   # dsra32      $at, $t8, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c444cu;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 24) >> (32 + 7));
label_2c4450:
    // 0x2c4450: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4454:
    // 0x2c4454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4458:
    // 0x2c4458: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4458u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c445c:
    // 0x2c445c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c445cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4460:
    // 0x2c4460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4464:
    // 0x2c4464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4468:
    // 0x2c4468: 0x24000001  addiu       $zero, $zero, 0x1
    ctx->pc = 0x2c4468u;
    // NOP (addiu $zero, ...)
label_2c446c:
    // 0x2c446c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c446cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4470:
    // 0x2c4470: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c4474:
    if (ctx->pc == 0x2C4474u) {
        ctx->pc = 0x2C4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4470u;
        // 0x2c4474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4478u;
        goto label_2c4478;
    }
    ctx->pc = 0x2C4470u;
    {
        const bool branch_taken_0x2c4470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4470) {
            ctx->pc = 0x2C4474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4470u;
            // 0x2c4474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4480u;
            goto label_2c4480;
        }
    }
    ctx->pc = 0x2C4478u;
label_2c4478:
    // 0x2c4478: 0x24000002  addiu       $zero, $zero, 0x2
    ctx->pc = 0x2c4478u;
    // NOP (addiu $zero, ...)
label_2c447c:
    // 0x2c447c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c447cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4480:
    // 0x2c4480: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4480u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4484:
    // 0x2c4484: 0x101b06c  .word       0x0101B06C                   # dadd        $s6, $t0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4484u;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2c4488:
    // 0x2c4488: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4488u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c448c:
    // 0x2c448c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c448cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4490:
    // 0x2c4490: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c4494:
    if (ctx->pc == 0x2C4494u) {
        ctx->pc = 0x2C4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4490u;
        // 0x2c4494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4498u;
        goto label_2c4498;
    }
    ctx->pc = 0x2C4490u;
    {
        const bool branch_taken_0x2c4490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4490) {
            ctx->pc = 0x2C4494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4490u;
            // 0x2c4494: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C44A0u;
            goto label_2c44a0;
        }
    }
    ctx->pc = 0x2C4498u;
label_2c4498:
    // 0x2c4498: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4498u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c449c:
    // 0x2c449c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c449cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c44a0:
    // 0x2c44a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44a4:
    // 0x2c44a4: 0x101b86c  .word       0x0101B86C                   # dadd        $s7, $t0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c44a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2c44a8:
    // 0x2c44a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44ac:
    // 0x2c44ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c44acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c44b0:
    // 0x2c44b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44b4:
    // 0x2c44b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c44b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c44b8:
    // 0x2c44b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44bc:
    // 0x2c44bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c44bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c44c0:
    // 0x2c44c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44c4:
    // 0x2c44c4: 0x10108ea  .word       0x010108EA                   # slt         $at, $t0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c44c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c44c8:
    // 0x2c44c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44cc:
    // 0x2c44cc: 0x101092a  .word       0x0101092A                   # slt         $at, $t0, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c44ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c44d0:
    // 0x2c44d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44d4:
    // 0x2c44d4: 0x101096a  .word       0x0101096A                   # slt         $at, $t0, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c44d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c44d8:
    // 0x2c44d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44dc:
    // 0x2c44dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c44dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c44e0:
    // 0x2c44e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44e4:
    // 0x2c44e4: 0x10118ea  .word       0x010118EA                   # slt         $v1, $t0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c44e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c44e8:
    // 0x2c44e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44ec:
    // 0x2c44ec: 0x104212a  .word       0x0104212A                   # slt         $a0, $t0, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c44ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2c44f0:
    // 0x2c44f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44f4:
    // 0x2c44f4: 0x105296a  .word       0x0105296A                   # slt         $a1, $t0, $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c44f4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2c44f8:
    // 0x2c44f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c44f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c44fc:
    // 0x2c44fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c44fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4500:
    // 0x2c4500: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4504:
    // 0x2c4504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4508:
    // 0x2c4508: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4508u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c450c:
    // 0x2c450c: 0x101212a  .word       0x0101212A                   # slt         $a0, $t0, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c450cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c4510:
    // 0x2c4510: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4510u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4514:
    // 0x2c4514: 0x103296a  .word       0x0103296A                   # slt         $a1, $t0, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4514u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2c4518:
    // 0x2c4518: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4518u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c451c:
    // 0x2c451c: 0x11c0abe  .word       0x011C0ABE                   # dsrl32      $at, $gp, 10 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c451cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 28) >> (32 + 10));
label_2c4520:
    // 0x2c4520: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4520u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4524:
    // 0x2c4524: 0x11c18bd  .word       0x011C18BD                   # INVALID     $t0, $gp, 0x18BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4524u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4524 raw=0x011C18BD");
 /* MITIGATED */
label_2c4528:
    // 0x2c4528: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4528u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c452c:
    // 0x2c452c: 0x11c20be  .word       0x011C20BE                   # dsrl32      $a0, $gp, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c452cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 28) >> (32 + 2));
label_2c4530:
    // 0x2c4530: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4534:
    // 0x2c4534: 0x11c284b  .word       0x011C284B                   # movn        $a1, $t0, $gp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4534u;
    if (GPR_U64(ctx, 28) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
label_2c4538:
    // 0x2c4538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c453c:
    // 0x2c453c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c453cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4540:
    // 0x2c4540: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4540u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4544:
    // 0x2c4544: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4544u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4548:
    // 0x2c4548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c454c:
    // 0x2c454c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c454cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4550:
    // 0x2c4550: 0x81eaeb3c  lb          $t2, -0x14C4($t7)
    ctx->pc = 0x2c4550u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294961980)));
label_2c4554:
    // 0x2c4554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4558:
    // 0x2c4558: 0x810bfb3c  lb          $t3, -0x4C4($t0)
    ctx->pc = 0x2c4558u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294966076)));
label_2c455c:
    // 0x2c455c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c455cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4560:
    // 0x2c4560: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4560u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4564:
    // 0x2c4564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4568:
    // 0x2c4568: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4568u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c456c:
    // 0x2c456c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c456cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4570:
    // 0x2c4570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4574:
    // 0x2c4574: 0x1d509ff  .word       0x01D509FF                   # dsra32      $at, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4574u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 21) >> (32 + 7));
label_2c4578:
    // 0x2c4578: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4578u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c457c:
    // 0x2c457c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c457cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4580:
    // 0x2c4580: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4584:
    // 0x2c4584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4588:
    // 0x2c4588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c458c:
    // 0x2c458c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c458cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4590:
    // 0x2c4590: 0x24000001  addiu       $zero, $zero, 0x1
    ctx->pc = 0x2c4590u;
    // NOP (addiu $zero, ...)
label_2c4594:
    // 0x2c4594: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4598:
    // 0x2c4598: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c459c:
    if (ctx->pc == 0x2C459Cu) {
        ctx->pc = 0x2C459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4598u;
        // 0x2c459c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45A0u;
        goto label_2c45a0;
    }
    ctx->pc = 0x2C4598u;
    {
        const bool branch_taken_0x2c4598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4598) {
            ctx->pc = 0x2C459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4598u;
            // 0x2c459c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C45A8u;
            goto label_2c45a8;
        }
    }
    ctx->pc = 0x2C45A0u;
label_2c45a0:
    // 0x2c45a0: 0x24000002  addiu       $zero, $zero, 0x2
    ctx->pc = 0x2c45a0u;
    // NOP (addiu $zero, ...)
label_2c45a4:
    // 0x2c45a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c45a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c45a8:
    // 0x2c45a8: 0x400007f6  .word       0x400007F6                   # mfc0        $zero, Index # 000007F6 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c45a8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c45ac:
    // 0x2c45ac: 0x1150847  .word       0x01150847                   # srav        $at, $s5, $t0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c45acu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 21), GPR_U32(ctx, 8) & 0x1F));
label_2c45b0:
    // 0x2c45b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c45b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c45b4:
    // 0x2c45b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c45b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c45b8:
    // 0x2c45b8: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c45bc:
    if (ctx->pc == 0x2C45BCu) {
        ctx->pc = 0x2C45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45B8u;
        // 0x2c45bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45C0u;
        goto label_2c45c0;
    }
    ctx->pc = 0x2C45B8u;
    {
        const bool branch_taken_0x2c45b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c45b8) {
            ctx->pc = 0x2C45BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C45B8u;
            // 0x2c45bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C45C8u;
            goto label_2c45c8;
        }
    }
    ctx->pc = 0x2C45C0u;
label_2c45c0:
    // 0x2c45c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c45c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c45c4:
    // 0x2c45c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c45c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c45c8:
    // 0x2c45c8: 0x400007f2  .word       0x400007F2                   # mfc0        $zero, Index # 000007F2 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c45c8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c45cc:
    // 0x2c45cc: 0x1150843  .word       0x01150843                   # sra         $at, $s5, 1 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c45ccu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 21), 1));
label_2c45d0:
    // 0x2c45d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c45d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c45d4:
    // 0x2c45d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c45d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c45d8:
    // 0x2c45d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c45d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c45dc:
    // 0x2c45dc: 0x1d609ff  .word       0x01D609FF                   # dsra32      $at, $s6, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c45dcu;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 22) >> (32 + 7));
label_2c45e0:
    // 0x2c45e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c45e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c45e4:
    // 0x2c45e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c45e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c45e8:
    // 0x2c45e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c45e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c45ec:
    // 0x2c45ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c45ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c45f0:
    // 0x2c45f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c45f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c45f4:
    // 0x2c45f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c45f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c45f8:
    // 0x2c45f8: 0x24000001  addiu       $zero, $zero, 0x1
    ctx->pc = 0x2c45f8u;
    // NOP (addiu $zero, ...)
label_2c45fc:
    // 0x2c45fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c45fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4600:
    // 0x2c4600: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c4604:
    if (ctx->pc == 0x2C4604u) {
        ctx->pc = 0x2C4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4600u;
        // 0x2c4604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4608u;
        goto label_2c4608;
    }
    ctx->pc = 0x2C4600u;
    {
        const bool branch_taken_0x2c4600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4600) {
            ctx->pc = 0x2C4604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4600u;
            // 0x2c4604: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4610u;
            goto label_2c4610;
        }
    }
    ctx->pc = 0x2C4608u;
label_2c4608:
    // 0x2c4608: 0x24000002  addiu       $zero, $zero, 0x2
    ctx->pc = 0x2c4608u;
    // NOP (addiu $zero, ...)
label_2c460c:
    // 0x2c460c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c460cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4610:
    // 0x2c4610: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4610u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4614:
    // 0x2c4614: 0x115086c  .word       0x0115086C                   # dadd        $at, $t0, $s5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4614u;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2c4618:
    // 0x2c4618: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4618u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c461c:
    // 0x2c461c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c461cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4620:
    // 0x2c4620: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c4624:
    if (ctx->pc == 0x2C4624u) {
        ctx->pc = 0x2C4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4620u;
        // 0x2c4624: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4628u;
        goto label_2c4628;
    }
    ctx->pc = 0x2C4620u;
    {
        const bool branch_taken_0x2c4620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4620) {
            ctx->pc = 0x2C4624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4620u;
            // 0x2c4624: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4630u;
            goto label_2c4630;
        }
    }
    ctx->pc = 0x2C4628u;
label_2c4628:
    // 0x2c4628: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4628u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c462c:
    // 0x2c462c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c462cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4630:
    // 0x2c4630: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4630u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4634:
    // 0x2c4634: 0x101a868  .word       0x0101A868                   # mfsa        $s5 # 01010040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4634u;
    SET_GPR_U32(ctx, 21, ctx->sa);
label_2c4638:
    // 0x2c4638: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4638u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c463c:
    // 0x2c463c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c463cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4640:
    // 0x2c4640: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4640u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4644:
    // 0x2c4644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4648:
    // 0x2c4648: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4648u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c464c:
    // 0x2c464c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c464cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4650:
    // 0x2c4650: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4650u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4654:
    // 0x2c4654: 0x1d809ff  .word       0x01D809FF                   # dsra32      $at, $t8, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4654u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 24) >> (32 + 7));
label_2c4658:
    // 0x2c4658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c465c:
    // 0x2c465c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c465cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4660:
    // 0x2c4660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4664:
    // 0x2c4664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4668:
    // 0x2c4668: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4668u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c466c:
    // 0x2c466c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c466cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4670:
    // 0x2c4670: 0x24000001  addiu       $zero, $zero, 0x1
    ctx->pc = 0x2c4670u;
    // NOP (addiu $zero, ...)
label_2c4674:
    // 0x2c4674: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4674u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4678:
    // 0x2c4678: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c467c:
    if (ctx->pc == 0x2C467Cu) {
        ctx->pc = 0x2C467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4678u;
        // 0x2c467c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4680u;
        goto label_2c4680;
    }
    ctx->pc = 0x2C4678u;
    {
        const bool branch_taken_0x2c4678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4678) {
            ctx->pc = 0x2C467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4678u;
            // 0x2c467c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4688u;
            goto label_2c4688;
        }
    }
    ctx->pc = 0x2C4680u;
label_2c4680:
    // 0x2c4680: 0x24000002  addiu       $zero, $zero, 0x2
    ctx->pc = 0x2c4680u;
    // NOP (addiu $zero, ...)
label_2c4684:
    // 0x2c4684: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4684u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4688:
    // 0x2c4688: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4688u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c468c:
    // 0x2c468c: 0x101b06c  .word       0x0101B06C                   # dadd        $s6, $t0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c468cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2c4690:
    // 0x2c4690: 0x810bf33c  lb          $t3, -0xCC4($t0)
    ctx->pc = 0x2c4690u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294964028)));
label_2c4694:
    // 0x2c4694: 0x1fe52aa  .word       0x01FE52AA                   # slt         $t2, $t7, $fp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4694u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2c4698:
    // 0x2c4698: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c469c:
    if (ctx->pc == 0x2C469Cu) {
        ctx->pc = 0x2C469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4698u;
        // 0x2c469c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46A0u;
        goto label_2c46a0;
    }
    ctx->pc = 0x2C4698u;
    {
        const bool branch_taken_0x2c4698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4698) {
            ctx->pc = 0x2C469Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4698u;
            // 0x2c469c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C46A8u;
            goto label_2c46a8;
        }
    }
    ctx->pc = 0x2C46A0u;
label_2c46a0:
    // 0x2c46a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46a4:
    // 0x2c46a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c46a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c46a8:
    // 0x2c46a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46ac:
    // 0x2c46ac: 0x101b86c  .word       0x0101B86C                   # dadd        $s7, $t0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c46acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2c46b0:
    // 0x2c46b0: 0x810bf33c  lb          $t3, -0xCC4($t0)
    ctx->pc = 0x2c46b0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294964028)));
label_2c46b4:
    // 0x2c46b4: 0x1fe52aa  .word       0x01FE52AA                   # slt         $t2, $t7, $fp # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c46b4u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2c46b8:
    // 0x2c46b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46bc:
    // 0x2c46bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c46bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c46c0:
    // 0x2c46c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46c4:
    // 0x2c46c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c46c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c46c8:
    // 0x2c46c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46cc:
    // 0x2c46cc: 0x101086a  .word       0x0101086A                   # slt         $at, $t0, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c46ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c46d0:
    // 0x2c46d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46d4:
    // 0x2c46d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c46d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c46d8:
    // 0x2c46d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46dc:
    // 0x2c46dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c46dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c46e0:
    // 0x2c46e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46e4:
    // 0x2c46e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c46e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c46e8:
    // 0x2c46e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46ec:
    // 0x2c46ec: 0x10108ea  .word       0x010108EA                   # slt         $at, $t0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c46ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c46f0:
    // 0x2c46f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46f4:
    // 0x2c46f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c46f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c46f8:
    // 0x2c46f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c46f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c46fc:
    // 0x2c46fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c46fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4700:
    // 0x2c4700: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4700u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4704:
    // 0x2c4704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4708:
    // 0x2c4708: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4708u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c470c:
    // 0x2c470c: 0x101192a  .word       0x0101192A                   # slt         $v1, $t0, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c470cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c4710:
    // 0x2c4710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4714:
    // 0x2c4714: 0x103196a  .word       0x0103196A                   # slt         $v1, $t0, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2c4718:
    // 0x2c4718: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4718u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c471c:
    // 0x2c471c: 0x10b02bc  .word       0x010B02BC                   # dsll32      $zero, $t3, 10 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c471cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 11) << (32 + 10));
label_2c4720:
    // 0x2c4720: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4724:
    // 0x2c4724: 0x10a08bc  .word       0x010A08BC                   # dsll32      $at, $t2, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 10) << (32 + 2));
label_2c4728:
    // 0x2c4728: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4728u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c472c:
    // 0x2c472c: 0x10a18bd  .word       0x010A18BD                   # INVALID     $t0, $t2, 0x18BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c472cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C472C raw=0x010A18BD");
 /* MITIGATED */
label_2c4730:
    // 0x2c4730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4734:
    // 0x2c4734: 0x10a20be  .word       0x010A20BE                   # dsrl32      $a0, $t2, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) >> (32 + 2));
label_2c4738:
    // 0x2c4738: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4738u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c473c:
    // 0x2c473c: 0x10a284b  .word       0x010A284B                   # movn        $a1, $t0, $t2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c473cu;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
label_2c4740:
    // 0x2c4740: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4740u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4744:
    // 0x2c4744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4748:
    // 0x2c4748: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4748u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c474c:
    // 0x2c474c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c474cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4750:
    // 0x2c4750: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4750u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4754:
    // 0x2c4754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4758:
    // 0x2c4758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c475c:
    // 0x2c475c: 0x1fff96a  .word       0x01FFF96A                   # slt         $ra, $t7, $ra # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c475cu;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
label_2c4760:
    // 0x2c4760: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4760u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4764:
    // 0x2c4764: 0x10631ac  .word       0x010631AC                   # dadd        $a2, $t0, $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4764u;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 6); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_2c4768:
    // 0x2c4768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c476c:
    // 0x2c476c: 0x10008ec  .word       0x010008EC                   # dadd        $at, $t0, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c476cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2c4770:
    // 0x2c4770: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4770u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4774:
    // 0x2c4774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4778:
    // 0x2c4778: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4778u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c477c:
    // 0x2c477c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c477cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4780:
    // 0x2c4780: 0x10020080  beq         $zero, $v0, . + 4 + (0x80 << 2)
label_2c4784:
    if (ctx->pc == 0x2C4784u) {
        ctx->pc = 0x2C4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4780u;
        // 0x2c4784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4788u;
        goto label_2c4788;
    }
    ctx->pc = 0x2C4780u;
    {
        const bool branch_taken_0x2c4780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4780u;
        // 0x2c4784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4780) {
            ctx->pc = 0x2C4984u;
            goto label_2c4984;
        }
    }
    ctx->pc = 0x2C4788u;
label_2c4788:
    // 0x2c4788: 0x34011000  ori         $at, $zero, 0x1000
    ctx->pc = 0x2c4788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4096);
label_2c478c:
    // 0x2c478c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c478cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4790:
    // 0x2c4790: 0x50010003  beql        $zero, $at, . + 4 + (0x3 << 2)
label_2c4794:
    if (ctx->pc == 0x2C4794u) {
        ctx->pc = 0x2C4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4790u;
        // 0x2c4794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4798u;
        goto label_2c4798;
    }
    ctx->pc = 0x2C4790u;
    {
        const bool branch_taken_0x2c4790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4790) {
            ctx->pc = 0x2C4794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4790u;
            // 0x2c4794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C47A0u;
            goto label_2c47a0;
        }
    }
    ctx->pc = 0x2C4798u;
label_2c4798:
    // 0x2c4798: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4798u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c479c:
    // 0x2c479c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c479cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c47a0:
    // 0x2c47a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c47a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c47a4:
    // 0x2c47a4: 0x11e086a  .word       0x011E086A                   # slt         $at, $t0, $fp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c47a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2c47a8:
    // 0x2c47a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c47a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c47ac:
    // 0x2c47ac: 0x1fe296a  .word       0x01FE296A                   # slt         $a1, $t7, $fp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c47acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2c47b0:
    // 0x2c47b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c47b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c47b4:
    // 0x2c47b4: 0x10010ec  .word       0x010010EC                   # dadd        $v0, $t0, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c47b4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2c47b8:
    // 0x2c47b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c47b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c47bc:
    // 0x2c47bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c47bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c47c0:
    // 0x2c47c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c47c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c47c4:
    // 0x2c47c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c47c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c47c8:
    // 0x2c47c8: 0x10020080  beq         $zero, $v0, . + 4 + (0x80 << 2)
label_2c47cc:
    if (ctx->pc == 0x2C47CCu) {
        ctx->pc = 0x2C47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47C8u;
        // 0x2c47cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47D0u;
        goto label_2c47d0;
    }
    ctx->pc = 0x2C47C8u;
    {
        const bool branch_taken_0x2c47c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47C8u;
        // 0x2c47cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47c8) {
            ctx->pc = 0x2C49CCu;
            goto label_2c49cc;
        }
    }
    ctx->pc = 0x2C47D0u;
label_2c47d0:
    // 0x2c47d0: 0x34011000  ori         $at, $zero, 0x1000
    ctx->pc = 0x2c47d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4096);
label_2c47d4:
    // 0x2c47d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c47d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c47d8:
    // 0x2c47d8: 0x50010005  beql        $zero, $at, . + 4 + (0x5 << 2)
label_2c47dc:
    if (ctx->pc == 0x2C47DCu) {
        ctx->pc = 0x2C47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47D8u;
        // 0x2c47dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47E0u;
        goto label_2c47e0;
    }
    ctx->pc = 0x2C47D8u;
    {
        const bool branch_taken_0x2c47d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c47d8) {
            ctx->pc = 0x2C47DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C47D8u;
            // 0x2c47dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C47F0u;
            goto label_2c47f0;
        }
    }
    ctx->pc = 0x2C47E0u;
label_2c47e0:
    // 0x2c47e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c47e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c47e4:
    // 0x2c47e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c47e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c47e8:
    // 0x2c47e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c47e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c47ec:
    // 0x2c47ec: 0x11e10aa  .word       0x011E10AA                   # slt         $v0, $t0, $fp # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c47ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2c47f0:
    // 0x2c47f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c47f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c47f4:
    // 0x2c47f4: 0x11629aa  .word       0x011629AA                   # slt         $a1, $t0, $s6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c47f4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2c47f8:
    // 0x2c47f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c47f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c47fc:
    // 0x2c47fc: 0x1fe296a  .word       0x01FE296A                   # slt         $a1, $t7, $fp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c47fcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2c4800:
    // 0x2c4800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4804:
    // 0x2c4804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4808:
    // 0x2c4808: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4808u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c480c:
    // 0x2c480c: 0x10110ec  .word       0x010110EC                   # dadd        $v0, $t0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c480cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 8); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_2c4810:
    // 0x2c4810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4814:
    // 0x2c4814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4818:
    // 0x2c4818: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4818u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c481c:
    // 0x2c481c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c481cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4820:
    // 0x2c4820: 0x10020080  beq         $zero, $v0, . + 4 + (0x80 << 2)
label_2c4824:
    if (ctx->pc == 0x2C4824u) {
        ctx->pc = 0x2C4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4820u;
        // 0x2c4824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4828u;
        goto label_2c4828;
    }
    ctx->pc = 0x2C4820u;
    {
        const bool branch_taken_0x2c4820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4820u;
        // 0x2c4824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4820) {
            ctx->pc = 0x2C4A24u;
            goto label_2c4a24;
        }
    }
    ctx->pc = 0x2C4828u;
label_2c4828:
    // 0x2c4828: 0x34011000  ori         $at, $zero, 0x1000
    ctx->pc = 0x2c4828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4096);
label_2c482c:
    // 0x2c482c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c482cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4830:
    // 0x2c4830: 0x50010007  beql        $zero, $at, . + 4 + (0x7 << 2)
label_2c4834:
    if (ctx->pc == 0x2C4834u) {
        ctx->pc = 0x2C4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4830u;
        // 0x2c4834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4838u;
        goto label_2c4838;
    }
    ctx->pc = 0x2C4830u;
    {
        const bool branch_taken_0x2c4830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c4830) {
            ctx->pc = 0x2C4834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4830u;
            // 0x2c4834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4850u;
            goto label_2c4850;
        }
    }
    ctx->pc = 0x2C4838u;
label_2c4838:
    // 0x2c4838: 0x0  nop
    ctx->pc = 0x2c4838u;
    // NOP
label_2c483c:
    // 0x2c483c: 0x4aac0100  vaddx.yw    $vf4, $vf0, $vf12x
    ctx->pc = 0x2c483cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2c4840:
    // 0x2c4840: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4840u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4844:
    // 0x2c4844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4848:
    // 0x2c4848: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4848u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c484c:
    // 0x2c484c: 0x11829ea  .word       0x011829EA                   # slt         $a1, $t0, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c484cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
label_2c4850:
    // 0x2c4850: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4850u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4854:
    // 0x2c4854: 0x1fe296a  .word       0x01FE296A                   # slt         $a1, $t7, $fp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4854u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2c4858:
    // 0x2c4858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c485c:
    // 0x2c485c: 0x101fabe  .word       0x0101FABE                   # dsrl32      $ra, $at, 10 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c485cu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 1) >> (32 + 10));
label_2c4860:
    // 0x2c4860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4864:
    // 0x2c4864: 0x1e2f86a  .word       0x01E2F86A                   # slt         $ra, $t7, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4864u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c4868:
    // 0x2c4868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c486c:
    // 0x2c486c: 0x10731a8  .word       0x010731A8                   # mfsa        $a2 # 01070180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c486cu;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_2c4870:
    // 0x2c4870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4874:
    // 0x2c4874: 0x10000a9  .word       0x010000A9                   # mtsa        $t0 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4874u;
    ctx->sa = GPR_U32(ctx, 8) & 0x7F;
label_2c4878:
    // 0x2c4878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c487c:
    // 0x2c487c: 0x1e110e8  .word       0x01E110E8                   # mfsa        $v0 # 01E100C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c487cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_2c4880:
    // 0x2c4880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4884:
    // 0x2c4884: 0x1e2092c  .word       0x01E2092C                   # dadd        $at, $t7, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4884u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2c4888:
    // 0x2c4888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c488c:
    // 0x2c488c: 0x105dabe  .word       0x0105DABE                   # dsrl32      $k1, $a1, 10 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c488cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 5) >> (32 + 10));
label_2c4890:
    // 0x2c4890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4894:
    // 0x2c4894: 0x1e5caea  .word       0x01E5CAEA                   # slt         $t9, $t7, $a1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4894u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2c4898:
    // 0x2c4898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c489c:
    // 0x2c489c: 0x1e5d32a  .word       0x01E5D32A                   # slt         $k0, $t7, $a1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c489cu;
    SET_GPR_U64(ctx, 26, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2c48a0:
    // 0x2c48a0: 0x800323bc  lb          $v1, 0x23BC($zero)
    ctx->pc = 0x2c48a0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x23BCu));
label_2c48a4:
    // 0x2c48a4: 0x106fb69  .word       0x0106FB69                   # mtsa        $t0 # 0006FB40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c48a4u;
    ctx->sa = GPR_U32(ctx, 8) & 0x7F;
label_2c48a8:
    // 0x2c48a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c48a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c48ac:
    // 0x2c48ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c48acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c48b0:
    // 0x2c48b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c48b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c48b4:
    // 0x2c48b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c48b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c48b8:
    // 0x2c48b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c48b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c48bc:
    // 0x2c48bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c48bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c48c0:
    // 0x2c48c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c48c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c48c4:
    // 0x2c48c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c48c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c48c8:
    // 0x2c48c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c48c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c48cc:
    // 0x2c48cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c48ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c48d0:
    // 0x2c48d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c48d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c48d4:
    // 0x2c48d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c48d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c48d8:
    // 0x2c48d8: 0x2c030030  sltiu       $v1, $zero, 0x30
    ctx->pc = 0x2c48d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_2c48dc:
    // 0x2c48dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c48dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c48e0:
    // 0x2c48e0: 0x5203001f  beql        $s0, $v1, . + 4 + (0x1F << 2)
label_2c48e4:
    if (ctx->pc == 0x2C48E4u) {
        ctx->pc = 0x2C48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48E0u;
        // 0x2c48e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C48E8u;
        goto label_2c48e8;
    }
    ctx->pc = 0x2C48E0u;
    {
        const bool branch_taken_0x2c48e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c48e0) {
            ctx->pc = 0x2C48E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C48E0u;
            // 0x2c48e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4960u;
            goto label_2c4960;
        }
    }
    ctx->pc = 0x2C48E8u;
label_2c48e8:
    // 0x2c48e8: 0x8101033c  lb          $at, 0x33C($t0)
    ctx->pc = 0x2c48e8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 828)));
label_2c48ec:
    // 0x2c48ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c48ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c48f0:
    // 0x2c48f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c48f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c48f4:
    // 0x2c48f4: 0x100f85c  .word       0x0100F85C                   # dmult       $t0, $zero # 0000F840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c48f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C48F4 raw=0x0100F85C");
 /* MITIGATED */
label_2c48f8:
    // 0x2c48f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c48f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c48fc:
    // 0x2c48fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c48fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4900:
    // 0x2c4900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4904:
    // 0x2c4904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4908:
    // 0x2c4908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c490c:
    // 0x2c490c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c490cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4910:
    // 0x2c4910: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4910u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4914:
    // 0x2c4914: 0x1010aaa  .word       0x01010AAA                   # slt         $at, $t0, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c4918:
    // 0x2c4918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c491c:
    // 0x2c491c: 0x10b09bc  .word       0x010B09BC                   # dsll32      $at, $t3, 6 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c491cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 11) << (32 + 6));
label_2c4920:
    // 0x2c4920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4924:
    // 0x2c4924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4928:
    // 0x2c4928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c492c:
    // 0x2c492c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c492cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4930:
    // 0x2c4930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4934:
    // 0x2c4934: 0x10a08aa  .word       0x010A08AA                   # slt         $at, $t0, $t2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4934u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_2c4938:
    // 0x2c4938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c493c:
    // 0x2c493c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c493cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4940:
    // 0x2c4940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4944:
    // 0x2c4944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4948:
    // 0x2c4948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c494c:
    // 0x2c494c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c494cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4950:
    // 0x2c4950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4954:
    // 0x2c4954: 0x10a10ea  .word       0x010A10EA                   # slt         $v0, $t0, $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_2c4958:
    // 0x2c4958: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4958u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c495c:
    // 0x2c495c: 0x10b10bd  .word       0x010B10BD                   # INVALID     $t0, $t3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c495cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C495C raw=0x010B10BD");
 /* MITIGATED */
label_2c4960:
    // 0x2c4960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4964:
    // 0x2c4964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4968:
    // 0x2c4968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c496c:
    // 0x2c496c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c496cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4970:
    // 0x2c4970: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4970u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4974:
    // 0x2c4974: 0x10a192a  .word       0x010A192A                   # slt         $v1, $t0, $t2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4974u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_2c4978:
    // 0x2c4978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c497c:
    // 0x2c497c: 0x10319aa  .word       0x010319AA                   # slt         $v1, $t0, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c497cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2c4980:
    // 0x2c4980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4984:
    // 0x2c4984: 0x10b18be  .word       0x010B18BE                   # dsrl32      $v1, $t3, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> (32 + 2));
label_2c4988:
    // 0x2c4988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c498c:
    // 0x2c498c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c498cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4990:
    // 0x2c4990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4994:
    // 0x2c4994: 0x10a216a  .word       0x010A216A                   # slt         $a0, $t0, $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4994u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_2c4998:
    // 0x2c4998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c499c:
    // 0x2c499c: 0x10231ea  .word       0x010231EA                   # slt         $a2, $t0, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c499cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c49a0:
    // 0x2c49a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49a4:
    // 0x2c49a4: 0x103322a  .word       0x0103322A                   # slt         $a2, $t0, $v1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c49a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2c49a8:
    // 0x2c49a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49ac:
    // 0x2c49ac: 0x10131aa  .word       0x010131AA                   # slt         $a2, $t0, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c49acu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2c49b0:
    // 0x2c49b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49b4:
    // 0x2c49b4: 0x10b20bf  .word       0x010B20BF                   # dsra32      $a0, $t3, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c49b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 11) >> (32 + 2));
label_2c49b8:
    // 0x2c49b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49bc:
    // 0x2c49bc: 0x10c28bc  .word       0x010C28BC                   # dsll32      $a1, $t4, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c49bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) << (32 + 2));
label_2c49c0:
    // 0x2c49c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49c4:
    // 0x2c49c4: 0x10c38be  .word       0x010C38BE                   # dsrl32      $a3, $t4, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c49c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) >> (32 + 2));
label_2c49c8:
    // 0x2c49c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49cc:
    // 0x2c49cc: 0x10c30bd  .word       0x010C30BD                   # INVALID     $t0, $t4, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c49ccu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C49CC raw=0x010C30BD");
 /* MITIGATED */
label_2c49d0:
    // 0x2c49d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49d4:
    // 0x2c49d4: 0x10c40bf  .word       0x010C40BF                   # dsra32      $t0, $t4, 2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c49d4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 12) >> (32 + 2));
label_2c49d8:
    // 0x2c49d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49dc:
    // 0x2c49dc: 0x10df848  .word       0x010DF848                   # jr          $t0 # 000DF840 <InstrIdType: CPU_SPECIAL>
label_2c49e0:
    if (ctx->pc == 0x2C49E0u) {
        ctx->pc = 0x2C49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49DCu;
        // 0x2c49e0: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C49E4u;
        goto label_2c49e4;
    }
    ctx->pc = 0x2C49DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        ctx->pc = 0x2C49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49DCu;
        // 0x2c49e0: 0x8000033c  lb          $zero, 0x33C($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C49DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C49E4u;
label_2c49e4:
    // 0x2c49e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c49e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c49e8:
    // 0x2c49e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49ec:
    // 0x2c49ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c49ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c49f0:
    // 0x2c49f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49f4:
    // 0x2c49f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c49f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c49f8:
    // 0x2c49f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c49f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c49fc:
    // 0x2c49fc: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c49fcu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4a00:
    // 0x2c4a00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4a00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4a04:
    // 0x2c4a04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4a04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4a08:
    // 0x2c4a08: 0x420f06e3  .word       0x420F06E3                   # INVALID     $s0, $t7, 0x6E3 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c4a08u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x23 at 0x2C4A08 raw=0x420F06E3");
 /* MITIGATED */
label_2c4a0c:
    // 0x2c4a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4a10:
    // 0x2c4a10: 0x81ec0b3d  lb          $t4, 0xB3D($t7)
    ctx->pc = 0x2c4a10u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2877)));
label_2c4a14:
    // 0x2c4a14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4a14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4a18:
    // 0x2c4a18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4a18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4a1c:
    // 0x2c4a1c: 0x81fb58  .word       0x0081FB58                   # mult        $ra, $a0, $at # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4a20:
    // 0x2c4a20: 0x8101633c  lb          $at, 0x633C($t0)
    ctx->pc = 0x2c4a20u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 25404)));
label_2c4a24:
    // 0x2c4a24: 0x42fb58  .word       0x0042FB58                   # mult        $ra, $v0, $v0 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4a28:
    // 0x2c4a28: 0x420f06df  .word       0x420F06DF                   # INVALID     $s0, $t7, 0x6DF # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c4a28u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1F at 0x2C4A28 raw=0x420F06DF");
 /* MITIGATED */
label_2c4a2c:
    // 0x2c4a2c: 0x12d6b6c  .word       0x012D6B6C                   # dadd        $t5, $t1, $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4a2cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 9); int64_t b = (int64_t)GPR_S64(ctx, 13); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_2c4a30:
    // 0x2c4a30: 0x81ec633d  lb          $t4, 0x633D($t7)
    ctx->pc = 0x2c4a30u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 25405)));
label_2c4a34:
    // 0x2c4a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4a38:
    // 0x2c4a38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4a38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4a3c:
    // 0x2c4a3c: 0x41fb98  .word       0x0041FB98                   # mult        $ra, $v0, $at # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4a40:
    // 0x2c4a40: 0x8101633c  lb          $at, 0x633C($t0)
    ctx->pc = 0x2c4a40u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 25404)));
label_2c4a44:
    // 0x2c4a44: 0x102fb98  .word       0x0102FB98                   # mult        $ra, $t0, $v0 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4a48:
    // 0x2c4a48: 0x420f06db  .word       0x420F06DB                   # INVALID     $s0, $t7, 0x6DB # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c4a48u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2C4A48 raw=0x420F06DB");
 /* MITIGATED */
label_2c4a4c:
    // 0x2c4a4c: 0xae73ac  .word       0x00AE73AC                   # dadd        $t6, $a1, $t6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4a4cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 5); int64_t b = (int64_t)GPR_S64(ctx, 14); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_2c4a50:
    // 0x2c4a50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4a50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4a54:
    // 0x2c4a54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4a54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4a58:
    // 0x2c4a58: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2c4a5c:
    if (ctx->pc == 0x2C4A5Cu) {
        ctx->pc = 0x2C4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A58u;
        // 0x2c4a5c: 0x82f858  .word       0x0082F858                   # mult        $ra, $a0, $v0 # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4A60u;
        goto label_2c4a60;
    }
    ctx->pc = 0x2C4A58u;
    {
        const bool branch_taken_0x2c4a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A58u;
        // 0x2c4a5c: 0x82f858  .word       0x0082F858                   # mult        $ra, $a0, $v0 # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a58) {
            ctx->pc = 0x2C4A64u;
            goto label_2c4a64;
        }
    }
    ctx->pc = 0x2C4A60u;
label_2c4a60:
    // 0x2c4a60: 0x81e36b3c  lb          $v1, 0x6B3C($t7)
    ctx->pc = 0x2c4a60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 27452)));
label_2c4a64:
    // 0x2c4a64: 0x61086c  .word       0x0061086C                   # dadd        $at, $v1, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4a64u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_2c4a68:
    // 0x2c4a68: 0x81e2733c  lb          $v0, 0x733C($t7)
    ctx->pc = 0x2c4a68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29500)));
label_2c4a6c:
    // 0x2c4a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4a70:
    // 0x2c4a70: 0x81ef033d  lb          $t7, 0x33D($t7)
    ctx->pc = 0x2c4a70u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 829)));
label_2c4a74:
    // 0x2c4a74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4a74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4a78:
    // 0x2c4a78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4a78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4a7c:
    // 0x2c4a7c: 0x101fb59  .word       0x0101FB59                   # multu       $t0, $at # 0000FB40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4a7cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 8) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4a80:
    // 0x2c4a80: 0x80ee0b3c  lb          $t6, 0xB3C($a3)
    ctx->pc = 0x2c4a80u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 2876)));
label_2c4a84:
    // 0x2c4a84: 0x81fb58  .word       0x0081FB58                   # mult        $ra, $a0, $at # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4a88:
    // 0x2c4a88: 0x81a9133c  lb          $t1, 0x133C($t5)
    ctx->pc = 0x2c4a88u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 4924)));
label_2c4a8c:
    // 0x2c4a8c: 0x6d6b6c  .word       0x006D6B6C                   # dadd        $t5, $v1, $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4a8cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 13); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_2c4a90:
    // 0x2c4a90: 0x81ea7b3d  lb          $t2, 0x7B3D($t7)
    ctx->pc = 0x2c4a90u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 31549)));
label_2c4a94:
    // 0x2c4a94: 0x11e0b9b  .word       0x011E0B9B                   # divu        $at, $t0, $fp # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4a94u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
label_2c4a98:
    // 0x2c4a98: 0x81671b3c  lb          $a3, 0x1B3C($t3)
    ctx->pc = 0x2c4a98u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 6972)));
label_2c4a9c:
    // 0x2c4a9c: 0x5e125b  .word       0x005E125B                   # divu        $v0, $v0, $fp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4a9cu;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2c4aa0:
    // 0x2c4aa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4aa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4aa4:
    // 0x2c4aa4: 0x102fada  .word       0x0102FADA                   # div         $ra, $t0, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4aa4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c4aa8:
    // 0x2c4aa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4aa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4aac:
    // 0x2c4aac: 0x42fad8  .word       0x0042FAD8                   # mult        $ra, $v0, $v0 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4ab0:
    // 0x2c4ab0: 0x81e5533d  lb          $a1, 0x533D($t7)
    ctx->pc = 0x2c4ab0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21309)));
label_2c4ab4:
    // 0x2c4ab4: 0xab5aec  .word       0x00AB5AEC                   # dadd        $t3, $a1, $t3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ab4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 5); int64_t b = (int64_t)GPR_S64(ctx, 11); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 11, r); }
label_2c4ab8:
    // 0x2c4ab8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ab8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4abc:
    // 0x2c4abc: 0x83f99a  .word       0x0083F99A                   # div         $ra, $a0, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4abcu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c4ac0:
    // 0x2c4ac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4ac4:
    // 0x2c4ac4: 0x43f999  .word       0x0043F999                   # multu       $v0, $v1 # 0000F980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ac4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4ac8:
    // 0x2c4ac8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ac8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4acc:
    // 0x2c4acc: 0x12631ac  .word       0x012631AC                   # dadd        $a2, $t1, $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4accu;
    { int64_t a = (int64_t)GPR_S64(ctx, 9); int64_t b = (int64_t)GPR_S64(ctx, 6); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_2c4ad0:
    // 0x2c4ad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4ad4:
    // 0x2c4ad4: 0x9e19db  .word       0x009E19DB                   # divu        $v1, $a0, $fp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ad4u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2c4ad8:
    // 0x2c4ad8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ad8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4adc:
    // 0x2c4adc: 0x1e969bc  .word       0x01E969BC                   # dsll32      $t5, $t1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4adcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) << (32 + 6));
label_2c4ae0:
    // 0x2c4ae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4ae4:
    // 0x2c4ae4: 0x1e970bd  .word       0x01E970BD                   # INVALID     $t7, $t1, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ae4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4AE4 raw=0x01E970BD");
 /* MITIGATED */
label_2c4ae8:
    // 0x2c4ae8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4ae8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4aec:
    // 0x2c4aec: 0x1e97a4a  .word       0x01E97A4A                   # movz        $t7, $t7, $t1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4aecu;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2c4af0:
    // 0x2c4af0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4af0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4af4:
    // 0x2c4af4: 0x1ea69bc  .word       0x01EA69BC                   # dsll32      $t5, $t2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4af4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) << (32 + 6));
label_2c4af8:
    // 0x2c4af8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4af8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4afc:
    // 0x2c4afc: 0x1ea70bd  .word       0x01EA70BD                   # INVALID     $t7, $t2, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4afcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4AFC raw=0x01EA70BD");
 /* MITIGATED */
label_2c4b00:
    // 0x2c4b00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b04:
    // 0x2c4b04: 0x1ea7a8a  .word       0x01EA7A8A                   # movz        $t7, $t7, $t2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b04u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2c4b08:
    // 0x2c4b08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b0c:
    // 0x2c4b0c: 0x1eb69bc  .word       0x01EB69BC                   # dsll32      $t5, $t3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) << (32 + 6));
label_2c4b10:
    // 0x2c4b10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b14:
    // 0x2c4b14: 0x1eb70bd  .word       0x01EB70BD                   # INVALID     $t7, $t3, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4B14 raw=0x01EB70BD");
 /* MITIGATED */
label_2c4b18:
    // 0x2c4b18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b1c:
    // 0x2c4b1c: 0x1eb7aca  .word       0x01EB7ACA                   # movz        $t7, $t7, $t3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b1cu;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2c4b20:
    // 0x2c4b20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b24:
    // 0x2c4b24: 0x1e549bc  .word       0x01E549BC                   # dsll32      $t1, $a1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 6));
label_2c4b28:
    // 0x2c4b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b2c:
    // 0x2c4b2c: 0x1e550bd  .word       0x01E550BD                   # INVALID     $t7, $a1, 0x50BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b2cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4B2C raw=0x01E550BD");
 /* MITIGATED */
label_2c4b30:
    // 0x2c4b30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b34:
    // 0x2c4b34: 0x1e55c0a  .word       0x01E55C0A                   # movz        $t3, $t7, $a1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b34u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2c4b38:
    // 0x2c4b38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b3c:
    // 0x2c4b3c: 0x1e649bc  .word       0x01E649BC                   # dsll32      $t1, $a2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 6));
label_2c4b40:
    // 0x2c4b40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b44:
    // 0x2c4b44: 0x1e650bd  .word       0x01E650BD                   # INVALID     $t7, $a2, 0x50BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b44u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4B44 raw=0x01E650BD");
 /* MITIGATED */
label_2c4b48:
    // 0x2c4b48: 0x81f3033c  lb          $s3, 0x33C($t7)
    ctx->pc = 0x2c4b48u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 828)));
label_2c4b4c:
    // 0x2c4b4c: 0x1e65c4a  .word       0x01E65C4A                   # movz        $t3, $t7, $a2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b4cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2c4b50:
    // 0x2c4b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b54:
    // 0x2c4b54: 0x1e749bc  .word       0x01E749BC                   # dsll32      $t1, $a3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 6));
label_2c4b58:
    // 0x2c4b58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b5c:
    // 0x2c4b5c: 0x1e750bd  .word       0x01E750BD                   # INVALID     $t7, $a3, 0x50BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b5cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C4B5C raw=0x01E750BD");
 /* MITIGATED */
label_2c4b60:
    // 0x2c4b60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b64:
    // 0x2c4b64: 0x1e75c8a  .word       0x01E75C8A                   # movz        $t3, $t7, $a3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4b64u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2c4b68:
    // 0x2c4b68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b6c:
    // 0x2c4b6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4b6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4b70:
    // 0x2c4b70: 0x48007000  .word       0x48007000                   # INVALID     $zero, $zero, 0x7000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c4b70u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C4B70 raw=0x48007000");
 /* MITIGATED */
label_2c4b74:
    // 0x2c4b74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4b74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4b78:
    // 0x2c4b78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b7c:
    // 0x2c4b7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4b7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4b80:
    // 0x2c4b80: 0x420e07d0  .word       0x420E07D0                   # rfe # 000E07C0 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c4b80u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x10 at 0x2C4B80 raw=0x420E07D0");
 /* MITIGATED */
label_2c4b84:
    // 0x2c4b84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4b84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4b88:
    // 0x2c4b88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b8c:
    // 0x2c4b8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4b8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4b90:
    // 0x2c4b90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b94:
    // 0x2c4b94: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4b94u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4b98:
    // 0x2c4b98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4b98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4b9c:
    // 0x2c4b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4ba0:
    // 0x2c4ba0: 0x3e01000  .word       0x03E01000                   # sll         $v0, $zero, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2c4ba4:
    // 0x2c4ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4ba8:
    // 0x2c4ba8: 0x420e07cb  .word       0x420E07CB                   # INVALID     $s0, $t6, 0x7CB # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c4ba8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xB at 0x2C4BA8 raw=0x420E07CB");
 /* MITIGATED */
label_2c4bac:
    // 0x2c4bac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4bacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4bb0:
    // 0x2c4bb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4bb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4bb4:
    // 0x2c4bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4bb8:
    // 0x2c4bb8: 0x1d30000  .word       0x01D30000                   # sll         $zero, $s3, 0 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4bb8u;
    
label_2c4bbc:
    // 0x2c4bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4bc0:
    // 0x2c4bc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4bc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4bc4:
    // 0x2c4bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4bc8:
    // 0x2c4bc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4bc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4bcc:
    // 0x2c4bcc: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c4bccu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c4bd0:
    // 0x2c4bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4bd4:
    // 0x2c4bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4bd8:
    // 0x2c4bd8: 0x420f06a9  .word       0x420F06A9                   # INVALID     $s0, $t7, 0x6A9 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c4bd8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2C4BD8 raw=0x420F06A9");
 /* MITIGATED */
label_2c4bdc:
    // 0x2c4bdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4bdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4be0:
    // 0x2c4be0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4be0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4be4:
    // 0x2c4be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c4be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c4be8:
    // 0x2c4be8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4be8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4bec:
    // 0x2c4bec: 0x82f8d8  .word       0x0082F8D8                   # mult        $ra, $a0, $v0 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4bf0:
    // 0x2c4bf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4bf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4bf4:
    // 0x2c4bf4: 0x41f8d8  .word       0x0041F8D8                   # mult        $ra, $v0, $at # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c4bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c4bf8:
    // 0x2c4bf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c4bf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c4bfc:
    // 0x2c4bfc: 0x12318ec  .word       0x012318EC                   # dadd        $v1, $t1, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c4bfcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 9); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
    ctx->pc = 0x2c4c00u;
    return;
}

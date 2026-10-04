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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part52(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1b46d8u: goto label_1b46d8;
        case 0x1b46dcu: goto label_1b46dc;
        case 0x1b46e0u: goto label_1b46e0;
        case 0x1b46e4u: goto label_1b46e4;
        case 0x1b46e8u: goto label_1b46e8;
        case 0x1b46ecu: goto label_1b46ec;
        case 0x1b46f0u: goto label_1b46f0;
        case 0x1b46f4u: goto label_1b46f4;
        case 0x1b46f8u: goto label_1b46f8;
        case 0x1b46fcu: goto label_1b46fc;
        case 0x1b4700u: goto label_1b4700;
        case 0x1b4704u: goto label_1b4704;
        case 0x1b4708u: goto label_1b4708;
        case 0x1b470cu: goto label_1b470c;
        case 0x1b4710u: goto label_1b4710;
        case 0x1b4714u: goto label_1b4714;
        case 0x1b4718u: goto label_1b4718;
        case 0x1b471cu: goto label_1b471c;
        case 0x1b4720u: goto label_1b4720;
        case 0x1b4724u: goto label_1b4724;
        case 0x1b4728u: goto label_1b4728;
        case 0x1b472cu: goto label_1b472c;
        case 0x1b4730u: goto label_1b4730;
        case 0x1b4734u: goto label_1b4734;
        case 0x1b4738u: goto label_1b4738;
        case 0x1b473cu: goto label_1b473c;
        case 0x1b4740u: goto label_1b4740;
        case 0x1b4744u: goto label_1b4744;
        case 0x1b4748u: goto label_1b4748;
        case 0x1b474cu: goto label_1b474c;
        case 0x1b4750u: goto label_1b4750;
        case 0x1b4754u: goto label_1b4754;
        case 0x1b4758u: goto label_1b4758;
        case 0x1b475cu: goto label_1b475c;
        case 0x1b4760u: goto label_1b4760;
        case 0x1b4764u: goto label_1b4764;
        case 0x1b4768u: goto label_1b4768;
        case 0x1b476cu: goto label_1b476c;
        case 0x1b4770u: goto label_1b4770;
        case 0x1b4774u: goto label_1b4774;
        case 0x1b4778u: goto label_1b4778;
        case 0x1b477cu: goto label_1b477c;
        case 0x1b4780u: goto label_1b4780;
        case 0x1b4784u: goto label_1b4784;
        case 0x1b4788u: goto label_1b4788;
        case 0x1b478cu: goto label_1b478c;
        case 0x1b4790u: goto label_1b4790;
        case 0x1b4794u: goto label_1b4794;
        case 0x1b4798u: goto label_1b4798;
        case 0x1b479cu: goto label_1b479c;
        case 0x1b47a0u: goto label_1b47a0;
        case 0x1b47a4u: goto label_1b47a4;
        case 0x1b47a8u: goto label_1b47a8;
        case 0x1b47acu: goto label_1b47ac;
        case 0x1b47b0u: goto label_1b47b0;
        case 0x1b47b4u: goto label_1b47b4;
        case 0x1b47b8u: goto label_1b47b8;
        case 0x1b47bcu: goto label_1b47bc;
        case 0x1b47c0u: goto label_1b47c0;
        case 0x1b47c4u: goto label_1b47c4;
        case 0x1b47c8u: goto label_1b47c8;
        case 0x1b47ccu: goto label_1b47cc;
        case 0x1b47d0u: goto label_1b47d0;
        case 0x1b47d4u: goto label_1b47d4;
        case 0x1b47d8u: goto label_1b47d8;
        case 0x1b47dcu: goto label_1b47dc;
        case 0x1b47e0u: goto label_1b47e0;
        case 0x1b47e4u: goto label_1b47e4;
        case 0x1b47e8u: goto label_1b47e8;
        case 0x1b47ecu: goto label_1b47ec;
        case 0x1b47f0u: goto label_1b47f0;
        case 0x1b47f4u: goto label_1b47f4;
        case 0x1b47f8u: goto label_1b47f8;
        case 0x1b47fcu: goto label_1b47fc;
        case 0x1b4800u: goto label_1b4800;
        case 0x1b4804u: goto label_1b4804;
        case 0x1b4808u: goto label_1b4808;
        case 0x1b480cu: goto label_1b480c;
        case 0x1b4810u: goto label_1b4810;
        case 0x1b4814u: goto label_1b4814;
        case 0x1b4818u: goto label_1b4818;
        case 0x1b481cu: goto label_1b481c;
        case 0x1b4820u: goto label_1b4820;
        case 0x1b4824u: goto label_1b4824;
        case 0x1b4828u: goto label_1b4828;
        case 0x1b482cu: goto label_1b482c;
        case 0x1b4830u: goto label_1b4830;
        case 0x1b4834u: goto label_1b4834;
        case 0x1b4838u: goto label_1b4838;
        case 0x1b483cu: goto label_1b483c;
        case 0x1b4840u: goto label_1b4840;
        case 0x1b4844u: goto label_1b4844;
        case 0x1b4848u: goto label_1b4848;
        case 0x1b484cu: goto label_1b484c;
        case 0x1b4850u: goto label_1b4850;
        case 0x1b4854u: goto label_1b4854;
        case 0x1b4858u: goto label_1b4858;
        case 0x1b485cu: goto label_1b485c;
        case 0x1b4860u: goto label_1b4860;
        case 0x1b4864u: goto label_1b4864;
        case 0x1b4868u: goto label_1b4868;
        case 0x1b486cu: goto label_1b486c;
        case 0x1b4870u: goto label_1b4870;
        case 0x1b4874u: goto label_1b4874;
        case 0x1b4878u: goto label_1b4878;
        case 0x1b487cu: goto label_1b487c;
        case 0x1b4880u: goto label_1b4880;
        case 0x1b4884u: goto label_1b4884;
        case 0x1b4888u: goto label_1b4888;
        case 0x1b488cu: goto label_1b488c;
        case 0x1b4890u: goto label_1b4890;
        case 0x1b4894u: goto label_1b4894;
        case 0x1b4898u: goto label_1b4898;
        case 0x1b489cu: goto label_1b489c;
        case 0x1b48a0u: goto label_1b48a0;
        case 0x1b48a4u: goto label_1b48a4;
        case 0x1b48a8u: goto label_1b48a8;
        case 0x1b48acu: goto label_1b48ac;
        case 0x1b48b0u: goto label_1b48b0;
        case 0x1b48b4u: goto label_1b48b4;
        case 0x1b48b8u: goto label_1b48b8;
        case 0x1b48bcu: goto label_1b48bc;
        case 0x1b48c0u: goto label_1b48c0;
        case 0x1b48c4u: goto label_1b48c4;
        case 0x1b48c8u: goto label_1b48c8;
        case 0x1b48ccu: goto label_1b48cc;
        case 0x1b48d0u: goto label_1b48d0;
        case 0x1b48d4u: goto label_1b48d4;
        case 0x1b48d8u: goto label_1b48d8;
        case 0x1b48dcu: goto label_1b48dc;
        case 0x1b48e0u: goto label_1b48e0;
        case 0x1b48e4u: goto label_1b48e4;
        case 0x1b48e8u: goto label_1b48e8;
        case 0x1b48ecu: goto label_1b48ec;
        case 0x1b48f0u: goto label_1b48f0;
        case 0x1b48f4u: goto label_1b48f4;
        case 0x1b48f8u: goto label_1b48f8;
        case 0x1b48fcu: goto label_1b48fc;
        case 0x1b4900u: goto label_1b4900;
        case 0x1b4904u: goto label_1b4904;
        case 0x1b4908u: goto label_1b4908;
        case 0x1b490cu: goto label_1b490c;
        case 0x1b4910u: goto label_1b4910;
        case 0x1b4914u: goto label_1b4914;
        case 0x1b4918u: goto label_1b4918;
        case 0x1b491cu: goto label_1b491c;
        case 0x1b4920u: goto label_1b4920;
        case 0x1b4924u: goto label_1b4924;
        case 0x1b4928u: goto label_1b4928;
        case 0x1b492cu: goto label_1b492c;
        case 0x1b4930u: goto label_1b4930;
        case 0x1b4934u: goto label_1b4934;
        case 0x1b4938u: goto label_1b4938;
        case 0x1b493cu: goto label_1b493c;
        case 0x1b4940u: goto label_1b4940;
        case 0x1b4944u: goto label_1b4944;
        case 0x1b4948u: goto label_1b4948;
        case 0x1b494cu: goto label_1b494c;
        case 0x1b4950u: goto label_1b4950;
        case 0x1b4954u: goto label_1b4954;
        case 0x1b4958u: goto label_1b4958;
        case 0x1b495cu: goto label_1b495c;
        case 0x1b4960u: goto label_1b4960;
        case 0x1b4964u: goto label_1b4964;
        case 0x1b4968u: goto label_1b4968;
        case 0x1b496cu: goto label_1b496c;
        case 0x1b4970u: goto label_1b4970;
        case 0x1b4974u: goto label_1b4974;
        case 0x1b4978u: goto label_1b4978;
        case 0x1b497cu: goto label_1b497c;
        case 0x1b4980u: goto label_1b4980;
        case 0x1b4984u: goto label_1b4984;
        case 0x1b4988u: goto label_1b4988;
        case 0x1b498cu: goto label_1b498c;
        case 0x1b4990u: goto label_1b4990;
        case 0x1b4994u: goto label_1b4994;
        case 0x1b4998u: goto label_1b4998;
        case 0x1b499cu: goto label_1b499c;
        case 0x1b49a0u: goto label_1b49a0;
        case 0x1b49a4u: goto label_1b49a4;
        case 0x1b49a8u: goto label_1b49a8;
        case 0x1b49acu: goto label_1b49ac;
        case 0x1b49b0u: goto label_1b49b0;
        case 0x1b49b4u: goto label_1b49b4;
        case 0x1b49b8u: goto label_1b49b8;
        case 0x1b49bcu: goto label_1b49bc;
        case 0x1b49c0u: goto label_1b49c0;
        case 0x1b49c4u: goto label_1b49c4;
        case 0x1b49c8u: goto label_1b49c8;
        case 0x1b49ccu: goto label_1b49cc;
        case 0x1b49d0u: goto label_1b49d0;
        case 0x1b49d4u: goto label_1b49d4;
        case 0x1b49d8u: goto label_1b49d8;
        case 0x1b49dcu: goto label_1b49dc;
        case 0x1b49e0u: goto label_1b49e0;
        case 0x1b49e4u: goto label_1b49e4;
        case 0x1b49e8u: goto label_1b49e8;
        case 0x1b49ecu: goto label_1b49ec;
        case 0x1b49f0u: goto label_1b49f0;
        case 0x1b49f4u: goto label_1b49f4;
        case 0x1b49f8u: goto label_1b49f8;
        case 0x1b49fcu: goto label_1b49fc;
        case 0x1b4a00u: goto label_1b4a00;
        case 0x1b4a04u: goto label_1b4a04;
        case 0x1b4a08u: goto label_1b4a08;
        case 0x1b4a0cu: goto label_1b4a0c;
        case 0x1b4a10u: goto label_1b4a10;
        case 0x1b4a14u: goto label_1b4a14;
        case 0x1b4a18u: goto label_1b4a18;
        case 0x1b4a1cu: goto label_1b4a1c;
        case 0x1b4a20u: goto label_1b4a20;
        case 0x1b4a24u: goto label_1b4a24;
        case 0x1b4a28u: goto label_1b4a28;
        case 0x1b4a2cu: goto label_1b4a2c;
        case 0x1b4a30u: goto label_1b4a30;
        case 0x1b4a34u: goto label_1b4a34;
        case 0x1b4a38u: goto label_1b4a38;
        case 0x1b4a3cu: goto label_1b4a3c;
        case 0x1b4a40u: goto label_1b4a40;
        case 0x1b4a44u: goto label_1b4a44;
        case 0x1b4a48u: goto label_1b4a48;
        case 0x1b4a4cu: goto label_1b4a4c;
        case 0x1b4a50u: goto label_1b4a50;
        case 0x1b4a54u: goto label_1b4a54;
        case 0x1b4a58u: goto label_1b4a58;
        case 0x1b4a5cu: goto label_1b4a5c;
        case 0x1b4a60u: goto label_1b4a60;
        case 0x1b4a64u: goto label_1b4a64;
        case 0x1b4a68u: goto label_1b4a68;
        case 0x1b4a6cu: goto label_1b4a6c;
        case 0x1b4a70u: goto label_1b4a70;
        case 0x1b4a74u: goto label_1b4a74;
        case 0x1b4a78u: goto label_1b4a78;
        case 0x1b4a7cu: goto label_1b4a7c;
        case 0x1b4a80u: goto label_1b4a80;
        case 0x1b4a84u: goto label_1b4a84;
        case 0x1b4a88u: goto label_1b4a88;
        case 0x1b4a8cu: goto label_1b4a8c;
        case 0x1b4a90u: goto label_1b4a90;
        case 0x1b4a94u: goto label_1b4a94;
        case 0x1b4a98u: goto label_1b4a98;
        case 0x1b4a9cu: goto label_1b4a9c;
        case 0x1b4aa0u: goto label_1b4aa0;
        case 0x1b4aa4u: goto label_1b4aa4;
        case 0x1b4aa8u: goto label_1b4aa8;
        case 0x1b4aacu: goto label_1b4aac;
        case 0x1b4ab0u: goto label_1b4ab0;
        case 0x1b4ab4u: goto label_1b4ab4;
        case 0x1b4ab8u: goto label_1b4ab8;
        case 0x1b4abcu: goto label_1b4abc;
        case 0x1b4ac0u: goto label_1b4ac0;
        case 0x1b4ac4u: goto label_1b4ac4;
        case 0x1b4ac8u: goto label_1b4ac8;
        case 0x1b4accu: goto label_1b4acc;
        case 0x1b4ad0u: goto label_1b4ad0;
        case 0x1b4ad4u: goto label_1b4ad4;
        case 0x1b4ad8u: goto label_1b4ad8;
        case 0x1b4adcu: goto label_1b4adc;
        case 0x1b4ae0u: goto label_1b4ae0;
        case 0x1b4ae4u: goto label_1b4ae4;
        case 0x1b4ae8u: goto label_1b4ae8;
        case 0x1b4aecu: goto label_1b4aec;
        case 0x1b4af0u: goto label_1b4af0;
        case 0x1b4af4u: goto label_1b4af4;
        case 0x1b4af8u: goto label_1b4af8;
        case 0x1b4afcu: goto label_1b4afc;
        case 0x1b4b00u: goto label_1b4b00;
        case 0x1b4b04u: goto label_1b4b04;
        case 0x1b4b08u: goto label_1b4b08;
        case 0x1b4b0cu: goto label_1b4b0c;
        case 0x1b4b10u: goto label_1b4b10;
        case 0x1b4b14u: goto label_1b4b14;
        case 0x1b4b18u: goto label_1b4b18;
        case 0x1b4b1cu: goto label_1b4b1c;
        case 0x1b4b20u: goto label_1b4b20;
        case 0x1b4b24u: goto label_1b4b24;
        case 0x1b4b28u: goto label_1b4b28;
        case 0x1b4b2cu: goto label_1b4b2c;
        case 0x1b4b30u: goto label_1b4b30;
        case 0x1b4b34u: goto label_1b4b34;
        case 0x1b4b38u: goto label_1b4b38;
        case 0x1b4b3cu: goto label_1b4b3c;
        case 0x1b4b40u: goto label_1b4b40;
        case 0x1b4b44u: goto label_1b4b44;
        case 0x1b4b48u: goto label_1b4b48;
        case 0x1b4b4cu: goto label_1b4b4c;
        case 0x1b4b50u: goto label_1b4b50;
        case 0x1b4b54u: goto label_1b4b54;
        case 0x1b4b58u: goto label_1b4b58;
        case 0x1b4b5cu: goto label_1b4b5c;
        case 0x1b4b60u: goto label_1b4b60;
        case 0x1b4b64u: goto label_1b4b64;
        case 0x1b4b68u: goto label_1b4b68;
        case 0x1b4b6cu: goto label_1b4b6c;
        case 0x1b4b70u: goto label_1b4b70;
        case 0x1b4b74u: goto label_1b4b74;
        case 0x1b4b78u: goto label_1b4b78;
        case 0x1b4b7cu: goto label_1b4b7c;
        case 0x1b4b80u: goto label_1b4b80;
        case 0x1b4b84u: goto label_1b4b84;
        case 0x1b4b88u: goto label_1b4b88;
        case 0x1b4b8cu: goto label_1b4b8c;
        case 0x1b4b90u: goto label_1b4b90;
        case 0x1b4b94u: goto label_1b4b94;
        case 0x1b4b98u: goto label_1b4b98;
        case 0x1b4b9cu: goto label_1b4b9c;
        case 0x1b4ba0u: goto label_1b4ba0;
        case 0x1b4ba4u: goto label_1b4ba4;
        case 0x1b4ba8u: goto label_1b4ba8;
        case 0x1b4bacu: goto label_1b4bac;
        case 0x1b4bb0u: goto label_1b4bb0;
        case 0x1b4bb4u: goto label_1b4bb4;
        case 0x1b4bb8u: goto label_1b4bb8;
        case 0x1b4bbcu: goto label_1b4bbc;
        case 0x1b4bc0u: goto label_1b4bc0;
        case 0x1b4bc4u: goto label_1b4bc4;
        case 0x1b4bc8u: goto label_1b4bc8;
        case 0x1b4bccu: goto label_1b4bcc;
        case 0x1b4bd0u: goto label_1b4bd0;
        case 0x1b4bd4u: goto label_1b4bd4;
        case 0x1b4bd8u: goto label_1b4bd8;
        case 0x1b4bdcu: goto label_1b4bdc;
        case 0x1b4be0u: goto label_1b4be0;
        case 0x1b4be4u: goto label_1b4be4;
        case 0x1b4be8u: goto label_1b4be8;
        case 0x1b4becu: goto label_1b4bec;
        case 0x1b4bf0u: goto label_1b4bf0;
        case 0x1b4bf4u: goto label_1b4bf4;
        case 0x1b4bf8u: goto label_1b4bf8;
        case 0x1b4bfcu: goto label_1b4bfc;
        case 0x1b4c00u: goto label_1b4c00;
        case 0x1b4c04u: goto label_1b4c04;
        case 0x1b4c08u: goto label_1b4c08;
        case 0x1b4c0cu: goto label_1b4c0c;
        case 0x1b4c10u: goto label_1b4c10;
        case 0x1b4c14u: goto label_1b4c14;
        case 0x1b4c18u: goto label_1b4c18;
        case 0x1b4c1cu: goto label_1b4c1c;
        case 0x1b4c20u: goto label_1b4c20;
        case 0x1b4c24u: goto label_1b4c24;
        case 0x1b4c28u: goto label_1b4c28;
        case 0x1b4c2cu: goto label_1b4c2c;
        case 0x1b4c30u: goto label_1b4c30;
        case 0x1b4c34u: goto label_1b4c34;
        case 0x1b4c38u: goto label_1b4c38;
        case 0x1b4c3cu: goto label_1b4c3c;
        case 0x1b4c40u: goto label_1b4c40;
        case 0x1b4c44u: goto label_1b4c44;
        case 0x1b4c48u: goto label_1b4c48;
        case 0x1b4c4cu: goto label_1b4c4c;
        case 0x1b4c50u: goto label_1b4c50;
        case 0x1b4c54u: goto label_1b4c54;
        default: return;
    }

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
            { ctx->pc = 0x1b4478; return; }
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
            { ctx->pc = 0x1b4450; return; }
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
            { ctx->pc = 0x1b4164; return; }
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
            goto label_1b4720;
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
            goto label_1b46d8;
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
            goto label_1b48a4;
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
            goto label_1b47a8;
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
            goto label_1b48a4;
        }
    }
    ctx->pc = 0x1B46D4u;
label_1b46d4:
    // 0x1b46d4: 0x0  nop
    ctx->pc = 0x1b46d4u;
    // NOP
label_1b46d8:
    // 0x1b46d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b46d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b46dc:
    // 0x1b46dc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b46dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b46e0:
    // 0x1b46e0: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
label_1b46e4:
    if (ctx->pc == 0x1B46E4u) {
        ctx->pc = 0x1B46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46E0u;
        // 0x1b46e4: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B46E8u;
        goto label_1b46e8;
    }
    ctx->pc = 0x1B46E0u;
    {
        const bool branch_taken_0x1b46e0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1B46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46E0u;
        // 0x1b46e4: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46e0) {
            ctx->pc = 0x1B470Cu;
            goto label_1b470c;
        }
    }
    ctx->pc = 0x1B46E8u;
label_1b46e8:
    // 0x1b46e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b46ec:
    // 0x1b46ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b46f0:
    // 0x1b46f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b46f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b46f4:
    // 0x1b46f4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1b46f8:
    // 0x1b46f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b46f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b46fc:
    // 0x1b46fc: 0x0  nop
    ctx->pc = 0x1b46fcu;
    // NOP
label_1b4700:
    // 0x1b4700: 0x0  nop
    ctx->pc = 0x1b4700u;
    // NOP
label_1b4704:
    // 0x1b4704: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
label_1b4708:
    if (ctx->pc == 0x1B4708u) {
        ctx->pc = 0x1B4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4704u;
        // 0x1b4708: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B470Cu;
        goto label_1b470c;
    }
    ctx->pc = 0x1B4704u;
    {
        const bool branch_taken_0x1b4704 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4704u;
        // 0x1b4708: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4704) {
            ctx->pc = 0x1B46F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b46f0;
        }
    }
    ctx->pc = 0x1B470Cu;
label_1b470c:
    // 0x1b470c: 0x12c00063  beqz        $s6, . + 4 + (0x63 << 2)
label_1b4710:
    if (ctx->pc == 0x1B4710u) {
        ctx->pc = 0x1B4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B470Cu;
        // 0x1b4710: 0xe7c20000  swc1        $f2, 0x0($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4714u;
        goto label_1b4714;
    }
    ctx->pc = 0x1B470Cu;
    {
        const bool branch_taken_0x1b470c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B470Cu;
        // 0x1b4710: 0xe7c20000  swc1        $f2, 0x0($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b470c) {
            ctx->pc = 0x1B489Cu;
            goto label_1b489c;
        }
    }
    ctx->pc = 0x1B4714u;
label_1b4714:
    // 0x1b4714: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1b4714u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_1b4718:
    // 0x1b4718: 0x10000060  b           . + 4 + (0x60 << 2)
label_1b471c:
    if (ctx->pc == 0x1B471Cu) {
        ctx->pc = 0x1B471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4718u;
        // 0x1b471c: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4720u;
        goto label_1b4720;
    }
    ctx->pc = 0x1B4718u;
    {
        const bool branch_taken_0x1b4718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4718u;
        // 0x1b471c: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4718) {
            ctx->pc = 0x1B489Cu;
            goto label_1b489c;
        }
    }
    ctx->pc = 0x1B4720u;
label_1b4720:
    // 0x1b4720: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b4720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4724:
    // 0x1b4724: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
label_1b4728:
    if (ctx->pc == 0x1B4728u) {
        ctx->pc = 0x1B4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4724u;
        // 0x1b4728: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B472Cu;
        goto label_1b472c;
    }
    ctx->pc = 0x1B4724u;
    {
        const bool branch_taken_0x1b4724 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1B4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4724u;
        // 0x1b4728: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4724) {
            ctx->pc = 0x1B4754u;
            goto label_1b4754;
        }
    }
    ctx->pc = 0x1B472Cu;
label_1b472c:
    // 0x1b472c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b472cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b4730:
    // 0x1b4730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b4734:
    // 0x1b4734: 0x0  nop
    ctx->pc = 0x1b4734u;
    // NOP
label_1b4738:
    // 0x1b4738: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b473c:
    // 0x1b473c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1b473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1b4740:
    // 0x1b4740: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b4744:
    // 0x1b4744: 0x0  nop
    ctx->pc = 0x1b4744u;
    // NOP
label_1b4748:
    // 0x1b4748: 0x0  nop
    ctx->pc = 0x1b4748u;
    // NOP
label_1b474c:
    // 0x1b474c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
label_1b4750:
    if (ctx->pc == 0x1B4750u) {
        ctx->pc = 0x1B4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B474Cu;
        // 0x1b4750: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4754u;
        goto label_1b4754;
    }
    ctx->pc = 0x1B474Cu;
    {
        const bool branch_taken_0x1b474c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B474Cu;
        // 0x1b4750: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b474c) {
            ctx->pc = 0x1B4738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4738;
        }
    }
    ctx->pc = 0x1B4754u;
label_1b4754:
    // 0x1b4754: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_1b4758:
    if (ctx->pc == 0x1B4758u) {
        ctx->pc = 0x1B4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4754u;
        // 0x1b4758: 0xe7c20000  swc1        $f2, 0x0($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B475Cu;
        goto label_1b475c;
    }
    ctx->pc = 0x1B4754u;
    {
        const bool branch_taken_0x1b4754 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4754u;
        // 0x1b4758: 0xe7c20000  swc1        $f2, 0x0($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4754) {
            ctx->pc = 0x1B4764u;
            goto label_1b4764;
        }
    }
    ctx->pc = 0x1B475Cu;
label_1b475c:
    // 0x1b475c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1b475cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_1b4760:
    // 0x1b4760: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1b4760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_1b4764:
    // 0x1b4764: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1b4764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4768:
    // 0x1b4768: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
label_1b476c:
    if (ctx->pc == 0x1B476Cu) {
        ctx->pc = 0x1B476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4768u;
        // 0x1b476c: 0x46020081  sub.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4770u;
        goto label_1b4770;
    }
    ctx->pc = 0x1B4768u;
    {
        const bool branch_taken_0x1b4768 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1B476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4768u;
        // 0x1b476c: 0x46020081  sub.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4768) {
            ctx->pc = 0x1B4794u;
            goto label_1b4794;
        }
    }
    ctx->pc = 0x1B4770u;
label_1b4770:
    // 0x1b4770: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b4770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4774:
    // 0x1b4774: 0x27a200a4  addiu       $v0, $sp, 0xA4
    ctx->pc = 0x1b4774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_1b4778:
    // 0x1b4778: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b4778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b477c:
    // 0x1b477c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1b477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1b4780:
    // 0x1b4780: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b4784:
    // 0x1b4784: 0x0  nop
    ctx->pc = 0x1b4784u;
    // NOP
label_1b4788:
    // 0x1b4788: 0x0  nop
    ctx->pc = 0x1b4788u;
    // NOP
label_1b478c:
    // 0x1b478c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_1b4790:
    if (ctx->pc == 0x1B4790u) {
        ctx->pc = 0x1B4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B478Cu;
        // 0x1b4790: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4794u;
        goto label_1b4794;
    }
    ctx->pc = 0x1B478Cu;
    {
        const bool branch_taken_0x1b478c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B478Cu;
        // 0x1b4790: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b478c) {
            ctx->pc = 0x1B4778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4778;
        }
    }
    ctx->pc = 0x1B4794u;
label_1b4794:
    // 0x1b4794: 0x12c00041  beqz        $s6, . + 4 + (0x41 << 2)
label_1b4798:
    if (ctx->pc == 0x1B4798u) {
        ctx->pc = 0x1B4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4794u;
        // 0x1b4798: 0xe7c20004  swc1        $f2, 0x4($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B479Cu;
        goto label_1b479c;
    }
    ctx->pc = 0x1B4794u;
    {
        const bool branch_taken_0x1b4794 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4794u;
        // 0x1b4798: 0xe7c20004  swc1        $f2, 0x4($fp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4794) {
            ctx->pc = 0x1B489Cu;
            goto label_1b489c;
        }
    }
    ctx->pc = 0x1B479Cu;
label_1b479c:
    // 0x1b479c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1b479cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_1b47a0:
    // 0x1b47a0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1b47a4:
    if (ctx->pc == 0x1B47A4u) {
        ctx->pc = 0x1B47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47A0u;
        // 0x1b47a4: 0xe7c00004  swc1        $f0, 0x4($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B47A8u;
        goto label_1b47a8;
    }
    ctx->pc = 0x1B47A0u;
    {
        const bool branch_taken_0x1b47a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B47A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47A0u;
        // 0x1b47a4: 0xe7c00004  swc1        $f0, 0x4($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47a0) {
            ctx->pc = 0x1B489Cu;
            goto label_1b489c;
        }
    }
    ctx->pc = 0x1B47A8u;
label_1b47a8:
    // 0x1b47a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b47a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b47ac:
    // 0x1b47ac: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
label_1b47b0:
    if (ctx->pc == 0x1B47B0u) {
        ctx->pc = 0x1B47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47ACu;
        // 0x1b47b0: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B47B4u;
        goto label_1b47b4;
    }
    ctx->pc = 0x1B47ACu;
    {
        const bool branch_taken_0x1b47ac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1B47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47ACu;
        // 0x1b47b0: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47ac) {
            ctx->pc = 0x1B47F0u;
            goto label_1b47f0;
        }
    }
    ctx->pc = 0x1B47B4u;
label_1b47b4:
    // 0x1b47b4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b47b8:
    // 0x1b47b8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b47b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1b47bc:
    // 0x1b47bc: 0x2463009c  addiu       $v1, $v1, 0x9C
    ctx->pc = 0x1b47bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
label_1b47c0:
    // 0x1b47c0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1b47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b47c4:
    // 0x1b47c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b47c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b47c8:
    // 0x1b47c8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1b47c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b47cc:
    // 0x1b47cc: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1b47ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b47d0:
    // 0x1b47d0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b47d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1b47d4:
    // 0x1b47d4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1b47d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b47d8:
    // 0x1b47d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b47d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b47dc:
    // 0x1b47dc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1b47dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1b47e0:
    // 0x1b47e0: 0x1cc0fff7  bgtz        $a2, . + 4 + (-0x9 << 2)
label_1b47e4:
    if (ctx->pc == 0x1B47E4u) {
        ctx->pc = 0x1B47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47E0u;
        // 0x1b47e4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B47E8u;
        goto label_1b47e8;
    }
    ctx->pc = 0x1B47E0u;
    {
        const bool branch_taken_0x1b47e0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1B47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47E0u;
        // 0x1b47e4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47e0) {
            ctx->pc = 0x1B47C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b47c0;
        }
    }
    ctx->pc = 0x1B47E8u;
label_1b47e8:
    // 0x1b47e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b47e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b47ec:
    // 0x1b47ec: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1b47ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b47f0:
    // 0x1b47f0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1b47f4:
    if (ctx->pc == 0x1B47F4u) {
        ctx->pc = 0x1B47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47F0u;
        // 0x1b47f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B47F8u;
        goto label_1b47f8;
    }
    ctx->pc = 0x1B47F0u;
    {
        const bool branch_taken_0x1b47f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b47f0) {
            ctx->pc = 0x1B47F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B47F0u;
            // 0x1b47f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4838u;
            goto label_1b4838;
        }
    }
    ctx->pc = 0x1B47F8u;
label_1b47f8:
    // 0x1b47f8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b47f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b47fc:
    // 0x1b47fc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1b47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1b4800:
    // 0x1b4800: 0x2463009c  addiu       $v1, $v1, 0x9C
    ctx->pc = 0x1b4800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
label_1b4804:
    // 0x1b4804: 0x0  nop
    ctx->pc = 0x1b4804u;
    // NOP
label_1b4808:
    // 0x1b4808: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b4808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b480c:
    // 0x1b480c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b480cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b4810:
    // 0x1b4810: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1b4810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4814:
    // 0x1b4814: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1b4814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b4818:
    // 0x1b4818: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1b4818u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b481c:
    // 0x1b481c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b481cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b4820:
    // 0x1b4820: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1b4820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b4824:
    // 0x1b4824: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4824u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b4828:
    // 0x1b4828: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1b4828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1b482c:
    // 0x1b482c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_1b4830:
    if (ctx->pc == 0x1B4830u) {
        ctx->pc = 0x1B4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B482Cu;
        // 0x1b4830: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4834u;
        goto label_1b4834;
    }
    ctx->pc = 0x1B482Cu;
    {
        const bool branch_taken_0x1b482c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B482Cu;
        // 0x1b4830: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b482c) {
            ctx->pc = 0x1B4808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4808;
        }
    }
    ctx->pc = 0x1B4834u;
label_1b4834:
    // 0x1b4834: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b4834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b4838:
    // 0x1b4838: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b4838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b483c:
    // 0x1b483c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1b483cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b4840:
    // 0x1b4840: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1b4844:
    if (ctx->pc == 0x1B4844u) {
        ctx->pc = 0x1B4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4840u;
        // 0x1b4844: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4848u;
        goto label_1b4848;
    }
    ctx->pc = 0x1B4840u;
    {
        const bool branch_taken_0x1b4840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4840u;
        // 0x1b4844: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4840) {
            ctx->pc = 0x1B486Cu;
            goto label_1b486c;
        }
    }
    ctx->pc = 0x1B4848u;
label_1b4848:
    // 0x1b4848: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1b4848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b484c:
    // 0x1b484c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b484cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b4850:
    // 0x1b4850: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1b4850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4854:
    // 0x1b4854: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1b4854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1b4858:
    // 0x1b4858: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b485c:
    // 0x1b485c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1b485cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b4860:
    // 0x1b4860: 0x0  nop
    ctx->pc = 0x1b4860u;
    // NOP
label_1b4864:
    // 0x1b4864: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_1b4868:
    if (ctx->pc == 0x1B4868u) {
        ctx->pc = 0x1B4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4864u;
        // 0x1b4868: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B486Cu;
        goto label_1b486c;
    }
    ctx->pc = 0x1B4864u;
    {
        const bool branch_taken_0x1b4864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4864u;
        // 0x1b4868: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4864) {
            ctx->pc = 0x1B4850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4850;
        }
    }
    ctx->pc = 0x1B486Cu;
label_1b486c:
    // 0x1b486c: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_1b4870:
    if (ctx->pc == 0x1B4870u) {
        ctx->pc = 0x1B4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B486Cu;
        // 0x1b4870: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4874u;
        goto label_1b4874;
    }
    ctx->pc = 0x1B486Cu;
    {
        const bool branch_taken_0x1b486c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B486Cu;
        // 0x1b4870: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b486c) {
            ctx->pc = 0x1B4880u;
            goto label_1b4880;
        }
    }
    ctx->pc = 0x1B4874u;
label_1b4874:
    // 0x1b4874: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b4878:
    if (ctx->pc == 0x1B4878u) {
        ctx->pc = 0x1B4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4874u;
        // 0x1b4878: 0xc7a100a4  lwc1        $f1, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B487Cu;
        goto label_1b487c;
    }
    ctx->pc = 0x1B4874u;
    {
        const bool branch_taken_0x1b4874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4874u;
        // 0x1b4878: 0xc7a100a4  lwc1        $f1, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4874) {
            ctx->pc = 0x1B4890u;
            goto label_1b4890;
        }
    }
    ctx->pc = 0x1B487Cu;
label_1b487c:
    // 0x1b487c: 0x0  nop
    ctx->pc = 0x1b487cu;
    // NOP
label_1b4880:
    // 0x1b4880: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1b4880u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1b4884:
    // 0x1b4884: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1b4884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4888:
    // 0x1b4888: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4888u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b488c:
    // 0x1b488c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b488cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b4890:
    // 0x1b4890: 0xe7c20008  swc1        $f2, 0x8($fp)
    ctx->pc = 0x1b4890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
label_1b4894:
    // 0x1b4894: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1b4894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_1b4898:
    // 0x1b4898: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x1b4898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_1b489c:
    // 0x1b489c: 0x32a20007  andi        $v0, $s5, 0x7
    ctx->pc = 0x1b489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
label_1b48a0:
    // 0x1b48a0: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x1b48a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_1b48a4:
    // 0x1b48a4: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x1b48a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_1b48a8:
    // 0x1b48a8: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x1b48a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_1b48ac:
    // 0x1b48ac: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x1b48acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_1b48b0:
    // 0x1b48b0: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x1b48b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_1b48b4:
    // 0x1b48b4: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x1b48b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
label_1b48b8:
    // 0x1b48b8: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x1b48b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_1b48bc:
    // 0x1b48bc: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x1b48bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
label_1b48c0:
    // 0x1b48c0: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x1b48c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_1b48c4:
    // 0x1b48c4: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x1b48c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_1b48c8:
    // 0x1b48c8: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x1b48c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b48cc:
    // 0x1b48cc: 0x3e00008  jr          $ra
label_1b48d0:
    if (ctx->pc == 0x1B48D0u) {
        ctx->pc = 0x1B48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48CCu;
        // 0x1b48d0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B48D4u;
        goto label_1b48d4;
    }
    ctx->pc = 0x1B48CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48CCu;
        // 0x1b48d0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B48CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B48D4u;
label_1b48d4:
    // 0x1b48d4: 0x0  nop
    ctx->pc = 0x1b48d4u;
    // NOP
label_1b48d8:
    // 0x1b48d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b48d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b48dc:
    // 0x1b48dc: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b48dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_1b48e0:
    // 0x1b48e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b48e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b48e4:
    // 0x1b48e4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b48e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b48e8:
    // 0x1b48e8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b48e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b48ec:
    // 0x1b48ec: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b48ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b48f0:
    // 0x1b48f0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1b48f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1b48f4:
    // 0x1b48f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b48f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b48f8:
    // 0x1b48f8: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x1b48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
label_1b48fc:
    // 0x1b48fc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1b48fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1b4900:
    // 0x1b4900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4904:
    // 0x1b4904: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b4904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b4908:
    // 0x1b4908: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1b490c:
    if (ctx->pc == 0x1B490Cu) {
        ctx->pc = 0x1B490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4908u;
        // 0x1b490c: 0x460c60c2  mul.s       $f3, $f12, $f12 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4910u;
        goto label_1b4910;
    }
    ctx->pc = 0x1B4908u;
    {
        const bool branch_taken_0x1b4908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4908) {
            ctx->pc = 0x1B490Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4908u;
            // 0x1b490c: 0x460c60c2  mul.s       $f3, $f12, $f12 (Delay Slot)
            ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B491Cu;
            goto label_1b491c;
        }
    }
    ctx->pc = 0x1B4910u;
label_1b4910:
    // 0x1b4910: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_1b4914:
    if (ctx->pc == 0x1B4914u) {
        ctx->pc = 0x1B4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4910u;
        // 0x1b4914: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4918u;
        goto label_1b4918;
    }
    ctx->pc = 0x1B4910u;
    {
        const bool branch_taken_0x1b4910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4910u;
        // 0x1b4914: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4910) {
            ctx->pc = 0x1B49F4u;
            goto label_1b49f4;
        }
    }
    ctx->pc = 0x1B4918u;
label_1b4918:
    // 0x1b4918: 0x460c60c2  mul.s       $f3, $f12, $f12
    ctx->pc = 0x1b4918u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1b491c:
    // 0x1b491c: 0x3c012f2e  lui         $at, 0x2F2E
    ctx->pc = 0x1b491cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12078 << 16));
label_1b4920:
    // 0x1b4920: 0x3421c9d3  ori         $at, $at, 0xC9D3
    ctx->pc = 0x1b4920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51667);
label_1b4924:
    // 0x1b4924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4928:
    // 0x1b4928: 0x3c01b2d7  lui         $at, 0xB2D7
    ctx->pc = 0x1b4928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45783 << 16));
label_1b492c:
    // 0x1b492c: 0x34212f34  ori         $at, $at, 0x2F34
    ctx->pc = 0x1b492cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12084);
label_1b4930:
    // 0x1b4930: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4934:
    // 0x1b4934: 0x0  nop
    ctx->pc = 0x1b4934u;
    // NOP
label_1b4938:
    // 0x1b4938: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1b4938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1b493c:
    // 0x1b493c: 0x460c1902  mul.s       $f4, $f3, $f12
    ctx->pc = 0x1b493cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_1b4940:
    // 0x1b4940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b4944:
    // 0x1b4944: 0x3c013638  lui         $at, 0x3638
    ctx->pc = 0x1b4944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13880 << 16));
label_1b4948:
    // 0x1b4948: 0x3421ef1b  ori         $at, $at, 0xEF1B
    ctx->pc = 0x1b4948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61211);
label_1b494c:
    // 0x1b494c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b494cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4950:
    // 0x1b4950: 0x0  nop
    ctx->pc = 0x1b4950u;
    // NOP
label_1b4954:
    // 0x1b4954: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1b4954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1b4958:
    // 0x1b4958: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b495c:
    // 0x1b495c: 0x3c01b950  lui         $at, 0xB950
    ctx->pc = 0x1b495cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47440 << 16));
label_1b4960:
    // 0x1b4960: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1b4960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
label_1b4964:
    // 0x1b4964: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4968:
    // 0x1b4968: 0x0  nop
    ctx->pc = 0x1b4968u;
    // NOP
label_1b496c:
    // 0x1b496c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1b496cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1b4970:
    // 0x1b4970: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b4974:
    // 0x1b4974: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x1b4974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
label_1b4978:
    // 0x1b4978: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1b4978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_1b497c:
    // 0x1b497c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b497cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4980:
    // 0x1b4980: 0x0  nop
    ctx->pc = 0x1b4980u;
    // NOP
label_1b4984:
    // 0x1b4984: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1b4984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1b4988:
    // 0x1b4988: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_1b498c:
    if (ctx->pc == 0x1B498Cu) {
        ctx->pc = 0x1B498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4988u;
        // 0x1b498c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4990u;
        goto label_1b4990;
    }
    ctx->pc = 0x1B4988u;
    {
        const bool branch_taken_0x1b4988 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4988u;
        // 0x1b498c: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4988) {
            ctx->pc = 0x1B49B8u;
            goto label_1b49b8;
        }
    }
    ctx->pc = 0x1B4990u;
label_1b4990:
    // 0x1b4990: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x1b4990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1b4994:
    // 0x1b4994: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x1b4994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
label_1b4998:
    // 0x1b4998: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b4998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1b499c:
    // 0x1b499c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b499cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b49a0:
    // 0x1b49a0: 0x0  nop
    ctx->pc = 0x1b49a0u;
    // NOP
label_1b49a4:
    // 0x1b49a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b49a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b49a8:
    // 0x1b49a8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b49a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1b49ac:
    // 0x1b49ac: 0x10000011  b           . + 4 + (0x11 << 2)
label_1b49b0:
    if (ctx->pc == 0x1B49B0u) {
        ctx->pc = 0x1B49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49ACu;
        // 0x1b49b0: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B49B4u;
        goto label_1b49b4;
    }
    ctx->pc = 0x1B49ACu;
    {
        const bool branch_taken_0x1b49ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49ACu;
        // 0x1b49b0: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b49ac) {
            ctx->pc = 0x1B49F4u;
            goto label_1b49f4;
        }
    }
    ctx->pc = 0x1B49B4u;
label_1b49b4:
    // 0x1b49b4: 0x0  nop
    ctx->pc = 0x1b49b4u;
    // NOP
label_1b49b8:
    // 0x1b49b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b49b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b49bc:
    // 0x1b49bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b49bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b49c0:
    // 0x1b49c0: 0x0  nop
    ctx->pc = 0x1b49c0u;
    // NOP
label_1b49c4:
    // 0x1b49c4: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x1b49c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1b49c8:
    // 0x1b49c8: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x1b49c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
label_1b49cc:
    // 0x1b49cc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b49ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1b49d0:
    // 0x1b49d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b49d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b49d4:
    // 0x1b49d4: 0x0  nop
    ctx->pc = 0x1b49d4u;
    // NOP
label_1b49d8:
    // 0x1b49d8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1b49d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_1b49dc:
    // 0x1b49dc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1b49dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1b49e0:
    // 0x1b49e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b49e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b49e4:
    // 0x1b49e4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1b49e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1b49e8:
    // 0x1b49e8: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x1b49e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
label_1b49ec:
    // 0x1b49ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b49ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b49f0:
    // 0x1b49f0: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1b49f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1b49f4:
    // 0x1b49f4: 0x3e00008  jr          $ra
label_1b49f8:
    if (ctx->pc == 0x1B49F8u) {
        ctx->pc = 0x1B49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49F4u;
        // 0x1b49f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B49FCu;
        goto label_1b49fc;
    }
    ctx->pc = 0x1B49F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B49F4u;
        // 0x1b49f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B49F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B49FCu;
label_1b49fc:
    // 0x1b49fc: 0x0  nop
    ctx->pc = 0x1b49fcu;
    // NOP
label_1b4a00:
    // 0x1b4a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b4a04:
    // 0x1b4a04: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x1b4a04u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
label_1b4a08:
    // 0x1b4a08: 0x44068000  mfc1        $a2, $f16
    ctx->pc = 0x1b4a08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[16], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1b4a0c:
    // 0x1b4a0c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b4a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b4a10:
    // 0x1b4a10: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x1b4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
label_1b4a14:
    // 0x1b4a14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b4a18:
    // 0x1b4a18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4a1c:
    // 0x1b4a1c: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x1b4a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1b4a20:
    // 0x1b4a20: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1b4a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b4a24:
    // 0x1b4a24: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1b4a28:
    if (ctx->pc == 0x1B4A28u) {
        ctx->pc = 0x1B4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A24u;
        // 0x1b4a28: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A2Cu;
        goto label_1b4a2c;
    }
    ctx->pc = 0x1B4A24u;
    {
        const bool branch_taken_0x1b4a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A24u;
        // 0x1b4a28: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a24) {
            ctx->pc = 0x1B4AA8u;
            goto label_1b4aa8;
        }
    }
    ctx->pc = 0x1B4A2Cu;
label_1b4a2c:
    // 0x1b4a2c: 0x46008024  .word       0x46008024                   # cvt.w.s     $f0, $f16 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b4a2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[16]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b4a30:
    // 0x1b4a30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b4a30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1b4a34:
    // 0x1b4a34: 0x0  nop
    ctx->pc = 0x1b4a34u;
    // NOP
label_1b4a38:
    // 0x1b4a38: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1b4a3c:
    if (ctx->pc == 0x1B4A3Cu) {
        ctx->pc = 0x1B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A38u;
        // 0x1b4a3c: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A40u;
        goto label_1b4a40;
    }
    ctx->pc = 0x1B4A38u;
    {
        const bool branch_taken_0x1b4a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A38u;
        // 0x1b4a3c: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a38) {
            ctx->pc = 0x1B4AACu;
            goto label_1b4aac;
        }
    }
    ctx->pc = 0x1B4A40u;
label_1b4a40:
    // 0x1b4a40: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1b4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1b4a44:
    // 0x1b4a44: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1b4a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1b4a48:
    // 0x1b4a48: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_1b4a4c:
    if (ctx->pc == 0x1B4A4Cu) {
        ctx->pc = 0x1B4A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A48u;
        // 0x1b4a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A50u;
        goto label_1b4a50;
    }
    ctx->pc = 0x1B4A48u;
    {
        const bool branch_taken_0x1b4a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a48) {
            ctx->pc = 0x1B4A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4A48u;
            // 0x1b4a4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4A78u;
            goto label_1b4a78;
        }
    }
    ctx->pc = 0x1B4A50u;
label_1b4a50:
    // 0x1b4a50: 0xc06d448  jal         func_1B5120
label_1b4a54:
    if (ctx->pc == 0x1B4A54u) {
        ctx->pc = 0x1B4A58u;
        goto label_1b4a58;
    }
    ctx->pc = 0x1B4A50u;
    SET_GPR_U32(ctx, 31, 0x1B4A58u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1B4A58u;
label_1b4a58:
    // 0x1b4a58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4a5c:
    // 0x1b4a5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4a60:
    // 0x1b4a60: 0x0  nop
    ctx->pc = 0x1b4a60u;
    // NOP
label_1b4a64:
    // 0x1b4a64: 0x0  nop
    ctx->pc = 0x1b4a64u;
    // NOP
label_1b4a68:
    // 0x1b4a68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1b4a68u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1b4a6c:
    // 0x1b4a6c: 0x1000008b  b           . + 4 + (0x8B << 2)
label_1b4a70:
    if (ctx->pc == 0x1B4A70u) {
        ctx->pc = 0x1B4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A6Cu;
        // 0x1b4a70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A74u;
        goto label_1b4a74;
    }
    ctx->pc = 0x1B4A6Cu;
    {
        const bool branch_taken_0x1b4a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A6Cu;
        // 0x1b4a70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a6c) {
            ctx->pc = 0x1B4C9Cu;
            { ctx->pc = 0x1b4c9c; return; }
        }
    }
    ctx->pc = 0x1B4A74u;
label_1b4a74:
    // 0x1b4a74: 0x0  nop
    ctx->pc = 0x1b4a74u;
    // NOP
label_1b4a78:
    // 0x1b4a78: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_1b4a7c:
    if (ctx->pc == 0x1B4A7Cu) {
        ctx->pc = 0x1B4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A78u;
        // 0x1b4a7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4A80u;
        goto label_1b4a80;
    }
    ctx->pc = 0x1B4A78u;
    {
        const bool branch_taken_0x1b4a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4A78u;
        // 0x1b4a7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4a78) {
            ctx->pc = 0x1B4AA0u;
            goto label_1b4aa0;
        }
    }
    ctx->pc = 0x1B4A80u;
label_1b4a80:
    // 0x1b4a80: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b4a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1b4a84:
    // 0x1b4a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4a88:
    // 0x1b4a88: 0x0  nop
    ctx->pc = 0x1b4a88u;
    // NOP
label_1b4a8c:
    // 0x1b4a8c: 0x0  nop
    ctx->pc = 0x1b4a8cu;
    // NOP
label_1b4a90:
    // 0x1b4a90: 0x46100003  div.s       $f0, $f0, $f16
    ctx->pc = 0x1b4a90u;
    if (ctx->f[16] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[16];
label_1b4a94:
    // 0x1b4a94: 0x10000081  b           . + 4 + (0x81 << 2)
label_1b4a98:
    if (ctx->pc == 0x1B4A98u) {
        ctx->pc = 0x1B4A9Cu;
        goto label_1b4a9c;
    }
    ctx->pc = 0x1B4A94u;
    {
        const bool branch_taken_0x1b4a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a94) {
            ctx->pc = 0x1B4C9Cu;
            { ctx->pc = 0x1b4c9c; return; }
        }
    }
    ctx->pc = 0x1B4A9Cu;
label_1b4a9c:
    // 0x1b4a9c: 0x0  nop
    ctx->pc = 0x1b4a9cu;
    // NOP
label_1b4aa0:
    // 0x1b4aa0: 0x1000007d  b           . + 4 + (0x7D << 2)
label_1b4aa4:
    if (ctx->pc == 0x1B4AA4u) {
        ctx->pc = 0x1B4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AA0u;
        // 0x1b4aa4: 0x46008006  mov.s       $f0, $f16 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4AA8u;
        goto label_1b4aa8;
    }
    ctx->pc = 0x1B4AA0u;
    {
        const bool branch_taken_0x1b4aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AA0u;
        // 0x1b4aa4: 0x46008006  mov.s       $f0, $f16 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4aa0) {
            ctx->pc = 0x1B4C98u;
            { ctx->pc = 0x1b4c98; return; }
        }
    }
    ctx->pc = 0x1B4AA8u;
label_1b4aa8:
    // 0x1b4aa8: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x1b4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_1b4aac:
    // 0x1b4aac: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x1b4aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
label_1b4ab0:
    // 0x1b4ab0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1b4ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b4ab4:
    // 0x1b4ab4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1b4ab8:
    if (ctx->pc == 0x1B4AB8u) {
        ctx->pc = 0x1B4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4AB4u;
        // 0x1b4ab8: 0x461083c2  mul.s       $f15, $f16, $f16 (Delay Slot)
        ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4ABCu;
        goto label_1b4abc;
    }
    ctx->pc = 0x1B4AB4u;
    {
        const bool branch_taken_0x1b4ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ab4) {
            ctx->pc = 0x1B4AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4AB4u;
            // 0x1b4ab8: 0x461083c2  mul.s       $f15, $f16, $f16 (Delay Slot)
            ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4AFCu;
            goto label_1b4afc;
        }
    }
    ctx->pc = 0x1B4ABCu;
label_1b4abc:
    // 0x1b4abc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1b4ac0:
    if (ctx->pc == 0x1B4AC0u) {
        ctx->pc = 0x1B4AC4u;
        goto label_1b4ac4;
    }
    ctx->pc = 0x1B4ABCu;
    {
        const bool branch_taken_0x1b4abc = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1b4abc) {
            ctx->pc = 0x1B4ACCu;
            goto label_1b4acc;
        }
    }
    ctx->pc = 0x1B4AC4u;
label_1b4ac4:
    // 0x1b4ac4: 0x46008407  neg.s       $f16, $f16
    ctx->pc = 0x1b4ac4u;
    ctx->f[16] = FPU_NEG_S(ctx->f[16]);
label_1b4ac8:
    // 0x1b4ac8: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x1b4ac8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_1b4acc:
    // 0x1b4acc: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1b4accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_1b4ad0:
    // 0x1b4ad0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b4ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_1b4ad4:
    // 0x1b4ad4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4ad8:
    // 0x1b4ad8: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x1b4ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
label_1b4adc:
    // 0x1b4adc: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1b4adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_1b4ae0:
    // 0x1b4ae0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4ae4:
    // 0x1b4ae4: 0x0  nop
    ctx->pc = 0x1b4ae4u;
    // NOP
label_1b4ae8:
    // 0x1b4ae8: 0x461003c1  sub.s       $f15, $f0, $f16
    ctx->pc = 0x1b4ae8u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[16]);
label_1b4aec:
    // 0x1b4aec: 0x460d0b81  sub.s       $f14, $f1, $f13
    ctx->pc = 0x1b4aecu;
    ctx->f[14] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
label_1b4af0:
    // 0x1b4af0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b4af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b4af4:
    // 0x1b4af4: 0x460e7c00  add.s       $f16, $f15, $f14
    ctx->pc = 0x1b4af4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[15], ctx->f[14]);
label_1b4af8:
    // 0x1b4af8: 0x461083c2  mul.s       $f15, $f16, $f16
    ctx->pc = 0x1b4af8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[16]);
label_1b4afc:
    // 0x1b4afc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1b4b00:
    // 0x1b4b00: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    ctx->pc = 0x1b4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
label_1b4b04:
    // 0x1b4b04: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x1b4b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
label_1b4b08:
    // 0x1b4b08: 0xc4480030  lwc1        $f8, 0x30($v0)
    ctx->pc = 0x1b4b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1b4b0c:
    // 0x1b4b0c: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x1b4b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
label_1b4b10:
    // 0x1b4b10: 0xc449002c  lwc1        $f9, 0x2C($v0)
    ctx->pc = 0x1b4b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1b4b14:
    // 0x1b4b14: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1b4b14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b4b18:
    // 0x1b4b18: 0x460f7b82  mul.s       $f14, $f15, $f15
    ctx->pc = 0x1b4b18u;
    ctx->f[14] = FPU_MUL_S(ctx->f[15], ctx->f[15]);
label_1b4b1c:
    // 0x1b4b1c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1b4b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4b20:
    // 0x1b4b20: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1b4b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4b24:
    // 0x1b4b24: 0x46107b02  mul.s       $f12, $f15, $f16
    ctx->pc = 0x1b4b24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[15], ctx->f[16]);
label_1b4b28:
    // 0x1b4b28: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x1b4b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b4b2c:
    // 0x1b4b2c: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x1b4b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b4b30:
    // 0x1b4b30: 0x46087202  mul.s       $f8, $f14, $f8
    ctx->pc = 0x1b4b30u;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
label_1b4b34:
    // 0x1b4b34: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x1b4b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1b4b38:
    // 0x1b4b38: 0x46097242  mul.s       $f9, $f14, $f9
    ctx->pc = 0x1b4b38u;
    ctx->f[9] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
label_1b4b3c:
    // 0x1b4b3c: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x1b4b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1b4b40:
    // 0x1b4b40: 0xc4460010  lwc1        $f6, 0x10($v0)
    ctx->pc = 0x1b4b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1b4b44:
    // 0x1b4b44: 0xc447000c  lwc1        $f7, 0xC($v0)
    ctx->pc = 0x1b4b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1b4b48:
    // 0x1b4b48: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1b4b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_1b4b4c:
    // 0x1b4b4c: 0xc4480000  lwc1        $f8, 0x0($v0)
    ctx->pc = 0x1b4b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1b4b50:
    // 0x1b4b50: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1b4b50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_1b4b54:
    // 0x1b4b54: 0xc44a0008  lwc1        $f10, 0x8($v0)
    ctx->pc = 0x1b4b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1b4b58:
    // 0x1b4b58: 0xc44b0004  lwc1        $f11, 0x4($v0)
    ctx->pc = 0x1b4b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1b4b5c:
    // 0x1b4b5c: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x1b4b5cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
label_1b4b60:
    // 0x1b4b60: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1b4b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
label_1b4b64:
    // 0x1b4b64: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x1b4b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
label_1b4b68:
    // 0x1b4b68: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1b4b68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b4b6c:
    // 0x1b4b6c: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1b4b6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1b4b70:
    // 0x1b4b70: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x1b4b70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1b4b74:
    // 0x1b4b74: 0x460370c2  mul.s       $f3, $f14, $f3
    ctx->pc = 0x1b4b74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[14], ctx->f[3]);
label_1b4b78:
    // 0x1b4b78: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x1b4b78u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_1b4b7c:
    // 0x1b4b7c: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x1b4b7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_1b4b80:
    // 0x1b4b80: 0x46057142  mul.s       $f5, $f14, $f5
    ctx->pc = 0x1b4b80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
label_1b4b84:
    // 0x1b4b84: 0x46047102  mul.s       $f4, $f14, $f4
    ctx->pc = 0x1b4b84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
label_1b4b88:
    // 0x1b4b88: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x1b4b88u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_1b4b8c:
    // 0x1b4b8c: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x1b4b8cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
label_1b4b90:
    // 0x1b4b90: 0x46067182  mul.s       $f6, $f14, $f6
    ctx->pc = 0x1b4b90u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1b4b94:
    // 0x1b4b94: 0x460771c2  mul.s       $f7, $f14, $f7
    ctx->pc = 0x1b4b94u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
label_1b4b98:
    // 0x1b4b98: 0x46065280  add.s       $f10, $f10, $f6
    ctx->pc = 0x1b4b98u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
label_1b4b9c:
    // 0x1b4b9c: 0x460758c0  add.s       $f3, $f11, $f7
    ctx->pc = 0x1b4b9cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
label_1b4ba0:
    // 0x1b4ba0: 0x460a7942  mul.s       $f5, $f15, $f10
    ctx->pc = 0x1b4ba0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[15], ctx->f[10]);
label_1b4ba4:
    // 0x1b4ba4: 0x46051800  add.s       $f0, $f3, $f5
    ctx->pc = 0x1b4ba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_1b4ba8:
    // 0x1b4ba8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b4ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1b4bac:
    // 0x1b4bac: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x1b4bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_1b4bb0:
    // 0x1b4bb0: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x1b4bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
label_1b4bb4:
    // 0x1b4bb4: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x1b4bb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_1b4bb8:
    // 0x1b4bb8: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x1b4bb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
label_1b4bbc:
    // 0x1b4bbc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_1b4bc0:
    if (ctx->pc == 0x1B4BC0u) {
        ctx->pc = 0x1B4BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BBCu;
        // 0x1b4bc0: 0x46038380  add.s       $f14, $f16, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[16], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4BC4u;
        goto label_1b4bc4;
    }
    ctx->pc = 0x1B4BBCu;
    {
        const bool branch_taken_0x1b4bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4BBCu;
        // 0x1b4bc0: 0x46038380  add.s       $f14, $f16, $f3 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[16], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4bbc) {
            ctx->pc = 0x1B4C18u;
            goto label_1b4c18;
        }
    }
    ctx->pc = 0x1B4BC4u;
label_1b4bc4:
    // 0x1b4bc4: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x1b4bc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b4bc8:
    // 0x1b4bc8: 0x0  nop
    ctx->pc = 0x1b4bc8u;
    // NOP
label_1b4bcc:
    // 0x1b4bcc: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1b4bccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_1b4bd0:
    // 0x1b4bd0: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x1b4bd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
label_1b4bd4:
    // 0x1b4bd4: 0x460e7002  mul.s       $f0, $f14, $f14
    ctx->pc = 0x1b4bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
label_1b4bd8:
    // 0x1b4bd8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1b4bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1b4bdc:
    // 0x1b4bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4be0:
    // 0x1b4be0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b4be4:
    // 0x1b4be4: 0x46057040  add.s       $f1, $f14, $f5
    ctx->pc = 0x1b4be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[14], ctx->f[5]);
label_1b4be8:
    // 0x1b4be8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4bec:
    // 0x1b4bec: 0x0  nop
    ctx->pc = 0x1b4becu;
    // NOP
label_1b4bf0:
    // 0x1b4bf0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b4bf4:
    // 0x1b4bf4: 0x0  nop
    ctx->pc = 0x1b4bf4u;
    // NOP
label_1b4bf8:
    // 0x1b4bf8: 0x0  nop
    ctx->pc = 0x1b4bf8u;
    // NOP
label_1b4bfc:
    // 0x1b4bfc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b4bfcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1b4c00:
    // 0x1b4c00: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b4c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1b4c04:
    // 0x1b4c04: 0x46008001  sub.s       $f0, $f16, $f0
    ctx->pc = 0x1b4c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
label_1b4c08:
    // 0x1b4c08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b4c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b4c0c:
    // 0x1b4c0c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x1b4c0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_1b4c10:
    // 0x1b4c10: 0x10000021  b           . + 4 + (0x21 << 2)
label_1b4c14:
    if (ctx->pc == 0x1B4C14u) {
        ctx->pc = 0x1B4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C10u;
        // 0x1b4c14: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4C18u;
        goto label_1b4c18;
    }
    ctx->pc = 0x1B4C10u;
    {
        const bool branch_taken_0x1b4c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C10u;
        // 0x1b4c14: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c10) {
            ctx->pc = 0x1B4C98u;
            { ctx->pc = 0x1b4c98; return; }
        }
    }
    ctx->pc = 0x1B4C18u;
label_1b4c18:
    // 0x1b4c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4c1c:
    // 0x1b4c1c: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
label_1b4c20:
    if (ctx->pc == 0x1B4C20u) {
        ctx->pc = 0x1B4C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C1Cu;
        // 0x1b4c20: 0x46007006  mov.s       $f0, $f14 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4C24u;
        goto label_1b4c24;
    }
    ctx->pc = 0x1B4C1Cu;
    {
        const bool branch_taken_0x1b4c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C1Cu;
        // 0x1b4c20: 0x46007006  mov.s       $f0, $f14 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4c1c) {
            ctx->pc = 0x1B4C98u;
            { ctx->pc = 0x1b4c98; return; }
        }
    }
    ctx->pc = 0x1B4C24u;
label_1b4c24:
    // 0x1b4c24: 0x44037000  mfc1        $v1, $f14
    ctx->pc = 0x1b4c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1b4c28:
    // 0x1b4c28: 0x0  nop
    ctx->pc = 0x1b4c28u;
    // NOP
label_1b4c2c:
    // 0x1b4c2c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b4c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b4c30:
    // 0x1b4c30: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x1b4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_1b4c34:
    // 0x1b4c34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b4c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b4c38:
    // 0x1b4c38: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1b4c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1b4c3c:
    // 0x1b4c3c: 0x0  nop
    ctx->pc = 0x1b4c3cu;
    // NOP
label_1b4c40:
    // 0x1b4c40: 0x46107841  sub.s       $f1, $f15, $f16
    ctx->pc = 0x1b4c40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[16]);
label_1b4c44:
    // 0x1b4c44: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b4c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1b4c48:
    // 0x1b4c48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4c4c:
    // 0x1b4c4c: 0x0  nop
    ctx->pc = 0x1b4c4cu;
    // NOP
label_1b4c50:
    // 0x1b4c50: 0x0  nop
    ctx->pc = 0x1b4c50u;
    // NOP
label_1b4c54:
    // 0x1b4c54: 0x460e0003  div.s       $f0, $f0, $f14
    ctx->pc = 0x1b4c54u;
    if (ctx->f[14] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[14];
    ctx->pc = 0x1b4c58u;
    return;
}

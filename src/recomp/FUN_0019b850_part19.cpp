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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part19(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1a4aa0u: goto label_1a4aa0;
        case 0x1a4aa4u: goto label_1a4aa4;
        case 0x1a4aa8u: goto label_1a4aa8;
        case 0x1a4aacu: goto label_1a4aac;
        case 0x1a4ab0u: goto label_1a4ab0;
        case 0x1a4ab4u: goto label_1a4ab4;
        case 0x1a4ab8u: goto label_1a4ab8;
        case 0x1a4abcu: goto label_1a4abc;
        case 0x1a4ac0u: goto label_1a4ac0;
        case 0x1a4ac4u: goto label_1a4ac4;
        case 0x1a4ac8u: goto label_1a4ac8;
        case 0x1a4accu: goto label_1a4acc;
        case 0x1a4ad0u: goto label_1a4ad0;
        case 0x1a4ad4u: goto label_1a4ad4;
        case 0x1a4ad8u: goto label_1a4ad8;
        case 0x1a4adcu: goto label_1a4adc;
        case 0x1a4ae0u: goto label_1a4ae0;
        case 0x1a4ae4u: goto label_1a4ae4;
        case 0x1a4ae8u: goto label_1a4ae8;
        case 0x1a4aecu: goto label_1a4aec;
        case 0x1a4af0u: goto label_1a4af0;
        case 0x1a4af4u: goto label_1a4af4;
        case 0x1a4af8u: goto label_1a4af8;
        case 0x1a4afcu: goto label_1a4afc;
        case 0x1a4b00u: goto label_1a4b00;
        case 0x1a4b04u: goto label_1a4b04;
        case 0x1a4b08u: goto label_1a4b08;
        case 0x1a4b0cu: goto label_1a4b0c;
        case 0x1a4b10u: goto label_1a4b10;
        case 0x1a4b14u: goto label_1a4b14;
        case 0x1a4b18u: goto label_1a4b18;
        case 0x1a4b1cu: goto label_1a4b1c;
        case 0x1a4b20u: goto label_1a4b20;
        case 0x1a4b24u: goto label_1a4b24;
        case 0x1a4b28u: goto label_1a4b28;
        case 0x1a4b2cu: goto label_1a4b2c;
        case 0x1a4b30u: goto label_1a4b30;
        case 0x1a4b34u: goto label_1a4b34;
        case 0x1a4b38u: goto label_1a4b38;
        case 0x1a4b3cu: goto label_1a4b3c;
        case 0x1a4b40u: goto label_1a4b40;
        case 0x1a4b44u: goto label_1a4b44;
        case 0x1a4b48u: goto label_1a4b48;
        case 0x1a4b4cu: goto label_1a4b4c;
        case 0x1a4b50u: goto label_1a4b50;
        case 0x1a4b54u: goto label_1a4b54;
        case 0x1a4b58u: goto label_1a4b58;
        case 0x1a4b5cu: goto label_1a4b5c;
        case 0x1a4b60u: goto label_1a4b60;
        case 0x1a4b64u: goto label_1a4b64;
        case 0x1a4b68u: goto label_1a4b68;
        case 0x1a4b6cu: goto label_1a4b6c;
        case 0x1a4b70u: goto label_1a4b70;
        case 0x1a4b74u: goto label_1a4b74;
        case 0x1a4b78u: goto label_1a4b78;
        case 0x1a4b7cu: goto label_1a4b7c;
        case 0x1a4b80u: goto label_1a4b80;
        case 0x1a4b84u: goto label_1a4b84;
        case 0x1a4b88u: goto label_1a4b88;
        case 0x1a4b8cu: goto label_1a4b8c;
        case 0x1a4b90u: goto label_1a4b90;
        case 0x1a4b94u: goto label_1a4b94;
        case 0x1a4b98u: goto label_1a4b98;
        case 0x1a4b9cu: goto label_1a4b9c;
        case 0x1a4ba0u: goto label_1a4ba0;
        case 0x1a4ba4u: goto label_1a4ba4;
        case 0x1a4ba8u: goto label_1a4ba8;
        case 0x1a4bacu: goto label_1a4bac;
        case 0x1a4bb0u: goto label_1a4bb0;
        case 0x1a4bb4u: goto label_1a4bb4;
        case 0x1a4bb8u: goto label_1a4bb8;
        case 0x1a4bbcu: goto label_1a4bbc;
        case 0x1a4bc0u: goto label_1a4bc0;
        case 0x1a4bc4u: goto label_1a4bc4;
        case 0x1a4bc8u: goto label_1a4bc8;
        case 0x1a4bccu: goto label_1a4bcc;
        case 0x1a4bd0u: goto label_1a4bd0;
        case 0x1a4bd4u: goto label_1a4bd4;
        case 0x1a4bd8u: goto label_1a4bd8;
        case 0x1a4bdcu: goto label_1a4bdc;
        case 0x1a4be0u: goto label_1a4be0;
        case 0x1a4be4u: goto label_1a4be4;
        case 0x1a4be8u: goto label_1a4be8;
        case 0x1a4becu: goto label_1a4bec;
        case 0x1a4bf0u: goto label_1a4bf0;
        case 0x1a4bf4u: goto label_1a4bf4;
        case 0x1a4bf8u: goto label_1a4bf8;
        case 0x1a4bfcu: goto label_1a4bfc;
        case 0x1a4c00u: goto label_1a4c00;
        case 0x1a4c04u: goto label_1a4c04;
        case 0x1a4c08u: goto label_1a4c08;
        case 0x1a4c0cu: goto label_1a4c0c;
        case 0x1a4c10u: goto label_1a4c10;
        case 0x1a4c14u: goto label_1a4c14;
        case 0x1a4c18u: goto label_1a4c18;
        case 0x1a4c1cu: goto label_1a4c1c;
        case 0x1a4c20u: goto label_1a4c20;
        case 0x1a4c24u: goto label_1a4c24;
        case 0x1a4c28u: goto label_1a4c28;
        case 0x1a4c2cu: goto label_1a4c2c;
        case 0x1a4c30u: goto label_1a4c30;
        case 0x1a4c34u: goto label_1a4c34;
        case 0x1a4c38u: goto label_1a4c38;
        case 0x1a4c3cu: goto label_1a4c3c;
        case 0x1a4c40u: goto label_1a4c40;
        case 0x1a4c44u: goto label_1a4c44;
        case 0x1a4c48u: goto label_1a4c48;
        case 0x1a4c4cu: goto label_1a4c4c;
        case 0x1a4c50u: goto label_1a4c50;
        case 0x1a4c54u: goto label_1a4c54;
        case 0x1a4c58u: goto label_1a4c58;
        case 0x1a4c5cu: goto label_1a4c5c;
        case 0x1a4c60u: goto label_1a4c60;
        case 0x1a4c64u: goto label_1a4c64;
        case 0x1a4c68u: goto label_1a4c68;
        case 0x1a4c6cu: goto label_1a4c6c;
        case 0x1a4c70u: goto label_1a4c70;
        case 0x1a4c74u: goto label_1a4c74;
        case 0x1a4c78u: goto label_1a4c78;
        case 0x1a4c7cu: goto label_1a4c7c;
        case 0x1a4c80u: goto label_1a4c80;
        case 0x1a4c84u: goto label_1a4c84;
        case 0x1a4c88u: goto label_1a4c88;
        case 0x1a4c8cu: goto label_1a4c8c;
        case 0x1a4c90u: goto label_1a4c90;
        case 0x1a4c94u: goto label_1a4c94;
        case 0x1a4c98u: goto label_1a4c98;
        case 0x1a4c9cu: goto label_1a4c9c;
        case 0x1a4ca0u: goto label_1a4ca0;
        case 0x1a4ca4u: goto label_1a4ca4;
        case 0x1a4ca8u: goto label_1a4ca8;
        case 0x1a4cacu: goto label_1a4cac;
        case 0x1a4cb0u: goto label_1a4cb0;
        case 0x1a4cb4u: goto label_1a4cb4;
        case 0x1a4cb8u: goto label_1a4cb8;
        case 0x1a4cbcu: goto label_1a4cbc;
        default: return;
    }

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
        goto label_1a4aa0;
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
label_1a4aa0:
    // 0x1a4aa0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1a4aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1a4aa4:
    // 0x1a4aa4: 0xc  syscall     0
    ctx->pc = 0x1a4aa4u;
    ctx->pc = 0x1A4AA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4aa8:
    // 0x1a4aa8: 0x3e00008  jr          $ra
label_1a4aac:
    if (ctx->pc == 0x1A4AACu) {
        ctx->pc = 0x1A4AB0u;
        goto label_1a4ab0;
    }
    ctx->pc = 0x1A4AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4AB0u;
label_1a4ab0:
    // 0x1a4ab0: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x1a4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_1a4ab4:
    // 0x1a4ab4: 0xc  syscall     0
    ctx->pc = 0x1a4ab4u;
    ctx->pc = 0x1A4AB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4ab8:
    // 0x1a4ab8: 0x3e00008  jr          $ra
label_1a4abc:
    if (ctx->pc == 0x1A4ABCu) {
        ctx->pc = 0x1A4AC0u;
        goto label_1a4ac0;
    }
    ctx->pc = 0x1A4AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4AC0u;
label_1a4ac0:
    // 0x1a4ac0: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
label_1a4ac4:
    // 0x1a4ac4: 0xc  syscall     0
    ctx->pc = 0x1a4ac4u;
    ctx->pc = 0x1A4AC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4ac8:
    // 0x1a4ac8: 0x3e00008  jr          $ra
label_1a4acc:
    if (ctx->pc == 0x1A4ACCu) {
        ctx->pc = 0x1A4AD0u;
        goto label_1a4ad0;
    }
    ctx->pc = 0x1A4AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4AD0u;
label_1a4ad0:
    // 0x1a4ad0: 0x2403ff98  addiu       $v1, $zero, -0x68
    ctx->pc = 0x1a4ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
label_1a4ad4:
    // 0x1a4ad4: 0xc  syscall     0
    ctx->pc = 0x1a4ad4u;
    ctx->pc = 0x1A4AD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4ad8:
    // 0x1a4ad8: 0x3e00008  jr          $ra
label_1a4adc:
    if (ctx->pc == 0x1A4ADCu) {
        ctx->pc = 0x1A4AE0u;
        goto label_1a4ae0;
    }
    ctx->pc = 0x1A4AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4AE0u;
label_1a4ae0:
    // 0x1a4ae0: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x1a4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
label_1a4ae4:
    // 0x1a4ae4: 0xc  syscall     0
    ctx->pc = 0x1a4ae4u;
    ctx->pc = 0x1A4AE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4ae8:
    // 0x1a4ae8: 0x3e00008  jr          $ra
label_1a4aec:
    if (ctx->pc == 0x1A4AECu) {
        ctx->pc = 0x1A4AF0u;
        goto label_1a4af0;
    }
    ctx->pc = 0x1A4AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4AF0u;
label_1a4af0:
    // 0x1a4af0: 0x2403006b  addiu       $v1, $zero, 0x6B
    ctx->pc = 0x1a4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_1a4af4:
    // 0x1a4af4: 0xc  syscall     0
    ctx->pc = 0x1a4af4u;
    ctx->pc = 0x1A4AF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4af8:
    // 0x1a4af8: 0x3e00008  jr          $ra
label_1a4afc:
    if (ctx->pc == 0x1A4AFCu) {
        ctx->pc = 0x1A4B00u;
        goto label_1a4b00;
    }
    ctx->pc = 0x1A4AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B00u;
label_1a4b00:
    // 0x1a4b00: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x1a4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1a4b04:
    // 0x1a4b04: 0xc  syscall     0
    ctx->pc = 0x1a4b04u;
    ctx->pc = 0x1A4B08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b08:
    // 0x1a4b08: 0x3e00008  jr          $ra
label_1a4b0c:
    if (ctx->pc == 0x1A4B0Cu) {
        ctx->pc = 0x1A4B10u;
        goto label_1a4b10;
    }
    ctx->pc = 0x1A4B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B10u;
label_1a4b10:
    // 0x1a4b10: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x1a4b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
label_1a4b14:
    // 0x1a4b14: 0xc  syscall     0
    ctx->pc = 0x1a4b14u;
    ctx->pc = 0x1A4B18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b18:
    // 0x1a4b18: 0x3e00008  jr          $ra
label_1a4b1c:
    if (ctx->pc == 0x1A4B1Cu) {
        ctx->pc = 0x1A4B20u;
        goto label_1a4b20;
    }
    ctx->pc = 0x1A4B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B20u;
label_1a4b20:
    // 0x1a4b20: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x1a4b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_1a4b24:
    // 0x1a4b24: 0xc  syscall     0
    ctx->pc = 0x1a4b24u;
    ctx->pc = 0x1A4B28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b28:
    // 0x1a4b28: 0x3e00008  jr          $ra
label_1a4b2c:
    if (ctx->pc == 0x1A4B2Cu) {
        ctx->pc = 0x1A4B30u;
        goto label_1a4b30;
    }
    ctx->pc = 0x1A4B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B30u;
label_1a4b30:
    // 0x1a4b30: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x1a4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_1a4b34:
    // 0x1a4b34: 0xc  syscall     0
    ctx->pc = 0x1a4b34u;
    ctx->pc = 0x1A4B38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b38:
    // 0x1a4b38: 0x3e00008  jr          $ra
label_1a4b3c:
    if (ctx->pc == 0x1A4B3Cu) {
        ctx->pc = 0x1A4B40u;
        goto label_1a4b40;
    }
    ctx->pc = 0x1A4B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B40u;
label_1a4b40:
    // 0x1a4b40: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1a4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1a4b44:
    // 0x1a4b44: 0xc  syscall     0
    ctx->pc = 0x1a4b44u;
    ctx->pc = 0x1A4B48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b48:
    // 0x1a4b48: 0x3e00008  jr          $ra
label_1a4b4c:
    if (ctx->pc == 0x1A4B4Cu) {
        ctx->pc = 0x1A4B50u;
        goto label_1a4b50;
    }
    ctx->pc = 0x1A4B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B50u;
label_1a4b50:
    // 0x1a4b50: 0x2403ff90  addiu       $v1, $zero, -0x70
    ctx->pc = 0x1a4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967184));
label_1a4b54:
    // 0x1a4b54: 0xc  syscall     0
    ctx->pc = 0x1a4b54u;
    ctx->pc = 0x1A4B58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b58:
    // 0x1a4b58: 0x3e00008  jr          $ra
label_1a4b5c:
    if (ctx->pc == 0x1A4B5Cu) {
        ctx->pc = 0x1A4B60u;
        goto label_1a4b60;
    }
    ctx->pc = 0x1A4B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B60u;
label_1a4b60:
    // 0x1a4b60: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_1a4b64:
    // 0x1a4b64: 0xc  syscall     0
    ctx->pc = 0x1a4b64u;
    ctx->pc = 0x1A4B68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b68:
    // 0x1a4b68: 0x3e00008  jr          $ra
label_1a4b6c:
    if (ctx->pc == 0x1A4B6Cu) {
        ctx->pc = 0x1A4B70u;
        goto label_1a4b70;
    }
    ctx->pc = 0x1A4B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B70u;
label_1a4b70:
    // 0x1a4b70: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x1a4b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
label_1a4b74:
    // 0x1a4b74: 0xc  syscall     0
    ctx->pc = 0x1a4b74u;
    ctx->pc = 0x1A4B78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b78:
    // 0x1a4b78: 0x3e00008  jr          $ra
label_1a4b7c:
    if (ctx->pc == 0x1A4B7Cu) {
        ctx->pc = 0x1A4B80u;
        goto label_1a4b80;
    }
    ctx->pc = 0x1A4B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B80u;
label_1a4b80:
    // 0x1a4b80: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x1a4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_1a4b84:
    // 0x1a4b84: 0xc  syscall     0
    ctx->pc = 0x1a4b84u;
    ctx->pc = 0x1A4B88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b88:
    // 0x1a4b88: 0x3e00008  jr          $ra
label_1a4b8c:
    if (ctx->pc == 0x1A4B8Cu) {
        ctx->pc = 0x1A4B90u;
        goto label_1a4b90;
    }
    ctx->pc = 0x1A4B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B90u;
label_1a4b90:
    // 0x1a4b90: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x1a4b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_1a4b94:
    // 0x1a4b94: 0xc  syscall     0
    ctx->pc = 0x1a4b94u;
    ctx->pc = 0x1A4B98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4b98:
    // 0x1a4b98: 0x3e00008  jr          $ra
label_1a4b9c:
    if (ctx->pc == 0x1A4B9Cu) {
        ctx->pc = 0x1A4BA0u;
        goto label_1a4ba0;
    }
    ctx->pc = 0x1A4B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BA0u;
label_1a4ba0:
    // 0x1a4ba0: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x1a4ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_1a4ba4:
    // 0x1a4ba4: 0xc  syscall     0
    ctx->pc = 0x1a4ba4u;
    ctx->pc = 0x1A4BA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4ba8:
    // 0x1a4ba8: 0x3e00008  jr          $ra
label_1a4bac:
    if (ctx->pc == 0x1A4BACu) {
        ctx->pc = 0x1A4BB0u;
        goto label_1a4bb0;
    }
    ctx->pc = 0x1A4BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BB0u;
label_1a4bb0:
    // 0x1a4bb0: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x1a4bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_1a4bb4:
    // 0x1a4bb4: 0xc  syscall     0
    ctx->pc = 0x1a4bb4u;
    ctx->pc = 0x1A4BB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4bb8:
    // 0x1a4bb8: 0x3e00008  jr          $ra
label_1a4bbc:
    if (ctx->pc == 0x1A4BBCu) {
        ctx->pc = 0x1A4BC0u;
        goto label_1a4bc0;
    }
    ctx->pc = 0x1A4BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BC0u;
label_1a4bc0:
    // 0x1a4bc0: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x1a4bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_1a4bc4:
    // 0x1a4bc4: 0xc  syscall     0
    ctx->pc = 0x1a4bc4u;
    ctx->pc = 0x1A4BC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4bc8:
    // 0x1a4bc8: 0x3e00008  jr          $ra
label_1a4bcc:
    if (ctx->pc == 0x1A4BCCu) {
        ctx->pc = 0x1A4BD0u;
        goto label_1a4bd0;
    }
    ctx->pc = 0x1A4BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BD0u;
label_1a4bd0:
    // 0x1a4bd0: 0x2403ff8a  addiu       $v1, $zero, -0x76
    ctx->pc = 0x1a4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967178));
label_1a4bd4:
    // 0x1a4bd4: 0xc  syscall     0
    ctx->pc = 0x1a4bd4u;
    ctx->pc = 0x1A4BD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4bd8:
    // 0x1a4bd8: 0x3e00008  jr          $ra
label_1a4bdc:
    if (ctx->pc == 0x1A4BDCu) {
        ctx->pc = 0x1A4BE0u;
        goto label_1a4be0;
    }
    ctx->pc = 0x1A4BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BE0u;
label_1a4be0:
    // 0x1a4be0: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x1a4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_1a4be4:
    // 0x1a4be4: 0xc  syscall     0
    ctx->pc = 0x1a4be4u;
    ctx->pc = 0x1A4BE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4be8:
    // 0x1a4be8: 0x3e00008  jr          $ra
label_1a4bec:
    if (ctx->pc == 0x1A4BECu) {
        ctx->pc = 0x1A4BF0u;
        goto label_1a4bf0;
    }
    ctx->pc = 0x1A4BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BF0u;
label_1a4bf0:
    // 0x1a4bf0: 0x2403ff89  addiu       $v1, $zero, -0x77
    ctx->pc = 0x1a4bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967177));
label_1a4bf4:
    // 0x1a4bf4: 0xc  syscall     0
    ctx->pc = 0x1a4bf4u;
    ctx->pc = 0x1A4BF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4bf8:
    // 0x1a4bf8: 0x3e00008  jr          $ra
label_1a4bfc:
    if (ctx->pc == 0x1A4BFCu) {
        ctx->pc = 0x1A4C00u;
        goto label_1a4c00;
    }
    ctx->pc = 0x1A4BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C00u;
label_1a4c00:
    // 0x1a4c00: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1a4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1a4c04:
    // 0x1a4c04: 0xc  syscall     0
    ctx->pc = 0x1a4c04u;
    ctx->pc = 0x1A4C08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c08:
    // 0x1a4c08: 0x3e00008  jr          $ra
label_1a4c0c:
    if (ctx->pc == 0x1A4C0Cu) {
        ctx->pc = 0x1A4C10u;
        goto label_1a4c10;
    }
    ctx->pc = 0x1A4C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C10u;
label_1a4c10:
    // 0x1a4c10: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x1a4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
label_1a4c14:
    // 0x1a4c14: 0xc  syscall     0
    ctx->pc = 0x1a4c14u;
    ctx->pc = 0x1A4C18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c18:
    // 0x1a4c18: 0x3e00008  jr          $ra
label_1a4c1c:
    if (ctx->pc == 0x1A4C1Cu) {
        ctx->pc = 0x1A4C20u;
        goto label_1a4c20;
    }
    ctx->pc = 0x1A4C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C20u;
label_1a4c20:
    // 0x1a4c20: 0x24030079  addiu       $v1, $zero, 0x79
    ctx->pc = 0x1a4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_1a4c24:
    // 0x1a4c24: 0xc  syscall     0
    ctx->pc = 0x1a4c24u;
    ctx->pc = 0x1A4C28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c28:
    // 0x1a4c28: 0x3e00008  jr          $ra
label_1a4c2c:
    if (ctx->pc == 0x1A4C2Cu) {
        ctx->pc = 0x1A4C30u;
        goto label_1a4c30;
    }
    ctx->pc = 0x1A4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C30u;
label_1a4c30:
    // 0x1a4c30: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_1a4c34:
    // 0x1a4c34: 0xc  syscall     0
    ctx->pc = 0x1a4c34u;
    ctx->pc = 0x1A4C38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c38:
    // 0x1a4c38: 0x3e00008  jr          $ra
label_1a4c3c:
    if (ctx->pc == 0x1A4C3Cu) {
        ctx->pc = 0x1A4C40u;
        goto label_1a4c40;
    }
    ctx->pc = 0x1A4C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C40u;
label_1a4c40:
    // 0x1a4c40: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x1a4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_1a4c44:
    // 0x1a4c44: 0xc  syscall     0
    ctx->pc = 0x1a4c44u;
    ctx->pc = 0x1A4C48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c48:
    // 0x1a4c48: 0x3e00008  jr          $ra
label_1a4c4c:
    if (ctx->pc == 0x1A4C4Cu) {
        ctx->pc = 0x1A4C50u;
        goto label_1a4c50;
    }
    ctx->pc = 0x1A4C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C50u;
label_1a4c50:
    // 0x1a4c50: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_1a4c54:
    // 0x1a4c54: 0xc  syscall     0
    ctx->pc = 0x1a4c54u;
    ctx->pc = 0x1A4C58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c58:
    // 0x1a4c58: 0x3e00008  jr          $ra
label_1a4c5c:
    if (ctx->pc == 0x1A4C5Cu) {
        ctx->pc = 0x1A4C60u;
        goto label_1a4c60;
    }
    ctx->pc = 0x1A4C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C60u;
label_1a4c60:
    // 0x1a4c60: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x1a4c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_1a4c64:
    // 0x1a4c64: 0xc  syscall     0
    ctx->pc = 0x1a4c64u;
    ctx->pc = 0x1A4C68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c68:
    // 0x1a4c68: 0x3e00008  jr          $ra
label_1a4c6c:
    if (ctx->pc == 0x1A4C6Cu) {
        ctx->pc = 0x1A4C70u;
        goto label_1a4c70;
    }
    ctx->pc = 0x1A4C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C70u;
label_1a4c70:
    // 0x1a4c70: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x1a4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_1a4c74:
    // 0x1a4c74: 0xc  syscall     0
    ctx->pc = 0x1a4c74u;
    ctx->pc = 0x1A4C78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c78:
    // 0x1a4c78: 0x3e00008  jr          $ra
label_1a4c7c:
    if (ctx->pc == 0x1A4C7Cu) {
        ctx->pc = 0x1A4C80u;
        goto label_1a4c80;
    }
    ctx->pc = 0x1A4C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C80u;
label_1a4c80:
    // 0x1a4c80: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1a4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1a4c84:
    // 0x1a4c84: 0xc  syscall     0
    ctx->pc = 0x1a4c84u;
    ctx->pc = 0x1A4C88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c88:
    // 0x1a4c88: 0x3e00008  jr          $ra
label_1a4c8c:
    if (ctx->pc == 0x1A4C8Cu) {
        ctx->pc = 0x1A4C90u;
        goto label_1a4c90;
    }
    ctx->pc = 0x1A4C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4C90u;
label_1a4c90:
    // 0x1a4c90: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x1a4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_1a4c94:
    // 0x1a4c94: 0xc  syscall     0
    ctx->pc = 0x1a4c94u;
    ctx->pc = 0x1A4C98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4c98:
    // 0x1a4c98: 0x3e00008  jr          $ra
label_1a4c9c:
    if (ctx->pc == 0x1A4C9Cu) {
        ctx->pc = 0x1A4CA0u;
        goto label_1a4ca0;
    }
    ctx->pc = 0x1A4C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4CA0u;
label_1a4ca0:
    // 0x1a4ca0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a4ca4:
    // 0x1a4ca4: 0x3e00008  jr          $ra
label_1a4ca8:
    if (ctx->pc == 0x1A4CA8u) {
        ctx->pc = 0x1A4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CA4u;
        // 0x1a4ca8: 0xac405b50  sw          $zero, 0x5B50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4CACu;
        goto label_1a4cac;
    }
    ctx->pc = 0x1A4CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4CA4u;
        // 0x1a4ca8: 0xac405b50  sw          $zero, 0x5B50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 23376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4CACu;
label_1a4cac:
    // 0x1a4cac: 0x0  nop
    ctx->pc = 0x1a4cacu;
    // NOP
label_1a4cb0:
    // 0x1a4cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a4cb4:
    // 0x1a4cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a4cb8:
    // 0x1a4cb8: 0xc06b518  jal         func_1AD460
label_1a4cbc:
    if (ctx->pc == 0x1A4CBCu) {
        ctx->pc = 0x1A4CC0u;
        { ctx->pc = 0x1a4cc0; return; }
    }
    ctx->pc = 0x1A4CB8u;
    SET_GPR_U32(ctx, 31, 0x1A4CC0u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A4CC0u;
    ctx->pc = 0x1a4cc0u;
    return;
}

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


void FUN_0019b910_part150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e4520u: goto label_1e4520;
        case 0x1e4524u: goto label_1e4524;
        case 0x1e4528u: goto label_1e4528;
        case 0x1e452cu: goto label_1e452c;
        case 0x1e4530u: goto label_1e4530;
        case 0x1e4534u: goto label_1e4534;
        case 0x1e4538u: goto label_1e4538;
        case 0x1e453cu: goto label_1e453c;
        case 0x1e4540u: goto label_1e4540;
        case 0x1e4544u: goto label_1e4544;
        case 0x1e4548u: goto label_1e4548;
        case 0x1e454cu: goto label_1e454c;
        case 0x1e4550u: goto label_1e4550;
        case 0x1e4554u: goto label_1e4554;
        case 0x1e4558u: goto label_1e4558;
        case 0x1e455cu: goto label_1e455c;
        case 0x1e4560u: goto label_1e4560;
        case 0x1e4564u: goto label_1e4564;
        case 0x1e4568u: goto label_1e4568;
        case 0x1e456cu: goto label_1e456c;
        case 0x1e4570u: goto label_1e4570;
        case 0x1e4574u: goto label_1e4574;
        case 0x1e4578u: goto label_1e4578;
        case 0x1e457cu: goto label_1e457c;
        case 0x1e4580u: goto label_1e4580;
        case 0x1e4584u: goto label_1e4584;
        case 0x1e4588u: goto label_1e4588;
        case 0x1e458cu: goto label_1e458c;
        case 0x1e4590u: goto label_1e4590;
        case 0x1e4594u: goto label_1e4594;
        case 0x1e4598u: goto label_1e4598;
        case 0x1e459cu: goto label_1e459c;
        case 0x1e45a0u: goto label_1e45a0;
        case 0x1e45a4u: goto label_1e45a4;
        case 0x1e45a8u: goto label_1e45a8;
        case 0x1e45acu: goto label_1e45ac;
        case 0x1e45b0u: goto label_1e45b0;
        case 0x1e45b4u: goto label_1e45b4;
        case 0x1e45b8u: goto label_1e45b8;
        case 0x1e45bcu: goto label_1e45bc;
        case 0x1e45c0u: goto label_1e45c0;
        case 0x1e45c4u: goto label_1e45c4;
        case 0x1e45c8u: goto label_1e45c8;
        case 0x1e45ccu: goto label_1e45cc;
        case 0x1e45d0u: goto label_1e45d0;
        case 0x1e45d4u: goto label_1e45d4;
        case 0x1e45d8u: goto label_1e45d8;
        case 0x1e45dcu: goto label_1e45dc;
        case 0x1e45e0u: goto label_1e45e0;
        case 0x1e45e4u: goto label_1e45e4;
        case 0x1e45e8u: goto label_1e45e8;
        case 0x1e45ecu: goto label_1e45ec;
        case 0x1e45f0u: goto label_1e45f0;
        case 0x1e45f4u: goto label_1e45f4;
        case 0x1e45f8u: goto label_1e45f8;
        case 0x1e45fcu: goto label_1e45fc;
        case 0x1e4600u: goto label_1e4600;
        case 0x1e4604u: goto label_1e4604;
        case 0x1e4608u: goto label_1e4608;
        case 0x1e460cu: goto label_1e460c;
        case 0x1e4610u: goto label_1e4610;
        case 0x1e4614u: goto label_1e4614;
        case 0x1e4618u: goto label_1e4618;
        case 0x1e461cu: goto label_1e461c;
        case 0x1e4620u: goto label_1e4620;
        case 0x1e4624u: goto label_1e4624;
        case 0x1e4628u: goto label_1e4628;
        case 0x1e462cu: goto label_1e462c;
        case 0x1e4630u: goto label_1e4630;
        case 0x1e4634u: goto label_1e4634;
        case 0x1e4638u: goto label_1e4638;
        case 0x1e463cu: goto label_1e463c;
        case 0x1e4640u: goto label_1e4640;
        case 0x1e4644u: goto label_1e4644;
        case 0x1e4648u: goto label_1e4648;
        case 0x1e464cu: goto label_1e464c;
        case 0x1e4650u: goto label_1e4650;
        case 0x1e4654u: goto label_1e4654;
        case 0x1e4658u: goto label_1e4658;
        case 0x1e465cu: goto label_1e465c;
        case 0x1e4660u: goto label_1e4660;
        case 0x1e4664u: goto label_1e4664;
        case 0x1e4668u: goto label_1e4668;
        case 0x1e466cu: goto label_1e466c;
        case 0x1e4670u: goto label_1e4670;
        case 0x1e4674u: goto label_1e4674;
        case 0x1e4678u: goto label_1e4678;
        case 0x1e467cu: goto label_1e467c;
        case 0x1e4680u: goto label_1e4680;
        case 0x1e4684u: goto label_1e4684;
        case 0x1e4688u: goto label_1e4688;
        case 0x1e468cu: goto label_1e468c;
        case 0x1e4690u: goto label_1e4690;
        case 0x1e4694u: goto label_1e4694;
        case 0x1e4698u: goto label_1e4698;
        case 0x1e469cu: goto label_1e469c;
        case 0x1e46a0u: goto label_1e46a0;
        case 0x1e46a4u: goto label_1e46a4;
        case 0x1e46a8u: goto label_1e46a8;
        case 0x1e46acu: goto label_1e46ac;
        case 0x1e46b0u: goto label_1e46b0;
        case 0x1e46b4u: goto label_1e46b4;
        case 0x1e46b8u: goto label_1e46b8;
        case 0x1e46bcu: goto label_1e46bc;
        case 0x1e46c0u: goto label_1e46c0;
        case 0x1e46c4u: goto label_1e46c4;
        case 0x1e46c8u: goto label_1e46c8;
        case 0x1e46ccu: goto label_1e46cc;
        case 0x1e46d0u: goto label_1e46d0;
        case 0x1e46d4u: goto label_1e46d4;
        case 0x1e46d8u: goto label_1e46d8;
        case 0x1e46dcu: goto label_1e46dc;
        case 0x1e46e0u: goto label_1e46e0;
        case 0x1e46e4u: goto label_1e46e4;
        case 0x1e46e8u: goto label_1e46e8;
        case 0x1e46ecu: goto label_1e46ec;
        case 0x1e46f0u: goto label_1e46f0;
        case 0x1e46f4u: goto label_1e46f4;
        case 0x1e46f8u: goto label_1e46f8;
        case 0x1e46fcu: goto label_1e46fc;
        case 0x1e4700u: goto label_1e4700;
        case 0x1e4704u: goto label_1e4704;
        case 0x1e4708u: goto label_1e4708;
        case 0x1e470cu: goto label_1e470c;
        case 0x1e4710u: goto label_1e4710;
        case 0x1e4714u: goto label_1e4714;
        case 0x1e4718u: goto label_1e4718;
        case 0x1e471cu: goto label_1e471c;
        case 0x1e4720u: goto label_1e4720;
        case 0x1e4724u: goto label_1e4724;
        case 0x1e4728u: goto label_1e4728;
        case 0x1e472cu: goto label_1e472c;
        case 0x1e4730u: goto label_1e4730;
        case 0x1e4734u: goto label_1e4734;
        case 0x1e4738u: goto label_1e4738;
        case 0x1e473cu: goto label_1e473c;
        case 0x1e4740u: goto label_1e4740;
        case 0x1e4744u: goto label_1e4744;
        case 0x1e4748u: goto label_1e4748;
        case 0x1e474cu: goto label_1e474c;
        case 0x1e4750u: goto label_1e4750;
        case 0x1e4754u: goto label_1e4754;
        case 0x1e4758u: goto label_1e4758;
        case 0x1e475cu: goto label_1e475c;
        case 0x1e4760u: goto label_1e4760;
        case 0x1e4764u: goto label_1e4764;
        case 0x1e4768u: goto label_1e4768;
        case 0x1e476cu: goto label_1e476c;
        case 0x1e4770u: goto label_1e4770;
        case 0x1e4774u: goto label_1e4774;
        case 0x1e4778u: goto label_1e4778;
        case 0x1e477cu: goto label_1e477c;
        case 0x1e4780u: goto label_1e4780;
        case 0x1e4784u: goto label_1e4784;
        case 0x1e4788u: goto label_1e4788;
        case 0x1e478cu: goto label_1e478c;
        case 0x1e4790u: goto label_1e4790;
        case 0x1e4794u: goto label_1e4794;
        case 0x1e4798u: goto label_1e4798;
        case 0x1e479cu: goto label_1e479c;
        case 0x1e47a0u: goto label_1e47a0;
        case 0x1e47a4u: goto label_1e47a4;
        case 0x1e47a8u: goto label_1e47a8;
        case 0x1e47acu: goto label_1e47ac;
        case 0x1e47b0u: goto label_1e47b0;
        case 0x1e47b4u: goto label_1e47b4;
        case 0x1e47b8u: goto label_1e47b8;
        case 0x1e47bcu: goto label_1e47bc;
        case 0x1e47c0u: goto label_1e47c0;
        case 0x1e47c4u: goto label_1e47c4;
        case 0x1e47c8u: goto label_1e47c8;
        case 0x1e47ccu: goto label_1e47cc;
        case 0x1e47d0u: goto label_1e47d0;
        case 0x1e47d4u: goto label_1e47d4;
        case 0x1e47d8u: goto label_1e47d8;
        case 0x1e47dcu: goto label_1e47dc;
        case 0x1e47e0u: goto label_1e47e0;
        case 0x1e47e4u: goto label_1e47e4;
        case 0x1e47e8u: goto label_1e47e8;
        case 0x1e47ecu: goto label_1e47ec;
        case 0x1e47f0u: goto label_1e47f0;
        case 0x1e47f4u: goto label_1e47f4;
        case 0x1e47f8u: goto label_1e47f8;
        case 0x1e47fcu: goto label_1e47fc;
        case 0x1e4800u: goto label_1e4800;
        case 0x1e4804u: goto label_1e4804;
        case 0x1e4808u: goto label_1e4808;
        case 0x1e480cu: goto label_1e480c;
        case 0x1e4810u: goto label_1e4810;
        case 0x1e4814u: goto label_1e4814;
        case 0x1e4818u: goto label_1e4818;
        case 0x1e481cu: goto label_1e481c;
        case 0x1e4820u: goto label_1e4820;
        case 0x1e4824u: goto label_1e4824;
        case 0x1e4828u: goto label_1e4828;
        case 0x1e482cu: goto label_1e482c;
        case 0x1e4830u: goto label_1e4830;
        case 0x1e4834u: goto label_1e4834;
        case 0x1e4838u: goto label_1e4838;
        case 0x1e483cu: goto label_1e483c;
        case 0x1e4840u: goto label_1e4840;
        case 0x1e4844u: goto label_1e4844;
        case 0x1e4848u: goto label_1e4848;
        case 0x1e484cu: goto label_1e484c;
        case 0x1e4850u: goto label_1e4850;
        case 0x1e4854u: goto label_1e4854;
        case 0x1e4858u: goto label_1e4858;
        case 0x1e485cu: goto label_1e485c;
        case 0x1e4860u: goto label_1e4860;
        case 0x1e4864u: goto label_1e4864;
        case 0x1e4868u: goto label_1e4868;
        case 0x1e486cu: goto label_1e486c;
        case 0x1e4870u: goto label_1e4870;
        case 0x1e4874u: goto label_1e4874;
        case 0x1e4878u: goto label_1e4878;
        case 0x1e487cu: goto label_1e487c;
        case 0x1e4880u: goto label_1e4880;
        case 0x1e4884u: goto label_1e4884;
        case 0x1e4888u: goto label_1e4888;
        case 0x1e488cu: goto label_1e488c;
        case 0x1e4890u: goto label_1e4890;
        case 0x1e4894u: goto label_1e4894;
        case 0x1e4898u: goto label_1e4898;
        case 0x1e489cu: goto label_1e489c;
        case 0x1e48a0u: goto label_1e48a0;
        case 0x1e48a4u: goto label_1e48a4;
        case 0x1e48a8u: goto label_1e48a8;
        case 0x1e48acu: goto label_1e48ac;
        case 0x1e48b0u: goto label_1e48b0;
        case 0x1e48b4u: goto label_1e48b4;
        case 0x1e48b8u: goto label_1e48b8;
        case 0x1e48bcu: goto label_1e48bc;
        case 0x1e48c0u: goto label_1e48c0;
        case 0x1e48c4u: goto label_1e48c4;
        case 0x1e48c8u: goto label_1e48c8;
        case 0x1e48ccu: goto label_1e48cc;
        case 0x1e48d0u: goto label_1e48d0;
        case 0x1e48d4u: goto label_1e48d4;
        case 0x1e48d8u: goto label_1e48d8;
        case 0x1e48dcu: goto label_1e48dc;
        case 0x1e48e0u: goto label_1e48e0;
        case 0x1e48e4u: goto label_1e48e4;
        case 0x1e48e8u: goto label_1e48e8;
        case 0x1e48ecu: goto label_1e48ec;
        case 0x1e48f0u: goto label_1e48f0;
        case 0x1e48f4u: goto label_1e48f4;
        case 0x1e48f8u: goto label_1e48f8;
        case 0x1e48fcu: goto label_1e48fc;
        case 0x1e4900u: goto label_1e4900;
        case 0x1e4904u: goto label_1e4904;
        case 0x1e4908u: goto label_1e4908;
        case 0x1e490cu: goto label_1e490c;
        case 0x1e4910u: goto label_1e4910;
        case 0x1e4914u: goto label_1e4914;
        case 0x1e4918u: goto label_1e4918;
        case 0x1e491cu: goto label_1e491c;
        case 0x1e4920u: goto label_1e4920;
        case 0x1e4924u: goto label_1e4924;
        case 0x1e4928u: goto label_1e4928;
        case 0x1e492cu: goto label_1e492c;
        case 0x1e4930u: goto label_1e4930;
        case 0x1e4934u: goto label_1e4934;
        case 0x1e4938u: goto label_1e4938;
        case 0x1e493cu: goto label_1e493c;
        case 0x1e4940u: goto label_1e4940;
        case 0x1e4944u: goto label_1e4944;
        case 0x1e4948u: goto label_1e4948;
        case 0x1e494cu: goto label_1e494c;
        case 0x1e4950u: goto label_1e4950;
        case 0x1e4954u: goto label_1e4954;
        case 0x1e4958u: goto label_1e4958;
        case 0x1e495cu: goto label_1e495c;
        case 0x1e4960u: goto label_1e4960;
        case 0x1e4964u: goto label_1e4964;
        case 0x1e4968u: goto label_1e4968;
        case 0x1e496cu: goto label_1e496c;
        case 0x1e4970u: goto label_1e4970;
        case 0x1e4974u: goto label_1e4974;
        case 0x1e4978u: goto label_1e4978;
        case 0x1e497cu: goto label_1e497c;
        case 0x1e4980u: goto label_1e4980;
        case 0x1e4984u: goto label_1e4984;
        case 0x1e4988u: goto label_1e4988;
        case 0x1e498cu: goto label_1e498c;
        case 0x1e4990u: goto label_1e4990;
        case 0x1e4994u: goto label_1e4994;
        case 0x1e4998u: goto label_1e4998;
        case 0x1e499cu: goto label_1e499c;
        case 0x1e49a0u: goto label_1e49a0;
        case 0x1e49a4u: goto label_1e49a4;
        case 0x1e49a8u: goto label_1e49a8;
        case 0x1e49acu: goto label_1e49ac;
        case 0x1e49b0u: goto label_1e49b0;
        case 0x1e49b4u: goto label_1e49b4;
        case 0x1e49b8u: goto label_1e49b8;
        case 0x1e49bcu: goto label_1e49bc;
        case 0x1e49c0u: goto label_1e49c0;
        case 0x1e49c4u: goto label_1e49c4;
        case 0x1e49c8u: goto label_1e49c8;
        case 0x1e49ccu: goto label_1e49cc;
        case 0x1e49d0u: goto label_1e49d0;
        case 0x1e49d4u: goto label_1e49d4;
        case 0x1e49d8u: goto label_1e49d8;
        case 0x1e49dcu: goto label_1e49dc;
        case 0x1e49e0u: goto label_1e49e0;
        case 0x1e49e4u: goto label_1e49e4;
        case 0x1e49e8u: goto label_1e49e8;
        case 0x1e49ecu: goto label_1e49ec;
        case 0x1e49f0u: goto label_1e49f0;
        case 0x1e49f4u: goto label_1e49f4;
        case 0x1e49f8u: goto label_1e49f8;
        case 0x1e49fcu: goto label_1e49fc;
        case 0x1e4a00u: goto label_1e4a00;
        case 0x1e4a04u: goto label_1e4a04;
        case 0x1e4a08u: goto label_1e4a08;
        case 0x1e4a0cu: goto label_1e4a0c;
        case 0x1e4a10u: goto label_1e4a10;
        case 0x1e4a14u: goto label_1e4a14;
        case 0x1e4a18u: goto label_1e4a18;
        case 0x1e4a1cu: goto label_1e4a1c;
        case 0x1e4a20u: goto label_1e4a20;
        case 0x1e4a24u: goto label_1e4a24;
        case 0x1e4a28u: goto label_1e4a28;
        case 0x1e4a2cu: goto label_1e4a2c;
        case 0x1e4a30u: goto label_1e4a30;
        case 0x1e4a34u: goto label_1e4a34;
        case 0x1e4a38u: goto label_1e4a38;
        case 0x1e4a3cu: goto label_1e4a3c;
        case 0x1e4a40u: goto label_1e4a40;
        case 0x1e4a44u: goto label_1e4a44;
        case 0x1e4a48u: goto label_1e4a48;
        case 0x1e4a4cu: goto label_1e4a4c;
        case 0x1e4a50u: goto label_1e4a50;
        case 0x1e4a54u: goto label_1e4a54;
        case 0x1e4a58u: goto label_1e4a58;
        case 0x1e4a5cu: goto label_1e4a5c;
        case 0x1e4a60u: goto label_1e4a60;
        case 0x1e4a64u: goto label_1e4a64;
        case 0x1e4a68u: goto label_1e4a68;
        case 0x1e4a6cu: goto label_1e4a6c;
        case 0x1e4a70u: goto label_1e4a70;
        case 0x1e4a74u: goto label_1e4a74;
        case 0x1e4a78u: goto label_1e4a78;
        case 0x1e4a7cu: goto label_1e4a7c;
        case 0x1e4a80u: goto label_1e4a80;
        case 0x1e4a84u: goto label_1e4a84;
        case 0x1e4a88u: goto label_1e4a88;
        case 0x1e4a8cu: goto label_1e4a8c;
        case 0x1e4a90u: goto label_1e4a90;
        case 0x1e4a94u: goto label_1e4a94;
        case 0x1e4a98u: goto label_1e4a98;
        case 0x1e4a9cu: goto label_1e4a9c;
        case 0x1e4aa0u: goto label_1e4aa0;
        case 0x1e4aa4u: goto label_1e4aa4;
        case 0x1e4aa8u: goto label_1e4aa8;
        case 0x1e4aacu: goto label_1e4aac;
        case 0x1e4ab0u: goto label_1e4ab0;
        case 0x1e4ab4u: goto label_1e4ab4;
        case 0x1e4ab8u: goto label_1e4ab8;
        case 0x1e4abcu: goto label_1e4abc;
        case 0x1e4ac0u: goto label_1e4ac0;
        case 0x1e4ac4u: goto label_1e4ac4;
        case 0x1e4ac8u: goto label_1e4ac8;
        case 0x1e4accu: goto label_1e4acc;
        case 0x1e4ad0u: goto label_1e4ad0;
        case 0x1e4ad4u: goto label_1e4ad4;
        case 0x1e4ad8u: goto label_1e4ad8;
        case 0x1e4adcu: goto label_1e4adc;
        case 0x1e4ae0u: goto label_1e4ae0;
        case 0x1e4ae4u: goto label_1e4ae4;
        case 0x1e4ae8u: goto label_1e4ae8;
        case 0x1e4aecu: goto label_1e4aec;
        case 0x1e4af0u: goto label_1e4af0;
        case 0x1e4af4u: goto label_1e4af4;
        case 0x1e4af8u: goto label_1e4af8;
        case 0x1e4afcu: goto label_1e4afc;
        case 0x1e4b00u: goto label_1e4b00;
        case 0x1e4b04u: goto label_1e4b04;
        case 0x1e4b08u: goto label_1e4b08;
        case 0x1e4b0cu: goto label_1e4b0c;
        case 0x1e4b10u: goto label_1e4b10;
        case 0x1e4b14u: goto label_1e4b14;
        case 0x1e4b18u: goto label_1e4b18;
        case 0x1e4b1cu: goto label_1e4b1c;
        case 0x1e4b20u: goto label_1e4b20;
        case 0x1e4b24u: goto label_1e4b24;
        case 0x1e4b28u: goto label_1e4b28;
        case 0x1e4b2cu: goto label_1e4b2c;
        case 0x1e4b30u: goto label_1e4b30;
        case 0x1e4b34u: goto label_1e4b34;
        case 0x1e4b38u: goto label_1e4b38;
        case 0x1e4b3cu: goto label_1e4b3c;
        case 0x1e4b40u: goto label_1e4b40;
        case 0x1e4b44u: goto label_1e4b44;
        case 0x1e4b48u: goto label_1e4b48;
        case 0x1e4b4cu: goto label_1e4b4c;
        case 0x1e4b50u: goto label_1e4b50;
        case 0x1e4b54u: goto label_1e4b54;
        case 0x1e4b58u: goto label_1e4b58;
        case 0x1e4b5cu: goto label_1e4b5c;
        case 0x1e4b60u: goto label_1e4b60;
        case 0x1e4b64u: goto label_1e4b64;
        case 0x1e4b68u: goto label_1e4b68;
        case 0x1e4b6cu: goto label_1e4b6c;
        case 0x1e4b70u: goto label_1e4b70;
        case 0x1e4b74u: goto label_1e4b74;
        case 0x1e4b78u: goto label_1e4b78;
        case 0x1e4b7cu: goto label_1e4b7c;
        case 0x1e4b80u: goto label_1e4b80;
        case 0x1e4b84u: goto label_1e4b84;
        case 0x1e4b88u: goto label_1e4b88;
        case 0x1e4b8cu: goto label_1e4b8c;
        case 0x1e4b90u: goto label_1e4b90;
        case 0x1e4b94u: goto label_1e4b94;
        case 0x1e4b98u: goto label_1e4b98;
        case 0x1e4b9cu: goto label_1e4b9c;
        case 0x1e4ba0u: goto label_1e4ba0;
        case 0x1e4ba4u: goto label_1e4ba4;
        case 0x1e4ba8u: goto label_1e4ba8;
        case 0x1e4bacu: goto label_1e4bac;
        case 0x1e4bb0u: goto label_1e4bb0;
        case 0x1e4bb4u: goto label_1e4bb4;
        case 0x1e4bb8u: goto label_1e4bb8;
        case 0x1e4bbcu: goto label_1e4bbc;
        case 0x1e4bc0u: goto label_1e4bc0;
        case 0x1e4bc4u: goto label_1e4bc4;
        case 0x1e4bc8u: goto label_1e4bc8;
        case 0x1e4bccu: goto label_1e4bcc;
        case 0x1e4bd0u: goto label_1e4bd0;
        case 0x1e4bd4u: goto label_1e4bd4;
        case 0x1e4bd8u: goto label_1e4bd8;
        case 0x1e4bdcu: goto label_1e4bdc;
        case 0x1e4be0u: goto label_1e4be0;
        case 0x1e4be4u: goto label_1e4be4;
        case 0x1e4be8u: goto label_1e4be8;
        case 0x1e4becu: goto label_1e4bec;
        case 0x1e4bf0u: goto label_1e4bf0;
        case 0x1e4bf4u: goto label_1e4bf4;
        case 0x1e4bf8u: goto label_1e4bf8;
        case 0x1e4bfcu: goto label_1e4bfc;
        case 0x1e4c00u: goto label_1e4c00;
        case 0x1e4c04u: goto label_1e4c04;
        case 0x1e4c08u: goto label_1e4c08;
        case 0x1e4c0cu: goto label_1e4c0c;
        case 0x1e4c10u: goto label_1e4c10;
        case 0x1e4c14u: goto label_1e4c14;
        case 0x1e4c18u: goto label_1e4c18;
        case 0x1e4c1cu: goto label_1e4c1c;
        case 0x1e4c20u: goto label_1e4c20;
        case 0x1e4c24u: goto label_1e4c24;
        case 0x1e4c28u: goto label_1e4c28;
        case 0x1e4c2cu: goto label_1e4c2c;
        case 0x1e4c30u: goto label_1e4c30;
        case 0x1e4c34u: goto label_1e4c34;
        case 0x1e4c38u: goto label_1e4c38;
        case 0x1e4c3cu: goto label_1e4c3c;
        case 0x1e4c40u: goto label_1e4c40;
        case 0x1e4c44u: goto label_1e4c44;
        case 0x1e4c48u: goto label_1e4c48;
        case 0x1e4c4cu: goto label_1e4c4c;
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c54u: goto label_1e4c54;
        case 0x1e4c58u: goto label_1e4c58;
        case 0x1e4c5cu: goto label_1e4c5c;
        case 0x1e4c60u: goto label_1e4c60;
        case 0x1e4c64u: goto label_1e4c64;
        case 0x1e4c68u: goto label_1e4c68;
        case 0x1e4c6cu: goto label_1e4c6c;
        case 0x1e4c70u: goto label_1e4c70;
        case 0x1e4c74u: goto label_1e4c74;
        case 0x1e4c78u: goto label_1e4c78;
        case 0x1e4c7cu: goto label_1e4c7c;
        case 0x1e4c80u: goto label_1e4c80;
        case 0x1e4c84u: goto label_1e4c84;
        case 0x1e4c88u: goto label_1e4c88;
        case 0x1e4c8cu: goto label_1e4c8c;
        case 0x1e4c90u: goto label_1e4c90;
        case 0x1e4c94u: goto label_1e4c94;
        case 0x1e4c98u: goto label_1e4c98;
        case 0x1e4c9cu: goto label_1e4c9c;
        case 0x1e4ca0u: goto label_1e4ca0;
        case 0x1e4ca4u: goto label_1e4ca4;
        case 0x1e4ca8u: goto label_1e4ca8;
        case 0x1e4cacu: goto label_1e4cac;
        case 0x1e4cb0u: goto label_1e4cb0;
        case 0x1e4cb4u: goto label_1e4cb4;
        case 0x1e4cb8u: goto label_1e4cb8;
        case 0x1e4cbcu: goto label_1e4cbc;
        case 0x1e4cc0u: goto label_1e4cc0;
        case 0x1e4cc4u: goto label_1e4cc4;
        case 0x1e4cc8u: goto label_1e4cc8;
        case 0x1e4cccu: goto label_1e4ccc;
        case 0x1e4cd0u: goto label_1e4cd0;
        case 0x1e4cd4u: goto label_1e4cd4;
        case 0x1e4cd8u: goto label_1e4cd8;
        case 0x1e4cdcu: goto label_1e4cdc;
        case 0x1e4ce0u: goto label_1e4ce0;
        case 0x1e4ce4u: goto label_1e4ce4;
        case 0x1e4ce8u: goto label_1e4ce8;
        case 0x1e4cecu: goto label_1e4cec;
        default: return;
    }

label_1e4520:
    // 0x1e4520: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1e4520u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1e4524:
    // 0x1e4524: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x1e4524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e4528:
    // 0x1e4528: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
label_1e452c:
    if (ctx->pc == 0x1E452Cu) {
        ctx->pc = 0x1E452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4528u;
        // 0x1e452c: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4530u;
        goto label_1e4530;
    }
    ctx->pc = 0x1E4528u;
    {
        const bool branch_taken_0x1e4528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4528u;
        // 0x1e452c: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4528) {
            ctx->pc = 0x1E43ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e43ec; return; }
        }
    }
    ctx->pc = 0x1E4530u;
label_1e4530:
    // 0x1e4530: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1e4530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1e4534:
    // 0x1e4534: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1e4534u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1e4538:
    // 0x1e4538: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1e4538u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1e453c:
    // 0x1e453c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1e453cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e4540:
    // 0x1e4540: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1e4540u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4544:
    // 0x1e4544: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e4544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e4548:
    // 0x1e4548: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e4548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e454c:
    // 0x1e454c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e454cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4550:
    // 0x1e4550: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e4550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4554:
    // 0x1e4554: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e4554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4558:
    // 0x1e4558: 0x3e00008  jr          $ra
label_1e455c:
    if (ctx->pc == 0x1E455Cu) {
        ctx->pc = 0x1E455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4558u;
        // 0x1e455c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4560u;
        goto label_1e4560;
    }
    ctx->pc = 0x1E4558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4558u;
        // 0x1e455c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4560u;
label_1e4560:
    // 0x1e4560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e4564:
    // 0x1e4564: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e4564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e4568:
    // 0x1e4568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e456c:
    // 0x1e456c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e456cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e4570:
    // 0x1e4570: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1e4570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e4574:
    // 0x1e4574: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e4574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e4578:
    // 0x1e4578: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e457c:
    // 0x1e457c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e4580:
    // 0x1e4580: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1e4580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1e4584:
    // 0x1e4584: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
label_1e4588:
    if (ctx->pc == 0x1E4588u) {
        ctx->pc = 0x1E4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4584u;
        // 0x1e4588: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E458Cu;
        goto label_1e458c;
    }
    ctx->pc = 0x1E4584u;
    {
        const bool branch_taken_0x1e4584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4584u;
        // 0x1e4588: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4584) {
            ctx->pc = 0x1E4770u;
            goto label_1e4770;
        }
    }
    ctx->pc = 0x1E458Cu;
label_1e458c:
    // 0x1e458c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1e458cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1e4590:
    // 0x1e4590: 0x27838d88  addiu       $v1, $gp, -0x7278
    ctx->pc = 0x1e4590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
label_1e4594:
    // 0x1e4594: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e4594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e4598:
    // 0x1e4598: 0x3c08004b  lui         $t0, 0x4B
    ctx->pc = 0x1e4598u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)75 << 16));
label_1e459c:
    // 0x1e459c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e459cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e45a0:
    // 0x1e45a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e45a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e45a4:
    // 0x1e45a4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1e45a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e45a8:
    // 0x1e45a8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e45a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e45ac:
    // 0x1e45ac: 0x10000028  b           . + 4 + (0x28 << 2)
label_1e45b0:
    if (ctx->pc == 0x1E45B0u) {
        ctx->pc = 0x1E45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45ACu;
        // 0x1e45b0: 0x250828a0  addiu       $t0, $t0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45B4u;
        goto label_1e45b4;
    }
    ctx->pc = 0x1E45ACu;
    {
        const bool branch_taken_0x1e45ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45ACu;
        // 0x1e45b0: 0x250828a0  addiu       $t0, $t0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45ac) {
            ctx->pc = 0x1E4650u;
            goto label_1e4650;
        }
    }
    ctx->pc = 0x1E45B4u;
label_1e45b4:
    // 0x1e45b4: 0x8f878db8  lw          $a3, -0x7248($gp)
    ctx->pc = 0x1e45b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e45b8:
    // 0x1e45b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e45b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e45bc:
    // 0x1e45bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e45bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e45c0:
    // 0x1e45c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e45c4:
    if (ctx->pc == 0x1E45C4u) {
        ctx->pc = 0x1E45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C0u;
        // 0x1e45c4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45C8u;
        goto label_1e45c8;
    }
    ctx->pc = 0x1E45C0u;
    {
        const bool branch_taken_0x1e45c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C0u;
        // 0x1e45c4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45c0) {
            ctx->pc = 0x1E45E8u;
            goto label_1e45e8;
        }
    }
    ctx->pc = 0x1E45C8u;
label_1e45c8:
    // 0x1e45c8: 0x10c1821  addu        $v1, $t0, $t4
    ctx->pc = 0x1e45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
label_1e45cc:
    // 0x1e45cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e45d0:
    // 0x1e45d0: 0x15430003  bne         $t2, $v1, . + 4 + (0x3 << 2)
label_1e45d4:
    if (ctx->pc == 0x1E45D4u) {
        ctx->pc = 0x1E45D8u;
        goto label_1e45d8;
    }
    ctx->pc = 0x1E45D0u;
    {
        const bool branch_taken_0x1e45d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e45d0) {
            ctx->pc = 0x1E45E0u;
            goto label_1e45e0;
        }
    }
    ctx->pc = 0x1E45D8u;
label_1e45d8:
    // 0x1e45d8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e45dc:
    if (ctx->pc == 0x1E45DCu) {
        ctx->pc = 0x1E45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45D8u;
        // 0x1e45dc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E45E0u;
        goto label_1e45e0;
    }
    ctx->pc = 0x1E45D8u;
    {
        const bool branch_taken_0x1e45d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45D8u;
        // 0x1e45dc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45d8) {
            ctx->pc = 0x1E45F4u;
            goto label_1e45f4;
        }
    }
    ctx->pc = 0x1E45E0u;
label_1e45e0:
    // 0x1e45e0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x1e45e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_1e45e4:
    // 0x1e45e4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1e45e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1e45e8:
    // 0x1e45e8: 0x167182a  slt         $v1, $t3, $a3
    ctx->pc = 0x1e45e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e45ec:
    // 0x1e45ec: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1e45f0:
    if (ctx->pc == 0x1E45F0u) {
        ctx->pc = 0x1E45F4u;
        goto label_1e45f4;
    }
    ctx->pc = 0x1E45ECu;
    {
        const bool branch_taken_0x1e45ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e45ec) {
            ctx->pc = 0x1E45C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e45c8;
        }
    }
    ctx->pc = 0x1E45F4u;
label_1e45f4:
    // 0x1e45f4: 0x0  nop
    ctx->pc = 0x1e45f4u;
    // NOP
label_1e45f8:
    // 0x1e45f8: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
label_1e45fc:
    if (ctx->pc == 0x1E45FCu) {
        ctx->pc = 0x1E45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45F8u;
        // 0x1e45fc: 0xad3821  addu        $a3, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4600u;
        goto label_1e4600;
    }
    ctx->pc = 0x1E45F8u;
    {
        const bool branch_taken_0x1e45f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45F8u;
        // 0x1e45fc: 0xad3821  addu        $a3, $a1, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45f8) {
            ctx->pc = 0x1E4638u;
            goto label_1e4638;
        }
    }
    ctx->pc = 0x1E4600u;
label_1e4600:
    // 0x1e4600: 0xa0e60083  sb          $a2, 0x83($a3)
    ctx->pc = 0x1e4600u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 6));
label_1e4604:
    // 0x1e4604: 0x8f838d84  lw          $v1, -0x727C($gp)
    ctx->pc = 0x1e4604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
label_1e4608:
    // 0x1e4608: 0x146a0004  bne         $v1, $t2, . + 4 + (0x4 << 2)
label_1e460c:
    if (ctx->pc == 0x1E460Cu) {
        ctx->pc = 0x1E460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4608u;
        // 0x1e460c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4610u;
        goto label_1e4610;
    }
    ctx->pc = 0x1E4608u;
    {
        const bool branch_taken_0x1e4608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        ctx->pc = 0x1E460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4608u;
        // 0x1e460c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4608) {
            ctx->pc = 0x1E461Cu;
            goto label_1e461c;
        }
    }
    ctx->pc = 0x1E4610u;
label_1e4610:
    // 0x1e4610: 0xdc232920  ld          $v1, 0x2920($at)
    ctx->pc = 0x1e4610u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 10528)));
label_1e4614:
    // 0x1e4614: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e4618:
    if (ctx->pc == 0x1E4618u) {
        ctx->pc = 0x1E4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4614u;
        // 0x1e4618: 0xfce30ed0  sd          $v1, 0xED0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 3792), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E461Cu;
        goto label_1e461c;
    }
    ctx->pc = 0x1E4614u;
    {
        const bool branch_taken_0x1e4614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4614u;
        // 0x1e4618: 0xfce30ed0  sd          $v1, 0xED0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 3792), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4614) {
            ctx->pc = 0x1E462Cu;
            goto label_1e462c;
        }
    }
    ctx->pc = 0x1E461Cu;
label_1e461c:
    // 0x1e461c: 0x0  nop
    ctx->pc = 0x1e461cu;
    // NOP
label_1e4620:
    // 0x1e4620: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e4620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e4624:
    // 0x1e4624: 0xdc232928  ld          $v1, 0x2928($at)
    ctx->pc = 0x1e4624u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 10536)));
label_1e4628:
    // 0x1e4628: 0xfce30ed0  sd          $v1, 0xED0($a3)
    ctx->pc = 0x1e4628u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 3792), GPR_U64(ctx, 3));
label_1e462c:
    // 0x1e462c: 0x0  nop
    ctx->pc = 0x1e462cu;
    // NOP
label_1e4630:
    // 0x1e4630: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e4634:
    if (ctx->pc == 0x1E4634u) {
        ctx->pc = 0x1E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4630u;
        // 0x1e4634: 0xa0e60ee3  sb          $a2, 0xEE3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3811), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4638u;
        goto label_1e4638;
    }
    ctx->pc = 0x1E4630u;
    {
        const bool branch_taken_0x1e4630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4630u;
        // 0x1e4634: 0xa0e60ee3  sb          $a2, 0xEE3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3811), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4630) {
            ctx->pc = 0x1E4644u;
            goto label_1e4644;
        }
    }
    ctx->pc = 0x1E4638u;
label_1e4638:
    // 0x1e4638: 0xad1821  addu        $v1, $a1, $t5
    ctx->pc = 0x1e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_1e463c:
    // 0x1e463c: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x1e463cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
label_1e4640:
    // 0x1e4640: 0xa0600ee3  sb          $zero, 0xEE3($v1)
    ctx->pc = 0x1e4640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3811), (uint8_t)GPR_U32(ctx, 0));
label_1e4644:
    // 0x1e4644: 0x0  nop
    ctx->pc = 0x1e4644u;
    // NOP
label_1e4648:
    // 0x1e4648: 0x25ad00a0  addiu       $t5, $t5, 0xA0
    ctx->pc = 0x1e4648u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 160));
label_1e464c:
    // 0x1e464c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1e464cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1e4650:
    // 0x1e4650: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x1e4650u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e4654:
    // 0x1e4654: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
label_1e4658:
    if (ctx->pc == 0x1E4658u) {
        ctx->pc = 0x1E4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4654u;
        // 0x1e4658: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E465Cu;
        goto label_1e465c;
    }
    ctx->pc = 0x1E4654u;
    {
        const bool branch_taken_0x1e4654 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4654u;
        // 0x1e4658: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4654) {
            ctx->pc = 0x1E4660u;
            goto label_1e4660;
        }
    }
    ctx->pc = 0x1E465Cu;
label_1e465c:
    // 0x1e465c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1e465cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e4660:
    // 0x1e4660: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x1e4660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e4664:
    // 0x1e4664: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
label_1e4668:
    if (ctx->pc == 0x1E4668u) {
        ctx->pc = 0x1E466Cu;
        goto label_1e466c;
    }
    ctx->pc = 0x1E4664u;
    {
        const bool branch_taken_0x1e4664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4664) {
            ctx->pc = 0x1E45B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e45b4;
        }
    }
    ctx->pc = 0x1E466Cu;
label_1e466c:
    // 0x1e466c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e4670:
    // 0x1e4670: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1e4674:
    if (ctx->pc == 0x1E4674u) {
        ctx->pc = 0x1E4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4670u;
        // 0x1e4674: 0x8f838d84  lw          $v1, -0x727C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4678u;
        goto label_1e4678;
    }
    ctx->pc = 0x1E4670u;
    {
        const bool branch_taken_0x1e4670 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4670u;
        // 0x1e4674: 0x8f838d84  lw          $v1, -0x727C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4670) {
            ctx->pc = 0x1E4680u;
            goto label_1e4680;
        }
    }
    ctx->pc = 0x1E4678u;
label_1e4678:
    // 0x1e4678: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e467c:
    if (ctx->pc == 0x1E467Cu) {
        ctx->pc = 0x1E467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4678u;
        // 0x1e467c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4680u;
        goto label_1e4680;
    }
    ctx->pc = 0x1E4678u;
    {
        const bool branch_taken_0x1e4678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4678u;
        // 0x1e467c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4678) {
            ctx->pc = 0x1E4684u;
            goto label_1e4684;
        }
    }
    ctx->pc = 0x1E4680u;
label_1e4680:
    // 0x1e4680: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e4680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e4684:
    // 0x1e4684: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e4684u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4688:
    // 0x1e4688: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_1e468c:
    if (ctx->pc == 0x1E468Cu) {
        ctx->pc = 0x1E4690u;
        goto label_1e4690;
    }
    ctx->pc = 0x1E4688u;
    {
        const bool branch_taken_0x1e4688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4688) {
            ctx->pc = 0x1E4750u;
            goto label_1e4750;
        }
    }
    ctx->pc = 0x1E4690u;
label_1e4690:
    // 0x1e4690: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e4690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1e4694:
    // 0x1e4694: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1e4694u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e4698:
    // 0x1e4698: 0x2442b7b0  addiu       $v0, $v0, -0x4850
    ctx->pc = 0x1e4698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948784));
label_1e469c:
    // 0x1e469c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1e469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e46a0:
    // 0x1e46a0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1e46a4:
    // 0x1e46a4: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x1e46a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1e46a8:
    // 0x1e46a8: 0x2442b7b2  addiu       $v0, $v0, -0x484E
    ctx->pc = 0x1e46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948786));
label_1e46ac:
    // 0x1e46ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e46acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e46b0:
    // 0x1e46b0: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1e46b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e46b4:
    // 0x1e46b4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1e46b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e46b8:
    // 0x1e46b8: 0x24e3ffe0  addiu       $v1, $a3, -0x20
    ctx->pc = 0x1e46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
label_1e46bc:
    // 0x1e46bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e46c0:
    // 0x1e46c0: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x1e46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1e46c4:
    // 0x1e46c4: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x1e46c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1e46c8:
    // 0x1e46c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e46cc:
    // 0x1e46cc: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1e46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1e46d0:
    // 0x1e46d0: 0xa4a71d50  sh          $a3, 0x1D50($a1)
    ctx->pc = 0x1e46d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7504), (uint16_t)GPR_U32(ctx, 7));
label_1e46d4:
    // 0x1e46d4: 0x2502ffe0  addiu       $v0, $t0, -0x20
    ctx->pc = 0x1e46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
label_1e46d8:
    // 0x1e46d8: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1e46d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e46dc:
    // 0x1e46dc: 0x24e77900  addiu       $a3, $a3, 0x7900
    ctx->pc = 0x1e46dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
label_1e46e0:
    // 0x1e46e0: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x1e46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1e46e4:
    // 0x1e46e4: 0xa4a71d52  sh          $a3, 0x1D52($a1)
    ctx->pc = 0x1e46e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7506), (uint16_t)GPR_U32(ctx, 7));
label_1e46e8:
    // 0x1e46e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e46ec:
    // 0x1e46ec: 0xaca61d54  sw          $a2, 0x1D54($a1)
    ctx->pc = 0x1e46ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7508), GPR_U32(ctx, 6));
label_1e46f0:
    // 0x1e46f0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1e46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1e46f4:
    // 0x1e46f4: 0xa4a31d60  sh          $v1, 0x1D60($a1)
    ctx->pc = 0x1e46f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7520), (uint16_t)GPR_U32(ctx, 3));
label_1e46f8:
    // 0x1e46f8: 0xa4a21d62  sh          $v0, 0x1D62($a1)
    ctx->pc = 0x1e46f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7522), (uint16_t)GPR_U32(ctx, 2));
label_1e46fc:
    // 0x1e46fc: 0xaca61d64  sw          $a2, 0x1D64($a1)
    ctx->pc = 0x1e46fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7524), GPR_U32(ctx, 6));
label_1e4700:
    // 0x1e4700: 0x8f838d80  lw          $v1, -0x7280($gp)
    ctx->pc = 0x1e4700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937984)));
label_1e4704:
    // 0x1e4704: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1e4704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1e4708:
    // 0x1e4708: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e470c:
    if (ctx->pc == 0x1E470Cu) {
        ctx->pc = 0x1E470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4708u;
        // 0x1e470c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4710u;
        goto label_1e4710;
    }
    ctx->pc = 0x1E4708u;
    {
        const bool branch_taken_0x1e4708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4708u;
        // 0x1e470c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4708) {
            ctx->pc = 0x1E472Cu;
            goto label_1e472c;
        }
    }
    ctx->pc = 0x1E4710u;
label_1e4710:
    // 0x1e4710: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1e4710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1e4714:
    // 0x1e4714: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4718:
    if (ctx->pc == 0x1E4718u) {
        ctx->pc = 0x1E4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4714u;
        // 0x1e4718: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E471Cu;
        goto label_1e471c;
    }
    ctx->pc = 0x1E4714u;
    {
        const bool branch_taken_0x1e4714 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4714u;
        // 0x1e4718: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4714) {
            ctx->pc = 0x1E4724u;
            goto label_1e4724;
        }
    }
    ctx->pc = 0x1E471Cu;
label_1e471c:
    // 0x1e471c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1e4720:
    // 0x1e4720: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e4724:
    // 0x1e4724: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e4728:
    if (ctx->pc == 0x1E4728u) {
        ctx->pc = 0x1E4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4724u;
        // 0x1e4728: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E472Cu;
        goto label_1e472c;
    }
    ctx->pc = 0x1E4724u;
    {
        const bool branch_taken_0x1e4724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4724u;
        // 0x1e4728: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4724) {
            ctx->pc = 0x1E4748u;
            goto label_1e4748;
        }
    }
    ctx->pc = 0x1E472Cu;
label_1e472c:
    // 0x1e472c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e472cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4730:
    // 0x1e4730: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1e4730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e4734:
    // 0x1e4734: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4738:
    if (ctx->pc == 0x1E4738u) {
        ctx->pc = 0x1E4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4734u;
        // 0x1e4738: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E473Cu;
        goto label_1e473c;
    }
    ctx->pc = 0x1E4734u;
    {
        const bool branch_taken_0x1e4734 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4734u;
        // 0x1e4738: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4734) {
            ctx->pc = 0x1E4744u;
            goto label_1e4744;
        }
    }
    ctx->pc = 0x1E473Cu;
label_1e473c:
    // 0x1e473c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1e4740:
    // 0x1e4740: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e4744:
    // 0x1e4744: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1e4744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1e4748:
    // 0x1e4748: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e474c:
    if (ctx->pc == 0x1E474Cu) {
        ctx->pc = 0x1E474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4748u;
        // 0x1e474c: 0xa0a21d43  sb          $v0, 0x1D43($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7491), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4750u;
        goto label_1e4750;
    }
    ctx->pc = 0x1E4748u;
    {
        const bool branch_taken_0x1e4748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4748u;
        // 0x1e474c: 0xa0a21d43  sb          $v0, 0x1D43($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7491), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4748) {
            ctx->pc = 0x1E4754u;
            goto label_1e4754;
        }
    }
    ctx->pc = 0x1E4750u;
label_1e4750:
    // 0x1e4750: 0xa0a01d43  sb          $zero, 0x1D43($a1)
    ctx->pc = 0x1e4750u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7491), (uint8_t)GPR_U32(ctx, 0));
label_1e4754:
    // 0x1e4754: 0x240601d7  addiu       $a2, $zero, 0x1D7
    ctx->pc = 0x1e4754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 471));
label_1e4758:
    // 0x1e4758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e475c:
    // 0x1e475c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e475cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4760:
    // 0x1e4760: 0xc066c72  jal         func_19B1C8
label_1e4764:
    if (ctx->pc == 0x1E4764u) {
        ctx->pc = 0x1E4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4760u;
        // 0x1e4764: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4768u;
        goto label_1e4768;
    }
    ctx->pc = 0x1E4760u;
    SET_GPR_U32(ctx, 31, 0x1E4768u);
    ctx->pc = 0x1E4764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4760u;
    // 0x1e4764: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E4760u, 0x1E4768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4768u;
label_1e4768:
    // 0x1e4768: 0x1000007a  b           . + 4 + (0x7A << 2)
label_1e476c:
    if (ctx->pc == 0x1E476Cu) {
        ctx->pc = 0x1E476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4768u;
        // 0x1e476c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4770u;
        goto label_1e4770;
    }
    ctx->pc = 0x1E4768u;
    {
        const bool branch_taken_0x1e4768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4768u;
        // 0x1e476c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4768) {
            ctx->pc = 0x1E4954u;
            goto label_1e4954;
        }
    }
    ctx->pc = 0x1E4770u;
label_1e4770:
    // 0x1e4770: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1e4770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1e4774:
    // 0x1e4774: 0x27838d88  addiu       $v1, $gp, -0x7278
    ctx->pc = 0x1e4774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
label_1e4778:
    // 0x1e4778: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e477c:
    // 0x1e477c: 0x3c08004b  lui         $t0, 0x4B
    ctx->pc = 0x1e477cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)75 << 16));
label_1e4780:
    // 0x1e4780: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e4780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4784:
    // 0x1e4784: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e4784u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4788:
    // 0x1e4788: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e4788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e478c:
    // 0x1e478c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e4790:
    // 0x1e4790: 0x10000029  b           . + 4 + (0x29 << 2)
label_1e4794:
    if (ctx->pc == 0x1E4794u) {
        ctx->pc = 0x1E4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4790u;
        // 0x1e4794: 0x250828a0  addiu       $t0, $t0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4798u;
        goto label_1e4798;
    }
    ctx->pc = 0x1E4790u;
    {
        const bool branch_taken_0x1e4790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4790u;
        // 0x1e4794: 0x250828a0  addiu       $t0, $t0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4790) {
            ctx->pc = 0x1E4838u;
            goto label_1e4838;
        }
    }
    ctx->pc = 0x1E4798u;
label_1e4798:
    // 0x1e4798: 0x8f878db8  lw          $a3, -0x7248($gp)
    ctx->pc = 0x1e4798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e479c:
    // 0x1e479c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1e479cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e47a0:
    // 0x1e47a0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1e47a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e47a4:
    // 0x1e47a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e47a8:
    if (ctx->pc == 0x1E47A8u) {
        ctx->pc = 0x1E47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47A4u;
        // 0x1e47a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47ACu;
        goto label_1e47ac;
    }
    ctx->pc = 0x1E47A4u;
    {
        const bool branch_taken_0x1e47a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47A4u;
        // 0x1e47a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47a4) {
            ctx->pc = 0x1E47D0u;
            goto label_1e47d0;
        }
    }
    ctx->pc = 0x1E47ACu;
label_1e47ac:
    // 0x1e47ac: 0x0  nop
    ctx->pc = 0x1e47acu;
    // NOP
label_1e47b0:
    // 0x1e47b0: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x1e47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1e47b4:
    // 0x1e47b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e47b8:
    // 0x1e47b8: 0x15630003  bne         $t3, $v1, . + 4 + (0x3 << 2)
label_1e47bc:
    if (ctx->pc == 0x1E47BCu) {
        ctx->pc = 0x1E47C0u;
        goto label_1e47c0;
    }
    ctx->pc = 0x1E47B8u;
    {
        const bool branch_taken_0x1e47b8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e47b8) {
            ctx->pc = 0x1E47C8u;
            goto label_1e47c8;
        }
    }
    ctx->pc = 0x1E47C0u;
label_1e47c0:
    // 0x1e47c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e47c4:
    if (ctx->pc == 0x1E47C4u) {
        ctx->pc = 0x1E47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47C0u;
        // 0x1e47c4: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47C8u;
        goto label_1e47c8;
    }
    ctx->pc = 0x1E47C0u;
    {
        const bool branch_taken_0x1e47c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47C0u;
        // 0x1e47c4: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47c0) {
            ctx->pc = 0x1E47DCu;
            goto label_1e47dc;
        }
    }
    ctx->pc = 0x1E47C8u;
label_1e47c8:
    // 0x1e47c8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1e47c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1e47cc:
    // 0x1e47cc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1e47ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_1e47d0:
    // 0x1e47d0: 0x1a7182a  slt         $v1, $t5, $a3
    ctx->pc = 0x1e47d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1e47d4:
    // 0x1e47d4: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1e47d8:
    if (ctx->pc == 0x1E47D8u) {
        ctx->pc = 0x1E47DCu;
        goto label_1e47dc;
    }
    ctx->pc = 0x1E47D4u;
    {
        const bool branch_taken_0x1e47d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e47d4) {
            ctx->pc = 0x1E47ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e47ac;
        }
    }
    ctx->pc = 0x1E47DCu;
label_1e47dc:
    // 0x1e47dc: 0x0  nop
    ctx->pc = 0x1e47dcu;
    // NOP
label_1e47e0:
    // 0x1e47e0: 0x1180000f  beqz        $t4, . + 4 + (0xF << 2)
label_1e47e4:
    if (ctx->pc == 0x1E47E4u) {
        ctx->pc = 0x1E47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47E0u;
        // 0x1e47e4: 0xaa3821  addu        $a3, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47E8u;
        goto label_1e47e8;
    }
    ctx->pc = 0x1E47E0u;
    {
        const bool branch_taken_0x1e47e0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47E0u;
        // 0x1e47e4: 0xaa3821  addu        $a3, $a1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47e0) {
            ctx->pc = 0x1E4820u;
            goto label_1e4820;
        }
    }
    ctx->pc = 0x1E47E8u;
label_1e47e8:
    // 0x1e47e8: 0xa0e60083  sb          $a2, 0x83($a3)
    ctx->pc = 0x1e47e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 131), (uint8_t)GPR_U32(ctx, 6));
label_1e47ec:
    // 0x1e47ec: 0x8f838d84  lw          $v1, -0x727C($gp)
    ctx->pc = 0x1e47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
label_1e47f0:
    // 0x1e47f0: 0x146b0004  bne         $v1, $t3, . + 4 + (0x4 << 2)
label_1e47f4:
    if (ctx->pc == 0x1E47F4u) {
        ctx->pc = 0x1E47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47F0u;
        // 0x1e47f4: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E47F8u;
        goto label_1e47f8;
    }
    ctx->pc = 0x1E47F0u;
    {
        const bool branch_taken_0x1e47f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 11));
        ctx->pc = 0x1E47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47F0u;
        // 0x1e47f4: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47f0) {
            ctx->pc = 0x1E4804u;
            goto label_1e4804;
        }
    }
    ctx->pc = 0x1E47F8u;
label_1e47f8:
    // 0x1e47f8: 0xdc232920  ld          $v1, 0x2920($at)
    ctx->pc = 0x1e47f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 10528)));
label_1e47fc:
    // 0x1e47fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e4800:
    if (ctx->pc == 0x1E4800u) {
        ctx->pc = 0x1E4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47FCu;
        // 0x1e4800: 0xfce30cf0  sd          $v1, 0xCF0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 3312), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4804u;
        goto label_1e4804;
    }
    ctx->pc = 0x1E47FCu;
    {
        const bool branch_taken_0x1e47fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47FCu;
        // 0x1e4800: 0xfce30cf0  sd          $v1, 0xCF0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 3312), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47fc) {
            ctx->pc = 0x1E4814u;
            goto label_1e4814;
        }
    }
    ctx->pc = 0x1E4804u;
label_1e4804:
    // 0x1e4804: 0x0  nop
    ctx->pc = 0x1e4804u;
    // NOP
label_1e4808:
    // 0x1e4808: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e4808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e480c:
    // 0x1e480c: 0xdc232928  ld          $v1, 0x2928($at)
    ctx->pc = 0x1e480cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 10536)));
label_1e4810:
    // 0x1e4810: 0xfce30cf0  sd          $v1, 0xCF0($a3)
    ctx->pc = 0x1e4810u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 3312), GPR_U64(ctx, 3));
label_1e4814:
    // 0x1e4814: 0x0  nop
    ctx->pc = 0x1e4814u;
    // NOP
label_1e4818:
    // 0x1e4818: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e481c:
    if (ctx->pc == 0x1E481Cu) {
        ctx->pc = 0x1E481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4818u;
        // 0x1e481c: 0xa0e60d03  sb          $a2, 0xD03($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3331), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4820u;
        goto label_1e4820;
    }
    ctx->pc = 0x1E4818u;
    {
        const bool branch_taken_0x1e4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4818u;
        // 0x1e481c: 0xa0e60d03  sb          $a2, 0xD03($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3331), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4818) {
            ctx->pc = 0x1E482Cu;
            goto label_1e482c;
        }
    }
    ctx->pc = 0x1E4820u;
label_1e4820:
    // 0x1e4820: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x1e4820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1e4824:
    // 0x1e4824: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x1e4824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
label_1e4828:
    // 0x1e4828: 0xa0600d03  sb          $zero, 0xD03($v1)
    ctx->pc = 0x1e4828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3331), (uint8_t)GPR_U32(ctx, 0));
label_1e482c:
    // 0x1e482c: 0x0  nop
    ctx->pc = 0x1e482cu;
    // NOP
label_1e4830:
    // 0x1e4830: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x1e4830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
label_1e4834:
    // 0x1e4834: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1e4834u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1e4838:
    // 0x1e4838: 0x8f878218  lw          $a3, -0x7DE8($gp)
    ctx->pc = 0x1e4838u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e483c:
    // 0x1e483c: 0x14e20002  bne         $a3, $v0, . + 4 + (0x2 << 2)
label_1e4840:
    if (ctx->pc == 0x1E4840u) {
        ctx->pc = 0x1E4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E483Cu;
        // 0x1e4840: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4844u;
        goto label_1e4844;
    }
    ctx->pc = 0x1E483Cu;
    {
        const bool branch_taken_0x1e483c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E483Cu;
        // 0x1e4840: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e483c) {
            ctx->pc = 0x1E4848u;
            goto label_1e4848;
        }
    }
    ctx->pc = 0x1E4844u;
label_1e4844:
    // 0x1e4844: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1e4844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e4848:
    // 0x1e4848: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x1e4848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e484c:
    // 0x1e484c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
label_1e4850:
    if (ctx->pc == 0x1E4850u) {
        ctx->pc = 0x1E4854u;
        goto label_1e4854;
    }
    ctx->pc = 0x1E484Cu;
    {
        const bool branch_taken_0x1e484c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e484c) {
            ctx->pc = 0x1E4798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4798;
        }
    }
    ctx->pc = 0x1E4854u;
label_1e4854:
    // 0x1e4854: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e4854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e4858:
    // 0x1e4858: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
label_1e485c:
    if (ctx->pc == 0x1E485Cu) {
        ctx->pc = 0x1E485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4858u;
        // 0x1e485c: 0x8f838d84  lw          $v1, -0x727C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4860u;
        goto label_1e4860;
    }
    ctx->pc = 0x1E4858u;
    {
        const bool branch_taken_0x1e4858 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4858u;
        // 0x1e485c: 0x8f838d84  lw          $v1, -0x727C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4858) {
            ctx->pc = 0x1E4868u;
            goto label_1e4868;
        }
    }
    ctx->pc = 0x1E4860u;
label_1e4860:
    // 0x1e4860: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e4864:
    if (ctx->pc == 0x1E4864u) {
        ctx->pc = 0x1E4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4860u;
        // 0x1e4864: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4868u;
        goto label_1e4868;
    }
    ctx->pc = 0x1E4860u;
    {
        const bool branch_taken_0x1e4860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4860u;
        // 0x1e4864: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4860) {
            ctx->pc = 0x1E486Cu;
            goto label_1e486c;
        }
    }
    ctx->pc = 0x1E4868u;
label_1e4868:
    // 0x1e4868: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e4868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e486c:
    // 0x1e486c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e486cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4870:
    // 0x1e4870: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_1e4874:
    if (ctx->pc == 0x1E4874u) {
        ctx->pc = 0x1E4878u;
        goto label_1e4878;
    }
    ctx->pc = 0x1E4870u;
    {
        const bool branch_taken_0x1e4870 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4870) {
            ctx->pc = 0x1E4938u;
            goto label_1e4938;
        }
    }
    ctx->pc = 0x1E4878u;
label_1e4878:
    // 0x1e4878: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e4878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1e487c:
    // 0x1e487c: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1e487cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e4880:
    // 0x1e4880: 0x2442b7b0  addiu       $v0, $v0, -0x4850
    ctx->pc = 0x1e4880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948784));
label_1e4884:
    // 0x1e4884: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1e4884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e4888:
    // 0x1e4888: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e4888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1e488c:
    // 0x1e488c: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4890:
    // 0x1e4890: 0x2442b7b2  addiu       $v0, $v0, -0x484E
    ctx->pc = 0x1e4890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948786));
label_1e4894:
    // 0x1e4894: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e4894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e4898:
    // 0x1e4898: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1e4898u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1e489c:
    // 0x1e489c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1e489cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e48a0:
    // 0x1e48a0: 0x24e3ffe0  addiu       $v1, $a3, -0x20
    ctx->pc = 0x1e48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
label_1e48a4:
    // 0x1e48a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e48a8:
    // 0x1e48a8: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x1e48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_1e48ac:
    // 0x1e48ac: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x1e48acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1e48b0:
    // 0x1e48b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e48b4:
    // 0x1e48b4: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1e48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1e48b8:
    // 0x1e48b8: 0xa4a71990  sh          $a3, 0x1990($a1)
    ctx->pc = 0x1e48b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6544), (uint16_t)GPR_U32(ctx, 7));
label_1e48bc:
    // 0x1e48bc: 0x2502ffe0  addiu       $v0, $t0, -0x20
    ctx->pc = 0x1e48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
label_1e48c0:
    // 0x1e48c0: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1e48c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e48c4:
    // 0x1e48c4: 0x24e77900  addiu       $a3, $a3, 0x7900
    ctx->pc = 0x1e48c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
label_1e48c8:
    // 0x1e48c8: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x1e48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1e48cc:
    // 0x1e48cc: 0xa4a71992  sh          $a3, 0x1992($a1)
    ctx->pc = 0x1e48ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6546), (uint16_t)GPR_U32(ctx, 7));
label_1e48d0:
    // 0x1e48d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e48d4:
    // 0x1e48d4: 0xaca61994  sw          $a2, 0x1994($a1)
    ctx->pc = 0x1e48d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6548), GPR_U32(ctx, 6));
label_1e48d8:
    // 0x1e48d8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1e48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1e48dc:
    // 0x1e48dc: 0xa4a319a0  sh          $v1, 0x19A0($a1)
    ctx->pc = 0x1e48dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6560), (uint16_t)GPR_U32(ctx, 3));
label_1e48e0:
    // 0x1e48e0: 0xa4a219a2  sh          $v0, 0x19A2($a1)
    ctx->pc = 0x1e48e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6562), (uint16_t)GPR_U32(ctx, 2));
label_1e48e4:
    // 0x1e48e4: 0xaca619a4  sw          $a2, 0x19A4($a1)
    ctx->pc = 0x1e48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6564), GPR_U32(ctx, 6));
label_1e48e8:
    // 0x1e48e8: 0x8f838d80  lw          $v1, -0x7280($gp)
    ctx->pc = 0x1e48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937984)));
label_1e48ec:
    // 0x1e48ec: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1e48ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1e48f0:
    // 0x1e48f0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e48f4:
    if (ctx->pc == 0x1E48F4u) {
        ctx->pc = 0x1E48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48F0u;
        // 0x1e48f4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E48F8u;
        goto label_1e48f8;
    }
    ctx->pc = 0x1E48F0u;
    {
        const bool branch_taken_0x1e48f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E48F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48F0u;
        // 0x1e48f4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48f0) {
            ctx->pc = 0x1E4914u;
            goto label_1e4914;
        }
    }
    ctx->pc = 0x1E48F8u;
label_1e48f8:
    // 0x1e48f8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1e48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1e48fc:
    // 0x1e48fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4900:
    if (ctx->pc == 0x1E4900u) {
        ctx->pc = 0x1E4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48FCu;
        // 0x1e4900: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4904u;
        goto label_1e4904;
    }
    ctx->pc = 0x1E48FCu;
    {
        const bool branch_taken_0x1e48fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48FCu;
        // 0x1e4900: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48fc) {
            ctx->pc = 0x1E490Cu;
            goto label_1e490c;
        }
    }
    ctx->pc = 0x1E4904u;
label_1e4904:
    // 0x1e4904: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e4904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1e4908:
    // 0x1e4908: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4908u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e490c:
    // 0x1e490c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e4910:
    if (ctx->pc == 0x1E4910u) {
        ctx->pc = 0x1E4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E490Cu;
        // 0x1e4910: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4914u;
        goto label_1e4914;
    }
    ctx->pc = 0x1E490Cu;
    {
        const bool branch_taken_0x1e490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E490Cu;
        // 0x1e4910: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e490c) {
            ctx->pc = 0x1E4930u;
            goto label_1e4930;
        }
    }
    ctx->pc = 0x1E4914u;
label_1e4914:
    // 0x1e4914: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e4914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4918:
    // 0x1e4918: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1e4918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e491c:
    // 0x1e491c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e4920:
    if (ctx->pc == 0x1E4920u) {
        ctx->pc = 0x1E4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E491Cu;
        // 0x1e4920: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4924u;
        goto label_1e4924;
    }
    ctx->pc = 0x1E491Cu;
    {
        const bool branch_taken_0x1e491c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E491Cu;
        // 0x1e4920: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e491c) {
            ctx->pc = 0x1E492Cu;
            goto label_1e492c;
        }
    }
    ctx->pc = 0x1E4924u;
label_1e4924:
    // 0x1e4924: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e4924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1e4928:
    // 0x1e4928: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1e492c:
    // 0x1e492c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1e492cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1e4930:
    // 0x1e4930: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e4934:
    if (ctx->pc == 0x1E4934u) {
        ctx->pc = 0x1E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4930u;
        // 0x1e4934: 0xa0a21983  sb          $v0, 0x1983($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6531), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4938u;
        goto label_1e4938;
    }
    ctx->pc = 0x1E4930u;
    {
        const bool branch_taken_0x1e4930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4930u;
        // 0x1e4934: 0xa0a21983  sb          $v0, 0x1983($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6531), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4930) {
            ctx->pc = 0x1E493Cu;
            goto label_1e493c;
        }
    }
    ctx->pc = 0x1E4938u;
label_1e4938:
    // 0x1e4938: 0xa0a01983  sb          $zero, 0x1983($a1)
    ctx->pc = 0x1e4938u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6531), (uint8_t)GPR_U32(ctx, 0));
label_1e493c:
    // 0x1e493c: 0x2406019b  addiu       $a2, $zero, 0x19B
    ctx->pc = 0x1e493cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
label_1e4940:
    // 0x1e4940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4944:
    // 0x1e4944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e4944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4948:
    // 0x1e4948: 0xc066c72  jal         func_19B1C8
label_1e494c:
    if (ctx->pc == 0x1E494Cu) {
        ctx->pc = 0x1E494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4948u;
        // 0x1e494c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4950u;
        goto label_1e4950;
    }
    ctx->pc = 0x1E4948u;
    SET_GPR_U32(ctx, 31, 0x1E4950u);
    ctx->pc = 0x1E494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4948u;
    // 0x1e494c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E4948u, 0x1E4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4950u;
label_1e4950:
    // 0x1e4950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4954:
    // 0x1e4954: 0x3e00008  jr          $ra
label_1e4958:
    if (ctx->pc == 0x1E4958u) {
        ctx->pc = 0x1E4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4954u;
        // 0x1e4958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E495Cu;
        goto label_1e495c;
    }
    ctx->pc = 0x1E4954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4954u;
        // 0x1e4958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E495Cu;
label_1e495c:
    // 0x1e495c: 0x0  nop
    ctx->pc = 0x1e495cu;
    // NOP
label_1e4960:
    // 0x1e4960: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e4960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e4964:
    // 0x1e4964: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1e4964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1e4968:
    // 0x1e4968: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e4968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1e496c:
    // 0x1e496c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e4970:
    // 0x1e4970: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1e4970u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1e4974:
    // 0x1e4974: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e4974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e4978:
    // 0x1e4978: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1e4978u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e497c:
    // 0x1e497c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e4980:
    // 0x1e4980: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1e4980u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e4984:
    // 0x1e4984: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e4984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e4988:
    // 0x1e4988: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1e4988u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e498c:
    // 0x1e498c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e498cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e4990:
    // 0x1e4990: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e4990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4994:
    // 0x1e4994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4998:
    // 0x1e4998: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e4998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e499c:
    // 0x1e499c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e499cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e49a0:
    // 0x1e49a0: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1e49a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1e49a4:
    // 0x1e49a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e49a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e49a8:
    // 0x1e49a8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1e49a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e49ac:
    // 0x1e49ac: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1e49acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e49b0:
    // 0x1e49b0: 0xc0793ac  jal         func_1E4EB0
label_1e49b4:
    if (ctx->pc == 0x1E49B4u) {
        ctx->pc = 0x1E49B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49B0u;
        // 0x1e49b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49B8u;
        goto label_1e49b8;
    }
    ctx->pc = 0x1E49B0u;
    SET_GPR_U32(ctx, 31, 0x1E49B8u);
    ctx->pc = 0x1E49B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E49B0u;
    // 0x1e49b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4EB0u;
    { ctx->pc = 0x1e4eb0; return; }
    ctx->pc = 0x1E49B8u;
label_1e49b8:
    // 0x1e49b8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e49b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e49bc:
    // 0x1e49bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e49bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e49c0:
    // 0x1e49c0: 0xc04e188  jal         func_138620
label_1e49c4:
    if (ctx->pc == 0x1E49C4u) {
        ctx->pc = 0x1E49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E49C0u;
        // 0x1e49c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E49C8u;
        goto label_1e49c8;
    }
    ctx->pc = 0x1E49C0u;
    SET_GPR_U32(ctx, 31, 0x1E49C8u);
    ctx->pc = 0x1E49C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E49C0u;
    // 0x1e49c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1E49C0u, 0x1E49C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49C8u;
label_1e49c8:
    // 0x1e49c8: 0xc04e198  jal         func_138660
label_1e49cc:
    if (ctx->pc == 0x1E49CCu) {
        ctx->pc = 0x1E49D0u;
        goto label_1e49d0;
    }
    ctx->pc = 0x1E49C8u;
    SET_GPR_U32(ctx, 31, 0x1E49D0u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E49C8u, 0x1E49D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49D0u;
label_1e49d0:
    // 0x1e49d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1e49d4:
    if (ctx->pc == 0x1E49D4u) {
        ctx->pc = 0x1E49D8u;
        goto label_1e49d8;
    }
    ctx->pc = 0x1E49D0u;
    {
        const bool branch_taken_0x1e49d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e49d0) {
            ctx->pc = 0x1E4A00u;
            goto label_1e4a00;
        }
    }
    ctx->pc = 0x1E49D8u;
label_1e49d8:
    // 0x1e49d8: 0xc0799a0  jal         func_1E6680
label_1e49dc:
    if (ctx->pc == 0x1E49DCu) {
        ctx->pc = 0x1E49E0u;
        goto label_1e49e0;
    }
    ctx->pc = 0x1E49D8u;
    SET_GPR_U32(ctx, 31, 0x1E49E0u);
    ctx->pc = 0x1E6680u;
    { ctx->pc = 0x1e6680; return; }
    ctx->pc = 0x1E49E0u;
label_1e49e0:
    // 0x1e49e0: 0xc04e198  jal         func_138660
label_1e49e4:
    if (ctx->pc == 0x1E49E4u) {
        ctx->pc = 0x1E49E8u;
        goto label_1e49e8;
    }
    ctx->pc = 0x1E49E0u;
    SET_GPR_U32(ctx, 31, 0x1E49E8u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E49E0u, 0x1E49E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E49E8u;
label_1e49e8:
    // 0x1e49e8: 0x0  nop
    ctx->pc = 0x1e49e8u;
    // NOP
label_1e49ec:
    // 0x1e49ec: 0x0  nop
    ctx->pc = 0x1e49ecu;
    // NOP
label_1e49f0:
    // 0x1e49f0: 0x0  nop
    ctx->pc = 0x1e49f0u;
    // NOP
label_1e49f4:
    // 0x1e49f4: 0x0  nop
    ctx->pc = 0x1e49f4u;
    // NOP
label_1e49f8:
    // 0x1e49f8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1e49fc:
    if (ctx->pc == 0x1E49FCu) {
        ctx->pc = 0x1E4A00u;
        goto label_1e4a00;
    }
    ctx->pc = 0x1E49F8u;
    {
        const bool branch_taken_0x1e49f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e49f8) {
            ctx->pc = 0x1E49D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e49d8;
        }
    }
    ctx->pc = 0x1E4A00u;
label_1e4a00:
    // 0x1e4a00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4a04:
    // 0x1e4a04: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
label_1e4a08:
    if (ctx->pc == 0x1E4A08u) {
        ctx->pc = 0x1E4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A04u;
        // 0x1e4a08: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A0Cu;
        goto label_1e4a0c;
    }
    ctx->pc = 0x1E4A04u;
    {
        const bool branch_taken_0x1e4a04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A04u;
        // 0x1e4a08: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a04) {
            ctx->pc = 0x1E4A10u;
            goto label_1e4a10;
        }
    }
    ctx->pc = 0x1E4A0Cu;
label_1e4a0c:
    // 0x1e4a0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a10:
    // 0x1e4a10: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x1e4a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e4a14:
    // 0x1e4a14: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
label_1e4a18:
    if (ctx->pc == 0x1E4A18u) {
        ctx->pc = 0x1E4A1Cu;
        goto label_1e4a1c;
    }
    ctx->pc = 0x1E4A14u;
    {
        const bool branch_taken_0x1e4a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a14) {
            ctx->pc = 0x1E4BA8u;
            goto label_1e4ba8;
        }
    }
    ctx->pc = 0x1E4A1Cu;
label_1e4a1c:
    // 0x1e4a1c: 0x8f858ea0  lw          $a1, -0x7160($gp)
    ctx->pc = 0x1e4a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938272)));
label_1e4a20:
    // 0x1e4a20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e4a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a24:
    // 0x1e4a24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e4a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a28:
    // 0x1e4a28: 0xc07955c  jal         func_1E5570
label_1e4a2c:
    if (ctx->pc == 0x1E4A2Cu) {
        ctx->pc = 0x1E4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A28u;
        // 0x1e4a2c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A30u;
        goto label_1e4a30;
    }
    ctx->pc = 0x1E4A28u;
    SET_GPR_U32(ctx, 31, 0x1E4A30u);
    ctx->pc = 0x1E4A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A28u;
    // 0x1e4a2c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5570u;
    { ctx->pc = 0x1e5570; return; }
    ctx->pc = 0x1E4A30u;
label_1e4a30:
    // 0x1e4a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4a34:
    // 0x1e4a34: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_1e4a38:
    if (ctx->pc == 0x1E4A38u) {
        ctx->pc = 0x1E4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A34u;
        // 0x1e4a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A3Cu;
        goto label_1e4a3c;
    }
    ctx->pc = 0x1E4A34u;
    {
        const bool branch_taken_0x1e4a34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A34u;
        // 0x1e4a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a34) {
            ctx->pc = 0x1E4A70u;
            goto label_1e4a70;
        }
    }
    ctx->pc = 0x1E4A3Cu;
label_1e4a3c:
    // 0x1e4a3c: 0xc07b1ac  jal         func_1EC6B0
label_1e4a40:
    if (ctx->pc == 0x1E4A40u) {
        ctx->pc = 0x1E4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A3Cu;
        // 0x1e4a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A44u;
        goto label_1e4a44;
    }
    ctx->pc = 0x1E4A3Cu;
    SET_GPR_U32(ctx, 31, 0x1E4A44u);
    ctx->pc = 0x1E4A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A3Cu;
    // 0x1e4a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    { ctx->pc = 0x1ec6b0; return; }
    ctx->pc = 0x1E4A44u;
label_1e4a44:
    // 0x1e4a44: 0x8f848ea0  lw          $a0, -0x7160($gp)
    ctx->pc = 0x1e4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938272)));
label_1e4a48:
    // 0x1e4a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4a4c:
    // 0x1e4a4c: 0xaf828e58  sw          $v0, -0x71A8($gp)
    ctx->pc = 0x1e4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938200), GPR_U32(ctx, 2));
label_1e4a50:
    // 0x1e4a50: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e4a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1e4a54:
    // 0x1e4a54: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1e4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_1e4a58:
    // 0x1e4a58: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1e4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e4a5c:
    // 0x1e4a5c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e4a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e4a60:
    // 0x1e4a60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4a64:
    // 0x1e4a64: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1e4a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1e4a68:
    // 0x1e4a68: 0xaf828e54  sw          $v0, -0x71AC($gp)
    ctx->pc = 0x1e4a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938196), GPR_U32(ctx, 2));
label_1e4a6c:
    // 0x1e4a6c: 0xaf808e50  sw          $zero, -0x71B0($gp)
    ctx->pc = 0x1e4a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938192), GPR_U32(ctx, 0));
label_1e4a70:
    // 0x1e4a70: 0x16200016  bnez        $s1, . + 4 + (0x16 << 2)
label_1e4a74:
    if (ctx->pc == 0x1E4A74u) {
        ctx->pc = 0x1E4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A70u;
        // 0x1e4a74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A78u;
        goto label_1e4a78;
    }
    ctx->pc = 0x1E4A70u;
    {
        const bool branch_taken_0x1e4a70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A70u;
        // 0x1e4a74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a70) {
            ctx->pc = 0x1E4ACCu;
            goto label_1e4acc;
        }
    }
    ctx->pc = 0x1E4A78u;
label_1e4a78:
    // 0x1e4a78: 0x12820014  beq         $s4, $v0, . + 4 + (0x14 << 2)
label_1e4a7c:
    if (ctx->pc == 0x1E4A7Cu) {
        ctx->pc = 0x1E4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A78u;
        // 0x1e4a7c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A80u;
        goto label_1e4a80;
    }
    ctx->pc = 0x1E4A78u;
    {
        const bool branch_taken_0x1e4a78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A78u;
        // 0x1e4a7c: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a78) {
            ctx->pc = 0x1E4ACCu;
            goto label_1e4acc;
        }
    }
    ctx->pc = 0x1E4A80u;
label_1e4a80:
    // 0x1e4a80: 0x8f838e9c  lw          $v1, -0x7164($gp)
    ctx->pc = 0x1e4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938268)));
label_1e4a84:
    // 0x1e4a84: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x1e4a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_1e4a88:
    // 0x1e4a88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a8c:
    // 0x1e4a8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a90:
    // 0x1e4a90: 0x24a53120  addiu       $a1, $a1, 0x3120
    ctx->pc = 0x1e4a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12576));
label_1e4a94:
    // 0x1e4a94: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e4a98:
    if (ctx->pc == 0x1E4A98u) {
        ctx->pc = 0x1E4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A94u;
        // 0x1e4a98: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A9Cu;
        goto label_1e4a9c;
    }
    ctx->pc = 0x1E4A94u;
    {
        const bool branch_taken_0x1e4a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A94u;
        // 0x1e4a98: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a94) {
            ctx->pc = 0x1E4AC0u;
            goto label_1e4ac0;
        }
    }
    ctx->pc = 0x1E4A9Cu;
label_1e4a9c:
    // 0x1e4a9c: 0x0  nop
    ctx->pc = 0x1e4a9cu;
    // NOP
label_1e4aa0:
    // 0x1e4aa0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1e4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1e4aa4:
    // 0x1e4aa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4aa8:
    // 0x1e4aa8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_1e4aac:
    if (ctx->pc == 0x1E4AACu) {
        ctx->pc = 0x1E4AB0u;
        goto label_1e4ab0;
    }
    ctx->pc = 0x1E4AA8u;
    {
        const bool branch_taken_0x1e4aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e4aa8) {
            ctx->pc = 0x1E4AB8u;
            goto label_1e4ab8;
        }
    }
    ctx->pc = 0x1E4AB0u;
label_1e4ab0:
    // 0x1e4ab0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e4ab4:
    if (ctx->pc == 0x1E4AB4u) {
        ctx->pc = 0x1E4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AB0u;
        // 0x1e4ab4: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AB8u;
        goto label_1e4ab8;
    }
    ctx->pc = 0x1E4AB0u;
    {
        const bool branch_taken_0x1e4ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AB0u;
        // 0x1e4ab4: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ab0) {
            ctx->pc = 0x1E4ACCu;
            goto label_1e4acc;
        }
    }
    ctx->pc = 0x1E4AB8u;
label_1e4ab8:
    // 0x1e4ab8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1e4ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_1e4abc:
    // 0x1e4abc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e4abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e4ac0:
    // 0x1e4ac0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1e4ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e4ac4:
    // 0x1e4ac4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1e4ac8:
    if (ctx->pc == 0x1E4AC8u) {
        ctx->pc = 0x1E4ACCu;
        goto label_1e4acc;
    }
    ctx->pc = 0x1E4AC4u;
    {
        const bool branch_taken_0x1e4ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ac4) {
            ctx->pc = 0x1E4A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a9c;
        }
    }
    ctx->pc = 0x1E4ACCu;
label_1e4acc:
    // 0x1e4acc: 0x0  nop
    ctx->pc = 0x1e4accu;
    // NOP
label_1e4ad0:
    // 0x1e4ad0: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x1e4ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e4ad4:
    // 0x1e4ad4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e4ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4ad8:
    // 0x1e4ad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4adc:
    // 0x1e4adc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e4adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ae0:
    // 0x1e4ae0: 0xc079884  jal         func_1E6210
label_1e4ae4:
    if (ctx->pc == 0x1E4AE4u) {
        ctx->pc = 0x1E4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AE0u;
        // 0x1e4ae4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AE8u;
        goto label_1e4ae8;
    }
    ctx->pc = 0x1E4AE0u;
    SET_GPR_U32(ctx, 31, 0x1E4AE8u);
    ctx->pc = 0x1E4AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AE0u;
    // 0x1e4ae4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6210u;
    { ctx->pc = 0x1e6210; return; }
    ctx->pc = 0x1E4AE8u;
label_1e4ae8:
    // 0x1e4ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4aec:
    // 0x1e4aec: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x1e4aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_1e4af0:
    // 0x1e4af0: 0xc0796d4  jal         func_1E5B50
label_1e4af4:
    if (ctx->pc == 0x1E4AF4u) {
        ctx->pc = 0x1E4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AF0u;
        // 0x1e4af4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AF8u;
        goto label_1e4af8;
    }
    ctx->pc = 0x1E4AF0u;
    SET_GPR_U32(ctx, 31, 0x1E4AF8u);
    ctx->pc = 0x1E4AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AF0u;
    // 0x1e4af4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5B50u;
    { ctx->pc = 0x1e5b50; return; }
    ctx->pc = 0x1E4AF8u;
label_1e4af8:
    // 0x1e4af8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4afc:
    // 0x1e4afc: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1e4b00:
    if (ctx->pc == 0x1E4B00u) {
        ctx->pc = 0x1E4B04u;
        goto label_1e4b04;
    }
    ctx->pc = 0x1E4AFCu;
    {
        const bool branch_taken_0x1e4afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4afc) {
            ctx->pc = 0x1E4B30u;
            goto label_1e4b30;
        }
    }
    ctx->pc = 0x1E4B04u;
label_1e4b04:
    // 0x1e4b04: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x1e4b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e4b08:
    // 0x1e4b08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e4b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b0c:
    // 0x1e4b0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b10:
    // 0x1e4b10: 0xc079884  jal         func_1E6210
label_1e4b14:
    if (ctx->pc == 0x1E4B14u) {
        ctx->pc = 0x1E4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B10u;
        // 0x1e4b14: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B18u;
        goto label_1e4b18;
    }
    ctx->pc = 0x1E4B10u;
    SET_GPR_U32(ctx, 31, 0x1E4B18u);
    ctx->pc = 0x1E4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B10u;
    // 0x1e4b14: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6210u;
    { ctx->pc = 0x1e6210; return; }
    ctx->pc = 0x1E4B18u;
label_1e4b18:
    // 0x1e4b18: 0x8f838e80  lw          $v1, -0x7180($gp)
    ctx->pc = 0x1e4b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938240)));
label_1e4b1c:
    // 0x1e4b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4b20:
    // 0x1e4b20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e4b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b24:
    // 0x1e4b24: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1e4b24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1e4b28:
    // 0x1e4b28: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
label_1e4b2c:
    if (ctx->pc == 0x1E4B2Cu) {
        ctx->pc = 0x1E4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B28u;
        // 0x1e4b2c: 0xaf828e80  sw          $v0, -0x7180($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B30u;
        goto label_1e4b30;
    }
    ctx->pc = 0x1E4B28u;
    {
        const bool branch_taken_0x1e4b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B28u;
        // 0x1e4b2c: 0xaf828e80  sw          $v0, -0x7180($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b28) {
            ctx->pc = 0x1E4A1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a1c;
        }
    }
    ctx->pc = 0x1E4B30u;
label_1e4b30:
    // 0x1e4b30: 0x8f828e94  lw          $v0, -0x716C($gp)
    ctx->pc = 0x1e4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
label_1e4b34:
    // 0x1e4b34: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1e4b38:
    if (ctx->pc == 0x1E4B38u) {
        ctx->pc = 0x1E4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B34u;
        // 0x1e4b38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B3Cu;
        goto label_1e4b3c;
    }
    ctx->pc = 0x1E4B34u;
    {
        const bool branch_taken_0x1e4b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B34u;
        // 0x1e4b38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b34) {
            ctx->pc = 0x1E4BA8u;
            goto label_1e4ba8;
        }
    }
    ctx->pc = 0x1E4B3Cu;
label_1e4b3c:
    // 0x1e4b3c: 0x1662001a  bne         $s3, $v0, . + 4 + (0x1A << 2)
label_1e4b40:
    if (ctx->pc == 0x1E4B40u) {
        ctx->pc = 0x1E4B44u;
        goto label_1e4b44;
    }
    ctx->pc = 0x1E4B3Cu;
    {
        const bool branch_taken_0x1e4b3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e4b3c) {
            ctx->pc = 0x1E4BA8u;
            goto label_1e4ba8;
        }
    }
    ctx->pc = 0x1E4B44u;
label_1e4b44:
    // 0x1e4b44: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
label_1e4b48:
    if (ctx->pc == 0x1E4B48u) {
        ctx->pc = 0x1E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B44u;
        // 0x1e4b48: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B4Cu;
        goto label_1e4b4c;
    }
    ctx->pc = 0x1E4B44u;
    {
        const bool branch_taken_0x1e4b44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B44u;
        // 0x1e4b48: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b44) {
            ctx->pc = 0x1E4B98u;
            goto label_1e4b98;
        }
    }
    ctx->pc = 0x1E4B4Cu;
label_1e4b4c:
    // 0x1e4b4c: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
label_1e4b50:
    if (ctx->pc == 0x1E4B50u) {
        ctx->pc = 0x1E4B54u;
        goto label_1e4b54;
    }
    ctx->pc = 0x1E4B4Cu;
    {
        const bool branch_taken_0x1e4b4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4b4c) {
            ctx->pc = 0x1E4B80u;
            goto label_1e4b80;
        }
    }
    ctx->pc = 0x1E4B54u;
label_1e4b54:
    // 0x1e4b54: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1e4b58:
    // 0x1e4b58: 0x12820009  beq         $s4, $v0, . + 4 + (0x9 << 2)
label_1e4b5c:
    if (ctx->pc == 0x1E4B5Cu) {
        ctx->pc = 0x1E4B60u;
        goto label_1e4b60;
    }
    ctx->pc = 0x1E4B58u;
    {
        const bool branch_taken_0x1e4b58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e4b58) {
            ctx->pc = 0x1E4B80u;
            goto label_1e4b80;
        }
    }
    ctx->pc = 0x1E4B60u;
label_1e4b60:
    // 0x1e4b60: 0xc07b1a8  jal         func_1EC6A0
label_1e4b64:
    if (ctx->pc == 0x1E4B64u) {
        ctx->pc = 0x1E4B68u;
        goto label_1e4b68;
    }
    ctx->pc = 0x1E4B60u;
    SET_GPR_U32(ctx, 31, 0x1E4B68u);
    ctx->pc = 0x1EC6A0u;
    { ctx->pc = 0x1ec6a0; return; }
    ctx->pc = 0x1E4B68u;
label_1e4b68:
    // 0x1e4b68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e4b6c:
    if (ctx->pc == 0x1E4B6Cu) {
        ctx->pc = 0x1E4B70u;
        goto label_1e4b70;
    }
    ctx->pc = 0x1E4B68u;
    {
        const bool branch_taken_0x1e4b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b68) {
            ctx->pc = 0x1E4B80u;
            goto label_1e4b80;
        }
    }
    ctx->pc = 0x1E4B70u;
label_1e4b70:
    // 0x1e4b70: 0xc07b1a4  jal         func_1EC690
label_1e4b74:
    if (ctx->pc == 0x1E4B74u) {
        ctx->pc = 0x1E4B78u;
        goto label_1e4b78;
    }
    ctx->pc = 0x1E4B70u;
    SET_GPR_U32(ctx, 31, 0x1E4B78u);
    ctx->pc = 0x1EC690u;
    { ctx->pc = 0x1ec690; return; }
    ctx->pc = 0x1E4B78u;
label_1e4b78:
    // 0x1e4b78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e4b7c:
    if (ctx->pc == 0x1E4B7Cu) {
        ctx->pc = 0x1E4B80u;
        goto label_1e4b80;
    }
    ctx->pc = 0x1E4B78u;
    {
        const bool branch_taken_0x1e4b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4b78) {
            ctx->pc = 0x1E4BA8u;
            goto label_1e4ba8;
        }
    }
    ctx->pc = 0x1E4B80u;
label_1e4b80:
    // 0x1e4b80: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x1e4b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1e4b84:
    // 0x1e4b84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e4b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b88:
    // 0x1e4b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4b8c:
    // 0x1e4b8c: 0xc079884  jal         func_1E6210
label_1e4b90:
    if (ctx->pc == 0x1E4B90u) {
        ctx->pc = 0x1E4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B8Cu;
        // 0x1e4b90: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4B94u;
        goto label_1e4b94;
    }
    ctx->pc = 0x1E4B8Cu;
    SET_GPR_U32(ctx, 31, 0x1E4B94u);
    ctx->pc = 0x1E4B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B8Cu;
    // 0x1e4b90: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6210u;
    { ctx->pc = 0x1e6210; return; }
    ctx->pc = 0x1E4B94u;
label_1e4b94:
    // 0x1e4b94: 0xaf808e80  sw          $zero, -0x7180($gp)
    ctx->pc = 0x1e4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938240), GPR_U32(ctx, 0));
label_1e4b98:
    // 0x1e4b98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e4b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e4b9c:
    // 0x1e4b9c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e4b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e4ba0:
    // 0x1e4ba0: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_1e4ba4:
    if (ctx->pc == 0x1E4BA4u) {
        ctx->pc = 0x1E4BA8u;
        goto label_1e4ba8;
    }
    ctx->pc = 0x1E4BA0u;
    {
        const bool branch_taken_0x1e4ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ba0) {
            ctx->pc = 0x1E4A1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4a1c;
        }
    }
    ctx->pc = 0x1E4BA8u;
label_1e4ba8:
    // 0x1e4ba8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e4ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e4bac:
    // 0x1e4bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4bb0:
    // 0x1e4bb0: 0xc04e188  jal         func_138620
label_1e4bb4:
    if (ctx->pc == 0x1E4BB4u) {
        ctx->pc = 0x1E4BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4BB0u;
        // 0x1e4bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4BB8u;
        goto label_1e4bb8;
    }
    ctx->pc = 0x1E4BB0u;
    SET_GPR_U32(ctx, 31, 0x1E4BB8u);
    ctx->pc = 0x1E4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4BB0u;
    // 0x1e4bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1E4BB0u, 0x1E4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BB8u;
label_1e4bb8:
    // 0x1e4bb8: 0xc04e198  jal         func_138660
label_1e4bbc:
    if (ctx->pc == 0x1E4BBCu) {
        ctx->pc = 0x1E4BC0u;
        goto label_1e4bc0;
    }
    ctx->pc = 0x1E4BB8u;
    SET_GPR_U32(ctx, 31, 0x1E4BC0u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E4BB8u, 0x1E4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BC0u;
label_1e4bc0:
    // 0x1e4bc0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1e4bc4:
    if (ctx->pc == 0x1E4BC4u) {
        ctx->pc = 0x1E4BC8u;
        goto label_1e4bc8;
    }
    ctx->pc = 0x1E4BC0u;
    {
        const bool branch_taken_0x1e4bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bc0) {
            ctx->pc = 0x1E4BF0u;
            goto label_1e4bf0;
        }
    }
    ctx->pc = 0x1E4BC8u;
label_1e4bc8:
    // 0x1e4bc8: 0xc0799a0  jal         func_1E6680
label_1e4bcc:
    if (ctx->pc == 0x1E4BCCu) {
        ctx->pc = 0x1E4BD0u;
        goto label_1e4bd0;
    }
    ctx->pc = 0x1E4BC8u;
    SET_GPR_U32(ctx, 31, 0x1E4BD0u);
    ctx->pc = 0x1E6680u;
    { ctx->pc = 0x1e6680; return; }
    ctx->pc = 0x1E4BD0u;
label_1e4bd0:
    // 0x1e4bd0: 0xc04e198  jal         func_138660
label_1e4bd4:
    if (ctx->pc == 0x1E4BD4u) {
        ctx->pc = 0x1E4BD8u;
        goto label_1e4bd8;
    }
    ctx->pc = 0x1E4BD0u;
    SET_GPR_U32(ctx, 31, 0x1E4BD8u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E4BD0u, 0x1E4BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4BD8u;
label_1e4bd8:
    // 0x1e4bd8: 0x0  nop
    ctx->pc = 0x1e4bd8u;
    // NOP
label_1e4bdc:
    // 0x1e4bdc: 0x0  nop
    ctx->pc = 0x1e4bdcu;
    // NOP
label_1e4be0:
    // 0x1e4be0: 0x0  nop
    ctx->pc = 0x1e4be0u;
    // NOP
label_1e4be4:
    // 0x1e4be4: 0x0  nop
    ctx->pc = 0x1e4be4u;
    // NOP
label_1e4be8:
    // 0x1e4be8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_1e4bec:
    if (ctx->pc == 0x1E4BECu) {
        ctx->pc = 0x1E4BF0u;
        goto label_1e4bf0;
    }
    ctx->pc = 0x1E4BE8u;
    {
        const bool branch_taken_0x1e4be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4be8) {
            ctx->pc = 0x1E4BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4bc8;
        }
    }
    ctx->pc = 0x1E4BF0u;
label_1e4bf0:
    // 0x1e4bf0: 0x8f828e94  lw          $v0, -0x716C($gp)
    ctx->pc = 0x1e4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
label_1e4bf4:
    // 0x1e4bf4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1e4bf8:
    if (ctx->pc == 0x1E4BF8u) {
        ctx->pc = 0x1E4BFCu;
        goto label_1e4bfc;
    }
    ctx->pc = 0x1E4BF4u;
    {
        const bool branch_taken_0x1e4bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4bf4) {
            ctx->pc = 0x1E4C1Cu;
            goto label_1e4c1c;
        }
    }
    ctx->pc = 0x1E4BFCu;
label_1e4bfc:
    // 0x1e4bfc: 0x8f828ea0  lw          $v0, -0x7160($gp)
    ctx->pc = 0x1e4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938272)));
label_1e4c00:
    // 0x1e4c00: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1e4c00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1e4c04:
    // 0x1e4c04: 0x8f828ea4  lw          $v0, -0x715C($gp)
    ctx->pc = 0x1e4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938276)));
label_1e4c08:
    // 0x1e4c08: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1e4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1e4c0c:
    // 0x1e4c0c: 0x8f828e88  lw          $v0, -0x7178($gp)
    ctx->pc = 0x1e4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938248)));
label_1e4c10:
    // 0x1e4c10: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1e4c10u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_1e4c14:
    // 0x1e4c14: 0x8f828e8c  lw          $v0, -0x7174($gp)
    ctx->pc = 0x1e4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938252)));
label_1e4c18:
    // 0x1e4c18: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1e4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_1e4c1c:
    // 0x1e4c1c: 0xc060258  jal         func_180960
label_1e4c20:
    if (ctx->pc == 0x1E4C20u) {
        ctx->pc = 0x1E4C24u;
        goto label_1e4c24;
    }
    ctx->pc = 0x1E4C1Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C24u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E4C1Cu, 0x1E4C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C24u;
label_1e4c24:
    // 0x1e4c24: 0xc060258  jal         func_180960
label_1e4c28:
    if (ctx->pc == 0x1E4C28u) {
        ctx->pc = 0x1E4C2Cu;
        goto label_1e4c2c;
    }
    ctx->pc = 0x1E4C24u;
    SET_GPR_U32(ctx, 31, 0x1E4C2Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E4C24u, 0x1E4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4C2Cu;
label_1e4c2c:
    // 0x1e4c2c: 0xc079320  jal         func_1E4C80
label_1e4c30:
    if (ctx->pc == 0x1E4C30u) {
        ctx->pc = 0x1E4C34u;
        goto label_1e4c34;
    }
    ctx->pc = 0x1E4C2Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C34u);
    ctx->pc = 0x1E4C80u;
    goto label_1e4c80;
    ctx->pc = 0x1E4C34u;
label_1e4c34:
    // 0x1e4c34: 0x8f848e94  lw          $a0, -0x716C($gp)
    ctx->pc = 0x1e4c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938260)));
label_1e4c38:
    // 0x1e4c38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e4c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4c3c:
    // 0x1e4c3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1e4c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1e4c40:
    // 0x1e4c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4c44:
    // 0x1e4c44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e4c44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1e4c48:
    // 0x1e4c48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e4c48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e4c4c:
    // 0x1e4c4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e4c4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e4c50:
    // 0x1e4c50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e4c50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e4c54:
    // 0x1e4c54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4c58:
    // 0x1e4c58: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1e4c58u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1e4c5c:
    // 0x1e4c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4c60:
    // 0x1e4c60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e4c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4c64:
    // 0x1e4c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4c68:
    // 0x1e4c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4c6c:
    // 0x1e4c6c: 0x3e00008  jr          $ra
label_1e4c70:
    if (ctx->pc == 0x1E4C70u) {
        ctx->pc = 0x1E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C6Cu;
        // 0x1e4c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4C74u;
        goto label_1e4c74;
    }
    ctx->pc = 0x1E4C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4C6Cu;
        // 0x1e4c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4C74u;
label_1e4c74:
    // 0x1e4c74: 0x0  nop
    ctx->pc = 0x1e4c74u;
    // NOP
label_1e4c78:
    // 0x1e4c78: 0x0  nop
    ctx->pc = 0x1e4c78u;
    // NOP
label_1e4c7c:
    // 0x1e4c7c: 0x0  nop
    ctx->pc = 0x1e4c7cu;
    // NOP
label_1e4c80:
    // 0x1e4c80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e4c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e4c84:
    // 0x1e4c84: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1e4c88:
    // 0x1e4c88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e4c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e4c8c:
    // 0x1e4c8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e4c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e4c90:
    // 0x1e4c90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e4c94:
    // 0x1e4c94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e4c98:
    // 0x1e4c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4c9c:
    // 0x1e4c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4ca0:
    // 0x1e4ca0: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e4ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
label_1e4ca4:
    // 0x1e4ca4: 0xc070ea8  jal         func_1C3AA0
label_1e4ca8:
    if (ctx->pc == 0x1E4CA8u) {
        ctx->pc = 0x1E4CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CA4u;
        // 0x1e4ca8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CACu;
        goto label_1e4cac;
    }
    ctx->pc = 0x1E4CA4u;
    SET_GPR_U32(ctx, 31, 0x1E4CACu);
    ctx->pc = 0x1E4CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CA4u;
    // 0x1e4ca8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E4CACu;
label_1e4cac:
    // 0x1e4cac: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
label_1e4cb0:
    // 0x1e4cb0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e4cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1e4cb4:
    // 0x1e4cb4: 0xc070ea8  jal         func_1C3AA0
label_1e4cb8:
    if (ctx->pc == 0x1E4CB8u) {
        ctx->pc = 0x1E4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CB4u;
        // 0x1e4cb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CBCu;
        goto label_1e4cbc;
    }
    ctx->pc = 0x1E4CB4u;
    SET_GPR_U32(ctx, 31, 0x1E4CBCu);
    ctx->pc = 0x1E4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CB4u;
    // 0x1e4cb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    { ctx->pc = 0x1c3aa0; return; }
    ctx->pc = 0x1E4CBCu;
label_1e4cbc:
    // 0x1e4cbc: 0xc070038  jal         func_1C00E0
label_1e4cc0:
    if (ctx->pc == 0x1E4CC0u) {
        ctx->pc = 0x1E4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CBCu;
        // 0x1e4cc0: 0x8f848e74  lw          $a0, -0x718C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CC4u;
        goto label_1e4cc4;
    }
    ctx->pc = 0x1E4CBCu;
    SET_GPR_U32(ctx, 31, 0x1E4CC4u);
    ctx->pc = 0x1E4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CBCu;
    // 0x1e4cc0: 0x8f848e74  lw          $a0, -0x718C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4CC4u;
label_1e4cc4:
    // 0x1e4cc4: 0xc070038  jal         func_1C00E0
label_1e4cc8:
    if (ctx->pc == 0x1E4CC8u) {
        ctx->pc = 0x1E4CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4CC4u;
        // 0x1e4cc8: 0x8f848e70  lw          $a0, -0x7190($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4CCCu;
        goto label_1e4ccc;
    }
    ctx->pc = 0x1E4CC4u;
    SET_GPR_U32(ctx, 31, 0x1E4CCCu);
    ctx->pc = 0x1E4CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4CC4u;
    // 0x1e4cc8: 0x8f848e70  lw          $a0, -0x7190($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4CCCu;
label_1e4ccc:
    // 0x1e4ccc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e4cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cd0:
    // 0x1e4cd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e4cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cd4:
    // 0x1e4cd4: 0x27828e68  addiu       $v0, $gp, -0x7198
    ctx->pc = 0x1e4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938216));
label_1e4cd8:
    // 0x1e4cd8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1e4cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e4cdc:
    // 0x1e4cdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e4cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4ce0:
    // 0x1e4ce0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e4ce4:
    if (ctx->pc == 0x1E4CE4u) {
        ctx->pc = 0x1E4CE8u;
        goto label_1e4ce8;
    }
    ctx->pc = 0x1E4CE0u;
    {
        const bool branch_taken_0x1e4ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ce0) {
            ctx->pc = 0x1E4CF4u;
            { ctx->pc = 0x1e4cf4; return; }
        }
    }
    ctx->pc = 0x1E4CE8u;
label_1e4ce8:
    // 0x1e4ce8: 0xc070038  jal         func_1C00E0
label_1e4cec:
    if (ctx->pc == 0x1E4CECu) {
        ctx->pc = 0x1E4CF0u;
        { ctx->pc = 0x1e4cf0; return; }
    }
    ctx->pc = 0x1E4CE8u;
    SET_GPR_U32(ctx, 31, 0x1E4CF0u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1E4CF0u;
    ctx->pc = 0x1e4cf0u;
    return;
}

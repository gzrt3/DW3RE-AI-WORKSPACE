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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part85(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1c4848u: goto label_1c4848;
        case 0x1c484cu: goto label_1c484c;
        case 0x1c4850u: goto label_1c4850;
        case 0x1c4854u: goto label_1c4854;
        case 0x1c4858u: goto label_1c4858;
        case 0x1c485cu: goto label_1c485c;
        case 0x1c4860u: goto label_1c4860;
        case 0x1c4864u: goto label_1c4864;
        case 0x1c4868u: goto label_1c4868;
        case 0x1c486cu: goto label_1c486c;
        case 0x1c4870u: goto label_1c4870;
        case 0x1c4874u: goto label_1c4874;
        case 0x1c4878u: goto label_1c4878;
        case 0x1c487cu: goto label_1c487c;
        case 0x1c4880u: goto label_1c4880;
        case 0x1c4884u: goto label_1c4884;
        case 0x1c4888u: goto label_1c4888;
        case 0x1c488cu: goto label_1c488c;
        case 0x1c4890u: goto label_1c4890;
        case 0x1c4894u: goto label_1c4894;
        case 0x1c4898u: goto label_1c4898;
        case 0x1c489cu: goto label_1c489c;
        case 0x1c48a0u: goto label_1c48a0;
        case 0x1c48a4u: goto label_1c48a4;
        case 0x1c48a8u: goto label_1c48a8;
        case 0x1c48acu: goto label_1c48ac;
        case 0x1c48b0u: goto label_1c48b0;
        case 0x1c48b4u: goto label_1c48b4;
        case 0x1c48b8u: goto label_1c48b8;
        case 0x1c48bcu: goto label_1c48bc;
        case 0x1c48c0u: goto label_1c48c0;
        case 0x1c48c4u: goto label_1c48c4;
        case 0x1c48c8u: goto label_1c48c8;
        case 0x1c48ccu: goto label_1c48cc;
        case 0x1c48d0u: goto label_1c48d0;
        case 0x1c48d4u: goto label_1c48d4;
        case 0x1c48d8u: goto label_1c48d8;
        case 0x1c48dcu: goto label_1c48dc;
        case 0x1c48e0u: goto label_1c48e0;
        case 0x1c48e4u: goto label_1c48e4;
        case 0x1c48e8u: goto label_1c48e8;
        case 0x1c48ecu: goto label_1c48ec;
        case 0x1c48f0u: goto label_1c48f0;
        case 0x1c48f4u: goto label_1c48f4;
        case 0x1c48f8u: goto label_1c48f8;
        case 0x1c48fcu: goto label_1c48fc;
        case 0x1c4900u: goto label_1c4900;
        case 0x1c4904u: goto label_1c4904;
        case 0x1c4908u: goto label_1c4908;
        case 0x1c490cu: goto label_1c490c;
        case 0x1c4910u: goto label_1c4910;
        case 0x1c4914u: goto label_1c4914;
        case 0x1c4918u: goto label_1c4918;
        case 0x1c491cu: goto label_1c491c;
        case 0x1c4920u: goto label_1c4920;
        case 0x1c4924u: goto label_1c4924;
        case 0x1c4928u: goto label_1c4928;
        case 0x1c492cu: goto label_1c492c;
        case 0x1c4930u: goto label_1c4930;
        case 0x1c4934u: goto label_1c4934;
        case 0x1c4938u: goto label_1c4938;
        case 0x1c493cu: goto label_1c493c;
        case 0x1c4940u: goto label_1c4940;
        case 0x1c4944u: goto label_1c4944;
        case 0x1c4948u: goto label_1c4948;
        case 0x1c494cu: goto label_1c494c;
        case 0x1c4950u: goto label_1c4950;
        case 0x1c4954u: goto label_1c4954;
        case 0x1c4958u: goto label_1c4958;
        case 0x1c495cu: goto label_1c495c;
        case 0x1c4960u: goto label_1c4960;
        case 0x1c4964u: goto label_1c4964;
        case 0x1c4968u: goto label_1c4968;
        case 0x1c496cu: goto label_1c496c;
        case 0x1c4970u: goto label_1c4970;
        case 0x1c4974u: goto label_1c4974;
        case 0x1c4978u: goto label_1c4978;
        case 0x1c497cu: goto label_1c497c;
        case 0x1c4980u: goto label_1c4980;
        case 0x1c4984u: goto label_1c4984;
        case 0x1c4988u: goto label_1c4988;
        case 0x1c498cu: goto label_1c498c;
        case 0x1c4990u: goto label_1c4990;
        case 0x1c4994u: goto label_1c4994;
        case 0x1c4998u: goto label_1c4998;
        case 0x1c499cu: goto label_1c499c;
        case 0x1c49a0u: goto label_1c49a0;
        case 0x1c49a4u: goto label_1c49a4;
        case 0x1c49a8u: goto label_1c49a8;
        case 0x1c49acu: goto label_1c49ac;
        case 0x1c49b0u: goto label_1c49b0;
        case 0x1c49b4u: goto label_1c49b4;
        case 0x1c49b8u: goto label_1c49b8;
        case 0x1c49bcu: goto label_1c49bc;
        case 0x1c49c0u: goto label_1c49c0;
        case 0x1c49c4u: goto label_1c49c4;
        case 0x1c49c8u: goto label_1c49c8;
        case 0x1c49ccu: goto label_1c49cc;
        case 0x1c49d0u: goto label_1c49d0;
        case 0x1c49d4u: goto label_1c49d4;
        case 0x1c49d8u: goto label_1c49d8;
        case 0x1c49dcu: goto label_1c49dc;
        case 0x1c49e0u: goto label_1c49e0;
        case 0x1c49e4u: goto label_1c49e4;
        case 0x1c49e8u: goto label_1c49e8;
        case 0x1c49ecu: goto label_1c49ec;
        case 0x1c49f0u: goto label_1c49f0;
        case 0x1c49f4u: goto label_1c49f4;
        case 0x1c49f8u: goto label_1c49f8;
        case 0x1c49fcu: goto label_1c49fc;
        case 0x1c4a00u: goto label_1c4a00;
        case 0x1c4a04u: goto label_1c4a04;
        case 0x1c4a08u: goto label_1c4a08;
        case 0x1c4a0cu: goto label_1c4a0c;
        case 0x1c4a10u: goto label_1c4a10;
        case 0x1c4a14u: goto label_1c4a14;
        case 0x1c4a18u: goto label_1c4a18;
        case 0x1c4a1cu: goto label_1c4a1c;
        case 0x1c4a20u: goto label_1c4a20;
        case 0x1c4a24u: goto label_1c4a24;
        case 0x1c4a28u: goto label_1c4a28;
        case 0x1c4a2cu: goto label_1c4a2c;
        case 0x1c4a30u: goto label_1c4a30;
        case 0x1c4a34u: goto label_1c4a34;
        case 0x1c4a38u: goto label_1c4a38;
        case 0x1c4a3cu: goto label_1c4a3c;
        case 0x1c4a40u: goto label_1c4a40;
        case 0x1c4a44u: goto label_1c4a44;
        case 0x1c4a48u: goto label_1c4a48;
        case 0x1c4a4cu: goto label_1c4a4c;
        case 0x1c4a50u: goto label_1c4a50;
        case 0x1c4a54u: goto label_1c4a54;
        case 0x1c4a58u: goto label_1c4a58;
        case 0x1c4a5cu: goto label_1c4a5c;
        case 0x1c4a60u: goto label_1c4a60;
        case 0x1c4a64u: goto label_1c4a64;
        case 0x1c4a68u: goto label_1c4a68;
        case 0x1c4a6cu: goto label_1c4a6c;
        case 0x1c4a70u: goto label_1c4a70;
        case 0x1c4a74u: goto label_1c4a74;
        case 0x1c4a78u: goto label_1c4a78;
        case 0x1c4a7cu: goto label_1c4a7c;
        case 0x1c4a80u: goto label_1c4a80;
        case 0x1c4a84u: goto label_1c4a84;
        case 0x1c4a88u: goto label_1c4a88;
        case 0x1c4a8cu: goto label_1c4a8c;
        case 0x1c4a90u: goto label_1c4a90;
        case 0x1c4a94u: goto label_1c4a94;
        case 0x1c4a98u: goto label_1c4a98;
        case 0x1c4a9cu: goto label_1c4a9c;
        case 0x1c4aa0u: goto label_1c4aa0;
        case 0x1c4aa4u: goto label_1c4aa4;
        case 0x1c4aa8u: goto label_1c4aa8;
        case 0x1c4aacu: goto label_1c4aac;
        case 0x1c4ab0u: goto label_1c4ab0;
        case 0x1c4ab4u: goto label_1c4ab4;
        case 0x1c4ab8u: goto label_1c4ab8;
        case 0x1c4abcu: goto label_1c4abc;
        case 0x1c4ac0u: goto label_1c4ac0;
        case 0x1c4ac4u: goto label_1c4ac4;
        case 0x1c4ac8u: goto label_1c4ac8;
        case 0x1c4accu: goto label_1c4acc;
        case 0x1c4ad0u: goto label_1c4ad0;
        case 0x1c4ad4u: goto label_1c4ad4;
        case 0x1c4ad8u: goto label_1c4ad8;
        case 0x1c4adcu: goto label_1c4adc;
        case 0x1c4ae0u: goto label_1c4ae0;
        case 0x1c4ae4u: goto label_1c4ae4;
        case 0x1c4ae8u: goto label_1c4ae8;
        case 0x1c4aecu: goto label_1c4aec;
        case 0x1c4af0u: goto label_1c4af0;
        case 0x1c4af4u: goto label_1c4af4;
        case 0x1c4af8u: goto label_1c4af8;
        case 0x1c4afcu: goto label_1c4afc;
        case 0x1c4b00u: goto label_1c4b00;
        case 0x1c4b04u: goto label_1c4b04;
        case 0x1c4b08u: goto label_1c4b08;
        case 0x1c4b0cu: goto label_1c4b0c;
        case 0x1c4b10u: goto label_1c4b10;
        case 0x1c4b14u: goto label_1c4b14;
        case 0x1c4b18u: goto label_1c4b18;
        case 0x1c4b1cu: goto label_1c4b1c;
        case 0x1c4b20u: goto label_1c4b20;
        case 0x1c4b24u: goto label_1c4b24;
        case 0x1c4b28u: goto label_1c4b28;
        case 0x1c4b2cu: goto label_1c4b2c;
        case 0x1c4b30u: goto label_1c4b30;
        case 0x1c4b34u: goto label_1c4b34;
        case 0x1c4b38u: goto label_1c4b38;
        case 0x1c4b3cu: goto label_1c4b3c;
        case 0x1c4b40u: goto label_1c4b40;
        case 0x1c4b44u: goto label_1c4b44;
        case 0x1c4b48u: goto label_1c4b48;
        case 0x1c4b4cu: goto label_1c4b4c;
        case 0x1c4b50u: goto label_1c4b50;
        case 0x1c4b54u: goto label_1c4b54;
        case 0x1c4b58u: goto label_1c4b58;
        case 0x1c4b5cu: goto label_1c4b5c;
        case 0x1c4b60u: goto label_1c4b60;
        case 0x1c4b64u: goto label_1c4b64;
        case 0x1c4b68u: goto label_1c4b68;
        case 0x1c4b6cu: goto label_1c4b6c;
        case 0x1c4b70u: goto label_1c4b70;
        case 0x1c4b74u: goto label_1c4b74;
        case 0x1c4b78u: goto label_1c4b78;
        case 0x1c4b7cu: goto label_1c4b7c;
        case 0x1c4b80u: goto label_1c4b80;
        case 0x1c4b84u: goto label_1c4b84;
        case 0x1c4b88u: goto label_1c4b88;
        case 0x1c4b8cu: goto label_1c4b8c;
        case 0x1c4b90u: goto label_1c4b90;
        case 0x1c4b94u: goto label_1c4b94;
        case 0x1c4b98u: goto label_1c4b98;
        case 0x1c4b9cu: goto label_1c4b9c;
        case 0x1c4ba0u: goto label_1c4ba0;
        case 0x1c4ba4u: goto label_1c4ba4;
        case 0x1c4ba8u: goto label_1c4ba8;
        case 0x1c4bacu: goto label_1c4bac;
        case 0x1c4bb0u: goto label_1c4bb0;
        case 0x1c4bb4u: goto label_1c4bb4;
        case 0x1c4bb8u: goto label_1c4bb8;
        case 0x1c4bbcu: goto label_1c4bbc;
        case 0x1c4bc0u: goto label_1c4bc0;
        case 0x1c4bc4u: goto label_1c4bc4;
        case 0x1c4bc8u: goto label_1c4bc8;
        case 0x1c4bccu: goto label_1c4bcc;
        case 0x1c4bd0u: goto label_1c4bd0;
        case 0x1c4bd4u: goto label_1c4bd4;
        case 0x1c4bd8u: goto label_1c4bd8;
        case 0x1c4bdcu: goto label_1c4bdc;
        case 0x1c4be0u: goto label_1c4be0;
        case 0x1c4be4u: goto label_1c4be4;
        case 0x1c4be8u: goto label_1c4be8;
        case 0x1c4becu: goto label_1c4bec;
        case 0x1c4bf0u: goto label_1c4bf0;
        case 0x1c4bf4u: goto label_1c4bf4;
        case 0x1c4bf8u: goto label_1c4bf8;
        case 0x1c4bfcu: goto label_1c4bfc;
        case 0x1c4c00u: goto label_1c4c00;
        case 0x1c4c04u: goto label_1c4c04;
        case 0x1c4c08u: goto label_1c4c08;
        case 0x1c4c0cu: goto label_1c4c0c;
        case 0x1c4c10u: goto label_1c4c10;
        case 0x1c4c14u: goto label_1c4c14;
        case 0x1c4c18u: goto label_1c4c18;
        case 0x1c4c1cu: goto label_1c4c1c;
        case 0x1c4c20u: goto label_1c4c20;
        case 0x1c4c24u: goto label_1c4c24;
        case 0x1c4c28u: goto label_1c4c28;
        case 0x1c4c2cu: goto label_1c4c2c;
        case 0x1c4c30u: goto label_1c4c30;
        case 0x1c4c34u: goto label_1c4c34;
        case 0x1c4c38u: goto label_1c4c38;
        case 0x1c4c3cu: goto label_1c4c3c;
        case 0x1c4c40u: goto label_1c4c40;
        case 0x1c4c44u: goto label_1c4c44;
        case 0x1c4c48u: goto label_1c4c48;
        case 0x1c4c4cu: goto label_1c4c4c;
        case 0x1c4c50u: goto label_1c4c50;
        case 0x1c4c54u: goto label_1c4c54;
        case 0x1c4c58u: goto label_1c4c58;
        case 0x1c4c5cu: goto label_1c4c5c;
        case 0x1c4c60u: goto label_1c4c60;
        case 0x1c4c64u: goto label_1c4c64;
        case 0x1c4c68u: goto label_1c4c68;
        case 0x1c4c6cu: goto label_1c4c6c;
        case 0x1c4c70u: goto label_1c4c70;
        case 0x1c4c74u: goto label_1c4c74;
        case 0x1c4c78u: goto label_1c4c78;
        case 0x1c4c7cu: goto label_1c4c7c;
        case 0x1c4c80u: goto label_1c4c80;
        case 0x1c4c84u: goto label_1c4c84;
        case 0x1c4c88u: goto label_1c4c88;
        case 0x1c4c8cu: goto label_1c4c8c;
        case 0x1c4c90u: goto label_1c4c90;
        case 0x1c4c94u: goto label_1c4c94;
        case 0x1c4c98u: goto label_1c4c98;
        case 0x1c4c9cu: goto label_1c4c9c;
        case 0x1c4ca0u: goto label_1c4ca0;
        case 0x1c4ca4u: goto label_1c4ca4;
        case 0x1c4ca8u: goto label_1c4ca8;
        case 0x1c4cacu: goto label_1c4cac;
        case 0x1c4cb0u: goto label_1c4cb0;
        case 0x1c4cb4u: goto label_1c4cb4;
        case 0x1c4cb8u: goto label_1c4cb8;
        case 0x1c4cbcu: goto label_1c4cbc;
        case 0x1c4cc0u: goto label_1c4cc0;
        case 0x1c4cc4u: goto label_1c4cc4;
        case 0x1c4cc8u: goto label_1c4cc8;
        case 0x1c4cccu: goto label_1c4ccc;
        case 0x1c4cd0u: goto label_1c4cd0;
        case 0x1c4cd4u: goto label_1c4cd4;
        case 0x1c4cd8u: goto label_1c4cd8;
        case 0x1c4cdcu: goto label_1c4cdc;
        case 0x1c4ce0u: goto label_1c4ce0;
        case 0x1c4ce4u: goto label_1c4ce4;
        case 0x1c4ce8u: goto label_1c4ce8;
        case 0x1c4cecu: goto label_1c4cec;
        case 0x1c4cf0u: goto label_1c4cf0;
        case 0x1c4cf4u: goto label_1c4cf4;
        case 0x1c4cf8u: goto label_1c4cf8;
        case 0x1c4cfcu: goto label_1c4cfc;
        case 0x1c4d00u: goto label_1c4d00;
        case 0x1c4d04u: goto label_1c4d04;
        case 0x1c4d08u: goto label_1c4d08;
        case 0x1c4d0cu: goto label_1c4d0c;
        case 0x1c4d10u: goto label_1c4d10;
        case 0x1c4d14u: goto label_1c4d14;
        case 0x1c4d18u: goto label_1c4d18;
        case 0x1c4d1cu: goto label_1c4d1c;
        case 0x1c4d20u: goto label_1c4d20;
        case 0x1c4d24u: goto label_1c4d24;
        case 0x1c4d28u: goto label_1c4d28;
        case 0x1c4d2cu: goto label_1c4d2c;
        case 0x1c4d30u: goto label_1c4d30;
        case 0x1c4d34u: goto label_1c4d34;
        case 0x1c4d38u: goto label_1c4d38;
        case 0x1c4d3cu: goto label_1c4d3c;
        case 0x1c4d40u: goto label_1c4d40;
        case 0x1c4d44u: goto label_1c4d44;
        case 0x1c4d48u: goto label_1c4d48;
        case 0x1c4d4cu: goto label_1c4d4c;
        case 0x1c4d50u: goto label_1c4d50;
        case 0x1c4d54u: goto label_1c4d54;
        case 0x1c4d58u: goto label_1c4d58;
        case 0x1c4d5cu: goto label_1c4d5c;
        case 0x1c4d60u: goto label_1c4d60;
        case 0x1c4d64u: goto label_1c4d64;
        case 0x1c4d68u: goto label_1c4d68;
        case 0x1c4d6cu: goto label_1c4d6c;
        case 0x1c4d70u: goto label_1c4d70;
        case 0x1c4d74u: goto label_1c4d74;
        case 0x1c4d78u: goto label_1c4d78;
        case 0x1c4d7cu: goto label_1c4d7c;
        case 0x1c4d80u: goto label_1c4d80;
        case 0x1c4d84u: goto label_1c4d84;
        case 0x1c4d88u: goto label_1c4d88;
        case 0x1c4d8cu: goto label_1c4d8c;
        case 0x1c4d90u: goto label_1c4d90;
        case 0x1c4d94u: goto label_1c4d94;
        case 0x1c4d98u: goto label_1c4d98;
        case 0x1c4d9cu: goto label_1c4d9c;
        case 0x1c4da0u: goto label_1c4da0;
        case 0x1c4da4u: goto label_1c4da4;
        case 0x1c4da8u: goto label_1c4da8;
        case 0x1c4dacu: goto label_1c4dac;
        case 0x1c4db0u: goto label_1c4db0;
        case 0x1c4db4u: goto label_1c4db4;
        case 0x1c4db8u: goto label_1c4db8;
        case 0x1c4dbcu: goto label_1c4dbc;
        case 0x1c4dc0u: goto label_1c4dc0;
        case 0x1c4dc4u: goto label_1c4dc4;
        case 0x1c4dc8u: goto label_1c4dc8;
        case 0x1c4dccu: goto label_1c4dcc;
        case 0x1c4dd0u: goto label_1c4dd0;
        case 0x1c4dd4u: goto label_1c4dd4;
        case 0x1c4dd8u: goto label_1c4dd8;
        case 0x1c4ddcu: goto label_1c4ddc;
        case 0x1c4de0u: goto label_1c4de0;
        case 0x1c4de4u: goto label_1c4de4;
        case 0x1c4de8u: goto label_1c4de8;
        case 0x1c4decu: goto label_1c4dec;
        case 0x1c4df0u: goto label_1c4df0;
        case 0x1c4df4u: goto label_1c4df4;
        default: return;
    }

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
            goto label_1c4a1c;
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
            goto label_1c4848;
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
        goto label_1c4848;
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
            goto label_1c48b4;
        }
    }
    ctx->pc = 0x1C4848u;
label_1c4848:
    // 0x1c4848: 0xc0448d4  jal         func_112350
label_1c484c:
    if (ctx->pc == 0x1C484Cu) {
        ctx->pc = 0x1C484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4848u;
        // 0x1c484c: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4850u;
        goto label_1c4850;
    }
    ctx->pc = 0x1C4848u;
    SET_GPR_U32(ctx, 31, 0x1C4850u);
    ctx->pc = 0x1C484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4848u;
    // 0x1c484c: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112350u, 0x1C4848u, 0x1C4850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4850u;
label_1c4850:
    // 0x1c4850: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x1c4850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1c4854:
    // 0x1c4854: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1c4858:
    if (ctx->pc == 0x1C4858u) {
        ctx->pc = 0x1C485Cu;
        goto label_1c485c;
    }
    ctx->pc = 0x1C4854u;
    {
        const bool branch_taken_0x1c4854 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4854) {
            ctx->pc = 0x1C4860u;
            goto label_1c4860;
        }
    }
    ctx->pc = 0x1C485Cu;
label_1c485c:
    // 0x1c485c: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x1c485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1c4860:
    // 0x1c4860: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1c4860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1c4864:
    // 0x1c4864: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c4864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1c4868:
    // 0x1c4868: 0x24a5fbc0  addiu       $a1, $a1, -0x440
    ctx->pc = 0x1c4868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966208));
label_1c486c:
    // 0x1c486c: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1c486cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
label_1c4870:
    // 0x1c4870: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1c4870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1c4874:
    // 0x1c4874: 0x3483851f  ori         $v1, $a0, 0x851F
    ctx->pc = 0x1c4874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
label_1c4878:
    // 0x1c4878: 0xaca01d60  sw          $zero, 0x1D60($a1)
    ctx->pc = 0x1c4878u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7520), GPR_U32(ctx, 0));
label_1c487c:
    // 0x1c487c: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x1c487cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c4880:
    // 0x1c4880: 0xaca21d64  sw          $v0, 0x1D64($a1)
    ctx->pc = 0x1c4880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7524), GPR_U32(ctx, 2));
label_1c4884:
    // 0x1c4884: 0xaca01d68  sw          $zero, 0x1D68($a1)
    ctx->pc = 0x1c4884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7528), GPR_U32(ctx, 0));
label_1c4888:
    // 0x1c4888: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1c4888u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1c488c:
    // 0x1c488c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c488cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c4890:
    // 0x1c4890: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c4890u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1c4894:
    // 0x1c4894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c4898:
    // 0x1c4898: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1c4898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c489c:
    // 0x1c489c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c489cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c48a0:
    // 0x1c48a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c48a4:
    // 0x1c48a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c48a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c48a8:
    // 0x1c48a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c48ac:
    // 0x1c48ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c48acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1c48b0:
    // 0x1c48b0: 0xaca21d6c  sw          $v0, 0x1D6C($a1)
    ctx->pc = 0x1c48b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7532), GPR_U32(ctx, 2));
label_1c48b4:
    // 0x1c48b4: 0x0  nop
    ctx->pc = 0x1c48b4u;
    // NOP
label_1c48b8:
    // 0x1c48b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c48b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c48bc:
    // 0x1c48bc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1c48bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c48c0:
    // 0x1c48c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c48c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c48c4:
    // 0x1c48c4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c48c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c48c8:
    // 0x1c48c8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1c48cc:
    // 0x1c48cc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c48ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c48d0:
    // 0x1c48d0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1c48d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1c48d4:
    // 0x1c48d4: 0x2463fbc0  addiu       $v1, $v1, -0x440
    ctx->pc = 0x1c48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966208));
label_1c48d8:
    // 0x1c48d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c48d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c48dc:
    // 0x1c48dc: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x1c48dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c48e0:
    // 0x1c48e0: 0xc07133c  jal         func_1C4CF0
label_1c48e4:
    if (ctx->pc == 0x1C48E4u) {
        ctx->pc = 0x1C48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48E0u;
        // 0x1c48e4: 0x2de2021  addu        $a0, $s6, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C48E8u;
        goto label_1c48e8;
    }
    ctx->pc = 0x1C48E0u;
    SET_GPR_U32(ctx, 31, 0x1C48E8u);
    ctx->pc = 0x1C48E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48E0u;
    // 0x1c48e4: 0x2de2021  addu        $a0, $s6, $fp (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4CF0u;
    goto label_1c4cf0;
    ctx->pc = 0x1C48E8u;
label_1c48e8:
    // 0x1c48e8: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x1c48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_1c48ec:
    // 0x1c48ec: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1c48ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1c48f0:
    // 0x1c48f0: 0x245202a0  addiu       $s2, $v0, 0x2A0
    ctx->pc = 0x1c48f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
label_1c48f4:
    // 0x1c48f4: 0xc05e234  jal         func_1788D0
label_1c48f8:
    if (ctx->pc == 0x1C48F8u) {
        ctx->pc = 0x1C48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48F4u;
        // 0x1c48f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C48FCu;
        goto label_1c48fc;
    }
    ctx->pc = 0x1C48F4u;
    SET_GPR_U32(ctx, 31, 0x1C48FCu);
    ctx->pc = 0x1C48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48F4u;
    // 0x1c48f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C48F4u, 0x1C48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48FCu;
label_1c48fc:
    // 0x1c48fc: 0xc070834  jal         func_1C20D0
label_1c4900:
    if (ctx->pc == 0x1C4900u) {
        ctx->pc = 0x1C4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48FCu;
        // 0x1c4900: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4904u;
        goto label_1c4904;
    }
    ctx->pc = 0x1C48FCu;
    SET_GPR_U32(ctx, 31, 0x1C4904u);
    ctx->pc = 0x1C4900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48FCu;
    // 0x1c4900: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1C4904u;
label_1c4904:
    // 0x1c4904: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1c4904u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4908:
    // 0x1c4908: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c4908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c490c:
    // 0x1c490c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c490cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4910:
    // 0x1c4910: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1c4910u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c4914:
    // 0x1c4914: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1c4914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1c4918:
    // 0x1c4918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c4918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c491c:
    // 0x1c491c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1c491cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1c4920:
    // 0x1c4920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4924:
    // 0x1c4924: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1c4924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1c4928:
    // 0x1c4928: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1c4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1c492c:
    // 0x1c492c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1c492cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1c4930:
    // 0x1c4930: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1c4930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1c4934:
    // 0x1c4934: 0x3408ffe2  ori         $t0, $zero, 0xFFE2
    ctx->pc = 0x1c4934u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65506);
label_1c4938:
    // 0x1c4938: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c4938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c493c:
    // 0x1c493c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c493cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4940:
    // 0x1c4940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4944:
    // 0x1c4944: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x1c4944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c4948:
    // 0x1c4948: 0xc05de30  jal         func_1778C0
label_1c494c:
    if (ctx->pc == 0x1C494Cu) {
        ctx->pc = 0x1C494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4948u;
        // 0x1c494c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4950u;
        goto label_1c4950;
    }
    ctx->pc = 0x1C4948u;
    SET_GPR_U32(ctx, 31, 0x1C4950u);
    ctx->pc = 0x1C494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4948u;
    // 0x1c494c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1C4948u, 0x1C4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4950u;
label_1c4950:
    // 0x1c4950: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c4950u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c4954:
    // 0x1c4954: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1c4954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_1c4958:
    // 0x1c4958: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1c495c:
    if (ctx->pc == 0x1C495Cu) {
        ctx->pc = 0x1C495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4958u;
        // 0x1c495c: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4960u;
        goto label_1c4960;
    }
    ctx->pc = 0x1C4958u;
    {
        const bool branch_taken_0x1c4958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4958u;
        // 0x1c495c: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4958) {
            ctx->pc = 0x1C4910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4910;
        }
    }
    ctx->pc = 0x1C4960u;
label_1c4960:
    // 0x1c4960: 0x2d51021  addu        $v0, $s6, $s5
    ctx->pc = 0x1c4960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_1c4964:
    // 0x1c4964: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1c4964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1c4968:
    // 0x1c4968: 0x245216c0  addiu       $s2, $v0, 0x16C0
    ctx->pc = 0x1c4968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_1c496c:
    // 0x1c496c: 0xc05e234  jal         func_1788D0
label_1c4970:
    if (ctx->pc == 0x1C4970u) {
        ctx->pc = 0x1C4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C496Cu;
        // 0x1c4970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4974u;
        goto label_1c4974;
    }
    ctx->pc = 0x1C496Cu;
    SET_GPR_U32(ctx, 31, 0x1C4974u);
    ctx->pc = 0x1C4970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C496Cu;
    // 0x1c4970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C496Cu, 0x1C4974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4974u;
label_1c4974:
    // 0x1c4974: 0xc070834  jal         func_1C20D0
label_1c4978:
    if (ctx->pc == 0x1C4978u) {
        ctx->pc = 0x1C4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4974u;
        // 0x1c4978: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C497Cu;
        goto label_1c497c;
    }
    ctx->pc = 0x1C4974u;
    SET_GPR_U32(ctx, 31, 0x1C497Cu);
    ctx->pc = 0x1C4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4974u;
    // 0x1c4978: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1C497Cu;
label_1c497c:
    // 0x1c497c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c497cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4980:
    // 0x1c4980: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c4980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4984:
    // 0x1c4984: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c4984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4988:
    // 0x1c4988: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1c4988u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c498c:
    // 0x1c498c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1c498cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1c4990:
    // 0x1c4990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4994:
    // 0x1c4994: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1c4994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1c4998:
    // 0x1c4998: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1c4998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1c499c:
    // 0x1c499c: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1c499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1c49a0:
    // 0x1c49a0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1c49a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1c49a4:
    // 0x1c49a4: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1c49a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1c49a8:
    // 0x1c49a8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c49a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c49ac:
    // 0x1c49ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c49acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c49b0:
    // 0x1c49b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c49b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c49b4:
    // 0x1c49b4: 0x3408ffe2  ori         $t0, $zero, 0xFFE2
    ctx->pc = 0x1c49b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65506);
label_1c49b8:
    // 0x1c49b8: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x1c49b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c49bc:
    // 0x1c49bc: 0xc05df9c  jal         func_177E70
label_1c49c0:
    if (ctx->pc == 0x1C49C0u) {
        ctx->pc = 0x1C49C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49BCu;
        // 0x1c49c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C49C4u;
        goto label_1c49c4;
    }
    ctx->pc = 0x1C49BCu;
    SET_GPR_U32(ctx, 31, 0x1C49C4u);
    ctx->pc = 0x1C49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49BCu;
    // 0x1c49c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1C49BCu, 0x1C49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49C4u;
label_1c49c4:
    // 0x1c49c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c49c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c49c8:
    // 0x1c49c8: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x1c49c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1c49cc:
    // 0x1c49cc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_1c49d0:
    if (ctx->pc == 0x1C49D0u) {
        ctx->pc = 0x1C49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49CCu;
        // 0x1c49d0: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C49D4u;
        goto label_1c49d4;
    }
    ctx->pc = 0x1C49CCu;
    {
        const bool branch_taken_0x1c49cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49CCu;
        // 0x1c49d0: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49cc) {
            ctx->pc = 0x1C4988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4988;
        }
    }
    ctx->pc = 0x1C49D4u;
label_1c49d4:
    // 0x1c49d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c49d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c49d8:
    // 0x1c49d8: 0x27de0150  addiu       $fp, $fp, 0x150
    ctx->pc = 0x1c49d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 336));
label_1c49dc:
    // 0x1c49dc: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1c49dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c49e0:
    // 0x1c49e0: 0x26940a10  addiu       $s4, $s4, 0xA10
    ctx->pc = 0x1c49e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2576));
label_1c49e4:
    // 0x1c49e4: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_1c49e8:
    if (ctx->pc == 0x1C49E8u) {
        ctx->pc = 0x1C49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49E4u;
        // 0x1c49e8: 0x26b50350  addiu       $s5, $s5, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C49ECu;
        goto label_1c49ec;
    }
    ctx->pc = 0x1C49E4u;
    {
        const bool branch_taken_0x1c49e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49E4u;
        // 0x1c49e8: 0x26b50350  addiu       $s5, $s5, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49e4) {
            ctx->pc = 0x1C48C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c48c8;
        }
    }
    ctx->pc = 0x1C49ECu;
label_1c49ec:
    // 0x1c49ec: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1c49ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1c49f0:
    // 0x1c49f0: 0x24631d70  addiu       $v1, $v1, 0x1D70
    ctx->pc = 0x1c49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7536));
label_1c49f4:
    // 0x1c49f4: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1c49f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_1c49f8:
    // 0x1c49f8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1c49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1c49fc:
    // 0x1c49fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c49fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c4a00:
    // 0x1c4a00: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1c4a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1c4a04:
    // 0x1c4a04: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1c4a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1c4a08:
    // 0x1c4a08: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1c4a08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c4a0c:
    // 0x1c4a0c: 0x1460ff7a  bnez        $v1, . + 4 + (-0x86 << 2)
label_1c4a10:
    if (ctx->pc == 0x1C4A10u) {
        ctx->pc = 0x1C4A14u;
        goto label_1c4a14;
    }
    ctx->pc = 0x1C4A0Cu;
    {
        const bool branch_taken_0x1c4a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a0c) {
            ctx->pc = 0x1C47F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c47f8;
        }
    }
    ctx->pc = 0x1C4A14u;
label_1c4a14:
    // 0x1c4a14: 0x1000007f  b           . + 4 + (0x7F << 2)
label_1c4a18:
    if (ctx->pc == 0x1C4A18u) {
        ctx->pc = 0x1C4A1Cu;
        goto label_1c4a1c;
    }
    ctx->pc = 0x1C4A14u;
    {
        const bool branch_taken_0x1c4a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a14) {
            ctx->pc = 0x1C4C14u;
            goto label_1c4c14;
        }
    }
    ctx->pc = 0x1C4A1Cu;
label_1c4a1c:
    // 0x1c4a1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c4a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c4a20:
    // 0x1c4a20: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1c4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c4a24:
    // 0x1c4a24: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1c4a24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1c4a28:
    // 0x1c4a28: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1c4a2c:
    if (ctx->pc == 0x1C4A2Cu) {
        ctx->pc = 0x1C4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A28u;
        // 0x1c4a2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A30u;
        goto label_1c4a30;
    }
    ctx->pc = 0x1C4A28u;
    {
        const bool branch_taken_0x1c4a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A28u;
        // 0x1c4a2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a28) {
            ctx->pc = 0x1C4A6Cu;
            goto label_1c4a6c;
        }
    }
    ctx->pc = 0x1C4A30u;
label_1c4a30:
    // 0x1c4a30: 0xc08a614  jal         func_229850
label_1c4a34:
    if (ctx->pc == 0x1C4A34u) {
        ctx->pc = 0x1C4A38u;
        goto label_1c4a38;
    }
    ctx->pc = 0x1C4A30u;
    SET_GPR_U32(ctx, 31, 0x1C4A38u);
    ctx->pc = 0x229850u;
    { ctx->pc = 0x229850; return; }
    ctx->pc = 0x1C4A38u;
label_1c4a38:
    // 0x1c4a38: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x1c4a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1c4a3c:
    // 0x1c4a3c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1c4a40:
    if (ctx->pc == 0x1C4A40u) {
        ctx->pc = 0x1C4A44u;
        goto label_1c4a44;
    }
    ctx->pc = 0x1C4A3Cu;
    {
        const bool branch_taken_0x1c4a3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a3c) {
            ctx->pc = 0x1C4A48u;
            goto label_1c4a48;
        }
    }
    ctx->pc = 0x1C4A44u;
label_1c4a44:
    // 0x1c4a44: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x1c4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1c4a48:
    // 0x1c4a48: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c4a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c4a4c:
    // 0x1c4a4c: 0xac221924  sw          $v0, 0x1924($at)
    ctx->pc = 0x1c4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6436), GPR_U32(ctx, 2));
label_1c4a50:
    // 0x1c4a50: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c4a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c4a54:
    // 0x1c4a54: 0xac201920  sw          $zero, 0x1920($at)
    ctx->pc = 0x1c4a54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6432), GPR_U32(ctx, 0));
label_1c4a58:
    // 0x1c4a58: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c4a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c4a5c:
    // 0x1c4a5c: 0xac201928  sw          $zero, 0x1928($at)
    ctx->pc = 0x1c4a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6440), GPR_U32(ctx, 0));
label_1c4a60:
    // 0x1c4a60: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c4a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c4a64:
    // 0x1c4a64: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1c4a68:
    if (ctx->pc == 0x1C4A68u) {
        ctx->pc = 0x1C4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A64u;
        // 0x1c4a68: 0xac20192c  sw          $zero, 0x192C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A6Cu;
        goto label_1c4a6c;
    }
    ctx->pc = 0x1C4A64u;
    {
        const bool branch_taken_0x1c4a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A64u;
        // 0x1c4a68: 0xac20192c  sw          $zero, 0x192C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a64) {
            ctx->pc = 0x1C4AD8u;
            goto label_1c4ad8;
        }
    }
    ctx->pc = 0x1C4A6Cu;
label_1c4a6c:
    // 0x1c4a6c: 0xc0448d4  jal         func_112350
label_1c4a70:
    if (ctx->pc == 0x1C4A70u) {
        ctx->pc = 0x1C4A74u;
        goto label_1c4a74;
    }
    ctx->pc = 0x1C4A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C4A74u);
    ctx->pc = 0x112350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112350u, 0x1C4A6Cu, 0x1C4A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A74u;
label_1c4a74:
    // 0x1c4a74: 0x28412710  slti        $at, $v0, 0x2710
    ctx->pc = 0x1c4a74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10000) ? 1 : 0);
label_1c4a78:
    // 0x1c4a78: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1c4a7c:
    if (ctx->pc == 0x1C4A7Cu) {
        ctx->pc = 0x1C4A80u;
        goto label_1c4a80;
    }
    ctx->pc = 0x1C4A78u;
    {
        const bool branch_taken_0x1c4a78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a78) {
            ctx->pc = 0x1C4A84u;
            goto label_1c4a84;
        }
    }
    ctx->pc = 0x1C4A80u;
label_1c4a80:
    // 0x1c4a80: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x1c4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_1c4a84:
    // 0x1c4a84: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1c4a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1c4a88:
    // 0x1c4a88: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c4a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c4a8c:
    // 0x1c4a8c: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1c4a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1c4a90:
    // 0x1c4a90: 0xac201920  sw          $zero, 0x1920($at)
    ctx->pc = 0x1c4a90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6432), GPR_U32(ctx, 0));
label_1c4a94:
    // 0x1c4a94: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x1c4a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c4a98:
    // 0x1c4a98: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c4a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c4a9c:
    // 0x1c4a9c: 0xac221924  sw          $v0, 0x1924($at)
    ctx->pc = 0x1c4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6436), GPR_U32(ctx, 2));
label_1c4aa0:
    // 0x1c4aa0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c4aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c4aa4:
    // 0x1c4aa4: 0xac201928  sw          $zero, 0x1928($at)
    ctx->pc = 0x1c4aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6440), GPR_U32(ctx, 0));
label_1c4aa8:
    // 0x1c4aa8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1c4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1c4aac:
    // 0x1c4aac: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c4aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c4ab0:
    // 0x1c4ab0: 0x1010  mfhi        $v0
    ctx->pc = 0x1c4ab0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c4ab4:
    // 0x1c4ab4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1c4ab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1c4ab8:
    // 0x1c4ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c4abc:
    // 0x1c4abc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1c4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c4ac0:
    // 0x1c4ac0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c4ac4:
    // 0x1c4ac4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c4ac8:
    // 0x1c4ac8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c4acc:
    // 0x1c4acc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c4accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c4ad0:
    // 0x1c4ad0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1c4ad4:
    // 0x1c4ad4: 0xac22192c  sw          $v0, 0x192C($at)
    ctx->pc = 0x1c4ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6444), GPR_U32(ctx, 2));
label_1c4ad8:
    // 0x1c4ad8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c4ad8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4adc:
    // 0x1c4adc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c4adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ae0:
    // 0x1c4ae0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c4ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ae4:
    // 0x1c4ae4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c4ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ae8:
    // 0x1c4ae8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c4aec:
    // 0x1c4aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4af0:
    // 0x1c4af0: 0x2442fbc0  addiu       $v0, $v0, -0x440
    ctx->pc = 0x1c4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966208));
label_1c4af4:
    // 0x1c4af4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4af8:
    // 0x1c4af8: 0xc07133c  jal         func_1C4CF0
label_1c4afc:
    if (ctx->pc == 0x1C4AFCu) {
        ctx->pc = 0x1C4AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AF8u;
        // 0x1c4afc: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B00u;
        goto label_1c4b00;
    }
    ctx->pc = 0x1C4AF8u;
    SET_GPR_U32(ctx, 31, 0x1C4B00u);
    ctx->pc = 0x1C4AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4AF8u;
    // 0x1c4afc: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4CF0u;
    goto label_1c4cf0;
    ctx->pc = 0x1C4B00u;
label_1c4b00:
    // 0x1c4b00: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c4b04:
    // 0x1c4b04: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1c4b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1c4b08:
    // 0x1c4b08: 0x2442fbc0  addiu       $v0, $v0, -0x440
    ctx->pc = 0x1c4b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966208));
label_1c4b0c:
    // 0x1c4b0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1c4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c4b10:
    // 0x1c4b10: 0x245402a0  addiu       $s4, $v0, 0x2A0
    ctx->pc = 0x1c4b10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
label_1c4b14:
    // 0x1c4b14: 0xc05e234  jal         func_1788D0
label_1c4b18:
    if (ctx->pc == 0x1C4B18u) {
        ctx->pc = 0x1C4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B14u;
        // 0x1c4b18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B1Cu;
        goto label_1c4b1c;
    }
    ctx->pc = 0x1C4B14u;
    SET_GPR_U32(ctx, 31, 0x1C4B1Cu);
    ctx->pc = 0x1C4B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B14u;
    // 0x1c4b18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C4B14u, 0x1C4B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B1Cu;
label_1c4b1c:
    // 0x1c4b1c: 0xc070834  jal         func_1C20D0
label_1c4b20:
    if (ctx->pc == 0x1C4B20u) {
        ctx->pc = 0x1C4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B1Cu;
        // 0x1c4b20: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B24u;
        goto label_1c4b24;
    }
    ctx->pc = 0x1C4B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B24u);
    ctx->pc = 0x1C4B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B1Cu;
    // 0x1c4b20: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1C4B24u;
label_1c4b24:
    // 0x1c4b24: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1c4b24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b28:
    // 0x1c4b28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c4b28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b2c:
    // 0x1c4b2c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c4b2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b30:
    // 0x1c4b30: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1c4b30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c4b34:
    // 0x1c4b34: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1c4b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1c4b38:
    // 0x1c4b38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c4b3c:
    // 0x1c4b3c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1c4b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1c4b40:
    // 0x1c4b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4b44:
    // 0x1c4b44: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1c4b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1c4b48:
    // 0x1c4b48: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x1c4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1c4b4c:
    // 0x1c4b4c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1c4b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1c4b50:
    // 0x1c4b50: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1c4b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1c4b54:
    // 0x1c4b54: 0x3408ffe2  ori         $t0, $zero, 0xFFE2
    ctx->pc = 0x1c4b54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65506);
label_1c4b58:
    // 0x1c4b58: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c4b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b5c:
    // 0x1c4b5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b60:
    // 0x1c4b60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b64:
    // 0x1c4b64: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x1c4b64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c4b68:
    // 0x1c4b68: 0xc05de30  jal         func_1778C0
label_1c4b6c:
    if (ctx->pc == 0x1C4B6Cu) {
        ctx->pc = 0x1C4B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B68u;
        // 0x1c4b6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B70u;
        goto label_1c4b70;
    }
    ctx->pc = 0x1C4B68u;
    SET_GPR_U32(ctx, 31, 0x1C4B70u);
    ctx->pc = 0x1C4B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B68u;
    // 0x1c4b6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1C4B68u, 0x1C4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B70u;
label_1c4b70:
    // 0x1c4b70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c4b70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c4b74:
    // 0x1c4b74: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x1c4b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
label_1c4b78:
    // 0x1c4b78: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1c4b7c:
    if (ctx->pc == 0x1C4B7Cu) {
        ctx->pc = 0x1C4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B78u;
        // 0x1c4b7c: 0x26b500a0  addiu       $s5, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B80u;
        goto label_1c4b80;
    }
    ctx->pc = 0x1C4B78u;
    {
        const bool branch_taken_0x1c4b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B78u;
        // 0x1c4b7c: 0x26b500a0  addiu       $s5, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b78) {
            ctx->pc = 0x1C4B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4b30;
        }
    }
    ctx->pc = 0x1C4B80u;
label_1c4b80:
    // 0x1c4b80: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c4b84:
    // 0x1c4b84: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1c4b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1c4b88:
    // 0x1c4b88: 0x2442fbc0  addiu       $v0, $v0, -0x440
    ctx->pc = 0x1c4b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966208));
label_1c4b8c:
    // 0x1c4b8c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c4b90:
    // 0x1c4b90: 0x245416c0  addiu       $s4, $v0, 0x16C0
    ctx->pc = 0x1c4b90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_1c4b94:
    // 0x1c4b94: 0xc05e234  jal         func_1788D0
label_1c4b98:
    if (ctx->pc == 0x1C4B98u) {
        ctx->pc = 0x1C4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B94u;
        // 0x1c4b98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B9Cu;
        goto label_1c4b9c;
    }
    ctx->pc = 0x1C4B94u;
    SET_GPR_U32(ctx, 31, 0x1C4B9Cu);
    ctx->pc = 0x1C4B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B94u;
    // 0x1c4b98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C4B94u, 0x1C4B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B9Cu;
label_1c4b9c:
    // 0x1c4b9c: 0xc070834  jal         func_1C20D0
label_1c4ba0:
    if (ctx->pc == 0x1C4BA0u) {
        ctx->pc = 0x1C4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B9Cu;
        // 0x1c4ba0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BA4u;
        goto label_1c4ba4;
    }
    ctx->pc = 0x1C4B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C4BA4u);
    ctx->pc = 0x1C4BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B9Cu;
    // 0x1c4ba0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1C4BA4u;
label_1c4ba4:
    // 0x1c4ba4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1c4ba4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ba8:
    // 0x1c4ba8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c4ba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4bac:
    // 0x1c4bac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c4bacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4bb0:
    // 0x1c4bb0: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1c4bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c4bb4:
    // 0x1c4bb4: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1c4bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1c4bb8:
    // 0x1c4bb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4bbc:
    // 0x1c4bbc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1c4bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1c4bc0:
    // 0x1c4bc0: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x1c4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1c4bc4:
    // 0x1c4bc4: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1c4bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1c4bc8:
    // 0x1c4bc8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1c4bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1c4bcc:
    // 0x1c4bcc: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1c4bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1c4bd0:
    // 0x1c4bd0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c4bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c4bd4:
    // 0x1c4bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4bd8:
    // 0x1c4bd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4bdc:
    // 0x1c4bdc: 0x3408ffe2  ori         $t0, $zero, 0xFFE2
    ctx->pc = 0x1c4bdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65506);
label_1c4be0:
    // 0x1c4be0: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x1c4be0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c4be4:
    // 0x1c4be4: 0xc05df9c  jal         func_177E70
label_1c4be8:
    if (ctx->pc == 0x1C4BE8u) {
        ctx->pc = 0x1C4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BE4u;
        // 0x1c4be8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BECu;
        goto label_1c4bec;
    }
    ctx->pc = 0x1C4BE4u;
    SET_GPR_U32(ctx, 31, 0x1C4BECu);
    ctx->pc = 0x1C4BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BE4u;
    // 0x1c4be8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1C4BE4u, 0x1C4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BECu;
label_1c4bec:
    // 0x1c4bec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c4becu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c4bf0:
    // 0x1c4bf0: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x1c4bf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_1c4bf4:
    // 0x1c4bf4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_1c4bf8:
    if (ctx->pc == 0x1C4BF8u) {
        ctx->pc = 0x1C4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BF4u;
        // 0x1c4bf8: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BFCu;
        goto label_1c4bfc;
    }
    ctx->pc = 0x1C4BF4u;
    {
        const bool branch_taken_0x1c4bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BF4u;
        // 0x1c4bf8: 0x26b500d0  addiu       $s5, $s5, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4bf4) {
            ctx->pc = 0x1C4BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4bb0;
        }
    }
    ctx->pc = 0x1C4BFCu;
label_1c4bfc:
    // 0x1c4bfc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1c4bfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1c4c00:
    // 0x1c4c00: 0x26100150  addiu       $s0, $s0, 0x150
    ctx->pc = 0x1c4c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_1c4c04:
    // 0x1c4c04: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x1c4c04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c4c08:
    // 0x1c4c08: 0x26310a10  addiu       $s1, $s1, 0xA10
    ctx->pc = 0x1c4c08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2576));
label_1c4c0c:
    // 0x1c4c0c: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
label_1c4c10:
    if (ctx->pc == 0x1C4C10u) {
        ctx->pc = 0x1C4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C0Cu;
        // 0x1c4c10: 0x26520350  addiu       $s2, $s2, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C14u;
        goto label_1c4c14;
    }
    ctx->pc = 0x1C4C0Cu;
    {
        const bool branch_taken_0x1c4c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C0Cu;
        // 0x1c4c10: 0x26520350  addiu       $s2, $s2, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c0c) {
            ctx->pc = 0x1C4AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4ae8;
        }
    }
    ctx->pc = 0x1C4C14u;
label_1c4c14:
    // 0x1c4c14: 0x0  nop
    ctx->pc = 0x1c4c14u;
    // NOP
label_1c4c18:
    // 0x1c4c18: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1c4c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1c4c1c:
    // 0x1c4c1c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1c4c1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1c4c20:
    // 0x1c4c20: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1c4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c4c24:
    // 0x1c4c24: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
label_1c4c28:
    if (ctx->pc == 0x1C4C28u) {
        ctx->pc = 0x1C4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C24u;
        // 0x1c4c28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C2Cu;
        goto label_1c4c2c;
    }
    ctx->pc = 0x1C4C24u;
    {
        const bool branch_taken_0x1c4c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C24u;
        // 0x1c4c28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c24) {
            ctx->pc = 0x1C4CB8u;
            goto label_1c4cb8;
        }
    }
    ctx->pc = 0x1C4C2Cu;
label_1c4c2c:
    // 0x1c4c2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c4c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4c30:
    // 0x1c4c30: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c4c34:
    // 0x1c4c34: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1c4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c4c38:
    // 0x1c4c38: 0x244236a0  addiu       $v0, $v0, 0x36A0
    ctx->pc = 0x1c4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13984));
label_1c4c3c:
    // 0x1c4c3c: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1c4c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c4c40:
    // 0x1c4c40: 0xc05e234  jal         func_1788D0
label_1c4c44:
    if (ctx->pc == 0x1C4C44u) {
        ctx->pc = 0x1C4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C40u;
        // 0x1c4c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C48u;
        goto label_1c4c48;
    }
    ctx->pc = 0x1C4C40u;
    SET_GPR_U32(ctx, 31, 0x1C4C48u);
    ctx->pc = 0x1C4C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C40u;
    // 0x1c4c44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C4C40u, 0x1C4C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C48u;
label_1c4c48:
    // 0x1c4c48: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x1c4c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c4c4c:
    // 0x1c4c4c: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1c4c4cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1c4c50:
    // 0x1c4c50: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1c4c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1c4c54:
    // 0x1c4c54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c4c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c4c58:
    // 0x1c4c58: 0x2406024e  addiu       $a2, $zero, 0x24E
    ctx->pc = 0x1c4c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
label_1c4c5c:
    // 0x1c4c5c: 0x24070184  addiu       $a3, $zero, 0x184
    ctx->pc = 0x1c4c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
label_1c4c60:
    // 0x1c4c60: 0x3408ffe3  ori         $t0, $zero, 0xFFE3
    ctx->pc = 0x1c4c60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65507);
label_1c4c64:
    // 0x1c4c64: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1c4c64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1c4c68:
    // 0x1c4c68: 0xc0708ac  jal         func_1C22B0
label_1c4c6c:
    if (ctx->pc == 0x1C4C6Cu) {
        ctx->pc = 0x1C4C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C68u;
        // 0x1c4c6c: 0x256bb830  addiu       $t3, $t3, -0x47D0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294948912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C70u;
        goto label_1c4c70;
    }
    ctx->pc = 0x1C4C68u;
    SET_GPR_U32(ctx, 31, 0x1C4C70u);
    ctx->pc = 0x1C4C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C68u;
    // 0x1c4c6c: 0x256bb830  addiu       $t3, $t3, -0x47D0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294948912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1C4C70u;
label_1c4c70:
    // 0x1c4c70: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1c4c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c4c74:
    // 0x1c4c74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c4c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c4c78:
    // 0x1c4c78: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1c4c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1c4c7c:
    // 0x1c4c7c: 0xa2070080  sb          $a3, 0x80($s0)
    ctx->pc = 0x1c4c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 7));
label_1c4c80:
    // 0x1c4c80: 0xa2060081  sb          $a2, 0x81($s0)
    ctx->pc = 0x1c4c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 6));
label_1c4c84:
    // 0x1c4c84: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c4c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c4c88:
    // 0x1c4c88: 0xa2070082  sb          $a3, 0x82($s0)
    ctx->pc = 0x1c4c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 7));
label_1c4c8c:
    // 0x1c4c8c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1c4c90:
    // 0x1c4c90: 0xa2050083  sb          $a1, 0x83($s0)
    ctx->pc = 0x1c4c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 5));
label_1c4c94:
    // 0x1c4c94: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1c4c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c4c98:
    // 0x1c4c98: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x1c4c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
label_1c4c9c:
    // 0x1c4c9c: 0x26520150  addiu       $s2, $s2, 0x150
    ctx->pc = 0x1c4c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_1c4ca0:
    // 0x1c4ca0: 0xa2070120  sb          $a3, 0x120($s0)
    ctx->pc = 0x1c4ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 288), (uint8_t)GPR_U32(ctx, 7));
label_1c4ca4:
    // 0x1c4ca4: 0xa2060121  sb          $a2, 0x121($s0)
    ctx->pc = 0x1c4ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 289), (uint8_t)GPR_U32(ctx, 6));
label_1c4ca8:
    // 0x1c4ca8: 0xa2070122  sb          $a3, 0x122($s0)
    ctx->pc = 0x1c4ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 290), (uint8_t)GPR_U32(ctx, 7));
label_1c4cac:
    // 0x1c4cac: 0xa2050123  sb          $a1, 0x123($s0)
    ctx->pc = 0x1c4cacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 291), (uint8_t)GPR_U32(ctx, 5));
label_1c4cb0:
    // 0x1c4cb0: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_1c4cb4:
    if (ctx->pc == 0x1C4CB4u) {
        ctx->pc = 0x1C4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CB0u;
        // 0x1c4cb4: 0xae040124  sw          $a0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4CB8u;
        goto label_1c4cb8;
    }
    ctx->pc = 0x1C4CB0u;
    {
        const bool branch_taken_0x1c4cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CB0u;
        // 0x1c4cb4: 0xae040124  sw          $a0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cb0) {
            ctx->pc = 0x1C4C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4c30;
        }
    }
    ctx->pc = 0x1C4CB8u;
label_1c4cb8:
    // 0x1c4cb8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1c4cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1c4cbc:
    // 0x1c4cbc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1c4cbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c4cc0:
    // 0x1c4cc0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1c4cc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c4cc4:
    // 0x1c4cc4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1c4cc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c4cc8:
    // 0x1c4cc8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1c4cc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c4ccc:
    // 0x1c4ccc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c4cccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c4cd0:
    // 0x1c4cd0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1c4cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c4cd4:
    // 0x1c4cd4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c4cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c4cd8:
    // 0x1c4cd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c4cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4cdc:
    // 0x1c4cdc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c4cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4ce0:
    // 0x1c4ce0: 0x3e00008  jr          $ra
label_1c4ce4:
    if (ctx->pc == 0x1C4CE4u) {
        ctx->pc = 0x1C4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CE0u;
        // 0x1c4ce4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4CE8u;
        goto label_1c4ce8;
    }
    ctx->pc = 0x1C4CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CE0u;
        // 0x1c4ce4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4CE8u;
label_1c4ce8:
    // 0x1c4ce8: 0x0  nop
    ctx->pc = 0x1c4ce8u;
    // NOP
label_1c4cec:
    // 0x1c4cec: 0x0  nop
    ctx->pc = 0x1c4cecu;
    // NOP
label_1c4cf0:
    // 0x1c4cf0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1c4cf4:
    // 0x1c4cf4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1c4cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1c4cf8:
    // 0x1c4cf8: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1c4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1c4cfc:
    // 0x1c4cfc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1c4cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1c4d00:
    // 0x1c4d00: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1c4d00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d04:
    // 0x1c4d04: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1c4d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1c4d08:
    // 0x1c4d08: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1c4d08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d0c:
    // 0x1c4d0c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1c4d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1c4d10:
    // 0x1c4d10: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1c4d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1c4d14:
    // 0x1c4d14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c4d14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d18:
    // 0x1c4d18: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1c4d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1c4d1c:
    // 0x1c4d1c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1c4d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c4d20:
    // 0x1c4d20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1c4d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1c4d24:
    // 0x1c4d24: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c4d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c4d28:
    // 0x1c4d28: 0xc05e234  jal         func_1788D0
label_1c4d2c:
    if (ctx->pc == 0x1C4D2Cu) {
        ctx->pc = 0x1C4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D28u;
        // 0x1c4d2c: 0x7fb00030  sq          $s0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D30u;
        goto label_1c4d30;
    }
    ctx->pc = 0x1C4D28u;
    SET_GPR_U32(ctx, 31, 0x1C4D30u);
    ctx->pc = 0x1C4D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D28u;
    // 0x1c4d2c: 0x7fb00030  sq          $s0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C4D28u, 0x1C4D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4D30u;
label_1c4d30:
    // 0x1c4d30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c4d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d34:
    // 0x1c4d34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c4d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d38:
    // 0x1c4d38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c4d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d3c:
    // 0x1c4d3c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c4d3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d40:
    // 0x1c4d40: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1c4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1c4d44:
    // 0x1c4d44: 0x2f21821  addu        $v1, $s7, $s2
    ctx->pc = 0x1c4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_1c4d48:
    // 0x1c4d48: 0x24428db0  addiu       $v0, $v0, -0x7250
    ctx->pc = 0x1c4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938032));
label_1c4d4c:
    // 0x1c4d4c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1c4d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1c4d50:
    // 0x1c4d50: 0x9624000c  lhu         $a0, 0xC($s1)
    ctx->pc = 0x1c4d50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_1c4d54:
    // 0x1c4d54: 0xc070834  jal         func_1C20D0
label_1c4d58:
    if (ctx->pc == 0x1C4D58u) {
        ctx->pc = 0x1C4D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D54u;
        // 0x1c4d58: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D5Cu;
        goto label_1c4d5c;
    }
    ctx->pc = 0x1C4D54u;
    SET_GPR_U32(ctx, 31, 0x1C4D5Cu);
    ctx->pc = 0x1C4D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4D54u;
    // 0x1c4d58: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1C4D5Cu;
label_1c4d5c:
    // 0x1c4d5c: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
label_1c4d60:
    if (ctx->pc == 0x1C4D60u) {
        ctx->pc = 0x1C4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D5Cu;
        // 0x1c4d60: 0x3c040029  lui         $a0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D64u;
        goto label_1c4d64;
    }
    ctx->pc = 0x1C4D5Cu;
    {
        const bool branch_taken_0x1c4d5c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D5Cu;
        // 0x1c4d60: 0x3c040029  lui         $a0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d5c) {
            ctx->pc = 0x1C4D90u;
            goto label_1c4d90;
        }
    }
    ctx->pc = 0x1C4D64u;
label_1c4d64:
    // 0x1c4d64: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x1c4d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1c4d68:
    // 0x1c4d68: 0x24848de0  addiu       $a0, $a0, -0x7220
    ctx->pc = 0x1c4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938080));
label_1c4d6c:
    // 0x1c4d6c: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x1c4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1c4d70:
    // 0x1c4d70: 0x942821  addu        $a1, $a0, $s4
    ctx->pc = 0x1c4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1c4d74:
    // 0x1c4d74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c4d74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d78:
    // 0x1c4d78: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1c4d78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1c4d7c:
    // 0x1c4d7c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1c4d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c4d80:
    // 0x1c4d80: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1c4d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c4d84:
    // 0x1c4d84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c4d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4d88:
    // 0x1c4d88: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c4d8c:
    if (ctx->pc == 0x1C4D8Cu) {
        ctx->pc = 0x1C4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D88u;
        // 0x1c4d8c: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4D90u;
        goto label_1c4d90;
    }
    ctx->pc = 0x1C4D88u;
    {
        const bool branch_taken_0x1c4d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4D88u;
        // 0x1c4d8c: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d88) {
            ctx->pc = 0x1C4DB0u;
            goto label_1c4db0;
        }
    }
    ctx->pc = 0x1C4D90u;
label_1c4d90:
    // 0x1c4d90: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1c4d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1c4d94:
    // 0x1c4d94: 0x24638dd0  addiu       $v1, $v1, -0x7230
    ctx->pc = 0x1c4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938064));
label_1c4d98:
    // 0x1c4d98: 0x96290004  lhu         $t1, 0x4($s1)
    ctx->pc = 0x1c4d98u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1c4d9c:
    // 0x1c4d9c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1c4d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1c4da0:
    // 0x1c4da0: 0x962a0006  lhu         $t2, 0x6($s1)
    ctx->pc = 0x1c4da0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_1c4da4:
    // 0x1c4da4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1c4da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4da8:
    // 0x1c4da8: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x1c4da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c4dac:
    // 0x1c4dac: 0x0  nop
    ctx->pc = 0x1c4dacu;
    // NOP
label_1c4db0:
    // 0x1c4db0: 0x962b0002  lhu         $t3, 0x2($s1)
    ctx->pc = 0x1c4db0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1c4db4:
    // 0x1c4db4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c4db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4db8:
    // 0x1c4db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4dbc:
    // 0x1c4dbc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c4dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c4dc0:
    // 0x1c4dc0: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1c4dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1c4dc4:
    // 0x1c4dc4: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1c4dc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1c4dc8:
    // 0x1c4dc8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1c4dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1c4dcc:
    // 0x1c4dcc: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x1c4dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_1c4dd0:
    // 0x1c4dd0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1c4dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1c4dd4:
    // 0x1c4dd4: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x1c4dd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1c4dd8:
    // 0x1c4dd8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1c4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1c4ddc:
    // 0x1c4ddc: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x1c4ddcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_1c4de0:
    // 0x1c4de0: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1c4de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_1c4de4:
    // 0x1c4de4: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1c4de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_1c4de8:
    // 0x1c4de8: 0x962b0000  lhu         $t3, 0x0($s1)
    ctx->pc = 0x1c4de8u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1c4dec:
    // 0x1c4dec: 0xc05dd88  jal         func_177620
label_1c4df0:
    if (ctx->pc == 0x1C4DF0u) {
        ctx->pc = 0x1C4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DECu;
        // 0x1c4df0: 0x3408ffe2  ori         $t0, $zero, 0xFFE2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65506);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4DF4u;
        goto label_1c4df4;
    }
    ctx->pc = 0x1C4DECu;
    SET_GPR_U32(ctx, 31, 0x1C4DF4u);
    ctx->pc = 0x1C4DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4DECu;
    // 0x1c4df0: 0x3408ffe2  ori         $t0, $zero, 0xFFE2 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65506);
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x1C4DECu, 0x1C4DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4DF4u;
label_1c4df4:
    // 0x1c4df4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c4df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1c4df8u;
    return;
}

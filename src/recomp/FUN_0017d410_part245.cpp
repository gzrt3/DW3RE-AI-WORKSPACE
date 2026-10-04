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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part245(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f4650u: goto label_1f4650;
        case 0x1f4654u: goto label_1f4654;
        case 0x1f4658u: goto label_1f4658;
        case 0x1f465cu: goto label_1f465c;
        case 0x1f4660u: goto label_1f4660;
        case 0x1f4664u: goto label_1f4664;
        case 0x1f4668u: goto label_1f4668;
        case 0x1f466cu: goto label_1f466c;
        case 0x1f4670u: goto label_1f4670;
        case 0x1f4674u: goto label_1f4674;
        case 0x1f4678u: goto label_1f4678;
        case 0x1f467cu: goto label_1f467c;
        case 0x1f4680u: goto label_1f4680;
        case 0x1f4684u: goto label_1f4684;
        case 0x1f4688u: goto label_1f4688;
        case 0x1f468cu: goto label_1f468c;
        case 0x1f4690u: goto label_1f4690;
        case 0x1f4694u: goto label_1f4694;
        case 0x1f4698u: goto label_1f4698;
        case 0x1f469cu: goto label_1f469c;
        case 0x1f46a0u: goto label_1f46a0;
        case 0x1f46a4u: goto label_1f46a4;
        case 0x1f46a8u: goto label_1f46a8;
        case 0x1f46acu: goto label_1f46ac;
        case 0x1f46b0u: goto label_1f46b0;
        case 0x1f46b4u: goto label_1f46b4;
        case 0x1f46b8u: goto label_1f46b8;
        case 0x1f46bcu: goto label_1f46bc;
        case 0x1f46c0u: goto label_1f46c0;
        case 0x1f46c4u: goto label_1f46c4;
        case 0x1f46c8u: goto label_1f46c8;
        case 0x1f46ccu: goto label_1f46cc;
        case 0x1f46d0u: goto label_1f46d0;
        case 0x1f46d4u: goto label_1f46d4;
        case 0x1f46d8u: goto label_1f46d8;
        case 0x1f46dcu: goto label_1f46dc;
        case 0x1f46e0u: goto label_1f46e0;
        case 0x1f46e4u: goto label_1f46e4;
        case 0x1f46e8u: goto label_1f46e8;
        case 0x1f46ecu: goto label_1f46ec;
        case 0x1f46f0u: goto label_1f46f0;
        case 0x1f46f4u: goto label_1f46f4;
        case 0x1f46f8u: goto label_1f46f8;
        case 0x1f46fcu: goto label_1f46fc;
        case 0x1f4700u: goto label_1f4700;
        case 0x1f4704u: goto label_1f4704;
        case 0x1f4708u: goto label_1f4708;
        case 0x1f470cu: goto label_1f470c;
        case 0x1f4710u: goto label_1f4710;
        case 0x1f4714u: goto label_1f4714;
        case 0x1f4718u: goto label_1f4718;
        case 0x1f471cu: goto label_1f471c;
        case 0x1f4720u: goto label_1f4720;
        case 0x1f4724u: goto label_1f4724;
        case 0x1f4728u: goto label_1f4728;
        case 0x1f472cu: goto label_1f472c;
        case 0x1f4730u: goto label_1f4730;
        case 0x1f4734u: goto label_1f4734;
        case 0x1f4738u: goto label_1f4738;
        case 0x1f473cu: goto label_1f473c;
        case 0x1f4740u: goto label_1f4740;
        case 0x1f4744u: goto label_1f4744;
        case 0x1f4748u: goto label_1f4748;
        case 0x1f474cu: goto label_1f474c;
        case 0x1f4750u: goto label_1f4750;
        case 0x1f4754u: goto label_1f4754;
        case 0x1f4758u: goto label_1f4758;
        case 0x1f475cu: goto label_1f475c;
        case 0x1f4760u: goto label_1f4760;
        case 0x1f4764u: goto label_1f4764;
        case 0x1f4768u: goto label_1f4768;
        case 0x1f476cu: goto label_1f476c;
        case 0x1f4770u: goto label_1f4770;
        case 0x1f4774u: goto label_1f4774;
        case 0x1f4778u: goto label_1f4778;
        case 0x1f477cu: goto label_1f477c;
        case 0x1f4780u: goto label_1f4780;
        case 0x1f4784u: goto label_1f4784;
        case 0x1f4788u: goto label_1f4788;
        case 0x1f478cu: goto label_1f478c;
        case 0x1f4790u: goto label_1f4790;
        case 0x1f4794u: goto label_1f4794;
        case 0x1f4798u: goto label_1f4798;
        case 0x1f479cu: goto label_1f479c;
        case 0x1f47a0u: goto label_1f47a0;
        case 0x1f47a4u: goto label_1f47a4;
        case 0x1f47a8u: goto label_1f47a8;
        case 0x1f47acu: goto label_1f47ac;
        case 0x1f47b0u: goto label_1f47b0;
        case 0x1f47b4u: goto label_1f47b4;
        case 0x1f47b8u: goto label_1f47b8;
        case 0x1f47bcu: goto label_1f47bc;
        case 0x1f47c0u: goto label_1f47c0;
        case 0x1f47c4u: goto label_1f47c4;
        case 0x1f47c8u: goto label_1f47c8;
        case 0x1f47ccu: goto label_1f47cc;
        case 0x1f47d0u: goto label_1f47d0;
        case 0x1f47d4u: goto label_1f47d4;
        case 0x1f47d8u: goto label_1f47d8;
        case 0x1f47dcu: goto label_1f47dc;
        case 0x1f47e0u: goto label_1f47e0;
        case 0x1f47e4u: goto label_1f47e4;
        case 0x1f47e8u: goto label_1f47e8;
        case 0x1f47ecu: goto label_1f47ec;
        case 0x1f47f0u: goto label_1f47f0;
        case 0x1f47f4u: goto label_1f47f4;
        case 0x1f47f8u: goto label_1f47f8;
        case 0x1f47fcu: goto label_1f47fc;
        case 0x1f4800u: goto label_1f4800;
        case 0x1f4804u: goto label_1f4804;
        case 0x1f4808u: goto label_1f4808;
        case 0x1f480cu: goto label_1f480c;
        case 0x1f4810u: goto label_1f4810;
        case 0x1f4814u: goto label_1f4814;
        case 0x1f4818u: goto label_1f4818;
        case 0x1f481cu: goto label_1f481c;
        case 0x1f4820u: goto label_1f4820;
        case 0x1f4824u: goto label_1f4824;
        case 0x1f4828u: goto label_1f4828;
        case 0x1f482cu: goto label_1f482c;
        case 0x1f4830u: goto label_1f4830;
        case 0x1f4834u: goto label_1f4834;
        case 0x1f4838u: goto label_1f4838;
        case 0x1f483cu: goto label_1f483c;
        case 0x1f4840u: goto label_1f4840;
        case 0x1f4844u: goto label_1f4844;
        case 0x1f4848u: goto label_1f4848;
        case 0x1f484cu: goto label_1f484c;
        case 0x1f4850u: goto label_1f4850;
        case 0x1f4854u: goto label_1f4854;
        case 0x1f4858u: goto label_1f4858;
        case 0x1f485cu: goto label_1f485c;
        case 0x1f4860u: goto label_1f4860;
        case 0x1f4864u: goto label_1f4864;
        case 0x1f4868u: goto label_1f4868;
        case 0x1f486cu: goto label_1f486c;
        case 0x1f4870u: goto label_1f4870;
        case 0x1f4874u: goto label_1f4874;
        case 0x1f4878u: goto label_1f4878;
        case 0x1f487cu: goto label_1f487c;
        case 0x1f4880u: goto label_1f4880;
        case 0x1f4884u: goto label_1f4884;
        case 0x1f4888u: goto label_1f4888;
        case 0x1f488cu: goto label_1f488c;
        case 0x1f4890u: goto label_1f4890;
        case 0x1f4894u: goto label_1f4894;
        case 0x1f4898u: goto label_1f4898;
        case 0x1f489cu: goto label_1f489c;
        case 0x1f48a0u: goto label_1f48a0;
        case 0x1f48a4u: goto label_1f48a4;
        case 0x1f48a8u: goto label_1f48a8;
        case 0x1f48acu: goto label_1f48ac;
        case 0x1f48b0u: goto label_1f48b0;
        case 0x1f48b4u: goto label_1f48b4;
        case 0x1f48b8u: goto label_1f48b8;
        case 0x1f48bcu: goto label_1f48bc;
        case 0x1f48c0u: goto label_1f48c0;
        case 0x1f48c4u: goto label_1f48c4;
        case 0x1f48c8u: goto label_1f48c8;
        case 0x1f48ccu: goto label_1f48cc;
        case 0x1f48d0u: goto label_1f48d0;
        case 0x1f48d4u: goto label_1f48d4;
        case 0x1f48d8u: goto label_1f48d8;
        case 0x1f48dcu: goto label_1f48dc;
        case 0x1f48e0u: goto label_1f48e0;
        case 0x1f48e4u: goto label_1f48e4;
        case 0x1f48e8u: goto label_1f48e8;
        case 0x1f48ecu: goto label_1f48ec;
        case 0x1f48f0u: goto label_1f48f0;
        case 0x1f48f4u: goto label_1f48f4;
        case 0x1f48f8u: goto label_1f48f8;
        case 0x1f48fcu: goto label_1f48fc;
        case 0x1f4900u: goto label_1f4900;
        case 0x1f4904u: goto label_1f4904;
        case 0x1f4908u: goto label_1f4908;
        case 0x1f490cu: goto label_1f490c;
        case 0x1f4910u: goto label_1f4910;
        case 0x1f4914u: goto label_1f4914;
        case 0x1f4918u: goto label_1f4918;
        case 0x1f491cu: goto label_1f491c;
        case 0x1f4920u: goto label_1f4920;
        case 0x1f4924u: goto label_1f4924;
        case 0x1f4928u: goto label_1f4928;
        case 0x1f492cu: goto label_1f492c;
        case 0x1f4930u: goto label_1f4930;
        case 0x1f4934u: goto label_1f4934;
        case 0x1f4938u: goto label_1f4938;
        case 0x1f493cu: goto label_1f493c;
        case 0x1f4940u: goto label_1f4940;
        case 0x1f4944u: goto label_1f4944;
        case 0x1f4948u: goto label_1f4948;
        case 0x1f494cu: goto label_1f494c;
        case 0x1f4950u: goto label_1f4950;
        case 0x1f4954u: goto label_1f4954;
        case 0x1f4958u: goto label_1f4958;
        case 0x1f495cu: goto label_1f495c;
        case 0x1f4960u: goto label_1f4960;
        case 0x1f4964u: goto label_1f4964;
        case 0x1f4968u: goto label_1f4968;
        case 0x1f496cu: goto label_1f496c;
        case 0x1f4970u: goto label_1f4970;
        case 0x1f4974u: goto label_1f4974;
        case 0x1f4978u: goto label_1f4978;
        case 0x1f497cu: goto label_1f497c;
        case 0x1f4980u: goto label_1f4980;
        case 0x1f4984u: goto label_1f4984;
        case 0x1f4988u: goto label_1f4988;
        case 0x1f498cu: goto label_1f498c;
        case 0x1f4990u: goto label_1f4990;
        case 0x1f4994u: goto label_1f4994;
        case 0x1f4998u: goto label_1f4998;
        case 0x1f499cu: goto label_1f499c;
        case 0x1f49a0u: goto label_1f49a0;
        case 0x1f49a4u: goto label_1f49a4;
        case 0x1f49a8u: goto label_1f49a8;
        case 0x1f49acu: goto label_1f49ac;
        case 0x1f49b0u: goto label_1f49b0;
        case 0x1f49b4u: goto label_1f49b4;
        case 0x1f49b8u: goto label_1f49b8;
        case 0x1f49bcu: goto label_1f49bc;
        case 0x1f49c0u: goto label_1f49c0;
        case 0x1f49c4u: goto label_1f49c4;
        case 0x1f49c8u: goto label_1f49c8;
        case 0x1f49ccu: goto label_1f49cc;
        case 0x1f49d0u: goto label_1f49d0;
        case 0x1f49d4u: goto label_1f49d4;
        case 0x1f49d8u: goto label_1f49d8;
        case 0x1f49dcu: goto label_1f49dc;
        case 0x1f49e0u: goto label_1f49e0;
        case 0x1f49e4u: goto label_1f49e4;
        case 0x1f49e8u: goto label_1f49e8;
        case 0x1f49ecu: goto label_1f49ec;
        case 0x1f49f0u: goto label_1f49f0;
        case 0x1f49f4u: goto label_1f49f4;
        case 0x1f49f8u: goto label_1f49f8;
        case 0x1f49fcu: goto label_1f49fc;
        case 0x1f4a00u: goto label_1f4a00;
        case 0x1f4a04u: goto label_1f4a04;
        case 0x1f4a08u: goto label_1f4a08;
        case 0x1f4a0cu: goto label_1f4a0c;
        case 0x1f4a10u: goto label_1f4a10;
        case 0x1f4a14u: goto label_1f4a14;
        case 0x1f4a18u: goto label_1f4a18;
        case 0x1f4a1cu: goto label_1f4a1c;
        case 0x1f4a20u: goto label_1f4a20;
        case 0x1f4a24u: goto label_1f4a24;
        case 0x1f4a28u: goto label_1f4a28;
        case 0x1f4a2cu: goto label_1f4a2c;
        case 0x1f4a30u: goto label_1f4a30;
        case 0x1f4a34u: goto label_1f4a34;
        case 0x1f4a38u: goto label_1f4a38;
        case 0x1f4a3cu: goto label_1f4a3c;
        case 0x1f4a40u: goto label_1f4a40;
        case 0x1f4a44u: goto label_1f4a44;
        case 0x1f4a48u: goto label_1f4a48;
        case 0x1f4a4cu: goto label_1f4a4c;
        case 0x1f4a50u: goto label_1f4a50;
        case 0x1f4a54u: goto label_1f4a54;
        case 0x1f4a58u: goto label_1f4a58;
        case 0x1f4a5cu: goto label_1f4a5c;
        case 0x1f4a60u: goto label_1f4a60;
        case 0x1f4a64u: goto label_1f4a64;
        case 0x1f4a68u: goto label_1f4a68;
        case 0x1f4a6cu: goto label_1f4a6c;
        case 0x1f4a70u: goto label_1f4a70;
        case 0x1f4a74u: goto label_1f4a74;
        case 0x1f4a78u: goto label_1f4a78;
        case 0x1f4a7cu: goto label_1f4a7c;
        case 0x1f4a80u: goto label_1f4a80;
        case 0x1f4a84u: goto label_1f4a84;
        case 0x1f4a88u: goto label_1f4a88;
        case 0x1f4a8cu: goto label_1f4a8c;
        case 0x1f4a90u: goto label_1f4a90;
        case 0x1f4a94u: goto label_1f4a94;
        case 0x1f4a98u: goto label_1f4a98;
        case 0x1f4a9cu: goto label_1f4a9c;
        case 0x1f4aa0u: goto label_1f4aa0;
        case 0x1f4aa4u: goto label_1f4aa4;
        case 0x1f4aa8u: goto label_1f4aa8;
        case 0x1f4aacu: goto label_1f4aac;
        case 0x1f4ab0u: goto label_1f4ab0;
        case 0x1f4ab4u: goto label_1f4ab4;
        case 0x1f4ab8u: goto label_1f4ab8;
        case 0x1f4abcu: goto label_1f4abc;
        case 0x1f4ac0u: goto label_1f4ac0;
        case 0x1f4ac4u: goto label_1f4ac4;
        case 0x1f4ac8u: goto label_1f4ac8;
        case 0x1f4accu: goto label_1f4acc;
        case 0x1f4ad0u: goto label_1f4ad0;
        case 0x1f4ad4u: goto label_1f4ad4;
        case 0x1f4ad8u: goto label_1f4ad8;
        case 0x1f4adcu: goto label_1f4adc;
        case 0x1f4ae0u: goto label_1f4ae0;
        case 0x1f4ae4u: goto label_1f4ae4;
        case 0x1f4ae8u: goto label_1f4ae8;
        case 0x1f4aecu: goto label_1f4aec;
        case 0x1f4af0u: goto label_1f4af0;
        case 0x1f4af4u: goto label_1f4af4;
        case 0x1f4af8u: goto label_1f4af8;
        case 0x1f4afcu: goto label_1f4afc;
        case 0x1f4b00u: goto label_1f4b00;
        case 0x1f4b04u: goto label_1f4b04;
        case 0x1f4b08u: goto label_1f4b08;
        case 0x1f4b0cu: goto label_1f4b0c;
        case 0x1f4b10u: goto label_1f4b10;
        case 0x1f4b14u: goto label_1f4b14;
        case 0x1f4b18u: goto label_1f4b18;
        case 0x1f4b1cu: goto label_1f4b1c;
        case 0x1f4b20u: goto label_1f4b20;
        case 0x1f4b24u: goto label_1f4b24;
        case 0x1f4b28u: goto label_1f4b28;
        case 0x1f4b2cu: goto label_1f4b2c;
        case 0x1f4b30u: goto label_1f4b30;
        case 0x1f4b34u: goto label_1f4b34;
        case 0x1f4b38u: goto label_1f4b38;
        case 0x1f4b3cu: goto label_1f4b3c;
        case 0x1f4b40u: goto label_1f4b40;
        case 0x1f4b44u: goto label_1f4b44;
        case 0x1f4b48u: goto label_1f4b48;
        case 0x1f4b4cu: goto label_1f4b4c;
        case 0x1f4b50u: goto label_1f4b50;
        case 0x1f4b54u: goto label_1f4b54;
        case 0x1f4b58u: goto label_1f4b58;
        case 0x1f4b5cu: goto label_1f4b5c;
        case 0x1f4b60u: goto label_1f4b60;
        case 0x1f4b64u: goto label_1f4b64;
        case 0x1f4b68u: goto label_1f4b68;
        case 0x1f4b6cu: goto label_1f4b6c;
        case 0x1f4b70u: goto label_1f4b70;
        case 0x1f4b74u: goto label_1f4b74;
        case 0x1f4b78u: goto label_1f4b78;
        case 0x1f4b7cu: goto label_1f4b7c;
        case 0x1f4b80u: goto label_1f4b80;
        case 0x1f4b84u: goto label_1f4b84;
        case 0x1f4b88u: goto label_1f4b88;
        case 0x1f4b8cu: goto label_1f4b8c;
        case 0x1f4b90u: goto label_1f4b90;
        case 0x1f4b94u: goto label_1f4b94;
        case 0x1f4b98u: goto label_1f4b98;
        case 0x1f4b9cu: goto label_1f4b9c;
        case 0x1f4ba0u: goto label_1f4ba0;
        case 0x1f4ba4u: goto label_1f4ba4;
        case 0x1f4ba8u: goto label_1f4ba8;
        case 0x1f4bacu: goto label_1f4bac;
        case 0x1f4bb0u: goto label_1f4bb0;
        case 0x1f4bb4u: goto label_1f4bb4;
        case 0x1f4bb8u: goto label_1f4bb8;
        case 0x1f4bbcu: goto label_1f4bbc;
        case 0x1f4bc0u: goto label_1f4bc0;
        case 0x1f4bc4u: goto label_1f4bc4;
        case 0x1f4bc8u: goto label_1f4bc8;
        case 0x1f4bccu: goto label_1f4bcc;
        case 0x1f4bd0u: goto label_1f4bd0;
        case 0x1f4bd4u: goto label_1f4bd4;
        case 0x1f4bd8u: goto label_1f4bd8;
        case 0x1f4bdcu: goto label_1f4bdc;
        case 0x1f4be0u: goto label_1f4be0;
        case 0x1f4be4u: goto label_1f4be4;
        case 0x1f4be8u: goto label_1f4be8;
        case 0x1f4becu: goto label_1f4bec;
        case 0x1f4bf0u: goto label_1f4bf0;
        case 0x1f4bf4u: goto label_1f4bf4;
        case 0x1f4bf8u: goto label_1f4bf8;
        case 0x1f4bfcu: goto label_1f4bfc;
        case 0x1f4c00u: goto label_1f4c00;
        case 0x1f4c04u: goto label_1f4c04;
        case 0x1f4c08u: goto label_1f4c08;
        case 0x1f4c0cu: goto label_1f4c0c;
        case 0x1f4c10u: goto label_1f4c10;
        case 0x1f4c14u: goto label_1f4c14;
        case 0x1f4c18u: goto label_1f4c18;
        case 0x1f4c1cu: goto label_1f4c1c;
        case 0x1f4c20u: goto label_1f4c20;
        case 0x1f4c24u: goto label_1f4c24;
        case 0x1f4c28u: goto label_1f4c28;
        case 0x1f4c2cu: goto label_1f4c2c;
        case 0x1f4c30u: goto label_1f4c30;
        case 0x1f4c34u: goto label_1f4c34;
        case 0x1f4c38u: goto label_1f4c38;
        case 0x1f4c3cu: goto label_1f4c3c;
        case 0x1f4c40u: goto label_1f4c40;
        case 0x1f4c44u: goto label_1f4c44;
        case 0x1f4c48u: goto label_1f4c48;
        case 0x1f4c4cu: goto label_1f4c4c;
        case 0x1f4c50u: goto label_1f4c50;
        case 0x1f4c54u: goto label_1f4c54;
        case 0x1f4c58u: goto label_1f4c58;
        case 0x1f4c5cu: goto label_1f4c5c;
        case 0x1f4c60u: goto label_1f4c60;
        case 0x1f4c64u: goto label_1f4c64;
        case 0x1f4c68u: goto label_1f4c68;
        case 0x1f4c6cu: goto label_1f4c6c;
        case 0x1f4c70u: goto label_1f4c70;
        case 0x1f4c74u: goto label_1f4c74;
        case 0x1f4c78u: goto label_1f4c78;
        case 0x1f4c7cu: goto label_1f4c7c;
        case 0x1f4c80u: goto label_1f4c80;
        case 0x1f4c84u: goto label_1f4c84;
        case 0x1f4c88u: goto label_1f4c88;
        case 0x1f4c8cu: goto label_1f4c8c;
        case 0x1f4c90u: goto label_1f4c90;
        case 0x1f4c94u: goto label_1f4c94;
        case 0x1f4c98u: goto label_1f4c98;
        case 0x1f4c9cu: goto label_1f4c9c;
        case 0x1f4ca0u: goto label_1f4ca0;
        case 0x1f4ca4u: goto label_1f4ca4;
        case 0x1f4ca8u: goto label_1f4ca8;
        case 0x1f4cacu: goto label_1f4cac;
        case 0x1f4cb0u: goto label_1f4cb0;
        case 0x1f4cb4u: goto label_1f4cb4;
        case 0x1f4cb8u: goto label_1f4cb8;
        case 0x1f4cbcu: goto label_1f4cbc;
        case 0x1f4cc0u: goto label_1f4cc0;
        case 0x1f4cc4u: goto label_1f4cc4;
        case 0x1f4cc8u: goto label_1f4cc8;
        case 0x1f4cccu: goto label_1f4ccc;
        case 0x1f4cd0u: goto label_1f4cd0;
        case 0x1f4cd4u: goto label_1f4cd4;
        case 0x1f4cd8u: goto label_1f4cd8;
        case 0x1f4cdcu: goto label_1f4cdc;
        case 0x1f4ce0u: goto label_1f4ce0;
        case 0x1f4ce4u: goto label_1f4ce4;
        case 0x1f4ce8u: goto label_1f4ce8;
        case 0x1f4cecu: goto label_1f4cec;
        case 0x1f4cf0u: goto label_1f4cf0;
        case 0x1f4cf4u: goto label_1f4cf4;
        case 0x1f4cf8u: goto label_1f4cf8;
        case 0x1f4cfcu: goto label_1f4cfc;
        case 0x1f4d00u: goto label_1f4d00;
        case 0x1f4d04u: goto label_1f4d04;
        case 0x1f4d08u: goto label_1f4d08;
        case 0x1f4d0cu: goto label_1f4d0c;
        case 0x1f4d10u: goto label_1f4d10;
        case 0x1f4d14u: goto label_1f4d14;
        case 0x1f4d18u: goto label_1f4d18;
        case 0x1f4d1cu: goto label_1f4d1c;
        case 0x1f4d20u: goto label_1f4d20;
        case 0x1f4d24u: goto label_1f4d24;
        case 0x1f4d28u: goto label_1f4d28;
        case 0x1f4d2cu: goto label_1f4d2c;
        case 0x1f4d30u: goto label_1f4d30;
        case 0x1f4d34u: goto label_1f4d34;
        case 0x1f4d38u: goto label_1f4d38;
        case 0x1f4d3cu: goto label_1f4d3c;
        case 0x1f4d40u: goto label_1f4d40;
        case 0x1f4d44u: goto label_1f4d44;
        case 0x1f4d48u: goto label_1f4d48;
        case 0x1f4d4cu: goto label_1f4d4c;
        case 0x1f4d50u: goto label_1f4d50;
        case 0x1f4d54u: goto label_1f4d54;
        case 0x1f4d58u: goto label_1f4d58;
        case 0x1f4d5cu: goto label_1f4d5c;
        case 0x1f4d60u: goto label_1f4d60;
        case 0x1f4d64u: goto label_1f4d64;
        case 0x1f4d68u: goto label_1f4d68;
        case 0x1f4d6cu: goto label_1f4d6c;
        case 0x1f4d70u: goto label_1f4d70;
        case 0x1f4d74u: goto label_1f4d74;
        case 0x1f4d78u: goto label_1f4d78;
        case 0x1f4d7cu: goto label_1f4d7c;
        case 0x1f4d80u: goto label_1f4d80;
        case 0x1f4d84u: goto label_1f4d84;
        case 0x1f4d88u: goto label_1f4d88;
        case 0x1f4d8cu: goto label_1f4d8c;
        case 0x1f4d90u: goto label_1f4d90;
        case 0x1f4d94u: goto label_1f4d94;
        case 0x1f4d98u: goto label_1f4d98;
        case 0x1f4d9cu: goto label_1f4d9c;
        case 0x1f4da0u: goto label_1f4da0;
        case 0x1f4da4u: goto label_1f4da4;
        case 0x1f4da8u: goto label_1f4da8;
        case 0x1f4dacu: goto label_1f4dac;
        case 0x1f4db0u: goto label_1f4db0;
        case 0x1f4db4u: goto label_1f4db4;
        case 0x1f4db8u: goto label_1f4db8;
        case 0x1f4dbcu: goto label_1f4dbc;
        case 0x1f4dc0u: goto label_1f4dc0;
        case 0x1f4dc4u: goto label_1f4dc4;
        case 0x1f4dc8u: goto label_1f4dc8;
        case 0x1f4dccu: goto label_1f4dcc;
        case 0x1f4dd0u: goto label_1f4dd0;
        case 0x1f4dd4u: goto label_1f4dd4;
        case 0x1f4dd8u: goto label_1f4dd8;
        case 0x1f4ddcu: goto label_1f4ddc;
        case 0x1f4de0u: goto label_1f4de0;
        case 0x1f4de4u: goto label_1f4de4;
        case 0x1f4de8u: goto label_1f4de8;
        case 0x1f4decu: goto label_1f4dec;
        case 0x1f4df0u: goto label_1f4df0;
        case 0x1f4df4u: goto label_1f4df4;
        case 0x1f4df8u: goto label_1f4df8;
        case 0x1f4dfcu: goto label_1f4dfc;
        case 0x1f4e00u: goto label_1f4e00;
        case 0x1f4e04u: goto label_1f4e04;
        case 0x1f4e08u: goto label_1f4e08;
        case 0x1f4e0cu: goto label_1f4e0c;
        case 0x1f4e10u: goto label_1f4e10;
        case 0x1f4e14u: goto label_1f4e14;
        case 0x1f4e18u: goto label_1f4e18;
        case 0x1f4e1cu: goto label_1f4e1c;
        default: return;
    }

label_1f4650:
    // 0x1f4650: 0xac227fe4  sw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4650u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 2));
label_1f4654:
    // 0x1f4654: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1f4654u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f4658:
    // 0x1f4658: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f465c:
    // 0x1f465c: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f4660:
    // 0x1f4660: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1f4660u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f4664:
    // 0x1f4664: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f4664u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4668:
    // 0x1f4668: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f466c:
    // 0x1f466c: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x1f466cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1f4670:
    // 0x1f4670: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4674:
    // 0x1f4674: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4674u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4678:
    // 0x1f4678: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f4678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f467c:
    // 0x1f467c: 0xac267fe8  sw          $a2, 0x7FE8($at)
    ctx->pc = 0x1f467cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32744), GPR_U32(ctx, 6));
label_1f4680:
    // 0x1f4680: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4684:
    // 0x1f4684: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4688:
    // 0x1f4688: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1f4688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f468c:
    // 0x1f468c: 0x8c227fe8  lw          $v0, 0x7FE8($at)
    ctx->pc = 0x1f468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32744)));
label_1f4690:
    // 0x1f4690: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4694:
    // 0x1f4694: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1f4694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1f4698:
    // 0x1f4698: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1f4698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f469c:
    // 0x1f469c: 0xc08f20e  jal         func_23C838
label_1f46a0:
    if (ctx->pc == 0x1F46A0u) {
        ctx->pc = 0x1F46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F469Cu;
        // 0x1f46a0: 0x24a5d4f0  addiu       $a1, $a1, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F46A4u;
        goto label_1f46a4;
    }
    ctx->pc = 0x1F469Cu;
    SET_GPR_U32(ctx, 31, 0x1F46A4u);
    ctx->pc = 0x1F46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F469Cu;
    // 0x1f46a0: 0x24a5d4f0  addiu       $a1, $a1, -0x2B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F46A4u;
label_1f46a4:
    // 0x1f46a4: 0x100001b2  b           . + 4 + (0x1B2 << 2)
label_1f46a8:
    if (ctx->pc == 0x1F46A8u) {
        ctx->pc = 0x1F46ACu;
        goto label_1f46ac;
    }
    ctx->pc = 0x1F46A4u;
    {
        const bool branch_taken_0x1f46a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f46a4) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F46ACu;
label_1f46ac:
    // 0x1f46ac: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f46acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f46b0:
    // 0x1f46b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f46b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f46b4:
    // 0x1f46b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f46b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f46b8:
    // 0x1f46b8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1f46b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1f46bc:
    // 0x1f46bc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f46bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1f46c0:
    // 0x1f46c0: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x1f46c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
label_1f46c4:
    // 0x1f46c4: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1f46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1f46c8:
    // 0x1f46c8: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x1f46c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_1f46cc:
    // 0x1f46cc: 0x0  nop
    ctx->pc = 0x1f46ccu;
    // NOP
label_1f46d0:
    // 0x1f46d0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x1f46d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f46d4:
    // 0x1f46d4: 0x90a2367c  lbu         $v0, 0x367C($a1)
    ctx->pc = 0x1f46d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_1f46d8:
    // 0x1f46d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f46dc:
    if (ctx->pc == 0x1F46DCu) {
        ctx->pc = 0x1F46E0u;
        goto label_1f46e0;
    }
    ctx->pc = 0x1F46D8u;
    {
        const bool branch_taken_0x1f46d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f46d8) {
            ctx->pc = 0x1F4710u;
            goto label_1f4710;
        }
    }
    ctx->pc = 0x1F46E0u;
label_1f46e0:
    // 0x1f46e0: 0x8ca23674  lw          $v0, 0x3674($a1)
    ctx->pc = 0x1f46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_1f46e4:
    // 0x1f46e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f46e8:
    if (ctx->pc == 0x1F46E8u) {
        ctx->pc = 0x1F46ECu;
        goto label_1f46ec;
    }
    ctx->pc = 0x1F46E4u;
    {
        const bool branch_taken_0x1f46e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f46e4) {
            ctx->pc = 0x1F4710u;
            goto label_1f4710;
        }
    }
    ctx->pc = 0x1F46ECu;
label_1f46ec:
    // 0x1f46ec: 0x8ca53670  lw          $a1, 0x3670($a1)
    ctx->pc = 0x1f46ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13936)));
label_1f46f0:
    // 0x1f46f0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1f46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f46f4:
    // 0x1f46f4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f46f8:
    // 0x1f46f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f46fc:
    // 0x1f46fc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f46fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4700:
    // 0x1f4700: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f4704:
    if (ctx->pc == 0x1F4704u) {
        ctx->pc = 0x1F4708u;
        goto label_1f4708;
    }
    ctx->pc = 0x1F4700u;
    {
        const bool branch_taken_0x1f4700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f4700) {
            ctx->pc = 0x1F4710u;
            goto label_1f4710;
        }
    }
    ctx->pc = 0x1F4708u;
label_1f4708:
    // 0x1f4708: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f470c:
    if (ctx->pc == 0x1F470Cu) {
        ctx->pc = 0x1F470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4708u;
        // 0x1f470c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4710u;
        goto label_1f4710;
    }
    ctx->pc = 0x1F4708u;
    {
        const bool branch_taken_0x1f4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4708u;
        // 0x1f470c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4708) {
            ctx->pc = 0x1F4720u;
            goto label_1f4720;
        }
    }
    ctx->pc = 0x1F4710u;
label_1f4710:
    // 0x1f4710: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f4710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f4714:
    // 0x1f4714: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f4714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f4718:
    // 0x1f4718: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f471c:
    if (ctx->pc == 0x1F471Cu) {
        ctx->pc = 0x1F471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4718u;
        // 0x1f471c: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4720u;
        goto label_1f4720;
    }
    ctx->pc = 0x1F4718u;
    {
        const bool branch_taken_0x1f4718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4718u;
        // 0x1f471c: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4718) {
            ctx->pc = 0x1F46CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f46cc;
        }
    }
    ctx->pc = 0x1F4720u;
label_1f4720:
    // 0x1f4720: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1f4720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4724:
    // 0x1f4724: 0x10e8003e  beq         $a3, $t0, . + 4 + (0x3E << 2)
label_1f4728:
    if (ctx->pc == 0x1F4728u) {
        ctx->pc = 0x1F472Cu;
        goto label_1f472c;
    }
    ctx->pc = 0x1F4724u;
    {
        const bool branch_taken_0x1f4724 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x1f4724) {
            ctx->pc = 0x1F4820u;
            goto label_1f4820;
        }
    }
    ctx->pc = 0x1F472Cu;
label_1f472c:
    // 0x1f472c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f472cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4730:
    // 0x1f4730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f4730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4734:
    // 0x1f4734: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1f4734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1f4738:
    // 0x1f4738: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f4738u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1f473c:
    // 0x1f473c: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x1f473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
label_1f4740:
    // 0x1f4740: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1f4740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1f4744:
    // 0x1f4744: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x1f4744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_1f4748:
    // 0x1f4748: 0x0  nop
    ctx->pc = 0x1f4748u;
    // NOP
label_1f474c:
    // 0x1f474c: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x1f474cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f4750:
    // 0x1f4750: 0x90a2367c  lbu         $v0, 0x367C($a1)
    ctx->pc = 0x1f4750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_1f4754:
    // 0x1f4754: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f4758:
    if (ctx->pc == 0x1F4758u) {
        ctx->pc = 0x1F475Cu;
        goto label_1f475c;
    }
    ctx->pc = 0x1F4754u;
    {
        const bool branch_taken_0x1f4754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4754) {
            ctx->pc = 0x1F478Cu;
            goto label_1f478c;
        }
    }
    ctx->pc = 0x1F475Cu;
label_1f475c:
    // 0x1f475c: 0x8ca23674  lw          $v0, 0x3674($a1)
    ctx->pc = 0x1f475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_1f4760:
    // 0x1f4760: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f4764:
    if (ctx->pc == 0x1F4764u) {
        ctx->pc = 0x1F4768u;
        goto label_1f4768;
    }
    ctx->pc = 0x1F4760u;
    {
        const bool branch_taken_0x1f4760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4760) {
            ctx->pc = 0x1F478Cu;
            goto label_1f478c;
        }
    }
    ctx->pc = 0x1F4768u;
label_1f4768:
    // 0x1f4768: 0x8ca53670  lw          $a1, 0x3670($a1)
    ctx->pc = 0x1f4768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13936)));
label_1f476c:
    // 0x1f476c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1f476cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f4770:
    // 0x1f4770: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f4770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f4774:
    // 0x1f4774: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f4774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f4778:
    // 0x1f4778: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f4778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f477c:
    // 0x1f477c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f4780:
    if (ctx->pc == 0x1F4780u) {
        ctx->pc = 0x1F4784u;
        goto label_1f4784;
    }
    ctx->pc = 0x1F477Cu;
    {
        const bool branch_taken_0x1f477c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f477c) {
            ctx->pc = 0x1F478Cu;
            goto label_1f478c;
        }
    }
    ctx->pc = 0x1F4784u;
label_1f4784:
    // 0x1f4784: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f4788:
    if (ctx->pc == 0x1F4788u) {
        ctx->pc = 0x1F4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4784u;
        // 0x1f4788: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F478Cu;
        goto label_1f478c;
    }
    ctx->pc = 0x1F4784u;
    {
        const bool branch_taken_0x1f4784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4784u;
        // 0x1f4788: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4784) {
            ctx->pc = 0x1F479Cu;
            goto label_1f479c;
        }
    }
    ctx->pc = 0x1F478Cu;
label_1f478c:
    // 0x1f478c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f478cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f4790:
    // 0x1f4790: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f4790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f4794:
    // 0x1f4794: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f4798:
    if (ctx->pc == 0x1F4798u) {
        ctx->pc = 0x1F4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4794u;
        // 0x1f4798: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F479Cu;
        goto label_1f479c;
    }
    ctx->pc = 0x1F4794u;
    {
        const bool branch_taken_0x1f4794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4794u;
        // 0x1f4798: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4794) {
            ctx->pc = 0x1F4748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4748;
        }
    }
    ctx->pc = 0x1F479Cu;
label_1f479c:
    // 0x1f479c: 0x0  nop
    ctx->pc = 0x1f479cu;
    // NOP
label_1f47a0:
    // 0x1f47a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f47a4:
    // 0x1f47a4: 0x1502001f  bne         $t0, $v0, . + 4 + (0x1F << 2)
label_1f47a8:
    if (ctx->pc == 0x1F47A8u) {
        ctx->pc = 0x1F47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47A4u;
        // 0x1f47a8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F47ACu;
        goto label_1f47ac;
    }
    ctx->pc = 0x1F47A4u;
    {
        const bool branch_taken_0x1f47a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F47A4u;
        // 0x1f47a8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f47a4) {
            ctx->pc = 0x1F4824u;
            goto label_1f4824;
        }
    }
    ctx->pc = 0x1F47ACu;
label_1f47ac:
    // 0x1f47ac: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f47acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f47b0:
    // 0x1f47b0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f47b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f47b4:
    // 0x1f47b4: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f47b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f47b8:
    // 0x1f47b8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f47b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f47bc:
    // 0x1f47bc: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f47bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f47c0:
    // 0x1f47c0: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f47c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f47c4:
    // 0x1f47c4: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f47c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f47c8:
    // 0x1f47c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f47c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f47cc:
    // 0x1f47cc: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f47ccu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f47d0:
    // 0x1f47d0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f47d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f47d4:
    // 0x1f47d4: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f47d8:
    // 0x1f47d8: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f47d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f47dc:
    // 0x1f47dc: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f47dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f47e0:
    // 0x1f47e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f47e4:
    // 0x1f47e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f47e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f47e8:
    // 0x1f47e8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f47e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f47ec:
    // 0x1f47ec: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f47ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f47f0:
    // 0x1f47f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f47f4:
    // 0x1f47f4: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f47f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f47f8:
    // 0x1f47f8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f47f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f47fc:
    // 0x1f47fc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f47fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4800:
    // 0x1f4800: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f4804:
    // 0x1f4804: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4808:
    // 0x1f4808: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f480c:
    // 0x1f480c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f480cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4810:
    // 0x1f4810: 0xc08f20e  jal         func_23C838
label_1f4814:
    if (ctx->pc == 0x1F4814u) {
        ctx->pc = 0x1F4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4810u;
        // 0x1f4814: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4818u;
        goto label_1f4818;
    }
    ctx->pc = 0x1F4810u;
    SET_GPR_U32(ctx, 31, 0x1F4818u);
    ctx->pc = 0x1F4814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4810u;
    // 0x1f4814: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4818u;
label_1f4818:
    // 0x1f4818: 0x10000155  b           . + 4 + (0x155 << 2)
label_1f481c:
    if (ctx->pc == 0x1F481Cu) {
        ctx->pc = 0x1F4820u;
        goto label_1f4820;
    }
    ctx->pc = 0x1F4818u;
    {
        const bool branch_taken_0x1f4818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4818) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4820u;
label_1f4820:
    // 0x1f4820: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f4820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4824:
    // 0x1f4824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f4824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4828:
    // 0x1f4828: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f4828u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f482c:
    // 0x1f482c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1f482cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1f4830:
    // 0x1f4830: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f4830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1f4834:
    // 0x1f4834: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x1f4834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
label_1f4838:
    // 0x1f4838: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1f4838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1f483c:
    // 0x1f483c: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x1f483cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_1f4840:
    // 0x1f4840: 0x0  nop
    ctx->pc = 0x1f4840u;
    // NOP
label_1f4844:
    // 0x1f4844: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x1f4844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f4848:
    // 0x1f4848: 0x90a2367c  lbu         $v0, 0x367C($a1)
    ctx->pc = 0x1f4848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_1f484c:
    // 0x1f484c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f4850:
    if (ctx->pc == 0x1F4850u) {
        ctx->pc = 0x1F4854u;
        goto label_1f4854;
    }
    ctx->pc = 0x1F484Cu;
    {
        const bool branch_taken_0x1f484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f484c) {
            ctx->pc = 0x1F4884u;
            goto label_1f4884;
        }
    }
    ctx->pc = 0x1F4854u;
label_1f4854:
    // 0x1f4854: 0x8ca23674  lw          $v0, 0x3674($a1)
    ctx->pc = 0x1f4854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_1f4858:
    // 0x1f4858: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f485c:
    if (ctx->pc == 0x1F485Cu) {
        ctx->pc = 0x1F4860u;
        goto label_1f4860;
    }
    ctx->pc = 0x1F4858u;
    {
        const bool branch_taken_0x1f4858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4858) {
            ctx->pc = 0x1F4884u;
            goto label_1f4884;
        }
    }
    ctx->pc = 0x1F4860u;
label_1f4860:
    // 0x1f4860: 0x8ca53670  lw          $a1, 0x3670($a1)
    ctx->pc = 0x1f4860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13936)));
label_1f4864:
    // 0x1f4864: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1f4864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f4868:
    // 0x1f4868: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f4868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f486c:
    // 0x1f486c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f4870:
    // 0x1f4870: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f4870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4874:
    // 0x1f4874: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f4878:
    if (ctx->pc == 0x1F4878u) {
        ctx->pc = 0x1F487Cu;
        goto label_1f487c;
    }
    ctx->pc = 0x1F4874u;
    {
        const bool branch_taken_0x1f4874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f4874) {
            ctx->pc = 0x1F4884u;
            goto label_1f4884;
        }
    }
    ctx->pc = 0x1F487Cu;
label_1f487c:
    // 0x1f487c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f4880:
    if (ctx->pc == 0x1F4880u) {
        ctx->pc = 0x1F4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F487Cu;
        // 0x1f4880: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4884u;
        goto label_1f4884;
    }
    ctx->pc = 0x1F487Cu;
    {
        const bool branch_taken_0x1f487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F487Cu;
        // 0x1f4880: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f487c) {
            ctx->pc = 0x1F4894u;
            goto label_1f4894;
        }
    }
    ctx->pc = 0x1F4884u;
label_1f4884:
    // 0x1f4884: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f4884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f4888:
    // 0x1f4888: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f4888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f488c:
    // 0x1f488c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f4890:
    if (ctx->pc == 0x1F4890u) {
        ctx->pc = 0x1F4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F488Cu;
        // 0x1f4890: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4894u;
        goto label_1f4894;
    }
    ctx->pc = 0x1F488Cu;
    {
        const bool branch_taken_0x1f488c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F488Cu;
        // 0x1f4890: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f488c) {
            ctx->pc = 0x1F4840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4840;
        }
    }
    ctx->pc = 0x1F4894u;
label_1f4894:
    // 0x1f4894: 0x0  nop
    ctx->pc = 0x1f4894u;
    // NOP
label_1f4898:
    // 0x1f4898: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1f4898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f489c:
    // 0x1f489c: 0x14e80134  bne         $a3, $t0, . + 4 + (0x134 << 2)
label_1f48a0:
    if (ctx->pc == 0x1F48A0u) {
        ctx->pc = 0x1F48A4u;
        goto label_1f48a4;
    }
    ctx->pc = 0x1F489Cu;
    {
        const bool branch_taken_0x1f489c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1f489c) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F48A4u;
label_1f48a4:
    // 0x1f48a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f48a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f48a8:
    // 0x1f48a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f48a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f48ac:
    // 0x1f48ac: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1f48acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1f48b0:
    // 0x1f48b0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f48b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1f48b4:
    // 0x1f48b4: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x1f48b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
label_1f48b8:
    // 0x1f48b8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x1f48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1f48bc:
    // 0x1f48bc: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x1f48bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_1f48c0:
    // 0x1f48c0: 0x0  nop
    ctx->pc = 0x1f48c0u;
    // NOP
label_1f48c4:
    // 0x1f48c4: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x1f48c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f48c8:
    // 0x1f48c8: 0x90a2367c  lbu         $v0, 0x367C($a1)
    ctx->pc = 0x1f48c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_1f48cc:
    // 0x1f48cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f48d0:
    if (ctx->pc == 0x1F48D0u) {
        ctx->pc = 0x1F48D4u;
        goto label_1f48d4;
    }
    ctx->pc = 0x1F48CCu;
    {
        const bool branch_taken_0x1f48cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f48cc) {
            ctx->pc = 0x1F4904u;
            goto label_1f4904;
        }
    }
    ctx->pc = 0x1F48D4u;
label_1f48d4:
    // 0x1f48d4: 0x8ca23674  lw          $v0, 0x3674($a1)
    ctx->pc = 0x1f48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_1f48d8:
    // 0x1f48d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f48dc:
    if (ctx->pc == 0x1F48DCu) {
        ctx->pc = 0x1F48E0u;
        goto label_1f48e0;
    }
    ctx->pc = 0x1F48D8u;
    {
        const bool branch_taken_0x1f48d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f48d8) {
            ctx->pc = 0x1F4904u;
            goto label_1f4904;
        }
    }
    ctx->pc = 0x1F48E0u;
label_1f48e0:
    // 0x1f48e0: 0x8ca53670  lw          $a1, 0x3670($a1)
    ctx->pc = 0x1f48e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13936)));
label_1f48e4:
    // 0x1f48e4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1f48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f48e8:
    // 0x1f48e8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f48ec:
    // 0x1f48ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f48f0:
    // 0x1f48f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f48f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f48f4:
    // 0x1f48f4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f48f8:
    if (ctx->pc == 0x1F48F8u) {
        ctx->pc = 0x1F48FCu;
        goto label_1f48fc;
    }
    ctx->pc = 0x1F48F4u;
    {
        const bool branch_taken_0x1f48f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f48f4) {
            ctx->pc = 0x1F4904u;
            goto label_1f4904;
        }
    }
    ctx->pc = 0x1F48FCu;
label_1f48fc:
    // 0x1f48fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f4900:
    if (ctx->pc == 0x1F4900u) {
        ctx->pc = 0x1F4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48FCu;
        // 0x1f4900: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4904u;
        goto label_1f4904;
    }
    ctx->pc = 0x1F48FCu;
    {
        const bool branch_taken_0x1f48fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48FCu;
        // 0x1f4900: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f48fc) {
            ctx->pc = 0x1F4914u;
            goto label_1f4914;
        }
    }
    ctx->pc = 0x1F4904u;
label_1f4904:
    // 0x1f4904: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f4904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f4908:
    // 0x1f4908: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x1f4908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f490c:
    // 0x1f490c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f4910:
    if (ctx->pc == 0x1F4910u) {
        ctx->pc = 0x1F4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F490Cu;
        // 0x1f4910: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4914u;
        goto label_1f4914;
    }
    ctx->pc = 0x1F490Cu;
    {
        const bool branch_taken_0x1f490c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F490Cu;
        // 0x1f4910: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f490c) {
            ctx->pc = 0x1F48C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f48c0;
        }
    }
    ctx->pc = 0x1F4914u;
label_1f4914:
    // 0x1f4914: 0x0  nop
    ctx->pc = 0x1f4914u;
    // NOP
label_1f4918:
    // 0x1f4918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f4918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f491c:
    // 0x1f491c: 0x11020114  beq         $t0, $v0, . + 4 + (0x114 << 2)
label_1f4920:
    if (ctx->pc == 0x1F4920u) {
        ctx->pc = 0x1F4924u;
        goto label_1f4924;
    }
    ctx->pc = 0x1F491Cu;
    {
        const bool branch_taken_0x1f491c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f491c) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4924u;
label_1f4924:
    // 0x1f4924: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f4924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f4928:
    // 0x1f4928: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f4928u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f492c:
    // 0x1f492c: 0x8c276db8  lw          $a3, 0x6DB8($at)
    ctx->pc = 0x1f492cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28088)));
label_1f4930:
    // 0x1f4930: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f4930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f4934:
    // 0x1f4934: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4938:
    // 0x1f4938: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f4938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f493c:
    // 0x1f493c: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f4940:
    // 0x1f4940: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f4940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4944:
    // 0x1f4944: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f4944u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f4948:
    // 0x1f4948: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f494c:
    // 0x1f494c: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4950:
    // 0x1f4950: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f4950u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f4954:
    // 0x1f4954: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f4954u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f4958:
    // 0x1f4958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f495c:
    // 0x1f495c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f495cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4960:
    // 0x1f4960: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4964:
    // 0x1f4964: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4964u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4968:
    // 0x1f4968: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f496c:
    // 0x1f496c: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f496cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f4970:
    // 0x1f4970: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4974:
    // 0x1f4974: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4978:
    // 0x1f4978: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f497c:
    // 0x1f497c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f497cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4980:
    // 0x1f4980: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4984:
    // 0x1f4984: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4988:
    // 0x1f4988: 0xc08f20e  jal         func_23C838
label_1f498c:
    if (ctx->pc == 0x1F498Cu) {
        ctx->pc = 0x1F498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4988u;
        // 0x1f498c: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4990u;
        goto label_1f4990;
    }
    ctx->pc = 0x1F4988u;
    SET_GPR_U32(ctx, 31, 0x1F4990u);
    ctx->pc = 0x1F498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4988u;
    // 0x1f498c: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4990u;
label_1f4990:
    // 0x1f4990: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_1f4994:
    if (ctx->pc == 0x1F4994u) {
        ctx->pc = 0x1F4998u;
        goto label_1f4998;
    }
    ctx->pc = 0x1F4990u;
    {
        const bool branch_taken_0x1f4990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4990) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4998u;
label_1f4998:
    // 0x1f4998: 0x1683001d  bne         $s4, $v1, . + 4 + (0x1D << 2)
label_1f499c:
    if (ctx->pc == 0x1F499Cu) {
        ctx->pc = 0x1F499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4998u;
        // 0x1f499c: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F49A0u;
        goto label_1f49a0;
    }
    ctx->pc = 0x1F4998u;
    {
        const bool branch_taken_0x1f4998 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4998u;
        // 0x1f499c: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4998) {
            ctx->pc = 0x1F4A10u;
            goto label_1f4a10;
        }
    }
    ctx->pc = 0x1F49A0u;
label_1f49a0:
    // 0x1f49a0: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f49a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f49a4:
    // 0x1f49a4: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f49a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f49a8:
    // 0x1f49a8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f49ac:
    // 0x1f49ac: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f49acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f49b0:
    // 0x1f49b0: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f49b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f49b4:
    // 0x1f49b4: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f49b8:
    // 0x1f49b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f49b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f49bc:
    // 0x1f49bc: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f49bcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f49c0:
    // 0x1f49c0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f49c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f49c4:
    // 0x1f49c4: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f49c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f49c8:
    // 0x1f49c8: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f49c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f49cc:
    // 0x1f49cc: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f49ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f49d0:
    // 0x1f49d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f49d4:
    // 0x1f49d4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f49d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f49d8:
    // 0x1f49d8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f49d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f49dc:
    // 0x1f49dc: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f49dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f49e0:
    // 0x1f49e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f49e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f49e4:
    // 0x1f49e4: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f49e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f49e8:
    // 0x1f49e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f49e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f49ec:
    // 0x1f49ec: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f49ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f49f0:
    // 0x1f49f0: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f49f4:
    // 0x1f49f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f49f8:
    // 0x1f49f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f49f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f49fc:
    // 0x1f49fc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f49fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4a00:
    // 0x1f4a00: 0xc08f20e  jal         func_23C838
label_1f4a04:
    if (ctx->pc == 0x1F4A04u) {
        ctx->pc = 0x1F4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A00u;
        // 0x1f4a04: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4A08u;
        goto label_1f4a08;
    }
    ctx->pc = 0x1F4A00u;
    SET_GPR_U32(ctx, 31, 0x1F4A08u);
    ctx->pc = 0x1F4A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A00u;
    // 0x1f4a04: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4A08u;
label_1f4a08:
    // 0x1f4a08: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_1f4a0c:
    if (ctx->pc == 0x1F4A0Cu) {
        ctx->pc = 0x1F4A10u;
        goto label_1f4a10;
    }
    ctx->pc = 0x1F4A08u;
    {
        const bool branch_taken_0x1f4a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4a08) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4A10u;
label_1f4a10:
    // 0x1f4a10: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1f4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1f4a14:
    // 0x1f4a14: 0x16830067  bne         $s4, $v1, . + 4 + (0x67 << 2)
label_1f4a18:
    if (ctx->pc == 0x1F4A18u) {
        ctx->pc = 0x1F4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A14u;
        // 0x1f4a18: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4A1Cu;
        goto label_1f4a1c;
    }
    ctx->pc = 0x1F4A14u;
    {
        const bool branch_taken_0x1f4a14 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A14u;
        // 0x1f4a18: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a14) {
            ctx->pc = 0x1F4BB4u;
            goto label_1f4bb4;
        }
    }
    ctx->pc = 0x1F4A1Cu;
label_1f4a1c:
    // 0x1f4a1c: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1f4a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_1f4a20:
    // 0x1f4a20: 0x8c2625b8  lw          $a2, 0x25B8($at)
    ctx->pc = 0x1f4a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9656)));
label_1f4a24:
    // 0x1f4a24: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x1f4a24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
label_1f4a28:
    // 0x1f4a28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4a2c:
    // 0x1f4a2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f4a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a30:
    // 0x1f4a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f4a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a34:
    // 0x1f4a34: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1f4a34u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f4a38:
    // 0x1f4a38: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4a3c:
    // 0x1f4a3c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1f4a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f4a40:
    // 0x1f4a40: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f4a40u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4a44:
    // 0x1f4a44: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x1f4a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1f4a48:
    // 0x1f4a48: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4a48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4a4c:
    // 0x1f4a4c: 0xac267fd4  sw          $a2, 0x7FD4($at)
    ctx->pc = 0x1f4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32724), GPR_U32(ctx, 6));
label_1f4a50:
    // 0x1f4a50: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1f4a50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_1f4a54:
    // 0x1f4a54: 0x25081300  addiu       $t0, $t0, 0x1300
    ctx->pc = 0x1f4a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4864));
label_1f4a58:
    // 0x1f4a58: 0x0  nop
    ctx->pc = 0x1f4a58u;
    // NOP
label_1f4a5c:
    // 0x1f4a5c: 0x1053821  addu        $a3, $t0, $a1
    ctx->pc = 0x1f4a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1f4a60:
    // 0x1f4a60: 0x90e6367c  lbu         $a2, 0x367C($a3)
    ctx->pc = 0x1f4a60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13948)));
label_1f4a64:
    // 0x1f4a64: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_1f4a68:
    if (ctx->pc == 0x1F4A68u) {
        ctx->pc = 0x1F4A6Cu;
        goto label_1f4a6c;
    }
    ctx->pc = 0x1F4A64u;
    {
        const bool branch_taken_0x1f4a64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4a64) {
            ctx->pc = 0x1F4A9Cu;
            goto label_1f4a9c;
        }
    }
    ctx->pc = 0x1F4A6Cu;
label_1f4a6c:
    // 0x1f4a6c: 0x8ce63674  lw          $a2, 0x3674($a3)
    ctx->pc = 0x1f4a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13940)));
label_1f4a70:
    // 0x1f4a70: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
label_1f4a74:
    if (ctx->pc == 0x1F4A74u) {
        ctx->pc = 0x1F4A78u;
        goto label_1f4a78;
    }
    ctx->pc = 0x1F4A70u;
    {
        const bool branch_taken_0x1f4a70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4a70) {
            ctx->pc = 0x1F4A9Cu;
            goto label_1f4a9c;
        }
    }
    ctx->pc = 0x1F4A78u;
label_1f4a78:
    // 0x1f4a78: 0x8ce73670  lw          $a3, 0x3670($a3)
    ctx->pc = 0x1f4a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 13936)));
label_1f4a7c:
    // 0x1f4a7c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1f4a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f4a80:
    // 0x1f4a80: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f4a80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4a84:
    // 0x1f4a84: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x1f4a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_1f4a88:
    // 0x1f4a88: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4a88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4a8c:
    // 0x1f4a8c: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
label_1f4a90:
    if (ctx->pc == 0x1F4A90u) {
        ctx->pc = 0x1F4A94u;
        goto label_1f4a94;
    }
    ctx->pc = 0x1F4A8Cu;
    {
        const bool branch_taken_0x1f4a8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f4a8c) {
            ctx->pc = 0x1F4A9Cu;
            goto label_1f4a9c;
        }
    }
    ctx->pc = 0x1F4A94u;
label_1f4a94:
    // 0x1f4a94: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f4a98:
    if (ctx->pc == 0x1F4A98u) {
        ctx->pc = 0x1F4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A94u;
        // 0x1f4a98: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4A9Cu;
        goto label_1f4a9c;
    }
    ctx->pc = 0x1F4A94u;
    {
        const bool branch_taken_0x1f4a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A94u;
        // 0x1f4a98: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a94) {
            ctx->pc = 0x1F4AACu;
            goto label_1f4aac;
        }
    }
    ctx->pc = 0x1F4A9Cu;
label_1f4a9c:
    // 0x1f4a9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f4a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f4aa0:
    // 0x1f4aa0: 0x28860002  slti        $a2, $a0, 0x2
    ctx->pc = 0x1f4aa0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f4aa4:
    // 0x1f4aa4: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
label_1f4aa8:
    if (ctx->pc == 0x1F4AA8u) {
        ctx->pc = 0x1F4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AA4u;
        // 0x1f4aa8: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4AACu;
        goto label_1f4aac;
    }
    ctx->pc = 0x1F4AA4u;
    {
        const bool branch_taken_0x1f4aa4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AA4u;
        // 0x1f4aa8: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4aa4) {
            ctx->pc = 0x1F4A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4a58;
        }
    }
    ctx->pc = 0x1F4AACu;
label_1f4aac:
    // 0x1f4aac: 0x0  nop
    ctx->pc = 0x1f4aacu;
    // NOP
label_1f4ab0:
    // 0x1f4ab0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f4ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4ab4:
    // 0x1f4ab4: 0x14670021  bne         $v1, $a3, . + 4 + (0x21 << 2)
label_1f4ab8:
    if (ctx->pc == 0x1F4AB8u) {
        ctx->pc = 0x1F4ABCu;
        goto label_1f4abc;
    }
    ctx->pc = 0x1F4AB4u;
    {
        const bool branch_taken_0x1f4ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f4ab4) {
            ctx->pc = 0x1F4B3Cu;
            goto label_1f4b3c;
        }
    }
    ctx->pc = 0x1F4ABCu;
label_1f4abc:
    // 0x1f4abc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f4abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ac0:
    // 0x1f4ac0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f4ac0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4ac4:
    // 0x1f4ac4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1f4ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1f4ac8:
    // 0x1f4ac8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1f4ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1f4acc:
    // 0x1f4acc: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x1f4accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
label_1f4ad0:
    // 0x1f4ad0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1f4ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f4ad4:
    // 0x1f4ad4: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x1f4ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_1f4ad8:
    // 0x1f4ad8: 0x0  nop
    ctx->pc = 0x1f4ad8u;
    // NOP
label_1f4adc:
    // 0x1f4adc: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x1f4adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1f4ae0:
    // 0x1f4ae0: 0x90a2367c  lbu         $v0, 0x367C($a1)
    ctx->pc = 0x1f4ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 13948)));
label_1f4ae4:
    // 0x1f4ae4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f4ae8:
    if (ctx->pc == 0x1F4AE8u) {
        ctx->pc = 0x1F4AECu;
        goto label_1f4aec;
    }
    ctx->pc = 0x1F4AE4u;
    {
        const bool branch_taken_0x1f4ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4ae4) {
            ctx->pc = 0x1F4B1Cu;
            goto label_1f4b1c;
        }
    }
    ctx->pc = 0x1F4AECu;
label_1f4aec:
    // 0x1f4aec: 0x8ca23674  lw          $v0, 0x3674($a1)
    ctx->pc = 0x1f4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13940)));
label_1f4af0:
    // 0x1f4af0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1f4af4:
    if (ctx->pc == 0x1F4AF4u) {
        ctx->pc = 0x1F4AF8u;
        goto label_1f4af8;
    }
    ctx->pc = 0x1F4AF0u;
    {
        const bool branch_taken_0x1f4af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4af0) {
            ctx->pc = 0x1F4B1Cu;
            goto label_1f4b1c;
        }
    }
    ctx->pc = 0x1F4AF8u;
label_1f4af8:
    // 0x1f4af8: 0x8ca53670  lw          $a1, 0x3670($a1)
    ctx->pc = 0x1f4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13936)));
label_1f4afc:
    // 0x1f4afc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1f4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1f4b00:
    // 0x1f4b00: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f4b04:
    // 0x1f4b04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f4b08:
    // 0x1f4b08: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f4b08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4b0c:
    // 0x1f4b0c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f4b10:
    if (ctx->pc == 0x1F4B10u) {
        ctx->pc = 0x1F4B14u;
        goto label_1f4b14;
    }
    ctx->pc = 0x1F4B0Cu;
    {
        const bool branch_taken_0x1f4b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f4b0c) {
            ctx->pc = 0x1F4B1Cu;
            goto label_1f4b1c;
        }
    }
    ctx->pc = 0x1F4B14u;
label_1f4b14:
    // 0x1f4b14: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f4b18:
    if (ctx->pc == 0x1F4B18u) {
        ctx->pc = 0x1F4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B14u;
        // 0x1f4b18: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B1Cu;
        goto label_1f4b1c;
    }
    ctx->pc = 0x1F4B14u;
    {
        const bool branch_taken_0x1f4b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B14u;
        // 0x1f4b18: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4b14) {
            ctx->pc = 0x1F4B2Cu;
            goto label_1f4b2c;
        }
    }
    ctx->pc = 0x1F4B1Cu;
label_1f4b1c:
    // 0x1f4b1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f4b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f4b20:
    // 0x1f4b20: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x1f4b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f4b24:
    // 0x1f4b24: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f4b28:
    if (ctx->pc == 0x1F4B28u) {
        ctx->pc = 0x1F4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B24u;
        // 0x1f4b28: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B2Cu;
        goto label_1f4b2c;
    }
    ctx->pc = 0x1F4B24u;
    {
        const bool branch_taken_0x1f4b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B24u;
        // 0x1f4b28: 0x25290090  addiu       $t1, $t1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4b24) {
            ctx->pc = 0x1F4AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4ad8;
        }
    }
    ctx->pc = 0x1F4B2Cu;
label_1f4b2c:
    // 0x1f4b2c: 0x0  nop
    ctx->pc = 0x1f4b2cu;
    // NOP
label_1f4b30:
    // 0x1f4b30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f4b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f4b34:
    // 0x1f4b34: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
label_1f4b38:
    if (ctx->pc == 0x1F4B38u) {
        ctx->pc = 0x1F4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B34u;
        // 0x1f4b38: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B3Cu;
        goto label_1f4b3c;
    }
    ctx->pc = 0x1F4B34u;
    {
        const bool branch_taken_0x1f4b34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B34u;
        // 0x1f4b38: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4b34) {
            ctx->pc = 0x1F4B70u;
            goto label_1f4b70;
        }
    }
    ctx->pc = 0x1F4B3Cu;
label_1f4b3c:
    // 0x1f4b3c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4b40:
    // 0x1f4b40: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f4b44:
    // 0x1f4b44: 0x8c237fd4  lw          $v1, 0x7FD4($at)
    ctx->pc = 0x1f4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32724)));
label_1f4b48:
    // 0x1f4b48: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4b4c:
    // 0x1f4b4c: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f4b50:
    // 0x1f4b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4b54:
    // 0x1f4b54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f4b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f4b58:
    // 0x1f4b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f4b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f4b5c:
    // 0x1f4b5c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4b60:
    // 0x1f4b60: 0xc08f20e  jal         func_23C838
label_1f4b64:
    if (ctx->pc == 0x1F4B64u) {
        ctx->pc = 0x1F4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B60u;
        // 0x1f4b64: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B68u;
        goto label_1f4b68;
    }
    ctx->pc = 0x1F4B60u;
    SET_GPR_U32(ctx, 31, 0x1F4B68u);
    ctx->pc = 0x1F4B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B60u;
    // 0x1f4b64: 0x24a5d430  addiu       $a1, $a1, -0x2BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4B68u;
label_1f4b68:
    // 0x1f4b68: 0x10000081  b           . + 4 + (0x81 << 2)
label_1f4b6c:
    if (ctx->pc == 0x1F4B6Cu) {
        ctx->pc = 0x1F4B70u;
        goto label_1f4b70;
    }
    ctx->pc = 0x1F4B68u;
    {
        const bool branch_taken_0x1f4b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4b68) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4B70u;
label_1f4b70:
    // 0x1f4b70: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f4b70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f4b74:
    // 0x1f4b74: 0x8c237fd0  lw          $v1, 0x7FD0($at)
    ctx->pc = 0x1f4b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32720)));
label_1f4b78:
    // 0x1f4b78: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4b7c:
    // 0x1f4b7c: 0x24c62930  addiu       $a2, $a2, 0x2930
    ctx->pc = 0x1f4b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10544));
label_1f4b80:
    // 0x1f4b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4b84:
    // 0x1f4b84: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4b88:
    // 0x1f4b88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f4b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f4b8c:
    // 0x1f4b8c: 0x8c227fd4  lw          $v0, 0x7FD4($at)
    ctx->pc = 0x1f4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32724)));
label_1f4b90:
    // 0x1f4b90: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1f4b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1f4b94:
    // 0x1f4b94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4b98:
    // 0x1f4b98: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1f4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1f4b9c:
    // 0x1f4b9c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1f4b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f4ba0:
    // 0x1f4ba0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4ba4:
    // 0x1f4ba4: 0xc08f20e  jal         func_23C838
label_1f4ba8:
    if (ctx->pc == 0x1F4BA8u) {
        ctx->pc = 0x1F4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4BA4u;
        // 0x1f4ba8: 0x24a5d4c0  addiu       $a1, $a1, -0x2B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4BACu;
        goto label_1f4bac;
    }
    ctx->pc = 0x1F4BA4u;
    SET_GPR_U32(ctx, 31, 0x1F4BACu);
    ctx->pc = 0x1F4BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4BA4u;
    // 0x1f4ba8: 0x24a5d4c0  addiu       $a1, $a1, -0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4BACu;
label_1f4bac:
    // 0x1f4bac: 0x10000070  b           . + 4 + (0x70 << 2)
label_1f4bb0:
    if (ctx->pc == 0x1F4BB0u) {
        ctx->pc = 0x1F4BB4u;
        goto label_1f4bb4;
    }
    ctx->pc = 0x1F4BACu;
    {
        const bool branch_taken_0x1f4bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4bac) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4BB4u;
label_1f4bb4:
    // 0x1f4bb4: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x1f4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_1f4bb8:
    // 0x1f4bb8: 0x1682001e  bne         $s4, $v0, . + 4 + (0x1E << 2)
label_1f4bbc:
    if (ctx->pc == 0x1F4BBCu) {
        ctx->pc = 0x1F4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4BB8u;
        // 0x1f4bbc: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4BC0u;
        goto label_1f4bc0;
    }
    ctx->pc = 0x1F4BB8u;
    {
        const bool branch_taken_0x1f4bb8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4BB8u;
        // 0x1f4bbc: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4bb8) {
            ctx->pc = 0x1F4C34u;
            goto label_1f4c34;
        }
    }
    ctx->pc = 0x1F4BC0u;
label_1f4bc0:
    // 0x1f4bc0: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f4bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f4bc4:
    // 0x1f4bc4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f4bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f4bc8:
    // 0x1f4bc8: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f4bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f4bcc:
    // 0x1f4bcc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f4bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f4bd0:
    // 0x1f4bd0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4bd4:
    // 0x1f4bd4: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f4bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f4bd8:
    // 0x1f4bd8: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f4bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f4bdc:
    // 0x1f4bdc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4be0:
    // 0x1f4be0: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f4be0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f4be4:
    // 0x1f4be4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4be8:
    // 0x1f4be8: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4bec:
    // 0x1f4bec: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f4becu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f4bf0:
    // 0x1f4bf0: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f4bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f4bf4:
    // 0x1f4bf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4bf8:
    // 0x1f4bf8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f4bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4bfc:
    // 0x1f4bfc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4c00:
    // 0x1f4c00: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4c00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4c04:
    // 0x1f4c04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4c08:
    // 0x1f4c08: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f4c0c:
    // 0x1f4c0c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4c10:
    // 0x1f4c10: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4c14:
    // 0x1f4c14: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f4c18:
    // 0x1f4c18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4c1c:
    // 0x1f4c1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4c20:
    // 0x1f4c20: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4c24:
    // 0x1f4c24: 0xc08f20e  jal         func_23C838
label_1f4c28:
    if (ctx->pc == 0x1F4C28u) {
        ctx->pc = 0x1F4C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C24u;
        // 0x1f4c28: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4C2Cu;
        goto label_1f4c2c;
    }
    ctx->pc = 0x1F4C24u;
    SET_GPR_U32(ctx, 31, 0x1F4C2Cu);
    ctx->pc = 0x1F4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C24u;
    // 0x1f4c28: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4C2Cu;
label_1f4c2c:
    // 0x1f4c2c: 0x10000050  b           . + 4 + (0x50 << 2)
label_1f4c30:
    if (ctx->pc == 0x1F4C30u) {
        ctx->pc = 0x1F4C34u;
        goto label_1f4c34;
    }
    ctx->pc = 0x1F4C2Cu;
    {
        const bool branch_taken_0x1f4c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c2c) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4C34u;
label_1f4c34:
    // 0x1f4c34: 0x16820011  bne         $s4, $v0, . + 4 + (0x11 << 2)
label_1f4c38:
    if (ctx->pc == 0x1F4C38u) {
        ctx->pc = 0x1F4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C34u;
        // 0x1f4c38: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4C3Cu;
        goto label_1f4c3c;
    }
    ctx->pc = 0x1F4C34u;
    {
        const bool branch_taken_0x1f4c34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C34u;
        // 0x1f4c38: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c34) {
            ctx->pc = 0x1F4C7Cu;
            goto label_1f4c7c;
        }
    }
    ctx->pc = 0x1F4C3Cu;
label_1f4c3c:
    // 0x1f4c3c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1f4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1f4c40:
    // 0x1f4c40: 0x8c237fe0  lw          $v1, 0x7FE0($at)
    ctx->pc = 0x1f4c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4c44:
    // 0x1f4c44: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4c48:
    // 0x1f4c48: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1f4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1f4c4c:
    // 0x1f4c4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f4c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4c50:
    // 0x1f4c50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f4c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f4c54:
    // 0x1f4c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f4c58:
    // 0x1f4c58: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4c5c:
    // 0x1f4c5c: 0xc08f20e  jal         func_23C838
label_1f4c60:
    if (ctx->pc == 0x1F4C60u) {
        ctx->pc = 0x1F4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C5Cu;
        // 0x1f4c60: 0x24a5d180  addiu       $a1, $a1, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4C64u;
        goto label_1f4c64;
    }
    ctx->pc = 0x1F4C5Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C64u);
    ctx->pc = 0x1F4C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C5Cu;
    // 0x1f4c60: 0x24a5d180  addiu       $a1, $a1, -0x2E80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4C64u;
label_1f4c64:
    // 0x1f4c64: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4c68:
    // 0x1f4c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f4c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4c6c:
    // 0x1f4c6c: 0xc08f20e  jal         func_23C838
label_1f4c70:
    if (ctx->pc == 0x1F4C70u) {
        ctx->pc = 0x1F4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C6Cu;
        // 0x1f4c70: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4C74u;
        goto label_1f4c74;
    }
    ctx->pc = 0x1F4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1F4C74u);
    ctx->pc = 0x1F4C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C6Cu;
    // 0x1f4c70: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4C74u;
label_1f4c74:
    // 0x1f4c74: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1f4c78:
    if (ctx->pc == 0x1F4C78u) {
        ctx->pc = 0x1F4C7Cu;
        goto label_1f4c7c;
    }
    ctx->pc = 0x1F4C74u;
    {
        const bool branch_taken_0x1f4c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4c74) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4C7Cu;
label_1f4c7c:
    // 0x1f4c7c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1f4c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f4c80:
    // 0x1f4c80: 0x1682001e  bne         $s4, $v0, . + 4 + (0x1E << 2)
label_1f4c84:
    if (ctx->pc == 0x1F4C84u) {
        ctx->pc = 0x1F4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C80u;
        // 0x1f4c84: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4C88u;
        goto label_1f4c88;
    }
    ctx->pc = 0x1F4C80u;
    {
        const bool branch_taken_0x1f4c80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F4C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C80u;
        // 0x1f4c84: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4c80) {
            ctx->pc = 0x1F4CFCu;
            goto label_1f4cfc;
        }
    }
    ctx->pc = 0x1F4C88u;
label_1f4c88:
    // 0x1f4c88: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f4c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f4c8c:
    // 0x1f4c8c: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f4c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f4c90:
    // 0x1f4c90: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f4c90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f4c94:
    // 0x1f4c94: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f4c98:
    // 0x1f4c98: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4c9c:
    // 0x1f4c9c: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f4c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f4ca0:
    // 0x1f4ca0: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f4ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f4ca4:
    // 0x1f4ca4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f4ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4ca8:
    // 0x1f4ca8: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f4ca8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f4cac:
    // 0x1f4cac: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4cb0:
    // 0x1f4cb0: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f4cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4cb4:
    // 0x1f4cb4: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f4cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f4cb8:
    // 0x1f4cb8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f4cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f4cbc:
    // 0x1f4cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4cc0:
    // 0x1f4cc0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f4cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4cc4:
    // 0x1f4cc4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4cc8:
    // 0x1f4cc8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4cc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4ccc:
    // 0x1f4ccc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4cd0:
    // 0x1f4cd0: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f4cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f4cd4:
    // 0x1f4cd4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4cd8:
    // 0x1f4cd8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4cdc:
    // 0x1f4cdc: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f4ce0:
    // 0x1f4ce0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4ce4:
    // 0x1f4ce4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4ce8:
    // 0x1f4ce8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4cec:
    // 0x1f4cec: 0xc08f20e  jal         func_23C838
label_1f4cf0:
    if (ctx->pc == 0x1F4CF0u) {
        ctx->pc = 0x1F4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CECu;
        // 0x1f4cf0: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4CF4u;
        goto label_1f4cf4;
    }
    ctx->pc = 0x1F4CECu;
    SET_GPR_U32(ctx, 31, 0x1F4CF4u);
    ctx->pc = 0x1F4CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4CECu;
    // 0x1f4cf0: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4CF4u;
label_1f4cf4:
    // 0x1f4cf4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1f4cf8:
    if (ctx->pc == 0x1F4CF8u) {
        ctx->pc = 0x1F4CFCu;
        goto label_1f4cfc;
    }
    ctx->pc = 0x1F4CF4u;
    {
        const bool branch_taken_0x1f4cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4cf4) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4CFCu;
label_1f4cfc:
    // 0x1f4cfc: 0x1682001c  bne         $s4, $v0, . + 4 + (0x1C << 2)
label_1f4d00:
    if (ctx->pc == 0x1F4D00u) {
        ctx->pc = 0x1F4D04u;
        goto label_1f4d04;
    }
    ctx->pc = 0x1F4CFCu;
    {
        const bool branch_taken_0x1f4cfc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f4cfc) {
            ctx->pc = 0x1F4D70u;
            goto label_1f4d70;
        }
    }
    ctx->pc = 0x1F4D04u;
label_1f4d04:
    // 0x1f4d04: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1f4d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1f4d08:
    // 0x1f4d08: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f4d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f4d0c:
    // 0x1f4d0c: 0x8c276d70  lw          $a3, 0x6D70($at)
    ctx->pc = 0x1f4d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28016)));
label_1f4d10:
    // 0x1f4d10: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1f4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1f4d14:
    // 0x1f4d14: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4d18:
    // 0x1f4d18: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f4d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f4d1c:
    // 0x1f4d1c: 0x24632930  addiu       $v1, $v1, 0x2930
    ctx->pc = 0x1f4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10544));
label_1f4d20:
    // 0x1f4d20: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f4d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4d24:
    // 0x1f4d24: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f4d24u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f4d28:
    // 0x1f4d28: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4d2c:
    // 0x1f4d2c: 0x8c227fe0  lw          $v0, 0x7FE0($at)
    ctx->pc = 0x1f4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32736)));
label_1f4d30:
    // 0x1f4d30: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f4d30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f4d34:
    // 0x1f4d34: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f4d34u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f4d38:
    // 0x1f4d38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4d3c:
    // 0x1f4d3c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f4d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f4d40:
    // 0x1f4d40: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4d44:
    // 0x1f4d44: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f4d44u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f4d48:
    // 0x1f4d48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4d4c:
    // 0x1f4d4c: 0xac267fe4  sw          $a2, 0x7FE4($at)
    ctx->pc = 0x1f4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 32740), GPR_U32(ctx, 6));
label_1f4d50:
    // 0x1f4d50: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f4d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4d54:
    // 0x1f4d54: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f4d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f4d58:
    // 0x1f4d58: 0x8c227fe4  lw          $v0, 0x7FE4($at)
    ctx->pc = 0x1f4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 32740)));
label_1f4d5c:
    // 0x1f4d5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f4d60:
    // 0x1f4d60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f4d64:
    // 0x1f4d64: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1f4d64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4d68:
    // 0x1f4d68: 0xc08f20e  jal         func_23C838
label_1f4d6c:
    if (ctx->pc == 0x1F4D6Cu) {
        ctx->pc = 0x1F4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D68u;
        // 0x1f4d6c: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4D70u;
        goto label_1f4d70;
    }
    ctx->pc = 0x1F4D68u;
    SET_GPR_U32(ctx, 31, 0x1F4D70u);
    ctx->pc = 0x1F4D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D68u;
    // 0x1f4d6c: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4D70u;
label_1f4d70:
    // 0x1f4d70: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4d74:
    // 0x1f4d74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f4d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d78:
    // 0x1f4d78: 0x24a5d520  addiu       $a1, $a1, -0x2AE0
    ctx->pc = 0x1f4d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
label_1f4d7c:
    // 0x1f4d7c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1f4d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1f4d80:
    // 0x1f4d80: 0xc08f20e  jal         func_23C838
label_1f4d84:
    if (ctx->pc == 0x1F4D84u) {
        ctx->pc = 0x1F4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D80u;
        // 0x1f4d84: 0x27a70170  addiu       $a3, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4D88u;
        goto label_1f4d88;
    }
    ctx->pc = 0x1F4D80u;
    SET_GPR_U32(ctx, 31, 0x1F4D88u);
    ctx->pc = 0x1F4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D80u;
    // 0x1f4d84: 0x27a70170  addiu       $a3, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4D88u;
label_1f4d88:
    // 0x1f4d88: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1f4d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1f4d8c:
    // 0x1f4d8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d90:
    // 0x1f4d90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f4d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d94:
    // 0x1f4d94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f4d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f4d98:
    // 0x1f4d98: 0xc08f20e  jal         func_23C838
label_1f4d9c:
    if (ctx->pc == 0x1F4D9Cu) {
        ctx->pc = 0x1F4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D98u;
        // 0x1f4d9c: 0x24a5d520  addiu       $a1, $a1, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4DA0u;
        goto label_1f4da0;
    }
    ctx->pc = 0x1F4D98u;
    SET_GPR_U32(ctx, 31, 0x1F4DA0u);
    ctx->pc = 0x1F4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D98u;
    // 0x1f4d9c: 0x24a5d520  addiu       $a1, $a1, -0x2AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1F4DA0u;
label_1f4da0:
    // 0x1f4da0: 0xc07d374  jal         func_1F4DD0
label_1f4da4:
    if (ctx->pc == 0x1F4DA4u) {
        ctx->pc = 0x1F4DA8u;
        goto label_1f4da8;
    }
    ctx->pc = 0x1F4DA0u;
    SET_GPR_U32(ctx, 31, 0x1F4DA8u);
    ctx->pc = 0x1F4DD0u;
    goto label_1f4dd0;
    ctx->pc = 0x1F4DA8u;
label_1f4da8:
    // 0x1f4da8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f4da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f4dac:
    // 0x1f4dac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f4dacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f4db0:
    // 0x1f4db0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f4db0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f4db4:
    // 0x1f4db4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f4db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f4db8:
    // 0x1f4db8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f4db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4dbc:
    // 0x1f4dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4dc0:
    // 0x1f4dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f4dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f4dc4:
    // 0x1f4dc4: 0x3e00008  jr          $ra
label_1f4dc8:
    if (ctx->pc == 0x1F4DC8u) {
        ctx->pc = 0x1F4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DC4u;
        // 0x1f4dc8: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4DCCu;
        goto label_1f4dcc;
    }
    ctx->pc = 0x1F4DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DC4u;
        // 0x1f4dc8: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4DCCu;
label_1f4dcc:
    // 0x1f4dcc: 0x0  nop
    ctx->pc = 0x1f4dccu;
    // NOP
label_1f4dd0:
    // 0x1f4dd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f4dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1f4dd4:
    // 0x1f4dd4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f4dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f4dd8:
    // 0x1f4dd8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1f4ddc:
    // 0x1f4ddc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f4ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f4de0:
    // 0x1f4de0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f4de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f4de4:
    // 0x1f4de4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f4de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f4de8:
    // 0x1f4de8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f4de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f4dec:
    // 0x1f4dec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f4decu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4df0:
    // 0x1f4df0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f4df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f4df4:
    // 0x1f4df4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f4df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4df8:
    // 0x1f4df8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f4dfc:
    // 0x1f4dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f4e00:
    // 0x1f4e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f4e04:
    // 0x1f4e04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f4e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e08:
    // 0x1f4e08: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1f4e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_1f4e0c:
    // 0x1f4e0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f4e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e10:
    // 0x1f4e10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f4e10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4e14:
    // 0x1f4e14: 0x0  nop
    ctx->pc = 0x1f4e14u;
    // NOP
label_1f4e18:
    // 0x1f4e18: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1f4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1f4e1c:
    // 0x1f4e1c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1f4e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    ctx->pc = 0x1f4e20u;
    return;
}

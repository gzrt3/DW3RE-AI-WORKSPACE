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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part52(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1b4c58u: goto label_1b4c58;
        case 0x1b4c5cu: goto label_1b4c5c;
        case 0x1b4c60u: goto label_1b4c60;
        case 0x1b4c64u: goto label_1b4c64;
        case 0x1b4c68u: goto label_1b4c68;
        case 0x1b4c6cu: goto label_1b4c6c;
        case 0x1b4c70u: goto label_1b4c70;
        case 0x1b4c74u: goto label_1b4c74;
        case 0x1b4c78u: goto label_1b4c78;
        case 0x1b4c7cu: goto label_1b4c7c;
        case 0x1b4c80u: goto label_1b4c80;
        case 0x1b4c84u: goto label_1b4c84;
        case 0x1b4c88u: goto label_1b4c88;
        case 0x1b4c8cu: goto label_1b4c8c;
        case 0x1b4c90u: goto label_1b4c90;
        case 0x1b4c94u: goto label_1b4c94;
        case 0x1b4c98u: goto label_1b4c98;
        case 0x1b4c9cu: goto label_1b4c9c;
        case 0x1b4ca0u: goto label_1b4ca0;
        case 0x1b4ca4u: goto label_1b4ca4;
        case 0x1b4ca8u: goto label_1b4ca8;
        case 0x1b4cacu: goto label_1b4cac;
        case 0x1b4cb0u: goto label_1b4cb0;
        case 0x1b4cb4u: goto label_1b4cb4;
        case 0x1b4cb8u: goto label_1b4cb8;
        case 0x1b4cbcu: goto label_1b4cbc;
        case 0x1b4cc0u: goto label_1b4cc0;
        case 0x1b4cc4u: goto label_1b4cc4;
        case 0x1b4cc8u: goto label_1b4cc8;
        case 0x1b4cccu: goto label_1b4ccc;
        case 0x1b4cd0u: goto label_1b4cd0;
        case 0x1b4cd4u: goto label_1b4cd4;
        case 0x1b4cd8u: goto label_1b4cd8;
        case 0x1b4cdcu: goto label_1b4cdc;
        case 0x1b4ce0u: goto label_1b4ce0;
        case 0x1b4ce4u: goto label_1b4ce4;
        case 0x1b4ce8u: goto label_1b4ce8;
        case 0x1b4cecu: goto label_1b4cec;
        case 0x1b4cf0u: goto label_1b4cf0;
        case 0x1b4cf4u: goto label_1b4cf4;
        case 0x1b4cf8u: goto label_1b4cf8;
        case 0x1b4cfcu: goto label_1b4cfc;
        case 0x1b4d00u: goto label_1b4d00;
        case 0x1b4d04u: goto label_1b4d04;
        case 0x1b4d08u: goto label_1b4d08;
        case 0x1b4d0cu: goto label_1b4d0c;
        case 0x1b4d10u: goto label_1b4d10;
        case 0x1b4d14u: goto label_1b4d14;
        case 0x1b4d18u: goto label_1b4d18;
        case 0x1b4d1cu: goto label_1b4d1c;
        case 0x1b4d20u: goto label_1b4d20;
        case 0x1b4d24u: goto label_1b4d24;
        case 0x1b4d28u: goto label_1b4d28;
        case 0x1b4d2cu: goto label_1b4d2c;
        case 0x1b4d30u: goto label_1b4d30;
        case 0x1b4d34u: goto label_1b4d34;
        case 0x1b4d38u: goto label_1b4d38;
        case 0x1b4d3cu: goto label_1b4d3c;
        case 0x1b4d40u: goto label_1b4d40;
        case 0x1b4d44u: goto label_1b4d44;
        case 0x1b4d48u: goto label_1b4d48;
        case 0x1b4d4cu: goto label_1b4d4c;
        case 0x1b4d50u: goto label_1b4d50;
        case 0x1b4d54u: goto label_1b4d54;
        case 0x1b4d58u: goto label_1b4d58;
        case 0x1b4d5cu: goto label_1b4d5c;
        case 0x1b4d60u: goto label_1b4d60;
        case 0x1b4d64u: goto label_1b4d64;
        case 0x1b4d68u: goto label_1b4d68;
        case 0x1b4d6cu: goto label_1b4d6c;
        case 0x1b4d70u: goto label_1b4d70;
        case 0x1b4d74u: goto label_1b4d74;
        case 0x1b4d78u: goto label_1b4d78;
        case 0x1b4d7cu: goto label_1b4d7c;
        case 0x1b4d80u: goto label_1b4d80;
        case 0x1b4d84u: goto label_1b4d84;
        case 0x1b4d88u: goto label_1b4d88;
        case 0x1b4d8cu: goto label_1b4d8c;
        case 0x1b4d90u: goto label_1b4d90;
        case 0x1b4d94u: goto label_1b4d94;
        case 0x1b4d98u: goto label_1b4d98;
        case 0x1b4d9cu: goto label_1b4d9c;
        case 0x1b4da0u: goto label_1b4da0;
        case 0x1b4da4u: goto label_1b4da4;
        case 0x1b4da8u: goto label_1b4da8;
        case 0x1b4dacu: goto label_1b4dac;
        case 0x1b4db0u: goto label_1b4db0;
        case 0x1b4db4u: goto label_1b4db4;
        case 0x1b4db8u: goto label_1b4db8;
        case 0x1b4dbcu: goto label_1b4dbc;
        case 0x1b4dc0u: goto label_1b4dc0;
        case 0x1b4dc4u: goto label_1b4dc4;
        case 0x1b4dc8u: goto label_1b4dc8;
        case 0x1b4dccu: goto label_1b4dcc;
        case 0x1b4dd0u: goto label_1b4dd0;
        case 0x1b4dd4u: goto label_1b4dd4;
        case 0x1b4dd8u: goto label_1b4dd8;
        case 0x1b4ddcu: goto label_1b4ddc;
        case 0x1b4de0u: goto label_1b4de0;
        case 0x1b4de4u: goto label_1b4de4;
        case 0x1b4de8u: goto label_1b4de8;
        case 0x1b4decu: goto label_1b4dec;
        case 0x1b4df0u: goto label_1b4df0;
        case 0x1b4df4u: goto label_1b4df4;
        case 0x1b4df8u: goto label_1b4df8;
        case 0x1b4dfcu: goto label_1b4dfc;
        case 0x1b4e00u: goto label_1b4e00;
        case 0x1b4e04u: goto label_1b4e04;
        case 0x1b4e08u: goto label_1b4e08;
        case 0x1b4e0cu: goto label_1b4e0c;
        case 0x1b4e10u: goto label_1b4e10;
        case 0x1b4e14u: goto label_1b4e14;
        case 0x1b4e18u: goto label_1b4e18;
        case 0x1b4e1cu: goto label_1b4e1c;
        case 0x1b4e20u: goto label_1b4e20;
        case 0x1b4e24u: goto label_1b4e24;
        case 0x1b4e28u: goto label_1b4e28;
        case 0x1b4e2cu: goto label_1b4e2c;
        case 0x1b4e30u: goto label_1b4e30;
        case 0x1b4e34u: goto label_1b4e34;
        case 0x1b4e38u: goto label_1b4e38;
        case 0x1b4e3cu: goto label_1b4e3c;
        case 0x1b4e40u: goto label_1b4e40;
        case 0x1b4e44u: goto label_1b4e44;
        case 0x1b4e48u: goto label_1b4e48;
        case 0x1b4e4cu: goto label_1b4e4c;
        case 0x1b4e50u: goto label_1b4e50;
        case 0x1b4e54u: goto label_1b4e54;
        case 0x1b4e58u: goto label_1b4e58;
        case 0x1b4e5cu: goto label_1b4e5c;
        case 0x1b4e60u: goto label_1b4e60;
        case 0x1b4e64u: goto label_1b4e64;
        case 0x1b4e68u: goto label_1b4e68;
        case 0x1b4e6cu: goto label_1b4e6c;
        case 0x1b4e70u: goto label_1b4e70;
        case 0x1b4e74u: goto label_1b4e74;
        case 0x1b4e78u: goto label_1b4e78;
        case 0x1b4e7cu: goto label_1b4e7c;
        case 0x1b4e80u: goto label_1b4e80;
        case 0x1b4e84u: goto label_1b4e84;
        case 0x1b4e88u: goto label_1b4e88;
        case 0x1b4e8cu: goto label_1b4e8c;
        case 0x1b4e90u: goto label_1b4e90;
        case 0x1b4e94u: goto label_1b4e94;
        case 0x1b4e98u: goto label_1b4e98;
        case 0x1b4e9cu: goto label_1b4e9c;
        case 0x1b4ea0u: goto label_1b4ea0;
        case 0x1b4ea4u: goto label_1b4ea4;
        default: return;
    }

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
            goto label_1b4c9c;
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
            goto label_1b4c9c;
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
            goto label_1b4c98;
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
            goto label_1b4c98;
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
            goto label_1b4c98;
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
label_1b4c58:
    // 0x1b4c58: 0x46011941  sub.s       $f5, $f3, $f1
    ctx->pc = 0x1b4c58u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1b4c5c:
    // 0x1b4c5c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1b4c5cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1b4c60:
    // 0x1b4c60: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1b4c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b4c64:
    // 0x1b4c64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4c68:
    // 0x1b4c68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b4c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b4c6c:
    // 0x1b4c6c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b4c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b4c70:
    // 0x1b4c70: 0x0  nop
    ctx->pc = 0x1b4c70u;
    // NOP
label_1b4c74:
    // 0x1b4c74: 0x460f1902  mul.s       $f4, $f3, $f15
    ctx->pc = 0x1b4c74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
label_1b4c78:
    // 0x1b4c78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4c7c:
    // 0x1b4c7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4c80:
    // 0x1b4c80: 0x0  nop
    ctx->pc = 0x1b4c80u;
    // NOP
label_1b4c84:
    // 0x1b4c84: 0x46051842  mul.s       $f1, $f3, $f5
    ctx->pc = 0x1b4c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_1b4c88:
    // 0x1b4c88: 0x46022300  add.s       $f12, $f4, $f2
    ctx->pc = 0x1b4c88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1b4c8c:
    // 0x1b4c8c: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x1b4c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_1b4c90:
    // 0x1b4c90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b4c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b4c94:
    // 0x1b4c94: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1b4c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1b4c98:
    // 0x1b4c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4c9c:
    // 0x1b4c9c: 0x3e00008  jr          $ra
label_1b4ca0:
    if (ctx->pc == 0x1B4CA0u) {
        ctx->pc = 0x1B4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C9Cu;
        // 0x1b4ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4CA4u;
        goto label_1b4ca4;
    }
    ctx->pc = 0x1B4C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4C9Cu;
        // 0x1b4ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4CA4u;
label_1b4ca4:
    // 0x1b4ca4: 0x0  nop
    ctx->pc = 0x1b4ca4u;
    // NOP
label_1b4ca8:
    // 0x1b4ca8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b4ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4cac:
    // 0x1b4cac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b4cacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b4cb0:
    // 0x1b4cb0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b4cb4:
    // 0x1b4cb4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1b4cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1b4cb8:
    // 0x1b4cb8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b4cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_1b4cbc:
    // 0x1b4cbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b4cc0:
    // 0x1b4cc0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1b4cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1b4cc4:
    // 0x1b4cc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b4cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b4cc8:
    // 0x1b4cc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b4cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1b4ccc:
    // 0x1b4ccc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1b4cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1b4cd0:
    // 0x1b4cd0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b4cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4cd4:
    // 0x1b4cd4: 0x3e00008  jr          $ra
label_1b4cd8:
    if (ctx->pc == 0x1B4CD8u) {
        ctx->pc = 0x1B4CDCu;
        goto label_1b4cdc;
    }
    ctx->pc = 0x1B4CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4CDCu;
label_1b4cdc:
    // 0x1b4cdc: 0x0  nop
    ctx->pc = 0x1b4cdcu;
    // NOP
label_1b4ce0:
    // 0x1b4ce0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1b4ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_1b4ce4:
    // 0x1b4ce4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b4ce4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1b4ce8:
    // 0x1b4ce8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b4ce8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1b4cec:
    // 0x1b4cec: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b4cf0:
    // 0x1b4cf0: 0x3c067ff0  lui         $a2, 0x7FF0
    ctx->pc = 0x1b4cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32752 << 16));
label_1b4cf4:
    // 0x1b4cf4: 0x32823  negu        $a1, $v1
    ctx->pc = 0x1b4cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1b4cf8:
    // 0x1b4cf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4cfc:
    // 0x1b4cfc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1b4cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1b4d00:
    // 0x1b4d00: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1b4d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b4d04:
    // 0x1b4d04: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1b4d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1b4d08:
    // 0x1b4d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4d0c:
    // 0x1b4d0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b4d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1b4d10:
    // 0x1b4d10: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x1b4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1b4d14:
    // 0x1b4d14: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1b4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_1b4d18:
    // 0x1b4d18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b4d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1b4d1c:
    // 0x1b4d1c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1b4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1b4d20:
    // 0x1b4d20: 0x3e00008  jr          $ra
label_1b4d24:
    if (ctx->pc == 0x1B4D24u) {
        ctx->pc = 0x1B4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D20u;
        // 0x1b4d24: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4D28u;
        goto label_1b4d28;
    }
    ctx->pc = 0x1B4D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D20u;
        // 0x1b4d24: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4D28u;
label_1b4d28:
    // 0x1b4d28: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b4d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b4d2c:
    // 0x1b4d2c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1b4d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1b4d30:
    // 0x1b4d30: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b4d30u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1b4d34:
    // 0x1b4d34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b4d34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1b4d38:
    // 0x1b4d38: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b4d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b4d3c:
    // 0x1b4d3c: 0x3c067ff0  lui         $a2, 0x7FF0
    ctx->pc = 0x1b4d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32752 << 16));
label_1b4d40:
    // 0x1b4d40: 0x42823  negu        $a1, $a0
    ctx->pc = 0x1b4d40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_1b4d44:
    // 0x1b4d44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b4d48:
    // 0x1b4d48: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1b4d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1b4d4c:
    // 0x1b4d4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b4d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1b4d50:
    // 0x1b4d50: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1b4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1b4d54:
    // 0x1b4d54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b4d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1b4d58:
    // 0x1b4d58: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x1b4d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b4d5c:
    // 0x1b4d5c: 0x3e00008  jr          $ra
label_1b4d60:
    if (ctx->pc == 0x1B4D60u) {
        ctx->pc = 0x1B4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D5Cu;
        // 0x1b4d60: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4D64u;
        goto label_1b4d64;
    }
    ctx->pc = 0x1B4D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D5Cu;
        // 0x1b4d60: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4D64u;
label_1b4d64:
    // 0x1b4d64: 0x0  nop
    ctx->pc = 0x1b4d64u;
    // NOP
label_1b4d68:
    // 0x1b4d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b4d6c:
    // 0x1b4d6c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b4d6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b4d70:
    // 0x1b4d70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b4d74:
    // 0x1b4d74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b4d78:
    // 0x1b4d78: 0x44116800  mfc1        $s1, $f13
    ctx->pc = 0x1b4d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1b4d7c:
    // 0x1b4d7c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b4d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1b4d80:
    // 0x1b4d80: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
label_1b4d84:
    // 0x1b4d84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b4d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b4d88:
    // 0x1b4d88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4d8c:
    // 0x1b4d8c: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x1b4d8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_1b4d90:
    // 0x1b4d90: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b4d94:
    // 0x1b4d94: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1b4d98:
    if (ctx->pc == 0x1B4D98u) {
        ctx->pc = 0x1B4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D94u;
        // 0x1b4d98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4D9Cu;
        goto label_1b4d9c;
    }
    ctx->pc = 0x1B4D94u;
    {
        const bool branch_taken_0x1b4d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D94u;
        // 0x1b4d98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d94) {
            ctx->pc = 0x1B4DD0u;
            goto label_1b4dd0;
        }
    }
    ctx->pc = 0x1B4D9Cu;
label_1b4d9c:
    // 0x1b4d9c: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
label_1b4da0:
    if (ctx->pc == 0x1B4DA0u) {
        ctx->pc = 0x1B4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D9Cu;
        // 0x1b4da0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4DA4u;
        goto label_1b4da4;
    }
    ctx->pc = 0x1B4D9Cu;
    {
        const bool branch_taken_0x1b4d9c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B4DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4D9Cu;
        // 0x1b4da0: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4d9c) {
            ctx->pc = 0x1B4DB8u;
            goto label_1b4db8;
        }
    }
    ctx->pc = 0x1B4DA4u;
label_1b4da4:
    // 0x1b4da4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1b4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_1b4da8:
    // 0x1b4da8: 0xc441b264  lwc1        $f1, -0x4D9C($v0)
    ctx->pc = 0x1b4da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4dac:
    // 0x1b4dac: 0xc460b274  lwc1        $f0, -0x4D8C($v1)
    ctx->pc = 0x1b4dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4db0:
    // 0x1b4db0: 0x1000008f  b           . + 4 + (0x8F << 2)
label_1b4db4:
    if (ctx->pc == 0x1B4DB4u) {
        ctx->pc = 0x1B4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DB0u;
        // 0x1b4db4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4DB8u;
        goto label_1b4db8;
    }
    ctx->pc = 0x1B4DB0u;
    {
        const bool branch_taken_0x1b4db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DB0u;
        // 0x1b4db4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4db0) {
            ctx->pc = 0x1B4FF0u;
            { ctx->pc = 0x1b4ff0; return; }
        }
    }
    ctx->pc = 0x1B4DB8u;
label_1b4db8:
    // 0x1b4db8: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1b4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_1b4dbc:
    // 0x1b4dbc: 0xc440b264  lwc1        $f0, -0x4D9C($v0)
    ctx->pc = 0x1b4dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4dc0:
    // 0x1b4dc0: 0xc461b274  lwc1        $f1, -0x4D8C($v1)
    ctx->pc = 0x1b4dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4dc4:
    // 0x1b4dc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4dc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1b4dc8:
    // 0x1b4dc8: 0x10000089  b           . + 4 + (0x89 << 2)
label_1b4dcc:
    if (ctx->pc == 0x1B4DCCu) {
        ctx->pc = 0x1B4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DC8u;
        // 0x1b4dcc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4DD0u;
        goto label_1b4dd0;
    }
    ctx->pc = 0x1B4DC8u;
    {
        const bool branch_taken_0x1b4dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DC8u;
        // 0x1b4dcc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4dc8) {
            ctx->pc = 0x1B4FF0u;
            { ctx->pc = 0x1b4ff0; return; }
        }
    }
    ctx->pc = 0x1B4DD0u;
label_1b4dd0:
    // 0x1b4dd0: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x1b4dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
label_1b4dd4:
    // 0x1b4dd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4dd8:
    // 0x1b4dd8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b4ddc:
    // 0x1b4ddc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1b4de0:
    if (ctx->pc == 0x1B4DE0u) {
        ctx->pc = 0x1B4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DDCu;
        // 0x1b4de0: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4DE4u;
        goto label_1b4de4;
    }
    ctx->pc = 0x1B4DDCu;
    {
        const bool branch_taken_0x1b4ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DDCu;
        // 0x1b4de0: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ddc) {
            ctx->pc = 0x1B4E28u;
            goto label_1b4e28;
        }
    }
    ctx->pc = 0x1B4DE4u;
label_1b4de4:
    // 0x1b4de4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4de8:
    // 0x1b4de8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b4dec:
    // 0x1b4dec: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_1b4df0:
    if (ctx->pc == 0x1B4DF0u) {
        ctx->pc = 0x1B4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DECu;
        // 0x1b4df0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4DF4u;
        goto label_1b4df4;
    }
    ctx->pc = 0x1B4DECu;
    {
        const bool branch_taken_0x1b4dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DECu;
        // 0x1b4df0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4dec) {
            ctx->pc = 0x1B4F14u;
            { ctx->pc = 0x1b4f14; return; }
        }
    }
    ctx->pc = 0x1B4DF4u;
label_1b4df4:
    // 0x1b4df4: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b4df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
label_1b4df8:
    // 0x1b4df8: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b4df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
label_1b4dfc:
    // 0x1b4dfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4e00:
    // 0x1b4e00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4e04:
    // 0x1b4e04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4e08:
    // 0x1b4e08: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x1b4e08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_1b4e0c:
    // 0x1b4e0c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1b4e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4e10:
    // 0x1b4e10: 0x0  nop
    ctx->pc = 0x1b4e10u;
    // NOP
label_1b4e14:
    // 0x1b4e14: 0x45010076  bc1t        . + 4 + (0x76 << 2)
label_1b4e18:
    if (ctx->pc == 0x1B4E18u) {
        ctx->pc = 0x1B4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E14u;
        // 0x1b4e18: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E1Cu;
        goto label_1b4e1c;
    }
    ctx->pc = 0x1B4E14u;
    {
        const bool branch_taken_0x1b4e14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E14u;
        // 0x1b4e18: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e14) {
            ctx->pc = 0x1B4FF0u;
            { ctx->pc = 0x1b4ff0; return; }
        }
    }
    ctx->pc = 0x1B4E1Cu;
label_1b4e1c:
    // 0x1b4e1c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1b4e20:
    if (ctx->pc == 0x1B4E20u) {
        ctx->pc = 0x1B4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E1Cu;
        // 0x1b4e20: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E24u;
        goto label_1b4e24;
    }
    ctx->pc = 0x1B4E1Cu;
    {
        const bool branch_taken_0x1b4e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E1Cu;
        // 0x1b4e20: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e1c) {
            ctx->pc = 0x1B4F18u;
            { ctx->pc = 0x1b4f18; return; }
        }
    }
    ctx->pc = 0x1B4E24u;
label_1b4e24:
    // 0x1b4e24: 0x0  nop
    ctx->pc = 0x1b4e24u;
    // NOP
label_1b4e28:
    // 0x1b4e28: 0xc06d448  jal         func_1B5120
label_1b4e2c:
    if (ctx->pc == 0x1B4E2Cu) {
        ctx->pc = 0x1B4E30u;
        goto label_1b4e30;
    }
    ctx->pc = 0x1B4E28u;
    SET_GPR_U32(ctx, 31, 0x1B4E30u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x1B4E30u;
label_1b4e30:
    // 0x1b4e30: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x1b4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
label_1b4e34:
    // 0x1b4e34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4e38:
    // 0x1b4e38: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b4e3c:
    // 0x1b4e3c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1b4e40:
    if (ctx->pc == 0x1B4E40u) {
        ctx->pc = 0x1B4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E3Cu;
        // 0x1b4e40: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E44u;
        goto label_1b4e44;
    }
    ctx->pc = 0x1B4E3Cu;
    {
        const bool branch_taken_0x1b4e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E3Cu;
        // 0x1b4e40: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e3c) {
            ctx->pc = 0x1B4EB8u;
            { ctx->pc = 0x1b4eb8; return; }
        }
    }
    ctx->pc = 0x1B4E44u;
label_1b4e44:
    // 0x1b4e44: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x1b4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
label_1b4e48:
    // 0x1b4e48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b4e4c:
    // 0x1b4e4c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b4e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b4e50:
    // 0x1b4e50: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1b4e54:
    if (ctx->pc == 0x1B4E54u) {
        ctx->pc = 0x1B4E58u;
        goto label_1b4e58;
    }
    ctx->pc = 0x1B4E50u;
    {
        const bool branch_taken_0x1b4e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e50) {
            ctx->pc = 0x1B4E90u;
            goto label_1b4e90;
        }
    }
    ctx->pc = 0x1B4E58u;
label_1b4e58:
    // 0x1b4e58: 0x460d6800  add.s       $f0, $f13, $f13
    ctx->pc = 0x1b4e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_1b4e5c:
    // 0x1b4e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4e60:
    // 0x1b4e60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b4e64:
    // 0x1b4e64: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b4e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1b4e68:
    // 0x1b4e68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b4e6c:
    // 0x1b4e6c: 0x0  nop
    ctx->pc = 0x1b4e6cu;
    // NOP
label_1b4e70:
    // 0x1b4e70: 0x46016840  add.s       $f1, $f13, $f1
    ctx->pc = 0x1b4e70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_1b4e74:
    // 0x1b4e74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b4e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b4e78:
    // 0x1b4e78: 0x0  nop
    ctx->pc = 0x1b4e78u;
    // NOP
label_1b4e7c:
    // 0x1b4e7c: 0x0  nop
    ctx->pc = 0x1b4e7cu;
    // NOP
label_1b4e80:
    // 0x1b4e80: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1b4e80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
label_1b4e84:
    // 0x1b4e84: 0x10000023  b           . + 4 + (0x23 << 2)
label_1b4e88:
    if (ctx->pc == 0x1B4E88u) {
        ctx->pc = 0x1B4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E84u;
        // 0x1b4e88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4E8Cu;
        goto label_1b4e8c;
    }
    ctx->pc = 0x1B4E84u;
    {
        const bool branch_taken_0x1b4e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E84u;
        // 0x1b4e88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e84) {
            ctx->pc = 0x1B4F14u;
            { ctx->pc = 0x1b4f14; return; }
        }
    }
    ctx->pc = 0x1B4E8Cu;
label_1b4e8c:
    // 0x1b4e8c: 0x0  nop
    ctx->pc = 0x1b4e8cu;
    // NOP
label_1b4e90:
    // 0x1b4e90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b4e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b4e94:
    // 0x1b4e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4e98:
    // 0x1b4e98: 0x0  nop
    ctx->pc = 0x1b4e98u;
    // NOP
label_1b4e9c:
    // 0x1b4e9c: 0x46006840  add.s       $f1, $f13, $f0
    ctx->pc = 0x1b4e9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_1b4ea0:
    // 0x1b4ea0: 0x46006801  sub.s       $f0, $f13, $f0
    ctx->pc = 0x1b4ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_1b4ea4:
    // 0x1b4ea4: 0x0  nop
    ctx->pc = 0x1b4ea4u;
    // NOP
    ctx->pc = 0x1b4ea8u;
    return;
}

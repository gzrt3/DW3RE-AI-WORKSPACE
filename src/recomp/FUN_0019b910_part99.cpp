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


void FUN_0019b910_part99(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1cb6b0u: goto label_1cb6b0;
        case 0x1cb6b4u: goto label_1cb6b4;
        case 0x1cb6b8u: goto label_1cb6b8;
        case 0x1cb6bcu: goto label_1cb6bc;
        case 0x1cb6c0u: goto label_1cb6c0;
        case 0x1cb6c4u: goto label_1cb6c4;
        case 0x1cb6c8u: goto label_1cb6c8;
        case 0x1cb6ccu: goto label_1cb6cc;
        case 0x1cb6d0u: goto label_1cb6d0;
        case 0x1cb6d4u: goto label_1cb6d4;
        case 0x1cb6d8u: goto label_1cb6d8;
        case 0x1cb6dcu: goto label_1cb6dc;
        case 0x1cb6e0u: goto label_1cb6e0;
        case 0x1cb6e4u: goto label_1cb6e4;
        case 0x1cb6e8u: goto label_1cb6e8;
        case 0x1cb6ecu: goto label_1cb6ec;
        case 0x1cb6f0u: goto label_1cb6f0;
        case 0x1cb6f4u: goto label_1cb6f4;
        case 0x1cb6f8u: goto label_1cb6f8;
        case 0x1cb6fcu: goto label_1cb6fc;
        case 0x1cb700u: goto label_1cb700;
        case 0x1cb704u: goto label_1cb704;
        case 0x1cb708u: goto label_1cb708;
        case 0x1cb70cu: goto label_1cb70c;
        case 0x1cb710u: goto label_1cb710;
        case 0x1cb714u: goto label_1cb714;
        case 0x1cb718u: goto label_1cb718;
        case 0x1cb71cu: goto label_1cb71c;
        case 0x1cb720u: goto label_1cb720;
        case 0x1cb724u: goto label_1cb724;
        case 0x1cb728u: goto label_1cb728;
        case 0x1cb72cu: goto label_1cb72c;
        case 0x1cb730u: goto label_1cb730;
        case 0x1cb734u: goto label_1cb734;
        case 0x1cb738u: goto label_1cb738;
        case 0x1cb73cu: goto label_1cb73c;
        case 0x1cb740u: goto label_1cb740;
        case 0x1cb744u: goto label_1cb744;
        case 0x1cb748u: goto label_1cb748;
        case 0x1cb74cu: goto label_1cb74c;
        case 0x1cb750u: goto label_1cb750;
        case 0x1cb754u: goto label_1cb754;
        case 0x1cb758u: goto label_1cb758;
        case 0x1cb75cu: goto label_1cb75c;
        case 0x1cb760u: goto label_1cb760;
        case 0x1cb764u: goto label_1cb764;
        case 0x1cb768u: goto label_1cb768;
        case 0x1cb76cu: goto label_1cb76c;
        case 0x1cb770u: goto label_1cb770;
        case 0x1cb774u: goto label_1cb774;
        case 0x1cb778u: goto label_1cb778;
        case 0x1cb77cu: goto label_1cb77c;
        case 0x1cb780u: goto label_1cb780;
        case 0x1cb784u: goto label_1cb784;
        case 0x1cb788u: goto label_1cb788;
        case 0x1cb78cu: goto label_1cb78c;
        case 0x1cb790u: goto label_1cb790;
        case 0x1cb794u: goto label_1cb794;
        case 0x1cb798u: goto label_1cb798;
        case 0x1cb79cu: goto label_1cb79c;
        case 0x1cb7a0u: goto label_1cb7a0;
        case 0x1cb7a4u: goto label_1cb7a4;
        case 0x1cb7a8u: goto label_1cb7a8;
        case 0x1cb7acu: goto label_1cb7ac;
        case 0x1cb7b0u: goto label_1cb7b0;
        case 0x1cb7b4u: goto label_1cb7b4;
        case 0x1cb7b8u: goto label_1cb7b8;
        case 0x1cb7bcu: goto label_1cb7bc;
        case 0x1cb7c0u: goto label_1cb7c0;
        case 0x1cb7c4u: goto label_1cb7c4;
        case 0x1cb7c8u: goto label_1cb7c8;
        case 0x1cb7ccu: goto label_1cb7cc;
        case 0x1cb7d0u: goto label_1cb7d0;
        case 0x1cb7d4u: goto label_1cb7d4;
        case 0x1cb7d8u: goto label_1cb7d8;
        case 0x1cb7dcu: goto label_1cb7dc;
        case 0x1cb7e0u: goto label_1cb7e0;
        case 0x1cb7e4u: goto label_1cb7e4;
        case 0x1cb7e8u: goto label_1cb7e8;
        case 0x1cb7ecu: goto label_1cb7ec;
        case 0x1cb7f0u: goto label_1cb7f0;
        case 0x1cb7f4u: goto label_1cb7f4;
        case 0x1cb7f8u: goto label_1cb7f8;
        case 0x1cb7fcu: goto label_1cb7fc;
        case 0x1cb800u: goto label_1cb800;
        case 0x1cb804u: goto label_1cb804;
        case 0x1cb808u: goto label_1cb808;
        case 0x1cb80cu: goto label_1cb80c;
        case 0x1cb810u: goto label_1cb810;
        case 0x1cb814u: goto label_1cb814;
        case 0x1cb818u: goto label_1cb818;
        case 0x1cb81cu: goto label_1cb81c;
        case 0x1cb820u: goto label_1cb820;
        case 0x1cb824u: goto label_1cb824;
        case 0x1cb828u: goto label_1cb828;
        case 0x1cb82cu: goto label_1cb82c;
        case 0x1cb830u: goto label_1cb830;
        case 0x1cb834u: goto label_1cb834;
        case 0x1cb838u: goto label_1cb838;
        case 0x1cb83cu: goto label_1cb83c;
        case 0x1cb840u: goto label_1cb840;
        case 0x1cb844u: goto label_1cb844;
        case 0x1cb848u: goto label_1cb848;
        case 0x1cb84cu: goto label_1cb84c;
        case 0x1cb850u: goto label_1cb850;
        case 0x1cb854u: goto label_1cb854;
        case 0x1cb858u: goto label_1cb858;
        case 0x1cb85cu: goto label_1cb85c;
        case 0x1cb860u: goto label_1cb860;
        case 0x1cb864u: goto label_1cb864;
        case 0x1cb868u: goto label_1cb868;
        case 0x1cb86cu: goto label_1cb86c;
        case 0x1cb870u: goto label_1cb870;
        case 0x1cb874u: goto label_1cb874;
        case 0x1cb878u: goto label_1cb878;
        case 0x1cb87cu: goto label_1cb87c;
        case 0x1cb880u: goto label_1cb880;
        case 0x1cb884u: goto label_1cb884;
        case 0x1cb888u: goto label_1cb888;
        case 0x1cb88cu: goto label_1cb88c;
        case 0x1cb890u: goto label_1cb890;
        case 0x1cb894u: goto label_1cb894;
        case 0x1cb898u: goto label_1cb898;
        case 0x1cb89cu: goto label_1cb89c;
        case 0x1cb8a0u: goto label_1cb8a0;
        case 0x1cb8a4u: goto label_1cb8a4;
        case 0x1cb8a8u: goto label_1cb8a8;
        case 0x1cb8acu: goto label_1cb8ac;
        case 0x1cb8b0u: goto label_1cb8b0;
        case 0x1cb8b4u: goto label_1cb8b4;
        case 0x1cb8b8u: goto label_1cb8b8;
        case 0x1cb8bcu: goto label_1cb8bc;
        case 0x1cb8c0u: goto label_1cb8c0;
        case 0x1cb8c4u: goto label_1cb8c4;
        case 0x1cb8c8u: goto label_1cb8c8;
        case 0x1cb8ccu: goto label_1cb8cc;
        case 0x1cb8d0u: goto label_1cb8d0;
        case 0x1cb8d4u: goto label_1cb8d4;
        case 0x1cb8d8u: goto label_1cb8d8;
        case 0x1cb8dcu: goto label_1cb8dc;
        case 0x1cb8e0u: goto label_1cb8e0;
        case 0x1cb8e4u: goto label_1cb8e4;
        case 0x1cb8e8u: goto label_1cb8e8;
        case 0x1cb8ecu: goto label_1cb8ec;
        case 0x1cb8f0u: goto label_1cb8f0;
        case 0x1cb8f4u: goto label_1cb8f4;
        case 0x1cb8f8u: goto label_1cb8f8;
        case 0x1cb8fcu: goto label_1cb8fc;
        case 0x1cb900u: goto label_1cb900;
        case 0x1cb904u: goto label_1cb904;
        case 0x1cb908u: goto label_1cb908;
        case 0x1cb90cu: goto label_1cb90c;
        case 0x1cb910u: goto label_1cb910;
        case 0x1cb914u: goto label_1cb914;
        case 0x1cb918u: goto label_1cb918;
        case 0x1cb91cu: goto label_1cb91c;
        case 0x1cb920u: goto label_1cb920;
        case 0x1cb924u: goto label_1cb924;
        case 0x1cb928u: goto label_1cb928;
        case 0x1cb92cu: goto label_1cb92c;
        case 0x1cb930u: goto label_1cb930;
        case 0x1cb934u: goto label_1cb934;
        case 0x1cb938u: goto label_1cb938;
        case 0x1cb93cu: goto label_1cb93c;
        case 0x1cb940u: goto label_1cb940;
        case 0x1cb944u: goto label_1cb944;
        case 0x1cb948u: goto label_1cb948;
        case 0x1cb94cu: goto label_1cb94c;
        case 0x1cb950u: goto label_1cb950;
        case 0x1cb954u: goto label_1cb954;
        case 0x1cb958u: goto label_1cb958;
        case 0x1cb95cu: goto label_1cb95c;
        case 0x1cb960u: goto label_1cb960;
        case 0x1cb964u: goto label_1cb964;
        case 0x1cb968u: goto label_1cb968;
        case 0x1cb96cu: goto label_1cb96c;
        case 0x1cb970u: goto label_1cb970;
        case 0x1cb974u: goto label_1cb974;
        case 0x1cb978u: goto label_1cb978;
        case 0x1cb97cu: goto label_1cb97c;
        case 0x1cb980u: goto label_1cb980;
        case 0x1cb984u: goto label_1cb984;
        case 0x1cb988u: goto label_1cb988;
        case 0x1cb98cu: goto label_1cb98c;
        case 0x1cb990u: goto label_1cb990;
        case 0x1cb994u: goto label_1cb994;
        case 0x1cb998u: goto label_1cb998;
        case 0x1cb99cu: goto label_1cb99c;
        case 0x1cb9a0u: goto label_1cb9a0;
        case 0x1cb9a4u: goto label_1cb9a4;
        case 0x1cb9a8u: goto label_1cb9a8;
        case 0x1cb9acu: goto label_1cb9ac;
        case 0x1cb9b0u: goto label_1cb9b0;
        case 0x1cb9b4u: goto label_1cb9b4;
        case 0x1cb9b8u: goto label_1cb9b8;
        case 0x1cb9bcu: goto label_1cb9bc;
        case 0x1cb9c0u: goto label_1cb9c0;
        case 0x1cb9c4u: goto label_1cb9c4;
        case 0x1cb9c8u: goto label_1cb9c8;
        case 0x1cb9ccu: goto label_1cb9cc;
        case 0x1cb9d0u: goto label_1cb9d0;
        case 0x1cb9d4u: goto label_1cb9d4;
        case 0x1cb9d8u: goto label_1cb9d8;
        case 0x1cb9dcu: goto label_1cb9dc;
        case 0x1cb9e0u: goto label_1cb9e0;
        case 0x1cb9e4u: goto label_1cb9e4;
        case 0x1cb9e8u: goto label_1cb9e8;
        case 0x1cb9ecu: goto label_1cb9ec;
        case 0x1cb9f0u: goto label_1cb9f0;
        case 0x1cb9f4u: goto label_1cb9f4;
        case 0x1cb9f8u: goto label_1cb9f8;
        case 0x1cb9fcu: goto label_1cb9fc;
        case 0x1cba00u: goto label_1cba00;
        case 0x1cba04u: goto label_1cba04;
        case 0x1cba08u: goto label_1cba08;
        case 0x1cba0cu: goto label_1cba0c;
        case 0x1cba10u: goto label_1cba10;
        case 0x1cba14u: goto label_1cba14;
        case 0x1cba18u: goto label_1cba18;
        case 0x1cba1cu: goto label_1cba1c;
        case 0x1cba20u: goto label_1cba20;
        case 0x1cba24u: goto label_1cba24;
        case 0x1cba28u: goto label_1cba28;
        case 0x1cba2cu: goto label_1cba2c;
        case 0x1cba30u: goto label_1cba30;
        case 0x1cba34u: goto label_1cba34;
        case 0x1cba38u: goto label_1cba38;
        case 0x1cba3cu: goto label_1cba3c;
        case 0x1cba40u: goto label_1cba40;
        case 0x1cba44u: goto label_1cba44;
        case 0x1cba48u: goto label_1cba48;
        case 0x1cba4cu: goto label_1cba4c;
        case 0x1cba50u: goto label_1cba50;
        case 0x1cba54u: goto label_1cba54;
        case 0x1cba58u: goto label_1cba58;
        case 0x1cba5cu: goto label_1cba5c;
        case 0x1cba60u: goto label_1cba60;
        case 0x1cba64u: goto label_1cba64;
        case 0x1cba68u: goto label_1cba68;
        case 0x1cba6cu: goto label_1cba6c;
        case 0x1cba70u: goto label_1cba70;
        case 0x1cba74u: goto label_1cba74;
        case 0x1cba78u: goto label_1cba78;
        case 0x1cba7cu: goto label_1cba7c;
        case 0x1cba80u: goto label_1cba80;
        case 0x1cba84u: goto label_1cba84;
        case 0x1cba88u: goto label_1cba88;
        case 0x1cba8cu: goto label_1cba8c;
        case 0x1cba90u: goto label_1cba90;
        case 0x1cba94u: goto label_1cba94;
        case 0x1cba98u: goto label_1cba98;
        case 0x1cba9cu: goto label_1cba9c;
        case 0x1cbaa0u: goto label_1cbaa0;
        case 0x1cbaa4u: goto label_1cbaa4;
        case 0x1cbaa8u: goto label_1cbaa8;
        case 0x1cbaacu: goto label_1cbaac;
        case 0x1cbab0u: goto label_1cbab0;
        case 0x1cbab4u: goto label_1cbab4;
        case 0x1cbab8u: goto label_1cbab8;
        case 0x1cbabcu: goto label_1cbabc;
        case 0x1cbac0u: goto label_1cbac0;
        case 0x1cbac4u: goto label_1cbac4;
        case 0x1cbac8u: goto label_1cbac8;
        case 0x1cbaccu: goto label_1cbacc;
        case 0x1cbad0u: goto label_1cbad0;
        case 0x1cbad4u: goto label_1cbad4;
        case 0x1cbad8u: goto label_1cbad8;
        case 0x1cbadcu: goto label_1cbadc;
        case 0x1cbae0u: goto label_1cbae0;
        case 0x1cbae4u: goto label_1cbae4;
        case 0x1cbae8u: goto label_1cbae8;
        case 0x1cbaecu: goto label_1cbaec;
        case 0x1cbaf0u: goto label_1cbaf0;
        case 0x1cbaf4u: goto label_1cbaf4;
        case 0x1cbaf8u: goto label_1cbaf8;
        case 0x1cbafcu: goto label_1cbafc;
        case 0x1cbb00u: goto label_1cbb00;
        case 0x1cbb04u: goto label_1cbb04;
        case 0x1cbb08u: goto label_1cbb08;
        case 0x1cbb0cu: goto label_1cbb0c;
        case 0x1cbb10u: goto label_1cbb10;
        case 0x1cbb14u: goto label_1cbb14;
        case 0x1cbb18u: goto label_1cbb18;
        case 0x1cbb1cu: goto label_1cbb1c;
        case 0x1cbb20u: goto label_1cbb20;
        case 0x1cbb24u: goto label_1cbb24;
        case 0x1cbb28u: goto label_1cbb28;
        case 0x1cbb2cu: goto label_1cbb2c;
        case 0x1cbb30u: goto label_1cbb30;
        case 0x1cbb34u: goto label_1cbb34;
        case 0x1cbb38u: goto label_1cbb38;
        case 0x1cbb3cu: goto label_1cbb3c;
        case 0x1cbb40u: goto label_1cbb40;
        case 0x1cbb44u: goto label_1cbb44;
        case 0x1cbb48u: goto label_1cbb48;
        case 0x1cbb4cu: goto label_1cbb4c;
        case 0x1cbb50u: goto label_1cbb50;
        case 0x1cbb54u: goto label_1cbb54;
        case 0x1cbb58u: goto label_1cbb58;
        case 0x1cbb5cu: goto label_1cbb5c;
        case 0x1cbb60u: goto label_1cbb60;
        case 0x1cbb64u: goto label_1cbb64;
        case 0x1cbb68u: goto label_1cbb68;
        case 0x1cbb6cu: goto label_1cbb6c;
        case 0x1cbb70u: goto label_1cbb70;
        case 0x1cbb74u: goto label_1cbb74;
        case 0x1cbb78u: goto label_1cbb78;
        case 0x1cbb7cu: goto label_1cbb7c;
        case 0x1cbb80u: goto label_1cbb80;
        case 0x1cbb84u: goto label_1cbb84;
        case 0x1cbb88u: goto label_1cbb88;
        case 0x1cbb8cu: goto label_1cbb8c;
        case 0x1cbb90u: goto label_1cbb90;
        case 0x1cbb94u: goto label_1cbb94;
        case 0x1cbb98u: goto label_1cbb98;
        case 0x1cbb9cu: goto label_1cbb9c;
        case 0x1cbba0u: goto label_1cbba0;
        case 0x1cbba4u: goto label_1cbba4;
        case 0x1cbba8u: goto label_1cbba8;
        case 0x1cbbacu: goto label_1cbbac;
        case 0x1cbbb0u: goto label_1cbbb0;
        case 0x1cbbb4u: goto label_1cbbb4;
        case 0x1cbbb8u: goto label_1cbbb8;
        case 0x1cbbbcu: goto label_1cbbbc;
        case 0x1cbbc0u: goto label_1cbbc0;
        case 0x1cbbc4u: goto label_1cbbc4;
        case 0x1cbbc8u: goto label_1cbbc8;
        case 0x1cbbccu: goto label_1cbbcc;
        case 0x1cbbd0u: goto label_1cbbd0;
        case 0x1cbbd4u: goto label_1cbbd4;
        case 0x1cbbd8u: goto label_1cbbd8;
        case 0x1cbbdcu: goto label_1cbbdc;
        case 0x1cbbe0u: goto label_1cbbe0;
        case 0x1cbbe4u: goto label_1cbbe4;
        case 0x1cbbe8u: goto label_1cbbe8;
        case 0x1cbbecu: goto label_1cbbec;
        case 0x1cbbf0u: goto label_1cbbf0;
        case 0x1cbbf4u: goto label_1cbbf4;
        case 0x1cbbf8u: goto label_1cbbf8;
        case 0x1cbbfcu: goto label_1cbbfc;
        case 0x1cbc00u: goto label_1cbc00;
        case 0x1cbc04u: goto label_1cbc04;
        case 0x1cbc08u: goto label_1cbc08;
        case 0x1cbc0cu: goto label_1cbc0c;
        case 0x1cbc10u: goto label_1cbc10;
        case 0x1cbc14u: goto label_1cbc14;
        case 0x1cbc18u: goto label_1cbc18;
        case 0x1cbc1cu: goto label_1cbc1c;
        case 0x1cbc20u: goto label_1cbc20;
        case 0x1cbc24u: goto label_1cbc24;
        case 0x1cbc28u: goto label_1cbc28;
        case 0x1cbc2cu: goto label_1cbc2c;
        case 0x1cbc30u: goto label_1cbc30;
        case 0x1cbc34u: goto label_1cbc34;
        case 0x1cbc38u: goto label_1cbc38;
        case 0x1cbc3cu: goto label_1cbc3c;
        case 0x1cbc40u: goto label_1cbc40;
        case 0x1cbc44u: goto label_1cbc44;
        case 0x1cbc48u: goto label_1cbc48;
        case 0x1cbc4cu: goto label_1cbc4c;
        case 0x1cbc50u: goto label_1cbc50;
        case 0x1cbc54u: goto label_1cbc54;
        case 0x1cbc58u: goto label_1cbc58;
        case 0x1cbc5cu: goto label_1cbc5c;
        case 0x1cbc60u: goto label_1cbc60;
        case 0x1cbc64u: goto label_1cbc64;
        case 0x1cbc68u: goto label_1cbc68;
        case 0x1cbc6cu: goto label_1cbc6c;
        case 0x1cbc70u: goto label_1cbc70;
        case 0x1cbc74u: goto label_1cbc74;
        case 0x1cbc78u: goto label_1cbc78;
        case 0x1cbc7cu: goto label_1cbc7c;
        case 0x1cbc80u: goto label_1cbc80;
        case 0x1cbc84u: goto label_1cbc84;
        case 0x1cbc88u: goto label_1cbc88;
        case 0x1cbc8cu: goto label_1cbc8c;
        case 0x1cbc90u: goto label_1cbc90;
        case 0x1cbc94u: goto label_1cbc94;
        case 0x1cbc98u: goto label_1cbc98;
        case 0x1cbc9cu: goto label_1cbc9c;
        case 0x1cbca0u: goto label_1cbca0;
        case 0x1cbca4u: goto label_1cbca4;
        case 0x1cbca8u: goto label_1cbca8;
        case 0x1cbcacu: goto label_1cbcac;
        case 0x1cbcb0u: goto label_1cbcb0;
        case 0x1cbcb4u: goto label_1cbcb4;
        case 0x1cbcb8u: goto label_1cbcb8;
        case 0x1cbcbcu: goto label_1cbcbc;
        case 0x1cbcc0u: goto label_1cbcc0;
        case 0x1cbcc4u: goto label_1cbcc4;
        case 0x1cbcc8u: goto label_1cbcc8;
        case 0x1cbcccu: goto label_1cbccc;
        case 0x1cbcd0u: goto label_1cbcd0;
        case 0x1cbcd4u: goto label_1cbcd4;
        case 0x1cbcd8u: goto label_1cbcd8;
        case 0x1cbcdcu: goto label_1cbcdc;
        case 0x1cbce0u: goto label_1cbce0;
        case 0x1cbce4u: goto label_1cbce4;
        case 0x1cbce8u: goto label_1cbce8;
        case 0x1cbcecu: goto label_1cbcec;
        case 0x1cbcf0u: goto label_1cbcf0;
        case 0x1cbcf4u: goto label_1cbcf4;
        case 0x1cbcf8u: goto label_1cbcf8;
        case 0x1cbcfcu: goto label_1cbcfc;
        case 0x1cbd00u: goto label_1cbd00;
        case 0x1cbd04u: goto label_1cbd04;
        case 0x1cbd08u: goto label_1cbd08;
        case 0x1cbd0cu: goto label_1cbd0c;
        case 0x1cbd10u: goto label_1cbd10;
        case 0x1cbd14u: goto label_1cbd14;
        case 0x1cbd18u: goto label_1cbd18;
        case 0x1cbd1cu: goto label_1cbd1c;
        case 0x1cbd20u: goto label_1cbd20;
        case 0x1cbd24u: goto label_1cbd24;
        case 0x1cbd28u: goto label_1cbd28;
        case 0x1cbd2cu: goto label_1cbd2c;
        case 0x1cbd30u: goto label_1cbd30;
        case 0x1cbd34u: goto label_1cbd34;
        case 0x1cbd38u: goto label_1cbd38;
        case 0x1cbd3cu: goto label_1cbd3c;
        case 0x1cbd40u: goto label_1cbd40;
        case 0x1cbd44u: goto label_1cbd44;
        case 0x1cbd48u: goto label_1cbd48;
        case 0x1cbd4cu: goto label_1cbd4c;
        case 0x1cbd50u: goto label_1cbd50;
        case 0x1cbd54u: goto label_1cbd54;
        case 0x1cbd58u: goto label_1cbd58;
        case 0x1cbd5cu: goto label_1cbd5c;
        case 0x1cbd60u: goto label_1cbd60;
        case 0x1cbd64u: goto label_1cbd64;
        case 0x1cbd68u: goto label_1cbd68;
        case 0x1cbd6cu: goto label_1cbd6c;
        case 0x1cbd70u: goto label_1cbd70;
        case 0x1cbd74u: goto label_1cbd74;
        case 0x1cbd78u: goto label_1cbd78;
        case 0x1cbd7cu: goto label_1cbd7c;
        case 0x1cbd80u: goto label_1cbd80;
        case 0x1cbd84u: goto label_1cbd84;
        case 0x1cbd88u: goto label_1cbd88;
        case 0x1cbd8cu: goto label_1cbd8c;
        case 0x1cbd90u: goto label_1cbd90;
        case 0x1cbd94u: goto label_1cbd94;
        case 0x1cbd98u: goto label_1cbd98;
        case 0x1cbd9cu: goto label_1cbd9c;
        case 0x1cbda0u: goto label_1cbda0;
        case 0x1cbda4u: goto label_1cbda4;
        case 0x1cbda8u: goto label_1cbda8;
        case 0x1cbdacu: goto label_1cbdac;
        case 0x1cbdb0u: goto label_1cbdb0;
        case 0x1cbdb4u: goto label_1cbdb4;
        case 0x1cbdb8u: goto label_1cbdb8;
        case 0x1cbdbcu: goto label_1cbdbc;
        case 0x1cbdc0u: goto label_1cbdc0;
        case 0x1cbdc4u: goto label_1cbdc4;
        case 0x1cbdc8u: goto label_1cbdc8;
        case 0x1cbdccu: goto label_1cbdcc;
        case 0x1cbdd0u: goto label_1cbdd0;
        case 0x1cbdd4u: goto label_1cbdd4;
        case 0x1cbdd8u: goto label_1cbdd8;
        case 0x1cbddcu: goto label_1cbddc;
        case 0x1cbde0u: goto label_1cbde0;
        case 0x1cbde4u: goto label_1cbde4;
        case 0x1cbde8u: goto label_1cbde8;
        case 0x1cbdecu: goto label_1cbdec;
        case 0x1cbdf0u: goto label_1cbdf0;
        case 0x1cbdf4u: goto label_1cbdf4;
        case 0x1cbdf8u: goto label_1cbdf8;
        case 0x1cbdfcu: goto label_1cbdfc;
        case 0x1cbe00u: goto label_1cbe00;
        case 0x1cbe04u: goto label_1cbe04;
        case 0x1cbe08u: goto label_1cbe08;
        case 0x1cbe0cu: goto label_1cbe0c;
        case 0x1cbe10u: goto label_1cbe10;
        case 0x1cbe14u: goto label_1cbe14;
        case 0x1cbe18u: goto label_1cbe18;
        case 0x1cbe1cu: goto label_1cbe1c;
        case 0x1cbe20u: goto label_1cbe20;
        case 0x1cbe24u: goto label_1cbe24;
        case 0x1cbe28u: goto label_1cbe28;
        case 0x1cbe2cu: goto label_1cbe2c;
        case 0x1cbe30u: goto label_1cbe30;
        case 0x1cbe34u: goto label_1cbe34;
        case 0x1cbe38u: goto label_1cbe38;
        case 0x1cbe3cu: goto label_1cbe3c;
        case 0x1cbe40u: goto label_1cbe40;
        case 0x1cbe44u: goto label_1cbe44;
        case 0x1cbe48u: goto label_1cbe48;
        case 0x1cbe4cu: goto label_1cbe4c;
        case 0x1cbe50u: goto label_1cbe50;
        case 0x1cbe54u: goto label_1cbe54;
        case 0x1cbe58u: goto label_1cbe58;
        case 0x1cbe5cu: goto label_1cbe5c;
        case 0x1cbe60u: goto label_1cbe60;
        case 0x1cbe64u: goto label_1cbe64;
        case 0x1cbe68u: goto label_1cbe68;
        case 0x1cbe6cu: goto label_1cbe6c;
        case 0x1cbe70u: goto label_1cbe70;
        case 0x1cbe74u: goto label_1cbe74;
        case 0x1cbe78u: goto label_1cbe78;
        case 0x1cbe7cu: goto label_1cbe7c;
        default: return;
    }

label_1cb6b0:
    // 0x1cb6b0: 0x1261825  or          $v1, $t1, $a2
    ctx->pc = 0x1cb6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_1cb6b4:
    // 0x1cb6b4: 0xae030234  sw          $v1, 0x234($s0)
    ctx->pc = 0x1cb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 3));
label_1cb6b8:
    // 0x1cb6b8: 0x9203021f  lbu         $v1, 0x21F($s0)
    ctx->pc = 0x1cb6b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 543)));
label_1cb6bc:
    // 0x1cb6bc: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_1cb6c0:
    if (ctx->pc == 0x1CB6C0u) {
        ctx->pc = 0x1CB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6BCu;
        // 0x1cb6c0: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB6C4u;
        goto label_1cb6c4;
    }
    ctx->pc = 0x1CB6BCu;
    {
        const bool branch_taken_0x1cb6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB6BCu;
        // 0x1cb6c0: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb6bc) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB6C4u;
label_1cb6c4:
    // 0x1cb6c4: 0x842351ee  lh          $v1, 0x51EE($at)
    ctx->pc = 0x1cb6c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 20974)));
label_1cb6c8:
    // 0x1cb6c8: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1cb6c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1cb6cc:
    // 0x1cb6cc: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_1cb6d0:
    if (ctx->pc == 0x1CB6D0u) {
        ctx->pc = 0x1CB6D4u;
        goto label_1cb6d4;
    }
    ctx->pc = 0x1CB6CCu;
    {
        const bool branch_taken_0x1cb6cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb6cc) {
            ctx->pc = 0x1CB744u;
            goto label_1cb744;
        }
    }
    ctx->pc = 0x1CB6D4u;
label_1cb6d4:
    // 0x1cb6d4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1cb6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb6d8:
    // 0x1cb6d8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1cb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1cb6dc:
    // 0x1cb6dc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1cb6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb6e0:
    // 0x1cb6e0: 0x3446851f  ori         $a2, $v0, 0x851F
    ctx->pc = 0x1cb6e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1cb6e4:
    // 0x1cb6e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb6e8:
    // 0x1cb6e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb6e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb6ec:
    // 0x1cb6ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb6ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb6f0:
    // 0x1cb6f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb6f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1cb6f4:
    // 0x1cb6f4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1cb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1cb6f8:
    // 0x1cb6f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1cb6f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cb6fc:
    // 0x1cb6fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb6fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cb700:
    // 0x1cb700: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1cb700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cb704:
    // 0x1cb704: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x1cb704u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1cb708:
    // 0x1cb708: 0x0  nop
    ctx->pc = 0x1cb708u;
    // NOP
label_1cb70c:
    // 0x1cb70c: 0x1810  mfhi        $v1
    ctx->pc = 0x1cb70cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cb710:
    // 0x1cb710: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cb710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cb714:
    // 0x1cb714: 0x0  nop
    ctx->pc = 0x1cb714u;
    // NOP
label_1cb718:
    // 0x1cb718: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x1cb718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cb71c:
    // 0x1cb71c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1cb71cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1cb720:
    // 0x1cb720: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1cb720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cb724:
    // 0x1cb724: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1cb724u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1cb728:
    // 0x1cb728: 0x1010  mfhi        $v0
    ctx->pc = 0x1cb728u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cb72c:
    // 0x1cb72c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1cb72cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1cb730:
    // 0x1cb730: 0xc05d3e4  jal         func_174F90
label_1cb734:
    if (ctx->pc == 0x1CB734u) {
        ctx->pc = 0x1CB734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB730u;
        // 0x1cb734: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB738u;
        goto label_1cb738;
    }
    ctx->pc = 0x1CB730u;
    SET_GPR_U32(ctx, 31, 0x1CB738u);
    ctx->pc = 0x1CB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB730u;
    // 0x1cb734: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB730u, 0x1CB738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB738u;
label_1cb738:
    // 0x1cb738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb73c:
    // 0x1cb73c: 0xc072e1c  jal         func_1CB870
label_1cb740:
    if (ctx->pc == 0x1CB740u) {
        ctx->pc = 0x1CB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB73Cu;
        // 0x1cb740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB744u;
        goto label_1cb744;
    }
    ctx->pc = 0x1CB73Cu;
    SET_GPR_U32(ctx, 31, 0x1CB744u);
    ctx->pc = 0x1CB740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB73Cu;
    // 0x1cb740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB870u;
    goto label_1cb870;
    ctx->pc = 0x1CB744u;
label_1cb744:
    // 0x1cb744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb748:
    // 0x1cb748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb74c:
    // 0x1cb74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb750:
    // 0x1cb750: 0x3e00008  jr          $ra
label_1cb754:
    if (ctx->pc == 0x1CB754u) {
        ctx->pc = 0x1CB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB750u;
        // 0x1cb754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB758u;
        goto label_1cb758;
    }
    ctx->pc = 0x1CB750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB750u;
        // 0x1cb754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB758u;
label_1cb758:
    // 0x1cb758: 0x0  nop
    ctx->pc = 0x1cb758u;
    // NOP
label_1cb75c:
    // 0x1cb75c: 0x0  nop
    ctx->pc = 0x1cb75cu;
    // NOP
label_1cb760:
    // 0x1cb760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cb760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1cb764:
    // 0x1cb764: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cb764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1cb768:
    // 0x1cb768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cb768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1cb76c:
    // 0x1cb76c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cb76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cb770:
    // 0x1cb770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cb774:
    // 0x1cb774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cb778:
    // 0x1cb778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cb77c:
    // 0x1cb77c: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1cb77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1cb780:
    // 0x1cb780: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1cb784:
    if (ctx->pc == 0x1CB784u) {
        ctx->pc = 0x1CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB780u;
        // 0x1cb784: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB788u;
        goto label_1cb788;
    }
    ctx->pc = 0x1CB780u;
    {
        const bool branch_taken_0x1cb780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB780u;
        // 0x1cb784: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb780) {
            ctx->pc = 0x1CB78Cu;
            goto label_1cb78c;
        }
    }
    ctx->pc = 0x1CB788u;
label_1cb788:
    // 0x1cb788: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1cb788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb78c:
    // 0x1cb78c: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x1cb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1cb790:
    // 0x1cb790: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1cb790u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1cb794:
    // 0x1cb794: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x1cb794u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cb798:
    // 0x1cb798: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x1cb798u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cb79c:
    // 0x1cb79c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cb79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cb7a0:
    // 0x1cb7a0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x1cb7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_1cb7a4:
    // 0x1cb7a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cb7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cb7a8:
    // 0x1cb7a8: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x1cb7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_1cb7ac:
    // 0x1cb7ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb7b0:
    // 0x1cb7b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cb7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb7b4:
    // 0x1cb7b4: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1cb7b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb7b8:
    // 0x1cb7b8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1cb7bc:
    if (ctx->pc == 0x1CB7BCu) {
        ctx->pc = 0x1CB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7B8u;
        // 0x1cb7bc: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7C0u;
        goto label_1cb7c0;
    }
    ctx->pc = 0x1CB7B8u;
    {
        const bool branch_taken_0x1cb7b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7B8u;
        // 0x1cb7bc: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7b8) {
            ctx->pc = 0x1CB7FCu;
            goto label_1cb7fc;
        }
    }
    ctx->pc = 0x1CB7C0u;
label_1cb7c0:
    // 0x1cb7c0: 0xc04485c  jal         func_112170
label_1cb7c4:
    if (ctx->pc == 0x1CB7C4u) {
        ctx->pc = 0x1CB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7C0u;
        // 0x1cb7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7C8u;
        goto label_1cb7c8;
    }
    ctx->pc = 0x1CB7C0u;
    SET_GPR_U32(ctx, 31, 0x1CB7C8u);
    ctx->pc = 0x1CB7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7C0u;
    // 0x1cb7c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x1CB7C0u, 0x1CB7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7C8u;
label_1cb7c8:
    // 0x1cb7c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1cb7cc:
    if (ctx->pc == 0x1CB7CCu) {
        ctx->pc = 0x1CB7D0u;
        goto label_1cb7d0;
    }
    ctx->pc = 0x1CB7C8u;
    {
        const bool branch_taken_0x1cb7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7c8) {
            ctx->pc = 0x1CB7ECu;
            goto label_1cb7ec;
        }
    }
    ctx->pc = 0x1CB7D0u;
label_1cb7d0:
    // 0x1cb7d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb7d4:
    // 0x1cb7d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cb7d8:
    // 0x1cb7d8: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb7d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1cb7dc:
    // 0x1cb7dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1cb7e0:
    if (ctx->pc == 0x1CB7E0u) {
        ctx->pc = 0x1CB7E4u;
        goto label_1cb7e4;
    }
    ctx->pc = 0x1CB7DCu;
    {
        const bool branch_taken_0x1cb7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cb7dc) {
            ctx->pc = 0x1CB7ECu;
            goto label_1cb7ec;
        }
    }
    ctx->pc = 0x1CB7E4u;
label_1cb7e4:
    // 0x1cb7e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1cb7e8:
    if (ctx->pc == 0x1CB7E8u) {
        ctx->pc = 0x1CB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7E4u;
        // 0x1cb7e8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7ECu;
        goto label_1cb7ec;
    }
    ctx->pc = 0x1CB7E4u;
    {
        const bool branch_taken_0x1cb7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7E4u;
        // 0x1cb7e8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7e4) {
            ctx->pc = 0x1CB7FCu;
            goto label_1cb7fc;
        }
    }
    ctx->pc = 0x1CB7ECu;
label_1cb7ec:
    // 0x1cb7ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cb7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cb7f0:
    // 0x1cb7f0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1cb7f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1cb7f4:
    // 0x1cb7f4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1cb7f8:
    if (ctx->pc == 0x1CB7F8u) {
        ctx->pc = 0x1CB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7F4u;
        // 0x1cb7f8: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB7FCu;
        goto label_1cb7fc;
    }
    ctx->pc = 0x1CB7F4u;
    {
        const bool branch_taken_0x1cb7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7F4u;
        // 0x1cb7f8: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7f4) {
            ctx->pc = 0x1CB7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb7c0;
        }
    }
    ctx->pc = 0x1CB7FCu;
label_1cb7fc:
    // 0x1cb7fc: 0x0  nop
    ctx->pc = 0x1cb7fcu;
    // NOP
label_1cb800:
    // 0x1cb800: 0x16130011  bne         $s0, $s3, . + 4 + (0x11 << 2)
label_1cb804:
    if (ctx->pc == 0x1CB804u) {
        ctx->pc = 0x1CB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB800u;
        // 0x1cb804: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB808u;
        goto label_1cb808;
    }
    ctx->pc = 0x1CB800u;
    {
        const bool branch_taken_0x1cb800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x1CB804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB800u;
        // 0x1cb804: 0x13082a  slt         $at, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb800) {
            ctx->pc = 0x1CB848u;
            goto label_1cb848;
        }
    }
    ctx->pc = 0x1CB808u;
label_1cb808:
    // 0x1cb808: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_1cb80c:
    if (ctx->pc == 0x1CB80Cu) {
        ctx->pc = 0x1CB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB808u;
        // 0x1cb80c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB810u;
        goto label_1cb810;
    }
    ctx->pc = 0x1CB808u;
    {
        const bool branch_taken_0x1cb808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB808u;
        // 0x1cb80c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb808) {
            ctx->pc = 0x1CB848u;
            goto label_1cb848;
        }
    }
    ctx->pc = 0x1CB810u;
label_1cb810:
    // 0x1cb810: 0xc04485c  jal         func_112170
label_1cb814:
    if (ctx->pc == 0x1CB814u) {
        ctx->pc = 0x1CB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB810u;
        // 0x1cb814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB818u;
        goto label_1cb818;
    }
    ctx->pc = 0x1CB810u;
    SET_GPR_U32(ctx, 31, 0x1CB818u);
    ctx->pc = 0x1CB814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB810u;
    // 0x1cb814: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x1CB810u, 0x1CB818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB818u;
label_1cb818:
    // 0x1cb818: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1cb81c:
    if (ctx->pc == 0x1CB81Cu) {
        ctx->pc = 0x1CB820u;
        goto label_1cb820;
    }
    ctx->pc = 0x1CB818u;
    {
        const bool branch_taken_0x1cb818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb818) {
            ctx->pc = 0x1CB838u;
            goto label_1cb838;
        }
    }
    ctx->pc = 0x1CB820u;
label_1cb820:
    // 0x1cb820: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1cb820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1cb824:
    // 0x1cb824: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1cb824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1cb828:
    // 0x1cb828: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1cb82c:
    if (ctx->pc == 0x1CB82Cu) {
        ctx->pc = 0x1CB830u;
        goto label_1cb830;
    }
    ctx->pc = 0x1CB828u;
    {
        const bool branch_taken_0x1cb828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb828) {
            ctx->pc = 0x1CB838u;
            goto label_1cb838;
        }
    }
    ctx->pc = 0x1CB830u;
label_1cb830:
    // 0x1cb830: 0x10000005  b           . + 4 + (0x5 << 2)
label_1cb834:
    if (ctx->pc == 0x1CB834u) {
        ctx->pc = 0x1CB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB830u;
        // 0x1cb834: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB838u;
        goto label_1cb838;
    }
    ctx->pc = 0x1CB830u;
    {
        const bool branch_taken_0x1cb830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB830u;
        // 0x1cb834: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb830) {
            ctx->pc = 0x1CB848u;
            goto label_1cb848;
        }
    }
    ctx->pc = 0x1CB838u;
label_1cb838:
    // 0x1cb838: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cb838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cb83c:
    // 0x1cb83c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1cb83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1cb840:
    // 0x1cb840: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1cb844:
    if (ctx->pc == 0x1CB844u) {
        ctx->pc = 0x1CB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB840u;
        // 0x1cb844: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB848u;
        goto label_1cb848;
    }
    ctx->pc = 0x1CB840u;
    {
        const bool branch_taken_0x1cb840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB840u;
        // 0x1cb844: 0x26940048  addiu       $s4, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb840) {
            ctx->pc = 0x1CB810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb810;
        }
    }
    ctx->pc = 0x1CB848u;
label_1cb848:
    // 0x1cb848: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1cb848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb84c:
    // 0x1cb84c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cb84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1cb850:
    // 0x1cb850: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cb850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cb854:
    // 0x1cb854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cb854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cb858:
    // 0x1cb858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cb858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb85c:
    // 0x1cb85c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb85cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb860:
    // 0x1cb860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb864:
    // 0x1cb864: 0x3e00008  jr          $ra
label_1cb868:
    if (ctx->pc == 0x1CB868u) {
        ctx->pc = 0x1CB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB864u;
        // 0x1cb868: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB86Cu;
        goto label_1cb86c;
    }
    ctx->pc = 0x1CB864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB864u;
        // 0x1cb868: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB86Cu;
label_1cb86c:
    // 0x1cb86c: 0x0  nop
    ctx->pc = 0x1cb86cu;
    // NOP
label_1cb870:
    // 0x1cb870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1cb874:
    // 0x1cb874: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x1cb874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_1cb878:
    // 0x1cb878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cb878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1cb87c:
    // 0x1cb87c: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x1cb87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_1cb880:
    // 0x1cb880: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cb880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cb884:
    // 0x1cb884: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb888:
    // 0x1cb888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cb888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cb88c:
    // 0x1cb88c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cb88cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb890:
    // 0x1cb890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cb894:
    // 0x1cb894: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cb894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cb898:
    // 0x1cb898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cb89c:
    // 0x1cb89c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb89cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8a0:
    // 0x1cb8a0: 0x908a021f  lbu         $t2, 0x21F($a0)
    ctx->pc = 0x1cb8a0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 543)));
label_1cb8a4:
    // 0x1cb8a4: 0x90860220  lbu         $a2, 0x220($a0)
    ctx->pc = 0x1cb8a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
label_1cb8a8:
    // 0x1cb8a8: 0x90a30220  lbu         $v1, 0x220($a1)
    ctx->pc = 0x1cb8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
label_1cb8ac:
    // 0x1cb8ac: 0xa1200  sll         $v0, $t2, 8
    ctx->pc = 0x1cb8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_1cb8b0:
    // 0x1cb8b0: 0x90a4021f  lbu         $a0, 0x21F($a1)
    ctx->pc = 0x1cb8b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 543)));
label_1cb8b4:
    // 0x1cb8b4: 0x4a5023  subu        $t2, $v0, $t2
    ctx->pc = 0x1cb8b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1cb8b8:
    // 0x1cb8b8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1cb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1cb8bc:
    // 0x1cb8bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cb8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cb8c0:
    // 0x1cb8c0: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1cb8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cb8c4:
    // 0x1cb8c4: 0xa28c0  sll         $a1, $t2, 3
    ctx->pc = 0x1cb8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1cb8c8:
    // 0x1cb8c8: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x1cb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1cb8cc:
    // 0x1cb8cc: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x1cb8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_1cb8d0:
    // 0x1cb8d0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x1cb8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cb8d4:
    // 0x1cb8d4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1cb8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1cb8d8:
    // 0x1cb8d8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1cb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1cb8dc:
    // 0x1cb8dc: 0x24450000  addiu       $a1, $v0, 0x0
    ctx->pc = 0x1cb8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cb8e0:
    // 0x1cb8e0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1cb8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1cb8e4:
    // 0x1cb8e4: 0xa68821  addu        $s1, $a1, $a2
    ctx->pc = 0x1cb8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1cb8e8:
    // 0x1cb8e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cb8ec:
    // 0x1cb8ec: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1cb8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb8f0:
    // 0x1cb8f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1cb8f4:
    // 0x1cb8f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8f8:
    // 0x1cb8f8: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1cb8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1cb8fc:
    // 0x1cb8fc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1cb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb900:
    // 0x1cb900: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cb900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb904:
    // 0x1cb904: 0x24820000  addiu       $v0, $a0, 0x0
    ctx->pc = 0x1cb904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_1cb908:
    // 0x1cb908: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cb908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cb90c:
    // 0x1cb90c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb910:
    // 0x1cb910: 0x94d0000a  lhu         $s0, 0xA($a2)
    ctx->pc = 0x1cb910u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1cb914:
    // 0x1cb914: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cb914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb918:
    // 0x1cb918: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb91c:
    // 0x1cb91c: 0x9447000a  lhu         $a3, 0xA($v0)
    ctx->pc = 0x1cb91cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1cb920:
    // 0x1cb920: 0xc05d3e4  jal         func_174F90
label_1cb924:
    if (ctx->pc == 0x1CB924u) {
        ctx->pc = 0x1CB924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB920u;
        // 0x1cb924: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB928u;
        goto label_1cb928;
    }
    ctx->pc = 0x1CB920u;
    SET_GPR_U32(ctx, 31, 0x1CB928u);
    ctx->pc = 0x1CB924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB920u;
    // 0x1cb924: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB920u, 0x1CB928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB928u;
label_1cb928:
    // 0x1cb928: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1cb928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cb92c:
    // 0x1cb92c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1cb92cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1cb930:
    // 0x1cb930: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
label_1cb934:
    if (ctx->pc == 0x1CB934u) {
        ctx->pc = 0x1CB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB930u;
        // 0x1cb934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB938u;
        goto label_1cb938;
    }
    ctx->pc = 0x1CB930u;
    {
        const bool branch_taken_0x1cb930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB930u;
        // 0x1cb934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb930) {
            ctx->pc = 0x1CBB08u;
            goto label_1cbb08;
        }
    }
    ctx->pc = 0x1CB938u;
label_1cb938:
    // 0x1cb938: 0xc0564ec  jal         func_1593B0
label_1cb93c:
    if (ctx->pc == 0x1CB93Cu) {
        ctx->pc = 0x1CB940u;
        goto label_1cb940;
    }
    ctx->pc = 0x1CB938u;
    SET_GPR_U32(ctx, 31, 0x1CB940u);
    ctx->pc = 0x1593B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593B0u, 0x1CB938u, 0x1CB940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB940u;
label_1cb940:
    // 0x1cb940: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb944:
    // 0x1cb944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb948:
    // 0x1cb948: 0x1623001d  bne         $s1, $v1, . + 4 + (0x1D << 2)
label_1cb94c:
    if (ctx->pc == 0x1CB94Cu) {
        ctx->pc = 0x1CB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB948u;
        // 0x1cb94c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB950u;
        goto label_1cb950;
    }
    ctx->pc = 0x1CB948u;
    {
        const bool branch_taken_0x1cb948 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CB94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB948u;
        // 0x1cb94c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb948) {
            ctx->pc = 0x1CB9C0u;
            goto label_1cb9c0;
        }
    }
    ctx->pc = 0x1CB950u;
label_1cb950:
    // 0x1cb950: 0xc0564ec  jal         func_1593B0
label_1cb954:
    if (ctx->pc == 0x1CB954u) {
        ctx->pc = 0x1CB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB950u;
        // 0x1cb954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB958u;
        goto label_1cb958;
    }
    ctx->pc = 0x1CB950u;
    SET_GPR_U32(ctx, 31, 0x1CB958u);
    ctx->pc = 0x1CB954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB950u;
    // 0x1cb954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1593B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1593B0u, 0x1CB950u, 0x1CB958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB958u;
label_1cb958:
    // 0x1cb958: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x1cb958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cb95c:
    // 0x1cb95c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_1cb960:
    if (ctx->pc == 0x1CB960u) {
        ctx->pc = 0x1CB964u;
        goto label_1cb964;
    }
    ctx->pc = 0x1CB95Cu;
    {
        const bool branch_taken_0x1cb95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb95c) {
            ctx->pc = 0x1CB9BCu;
            goto label_1cb9bc;
        }
    }
    ctx->pc = 0x1CB964u;
label_1cb964:
    // 0x1cb964: 0xc08f0cc  jal         func_23C330
label_1cb968:
    if (ctx->pc == 0x1CB968u) {
        ctx->pc = 0x1CB96Cu;
        goto label_1cb96c;
    }
    ctx->pc = 0x1CB964u;
    SET_GPR_U32(ctx, 31, 0x1CB96Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CB96Cu;
label_1cb96c:
    // 0x1cb96c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cb96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cb970:
    // 0x1cb970: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1cb970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1cb974:
    // 0x1cb974: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cb974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb978:
    // 0x1cb978: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cb978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cb97c:
    // 0x1cb97c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cb97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cb980:
    // 0x1cb980: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cb980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb984:
    // 0x1cb984: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cb984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cb988:
    // 0x1cb988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb98c:
    // 0x1cb98c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb990:
    // 0x1cb990: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb994:
    // 0x1cb994: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cb994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cb998:
    // 0x1cb998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb99c:
    // 0x1cb99c: 0x0  nop
    ctx->pc = 0x1cb99cu;
    // NOP
label_1cb9a0:
    // 0x1cb9a0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cb9a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cb9a4:
    // 0x1cb9a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cb9a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cb9a8:
    // 0x1cb9a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cb9a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cb9ac:
    // 0x1cb9ac: 0xc05d3e4  jal         func_174F90
label_1cb9b0:
    if (ctx->pc == 0x1CB9B0u) {
        ctx->pc = 0x1CB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9ACu;
        // 0x1cb9b0: 0x24450021  addiu       $a1, $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB9B4u;
        goto label_1cb9b4;
    }
    ctx->pc = 0x1CB9ACu;
    SET_GPR_U32(ctx, 31, 0x1CB9B4u);
    ctx->pc = 0x1CB9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9ACu;
    // 0x1cb9b0: 0x24450021  addiu       $a1, $v0, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB9ACu, 0x1CB9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9B4u;
label_1cb9b4:
    // 0x1cb9b4: 0x10000055  b           . + 4 + (0x55 << 2)
label_1cb9b8:
    if (ctx->pc == 0x1CB9B8u) {
        ctx->pc = 0x1CB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9B4u;
        // 0x1cb9b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB9BCu;
        goto label_1cb9bc;
    }
    ctx->pc = 0x1CB9B4u;
    {
        const bool branch_taken_0x1cb9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9B4u;
        // 0x1cb9b8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9b4) {
            ctx->pc = 0x1CBB0Cu;
            goto label_1cbb0c;
        }
    }
    ctx->pc = 0x1CB9BCu;
label_1cb9bc:
    // 0x1cb9bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb9c0:
    // 0x1cb9c0: 0x1623002a  bne         $s1, $v1, . + 4 + (0x2A << 2)
label_1cb9c4:
    if (ctx->pc == 0x1CB9C4u) {
        ctx->pc = 0x1CB9C8u;
        goto label_1cb9c8;
    }
    ctx->pc = 0x1CB9C0u;
    {
        const bool branch_taken_0x1cb9c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb9c0) {
            ctx->pc = 0x1CBA6Cu;
            goto label_1cba6c;
        }
    }
    ctx->pc = 0x1CB9C8u;
label_1cb9c8:
    // 0x1cb9c8: 0x86640232  lh          $a0, 0x232($s3)
    ctx->pc = 0x1cb9c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 562)));
label_1cb9cc:
    // 0x1cb9cc: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1cb9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1cb9d0:
    // 0x1cb9d0: 0x3467851f  ori         $a3, $v1, 0x851F
    ctx->pc = 0x1cb9d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1cb9d4:
    // 0x1cb9d4: 0x86430232  lh          $v1, 0x232($s2)
    ctx->pc = 0x1cb9d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 562)));
label_1cb9d8:
    // 0x1cb9d8: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x1cb9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cb9dc:
    // 0x1cb9dc: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x1cb9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1cb9e0:
    // 0x1cb9e0: 0x0  nop
    ctx->pc = 0x1cb9e0u;
    // NOP
label_1cb9e4:
    // 0x1cb9e4: 0x2810  mfhi        $a1
    ctx->pc = 0x1cb9e4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1cb9e8:
    // 0x1cb9e8: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1cb9ec:
    // 0x1cb9ec: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x1cb9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cb9f0:
    // 0x1cb9f0: 0x51943  sra         $v1, $a1, 5
    ctx->pc = 0x1cb9f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
label_1cb9f4:
    // 0x1cb9f4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1cb9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cb9f8:
    // 0x1cb9f8: 0x1810  mfhi        $v1
    ctx->pc = 0x1cb9f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cb9fc:
    // 0x1cb9fc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1cb9fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1cba00:
    // 0x1cba00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cba00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cba04:
    // 0x1cba04: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1cba04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cba08:
    // 0x1cba08: 0x2861ffff  slti        $at, $v1, -0x1
    ctx->pc = 0x1cba08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
label_1cba0c:
    // 0x1cba0c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_1cba10:
    if (ctx->pc == 0x1CBA10u) {
        ctx->pc = 0x1CBA14u;
        goto label_1cba14;
    }
    ctx->pc = 0x1CBA0Cu;
    {
        const bool branch_taken_0x1cba0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cba0c) {
            ctx->pc = 0x1CBA6Cu;
            goto label_1cba6c;
        }
    }
    ctx->pc = 0x1CBA14u;
label_1cba14:
    // 0x1cba14: 0xc08f0cc  jal         func_23C330
label_1cba18:
    if (ctx->pc == 0x1CBA18u) {
        ctx->pc = 0x1CBA1Cu;
        goto label_1cba1c;
    }
    ctx->pc = 0x1CBA14u;
    SET_GPR_U32(ctx, 31, 0x1CBA1Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CBA1Cu;
label_1cba1c:
    // 0x1cba1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cba1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cba20:
    // 0x1cba20: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1cba20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1cba24:
    // 0x1cba24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cba24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cba28:
    // 0x1cba28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cba28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cba2c:
    // 0x1cba2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cba2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cba30:
    // 0x1cba30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cba30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cba34:
    // 0x1cba34: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cba34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cba38:
    // 0x1cba38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cba38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cba3c:
    // 0x1cba3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cba3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cba40:
    // 0x1cba40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cba40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cba44:
    // 0x1cba44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cba44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cba48:
    // 0x1cba48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cba48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cba4c:
    // 0x1cba4c: 0x0  nop
    ctx->pc = 0x1cba4cu;
    // NOP
label_1cba50:
    // 0x1cba50: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cba50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cba54:
    // 0x1cba54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cba54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cba58:
    // 0x1cba58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cba58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cba5c:
    // 0x1cba5c: 0xc05d3e4  jal         func_174F90
label_1cba60:
    if (ctx->pc == 0x1CBA60u) {
        ctx->pc = 0x1CBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA5Cu;
        // 0x1cba60: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBA64u;
        goto label_1cba64;
    }
    ctx->pc = 0x1CBA5Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA64u);
    ctx->pc = 0x1CBA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA5Cu;
    // 0x1cba60: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CBA5Cu, 0x1CBA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA64u;
label_1cba64:
    // 0x1cba64: 0x10000028  b           . + 4 + (0x28 << 2)
label_1cba68:
    if (ctx->pc == 0x1CBA68u) {
        ctx->pc = 0x1CBA6Cu;
        goto label_1cba6c;
    }
    ctx->pc = 0x1CBA64u;
    {
        const bool branch_taken_0x1cba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cba64) {
            ctx->pc = 0x1CBB08u;
            goto label_1cbb08;
        }
    }
    ctx->pc = 0x1CBA6Cu;
label_1cba6c:
    // 0x1cba6c: 0x86640232  lh          $a0, 0x232($s3)
    ctx->pc = 0x1cba6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 562)));
label_1cba70:
    // 0x1cba70: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1cba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1cba74:
    // 0x1cba74: 0x3467851f  ori         $a3, $v1, 0x851F
    ctx->pc = 0x1cba74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1cba78:
    // 0x1cba78: 0x86430232  lh          $v1, 0x232($s2)
    ctx->pc = 0x1cba78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 562)));
label_1cba7c:
    // 0x1cba7c: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x1cba7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cba80:
    // 0x1cba80: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x1cba80u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1cba84:
    // 0x1cba84: 0x0  nop
    ctx->pc = 0x1cba84u;
    // NOP
label_1cba88:
    // 0x1cba88: 0x2810  mfhi        $a1
    ctx->pc = 0x1cba88u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_1cba8c:
    // 0x1cba8c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1cba90:
    // 0x1cba90: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x1cba90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1cba94:
    // 0x1cba94: 0x51943  sra         $v1, $a1, 5
    ctx->pc = 0x1cba94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
label_1cba98:
    // 0x1cba98: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1cba98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cba9c:
    // 0x1cba9c: 0x1810  mfhi        $v1
    ctx->pc = 0x1cba9cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cbaa0:
    // 0x1cbaa0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1cbaa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1cbaa4:
    // 0x1cbaa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cbaa8:
    // 0x1cbaa8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1cbaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1cbaac:
    // 0x1cbaac: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1cbaacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cbab0:
    // 0x1cbab0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_1cbab4:
    if (ctx->pc == 0x1CBAB4u) {
        ctx->pc = 0x1CBAB8u;
        goto label_1cbab8;
    }
    ctx->pc = 0x1CBAB0u;
    {
        const bool branch_taken_0x1cbab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbab0) {
            ctx->pc = 0x1CBB08u;
            goto label_1cbb08;
        }
    }
    ctx->pc = 0x1CBAB8u;
label_1cbab8:
    // 0x1cbab8: 0xc08f0cc  jal         func_23C330
label_1cbabc:
    if (ctx->pc == 0x1CBABCu) {
        ctx->pc = 0x1CBAC0u;
        goto label_1cbac0;
    }
    ctx->pc = 0x1CBAB8u;
    SET_GPR_U32(ctx, 31, 0x1CBAC0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CBAC0u;
label_1cbac0:
    // 0x1cbac0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cbac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cbac4:
    // 0x1cbac4: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1cbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1cbac8:
    // 0x1cbac8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cbac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbacc:
    // 0x1cbacc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cbaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbad0:
    // 0x1cbad0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cbad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cbad4:
    // 0x1cbad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cbad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbad8:
    // 0x1cbad8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cbadc:
    // 0x1cbadc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cbadcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbae0:
    // 0x1cbae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cbae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbae4:
    // 0x1cbae4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cbae4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbae8:
    // 0x1cbae8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cbae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cbaec:
    // 0x1cbaec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cbaecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbaf0:
    // 0x1cbaf0: 0x0  nop
    ctx->pc = 0x1cbaf0u;
    // NOP
label_1cbaf4:
    // 0x1cbaf4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cbaf4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cbaf8:
    // 0x1cbaf8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cbaf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cbafc:
    // 0x1cbafc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cbafcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cbb00:
    // 0x1cbb00: 0xc05d3e4  jal         func_174F90
label_1cbb04:
    if (ctx->pc == 0x1CBB04u) {
        ctx->pc = 0x1CBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB00u;
        // 0x1cbb04: 0x24450026  addiu       $a1, $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB08u;
        goto label_1cbb08;
    }
    ctx->pc = 0x1CBB00u;
    SET_GPR_U32(ctx, 31, 0x1CBB08u);
    ctx->pc = 0x1CBB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB00u;
    // 0x1cbb04: 0x24450026  addiu       $a1, $v0, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CBB00u, 0x1CBB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB08u;
label_1cbb08:
    // 0x1cbb08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cbb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cbb0c:
    // 0x1cbb0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cbb0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cbb10:
    // 0x1cbb10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cbb10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbb14:
    // 0x1cbb14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbb18:
    // 0x1cbb18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cbb18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbb1c:
    // 0x1cbb1c: 0x3e00008  jr          $ra
label_1cbb20:
    if (ctx->pc == 0x1CBB20u) {
        ctx->pc = 0x1CBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB1Cu;
        // 0x1cbb20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB24u;
        goto label_1cbb24;
    }
    ctx->pc = 0x1CBB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB1Cu;
        // 0x1cbb20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBB24u;
label_1cbb24:
    // 0x1cbb24: 0x0  nop
    ctx->pc = 0x1cbb24u;
    // NOP
label_1cbb28:
    // 0x1cbb28: 0x0  nop
    ctx->pc = 0x1cbb28u;
    // NOP
label_1cbb2c:
    // 0x1cbb2c: 0x0  nop
    ctx->pc = 0x1cbb2cu;
    // NOP
label_1cbb30:
    // 0x1cbb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cbb34:
    // 0x1cbb34: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x1cbb34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
label_1cbb38:
    // 0x1cbb38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cbb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cbb3c:
    // 0x1cbb3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cbb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cbb40:
    // 0x1cbb40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cbb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cbb44:
    // 0x1cbb44: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cbb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb48:
    // 0x1cbb48: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_1cbb4c:
    if (ctx->pc == 0x1CBB4Cu) {
        ctx->pc = 0x1CBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB48u;
        // 0x1cbb4c: 0x24100039  addiu       $s0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB50u;
        goto label_1cbb50;
    }
    ctx->pc = 0x1CBB48u;
    {
        const bool branch_taken_0x1cbb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB48u;
        // 0x1cbb4c: 0x24100039  addiu       $s0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb48) {
            ctx->pc = 0x1CBC30u;
            goto label_1cbc30;
        }
    }
    ctx->pc = 0x1CBB50u;
label_1cbb50:
    // 0x1cbb50: 0x28a1001c  slti        $at, $a1, 0x1C
    ctx->pc = 0x1cbb50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)28) ? 1 : 0);
label_1cbb54:
    // 0x1cbb54: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_1cbb58:
    if (ctx->pc == 0x1CBB58u) {
        ctx->pc = 0x1CBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB54u;
        // 0x1cbb58: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBB5Cu;
        goto label_1cbb5c;
    }
    ctx->pc = 0x1CBB54u;
    {
        const bool branch_taken_0x1cbb54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB54u;
        // 0x1cbb58: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb54) {
            ctx->pc = 0x1CBC34u;
            goto label_1cbc34;
        }
    }
    ctx->pc = 0x1CBB5Cu;
label_1cbb5c:
    // 0x1cbb5c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1cbb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1cbb60:
    // 0x1cbb60: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_1cbb64:
    if (ctx->pc == 0x1CBB64u) {
        ctx->pc = 0x1CBB68u;
        goto label_1cbb68;
    }
    ctx->pc = 0x1CBB60u;
    {
        const bool branch_taken_0x1cbb60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb60) {
            ctx->pc = 0x1CBBA8u;
            goto label_1cbba8;
        }
    }
    ctx->pc = 0x1CBB68u;
label_1cbb68:
    // 0x1cbb68: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1cbb6c:
    // 0x1cbb6c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_1cbb70:
    if (ctx->pc == 0x1CBB70u) {
        ctx->pc = 0x1CBB74u;
        goto label_1cbb74;
    }
    ctx->pc = 0x1CBB6Cu;
    {
        const bool branch_taken_0x1cbb6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb6c) {
            ctx->pc = 0x1CBB80u;
            goto label_1cbb80;
        }
    }
    ctx->pc = 0x1CBB74u;
label_1cbb74:
    // 0x1cbb74: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x1cbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1cbb78:
    // 0x1cbb78: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_1cbb7c:
    if (ctx->pc == 0x1CBB7Cu) {
        ctx->pc = 0x1CBB80u;
        goto label_1cbb80;
    }
    ctx->pc = 0x1CBB78u;
    {
        const bool branch_taken_0x1cbb78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb78) {
            ctx->pc = 0x1CBBA8u;
            goto label_1cbba8;
        }
    }
    ctx->pc = 0x1CBB80u;
label_1cbb80:
    // 0x1cbb80: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cbb84:
    // 0x1cbb84: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1cbb84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1cbb88:
    // 0x1cbb88: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1cbb8c:
    // 0x1cbb8c: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1cbb90:
    // 0x1cbb90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbb94:
    // 0x1cbb94: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbb98:
    // 0x1cbb98: 0xc08f20e  jal         func_23C838
label_1cbb9c:
    if (ctx->pc == 0x1CBB9Cu) {
        ctx->pc = 0x1CBB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB98u;
        // 0x1cbb9c: 0x24a5c400  addiu       $a1, $a1, -0x3C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBBA0u;
        goto label_1cbba0;
    }
    ctx->pc = 0x1CBB98u;
    SET_GPR_U32(ctx, 31, 0x1CBBA0u);
    ctx->pc = 0x1CBB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB98u;
    // 0x1cbb9c: 0x24a5c400  addiu       $a1, $a1, -0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1CBBA0u;
label_1cbba0:
    // 0x1cbba0: 0x10000021  b           . + 4 + (0x21 << 2)
label_1cbba4:
    if (ctx->pc == 0x1CBBA4u) {
        ctx->pc = 0x1CBBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBA0u;
        // 0x1cbba4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBBA8u;
        goto label_1cbba8;
    }
    ctx->pc = 0x1CBBA0u;
    {
        const bool branch_taken_0x1cbba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBA0u;
        // 0x1cbba4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbba0) {
            ctx->pc = 0x1CBC28u;
            goto label_1cbc28;
        }
    }
    ctx->pc = 0x1CBBA8u;
label_1cbba8:
    // 0x1cbba8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cbba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cbbac:
    // 0x1cbbac: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1cbbacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1cbbb0:
    // 0x1cbbb0: 0x28610027  slti        $at, $v1, 0x27
    ctx->pc = 0x1cbbb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)39) ? 1 : 0);
label_1cbbb4:
    // 0x1cbbb4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1cbbb8:
    if (ctx->pc == 0x1CBBB8u) {
        ctx->pc = 0x1CBBBCu;
        goto label_1cbbbc;
    }
    ctx->pc = 0x1CBBB4u;
    {
        const bool branch_taken_0x1cbbb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbb4) {
            ctx->pc = 0x1CBBF8u;
            goto label_1cbbf8;
        }
    }
    ctx->pc = 0x1CBBBCu;
label_1cbbbc:
    // 0x1cbbbc: 0x28a20017  slti        $v0, $a1, 0x17
    ctx->pc = 0x1cbbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
label_1cbbc0:
    // 0x1cbbc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1cbbc4:
    if (ctx->pc == 0x1CBBC4u) {
        ctx->pc = 0x1CBBC8u;
        goto label_1cbbc8;
    }
    ctx->pc = 0x1CBBC0u;
    {
        const bool branch_taken_0x1cbbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbc0) {
            ctx->pc = 0x1CBBF8u;
            goto label_1cbbf8;
        }
    }
    ctx->pc = 0x1CBBC8u;
label_1cbbc8:
    // 0x1cbbc8: 0x28a1001a  slti        $at, $a1, 0x1A
    ctx->pc = 0x1cbbc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
label_1cbbcc:
    // 0x1cbbcc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1cbbd0:
    if (ctx->pc == 0x1CBBD0u) {
        ctx->pc = 0x1CBBD4u;
        goto label_1cbbd4;
    }
    ctx->pc = 0x1CBBCCu;
    {
        const bool branch_taken_0x1cbbcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbcc) {
            ctx->pc = 0x1CBBF8u;
            goto label_1cbbf8;
        }
    }
    ctx->pc = 0x1CBBD4u;
label_1cbbd4:
    // 0x1cbbd4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cbbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1cbbd8:
    // 0x1cbbd8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cbbdc:
    // 0x1cbbdc: 0x24428f70  addiu       $v0, $v0, -0x7090
    ctx->pc = 0x1cbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938480));
label_1cbbe0:
    // 0x1cbbe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cbbe4:
    // 0x1cbbe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbbe8:
    // 0x1cbbe8: 0xc08f20e  jal         func_23C838
label_1cbbec:
    if (ctx->pc == 0x1CBBECu) {
        ctx->pc = 0x1CBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBE8u;
        // 0x1cbbec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBBF0u;
        goto label_1cbbf0;
    }
    ctx->pc = 0x1CBBE8u;
    SET_GPR_U32(ctx, 31, 0x1CBBF0u);
    ctx->pc = 0x1CBBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBE8u;
    // 0x1cbbec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1CBBF0u;
label_1cbbf0:
    // 0x1cbbf0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1cbbf4:
    if (ctx->pc == 0x1CBBF4u) {
        ctx->pc = 0x1CBBF8u;
        goto label_1cbbf8;
    }
    ctx->pc = 0x1CBBF0u;
    {
        const bool branch_taken_0x1cbbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbf0) {
            ctx->pc = 0x1CBC24u;
            goto label_1cbc24;
        }
    }
    ctx->pc = 0x1CBBF8u;
label_1cbbf8:
    // 0x1cbbf8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cbbfc:
    // 0x1cbbfc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cbc00:
    // 0x1cbc00: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x1cbc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
label_1cbc04:
    // 0x1cbc04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbc08:
    // 0x1cbc08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbc0c:
    // 0x1cbc0c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1cbc10:
    // 0x1cbc10: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cbc14:
    // 0x1cbc14: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1cbc18:
    // 0x1cbc18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbc1c:
    // 0x1cbc1c: 0xc08f20e  jal         func_23C838
label_1cbc20:
    if (ctx->pc == 0x1CBC20u) {
        ctx->pc = 0x1CBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC1Cu;
        // 0x1cbc20: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBC24u;
        goto label_1cbc24;
    }
    ctx->pc = 0x1CBC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CBC24u);
    ctx->pc = 0x1CBC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC1Cu;
    // 0x1cbc20: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1CBC24u;
label_1cbc24:
    // 0x1cbc24: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1cbc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc28:
    // 0x1cbc28: 0x1000007d  b           . + 4 + (0x7D << 2)
label_1cbc2c:
    if (ctx->pc == 0x1CBC2Cu) {
        ctx->pc = 0x1CBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC28u;
        // 0x1cbc2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBC30u;
        goto label_1cbc30;
    }
    ctx->pc = 0x1CBC28u;
    {
        const bool branch_taken_0x1cbc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC28u;
        // 0x1cbc2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc28) {
            ctx->pc = 0x1CBE20u;
            goto label_1cbe20;
        }
    }
    ctx->pc = 0x1CBC30u;
label_1cbc30:
    // 0x1cbc30: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1cbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cbc34:
    // 0x1cbc34: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
label_1cbc38:
    if (ctx->pc == 0x1CBC38u) {
        ctx->pc = 0x1CBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC34u;
        // 0x1cbc38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBC3Cu;
        goto label_1cbc3c;
    }
    ctx->pc = 0x1CBC34u;
    {
        const bool branch_taken_0x1cbc34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC34u;
        // 0x1cbc38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc34) {
            ctx->pc = 0x1CBC70u;
            goto label_1cbc70;
        }
    }
    ctx->pc = 0x1CBC3Cu;
label_1cbc3c:
    // 0x1cbc3c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cbc40:
    // 0x1cbc40: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbc40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cbc44:
    // 0x1cbc44: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x1cbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
label_1cbc48:
    // 0x1cbc48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbc4c:
    // 0x1cbc4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cbc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbc50:
    // 0x1cbc50: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1cbc50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1cbc54:
    // 0x1cbc54: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cbc58:
    // 0x1cbc58: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1cbc5c:
    // 0x1cbc5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbc60:
    // 0x1cbc60: 0xc08f20e  jal         func_23C838
label_1cbc64:
    if (ctx->pc == 0x1CBC64u) {
        ctx->pc = 0x1CBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC60u;
        // 0x1cbc64: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBC68u;
        goto label_1cbc68;
    }
    ctx->pc = 0x1CBC60u;
    SET_GPR_U32(ctx, 31, 0x1CBC68u);
    ctx->pc = 0x1CBC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC60u;
    // 0x1cbc64: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1CBC68u;
label_1cbc68:
    // 0x1cbc68: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1cbc6c:
    if (ctx->pc == 0x1CBC6Cu) {
        ctx->pc = 0x1CBC70u;
        goto label_1cbc70;
    }
    ctx->pc = 0x1CBC68u;
    {
        const bool branch_taken_0x1cbc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbc68) {
            ctx->pc = 0x1CBE1Cu;
            goto label_1cbe1c;
        }
    }
    ctx->pc = 0x1CBC70u;
label_1cbc70:
    // 0x1cbc70: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
label_1cbc74:
    if (ctx->pc == 0x1CBC74u) {
        ctx->pc = 0x1CBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC70u;
        // 0x1cbc74: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBC78u;
        goto label_1cbc78;
    }
    ctx->pc = 0x1CBC70u;
    {
        const bool branch_taken_0x1cbc70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC70u;
        // 0x1cbc74: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc70) {
            ctx->pc = 0x1CBC84u;
            goto label_1cbc84;
        }
    }
    ctx->pc = 0x1CBC78u;
label_1cbc78:
    // 0x1cbc78: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cbc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cbc7c:
    // 0x1cbc7c: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
label_1cbc80:
    if (ctx->pc == 0x1CBC80u) {
        ctx->pc = 0x1CBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC7Cu;
        // 0x1cbc80: 0x28a10021  slti        $at, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBC84u;
        goto label_1cbc84;
    }
    ctx->pc = 0x1CBC7Cu;
    {
        const bool branch_taken_0x1cbc7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC7Cu;
        // 0x1cbc80: 0x28a10021  slti        $at, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc7c) {
            ctx->pc = 0x1CBCD0u;
            goto label_1cbcd0;
        }
    }
    ctx->pc = 0x1CBC84u;
label_1cbc84:
    // 0x1cbc84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cbc84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cbc88:
    // 0x1cbc88: 0x24638ee0  addiu       $v1, $v1, -0x7120
    ctx->pc = 0x1cbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938336));
label_1cbc8c:
    // 0x1cbc8c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1cbc90:
    // 0x1cbc90: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1cbc90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cbc94:
    // 0x1cbc94: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x1cbc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cbc98:
    // 0x1cbc98: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1cbc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cbc9c:
    // 0x1cbc9c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cbca0:
    // 0x1cbca0: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1cbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_1cbca4:
    // 0x1cbca4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cbca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbca8:
    // 0x1cbca8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cbca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbcac:
    // 0x1cbcac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cbcb0:
    // 0x1cbcb0: 0x24422930  addiu       $v0, $v0, 0x2930
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10544));
label_1cbcb4:
    // 0x1cbcb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cbcb8:
    // 0x1cbcb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbcbc:
    // 0x1cbcbc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1cbcbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbcc0:
    // 0x1cbcc0: 0xc08f20e  jal         func_23C838
label_1cbcc4:
    if (ctx->pc == 0x1CBCC4u) {
        ctx->pc = 0x1CBCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCC0u;
        // 0x1cbcc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCC8u;
        goto label_1cbcc8;
    }
    ctx->pc = 0x1CBCC0u;
    SET_GPR_U32(ctx, 31, 0x1CBCC8u);
    ctx->pc = 0x1CBCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBCC0u;
    // 0x1cbcc4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1CBCC8u;
label_1cbcc8:
    // 0x1cbcc8: 0x10000054  b           . + 4 + (0x54 << 2)
label_1cbccc:
    if (ctx->pc == 0x1CBCCCu) {
        ctx->pc = 0x1CBCD0u;
        goto label_1cbcd0;
    }
    ctx->pc = 0x1CBCC8u;
    {
        const bool branch_taken_0x1cbcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbcc8) {
            ctx->pc = 0x1CBE1Cu;
            goto label_1cbe1c;
        }
    }
    ctx->pc = 0x1CBCD0u;
label_1cbcd0:
    // 0x1cbcd0: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_1cbcd4:
    if (ctx->pc == 0x1CBCD4u) {
        ctx->pc = 0x1CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD0u;
        // 0x1cbcd4: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCD8u;
        goto label_1cbcd8;
    }
    ctx->pc = 0x1CBCD0u;
    {
        const bool branch_taken_0x1cbcd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD0u;
        // 0x1cbcd4: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcd0) {
            ctx->pc = 0x1CBD40u;
            goto label_1cbd40;
        }
    }
    ctx->pc = 0x1CBCD8u;
label_1cbcd8:
    // 0x1cbcd8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cbcdc:
    // 0x1cbcdc: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1cbcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_1cbce0:
    // 0x1cbce0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cbce4:
    // 0x1cbce4: 0x24428ee0  addiu       $v0, $v0, -0x7120
    ctx->pc = 0x1cbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938336));
label_1cbce8:
    // 0x1cbce8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cbce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbcec:
    // 0x1cbcec: 0x24e72930  addiu       $a3, $a3, 0x2930
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10544));
label_1cbcf0:
    // 0x1cbcf0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1cbcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbcf4:
    // 0x1cbcf4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1cbcf8:
    // 0x1cbcf8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1cbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cbcfc:
    // 0x1cbcfc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1cbcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1cbd00:
    // 0x1cbd00: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1cbd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1cbd04:
    // 0x1cbd04: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x1cbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1cbd08:
    // 0x1cbd08: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1cbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1cbd0c:
    // 0x1cbd0c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cbd0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbd10:
    // 0x1cbd10: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1cbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1cbd14:
    // 0x1cbd14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1cbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1cbd18:
    // 0x1cbd18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1cbd18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbd1c:
    // 0x1cbd1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cbd20:
    // 0x1cbd20: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1cbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1cbd24:
    // 0x1cbd24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cbd28:
    // 0x1cbd28: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1cbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1cbd2c:
    // 0x1cbd2c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cbd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbd30:
    // 0x1cbd30: 0xc08f20e  jal         func_23C838
label_1cbd34:
    if (ctx->pc == 0x1CBD34u) {
        ctx->pc = 0x1CBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD30u;
        // 0x1cbd34: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD38u;
        goto label_1cbd38;
    }
    ctx->pc = 0x1CBD30u;
    SET_GPR_U32(ctx, 31, 0x1CBD38u);
    ctx->pc = 0x1CBD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD30u;
    // 0x1cbd34: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1CBD38u;
label_1cbd38:
    // 0x1cbd38: 0x10000038  b           . + 4 + (0x38 << 2)
label_1cbd3c:
    if (ctx->pc == 0x1CBD3Cu) {
        ctx->pc = 0x1CBD40u;
        goto label_1cbd40;
    }
    ctx->pc = 0x1CBD38u;
    {
        const bool branch_taken_0x1cbd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd38) {
            ctx->pc = 0x1CBE1Cu;
            goto label_1cbe1c;
        }
    }
    ctx->pc = 0x1CBD40u;
label_1cbd40:
    // 0x1cbd40: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cbd44:
    // 0x1cbd44: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x1cbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
label_1cbd48:
    // 0x1cbd48: 0x664023  subu        $t0, $v1, $a2
    ctx->pc = 0x1cbd48u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cbd4c:
    // 0x1cbd4c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1cbd50:
    // 0x1cbd50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cbd50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbd54:
    // 0x1cbd54: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x1cbd54u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbd58:
    // 0x1cbd58: 0x0  nop
    ctx->pc = 0x1cbd58u;
    // NOP
label_1cbd5c:
    // 0x1cbd5c: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x1cbd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
label_1cbd60:
    // 0x1cbd60: 0x2a070029  slti        $a3, $s0, 0x29
    ctx->pc = 0x1cbd60u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_1cbd64:
    // 0x1cbd64: 0x24c64cd0  addiu       $a2, $a2, 0x4CD0
    ctx->pc = 0x1cbd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19664));
label_1cbd68:
    // 0x1cbd68: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
label_1cbd6c:
    if (ctx->pc == 0x1CBD6Cu) {
        ctx->pc = 0x1CBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD68u;
        // 0x1cbd6c: 0xca1821  addu        $v1, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD70u;
        goto label_1cbd70;
    }
    ctx->pc = 0x1CBD68u;
    {
        const bool branch_taken_0x1cbd68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD68u;
        // 0x1cbd6c: 0xca1821  addu        $v1, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd68) {
            ctx->pc = 0x1CBD9Cu;
            goto label_1cbd9c;
        }
    }
    ctx->pc = 0x1CBD70u;
label_1cbd70:
    // 0x1cbd70: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1cbd70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbd74:
    // 0x1cbd74: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1cbd78:
    if (ctx->pc == 0x1CBD78u) {
        ctx->pc = 0x1CBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD74u;
        // 0x1cbd78: 0x32020003  andi        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD7Cu;
        goto label_1cbd7c;
    }
    ctx->pc = 0x1CBD74u;
    {
        const bool branch_taken_0x1cbd74 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1CBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD74u;
        // 0x1cbd78: 0x32020003  andi        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd74) {
            ctx->pc = 0x1CBD88u;
            goto label_1cbd88;
        }
    }
    ctx->pc = 0x1CBD7Cu;
label_1cbd7c:
    // 0x1cbd7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1cbd80:
    if (ctx->pc == 0x1CBD80u) {
        ctx->pc = 0x1CBD84u;
        goto label_1cbd84;
    }
    ctx->pc = 0x1CBD7Cu;
    {
        const bool branch_taken_0x1cbd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd7c) {
            ctx->pc = 0x1CBD88u;
            goto label_1cbd88;
        }
    }
    ctx->pc = 0x1CBD84u;
label_1cbd84:
    // 0x1cbd84: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1cbd88:
    // 0x1cbd88: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x1cbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
label_1cbd8c:
    // 0x1cbd8c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1cbd90:
    if (ctx->pc == 0x1CBD90u) {
        ctx->pc = 0x1CBD94u;
        goto label_1cbd94;
    }
    ctx->pc = 0x1CBD8Cu;
    {
        const bool branch_taken_0x1cbd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbd8c) {
            ctx->pc = 0x1CBDC0u;
            goto label_1cbdc0;
        }
    }
    ctx->pc = 0x1CBD94u;
label_1cbd94:
    // 0x1cbd94: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cbd98:
    if (ctx->pc == 0x1CBD98u) {
        ctx->pc = 0x1CBD9Cu;
        goto label_1cbd9c;
    }
    ctx->pc = 0x1CBD94u;
    {
        const bool branch_taken_0x1cbd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd94) {
            ctx->pc = 0x1CBDB0u;
            goto label_1cbdb0;
        }
    }
    ctx->pc = 0x1CBD9Cu;
label_1cbd9c:
    // 0x1cbd9c: 0x0  nop
    ctx->pc = 0x1cbd9cu;
    // NOP
label_1cbda0:
    // 0x1cbda0: 0xca1021  addu        $v0, $a2, $t2
    ctx->pc = 0x1cbda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_1cbda4:
    // 0x1cbda4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1cbda4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbda8:
    // 0x1cbda8: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_1cbdac:
    if (ctx->pc == 0x1CBDACu) {
        ctx->pc = 0x1CBDB0u;
        goto label_1cbdb0;
    }
    ctx->pc = 0x1CBDA8u;
    {
        const bool branch_taken_0x1cbda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1cbda8) {
            ctx->pc = 0x1CBDC0u;
            goto label_1cbdc0;
        }
    }
    ctx->pc = 0x1CBDB0u;
label_1cbdb0:
    // 0x1cbdb0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cbdb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1cbdb4:
    // 0x1cbdb4: 0x2942000c  slti        $v0, $t2, 0xC
    ctx->pc = 0x1cbdb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)12) ? 1 : 0);
label_1cbdb8:
    // 0x1cbdb8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1cbdbc:
    if (ctx->pc == 0x1CBDBCu) {
        ctx->pc = 0x1CBDC0u;
        goto label_1cbdc0;
    }
    ctx->pc = 0x1CBDB8u;
    {
        const bool branch_taken_0x1cbdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdb8) {
            ctx->pc = 0x1CBD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbd68;
        }
    }
    ctx->pc = 0x1CBDC0u;
label_1cbdc0:
    // 0x1cbdc0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1cbdc4:
    // 0x1cbdc4: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1cbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_1cbdc8:
    // 0x1cbdc8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1cbdcc:
    // 0x1cbdcc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1cbdd0:
    // 0x1cbdd0: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x1cbdd0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbdd4:
    // 0x1cbdd4: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1cbdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1cbdd8:
    // 0x1cbdd8: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1cbdd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
label_1cbddc:
    // 0x1cbddc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1cbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1cbde0:
    // 0x1cbde0: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1cbde4:
    // 0x1cbde4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1cbde4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1cbde8:
    // 0x1cbde8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1cbdec:
    // 0x1cbdec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cbdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1cbdf0:
    // 0x1cbdf0: 0x24424c8c  addiu       $v0, $v0, 0x4C8C
    ctx->pc = 0x1cbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19596));
label_1cbdf4:
    // 0x1cbdf4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1cbdf8:
    // 0x1cbdf8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cbdfc:
    // 0x1cbdfc: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1cbe00:
    // 0x1cbe00: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1cbe04:
    // 0x1cbe04: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1cbe08:
    // 0x1cbe08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbe0c:
    // 0x1cbe0c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cbe10:
    // 0x1cbe10: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cbe10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbe14:
    // 0x1cbe14: 0xc08f20e  jal         func_23C838
label_1cbe18:
    if (ctx->pc == 0x1CBE18u) {
        ctx->pc = 0x1CBE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE14u;
        // 0x1cbe18: 0x8f8581d0  lw          $a1, -0x7E30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE1Cu;
        goto label_1cbe1c;
    }
    ctx->pc = 0x1CBE14u;
    SET_GPR_U32(ctx, 31, 0x1CBE1Cu);
    ctx->pc = 0x1CBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE14u;
    // 0x1cbe18: 0x8f8581d0  lw          $a1, -0x7E30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1CBE1Cu;
label_1cbe1c:
    // 0x1cbe1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cbe1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe20:
    // 0x1cbe20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cbe20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbe24:
    // 0x1cbe24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cbe24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbe28:
    // 0x1cbe28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cbe28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbe2c:
    // 0x1cbe2c: 0x3e00008  jr          $ra
label_1cbe30:
    if (ctx->pc == 0x1CBE30u) {
        ctx->pc = 0x1CBE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE2Cu;
        // 0x1cbe30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE34u;
        goto label_1cbe34;
    }
    ctx->pc = 0x1CBE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE2Cu;
        // 0x1cbe30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBE34u;
label_1cbe34:
    // 0x1cbe34: 0x0  nop
    ctx->pc = 0x1cbe34u;
    // NOP
label_1cbe38:
    // 0x1cbe38: 0x0  nop
    ctx->pc = 0x1cbe38u;
    // NOP
label_1cbe3c:
    // 0x1cbe3c: 0x0  nop
    ctx->pc = 0x1cbe3cu;
    // NOP
label_1cbe40:
    // 0x1cbe40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cbe44:
    // 0x1cbe44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cbe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cbe48:
    // 0x1cbe48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cbe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cbe4c:
    // 0x1cbe4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cbe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cbe50:
    // 0x1cbe50: 0x2411002c  addiu       $s1, $zero, 0x2C
    ctx->pc = 0x1cbe50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1cbe54:
    // 0x1cbe54: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1cbe58:
    // 0x1cbe58: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cbe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1cbe5c:
    // 0x1cbe5c: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1cbe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1cbe60:
    // 0x1cbe60: 0x24844cd0  addiu       $a0, $a0, 0x4CD0
    ctx->pc = 0x1cbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19664));
label_1cbe64:
    // 0x1cbe64: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1cbe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1cbe68:
    // 0x1cbe68: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1cbe68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbe6c:
    // 0x1cbe6c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_1cbe70:
    if (ctx->pc == 0x1CBE70u) {
        ctx->pc = 0x1CBE74u;
        goto label_1cbe74;
    }
    ctx->pc = 0x1CBE6Cu;
    {
        const bool branch_taken_0x1cbe6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cbe6c) {
            ctx->pc = 0x1CBE88u;
            { ctx->pc = 0x1cbe88; return; }
        }
    }
    ctx->pc = 0x1CBE74u;
label_1cbe74:
    // 0x1cbe74: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1cbe78:
    // 0x1cbe78: 0x24424ce0  addiu       $v0, $v0, 0x4CE0
    ctx->pc = 0x1cbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19680));
label_1cbe7c:
    // 0x1cbe7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1cbe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x1cbe80u;
    return;
}

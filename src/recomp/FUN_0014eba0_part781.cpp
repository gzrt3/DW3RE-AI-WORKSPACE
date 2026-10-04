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


void FUN_0014eba0_part781(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2cb960u: goto label_2cb960;
        case 0x2cb964u: goto label_2cb964;
        case 0x2cb968u: goto label_2cb968;
        case 0x2cb96cu: goto label_2cb96c;
        case 0x2cb970u: goto label_2cb970;
        case 0x2cb974u: goto label_2cb974;
        case 0x2cb978u: goto label_2cb978;
        case 0x2cb97cu: goto label_2cb97c;
        case 0x2cb980u: goto label_2cb980;
        case 0x2cb984u: goto label_2cb984;
        case 0x2cb988u: goto label_2cb988;
        case 0x2cb98cu: goto label_2cb98c;
        case 0x2cb990u: goto label_2cb990;
        case 0x2cb994u: goto label_2cb994;
        case 0x2cb998u: goto label_2cb998;
        case 0x2cb99cu: goto label_2cb99c;
        case 0x2cb9a0u: goto label_2cb9a0;
        case 0x2cb9a4u: goto label_2cb9a4;
        case 0x2cb9a8u: goto label_2cb9a8;
        case 0x2cb9acu: goto label_2cb9ac;
        case 0x2cb9b0u: goto label_2cb9b0;
        case 0x2cb9b4u: goto label_2cb9b4;
        case 0x2cb9b8u: goto label_2cb9b8;
        case 0x2cb9bcu: goto label_2cb9bc;
        case 0x2cb9c0u: goto label_2cb9c0;
        case 0x2cb9c4u: goto label_2cb9c4;
        case 0x2cb9c8u: goto label_2cb9c8;
        case 0x2cb9ccu: goto label_2cb9cc;
        case 0x2cb9d0u: goto label_2cb9d0;
        case 0x2cb9d4u: goto label_2cb9d4;
        case 0x2cb9d8u: goto label_2cb9d8;
        case 0x2cb9dcu: goto label_2cb9dc;
        case 0x2cb9e0u: goto label_2cb9e0;
        case 0x2cb9e4u: goto label_2cb9e4;
        case 0x2cb9e8u: goto label_2cb9e8;
        case 0x2cb9ecu: goto label_2cb9ec;
        case 0x2cb9f0u: goto label_2cb9f0;
        case 0x2cb9f4u: goto label_2cb9f4;
        case 0x2cb9f8u: goto label_2cb9f8;
        case 0x2cb9fcu: goto label_2cb9fc;
        case 0x2cba00u: goto label_2cba00;
        case 0x2cba04u: goto label_2cba04;
        case 0x2cba08u: goto label_2cba08;
        case 0x2cba0cu: goto label_2cba0c;
        case 0x2cba10u: goto label_2cba10;
        case 0x2cba14u: goto label_2cba14;
        case 0x2cba18u: goto label_2cba18;
        case 0x2cba1cu: goto label_2cba1c;
        case 0x2cba20u: goto label_2cba20;
        case 0x2cba24u: goto label_2cba24;
        case 0x2cba28u: goto label_2cba28;
        case 0x2cba2cu: goto label_2cba2c;
        case 0x2cba30u: goto label_2cba30;
        case 0x2cba34u: goto label_2cba34;
        case 0x2cba38u: goto label_2cba38;
        case 0x2cba3cu: goto label_2cba3c;
        case 0x2cba40u: goto label_2cba40;
        case 0x2cba44u: goto label_2cba44;
        case 0x2cba48u: goto label_2cba48;
        case 0x2cba4cu: goto label_2cba4c;
        case 0x2cba50u: goto label_2cba50;
        case 0x2cba54u: goto label_2cba54;
        case 0x2cba58u: goto label_2cba58;
        case 0x2cba5cu: goto label_2cba5c;
        case 0x2cba60u: goto label_2cba60;
        case 0x2cba64u: goto label_2cba64;
        case 0x2cba68u: goto label_2cba68;
        case 0x2cba6cu: goto label_2cba6c;
        case 0x2cba70u: goto label_2cba70;
        case 0x2cba74u: goto label_2cba74;
        case 0x2cba78u: goto label_2cba78;
        case 0x2cba7cu: goto label_2cba7c;
        case 0x2cba80u: goto label_2cba80;
        case 0x2cba84u: goto label_2cba84;
        case 0x2cba88u: goto label_2cba88;
        case 0x2cba8cu: goto label_2cba8c;
        case 0x2cba90u: goto label_2cba90;
        case 0x2cba94u: goto label_2cba94;
        case 0x2cba98u: goto label_2cba98;
        case 0x2cba9cu: goto label_2cba9c;
        case 0x2cbaa0u: goto label_2cbaa0;
        case 0x2cbaa4u: goto label_2cbaa4;
        case 0x2cbaa8u: goto label_2cbaa8;
        case 0x2cbaacu: goto label_2cbaac;
        case 0x2cbab0u: goto label_2cbab0;
        case 0x2cbab4u: goto label_2cbab4;
        case 0x2cbab8u: goto label_2cbab8;
        case 0x2cbabcu: goto label_2cbabc;
        case 0x2cbac0u: goto label_2cbac0;
        case 0x2cbac4u: goto label_2cbac4;
        case 0x2cbac8u: goto label_2cbac8;
        case 0x2cbaccu: goto label_2cbacc;
        case 0x2cbad0u: goto label_2cbad0;
        case 0x2cbad4u: goto label_2cbad4;
        case 0x2cbad8u: goto label_2cbad8;
        case 0x2cbadcu: goto label_2cbadc;
        case 0x2cbae0u: goto label_2cbae0;
        case 0x2cbae4u: goto label_2cbae4;
        case 0x2cbae8u: goto label_2cbae8;
        case 0x2cbaecu: goto label_2cbaec;
        case 0x2cbaf0u: goto label_2cbaf0;
        case 0x2cbaf4u: goto label_2cbaf4;
        case 0x2cbaf8u: goto label_2cbaf8;
        case 0x2cbafcu: goto label_2cbafc;
        case 0x2cbb00u: goto label_2cbb00;
        case 0x2cbb04u: goto label_2cbb04;
        case 0x2cbb08u: goto label_2cbb08;
        case 0x2cbb0cu: goto label_2cbb0c;
        case 0x2cbb10u: goto label_2cbb10;
        case 0x2cbb14u: goto label_2cbb14;
        case 0x2cbb18u: goto label_2cbb18;
        case 0x2cbb1cu: goto label_2cbb1c;
        case 0x2cbb20u: goto label_2cbb20;
        case 0x2cbb24u: goto label_2cbb24;
        case 0x2cbb28u: goto label_2cbb28;
        case 0x2cbb2cu: goto label_2cbb2c;
        case 0x2cbb30u: goto label_2cbb30;
        case 0x2cbb34u: goto label_2cbb34;
        case 0x2cbb38u: goto label_2cbb38;
        case 0x2cbb3cu: goto label_2cbb3c;
        case 0x2cbb40u: goto label_2cbb40;
        case 0x2cbb44u: goto label_2cbb44;
        case 0x2cbb48u: goto label_2cbb48;
        case 0x2cbb4cu: goto label_2cbb4c;
        case 0x2cbb50u: goto label_2cbb50;
        case 0x2cbb54u: goto label_2cbb54;
        case 0x2cbb58u: goto label_2cbb58;
        case 0x2cbb5cu: goto label_2cbb5c;
        case 0x2cbb60u: goto label_2cbb60;
        case 0x2cbb64u: goto label_2cbb64;
        case 0x2cbb68u: goto label_2cbb68;
        case 0x2cbb6cu: goto label_2cbb6c;
        case 0x2cbb70u: goto label_2cbb70;
        case 0x2cbb74u: goto label_2cbb74;
        case 0x2cbb78u: goto label_2cbb78;
        case 0x2cbb7cu: goto label_2cbb7c;
        case 0x2cbb80u: goto label_2cbb80;
        case 0x2cbb84u: goto label_2cbb84;
        case 0x2cbb88u: goto label_2cbb88;
        case 0x2cbb8cu: goto label_2cbb8c;
        case 0x2cbb90u: goto label_2cbb90;
        case 0x2cbb94u: goto label_2cbb94;
        case 0x2cbb98u: goto label_2cbb98;
        case 0x2cbb9cu: goto label_2cbb9c;
        case 0x2cbba0u: goto label_2cbba0;
        case 0x2cbba4u: goto label_2cbba4;
        case 0x2cbba8u: goto label_2cbba8;
        case 0x2cbbacu: goto label_2cbbac;
        case 0x2cbbb0u: goto label_2cbbb0;
        case 0x2cbbb4u: goto label_2cbbb4;
        case 0x2cbbb8u: goto label_2cbbb8;
        case 0x2cbbbcu: goto label_2cbbbc;
        case 0x2cbbc0u: goto label_2cbbc0;
        case 0x2cbbc4u: goto label_2cbbc4;
        case 0x2cbbc8u: goto label_2cbbc8;
        case 0x2cbbccu: goto label_2cbbcc;
        case 0x2cbbd0u: goto label_2cbbd0;
        case 0x2cbbd4u: goto label_2cbbd4;
        case 0x2cbbd8u: goto label_2cbbd8;
        case 0x2cbbdcu: goto label_2cbbdc;
        case 0x2cbbe0u: goto label_2cbbe0;
        case 0x2cbbe4u: goto label_2cbbe4;
        case 0x2cbbe8u: goto label_2cbbe8;
        case 0x2cbbecu: goto label_2cbbec;
        case 0x2cbbf0u: goto label_2cbbf0;
        case 0x2cbbf4u: goto label_2cbbf4;
        case 0x2cbbf8u: goto label_2cbbf8;
        case 0x2cbbfcu: goto label_2cbbfc;
        case 0x2cbc00u: goto label_2cbc00;
        case 0x2cbc04u: goto label_2cbc04;
        case 0x2cbc08u: goto label_2cbc08;
        case 0x2cbc0cu: goto label_2cbc0c;
        case 0x2cbc10u: goto label_2cbc10;
        case 0x2cbc14u: goto label_2cbc14;
        case 0x2cbc18u: goto label_2cbc18;
        case 0x2cbc1cu: goto label_2cbc1c;
        case 0x2cbc20u: goto label_2cbc20;
        case 0x2cbc24u: goto label_2cbc24;
        case 0x2cbc28u: goto label_2cbc28;
        case 0x2cbc2cu: goto label_2cbc2c;
        case 0x2cbc30u: goto label_2cbc30;
        case 0x2cbc34u: goto label_2cbc34;
        case 0x2cbc38u: goto label_2cbc38;
        case 0x2cbc3cu: goto label_2cbc3c;
        case 0x2cbc40u: goto label_2cbc40;
        case 0x2cbc44u: goto label_2cbc44;
        case 0x2cbc48u: goto label_2cbc48;
        case 0x2cbc4cu: goto label_2cbc4c;
        case 0x2cbc50u: goto label_2cbc50;
        case 0x2cbc54u: goto label_2cbc54;
        case 0x2cbc58u: goto label_2cbc58;
        case 0x2cbc5cu: goto label_2cbc5c;
        case 0x2cbc60u: goto label_2cbc60;
        case 0x2cbc64u: goto label_2cbc64;
        case 0x2cbc68u: goto label_2cbc68;
        case 0x2cbc6cu: goto label_2cbc6c;
        case 0x2cbc70u: goto label_2cbc70;
        case 0x2cbc74u: goto label_2cbc74;
        case 0x2cbc78u: goto label_2cbc78;
        case 0x2cbc7cu: goto label_2cbc7c;
        case 0x2cbc80u: goto label_2cbc80;
        case 0x2cbc84u: goto label_2cbc84;
        case 0x2cbc88u: goto label_2cbc88;
        case 0x2cbc8cu: goto label_2cbc8c;
        case 0x2cbc90u: goto label_2cbc90;
        case 0x2cbc94u: goto label_2cbc94;
        case 0x2cbc98u: goto label_2cbc98;
        case 0x2cbc9cu: goto label_2cbc9c;
        case 0x2cbca0u: goto label_2cbca0;
        case 0x2cbca4u: goto label_2cbca4;
        case 0x2cbca8u: goto label_2cbca8;
        case 0x2cbcacu: goto label_2cbcac;
        case 0x2cbcb0u: goto label_2cbcb0;
        case 0x2cbcb4u: goto label_2cbcb4;
        case 0x2cbcb8u: goto label_2cbcb8;
        case 0x2cbcbcu: goto label_2cbcbc;
        case 0x2cbcc0u: goto label_2cbcc0;
        case 0x2cbcc4u: goto label_2cbcc4;
        case 0x2cbcc8u: goto label_2cbcc8;
        case 0x2cbcccu: goto label_2cbccc;
        case 0x2cbcd0u: goto label_2cbcd0;
        case 0x2cbcd4u: goto label_2cbcd4;
        case 0x2cbcd8u: goto label_2cbcd8;
        case 0x2cbcdcu: goto label_2cbcdc;
        case 0x2cbce0u: goto label_2cbce0;
        case 0x2cbce4u: goto label_2cbce4;
        case 0x2cbce8u: goto label_2cbce8;
        case 0x2cbcecu: goto label_2cbcec;
        case 0x2cbcf0u: goto label_2cbcf0;
        case 0x2cbcf4u: goto label_2cbcf4;
        case 0x2cbcf8u: goto label_2cbcf8;
        case 0x2cbcfcu: goto label_2cbcfc;
        case 0x2cbd00u: goto label_2cbd00;
        case 0x2cbd04u: goto label_2cbd04;
        case 0x2cbd08u: goto label_2cbd08;
        case 0x2cbd0cu: goto label_2cbd0c;
        case 0x2cbd10u: goto label_2cbd10;
        case 0x2cbd14u: goto label_2cbd14;
        case 0x2cbd18u: goto label_2cbd18;
        case 0x2cbd1cu: goto label_2cbd1c;
        case 0x2cbd20u: goto label_2cbd20;
        case 0x2cbd24u: goto label_2cbd24;
        case 0x2cbd28u: goto label_2cbd28;
        case 0x2cbd2cu: goto label_2cbd2c;
        case 0x2cbd30u: goto label_2cbd30;
        case 0x2cbd34u: goto label_2cbd34;
        case 0x2cbd38u: goto label_2cbd38;
        case 0x2cbd3cu: goto label_2cbd3c;
        case 0x2cbd40u: goto label_2cbd40;
        case 0x2cbd44u: goto label_2cbd44;
        case 0x2cbd48u: goto label_2cbd48;
        case 0x2cbd4cu: goto label_2cbd4c;
        case 0x2cbd50u: goto label_2cbd50;
        case 0x2cbd54u: goto label_2cbd54;
        case 0x2cbd58u: goto label_2cbd58;
        case 0x2cbd5cu: goto label_2cbd5c;
        case 0x2cbd60u: goto label_2cbd60;
        case 0x2cbd64u: goto label_2cbd64;
        case 0x2cbd68u: goto label_2cbd68;
        case 0x2cbd6cu: goto label_2cbd6c;
        case 0x2cbd70u: goto label_2cbd70;
        case 0x2cbd74u: goto label_2cbd74;
        case 0x2cbd78u: goto label_2cbd78;
        case 0x2cbd7cu: goto label_2cbd7c;
        case 0x2cbd80u: goto label_2cbd80;
        case 0x2cbd84u: goto label_2cbd84;
        case 0x2cbd88u: goto label_2cbd88;
        case 0x2cbd8cu: goto label_2cbd8c;
        case 0x2cbd90u: goto label_2cbd90;
        case 0x2cbd94u: goto label_2cbd94;
        case 0x2cbd98u: goto label_2cbd98;
        case 0x2cbd9cu: goto label_2cbd9c;
        case 0x2cbda0u: goto label_2cbda0;
        case 0x2cbda4u: goto label_2cbda4;
        case 0x2cbda8u: goto label_2cbda8;
        case 0x2cbdacu: goto label_2cbdac;
        case 0x2cbdb0u: goto label_2cbdb0;
        case 0x2cbdb4u: goto label_2cbdb4;
        case 0x2cbdb8u: goto label_2cbdb8;
        case 0x2cbdbcu: goto label_2cbdbc;
        case 0x2cbdc0u: goto label_2cbdc0;
        case 0x2cbdc4u: goto label_2cbdc4;
        case 0x2cbdc8u: goto label_2cbdc8;
        case 0x2cbdccu: goto label_2cbdcc;
        case 0x2cbdd0u: goto label_2cbdd0;
        case 0x2cbdd4u: goto label_2cbdd4;
        case 0x2cbdd8u: goto label_2cbdd8;
        case 0x2cbddcu: goto label_2cbddc;
        case 0x2cbde0u: goto label_2cbde0;
        case 0x2cbde4u: goto label_2cbde4;
        case 0x2cbde8u: goto label_2cbde8;
        case 0x2cbdecu: goto label_2cbdec;
        case 0x2cbdf0u: goto label_2cbdf0;
        case 0x2cbdf4u: goto label_2cbdf4;
        case 0x2cbdf8u: goto label_2cbdf8;
        case 0x2cbdfcu: goto label_2cbdfc;
        case 0x2cbe00u: goto label_2cbe00;
        case 0x2cbe04u: goto label_2cbe04;
        case 0x2cbe08u: goto label_2cbe08;
        case 0x2cbe0cu: goto label_2cbe0c;
        case 0x2cbe10u: goto label_2cbe10;
        case 0x2cbe14u: goto label_2cbe14;
        case 0x2cbe18u: goto label_2cbe18;
        case 0x2cbe1cu: goto label_2cbe1c;
        case 0x2cbe20u: goto label_2cbe20;
        case 0x2cbe24u: goto label_2cbe24;
        case 0x2cbe28u: goto label_2cbe28;
        case 0x2cbe2cu: goto label_2cbe2c;
        case 0x2cbe30u: goto label_2cbe30;
        case 0x2cbe34u: goto label_2cbe34;
        case 0x2cbe38u: goto label_2cbe38;
        case 0x2cbe3cu: goto label_2cbe3c;
        case 0x2cbe40u: goto label_2cbe40;
        case 0x2cbe44u: goto label_2cbe44;
        case 0x2cbe48u: goto label_2cbe48;
        case 0x2cbe4cu: goto label_2cbe4c;
        case 0x2cbe50u: goto label_2cbe50;
        case 0x2cbe54u: goto label_2cbe54;
        case 0x2cbe58u: goto label_2cbe58;
        case 0x2cbe5cu: goto label_2cbe5c;
        case 0x2cbe60u: goto label_2cbe60;
        case 0x2cbe64u: goto label_2cbe64;
        case 0x2cbe68u: goto label_2cbe68;
        case 0x2cbe6cu: goto label_2cbe6c;
        case 0x2cbe70u: goto label_2cbe70;
        case 0x2cbe74u: goto label_2cbe74;
        case 0x2cbe78u: goto label_2cbe78;
        case 0x2cbe7cu: goto label_2cbe7c;
        case 0x2cbe80u: goto label_2cbe80;
        case 0x2cbe84u: goto label_2cbe84;
        case 0x2cbe88u: goto label_2cbe88;
        case 0x2cbe8cu: goto label_2cbe8c;
        case 0x2cbe90u: goto label_2cbe90;
        case 0x2cbe94u: goto label_2cbe94;
        case 0x2cbe98u: goto label_2cbe98;
        case 0x2cbe9cu: goto label_2cbe9c;
        case 0x2cbea0u: goto label_2cbea0;
        case 0x2cbea4u: goto label_2cbea4;
        case 0x2cbea8u: goto label_2cbea8;
        case 0x2cbeacu: goto label_2cbeac;
        case 0x2cbeb0u: goto label_2cbeb0;
        case 0x2cbeb4u: goto label_2cbeb4;
        case 0x2cbeb8u: goto label_2cbeb8;
        case 0x2cbebcu: goto label_2cbebc;
        case 0x2cbec0u: goto label_2cbec0;
        case 0x2cbec4u: goto label_2cbec4;
        case 0x2cbec8u: goto label_2cbec8;
        case 0x2cbeccu: goto label_2cbecc;
        case 0x2cbed0u: goto label_2cbed0;
        case 0x2cbed4u: goto label_2cbed4;
        case 0x2cbed8u: goto label_2cbed8;
        case 0x2cbedcu: goto label_2cbedc;
        case 0x2cbee0u: goto label_2cbee0;
        case 0x2cbee4u: goto label_2cbee4;
        case 0x2cbee8u: goto label_2cbee8;
        case 0x2cbeecu: goto label_2cbeec;
        case 0x2cbef0u: goto label_2cbef0;
        case 0x2cbef4u: goto label_2cbef4;
        case 0x2cbef8u: goto label_2cbef8;
        case 0x2cbefcu: goto label_2cbefc;
        case 0x2cbf00u: goto label_2cbf00;
        case 0x2cbf04u: goto label_2cbf04;
        case 0x2cbf08u: goto label_2cbf08;
        case 0x2cbf0cu: goto label_2cbf0c;
        case 0x2cbf10u: goto label_2cbf10;
        case 0x2cbf14u: goto label_2cbf14;
        case 0x2cbf18u: goto label_2cbf18;
        case 0x2cbf1cu: goto label_2cbf1c;
        case 0x2cbf20u: goto label_2cbf20;
        case 0x2cbf24u: goto label_2cbf24;
        case 0x2cbf28u: goto label_2cbf28;
        case 0x2cbf2cu: goto label_2cbf2c;
        case 0x2cbf30u: goto label_2cbf30;
        case 0x2cbf34u: goto label_2cbf34;
        case 0x2cbf38u: goto label_2cbf38;
        case 0x2cbf3cu: goto label_2cbf3c;
        case 0x2cbf40u: goto label_2cbf40;
        case 0x2cbf44u: goto label_2cbf44;
        case 0x2cbf48u: goto label_2cbf48;
        case 0x2cbf4cu: goto label_2cbf4c;
        case 0x2cbf50u: goto label_2cbf50;
        case 0x2cbf54u: goto label_2cbf54;
        case 0x2cbf58u: goto label_2cbf58;
        case 0x2cbf5cu: goto label_2cbf5c;
        case 0x2cbf60u: goto label_2cbf60;
        case 0x2cbf64u: goto label_2cbf64;
        case 0x2cbf68u: goto label_2cbf68;
        case 0x2cbf6cu: goto label_2cbf6c;
        case 0x2cbf70u: goto label_2cbf70;
        case 0x2cbf74u: goto label_2cbf74;
        case 0x2cbf78u: goto label_2cbf78;
        case 0x2cbf7cu: goto label_2cbf7c;
        case 0x2cbf80u: goto label_2cbf80;
        case 0x2cbf84u: goto label_2cbf84;
        case 0x2cbf88u: goto label_2cbf88;
        case 0x2cbf8cu: goto label_2cbf8c;
        case 0x2cbf90u: goto label_2cbf90;
        case 0x2cbf94u: goto label_2cbf94;
        case 0x2cbf98u: goto label_2cbf98;
        case 0x2cbf9cu: goto label_2cbf9c;
        case 0x2cbfa0u: goto label_2cbfa0;
        case 0x2cbfa4u: goto label_2cbfa4;
        case 0x2cbfa8u: goto label_2cbfa8;
        case 0x2cbfacu: goto label_2cbfac;
        case 0x2cbfb0u: goto label_2cbfb0;
        case 0x2cbfb4u: goto label_2cbfb4;
        case 0x2cbfb8u: goto label_2cbfb8;
        case 0x2cbfbcu: goto label_2cbfbc;
        case 0x2cbfc0u: goto label_2cbfc0;
        case 0x2cbfc4u: goto label_2cbfc4;
        case 0x2cbfc8u: goto label_2cbfc8;
        case 0x2cbfccu: goto label_2cbfcc;
        case 0x2cbfd0u: goto label_2cbfd0;
        case 0x2cbfd4u: goto label_2cbfd4;
        case 0x2cbfd8u: goto label_2cbfd8;
        case 0x2cbfdcu: goto label_2cbfdc;
        case 0x2cbfe0u: goto label_2cbfe0;
        case 0x2cbfe4u: goto label_2cbfe4;
        case 0x2cbfe8u: goto label_2cbfe8;
        case 0x2cbfecu: goto label_2cbfec;
        case 0x2cbff0u: goto label_2cbff0;
        case 0x2cbff4u: goto label_2cbff4;
        case 0x2cbff8u: goto label_2cbff8;
        case 0x2cbffcu: goto label_2cbffc;
        case 0x2cc000u: goto label_2cc000;
        case 0x2cc004u: goto label_2cc004;
        case 0x2cc008u: goto label_2cc008;
        case 0x2cc00cu: goto label_2cc00c;
        case 0x2cc010u: goto label_2cc010;
        case 0x2cc014u: goto label_2cc014;
        case 0x2cc018u: goto label_2cc018;
        case 0x2cc01cu: goto label_2cc01c;
        case 0x2cc020u: goto label_2cc020;
        case 0x2cc024u: goto label_2cc024;
        case 0x2cc028u: goto label_2cc028;
        case 0x2cc02cu: goto label_2cc02c;
        case 0x2cc030u: goto label_2cc030;
        case 0x2cc034u: goto label_2cc034;
        case 0x2cc038u: goto label_2cc038;
        case 0x2cc03cu: goto label_2cc03c;
        case 0x2cc040u: goto label_2cc040;
        case 0x2cc044u: goto label_2cc044;
        case 0x2cc048u: goto label_2cc048;
        case 0x2cc04cu: goto label_2cc04c;
        case 0x2cc050u: goto label_2cc050;
        case 0x2cc054u: goto label_2cc054;
        case 0x2cc058u: goto label_2cc058;
        case 0x2cc05cu: goto label_2cc05c;
        case 0x2cc060u: goto label_2cc060;
        case 0x2cc064u: goto label_2cc064;
        case 0x2cc068u: goto label_2cc068;
        case 0x2cc06cu: goto label_2cc06c;
        case 0x2cc070u: goto label_2cc070;
        case 0x2cc074u: goto label_2cc074;
        case 0x2cc078u: goto label_2cc078;
        case 0x2cc07cu: goto label_2cc07c;
        case 0x2cc080u: goto label_2cc080;
        case 0x2cc084u: goto label_2cc084;
        case 0x2cc088u: goto label_2cc088;
        case 0x2cc08cu: goto label_2cc08c;
        case 0x2cc090u: goto label_2cc090;
        case 0x2cc094u: goto label_2cc094;
        case 0x2cc098u: goto label_2cc098;
        case 0x2cc09cu: goto label_2cc09c;
        case 0x2cc0a0u: goto label_2cc0a0;
        case 0x2cc0a4u: goto label_2cc0a4;
        case 0x2cc0a8u: goto label_2cc0a8;
        case 0x2cc0acu: goto label_2cc0ac;
        case 0x2cc0b0u: goto label_2cc0b0;
        case 0x2cc0b4u: goto label_2cc0b4;
        case 0x2cc0b8u: goto label_2cc0b8;
        case 0x2cc0bcu: goto label_2cc0bc;
        case 0x2cc0c0u: goto label_2cc0c0;
        case 0x2cc0c4u: goto label_2cc0c4;
        case 0x2cc0c8u: goto label_2cc0c8;
        case 0x2cc0ccu: goto label_2cc0cc;
        case 0x2cc0d0u: goto label_2cc0d0;
        case 0x2cc0d4u: goto label_2cc0d4;
        case 0x2cc0d8u: goto label_2cc0d8;
        case 0x2cc0dcu: goto label_2cc0dc;
        case 0x2cc0e0u: goto label_2cc0e0;
        case 0x2cc0e4u: goto label_2cc0e4;
        case 0x2cc0e8u: goto label_2cc0e8;
        case 0x2cc0ecu: goto label_2cc0ec;
        case 0x2cc0f0u: goto label_2cc0f0;
        case 0x2cc0f4u: goto label_2cc0f4;
        case 0x2cc0f8u: goto label_2cc0f8;
        case 0x2cc0fcu: goto label_2cc0fc;
        case 0x2cc100u: goto label_2cc100;
        case 0x2cc104u: goto label_2cc104;
        case 0x2cc108u: goto label_2cc108;
        case 0x2cc10cu: goto label_2cc10c;
        case 0x2cc110u: goto label_2cc110;
        case 0x2cc114u: goto label_2cc114;
        case 0x2cc118u: goto label_2cc118;
        case 0x2cc11cu: goto label_2cc11c;
        case 0x2cc120u: goto label_2cc120;
        case 0x2cc124u: goto label_2cc124;
        case 0x2cc128u: goto label_2cc128;
        case 0x2cc12cu: goto label_2cc12c;
        default: return;
    }

label_2cb960:
    // 0x2cb960: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cb960u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cb964:
    // 0x2cb964: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cb964u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cb968:
    // 0x2cb968: 0x471b202c  .word       0x471B202C                   # INVALID     $t8, $k1, 0x202C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cb968u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x2C at 0x2CB968 raw=0x471B202C");
 /* MITIGATED */
label_2cb96c:
    // 0x2cb96c: 0x1b642534  .word       0x1B642534                   # blez        $k1, . + 4 + (0x2534 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_2cb970:
    if (ctx->pc == 0x2CB970u) {
        ctx->pc = 0x2CB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB96Cu;
        // 0x2cb970: 0x64203747  daddiu      $zero, $at, 0x3747 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14151);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CB974u;
        goto label_2cb974;
    }
    ctx->pc = 0x2CB96Cu;
    {
        const bool branch_taken_0x2cb96c = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB96Cu;
        // 0x2cb970: 0x64203747  daddiu      $zero, $at, 0x3747 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14151);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb96c) {
            ctx->pc = 0x2D4E40u;
            return;
        }
    }
    ctx->pc = 0x2CB974u;
label_2cb974:
    // 0x2cb974: 0x61656665  daddi       $a1, $t3, 0x6665
    ctx->pc = 0x2cb974u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26213; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cb978:
    // 0x2cb978: 0x21646574  addi        $a0, $t3, 0x6574
    ctx->pc = 0x2cb978u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cb97c:
    // 0x2cb97c: 0x0  nop
    ctx->pc = 0x2cb97cu;
    // NOP
label_2cb980:
    // 0x2cb980: 0x75626d41  .word       0x75626D41                   # INVALID     $t3, $v0, 0x6D41 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cb980u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CB980 raw=0x75626D41");
 /* MITIGATED */
label_2cb984:
    // 0x2cb984: 0x70206873  .word       0x70206873                   # INVALID     $at, $zero, 0x6873 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cb984u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CB984 raw=0x70206873");
 /* MITIGATED */
label_2cb988:
    // 0x2cb988: 0x79747261  lq          $s4, 0x7261($t3)
    ctx->pc = 0x2cb988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 11), 29281)));
label_2cb98c:
    // 0x2cb98c: 0x67697320  daddiu      $t1, $k1, 0x7320
    ctx->pc = 0x2cb98cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29472);
label_2cb990:
    // 0x2cb990: 0x64657468  daddiu      $a1, $v1, 0x7468
    ctx->pc = 0x2cb990u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29800);
label_2cb994:
    // 0x2cb994: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2cb994u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cb998:
    // 0x2cb998: 0x0  nop
    ctx->pc = 0x2cb998u;
    // NOP
label_2cb99c:
    // 0x2cb99c: 0x0  nop
    ctx->pc = 0x2cb99cu;
    // NOP
label_2cb9a0:
    // 0x2cb9a0: 0x6e696552  ldr         $t1, 0x6552($s3)
    ctx->pc = 0x2cb9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25938); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cb9a4:
    // 0x2cb9a4: 0x63726f66  daddi       $s2, $k1, 0x6F66
    ctx->pc = 0x2cb9a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28518; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2cb9a8:
    // 0x2cb9a8: 0x6e656d65  ldr         $a1, 0x6D65($s3)
    ctx->pc = 0x2cb9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cb9ac:
    // 0x2cb9ac: 0x68207374  ldl         $zero, 0x7374($at)
    ctx->pc = 0x2cb9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29556); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cb9b0:
    // 0x2cb9b0: 0x20657661  addi        $a1, $v1, 0x7661
    ctx->pc = 0x2cb9b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30305, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cb9b4:
    // 0x2cb9b4: 0x69727261  ldl         $s2, 0x7261($t3)
    ctx->pc = 0x2cb9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2cb9b8:
    // 0x2cb9b8: 0x21646576  addi        $a0, $t3, 0x6576
    ctx->pc = 0x2cb9b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)25974, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cb9bc:
    // 0x2cb9bc: 0x0  nop
    ctx->pc = 0x2cb9bcu;
    // NOP
label_2cb9c0:
    // 0x2cb9c0: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cb9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cb9c4:
    // 0x2cb9c4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cb9c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cb9c8:
    // 0x2cb9c8: 0x6d207327  ldr         $zero, 0x7327($t1)
    ctx->pc = 0x2cb9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29479); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cb9cc:
    // 0x2cb9cc: 0x6c61726f  ldr         $at, 0x726F($v1)
    ctx->pc = 0x2cb9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cb9d0:
    // 0x2cb9d0: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cb9d0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CB9D0 raw=0x73692065");
 /* MITIGATED */
label_2cb9d4:
    // 0x2cb9d4: 0x796b7320  lq          $t3, 0x7320($t3)
    ctx->pc = 0x2cb9d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 11), 29472)));
label_2cb9d8:
    // 0x2cb9d8: 0x6b636f72  ldl         $v1, 0x6F72($k1)
    ctx->pc = 0x2cb9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2cb9dc:
    // 0x2cb9dc: 0x6e697465  ldr         $t1, 0x7465($s3)
    ctx->pc = 0x2cb9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cb9e0:
    // 0x2cb9e0: 0x2167  .word       0x00002167                   # not         $a0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cb9e0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cb9e4:
    // 0x2cb9e4: 0x0  nop
    ctx->pc = 0x2cb9e4u;
    // NOP
label_2cb9e8:
    // 0x2cb9e8: 0x0  nop
    ctx->pc = 0x2cb9e8u;
    // NOP
label_2cb9ec:
    // 0x2cb9ec: 0x0  nop
    ctx->pc = 0x2cb9ecu;
    // NOP
label_2cb9f0:
    // 0x2cb9f0: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cb9f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cb9f4:
    // 0x2cb9f4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cb9f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cb9f8:
    // 0x2cb9f8: 0x66207327  daddiu      $zero, $s1, 0x7327
    ctx->pc = 0x2cb9f8u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29479);
label_2cb9fc:
    // 0x2cb9fc: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2cb9fcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2cba00:
    // 0x2cba00: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2cba00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cba04:
    // 0x2cba04: 0x74206e69  .word       0x74206E69                   # INVALID     $at, $zero, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cba04u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBA04 raw=0x74206E69");
 /* MITIGATED */
label_2cba08:
    // 0x2cba08: 0x62756f72  daddi       $s5, $s3, 0x6F72
    ctx->pc = 0x2cba08u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28530; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2cba0c:
    // 0x2cba0c: 0x21656c  .word       0x0021656C                   # dadd        $t4, $at, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cba0cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2cba10:
    // 0x2cba10: 0x69205148  ldl         $zero, 0x5148($t1)
    ctx->pc = 0x2cba10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 20808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cba14:
    // 0x2cba14: 0x6e692073  ldr         $t1, 0x2073($s3)
    ctx->pc = 0x2cba14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cba18:
    // 0x2cba18: 0x6f727420  ldr         $s2, 0x7420($k1)
    ctx->pc = 0x2cba18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cba1c:
    // 0x2cba1c: 0x656c6275  daddiu      $t4, $t3, 0x6275
    ctx->pc = 0x2cba1cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25205);
label_2cba20:
    // 0x2cba20: 0x654e2021  daddiu      $t6, $t2, 0x2021
    ctx->pc = 0x2cba20u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8225);
label_2cba24:
    // 0x2cba24: 0x61206465  daddi       $zero, $t1, 0x6465
    ctx->pc = 0x2cba24u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25701; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cba28:
    // 0x2cba28: 0x73697373  .word       0x73697373                   # INVALID     $k1, $t1, 0x7373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cba28u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CBA28 raw=0x73697373");
 /* MITIGATED */
label_2cba2c:
    // 0x2cba2c: 0x636e6174  daddi       $t6, $k1, 0x6174
    ctx->pc = 0x2cba2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24948; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2cba30:
    // 0x2cba30: 0x6d692065  ldr         $t1, 0x2065($t3)
    ctx->pc = 0x2cba30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cba34:
    // 0x2cba34: 0x6964656d  ldl         $a0, 0x656D($t3)
    ctx->pc = 0x2cba34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2cba38:
    // 0x2cba38: 0x6c657461  ldr         $a1, 0x7461($v1)
    ctx->pc = 0x2cba38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cba3c:
    // 0x2cba3c: 0x2179  .word       0x00002179                   # INVALID     $zero, $zero, 0x2179 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cba3cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CBA3C raw=0x00002179");
 /* MITIGATED */
label_2cba40:
    // 0x2cba40: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cba40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cba44:
    // 0x2cba44: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cba44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cba48:
    // 0x2cba48: 0x471b202c  .word       0x471B202C                   # INVALID     $t8, $k1, 0x202C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cba48u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x2C at 0x2CBA48 raw=0x471B202C");
 /* MITIGATED */
label_2cba4c:
    // 0x2cba4c: 0x1b642534  .word       0x1B642534                   # blez        $k1, . + 4 + (0x2534 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_2cba50:
    if (ctx->pc == 0x2CBA50u) {
        ctx->pc = 0x2CBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA4Cu;
        // 0x2cba50: 0x64203747  daddiu      $zero, $at, 0x3747 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14151);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBA54u;
        goto label_2cba54;
    }
    ctx->pc = 0x2CBA4Cu;
    {
        const bool branch_taken_0x2cba4c = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBA4Cu;
        // 0x2cba50: 0x64203747  daddiu      $zero, $at, 0x3747 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14151);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cba4c) {
            ctx->pc = 0x2D4F20u;
            return;
        }
    }
    ctx->pc = 0x2CBA54u;
label_2cba54:
    // 0x2cba54: 0x61656665  daddi       $a1, $t3, 0x6665
    ctx->pc = 0x2cba54u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26213; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cba58:
    // 0x2cba58: 0x21646574  addi        $a0, $t3, 0x6574
    ctx->pc = 0x2cba58u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cba5c:
    // 0x2cba5c: 0x0  nop
    ctx->pc = 0x2cba5cu;
    // NOP
label_2cba60:
    // 0x2cba60: 0x65206e41  daddiu      $zero, $t1, 0x6E41
    ctx->pc = 0x2cba60u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)28225);
label_2cba64:
    // 0x2cba64: 0x796d656e  lq          $t5, 0x656E($t3)
    ctx->pc = 0x2cba64u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 11), 25966)));
label_2cba68:
    // 0x2cba68: 0x626d6120  daddi       $t5, $s3, 0x6120
    ctx->pc = 0x2cba68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)24864; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2cba6c:
    // 0x2cba6c: 0x20687375  addi        $t0, $v1, 0x7375
    ctx->pc = 0x2cba6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29557, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2cba70:
    // 0x2cba70: 0x20736168  addi        $s3, $v1, 0x6168
    ctx->pc = 0x2cba70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24936, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cba74:
    // 0x2cba74: 0x65707061  daddiu      $s0, $t3, 0x7061
    ctx->pc = 0x2cba74u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28769);
label_2cba78:
    // 0x2cba78: 0x64657261  daddiu      $a1, $v1, 0x7261
    ctx->pc = 0x2cba78u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29281);
label_2cba7c:
    // 0x2cba7c: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2cba7cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cba80:
    // 0x2cba80: 0x6d656e45  ldr         $a1, 0x6E45($t3)
    ctx->pc = 0x2cba80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28229); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cba84:
    // 0x2cba84: 0x65722079  daddiu      $s2, $t3, 0x2079
    ctx->pc = 0x2cba84u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8313);
label_2cba88:
    // 0x2cba88: 0x6f666e69  ldr         $a2, 0x6E69($k1)
    ctx->pc = 0x2cba88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cba8c:
    // 0x2cba8c: 0x6d656372  ldr         $a1, 0x6372($t3)
    ctx->pc = 0x2cba8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25458); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cba90:
    // 0x2cba90: 0x73746e65  .word       0x73746E65                   # INVALID     $k1, $s4, 0x6E65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cba90u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CBA90 raw=0x73746E65");
 /* MITIGATED */
label_2cba94:
    // 0x2cba94: 0x76616820  .word       0x76616820                   # INVALID     $s3, $at, 0x6820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cba94u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBA94 raw=0x76616820");
 /* MITIGATED */
label_2cba98:
    // 0x2cba98: 0x70612065  .word       0x70612065                   # INVALID     $v1, $at, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cba98u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CBA98 raw=0x70612065");
 /* MITIGATED */
label_2cba9c:
    // 0x2cba9c: 0x72616570  .word       0x72616570                   # INVALID     $s3, $at, 0x6570 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x2cba9cu;
//     throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x2CBA9C raw=0x72616570");
 /* MITIGATED */
label_2cbaa0:
    // 0x2cbaa0: 0x216465  .word       0x00216465                   # or          $t4, $at, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbaa0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) | GPR_U64(ctx, 1));
label_2cbaa4:
    // 0x2cbaa4: 0x0  nop
    ctx->pc = 0x2cbaa4u;
    // NOP
label_2cbaa8:
    // 0x2cbaa8: 0x0  nop
    ctx->pc = 0x2cbaa8u;
    // NOP
label_2cbaac:
    // 0x2cbaac: 0x0  nop
    ctx->pc = 0x2cbaacu;
    // NOP
label_2cbab0:
    // 0x2cbab0: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cbab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbab4:
    // 0x2cbab4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbab4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbab8:
    // 0x2cbab8: 0x66207327  daddiu      $zero, $s1, 0x7327
    ctx->pc = 0x2cbab8u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29479);
label_2cbabc:
    // 0x2cbabc: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2cbabcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2cbac0:
    // 0x2cbac0: 0x6d207327  ldr         $zero, 0x7327($t1)
    ctx->pc = 0x2cbac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29479); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cbac4:
    // 0x2cbac4: 0x6c61726f  ldr         $at, 0x726F($v1)
    ctx->pc = 0x2cbac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cbac8:
    // 0x2cbac8: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbac8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CBAC8 raw=0x73692065");
 /* MITIGATED */
label_2cbacc:
    // 0x2cbacc: 0x63656420  daddi       $a1, $k1, 0x6420
    ctx->pc = 0x2cbaccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25632; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cbad0:
    // 0x2cbad0: 0x73616572  .word       0x73616572                   # INVALID     $k1, $at, 0x6572 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbad0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CBAD0 raw=0x73616572");
 /* MITIGATED */
label_2cbad4:
    // 0x2cbad4: 0x21676e69  addi        $a3, $t3, 0x6E69
    ctx->pc = 0x2cbad4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2cbad8:
    // 0x2cbad8: 0x0  nop
    ctx->pc = 0x2cbad8u;
    // NOP
label_2cbadc:
    // 0x2cbadc: 0x0  nop
    ctx->pc = 0x2cbadcu;
    // NOP
label_2cbae0:
    // 0x2cbae0: 0x79646f42  lq          $a0, 0x6F42($t3)
    ctx->pc = 0x2cbae0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 11), 28482)));
label_2cbae4:
    // 0x2cbae4: 0x72617567  .word       0x72617567                   # INVALID     $s3, $at, 0x7567 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbae4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x2CBAE4 raw=0x72617567");
 /* MITIGATED */
label_2cbae8:
    // 0x2cbae8: 0x61682064  daddi       $t0, $t3, 0x2064
    ctx->pc = 0x2cbae8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2cbaec:
    // 0x2cbaec: 0x65722073  daddiu      $s2, $t3, 0x2073
    ctx->pc = 0x2cbaecu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8307);
label_2cbaf0:
    // 0x2cbaf0: 0x61657274  daddi       $a1, $t3, 0x7274
    ctx->pc = 0x2cbaf0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29300; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cbaf4:
    // 0x2cbaf4: 0x21646574  addi        $a0, $t3, 0x6574
    ctx->pc = 0x2cbaf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cbaf8:
    // 0x2cbaf8: 0x0  nop
    ctx->pc = 0x2cbaf8u;
    // NOP
label_2cbafc:
    // 0x2cbafc: 0x0  nop
    ctx->pc = 0x2cbafcu;
    // NOP
label_2cbb00:
    // 0x2cbb00: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cbb00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbb04:
    // 0x2cbb04: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbb04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbb08:
    // 0x2cbb08: 0x66207327  daddiu      $zero, $s1, 0x7327
    ctx->pc = 0x2cbb08u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29479);
label_2cbb0c:
    // 0x2cbb0c: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2cbb0cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2cbb10:
    // 0x2cbb10: 0x6d207327  ldr         $zero, 0x7327($t1)
    ctx->pc = 0x2cbb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29479); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cbb14:
    // 0x2cbb14: 0x6c61726f  ldr         $at, 0x726F($v1)
    ctx->pc = 0x2cbb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cbb18:
    // 0x2cbb18: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbb18u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CBB18 raw=0x73692065");
 /* MITIGATED */
label_2cbb1c:
    // 0x2cbb1c: 0x636e6920  daddi       $t6, $k1, 0x6920
    ctx->pc = 0x2cbb1cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26912; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2cbb20:
    // 0x2cbb20: 0x73616572  .word       0x73616572                   # INVALID     $k1, $at, 0x6572 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbb20u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CBB20 raw=0x73616572");
 /* MITIGATED */
label_2cbb24:
    // 0x2cbb24: 0x21676e69  addi        $a3, $t3, 0x6E69
    ctx->pc = 0x2cbb24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2cbb28:
    // 0x2cbb28: 0x0  nop
    ctx->pc = 0x2cbb28u;
    // NOP
label_2cbb2c:
    // 0x2cbb2c: 0x0  nop
    ctx->pc = 0x2cbb2cu;
    // NOP
label_2cbb30:
    // 0x2cbb30: 0x6d6d6f43  ldr         $t5, 0x6F43($t3)
    ctx->pc = 0x2cbb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28483); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2cbb34:
    // 0x2cbb34: 0x65646e61  daddiu      $a0, $t3, 0x6E61
    ctx->pc = 0x2cbb34u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
label_2cbb38:
    // 0x2cbb38: 0x471b2072  .word       0x471B2072                   # INVALID     $t8, $k1, 0x2072 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cbb38u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x32 at 0x2CBB38 raw=0x471B2072");
 /* MITIGATED */
label_2cbb3c:
    // 0x2cbb3c: 0x1b732533  .word       0x1B732533                   # blez        $k1, . + 4 + (0x2533 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cbb40:
    if (ctx->pc == 0x2CBB40u) {
        ctx->pc = 0x2CBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB3Cu;
        // 0x2cbb40: 0x64203747  daddiu      $zero, $at, 0x3747 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14151);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBB44u;
        goto label_2cbb44;
    }
    ctx->pc = 0x2CBB3Cu;
    {
        const bool branch_taken_0x2cbb3c = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB3Cu;
        // 0x2cbb40: 0x64203747  daddiu      $zero, $at, 0x3747 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)14151);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb3c) {
            ctx->pc = 0x2D500Cu;
            return;
        }
    }
    ctx->pc = 0x2CBB44u;
label_2cbb44:
    // 0x2cbb44: 0x61656665  daddi       $a1, $t3, 0x6665
    ctx->pc = 0x2cbb44u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26213; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cbb48:
    // 0x2cbb48: 0x21646574  addi        $a0, $t3, 0x6574
    ctx->pc = 0x2cbb48u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cbb4c:
    // 0x2cbb4c: 0x0  nop
    ctx->pc = 0x2cbb4cu;
    // NOP
label_2cbb50:
    // 0x2cbb50: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cbb50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbb54:
    // 0x2cbb54: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbb54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbb58:
    // 0x2cbb58: 0x74207327  .word       0x74207327                   # INVALID     $at, $zero, 0x7327 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbb58u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBB58 raw=0x74207327");
 /* MITIGATED */
label_2cbb5c:
    // 0x2cbb5c: 0x706f6f72  .word       0x706F6F72                   # INVALID     $v1, $t7, 0x6F72 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbb5cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CBB5C raw=0x706F6F72");
 /* MITIGATED */
label_2cbb60:
    // 0x2cbb60: 0x73616820  madd1       $t5, $k1, $at
    ctx->pc = 0x2cbb60u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2cbb64:
    // 0x2cbb64: 0x65656220  daddiu      $a1, $t3, 0x6220
    ctx->pc = 0x2cbb64u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25120);
label_2cbb68:
    // 0x2cbb68: 0x6373206e  daddi       $s3, $k1, 0x206E
    ctx->pc = 0x2cbb68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2cbb6c:
    // 0x2cbb6c: 0x65747461  daddiu      $s4, $t3, 0x7461
    ctx->pc = 0x2cbb6cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29793);
label_2cbb70:
    // 0x2cbb70: 0x20646572  addi        $a0, $v1, 0x6572
    ctx->pc = 0x2cbb70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25970, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cbb74:
    // 0x2cbb74: 0x1b207962  blez        $t9, . + 4 + (0x7962 << 2)
label_2cbb78:
    if (ctx->pc == 0x2CBB78u) {
        ctx->pc = 0x2CBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB74u;
        // 0x2cbb78: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CBB78 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBB7Cu;
        goto label_2cbb7c;
    }
    ctx->pc = 0x2CBB74u;
    {
        const bool branch_taken_0x2cbb74 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CBB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBB74u;
        // 0x2cbb78: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CBB78 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbb74) {
            ctx->pc = 0x2EA100u;
            return;
        }
    }
    ctx->pc = 0x2CBB7Cu;
label_2cbb7c:
    // 0x2cbb7c: 0x2737471b  addiu       $s7, $t9, 0x471B
    ctx->pc = 0x2cbb7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 25), 18203));
label_2cbb80:
    // 0x2cbb80: 0x72742073  .word       0x72742073                   # INVALID     $s3, $s4, 0x2073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbb80u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CBB80 raw=0x72742073");
 /* MITIGATED */
label_2cbb84:
    // 0x2cbb84: 0x21706f6f  addi        $s0, $t3, 0x6F6F
    ctx->pc = 0x2cbb84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28527, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_2cbb88:
    // 0x2cbb88: 0x0  nop
    ctx->pc = 0x2cbb88u;
    // NOP
label_2cbb8c:
    // 0x2cbb8c: 0x0  nop
    ctx->pc = 0x2cbb8cu;
    // NOP
label_2cbb90:
    // 0x2cbb90: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cbb90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbb94:
    // 0x2cbb94: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbb94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbb98:
    // 0x2cbb98: 0x74207327  .word       0x74207327                   # INVALID     $at, $zero, 0x7327 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbb98u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBB98 raw=0x74207327");
 /* MITIGATED */
label_2cbb9c:
    // 0x2cbb9c: 0x706f6f72  .word       0x706F6F72                   # INVALID     $v1, $t7, 0x6F72 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbb9cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CBB9C raw=0x706F6F72");
 /* MITIGATED */
label_2cbba0:
    // 0x2cbba0: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2cbba0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cbba4:
    // 0x2cbba4: 0x72746572  .word       0x72746572                   # INVALID     $s3, $s4, 0x6572 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbba4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CBBA4 raw=0x72746572");
 /* MITIGATED */
label_2cbba8:
    // 0x2cbba8: 0x69746165  ldl         $s4, 0x6165($t3)
    ctx->pc = 0x2cbba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cbbac:
    // 0x2cbbac: 0x21676e  .word       0x0021676E                   # dsub        $t4, $at, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbbacu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_2cbbb0:
    // 0x2cbbb0: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cbbb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbbb4:
    // 0x2cbbb4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbbb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbbb8:
    // 0x2cbbb8: 0x66207327  daddiu      $zero, $s1, 0x7327
    ctx->pc = 0x2cbbb8u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29479);
label_2cbbbc:
    // 0x2cbbbc: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2cbbbcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2cbbc0:
    // 0x2cbbc0: 0x73616820  madd1       $t5, $k1, $at
    ctx->pc = 0x2cbbc0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2cbbc4:
    // 0x2cbbc4: 0x65656220  daddiu      $a1, $t3, 0x6220
    ctx->pc = 0x2cbbc4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25120);
label_2cbbc8:
    // 0x2cbbc8: 0x626f206e  daddi       $t7, $s3, 0x206E
    ctx->pc = 0x2cbbc8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_2cbbcc:
    // 0x2cbbcc: 0x6574696c  daddiu      $s4, $t3, 0x696C
    ctx->pc = 0x2cbbccu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
label_2cbbd0:
    // 0x2cbbd0: 0x65746172  daddiu      $s4, $t3, 0x6172
    ctx->pc = 0x2cbbd0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24946);
label_2cbbd4:
    // 0x2cbbd4: 0x2164  .word       0x00002164                   # and         $a0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cbbd8:
    // 0x2cbbd8: 0x0  nop
    ctx->pc = 0x2cbbd8u;
    // NOP
label_2cbbdc:
    // 0x2cbbdc: 0x0  nop
    ctx->pc = 0x2cbbdcu;
    // NOP
label_2cbbe0:
    // 0x2cbbe0: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cbbe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbbe4:
    // 0x2cbbe4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbbe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbbe8:
    // 0x2cbbe8: 0x74207327  .word       0x74207327                   # INVALID     $at, $zero, 0x7327 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbbe8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBBE8 raw=0x74207327");
 /* MITIGATED */
label_2cbbec:
    // 0x2cbbec: 0x706f6f72  .word       0x706F6F72                   # INVALID     $v1, $t7, 0x6F72 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbbecu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CBBEC raw=0x706F6F72");
 /* MITIGATED */
label_2cbbf0:
    // 0x2cbbf0: 0x73616820  madd1       $t5, $k1, $at
    ctx->pc = 0x2cbbf0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2cbbf4:
    // 0x2cbbf4: 0x63657320  daddi       $a1, $k1, 0x7320
    ctx->pc = 0x2cbbf4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29472; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cbbf8:
    // 0x2cbbf8: 0x64657275  daddiu      $a1, $v1, 0x7275
    ctx->pc = 0x2cbbf8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29301);
label_2cbbfc:
    // 0x2cbbfc: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2cbbfcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2cbc00:
    // 0x2cbc00: 0x74616720  .word       0x74616720                   # INVALID     $v1, $at, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbc00u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBC00 raw=0x74616720");
 /* MITIGATED */
label_2cbc04:
    // 0x2cbc04: 0x2165  .word       0x00002165                   # move        $a0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbc04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cbc08:
    // 0x2cbc08: 0x0  nop
    ctx->pc = 0x2cbc08u;
    // NOP
label_2cbc0c:
    // 0x2cbc0c: 0x0  nop
    ctx->pc = 0x2cbc0cu;
    // NOP
label_2cbc10:
    // 0x2cbc10: 0x2534471b  addiu       $s4, $t1, 0x471B
    ctx->pc = 0x2cbc10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbc14:
    // 0x2cbc14: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbc14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbc18:
    // 0x2cbc18: 0x6f472220  ldr         $a3, 0x2220($k0)
    ctx->pc = 0x2cbc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2cbc1c:
    // 0x2cbc1c: 0x4c20646f  .word       0x4C20646F                   # INVALID     $at, $zero, 0x646F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbc1cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CBC1C raw=0x4C20646F");
 /* MITIGATED */
label_2cbc20:
    // 0x2cbc20: 0x216b6375  addi        $t3, $t3, 0x6375
    ctx->pc = 0x2cbc20u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)25461, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_2cbc24:
    // 0x2cbc24: 0x22  neg         $zero, $zero
    ctx->pc = 0x2cbc24u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2cbc28:
    // 0x2cbc28: 0x0  nop
    ctx->pc = 0x2cbc28u;
    // NOP
label_2cbc2c:
    // 0x2cbc2c: 0x0  nop
    ctx->pc = 0x2cbc2cu;
    // NOP
label_2cbc30:
    // 0x2cbc30: 0x2534471b  addiu       $s4, $t1, 0x471B
    ctx->pc = 0x2cbc30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbc34:
    // 0x2cbc34: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbc34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbc38:
    // 0x2cbc38: 0x6f462220  ldr         $a2, 0x2220($k0)
    ctx->pc = 0x2cbc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cbc3c:
    // 0x2cbc3c: 0x76696772  .word       0x76696772                   # INVALID     $s3, $t1, 0x6772 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbc3cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBC3C raw=0x76696772");
 /* MITIGATED */
label_2cbc40:
    // 0x2cbc40: 0x656d2065  daddiu      $t5, $t3, 0x2065
    ctx->pc = 0x2cbc40u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
label_2cbc44:
    // 0x2cbc44: 0x222e  .word       0x0000222E                   # dsub        $a0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbc44u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_2cbc48:
    // 0x2cbc48: 0x0  nop
    ctx->pc = 0x2cbc48u;
    // NOP
label_2cbc4c:
    // 0x2cbc4c: 0x0  nop
    ctx->pc = 0x2cbc4cu;
    // NOP
label_2cbc50:
    // 0x2cbc50: 0x2534471b  addiu       $s4, $t1, 0x471B
    ctx->pc = 0x2cbc50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbc54:
    // 0x2cbc54: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbc54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbc58:
    // 0x2cbc58: 0x6c502220  ldr         $s0, 0x2220($v0)
    ctx->pc = 0x2cbc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8736); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cbc5c:
    // 0x2cbc5c: 0x65736165  daddiu      $s3, $t3, 0x6165
    ctx->pc = 0x2cbc5cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
label_2cbc60:
    // 0x2cbc60: 0x6562202c  daddiu      $v0, $t3, 0x202C
    ctx->pc = 0x2cbc60u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8236);
label_2cbc64:
    // 0x2cbc64: 0x72616320  .word       0x72616320                   # madd1       $t4, $s3, $at # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbc64u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cbc68:
    // 0x2cbc68: 0x6c756665  ldr         $s5, 0x6665($v1)
    ctx->pc = 0x2cbc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26213); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2cbc6c:
    // 0x2cbc6c: 0x2221  .word       0x00002221                   # addu        $a0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cbc70:
    // 0x2cbc70: 0x2534471b  addiu       $s4, $t1, 0x471B
    ctx->pc = 0x2cbc70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbc74:
    // 0x2cbc74: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbc74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbc78:
    // 0x2cbc78: 0x72412220  .word       0x72412220                   # madd1       $a0, $s2, $at # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbc78u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2cbc7c:
    // 0x2cbc7c: 0x74276e65  .word       0x74276E65                   # INVALID     $at, $a3, 0x6E65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbc7cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBC7C raw=0x74276E65");
 /* MITIGATED */
label_2cbc80:
    // 0x2cbc80: 0x20657720  addi        $a1, $v1, 0x7720
    ctx->pc = 0x2cbc80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30496, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cbc84:
    // 0x2cbc84: 0x206f6f74  addi        $t7, $v1, 0x6F74
    ctx->pc = 0x2cbc84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2cbc88:
    // 0x2cbc88: 0x20726166  addi        $s2, $v1, 0x6166
    ctx->pc = 0x2cbc88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24934, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cbc8c:
    // 0x2cbc8c: 0x61656861  daddi       $a1, $t3, 0x6861
    ctx->pc = 0x2cbc8cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26721; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cbc90:
    // 0x2cbc90: 0x223f64  .word       0x00223F64                   # and         $a3, $at, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbc90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_2cbc94:
    // 0x2cbc94: 0x0  nop
    ctx->pc = 0x2cbc94u;
    // NOP
label_2cbc98:
    // 0x2cbc98: 0x0  nop
    ctx->pc = 0x2cbc98u;
    // NOP
label_2cbc9c:
    // 0x2cbc9c: 0x0  nop
    ctx->pc = 0x2cbc9cu;
    // NOP
label_2cbca0:
    // 0x2cbca0: 0x2534471b  addiu       $s4, $t1, 0x471B
    ctx->pc = 0x2cbca0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cbca4:
    // 0x2cbca4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cbca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cbca8:
    // 0x2cbca8: 0x654c2220  daddiu      $t4, $t2, 0x2220
    ctx->pc = 0x2cbca8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8736);
label_2cbcac:
    // 0x2cbcac: 0x73752074  .word       0x73752074                   # psllh       $a0, $s5, 1 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbcacu;
    SET_GPR_VEC(ctx, 4, _mm_slli_epi16(GPR_VEC(ctx, 21), 1));
label_2cbcb0:
    // 0x2cbcb0: 0x696f6a20  ldl         $t7, 0x6A20($t3)
    ctx->pc = 0x2cbcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_2cbcb4:
    // 0x2cbcb4: 0x756f206e  .word       0x756F206E                   # INVALID     $t3, $t7, 0x206E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbcb4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBCB4 raw=0x756F206E");
 /* MITIGATED */
label_2cbcb8:
    // 0x2cbcb8: 0x6c612072  ldr         $at, 0x2072($v1)
    ctx->pc = 0x2cbcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cbcbc:
    // 0x2cbcbc: 0x7365696c  .word       0x7365696C                   # INVALID     $k1, $a1, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbcbcu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CBCBC raw=0x7365696C");
 /* MITIGATED */
label_2cbcc0:
    // 0x2cbcc0: 0x2221  .word       0x00002221                   # addu        $a0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cbcc4:
    // 0x2cbcc4: 0x0  nop
    ctx->pc = 0x2cbcc4u;
    // NOP
label_2cbcc8:
    // 0x2cbcc8: 0x0  nop
    ctx->pc = 0x2cbcc8u;
    // NOP
label_2cbccc:
    // 0x2cbccc: 0x0  nop
    ctx->pc = 0x2cbcccu;
    // NOP
label_2cbcd0:
    // 0x2cbcd0: 0x4733471b  .word       0x4733471B                   # INVALID     $t9, $s3, 0x471B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cbcd0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x1B at 0x2CBCD0 raw=0x4733471B");
 /* MITIGATED */
label_2cbcd4:
    // 0x2cbcd4: 0x206e6175  addi        $t6, $v1, 0x6175
    ctx->pc = 0x2cbcd4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24949, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cbcd8:
    // 0x2cbcd8: 0x471b7559  .word       0x471B7559                   # INVALID     $t8, $k1, 0x7559 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cbcd8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x19 at 0x2CBCD8 raw=0x471B7559");
 /* MITIGATED */
label_2cbcdc:
    // 0x2cbcdc: 0x1b222037  .word       0x1B222037                   # blez        $t9, . + 4 + (0x2037 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_2cbce0:
    if (ctx->pc == 0x2CBCE0u) {
        ctx->pc = 0x2CBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCDCu;
        // 0x2cbce0: 0x685a3347  ldl         $k0, 0x3347($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 13127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 26, (GPR_U64(ctx, 26) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBCE4u;
        goto label_2cbce4;
    }
    ctx->pc = 0x2CBCDCu;
    {
        const bool branch_taken_0x2cbcdc = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCDCu;
        // 0x2cbce0: 0x685a3347  ldl         $k0, 0x3347($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 13127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 26, (GPR_U64(ctx, 26) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbcdc) {
            ctx->pc = 0x2D3DBCu;
            return;
        }
    }
    ctx->pc = 0x2CBCE4u;
label_2cbce4:
    // 0x2cbce4: 0x20676e61  addi        $a3, $v1, 0x6E61
    ctx->pc = 0x2cbce4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28257, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2cbce8:
    // 0x2cbce8: 0x1b696546  .word       0x1B696546                   # blez        $k1, . + 4 + (0x6546 << 2) # 00090000 <InstrIdType: CPU_NORMAL>
label_2cbcec:
    if (ctx->pc == 0x2CBCECu) {
        ctx->pc = 0x2CBCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCE8u;
        // 0x2cbcec: 0x202c3747  addi        $t4, $at, 0x3747 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)14151, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBCF0u;
        goto label_2cbcf0;
    }
    ctx->pc = 0x2CBCE8u;
    {
        const bool branch_taken_0x2cbce8 = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CBCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBCE8u;
        // 0x2cbcec: 0x202c3747  addi        $t4, $at, 0x3747 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)14151, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbce8) {
            ctx->pc = 0x2E5204u;
            return;
        }
    }
    ctx->pc = 0x2CBCF0u;
label_2cbcf0:
    // 0x2cbcf0: 0x656c2049  daddiu      $t4, $t3, 0x2049
    ctx->pc = 0x2cbcf0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8265);
label_2cbcf4:
    // 0x2cbcf4: 0x20657661  addi        $a1, $v1, 0x7661
    ctx->pc = 0x2cbcf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30305, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cbcf8:
    // 0x2cbcf8: 0x2072756f  addi        $s2, $v1, 0x756F
    ctx->pc = 0x2cbcf8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30063, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cbcfc:
    // 0x2cbcfc: 0x746f7242  .word       0x746F7242                   # INVALID     $v1, $t7, 0x7242 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbcfcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBCFC raw=0x746F7242");
 /* MITIGATED */
label_2cbd00:
    // 0x2cbd00: 0x20726568  addi        $s2, $v1, 0x6568
    ctx->pc = 0x2cbd00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25960, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cbd04:
    // 0x2cbd04: 0x79206e69  lq          $zero, 0x6E69($t1)
    ctx->pc = 0x2cbd04u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 28265)));
label_2cbd08:
    // 0x2cbd08: 0x2072756f  addi        $s2, $v1, 0x756F
    ctx->pc = 0x2cbd08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30063, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cbd0c:
    // 0x2cbd0c: 0x646e6168  daddiu      $t6, $v1, 0x6168
    ctx->pc = 0x2cbd0cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24936);
label_2cbd10:
    // 0x2cbd10: 0x222e73  tltu        $at, $v0, 185
    ctx->pc = 0x2cbd10u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2cbd14:
    // 0x2cbd14: 0x0  nop
    ctx->pc = 0x2cbd14u;
    // NOP
label_2cbd18:
    // 0x2cbd18: 0x0  nop
    ctx->pc = 0x2cbd18u;
    // NOP
label_2cbd1c:
    // 0x2cbd1c: 0x0  nop
    ctx->pc = 0x2cbd1cu;
    // NOP
label_2cbd20:
    // 0x2cbd20: 0x4733471b  .word       0x4733471B                   # INVALID     $t9, $s3, 0x471B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cbd20u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x1B at 0x2CBD20 raw=0x4733471B");
 /* MITIGATED */
label_2cbd24:
    // 0x2cbd24: 0x206e6175  addi        $t6, $v1, 0x6175
    ctx->pc = 0x2cbd24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24949, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cbd28:
    // 0x2cbd28: 0x471b7559  .word       0x471B7559                   # INVALID     $t8, $k1, 0x7559 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cbd28u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x19 at 0x2CBD28 raw=0x471B7559");
 /* MITIGATED */
label_2cbd2c:
    // 0x2cbd2c: 0x22202037  addi        $zero, $s1, 0x2037
    ctx->pc = 0x2cbd2cu;
    // NOP (addi to $zero)
label_2cbd30:
    // 0x2cbd30: 0x746f7242  .word       0x746F7242                   # INVALID     $v1, $t7, 0x7242 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbd30u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBD30 raw=0x746F7242");
 /* MITIGATED */
label_2cbd34:
    // 0x2cbd34: 0x2c726568  sltiu       $s2, $v1, 0x6568
    ctx->pc = 0x2cbd34u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25960) ? 1 : 0);
label_2cbd38:
    // 0x2cbd38: 0x726f6620  .word       0x726F6620                   # madd1       $t4, $s3, $t7 # 00000600 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbd38u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cbd3c:
    // 0x2cbd3c: 0x65766967  daddiu      $s6, $t3, 0x6967
    ctx->pc = 0x2cbd3cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26983);
label_2cbd40:
    // 0x2cbd40: 0x2e656d20  sltiu       $a1, $s3, 0x6D20
    ctx->pc = 0x2cbd40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)27936) ? 1 : 0);
label_2cbd44:
    // 0x2cbd44: 0x22  neg         $zero, $zero
    ctx->pc = 0x2cbd44u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2cbd48:
    // 0x2cbd48: 0x0  nop
    ctx->pc = 0x2cbd48u;
    // NOP
label_2cbd4c:
    // 0x2cbd4c: 0x0  nop
    ctx->pc = 0x2cbd4cu;
    // NOP
label_2cbd50:
    // 0x2cbd50: 0x5a33471b  .word       0x5A33471B                   # blezl       $s1, . + 4 + (0x471B << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cbd54:
    if (ctx->pc == 0x2CBD54u) {
        ctx->pc = 0x2CBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD50u;
        // 0x2cbd54: 0x676e6168  daddiu      $t6, $k1, 0x6168 (Delay Slot)
        SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD58u;
        goto label_2cbd58;
    }
    ctx->pc = 0x2CBD50u;
    {
        const bool branch_taken_0x2cbd50 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2cbd50) {
            ctx->pc = 0x2CBD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBD50u;
            // 0x2cbd54: 0x676e6168  daddiu      $t6, $k1, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9C0u;
            return;
        }
    }
    ctx->pc = 0x2CBD58u;
label_2cbd58:
    // 0x2cbd58: 0x69654620  ldl         $a1, 0x4620($t3)
    ctx->pc = 0x2cbd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17952); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2cbd5c:
    // 0x2cbd5c: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cbd5cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cbd60:
    // 0x2cbd60: 0x6f724222  ldr         $s2, 0x4222($k1)
    ctx->pc = 0x2cbd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 16930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cbd64:
    // 0x2cbd64: 0x72656874  .word       0x72656874                   # psllh       $t5, $a1, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbd64u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 5), 1));
label_2cbd68:
    // 0x2cbd68: 0x2749202c  addiu       $t1, $k0, 0x202C
    ctx->pc = 0x2cbd68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 26), 8236));
label_2cbd6c:
    // 0x2cbd6c: 0x6f73206d  ldr         $s3, 0x206D($k1)
    ctx->pc = 0x2cbd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8301); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2cbd70:
    // 0x2cbd70: 0x2e797272  sltiu       $t9, $s3, 0x7272
    ctx->pc = 0x2cbd70u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29298) ? 1 : 0);
label_2cbd74:
    // 0x2cbd74: 0x22  neg         $zero, $zero
    ctx->pc = 0x2cbd74u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2cbd78:
    // 0x2cbd78: 0x0  nop
    ctx->pc = 0x2cbd78u;
    // NOP
label_2cbd7c:
    // 0x2cbd7c: 0x0  nop
    ctx->pc = 0x2cbd7cu;
    // NOP
label_2cbd80:
    // 0x2cbd80: 0x5833471b  .word       0x5833471B                   # blezl       $at, . + 4 + (0x471B << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cbd84:
    if (ctx->pc == 0x2CBD84u) {
        ctx->pc = 0x2CBD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD80u;
        // 0x2cbd84: 0x6f686169  ldr         $t0, 0x6169($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBD88u;
        goto label_2cbd88;
    }
    ctx->pc = 0x2CBD80u;
    {
        const bool branch_taken_0x2cbd80 = (GPR_S32(ctx, 1) <= 0);
        if (branch_taken_0x2cbd80) {
            ctx->pc = 0x2CBD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBD80u;
            // 0x2cbd84: 0x6f686169  ldr         $t0, 0x6169($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9F0u;
            return;
        }
    }
    ctx->pc = 0x2CBD88u;
label_2cbd88:
    // 0x2cbd88: 0x75442075  .word       0x75442075                   # INVALID     $t2, $a0, 0x2075 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbd88u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBD88 raw=0x75442075");
 /* MITIGATED */
label_2cbd8c:
    // 0x2cbd8c: 0x37471b6e  ori         $a3, $k0, 0x1B6E
    ctx->pc = 0x2cbd8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7022);
label_2cbd90:
    // 0x2cbd90: 0x61432220  daddi       $v1, $t2, 0x2220
    ctx->pc = 0x2cbd90u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8736; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cbd94:
    // 0x2cbd94: 0x6143206f  daddi       $v1, $t2, 0x206F
    ctx->pc = 0x2cbd94u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8303; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cbd98:
    // 0x2cbd98: 0x66202c6f  daddiu      $zero, $s1, 0x2C6F
    ctx->pc = 0x2cbd98u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)11375);
label_2cbd9c:
    // 0x2cbd9c: 0x6967726f  ldl         $a3, 0x726F($t3)
    ctx->pc = 0x2cbd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2cbda0:
    // 0x2cbda0: 0x6d206576  ldr         $zero, 0x6576($t1)
    ctx->pc = 0x2cbda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25974); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cbda4:
    // 0x2cbda4: 0x222e65  .word       0x00222E65                   # or          $a1, $at, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbda4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) | GPR_U64(ctx, 2));
label_2cbda8:
    // 0x2cbda8: 0x0  nop
    ctx->pc = 0x2cbda8u;
    // NOP
label_2cbdac:
    // 0x2cbdac: 0x0  nop
    ctx->pc = 0x2cbdacu;
    // NOP
label_2cbdb0:
    // 0x2cbdb0: 0x5833471b  .word       0x5833471B                   # blezl       $at, . + 4 + (0x471B << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cbdb4:
    if (ctx->pc == 0x2CBDB4u) {
        ctx->pc = 0x2CBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDB0u;
        // 0x2cbdb4: 0x6f686169  ldr         $t0, 0x6169($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBDB8u;
        goto label_2cbdb8;
    }
    ctx->pc = 0x2CBDB0u;
    {
        const bool branch_taken_0x2cbdb0 = (GPR_S32(ctx, 1) <= 0);
        if (branch_taken_0x2cbdb0) {
            ctx->pc = 0x2CBDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBDB0u;
            // 0x2cbdb4: 0x6f686169  ldr         $t0, 0x6169($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDA20u;
            return;
        }
    }
    ctx->pc = 0x2CBDB8u;
label_2cbdb8:
    // 0x2cbdb8: 0x75592075  .word       0x75592075                   # INVALID     $t2, $t9, 0x2075 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbdb8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBDB8 raw=0x75592075");
 /* MITIGATED */
label_2cbdbc:
    // 0x2cbdbc: 0x471b6e61  .word       0x471B6E61                   # INVALID     $t8, $k1, 0x6E61 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cbdbcu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x21 at 0x2CBDBC raw=0x471B6E61");
 /* MITIGATED */
label_2cbdc0:
    // 0x2cbdc0: 0x58222037  .word       0x58222037                   # blezl       $at, . + 4 + (0x2037 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_2cbdc4:
    if (ctx->pc == 0x2CBDC4u) {
        ctx->pc = 0x2CBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDC0u;
        // 0x2cbdc4: 0x6f686169  ldr         $t0, 0x6169($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CBDC8u;
        goto label_2cbdc8;
    }
    ctx->pc = 0x2CBDC0u;
    {
        const bool branch_taken_0x2cbdc0 = (GPR_S32(ctx, 1) <= 0);
        if (branch_taken_0x2cbdc0) {
            ctx->pc = 0x2CBDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBDC0u;
            // 0x2cbdc4: 0x6f686169  ldr         $t0, 0x6169($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3EA0u;
            return;
        }
    }
    ctx->pc = 0x2CBDC8u;
label_2cbdc8:
    // 0x2cbdc8: 0x75442075  .word       0x75442075                   # INVALID     $t2, $a0, 0x2075 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbdc8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBDC8 raw=0x75442075");
 /* MITIGATED */
label_2cbdcc:
    // 0x2cbdcc: 0x49202c6e  .word       0x49202C6E                   # INVALID     $t1, $zero, 0x2C6E # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2cbdccu;
//     throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2CBDCC raw=0x49202C6E");
 /* MITIGATED */
label_2cbdd0:
    // 0x2cbdd0: 0x61656c20  daddi       $a1, $t3, 0x6C20
    ctx->pc = 0x2cbdd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27680; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cbdd4:
    // 0x2cbdd4: 0x74206576  .word       0x74206576                   # INVALID     $at, $zero, 0x6576 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbdd4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBDD4 raw=0x74206576");
 /* MITIGATED */
label_2cbdd8:
    // 0x2cbdd8: 0x72206568  psubuh      $t4, $s1, $zero
    ctx->pc = 0x2cbdd8u;
    SET_GPR_VEC(ctx, 12, _mm_sub_epi16(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_2cbddc:
    // 0x2cbddc: 0x20747365  addi        $s4, $v1, 0x7365
    ctx->pc = 0x2cbddcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2cbde0:
    // 0x2cbde0: 0x79206f74  lq          $zero, 0x6F74($t1)
    ctx->pc = 0x2cbde0u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 28532)));
label_2cbde4:
    // 0x2cbde4: 0x222e756f  addi        $t6, $s1, 0x756F
    ctx->pc = 0x2cbde4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)30063, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cbde8:
    // 0x2cbde8: 0x0  nop
    ctx->pc = 0x2cbde8u;
    // NOP
label_2cbdec:
    // 0x2cbdec: 0x0  nop
    ctx->pc = 0x2cbdecu;
    // NOP
label_2cbdf0:
    // 0x2cbdf0: 0x61682049  daddi       $t0, $t3, 0x2049
    ctx->pc = 0x2cbdf0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2cbdf4:
    // 0x2cbdf4: 0x6e206576  ldr         $zero, 0x6576($s1)
    ctx->pc = 0x2cbdf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25974); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cbdf8:
    // 0x2cbdf8: 0x6572206f  daddiu      $s2, $t3, 0x206F
    ctx->pc = 0x2cbdf8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8303);
label_2cbdfc:
    // 0x2cbdfc: 0x74657267  .word       0x74657267                   # INVALID     $v1, $a1, 0x7267 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbdfcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBDFC raw=0x74657267");
 /* MITIGATED */
label_2cbe00:
    // 0x2cbe00: 0x6f742073  ldr         $s4, 0x2073($k1)
    ctx->pc = 0x2cbe00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2cbe04:
    // 0x2cbe04: 0x65696420  daddiu      $t1, $t3, 0x6420
    ctx->pc = 0x2cbe04u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25632);
label_2cbe08:
    // 0x2cbe08: 0x6f707520  ldr         $s0, 0x7520($k1)
    ctx->pc = 0x2cbe08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29984); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cbe0c:
    // 0x2cbe0c: 0x6874206e  ldl         $s4, 0x206E($v1)
    ctx->pc = 0x2cbe0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cbe10:
    // 0x2cbe10: 0x61622065  daddi       $v0, $t3, 0x2065
    ctx->pc = 0x2cbe10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2cbe14:
    // 0x2cbe14: 0x656c7474  daddiu      $t4, $t3, 0x7474
    ctx->pc = 0x2cbe14u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29812);
label_2cbe18:
    // 0x2cbe18: 0x6c656966  ldr         $a1, 0x6966($v1)
    ctx->pc = 0x2cbe18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cbe1c:
    // 0x2cbe1c: 0x2e64  .word       0x00002E64                   # and         $a1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbe1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cbe20:
    // 0x2cbe20: 0x6c616853  ldr         $at, 0x6853($v1)
    ctx->pc = 0x2cbe20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26707); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cbe24:
    // 0x2cbe24: 0x756f206c  .word       0x756F206C                   # INVALID     $t3, $t7, 0x206C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbe24u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBE24 raw=0x756F206C");
 /* MITIGATED */
label_2cbe28:
    // 0x2cbe28: 0x616f2072  daddi       $t7, $t3, 0x2072
    ctx->pc = 0x2cbe28u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_2cbe2c:
    // 0x2cbe2c: 0x61206874  daddi       $zero, $t1, 0x6874
    ctx->pc = 0x2cbe2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)26740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cbe30:
    // 0x2cbe30: 0x68742074  ldl         $s4, 0x2074($v1)
    ctx->pc = 0x2cbe30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cbe34:
    // 0x2cbe34: 0x65502065  daddiu      $s0, $t2, 0x2065
    ctx->pc = 0x2cbe34u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2cbe38:
    // 0x2cbe38: 0x20686361  addi        $t0, $v1, 0x6361
    ctx->pc = 0x2cbe38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25441, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2cbe3c:
    // 0x2cbe3c: 0x64726147  daddiu      $s2, $v1, 0x6147
    ctx->pc = 0x2cbe3cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24903);
label_2cbe40:
    // 0x2cbe40: 0x67206e65  daddiu      $zero, $t9, 0x6E65
    ctx->pc = 0x2cbe40u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)28261);
label_2cbe44:
    // 0x2cbe44: 0x6e75206f  ldr         $s5, 0x206F($s3)
    ctx->pc = 0x2cbe44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2cbe48:
    // 0x2cbe48: 0x666c7566  daddiu      $t4, $s3, 0x7566
    ctx->pc = 0x2cbe48u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)30054);
label_2cbe4c:
    // 0x2cbe4c: 0x656c6c69  daddiu      $t4, $t3, 0x6C69
    ctx->pc = 0x2cbe4cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27753);
label_2cbe50:
    // 0x2cbe50: 0x2e64  .word       0x00002E64                   # and         $a1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbe50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cbe54:
    // 0x2cbe54: 0x0  nop
    ctx->pc = 0x2cbe54u;
    // NOP
label_2cbe58:
    // 0x2cbe58: 0x0  nop
    ctx->pc = 0x2cbe58u;
    // NOP
label_2cbe5c:
    // 0x2cbe5c: 0x0  nop
    ctx->pc = 0x2cbe5cu;
    // NOP
label_2cbe60:
    // 0x2cbe60: 0x4220794d  .word       0x4220794D                   # INVALID     $s1, $zero, 0x794D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cbe60u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2CBE60 raw=0x4220794D");
 /* MITIGATED */
label_2cbe64:
    // 0x2cbe64: 0x68746f72  ldl         $s4, 0x6F72($v1)
    ctx->pc = 0x2cbe64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cbe68:
    // 0x2cbe68: 0x202c7265  addi        $t4, $at, 0x7265
    ctx->pc = 0x2cbe68u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29285, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cbe6c:
    // 0x2cbe6c: 0x67726f66  daddiu      $s2, $k1, 0x6F66
    ctx->pc = 0x2cbe6cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28518);
label_2cbe70:
    // 0x2cbe70: 0x20657669  addi        $a1, $v1, 0x7669
    ctx->pc = 0x2cbe70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30313, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cbe74:
    // 0x2cbe74: 0x2e656d  .word       0x002E656D                   # daddu       $t4, $at, $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbe74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 14));
label_2cbe78:
    // 0x2cbe78: 0x0  nop
    ctx->pc = 0x2cbe78u;
    // NOP
label_2cbe7c:
    // 0x2cbe7c: 0x0  nop
    ctx->pc = 0x2cbe7cu;
    // NOP
label_2cbe80:
    // 0x2cbe80: 0x206d2749  addi        $t5, $v1, 0x2749
    ctx->pc = 0x2cbe80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10057, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_2cbe84:
    // 0x2cbe84: 0x72726f73  .word       0x72726F73                   # INVALID     $s3, $s2, 0x6F73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbe84u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CBE84 raw=0x72726F73");
 /* MITIGATED */
label_2cbe88:
    // 0x2cbe88: 0x43202c79  .word       0x43202C79                   # INVALID     $t9, $zero, 0x2C79 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cbe88u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2CBE88 raw=0x43202C79");
 /* MITIGATED */
label_2cbe8c:
    // 0x2cbe8c: 0x43206f61  .word       0x43206F61                   # INVALID     $t9, $zero, 0x6F61 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cbe8cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2CBE8C raw=0x43206F61");
 /* MITIGATED */
label_2cbe90:
    // 0x2cbe90: 0x2e6f61  .word       0x002E6F61                   # addu        $t5, $at, $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbe90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 14)));
label_2cbe94:
    // 0x2cbe94: 0x0  nop
    ctx->pc = 0x2cbe94u;
    // NOP
label_2cbe98:
    // 0x2cbe98: 0x0  nop
    ctx->pc = 0x2cbe98u;
    // NOP
label_2cbe9c:
    // 0x2cbe9c: 0x0  nop
    ctx->pc = 0x2cbe9cu;
    // NOP
label_2cbea0:
    // 0x2cbea0: 0x6c20794d  ldr         $zero, 0x794D($at)
    ctx->pc = 0x2cbea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 31053); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cbea4:
    // 0x2cbea4: 0x2c656669  sltiu       $a1, $v1, 0x6669
    ctx->pc = 0x2cbea4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26217) ? 1 : 0);
label_2cbea8:
    // 0x2cbea8: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x2cbea8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2cbeac:
    // 0x2cbeac: 0x73736170  .word       0x73736170                   # INVALID     $k1, $s3, 0x6170 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x2cbeacu;
//     throw std::runtime_error("Unhandled PMFHL instruction: function 0x5 at 0x2CBEAC raw=0x73736170");
 /* MITIGATED */
label_2cbeb0:
    // 0x2cbeb0: 0x61776120  daddi       $s7, $t3, 0x6120
    ctx->pc = 0x2cbeb0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24864; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
label_2cbeb4:
    // 0x2cbeb4: 0x2e79  .word       0x00002E79                   # INVALID     $zero, $zero, 0x2E79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbeb4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CBEB4 raw=0x00002E79");
 /* MITIGATED */
label_2cbeb8:
    // 0x2cbeb8: 0x0  nop
    ctx->pc = 0x2cbeb8u;
    // NOP
label_2cbebc:
    // 0x2cbebc: 0x0  nop
    ctx->pc = 0x2cbebcu;
    // NOP
label_2cbec0:
    // 0x2cbec0: 0x202c7349  addi        $t4, $at, 0x7349
    ctx->pc = 0x2cbec0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29513, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cbec4:
    // 0x2cbec4: 0x74207369  .word       0x74207369                   # INVALID     $at, $zero, 0x7369 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbec4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBEC4 raw=0x74207369");
 /* MITIGATED */
label_2cbec8:
    // 0x2cbec8: 0x20736968  addi        $s3, $v1, 0x6968
    ctx->pc = 0x2cbec8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26984, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cbecc:
    // 0x2cbecc: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cbeccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cbed0:
    // 0x2cbed0: 0x3f646e65  .word       0x3F646E65                   # lui         $a0, 0x6E65 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28261 << 16));
label_2cbed4:
    // 0x2cbed4: 0x0  nop
    ctx->pc = 0x2cbed4u;
    // NOP
label_2cbed8:
    // 0x2cbed8: 0x0  nop
    ctx->pc = 0x2cbed8u;
    // NOP
label_2cbedc:
    // 0x2cbedc: 0x0  nop
    ctx->pc = 0x2cbedcu;
    // NOP
label_2cbee0:
    // 0x2cbee0: 0x20726f46  addi        $s2, $v1, 0x6F46
    ctx->pc = 0x2cbee0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28486, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cbee4:
    // 0x2cbee4: 0x202c656d  addi        $t4, $at, 0x656D
    ctx->pc = 0x2cbee4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25965, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cbee8:
    // 0x2cbee8: 0x64206f74  daddiu      $zero, $at, 0x6F74
    ctx->pc = 0x2cbee8u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)28532);
label_2cbeec:
    // 0x2cbeec: 0x69206569  ldl         $zero, 0x6569($t1)
    ctx->pc = 0x2cbeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25961); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cbef0:
    // 0x2cbef0: 0x2061206e  addi        $at, $v1, 0x206E
    ctx->pc = 0x2cbef0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8302, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2cbef4:
    // 0x2cbef4: 0x63616c70  daddi       $at, $k1, 0x6C70
    ctx->pc = 0x2cbef4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2cbef8:
    // 0x2cbef8: 0x696c2065  ldl         $t4, 0x2065($t3)
    ctx->pc = 0x2cbef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2cbefc:
    // 0x2cbefc: 0x7420656b  .word       0x7420656B                   # INVALID     $at, $zero, 0x656B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbefcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBEFC raw=0x7420656B");
 /* MITIGATED */
label_2cbf00:
    // 0x2cbf00: 0x2e736968  sltiu       $s3, $s3, 0x6968
    ctx->pc = 0x2cbf00u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26984) ? 1 : 0);
label_2cbf04:
    // 0x2cbf04: 0x0  nop
    ctx->pc = 0x2cbf04u;
    // NOP
label_2cbf08:
    // 0x2cbf08: 0x0  nop
    ctx->pc = 0x2cbf08u;
    // NOP
label_2cbf0c:
    // 0x2cbf0c: 0x0  nop
    ctx->pc = 0x2cbf0cu;
    // NOP
label_2cbf10:
    // 0x2cbf10: 0x61682049  daddi       $t0, $t3, 0x2049
    ctx->pc = 0x2cbf10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2cbf14:
    // 0x2cbf14: 0x6f732064  ldr         $s3, 0x2064($k1)
    ctx->pc = 0x2cbf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2cbf18:
    // 0x2cbf18: 0x63756d20  daddi       $s5, $k1, 0x6D20
    ctx->pc = 0x2cbf18u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27936; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2cbf1c:
    // 0x2cbf1c: 0x6f742068  ldr         $s4, 0x2068($k1)
    ctx->pc = 0x2cbf1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2cbf20:
    // 0x2cbf20: 0x2e6f6420  sltiu       $t7, $s3, 0x6420
    ctx->pc = 0x2cbf20u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25632) ? 1 : 0);
label_2cbf24:
    // 0x2cbf24: 0x0  nop
    ctx->pc = 0x2cbf24u;
    // NOP
label_2cbf28:
    // 0x2cbf28: 0x0  nop
    ctx->pc = 0x2cbf28u;
    // NOP
label_2cbf2c:
    // 0x2cbf2c: 0x0  nop
    ctx->pc = 0x2cbf2cu;
    // NOP
label_2cbf30:
    // 0x2cbf30: 0x6c207449  ldr         $zero, 0x7449($at)
    ctx->pc = 0x2cbf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29769); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cbf34:
    // 0x2cbf34: 0x736b6f6f  .word       0x736B6F6F                   # INVALID     $k1, $t3, 0x6F6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbf34u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2CBF34 raw=0x736B6F6F");
 /* MITIGATED */
label_2cbf38:
    // 0x2cbf38: 0x6b696c20  ldl         $t1, 0x6C20($k1)
    ctx->pc = 0x2cbf38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27680); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2cbf3c:
    // 0x2cbf3c: 0x796d2065  lq          $t5, 0x2065($t3)
    ctx->pc = 0x2cbf3cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 11), 8293)));
label_2cbf40:
    // 0x2cbf40: 0x63756c20  daddi       $s5, $k1, 0x6C20
    ctx->pc = 0x2cbf40u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27680; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2cbf44:
    // 0x2cbf44: 0x6168206b  daddi       $t0, $t3, 0x206B
    ctx->pc = 0x2cbf44u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8299; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2cbf48:
    // 0x2cbf48: 0x75722073  .word       0x75722073                   # INVALID     $t3, $s2, 0x2073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbf48u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBF48 raw=0x75722073");
 /* MITIGATED */
label_2cbf4c:
    // 0x2cbf4c: 0x756f206e  .word       0x756F206E                   # INVALID     $t3, $t7, 0x206E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbf4cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBF4C raw=0x756F206E");
 /* MITIGATED */
label_2cbf50:
    // 0x2cbf50: 0x2e74  teq         $zero, $zero, 185
    ctx->pc = 0x2cbf50u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cbf54:
    // 0x2cbf54: 0x0  nop
    ctx->pc = 0x2cbf54u;
    // NOP
label_2cbf58:
    // 0x2cbf58: 0x0  nop
    ctx->pc = 0x2cbf58u;
    // NOP
label_2cbf5c:
    // 0x2cbf5c: 0x0  nop
    ctx->pc = 0x2cbf5cu;
    // NOP
label_2cbf60:
    // 0x2cbf60: 0x68746146  ldl         $s4, 0x6146($v1)
    ctx->pc = 0x2cbf60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24902); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cbf64:
    // 0x2cbf64: 0x202c7265  addi        $t4, $at, 0x7265
    ctx->pc = 0x2cbf64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29285, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cbf68:
    // 0x2cbf68: 0x61656c70  daddi       $a1, $t3, 0x6C70
    ctx->pc = 0x2cbf68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cbf6c:
    // 0x2cbf6c: 0x66206573  daddiu      $zero, $s1, 0x6573
    ctx->pc = 0x2cbf6cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25971);
label_2cbf70:
    // 0x2cbf70: 0x6967726f  ldl         $a3, 0x726F($t3)
    ctx->pc = 0x2cbf70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2cbf74:
    // 0x2cbf74: 0x6d206576  ldr         $zero, 0x6576($t1)
    ctx->pc = 0x2cbf74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25974); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cbf78:
    // 0x2cbf78: 0x2e65  .word       0x00002E65                   # move        $a1, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cbf78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cbf7c:
    // 0x2cbf7c: 0x0  nop
    ctx->pc = 0x2cbf7cu;
    // NOP
label_2cbf80:
    // 0x2cbf80: 0x64206f54  daddiu      $zero, $at, 0x6F54
    ctx->pc = 0x2cbf80u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)28500);
label_2cbf84:
    // 0x2cbf84: 0x61206569  daddi       $zero, $t1, 0x6569
    ctx->pc = 0x2cbf84u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25961; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cbf88:
    // 0x2cbf88: 0x20612074  addi        $at, $v1, 0x2074
    ctx->pc = 0x2cbf88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2cbf8c:
    // 0x2cbf8c: 0x656d6974  daddiu      $t5, $t3, 0x6974
    ctx->pc = 0x2cbf8cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26996);
label_2cbf90:
    // 0x2cbf90: 0x6b696c20  ldl         $t1, 0x6C20($k1)
    ctx->pc = 0x2cbf90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27680); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2cbf94:
    // 0x2cbf94: 0x68742065  ldl         $s4, 0x2065($v1)
    ctx->pc = 0x2cbf94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cbf98:
    // 0x2cbf98: 0x2e7369  .word       0x002E7369                   # mtsa        $at # 000E7340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cbf98u;
    ctx->sa = GPR_U32(ctx, 1) & 0x7F;
label_2cbf9c:
    // 0x2cbf9c: 0x0  nop
    ctx->pc = 0x2cbf9cu;
    // NOP
label_2cbfa0:
    // 0x2cbfa0: 0x6120794d  daddi       $zero, $t1, 0x794D
    ctx->pc = 0x2cbfa0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)31053; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cbfa4:
    // 0x2cbfa4: 0x7469626d  .word       0x7469626D                   # INVALID     $v1, $t1, 0x626D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbfa4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBFA4 raw=0x7469626D");
 /* MITIGATED */
label_2cbfa8:
    // 0x2cbfa8: 0x2c6e6f69  sltiu       $t6, $v1, 0x6F69
    ctx->pc = 0x2cbfa8u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28521) ? 1 : 0);
label_2cbfac:
    // 0x2cbfac: 0x726e7520  .word       0x726E7520                   # madd1       $t6, $s3, $t6 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cbfacu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2cbfb0:
    // 0x2cbfb0: 0x696c6165  ldl         $t4, 0x6165($t3)
    ctx->pc = 0x2cbfb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2cbfb4:
    // 0x2cbfb4: 0x2e64657a  sltiu       $a0, $s3, 0x657A
    ctx->pc = 0x2cbfb4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25978) ? 1 : 0);
label_2cbfb8:
    // 0x2cbfb8: 0x0  nop
    ctx->pc = 0x2cbfb8u;
    // NOP
label_2cbfbc:
    // 0x2cbfbc: 0x0  nop
    ctx->pc = 0x2cbfbcu;
    // NOP
label_2cbfc0:
    // 0x2cbfc0: 0x2c776f48  sltiu       $s7, $v1, 0x6F48
    ctx->pc = 0x2cbfc0u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28488) ? 1 : 0);
label_2cbfc4:
    // 0x2cbfc4: 0x776f6820  .word       0x776F6820                   # INVALID     $k1, $t7, 0x6820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbfc4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBFC4 raw=0x776F6820");
 /* MITIGATED */
label_2cbfc8:
    // 0x2cbfc8: 0x756f6320  .word       0x756F6320                   # INVALID     $t3, $t7, 0x6320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbfc8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBFC8 raw=0x756F6320");
 /* MITIGATED */
label_2cbfcc:
    // 0x2cbfcc: 0x4920646c  .word       0x4920646C                   # INVALID     $t1, $zero, 0x646C # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2cbfccu;
//     throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2CBFCC raw=0x4920646C");
 /* MITIGATED */
label_2cbfd0:
    // 0x2cbfd0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cbfd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cbfd4:
    // 0x2cbfd4: 0x0  nop
    ctx->pc = 0x2cbfd4u;
    // NOP
label_2cbfd8:
    // 0x2cbfd8: 0x0  nop
    ctx->pc = 0x2cbfd8u;
    // NOP
label_2cbfdc:
    // 0x2cbfdc: 0x0  nop
    ctx->pc = 0x2cbfdcu;
    // NOP
label_2cbfe0:
    // 0x2cbfe0: 0x20726f46  addi        $s2, $v1, 0x6F46
    ctx->pc = 0x2cbfe0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28486, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cbfe4:
    // 0x2cbfe4: 0x7420656d  .word       0x7420656D                   # INVALID     $at, $zero, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbfe4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBFE4 raw=0x7420656D");
 /* MITIGATED */
label_2cbfe8:
    // 0x2cbfe8: 0x6166206f  daddi       $a2, $t3, 0x206F
    ctx->pc = 0x2cbfe8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8303; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_2cbfec:
    // 0x2cbfec: 0x69206c6c  ldl         $zero, 0x6C6C($t1)
    ctx->pc = 0x2cbfecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 27756); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cbff0:
    // 0x2cbff0: 0x2061206e  addi        $at, $v1, 0x206E
    ctx->pc = 0x2cbff0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8302, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2cbff4:
    // 0x2cbff4: 0x63616c70  daddi       $at, $k1, 0x6C70
    ctx->pc = 0x2cbff4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2cbff8:
    // 0x2cbff8: 0x696c2065  ldl         $t4, 0x2065($t3)
    ctx->pc = 0x2cbff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2cbffc:
    // 0x2cbffc: 0x7420656b  .word       0x7420656B                   # INVALID     $at, $zero, 0x656B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cbffcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CBFFC raw=0x7420656B");
 /* MITIGATED */
label_2cc000:
    // 0x2cc000: 0x2e736968  sltiu       $s3, $s3, 0x6968
    ctx->pc = 0x2cc000u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26984) ? 1 : 0);
label_2cc004:
    // 0x2cc004: 0x0  nop
    ctx->pc = 0x2cc004u;
    // NOP
label_2cc008:
    // 0x2cc008: 0x0  nop
    ctx->pc = 0x2cc008u;
    // NOP
label_2cc00c:
    // 0x2cc00c: 0x0  nop
    ctx->pc = 0x2cc00cu;
    // NOP
label_2cc010:
    // 0x2cc010: 0x6e617547  ldr         $at, 0x7547($s3)
    ctx->pc = 0x2cc010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30023); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cc014:
    // 0x2cc014: 0x2c755920  sltiu       $s5, $v1, 0x5920
    ctx->pc = 0x2cc014u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22816) ? 1 : 0);
label_2cc018:
    // 0x2cc018: 0x61685a20  daddi       $t0, $t3, 0x5A20
    ctx->pc = 0x2cc018u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)23072; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2cc01c:
    // 0x2cc01c: 0x4620676e  .word       0x4620676E                   # INVALID     $s1, $zero, 0x676E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc01cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x2E at 0x2CC01C raw=0x4620676E");
 /* MITIGATED */
label_2cc020:
    // 0x2cc020: 0x202c6965  addi        $t4, $at, 0x6965
    ctx->pc = 0x2cc020u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)26981, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cc024:
    // 0x2cc024: 0x61682049  daddi       $t0, $t3, 0x2049
    ctx->pc = 0x2cc024u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2cc028:
    // 0x2cc028: 0x66206576  daddiu      $zero, $s1, 0x6576
    ctx->pc = 0x2cc028u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25974);
label_2cc02c:
    // 0x2cc02c: 0x656c6961  daddiu      $t4, $t3, 0x6961
    ctx->pc = 0x2cc02cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26977);
label_2cc030:
    // 0x2cc030: 0x756f2064  .word       0x756F2064                   # INVALID     $t3, $t7, 0x2064 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc030u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC030 raw=0x756F2064");
 /* MITIGATED */
label_2cc034:
    // 0x2cc034: 0x616f2072  daddi       $t7, $t3, 0x2072
    ctx->pc = 0x2cc034u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_2cc038:
    // 0x2cc038: 0x2e6874  teq         $at, $t6, 417
    ctx->pc = 0x2cc038u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_2cc03c:
    // 0x2cc03c: 0x0  nop
    ctx->pc = 0x2cc03cu;
    // NOP
label_2cc040:
    // 0x2cc040: 0x7320794d  .word       0x7320794D                   # INVALID     $t9, $zero, 0x794D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc040u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0xD at 0x2CC040 raw=0x7320794D");
 /* MITIGATED */
label_2cc044:
    // 0x2cc044: 0x2c736e6f  sltiu       $s3, $v1, 0x6E6F
    ctx->pc = 0x2cc044u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28271) ? 1 : 0);
label_2cc048:
    // 0x2cc048: 0x6c204920  ldr         $zero, 0x4920($at)
    ctx->pc = 0x2cc048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 18720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cc04c:
    // 0x2cc04c: 0x65766165  daddiu      $s6, $t3, 0x6165
    ctx->pc = 0x2cc04cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
label_2cc050:
    // 0x2cc050: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2cc050u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2cc054:
    // 0x2cc054: 0x73657220  .word       0x73657220                   # madd1       $t6, $k1, $a1 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc054u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2cc058:
    // 0x2cc058: 0x6f742074  ldr         $s4, 0x2074($k1)
    ctx->pc = 0x2cc058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2cc05c:
    // 0x2cc05c: 0x756f7920  .word       0x756F7920                   # INVALID     $t3, $t7, 0x7920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc05cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC05C raw=0x756F7920");
 /* MITIGATED */
label_2cc060:
    // 0x2cc060: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cc060u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cc064:
    // 0x2cc064: 0x0  nop
    ctx->pc = 0x2cc064u;
    // NOP
label_2cc068:
    // 0x2cc068: 0x0  nop
    ctx->pc = 0x2cc068u;
    // NOP
label_2cc06c:
    // 0x2cc06c: 0x0  nop
    ctx->pc = 0x2cc06cu;
    // NOP
label_2cc070:
    // 0x2cc070: 0x68746146  ldl         $s4, 0x6146($v1)
    ctx->pc = 0x2cc070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24902); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cc074:
    // 0x2cc074: 0x202c7265  addi        $t4, $at, 0x7265
    ctx->pc = 0x2cc074u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29285, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cc078:
    // 0x2cc078: 0x746f7262  .word       0x746F7262                   # INVALID     $v1, $t7, 0x7262 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc078u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC078 raw=0x746F7262");
 /* MITIGATED */
label_2cc07c:
    // 0x2cc07c: 0x2c726568  sltiu       $s2, $v1, 0x6568
    ctx->pc = 0x2cc07cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25960) ? 1 : 0);
label_2cc080:
    // 0x2cc080: 0x79616d20  lq          $at, 0x6D20($t3)
    ctx->pc = 0x2cc080u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27936)));
label_2cc084:
    // 0x2cc084: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2cc084u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2cc088:
    // 0x2cc088: 0x6e755320  ldr         $s5, 0x5320($s3)
    ctx->pc = 0x2cc088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2cc08c:
    // 0x2cc08c: 0x616c4320  daddi       $t4, $t3, 0x4320
    ctx->pc = 0x2cc08cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17184; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2cc090:
    // 0x2cc090: 0x696c206e  ldl         $t4, 0x206E($t3)
    ctx->pc = 0x2cc090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2cc094:
    // 0x2cc094: 0x66206576  daddiu      $zero, $s1, 0x6576
    ctx->pc = 0x2cc094u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25974);
label_2cc098:
    // 0x2cc098: 0x7665726f  .word       0x7665726F                   # INVALID     $s3, $a1, 0x726F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc098u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC098 raw=0x7665726F");
 /* MITIGATED */
label_2cc09c:
    // 0x2cc09c: 0x217265  .word       0x00217265                   # or          $t6, $at, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc09cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) | GPR_U64(ctx, 1));
label_2cc0a0:
    // 0x2cc0a0: 0x2e727247  sltiu       $s2, $s3, 0x7247
    ctx->pc = 0x2cc0a0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29255) ? 1 : 0);
label_2cc0a4:
    // 0x2cc0a4: 0x4d202e2e  .word       0x4D202E2E                   # INVALID     $t1, $zero, 0x2E2E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc0a4u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC0A4 raw=0x4D202E2E");
 /* MITIGATED */
label_2cc0a8:
    // 0x2cc0a8: 0x72642079  .word       0x72642079                   # INVALID     $s3, $a0, 0x2079 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc0a8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x2CC0A8 raw=0x72642079");
 /* MITIGATED */
label_2cc0ac:
    // 0x2cc0ac: 0x736d6165  .word       0x736D6165                   # INVALID     $k1, $t5, 0x6165 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc0acu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CC0AC raw=0x736D6165");
 /* MITIGATED */
label_2cc0b0:
    // 0x2cc0b0: 0x20666f20  addi        $a2, $v1, 0x6F20
    ctx->pc = 0x2cc0b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_2cc0b4:
    // 0x2cc0b4: 0x706d7573  .word       0x706D7573                   # INVALID     $v1, $t5, 0x7573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc0b4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CC0B4 raw=0x706D7573");
 /* MITIGATED */
label_2cc0b8:
    // 0x2cc0b8: 0x756f7574  .word       0x756F7574                   # INVALID     $t3, $t7, 0x7574 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc0b8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC0B8 raw=0x756F7574");
 /* MITIGATED */
label_2cc0bc:
    // 0x2cc0bc: 0x61622073  daddi       $v0, $t3, 0x2073
    ctx->pc = 0x2cc0bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8307; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2cc0c0:
    // 0x2cc0c0: 0x6575716e  daddiu      $s5, $t3, 0x716E
    ctx->pc = 0x2cc0c0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29038);
label_2cc0c4:
    // 0x2cc0c4: 0x2e7374  teq         $at, $t6, 461
    ctx->pc = 0x2cc0c4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_2cc0c8:
    // 0x2cc0c8: 0x0  nop
    ctx->pc = 0x2cc0c8u;
    // NOP
label_2cc0cc:
    // 0x2cc0cc: 0x0  nop
    ctx->pc = 0x2cc0ccu;
    // NOP
label_2cc0d0:
    // 0x2cc0d0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2cc0d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc0d4:
    // 0x2cc0d4: 0x64697270  daddiu      $t1, $v1, 0x7270
    ctx->pc = 0x2cc0d4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29296);
label_2cc0d8:
    // 0x2cc0d8: 0x666f2065  daddiu      $t7, $s3, 0x2065
    ctx->pc = 0x2cc0d8u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)8293);
label_2cc0dc:
    // 0x2cc0dc: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2cc0dcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2cc0e0:
    // 0x2cc0e0: 0x61755920  daddi       $s5, $t3, 0x5920
    ctx->pc = 0x2cc0e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)22816; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_2cc0e4:
    // 0x2cc0e4: 0x6146206e  daddi       $a2, $t2, 0x206E
    ctx->pc = 0x2cc0e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8302; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_2cc0e8:
    // 0x2cc0e8: 0x796c696d  lq          $t4, 0x696D($t3)
    ctx->pc = 0x2cc0e8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 11), 26989)));
label_2cc0ec:
    // 0x2cc0ec: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cc0ecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cc0f0:
    // 0x2cc0f0: 0x68677245  ldl         $a3, 0x7245($v1)
    ctx->pc = 0x2cc0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2cc0f4:
    // 0x2cc0f4: 0x6f4e2021  ldr         $t6, 0x2021($k0)
    ctx->pc = 0x2cc0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8225); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2cc0f8:
    // 0x2cc0f8: 0x67657220  daddiu      $a1, $k1, 0x7220
    ctx->pc = 0x2cc0f8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29216);
label_2cc0fc:
    // 0x2cc0fc: 0x73746572  .word       0x73746572                   # INVALID     $k1, $s4, 0x6572 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc0fcu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CC0FC raw=0x73746572");
 /* MITIGATED */
label_2cc100:
    // 0x2cc100: 0x21  addu        $zero, $zero, $zero
    ctx->pc = 0x2cc100u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cc104:
    // 0x2cc104: 0x0  nop
    ctx->pc = 0x2cc104u;
    // NOP
label_2cc108:
    // 0x2cc108: 0x0  nop
    ctx->pc = 0x2cc108u;
    // NOP
label_2cc10c:
    // 0x2cc10c: 0x0  nop
    ctx->pc = 0x2cc10cu;
    // NOP
label_2cc110:
    // 0x2cc110: 0x61682049  daddi       $t0, $t3, 0x2049
    ctx->pc = 0x2cc110u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2cc114:
    // 0x2cc114: 0x202c6576  addi        $t4, $at, 0x6576
    ctx->pc = 0x2cc114u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25974, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cc118:
    // 0x2cc118: 0x6576696c  daddiu      $s6, $t3, 0x696C
    ctx->pc = 0x2cc118u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
label_2cc11c:
    // 0x2cc11c: 0x20612064  addi        $at, $v1, 0x2064
    ctx->pc = 0x2cc11cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2cc120:
    // 0x2cc120: 0x6c6c7566  ldr         $t4, 0x7566($v1)
    ctx->pc = 0x2cc120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30054); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cc124:
    // 0x2cc124: 0x66696c20  daddiu      $t1, $s3, 0x6C20
    ctx->pc = 0x2cc124u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)27680);
label_2cc128:
    // 0x2cc128: 0x2e65  .word       0x00002E65                   # move        $a1, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cc12c:
    // 0x2cc12c: 0x0  nop
    ctx->pc = 0x2cc12cu;
    // NOP
    ctx->pc = 0x2cc130u;
    return;
}

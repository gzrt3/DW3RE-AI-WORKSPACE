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


void FUN_0014eba0_part224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bb9d0u: goto label_1bb9d0;
        case 0x1bb9d4u: goto label_1bb9d4;
        case 0x1bb9d8u: goto label_1bb9d8;
        case 0x1bb9dcu: goto label_1bb9dc;
        case 0x1bb9e0u: goto label_1bb9e0;
        case 0x1bb9e4u: goto label_1bb9e4;
        case 0x1bb9e8u: goto label_1bb9e8;
        case 0x1bb9ecu: goto label_1bb9ec;
        case 0x1bb9f0u: goto label_1bb9f0;
        case 0x1bb9f4u: goto label_1bb9f4;
        case 0x1bb9f8u: goto label_1bb9f8;
        case 0x1bb9fcu: goto label_1bb9fc;
        case 0x1bba00u: goto label_1bba00;
        case 0x1bba04u: goto label_1bba04;
        case 0x1bba08u: goto label_1bba08;
        case 0x1bba0cu: goto label_1bba0c;
        case 0x1bba10u: goto label_1bba10;
        case 0x1bba14u: goto label_1bba14;
        case 0x1bba18u: goto label_1bba18;
        case 0x1bba1cu: goto label_1bba1c;
        case 0x1bba20u: goto label_1bba20;
        case 0x1bba24u: goto label_1bba24;
        case 0x1bba28u: goto label_1bba28;
        case 0x1bba2cu: goto label_1bba2c;
        case 0x1bba30u: goto label_1bba30;
        case 0x1bba34u: goto label_1bba34;
        case 0x1bba38u: goto label_1bba38;
        case 0x1bba3cu: goto label_1bba3c;
        case 0x1bba40u: goto label_1bba40;
        case 0x1bba44u: goto label_1bba44;
        case 0x1bba48u: goto label_1bba48;
        case 0x1bba4cu: goto label_1bba4c;
        case 0x1bba50u: goto label_1bba50;
        case 0x1bba54u: goto label_1bba54;
        case 0x1bba58u: goto label_1bba58;
        case 0x1bba5cu: goto label_1bba5c;
        case 0x1bba60u: goto label_1bba60;
        case 0x1bba64u: goto label_1bba64;
        case 0x1bba68u: goto label_1bba68;
        case 0x1bba6cu: goto label_1bba6c;
        case 0x1bba70u: goto label_1bba70;
        case 0x1bba74u: goto label_1bba74;
        case 0x1bba78u: goto label_1bba78;
        case 0x1bba7cu: goto label_1bba7c;
        case 0x1bba80u: goto label_1bba80;
        case 0x1bba84u: goto label_1bba84;
        case 0x1bba88u: goto label_1bba88;
        case 0x1bba8cu: goto label_1bba8c;
        case 0x1bba90u: goto label_1bba90;
        case 0x1bba94u: goto label_1bba94;
        case 0x1bba98u: goto label_1bba98;
        case 0x1bba9cu: goto label_1bba9c;
        case 0x1bbaa0u: goto label_1bbaa0;
        case 0x1bbaa4u: goto label_1bbaa4;
        case 0x1bbaa8u: goto label_1bbaa8;
        case 0x1bbaacu: goto label_1bbaac;
        case 0x1bbab0u: goto label_1bbab0;
        case 0x1bbab4u: goto label_1bbab4;
        case 0x1bbab8u: goto label_1bbab8;
        case 0x1bbabcu: goto label_1bbabc;
        case 0x1bbac0u: goto label_1bbac0;
        case 0x1bbac4u: goto label_1bbac4;
        case 0x1bbac8u: goto label_1bbac8;
        case 0x1bbaccu: goto label_1bbacc;
        case 0x1bbad0u: goto label_1bbad0;
        case 0x1bbad4u: goto label_1bbad4;
        case 0x1bbad8u: goto label_1bbad8;
        case 0x1bbadcu: goto label_1bbadc;
        case 0x1bbae0u: goto label_1bbae0;
        case 0x1bbae4u: goto label_1bbae4;
        case 0x1bbae8u: goto label_1bbae8;
        case 0x1bbaecu: goto label_1bbaec;
        case 0x1bbaf0u: goto label_1bbaf0;
        case 0x1bbaf4u: goto label_1bbaf4;
        case 0x1bbaf8u: goto label_1bbaf8;
        case 0x1bbafcu: goto label_1bbafc;
        case 0x1bbb00u: goto label_1bbb00;
        case 0x1bbb04u: goto label_1bbb04;
        case 0x1bbb08u: goto label_1bbb08;
        case 0x1bbb0cu: goto label_1bbb0c;
        case 0x1bbb10u: goto label_1bbb10;
        case 0x1bbb14u: goto label_1bbb14;
        case 0x1bbb18u: goto label_1bbb18;
        case 0x1bbb1cu: goto label_1bbb1c;
        case 0x1bbb20u: goto label_1bbb20;
        case 0x1bbb24u: goto label_1bbb24;
        case 0x1bbb28u: goto label_1bbb28;
        case 0x1bbb2cu: goto label_1bbb2c;
        case 0x1bbb30u: goto label_1bbb30;
        case 0x1bbb34u: goto label_1bbb34;
        case 0x1bbb38u: goto label_1bbb38;
        case 0x1bbb3cu: goto label_1bbb3c;
        case 0x1bbb40u: goto label_1bbb40;
        case 0x1bbb44u: goto label_1bbb44;
        case 0x1bbb48u: goto label_1bbb48;
        case 0x1bbb4cu: goto label_1bbb4c;
        case 0x1bbb50u: goto label_1bbb50;
        case 0x1bbb54u: goto label_1bbb54;
        case 0x1bbb58u: goto label_1bbb58;
        case 0x1bbb5cu: goto label_1bbb5c;
        case 0x1bbb60u: goto label_1bbb60;
        case 0x1bbb64u: goto label_1bbb64;
        case 0x1bbb68u: goto label_1bbb68;
        case 0x1bbb6cu: goto label_1bbb6c;
        case 0x1bbb70u: goto label_1bbb70;
        case 0x1bbb74u: goto label_1bbb74;
        case 0x1bbb78u: goto label_1bbb78;
        case 0x1bbb7cu: goto label_1bbb7c;
        case 0x1bbb80u: goto label_1bbb80;
        case 0x1bbb84u: goto label_1bbb84;
        case 0x1bbb88u: goto label_1bbb88;
        case 0x1bbb8cu: goto label_1bbb8c;
        case 0x1bbb90u: goto label_1bbb90;
        case 0x1bbb94u: goto label_1bbb94;
        case 0x1bbb98u: goto label_1bbb98;
        case 0x1bbb9cu: goto label_1bbb9c;
        case 0x1bbba0u: goto label_1bbba0;
        case 0x1bbba4u: goto label_1bbba4;
        case 0x1bbba8u: goto label_1bbba8;
        case 0x1bbbacu: goto label_1bbbac;
        case 0x1bbbb0u: goto label_1bbbb0;
        case 0x1bbbb4u: goto label_1bbbb4;
        case 0x1bbbb8u: goto label_1bbbb8;
        case 0x1bbbbcu: goto label_1bbbbc;
        case 0x1bbbc0u: goto label_1bbbc0;
        case 0x1bbbc4u: goto label_1bbbc4;
        case 0x1bbbc8u: goto label_1bbbc8;
        case 0x1bbbccu: goto label_1bbbcc;
        case 0x1bbbd0u: goto label_1bbbd0;
        case 0x1bbbd4u: goto label_1bbbd4;
        case 0x1bbbd8u: goto label_1bbbd8;
        case 0x1bbbdcu: goto label_1bbbdc;
        case 0x1bbbe0u: goto label_1bbbe0;
        case 0x1bbbe4u: goto label_1bbbe4;
        case 0x1bbbe8u: goto label_1bbbe8;
        case 0x1bbbecu: goto label_1bbbec;
        case 0x1bbbf0u: goto label_1bbbf0;
        case 0x1bbbf4u: goto label_1bbbf4;
        case 0x1bbbf8u: goto label_1bbbf8;
        case 0x1bbbfcu: goto label_1bbbfc;
        case 0x1bbc00u: goto label_1bbc00;
        case 0x1bbc04u: goto label_1bbc04;
        case 0x1bbc08u: goto label_1bbc08;
        case 0x1bbc0cu: goto label_1bbc0c;
        case 0x1bbc10u: goto label_1bbc10;
        case 0x1bbc14u: goto label_1bbc14;
        case 0x1bbc18u: goto label_1bbc18;
        case 0x1bbc1cu: goto label_1bbc1c;
        case 0x1bbc20u: goto label_1bbc20;
        case 0x1bbc24u: goto label_1bbc24;
        case 0x1bbc28u: goto label_1bbc28;
        case 0x1bbc2cu: goto label_1bbc2c;
        case 0x1bbc30u: goto label_1bbc30;
        case 0x1bbc34u: goto label_1bbc34;
        case 0x1bbc38u: goto label_1bbc38;
        case 0x1bbc3cu: goto label_1bbc3c;
        case 0x1bbc40u: goto label_1bbc40;
        case 0x1bbc44u: goto label_1bbc44;
        case 0x1bbc48u: goto label_1bbc48;
        case 0x1bbc4cu: goto label_1bbc4c;
        case 0x1bbc50u: goto label_1bbc50;
        case 0x1bbc54u: goto label_1bbc54;
        case 0x1bbc58u: goto label_1bbc58;
        case 0x1bbc5cu: goto label_1bbc5c;
        case 0x1bbc60u: goto label_1bbc60;
        case 0x1bbc64u: goto label_1bbc64;
        case 0x1bbc68u: goto label_1bbc68;
        case 0x1bbc6cu: goto label_1bbc6c;
        case 0x1bbc70u: goto label_1bbc70;
        case 0x1bbc74u: goto label_1bbc74;
        case 0x1bbc78u: goto label_1bbc78;
        case 0x1bbc7cu: goto label_1bbc7c;
        case 0x1bbc80u: goto label_1bbc80;
        case 0x1bbc84u: goto label_1bbc84;
        case 0x1bbc88u: goto label_1bbc88;
        case 0x1bbc8cu: goto label_1bbc8c;
        case 0x1bbc90u: goto label_1bbc90;
        case 0x1bbc94u: goto label_1bbc94;
        case 0x1bbc98u: goto label_1bbc98;
        case 0x1bbc9cu: goto label_1bbc9c;
        case 0x1bbca0u: goto label_1bbca0;
        case 0x1bbca4u: goto label_1bbca4;
        case 0x1bbca8u: goto label_1bbca8;
        case 0x1bbcacu: goto label_1bbcac;
        case 0x1bbcb0u: goto label_1bbcb0;
        case 0x1bbcb4u: goto label_1bbcb4;
        case 0x1bbcb8u: goto label_1bbcb8;
        case 0x1bbcbcu: goto label_1bbcbc;
        case 0x1bbcc0u: goto label_1bbcc0;
        case 0x1bbcc4u: goto label_1bbcc4;
        case 0x1bbcc8u: goto label_1bbcc8;
        case 0x1bbcccu: goto label_1bbccc;
        case 0x1bbcd0u: goto label_1bbcd0;
        case 0x1bbcd4u: goto label_1bbcd4;
        case 0x1bbcd8u: goto label_1bbcd8;
        case 0x1bbcdcu: goto label_1bbcdc;
        case 0x1bbce0u: goto label_1bbce0;
        case 0x1bbce4u: goto label_1bbce4;
        case 0x1bbce8u: goto label_1bbce8;
        case 0x1bbcecu: goto label_1bbcec;
        case 0x1bbcf0u: goto label_1bbcf0;
        case 0x1bbcf4u: goto label_1bbcf4;
        case 0x1bbcf8u: goto label_1bbcf8;
        case 0x1bbcfcu: goto label_1bbcfc;
        case 0x1bbd00u: goto label_1bbd00;
        case 0x1bbd04u: goto label_1bbd04;
        case 0x1bbd08u: goto label_1bbd08;
        case 0x1bbd0cu: goto label_1bbd0c;
        case 0x1bbd10u: goto label_1bbd10;
        case 0x1bbd14u: goto label_1bbd14;
        case 0x1bbd18u: goto label_1bbd18;
        case 0x1bbd1cu: goto label_1bbd1c;
        case 0x1bbd20u: goto label_1bbd20;
        case 0x1bbd24u: goto label_1bbd24;
        case 0x1bbd28u: goto label_1bbd28;
        case 0x1bbd2cu: goto label_1bbd2c;
        case 0x1bbd30u: goto label_1bbd30;
        case 0x1bbd34u: goto label_1bbd34;
        case 0x1bbd38u: goto label_1bbd38;
        case 0x1bbd3cu: goto label_1bbd3c;
        case 0x1bbd40u: goto label_1bbd40;
        case 0x1bbd44u: goto label_1bbd44;
        case 0x1bbd48u: goto label_1bbd48;
        case 0x1bbd4cu: goto label_1bbd4c;
        case 0x1bbd50u: goto label_1bbd50;
        case 0x1bbd54u: goto label_1bbd54;
        case 0x1bbd58u: goto label_1bbd58;
        case 0x1bbd5cu: goto label_1bbd5c;
        case 0x1bbd60u: goto label_1bbd60;
        case 0x1bbd64u: goto label_1bbd64;
        case 0x1bbd68u: goto label_1bbd68;
        case 0x1bbd6cu: goto label_1bbd6c;
        case 0x1bbd70u: goto label_1bbd70;
        case 0x1bbd74u: goto label_1bbd74;
        case 0x1bbd78u: goto label_1bbd78;
        case 0x1bbd7cu: goto label_1bbd7c;
        case 0x1bbd80u: goto label_1bbd80;
        case 0x1bbd84u: goto label_1bbd84;
        case 0x1bbd88u: goto label_1bbd88;
        case 0x1bbd8cu: goto label_1bbd8c;
        case 0x1bbd90u: goto label_1bbd90;
        case 0x1bbd94u: goto label_1bbd94;
        case 0x1bbd98u: goto label_1bbd98;
        case 0x1bbd9cu: goto label_1bbd9c;
        case 0x1bbda0u: goto label_1bbda0;
        case 0x1bbda4u: goto label_1bbda4;
        case 0x1bbda8u: goto label_1bbda8;
        case 0x1bbdacu: goto label_1bbdac;
        case 0x1bbdb0u: goto label_1bbdb0;
        case 0x1bbdb4u: goto label_1bbdb4;
        case 0x1bbdb8u: goto label_1bbdb8;
        case 0x1bbdbcu: goto label_1bbdbc;
        case 0x1bbdc0u: goto label_1bbdc0;
        case 0x1bbdc4u: goto label_1bbdc4;
        case 0x1bbdc8u: goto label_1bbdc8;
        case 0x1bbdccu: goto label_1bbdcc;
        case 0x1bbdd0u: goto label_1bbdd0;
        case 0x1bbdd4u: goto label_1bbdd4;
        case 0x1bbdd8u: goto label_1bbdd8;
        case 0x1bbddcu: goto label_1bbddc;
        case 0x1bbde0u: goto label_1bbde0;
        case 0x1bbde4u: goto label_1bbde4;
        case 0x1bbde8u: goto label_1bbde8;
        case 0x1bbdecu: goto label_1bbdec;
        case 0x1bbdf0u: goto label_1bbdf0;
        case 0x1bbdf4u: goto label_1bbdf4;
        case 0x1bbdf8u: goto label_1bbdf8;
        case 0x1bbdfcu: goto label_1bbdfc;
        case 0x1bbe00u: goto label_1bbe00;
        case 0x1bbe04u: goto label_1bbe04;
        case 0x1bbe08u: goto label_1bbe08;
        case 0x1bbe0cu: goto label_1bbe0c;
        case 0x1bbe10u: goto label_1bbe10;
        case 0x1bbe14u: goto label_1bbe14;
        case 0x1bbe18u: goto label_1bbe18;
        case 0x1bbe1cu: goto label_1bbe1c;
        case 0x1bbe20u: goto label_1bbe20;
        case 0x1bbe24u: goto label_1bbe24;
        case 0x1bbe28u: goto label_1bbe28;
        case 0x1bbe2cu: goto label_1bbe2c;
        case 0x1bbe30u: goto label_1bbe30;
        case 0x1bbe34u: goto label_1bbe34;
        case 0x1bbe38u: goto label_1bbe38;
        case 0x1bbe3cu: goto label_1bbe3c;
        case 0x1bbe40u: goto label_1bbe40;
        case 0x1bbe44u: goto label_1bbe44;
        case 0x1bbe48u: goto label_1bbe48;
        case 0x1bbe4cu: goto label_1bbe4c;
        case 0x1bbe50u: goto label_1bbe50;
        case 0x1bbe54u: goto label_1bbe54;
        case 0x1bbe58u: goto label_1bbe58;
        case 0x1bbe5cu: goto label_1bbe5c;
        case 0x1bbe60u: goto label_1bbe60;
        case 0x1bbe64u: goto label_1bbe64;
        case 0x1bbe68u: goto label_1bbe68;
        case 0x1bbe6cu: goto label_1bbe6c;
        case 0x1bbe70u: goto label_1bbe70;
        case 0x1bbe74u: goto label_1bbe74;
        case 0x1bbe78u: goto label_1bbe78;
        case 0x1bbe7cu: goto label_1bbe7c;
        case 0x1bbe80u: goto label_1bbe80;
        case 0x1bbe84u: goto label_1bbe84;
        case 0x1bbe88u: goto label_1bbe88;
        case 0x1bbe8cu: goto label_1bbe8c;
        case 0x1bbe90u: goto label_1bbe90;
        case 0x1bbe94u: goto label_1bbe94;
        case 0x1bbe98u: goto label_1bbe98;
        case 0x1bbe9cu: goto label_1bbe9c;
        case 0x1bbea0u: goto label_1bbea0;
        case 0x1bbea4u: goto label_1bbea4;
        case 0x1bbea8u: goto label_1bbea8;
        case 0x1bbeacu: goto label_1bbeac;
        case 0x1bbeb0u: goto label_1bbeb0;
        case 0x1bbeb4u: goto label_1bbeb4;
        case 0x1bbeb8u: goto label_1bbeb8;
        case 0x1bbebcu: goto label_1bbebc;
        case 0x1bbec0u: goto label_1bbec0;
        case 0x1bbec4u: goto label_1bbec4;
        case 0x1bbec8u: goto label_1bbec8;
        case 0x1bbeccu: goto label_1bbecc;
        case 0x1bbed0u: goto label_1bbed0;
        case 0x1bbed4u: goto label_1bbed4;
        case 0x1bbed8u: goto label_1bbed8;
        case 0x1bbedcu: goto label_1bbedc;
        case 0x1bbee0u: goto label_1bbee0;
        case 0x1bbee4u: goto label_1bbee4;
        case 0x1bbee8u: goto label_1bbee8;
        case 0x1bbeecu: goto label_1bbeec;
        case 0x1bbef0u: goto label_1bbef0;
        case 0x1bbef4u: goto label_1bbef4;
        case 0x1bbef8u: goto label_1bbef8;
        case 0x1bbefcu: goto label_1bbefc;
        case 0x1bbf00u: goto label_1bbf00;
        case 0x1bbf04u: goto label_1bbf04;
        case 0x1bbf08u: goto label_1bbf08;
        case 0x1bbf0cu: goto label_1bbf0c;
        case 0x1bbf10u: goto label_1bbf10;
        case 0x1bbf14u: goto label_1bbf14;
        case 0x1bbf18u: goto label_1bbf18;
        case 0x1bbf1cu: goto label_1bbf1c;
        case 0x1bbf20u: goto label_1bbf20;
        case 0x1bbf24u: goto label_1bbf24;
        case 0x1bbf28u: goto label_1bbf28;
        case 0x1bbf2cu: goto label_1bbf2c;
        case 0x1bbf30u: goto label_1bbf30;
        case 0x1bbf34u: goto label_1bbf34;
        case 0x1bbf38u: goto label_1bbf38;
        case 0x1bbf3cu: goto label_1bbf3c;
        case 0x1bbf40u: goto label_1bbf40;
        case 0x1bbf44u: goto label_1bbf44;
        case 0x1bbf48u: goto label_1bbf48;
        case 0x1bbf4cu: goto label_1bbf4c;
        case 0x1bbf50u: goto label_1bbf50;
        case 0x1bbf54u: goto label_1bbf54;
        case 0x1bbf58u: goto label_1bbf58;
        case 0x1bbf5cu: goto label_1bbf5c;
        case 0x1bbf60u: goto label_1bbf60;
        case 0x1bbf64u: goto label_1bbf64;
        case 0x1bbf68u: goto label_1bbf68;
        case 0x1bbf6cu: goto label_1bbf6c;
        case 0x1bbf70u: goto label_1bbf70;
        case 0x1bbf74u: goto label_1bbf74;
        case 0x1bbf78u: goto label_1bbf78;
        case 0x1bbf7cu: goto label_1bbf7c;
        case 0x1bbf80u: goto label_1bbf80;
        case 0x1bbf84u: goto label_1bbf84;
        case 0x1bbf88u: goto label_1bbf88;
        case 0x1bbf8cu: goto label_1bbf8c;
        case 0x1bbf90u: goto label_1bbf90;
        case 0x1bbf94u: goto label_1bbf94;
        case 0x1bbf98u: goto label_1bbf98;
        case 0x1bbf9cu: goto label_1bbf9c;
        case 0x1bbfa0u: goto label_1bbfa0;
        case 0x1bbfa4u: goto label_1bbfa4;
        case 0x1bbfa8u: goto label_1bbfa8;
        case 0x1bbfacu: goto label_1bbfac;
        case 0x1bbfb0u: goto label_1bbfb0;
        case 0x1bbfb4u: goto label_1bbfb4;
        case 0x1bbfb8u: goto label_1bbfb8;
        case 0x1bbfbcu: goto label_1bbfbc;
        case 0x1bbfc0u: goto label_1bbfc0;
        case 0x1bbfc4u: goto label_1bbfc4;
        case 0x1bbfc8u: goto label_1bbfc8;
        case 0x1bbfccu: goto label_1bbfcc;
        case 0x1bbfd0u: goto label_1bbfd0;
        case 0x1bbfd4u: goto label_1bbfd4;
        case 0x1bbfd8u: goto label_1bbfd8;
        case 0x1bbfdcu: goto label_1bbfdc;
        case 0x1bbfe0u: goto label_1bbfe0;
        case 0x1bbfe4u: goto label_1bbfe4;
        case 0x1bbfe8u: goto label_1bbfe8;
        case 0x1bbfecu: goto label_1bbfec;
        case 0x1bbff0u: goto label_1bbff0;
        case 0x1bbff4u: goto label_1bbff4;
        case 0x1bbff8u: goto label_1bbff8;
        case 0x1bbffcu: goto label_1bbffc;
        case 0x1bc000u: goto label_1bc000;
        case 0x1bc004u: goto label_1bc004;
        case 0x1bc008u: goto label_1bc008;
        case 0x1bc00cu: goto label_1bc00c;
        case 0x1bc010u: goto label_1bc010;
        case 0x1bc014u: goto label_1bc014;
        case 0x1bc018u: goto label_1bc018;
        case 0x1bc01cu: goto label_1bc01c;
        case 0x1bc020u: goto label_1bc020;
        case 0x1bc024u: goto label_1bc024;
        case 0x1bc028u: goto label_1bc028;
        case 0x1bc02cu: goto label_1bc02c;
        case 0x1bc030u: goto label_1bc030;
        case 0x1bc034u: goto label_1bc034;
        case 0x1bc038u: goto label_1bc038;
        case 0x1bc03cu: goto label_1bc03c;
        case 0x1bc040u: goto label_1bc040;
        case 0x1bc044u: goto label_1bc044;
        case 0x1bc048u: goto label_1bc048;
        case 0x1bc04cu: goto label_1bc04c;
        case 0x1bc050u: goto label_1bc050;
        case 0x1bc054u: goto label_1bc054;
        case 0x1bc058u: goto label_1bc058;
        case 0x1bc05cu: goto label_1bc05c;
        case 0x1bc060u: goto label_1bc060;
        case 0x1bc064u: goto label_1bc064;
        case 0x1bc068u: goto label_1bc068;
        case 0x1bc06cu: goto label_1bc06c;
        case 0x1bc070u: goto label_1bc070;
        case 0x1bc074u: goto label_1bc074;
        case 0x1bc078u: goto label_1bc078;
        case 0x1bc07cu: goto label_1bc07c;
        case 0x1bc080u: goto label_1bc080;
        case 0x1bc084u: goto label_1bc084;
        case 0x1bc088u: goto label_1bc088;
        case 0x1bc08cu: goto label_1bc08c;
        case 0x1bc090u: goto label_1bc090;
        case 0x1bc094u: goto label_1bc094;
        case 0x1bc098u: goto label_1bc098;
        case 0x1bc09cu: goto label_1bc09c;
        case 0x1bc0a0u: goto label_1bc0a0;
        case 0x1bc0a4u: goto label_1bc0a4;
        case 0x1bc0a8u: goto label_1bc0a8;
        case 0x1bc0acu: goto label_1bc0ac;
        case 0x1bc0b0u: goto label_1bc0b0;
        case 0x1bc0b4u: goto label_1bc0b4;
        case 0x1bc0b8u: goto label_1bc0b8;
        case 0x1bc0bcu: goto label_1bc0bc;
        case 0x1bc0c0u: goto label_1bc0c0;
        case 0x1bc0c4u: goto label_1bc0c4;
        case 0x1bc0c8u: goto label_1bc0c8;
        case 0x1bc0ccu: goto label_1bc0cc;
        case 0x1bc0d0u: goto label_1bc0d0;
        case 0x1bc0d4u: goto label_1bc0d4;
        case 0x1bc0d8u: goto label_1bc0d8;
        case 0x1bc0dcu: goto label_1bc0dc;
        case 0x1bc0e0u: goto label_1bc0e0;
        case 0x1bc0e4u: goto label_1bc0e4;
        case 0x1bc0e8u: goto label_1bc0e8;
        case 0x1bc0ecu: goto label_1bc0ec;
        case 0x1bc0f0u: goto label_1bc0f0;
        case 0x1bc0f4u: goto label_1bc0f4;
        case 0x1bc0f8u: goto label_1bc0f8;
        case 0x1bc0fcu: goto label_1bc0fc;
        case 0x1bc100u: goto label_1bc100;
        case 0x1bc104u: goto label_1bc104;
        case 0x1bc108u: goto label_1bc108;
        case 0x1bc10cu: goto label_1bc10c;
        case 0x1bc110u: goto label_1bc110;
        case 0x1bc114u: goto label_1bc114;
        case 0x1bc118u: goto label_1bc118;
        case 0x1bc11cu: goto label_1bc11c;
        case 0x1bc120u: goto label_1bc120;
        case 0x1bc124u: goto label_1bc124;
        case 0x1bc128u: goto label_1bc128;
        case 0x1bc12cu: goto label_1bc12c;
        case 0x1bc130u: goto label_1bc130;
        case 0x1bc134u: goto label_1bc134;
        case 0x1bc138u: goto label_1bc138;
        case 0x1bc13cu: goto label_1bc13c;
        case 0x1bc140u: goto label_1bc140;
        case 0x1bc144u: goto label_1bc144;
        case 0x1bc148u: goto label_1bc148;
        case 0x1bc14cu: goto label_1bc14c;
        case 0x1bc150u: goto label_1bc150;
        case 0x1bc154u: goto label_1bc154;
        case 0x1bc158u: goto label_1bc158;
        case 0x1bc15cu: goto label_1bc15c;
        case 0x1bc160u: goto label_1bc160;
        case 0x1bc164u: goto label_1bc164;
        case 0x1bc168u: goto label_1bc168;
        case 0x1bc16cu: goto label_1bc16c;
        case 0x1bc170u: goto label_1bc170;
        case 0x1bc174u: goto label_1bc174;
        case 0x1bc178u: goto label_1bc178;
        case 0x1bc17cu: goto label_1bc17c;
        case 0x1bc180u: goto label_1bc180;
        case 0x1bc184u: goto label_1bc184;
        case 0x1bc188u: goto label_1bc188;
        case 0x1bc18cu: goto label_1bc18c;
        case 0x1bc190u: goto label_1bc190;
        case 0x1bc194u: goto label_1bc194;
        case 0x1bc198u: goto label_1bc198;
        case 0x1bc19cu: goto label_1bc19c;
        default: return;
    }

label_1bb9d0:
    if (ctx->pc == 0x1BB9D0u) {
        ctx->pc = 0x1BB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9CCu;
        // 0x1bb9d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB9D4u;
        goto label_1bb9d4;
    }
    ctx->pc = 0x1BB9CCu;
    {
        const bool branch_taken_0x1bb9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9CCu;
        // 0x1bb9d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9cc) {
            ctx->pc = 0x1BB9E0u;
            goto label_1bb9e0;
        }
    }
    ctx->pc = 0x1BB9D4u;
label_1bb9d4:
    // 0x1bb9d4: 0x8463021c  lh          $v1, 0x21C($v1)
    ctx->pc = 0x1bb9d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 540)));
label_1bb9d8:
    // 0x1bb9d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bb9dc:
    if (ctx->pc == 0x1BB9DCu) {
        ctx->pc = 0x1BB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9D8u;
        // 0x1bb9dc: 0xa6a3002e  sh          $v1, 0x2E($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 46), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB9E0u;
        goto label_1bb9e0;
    }
    ctx->pc = 0x1BB9D8u;
    {
        const bool branch_taken_0x1bb9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9D8u;
        // 0x1bb9dc: 0xa6a3002e  sh          $v1, 0x2E($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 46), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9d8) {
            ctx->pc = 0x1BB9E4u;
            goto label_1bb9e4;
        }
    }
    ctx->pc = 0x1BB9E0u;
label_1bb9e0:
    // 0x1bb9e0: 0xa6a0002e  sh          $zero, 0x2E($s5)
    ctx->pc = 0x1bb9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 46), (uint16_t)GPR_U32(ctx, 0));
label_1bb9e4:
    // 0x1bb9e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bb9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9e8:
    // 0x1bb9e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bb9e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb9ec:
    // 0x1bb9ec: 0x2329821  addu        $s3, $s1, $s2
    ctx->pc = 0x1bb9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1bb9f0:
    // 0x1bb9f0: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x1bb9f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1bb9f4:
    // 0x1bb9f4: 0x12800097  beqz        $s4, . + 4 + (0x97 << 2)
label_1bb9f8:
    if (ctx->pc == 0x1BB9F8u) {
        ctx->pc = 0x1BB9FCu;
        goto label_1bb9fc;
    }
    ctx->pc = 0x1BB9F4u;
    {
        const bool branch_taken_0x1bb9f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb9f4) {
            ctx->pc = 0x1BBC54u;
            goto label_1bbc54;
        }
    }
    ctx->pc = 0x1BB9FCu;
label_1bb9fc:
    // 0x1bb9fc: 0x9283023a  lbu         $v1, 0x23A($s4)
    ctx->pc = 0x1bb9fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 570)));
label_1bba00:
    // 0x1bba00: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
label_1bba04:
    if (ctx->pc == 0x1BBA04u) {
        ctx->pc = 0x1BBA08u;
        goto label_1bba08;
    }
    ctx->pc = 0x1BBA00u;
    {
        const bool branch_taken_0x1bba00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba00) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBA08u;
label_1bba08:
    // 0x1bba08: 0x8683021c  lh          $v1, 0x21C($s4)
    ctx->pc = 0x1bba08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 540)));
label_1bba0c:
    // 0x1bba0c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1bba10:
    if (ctx->pc == 0x1BBA10u) {
        ctx->pc = 0x1BBA14u;
        goto label_1bba14;
    }
    ctx->pc = 0x1BBA0Cu;
    {
        const bool branch_taken_0x1bba0c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1bba0c) {
            ctx->pc = 0x1BBA1Cu;
            goto label_1bba1c;
        }
    }
    ctx->pc = 0x1BBA14u;
label_1bba14:
    // 0x1bba14: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1bba18:
    if (ctx->pc == 0x1BBA18u) {
        ctx->pc = 0x1BBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA14u;
        // 0x1bba18: 0x2c3b021  addu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBA1Cu;
        goto label_1bba1c;
    }
    ctx->pc = 0x1BBA14u;
    {
        const bool branch_taken_0x1bba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA14u;
        // 0x1bba18: 0x2c3b021  addu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba14) {
            ctx->pc = 0x1BBA88u;
            goto label_1bba88;
        }
    }
    ctx->pc = 0x1BBA1Cu;
label_1bba1c:
    // 0x1bba1c: 0x0  nop
    ctx->pc = 0x1bba1cu;
    // NOP
label_1bba20:
    // 0x1bba20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bba20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bba24:
    // 0x1bba24: 0xa284023a  sb          $a0, 0x23A($s4)
    ctx->pc = 0x1bba24u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 570), (uint8_t)GPR_U32(ctx, 4));
label_1bba28:
    // 0x1bba28: 0xa680021c  sh          $zero, 0x21C($s4)
    ctx->pc = 0x1bba28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 540), (uint16_t)GPR_U32(ctx, 0));
label_1bba2c:
    // 0x1bba2c: 0x92830232  lbu         $v1, 0x232($s4)
    ctx->pc = 0x1bba2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 562)));
label_1bba30:
    // 0x1bba30: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
label_1bba34:
    if (ctx->pc == 0x1BBA34u) {
        ctx->pc = 0x1BBA38u;
        goto label_1bba38;
    }
    ctx->pc = 0x1BBA30u;
    {
        const bool branch_taken_0x1bba30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bba30) {
            ctx->pc = 0x1BBA88u;
            goto label_1bba88;
        }
    }
    ctx->pc = 0x1BBA38u;
label_1bba38:
    // 0x1bba38: 0x92840238  lbu         $a0, 0x238($s4)
    ctx->pc = 0x1bba38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 568)));
label_1bba3c:
    // 0x1bba3c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1bba40:
    // 0x1bba40: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1bba40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1bba44:
    // 0x1bba44: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x1bba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_1bba48:
    // 0x1bba48: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1bba48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bba4c:
    // 0x1bba4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bba50:
    // 0x1bba50: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bba50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bba54:
    // 0x1bba54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bba58:
    // 0x1bba58: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x1bba58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_1bba5c:
    // 0x1bba5c: 0x90633697  lbu         $v1, 0x3697($v1)
    ctx->pc = 0x1bba5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13975)));
label_1bba60:
    // 0x1bba60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bba64:
    if (ctx->pc == 0x1BBA64u) {
        ctx->pc = 0x1BBA68u;
        goto label_1bba68;
    }
    ctx->pc = 0x1BBA60u;
    {
        const bool branch_taken_0x1bba60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bba60) {
            ctx->pc = 0x1BBA70u;
            goto label_1bba70;
        }
    }
    ctx->pc = 0x1BBA68u;
label_1bba68:
    // 0x1bba68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bba6c:
    // 0x1bba6c: 0xa0830077  sb          $v1, 0x77($a0)
    ctx->pc = 0x1bba6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 119), (uint8_t)GPR_U32(ctx, 3));
label_1bba70:
    // 0x1bba70: 0x92830233  lbu         $v1, 0x233($s4)
    ctx->pc = 0x1bba70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 563)));
label_1bba74:
    // 0x1bba74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bba78:
    // 0x1bba78: 0x90630079  lbu         $v1, 0x79($v1)
    ctx->pc = 0x1bba78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 121)));
label_1bba7c:
    // 0x1bba7c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1bba80:
    if (ctx->pc == 0x1BBA80u) {
        ctx->pc = 0x1BBA84u;
        goto label_1bba84;
    }
    ctx->pc = 0x1BBA7Cu;
    {
        const bool branch_taken_0x1bba7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba7c) {
            ctx->pc = 0x1BBA88u;
            goto label_1bba88;
        }
    }
    ctx->pc = 0x1BBA84u;
label_1bba84:
    // 0x1bba84: 0xa0800078  sb          $zero, 0x78($a0)
    ctx->pc = 0x1bba84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 0));
label_1bba88:
    // 0x1bba88: 0x9283023a  lbu         $v1, 0x23A($s4)
    ctx->pc = 0x1bba88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 570)));
label_1bba8c:
    // 0x1bba8c: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
label_1bba90:
    if (ctx->pc == 0x1BBA90u) {
        ctx->pc = 0x1BBA94u;
        goto label_1bba94;
    }
    ctx->pc = 0x1BBA8Cu;
    {
        const bool branch_taken_0x1bba8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba8c) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBA94u;
label_1bba94:
    // 0x1bba94: 0x92840237  lbu         $a0, 0x237($s4)
    ctx->pc = 0x1bba94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 567)));
label_1bba98:
    // 0x1bba98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bba98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bba9c:
    // 0x1bba9c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1bbaa0:
    if (ctx->pc == 0x1BBAA0u) {
        ctx->pc = 0x1BBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA9Cu;
        // 0x1bbaa0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBAA4u;
        goto label_1bbaa4;
    }
    ctx->pc = 0x1BBA9Cu;
    {
        const bool branch_taken_0x1bba9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BBAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA9Cu;
        // 0x1bbaa0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba9c) {
            ctx->pc = 0x1BBAACu;
            goto label_1bbaac;
        }
    }
    ctx->pc = 0x1BBAA4u;
label_1bbaa4:
    // 0x1bbaa4: 0x14830051  bne         $a0, $v1, . + 4 + (0x51 << 2)
label_1bbaa8:
    if (ctx->pc == 0x1BBAA8u) {
        ctx->pc = 0x1BBAACu;
        goto label_1bbaac;
    }
    ctx->pc = 0x1BBAA4u;
    {
        const bool branch_taken_0x1bbaa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbaa4) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBAACu;
label_1bbaac:
    // 0x1bbaac: 0x0  nop
    ctx->pc = 0x1bbaacu;
    // NOP
label_1bbab0:
    // 0x1bbab0: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1bbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bbab4:
    // 0x1bbab4: 0x30420064  andi        $v0, $v0, 0x64
    ctx->pc = 0x1bbab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)100);
label_1bbab8:
    // 0x1bbab8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1bbabc:
    if (ctx->pc == 0x1BBABCu) {
        ctx->pc = 0x1BBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAB8u;
        // 0x1bbabc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBAC0u;
        goto label_1bbac0;
    }
    ctx->pc = 0x1BBAB8u;
    {
        const bool branch_taken_0x1bbab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAB8u;
        // 0x1bbabc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbab8) {
            ctx->pc = 0x1BBADCu;
            goto label_1bbadc;
        }
    }
    ctx->pc = 0x1BBAC0u;
label_1bbac0:
    // 0x1bbac0: 0xc06ff14  jal         func_1BFC50
label_1bbac4:
    if (ctx->pc == 0x1BBAC4u) {
        ctx->pc = 0x1BBAC8u;
        goto label_1bbac8;
    }
    ctx->pc = 0x1BBAC0u;
    SET_GPR_U32(ctx, 31, 0x1BBAC8u);
    ctx->pc = 0x1BFC50u;
    { ctx->pc = 0x1bfc50; return; }
    ctx->pc = 0x1BBAC8u;
label_1bbac8:
    // 0x1bbac8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bbacc:
    if (ctx->pc == 0x1BBACCu) {
        ctx->pc = 0x1BBAD0u;
        goto label_1bbad0;
    }
    ctx->pc = 0x1BBAC8u;
    {
        const bool branch_taken_0x1bbac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbac8) {
            ctx->pc = 0x1BBADCu;
            goto label_1bbadc;
        }
    }
    ctx->pc = 0x1BBAD0u;
label_1bbad0:
    // 0x1bbad0: 0x928301a2  lbu         $v1, 0x1A2($s4)
    ctx->pc = 0x1bbad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 418)));
label_1bbad4:
    // 0x1bbad4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1bbad8:
    if (ctx->pc == 0x1BBAD8u) {
        ctx->pc = 0x1BBADCu;
        goto label_1bbadc;
    }
    ctx->pc = 0x1BBAD4u;
    {
        const bool branch_taken_0x1bbad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbad4) {
            ctx->pc = 0x1BBB28u;
            goto label_1bbb28;
        }
    }
    ctx->pc = 0x1BBADCu;
label_1bbadc:
    // 0x1bbadc: 0x0  nop
    ctx->pc = 0x1bbadcu;
    // NOP
label_1bbae0:
    // 0x1bbae0: 0x92830218  lbu         $v1, 0x218($s4)
    ctx->pc = 0x1bbae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 536)));
label_1bbae4:
    // 0x1bbae4: 0x92820219  lbu         $v0, 0x219($s4)
    ctx->pc = 0x1bbae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 537)));
label_1bbae8:
    // 0x1bbae8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1bbae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bbaec:
    // 0x1bbaec: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1bbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1bbaf0:
    // 0x1bbaf0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1bbaf4:
    // 0x1bbaf4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1bbaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bbaf8:
    // 0x1bbaf8: 0xc04494c  jal         func_112530
label_1bbafc:
    if (ctx->pc == 0x1BBAFCu) {
        ctx->pc = 0x1BBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAF8u;
        // 0x1bbafc: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB00u;
        goto label_1bbb00;
    }
    ctx->pc = 0x1BBAF8u;
    SET_GPR_U32(ctx, 31, 0x1BBB00u);
    ctx->pc = 0x1BBAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBAF8u;
    // 0x1bbafc: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1BBAF8u, 0x1BBB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB00u;
label_1bbb00:
    // 0x1bbb00: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1bbb04:
    if (ctx->pc == 0x1BBB04u) {
        ctx->pc = 0x1BBB08u;
        goto label_1bbb08;
    }
    ctx->pc = 0x1BBB00u;
    {
        const bool branch_taken_0x1bbb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb00) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBB08u;
label_1bbb08:
    // 0x1bbb08: 0x928301a2  lbu         $v1, 0x1A2($s4)
    ctx->pc = 0x1bbb08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 418)));
label_1bbb0c:
    // 0x1bbb0c: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
label_1bbb10:
    if (ctx->pc == 0x1BBB10u) {
        ctx->pc = 0x1BBB14u;
        goto label_1bbb14;
    }
    ctx->pc = 0x1BBB0Cu;
    {
        const bool branch_taken_0x1bbb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb0c) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBB14u;
label_1bbb14:
    // 0x1bbb14: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1bbb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1bbb18:
    // 0x1bbb18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bbb1c:
    // 0x1bbb1c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bbb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1bbb20:
    // 0x1bbb20: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_1bbb24:
    if (ctx->pc == 0x1BBB24u) {
        ctx->pc = 0x1BBB28u;
        goto label_1bbb28;
    }
    ctx->pc = 0x1BBB20u;
    {
        const bool branch_taken_0x1bbb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb20) {
            ctx->pc = 0x1BBBECu;
            goto label_1bbbec;
        }
    }
    ctx->pc = 0x1BBB28u;
label_1bbb28:
    // 0x1bbb28: 0xa680021c  sh          $zero, 0x21C($s4)
    ctx->pc = 0x1bbb28u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 540), (uint16_t)GPR_U32(ctx, 0));
label_1bbb2c:
    // 0x1bbb2c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1bbb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1bbb30:
    // 0x1bbb30: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1bbb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bbb34:
    // 0x1bbb34: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1bbb34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_1bbb38:
    // 0x1bbb38: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
label_1bbb3c:
    if (ctx->pc == 0x1BBB3Cu) {
        ctx->pc = 0x1BBB40u;
        goto label_1bbb40;
    }
    ctx->pc = 0x1BBB38u;
    {
        const bool branch_taken_0x1bbb38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbb38) {
            ctx->pc = 0x1BBB54u;
            goto label_1bbb54;
        }
    }
    ctx->pc = 0x1BBB40u;
label_1bbb40:
    // 0x1bbb40: 0x92830233  lbu         $v1, 0x233($s4)
    ctx->pc = 0x1bbb40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 563)));
label_1bbb44:
    // 0x1bbb44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1bbb48:
    if (ctx->pc == 0x1BBB48u) {
        ctx->pc = 0x1BBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB44u;
        // 0x1bbb48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBB4Cu;
        goto label_1bbb4c;
    }
    ctx->pc = 0x1BBB44u;
    {
        const bool branch_taken_0x1bbb44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB44u;
        // 0x1bbb48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb44) {
            ctx->pc = 0x1BBB54u;
            goto label_1bbb54;
        }
    }
    ctx->pc = 0x1BBB4Cu;
label_1bbb4c:
    // 0x1bbb4c: 0xc0448fc  jal         func_1123F0
label_1bbb50:
    if (ctx->pc == 0x1BBB50u) {
        ctx->pc = 0x1BBB54u;
        goto label_1bbb54;
    }
    ctx->pc = 0x1BBB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BBB54u);
    ctx->pc = 0x1123F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1123F0u, 0x1BBB4Cu, 0x1BBB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB54u;
label_1bbb54:
    // 0x1bbb54: 0x0  nop
    ctx->pc = 0x1bbb54u;
    // NOP
label_1bbb58:
    // 0x1bbb58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbb5c:
    // 0x1bbb5c: 0xa284023a  sb          $a0, 0x23A($s4)
    ctx->pc = 0x1bbb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 570), (uint8_t)GPR_U32(ctx, 4));
label_1bbb60:
    // 0x1bbb60: 0x92830232  lbu         $v1, 0x232($s4)
    ctx->pc = 0x1bbb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 562)));
label_1bbb64:
    // 0x1bbb64: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
label_1bbb68:
    if (ctx->pc == 0x1BBB68u) {
        ctx->pc = 0x1BBB6Cu;
        goto label_1bbb6c;
    }
    ctx->pc = 0x1BBB64u;
    {
        const bool branch_taken_0x1bbb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bbb64) {
            ctx->pc = 0x1BBBC0u;
            goto label_1bbbc0;
        }
    }
    ctx->pc = 0x1BBB6Cu;
label_1bbb6c:
    // 0x1bbb6c: 0x92840238  lbu         $a0, 0x238($s4)
    ctx->pc = 0x1bbb6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 568)));
label_1bbb70:
    // 0x1bbb70: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bbb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1bbb74:
    // 0x1bbb74: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1bbb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1bbb78:
    // 0x1bbb78: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x1bbb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
label_1bbb7c:
    // 0x1bbb7c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1bbb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1bbb80:
    // 0x1bbb80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bbb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bbb84:
    // 0x1bbb84: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bbb84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bbb88:
    // 0x1bbb88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bbb8c:
    // 0x1bbb8c: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x1bbb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_1bbb90:
    // 0x1bbb90: 0x90633697  lbu         $v1, 0x3697($v1)
    ctx->pc = 0x1bbb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13975)));
label_1bbb94:
    // 0x1bbb94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bbb98:
    if (ctx->pc == 0x1BBB98u) {
        ctx->pc = 0x1BBB9Cu;
        goto label_1bbb9c;
    }
    ctx->pc = 0x1BBB94u;
    {
        const bool branch_taken_0x1bbb94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb94) {
            ctx->pc = 0x1BBBA4u;
            goto label_1bbba4;
        }
    }
    ctx->pc = 0x1BBB9Cu;
label_1bbb9c:
    // 0x1bbb9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bbb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1bbba0:
    // 0x1bbba0: 0xa0830077  sb          $v1, 0x77($a0)
    ctx->pc = 0x1bbba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 119), (uint8_t)GPR_U32(ctx, 3));
label_1bbba4:
    // 0x1bbba4: 0x0  nop
    ctx->pc = 0x1bbba4u;
    // NOP
label_1bbba8:
    // 0x1bbba8: 0x92830233  lbu         $v1, 0x233($s4)
    ctx->pc = 0x1bbba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 563)));
label_1bbbac:
    // 0x1bbbac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bbbb0:
    // 0x1bbbb0: 0x90630079  lbu         $v1, 0x79($v1)
    ctx->pc = 0x1bbbb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 121)));
label_1bbbb4:
    // 0x1bbbb4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1bbbb8:
    if (ctx->pc == 0x1BBBB8u) {
        ctx->pc = 0x1BBBBCu;
        goto label_1bbbbc;
    }
    ctx->pc = 0x1BBBB4u;
    {
        const bool branch_taken_0x1bbbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbbb4) {
            ctx->pc = 0x1BBBC0u;
            goto label_1bbbc0;
        }
    }
    ctx->pc = 0x1BBBBCu;
label_1bbbbc:
    // 0x1bbbbc: 0xa0800078  sb          $zero, 0x78($a0)
    ctx->pc = 0x1bbbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 0));
label_1bbbc0:
    // 0x1bbbc0: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bbbc4:
    // 0x1bbbc4: 0xa2830236  sb          $v1, 0x236($s4)
    ctx->pc = 0x1bbbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 566), (uint8_t)GPR_U32(ctx, 3));
label_1bbbc8:
    // 0x1bbbc8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bbbcc:
    // 0x1bbbcc: 0xa2830235  sb          $v1, 0x235($s4)
    ctx->pc = 0x1bbbccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 565), (uint8_t)GPR_U32(ctx, 3));
label_1bbbd0:
    // 0x1bbbd0: 0x92840231  lbu         $a0, 0x231($s4)
    ctx->pc = 0x1bbbd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 561)));
label_1bbbd4:
    // 0x1bbbd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bbbd8:
    // 0x1bbbd8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1bbbdc:
    if (ctx->pc == 0x1BBBDCu) {
        ctx->pc = 0x1BBBE0u;
        goto label_1bbbe0;
    }
    ctx->pc = 0x1BBBD8u;
    {
        const bool branch_taken_0x1bbbd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbbd8) {
            ctx->pc = 0x1BBBE8u;
            goto label_1bbbe8;
        }
    }
    ctx->pc = 0x1BBBE0u;
label_1bbbe0:
    // 0x1bbbe0: 0xc0542d8  jal         func_150B60
label_1bbbe4:
    if (ctx->pc == 0x1BBBE4u) {
        ctx->pc = 0x1BBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBE0u;
        // 0x1bbbe4: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBBE8u;
        goto label_1bbbe8;
    }
    ctx->pc = 0x1BBBE0u;
    SET_GPR_U32(ctx, 31, 0x1BBBE8u);
    ctx->pc = 0x1BBBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBE0u;
    // 0x1bbbe4: 0x8e840038  lw          $a0, 0x38($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150B60u;
    { ctx->pc = 0x150b60; return; }
    ctx->pc = 0x1BBBE8u;
label_1bbbe8:
    // 0x1bbbe8: 0xa280023b  sb          $zero, 0x23B($s4)
    ctx->pc = 0x1bbbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 571), (uint8_t)GPR_U32(ctx, 0));
label_1bbbec:
    // 0x1bbbec: 0x0  nop
    ctx->pc = 0x1bbbecu;
    // NOP
label_1bbbf0:
    // 0x1bbbf0: 0x9283023a  lbu         $v1, 0x23A($s4)
    ctx->pc = 0x1bbbf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 570)));
label_1bbbf4:
    // 0x1bbbf4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bbbf8:
    if (ctx->pc == 0x1BBBF8u) {
        ctx->pc = 0x1BBBFCu;
        goto label_1bbbfc;
    }
    ctx->pc = 0x1BBBF4u;
    {
        const bool branch_taken_0x1bbbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbbf4) {
            ctx->pc = 0x1BBC08u;
            goto label_1bbc08;
        }
    }
    ctx->pc = 0x1BBBFCu;
label_1bbbfc:
    // 0x1bbbfc: 0x9283023b  lbu         $v1, 0x23B($s4)
    ctx->pc = 0x1bbbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 571)));
label_1bbc00:
    // 0x1bbc00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bbc04:
    if (ctx->pc == 0x1BBC04u) {
        ctx->pc = 0x1BBC08u;
        goto label_1bbc08;
    }
    ctx->pc = 0x1BBC00u;
    {
        const bool branch_taken_0x1bbc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc00) {
            ctx->pc = 0x1BBC10u;
            goto label_1bbc10;
        }
    }
    ctx->pc = 0x1BBC08u;
label_1bbc08:
    // 0x1bbc08: 0x10000012  b           . + 4 + (0x12 << 2)
label_1bbc0c:
    if (ctx->pc == 0x1BBC0Cu) {
        ctx->pc = 0x1BBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC08u;
        // 0x1bbc0c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC10u;
        goto label_1bbc10;
    }
    ctx->pc = 0x1BBC08u;
    {
        const bool branch_taken_0x1bbc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC08u;
        // 0x1bbc0c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc08) {
            ctx->pc = 0x1BBC54u;
            goto label_1bbc54;
        }
    }
    ctx->pc = 0x1BBC10u;
label_1bbc10:
    // 0x1bbc10: 0x9223002d  lbu         $v1, 0x2D($s1)
    ctx->pc = 0x1bbc10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
label_1bbc14:
    // 0x1bbc14: 0x14700003  bne         $v1, $s0, . + 4 + (0x3 << 2)
label_1bbc18:
    if (ctx->pc == 0x1BBC18u) {
        ctx->pc = 0x1BBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC14u;
        // 0x1bbc18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC1Cu;
        goto label_1bbc1c;
    }
    ctx->pc = 0x1BBC14u;
    {
        const bool branch_taken_0x1bbc14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1BBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC14u;
        // 0x1bbc18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc14) {
            ctx->pc = 0x1BBC24u;
            goto label_1bbc24;
        }
    }
    ctx->pc = 0x1BBC1Cu;
label_1bbc1c:
    // 0x1bbc1c: 0xc06ef3c  jal         func_1BBCF0
label_1bbc20:
    if (ctx->pc == 0x1BBC20u) {
        ctx->pc = 0x1BBC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC1Cu;
        // 0x1bbc20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC24u;
        goto label_1bbc24;
    }
    ctx->pc = 0x1BBC1Cu;
    SET_GPR_U32(ctx, 31, 0x1BBC24u);
    ctx->pc = 0x1BBC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC1Cu;
    // 0x1bbc20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCF0u;
    goto label_1bbcf0;
    ctx->pc = 0x1BBC24u;
label_1bbc24:
    // 0x1bbc24: 0x0  nop
    ctx->pc = 0x1bbc24u;
    // NOP
label_1bbc28:
    // 0x1bbc28: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1bbc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1bbc2c:
    // 0x1bbc2c: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1bbc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bbc30:
    // 0x1bbc30: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bbc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bbc34:
    // 0x1bbc34: 0xa0850238  sb          $a1, 0x238($a0)
    ctx->pc = 0x1bbc34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 568), (uint8_t)GPR_U32(ctx, 5));
label_1bbc38:
    // 0x1bbc38: 0xa0830233  sb          $v1, 0x233($a0)
    ctx->pc = 0x1bbc38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 563), (uint8_t)GPR_U32(ctx, 3));
label_1bbc3c:
    // 0x1bbc3c: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x1bbc3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
label_1bbc40:
    // 0x1bbc40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bbc44:
    if (ctx->pc == 0x1BBC44u) {
        ctx->pc = 0x1BBC48u;
        goto label_1bbc48;
    }
    ctx->pc = 0x1BBC40u;
    {
        const bool branch_taken_0x1bbc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc40) {
            ctx->pc = 0x1BBC50u;
            goto label_1bbc50;
        }
    }
    ctx->pc = 0x1BBC48u;
label_1bbc48:
    // 0x1bbc48: 0xc0452cc  jal         func_114B30
label_1bbc4c:
    if (ctx->pc == 0x1BBC4Cu) {
        ctx->pc = 0x1BBC50u;
        goto label_1bbc50;
    }
    ctx->pc = 0x1BBC48u;
    SET_GPR_U32(ctx, 31, 0x1BBC50u);
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x1BBC48u, 0x1BBC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC50u;
label_1bbc50:
    // 0x1bbc50: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1bbc50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1bbc54:
    // 0x1bbc54: 0x0  nop
    ctx->pc = 0x1bbc54u;
    // NOP
label_1bbc58:
    // 0x1bbc58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bbc58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bbc5c:
    // 0x1bbc5c: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x1bbc5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bbc60:
    // 0x1bbc60: 0x1460ff62  bnez        $v1, . + 4 + (-0x9E << 2)
label_1bbc64:
    if (ctx->pc == 0x1BBC64u) {
        ctx->pc = 0x1BBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC60u;
        // 0x1bbc64: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBC68u;
        goto label_1bbc68;
    }
    ctx->pc = 0x1BBC60u;
    {
        const bool branch_taken_0x1bbc60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC60u;
        // 0x1bbc64: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc60) {
            ctx->pc = 0x1BB9ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb9ec;
        }
    }
    ctx->pc = 0x1BBC68u;
label_1bbc68:
    // 0x1bbc68: 0x92a3002a  lbu         $v1, 0x2A($s5)
    ctx->pc = 0x1bbc68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 42)));
label_1bbc6c:
    // 0x1bbc6c: 0x10770002  beq         $v1, $s7, . + 4 + (0x2 << 2)
label_1bbc70:
    if (ctx->pc == 0x1BBC70u) {
        ctx->pc = 0x1BBC74u;
        goto label_1bbc74;
    }
    ctx->pc = 0x1BBC6Cu;
    {
        const bool branch_taken_0x1bbc6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x1bbc6c) {
            ctx->pc = 0x1BBC78u;
            goto label_1bbc78;
        }
    }
    ctx->pc = 0x1BBC74u;
label_1bbc74:
    // 0x1bbc74: 0xa2b7002a  sb          $s7, 0x2A($s5)
    ctx->pc = 0x1bbc74u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 42), (uint8_t)GPR_U32(ctx, 23));
label_1bbc78:
    // 0x1bbc78: 0x86a30030  lh          $v1, 0x30($s5)
    ctx->pc = 0x1bbc78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 48)));
label_1bbc7c:
    // 0x1bbc7c: 0x2c3082a  slt         $at, $s6, $v1
    ctx->pc = 0x1bbc7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1bbc80:
    // 0x1bbc80: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1bbc84:
    if (ctx->pc == 0x1BBC84u) {
        ctx->pc = 0x1BBC88u;
        goto label_1bbc88;
    }
    ctx->pc = 0x1BBC80u;
    {
        const bool branch_taken_0x1bbc80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc80) {
            ctx->pc = 0x1BBCB0u;
            goto label_1bbcb0;
        }
    }
    ctx->pc = 0x1BBC88u;
label_1bbc88:
    // 0x1bbc88: 0x92a40036  lbu         $a0, 0x36($s5)
    ctx->pc = 0x1bbc88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 54)));
label_1bbc8c:
    // 0x1bbc8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bbc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bbc90:
    // 0x1bbc90: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_1bbc94:
    if (ctx->pc == 0x1BBC94u) {
        ctx->pc = 0x1BBC98u;
        goto label_1bbc98;
    }
    ctx->pc = 0x1BBC90u;
    {
        const bool branch_taken_0x1bbc90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbc90) {
            ctx->pc = 0x1BBCB0u;
            goto label_1bbcb0;
        }
    }
    ctx->pc = 0x1BBC98u;
label_1bbc98:
    // 0x1bbc98: 0xa2a00036  sb          $zero, 0x36($s5)
    ctx->pc = 0x1bbc98u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 54), (uint8_t)GPR_U32(ctx, 0));
label_1bbc9c:
    // 0x1bbc9c: 0x86a3002c  lh          $v1, 0x2C($s5)
    ctx->pc = 0x1bbc9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
label_1bbca0:
    // 0x1bbca0: 0x28610bb9  slti        $at, $v1, 0xBB9
    ctx->pc = 0x1bbca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3001) ? 1 : 0);
label_1bbca4:
    // 0x1bbca4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bbca8:
    if (ctx->pc == 0x1BBCA8u) {
        ctx->pc = 0x1BBCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCA4u;
        // 0x1bbca8: 0x24030bb8  addiu       $v1, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBCACu;
        goto label_1bbcac;
    }
    ctx->pc = 0x1BBCA4u;
    {
        const bool branch_taken_0x1bbca4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCA4u;
        // 0x1bbca8: 0x24030bb8  addiu       $v1, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbca4) {
            ctx->pc = 0x1BBCB0u;
            goto label_1bbcb0;
        }
    }
    ctx->pc = 0x1BBCACu;
label_1bbcac:
    // 0x1bbcac: 0xa6a3002c  sh          $v1, 0x2C($s5)
    ctx->pc = 0x1bbcacu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 44), (uint16_t)GPR_U32(ctx, 3));
label_1bbcb0:
    // 0x1bbcb0: 0xa6b60032  sh          $s6, 0x32($s5)
    ctx->pc = 0x1bbcb0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 50), (uint16_t)GPR_U32(ctx, 22));
label_1bbcb4:
    // 0x1bbcb4: 0xa6b60030  sh          $s6, 0x30($s5)
    ctx->pc = 0x1bbcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 48), (uint16_t)GPR_U32(ctx, 22));
label_1bbcb8:
    // 0x1bbcb8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bbcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1bbcbc:
    // 0x1bbcbc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bbcbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bbcc0:
    // 0x1bbcc0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bbcc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bbcc4:
    // 0x1bbcc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bbcc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bbcc8:
    // 0x1bbcc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bbcc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bbccc:
    // 0x1bbccc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bbcccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bbcd0:
    // 0x1bbcd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bbcd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bbcd4:
    // 0x1bbcd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbcd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bbcd8:
    // 0x1bbcd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbcd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbcdc:
    // 0x1bbcdc: 0x3e00008  jr          $ra
label_1bbce0:
    if (ctx->pc == 0x1BBCE0u) {
        ctx->pc = 0x1BBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCDCu;
        // 0x1bbce0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBCE4u;
        goto label_1bbce4;
    }
    ctx->pc = 0x1BBCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCDCu;
        // 0x1bbce0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBCE4u;
label_1bbce4:
    // 0x1bbce4: 0x0  nop
    ctx->pc = 0x1bbce4u;
    // NOP
label_1bbce8:
    // 0x1bbce8: 0x0  nop
    ctx->pc = 0x1bbce8u;
    // NOP
label_1bbcec:
    // 0x1bbcec: 0x0  nop
    ctx->pc = 0x1bbcecu;
    // NOP
label_1bbcf0:
    // 0x1bbcf0: 0x90a6002d  lbu         $a2, 0x2D($a1)
    ctx->pc = 0x1bbcf0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
label_1bbcf4:
    // 0x1bbcf4: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x1bbcf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bbcf8:
    // 0x1bbcf8: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_1bbcfc:
    if (ctx->pc == 0x1BBCFCu) {
        ctx->pc = 0x1BBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCF8u;
        // 0x1bbcfc: 0x64080  sll         $t0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD00u;
        goto label_1bbd00;
    }
    ctx->pc = 0x1BBCF8u;
    {
        const bool branch_taken_0x1bbcf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCF8u;
        // 0x1bbcfc: 0x64080  sll         $t0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbcf8) {
            ctx->pc = 0x1BBDC8u;
            goto label_1bbdc8;
        }
    }
    ctx->pc = 0x1BBD00u;
label_1bbd00:
    // 0x1bbd00: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1bbd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1bbd04:
    // 0x1bbd04: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1bbd04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bbd08:
    // 0x1bbd08: 0x10e0002b  beqz        $a3, . + 4 + (0x2B << 2)
label_1bbd0c:
    if (ctx->pc == 0x1BBD0Cu) {
        ctx->pc = 0x1BBD10u;
        goto label_1bbd10;
    }
    ctx->pc = 0x1BBD08u;
    {
        const bool branch_taken_0x1bbd08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd08) {
            ctx->pc = 0x1BBDB8u;
            goto label_1bbdb8;
        }
    }
    ctx->pc = 0x1BBD10u;
label_1bbd10:
    // 0x1bbd10: 0x90e3023a  lbu         $v1, 0x23A($a3)
    ctx->pc = 0x1bbd10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 570)));
label_1bbd14:
    // 0x1bbd14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bbd18:
    if (ctx->pc == 0x1BBD18u) {
        ctx->pc = 0x1BBD1Cu;
        goto label_1bbd1c;
    }
    ctx->pc = 0x1BBD14u;
    {
        const bool branch_taken_0x1bbd14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd14) {
            ctx->pc = 0x1BBD28u;
            goto label_1bbd28;
        }
    }
    ctx->pc = 0x1BBD1Cu;
label_1bbd1c:
    // 0x1bbd1c: 0x90e3023b  lbu         $v1, 0x23B($a3)
    ctx->pc = 0x1bbd1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 571)));
label_1bbd20:
    // 0x1bbd20: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_1bbd24:
    if (ctx->pc == 0x1BBD24u) {
        ctx->pc = 0x1BBD28u;
        goto label_1bbd28;
    }
    ctx->pc = 0x1BBD20u;
    {
        const bool branch_taken_0x1bbd20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd20) {
            ctx->pc = 0x1BBDB8u;
            goto label_1bbdb8;
        }
    }
    ctx->pc = 0x1BBD28u;
label_1bbd28:
    // 0x1bbd28: 0xa0a6002d  sb          $a2, 0x2D($a1)
    ctx->pc = 0x1bbd28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 45), (uint8_t)GPR_U32(ctx, 6));
label_1bbd2c:
    // 0x1bbd2c: 0x90850036  lbu         $a1, 0x36($a0)
    ctx->pc = 0x1bbd2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
label_1bbd30:
    // 0x1bbd30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bbd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bbd34:
    // 0x1bbd34: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_1bbd38:
    if (ctx->pc == 0x1BBD38u) {
        ctx->pc = 0x1BBD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD34u;
        // 0x1bbd38: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBD3Cu;
        goto label_1bbd3c;
    }
    ctx->pc = 0x1BBD34u;
    {
        const bool branch_taken_0x1bbd34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BBD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD34u;
        // 0x1bbd38: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd34) {
            ctx->pc = 0x1BBD44u;
            goto label_1bbd44;
        }
    }
    ctx->pc = 0x1BBD3Cu;
label_1bbd3c:
    // 0x1bbd3c: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_1bbd40:
    if (ctx->pc == 0x1BBD40u) {
        ctx->pc = 0x1BBD44u;
        goto label_1bbd44;
    }
    ctx->pc = 0x1BBD3Cu;
    {
        const bool branch_taken_0x1bbd3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbd3c) {
            ctx->pc = 0x1BBD54u;
            goto label_1bbd54;
        }
    }
    ctx->pc = 0x1BBD44u;
label_1bbd44:
    // 0x1bbd44: 0xc4e00150  lwc1        $f0, 0x150($a3)
    ctx->pc = 0x1bbd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbd48:
    // 0x1bbd48: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1bbd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_1bbd4c:
    // 0x1bbd4c: 0xc4e00158  lwc1        $f0, 0x158($a3)
    ctx->pc = 0x1bbd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbd50:
    // 0x1bbd50: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1bbd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1bbd54:
    // 0x1bbd54: 0xc4e00050  lwc1        $f0, 0x50($a3)
    ctx->pc = 0x1bbd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbd58:
    // 0x1bbd58: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x1bbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
label_1bbd5c:
    // 0x1bbd5c: 0x34668bad  ori         $a2, $v1, 0x8BAD
    ctx->pc = 0x1bbd5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
label_1bbd60:
    // 0x1bbd60: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bbd60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bbd64:
    // 0x1bbd64: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1bbd64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1bbd68:
    // 0x1bbd68: 0x0  nop
    ctx->pc = 0x1bbd68u;
    // NOP
label_1bbd6c:
    // 0x1bbd6c: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x1bbd6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bbd70:
    // 0x1bbd70: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x1bbd70u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1bbd74:
    // 0x1bbd74: 0x0  nop
    ctx->pc = 0x1bbd74u;
    // NOP
label_1bbd78:
    // 0x1bbd78: 0x1810  mfhi        $v1
    ctx->pc = 0x1bbd78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bbd7c:
    // 0x1bbd7c: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1bbd7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1bbd80:
    // 0x1bbd80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bbd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bbd84:
    // 0x1bbd84: 0xa0830026  sb          $v1, 0x26($a0)
    ctx->pc = 0x1bbd84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 3));
label_1bbd88:
    // 0x1bbd88: 0xc4e00058  lwc1        $f0, 0x58($a3)
    ctx->pc = 0x1bbd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbd8c:
    // 0x1bbd8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bbd8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bbd90:
    // 0x1bbd90: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1bbd90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1bbd94:
    // 0x1bbd94: 0x0  nop
    ctx->pc = 0x1bbd94u;
    // NOP
label_1bbd98:
    // 0x1bbd98: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x1bbd98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bbd9c:
    // 0x1bbd9c: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x1bbd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1bbda0:
    // 0x1bbda0: 0x0  nop
    ctx->pc = 0x1bbda0u;
    // NOP
label_1bbda4:
    // 0x1bbda4: 0x1810  mfhi        $v1
    ctx->pc = 0x1bbda4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bbda8:
    // 0x1bbda8: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1bbda8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1bbdac:
    // 0x1bbdac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bbdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bbdb0:
    // 0x1bbdb0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bbdb4:
    if (ctx->pc == 0x1BBDB4u) {
        ctx->pc = 0x1BBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDB0u;
        // 0x1bbdb4: 0xa0830027  sb          $v1, 0x27($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDB8u;
        goto label_1bbdb8;
    }
    ctx->pc = 0x1BBDB0u;
    {
        const bool branch_taken_0x1bbdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDB0u;
        // 0x1bbdb4: 0xa0830027  sb          $v1, 0x27($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdb0) {
            ctx->pc = 0x1BBDC8u;
            goto label_1bbdc8;
        }
    }
    ctx->pc = 0x1BBDB8u;
label_1bbdb8:
    // 0x1bbdb8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bbdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1bbdbc:
    // 0x1bbdbc: 0x28c30009  slti        $v1, $a2, 0x9
    ctx->pc = 0x1bbdbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bbdc0:
    // 0x1bbdc0: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
label_1bbdc4:
    if (ctx->pc == 0x1BBDC4u) {
        ctx->pc = 0x1BBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDC0u;
        // 0x1bbdc4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBDC8u;
        goto label_1bbdc8;
    }
    ctx->pc = 0x1BBDC0u;
    {
        const bool branch_taken_0x1bbdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDC0u;
        // 0x1bbdc4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdc0) {
            ctx->pc = 0x1BBD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbd00;
        }
    }
    ctx->pc = 0x1BBDC8u;
label_1bbdc8:
    // 0x1bbdc8: 0x3e00008  jr          $ra
label_1bbdcc:
    if (ctx->pc == 0x1BBDCCu) {
        ctx->pc = 0x1BBDD0u;
        goto label_1bbdd0;
    }
    ctx->pc = 0x1BBDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBDD0u;
label_1bbdd0:
    // 0x1bbdd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bbdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1bbdd4:
    // 0x1bbdd4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1bbdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1bbdd8:
    // 0x1bbdd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bbdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1bbddc:
    // 0x1bbddc: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x1bbddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_1bbde0:
    // 0x1bbde0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bbde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bbde4:
    // 0x1bbde4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bbde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bbde8:
    // 0x1bbde8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bbde8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bbdec:
    // 0x1bbdec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bbdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bbdf0:
    // 0x1bbdf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bbdf4:
    // 0x1bbdf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bbdf8:
    // 0x1bbdf8: 0x9086002c  lbu         $a2, 0x2C($a0)
    ctx->pc = 0x1bbdf8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_1bbdfc:
    // 0x1bbdfc: 0x9084002f  lbu         $a0, 0x2F($a0)
    ctx->pc = 0x1bbdfcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 47)));
label_1bbe00:
    // 0x1bbe00: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x1bbe00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1bbe04:
    // 0x1bbe04: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x1bbe04u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1bbe08:
    // 0x1bbe08: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1bbe08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bbe0c:
    // 0x1bbe0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bbe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bbe10:
    // 0x1bbe10: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1bbe10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1bbe14:
    // 0x1bbe14: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1bbe14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1bbe18:
    // 0x1bbe18: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1bbe18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bbe1c:
    // 0x1bbe1c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1bbe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1bbe20:
    // 0x1bbe20: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bbe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1bbe24:
    // 0x1bbe24: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1bbe24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1bbe28:
    // 0x1bbe28: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1bbe28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bbe2c:
    // 0x1bbe2c: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x1bbe2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_1bbe30:
    // 0x1bbe30: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_1bbe34:
    if (ctx->pc == 0x1BBE34u) {
        ctx->pc = 0x1BBE38u;
        goto label_1bbe38;
    }
    ctx->pc = 0x1BBE30u;
    {
        const bool branch_taken_0x1bbe30 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1bbe30) {
            ctx->pc = 0x1BBE54u;
            goto label_1bbe54;
        }
    }
    ctx->pc = 0x1BBE38u;
label_1bbe38:
    // 0x1bbe38: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1bbe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1bbe3c:
    // 0x1bbe3c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1bbe3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1bbe40:
    // 0x1bbe40: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_1bbe44:
    if (ctx->pc == 0x1BBE44u) {
        ctx->pc = 0x1BBE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE40u;
        // 0x1bbe44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE48u;
        goto label_1bbe48;
    }
    ctx->pc = 0x1BBE40u;
    {
        const bool branch_taken_0x1bbe40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE40u;
        // 0x1bbe44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe40) {
            ctx->pc = 0x1BBEF8u;
            goto label_1bbef8;
        }
    }
    ctx->pc = 0x1BBE48u;
label_1bbe48:
    // 0x1bbe48: 0x8603002e  lh          $v1, 0x2E($s0)
    ctx->pc = 0x1bbe48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_1bbe4c:
    // 0x1bbe4c: 0x1c60002a  bgtz        $v1, . + 4 + (0x2A << 2)
label_1bbe50:
    if (ctx->pc == 0x1BBE50u) {
        ctx->pc = 0x1BBE54u;
        goto label_1bbe54;
    }
    ctx->pc = 0x1BBE4Cu;
    {
        const bool branch_taken_0x1bbe4c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1bbe4c) {
            ctx->pc = 0x1BBEF8u;
            goto label_1bbef8;
        }
    }
    ctx->pc = 0x1BBE54u;
label_1bbe54:
    // 0x1bbe54: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x1bbe54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
label_1bbe58:
    // 0x1bbe58: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1bbe58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bbe5c:
    // 0x1bbe5c: 0xa600002e  sh          $zero, 0x2E($s0)
    ctx->pc = 0x1bbe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
label_1bbe60:
    // 0x1bbe60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bbe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbe64:
    // 0x1bbe64: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x1bbe64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
label_1bbe68:
    // 0x1bbe68: 0xa284002f  sb          $a0, 0x2F($s4)
    ctx->pc = 0x1bbe68u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 47), (uint8_t)GPR_U32(ctx, 4));
label_1bbe6c:
    // 0x1bbe6c: 0xa283002e  sb          $v1, 0x2E($s4)
    ctx->pc = 0x1bbe6cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 46), (uint8_t)GPR_U32(ctx, 3));
label_1bbe70:
    // 0x1bbe70: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1bbe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1bbe74:
    // 0x1bbe74: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1bbe74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1bbe78:
    // 0x1bbe78: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1bbe7c:
    if (ctx->pc == 0x1BBE7Cu) {
        ctx->pc = 0x1BBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE78u;
        // 0x1bbe7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE80u;
        goto label_1bbe80;
    }
    ctx->pc = 0x1BBE78u;
    {
        const bool branch_taken_0x1bbe78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE78u;
        // 0x1bbe7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe78) {
            ctx->pc = 0x1BBED0u;
            goto label_1bbed0;
        }
    }
    ctx->pc = 0x1BBE80u;
label_1bbe80:
    // 0x1bbe80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bbe80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbe84:
    // 0x1bbe84: 0x0  nop
    ctx->pc = 0x1bbe84u;
    // NOP
label_1bbe88:
    // 0x1bbe88: 0x2929821  addu        $s3, $s4, $s2
    ctx->pc = 0x1bbe88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1bbe8c:
    // 0x1bbe8c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1bbe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1bbe90:
    // 0x1bbe90: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1bbe94:
    if (ctx->pc == 0x1BBE94u) {
        ctx->pc = 0x1BBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE90u;
        // 0x1bbe94: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBE98u;
        goto label_1bbe98;
    }
    ctx->pc = 0x1BBE90u;
    {
        const bool branch_taken_0x1bbe90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBE90u;
        // 0x1bbe94: 0x2405004a  addiu       $a1, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbe90) {
            ctx->pc = 0x1BBEBCu;
            goto label_1bbebc;
        }
    }
    ctx->pc = 0x1BBE98u;
label_1bbe98:
    // 0x1bbe98: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bbe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bbe9c:
    // 0x1bbe9c: 0xa0850238  sb          $a1, 0x238($a0)
    ctx->pc = 0x1bbe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 568), (uint8_t)GPR_U32(ctx, 5));
label_1bbea0:
    // 0x1bbea0: 0xa0830233  sb          $v1, 0x233($a0)
    ctx->pc = 0x1bbea0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 563), (uint8_t)GPR_U32(ctx, 3));
label_1bbea4:
    // 0x1bbea4: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x1bbea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
label_1bbea8:
    // 0x1bbea8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bbeac:
    if (ctx->pc == 0x1BBEACu) {
        ctx->pc = 0x1BBEB0u;
        goto label_1bbeb0;
    }
    ctx->pc = 0x1BBEA8u;
    {
        const bool branch_taken_0x1bbea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbea8) {
            ctx->pc = 0x1BBEB8u;
            goto label_1bbeb8;
        }
    }
    ctx->pc = 0x1BBEB0u;
label_1bbeb0:
    // 0x1bbeb0: 0xc0452cc  jal         func_114B30
label_1bbeb4:
    if (ctx->pc == 0x1BBEB4u) {
        ctx->pc = 0x1BBEB8u;
        goto label_1bbeb8;
    }
    ctx->pc = 0x1BBEB0u;
    SET_GPR_U32(ctx, 31, 0x1BBEB8u);
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x1BBEB0u, 0x1BBEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEB8u;
label_1bbeb8:
    // 0x1bbeb8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1bbeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1bbebc:
    // 0x1bbebc: 0x0  nop
    ctx->pc = 0x1bbebcu;
    // NOP
label_1bbec0:
    // 0x1bbec0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bbec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bbec4:
    // 0x1bbec4: 0x2a230009  slti        $v1, $s1, 0x9
    ctx->pc = 0x1bbec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bbec8:
    // 0x1bbec8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_1bbecc:
    if (ctx->pc == 0x1BBECCu) {
        ctx->pc = 0x1BBECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEC8u;
        // 0x1bbecc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBED0u;
        goto label_1bbed0;
    }
    ctx->pc = 0x1BBEC8u;
    {
        const bool branch_taken_0x1bbec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEC8u;
        // 0x1bbecc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbec8) {
            ctx->pc = 0x1BBE84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbe84;
        }
    }
    ctx->pc = 0x1BBED0u;
label_1bbed0:
    // 0x1bbed0: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bbed4:
    // 0x1bbed4: 0xa2030039  sb          $v1, 0x39($s0)
    ctx->pc = 0x1bbed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 3));
label_1bbed8:
    // 0x1bbed8: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x1bbed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_1bbedc:
    // 0x1bbedc: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
label_1bbee0:
    if (ctx->pc == 0x1BBEE0u) {
        ctx->pc = 0x1BBEE4u;
        goto label_1bbee4;
    }
    ctx->pc = 0x1BBEDCu;
    {
        const bool branch_taken_0x1bbedc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1bbedc) {
            ctx->pc = 0x1BBF24u;
            goto label_1bbf24;
        }
    }
    ctx->pc = 0x1BBEE4u;
label_1bbee4:
    // 0x1bbee4: 0xa6000032  sh          $zero, 0x32($s0)
    ctx->pc = 0x1bbee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bbee8:
    // 0x1bbee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bbee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbeec:
    // 0x1bbeec: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x1bbeecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
label_1bbef0:
    // 0x1bbef0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bbef4:
    if (ctx->pc == 0x1BBEF4u) {
        ctx->pc = 0x1BBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEF0u;
        // 0x1bbef4: 0xa203003d  sb          $v1, 0x3D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBEF8u;
        goto label_1bbef8;
    }
    ctx->pc = 0x1BBEF0u;
    {
        const bool branch_taken_0x1bbef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEF0u;
        // 0x1bbef4: 0xa203003d  sb          $v1, 0x3D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbef0) {
            ctx->pc = 0x1BBF24u;
            goto label_1bbf24;
        }
    }
    ctx->pc = 0x1BBEF8u;
label_1bbef8:
    // 0x1bbef8: 0xc06fe90  jal         func_1BFA40
label_1bbefc:
    if (ctx->pc == 0x1BBEFCu) {
        ctx->pc = 0x1BBF00u;
        goto label_1bbf00;
    }
    ctx->pc = 0x1BBEF8u;
    SET_GPR_U32(ctx, 31, 0x1BBF00u);
    ctx->pc = 0x1BFA40u;
    { ctx->pc = 0x1bfa40; return; }
    ctx->pc = 0x1BBF00u;
label_1bbf00:
    // 0x1bbf00: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1bbf04:
    if (ctx->pc == 0x1BBF04u) {
        ctx->pc = 0x1BBF08u;
        goto label_1bbf08;
    }
    ctx->pc = 0x1BBF00u;
    {
        const bool branch_taken_0x1bbf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf00) {
            ctx->pc = 0x1BBF24u;
            goto label_1bbf24;
        }
    }
    ctx->pc = 0x1BBF08u;
label_1bbf08:
    // 0x1bbf08: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x1bbf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1bbf0c:
    // 0x1bbf0c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1bbf0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1bbf10:
    // 0x1bbf10: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bbf14:
    if (ctx->pc == 0x1BBF14u) {
        ctx->pc = 0x1BBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF10u;
        // 0x1bbf14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF18u;
        goto label_1bbf18;
    }
    ctx->pc = 0x1BBF10u;
    {
        const bool branch_taken_0x1bbf10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF10u;
        // 0x1bbf14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf10) {
            ctx->pc = 0x1BBF24u;
            goto label_1bbf24;
        }
    }
    ctx->pc = 0x1BBF18u;
label_1bbf18:
    // 0x1bbf18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1bbf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bbf1c:
    // 0x1bbf1c: 0xc06efd4  jal         func_1BBF50
label_1bbf20:
    if (ctx->pc == 0x1BBF20u) {
        ctx->pc = 0x1BBF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF1Cu;
        // 0x1bbf20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF24u;
        goto label_1bbf24;
    }
    ctx->pc = 0x1BBF1Cu;
    SET_GPR_U32(ctx, 31, 0x1BBF24u);
    ctx->pc = 0x1BBF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF1Cu;
    // 0x1bbf20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF50u;
    goto label_1bbf50;
    ctx->pc = 0x1BBF24u;
label_1bbf24:
    // 0x1bbf24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bbf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bbf28:
    // 0x1bbf28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bbf28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bbf2c:
    // 0x1bbf2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bbf2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bbf30:
    // 0x1bbf30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bbf30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bbf34:
    // 0x1bbf34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bbf38:
    // 0x1bbf38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbf38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbf3c:
    // 0x1bbf3c: 0x3e00008  jr          $ra
label_1bbf40:
    if (ctx->pc == 0x1BBF40u) {
        ctx->pc = 0x1BBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF3Cu;
        // 0x1bbf40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF44u;
        goto label_1bbf44;
    }
    ctx->pc = 0x1BBF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF3Cu;
        // 0x1bbf40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBF44u;
label_1bbf44:
    // 0x1bbf44: 0x0  nop
    ctx->pc = 0x1bbf44u;
    // NOP
label_1bbf48:
    // 0x1bbf48: 0x0  nop
    ctx->pc = 0x1bbf48u;
    // NOP
label_1bbf4c:
    // 0x1bbf4c: 0x0  nop
    ctx->pc = 0x1bbf4cu;
    // NOP
label_1bbf50:
    // 0x1bbf50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bbf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bbf54:
    // 0x1bbf54: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1bbf54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bbf58:
    // 0x1bbf58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bbf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1bbf5c:
    // 0x1bbf5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bbf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bbf60:
    // 0x1bbf60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bbf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bbf64:
    // 0x1bbf64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1bbf64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bbf68:
    // 0x1bbf68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bbf6c:
    // 0x1bbf6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bbf70:
    // 0x1bbf70: 0x90a8002d  lbu         $t0, 0x2D($a1)
    ctx->pc = 0x1bbf70u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
label_1bbf74:
    // 0x1bbf74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bbf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bbf78:
    // 0x1bbf78: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1bbf78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1bbf7c:
    // 0x1bbf7c: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x1bbf7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1bbf80:
    // 0x1bbf80: 0x90650014  lbu         $a1, 0x14($v1)
    ctx->pc = 0x1bbf80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
label_1bbf84:
    // 0x1bbf84: 0x14a7003d  bne         $a1, $a3, . + 4 + (0x3D << 2)
label_1bbf88:
    if (ctx->pc == 0x1BBF88u) {
        ctx->pc = 0x1BBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF84u;
        // 0x1bbf88: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBF8Cu;
        goto label_1bbf8c;
    }
    ctx->pc = 0x1BBF84u;
    {
        const bool branch_taken_0x1bbf84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x1BBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF84u;
        // 0x1bbf88: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf84) {
            ctx->pc = 0x1BC07Cu;
            goto label_1bc07c;
        }
    }
    ctx->pc = 0x1BBF8Cu;
label_1bbf8c:
    // 0x1bbf8c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1bbf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbf90:
    // 0x1bbf90: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bbf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1bbf94:
    // 0x1bbf94: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x1bbf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bbf98:
    // 0x1bbf98: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1bbf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1bbf9c:
    // 0x1bbf9c: 0x90850026  lbu         $a1, 0x26($a0)
    ctx->pc = 0x1bbf9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
label_1bbfa0:
    // 0x1bbfa0: 0xa0850022  sb          $a1, 0x22($a0)
    ctx->pc = 0x1bbfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 5));
label_1bbfa4:
    // 0x1bbfa4: 0x90850027  lbu         $a1, 0x27($a0)
    ctx->pc = 0x1bbfa4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
label_1bbfa8:
    // 0x1bbfa8: 0xa0850023  sb          $a1, 0x23($a0)
    ctx->pc = 0x1bbfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 5));
label_1bbfac:
    // 0x1bbfac: 0x90850020  lbu         $a1, 0x20($a0)
    ctx->pc = 0x1bbfacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_1bbfb0:
    // 0x1bbfb0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_1bbfb4:
    if (ctx->pc == 0x1BBFB4u) {
        ctx->pc = 0x1BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFB0u;
        // 0x1bbfb4: 0x53842  srl         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBFB8u;
        goto label_1bbfb8;
    }
    ctx->pc = 0x1BBFB0u;
    {
        const bool branch_taken_0x1bbfb0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFB0u;
        // 0x1bbfb4: 0x53842  srl         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfb0) {
            ctx->pc = 0x1BBFC4u;
            goto label_1bbfc4;
        }
    }
    ctx->pc = 0x1BBFB8u;
label_1bbfb8:
    // 0x1bbfb8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bbfb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bbfbc:
    // 0x1bbfbc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bbfc0:
    if (ctx->pc == 0x1BBFC0u) {
        ctx->pc = 0x1BBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFBCu;
        // 0x1bbfc0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BBFC4u;
        goto label_1bbfc4;
    }
    ctx->pc = 0x1BBFBCu;
    {
        const bool branch_taken_0x1bbfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBFBCu;
        // 0x1bbfc0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfbc) {
            ctx->pc = 0x1BBFDCu;
            goto label_1bbfdc;
        }
    }
    ctx->pc = 0x1BBFC4u;
label_1bbfc4:
    // 0x1bbfc4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1bbfc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1bbfc8:
    // 0x1bbfc8: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x1bbfc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_1bbfcc:
    // 0x1bbfcc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1bbfccu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bbfd0:
    // 0x1bbfd0: 0x0  nop
    ctx->pc = 0x1bbfd0u;
    // NOP
label_1bbfd4:
    // 0x1bbfd4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bbfd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bbfd8:
    // 0x1bbfd8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bbfd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bbfdc:
    // 0x1bbfdc: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x1bbfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
label_1bbfe0:
    // 0x1bbfe0: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1bbfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_1bbfe4:
    // 0x1bbfe4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1bbfe4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bbfe8:
    // 0x1bbfe8: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1bbfe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1bbfec:
    // 0x1bbfec: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1bbfecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bbff0:
    // 0x1bbff0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bbff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bbff4:
    // 0x1bbff4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bbff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bbff8:
    // 0x1bbff8: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1bbff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
label_1bbffc:
    // 0x1bbffc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1bbffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bc000:
    // 0x1bc000: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc000u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc004:
    // 0x1bc004: 0x0  nop
    ctx->pc = 0x1bc004u;
    // NOP
label_1bc008:
    // 0x1bc008: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bc008u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1bc00c:
    // 0x1bc00c: 0x0  nop
    ctx->pc = 0x1bc00cu;
    // NOP
label_1bc010:
    // 0x1bc010: 0x0  nop
    ctx->pc = 0x1bc010u;
    // NOP
label_1bc014:
    // 0x1bc014: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1bc014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc018:
    // 0x1bc018: 0x0  nop
    ctx->pc = 0x1bc018u;
    // NOP
label_1bc01c:
    // 0x1bc01c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1bc020:
    if (ctx->pc == 0x1BC020u) {
        ctx->pc = 0x1BC024u;
        goto label_1bc024;
    }
    ctx->pc = 0x1BC01Cu;
    {
        const bool branch_taken_0x1bc01c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc01c) {
            ctx->pc = 0x1BC028u;
            goto label_1bc028;
        }
    }
    ctx->pc = 0x1BC024u;
label_1bc024:
    // 0x1bc024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bc024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc028:
    // 0x1bc028: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_1bc02c:
    if (ctx->pc == 0x1BC02Cu) {
        ctx->pc = 0x1BC02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC028u;
        // 0x1bc02c: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC030u;
        goto label_1bc030;
    }
    ctx->pc = 0x1BC028u;
    {
        const bool branch_taken_0x1bc028 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC028u;
        // 0x1bc02c: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc028) {
            ctx->pc = 0x1BC044u;
            goto label_1bc044;
        }
    }
    ctx->pc = 0x1BC030u;
label_1bc030:
    // 0x1bc030: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1bc030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_1bc034:
    // 0x1bc034: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1bc034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1bc038:
    // 0x1bc038: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc038u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc03c:
    // 0x1bc03c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bc040:
    if (ctx->pc == 0x1BC040u) {
        ctx->pc = 0x1BC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC03Cu;
        // 0x1bc040: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC044u;
        goto label_1bc044;
    }
    ctx->pc = 0x1BC03Cu;
    {
        const bool branch_taken_0x1bc03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC03Cu;
        // 0x1bc040: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc03c) {
            ctx->pc = 0x1BC074u;
            goto label_1bc074;
        }
    }
    ctx->pc = 0x1BC044u;
label_1bc044:
    // 0x1bc044: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1bc044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1bc048:
    // 0x1bc048: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc048u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc04c:
    // 0x1bc04c: 0x0  nop
    ctx->pc = 0x1bc04cu;
    // NOP
label_1bc050:
    // 0x1bc050: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc054:
    // 0x1bc054: 0x0  nop
    ctx->pc = 0x1bc054u;
    // NOP
label_1bc058:
    // 0x1bc058: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1bc05c:
    if (ctx->pc == 0x1BC05Cu) {
        ctx->pc = 0x1BC060u;
        goto label_1bc060;
    }
    ctx->pc = 0x1BC058u;
    {
        const bool branch_taken_0x1bc058 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc058) {
            ctx->pc = 0x1BC074u;
            goto label_1bc074;
        }
    }
    ctx->pc = 0x1BC060u;
label_1bc060:
    // 0x1bc060: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1bc060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_1bc064:
    // 0x1bc064: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1bc064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1bc068:
    // 0x1bc068: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc068u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc06c:
    // 0x1bc06c: 0x10000001  b           . + 4 + (0x1 << 2)
label_1bc070:
    if (ctx->pc == 0x1BC070u) {
        ctx->pc = 0x1BC070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC06Cu;
        // 0x1bc070: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC074u;
        goto label_1bc074;
    }
    ctx->pc = 0x1BC06Cu;
    {
        const bool branch_taken_0x1bc06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC06Cu;
        // 0x1bc070: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc06c) {
            ctx->pc = 0x1BC074u;
            goto label_1bc074;
        }
    }
    ctx->pc = 0x1BC074u;
label_1bc074:
    // 0x1bc074: 0x10000024  b           . + 4 + (0x24 << 2)
label_1bc078:
    if (ctx->pc == 0x1BC078u) {
        ctx->pc = 0x1BC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC074u;
        // 0x1bc078: 0xe481001c  swc1        $f1, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC07Cu;
        goto label_1bc07c;
    }
    ctx->pc = 0x1BC074u;
    {
        const bool branch_taken_0x1bc074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC074u;
        // 0x1bc078: 0xe481001c  swc1        $f1, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc074) {
            ctx->pc = 0x1BC108u;
            goto label_1bc108;
        }
    }
    ctx->pc = 0x1BC07Cu;
label_1bc07c:
    // 0x1bc07c: 0xc4610150  lwc1        $f1, 0x150($v1)
    ctx->pc = 0x1bc07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc080:
    // 0x1bc080: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1bc080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
label_1bc084:
    // 0x1bc084: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1bc084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1bc088:
    // 0x1bc088: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc088u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc08c:
    // 0x1bc08c: 0x0  nop
    ctx->pc = 0x1bc08cu;
    // NOP
label_1bc090:
    // 0x1bc090: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1bc090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1bc094:
    // 0x1bc094: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x1bc094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc098:
    // 0x1bc098: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bc098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1bc09c:
    // 0x1bc09c: 0x90650218  lbu         $a1, 0x218($v1)
    ctx->pc = 0x1bc09cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 536)));
label_1bc0a0:
    // 0x1bc0a0: 0xa0850022  sb          $a1, 0x22($a0)
    ctx->pc = 0x1bc0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 5));
label_1bc0a4:
    // 0x1bc0a4: 0x90650219  lbu         $a1, 0x219($v1)
    ctx->pc = 0x1bc0a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 537)));
label_1bc0a8:
    // 0x1bc0a8: 0xa0850023  sb          $a1, 0x23($a0)
    ctx->pc = 0x1bc0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 5));
label_1bc0ac:
    // 0x1bc0ac: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1bc0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc0b0:
    // 0x1bc0b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc0b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc0b4:
    // 0x1bc0b4: 0x0  nop
    ctx->pc = 0x1bc0b4u;
    // NOP
label_1bc0b8:
    // 0x1bc0b8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1bc0bc:
    if (ctx->pc == 0x1BC0BCu) {
        ctx->pc = 0x1BC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0B8u;
        // 0x1bc0bc: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0C0u;
        goto label_1bc0c0;
    }
    ctx->pc = 0x1BC0B8u;
    {
        const bool branch_taken_0x1bc0b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0B8u;
        // 0x1bc0bc: 0x3c05c049  lui         $a1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc0b8) {
            ctx->pc = 0x1BC0D4u;
            goto label_1bc0d4;
        }
    }
    ctx->pc = 0x1BC0C0u;
label_1bc0c0:
    // 0x1bc0c0: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1bc0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_1bc0c4:
    // 0x1bc0c4: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1bc0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1bc0c8:
    // 0x1bc0c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc0c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc0cc:
    // 0x1bc0cc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bc0d0:
    if (ctx->pc == 0x1BC0D0u) {
        ctx->pc = 0x1BC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0CCu;
        // 0x1bc0d0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC0D4u;
        goto label_1bc0d4;
    }
    ctx->pc = 0x1BC0CCu;
    {
        const bool branch_taken_0x1bc0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0CCu;
        // 0x1bc0d0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc0cc) {
            ctx->pc = 0x1BC104u;
            goto label_1bc104;
        }
    }
    ctx->pc = 0x1BC0D4u;
label_1bc0d4:
    // 0x1bc0d4: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1bc0d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1bc0d8:
    // 0x1bc0d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc0d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc0dc:
    // 0x1bc0dc: 0x0  nop
    ctx->pc = 0x1bc0dcu;
    // NOP
label_1bc0e0:
    // 0x1bc0e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc0e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc0e4:
    // 0x1bc0e4: 0x0  nop
    ctx->pc = 0x1bc0e4u;
    // NOP
label_1bc0e8:
    // 0x1bc0e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1bc0ec:
    if (ctx->pc == 0x1BC0ECu) {
        ctx->pc = 0x1BC0F0u;
        goto label_1bc0f0;
    }
    ctx->pc = 0x1BC0E8u;
    {
        const bool branch_taken_0x1bc0e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc0e8) {
            ctx->pc = 0x1BC104u;
            goto label_1bc104;
        }
    }
    ctx->pc = 0x1BC0F0u;
label_1bc0f0:
    // 0x1bc0f0: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x1bc0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
label_1bc0f4:
    // 0x1bc0f4: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x1bc0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
label_1bc0f8:
    // 0x1bc0f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc0f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc0fc:
    // 0x1bc0fc: 0x10000001  b           . + 4 + (0x1 << 2)
label_1bc100:
    if (ctx->pc == 0x1BC100u) {
        ctx->pc = 0x1BC100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0FCu;
        // 0x1bc100: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC104u;
        goto label_1bc104;
    }
    ctx->pc = 0x1BC0FCu;
    {
        const bool branch_taken_0x1bc0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0FCu;
        // 0x1bc100: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc0fc) {
            ctx->pc = 0x1BC104u;
            goto label_1bc104;
        }
    }
    ctx->pc = 0x1BC104u;
label_1bc104:
    // 0x1bc104: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x1bc104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_1bc108:
    // 0x1bc108: 0x8463021c  lh          $v1, 0x21C($v1)
    ctx->pc = 0x1bc108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 540)));
label_1bc10c:
    // 0x1bc10c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc110:
    // 0x1bc110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bc110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc114:
    // 0x1bc114: 0xa483002e  sh          $v1, 0x2E($a0)
    ctx->pc = 0x1bc114u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 3));
label_1bc118:
    // 0x1bc118: 0xa080002a  sb          $zero, 0x2A($a0)
    ctx->pc = 0x1bc118u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 0));
label_1bc11c:
    // 0x1bc11c: 0x0  nop
    ctx->pc = 0x1bc11cu;
    // NOP
label_1bc120:
    // 0x1bc120: 0x2671821  addu        $v1, $s3, $a3
    ctx->pc = 0x1bc120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_1bc124:
    // 0x1bc124: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bc124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bc128:
    // 0x1bc128: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1bc12c:
    if (ctx->pc == 0x1BC12Cu) {
        ctx->pc = 0x1BC130u;
        goto label_1bc130;
    }
    ctx->pc = 0x1BC128u;
    {
        const bool branch_taken_0x1bc128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc128) {
            ctx->pc = 0x1BC148u;
            goto label_1bc148;
        }
    }
    ctx->pc = 0x1BC130u;
label_1bc130:
    // 0x1bc130: 0x9063023a  lbu         $v1, 0x23A($v1)
    ctx->pc = 0x1bc130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 570)));
label_1bc134:
    // 0x1bc134: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1bc138:
    if (ctx->pc == 0x1BC138u) {
        ctx->pc = 0x1BC13Cu;
        goto label_1bc13c;
    }
    ctx->pc = 0x1BC134u;
    {
        const bool branch_taken_0x1bc134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc134) {
            ctx->pc = 0x1BC148u;
            goto label_1bc148;
        }
    }
    ctx->pc = 0x1BC13Cu;
label_1bc13c:
    // 0x1bc13c: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x1bc13cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
label_1bc140:
    // 0x1bc140: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bc140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1bc144:
    // 0x1bc144: 0xa083002a  sb          $v1, 0x2A($a0)
    ctx->pc = 0x1bc144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 3));
label_1bc148:
    // 0x1bc148: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1bc148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1bc14c:
    // 0x1bc14c: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x1bc14cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bc150:
    // 0x1bc150: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_1bc154:
    if (ctx->pc == 0x1BC154u) {
        ctx->pc = 0x1BC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC150u;
        // 0x1bc154: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC158u;
        goto label_1bc158;
    }
    ctx->pc = 0x1BC150u;
    {
        const bool branch_taken_0x1bc150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC150u;
        // 0x1bc154: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc150) {
            ctx->pc = 0x1BC11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc11c;
        }
    }
    ctx->pc = 0x1BC158u;
label_1bc158:
    // 0x1bc158: 0x9263002d  lbu         $v1, 0x2D($s3)
    ctx->pc = 0x1bc158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
label_1bc15c:
    // 0x1bc15c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1bc160:
    if (ctx->pc == 0x1BC160u) {
        ctx->pc = 0x1BC164u;
        goto label_1bc164;
    }
    ctx->pc = 0x1BC15Cu;
    {
        const bool branch_taken_0x1bc15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc15c) {
            ctx->pc = 0x1BC170u;
            goto label_1bc170;
        }
    }
    ctx->pc = 0x1BC164u;
label_1bc164:
    // 0x1bc164: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x1bc164u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
label_1bc168:
    // 0x1bc168: 0xa480002e  sh          $zero, 0x2E($a0)
    ctx->pc = 0x1bc168u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 0));
label_1bc16c:
    // 0x1bc16c: 0xa080002a  sb          $zero, 0x2A($a0)
    ctx->pc = 0x1bc16cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 0));
label_1bc170:
    // 0x1bc170: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x1bc170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
label_1bc174:
    // 0x1bc174: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_1bc178:
    if (ctx->pc == 0x1BC178u) {
        ctx->pc = 0x1BC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC174u;
        // 0x1bc178: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC17Cu;
        goto label_1bc17c;
    }
    ctx->pc = 0x1BC174u;
    {
        const bool branch_taken_0x1bc174 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1BC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC174u;
        // 0x1bc178: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc174) {
            ctx->pc = 0x1BC190u;
            goto label_1bc190;
        }
    }
    ctx->pc = 0x1BC17Cu;
label_1bc17c:
    // 0x1bc17c: 0xa4800032  sh          $zero, 0x32($a0)
    ctx->pc = 0x1bc17cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 0));
label_1bc180:
    // 0x1bc180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc184:
    // 0x1bc184: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x1bc184u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
label_1bc188:
    // 0x1bc188: 0xa083003d  sb          $v1, 0x3D($a0)
    ctx->pc = 0x1bc188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 61), (uint8_t)GPR_U32(ctx, 3));
label_1bc18c:
    // 0x1bc18c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bc18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bc190:
    // 0x1bc190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bc190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc194:
    // 0x1bc194: 0xa263002f  sb          $v1, 0x2F($s3)
    ctx->pc = 0x1bc194u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 47), (uint8_t)GPR_U32(ctx, 3));
label_1bc198:
    // 0x1bc198: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bc198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bc19c:
    // 0x1bc19c: 0xa265002e  sb          $a1, 0x2E($s3)
    ctx->pc = 0x1bc19cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 46), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1bc1a0u;
    return;
}

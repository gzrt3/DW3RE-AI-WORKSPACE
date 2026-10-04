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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bb950u: goto label_2bb950;
        case 0x2bb954u: goto label_2bb954;
        case 0x2bb958u: goto label_2bb958;
        case 0x2bb95cu: goto label_2bb95c;
        case 0x2bb960u: goto label_2bb960;
        case 0x2bb964u: goto label_2bb964;
        case 0x2bb968u: goto label_2bb968;
        case 0x2bb96cu: goto label_2bb96c;
        case 0x2bb970u: goto label_2bb970;
        case 0x2bb974u: goto label_2bb974;
        case 0x2bb978u: goto label_2bb978;
        case 0x2bb97cu: goto label_2bb97c;
        case 0x2bb980u: goto label_2bb980;
        case 0x2bb984u: goto label_2bb984;
        case 0x2bb988u: goto label_2bb988;
        case 0x2bb98cu: goto label_2bb98c;
        case 0x2bb990u: goto label_2bb990;
        case 0x2bb994u: goto label_2bb994;
        case 0x2bb998u: goto label_2bb998;
        case 0x2bb99cu: goto label_2bb99c;
        case 0x2bb9a0u: goto label_2bb9a0;
        case 0x2bb9a4u: goto label_2bb9a4;
        case 0x2bb9a8u: goto label_2bb9a8;
        case 0x2bb9acu: goto label_2bb9ac;
        case 0x2bb9b0u: goto label_2bb9b0;
        case 0x2bb9b4u: goto label_2bb9b4;
        case 0x2bb9b8u: goto label_2bb9b8;
        case 0x2bb9bcu: goto label_2bb9bc;
        case 0x2bb9c0u: goto label_2bb9c0;
        case 0x2bb9c4u: goto label_2bb9c4;
        case 0x2bb9c8u: goto label_2bb9c8;
        case 0x2bb9ccu: goto label_2bb9cc;
        case 0x2bb9d0u: goto label_2bb9d0;
        case 0x2bb9d4u: goto label_2bb9d4;
        case 0x2bb9d8u: goto label_2bb9d8;
        case 0x2bb9dcu: goto label_2bb9dc;
        case 0x2bb9e0u: goto label_2bb9e0;
        case 0x2bb9e4u: goto label_2bb9e4;
        case 0x2bb9e8u: goto label_2bb9e8;
        case 0x2bb9ecu: goto label_2bb9ec;
        case 0x2bb9f0u: goto label_2bb9f0;
        case 0x2bb9f4u: goto label_2bb9f4;
        case 0x2bb9f8u: goto label_2bb9f8;
        case 0x2bb9fcu: goto label_2bb9fc;
        case 0x2bba00u: goto label_2bba00;
        case 0x2bba04u: goto label_2bba04;
        case 0x2bba08u: goto label_2bba08;
        case 0x2bba0cu: goto label_2bba0c;
        case 0x2bba10u: goto label_2bba10;
        case 0x2bba14u: goto label_2bba14;
        case 0x2bba18u: goto label_2bba18;
        case 0x2bba1cu: goto label_2bba1c;
        case 0x2bba20u: goto label_2bba20;
        case 0x2bba24u: goto label_2bba24;
        case 0x2bba28u: goto label_2bba28;
        case 0x2bba2cu: goto label_2bba2c;
        case 0x2bba30u: goto label_2bba30;
        case 0x2bba34u: goto label_2bba34;
        case 0x2bba38u: goto label_2bba38;
        case 0x2bba3cu: goto label_2bba3c;
        case 0x2bba40u: goto label_2bba40;
        case 0x2bba44u: goto label_2bba44;
        case 0x2bba48u: goto label_2bba48;
        case 0x2bba4cu: goto label_2bba4c;
        case 0x2bba50u: goto label_2bba50;
        case 0x2bba54u: goto label_2bba54;
        case 0x2bba58u: goto label_2bba58;
        case 0x2bba5cu: goto label_2bba5c;
        case 0x2bba60u: goto label_2bba60;
        case 0x2bba64u: goto label_2bba64;
        case 0x2bba68u: goto label_2bba68;
        case 0x2bba6cu: goto label_2bba6c;
        case 0x2bba70u: goto label_2bba70;
        case 0x2bba74u: goto label_2bba74;
        case 0x2bba78u: goto label_2bba78;
        case 0x2bba7cu: goto label_2bba7c;
        case 0x2bba80u: goto label_2bba80;
        case 0x2bba84u: goto label_2bba84;
        case 0x2bba88u: goto label_2bba88;
        case 0x2bba8cu: goto label_2bba8c;
        case 0x2bba90u: goto label_2bba90;
        case 0x2bba94u: goto label_2bba94;
        case 0x2bba98u: goto label_2bba98;
        case 0x2bba9cu: goto label_2bba9c;
        case 0x2bbaa0u: goto label_2bbaa0;
        case 0x2bbaa4u: goto label_2bbaa4;
        case 0x2bbaa8u: goto label_2bbaa8;
        case 0x2bbaacu: goto label_2bbaac;
        case 0x2bbab0u: goto label_2bbab0;
        case 0x2bbab4u: goto label_2bbab4;
        case 0x2bbab8u: goto label_2bbab8;
        case 0x2bbabcu: goto label_2bbabc;
        case 0x2bbac0u: goto label_2bbac0;
        case 0x2bbac4u: goto label_2bbac4;
        case 0x2bbac8u: goto label_2bbac8;
        case 0x2bbaccu: goto label_2bbacc;
        case 0x2bbad0u: goto label_2bbad0;
        case 0x2bbad4u: goto label_2bbad4;
        case 0x2bbad8u: goto label_2bbad8;
        case 0x2bbadcu: goto label_2bbadc;
        case 0x2bbae0u: goto label_2bbae0;
        case 0x2bbae4u: goto label_2bbae4;
        case 0x2bbae8u: goto label_2bbae8;
        case 0x2bbaecu: goto label_2bbaec;
        case 0x2bbaf0u: goto label_2bbaf0;
        case 0x2bbaf4u: goto label_2bbaf4;
        case 0x2bbaf8u: goto label_2bbaf8;
        case 0x2bbafcu: goto label_2bbafc;
        case 0x2bbb00u: goto label_2bbb00;
        case 0x2bbb04u: goto label_2bbb04;
        case 0x2bbb08u: goto label_2bbb08;
        case 0x2bbb0cu: goto label_2bbb0c;
        case 0x2bbb10u: goto label_2bbb10;
        case 0x2bbb14u: goto label_2bbb14;
        case 0x2bbb18u: goto label_2bbb18;
        case 0x2bbb1cu: goto label_2bbb1c;
        case 0x2bbb20u: goto label_2bbb20;
        case 0x2bbb24u: goto label_2bbb24;
        case 0x2bbb28u: goto label_2bbb28;
        case 0x2bbb2cu: goto label_2bbb2c;
        case 0x2bbb30u: goto label_2bbb30;
        case 0x2bbb34u: goto label_2bbb34;
        case 0x2bbb38u: goto label_2bbb38;
        case 0x2bbb3cu: goto label_2bbb3c;
        case 0x2bbb40u: goto label_2bbb40;
        case 0x2bbb44u: goto label_2bbb44;
        case 0x2bbb48u: goto label_2bbb48;
        case 0x2bbb4cu: goto label_2bbb4c;
        case 0x2bbb50u: goto label_2bbb50;
        case 0x2bbb54u: goto label_2bbb54;
        case 0x2bbb58u: goto label_2bbb58;
        case 0x2bbb5cu: goto label_2bbb5c;
        case 0x2bbb60u: goto label_2bbb60;
        case 0x2bbb64u: goto label_2bbb64;
        case 0x2bbb68u: goto label_2bbb68;
        case 0x2bbb6cu: goto label_2bbb6c;
        case 0x2bbb70u: goto label_2bbb70;
        case 0x2bbb74u: goto label_2bbb74;
        case 0x2bbb78u: goto label_2bbb78;
        case 0x2bbb7cu: goto label_2bbb7c;
        case 0x2bbb80u: goto label_2bbb80;
        case 0x2bbb84u: goto label_2bbb84;
        case 0x2bbb88u: goto label_2bbb88;
        case 0x2bbb8cu: goto label_2bbb8c;
        case 0x2bbb90u: goto label_2bbb90;
        case 0x2bbb94u: goto label_2bbb94;
        case 0x2bbb98u: goto label_2bbb98;
        case 0x2bbb9cu: goto label_2bbb9c;
        case 0x2bbba0u: goto label_2bbba0;
        case 0x2bbba4u: goto label_2bbba4;
        case 0x2bbba8u: goto label_2bbba8;
        case 0x2bbbacu: goto label_2bbbac;
        case 0x2bbbb0u: goto label_2bbbb0;
        case 0x2bbbb4u: goto label_2bbbb4;
        case 0x2bbbb8u: goto label_2bbbb8;
        case 0x2bbbbcu: goto label_2bbbbc;
        case 0x2bbbc0u: goto label_2bbbc0;
        case 0x2bbbc4u: goto label_2bbbc4;
        case 0x2bbbc8u: goto label_2bbbc8;
        case 0x2bbbccu: goto label_2bbbcc;
        case 0x2bbbd0u: goto label_2bbbd0;
        case 0x2bbbd4u: goto label_2bbbd4;
        case 0x2bbbd8u: goto label_2bbbd8;
        case 0x2bbbdcu: goto label_2bbbdc;
        case 0x2bbbe0u: goto label_2bbbe0;
        case 0x2bbbe4u: goto label_2bbbe4;
        case 0x2bbbe8u: goto label_2bbbe8;
        case 0x2bbbecu: goto label_2bbbec;
        case 0x2bbbf0u: goto label_2bbbf0;
        case 0x2bbbf4u: goto label_2bbbf4;
        case 0x2bbbf8u: goto label_2bbbf8;
        case 0x2bbbfcu: goto label_2bbbfc;
        case 0x2bbc00u: goto label_2bbc00;
        case 0x2bbc04u: goto label_2bbc04;
        case 0x2bbc08u: goto label_2bbc08;
        case 0x2bbc0cu: goto label_2bbc0c;
        case 0x2bbc10u: goto label_2bbc10;
        case 0x2bbc14u: goto label_2bbc14;
        case 0x2bbc18u: goto label_2bbc18;
        case 0x2bbc1cu: goto label_2bbc1c;
        case 0x2bbc20u: goto label_2bbc20;
        case 0x2bbc24u: goto label_2bbc24;
        case 0x2bbc28u: goto label_2bbc28;
        case 0x2bbc2cu: goto label_2bbc2c;
        case 0x2bbc30u: goto label_2bbc30;
        case 0x2bbc34u: goto label_2bbc34;
        case 0x2bbc38u: goto label_2bbc38;
        case 0x2bbc3cu: goto label_2bbc3c;
        case 0x2bbc40u: goto label_2bbc40;
        case 0x2bbc44u: goto label_2bbc44;
        case 0x2bbc48u: goto label_2bbc48;
        case 0x2bbc4cu: goto label_2bbc4c;
        case 0x2bbc50u: goto label_2bbc50;
        case 0x2bbc54u: goto label_2bbc54;
        case 0x2bbc58u: goto label_2bbc58;
        case 0x2bbc5cu: goto label_2bbc5c;
        case 0x2bbc60u: goto label_2bbc60;
        case 0x2bbc64u: goto label_2bbc64;
        case 0x2bbc68u: goto label_2bbc68;
        case 0x2bbc6cu: goto label_2bbc6c;
        case 0x2bbc70u: goto label_2bbc70;
        case 0x2bbc74u: goto label_2bbc74;
        case 0x2bbc78u: goto label_2bbc78;
        case 0x2bbc7cu: goto label_2bbc7c;
        case 0x2bbc80u: goto label_2bbc80;
        case 0x2bbc84u: goto label_2bbc84;
        case 0x2bbc88u: goto label_2bbc88;
        case 0x2bbc8cu: goto label_2bbc8c;
        case 0x2bbc90u: goto label_2bbc90;
        case 0x2bbc94u: goto label_2bbc94;
        case 0x2bbc98u: goto label_2bbc98;
        case 0x2bbc9cu: goto label_2bbc9c;
        case 0x2bbca0u: goto label_2bbca0;
        case 0x2bbca4u: goto label_2bbca4;
        case 0x2bbca8u: goto label_2bbca8;
        case 0x2bbcacu: goto label_2bbcac;
        case 0x2bbcb0u: goto label_2bbcb0;
        case 0x2bbcb4u: goto label_2bbcb4;
        case 0x2bbcb8u: goto label_2bbcb8;
        case 0x2bbcbcu: goto label_2bbcbc;
        case 0x2bbcc0u: goto label_2bbcc0;
        case 0x2bbcc4u: goto label_2bbcc4;
        case 0x2bbcc8u: goto label_2bbcc8;
        case 0x2bbcccu: goto label_2bbccc;
        case 0x2bbcd0u: goto label_2bbcd0;
        case 0x2bbcd4u: goto label_2bbcd4;
        case 0x2bbcd8u: goto label_2bbcd8;
        case 0x2bbcdcu: goto label_2bbcdc;
        case 0x2bbce0u: goto label_2bbce0;
        case 0x2bbce4u: goto label_2bbce4;
        case 0x2bbce8u: goto label_2bbce8;
        case 0x2bbcecu: goto label_2bbcec;
        case 0x2bbcf0u: goto label_2bbcf0;
        case 0x2bbcf4u: goto label_2bbcf4;
        case 0x2bbcf8u: goto label_2bbcf8;
        case 0x2bbcfcu: goto label_2bbcfc;
        case 0x2bbd00u: goto label_2bbd00;
        case 0x2bbd04u: goto label_2bbd04;
        case 0x2bbd08u: goto label_2bbd08;
        case 0x2bbd0cu: goto label_2bbd0c;
        case 0x2bbd10u: goto label_2bbd10;
        case 0x2bbd14u: goto label_2bbd14;
        case 0x2bbd18u: goto label_2bbd18;
        case 0x2bbd1cu: goto label_2bbd1c;
        case 0x2bbd20u: goto label_2bbd20;
        case 0x2bbd24u: goto label_2bbd24;
        case 0x2bbd28u: goto label_2bbd28;
        case 0x2bbd2cu: goto label_2bbd2c;
        case 0x2bbd30u: goto label_2bbd30;
        case 0x2bbd34u: goto label_2bbd34;
        case 0x2bbd38u: goto label_2bbd38;
        case 0x2bbd3cu: goto label_2bbd3c;
        case 0x2bbd40u: goto label_2bbd40;
        case 0x2bbd44u: goto label_2bbd44;
        case 0x2bbd48u: goto label_2bbd48;
        case 0x2bbd4cu: goto label_2bbd4c;
        case 0x2bbd50u: goto label_2bbd50;
        case 0x2bbd54u: goto label_2bbd54;
        case 0x2bbd58u: goto label_2bbd58;
        case 0x2bbd5cu: goto label_2bbd5c;
        case 0x2bbd60u: goto label_2bbd60;
        case 0x2bbd64u: goto label_2bbd64;
        case 0x2bbd68u: goto label_2bbd68;
        case 0x2bbd6cu: goto label_2bbd6c;
        case 0x2bbd70u: goto label_2bbd70;
        case 0x2bbd74u: goto label_2bbd74;
        case 0x2bbd78u: goto label_2bbd78;
        case 0x2bbd7cu: goto label_2bbd7c;
        case 0x2bbd80u: goto label_2bbd80;
        case 0x2bbd84u: goto label_2bbd84;
        case 0x2bbd88u: goto label_2bbd88;
        case 0x2bbd8cu: goto label_2bbd8c;
        case 0x2bbd90u: goto label_2bbd90;
        case 0x2bbd94u: goto label_2bbd94;
        case 0x2bbd98u: goto label_2bbd98;
        case 0x2bbd9cu: goto label_2bbd9c;
        case 0x2bbda0u: goto label_2bbda0;
        case 0x2bbda4u: goto label_2bbda4;
        case 0x2bbda8u: goto label_2bbda8;
        case 0x2bbdacu: goto label_2bbdac;
        case 0x2bbdb0u: goto label_2bbdb0;
        case 0x2bbdb4u: goto label_2bbdb4;
        case 0x2bbdb8u: goto label_2bbdb8;
        case 0x2bbdbcu: goto label_2bbdbc;
        case 0x2bbdc0u: goto label_2bbdc0;
        case 0x2bbdc4u: goto label_2bbdc4;
        case 0x2bbdc8u: goto label_2bbdc8;
        case 0x2bbdccu: goto label_2bbdcc;
        case 0x2bbdd0u: goto label_2bbdd0;
        case 0x2bbdd4u: goto label_2bbdd4;
        case 0x2bbdd8u: goto label_2bbdd8;
        case 0x2bbddcu: goto label_2bbddc;
        case 0x2bbde0u: goto label_2bbde0;
        case 0x2bbde4u: goto label_2bbde4;
        case 0x2bbde8u: goto label_2bbde8;
        case 0x2bbdecu: goto label_2bbdec;
        case 0x2bbdf0u: goto label_2bbdf0;
        case 0x2bbdf4u: goto label_2bbdf4;
        case 0x2bbdf8u: goto label_2bbdf8;
        case 0x2bbdfcu: goto label_2bbdfc;
        case 0x2bbe00u: goto label_2bbe00;
        case 0x2bbe04u: goto label_2bbe04;
        case 0x2bbe08u: goto label_2bbe08;
        case 0x2bbe0cu: goto label_2bbe0c;
        case 0x2bbe10u: goto label_2bbe10;
        case 0x2bbe14u: goto label_2bbe14;
        case 0x2bbe18u: goto label_2bbe18;
        case 0x2bbe1cu: goto label_2bbe1c;
        case 0x2bbe20u: goto label_2bbe20;
        case 0x2bbe24u: goto label_2bbe24;
        case 0x2bbe28u: goto label_2bbe28;
        case 0x2bbe2cu: goto label_2bbe2c;
        case 0x2bbe30u: goto label_2bbe30;
        case 0x2bbe34u: goto label_2bbe34;
        case 0x2bbe38u: goto label_2bbe38;
        case 0x2bbe3cu: goto label_2bbe3c;
        case 0x2bbe40u: goto label_2bbe40;
        case 0x2bbe44u: goto label_2bbe44;
        case 0x2bbe48u: goto label_2bbe48;
        case 0x2bbe4cu: goto label_2bbe4c;
        case 0x2bbe50u: goto label_2bbe50;
        case 0x2bbe54u: goto label_2bbe54;
        case 0x2bbe58u: goto label_2bbe58;
        case 0x2bbe5cu: goto label_2bbe5c;
        case 0x2bbe60u: goto label_2bbe60;
        case 0x2bbe64u: goto label_2bbe64;
        case 0x2bbe68u: goto label_2bbe68;
        case 0x2bbe6cu: goto label_2bbe6c;
        case 0x2bbe70u: goto label_2bbe70;
        case 0x2bbe74u: goto label_2bbe74;
        case 0x2bbe78u: goto label_2bbe78;
        case 0x2bbe7cu: goto label_2bbe7c;
        case 0x2bbe80u: goto label_2bbe80;
        case 0x2bbe84u: goto label_2bbe84;
        case 0x2bbe88u: goto label_2bbe88;
        case 0x2bbe8cu: goto label_2bbe8c;
        case 0x2bbe90u: goto label_2bbe90;
        case 0x2bbe94u: goto label_2bbe94;
        case 0x2bbe98u: goto label_2bbe98;
        case 0x2bbe9cu: goto label_2bbe9c;
        case 0x2bbea0u: goto label_2bbea0;
        case 0x2bbea4u: goto label_2bbea4;
        case 0x2bbea8u: goto label_2bbea8;
        case 0x2bbeacu: goto label_2bbeac;
        case 0x2bbeb0u: goto label_2bbeb0;
        case 0x2bbeb4u: goto label_2bbeb4;
        case 0x2bbeb8u: goto label_2bbeb8;
        case 0x2bbebcu: goto label_2bbebc;
        case 0x2bbec0u: goto label_2bbec0;
        case 0x2bbec4u: goto label_2bbec4;
        case 0x2bbec8u: goto label_2bbec8;
        case 0x2bbeccu: goto label_2bbecc;
        case 0x2bbed0u: goto label_2bbed0;
        case 0x2bbed4u: goto label_2bbed4;
        case 0x2bbed8u: goto label_2bbed8;
        case 0x2bbedcu: goto label_2bbedc;
        case 0x2bbee0u: goto label_2bbee0;
        case 0x2bbee4u: goto label_2bbee4;
        case 0x2bbee8u: goto label_2bbee8;
        case 0x2bbeecu: goto label_2bbeec;
        case 0x2bbef0u: goto label_2bbef0;
        case 0x2bbef4u: goto label_2bbef4;
        case 0x2bbef8u: goto label_2bbef8;
        case 0x2bbefcu: goto label_2bbefc;
        case 0x2bbf00u: goto label_2bbf00;
        case 0x2bbf04u: goto label_2bbf04;
        case 0x2bbf08u: goto label_2bbf08;
        case 0x2bbf0cu: goto label_2bbf0c;
        case 0x2bbf10u: goto label_2bbf10;
        case 0x2bbf14u: goto label_2bbf14;
        case 0x2bbf18u: goto label_2bbf18;
        case 0x2bbf1cu: goto label_2bbf1c;
        case 0x2bbf20u: goto label_2bbf20;
        case 0x2bbf24u: goto label_2bbf24;
        case 0x2bbf28u: goto label_2bbf28;
        case 0x2bbf2cu: goto label_2bbf2c;
        case 0x2bbf30u: goto label_2bbf30;
        case 0x2bbf34u: goto label_2bbf34;
        case 0x2bbf38u: goto label_2bbf38;
        case 0x2bbf3cu: goto label_2bbf3c;
        case 0x2bbf40u: goto label_2bbf40;
        case 0x2bbf44u: goto label_2bbf44;
        case 0x2bbf48u: goto label_2bbf48;
        case 0x2bbf4cu: goto label_2bbf4c;
        case 0x2bbf50u: goto label_2bbf50;
        case 0x2bbf54u: goto label_2bbf54;
        case 0x2bbf58u: goto label_2bbf58;
        case 0x2bbf5cu: goto label_2bbf5c;
        case 0x2bbf60u: goto label_2bbf60;
        case 0x2bbf64u: goto label_2bbf64;
        case 0x2bbf68u: goto label_2bbf68;
        case 0x2bbf6cu: goto label_2bbf6c;
        case 0x2bbf70u: goto label_2bbf70;
        case 0x2bbf74u: goto label_2bbf74;
        case 0x2bbf78u: goto label_2bbf78;
        case 0x2bbf7cu: goto label_2bbf7c;
        case 0x2bbf80u: goto label_2bbf80;
        case 0x2bbf84u: goto label_2bbf84;
        case 0x2bbf88u: goto label_2bbf88;
        case 0x2bbf8cu: goto label_2bbf8c;
        case 0x2bbf90u: goto label_2bbf90;
        case 0x2bbf94u: goto label_2bbf94;
        case 0x2bbf98u: goto label_2bbf98;
        case 0x2bbf9cu: goto label_2bbf9c;
        case 0x2bbfa0u: goto label_2bbfa0;
        case 0x2bbfa4u: goto label_2bbfa4;
        case 0x2bbfa8u: goto label_2bbfa8;
        case 0x2bbfacu: goto label_2bbfac;
        case 0x2bbfb0u: goto label_2bbfb0;
        case 0x2bbfb4u: goto label_2bbfb4;
        case 0x2bbfb8u: goto label_2bbfb8;
        case 0x2bbfbcu: goto label_2bbfbc;
        case 0x2bbfc0u: goto label_2bbfc0;
        case 0x2bbfc4u: goto label_2bbfc4;
        case 0x2bbfc8u: goto label_2bbfc8;
        case 0x2bbfccu: goto label_2bbfcc;
        case 0x2bbfd0u: goto label_2bbfd0;
        case 0x2bbfd4u: goto label_2bbfd4;
        case 0x2bbfd8u: goto label_2bbfd8;
        case 0x2bbfdcu: goto label_2bbfdc;
        case 0x2bbfe0u: goto label_2bbfe0;
        case 0x2bbfe4u: goto label_2bbfe4;
        case 0x2bbfe8u: goto label_2bbfe8;
        case 0x2bbfecu: goto label_2bbfec;
        case 0x2bbff0u: goto label_2bbff0;
        case 0x2bbff4u: goto label_2bbff4;
        case 0x2bbff8u: goto label_2bbff8;
        case 0x2bbffcu: goto label_2bbffc;
        case 0x2bc000u: goto label_2bc000;
        case 0x2bc004u: goto label_2bc004;
        case 0x2bc008u: goto label_2bc008;
        case 0x2bc00cu: goto label_2bc00c;
        case 0x2bc010u: goto label_2bc010;
        case 0x2bc014u: goto label_2bc014;
        case 0x2bc018u: goto label_2bc018;
        case 0x2bc01cu: goto label_2bc01c;
        case 0x2bc020u: goto label_2bc020;
        case 0x2bc024u: goto label_2bc024;
        case 0x2bc028u: goto label_2bc028;
        case 0x2bc02cu: goto label_2bc02c;
        case 0x2bc030u: goto label_2bc030;
        case 0x2bc034u: goto label_2bc034;
        case 0x2bc038u: goto label_2bc038;
        case 0x2bc03cu: goto label_2bc03c;
        case 0x2bc040u: goto label_2bc040;
        case 0x2bc044u: goto label_2bc044;
        case 0x2bc048u: goto label_2bc048;
        case 0x2bc04cu: goto label_2bc04c;
        case 0x2bc050u: goto label_2bc050;
        case 0x2bc054u: goto label_2bc054;
        case 0x2bc058u: goto label_2bc058;
        case 0x2bc05cu: goto label_2bc05c;
        case 0x2bc060u: goto label_2bc060;
        case 0x2bc064u: goto label_2bc064;
        case 0x2bc068u: goto label_2bc068;
        case 0x2bc06cu: goto label_2bc06c;
        case 0x2bc070u: goto label_2bc070;
        case 0x2bc074u: goto label_2bc074;
        case 0x2bc078u: goto label_2bc078;
        case 0x2bc07cu: goto label_2bc07c;
        case 0x2bc080u: goto label_2bc080;
        case 0x2bc084u: goto label_2bc084;
        case 0x2bc088u: goto label_2bc088;
        case 0x2bc08cu: goto label_2bc08c;
        case 0x2bc090u: goto label_2bc090;
        case 0x2bc094u: goto label_2bc094;
        case 0x2bc098u: goto label_2bc098;
        case 0x2bc09cu: goto label_2bc09c;
        case 0x2bc0a0u: goto label_2bc0a0;
        case 0x2bc0a4u: goto label_2bc0a4;
        case 0x2bc0a8u: goto label_2bc0a8;
        case 0x2bc0acu: goto label_2bc0ac;
        case 0x2bc0b0u: goto label_2bc0b0;
        case 0x2bc0b4u: goto label_2bc0b4;
        case 0x2bc0b8u: goto label_2bc0b8;
        case 0x2bc0bcu: goto label_2bc0bc;
        case 0x2bc0c0u: goto label_2bc0c0;
        case 0x2bc0c4u: goto label_2bc0c4;
        case 0x2bc0c8u: goto label_2bc0c8;
        case 0x2bc0ccu: goto label_2bc0cc;
        case 0x2bc0d0u: goto label_2bc0d0;
        case 0x2bc0d4u: goto label_2bc0d4;
        case 0x2bc0d8u: goto label_2bc0d8;
        case 0x2bc0dcu: goto label_2bc0dc;
        case 0x2bc0e0u: goto label_2bc0e0;
        case 0x2bc0e4u: goto label_2bc0e4;
        case 0x2bc0e8u: goto label_2bc0e8;
        case 0x2bc0ecu: goto label_2bc0ec;
        case 0x2bc0f0u: goto label_2bc0f0;
        case 0x2bc0f4u: goto label_2bc0f4;
        case 0x2bc0f8u: goto label_2bc0f8;
        case 0x2bc0fcu: goto label_2bc0fc;
        case 0x2bc100u: goto label_2bc100;
        case 0x2bc104u: goto label_2bc104;
        case 0x2bc108u: goto label_2bc108;
        case 0x2bc10cu: goto label_2bc10c;
        case 0x2bc110u: goto label_2bc110;
        case 0x2bc114u: goto label_2bc114;
        case 0x2bc118u: goto label_2bc118;
        case 0x2bc11cu: goto label_2bc11c;
        default: return;
    }

label_2bb950:
    // 0x2bb950: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bb950u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bb954:
    // 0x2bb954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb958:
    // 0x2bb958: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bb95c:
    if (ctx->pc == 0x2BB95Cu) {
        ctx->pc = 0x2BB95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB958u;
        // 0x2bb95c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB960u;
        goto label_2bb960;
    }
    ctx->pc = 0x2BB958u;
    {
        const bool branch_taken_0x2bb958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BB95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB958u;
        // 0x2bb95c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb958) {
            ctx->pc = 0x2BB95Cu;
            goto label_2bb95c;
        }
    }
    ctx->pc = 0x2BB960u;
label_2bb960:
    // 0x2bb960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb964:
    // 0x2bb964: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bb964u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bb968:
    // 0x2bb968: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bb968u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb96c:
    // 0x2bb96c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb96cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb970:
    // 0x2bb970: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bb970u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb974:
    // 0x2bb974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb978:
    // 0x2bb978: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bb978u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb97c:
    // 0x2bb97c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb97cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb980:
    // 0x2bb980: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bb980u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bb984:
    // 0x2bb984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb988:
    // 0x2bb988: 0x4202003b  .word       0x4202003B                   # INVALID     $s0, $v0, 0x3B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb988u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3B at 0x2BB988 raw=0x4202003B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb98c:
    // 0x2bb98c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb98cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb990:
    // 0x2bb990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb994:
    // 0x2bb994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb998:
    // 0x2bb998: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bb99c:
    if (ctx->pc == 0x2BB99Cu) {
        ctx->pc = 0x2BB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB998u;
        // 0x2bb99c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB9A0u;
        goto label_2bb9a0;
    }
    ctx->pc = 0x2BB998u;
    {
        const bool branch_taken_0x2bb998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BB99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB998u;
        // 0x2bb99c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb998) {
            ctx->pc = 0x2CF9A0u;
            return;
        }
    }
    ctx->pc = 0x2BB9A0u;
label_2bb9a0:
    // 0x2bb9a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb9a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb9a4:
    // 0x2bb9a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb9a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb9a8:
    // 0x2bb9a8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bb9ac:
    if (ctx->pc == 0x2BB9ACu) {
        ctx->pc = 0x2BB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9A8u;
        // 0x2bb9ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB9B0u;
        goto label_2bb9b0;
    }
    ctx->pc = 0x2BB9A8u;
    {
        const bool branch_taken_0x2bb9a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bb9a8) {
            ctx->pc = 0x2BB9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB9A8u;
            // 0x2bb9ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD998u;
            { ctx->pc = 0x2bd998; return; }
        }
    }
    ctx->pc = 0x2BB9B0u;
label_2bb9b0:
    // 0x2bb9b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb9b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb9b4:
    // 0x2bb9b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb9b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb9b8:
    // 0x2bb9b8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bb9bc:
    if (ctx->pc == 0x2BB9BCu) {
        ctx->pc = 0x2BB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9B8u;
        // 0x2bb9bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB9C0u;
        goto label_2bb9c0;
    }
    ctx->pc = 0x2BB9B8u;
    {
        const bool branch_taken_0x2bb9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9B8u;
        // 0x2bb9bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb9b8) {
            ctx->pc = 0x2C1A3Cu;
            return;
        }
    }
    ctx->pc = 0x2BB9C0u;
label_2bb9c0:
    // 0x2bb9c0: 0x42020029  .word       0x42020029                   # INVALID     $s0, $v0, 0x29 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bb9c0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2BB9C0 raw=0x42020029"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bb9c4:
    // 0x2bb9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb9c8:
    // 0x2bb9c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb9c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb9cc:
    // 0x2bb9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb9d0:
    // 0x2bb9d0: 0x500b0025  beql        $zero, $t3, . + 4 + (0x25 << 2)
label_2bb9d4:
    if (ctx->pc == 0x2BB9D4u) {
        ctx->pc = 0x2BB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9D0u;
        // 0x2bb9d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB9D8u;
        goto label_2bb9d8;
    }
    ctx->pc = 0x2BB9D0u;
    {
        const bool branch_taken_0x2bb9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bb9d0) {
            ctx->pc = 0x2BB9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB9D0u;
            // 0x2bb9d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBA68u;
            goto label_2bba68;
        }
    }
    ctx->pc = 0x2BB9D8u;
label_2bb9d8:
    // 0x2bb9d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bb9d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bb9dc:
    // 0x2bb9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb9e0:
    // 0x2bb9e0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bb9e0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bb9e4:
    // 0x2bb9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb9e8:
    // 0x2bb9e8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bb9e8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bb9ec:
    // 0x2bb9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bb9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bb9f0:
    // 0x2bb9f0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bb9f4:
    if (ctx->pc == 0x2BB9F4u) {
        ctx->pc = 0x2BB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9F0u;
        // 0x2bb9f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BB9F8u;
        goto label_2bb9f8;
    }
    ctx->pc = 0x2BB9F0u;
    {
        const bool branch_taken_0x2bb9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9F0u;
        // 0x2bb9f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb9f0) {
            ctx->pc = 0x2BB9F4u;
            goto label_2bb9f4;
        }
    }
    ctx->pc = 0x2BB9F8u;
label_2bb9f8:
    // 0x2bb9f8: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2bb9fc:
    if (ctx->pc == 0x2BB9FCu) {
        ctx->pc = 0x2BB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9F8u;
        // 0x2bb9fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA00u;
        goto label_2bba00;
    }
    ctx->pc = 0x2BB9F8u;
    {
        const bool branch_taken_0x2bb9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB9F8u;
        // 0x2bb9fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb9f8) {
            ctx->pc = 0x2BBB94u;
            goto label_2bbb94;
        }
    }
    ctx->pc = 0x2BBA00u;
label_2bba00:
    // 0x2bba00: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bba00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BBA00 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bba04:
    // 0x2bba04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bba08:
    // 0x2bba08: 0x5203081e  beql        $s0, $v1, . + 4 + (0x81E << 2)
label_2bba0c:
    if (ctx->pc == 0x2BBA0Cu) {
        ctx->pc = 0x2BBA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA08u;
        // 0x2bba0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA10u;
        goto label_2bba10;
    }
    ctx->pc = 0x2BBA08u;
    {
        const bool branch_taken_0x2bba08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bba08) {
            ctx->pc = 0x2BBA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBA08u;
            // 0x2bba0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDA84u;
            { ctx->pc = 0x2bda84; return; }
        }
    }
    ctx->pc = 0x2BBA10u;
label_2bba10:
    // 0x2bba10: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2bba14:
    if (ctx->pc == 0x2BBA14u) {
        ctx->pc = 0x2BBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA10u;
        // 0x2bba14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA18u;
        goto label_2bba18;
    }
    ctx->pc = 0x2BBA10u;
    {
        const bool branch_taken_0x2bba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA10u;
        // 0x2bba14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba10) {
            ctx->pc = 0x2C1B14u;
            return;
        }
    }
    ctx->pc = 0x2BBA18u;
label_2bba18:
    // 0x2bba18: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2bba1c:
    if (ctx->pc == 0x2BBA1Cu) {
        ctx->pc = 0x2BBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA18u;
        // 0x2bba1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA20u;
        goto label_2bba20;
    }
    ctx->pc = 0x2BBA18u;
    {
        const bool branch_taken_0x2bba18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA18u;
        // 0x2bba1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba18) {
            ctx->pc = 0x2CFA38u;
            return;
        }
    }
    ctx->pc = 0x2BBA20u;
label_2bba20:
    // 0x2bba20: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bba20u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bba24:
    // 0x2bba24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bba28:
    // 0x2bba28: 0x5a00081a  blezl       $s0, . + 4 + (0x81A << 2)
label_2bba2c:
    if (ctx->pc == 0x2BBA2Cu) {
        ctx->pc = 0x2BBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA28u;
        // 0x2bba2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA30u;
        goto label_2bba30;
    }
    ctx->pc = 0x2BBA28u;
    {
        const bool branch_taken_0x2bba28 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bba28) {
            ctx->pc = 0x2BBA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBA28u;
            // 0x2bba2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDA94u;
            { ctx->pc = 0x2bda94; return; }
        }
    }
    ctx->pc = 0x2BBA30u;
label_2bba30:
    // 0x2bba30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bba30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bba34:
    // 0x2bba34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bba38:
    // 0x2bba38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bba38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bba3c:
    // 0x2bba3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bba40:
    // 0x2bba40: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bba40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bba44:
    // 0x2bba44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bba48:
    // 0x2bba48: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bba48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BBA48 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bba4c:
    // 0x2bba4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bba50:
    // 0x2bba50: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2bba54:
    if (ctx->pc == 0x2BBA54u) {
        ctx->pc = 0x2BBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA50u;
        // 0x2bba54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA58u;
        goto label_2bba58;
    }
    ctx->pc = 0x2BBA50u;
    {
        const bool branch_taken_0x2bba50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA50u;
        // 0x2bba54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba50) {
            ctx->pc = 0x2BFA58u;
            { ctx->pc = 0x2bfa58; return; }
        }
    }
    ctx->pc = 0x2BBA58u;
label_2bba58:
    // 0x2bba58: 0x800a5070  lb          $t2, 0x5070($zero)
    ctx->pc = 0x2bba58u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x5070u));
label_2bba5c:
    // 0x2bba5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bba60:
    // 0x2bba60: 0x800a0870  lb          $t2, 0x870($zero)
    ctx->pc = 0x2bba60u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x870u));
label_2bba64:
    // 0x2bba64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bba68:
    // 0x2bba68: 0x80012870  lb          $at, 0x2870($zero)
    ctx->pc = 0x2bba68u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2870u));
label_2bba6c:
    // 0x2bba6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bba70:
    // 0x2bba70: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2bba74:
    if (ctx->pc == 0x2BBA74u) {
        ctx->pc = 0x2BBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA70u;
        // 0x2bba74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA78u;
        goto label_2bba78;
    }
    ctx->pc = 0x2BBA70u;
    {
        const bool branch_taken_0x2bba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA70u;
        // 0x2bba74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba70) {
            ctx->pc = 0x2BDA78u;
            { ctx->pc = 0x2bda78; return; }
        }
    }
    ctx->pc = 0x2BBA78u;
label_2bba78:
    // 0x2bba78: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bba7c:
    if (ctx->pc == 0x2BBA7Cu) {
        ctx->pc = 0x2BBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA78u;
        // 0x2bba7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA80u;
        goto label_2bba80;
    }
    ctx->pc = 0x2BBA78u;
    {
        const bool branch_taken_0x2bba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BBA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA78u;
        // 0x2bba7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba78) {
            ctx->pc = 0x2C1AFCu;
            return;
        }
    }
    ctx->pc = 0x2BBA80u;
label_2bba80:
    // 0x2bba80: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bba84:
    if (ctx->pc == 0x2BBA84u) {
        ctx->pc = 0x2BBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA80u;
        // 0x2bba84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA88u;
        goto label_2bba88;
    }
    ctx->pc = 0x2BBA80u;
    {
        const bool branch_taken_0x2bba80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA80u;
        // 0x2bba84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba80) {
            ctx->pc = 0x2D1A80u;
            return;
        }
    }
    ctx->pc = 0x2BBA88u;
label_2bba88:
    // 0x2bba88: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bba8c:
    if (ctx->pc == 0x2BBA8Cu) {
        ctx->pc = 0x2BBA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA88u;
        // 0x2bba8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBA90u;
        goto label_2bba90;
    }
    ctx->pc = 0x2BBA88u;
    {
        const bool branch_taken_0x2bba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BBA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA88u;
        // 0x2bba8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba88) {
            ctx->pc = 0x2D1A90u;
            return;
        }
    }
    ctx->pc = 0x2BBA90u;
label_2bba90:
    // 0x2bba90: 0x3e5d000  .word       0x03E5D000                   # sll         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bba90u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2bba94:
    // 0x2bba94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bba98:
    // 0x2bba98: 0x3e6d000  .word       0x03E6D000                   # sll         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bba98u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2bba9c:
    // 0x2bba9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bba9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbaa0:
    // 0x2bbaa0: 0xb0b2800  j           func_C2CA000
label_2bbaa4:
    if (ctx->pc == 0x2BBAA4u) {
        ctx->pc = 0x2BBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAA0u;
        // 0x2bbaa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBAA8u;
        goto label_2bbaa8;
    }
    ctx->pc = 0x2BBAA0u;
    ctx->pc = 0x2BBAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAA0u;
    // 0x2bbaa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CA000u, 0x2BBAA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BBAA8u;
label_2bbaa8:
    // 0x2bbaa8: 0xb0b3000  j           func_C2CC000
label_2bbaac:
    if (ctx->pc == 0x2BBAACu) {
        ctx->pc = 0x2BBAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAA8u;
        // 0x2bbaac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBAB0u;
        goto label_2bbab0;
    }
    ctx->pc = 0x2BBAA8u;
    ctx->pc = 0x2BBAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAA8u;
    // 0x2bbaac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CC000u, 0x2BBAA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BBAB0u;
label_2bbab0:
    // 0x2bbab0: 0x42010070  .word       0x42010070                   # INVALID     $s0, $at, 0x70 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bbab0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x30 at 0x2BBAB0 raw=0x42010070"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbab4:
    // 0x2bbab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbab8:
    // 0x2bbab8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbab8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbabc:
    // 0x2bbabc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbabcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbac0:
    // 0x2bbac0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bbac0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bbac4:
    // 0x2bbac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbac8:
    // 0x2bbac8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bbac8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bbacc:
    // 0x2bbacc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbaccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbad0:
    // 0x2bbad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbad4:
    // 0x2bbad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbad8:
    // 0x2bbad8: 0x80002efc  lb          $zero, 0x2EFC($zero)
    ctx->pc = 0x2bbad8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2EFCu));
label_2bbadc:
    // 0x2bbadc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbadcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbae0:
    // 0x2bbae0: 0x10021005  beq         $zero, $v0, . + 4 + (0x1005 << 2)
label_2bbae4:
    if (ctx->pc == 0x2BBAE4u) {
        ctx->pc = 0x2BBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAE0u;
        // 0x2bbae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBAE8u;
        goto label_2bbae8;
    }
    ctx->pc = 0x2BBAE0u;
    {
        const bool branch_taken_0x2bbae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAE0u;
        // 0x2bbae4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbae0) {
            ctx->pc = 0x2BFAF8u;
            { ctx->pc = 0x2bfaf8; return; }
        }
    }
    ctx->pc = 0x2BBAE8u;
label_2bbae8:
    // 0x2bbae8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bbae8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bbaec:
    // 0x2bbaec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbaecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbaf0:
    // 0x2bbaf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbaf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbaf4:
    // 0x2bbaf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbaf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbaf8:
    // 0x2bbaf8: 0x800036fc  lb          $zero, 0x36FC($zero)
    ctx->pc = 0x2bbaf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x36FCu));
label_2bbafc:
    // 0x2bbafc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbafcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb00:
    // 0x2bbb00: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bbb00u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BBB00 raw=0x48007800");
 /* MITIGATED */
label_2bbb04:
    // 0x2bbb04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb08:
    // 0x2bbb08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbb08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbb0c:
    // 0x2bbb0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb10:
    // 0x2bbb10: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbb10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2bbb14:
    // 0x2bbb14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb18:
    // 0x2bbb18: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbb18u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BBB18 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbb1c:
    // 0x2bbb1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb20:
    // 0x2bbb20: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbb20u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2bbb24:
    // 0x2bbb24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb28:
    // 0x2bbb28: 0x1f84003  .word       0x01F84003                   # sra         $t0, $t8, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbb28u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 24), 0));
label_2bbb2c:
    // 0x2bbb2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb30:
    // 0x2bbb30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbb30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbb34:
    // 0x2bbb34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb38:
    // 0x2bbb38: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2bbb38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bbb3c:
    // 0x2bbb3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb40:
    // 0x2bbb40: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2bbb40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bbb44:
    // 0x2bbb44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb48:
    // 0x2bbb48: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2bbb48u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bbb4c:
    // 0x2bbb4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb50:
    // 0x2bbb50: 0x81e9c37d  lb          $t1, -0x3C83($t7)
    ctx->pc = 0x2bbb50u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bbb54:
    // 0x2bbb54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb58:
    // 0x2bbb58: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bbb58u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BBB58 raw=0x48001000");
 /* MITIGATED */
label_2bbb5c:
    // 0x2bbb5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb60:
    // 0x2bbb60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbb60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbb64:
    // 0x2bbb64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb68:
    // 0x2bbb68: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bbb68u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bbb6c:
    // 0x2bbb6c: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbb6cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bbb70:
    // 0x2bbb70: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bbb70u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bbb74:
    // 0x2bbb74: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbb74u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bbb78:
    // 0x2bbb78: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bbb78u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bbb7c:
    // 0x2bbb7c: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbb7cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bbb80:
    // 0x2bbb80: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bbb80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bbb84:
    // 0x2bbb84: 0x1e5fd28  .word       0x01E5FD28                   # mfsa        $ra # 01E50500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbb84u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bbb88:
    // 0x2bbb88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbb88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbb8c:
    // 0x2bbb8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbb8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbb90:
    // 0x2bbb90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbb90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbb94:
    // 0x2bbb94: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbb94u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bbb98:
    // 0x2bbb98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbb98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbb9c:
    // 0x2bbb9c: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbb9cu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2bbba0:
    // 0x2bbba0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbba0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbba4:
    // 0x2bbba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbba8:
    // 0x2bbba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbbac:
    // 0x2bbbac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbbacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbbb0:
    // 0x2bbbb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbbb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbbb4:
    // 0x2bbbb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbbb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbbb8:
    // 0x2bbbb8: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2bbbb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2bbbbc:
    // 0x2bbbbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbbbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbbc0:
    // 0x2bbbc0: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2bbbc0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2bbbc4:
    // 0x2bbbc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbbc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbbc8:
    // 0x2bbbc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbbc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbbcc:
    // 0x2bbbcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbbccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbbd0:
    // 0x2bbbd0: 0x50040010  beql        $zero, $a0, . + 4 + (0x10 << 2)
label_2bbbd4:
    if (ctx->pc == 0x2BBBD4u) {
        ctx->pc = 0x2BBBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBD0u;
        // 0x2bbbd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBBD8u;
        goto label_2bbbd8;
    }
    ctx->pc = 0x2BBBD0u;
    {
        const bool branch_taken_0x2bbbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bbbd0) {
            ctx->pc = 0x2BBBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBBD0u;
            // 0x2bbbd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBC14u;
            goto label_2bbc14;
        }
    }
    ctx->pc = 0x2BBBD8u;
label_2bbbd8:
    // 0x2bbbd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbbd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbbdc:
    // 0x2bbbdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbbdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbbe0:
    // 0x2bbbe0: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bbbe0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bbbe4:
    // 0x2bbbe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbbe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbbe8:
    // 0x2bbbe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbbe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbbec:
    // 0x2bbbec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbbecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbbf0:
    // 0x2bbbf0: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2bbbf4:
    if (ctx->pc == 0x2BBBF4u) {
        ctx->pc = 0x2BBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBF0u;
        // 0x2bbbf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBBF8u;
        goto label_2bbbf8;
    }
    ctx->pc = 0x2BBBF0u;
    {
        const bool branch_taken_0x2bbbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bbbf0) {
            ctx->pc = 0x2BBBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBBF0u;
            // 0x2bbbf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBC00u;
            goto label_2bbc00;
        }
    }
    ctx->pc = 0x2BBBF8u;
label_2bbbf8:
    // 0x2bbbf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbbf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbbfc:
    // 0x2bbbfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbbfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc00:
    // 0x2bbc00: 0x40000020  .word       0x40000020                   # mfc0        $zero, Index # 00000020 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bbc00u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bbc04:
    // 0x2bbc04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc08:
    // 0x2bbc08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbc08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbc0c:
    // 0x2bbc0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc10:
    // 0x2bbc10: 0x42010020  .word       0x42010020                   # INVALID     $s0, $at, 0x20 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bbc10u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x20 at 0x2BBC10 raw=0x42010020"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbc14:
    // 0x2bbc14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc18:
    // 0x2bbc18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbc18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbc1c:
    // 0x2bbc1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc20:
    // 0x2bbc20: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bbc20u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bbc24:
    // 0x2bbc24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc28:
    // 0x2bbc28: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bbc28u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bbc2c:
    // 0x2bbc2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc30:
    // 0x2bbc30: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bbc30u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bbc34:
    // 0x2bbc34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc38:
    // 0x2bbc38: 0x81e9eb7d  lb          $t1, -0x1483($t7)
    ctx->pc = 0x2bbc38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294962045)));
label_2bbc3c:
    // 0x2bbc3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc40:
    // 0x2bbc40: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bbc44:
    if (ctx->pc == 0x2BBC44u) {
        ctx->pc = 0x2BBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC40u;
        // 0x2bbc44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBC48u;
        goto label_2bbc48;
    }
    ctx->pc = 0x2BBC40u;
    {
        const bool branch_taken_0x2bbc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC40u;
        // 0x2bbc44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc40) {
            ctx->pc = 0x2D1C48u;
            return;
        }
    }
    ctx->pc = 0x2BBC48u;
label_2bbc48:
    // 0x2bbc48: 0x40000017  .word       0x40000017                   # mfc0        $zero, Index # 00000017 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bbc48u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bbc4c:
    // 0x2bbc4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc50:
    // 0x2bbc50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbc50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbc54:
    // 0x2bbc54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc58:
    // 0x2bbc58: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bbc58u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bbc5c:
    // 0x2bbc5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc60:
    // 0x2bbc60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbc60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbc64:
    // 0x2bbc64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc68:
    // 0x2bbc68: 0x5004000e  beql        $zero, $a0, . + 4 + (0xE << 2)
label_2bbc6c:
    if (ctx->pc == 0x2BBC6Cu) {
        ctx->pc = 0x2BBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBC68u;
        // 0x2bbc6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBC70u;
        goto label_2bbc70;
    }
    ctx->pc = 0x2BBC68u;
    {
        const bool branch_taken_0x2bbc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bbc68) {
            ctx->pc = 0x2BBC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBC68u;
            // 0x2bbc6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBCA4u;
            goto label_2bbca4;
        }
    }
    ctx->pc = 0x2BBC70u;
label_2bbc70:
    // 0x2bbc70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbc70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbc74:
    // 0x2bbc74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc78:
    // 0x2bbc78: 0x42010013  .word       0x42010013                   # INVALID     $s0, $at, 0x13 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bbc78u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x13 at 0x2BBC78 raw=0x42010013"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbc7c:
    // 0x2bbc7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc80:
    // 0x2bbc80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbc80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbc84:
    // 0x2bbc84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc88:
    // 0x2bbc88: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bbc88u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bbc8c:
    // 0x2bbc8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc90:
    // 0x2bbc90: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bbc90u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bbc94:
    // 0x2bbc94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbc98:
    // 0x2bbc98: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bbc98u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2bbc9c:
    // 0x2bbc9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbc9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbca0:
    // 0x2bbca0: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2bbca0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bbca4:
    // 0x2bbca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbca8:
    // 0x2bbca8: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bbca8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bbcac:
    // 0x2bbcac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbcacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbcb0:
    // 0x2bbcb0: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bbcb0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bbcb4:
    // 0x2bbcb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbcb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbcb8:
    // 0x2bbcb8: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bbcb8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bbcbc:
    // 0x2bbcbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbcbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbcc0:
    // 0x2bbcc0: 0x81e9eb7d  lb          $t1, -0x1483($t7)
    ctx->pc = 0x2bbcc0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294962045)));
label_2bbcc4:
    // 0x2bbcc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbcc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbcc8:
    // 0x2bbcc8: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2bbccc:
    if (ctx->pc == 0x2BBCCCu) {
        ctx->pc = 0x2BBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCC8u;
        // 0x2bbccc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBCD0u;
        goto label_2bbcd0;
    }
    ctx->pc = 0x2BBCC8u;
    {
        const bool branch_taken_0x2bbcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BBCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCC8u;
        // 0x2bbccc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbcc8) {
            ctx->pc = 0x2D1CD4u;
            return;
        }
    }
    ctx->pc = 0x2BBCD0u;
label_2bbcd0:
    // 0x2bbcd0: 0x40000006  .word       0x40000006                   # mfc0        $zero, Index # 00000006 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bbcd0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bbcd4:
    // 0x2bbcd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbcd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbcd8:
    // 0x2bbcd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbcd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbcdc:
    // 0x2bbcdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbcdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbce0:
    // 0x2bbce0: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bbce0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bbce4:
    // 0x2bbce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbce8:
    // 0x2bbce8: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bbce8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bbcec:
    // 0x2bbcec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbcecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbcf0:
    // 0x2bbcf0: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bbcf0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2bbcf4:
    // 0x2bbcf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbcf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbcf8:
    // 0x2bbcf8: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2bbcf8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bbcfc:
    // 0x2bbcfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbcfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd00:
    // 0x2bbd00: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bbd04:
    if (ctx->pc == 0x2BBD04u) {
        ctx->pc = 0x2BBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD00u;
        // 0x2bbd04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD08u;
        goto label_2bbd08;
    }
    ctx->pc = 0x2BBD00u;
    {
        const bool branch_taken_0x2bbd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BBD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD00u;
        // 0x2bbd04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd00) {
            ctx->pc = 0x2D1D08u;
            return;
        }
    }
    ctx->pc = 0x2BBD08u;
label_2bbd08:
    // 0x2bbd08: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bbd08u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BBD08 raw=0x48001000");
 /* MITIGATED */
label_2bbd0c:
    // 0x2bbd0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd10:
    // 0x2bbd10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd14:
    // 0x2bbd14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd18:
    // 0x2bbd18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd1c:
    // 0x2bbd1c: 0x3c8e58  .word       0x003C8E58                   # mult        $s1, $at, $gp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbd1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2bbd20:
    // 0x2bbd20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd24:
    // 0x2bbd24: 0x3cae98  .word       0x003CAE98                   # mult        $s5, $at, $gp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbd24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2bbd28:
    // 0x2bbd28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd2c:
    // 0x2bbd2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd30:
    // 0x2bbd30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd34:
    // 0x2bbd34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd38:
    // 0x2bbd38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd3c:
    // 0x2bbd3c: 0x1f98e47  .word       0x01F98E47                   # srav        $s1, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbd3cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2bbd40:
    // 0x2bbd40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd44:
    // 0x2bbd44: 0x1faae87  .word       0x01FAAE87                   # srav        $s5, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbd44u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2bbd48:
    // 0x2bbd48: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2bbd48u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2bbd4c:
    // 0x2bbd4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd50:
    // 0x2bbd50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd54:
    // 0x2bbd54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd58:
    // 0x2bbd58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd5c:
    // 0x2bbd5c: 0x1f9c9fd  .word       0x01F9C9FD                   # INVALID     $t7, $t9, -0x3603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbd5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBD5C raw=0x01F9C9FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbd60:
    // 0x2bbd60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd64:
    // 0x2bbd64: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbd64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBD64 raw=0x01FAD1FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbd68:
    // 0x2bbd68: 0x500c0004  beql        $zero, $t4, . + 4 + (0x4 << 2)
label_2bbd6c:
    if (ctx->pc == 0x2BBD6Cu) {
        ctx->pc = 0x2BBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD68u;
        // 0x2bbd6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD70u;
        goto label_2bbd70;
    }
    ctx->pc = 0x2BBD68u;
    {
        const bool branch_taken_0x2bbd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bbd68) {
            ctx->pc = 0x2BBD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBD68u;
            // 0x2bbd6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBD7Cu;
            goto label_2bbd7c;
        }
    }
    ctx->pc = 0x2BBD70u;
label_2bbd70:
    // 0x2bbd70: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2bbd74:
    if (ctx->pc == 0x2BBD74u) {
        ctx->pc = 0x2BBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD70u;
        // 0x2bbd74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBD78u;
        goto label_2bbd78;
    }
    ctx->pc = 0x2BBD70u;
    {
        const bool branch_taken_0x2bbd70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2BBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBD70u;
        // 0x2bbd74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd70) {
            ctx->pc = 0x2D3D78u;
            return;
        }
    }
    ctx->pc = 0x2BBD78u;
label_2bbd78:
    // 0x2bbd78: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2bbd78u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2bbd7c:
    // 0x2bbd7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd80:
    // 0x2bbd80: 0x0  nop
    ctx->pc = 0x2bbd80u;
    // NOP
label_2bbd84:
    // 0x2bbd84: 0x4aac0200  vaddx.yw    $vf8, $vf0, $vf12x
    ctx->pc = 0x2bbd84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_2bbd88:
    // 0x2bbd88: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bbd88u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bbd8c:
    // 0x2bbd8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd90:
    // 0x2bbd90: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2bbd90u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2bbd94:
    // 0x2bbd94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbd94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbd98:
    // 0x2bbd98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbd98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbd9c:
    // 0x2bbd9c: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbd9cu;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2bbda0:
    // 0x2bbda0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbda0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbda4:
    // 0x2bbda4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbda4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbda8:
    // 0x2bbda8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbda8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdac:
    // 0x2bbdac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbdacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbdb0:
    // 0x2bbdb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdb4:
    // 0x2bbdb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbdb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbdb8:
    // 0x2bbdb8: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2bbdb8u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2bbdbc:
    // 0x2bbdbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbdbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbdc0:
    // 0x2bbdc0: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2bbdc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2bbdc4:
    // 0x2bbdc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbdc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbdc8:
    // 0x2bbdc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdcc:
    // 0x2bbdcc: 0x800720  .word       0x00800720                   # add         $zero, $a0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbdccu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2bbdd0:
    // 0x2bbdd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdd4:
    // 0x2bbdd4: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbdd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2bbdd8:
    // 0x2bbdd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbddc:
    // 0x2bbddc: 0x1f2b6ac  .word       0x01F2B6AC                   # dadd        $s6, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbddcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2bbde0:
    // 0x2bbde0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbde0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbde4:
    // 0x2bbde4: 0x1f3beec  .word       0x01F3BEEC                   # dadd        $s7, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbde4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2bbde8:
    // 0x2bbde8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbde8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdec:
    // 0x2bbdec: 0x1f42f6c  .word       0x01F42F6C                   # dadd        $a1, $t7, $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbdecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_2bbdf0:
    // 0x2bbdf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdf4:
    // 0x2bbdf4: 0x1fcce59  .word       0x01FCCE59                   # multu       $t7, $gp # 0000CE40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbdf4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2bbdf8:
    // 0x2bbdf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbdf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbdfc:
    // 0x2bbdfc: 0x1fcd699  .word       0x01FCD699                   # multu       $t7, $gp # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbdfcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2bbe00:
    // 0x2bbe00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe04:
    // 0x2bbe04: 0x1fcded9  .word       0x01FCDED9                   # multu       $t7, $gp # 0000DEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe04u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2bbe08:
    // 0x2bbe08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe0c:
    // 0x2bbe0c: 0x1fcef59  .word       0x01FCEF59                   # multu       $t7, $gp # 0000EF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe0cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_2bbe10:
    // 0x2bbe10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe14:
    // 0x2bbe14: 0x1f1ce68  .word       0x01F1CE68                   # mfsa        $t9 # 01F10640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbe14u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2bbe18:
    // 0x2bbe18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe1c:
    // 0x2bbe1c: 0x1f2d6a8  .word       0x01F2D6A8                   # mfsa        $k0 # 01F20680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbe1cu;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2bbe20:
    // 0x2bbe20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe24:
    // 0x2bbe24: 0x1f3dee8  .word       0x01F3DEE8                   # mfsa        $k1 # 01F306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbe24u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2bbe28:
    // 0x2bbe28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe2c:
    // 0x2bbe2c: 0x1f4ef68  .word       0x01F4EF68                   # mfsa        $sp # 01F40740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbe2cu;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_2bbe30:
    // 0x2bbe30: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bbe30u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BBE30 raw=0x48000800");
 /* MITIGATED */
label_2bbe34:
    // 0x2bbe34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe38:
    // 0x2bbe38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe3c:
    // 0x2bbe3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe40:
    // 0x2bbe40: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2bbe44:
    // 0x2bbe44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe48:
    // 0x2bbe48: 0x1f1000a  movz        $zero, $t7, $s1
    ctx->pc = 0x2bbe48u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2bbe4c:
    // 0x2bbe4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe50:
    // 0x2bbe50: 0x1f2000b  movn        $zero, $t7, $s2
    ctx->pc = 0x2bbe50u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2bbe54:
    // 0x2bbe54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe58:
    // 0x2bbe58: 0x1f3000c  .word       0x01F3000C                   # syscall     0 # 01F30000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe58u;
    ctx->pc = 0x2BBE5Cu;
runtime->handleSyscall(rdram, ctx, 0x7CC00u);
label_2bbe5c:
    // 0x2bbe5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe60:
    // 0x2bbe60: 0x1f4000d  break       500
    ctx->pc = 0x2bbe60u;
    runtime->handleBreak(rdram, ctx);
label_2bbe64:
    // 0x2bbe64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbe68:
    // 0x2bbe68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe6c:
    // 0x2bbe6c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2bbe70:
    // 0x2bbe70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe74:
    // 0x2bbe74: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBE74 raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbe78:
    // 0x2bbe78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe7c:
    // 0x2bbe7c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2bbe80:
    // 0x2bbe80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe84:
    // 0x2bbe84: 0x1f5a64b  .word       0x01F5A64B                   # movn        $s4, $t7, $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbe84u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2bbe88:
    // 0x2bbe88: 0x10072801  beq         $zero, $a3, . + 4 + (0x2801 << 2)
label_2bbe8c:
    if (ctx->pc == 0x2BBE8Cu) {
        ctx->pc = 0x2BBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE88u;
        // 0x2bbe8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE90u;
        goto label_2bbe90;
    }
    ctx->pc = 0x2BBE88u;
    {
        const bool branch_taken_0x2bbe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE88u;
        // 0x2bbe8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe88) {
            ctx->pc = 0x2C5E90u;
            return;
        }
    }
    ctx->pc = 0x2BBE90u;
label_2bbe90:
    // 0x2bbe90: 0x10093001  beq         $zero, $t1, . + 4 + (0x3001 << 2)
label_2bbe94:
    if (ctx->pc == 0x2BBE94u) {
        ctx->pc = 0x2BBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE90u;
        // 0x2bbe94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBE98u;
        goto label_2bbe98;
    }
    ctx->pc = 0x2BBE90u;
    {
        const bool branch_taken_0x2bbe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBE90u;
        // 0x2bbe94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe90) {
            ctx->pc = 0x2C7E98u;
            return;
        }
    }
    ctx->pc = 0x2BBE98u;
label_2bbe98:
    // 0x2bbe98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbe98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbe9c:
    // 0x2bbe9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbe9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbea0:
    // 0x2bbea0: 0x81f903bc  lb          $t9, 0x3BC($t7)
    ctx->pc = 0x2bbea0u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2bbea4:
    // 0x2bbea4: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbea4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2bbea8:
    // 0x2bbea8: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbea8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2bbeac:
    // 0x2bbeac: 0x400183  .word       0x00400183                   # sra         $zero, $zero, 6 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbeacu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 6));
label_2bbeb0:
    // 0x2bbeb0: 0x1864003  .word       0x01864003                   # sra         $t0, $a2, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbeb0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 0));
label_2bbeb4:
    // 0x2bbeb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbeb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbeb8:
    // 0x2bbeb8: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbeb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BBEB8 raw=0x01FB4001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbebc:
    // 0x2bbebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbec0:
    // 0x2bbec0: 0x1f54004  sllv        $t0, $s5, $t7
    ctx->pc = 0x2bbec0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 15) & 0x1F));
label_2bbec4:
    // 0x2bbec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbec8:
    // 0x2bbec8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbec8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbecc:
    // 0x2bbecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbeccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbed0:
    // 0x2bbed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbed4:
    // 0x2bbed4: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbed4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2bbed8:
    // 0x2bbed8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbed8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbedc:
    // 0x2bbedc: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbedcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2bbee0:
    // 0x2bbee0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbee0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbee4:
    // 0x2bbee4: 0x1e0ce1c  .word       0x01E0CE1C                   # dmult       $t7, $zero # 0000CE00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbee4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BBEE4 raw=0x01E0CE1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbee8:
    // 0x2bbee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbeec:
    // 0x2bbeec: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbeecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BBEEC raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbef0:
    // 0x2bbef0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbef0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbef4:
    // 0x2bbef4: 0x1c0319c  .word       0x01C0319C                   # dmult       $t6, $zero # 00003180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbef4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BBEF4 raw=0x01C0319C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbef8:
    // 0x2bbef8: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2bbefc:
    if (ctx->pc == 0x2BBEFCu) {
        ctx->pc = 0x2BBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEF8u;
        // 0x2bbefc: 0x1fbd97c  .word       0x01FBD97C                   # dsll32      $k1, $k1, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF00u;
        goto label_2bbf00;
    }
    ctx->pc = 0x2BBEF8u;
    {
        const bool branch_taken_0x2bbef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBEF8u;
        // 0x2bbefc: 0x1fbd97c  .word       0x01FBD97C                   # dsll32      $k1, $k1, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbef8) {
            ctx->pc = 0x2C9F08u;
            return;
        }
    }
    ctx->pc = 0x2BBF00u;
label_2bbf00:
    // 0x2bbf00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbf00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbf04:
    // 0x2bbf04: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BBF04 raw=0x0020D69F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbf08:
    // 0x2bbf08: 0x3e7b7fd  .word       0x03E7B7FD                   # INVALID     $ra, $a3, -0x4803 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBF08 raw=0x03E7B7FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbf0c:
    // 0x2bbf0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf10:
    // 0x2bbf10: 0x3e93000  .word       0x03E93000                   # sll         $a2, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_2bbf14:
    // 0x2bbf14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf18:
    // 0x2bbf18: 0x2275ffe  .word       0x02275FFE                   # dsrl32      $t3, $a3, 31 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) >> (32 + 31));
label_2bbf1c:
    // 0x2bbf1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf20:
    // 0x2bbf20: 0x3c7dffe  .word       0x03C7DFFE                   # dsrl32      $k1, $a3, 31 # 03C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf20u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 7) >> (32 + 31));
label_2bbf24:
    // 0x2bbf24: 0x20d610  .word       0x0020D610                   # mfhi        $k0 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf24u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2bbf28:
    // 0x2bbf28: 0x3e9d801  .word       0x03E9D801                   # INVALID     $ra, $t1, -0x27FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BBF28 raw=0x03E9D801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbf2c:
    // 0x2bbf2c: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2bbf30:
    // 0x2bbf30: 0x10094803  beq         $zero, $t1, . + 4 + (0x4803 << 2)
label_2bbf34:
    if (ctx->pc == 0x2BBF34u) {
        ctx->pc = 0x2BBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF30u;
        // 0x2bbf34: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBF34 raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF38u;
        goto label_2bbf38;
    }
    ctx->pc = 0x2BBF30u;
    {
        const bool branch_taken_0x2bbf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF30u;
        // 0x2bbf34: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBF34 raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf30) {
            ctx->pc = 0x2CDF40u;
            return;
        }
    }
    ctx->pc = 0x2BBF38u;
label_2bbf38:
    // 0x2bbf38: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_2bbf3c:
    if (ctx->pc == 0x2BBF3Cu) {
        ctx->pc = 0x2BBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF38u;
        // 0x2bbf3c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF40u;
        goto label_2bbf40;
    }
    ctx->pc = 0x2BBF38u;
    {
        const bool branch_taken_0x2bbf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF38u;
        // 0x2bbf3c: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf38) {
            ctx->pc = 0x2CBF4Cu;
            return;
        }
    }
    ctx->pc = 0x2BBF40u;
label_2bbf40:
    // 0x2bbf40: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2bbf40u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2bbf44:
    // 0x2bbf44: 0x1fac17d  .word       0x01FAC17D                   # INVALID     $t7, $k0, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BBF44 raw=0x01FAC17D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbf48:
    // 0x2bbf48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbf48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbf4c:
    // 0x2bbf4c: 0x1f5a64b  .word       0x01F5A64B                   # movn        $s4, $t7, $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf4cu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2bbf50:
    // 0x2bbf50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbf50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbf54:
    // 0x2bbf54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf58:
    // 0x2bbf58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbf58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbf5c:
    // 0x2bbf5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf60:
    // 0x2bbf60: 0x3e7d7ff  .word       0x03E7D7FF                   # dsra32      $k0, $a3, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf60u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 7) >> (32 + 31));
label_2bbf64:
    // 0x2bbf64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf68:
    // 0x2bbf68: 0x520a07e6  beql        $s0, $t2, . + 4 + (0x7E6 << 2)
label_2bbf6c:
    if (ctx->pc == 0x2BBF6Cu) {
        ctx->pc = 0x2BBF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF68u;
        // 0x2bbf6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF70u;
        goto label_2bbf70;
    }
    ctx->pc = 0x2BBF68u;
    {
        const bool branch_taken_0x2bbf68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bbf68) {
            ctx->pc = 0x2BBF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBF68u;
            // 0x2bbf6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDF04u;
            { ctx->pc = 0x2bdf04; return; }
        }
    }
    ctx->pc = 0x2BBF70u;
label_2bbf70:
    // 0x2bbf70: 0x3e9d7ff  .word       0x03E9D7FF                   # dsra32      $k0, $t1, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbf70u;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 9) >> (32 + 31));
label_2bbf74:
    // 0x2bbf74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf78:
    // 0x2bbf78: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bbf78u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BBF78 raw=0x48000800");
 /* MITIGATED */
label_2bbf7c:
    // 0x2bbf7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf80:
    // 0x2bbf80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bbf80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bbf84:
    // 0x2bbf84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf88:
    // 0x2bbf88: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bbf88u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bbf8c:
    // 0x2bbf8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbf8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbf90:
    // 0x2bbf90: 0x1001100b  beq         $zero, $at, . + 4 + (0x100B << 2)
label_2bbf94:
    if (ctx->pc == 0x2BBF94u) {
        ctx->pc = 0x2BBF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF90u;
        // 0x2bbf94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBF98u;
        goto label_2bbf98;
    }
    ctx->pc = 0x2BBF90u;
    {
        const bool branch_taken_0x2bbf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BBF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF90u;
        // 0x2bbf94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf90) {
            ctx->pc = 0x2BFFC0u;
            return;
        }
    }
    ctx->pc = 0x2BBF98u;
label_2bbf98:
    // 0x2bbf98: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2bbf9c:
    if (ctx->pc == 0x2BBF9Cu) {
        ctx->pc = 0x2BBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF98u;
        // 0x2bbf9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFA0u;
        goto label_2bbfa0;
    }
    ctx->pc = 0x2BBF98u;
    {
        const bool branch_taken_0x2bbf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF98u;
        // 0x2bbf9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbf98) {
            ctx->pc = 0x2BC134u;
            { ctx->pc = 0x2bc134; return; }
        }
    }
    ctx->pc = 0x2BBFA0u;
label_2bbfa0:
    // 0x2bbfa0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbfa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BBFA0 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbfa4:
    // 0x2bbfa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbfa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbfa8:
    // 0x2bbfa8: 0x1002104b  beq         $zero, $v0, . + 4 + (0x104B << 2)
label_2bbfac:
    if (ctx->pc == 0x2BBFACu) {
        ctx->pc = 0x2BBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFA8u;
        // 0x2bbfac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFB0u;
        goto label_2bbfb0;
    }
    ctx->pc = 0x2BBFA8u;
    {
        const bool branch_taken_0x2bbfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFA8u;
        // 0x2bbfac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfa8) {
            ctx->pc = 0x2C00D8u;
            return;
        }
    }
    ctx->pc = 0x2BBFB0u;
label_2bbfb0:
    // 0x2bbfb0: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bbfb4:
    if (ctx->pc == 0x2BBFB4u) {
        ctx->pc = 0x2BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFB0u;
        // 0x2bbfb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFB8u;
        goto label_2bbfb8;
    }
    ctx->pc = 0x2BBFB0u;
    {
        const bool branch_taken_0x2bbfb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFB0u;
        // 0x2bbfb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfb0) {
            ctx->pc = 0x2BDFB0u;
            { ctx->pc = 0x2bdfb0; return; }
        }
    }
    ctx->pc = 0x2BBFB8u;
label_2bbfb8:
    // 0x2bbfb8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bbfbc:
    if (ctx->pc == 0x2BBFBCu) {
        ctx->pc = 0x2BBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFB8u;
        // 0x2bbfbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFC0u;
        goto label_2bbfc0;
    }
    ctx->pc = 0x2BBFB8u;
    {
        const bool branch_taken_0x2bbfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFB8u;
        // 0x2bbfbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfb8) {
            ctx->pc = 0x2D1FC0u;
            return;
        }
    }
    ctx->pc = 0x2BBFC0u;
label_2bbfc0:
    // 0x2bbfc0: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbfc0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bbfc4:
    // 0x2bbfc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbfc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbfc8:
    // 0x2bbfc8: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbfc8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BBFC8 raw=0x03E2D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bbfcc:
    // 0x2bbfcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbfccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bbfd0:
    // 0x2bbfd0: 0xb0b1000  j           func_C2C4000
label_2bbfd4:
    if (ctx->pc == 0x2BBFD4u) {
        ctx->pc = 0x2BBFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFD0u;
        // 0x2bbfd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFD8u;
        goto label_2bbfd8;
    }
    ctx->pc = 0x2BBFD0u;
    ctx->pc = 0x2BBFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBFD0u;
    // 0x2bbfd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BBFD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BBFD8u;
label_2bbfd8:
    // 0x2bbfd8: 0xa800fff  j           func_A003FFC
label_2bbfdc:
    if (ctx->pc == 0x2BBFDCu) {
        ctx->pc = 0x2BBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFD8u;
        // 0x2bbfdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFE0u;
        goto label_2bbfe0;
    }
    ctx->pc = 0x2BBFD8u;
    ctx->pc = 0x2BBFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBFD8u;
    // 0x2bbfdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2BBFD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BBFE0u;
label_2bbfe0:
    // 0x2bbfe0: 0xb030fff  j           func_C0C3FFC
label_2bbfe4:
    if (ctx->pc == 0x2BBFE4u) {
        ctx->pc = 0x2BBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFE0u;
        // 0x2bbfe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFE8u;
        goto label_2bbfe8;
    }
    ctx->pc = 0x2BBFE0u;
    ctx->pc = 0x2BBFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBFE0u;
    // 0x2bbfe4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2BBFE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BBFE8u;
label_2bbfe8:
    // 0x2bbfe8: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bbfec:
    if (ctx->pc == 0x2BBFECu) {
        ctx->pc = 0x2BBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFE8u;
        // 0x2bbfec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BBFF0u;
        goto label_2bbff0;
    }
    ctx->pc = 0x2BBFE8u;
    {
        const bool branch_taken_0x2bbfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBFE8u;
        // 0x2bbfec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbfe8) {
            ctx->pc = 0x2D8034u;
            return;
        }
    }
    ctx->pc = 0x2BBFF0u;
label_2bbff0:
    // 0x2bbff0: 0x1f67ff6  tne         $t7, $s6, 511
    ctx->pc = 0x2bbff0u;
    if (GPR_U64(ctx, 15) != GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2bbff4:
    // 0x2bbff4: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bbff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2bbff8:
    // 0x2bbff8: 0x1f77ffa  .word       0x01F77FFA                   # dsrl        $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bbff8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) >> 31);
label_2bbffc:
    // 0x2bbffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bbffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc000:
    // 0x2bc000: 0x1f87ffe  .word       0x01F87FFE                   # dsrl32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc000u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) >> (32 + 31));
label_2bc004:
    // 0x2bc004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc008:
    // 0x2bc008: 0x1f57ff5  .word       0x01F57FF5                   # INVALID     $t7, $s5, 0x7FF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc008u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2BC008 raw=0x01F57FF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc00c:
    // 0x2bc00c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc00cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc010:
    // 0x2bc010: 0x1f37ff9  .word       0x01F37FF9                   # INVALID     $t7, $s3, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2BC010 raw=0x01F37FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc014:
    // 0x2bc014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc018:
    // 0x2bc018: 0x1f47ffd  .word       0x01F47FFD                   # INVALID     $t7, $s4, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc018u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC018 raw=0x01F47FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc01c:
    // 0x2bc01c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc01cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc020:
    // 0x2bc020: 0x1f07ff4  teq         $t7, $s0, 511
    ctx->pc = 0x2bc020u;
    if (GPR_U64(ctx, 15) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_2bc024:
    // 0x2bc024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc028:
    // 0x2bc028: 0x1f17ff8  .word       0x01F17FF8                   # dsll        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc028u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 31);
label_2bc02c:
    // 0x2bc02c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc02cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc030:
    // 0x2bc030: 0x1f27ffc  .word       0x01F27FFC                   # dsll32      $t7, $s2, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc030u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 31));
label_2bc034:
    // 0x2bc034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc038:
    // 0x2bc038: 0x1f97ff7  .word       0x01F97FF7                   # INVALID     $t7, $t9, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc038u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2BC038 raw=0x01F97FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc03c:
    // 0x2bc03c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc03cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc040:
    // 0x2bc040: 0x1fa7ffb  .word       0x01FA7FFB                   # dsra        $t7, $k0, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc040u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 26) >> 31);
label_2bc044:
    // 0x2bc044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc048:
    // 0x2bc048: 0x1fb7fff  .word       0x01FB7FFF                   # dsra32      $t7, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc048u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 27) >> (32 + 31));
label_2bc04c:
    // 0x2bc04c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc04cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc050:
    // 0x2bc050: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bc050u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bc054:
    // 0x2bc054: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc058:
    // 0x2bc058: 0x1008100b  beq         $zero, $t0, . + 4 + (0x100B << 2)
label_2bc05c:
    if (ctx->pc == 0x2BC05Cu) {
        ctx->pc = 0x2BC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC058u;
        // 0x2bc05c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC060u;
        goto label_2bc060;
    }
    ctx->pc = 0x2BC058u;
    {
        const bool branch_taken_0x2bc058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC058u;
        // 0x2bc05c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc058) {
            ctx->pc = 0x2C0088u;
            return;
        }
    }
    ctx->pc = 0x2BC060u;
label_2bc060:
    // 0x2bc060: 0x1009102b  beq         $zero, $t1, . + 4 + (0x102B << 2)
label_2bc064:
    if (ctx->pc == 0x2BC064u) {
        ctx->pc = 0x2BC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC060u;
        // 0x2bc064: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC068u;
        goto label_2bc068;
    }
    ctx->pc = 0x2BC060u;
    {
        const bool branch_taken_0x2bc060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC060u;
        // 0x2bc064: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc060) {
            ctx->pc = 0x2C0110u;
            return;
        }
    }
    ctx->pc = 0x2BC068u;
label_2bc068:
    // 0x2bc068: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc068u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BC068 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc06c:
    // 0x2bc06c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc06cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc070:
    // 0x2bc070: 0x3e89805  .word       0x03E89805                   # INVALID     $ra, $t0, -0x67FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc070u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BC070 raw=0x03E89805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc074:
    // 0x2bc074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc078:
    // 0x2bc078: 0x3e8a009  .word       0x03E8A009                   # jalr        $s4, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2bc07c:
    if (ctx->pc == 0x2BC07Cu) {
        ctx->pc = 0x2BC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC078u;
        // 0x2bc07c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC080u;
        goto label_2bc080;
    }
    ctx->pc = 0x2BC078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 20, 0x2BC080u);
        ctx->pc = 0x2BC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC078u;
        // 0x2bc07c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC078u, 0x2BC080u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC080u;
label_2bc080:
    // 0x2bc080: 0x3e8a80d  break       1000, 672
    ctx->pc = 0x2bc080u;
    runtime->handleBreak(rdram, ctx);
label_2bc084:
    // 0x2bc084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc088:
    // 0x2bc088: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc088u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2bc08c:
    // 0x2bc08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc090:
    // 0x2bc090: 0x3e8b806  srlv        $s7, $t0, $ra
    ctx->pc = 0x2bc090u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bc094:
    // 0x2bc094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc098:
    // 0x2bc098: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2bc098u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2bc09c:
    // 0x2bc09c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc09cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0a0:
    // 0x2bc0a0: 0x3e8b00e  .word       0x03E8B00E                   # INVALID     $ra, $t0, -0x4FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc0a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2BC0A0 raw=0x03E8B00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc0a4:
    // 0x2bc0a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0a8:
    // 0x2bc0a8: 0x3e8c803  .word       0x03E8C803                   # sra         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc0a8u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 8), 0));
label_2bc0ac:
    // 0x2bc0ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0b0:
    // 0x2bc0b0: 0x3e8d007  srav        $k0, $t0, $ra
    ctx->pc = 0x2bc0b0u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2bc0b4:
    // 0x2bc0b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0b8:
    // 0x2bc0b8: 0x3e8d80b  movn        $k1, $ra, $t0
    ctx->pc = 0x2bc0b8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 31));
label_2bc0bc:
    // 0x2bc0bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0c0:
    // 0x2bc0c0: 0x3e8c80f  .word       0x03E8C80F                   # sync # 03E8C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc0c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2bc0c4:
    // 0x2bc0c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0c8:
    // 0x2bc0c8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bc0c8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2bc0cc:
    // 0x2bc0cc: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2bc0ccu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2bc0d0:
    // 0x2bc0d0: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2bc0d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2bc0d4:
    // 0x2bc0d4: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2bc0d4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2bc0d8:
    // 0x2bc0d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc0dc:
    // 0x2bc0dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0e0:
    // 0x2bc0e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc0e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc0e4:
    // 0x2bc0e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0e8:
    // 0x2bc0e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc0e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc0ec:
    // 0x2bc0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc0f0:
    // 0x2bc0f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc0f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc0f4:
    // 0x2bc0f4: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc0f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BC0F4 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc0f8:
    // 0x2bc0f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc0f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc0fc:
    // 0x2bc0fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc100:
    // 0x2bc100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc104:
    // 0x2bc104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc108:
    // 0x2bc108: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc108u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc10c:
    // 0x2bc10c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc10cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc110:
    // 0x2bc110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc114:
    // 0x2bc114: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc114u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2bc118:
    // 0x2bc118: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc118u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc11c:
    // 0x2bc11c: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc11cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
    ctx->pc = 0x2bc120u;
    return;
}

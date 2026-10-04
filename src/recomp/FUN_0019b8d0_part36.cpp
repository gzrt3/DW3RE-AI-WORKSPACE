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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part36(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1aca40u: goto label_1aca40;
        case 0x1aca44u: goto label_1aca44;
        case 0x1aca48u: goto label_1aca48;
        case 0x1aca4cu: goto label_1aca4c;
        case 0x1aca50u: goto label_1aca50;
        case 0x1aca54u: goto label_1aca54;
        case 0x1aca58u: goto label_1aca58;
        case 0x1aca5cu: goto label_1aca5c;
        case 0x1aca60u: goto label_1aca60;
        case 0x1aca64u: goto label_1aca64;
        case 0x1aca68u: goto label_1aca68;
        case 0x1aca6cu: goto label_1aca6c;
        case 0x1aca70u: goto label_1aca70;
        case 0x1aca74u: goto label_1aca74;
        case 0x1aca78u: goto label_1aca78;
        case 0x1aca7cu: goto label_1aca7c;
        case 0x1aca80u: goto label_1aca80;
        case 0x1aca84u: goto label_1aca84;
        case 0x1aca88u: goto label_1aca88;
        case 0x1aca8cu: goto label_1aca8c;
        case 0x1aca90u: goto label_1aca90;
        case 0x1aca94u: goto label_1aca94;
        case 0x1aca98u: goto label_1aca98;
        case 0x1aca9cu: goto label_1aca9c;
        case 0x1acaa0u: goto label_1acaa0;
        case 0x1acaa4u: goto label_1acaa4;
        case 0x1acaa8u: goto label_1acaa8;
        case 0x1acaacu: goto label_1acaac;
        case 0x1acab0u: goto label_1acab0;
        case 0x1acab4u: goto label_1acab4;
        case 0x1acab8u: goto label_1acab8;
        case 0x1acabcu: goto label_1acabc;
        case 0x1acac0u: goto label_1acac0;
        case 0x1acac4u: goto label_1acac4;
        case 0x1acac8u: goto label_1acac8;
        case 0x1acaccu: goto label_1acacc;
        case 0x1acad0u: goto label_1acad0;
        case 0x1acad4u: goto label_1acad4;
        case 0x1acad8u: goto label_1acad8;
        case 0x1acadcu: goto label_1acadc;
        case 0x1acae0u: goto label_1acae0;
        case 0x1acae4u: goto label_1acae4;
        case 0x1acae8u: goto label_1acae8;
        case 0x1acaecu: goto label_1acaec;
        case 0x1acaf0u: goto label_1acaf0;
        case 0x1acaf4u: goto label_1acaf4;
        case 0x1acaf8u: goto label_1acaf8;
        case 0x1acafcu: goto label_1acafc;
        case 0x1acb00u: goto label_1acb00;
        case 0x1acb04u: goto label_1acb04;
        case 0x1acb08u: goto label_1acb08;
        case 0x1acb0cu: goto label_1acb0c;
        case 0x1acb10u: goto label_1acb10;
        case 0x1acb14u: goto label_1acb14;
        case 0x1acb18u: goto label_1acb18;
        case 0x1acb1cu: goto label_1acb1c;
        case 0x1acb20u: goto label_1acb20;
        case 0x1acb24u: goto label_1acb24;
        case 0x1acb28u: goto label_1acb28;
        case 0x1acb2cu: goto label_1acb2c;
        case 0x1acb30u: goto label_1acb30;
        case 0x1acb34u: goto label_1acb34;
        case 0x1acb38u: goto label_1acb38;
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb40u: goto label_1acb40;
        case 0x1acb44u: goto label_1acb44;
        case 0x1acb48u: goto label_1acb48;
        case 0x1acb4cu: goto label_1acb4c;
        case 0x1acb50u: goto label_1acb50;
        case 0x1acb54u: goto label_1acb54;
        case 0x1acb58u: goto label_1acb58;
        case 0x1acb5cu: goto label_1acb5c;
        case 0x1acb60u: goto label_1acb60;
        case 0x1acb64u: goto label_1acb64;
        case 0x1acb68u: goto label_1acb68;
        case 0x1acb6cu: goto label_1acb6c;
        case 0x1acb70u: goto label_1acb70;
        case 0x1acb74u: goto label_1acb74;
        case 0x1acb78u: goto label_1acb78;
        case 0x1acb7cu: goto label_1acb7c;
        case 0x1acb80u: goto label_1acb80;
        case 0x1acb84u: goto label_1acb84;
        case 0x1acb88u: goto label_1acb88;
        case 0x1acb8cu: goto label_1acb8c;
        case 0x1acb90u: goto label_1acb90;
        case 0x1acb94u: goto label_1acb94;
        case 0x1acb98u: goto label_1acb98;
        case 0x1acb9cu: goto label_1acb9c;
        case 0x1acba0u: goto label_1acba0;
        case 0x1acba4u: goto label_1acba4;
        case 0x1acba8u: goto label_1acba8;
        case 0x1acbacu: goto label_1acbac;
        case 0x1acbb0u: goto label_1acbb0;
        case 0x1acbb4u: goto label_1acbb4;
        case 0x1acbb8u: goto label_1acbb8;
        case 0x1acbbcu: goto label_1acbbc;
        case 0x1acbc0u: goto label_1acbc0;
        case 0x1acbc4u: goto label_1acbc4;
        case 0x1acbc8u: goto label_1acbc8;
        case 0x1acbccu: goto label_1acbcc;
        case 0x1acbd0u: goto label_1acbd0;
        case 0x1acbd4u: goto label_1acbd4;
        case 0x1acbd8u: goto label_1acbd8;
        case 0x1acbdcu: goto label_1acbdc;
        case 0x1acbe0u: goto label_1acbe0;
        case 0x1acbe4u: goto label_1acbe4;
        case 0x1acbe8u: goto label_1acbe8;
        case 0x1acbecu: goto label_1acbec;
        case 0x1acbf0u: goto label_1acbf0;
        case 0x1acbf4u: goto label_1acbf4;
        case 0x1acbf8u: goto label_1acbf8;
        case 0x1acbfcu: goto label_1acbfc;
        case 0x1acc00u: goto label_1acc00;
        case 0x1acc04u: goto label_1acc04;
        case 0x1acc08u: goto label_1acc08;
        case 0x1acc0cu: goto label_1acc0c;
        case 0x1acc10u: goto label_1acc10;
        case 0x1acc14u: goto label_1acc14;
        case 0x1acc18u: goto label_1acc18;
        case 0x1acc1cu: goto label_1acc1c;
        case 0x1acc20u: goto label_1acc20;
        case 0x1acc24u: goto label_1acc24;
        case 0x1acc28u: goto label_1acc28;
        case 0x1acc2cu: goto label_1acc2c;
        case 0x1acc30u: goto label_1acc30;
        case 0x1acc34u: goto label_1acc34;
        case 0x1acc38u: goto label_1acc38;
        case 0x1acc3cu: goto label_1acc3c;
        case 0x1acc40u: goto label_1acc40;
        case 0x1acc44u: goto label_1acc44;
        case 0x1acc48u: goto label_1acc48;
        case 0x1acc4cu: goto label_1acc4c;
        case 0x1acc50u: goto label_1acc50;
        case 0x1acc54u: goto label_1acc54;
        case 0x1acc58u: goto label_1acc58;
        case 0x1acc5cu: goto label_1acc5c;
        case 0x1acc60u: goto label_1acc60;
        case 0x1acc64u: goto label_1acc64;
        case 0x1acc68u: goto label_1acc68;
        case 0x1acc6cu: goto label_1acc6c;
        case 0x1acc70u: goto label_1acc70;
        case 0x1acc74u: goto label_1acc74;
        case 0x1acc78u: goto label_1acc78;
        case 0x1acc7cu: goto label_1acc7c;
        case 0x1acc80u: goto label_1acc80;
        case 0x1acc84u: goto label_1acc84;
        case 0x1acc88u: goto label_1acc88;
        case 0x1acc8cu: goto label_1acc8c;
        case 0x1acc90u: goto label_1acc90;
        case 0x1acc94u: goto label_1acc94;
        case 0x1acc98u: goto label_1acc98;
        case 0x1acc9cu: goto label_1acc9c;
        case 0x1acca0u: goto label_1acca0;
        case 0x1acca4u: goto label_1acca4;
        case 0x1acca8u: goto label_1acca8;
        case 0x1accacu: goto label_1accac;
        case 0x1accb0u: goto label_1accb0;
        case 0x1accb4u: goto label_1accb4;
        case 0x1accb8u: goto label_1accb8;
        case 0x1accbcu: goto label_1accbc;
        case 0x1accc0u: goto label_1accc0;
        case 0x1accc4u: goto label_1accc4;
        case 0x1accc8u: goto label_1accc8;
        case 0x1accccu: goto label_1acccc;
        case 0x1accd0u: goto label_1accd0;
        case 0x1accd4u: goto label_1accd4;
        case 0x1accd8u: goto label_1accd8;
        case 0x1accdcu: goto label_1accdc;
        case 0x1acce0u: goto label_1acce0;
        case 0x1acce4u: goto label_1acce4;
        case 0x1acce8u: goto label_1acce8;
        case 0x1accecu: goto label_1accec;
        case 0x1accf0u: goto label_1accf0;
        case 0x1accf4u: goto label_1accf4;
        case 0x1accf8u: goto label_1accf8;
        case 0x1accfcu: goto label_1accfc;
        case 0x1acd00u: goto label_1acd00;
        case 0x1acd04u: goto label_1acd04;
        case 0x1acd08u: goto label_1acd08;
        case 0x1acd0cu: goto label_1acd0c;
        case 0x1acd10u: goto label_1acd10;
        case 0x1acd14u: goto label_1acd14;
        case 0x1acd18u: goto label_1acd18;
        case 0x1acd1cu: goto label_1acd1c;
        case 0x1acd20u: goto label_1acd20;
        case 0x1acd24u: goto label_1acd24;
        case 0x1acd28u: goto label_1acd28;
        case 0x1acd2cu: goto label_1acd2c;
        case 0x1acd30u: goto label_1acd30;
        case 0x1acd34u: goto label_1acd34;
        case 0x1acd38u: goto label_1acd38;
        case 0x1acd3cu: goto label_1acd3c;
        case 0x1acd40u: goto label_1acd40;
        case 0x1acd44u: goto label_1acd44;
        case 0x1acd48u: goto label_1acd48;
        case 0x1acd4cu: goto label_1acd4c;
        case 0x1acd50u: goto label_1acd50;
        case 0x1acd54u: goto label_1acd54;
        case 0x1acd58u: goto label_1acd58;
        case 0x1acd5cu: goto label_1acd5c;
        case 0x1acd60u: goto label_1acd60;
        case 0x1acd64u: goto label_1acd64;
        case 0x1acd68u: goto label_1acd68;
        case 0x1acd6cu: goto label_1acd6c;
        case 0x1acd70u: goto label_1acd70;
        case 0x1acd74u: goto label_1acd74;
        case 0x1acd78u: goto label_1acd78;
        case 0x1acd7cu: goto label_1acd7c;
        case 0x1acd80u: goto label_1acd80;
        case 0x1acd84u: goto label_1acd84;
        case 0x1acd88u: goto label_1acd88;
        case 0x1acd8cu: goto label_1acd8c;
        case 0x1acd90u: goto label_1acd90;
        case 0x1acd94u: goto label_1acd94;
        case 0x1acd98u: goto label_1acd98;
        case 0x1acd9cu: goto label_1acd9c;
        case 0x1acda0u: goto label_1acda0;
        case 0x1acda4u: goto label_1acda4;
        case 0x1acda8u: goto label_1acda8;
        case 0x1acdacu: goto label_1acdac;
        case 0x1acdb0u: goto label_1acdb0;
        case 0x1acdb4u: goto label_1acdb4;
        case 0x1acdb8u: goto label_1acdb8;
        case 0x1acdbcu: goto label_1acdbc;
        case 0x1acdc0u: goto label_1acdc0;
        case 0x1acdc4u: goto label_1acdc4;
        case 0x1acdc8u: goto label_1acdc8;
        case 0x1acdccu: goto label_1acdcc;
        case 0x1acdd0u: goto label_1acdd0;
        case 0x1acdd4u: goto label_1acdd4;
        case 0x1acdd8u: goto label_1acdd8;
        case 0x1acddcu: goto label_1acddc;
        case 0x1acde0u: goto label_1acde0;
        case 0x1acde4u: goto label_1acde4;
        case 0x1acde8u: goto label_1acde8;
        case 0x1acdecu: goto label_1acdec;
        case 0x1acdf0u: goto label_1acdf0;
        case 0x1acdf4u: goto label_1acdf4;
        case 0x1acdf8u: goto label_1acdf8;
        case 0x1acdfcu: goto label_1acdfc;
        case 0x1ace00u: goto label_1ace00;
        case 0x1ace04u: goto label_1ace04;
        case 0x1ace08u: goto label_1ace08;
        case 0x1ace0cu: goto label_1ace0c;
        case 0x1ace10u: goto label_1ace10;
        case 0x1ace14u: goto label_1ace14;
        case 0x1ace18u: goto label_1ace18;
        case 0x1ace1cu: goto label_1ace1c;
        case 0x1ace20u: goto label_1ace20;
        case 0x1ace24u: goto label_1ace24;
        case 0x1ace28u: goto label_1ace28;
        case 0x1ace2cu: goto label_1ace2c;
        case 0x1ace30u: goto label_1ace30;
        case 0x1ace34u: goto label_1ace34;
        case 0x1ace38u: goto label_1ace38;
        case 0x1ace3cu: goto label_1ace3c;
        case 0x1ace40u: goto label_1ace40;
        case 0x1ace44u: goto label_1ace44;
        case 0x1ace48u: goto label_1ace48;
        case 0x1ace4cu: goto label_1ace4c;
        case 0x1ace50u: goto label_1ace50;
        case 0x1ace54u: goto label_1ace54;
        case 0x1ace58u: goto label_1ace58;
        case 0x1ace5cu: goto label_1ace5c;
        case 0x1ace60u: goto label_1ace60;
        case 0x1ace64u: goto label_1ace64;
        case 0x1ace68u: goto label_1ace68;
        case 0x1ace6cu: goto label_1ace6c;
        case 0x1ace70u: goto label_1ace70;
        case 0x1ace74u: goto label_1ace74;
        case 0x1ace78u: goto label_1ace78;
        case 0x1ace7cu: goto label_1ace7c;
        case 0x1ace80u: goto label_1ace80;
        case 0x1ace84u: goto label_1ace84;
        case 0x1ace88u: goto label_1ace88;
        case 0x1ace8cu: goto label_1ace8c;
        case 0x1ace90u: goto label_1ace90;
        case 0x1ace94u: goto label_1ace94;
        case 0x1ace98u: goto label_1ace98;
        case 0x1ace9cu: goto label_1ace9c;
        case 0x1acea0u: goto label_1acea0;
        case 0x1acea4u: goto label_1acea4;
        case 0x1acea8u: goto label_1acea8;
        case 0x1aceacu: goto label_1aceac;
        case 0x1aceb0u: goto label_1aceb0;
        case 0x1aceb4u: goto label_1aceb4;
        case 0x1aceb8u: goto label_1aceb8;
        case 0x1acebcu: goto label_1acebc;
        case 0x1acec0u: goto label_1acec0;
        case 0x1acec4u: goto label_1acec4;
        case 0x1acec8u: goto label_1acec8;
        case 0x1aceccu: goto label_1acecc;
        case 0x1aced0u: goto label_1aced0;
        case 0x1aced4u: goto label_1aced4;
        case 0x1aced8u: goto label_1aced8;
        case 0x1acedcu: goto label_1acedc;
        case 0x1acee0u: goto label_1acee0;
        case 0x1acee4u: goto label_1acee4;
        case 0x1acee8u: goto label_1acee8;
        case 0x1aceecu: goto label_1aceec;
        case 0x1acef0u: goto label_1acef0;
        case 0x1acef4u: goto label_1acef4;
        case 0x1acef8u: goto label_1acef8;
        case 0x1acefcu: goto label_1acefc;
        case 0x1acf00u: goto label_1acf00;
        case 0x1acf04u: goto label_1acf04;
        case 0x1acf08u: goto label_1acf08;
        case 0x1acf0cu: goto label_1acf0c;
        case 0x1acf10u: goto label_1acf10;
        case 0x1acf14u: goto label_1acf14;
        case 0x1acf18u: goto label_1acf18;
        case 0x1acf1cu: goto label_1acf1c;
        case 0x1acf20u: goto label_1acf20;
        case 0x1acf24u: goto label_1acf24;
        case 0x1acf28u: goto label_1acf28;
        case 0x1acf2cu: goto label_1acf2c;
        case 0x1acf30u: goto label_1acf30;
        case 0x1acf34u: goto label_1acf34;
        case 0x1acf38u: goto label_1acf38;
        case 0x1acf3cu: goto label_1acf3c;
        case 0x1acf40u: goto label_1acf40;
        case 0x1acf44u: goto label_1acf44;
        case 0x1acf48u: goto label_1acf48;
        case 0x1acf4cu: goto label_1acf4c;
        case 0x1acf50u: goto label_1acf50;
        case 0x1acf54u: goto label_1acf54;
        case 0x1acf58u: goto label_1acf58;
        case 0x1acf5cu: goto label_1acf5c;
        case 0x1acf60u: goto label_1acf60;
        case 0x1acf64u: goto label_1acf64;
        case 0x1acf68u: goto label_1acf68;
        case 0x1acf6cu: goto label_1acf6c;
        case 0x1acf70u: goto label_1acf70;
        case 0x1acf74u: goto label_1acf74;
        case 0x1acf78u: goto label_1acf78;
        case 0x1acf7cu: goto label_1acf7c;
        case 0x1acf80u: goto label_1acf80;
        case 0x1acf84u: goto label_1acf84;
        case 0x1acf88u: goto label_1acf88;
        case 0x1acf8cu: goto label_1acf8c;
        case 0x1acf90u: goto label_1acf90;
        case 0x1acf94u: goto label_1acf94;
        case 0x1acf98u: goto label_1acf98;
        case 0x1acf9cu: goto label_1acf9c;
        case 0x1acfa0u: goto label_1acfa0;
        case 0x1acfa4u: goto label_1acfa4;
        case 0x1acfa8u: goto label_1acfa8;
        case 0x1acfacu: goto label_1acfac;
        case 0x1acfb0u: goto label_1acfb0;
        case 0x1acfb4u: goto label_1acfb4;
        case 0x1acfb8u: goto label_1acfb8;
        case 0x1acfbcu: goto label_1acfbc;
        case 0x1acfc0u: goto label_1acfc0;
        case 0x1acfc4u: goto label_1acfc4;
        case 0x1acfc8u: goto label_1acfc8;
        case 0x1acfccu: goto label_1acfcc;
        case 0x1acfd0u: goto label_1acfd0;
        case 0x1acfd4u: goto label_1acfd4;
        case 0x1acfd8u: goto label_1acfd8;
        case 0x1acfdcu: goto label_1acfdc;
        case 0x1acfe0u: goto label_1acfe0;
        case 0x1acfe4u: goto label_1acfe4;
        case 0x1acfe8u: goto label_1acfe8;
        case 0x1acfecu: goto label_1acfec;
        case 0x1acff0u: goto label_1acff0;
        case 0x1acff4u: goto label_1acff4;
        case 0x1acff8u: goto label_1acff8;
        case 0x1acffcu: goto label_1acffc;
        case 0x1ad000u: goto label_1ad000;
        case 0x1ad004u: goto label_1ad004;
        case 0x1ad008u: goto label_1ad008;
        case 0x1ad00cu: goto label_1ad00c;
        case 0x1ad010u: goto label_1ad010;
        case 0x1ad014u: goto label_1ad014;
        case 0x1ad018u: goto label_1ad018;
        case 0x1ad01cu: goto label_1ad01c;
        case 0x1ad020u: goto label_1ad020;
        case 0x1ad024u: goto label_1ad024;
        case 0x1ad028u: goto label_1ad028;
        case 0x1ad02cu: goto label_1ad02c;
        case 0x1ad030u: goto label_1ad030;
        case 0x1ad034u: goto label_1ad034;
        case 0x1ad038u: goto label_1ad038;
        case 0x1ad03cu: goto label_1ad03c;
        case 0x1ad040u: goto label_1ad040;
        case 0x1ad044u: goto label_1ad044;
        case 0x1ad048u: goto label_1ad048;
        case 0x1ad04cu: goto label_1ad04c;
        case 0x1ad050u: goto label_1ad050;
        case 0x1ad054u: goto label_1ad054;
        case 0x1ad058u: goto label_1ad058;
        case 0x1ad05cu: goto label_1ad05c;
        case 0x1ad060u: goto label_1ad060;
        case 0x1ad064u: goto label_1ad064;
        case 0x1ad068u: goto label_1ad068;
        case 0x1ad06cu: goto label_1ad06c;
        case 0x1ad070u: goto label_1ad070;
        case 0x1ad074u: goto label_1ad074;
        case 0x1ad078u: goto label_1ad078;
        case 0x1ad07cu: goto label_1ad07c;
        case 0x1ad080u: goto label_1ad080;
        case 0x1ad084u: goto label_1ad084;
        case 0x1ad088u: goto label_1ad088;
        case 0x1ad08cu: goto label_1ad08c;
        case 0x1ad090u: goto label_1ad090;
        case 0x1ad094u: goto label_1ad094;
        case 0x1ad098u: goto label_1ad098;
        case 0x1ad09cu: goto label_1ad09c;
        case 0x1ad0a0u: goto label_1ad0a0;
        case 0x1ad0a4u: goto label_1ad0a4;
        case 0x1ad0a8u: goto label_1ad0a8;
        case 0x1ad0acu: goto label_1ad0ac;
        case 0x1ad0b0u: goto label_1ad0b0;
        case 0x1ad0b4u: goto label_1ad0b4;
        case 0x1ad0b8u: goto label_1ad0b8;
        case 0x1ad0bcu: goto label_1ad0bc;
        case 0x1ad0c0u: goto label_1ad0c0;
        case 0x1ad0c4u: goto label_1ad0c4;
        case 0x1ad0c8u: goto label_1ad0c8;
        case 0x1ad0ccu: goto label_1ad0cc;
        case 0x1ad0d0u: goto label_1ad0d0;
        case 0x1ad0d4u: goto label_1ad0d4;
        case 0x1ad0d8u: goto label_1ad0d8;
        case 0x1ad0dcu: goto label_1ad0dc;
        case 0x1ad0e0u: goto label_1ad0e0;
        case 0x1ad0e4u: goto label_1ad0e4;
        case 0x1ad0e8u: goto label_1ad0e8;
        case 0x1ad0ecu: goto label_1ad0ec;
        case 0x1ad0f0u: goto label_1ad0f0;
        case 0x1ad0f4u: goto label_1ad0f4;
        case 0x1ad0f8u: goto label_1ad0f8;
        case 0x1ad0fcu: goto label_1ad0fc;
        case 0x1ad100u: goto label_1ad100;
        case 0x1ad104u: goto label_1ad104;
        case 0x1ad108u: goto label_1ad108;
        case 0x1ad10cu: goto label_1ad10c;
        case 0x1ad110u: goto label_1ad110;
        case 0x1ad114u: goto label_1ad114;
        case 0x1ad118u: goto label_1ad118;
        case 0x1ad11cu: goto label_1ad11c;
        case 0x1ad120u: goto label_1ad120;
        case 0x1ad124u: goto label_1ad124;
        case 0x1ad128u: goto label_1ad128;
        case 0x1ad12cu: goto label_1ad12c;
        case 0x1ad130u: goto label_1ad130;
        case 0x1ad134u: goto label_1ad134;
        case 0x1ad138u: goto label_1ad138;
        case 0x1ad13cu: goto label_1ad13c;
        case 0x1ad140u: goto label_1ad140;
        case 0x1ad144u: goto label_1ad144;
        case 0x1ad148u: goto label_1ad148;
        case 0x1ad14cu: goto label_1ad14c;
        case 0x1ad150u: goto label_1ad150;
        case 0x1ad154u: goto label_1ad154;
        case 0x1ad158u: goto label_1ad158;
        case 0x1ad15cu: goto label_1ad15c;
        case 0x1ad160u: goto label_1ad160;
        case 0x1ad164u: goto label_1ad164;
        case 0x1ad168u: goto label_1ad168;
        case 0x1ad16cu: goto label_1ad16c;
        case 0x1ad170u: goto label_1ad170;
        case 0x1ad174u: goto label_1ad174;
        case 0x1ad178u: goto label_1ad178;
        case 0x1ad17cu: goto label_1ad17c;
        case 0x1ad180u: goto label_1ad180;
        case 0x1ad184u: goto label_1ad184;
        case 0x1ad188u: goto label_1ad188;
        case 0x1ad18cu: goto label_1ad18c;
        case 0x1ad190u: goto label_1ad190;
        case 0x1ad194u: goto label_1ad194;
        case 0x1ad198u: goto label_1ad198;
        case 0x1ad19cu: goto label_1ad19c;
        case 0x1ad1a0u: goto label_1ad1a0;
        case 0x1ad1a4u: goto label_1ad1a4;
        case 0x1ad1a8u: goto label_1ad1a8;
        case 0x1ad1acu: goto label_1ad1ac;
        case 0x1ad1b0u: goto label_1ad1b0;
        case 0x1ad1b4u: goto label_1ad1b4;
        case 0x1ad1b8u: goto label_1ad1b8;
        case 0x1ad1bcu: goto label_1ad1bc;
        case 0x1ad1c0u: goto label_1ad1c0;
        case 0x1ad1c4u: goto label_1ad1c4;
        case 0x1ad1c8u: goto label_1ad1c8;
        case 0x1ad1ccu: goto label_1ad1cc;
        case 0x1ad1d0u: goto label_1ad1d0;
        case 0x1ad1d4u: goto label_1ad1d4;
        case 0x1ad1d8u: goto label_1ad1d8;
        case 0x1ad1dcu: goto label_1ad1dc;
        case 0x1ad1e0u: goto label_1ad1e0;
        case 0x1ad1e4u: goto label_1ad1e4;
        case 0x1ad1e8u: goto label_1ad1e8;
        case 0x1ad1ecu: goto label_1ad1ec;
        case 0x1ad1f0u: goto label_1ad1f0;
        case 0x1ad1f4u: goto label_1ad1f4;
        case 0x1ad1f8u: goto label_1ad1f8;
        case 0x1ad1fcu: goto label_1ad1fc;
        case 0x1ad200u: goto label_1ad200;
        case 0x1ad204u: goto label_1ad204;
        case 0x1ad208u: goto label_1ad208;
        case 0x1ad20cu: goto label_1ad20c;
        default: return;
    }

label_1aca40:
    if (ctx->pc == 0x1ACA40u) {
        ctx->pc = 0x1ACA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA3Cu;
        // 0x1aca40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA44u;
        goto label_1aca44;
    }
    ctx->pc = 0x1ACA3Cu;
    {
        const bool branch_taken_0x1aca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA3Cu;
        // 0x1aca40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca3c) {
            ctx->pc = 0x1ACA48u;
            goto label_1aca48;
        }
    }
    ctx->pc = 0x1ACA44u;
label_1aca44:
    // 0x1aca44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aca44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aca48:
    // 0x1aca48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1aca4c:
    // 0x1aca4c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1aca4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aca50:
    // 0x1aca50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1aca50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aca54:
    // 0x1aca54: 0x3e00008  jr          $ra
label_1aca58:
    if (ctx->pc == 0x1ACA58u) {
        ctx->pc = 0x1ACA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA54u;
        // 0x1aca58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA5Cu;
        goto label_1aca5c;
    }
    ctx->pc = 0x1ACA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA54u;
        // 0x1aca58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA5Cu;
label_1aca5c:
    // 0x1aca5c: 0x0  nop
    ctx->pc = 0x1aca5cu;
    // NOP
label_1aca60:
    // 0x1aca60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aca64:
    // 0x1aca64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aca68:
    // 0x1aca68: 0xc06930c  jal         func_1A4C30
label_1aca6c:
    if (ctx->pc == 0x1ACA6Cu) {
        ctx->pc = 0x1ACA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA68u;
        // 0x1aca6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA70u;
        goto label_1aca70;
    }
    ctx->pc = 0x1ACA68u;
    SET_GPR_U32(ctx, 31, 0x1ACA70u);
    ctx->pc = 0x1ACA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA68u;
    // 0x1aca6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1ACA70u;
label_1aca70:
    // 0x1aca70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1aca70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1aca74:
    // 0x1aca74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aca78:
    // 0x1aca78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1aca7c:
    // 0x1aca7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1aca7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1aca80:
    // 0x1aca80: 0x3e00008  jr          $ra
label_1aca84:
    if (ctx->pc == 0x1ACA84u) {
        ctx->pc = 0x1ACA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA80u;
        // 0x1aca84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA88u;
        goto label_1aca88;
    }
    ctx->pc = 0x1ACA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA80u;
        // 0x1aca84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA88u;
label_1aca88:
    // 0x1aca88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aca8c:
    // 0x1aca8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aca90:
    // 0x1aca90: 0xc06930c  jal         func_1A4C30
label_1aca94:
    if (ctx->pc == 0x1ACA94u) {
        ctx->pc = 0x1ACA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA90u;
        // 0x1aca94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA98u;
        goto label_1aca98;
    }
    ctx->pc = 0x1ACA90u;
    SET_GPR_U32(ctx, 31, 0x1ACA98u);
    ctx->pc = 0x1ACA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA90u;
    // 0x1aca94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1ACA98u;
label_1aca98:
    // 0x1aca98: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1aca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1aca9c:
    // 0x1aca9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1acaa0:
    // 0x1acaa0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1acaa4:
    if (ctx->pc == 0x1ACAA4u) {
        ctx->pc = 0x1ACAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA0u;
        // 0x1acaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAA8u;
        goto label_1acaa8;
    }
    ctx->pc = 0x1ACAA0u;
    {
        const bool branch_taken_0x1acaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA0u;
        // 0x1acaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acaa0) {
            ctx->pc = 0x1ACAB4u;
            goto label_1acab4;
        }
    }
    ctx->pc = 0x1ACAA8u;
label_1acaa8:
    // 0x1acaa8: 0xc069328  jal         func_1A4CA0
label_1acaac:
    if (ctx->pc == 0x1ACAACu) {
        ctx->pc = 0x1ACAB0u;
        goto label_1acab0;
    }
    ctx->pc = 0x1ACAA8u;
    SET_GPR_U32(ctx, 31, 0x1ACAB0u);
    ctx->pc = 0x1A4CA0u;
    { ctx->pc = 0x1a4ca0; return; }
    ctx->pc = 0x1ACAB0u;
label_1acab0:
    // 0x1acab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acab4:
    // 0x1acab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acab8:
    // 0x1acab8: 0x3e00008  jr          $ra
label_1acabc:
    if (ctx->pc == 0x1ACABCu) {
        ctx->pc = 0x1ACABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAB8u;
        // 0x1acabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAC0u;
        goto label_1acac0;
    }
    ctx->pc = 0x1ACAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAB8u;
        // 0x1acabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACAC0u;
label_1acac0:
    // 0x1acac0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1acac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1acac4:
    // 0x1acac4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1acac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_1acac8:
    // 0x1acac8: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x1acac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_1acacc:
    // 0x1acacc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1acaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_1acad0:
    // 0x1acad0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1acad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1acad4:
    // 0x1acad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1acad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acad8:
    // 0x1acad8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1acad8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1acadc:
    // 0x1acadc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1acae0:
    if (ctx->pc == 0x1ACAE0u) {
        ctx->pc = 0x1ACAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACADCu;
        // 0x1acae0: 0x2451a740  addiu       $s1, $v0, -0x58C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAE4u;
        goto label_1acae4;
    }
    ctx->pc = 0x1ACADCu;
    {
        const bool branch_taken_0x1acadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACADCu;
        // 0x1acae0: 0x2451a740  addiu       $s1, $v0, -0x58C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acadc) {
            ctx->pc = 0x1ACB0Cu;
            goto label_1acb0c;
        }
    }
    ctx->pc = 0x1ACAE4u;
label_1acae4:
    // 0x1acae4: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x1acae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
label_1acae8:
    // 0x1acae8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1acae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1acaec:
    // 0x1acaec: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1acaecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1acaf0:
    // 0x1acaf0: 0x0  nop
    ctx->pc = 0x1acaf0u;
    // NOP
label_1acaf4:
    // 0x1acaf4: 0x0  nop
    ctx->pc = 0x1acaf4u;
    // NOP
label_1acaf8:
    // 0x1acaf8: 0x0  nop
    ctx->pc = 0x1acaf8u;
    // NOP
label_1acafc:
    // 0x1acafc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1acb00:
    if (ctx->pc == 0x1ACB00u) {
        ctx->pc = 0x1ACB04u;
        goto label_1acb04;
    }
    ctx->pc = 0x1ACAFCu;
    {
        const bool branch_taken_0x1acafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acafc) {
            ctx->pc = 0x1ACAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acae8;
        }
    }
    ctx->pc = 0x1ACB04u;
label_1acb04:
    // 0x1acb04: 0x10000003  b           . + 4 + (0x3 << 2)
label_1acb08:
    if (ctx->pc == 0x1ACB08u) {
        ctx->pc = 0x1ACB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB04u;
        // 0x1acb08: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB0Cu;
        goto label_1acb0c;
    }
    ctx->pc = 0x1ACB04u;
    {
        const bool branch_taken_0x1acb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB04u;
        // 0x1acb08: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb04) {
            ctx->pc = 0x1ACB14u;
            goto label_1acb14;
        }
    }
    ctx->pc = 0x1ACB0Cu;
label_1acb0c:
    // 0x1acb0c: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x1acb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
label_1acb10:
    // 0x1acb10: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1acb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1acb14:
    // 0x1acb14: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x1acb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
label_1acb18:
    // 0x1acb18: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1acb1c:
    if (ctx->pc == 0x1ACB1Cu) {
        ctx->pc = 0x1ACB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB18u;
        // 0x1acb1c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB20u;
        goto label_1acb20;
    }
    ctx->pc = 0x1ACB18u;
    {
        const bool branch_taken_0x1acb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB18u;
        // 0x1acb1c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb18) {
            ctx->pc = 0x1ACB34u;
            goto label_1acb34;
        }
    }
    ctx->pc = 0x1ACB20u;
label_1acb20:
    // 0x1acb20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acb24:
    // 0x1acb24: 0xc069a30  jal         func_1A68C0
label_1acb28:
    if (ctx->pc == 0x1ACB28u) {
        ctx->pc = 0x1ACB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB24u;
        // 0x1acb28: 0x2484a750  addiu       $a0, $a0, -0x58B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB2Cu;
        goto label_1acb2c;
    }
    ctx->pc = 0x1ACB24u;
    SET_GPR_U32(ctx, 31, 0x1ACB2Cu);
    ctx->pc = 0x1ACB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB24u;
    // 0x1acb28: 0x2484a750  addiu       $a0, $a0, -0x58B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1ACB2Cu;
label_1acb2c:
    // 0x1acb2c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1acb30:
    if (ctx->pc == 0x1ACB30u) {
        ctx->pc = 0x1ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB2Cu;
        // 0x1acb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB34u;
        goto label_1acb34;
    }
    ctx->pc = 0x1ACB2Cu;
    {
        const bool branch_taken_0x1acb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB2Cu;
        // 0x1acb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb2c) {
            ctx->pc = 0x1ACBBCu;
            goto label_1acbbc;
        }
    }
    ctx->pc = 0x1ACB34u;
label_1acb34:
    // 0x1acb34: 0xc069c1a  jal         func_1A7068
label_1acb38:
    if (ctx->pc == 0x1ACB38u) {
        ctx->pc = 0x1ACB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB34u;
        // 0x1acb38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB3Cu;
        goto label_1acb3c;
    }
    ctx->pc = 0x1ACB34u;
    SET_GPR_U32(ctx, 31, 0x1ACB3Cu);
    ctx->pc = 0x1ACB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACB34u;
    // 0x1acb38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x1ACB3Cu;
label_1acb3c:
    // 0x1acb3c: 0xc069c82  jal         func_1A7208
label_1acb40:
    if (ctx->pc == 0x1ACB40u) {
        ctx->pc = 0x1ACB44u;
        goto label_1acb44;
    }
    ctx->pc = 0x1ACB3Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB44u);
    ctx->pc = 0x1A7208u;
    { ctx->pc = 0x1a7208; return; }
    ctx->pc = 0x1ACB44u;
label_1acb44:
    // 0x1acb44: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1acb48:
    // 0x1acb48: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1acb48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1acb4c:
    // 0x1acb4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1acb50:
    if (ctx->pc == 0x1ACB50u) {
        ctx->pc = 0x1ACB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB4Cu;
        // 0x1acb50: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB54u;
        goto label_1acb54;
    }
    ctx->pc = 0x1ACB4Cu;
    {
        const bool branch_taken_0x1acb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB4Cu;
        // 0x1acb50: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb4c) {
            ctx->pc = 0x1ACB7Cu;
            goto label_1acb7c;
        }
    }
    ctx->pc = 0x1ACB54u;
label_1acb54:
    // 0x1acb54: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1acb54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1acb58:
    // 0x1acb58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1acb58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1acb5c:
    // 0x1acb5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1acb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1acb60:
    // 0x1acb60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1acb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1acb64:
    // 0x1acb64: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x1acb64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1acb68:
    // 0x1acb68: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1acb68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1acb6c:
    // 0x1acb6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1acb70:
    if (ctx->pc == 0x1ACB70u) {
        ctx->pc = 0x1ACB74u;
        goto label_1acb74;
    }
    ctx->pc = 0x1ACB6Cu;
    {
        const bool branch_taken_0x1acb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acb6c) {
            ctx->pc = 0x1ACB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acb58;
        }
    }
    ctx->pc = 0x1ACB74u;
label_1acb74:
    // 0x1acb74: 0x10000003  b           . + 4 + (0x3 << 2)
label_1acb78:
    if (ctx->pc == 0x1ACB78u) {
        ctx->pc = 0x1ACB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB74u;
        // 0x1acb78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB7Cu;
        goto label_1acb7c;
    }
    ctx->pc = 0x1ACB74u;
    {
        const bool branch_taken_0x1acb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB74u;
        // 0x1acb78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb74) {
            ctx->pc = 0x1ACB84u;
            goto label_1acb84;
        }
    }
    ctx->pc = 0x1ACB7Cu;
label_1acb7c:
    // 0x1acb7c: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x1acb7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1acb80:
    // 0x1acb80: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1acb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1acb84:
    // 0x1acb84: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_1acb88:
    if (ctx->pc == 0x1ACB88u) {
        ctx->pc = 0x1ACB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB84u;
        // 0x1acb88: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB8Cu;
        goto label_1acb8c;
    }
    ctx->pc = 0x1ACB84u;
    {
        const bool branch_taken_0x1acb84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acb84) {
            ctx->pc = 0x1ACB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACB84u;
            // 0x1acb88: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACBB0u;
            goto label_1acbb0;
        }
    }
    ctx->pc = 0x1ACB8Cu;
label_1acb8c:
    // 0x1acb8c: 0x0  nop
    ctx->pc = 0x1acb8cu;
    // NOP
label_1acb90:
    // 0x1acb90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1acb90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1acb94:
    // 0x1acb94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1acb94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1acb98:
    // 0x1acb98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1acb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1acb9c:
    // 0x1acb9c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1acb9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1acba0:
    // 0x1acba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1acba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acba4:
    // 0x1acba4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1acba8:
    if (ctx->pc == 0x1ACBA8u) {
        ctx->pc = 0x1ACBACu;
        goto label_1acbac;
    }
    ctx->pc = 0x1ACBA4u;
    {
        const bool branch_taken_0x1acba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acba4) {
            ctx->pc = 0x1ACB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acb90;
        }
    }
    ctx->pc = 0x1ACBACu;
label_1acbac:
    // 0x1acbac: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1acbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1acbb0:
    // 0x1acbb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1acbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1acbb4:
    // 0x1acbb4: 0xc06b248  jal         func_1AC920
label_1acbb8:
    if (ctx->pc == 0x1ACBB8u) {
        ctx->pc = 0x1ACBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBB4u;
        // 0x1acbb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBBCu;
        goto label_1acbbc;
    }
    ctx->pc = 0x1ACBB4u;
    SET_GPR_U32(ctx, 31, 0x1ACBBCu);
    ctx->pc = 0x1ACBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBB4u;
    // 0x1acbb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC920u;
    { ctx->pc = 0x1ac920; return; }
    ctx->pc = 0x1ACBBCu;
label_1acbbc:
    // 0x1acbbc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1acbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1acbc0:
    // 0x1acbc0: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1acbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1acbc4:
    // 0x1acbc4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1acbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1acbc8:
    // 0x1acbc8: 0x3e00008  jr          $ra
label_1acbcc:
    if (ctx->pc == 0x1ACBCCu) {
        ctx->pc = 0x1ACBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBC8u;
        // 0x1acbcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBD0u;
        goto label_1acbd0;
    }
    ctx->pc = 0x1ACBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBC8u;
        // 0x1acbcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACBD0u;
label_1acbd0:
    // 0x1acbd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1acbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1acbd4:
    // 0x1acbd4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1acbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1acbd8:
    // 0x1acbd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1acbdc:
    // 0x1acbdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1acbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1acbe0:
    // 0x1acbe0: 0x3c10001b  lui         $s0, 0x1B
    ctx->pc = 0x1acbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)27 << 16));
label_1acbe4:
    // 0x1acbe4: 0x2610d100  addiu       $s0, $s0, -0x2F00
    ctx->pc = 0x1acbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955264));
label_1acbe8:
    // 0x1acbe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1acbe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acbec:
    // 0x1acbec: 0xac515f50  sw          $s1, 0x5F50($v0)
    ctx->pc = 0x1acbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24400), GPR_U32(ctx, 17));
label_1acbf0:
    // 0x1acbf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acbf4:
    // 0x1acbf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1acbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1acbf8:
    // 0x1acbf8: 0xc069134  jal         func_1A44D0
label_1acbfc:
    if (ctx->pc == 0x1ACBFCu) {
        ctx->pc = 0x1ACBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBF8u;
        // 0x1acbfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC00u;
        goto label_1acc00;
    }
    ctx->pc = 0x1ACBF8u;
    SET_GPR_U32(ctx, 31, 0x1ACC00u);
    ctx->pc = 0x1ACBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBF8u;
    // 0x1acbfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    { ctx->pc = 0x1a44d0; return; }
    ctx->pc = 0x1ACC00u;
label_1acc00:
    // 0x1acc00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acc04:
    // 0x1acc04: 0xc069134  jal         func_1A44D0
label_1acc08:
    if (ctx->pc == 0x1ACC08u) {
        ctx->pc = 0x1ACC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC04u;
        // 0x1acc08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC0Cu;
        goto label_1acc0c;
    }
    ctx->pc = 0x1ACC04u;
    SET_GPR_U32(ctx, 31, 0x1ACC0Cu);
    ctx->pc = 0x1ACC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC04u;
    // 0x1acc08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    { ctx->pc = 0x1a44d0; return; }
    ctx->pc = 0x1ACC0Cu;
label_1acc0c:
    // 0x1acc0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acc10:
    // 0x1acc10: 0xc069134  jal         func_1A44D0
label_1acc14:
    if (ctx->pc == 0x1ACC14u) {
        ctx->pc = 0x1ACC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC10u;
        // 0x1acc14: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC18u;
        goto label_1acc18;
    }
    ctx->pc = 0x1ACC10u;
    SET_GPR_U32(ctx, 31, 0x1ACC18u);
    ctx->pc = 0x1ACC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC10u;
    // 0x1acc14: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    { ctx->pc = 0x1a44d0; return; }
    ctx->pc = 0x1ACC18u;
label_1acc18:
    // 0x1acc18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1acc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1acc1c:
    // 0x1acc1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1acc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1acc20:
    // 0x1acc20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1acc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1acc24:
    // 0x1acc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acc28:
    // 0x1acc28: 0x3e00008  jr          $ra
label_1acc2c:
    if (ctx->pc == 0x1ACC2Cu) {
        ctx->pc = 0x1ACC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC28u;
        // 0x1acc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC30u;
        goto label_1acc30;
    }
    ctx->pc = 0x1ACC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC28u;
        // 0x1acc2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACC30u;
label_1acc30:
    // 0x1acc30: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1acc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acc34:
    // 0x1acc34: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1acc34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1acc38:
    // 0x1acc38: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1acc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1acc3c:
    // 0x1acc3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1acc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1acc40:
    // 0x1acc40: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x1acc40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_1acc44:
    // 0x1acc44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1acc48:
    if (ctx->pc == 0x1ACC48u) {
        ctx->pc = 0x1ACC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC44u;
        // 0x1acc48: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC4Cu;
        goto label_1acc4c;
    }
    ctx->pc = 0x1ACC44u;
    {
        const bool branch_taken_0x1acc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC44u;
        // 0x1acc48: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc44) {
            ctx->pc = 0x1ACC58u;
            goto label_1acc58;
        }
    }
    ctx->pc = 0x1ACC4Cu;
label_1acc4c:
    // 0x1acc4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1acc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1acc50:
    // 0x1acc50: 0x10000014  b           . + 4 + (0x14 << 2)
label_1acc54:
    if (ctx->pc == 0x1ACC54u) {
        ctx->pc = 0x1ACC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC50u;
        // 0x1acc54: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC58u;
        goto label_1acc58;
    }
    ctx->pc = 0x1ACC50u;
    {
        const bool branch_taken_0x1acc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC50u;
        // 0x1acc54: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc50) {
            ctx->pc = 0x1ACCA4u;
            goto label_1acca4;
        }
    }
    ctx->pc = 0x1ACC58u;
label_1acc58:
    // 0x1acc58: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1acc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1acc5c:
    // 0x1acc5c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1acc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1acc60:
    // 0x1acc60: 0x24425f58  addiu       $v0, $v0, 0x5F58
    ctx->pc = 0x1acc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24408));
label_1acc64:
    // 0x1acc64: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x1acc64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1acc68:
    // 0x1acc68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1acc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1acc6c:
    // 0x1acc6c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1acc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1acc70:
    // 0x1acc70: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1acc74:
    if (ctx->pc == 0x1ACC74u) {
        ctx->pc = 0x1ACC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC70u;
        // 0x1acc74: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC78u;
        goto label_1acc78;
    }
    ctx->pc = 0x1ACC70u;
    {
        const bool branch_taken_0x1acc70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC70u;
        // 0x1acc74: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc70) {
            ctx->pc = 0x1ACC90u;
            goto label_1acc90;
        }
    }
    ctx->pc = 0x1ACC78u;
label_1acc78:
    // 0x1acc78: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1acc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1acc7c:
    // 0x1acc7c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1acc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1acc80:
    // 0x1acc80: 0xc069134  jal         func_1A44D0
label_1acc84:
    if (ctx->pc == 0x1ACC84u) {
        ctx->pc = 0x1ACC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC80u;
        // 0x1acc84: 0x24a5d340  addiu       $a1, $a1, -0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC88u;
        goto label_1acc88;
    }
    ctx->pc = 0x1ACC80u;
    SET_GPR_U32(ctx, 31, 0x1ACC88u);
    ctx->pc = 0x1ACC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC80u;
    // 0x1acc84: 0x24a5d340  addiu       $a1, $a1, -0x2CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    { ctx->pc = 0x1a44d0; return; }
    ctx->pc = 0x1ACC88u;
label_1acc88:
    // 0x1acc88: 0x10000006  b           . + 4 + (0x6 << 2)
label_1acc8c:
    if (ctx->pc == 0x1ACC8Cu) {
        ctx->pc = 0x1ACC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC88u;
        // 0x1acc8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC90u;
        goto label_1acc90;
    }
    ctx->pc = 0x1ACC88u;
    {
        const bool branch_taken_0x1acc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC88u;
        // 0x1acc8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc88) {
            ctx->pc = 0x1ACCA4u;
            goto label_1acca4;
        }
    }
    ctx->pc = 0x1ACC90u;
label_1acc90:
    // 0x1acc90: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1acc90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1acc94:
    // 0x1acc94: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1acc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1acc98:
    // 0x1acc98: 0xc069138  jal         func_1A44E0
label_1acc9c:
    if (ctx->pc == 0x1ACC9Cu) {
        ctx->pc = 0x1ACC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC98u;
        // 0x1acc9c: 0x24a5d340  addiu       $a1, $a1, -0x2CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCA0u;
        goto label_1acca0;
    }
    ctx->pc = 0x1ACC98u;
    SET_GPR_U32(ctx, 31, 0x1ACCA0u);
    ctx->pc = 0x1ACC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC98u;
    // 0x1acc9c: 0x24a5d340  addiu       $a1, $a1, -0x2CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44E0u;
    { ctx->pc = 0x1a44e0; return; }
    ctx->pc = 0x1ACCA0u;
label_1acca0:
    // 0x1acca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1acca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acca4:
    // 0x1acca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1acca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1acca8:
    // 0x1acca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1accac:
    // 0x1accac: 0x3e00008  jr          $ra
label_1accb0:
    if (ctx->pc == 0x1ACCB0u) {
        ctx->pc = 0x1ACCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCACu;
        // 0x1accb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCB4u;
        goto label_1accb4;
    }
    ctx->pc = 0x1ACCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCACu;
        // 0x1accb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACCB4u;
label_1accb4:
    // 0x1accb4: 0x0  nop
    ctx->pc = 0x1accb4u;
    // NOP
label_1accb8:
    // 0x1accb8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1accb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1accbc:
    // 0x1accbc: 0xc  syscall     0
    ctx->pc = 0x1accbcu;
    ctx->pc = 0x1ACCC0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1accc0:
    // 0x1accc0: 0x3e00008  jr          $ra
label_1accc4:
    if (ctx->pc == 0x1ACCC4u) {
        ctx->pc = 0x1ACCC8u;
        goto label_1accc8;
    }
    ctx->pc = 0x1ACCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACCC8u;
label_1accc8:
    // 0x1accc8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1accc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_1acccc:
    // 0x1acccc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_1accd0:
    if (ctx->pc == 0x1ACCD0u) {
        ctx->pc = 0x1ACCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCCCu;
        // 0x1accd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCD4u;
        goto label_1accd4;
    }
    ctx->pc = 0x1ACCCCu;
    {
        const bool branch_taken_0x1acccc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCCCu;
        // 0x1accd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acccc) {
            ctx->pc = 0x1ACCF8u;
            goto label_1accf8;
        }
    }
    ctx->pc = 0x1ACCD4u;
label_1accd4:
    // 0x1accd4: 0x0  nop
    ctx->pc = 0x1accd4u;
    // NOP
label_1accd8:
    // 0x1accd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1accd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1accdc:
    // 0x1accdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1accdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1acce0:
    // 0x1acce0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1acce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1acce4:
    // 0x1acce4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1acce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1acce8:
    // 0x1acce8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1acce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1accec:
    // 0x1accec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1accecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1accf0:
    // 0x1accf0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1accf4:
    if (ctx->pc == 0x1ACCF4u) {
        ctx->pc = 0x1ACCF8u;
        goto label_1accf8;
    }
    ctx->pc = 0x1ACCF0u;
    {
        const bool branch_taken_0x1accf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1accf0) {
            ctx->pc = 0x1ACCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1accd8;
        }
    }
    ctx->pc = 0x1ACCF8u;
label_1accf8:
    // 0x1accf8: 0x3e00008  jr          $ra
label_1accfc:
    if (ctx->pc == 0x1ACCFCu) {
        ctx->pc = 0x1ACCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCF8u;
        // 0x1accfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD00u;
        goto label_1acd00;
    }
    ctx->pc = 0x1ACCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCF8u;
        // 0x1accfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD00u;
label_1acd00:
    // 0x1acd00: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1acd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_1acd04:
    // 0x1acd04: 0xc  syscall     0
    ctx->pc = 0x1acd04u;
    ctx->pc = 0x1ACD08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1acd08:
    // 0x1acd08: 0x3e00008  jr          $ra
label_1acd0c:
    if (ctx->pc == 0x1ACD0Cu) {
        ctx->pc = 0x1ACD10u;
        goto label_1acd10;
    }
    ctx->pc = 0x1ACD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD10u;
label_1acd10:
    // 0x1acd10: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x1acd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_1acd14:
    // 0x1acd14: 0xc  syscall     0
    ctx->pc = 0x1acd14u;
    ctx->pc = 0x1ACD18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1acd18:
    // 0x1acd18: 0x3e00008  jr          $ra
label_1acd1c:
    if (ctx->pc == 0x1ACD1Cu) {
        ctx->pc = 0x1ACD20u;
        goto label_1acd20;
    }
    ctx->pc = 0x1ACD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACD20u;
label_1acd20:
    // 0x1acd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1acd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1acd24:
    // 0x1acd24: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1acd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1acd28:
    // 0x1acd28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1acd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1acd2c:
    // 0x1acd2c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1acd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1acd30:
    // 0x1acd30: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1acd30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1acd34:
    // 0x1acd34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1acd38:
    // 0x1acd38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1acd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1acd3c:
    // 0x1acd3c: 0x24505fa0  addiu       $s0, $v0, 0x5FA0
    ctx->pc = 0x1acd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24480));
label_1acd40:
    // 0x1acd40: 0x8c445fa0  lw          $a0, 0x5FA0($v0)
    ctx->pc = 0x1acd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24480)));
label_1acd44:
    // 0x1acd44: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x1acd44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1acd48:
    // 0x1acd48: 0xc06b344  jal         func_1ACD10
label_1acd4c:
    if (ctx->pc == 0x1ACD4Cu) {
        ctx->pc = 0x1ACD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD48u;
        // 0x1acd4c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD50u;
        goto label_1acd50;
    }
    ctx->pc = 0x1ACD48u;
    SET_GPR_U32(ctx, 31, 0x1ACD50u);
    ctx->pc = 0x1ACD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD48u;
    // 0x1acd4c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    goto label_1acd10;
    ctx->pc = 0x1ACD50u;
label_1acd50:
    // 0x1acd50: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1acd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1acd54:
    // 0x1acd54: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1acd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
label_1acd58:
    // 0x1acd58: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x1acd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
label_1acd5c:
    // 0x1acd5c: 0x24a55c20  addiu       $a1, $a1, 0x5C20
    ctx->pc = 0x1acd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23584));
label_1acd60:
    // 0x1acd60: 0xc06b32e  jal         func_1ACCB8
label_1acd64:
    if (ctx->pc == 0x1ACD64u) {
        ctx->pc = 0x1ACD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD60u;
        // 0x1acd64: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD68u;
        goto label_1acd68;
    }
    ctx->pc = 0x1ACD60u;
    SET_GPR_U32(ctx, 31, 0x1ACD68u);
    ctx->pc = 0x1ACD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD60u;
    // 0x1acd64: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACCB8u;
    goto label_1accb8;
    ctx->pc = 0x1ACD68u;
label_1acd68:
    // 0x1acd68: 0xc0692a8  jal         func_1A4AA0
label_1acd6c:
    if (ctx->pc == 0x1ACD6Cu) {
        ctx->pc = 0x1ACD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD68u;
        // 0x1acd6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD70u;
        goto label_1acd70;
    }
    ctx->pc = 0x1ACD68u;
    SET_GPR_U32(ctx, 31, 0x1ACD70u);
    ctx->pc = 0x1ACD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD68u;
    // 0x1acd6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1ACD70u;
label_1acd70:
    // 0x1acd70: 0xc0692a8  jal         func_1A4AA0
label_1acd74:
    if (ctx->pc == 0x1ACD74u) {
        ctx->pc = 0x1ACD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD70u;
        // 0x1acd74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD78u;
        goto label_1acd78;
    }
    ctx->pc = 0x1ACD70u;
    SET_GPR_U32(ctx, 31, 0x1ACD78u);
    ctx->pc = 0x1ACD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD70u;
    // 0x1acd74: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1ACD78u;
label_1acd78:
    // 0x1acd78: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1acd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1acd7c:
    // 0x1acd7c: 0xc06b344  jal         func_1ACD10
label_1acd80:
    if (ctx->pc == 0x1ACD80u) {
        ctx->pc = 0x1ACD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD7Cu;
        // 0x1acd80: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD84u;
        goto label_1acd84;
    }
    ctx->pc = 0x1ACD7Cu;
    SET_GPR_U32(ctx, 31, 0x1ACD84u);
    ctx->pc = 0x1ACD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD7Cu;
    // 0x1acd80: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    goto label_1acd10;
    ctx->pc = 0x1ACD84u;
label_1acd84:
    // 0x1acd84: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1acd88:
    // 0x1acd88: 0xc06b344  jal         func_1ACD10
label_1acd8c:
    if (ctx->pc == 0x1ACD8Cu) {
        ctx->pc = 0x1ACD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD88u;
        // 0x1acd8c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACD90u;
        goto label_1acd90;
    }
    ctx->pc = 0x1ACD88u;
    SET_GPR_U32(ctx, 31, 0x1ACD90u);
    ctx->pc = 0x1ACD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD88u;
    // 0x1acd8c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    goto label_1acd10;
    ctx->pc = 0x1ACD90u;
label_1acd90:
    // 0x1acd90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1acd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1acd94:
    // 0x1acd94: 0x0  nop
    ctx->pc = 0x1acd94u;
    // NOP
label_1acd98:
    // 0x1acd98: 0xc06b340  jal         func_1ACD00
label_1acd9c:
    if (ctx->pc == 0x1ACD9Cu) {
        ctx->pc = 0x1ACD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACD98u;
        // 0x1acd9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDA0u;
        goto label_1acda0;
    }
    ctx->pc = 0x1ACD98u;
    SET_GPR_U32(ctx, 31, 0x1ACDA0u);
    ctx->pc = 0x1ACD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACD98u;
    // 0x1acd9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD00u;
    goto label_1acd00;
    ctx->pc = 0x1ACDA0u;
label_1acda0:
    // 0x1acda0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1acda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1acda4:
    // 0x1acda4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1acda4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acda8:
    // 0x1acda8: 0xc06b344  jal         func_1ACD10
label_1acdac:
    if (ctx->pc == 0x1ACDACu) {
        ctx->pc = 0x1ACDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDA8u;
        // 0x1acdac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDB0u;
        goto label_1acdb0;
    }
    ctx->pc = 0x1ACDA8u;
    SET_GPR_U32(ctx, 31, 0x1ACDB0u);
    ctx->pc = 0x1ACDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDA8u;
    // 0x1acdac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD10u;
    goto label_1acd10;
    ctx->pc = 0x1ACDB0u;
label_1acdb0:
    // 0x1acdb0: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1acdb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1acdb4:
    // 0x1acdb4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_1acdb8:
    if (ctx->pc == 0x1ACDB8u) {
        ctx->pc = 0x1ACDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDB4u;
        // 0x1acdb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDBCu;
        goto label_1acdbc;
    }
    ctx->pc = 0x1ACDB4u;
    {
        const bool branch_taken_0x1acdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acdb4) {
            ctx->pc = 0x1ACDB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACDB4u;
            // 0x1acdb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACD98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acd98;
        }
    }
    ctx->pc = 0x1ACDBCu;
label_1acdbc:
    // 0x1acdbc: 0xc06b340  jal         func_1ACD00
label_1acdc0:
    if (ctx->pc == 0x1ACDC0u) {
        ctx->pc = 0x1ACDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDBCu;
        // 0x1acdc0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDC4u;
        goto label_1acdc4;
    }
    ctx->pc = 0x1ACDBCu;
    SET_GPR_U32(ctx, 31, 0x1ACDC4u);
    ctx->pc = 0x1ACDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDBCu;
    // 0x1acdc0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACD00u;
    goto label_1acd00;
    ctx->pc = 0x1ACDC4u;
label_1acdc4:
    // 0x1acdc4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1acdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1acdc8:
    // 0x1acdc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1acdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1acdcc:
    // 0x1acdcc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1acdccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1acdd0:
    // 0x1acdd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1acdd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1acdd4:
    // 0x1acdd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acdd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acdd8:
    // 0x1acdd8: 0xac625f98  sw          $v0, 0x5F98($v1)
    ctx->pc = 0x1acdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24472), GPR_U32(ctx, 2));
label_1acddc:
    // 0x1acddc: 0x3e00008  jr          $ra
label_1acde0:
    if (ctx->pc == 0x1ACDE0u) {
        ctx->pc = 0x1ACDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDDCu;
        // 0x1acde0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDE4u;
        goto label_1acde4;
    }
    ctx->pc = 0x1ACDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDDCu;
        // 0x1acde0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACDE4u;
label_1acde4:
    // 0x1acde4: 0x0  nop
    ctx->pc = 0x1acde4u;
    // NOP
label_1acde8:
    // 0x1acde8: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x1acde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
label_1acdec:
    // 0x1acdec: 0xc  syscall     0
    ctx->pc = 0x1acdecu;
    ctx->pc = 0x1ACDF0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1acdf0:
    // 0x1acdf0: 0x3e00008  jr          $ra
label_1acdf4:
    if (ctx->pc == 0x1ACDF4u) {
        ctx->pc = 0x1ACDF8u;
        goto label_1acdf8;
    }
    ctx->pc = 0x1ACDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACDF8u;
label_1acdf8:
    // 0x1acdf8: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x1acdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
label_1acdfc:
    // 0x1acdfc: 0xc  syscall     0
    ctx->pc = 0x1acdfcu;
    ctx->pc = 0x1ACE00u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace00:
    // 0x1ace00: 0x3e00008  jr          $ra
label_1ace04:
    if (ctx->pc == 0x1ACE04u) {
        ctx->pc = 0x1ACE08u;
        goto label_1ace08;
    }
    ctx->pc = 0x1ACE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE08u;
label_1ace08:
    // 0x1ace08: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1ace08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1ace0c:
    // 0x1ace0c: 0xc  syscall     0
    ctx->pc = 0x1ace0cu;
    ctx->pc = 0x1ACE10u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace10:
    // 0x1ace10: 0x3e00008  jr          $ra
label_1ace14:
    if (ctx->pc == 0x1ACE14u) {
        ctx->pc = 0x1ACE18u;
        goto label_1ace18;
    }
    ctx->pc = 0x1ACE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE18u;
label_1ace18:
    // 0x1ace18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ace18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ace1c:
    // 0x1ace1c: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x1ace1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
label_1ace20:
    // 0x1ace20: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x1ace20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
label_1ace24:
    // 0x1ace24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1ace28:
    if (ctx->pc == 0x1ACE28u) {
        ctx->pc = 0x1ACE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE24u;
        // 0x1ace28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE2Cu;
        goto label_1ace2c;
    }
    ctx->pc = 0x1ACE24u;
    {
        const bool branch_taken_0x1ace24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE24u;
        // 0x1ace28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace24) {
            ctx->pc = 0x1ACE34u;
            goto label_1ace34;
        }
    }
    ctx->pc = 0x1ACE2Cu;
label_1ace2c:
    // 0x1ace2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ace30:
    if (ctx->pc == 0x1ACE30u) {
        ctx->pc = 0x1ACE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE2Cu;
        // 0x1ace30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE34u;
        goto label_1ace34;
    }
    ctx->pc = 0x1ACE2Cu;
    {
        const bool branch_taken_0x1ace2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE2Cu;
        // 0x1ace30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace2c) {
            ctx->pc = 0x1ACE3Cu;
            goto label_1ace3c;
        }
    }
    ctx->pc = 0x1ACE34u;
label_1ace34:
    // 0x1ace34: 0xc06b382  jal         func_1ACE08
label_1ace38:
    if (ctx->pc == 0x1ACE38u) {
        ctx->pc = 0x1ACE3Cu;
        goto label_1ace3c;
    }
    ctx->pc = 0x1ACE34u;
    SET_GPR_U32(ctx, 31, 0x1ACE3Cu);
    ctx->pc = 0x1ACE08u;
    goto label_1ace08;
    ctx->pc = 0x1ACE3Cu;
label_1ace3c:
    // 0x1ace3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ace3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ace40:
    // 0x1ace40: 0x3e00008  jr          $ra
label_1ace44:
    if (ctx->pc == 0x1ACE44u) {
        ctx->pc = 0x1ACE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE40u;
        // 0x1ace44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE48u;
        goto label_1ace48;
    }
    ctx->pc = 0x1ACE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE40u;
        // 0x1ace44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE48u;
label_1ace48:
    // 0x1ace48: 0x2403ffaa  addiu       $v1, $zero, -0x56
    ctx->pc = 0x1ace48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
label_1ace4c:
    // 0x1ace4c: 0xc  syscall     0
    ctx->pc = 0x1ace4cu;
    ctx->pc = 0x1ACE50u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace50:
    // 0x1ace50: 0x3e00008  jr          $ra
label_1ace54:
    if (ctx->pc == 0x1ACE54u) {
        ctx->pc = 0x1ACE58u;
        goto label_1ace58;
    }
    ctx->pc = 0x1ACE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE58u;
label_1ace58:
    // 0x1ace58: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x1ace58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_1ace5c:
    // 0x1ace5c: 0xc  syscall     0
    ctx->pc = 0x1ace5cu;
    ctx->pc = 0x1ACE60u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace60:
    // 0x1ace60: 0x3e00008  jr          $ra
label_1ace64:
    if (ctx->pc == 0x1ACE64u) {
        ctx->pc = 0x1ACE68u;
        goto label_1ace68;
    }
    ctx->pc = 0x1ACE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE68u;
label_1ace68:
    // 0x1ace68: 0x2403ffa9  addiu       $v1, $zero, -0x57
    ctx->pc = 0x1ace68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967209));
label_1ace6c:
    // 0x1ace6c: 0xc  syscall     0
    ctx->pc = 0x1ace6cu;
    ctx->pc = 0x1ACE70u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace70:
    // 0x1ace70: 0x3e00008  jr          $ra
label_1ace74:
    if (ctx->pc == 0x1ACE74u) {
        ctx->pc = 0x1ACE78u;
        goto label_1ace78;
    }
    ctx->pc = 0x1ACE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE78u;
label_1ace78:
    // 0x1ace78: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1ace78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1ace7c:
    // 0x1ace7c: 0xc  syscall     0
    ctx->pc = 0x1ace7cu;
    ctx->pc = 0x1ACE80u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace80:
    // 0x1ace80: 0x3e00008  jr          $ra
label_1ace84:
    if (ctx->pc == 0x1ACE84u) {
        ctx->pc = 0x1ACE88u;
        goto label_1ace88;
    }
    ctx->pc = 0x1ACE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE88u;
label_1ace88:
    // 0x1ace88: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x1ace88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
label_1ace8c:
    // 0x1ace8c: 0xc  syscall     0
    ctx->pc = 0x1ace8cu;
    ctx->pc = 0x1ACE90u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ace90:
    // 0x1ace90: 0x3e00008  jr          $ra
label_1ace94:
    if (ctx->pc == 0x1ACE94u) {
        ctx->pc = 0x1ACE98u;
        goto label_1ace98;
    }
    ctx->pc = 0x1ACE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACE98u;
label_1ace98:
    // 0x1ace98: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x1ace98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1ace9c:
    // 0x1ace9c: 0xc  syscall     0
    ctx->pc = 0x1ace9cu;
    ctx->pc = 0x1ACEA0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1acea0:
    // 0x1acea0: 0x3e00008  jr          $ra
label_1acea4:
    if (ctx->pc == 0x1ACEA4u) {
        ctx->pc = 0x1ACEA8u;
        goto label_1acea8;
    }
    ctx->pc = 0x1ACEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACEA8u;
label_1acea8:
    // 0x1acea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1acea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1aceac:
    // 0x1aceac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aceb0:
    // 0x1aceb0: 0xc069320  jal         func_1A4C80
label_1aceb4:
    if (ctx->pc == 0x1ACEB4u) {
        ctx->pc = 0x1ACEB8u;
        goto label_1aceb8;
    }
    ctx->pc = 0x1ACEB0u;
    SET_GPR_U32(ctx, 31, 0x1ACEB8u);
    ctx->pc = 0x1A4C80u;
    { ctx->pc = 0x1a4c80; return; }
    ctx->pc = 0x1ACEB8u;
label_1aceb8:
    // 0x1aceb8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1aceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_1acebc:
    // 0x1acebc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1acec0:
    if (ctx->pc == 0x1ACEC0u) {
        ctx->pc = 0x1ACEC4u;
        goto label_1acec4;
    }
    ctx->pc = 0x1ACEBCu;
    {
        const bool branch_taken_0x1acebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1acebc) {
            ctx->pc = 0x1ACED4u;
            goto label_1aced4;
        }
    }
    ctx->pc = 0x1ACEC4u;
label_1acec4:
    // 0x1acec4: 0xc06b3ba  jal         func_1ACEE8
label_1acec8:
    if (ctx->pc == 0x1ACEC8u) {
        ctx->pc = 0x1ACECCu;
        goto label_1acecc;
    }
    ctx->pc = 0x1ACEC4u;
    SET_GPR_U32(ctx, 31, 0x1ACECCu);
    ctx->pc = 0x1ACEE8u;
    goto label_1acee8;
    ctx->pc = 0x1ACECCu;
label_1acecc:
    // 0x1acecc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1aced0:
    if (ctx->pc == 0x1ACED0u) {
        ctx->pc = 0x1ACED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACECCu;
        // 0x1aced0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACED4u;
        goto label_1aced4;
    }
    ctx->pc = 0x1ACECCu;
    {
        const bool branch_taken_0x1acecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACECCu;
        // 0x1aced0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acecc) {
            ctx->pc = 0x1ACEE0u;
            goto label_1acee0;
        }
    }
    ctx->pc = 0x1ACED4u;
label_1aced4:
    // 0x1aced4: 0xc069324  jal         func_1A4C90
label_1aced8:
    if (ctx->pc == 0x1ACED8u) {
        ctx->pc = 0x1ACEDCu;
        goto label_1acedc;
    }
    ctx->pc = 0x1ACED4u;
    SET_GPR_U32(ctx, 31, 0x1ACEDCu);
    ctx->pc = 0x1A4C90u;
    { ctx->pc = 0x1a4c90; return; }
    ctx->pc = 0x1ACEDCu;
label_1acedc:
    // 0x1acedc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1acee0:
    // 0x1acee0: 0x3e00008  jr          $ra
label_1acee4:
    if (ctx->pc == 0x1ACEE4u) {
        ctx->pc = 0x1ACEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEE0u;
        // 0x1acee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACEE8u;
        goto label_1acee8;
    }
    ctx->pc = 0x1ACEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEE0u;
        // 0x1acee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACEE8u;
label_1acee8:
    // 0x1acee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1acee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1aceec:
    // 0x1aceec: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1aceecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1acef0:
    // 0x1acef0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1acef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1acef4:
    // 0x1acef4: 0x2484a770  addiu       $a0, $a0, -0x5890
    ctx->pc = 0x1acef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944624));
label_1acef8:
    // 0x1acef8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1acef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1acefc:
    // 0x1acefc: 0x3c120028  lui         $s2, 0x28
    ctx->pc = 0x1acefcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
label_1acf00:
    // 0x1acf00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1acf04:
    // 0x1acf04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1acf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1acf08:
    // 0x1acf08: 0x26506250  addiu       $s0, $s2, 0x6250
    ctx->pc = 0x1acf08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25168));
label_1acf0c:
    // 0x1acf0c: 0x8e456250  lw          $a1, 0x6250($s2)
    ctx->pc = 0x1acf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25168)));
label_1acf10:
    // 0x1acf10: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1acf10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1acf14:
    // 0x1acf14: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x1acf14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1acf18:
    // 0x1acf18: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1acf18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1acf1c:
    // 0x1acf1c: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x1acf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1acf20:
    // 0x1acf20: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x1acf20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_1acf24:
    // 0x1acf24: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1acf24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1acf28:
    // 0x1acf28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1acf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1acf2c:
    // 0x1acf2c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1acf2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1acf30:
    // 0x1acf30: 0xc069a22  jal         func_1A6888
label_1acf34:
    if (ctx->pc == 0x1ACF34u) {
        ctx->pc = 0x1ACF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF30u;
        // 0x1acf34: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF38u;
        goto label_1acf38;
    }
    ctx->pc = 0x1ACF30u;
    SET_GPR_U32(ctx, 31, 0x1ACF38u);
    ctx->pc = 0x1ACF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF30u;
    // 0x1acf34: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1ACF38u;
label_1acf38:
    // 0x1acf38: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x1acf38u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
label_1acf3c:
    // 0x1acf3c: 0x40f  sync.p
    ctx->pc = 0x1acf3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1acf40:
    // 0x1acf40: 0x8e516250  lw          $s1, 0x6250($s2)
    ctx->pc = 0x1acf40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 25168)));
label_1acf44:
    // 0x1acf44: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1acf44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_1acf48:
    // 0x1acf48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1acf4c:
    if (ctx->pc == 0x1ACF4Cu) {
        ctx->pc = 0x1ACF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF48u;
        // 0x1acf4c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF50u;
        goto label_1acf50;
    }
    ctx->pc = 0x1ACF48u;
    {
        const bool branch_taken_0x1acf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF48u;
        // 0x1acf4c: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf48) {
            ctx->pc = 0x1ACF64u;
            goto label_1acf64;
        }
    }
    ctx->pc = 0x1ACF50u;
label_1acf50:
    // 0x1acf50: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1acf50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1acf54:
    // 0x1acf54: 0xc069a22  jal         func_1A6888
label_1acf58:
    if (ctx->pc == 0x1ACF58u) {
        ctx->pc = 0x1ACF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF54u;
        // 0x1acf58: 0x2484a7a8  addiu       $a0, $a0, -0x5858 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF5Cu;
        goto label_1acf5c;
    }
    ctx->pc = 0x1ACF54u;
    SET_GPR_U32(ctx, 31, 0x1ACF5Cu);
    ctx->pc = 0x1ACF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF54u;
    // 0x1acf58: 0x2484a7a8  addiu       $a0, $a0, -0x5858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1ACF5Cu;
label_1acf5c:
    // 0x1acf5c: 0xc06b6b4  jal         func_1ADAD0
label_1acf60:
    if (ctx->pc == 0x1ACF60u) {
        ctx->pc = 0x1ACF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF5Cu;
        // 0x1acf60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF64u;
        goto label_1acf64;
    }
    ctx->pc = 0x1ACF5Cu;
    SET_GPR_U32(ctx, 31, 0x1ACF64u);
    ctx->pc = 0x1ACF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF5Cu;
    // 0x1acf60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    { ctx->pc = 0x1adad0; return; }
    ctx->pc = 0x1ACF64u;
label_1acf64:
    // 0x1acf64: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1acf68:
    // 0x1acf68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1acf6c:
    if (ctx->pc == 0x1ACF6Cu) {
        ctx->pc = 0x1ACF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF68u;
        // 0x1acf6c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF70u;
        goto label_1acf70;
    }
    ctx->pc = 0x1ACF68u;
    {
        const bool branch_taken_0x1acf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF68u;
        // 0x1acf6c: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acf68) {
            ctx->pc = 0x1ACFA0u;
            goto label_1acfa0;
        }
    }
    ctx->pc = 0x1ACF70u;
label_1acf70:
    // 0x1acf70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1acf74:
    // 0x1acf74: 0x0  nop
    ctx->pc = 0x1acf74u;
    // NOP
label_1acf78:
    // 0x1acf78: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1acf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1acf7c:
    // 0x1acf7c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1acf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1acf80:
    // 0x1acf80: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1acf80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1acf84:
    // 0x1acf84: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1acf84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1acf88:
    // 0x1acf88: 0xc06b382  jal         func_1ACE08
label_1acf8c:
    if (ctx->pc == 0x1ACF8Cu) {
        ctx->pc = 0x1ACF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF88u;
        // 0x1acf8c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF90u;
        goto label_1acf90;
    }
    ctx->pc = 0x1ACF88u;
    SET_GPR_U32(ctx, 31, 0x1ACF90u);
    ctx->pc = 0x1ACF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACF88u;
    // 0x1acf8c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    goto label_1ace08;
    ctx->pc = 0x1ACF90u;
label_1acf90:
    // 0x1acf90: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1acf90u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1acf94:
    // 0x1acf94: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1acf98:
    // 0x1acf98: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1acf9c:
    if (ctx->pc == 0x1ACF9Cu) {
        ctx->pc = 0x1ACF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF98u;
        // 0x1acf9c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFA0u;
        goto label_1acfa0;
    }
    ctx->pc = 0x1ACF98u;
    {
        const bool branch_taken_0x1acf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acf98) {
            ctx->pc = 0x1ACF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACF98u;
            // 0x1acf9c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acf78;
        }
    }
    ctx->pc = 0x1ACFA0u;
label_1acfa0:
    // 0x1acfa0: 0x26506250  addiu       $s0, $s2, 0x6250
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25168));
label_1acfa4:
    // 0x1acfa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1acfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1acfa8:
    // 0x1acfa8: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1acfa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1acfac:
    // 0x1acfac: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x1acfacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_1acfb0:
    // 0x1acfb0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1acfb4:
    if (ctx->pc == 0x1ACFB4u) {
        ctx->pc = 0x1ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFB0u;
        // 0x1acfb4: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFB8u;
        goto label_1acfb8;
    }
    ctx->pc = 0x1ACFB0u;
    {
        const bool branch_taken_0x1acfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFB0u;
        // 0x1acfb4: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfb0) {
            ctx->pc = 0x1ACFD0u;
            goto label_1acfd0;
        }
    }
    ctx->pc = 0x1ACFB8u;
label_1acfb8:
    // 0x1acfb8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1acfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1acfbc:
    // 0x1acfbc: 0xc069a22  jal         func_1A6888
label_1acfc0:
    if (ctx->pc == 0x1ACFC0u) {
        ctx->pc = 0x1ACFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFBCu;
        // 0x1acfc0: 0x2484a7c0  addiu       $a0, $a0, -0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFC4u;
        goto label_1acfc4;
    }
    ctx->pc = 0x1ACFBCu;
    SET_GPR_U32(ctx, 31, 0x1ACFC4u);
    ctx->pc = 0x1ACFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFBCu;
    // 0x1acfc0: 0x2484a7c0  addiu       $a0, $a0, -0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1ACFC4u;
label_1acfc4:
    // 0x1acfc4: 0xc06b6b4  jal         func_1ADAD0
label_1acfc8:
    if (ctx->pc == 0x1ACFC8u) {
        ctx->pc = 0x1ACFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFC4u;
        // 0x1acfc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFCCu;
        goto label_1acfcc;
    }
    ctx->pc = 0x1ACFC4u;
    SET_GPR_U32(ctx, 31, 0x1ACFCCu);
    ctx->pc = 0x1ACFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFC4u;
    // 0x1acfc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    { ctx->pc = 0x1adad0; return; }
    ctx->pc = 0x1ACFCCu;
label_1acfcc:
    // 0x1acfcc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acfccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1acfd0:
    // 0x1acfd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1acfd4:
    if (ctx->pc == 0x1ACFD4u) {
        ctx->pc = 0x1ACFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFD0u;
        // 0x1acfd4: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFD8u;
        goto label_1acfd8;
    }
    ctx->pc = 0x1ACFD0u;
    {
        const bool branch_taken_0x1acfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFD0u;
        // 0x1acfd4: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acfd0) {
            ctx->pc = 0x1AD008u;
            goto label_1ad008;
        }
    }
    ctx->pc = 0x1ACFD8u;
label_1acfd8:
    // 0x1acfd8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1acfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1acfdc:
    // 0x1acfdc: 0x0  nop
    ctx->pc = 0x1acfdcu;
    // NOP
label_1acfe0:
    // 0x1acfe0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1acfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1acfe4:
    // 0x1acfe4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1acfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1acfe8:
    // 0x1acfe8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1acfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1acfec:
    // 0x1acfec: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1acfecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1acff0:
    // 0x1acff0: 0xc06b382  jal         func_1ACE08
label_1acff4:
    if (ctx->pc == 0x1ACFF4u) {
        ctx->pc = 0x1ACFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFF0u;
        // 0x1acff4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFF8u;
        goto label_1acff8;
    }
    ctx->pc = 0x1ACFF0u;
    SET_GPR_U32(ctx, 31, 0x1ACFF8u);
    ctx->pc = 0x1ACFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFF0u;
    // 0x1acff4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    goto label_1ace08;
    ctx->pc = 0x1ACFF8u;
label_1acff8:
    // 0x1acff8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1acff8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1acffc:
    // 0x1acffc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1acffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1ad000:
    // 0x1ad000: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1ad004:
    if (ctx->pc == 0x1AD004u) {
        ctx->pc = 0x1AD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD000u;
        // 0x1ad004: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD008u;
        goto label_1ad008;
    }
    ctx->pc = 0x1AD000u;
    {
        const bool branch_taken_0x1ad000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad000) {
            ctx->pc = 0x1AD004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD000u;
            // 0x1ad004: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acfe0;
        }
    }
    ctx->pc = 0x1AD008u;
label_1ad008:
    // 0x1ad008: 0x26506250  addiu       $s0, $s2, 0x6250
    ctx->pc = 0x1ad008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 25168));
label_1ad00c:
    // 0x1ad00c: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x1ad00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
label_1ad010:
    // 0x1ad010: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x1ad010u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
label_1ad014:
    // 0x1ad014: 0x40f  sync.p
    ctx->pc = 0x1ad014u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad018:
    // 0x1ad018: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ad018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ad01c:
    // 0x1ad01c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_1ad020:
    if (ctx->pc == 0x1AD020u) {
        ctx->pc = 0x1AD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD01Cu;
        // 0x1ad020: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD024u;
        goto label_1ad024;
    }
    ctx->pc = 0x1AD01Cu;
    {
        const bool branch_taken_0x1ad01c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ad01c) {
            ctx->pc = 0x1AD020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD01Cu;
            // 0x1ad020: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD084u;
            goto label_1ad084;
        }
    }
    ctx->pc = 0x1AD024u;
label_1ad024:
    // 0x1ad024: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1ad024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1ad028:
    // 0x1ad028: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x1ad028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_1ad02c:
    // 0x1ad02c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ad030:
    if (ctx->pc == 0x1AD030u) {
        ctx->pc = 0x1AD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD02Cu;
        // 0x1ad030: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD034u;
        goto label_1ad034;
    }
    ctx->pc = 0x1AD02Cu;
    {
        const bool branch_taken_0x1ad02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD02Cu;
        // 0x1ad030: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad02c) {
            ctx->pc = 0x1AD04Cu;
            goto label_1ad04c;
        }
    }
    ctx->pc = 0x1AD034u;
label_1ad034:
    // 0x1ad034: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ad034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1ad038:
    // 0x1ad038: 0xc069a22  jal         func_1A6888
label_1ad03c:
    if (ctx->pc == 0x1AD03Cu) {
        ctx->pc = 0x1AD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD038u;
        // 0x1ad03c: 0x2484a7d8  addiu       $a0, $a0, -0x5828 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD040u;
        goto label_1ad040;
    }
    ctx->pc = 0x1AD038u;
    SET_GPR_U32(ctx, 31, 0x1AD040u);
    ctx->pc = 0x1AD03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD038u;
    // 0x1ad03c: 0x2484a7d8  addiu       $a0, $a0, -0x5828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    { ctx->pc = 0x1a6888; return; }
    ctx->pc = 0x1AD040u;
label_1ad040:
    // 0x1ad040: 0xc06b6b4  jal         func_1ADAD0
label_1ad044:
    if (ctx->pc == 0x1AD044u) {
        ctx->pc = 0x1AD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD040u;
        // 0x1ad044: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD048u;
        goto label_1ad048;
    }
    ctx->pc = 0x1AD040u;
    SET_GPR_U32(ctx, 31, 0x1AD048u);
    ctx->pc = 0x1AD044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD040u;
    // 0x1ad044: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    { ctx->pc = 0x1adad0; return; }
    ctx->pc = 0x1AD048u;
label_1ad048:
    // 0x1ad048: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1ad048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1ad04c:
    // 0x1ad04c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1ad050:
    if (ctx->pc == 0x1AD050u) {
        ctx->pc = 0x1AD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD04Cu;
        // 0x1ad050: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD054u;
        goto label_1ad054;
    }
    ctx->pc = 0x1AD04Cu;
    {
        const bool branch_taken_0x1ad04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD04Cu;
        // 0x1ad050: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad04c) {
            ctx->pc = 0x1AD080u;
            goto label_1ad080;
        }
    }
    ctx->pc = 0x1AD054u;
label_1ad054:
    // 0x1ad054: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1ad054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ad058:
    // 0x1ad058: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1ad058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1ad05c:
    // 0x1ad05c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1ad05cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ad060:
    // 0x1ad060: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1ad060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ad064:
    // 0x1ad064: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1ad064u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ad068:
    // 0x1ad068: 0xc06b382  jal         func_1ACE08
label_1ad06c:
    if (ctx->pc == 0x1AD06Cu) {
        ctx->pc = 0x1AD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD068u;
        // 0x1ad06c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD070u;
        goto label_1ad070;
    }
    ctx->pc = 0x1AD068u;
    SET_GPR_U32(ctx, 31, 0x1AD070u);
    ctx->pc = 0x1AD06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD068u;
    // 0x1ad06c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    goto label_1ace08;
    ctx->pc = 0x1AD070u;
label_1ad070:
    // 0x1ad070: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1ad070u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1ad074:
    // 0x1ad074: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1ad074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1ad078:
    // 0x1ad078: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1ad07c:
    if (ctx->pc == 0x1AD07Cu) {
        ctx->pc = 0x1AD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD078u;
        // 0x1ad07c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD080u;
        goto label_1ad080;
    }
    ctx->pc = 0x1AD078u;
    {
        const bool branch_taken_0x1ad078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad078) {
            ctx->pc = 0x1AD07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD078u;
            // 0x1ad07c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad058;
        }
    }
    ctx->pc = 0x1AD080u;
label_1ad080:
    // 0x1ad080: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x1ad080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1ad084:
    // 0x1ad084: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1ad084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_1ad088:
    // 0x1ad088: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1ad08c:
    if (ctx->pc == 0x1AD08Cu) {
        ctx->pc = 0x1AD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD088u;
        // 0x1ad08c: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD090u;
        goto label_1ad090;
    }
    ctx->pc = 0x1AD088u;
    {
        const bool branch_taken_0x1ad088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD088u;
        // 0x1ad08c: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad088) {
            ctx->pc = 0x1AD0C0u;
            goto label_1ad0c0;
        }
    }
    ctx->pc = 0x1AD090u;
label_1ad090:
    // 0x1ad090: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1ad090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
label_1ad094:
    // 0x1ad094: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x1ad094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_1ad098:
    // 0x1ad098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad09c:
    // 0x1ad09c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ad09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0a0:
    // 0x1ad0a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0a4:
    // 0x1ad0a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ad0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0a8:
    // 0x1ad0a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ad0a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0ac:
    // 0x1ad0ac: 0xc06b382  jal         func_1ACE08
label_1ad0b0:
    if (ctx->pc == 0x1AD0B0u) {
        ctx->pc = 0x1AD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0ACu;
        // 0x1ad0b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD0B4u;
        goto label_1ad0b4;
    }
    ctx->pc = 0x1AD0ACu;
    SET_GPR_U32(ctx, 31, 0x1AD0B4u);
    ctx->pc = 0x1AD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0ACu;
    // 0x1ad0b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE08u;
    goto label_1ace08;
    ctx->pc = 0x1AD0B4u;
label_1ad0b4:
    // 0x1ad0b4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x1ad0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_1ad0b8:
    // 0x1ad0b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1ad0bc:
    if (ctx->pc == 0x1AD0BCu) {
        ctx->pc = 0x1AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0B8u;
        // 0x1ad0bc: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD0C0u;
        goto label_1ad0c0;
    }
    ctx->pc = 0x1AD0B8u;
    {
        const bool branch_taken_0x1ad0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0B8u;
        // 0x1ad0bc: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0b8) {
            ctx->pc = 0x1AD098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad098;
        }
    }
    ctx->pc = 0x1AD0C0u;
label_1ad0c0:
    // 0x1ad0c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ad0c4:
    // 0x1ad0c4: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1ad0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0c8:
    // 0x1ad0c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad0c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad0cc:
    // 0x1ad0cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ad0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad0d0:
    // 0x1ad0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad0d4:
    // 0x1ad0d4: 0x3e00008  jr          $ra
label_1ad0d8:
    if (ctx->pc == 0x1AD0D8u) {
        ctx->pc = 0x1AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0D4u;
        // 0x1ad0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD0DCu;
        goto label_1ad0dc;
    }
    ctx->pc = 0x1AD0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0D4u;
        // 0x1ad0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD0DCu;
label_1ad0dc:
    // 0x1ad0dc: 0x0  nop
    ctx->pc = 0x1ad0dcu;
    // NOP
label_1ad0e0:
    // 0x1ad0e0: 0x0  nop
    ctx->pc = 0x1ad0e0u;
    // NOP
label_1ad0e4:
    // 0x1ad0e4: 0x0  nop
    ctx->pc = 0x1ad0e4u;
    // NOP
label_1ad0e8:
    // 0x1ad0e8: 0x0  nop
    ctx->pc = 0x1ad0e8u;
    // NOP
label_1ad0ec:
    // 0x1ad0ec: 0x0  nop
    ctx->pc = 0x1ad0ecu;
    // NOP
label_1ad0f0:
    // 0x1ad0f0: 0x0  nop
    ctx->pc = 0x1ad0f0u;
    // NOP
label_1ad0f4:
    // 0x1ad0f4: 0x0  nop
    ctx->pc = 0x1ad0f4u;
    // NOP
label_1ad0f8:
    // 0x1ad0f8: 0x0  nop
    ctx->pc = 0x1ad0f8u;
    // NOP
label_1ad0fc:
    // 0x1ad0fc: 0x0  nop
    ctx->pc = 0x1ad0fcu;
    // NOP
label_1ad100:
    // 0x1ad100: 0x3c1a0037  lui         $k0, 0x37
    ctx->pc = 0x1ad100u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)55 << 16));
label_1ad104:
    // 0x1ad104: 0x275a5a40  addiu       $k0, $k0, 0x5A40
    ctx->pc = 0x1ad104u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 23104));
label_1ad108:
    // 0x1ad108: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x1ad108u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_1ad10c:
    // 0x1ad10c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x1ad10cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_1ad110:
    // 0x1ad110: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x1ad110u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_1ad114:
    // 0x1ad114: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x1ad114u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_1ad118:
    // 0x1ad118: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x1ad118u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_1ad11c:
    // 0x1ad11c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x1ad11cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1ad120:
    // 0x1ad120: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1ad120u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1ad124:
    // 0x1ad124: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1ad124u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1ad128:
    // 0x1ad128: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1ad128u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1ad12c:
    // 0x1ad12c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1ad12cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1ad130:
    // 0x1ad130: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1ad130u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1ad134:
    // 0x1ad134: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1ad134u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1ad138:
    // 0x1ad138: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1ad138u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1ad13c:
    // 0x1ad13c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1ad13cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1ad140:
    // 0x1ad140: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1ad140u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1ad144:
    // 0x1ad144: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1ad144u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1ad148:
    // 0x1ad148: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1ad148u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1ad14c:
    // 0x1ad14c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1ad14cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1ad150:
    // 0x1ad150: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1ad150u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1ad154:
    // 0x1ad154: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1ad154u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1ad158:
    // 0x1ad158: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1ad158u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1ad15c:
    // 0x1ad15c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1ad15cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1ad160:
    // 0x1ad160: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1ad160u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1ad164:
    // 0x1ad164: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1ad164u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1ad168:
    // 0x1ad168: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1ad168u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1ad16c:
    // 0x1ad16c: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1ad16cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1ad170:
    // 0x1ad170: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1ad170u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1ad174:
    // 0x1ad174: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1ad174u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1ad178:
    // 0x1ad178: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1ad178u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1ad17c:
    // 0x1ad17c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ad17cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ad180:
    // 0x1ad180: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad184:
    // 0x1ad184: 0xfc225c40  sd          $v0, 0x5C40($at)
    ctx->pc = 0x1ad184u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23616), GPR_U64(ctx, 2));
label_1ad188:
    // 0x1ad188: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1ad188u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1ad18c:
    // 0x1ad18c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad190:
    // 0x1ad190: 0xfc225c48  sd          $v0, 0x5C48($at)
    ctx->pc = 0x1ad190u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23624), GPR_U64(ctx, 2));
label_1ad194:
    // 0x1ad194: 0x1012  mflo        $v0
    ctx->pc = 0x1ad194u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1ad198:
    // 0x1ad198: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad19c:
    // 0x1ad19c: 0xfc225c50  sd          $v0, 0x5C50($at)
    ctx->pc = 0x1ad19cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23632), GPR_U64(ctx, 2));
label_1ad1a0:
    // 0x1ad1a0: 0x70001012  mflo1       $v0
    ctx->pc = 0x1ad1a0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1ad1a4:
    // 0x1ad1a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad1a8:
    // 0x1ad1a8: 0xfc225c58  sd          $v0, 0x5C58($at)
    ctx->pc = 0x1ad1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23640), GPR_U64(ctx, 2));
label_1ad1ac:
    // 0x1ad1ac: 0x1028  mfsa        $v0
    ctx->pc = 0x1ad1acu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1ad1b0:
    // 0x1ad1b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad1b4:
    // 0x1ad1b4: 0xfc225c60  sd          $v0, 0x5C60($at)
    ctx->pc = 0x1ad1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23648), GPR_U64(ctx, 2));
label_1ad1b8:
    // 0x1ad1b8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1ad1bc:
    // 0x1ad1bc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1ad1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_1ad1c0:
    // 0x1ad1c0: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x1ad1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_1ad1c4:
    // 0x1ad1c4: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x1ad1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_1ad1c8:
    // 0x1ad1c8: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1ad1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1ad1cc:
    // 0x1ad1cc: 0x25085a40  addiu       $t0, $t0, 0x5A40
    ctx->pc = 0x1ad1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23104));
label_1ad1d0:
    // 0x1ad1d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad1d4:
    // 0x1ad1d4: 0xac265c68  sw          $a2, 0x5C68($at)
    ctx->pc = 0x1ad1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23656), GPR_U32(ctx, 6));
label_1ad1d8:
    // 0x1ad1d8: 0x3c01001b  lui         $at, 0x1B
    ctx->pc = 0x1ad1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)27 << 16));
label_1ad1dc:
    // 0x1ad1dc: 0x2421d200  addiu       $at, $at, -0x2E00
    ctx->pc = 0x1ad1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955520));
label_1ad1e0:
    // 0x1ad1e0: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x1ad1e0u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_1ad1e4:
    // 0x1ad1e4: 0x40f  sync.p
    ctx->pc = 0x1ad1e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad1e8:
    // 0x1ad1e8: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1ad1ec:
    // 0x1ad1ec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ad1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ad1f0:
    // 0x1ad1f0: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x1ad1f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_1ad1f4:
    // 0x1ad1f4: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1ad1f4u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1ad1f8:
    // 0x1ad1f8: 0x40f  sync.p
    ctx->pc = 0x1ad1f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad1fc:
    // 0x1ad1fc: 0x42000018  eret
    ctx->pc = 0x1ad1fcu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1ad200:
    // 0x1ad200: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x1ad200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_1ad204:
    // 0x1ad204: 0x8c215f50  lw          $at, 0x5F50($at)
    ctx->pc = 0x1ad204u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24400)));
label_1ad208:
    // 0x1ad208: 0x3c1d0037  lui         $sp, 0x37
    ctx->pc = 0x1ad208u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)55 << 16));
label_1ad20c:
    // 0x1ad20c: 0x20f809  jalr        $at
    ctx->pc = 0x1ad210u;
    return;
}

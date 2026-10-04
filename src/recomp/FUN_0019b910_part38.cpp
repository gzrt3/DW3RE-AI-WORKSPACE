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


void FUN_0019b910_part38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ada20u: goto label_1ada20;
        case 0x1ada24u: goto label_1ada24;
        case 0x1ada28u: goto label_1ada28;
        case 0x1ada2cu: goto label_1ada2c;
        case 0x1ada30u: goto label_1ada30;
        case 0x1ada34u: goto label_1ada34;
        case 0x1ada38u: goto label_1ada38;
        case 0x1ada3cu: goto label_1ada3c;
        case 0x1ada40u: goto label_1ada40;
        case 0x1ada44u: goto label_1ada44;
        case 0x1ada48u: goto label_1ada48;
        case 0x1ada4cu: goto label_1ada4c;
        case 0x1ada50u: goto label_1ada50;
        case 0x1ada54u: goto label_1ada54;
        case 0x1ada58u: goto label_1ada58;
        case 0x1ada5cu: goto label_1ada5c;
        case 0x1ada60u: goto label_1ada60;
        case 0x1ada64u: goto label_1ada64;
        case 0x1ada68u: goto label_1ada68;
        case 0x1ada6cu: goto label_1ada6c;
        case 0x1ada70u: goto label_1ada70;
        case 0x1ada74u: goto label_1ada74;
        case 0x1ada78u: goto label_1ada78;
        case 0x1ada7cu: goto label_1ada7c;
        case 0x1ada80u: goto label_1ada80;
        case 0x1ada84u: goto label_1ada84;
        case 0x1ada88u: goto label_1ada88;
        case 0x1ada8cu: goto label_1ada8c;
        case 0x1ada90u: goto label_1ada90;
        case 0x1ada94u: goto label_1ada94;
        case 0x1ada98u: goto label_1ada98;
        case 0x1ada9cu: goto label_1ada9c;
        case 0x1adaa0u: goto label_1adaa0;
        case 0x1adaa4u: goto label_1adaa4;
        case 0x1adaa8u: goto label_1adaa8;
        case 0x1adaacu: goto label_1adaac;
        case 0x1adab0u: goto label_1adab0;
        case 0x1adab4u: goto label_1adab4;
        case 0x1adab8u: goto label_1adab8;
        case 0x1adabcu: goto label_1adabc;
        case 0x1adac0u: goto label_1adac0;
        case 0x1adac4u: goto label_1adac4;
        case 0x1adac8u: goto label_1adac8;
        case 0x1adaccu: goto label_1adacc;
        case 0x1adad0u: goto label_1adad0;
        case 0x1adad4u: goto label_1adad4;
        case 0x1adad8u: goto label_1adad8;
        case 0x1adadcu: goto label_1adadc;
        case 0x1adae0u: goto label_1adae0;
        case 0x1adae4u: goto label_1adae4;
        case 0x1adae8u: goto label_1adae8;
        case 0x1adaecu: goto label_1adaec;
        case 0x1adaf0u: goto label_1adaf0;
        case 0x1adaf4u: goto label_1adaf4;
        case 0x1adaf8u: goto label_1adaf8;
        case 0x1adafcu: goto label_1adafc;
        case 0x1adb00u: goto label_1adb00;
        case 0x1adb04u: goto label_1adb04;
        case 0x1adb08u: goto label_1adb08;
        case 0x1adb0cu: goto label_1adb0c;
        case 0x1adb10u: goto label_1adb10;
        case 0x1adb14u: goto label_1adb14;
        case 0x1adb18u: goto label_1adb18;
        case 0x1adb1cu: goto label_1adb1c;
        case 0x1adb20u: goto label_1adb20;
        case 0x1adb24u: goto label_1adb24;
        case 0x1adb28u: goto label_1adb28;
        case 0x1adb2cu: goto label_1adb2c;
        case 0x1adb30u: goto label_1adb30;
        case 0x1adb34u: goto label_1adb34;
        case 0x1adb38u: goto label_1adb38;
        case 0x1adb3cu: goto label_1adb3c;
        case 0x1adb40u: goto label_1adb40;
        case 0x1adb44u: goto label_1adb44;
        case 0x1adb48u: goto label_1adb48;
        case 0x1adb4cu: goto label_1adb4c;
        case 0x1adb50u: goto label_1adb50;
        case 0x1adb54u: goto label_1adb54;
        case 0x1adb58u: goto label_1adb58;
        case 0x1adb5cu: goto label_1adb5c;
        case 0x1adb60u: goto label_1adb60;
        case 0x1adb64u: goto label_1adb64;
        case 0x1adb68u: goto label_1adb68;
        case 0x1adb6cu: goto label_1adb6c;
        case 0x1adb70u: goto label_1adb70;
        case 0x1adb74u: goto label_1adb74;
        case 0x1adb78u: goto label_1adb78;
        case 0x1adb7cu: goto label_1adb7c;
        case 0x1adb80u: goto label_1adb80;
        case 0x1adb84u: goto label_1adb84;
        case 0x1adb88u: goto label_1adb88;
        case 0x1adb8cu: goto label_1adb8c;
        case 0x1adb90u: goto label_1adb90;
        case 0x1adb94u: goto label_1adb94;
        case 0x1adb98u: goto label_1adb98;
        case 0x1adb9cu: goto label_1adb9c;
        case 0x1adba0u: goto label_1adba0;
        case 0x1adba4u: goto label_1adba4;
        case 0x1adba8u: goto label_1adba8;
        case 0x1adbacu: goto label_1adbac;
        case 0x1adbb0u: goto label_1adbb0;
        case 0x1adbb4u: goto label_1adbb4;
        case 0x1adbb8u: goto label_1adbb8;
        case 0x1adbbcu: goto label_1adbbc;
        case 0x1adbc0u: goto label_1adbc0;
        case 0x1adbc4u: goto label_1adbc4;
        case 0x1adbc8u: goto label_1adbc8;
        case 0x1adbccu: goto label_1adbcc;
        case 0x1adbd0u: goto label_1adbd0;
        case 0x1adbd4u: goto label_1adbd4;
        case 0x1adbd8u: goto label_1adbd8;
        case 0x1adbdcu: goto label_1adbdc;
        case 0x1adbe0u: goto label_1adbe0;
        case 0x1adbe4u: goto label_1adbe4;
        case 0x1adbe8u: goto label_1adbe8;
        case 0x1adbecu: goto label_1adbec;
        case 0x1adbf0u: goto label_1adbf0;
        case 0x1adbf4u: goto label_1adbf4;
        case 0x1adbf8u: goto label_1adbf8;
        case 0x1adbfcu: goto label_1adbfc;
        case 0x1adc00u: goto label_1adc00;
        case 0x1adc04u: goto label_1adc04;
        case 0x1adc08u: goto label_1adc08;
        case 0x1adc0cu: goto label_1adc0c;
        case 0x1adc10u: goto label_1adc10;
        case 0x1adc14u: goto label_1adc14;
        case 0x1adc18u: goto label_1adc18;
        case 0x1adc1cu: goto label_1adc1c;
        case 0x1adc20u: goto label_1adc20;
        case 0x1adc24u: goto label_1adc24;
        case 0x1adc28u: goto label_1adc28;
        case 0x1adc2cu: goto label_1adc2c;
        case 0x1adc30u: goto label_1adc30;
        case 0x1adc34u: goto label_1adc34;
        case 0x1adc38u: goto label_1adc38;
        case 0x1adc3cu: goto label_1adc3c;
        case 0x1adc40u: goto label_1adc40;
        case 0x1adc44u: goto label_1adc44;
        case 0x1adc48u: goto label_1adc48;
        case 0x1adc4cu: goto label_1adc4c;
        case 0x1adc50u: goto label_1adc50;
        case 0x1adc54u: goto label_1adc54;
        case 0x1adc58u: goto label_1adc58;
        case 0x1adc5cu: goto label_1adc5c;
        case 0x1adc60u: goto label_1adc60;
        case 0x1adc64u: goto label_1adc64;
        case 0x1adc68u: goto label_1adc68;
        case 0x1adc6cu: goto label_1adc6c;
        case 0x1adc70u: goto label_1adc70;
        case 0x1adc74u: goto label_1adc74;
        case 0x1adc78u: goto label_1adc78;
        case 0x1adc7cu: goto label_1adc7c;
        case 0x1adc80u: goto label_1adc80;
        case 0x1adc84u: goto label_1adc84;
        case 0x1adc88u: goto label_1adc88;
        case 0x1adc8cu: goto label_1adc8c;
        case 0x1adc90u: goto label_1adc90;
        case 0x1adc94u: goto label_1adc94;
        case 0x1adc98u: goto label_1adc98;
        case 0x1adc9cu: goto label_1adc9c;
        case 0x1adca0u: goto label_1adca0;
        case 0x1adca4u: goto label_1adca4;
        case 0x1adca8u: goto label_1adca8;
        case 0x1adcacu: goto label_1adcac;
        case 0x1adcb0u: goto label_1adcb0;
        case 0x1adcb4u: goto label_1adcb4;
        case 0x1adcb8u: goto label_1adcb8;
        case 0x1adcbcu: goto label_1adcbc;
        case 0x1adcc0u: goto label_1adcc0;
        case 0x1adcc4u: goto label_1adcc4;
        case 0x1adcc8u: goto label_1adcc8;
        case 0x1adcccu: goto label_1adccc;
        case 0x1adcd0u: goto label_1adcd0;
        case 0x1adcd4u: goto label_1adcd4;
        case 0x1adcd8u: goto label_1adcd8;
        case 0x1adcdcu: goto label_1adcdc;
        case 0x1adce0u: goto label_1adce0;
        case 0x1adce4u: goto label_1adce4;
        case 0x1adce8u: goto label_1adce8;
        case 0x1adcecu: goto label_1adcec;
        case 0x1adcf0u: goto label_1adcf0;
        case 0x1adcf4u: goto label_1adcf4;
        case 0x1adcf8u: goto label_1adcf8;
        case 0x1adcfcu: goto label_1adcfc;
        case 0x1add00u: goto label_1add00;
        case 0x1add04u: goto label_1add04;
        case 0x1add08u: goto label_1add08;
        case 0x1add0cu: goto label_1add0c;
        case 0x1add10u: goto label_1add10;
        case 0x1add14u: goto label_1add14;
        case 0x1add18u: goto label_1add18;
        case 0x1add1cu: goto label_1add1c;
        case 0x1add20u: goto label_1add20;
        case 0x1add24u: goto label_1add24;
        case 0x1add28u: goto label_1add28;
        case 0x1add2cu: goto label_1add2c;
        case 0x1add30u: goto label_1add30;
        case 0x1add34u: goto label_1add34;
        case 0x1add38u: goto label_1add38;
        case 0x1add3cu: goto label_1add3c;
        case 0x1add40u: goto label_1add40;
        case 0x1add44u: goto label_1add44;
        case 0x1add48u: goto label_1add48;
        case 0x1add4cu: goto label_1add4c;
        case 0x1add50u: goto label_1add50;
        case 0x1add54u: goto label_1add54;
        case 0x1add58u: goto label_1add58;
        case 0x1add5cu: goto label_1add5c;
        case 0x1add60u: goto label_1add60;
        case 0x1add64u: goto label_1add64;
        case 0x1add68u: goto label_1add68;
        case 0x1add6cu: goto label_1add6c;
        case 0x1add70u: goto label_1add70;
        case 0x1add74u: goto label_1add74;
        case 0x1add78u: goto label_1add78;
        case 0x1add7cu: goto label_1add7c;
        case 0x1add80u: goto label_1add80;
        case 0x1add84u: goto label_1add84;
        case 0x1add88u: goto label_1add88;
        case 0x1add8cu: goto label_1add8c;
        case 0x1add90u: goto label_1add90;
        case 0x1add94u: goto label_1add94;
        case 0x1add98u: goto label_1add98;
        case 0x1add9cu: goto label_1add9c;
        case 0x1adda0u: goto label_1adda0;
        case 0x1adda4u: goto label_1adda4;
        case 0x1adda8u: goto label_1adda8;
        case 0x1addacu: goto label_1addac;
        case 0x1addb0u: goto label_1addb0;
        case 0x1addb4u: goto label_1addb4;
        case 0x1addb8u: goto label_1addb8;
        case 0x1addbcu: goto label_1addbc;
        case 0x1addc0u: goto label_1addc0;
        case 0x1addc4u: goto label_1addc4;
        case 0x1addc8u: goto label_1addc8;
        case 0x1addccu: goto label_1addcc;
        case 0x1addd0u: goto label_1addd0;
        case 0x1addd4u: goto label_1addd4;
        case 0x1addd8u: goto label_1addd8;
        case 0x1adddcu: goto label_1adddc;
        case 0x1adde0u: goto label_1adde0;
        case 0x1adde4u: goto label_1adde4;
        case 0x1adde8u: goto label_1adde8;
        case 0x1addecu: goto label_1addec;
        case 0x1addf0u: goto label_1addf0;
        case 0x1addf4u: goto label_1addf4;
        case 0x1addf8u: goto label_1addf8;
        case 0x1addfcu: goto label_1addfc;
        case 0x1ade00u: goto label_1ade00;
        case 0x1ade04u: goto label_1ade04;
        case 0x1ade08u: goto label_1ade08;
        case 0x1ade0cu: goto label_1ade0c;
        case 0x1ade10u: goto label_1ade10;
        case 0x1ade14u: goto label_1ade14;
        case 0x1ade18u: goto label_1ade18;
        case 0x1ade1cu: goto label_1ade1c;
        case 0x1ade20u: goto label_1ade20;
        case 0x1ade24u: goto label_1ade24;
        case 0x1ade28u: goto label_1ade28;
        case 0x1ade2cu: goto label_1ade2c;
        case 0x1ade30u: goto label_1ade30;
        case 0x1ade34u: goto label_1ade34;
        case 0x1ade38u: goto label_1ade38;
        case 0x1ade3cu: goto label_1ade3c;
        case 0x1ade40u: goto label_1ade40;
        case 0x1ade44u: goto label_1ade44;
        case 0x1ade48u: goto label_1ade48;
        case 0x1ade4cu: goto label_1ade4c;
        case 0x1ade50u: goto label_1ade50;
        case 0x1ade54u: goto label_1ade54;
        case 0x1ade58u: goto label_1ade58;
        case 0x1ade5cu: goto label_1ade5c;
        case 0x1ade60u: goto label_1ade60;
        case 0x1ade64u: goto label_1ade64;
        case 0x1ade68u: goto label_1ade68;
        case 0x1ade6cu: goto label_1ade6c;
        case 0x1ade70u: goto label_1ade70;
        case 0x1ade74u: goto label_1ade74;
        case 0x1ade78u: goto label_1ade78;
        case 0x1ade7cu: goto label_1ade7c;
        case 0x1ade80u: goto label_1ade80;
        case 0x1ade84u: goto label_1ade84;
        case 0x1ade88u: goto label_1ade88;
        case 0x1ade8cu: goto label_1ade8c;
        case 0x1ade90u: goto label_1ade90;
        case 0x1ade94u: goto label_1ade94;
        case 0x1ade98u: goto label_1ade98;
        case 0x1ade9cu: goto label_1ade9c;
        case 0x1adea0u: goto label_1adea0;
        case 0x1adea4u: goto label_1adea4;
        case 0x1adea8u: goto label_1adea8;
        case 0x1adeacu: goto label_1adeac;
        case 0x1adeb0u: goto label_1adeb0;
        case 0x1adeb4u: goto label_1adeb4;
        case 0x1adeb8u: goto label_1adeb8;
        case 0x1adebcu: goto label_1adebc;
        case 0x1adec0u: goto label_1adec0;
        case 0x1adec4u: goto label_1adec4;
        case 0x1adec8u: goto label_1adec8;
        case 0x1adeccu: goto label_1adecc;
        case 0x1aded0u: goto label_1aded0;
        case 0x1aded4u: goto label_1aded4;
        case 0x1aded8u: goto label_1aded8;
        case 0x1adedcu: goto label_1adedc;
        case 0x1adee0u: goto label_1adee0;
        case 0x1adee4u: goto label_1adee4;
        case 0x1adee8u: goto label_1adee8;
        case 0x1adeecu: goto label_1adeec;
        case 0x1adef0u: goto label_1adef0;
        case 0x1adef4u: goto label_1adef4;
        case 0x1adef8u: goto label_1adef8;
        case 0x1adefcu: goto label_1adefc;
        case 0x1adf00u: goto label_1adf00;
        case 0x1adf04u: goto label_1adf04;
        case 0x1adf08u: goto label_1adf08;
        case 0x1adf0cu: goto label_1adf0c;
        case 0x1adf10u: goto label_1adf10;
        case 0x1adf14u: goto label_1adf14;
        case 0x1adf18u: goto label_1adf18;
        case 0x1adf1cu: goto label_1adf1c;
        case 0x1adf20u: goto label_1adf20;
        case 0x1adf24u: goto label_1adf24;
        case 0x1adf28u: goto label_1adf28;
        case 0x1adf2cu: goto label_1adf2c;
        case 0x1adf30u: goto label_1adf30;
        case 0x1adf34u: goto label_1adf34;
        case 0x1adf38u: goto label_1adf38;
        case 0x1adf3cu: goto label_1adf3c;
        case 0x1adf40u: goto label_1adf40;
        case 0x1adf44u: goto label_1adf44;
        case 0x1adf48u: goto label_1adf48;
        case 0x1adf4cu: goto label_1adf4c;
        case 0x1adf50u: goto label_1adf50;
        case 0x1adf54u: goto label_1adf54;
        case 0x1adf58u: goto label_1adf58;
        case 0x1adf5cu: goto label_1adf5c;
        case 0x1adf60u: goto label_1adf60;
        case 0x1adf64u: goto label_1adf64;
        case 0x1adf68u: goto label_1adf68;
        case 0x1adf6cu: goto label_1adf6c;
        case 0x1adf70u: goto label_1adf70;
        case 0x1adf74u: goto label_1adf74;
        case 0x1adf78u: goto label_1adf78;
        case 0x1adf7cu: goto label_1adf7c;
        case 0x1adf80u: goto label_1adf80;
        case 0x1adf84u: goto label_1adf84;
        case 0x1adf88u: goto label_1adf88;
        case 0x1adf8cu: goto label_1adf8c;
        case 0x1adf90u: goto label_1adf90;
        case 0x1adf94u: goto label_1adf94;
        case 0x1adf98u: goto label_1adf98;
        case 0x1adf9cu: goto label_1adf9c;
        case 0x1adfa0u: goto label_1adfa0;
        case 0x1adfa4u: goto label_1adfa4;
        case 0x1adfa8u: goto label_1adfa8;
        case 0x1adfacu: goto label_1adfac;
        case 0x1adfb0u: goto label_1adfb0;
        case 0x1adfb4u: goto label_1adfb4;
        case 0x1adfb8u: goto label_1adfb8;
        case 0x1adfbcu: goto label_1adfbc;
        case 0x1adfc0u: goto label_1adfc0;
        case 0x1adfc4u: goto label_1adfc4;
        case 0x1adfc8u: goto label_1adfc8;
        case 0x1adfccu: goto label_1adfcc;
        case 0x1adfd0u: goto label_1adfd0;
        case 0x1adfd4u: goto label_1adfd4;
        case 0x1adfd8u: goto label_1adfd8;
        case 0x1adfdcu: goto label_1adfdc;
        case 0x1adfe0u: goto label_1adfe0;
        case 0x1adfe4u: goto label_1adfe4;
        case 0x1adfe8u: goto label_1adfe8;
        case 0x1adfecu: goto label_1adfec;
        case 0x1adff0u: goto label_1adff0;
        case 0x1adff4u: goto label_1adff4;
        case 0x1adff8u: goto label_1adff8;
        case 0x1adffcu: goto label_1adffc;
        case 0x1ae000u: goto label_1ae000;
        case 0x1ae004u: goto label_1ae004;
        case 0x1ae008u: goto label_1ae008;
        case 0x1ae00cu: goto label_1ae00c;
        case 0x1ae010u: goto label_1ae010;
        case 0x1ae014u: goto label_1ae014;
        case 0x1ae018u: goto label_1ae018;
        case 0x1ae01cu: goto label_1ae01c;
        case 0x1ae020u: goto label_1ae020;
        case 0x1ae024u: goto label_1ae024;
        case 0x1ae028u: goto label_1ae028;
        case 0x1ae02cu: goto label_1ae02c;
        case 0x1ae030u: goto label_1ae030;
        case 0x1ae034u: goto label_1ae034;
        case 0x1ae038u: goto label_1ae038;
        case 0x1ae03cu: goto label_1ae03c;
        case 0x1ae040u: goto label_1ae040;
        case 0x1ae044u: goto label_1ae044;
        case 0x1ae048u: goto label_1ae048;
        case 0x1ae04cu: goto label_1ae04c;
        case 0x1ae050u: goto label_1ae050;
        case 0x1ae054u: goto label_1ae054;
        case 0x1ae058u: goto label_1ae058;
        case 0x1ae05cu: goto label_1ae05c;
        case 0x1ae060u: goto label_1ae060;
        case 0x1ae064u: goto label_1ae064;
        case 0x1ae068u: goto label_1ae068;
        case 0x1ae06cu: goto label_1ae06c;
        case 0x1ae070u: goto label_1ae070;
        case 0x1ae074u: goto label_1ae074;
        case 0x1ae078u: goto label_1ae078;
        case 0x1ae07cu: goto label_1ae07c;
        case 0x1ae080u: goto label_1ae080;
        case 0x1ae084u: goto label_1ae084;
        case 0x1ae088u: goto label_1ae088;
        case 0x1ae08cu: goto label_1ae08c;
        case 0x1ae090u: goto label_1ae090;
        case 0x1ae094u: goto label_1ae094;
        case 0x1ae098u: goto label_1ae098;
        case 0x1ae09cu: goto label_1ae09c;
        case 0x1ae0a0u: goto label_1ae0a0;
        case 0x1ae0a4u: goto label_1ae0a4;
        case 0x1ae0a8u: goto label_1ae0a8;
        case 0x1ae0acu: goto label_1ae0ac;
        case 0x1ae0b0u: goto label_1ae0b0;
        case 0x1ae0b4u: goto label_1ae0b4;
        case 0x1ae0b8u: goto label_1ae0b8;
        case 0x1ae0bcu: goto label_1ae0bc;
        case 0x1ae0c0u: goto label_1ae0c0;
        case 0x1ae0c4u: goto label_1ae0c4;
        case 0x1ae0c8u: goto label_1ae0c8;
        case 0x1ae0ccu: goto label_1ae0cc;
        case 0x1ae0d0u: goto label_1ae0d0;
        case 0x1ae0d4u: goto label_1ae0d4;
        case 0x1ae0d8u: goto label_1ae0d8;
        case 0x1ae0dcu: goto label_1ae0dc;
        case 0x1ae0e0u: goto label_1ae0e0;
        case 0x1ae0e4u: goto label_1ae0e4;
        case 0x1ae0e8u: goto label_1ae0e8;
        case 0x1ae0ecu: goto label_1ae0ec;
        case 0x1ae0f0u: goto label_1ae0f0;
        case 0x1ae0f4u: goto label_1ae0f4;
        case 0x1ae0f8u: goto label_1ae0f8;
        case 0x1ae0fcu: goto label_1ae0fc;
        case 0x1ae100u: goto label_1ae100;
        case 0x1ae104u: goto label_1ae104;
        case 0x1ae108u: goto label_1ae108;
        case 0x1ae10cu: goto label_1ae10c;
        case 0x1ae110u: goto label_1ae110;
        case 0x1ae114u: goto label_1ae114;
        case 0x1ae118u: goto label_1ae118;
        case 0x1ae11cu: goto label_1ae11c;
        case 0x1ae120u: goto label_1ae120;
        case 0x1ae124u: goto label_1ae124;
        case 0x1ae128u: goto label_1ae128;
        case 0x1ae12cu: goto label_1ae12c;
        case 0x1ae130u: goto label_1ae130;
        case 0x1ae134u: goto label_1ae134;
        case 0x1ae138u: goto label_1ae138;
        case 0x1ae13cu: goto label_1ae13c;
        case 0x1ae140u: goto label_1ae140;
        case 0x1ae144u: goto label_1ae144;
        case 0x1ae148u: goto label_1ae148;
        case 0x1ae14cu: goto label_1ae14c;
        case 0x1ae150u: goto label_1ae150;
        case 0x1ae154u: goto label_1ae154;
        case 0x1ae158u: goto label_1ae158;
        case 0x1ae15cu: goto label_1ae15c;
        case 0x1ae160u: goto label_1ae160;
        case 0x1ae164u: goto label_1ae164;
        case 0x1ae168u: goto label_1ae168;
        case 0x1ae16cu: goto label_1ae16c;
        case 0x1ae170u: goto label_1ae170;
        case 0x1ae174u: goto label_1ae174;
        case 0x1ae178u: goto label_1ae178;
        case 0x1ae17cu: goto label_1ae17c;
        case 0x1ae180u: goto label_1ae180;
        case 0x1ae184u: goto label_1ae184;
        case 0x1ae188u: goto label_1ae188;
        case 0x1ae18cu: goto label_1ae18c;
        case 0x1ae190u: goto label_1ae190;
        case 0x1ae194u: goto label_1ae194;
        case 0x1ae198u: goto label_1ae198;
        case 0x1ae19cu: goto label_1ae19c;
        case 0x1ae1a0u: goto label_1ae1a0;
        case 0x1ae1a4u: goto label_1ae1a4;
        case 0x1ae1a8u: goto label_1ae1a8;
        case 0x1ae1acu: goto label_1ae1ac;
        case 0x1ae1b0u: goto label_1ae1b0;
        case 0x1ae1b4u: goto label_1ae1b4;
        case 0x1ae1b8u: goto label_1ae1b8;
        case 0x1ae1bcu: goto label_1ae1bc;
        case 0x1ae1c0u: goto label_1ae1c0;
        case 0x1ae1c4u: goto label_1ae1c4;
        case 0x1ae1c8u: goto label_1ae1c8;
        case 0x1ae1ccu: goto label_1ae1cc;
        case 0x1ae1d0u: goto label_1ae1d0;
        case 0x1ae1d4u: goto label_1ae1d4;
        case 0x1ae1d8u: goto label_1ae1d8;
        case 0x1ae1dcu: goto label_1ae1dc;
        case 0x1ae1e0u: goto label_1ae1e0;
        case 0x1ae1e4u: goto label_1ae1e4;
        case 0x1ae1e8u: goto label_1ae1e8;
        case 0x1ae1ecu: goto label_1ae1ec;
        default: return;
    }

label_1ada20:
    // 0x1ada20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ada20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ada24:
    // 0x1ada24: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ada24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1ada28:
    // 0x1ada28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ada28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ada2c:
    // 0x1ada2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ada2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ada30:
    // 0x1ada30: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ada30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ada34:
    // 0x1ada34: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ada34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1ada38:
    // 0x1ada38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ada38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ada3c:
    // 0x1ada3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ada3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ada40:
    // 0x1ada40: 0x2484a7f0  addiu       $a0, $a0, -0x5810
    ctx->pc = 0x1ada40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944752));
label_1ada44:
    // 0x1ada44: 0xc06b63e  jal         func_1AD8F8
label_1ada48:
    if (ctx->pc == 0x1ADA48u) {
        ctx->pc = 0x1ADA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA44u;
        // 0x1ada48: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA4Cu;
        goto label_1ada4c;
    }
    ctx->pc = 0x1ADA44u;
    SET_GPR_U32(ctx, 31, 0x1ADA4Cu);
    ctx->pc = 0x1ADA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA44u;
    // 0x1ada48: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8F8u;
    { ctx->pc = 0x1ad8f8; return; }
    ctx->pc = 0x1ADA4Cu;
label_1ada4c:
    // 0x1ada4c: 0xc06b684  jal         func_1ADA10
label_1ada50:
    if (ctx->pc == 0x1ADA50u) {
        ctx->pc = 0x1ADA54u;
        goto label_1ada54;
    }
    ctx->pc = 0x1ADA4Cu;
    SET_GPR_U32(ctx, 31, 0x1ADA54u);
    ctx->pc = 0x1ADA10u;
    { ctx->pc = 0x1ada10; return; }
    ctx->pc = 0x1ADA54u;
label_1ada54:
    // 0x1ada54: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ada54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ada58:
    // 0x1ada58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ada58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ada5c:
    // 0x1ada5c: 0x8c475f98  lw          $a3, 0x5F98($v0)
    ctx->pc = 0x1ada5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24472)));
label_1ada60:
    // 0x1ada60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ada60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ada64:
    // 0x1ada64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ada64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ada68:
    // 0x1ada68: 0xc06911c  jal         func_1A4470
label_1ada6c:
    if (ctx->pc == 0x1ADA6Cu) {
        ctx->pc = 0x1ADA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA68u;
        // 0x1ada6c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA70u;
        goto label_1ada70;
    }
    ctx->pc = 0x1ADA68u;
    SET_GPR_U32(ctx, 31, 0x1ADA70u);
    ctx->pc = 0x1ADA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA68u;
    // 0x1ada6c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4470u;
    { ctx->pc = 0x1a4470; return; }
    ctx->pc = 0x1ADA70u;
label_1ada70:
    // 0x1ada70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ada70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ada74:
    // 0x1ada74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ada74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ada78:
    // 0x1ada78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ada78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ada7c:
    // 0x1ada7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ada7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ada80:
    // 0x1ada80: 0x3e00008  jr          $ra
label_1ada84:
    if (ctx->pc == 0x1ADA84u) {
        ctx->pc = 0x1ADA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA80u;
        // 0x1ada84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADA88u;
        goto label_1ada88;
    }
    ctx->pc = 0x1ADA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA80u;
        // 0x1ada84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADA88u;
label_1ada88:
    // 0x1ada88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ada88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ada8c:
    // 0x1ada8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ada8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ada90:
    // 0x1ada90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ada90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ada94:
    // 0x1ada94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ada94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ada98:
    // 0x1ada98: 0xc06b63e  jal         func_1AD8F8
label_1ada9c:
    if (ctx->pc == 0x1ADA9Cu) {
        ctx->pc = 0x1ADA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA98u;
        // 0x1ada9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADAA0u;
        goto label_1adaa0;
    }
    ctx->pc = 0x1ADA98u;
    SET_GPR_U32(ctx, 31, 0x1ADAA0u);
    ctx->pc = 0x1ADA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA98u;
    // 0x1ada9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8F8u;
    { ctx->pc = 0x1ad8f8; return; }
    ctx->pc = 0x1ADAA0u;
label_1adaa0:
    // 0x1adaa0: 0xc06b684  jal         func_1ADA10
label_1adaa4:
    if (ctx->pc == 0x1ADAA4u) {
        ctx->pc = 0x1ADAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAA0u;
        // 0x1adaa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADAA8u;
        goto label_1adaa8;
    }
    ctx->pc = 0x1ADAA0u;
    SET_GPR_U32(ctx, 31, 0x1ADAA8u);
    ctx->pc = 0x1ADAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAA0u;
    // 0x1adaa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA10u;
    { ctx->pc = 0x1ada10; return; }
    ctx->pc = 0x1ADAA8u;
label_1adaa8:
    // 0x1adaa8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1adaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1adaac:
    // 0x1adaac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adab0:
    // 0x1adab0: 0x8c465f98  lw          $a2, 0x5F98($v0)
    ctx->pc = 0x1adab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24472)));
label_1adab4:
    // 0x1adab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1adab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1adab8:
    // 0x1adab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1adab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1adabc:
    // 0x1adabc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1adabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1adac0:
    // 0x1adac0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1adac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1adac4:
    // 0x1adac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1adac8:
    // 0x1adac8: 0x8069118  j           func_1A4460
label_1adacc:
    if (ctx->pc == 0x1ADACCu) {
        ctx->pc = 0x1ADACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAC8u;
        // 0x1adacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADAD0u;
        goto label_1adad0;
    }
    ctx->pc = 0x1ADAC8u;
    ctx->pc = 0x1ADACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAC8u;
    // 0x1adacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4460u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a4460; return; }
    ctx->pc = 0x1ADAD0u;
label_1adad0:
    // 0x1adad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1adad4:
    // 0x1adad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1adad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1adad8:
    // 0x1adad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1adad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1adadc:
    // 0x1adadc: 0xc06b684  jal         func_1ADA10
label_1adae0:
    if (ctx->pc == 0x1ADAE0u) {
        ctx->pc = 0x1ADAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADADCu;
        // 0x1adae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADAE4u;
        goto label_1adae4;
    }
    ctx->pc = 0x1ADADCu;
    SET_GPR_U32(ctx, 31, 0x1ADAE4u);
    ctx->pc = 0x1ADAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADADCu;
    // 0x1adae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA10u;
    { ctx->pc = 0x1ada10; return; }
    ctx->pc = 0x1ADAE4u;
label_1adae4:
    // 0x1adae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adae8:
    // 0x1adae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1adaec:
    // 0x1adaec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adaecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1adaf0:
    // 0x1adaf0: 0x8069110  j           func_1A4440
label_1adaf4:
    if (ctx->pc == 0x1ADAF4u) {
        ctx->pc = 0x1ADAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAF0u;
        // 0x1adaf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADAF8u;
        goto label_1adaf8;
    }
    ctx->pc = 0x1ADAF0u;
    ctx->pc = 0x1ADAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAF0u;
    // 0x1adaf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4440u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a4440; return; }
    ctx->pc = 0x1ADAF8u;
label_1adaf8:
    // 0x1adaf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1adaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1adafc:
    // 0x1adafc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1adafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1adb00:
    // 0x1adb00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1adb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1adb04:
    // 0x1adb04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1adb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1adb08:
    // 0x1adb08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1adb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1adb0c:
    // 0x1adb0c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1adb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1adb10:
    // 0x1adb10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1adb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adb14:
    // 0x1adb14: 0xc06b63e  jal         func_1AD8F8
label_1adb18:
    if (ctx->pc == 0x1ADB18u) {
        ctx->pc = 0x1ADB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB14u;
        // 0x1adb18: 0x2484a7f0  addiu       $a0, $a0, -0x5810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADB1Cu;
        goto label_1adb1c;
    }
    ctx->pc = 0x1ADB14u;
    SET_GPR_U32(ctx, 31, 0x1ADB1Cu);
    ctx->pc = 0x1ADB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB14u;
    // 0x1adb18: 0x2484a7f0  addiu       $a0, $a0, -0x5810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8F8u;
    { ctx->pc = 0x1ad8f8; return; }
    ctx->pc = 0x1ADB1Cu;
label_1adb1c:
    // 0x1adb1c: 0xc06b684  jal         func_1ADA10
label_1adb20:
    if (ctx->pc == 0x1ADB20u) {
        ctx->pc = 0x1ADB24u;
        goto label_1adb24;
    }
    ctx->pc = 0x1ADB1Cu;
    SET_GPR_U32(ctx, 31, 0x1ADB24u);
    ctx->pc = 0x1ADA10u;
    { ctx->pc = 0x1ada10; return; }
    ctx->pc = 0x1ADB24u;
label_1adb24:
    // 0x1adb24: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1adb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1adb28:
    // 0x1adb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adb2c:
    // 0x1adb2c: 0x8c455f98  lw          $a1, 0x5F98($v0)
    ctx->pc = 0x1adb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24472)));
label_1adb30:
    // 0x1adb30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1adb34:
    // 0x1adb34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adb34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1adb38:
    // 0x1adb38: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1adb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1adb3c:
    // 0x1adb3c: 0x8069310  j           func_1A4C40
label_1adb40:
    if (ctx->pc == 0x1ADB40u) {
        ctx->pc = 0x1ADB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB3Cu;
        // 0x1adb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADB44u;
        goto label_1adb44;
    }
    ctx->pc = 0x1ADB3Cu;
    ctx->pc = 0x1ADB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADB3Cu;
    // 0x1adb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C40u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a4c40; return; }
    ctx->pc = 0x1ADB44u;
label_1adb44:
    // 0x1adb44: 0x0  nop
    ctx->pc = 0x1adb44u;
    // NOP
label_1adb48:
    // 0x1adb48: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x1adb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_1adb4c:
    // 0x1adb4c: 0xc  syscall     0
    ctx->pc = 0x1adb4cu;
    ctx->pc = 0x1ADB50u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1adb50:
    // 0x1adb50: 0x3e00008  jr          $ra
label_1adb54:
    if (ctx->pc == 0x1ADB54u) {
        ctx->pc = 0x1ADB58u;
        goto label_1adb58;
    }
    ctx->pc = 0x1ADB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADB58u;
label_1adb58:
    // 0x1adb58: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1adb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1adb5c:
    // 0x1adb5c: 0xc  syscall     0
    ctx->pc = 0x1adb5cu;
    ctx->pc = 0x1ADB60u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1adb60:
    // 0x1adb60: 0x3e00008  jr          $ra
label_1adb64:
    if (ctx->pc == 0x1ADB64u) {
        ctx->pc = 0x1ADB68u;
        goto label_1adb68;
    }
    ctx->pc = 0x1ADB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADB68u;
label_1adb68:
    // 0x1adb68: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x1adb68u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_1adb6c:
    // 0x1adb6c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_1adb70:
    if (ctx->pc == 0x1ADB70u) {
        ctx->pc = 0x1ADB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB6Cu;
        // 0x1adb70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADB74u;
        goto label_1adb74;
    }
    ctx->pc = 0x1ADB6Cu;
    {
        const bool branch_taken_0x1adb6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB6Cu;
        // 0x1adb70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adb6c) {
            ctx->pc = 0x1ADB98u;
            goto label_1adb98;
        }
    }
    ctx->pc = 0x1ADB74u;
label_1adb74:
    // 0x1adb74: 0x0  nop
    ctx->pc = 0x1adb74u;
    // NOP
label_1adb78:
    // 0x1adb78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1adb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1adb7c:
    // 0x1adb7c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1adb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1adb80:
    // 0x1adb80: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1adb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1adb84:
    // 0x1adb84: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1adb84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1adb88:
    // 0x1adb88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1adb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1adb8c:
    // 0x1adb8c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1adb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1adb90:
    // 0x1adb90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1adb94:
    if (ctx->pc == 0x1ADB94u) {
        ctx->pc = 0x1ADB98u;
        goto label_1adb98;
    }
    ctx->pc = 0x1ADB90u;
    {
        const bool branch_taken_0x1adb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adb90) {
            ctx->pc = 0x1ADB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adb78;
        }
    }
    ctx->pc = 0x1ADB98u;
label_1adb98:
    // 0x1adb98: 0x3e00008  jr          $ra
label_1adb9c:
    if (ctx->pc == 0x1ADB9Cu) {
        ctx->pc = 0x1ADB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB98u;
        // 0x1adb9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADBA0u;
        goto label_1adba0;
    }
    ctx->pc = 0x1ADB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADB98u;
        // 0x1adb9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADBA0u;
label_1adba0:
    // 0x1adba0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1adba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_1adba4:
    // 0x1adba4: 0xc  syscall     0
    ctx->pc = 0x1adba4u;
    ctx->pc = 0x1ADBA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1adba8:
    // 0x1adba8: 0x3e00008  jr          $ra
label_1adbac:
    if (ctx->pc == 0x1ADBACu) {
        ctx->pc = 0x1ADBB0u;
        goto label_1adbb0;
    }
    ctx->pc = 0x1ADBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADBB0u;
label_1adbb0:
    // 0x1adbb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1adbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1adbb4:
    // 0x1adbb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1adbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1adbb8:
    // 0x1adbb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1adbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1adbbc:
    // 0x1adbbc: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x1adbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
label_1adbc0:
    // 0x1adbc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1adbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1adbc4:
    // 0x1adbc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1adbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1adbc8:
    // 0x1adbc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1adbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1adbcc:
    // 0x1adbcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1adbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1adbd0:
    // 0x1adbd0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1adbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1adbd4:
    // 0x1adbd4: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_1adbd8:
    if (ctx->pc == 0x1ADBD8u) {
        ctx->pc = 0x1ADBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBD4u;
        // 0x1adbd8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADBDCu;
        goto label_1adbdc;
    }
    ctx->pc = 0x1ADBD4u;
    {
        const bool branch_taken_0x1adbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBD4u;
        // 0x1adbd8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adbd4) {
            ctx->pc = 0x1ADC70u;
            goto label_1adc70;
        }
    }
    ctx->pc = 0x1ADBDCu;
label_1adbdc:
    // 0x1adbdc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1adbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1adbe0:
    // 0x1adbe0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1adbe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1adbe4:
    // 0x1adbe4: 0x245071c0  addiu       $s0, $v0, 0x71C0
    ctx->pc = 0x1adbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29120));
label_1adbe8:
    // 0x1adbe8: 0x8c4471c0  lw          $a0, 0x71C0($v0)
    ctx->pc = 0x1adbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29120)));
label_1adbec:
    // 0x1adbec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1adbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1adbf0:
    // 0x1adbf0: 0xc06b6d2  jal         func_1ADB48
label_1adbf4:
    if (ctx->pc == 0x1ADBF4u) {
        ctx->pc = 0x1ADBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADBF0u;
        // 0x1adbf4: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADBF8u;
        goto label_1adbf8;
    }
    ctx->pc = 0x1ADBF0u;
    SET_GPR_U32(ctx, 31, 0x1ADBF8u);
    ctx->pc = 0x1ADBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADBF0u;
    // 0x1adbf4: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB48u;
    goto label_1adb48;
    ctx->pc = 0x1ADBF8u;
label_1adbf8:
    // 0x1adbf8: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1adbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1adbfc:
    // 0x1adbfc: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1adbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
label_1adc00:
    // 0x1adc00: 0x24a56a58  addiu       $a1, $a1, 0x6A58
    ctx->pc = 0x1adc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27224));
label_1adc04:
    // 0x1adc04: 0x34846000  ori         $a0, $a0, 0x6000
    ctx->pc = 0x1adc04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24576);
label_1adc08:
    // 0x1adc08: 0xc06b6d6  jal         func_1ADB58
label_1adc0c:
    if (ctx->pc == 0x1ADC0Cu) {
        ctx->pc = 0x1ADC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC08u;
        // 0x1adc0c: 0x24060740  addiu       $a2, $zero, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC10u;
        goto label_1adc10;
    }
    ctx->pc = 0x1ADC08u;
    SET_GPR_U32(ctx, 31, 0x1ADC10u);
    ctx->pc = 0x1ADC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC08u;
    // 0x1adc0c: 0x24060740  addiu       $a2, $zero, 0x740 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB58u;
    goto label_1adb58;
    ctx->pc = 0x1ADC10u;
label_1adc10:
    // 0x1adc10: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1adc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1adc14:
    // 0x1adc14: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1adc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_1adc18:
    // 0x1adc18: 0x24a57198  addiu       $a1, $a1, 0x7198
    ctx->pc = 0x1adc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29080));
label_1adc1c:
    // 0x1adc1c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x1adc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
label_1adc20:
    // 0x1adc20: 0xc06b6d6  jal         func_1ADB58
label_1adc24:
    if (ctx->pc == 0x1ADC24u) {
        ctx->pc = 0x1ADC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC20u;
        // 0x1adc24: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC28u;
        goto label_1adc28;
    }
    ctx->pc = 0x1ADC20u;
    SET_GPR_U32(ctx, 31, 0x1ADC28u);
    ctx->pc = 0x1ADC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC20u;
    // 0x1adc24: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB58u;
    goto label_1adb58;
    ctx->pc = 0x1ADC28u;
label_1adc28:
    // 0x1adc28: 0xc0692a8  jal         func_1A4AA0
label_1adc2c:
    if (ctx->pc == 0x1ADC2Cu) {
        ctx->pc = 0x1ADC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC28u;
        // 0x1adc2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC30u;
        goto label_1adc30;
    }
    ctx->pc = 0x1ADC28u;
    SET_GPR_U32(ctx, 31, 0x1ADC30u);
    ctx->pc = 0x1ADC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC28u;
    // 0x1adc2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1ADC30u;
label_1adc30:
    // 0x1adc30: 0xc0692a8  jal         func_1A4AA0
label_1adc34:
    if (ctx->pc == 0x1ADC34u) {
        ctx->pc = 0x1ADC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC30u;
        // 0x1adc34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC38u;
        goto label_1adc38;
    }
    ctx->pc = 0x1ADC30u;
    SET_GPR_U32(ctx, 31, 0x1ADC38u);
    ctx->pc = 0x1ADC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC30u;
    // 0x1adc34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1ADC38u;
label_1adc38:
    // 0x1adc38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1adc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1adc3c:
    // 0x1adc3c: 0xc06b6d2  jal         func_1ADB48
label_1adc40:
    if (ctx->pc == 0x1ADC40u) {
        ctx->pc = 0x1ADC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC3Cu;
        // 0x1adc40: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC44u;
        goto label_1adc44;
    }
    ctx->pc = 0x1ADC3Cu;
    SET_GPR_U32(ctx, 31, 0x1ADC44u);
    ctx->pc = 0x1ADC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC3Cu;
    // 0x1adc40: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB48u;
    goto label_1adb48;
    ctx->pc = 0x1ADC44u;
label_1adc44:
    // 0x1adc44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1adc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1adc48:
    // 0x1adc48: 0xc06b6e8  jal         func_1ADBA0
label_1adc4c:
    if (ctx->pc == 0x1ADC4Cu) {
        ctx->pc = 0x1ADC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC48u;
        // 0x1adc4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC50u;
        goto label_1adc50;
    }
    ctx->pc = 0x1ADC48u;
    SET_GPR_U32(ctx, 31, 0x1ADC50u);
    ctx->pc = 0x1ADC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC48u;
    // 0x1adc4c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADBA0u;
    goto label_1adba0;
    ctx->pc = 0x1ADC50u;
label_1adc50:
    // 0x1adc50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1adc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1adc54:
    // 0x1adc54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1adc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1adc58:
    // 0x1adc58: 0xc06b6d2  jal         func_1ADB48
label_1adc5c:
    if (ctx->pc == 0x1ADC5Cu) {
        ctx->pc = 0x1ADC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC58u;
        // 0x1adc5c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC60u;
        goto label_1adc60;
    }
    ctx->pc = 0x1ADC58u;
    SET_GPR_U32(ctx, 31, 0x1ADC60u);
    ctx->pc = 0x1ADC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC58u;
    // 0x1adc5c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADB48u;
    goto label_1adb48;
    ctx->pc = 0x1ADC60u;
label_1adc60:
    // 0x1adc60: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1adc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1adc64:
    // 0x1adc64: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_1adc68:
    if (ctx->pc == 0x1ADC68u) {
        ctx->pc = 0x1ADC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC64u;
        // 0x1adc68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC6Cu;
        goto label_1adc6c;
    }
    ctx->pc = 0x1ADC64u;
    {
        const bool branch_taken_0x1adc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adc64) {
            ctx->pc = 0x1ADC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADC64u;
            // 0x1adc68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adc48;
        }
    }
    ctx->pc = 0x1ADC6Cu;
label_1adc6c:
    // 0x1adc6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1adc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1adc70:
    // 0x1adc70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adc70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1adc74:
    // 0x1adc74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1adc74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1adc78:
    // 0x1adc78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1adc7c:
    // 0x1adc7c: 0x3e00008  jr          $ra
label_1adc80:
    if (ctx->pc == 0x1ADC80u) {
        ctx->pc = 0x1ADC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC7Cu;
        // 0x1adc80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC84u;
        goto label_1adc84;
    }
    ctx->pc = 0x1ADC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC7Cu;
        // 0x1adc80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADC84u;
label_1adc84:
    // 0x1adc84: 0x0  nop
    ctx->pc = 0x1adc84u;
    // NOP
label_1adc88:
    // 0x1adc88: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1adc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1adc8c:
    // 0x1adc8c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1adc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1adc90:
    // 0x1adc90: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1adc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
label_1adc94:
    // 0x1adc94: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1adc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
label_1adc98:
    // 0x1adc98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1adc98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1adc9c:
    // 0x1adc9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1adc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1adca0:
    // 0x1adca0: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1adca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1adca4:
    // 0x1adca4: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x1adca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1adca8:
    // 0x1adca8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x1adca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1adcac:
    // 0x1adcac: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x1adcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
label_1adcb0:
    // 0x1adcb0: 0x3c130037  lui         $s3, 0x37
    ctx->pc = 0x1adcb0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
label_1adcb4:
    // 0x1adcb4: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1adcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_1adcb8:
    // 0x1adcb8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1adcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
label_1adcbc:
    // 0x1adcbc: 0x26625cd0  addiu       $v0, $s3, 0x5CD0
    ctx->pc = 0x1adcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 23760));
label_1adcc0:
    // 0x1adcc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1adcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1adcc4:
    // 0x1adcc4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1adcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1adcc8:
    // 0x1adcc8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1adcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1adccc:
    // 0x1adccc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1adcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1adcd0:
    // 0x1adcd0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1adcd4:
    if (ctx->pc == 0x1ADCD4u) {
        ctx->pc = 0x1ADCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCD0u;
        // 0x1adcd4: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADCD8u;
        goto label_1adcd8;
    }
    ctx->pc = 0x1ADCD0u;
    {
        const bool branch_taken_0x1adcd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCD0u;
        // 0x1adcd4: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcd0) {
            ctx->pc = 0x1ADCE8u;
            goto label_1adce8;
        }
    }
    ctx->pc = 0x1ADCD8u;
label_1adcd8:
    // 0x1adcd8: 0xc0692f0  jal         func_1A4BC0
label_1adcdc:
    if (ctx->pc == 0x1ADCDCu) {
        ctx->pc = 0x1ADCE0u;
        goto label_1adce0;
    }
    ctx->pc = 0x1ADCD8u;
    SET_GPR_U32(ctx, 31, 0x1ADCE0u);
    ctx->pc = 0x1A4BC0u;
    { ctx->pc = 0x1a4bc0; return; }
    ctx->pc = 0x1ADCE0u;
label_1adce0:
    // 0x1adce0: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
label_1adce4:
    if (ctx->pc == 0x1ADCE4u) {
        ctx->pc = 0x1ADCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCE0u;
        // 0x1adce4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADCE8u;
        goto label_1adce8;
    }
    ctx->pc = 0x1ADCE0u;
    {
        const bool branch_taken_0x1adce0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ADCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCE0u;
        // 0x1adce4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adce0) {
            ctx->pc = 0x1ADD5Cu;
            goto label_1add5c;
        }
    }
    ctx->pc = 0x1ADCE8u;
label_1adce8:
    // 0x1adce8: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1adce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1adcec:
    // 0x1adcec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1adcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1adcf0:
    // 0x1adcf0: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x1adcf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1adcf4:
    // 0x1adcf4: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x1adcf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1adcf8:
    // 0x1adcf8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1adcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1adcfc:
    // 0x1adcfc: 0x26735cd0  addiu       $s3, $s3, 0x5CD0
    ctx->pc = 0x1adcfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 23760));
label_1add00:
    // 0x1add00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1add04:
    // 0x1add04: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1add04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1add08:
    // 0x1add08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1add08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1add0c:
    // 0x1add0c: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x1add0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1add10:
    // 0x1add10: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1add10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_1add14:
    // 0x1add14: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1add14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_1add18:
    // 0x1add18: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1add18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1add1c:
    // 0x1add1c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1add1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1add20:
    // 0x1add20: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1add20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1add24:
    // 0x1add24: 0xc069446  jal         func_1A5118
label_1add28:
    if (ctx->pc == 0x1ADD28u) {
        ctx->pc = 0x1ADD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD24u;
        // 0x1add28: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD2Cu;
        goto label_1add2c;
    }
    ctx->pc = 0x1ADD24u;
    SET_GPR_U32(ctx, 31, 0x1ADD2Cu);
    ctx->pc = 0x1ADD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD24u;
    // 0x1add28: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5118u;
    { ctx->pc = 0x1a5118; return; }
    ctx->pc = 0x1ADD2Cu;
label_1add2c:
    // 0x1add2c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1add30:
    // 0x1add30: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1add30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_1add34:
    // 0x1add34: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1add34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_1add38:
    // 0x1add38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1add38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1add3c:
    // 0x1add3c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1add3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1add40:
    // 0x1add40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1add40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1add44:
    // 0x1add44: 0xc0692f8  jal         func_1A4BE0
label_1add48:
    if (ctx->pc == 0x1ADD48u) {
        ctx->pc = 0x1ADD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD44u;
        // 0x1add48: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD4Cu;
        goto label_1add4c;
    }
    ctx->pc = 0x1ADD44u;
    SET_GPR_U32(ctx, 31, 0x1ADD4Cu);
    ctx->pc = 0x1ADD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD44u;
    // 0x1add48: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    { ctx->pc = 0x1a4be0; return; }
    ctx->pc = 0x1ADD4Cu;
label_1add4c:
    // 0x1add4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1add4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1add50:
    // 0x1add50: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1add54:
    if (ctx->pc == 0x1ADD54u) {
        ctx->pc = 0x1ADD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD50u;
        // 0x1add54: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD58u;
        goto label_1add58;
    }
    ctx->pc = 0x1ADD50u;
    {
        const bool branch_taken_0x1add50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD50u;
        // 0x1add54: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add50) {
            ctx->pc = 0x1ADD78u;
            goto label_1add78;
        }
    }
    ctx->pc = 0x1ADD58u;
label_1add58:
    // 0x1add58: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1add58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1add5c:
    // 0x1add5c: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1add5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29204)));
label_1add60:
    // 0x1add60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1add64:
    if (ctx->pc == 0x1ADD64u) {
        ctx->pc = 0x1ADD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD60u;
        // 0x1add64: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD68u;
        goto label_1add68;
    }
    ctx->pc = 0x1ADD60u;
    {
        const bool branch_taken_0x1add60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD60u;
        // 0x1add64: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add60) {
            ctx->pc = 0x1ADD70u;
            goto label_1add70;
        }
    }
    ctx->pc = 0x1ADD68u;
label_1add68:
    // 0x1add68: 0xc08ee2e  jal         func_23B8B8
label_1add6c:
    if (ctx->pc == 0x1ADD6Cu) {
        ctx->pc = 0x1ADD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD68u;
        // 0x1add6c: 0x2484a7f8  addiu       $a0, $a0, -0x5808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD70u;
        goto label_1add70;
    }
    ctx->pc = 0x1ADD68u;
    SET_GPR_U32(ctx, 31, 0x1ADD70u);
    ctx->pc = 0x1ADD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD68u;
    // 0x1add6c: 0x2484a7f8  addiu       $a0, $a0, -0x5808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1ADD70u;
label_1add70:
    // 0x1add70: 0x10000003  b           . + 4 + (0x3 << 2)
label_1add74:
    if (ctx->pc == 0x1ADD74u) {
        ctx->pc = 0x1ADD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD70u;
        // 0x1add74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD78u;
        goto label_1add78;
    }
    ctx->pc = 0x1ADD70u;
    {
        const bool branch_taken_0x1add70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD70u;
        // 0x1add74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add70) {
            ctx->pc = 0x1ADD80u;
            goto label_1add80;
        }
    }
    ctx->pc = 0x1ADD78u;
label_1add78:
    // 0x1add78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1add78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1add7c:
    // 0x1add7c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1add7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1add80:
    // 0x1add80: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1add80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_1add84:
    // 0x1add84: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x1add84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1add88:
    // 0x1add88: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1add88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_1add8c:
    // 0x1add8c: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1add8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1add90:
    // 0x1add90: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1add90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1add94:
    // 0x1add94: 0x3e00008  jr          $ra
label_1add98:
    if (ctx->pc == 0x1ADD98u) {
        ctx->pc = 0x1ADD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD94u;
        // 0x1add98: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD9Cu;
        goto label_1add9c;
    }
    ctx->pc = 0x1ADD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD94u;
        // 0x1add98: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADD9Cu;
label_1add9c:
    // 0x1add9c: 0x0  nop
    ctx->pc = 0x1add9cu;
    // NOP
label_1adda0:
    // 0x1adda0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1adda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1adda4:
    // 0x1adda4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1adda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1adda8:
    // 0x1adda8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1adda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1addac:
    // 0x1addac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1addacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1addb0:
    // 0x1addb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1addb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1addb4:
    // 0x1addb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1addb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1addb8:
    // 0x1addb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1addb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1addbc:
    // 0x1addbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1addbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1addc0:
    // 0x1addc0: 0xac627210  sw          $v0, 0x7210($v1)
    ctx->pc = 0x1addc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29200), GPR_U32(ctx, 2));
label_1addc4:
    // 0x1addc4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1addc8:
    if (ctx->pc == 0x1ADDC8u) {
        ctx->pc = 0x1ADDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDC4u;
        // 0x1addc8: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADDCCu;
        goto label_1addcc;
    }
    ctx->pc = 0x1ADDC4u;
    {
        const bool branch_taken_0x1addc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDC4u;
        // 0x1addc8: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addc4) {
            ctx->pc = 0x1ADDF4u;
            goto label_1addf4;
        }
    }
    ctx->pc = 0x1ADDCCu;
label_1addcc:
    // 0x1addcc: 0x0  nop
    ctx->pc = 0x1addccu;
    // NOP
label_1addd0:
    // 0x1addd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1addd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1addd4:
    // 0x1addd4: 0x0  nop
    ctx->pc = 0x1addd4u;
    // NOP
label_1addd8:
    // 0x1addd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1addd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1adddc:
    // 0x1adddc: 0x0  nop
    ctx->pc = 0x1adddcu;
    // NOP
label_1adde0:
    // 0x1adde0: 0x0  nop
    ctx->pc = 0x1adde0u;
    // NOP
label_1adde4:
    // 0x1adde4: 0x0  nop
    ctx->pc = 0x1adde4u;
    // NOP
label_1adde8:
    // 0x1adde8: 0x0  nop
    ctx->pc = 0x1adde8u;
    // NOP
label_1addec:
    // 0x1addec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1addf0:
    if (ctx->pc == 0x1ADDF0u) {
        ctx->pc = 0x1ADDF4u;
        goto label_1addf4;
    }
    ctx->pc = 0x1ADDECu;
    {
        const bool branch_taken_0x1addec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1addec) {
            ctx->pc = 0x1ADDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1addd8;
        }
    }
    ctx->pc = 0x1ADDF4u;
label_1addf4:
    // 0x1addf4: 0x26305c80  addiu       $s0, $s1, 0x5C80
    ctx->pc = 0x1addf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 23680));
label_1addf8:
    // 0x1addf8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1addf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1addfc:
    // 0x1addfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1addfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ade00:
    // 0x1ade00: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x1ade00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
label_1ade04:
    // 0x1ade04: 0xc069db6  jal         func_1A76D8
label_1ade08:
    if (ctx->pc == 0x1ADE08u) {
        ctx->pc = 0x1ADE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE04u;
        // 0x1ade08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADE0Cu;
        goto label_1ade0c;
    }
    ctx->pc = 0x1ADE04u;
    SET_GPR_U32(ctx, 31, 0x1ADE0Cu);
    ctx->pc = 0x1ADE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE04u;
    // 0x1ade08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1ADE0Cu;
label_1ade0c:
    // 0x1ade0c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1ade0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ade10:
    // 0x1ade10: 0x1060ffef  beqz        $v1, . + 4 + (-0x11 << 2)
label_1ade14:
    if (ctx->pc == 0x1ADE14u) {
        ctx->pc = 0x1ADE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE10u;
        // 0x1ade14: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADE18u;
        goto label_1ade18;
    }
    ctx->pc = 0x1ADE10u;
    {
        const bool branch_taken_0x1ade10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE10u;
        // 0x1ade14: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade10) {
            ctx->pc = 0x1ADDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1addd0;
        }
    }
    ctx->pc = 0x1ADE18u;
label_1ade18:
    // 0x1ade18: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1ade18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ade1c:
    // 0x1ade1c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ade20:
    if (ctx->pc == 0x1ADE20u) {
        ctx->pc = 0x1ADE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE1Cu;
        // 0x1ade20: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADE24u;
        goto label_1ade24;
    }
    ctx->pc = 0x1ADE1Cu;
    {
        const bool branch_taken_0x1ade1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE1Cu;
        // 0x1ade20: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade1c) {
            ctx->pc = 0x1ADE4Cu;
            goto label_1ade4c;
        }
    }
    ctx->pc = 0x1ADE24u;
label_1ade24:
    // 0x1ade24: 0x0  nop
    ctx->pc = 0x1ade24u;
    // NOP
label_1ade28:
    // 0x1ade28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ade28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ade2c:
    // 0x1ade2c: 0x0  nop
    ctx->pc = 0x1ade2cu;
    // NOP
label_1ade30:
    // 0x1ade30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ade30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ade34:
    // 0x1ade34: 0x0  nop
    ctx->pc = 0x1ade34u;
    // NOP
label_1ade38:
    // 0x1ade38: 0x0  nop
    ctx->pc = 0x1ade38u;
    // NOP
label_1ade3c:
    // 0x1ade3c: 0x0  nop
    ctx->pc = 0x1ade3cu;
    // NOP
label_1ade40:
    // 0x1ade40: 0x0  nop
    ctx->pc = 0x1ade40u;
    // NOP
label_1ade44:
    // 0x1ade44: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1ade48:
    if (ctx->pc == 0x1ADE48u) {
        ctx->pc = 0x1ADE4Cu;
        goto label_1ade4c;
    }
    ctx->pc = 0x1ADE44u;
    {
        const bool branch_taken_0x1ade44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ade44) {
            ctx->pc = 0x1ADE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ade30;
        }
    }
    ctx->pc = 0x1ADE4Cu;
label_1ade4c:
    // 0x1ade4c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1ade4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1ade50:
    // 0x1ade50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ade50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ade54:
    // 0x1ade54: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x1ade54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
label_1ade58:
    // 0x1ade58: 0xc069db6  jal         func_1A76D8
label_1ade5c:
    if (ctx->pc == 0x1ADE5Cu) {
        ctx->pc = 0x1ADE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE58u;
        // 0x1ade5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADE60u;
        goto label_1ade60;
    }
    ctx->pc = 0x1ADE58u;
    SET_GPR_U32(ctx, 31, 0x1ADE60u);
    ctx->pc = 0x1ADE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE58u;
    // 0x1ade5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1ADE60u;
label_1ade60:
    // 0x1ade60: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1ade60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1ade64:
    // 0x1ade64: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
label_1ade68:
    if (ctx->pc == 0x1ADE68u) {
        ctx->pc = 0x1ADE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE64u;
        // 0x1ade68: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADE6Cu;
        goto label_1ade6c;
    }
    ctx->pc = 0x1ADE64u;
    {
        const bool branch_taken_0x1ade64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE64u;
        // 0x1ade68: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade64) {
            ctx->pc = 0x1ADE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ade28;
        }
    }
    ctx->pc = 0x1ADE6Cu;
label_1ade6c:
    // 0x1ade6c: 0xc06bbd4  jal         func_1AEF50
label_1ade70:
    if (ctx->pc == 0x1ADE70u) {
        ctx->pc = 0x1ADE74u;
        goto label_1ade74;
    }
    ctx->pc = 0x1ADE6Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE74u);
    ctx->pc = 0x1AEF50u;
    { ctx->pc = 0x1aef50; return; }
    ctx->pc = 0x1ADE74u;
label_1ade74:
    // 0x1ade74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ade74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ade78:
    // 0x1ade78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ade78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ade7c:
    // 0x1ade7c: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x1ade7cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
label_1ade80:
    // 0x1ade80: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_1ade84:
    if (ctx->pc == 0x1ADE84u) {
        ctx->pc = 0x1ADE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE80u;
        // 0x1ade84: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADE88u;
        goto label_1ade88;
    }
    ctx->pc = 0x1ADE80u;
    {
        const bool branch_taken_0x1ade80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ADE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE80u;
        // 0x1ade84: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade80) {
            ctx->pc = 0x1ADEC0u;
            goto label_1adec0;
        }
    }
    ctx->pc = 0x1ADE88u;
label_1ade88:
    // 0x1ade88: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1ade88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29204)));
label_1ade8c:
    // 0x1ade8c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1ade90:
    if (ctx->pc == 0x1ADE90u) {
        ctx->pc = 0x1ADE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE8Cu;
        // 0x1ade90: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADE94u;
        goto label_1ade94;
    }
    ctx->pc = 0x1ADE8Cu;
    {
        const bool branch_taken_0x1ade8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE8Cu;
        // 0x1ade90: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade8c) {
            ctx->pc = 0x1ADEB8u;
            goto label_1adeb8;
        }
    }
    ctx->pc = 0x1ADE94u;
label_1ade94:
    // 0x1ade94: 0xc08ee2e  jal         func_23B8B8
label_1ade98:
    if (ctx->pc == 0x1ADE98u) {
        ctx->pc = 0x1ADE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE94u;
        // 0x1ade98: 0x2484a840  addiu       $a0, $a0, -0x57C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADE9Cu;
        goto label_1ade9c;
    }
    ctx->pc = 0x1ADE94u;
    SET_GPR_U32(ctx, 31, 0x1ADE9Cu);
    ctx->pc = 0x1ADE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE94u;
    // 0x1ade98: 0x2484a840  addiu       $a0, $a0, -0x57C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1ADE9Cu;
label_1ade9c:
    // 0x1ade9c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1ade9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1adea0:
    // 0x1adea0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1adea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adea4:
    // 0x1adea4: 0x2484a868  addiu       $a0, $a0, -0x5798
    ctx->pc = 0x1adea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944872));
label_1adea8:
    // 0x1adea8: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x1adea8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_1adeac:
    // 0x1adeac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1adeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1adeb0:
    // 0x1adeb0: 0xc08ee2e  jal         func_23B8B8
label_1adeb4:
    if (ctx->pc == 0x1ADEB4u) {
        ctx->pc = 0x1ADEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEB0u;
        // 0x1adeb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADEB8u;
        goto label_1adeb8;
    }
    ctx->pc = 0x1ADEB0u;
    SET_GPR_U32(ctx, 31, 0x1ADEB8u);
    ctx->pc = 0x1ADEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEB0u;
    // 0x1adeb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1ADEB8u;
label_1adeb8:
    // 0x1adeb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1adebc:
    if (ctx->pc == 0x1ADEBCu) {
        ctx->pc = 0x1ADEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEB8u;
        // 0x1adebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADEC0u;
        goto label_1adec0;
    }
    ctx->pc = 0x1ADEB8u;
    {
        const bool branch_taken_0x1adeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEB8u;
        // 0x1adebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adeb8) {
            ctx->pc = 0x1ADEC8u;
            goto label_1adec8;
        }
    }
    ctx->pc = 0x1ADEC0u;
label_1adec0:
    // 0x1adec0: 0xc06b7b8  jal         func_1ADEE0
label_1adec4:
    if (ctx->pc == 0x1ADEC4u) {
        ctx->pc = 0x1ADEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADEC0u;
        // 0x1adec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADEC8u;
        goto label_1adec8;
    }
    ctx->pc = 0x1ADEC0u;
    SET_GPR_U32(ctx, 31, 0x1ADEC8u);
    ctx->pc = 0x1ADEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEC0u;
    // 0x1adec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADEE0u;
    goto label_1adee0;
    ctx->pc = 0x1ADEC8u;
label_1adec8:
    // 0x1adec8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1adec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1adecc:
    // 0x1adecc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1adeccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aded0:
    // 0x1aded0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aded0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aded4:
    // 0x1aded4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aded4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aded8:
    // 0x1aded8: 0x3e00008  jr          $ra
label_1adedc:
    if (ctx->pc == 0x1ADEDCu) {
        ctx->pc = 0x1ADEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADED8u;
        // 0x1adedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADEE0u;
        goto label_1adee0;
    }
    ctx->pc = 0x1ADED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADED8u;
        // 0x1adedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADEE0u;
label_1adee0:
    // 0x1adee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1adee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1adee4:
    // 0x1adee4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1adee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1adee8:
    // 0x1adee8: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1adee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1adeec:
    // 0x1adeec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1adeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1adef0:
    // 0x1adef0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1adef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1adef4:
    // 0x1adef4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1adef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1adef8:
    // 0x1adef8: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x1adef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
label_1adefc:
    // 0x1adefc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1adefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1adf00:
    // 0x1adf00: 0xac40ff8c  sw          $zero, -0x74($v0)
    ctx->pc = 0x1adf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967180), GPR_U32(ctx, 0));
label_1adf04:
    // 0x1adf04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1adf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1adf08:
    // 0x1adf08: 0xac40ff94  sw          $zero, -0x6C($v0)
    ctx->pc = 0x1adf08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967188), GPR_U32(ctx, 0));
label_1adf0c:
    // 0x1adf0c: 0xac40ff90  sw          $zero, -0x70($v0)
    ctx->pc = 0x1adf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 0));
label_1adf10:
    // 0x1adf10: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x1adf10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_1adf14:
    // 0x1adf14: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1adf14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1adf18:
    // 0x1adf18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1adf18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1adf1c:
    // 0x1adf1c: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
label_1adf20:
    if (ctx->pc == 0x1ADF20u) {
        ctx->pc = 0x1ADF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF1Cu;
        // 0x1adf20: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADF24u;
        goto label_1adf24;
    }
    ctx->pc = 0x1ADF1Cu;
    {
        const bool branch_taken_0x1adf1c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ADF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF1Cu;
        // 0x1adf20: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf1c) {
            ctx->pc = 0x1ADF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1adf00;
        }
    }
    ctx->pc = 0x1ADF24u;
label_1adf24:
    // 0x1adf24: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1adf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1adf28:
    // 0x1adf28: 0x24905ec0  addiu       $s0, $a0, 0x5EC0
    ctx->pc = 0x1adf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 24256));
label_1adf2c:
    // 0x1adf2c: 0xac825ec0  sw          $v0, 0x5EC0($a0)
    ctx->pc = 0x1adf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24256), GPR_U32(ctx, 2));
label_1adf30:
    // 0x1adf30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1adf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adf34:
    // 0x1adf34: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1adf38:
    // 0x1adf38: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1adf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1adf3c:
    // 0x1adf3c: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1adf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1adf40:
    // 0x1adf40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1adf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1adf44:
    // 0x1adf44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1adf44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adf48:
    // 0x1adf48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1adf48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adf4c:
    // 0x1adf4c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1adf4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1adf50:
    // 0x1adf50: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1adf50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adf54:
    // 0x1adf54: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1adf54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1adf58:
    // 0x1adf58: 0xc069e2a  jal         func_1A78A8
label_1adf5c:
    if (ctx->pc == 0x1ADF5Cu) {
        ctx->pc = 0x1ADF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF58u;
        // 0x1adf5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADF60u;
        goto label_1adf60;
    }
    ctx->pc = 0x1ADF58u;
    SET_GPR_U32(ctx, 31, 0x1ADF60u);
    ctx->pc = 0x1ADF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF58u;
    // 0x1adf5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1ADF60u;
label_1adf60:
    // 0x1adf60: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
label_1adf64:
    if (ctx->pc == 0x1ADF64u) {
        ctx->pc = 0x1ADF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF60u;
        // 0x1adf64: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADF68u;
        goto label_1adf68;
    }
    ctx->pc = 0x1ADF60u;
    {
        const bool branch_taken_0x1adf60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1adf60) {
            ctx->pc = 0x1ADF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADF60u;
            // 0x1adf64: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF6Cu;
            goto label_1adf6c;
        }
    }
    ctx->pc = 0x1ADF68u;
label_1adf68:
    // 0x1adf68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1adf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adf6c:
    // 0x1adf6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1adf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1adf70:
    // 0x1adf70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1adf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1adf74:
    // 0x1adf74: 0x3e00008  jr          $ra
label_1adf78:
    if (ctx->pc == 0x1ADF78u) {
        ctx->pc = 0x1ADF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF74u;
        // 0x1adf78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADF7Cu;
        goto label_1adf7c;
    }
    ctx->pc = 0x1ADF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF74u;
        // 0x1adf78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADF7Cu;
label_1adf7c:
    // 0x1adf7c: 0x0  nop
    ctx->pc = 0x1adf7cu;
    // NOP
label_1adf80:
    // 0x1adf80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1adf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1adf84:
    // 0x1adf84: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1adf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1adf88:
    // 0x1adf88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1adf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1adf8c:
    // 0x1adf8c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1adf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1adf90:
    // 0x1adf90: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1adf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
label_1adf94:
    // 0x1adf94: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1adf94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1adf98:
    // 0x1adf98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1adf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1adf9c:
    // 0x1adf9c: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1adf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1adfa0:
    // 0x1adfa0: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1adfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24256), GPR_U32(ctx, 3));
label_1adfa4:
    // 0x1adfa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1adfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adfa8:
    // 0x1adfa8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1adfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1adfac:
    // 0x1adfac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1adfacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adfb0:
    // 0x1adfb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1adfb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adfb4:
    // 0x1adfb4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1adfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1adfb8:
    // 0x1adfb8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1adfb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adfbc:
    // 0x1adfbc: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1adfbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1adfc0:
    // 0x1adfc0: 0xc069e2a  jal         func_1A78A8
label_1adfc4:
    if (ctx->pc == 0x1ADFC4u) {
        ctx->pc = 0x1ADFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFC0u;
        // 0x1adfc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADFC8u;
        goto label_1adfc8;
    }
    ctx->pc = 0x1ADFC0u;
    SET_GPR_U32(ctx, 31, 0x1ADFC8u);
    ctx->pc = 0x1ADFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFC0u;
    // 0x1adfc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1ADFC8u;
label_1adfc8:
    // 0x1adfc8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1adfcc:
    if (ctx->pc == 0x1ADFCCu) {
        ctx->pc = 0x1ADFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFC8u;
        // 0x1adfcc: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADFD0u;
        goto label_1adfd0;
    }
    ctx->pc = 0x1ADFC8u;
    {
        const bool branch_taken_0x1adfc8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1adfc8) {
            ctx->pc = 0x1ADFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADFC8u;
            // 0x1adfcc: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADFD8u;
            goto label_1adfd8;
        }
    }
    ctx->pc = 0x1ADFD0u;
label_1adfd0:
    // 0x1adfd0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1adfd4:
    if (ctx->pc == 0x1ADFD4u) {
        ctx->pc = 0x1ADFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFD0u;
        // 0x1adfd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADFD8u;
        goto label_1adfd8;
    }
    ctx->pc = 0x1ADFD0u;
    {
        const bool branch_taken_0x1adfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFD0u;
        // 0x1adfd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfd0) {
            ctx->pc = 0x1ADFF0u;
            goto label_1adff0;
        }
    }
    ctx->pc = 0x1ADFD8u;
label_1adfd8:
    // 0x1adfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1adfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1adfdc:
    // 0x1adfdc: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1adfe0:
    if (ctx->pc == 0x1ADFE0u) {
        ctx->pc = 0x1ADFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFDCu;
        // 0x1adfe0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADFE4u;
        goto label_1adfe4;
    }
    ctx->pc = 0x1ADFDCu;
    {
        const bool branch_taken_0x1adfdc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ADFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFDCu;
        // 0x1adfe0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfdc) {
            ctx->pc = 0x1ADFF0u;
            goto label_1adff0;
        }
    }
    ctx->pc = 0x1ADFE4u;
label_1adfe4:
    // 0x1adfe4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1adfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1adfe8:
    // 0x1adfe8: 0xac407210  sw          $zero, 0x7210($v0)
    ctx->pc = 0x1adfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29200), GPR_U32(ctx, 0));
label_1adfec:
    // 0x1adfec: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1adfecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1adff0:
    // 0x1adff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1adff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1adff4:
    // 0x1adff4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1adff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1adff8:
    // 0x1adff8: 0x3e00008  jr          $ra
label_1adffc:
    if (ctx->pc == 0x1ADFFCu) {
        ctx->pc = 0x1ADFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFF8u;
        // 0x1adffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE000u;
        goto label_1ae000;
    }
    ctx->pc = 0x1ADFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFF8u;
        // 0x1adffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE000u;
label_1ae000:
    // 0x1ae000: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ae000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1ae004:
    // 0x1ae004: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ae004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1ae008:
    // 0x1ae008: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ae008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1ae00c:
    // 0x1ae00c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ae00cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ae010:
    // 0x1ae010: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ae010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1ae014:
    // 0x1ae014: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ae014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae018:
    // 0x1ae018: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1ae018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1ae01c:
    // 0x1ae01c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae01cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae020:
    // 0x1ae020: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1ae020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1ae024:
    // 0x1ae024: 0x3282003f  andi        $v0, $s4, 0x3F
    ctx->pc = 0x1ae024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
label_1ae028:
    // 0x1ae028: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1ae028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1ae02c:
    // 0x1ae02c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1ae02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1ae030:
    // 0x1ae030: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1ae030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1ae034:
    // 0x1ae034: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ae034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ae038:
    // 0x1ae038: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ae03c:
    if (ctx->pc == 0x1AE03Cu) {
        ctx->pc = 0x1AE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE038u;
        // 0x1ae03c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE040u;
        goto label_1ae040;
    }
    ctx->pc = 0x1AE038u;
    {
        const bool branch_taken_0x1ae038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE038u;
        // 0x1ae03c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae038) {
            ctx->pc = 0x1AE064u;
            goto label_1ae064;
        }
    }
    ctx->pc = 0x1AE040u;
label_1ae040:
    // 0x1ae040: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ae040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ae044:
    // 0x1ae044: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1ae044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29204)));
label_1ae048:
    // 0x1ae048: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
label_1ae04c:
    if (ctx->pc == 0x1AE04Cu) {
        ctx->pc = 0x1AE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE048u;
        // 0x1ae04c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE050u;
        goto label_1ae050;
    }
    ctx->pc = 0x1AE048u;
    {
        const bool branch_taken_0x1ae048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE048u;
        // 0x1ae04c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae048) {
            ctx->pc = 0x1AE14Cu;
            goto label_1ae14c;
        }
    }
    ctx->pc = 0x1AE050u;
label_1ae050:
    // 0x1ae050: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ae050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ae054:
    // 0x1ae054: 0xc08ee2e  jal         func_23B8B8
label_1ae058:
    if (ctx->pc == 0x1AE058u) {
        ctx->pc = 0x1AE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE054u;
        // 0x1ae058: 0x2484a890  addiu       $a0, $a0, -0x5770 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE05Cu;
        goto label_1ae05c;
    }
    ctx->pc = 0x1AE054u;
    SET_GPR_U32(ctx, 31, 0x1AE05Cu);
    ctx->pc = 0x1AE058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE054u;
    // 0x1ae058: 0x2484a890  addiu       $a0, $a0, -0x5770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1AE05Cu;
label_1ae05c:
    // 0x1ae05c: 0x10000055  b           . + 4 + (0x55 << 2)
label_1ae060:
    if (ctx->pc == 0x1AE060u) {
        ctx->pc = 0x1AE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE05Cu;
        // 0x1ae060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE064u;
        goto label_1ae064;
    }
    ctx->pc = 0x1AE05Cu;
    {
        const bool branch_taken_0x1ae05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE05Cu;
        // 0x1ae060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae05c) {
            ctx->pc = 0x1AE1B4u;
            goto label_1ae1b4;
        }
    }
    ctx->pc = 0x1AE064u;
label_1ae064:
    // 0x1ae064: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae068:
    // 0x1ae068: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae06c:
    // 0x1ae06c: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x1ae06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae070:
    // 0x1ae070: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1ae070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae074:
    // 0x1ae074: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1ae074u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1ae078:
    // 0x1ae078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae07c:
    // 0x1ae07c: 0x27c25cd0  addiu       $v0, $fp, 0x5CD0
    ctx->pc = 0x1ae07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 23760));
label_1ae080:
    // 0x1ae080: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae084:
    // 0x1ae084: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae088:
    // 0x1ae088: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae08c:
    // 0x1ae08c: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
label_1ae090:
    if (ctx->pc == 0x1AE090u) {
        ctx->pc = 0x1AE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE08Cu;
        // 0x1ae090: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE094u;
        goto label_1ae094;
    }
    ctx->pc = 0x1AE08Cu;
    {
        const bool branch_taken_0x1ae08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE08Cu;
        // 0x1ae090: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae08c) {
            ctx->pc = 0x1AE0BCu;
            goto label_1ae0bc;
        }
    }
    ctx->pc = 0x1AE094u;
label_1ae094:
    // 0x1ae094: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ae094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ae098:
    // 0x1ae098: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1ae098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29204)));
label_1ae09c:
    // 0x1ae09c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_1ae0a0:
    if (ctx->pc == 0x1AE0A0u) {
        ctx->pc = 0x1AE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE09Cu;
        // 0x1ae0a0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0A4u;
        goto label_1ae0a4;
    }
    ctx->pc = 0x1AE09Cu;
    {
        const bool branch_taken_0x1ae09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE09Cu;
        // 0x1ae0a0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae09c) {
            ctx->pc = 0x1AE14Cu;
            goto label_1ae14c;
        }
    }
    ctx->pc = 0x1AE0A4u;
label_1ae0a4:
    // 0x1ae0a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ae0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ae0a8:
    // 0x1ae0a8: 0x2484a8c0  addiu       $a0, $a0, -0x5740
    ctx->pc = 0x1ae0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944960));
label_1ae0ac:
    // 0x1ae0ac: 0xc08ee2e  jal         func_23B8B8
label_1ae0b0:
    if (ctx->pc == 0x1AE0B0u) {
        ctx->pc = 0x1AE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0ACu;
        // 0x1ae0b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0B4u;
        goto label_1ae0b4;
    }
    ctx->pc = 0x1AE0ACu;
    SET_GPR_U32(ctx, 31, 0x1AE0B4u);
    ctx->pc = 0x1AE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE0ACu;
    // 0x1ae0b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1AE0B4u;
label_1ae0b4:
    // 0x1ae0b4: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1ae0b8:
    if (ctx->pc == 0x1AE0B8u) {
        ctx->pc = 0x1AE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0B4u;
        // 0x1ae0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0BCu;
        goto label_1ae0bc;
    }
    ctx->pc = 0x1AE0B4u;
    {
        const bool branch_taken_0x1ae0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0B4u;
        // 0x1ae0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0b4) {
            ctx->pc = 0x1AE1B4u;
            goto label_1ae1b4;
        }
    }
    ctx->pc = 0x1AE0BCu;
label_1ae0bc:
    // 0x1ae0bc: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1ae0bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
label_1ae0c0:
    // 0x1ae0c0: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1ae0c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ae0c4:
    // 0x1ae0c4: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1ae0c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae0c8:
    // 0x1ae0c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ae0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae0cc:
    // 0x1ae0cc: 0x0  nop
    ctx->pc = 0x1ae0ccu;
    // NOP
label_1ae0d0:
    // 0x1ae0d0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1ae0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_1ae0d4:
    // 0x1ae0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae0d8:
    // 0x1ae0d8: 0xa2160070  sb          $s6, 0x70($s0)
    ctx->pc = 0x1ae0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 22));
label_1ae0dc:
    // 0x1ae0dc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ae0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ae0e0:
    // 0x1ae0e0: 0xa2150071  sb          $s5, 0x71($s0)
    ctx->pc = 0x1ae0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 21));
label_1ae0e4:
    // 0x1ae0e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1ae0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ae0e8:
    // 0x1ae0e8: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x1ae0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_1ae0ec:
    // 0x1ae0ec: 0xc08e9ac  jal         func_23A6B0
label_1ae0f0:
    if (ctx->pc == 0x1AE0F0u) {
        ctx->pc = 0x1AE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0ECu;
        // 0x1ae0f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0F4u;
        goto label_1ae0f4;
    }
    ctx->pc = 0x1AE0ECu;
    SET_GPR_U32(ctx, 31, 0x1AE0F4u);
    ctx->pc = 0x1AE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE0ECu;
    // 0x1ae0f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x1AE0F4u;
label_1ae0f4:
    // 0x1ae0f4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1ae0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1ae0f8:
    // 0x1ae0f8: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
label_1ae0fc:
    if (ctx->pc == 0x1AE0FCu) {
        ctx->pc = 0x1AE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0F8u;
        // 0x1ae0fc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE100u;
        goto label_1ae100;
    }
    ctx->pc = 0x1AE0F8u;
    {
        const bool branch_taken_0x1ae0f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1AE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0F8u;
        // 0x1ae0fc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0f8) {
            ctx->pc = 0x1AE0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae0d0;
        }
    }
    ctx->pc = 0x1AE100u;
label_1ae100:
    // 0x1ae100: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ae100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae104:
    // 0x1ae104: 0x26f05ec0  addiu       $s0, $s7, 0x5EC0
    ctx->pc = 0x1ae104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24256));
label_1ae108:
    // 0x1ae108: 0xaef15ec0  sw          $s1, 0x5EC0($s7)
    ctx->pc = 0x1ae108u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24256), GPR_U32(ctx, 17));
label_1ae10c:
    // 0x1ae10c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ae110:
    // 0x1ae110: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1ae110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_1ae114:
    // 0x1ae114: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1ae114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1ae118:
    // 0x1ae118: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1ae118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_1ae11c:
    // 0x1ae11c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae120:
    // 0x1ae120: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1ae120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
label_1ae124:
    // 0x1ae124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae128:
    // 0x1ae128: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae12c:
    // 0x1ae12c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ae130:
    // 0x1ae130: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ae130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae134:
    // 0x1ae134: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ae134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae138:
    // 0x1ae138: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1ae138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae13c:
    // 0x1ae13c: 0xc069e2a  jal         func_1A78A8
label_1ae140:
    if (ctx->pc == 0x1AE140u) {
        ctx->pc = 0x1AE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE13Cu;
        // 0x1ae140: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE144u;
        goto label_1ae144;
    }
    ctx->pc = 0x1AE13Cu;
    SET_GPR_U32(ctx, 31, 0x1AE144u);
    ctx->pc = 0x1AE140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE13Cu;
    // 0x1ae140: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AE144u;
label_1ae144:
    // 0x1ae144: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ae148:
    if (ctx->pc == 0x1AE148u) {
        ctx->pc = 0x1AE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE144u;
        // 0x1ae148: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE14Cu;
        goto label_1ae14c;
    }
    ctx->pc = 0x1AE144u;
    {
        const bool branch_taken_0x1ae144 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE144u;
        // 0x1ae148: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae144) {
            ctx->pc = 0x1AE154u;
            goto label_1ae154;
        }
    }
    ctx->pc = 0x1AE14Cu;
label_1ae14c:
    // 0x1ae14c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ae150:
    if (ctx->pc == 0x1AE150u) {
        ctx->pc = 0x1AE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE14Cu;
        // 0x1ae150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE154u;
        goto label_1ae154;
    }
    ctx->pc = 0x1AE14Cu;
    {
        const bool branch_taken_0x1ae14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE14Cu;
        // 0x1ae150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae14c) {
            ctx->pc = 0x1AE1B4u;
            goto label_1ae1b4;
        }
    }
    ctx->pc = 0x1AE154u;
label_1ae154:
    // 0x1ae154: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1ae154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae158:
    // 0x1ae158: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x1ae158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1ae15c:
    // 0x1ae15c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1ae15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae160:
    // 0x1ae160: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae164:
    // 0x1ae164: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x1ae164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_1ae168:
    // 0x1ae168: 0x24425dc0  addiu       $v0, $v0, 0x5DC0
    ctx->pc = 0x1ae168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24000));
label_1ae16c:
    // 0x1ae16c: 0x27c45cd0  addiu       $a0, $fp, 0x5CD0
    ctx->pc = 0x1ae16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 23760));
label_1ae170:
    // 0x1ae170: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ae174:
    // 0x1ae174: 0x1331c0  sll         $a2, $s3, 7
    ctx->pc = 0x1ae174u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
label_1ae178:
    // 0x1ae178: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1ae178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1ae17c:
    // 0x1ae17c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1ae180:
    // 0x1ae180: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae184:
    // 0x1ae184: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x1ae184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ae188:
    // 0x1ae188: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1ae188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
label_1ae18c:
    // 0x1ae18c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae190:
    // 0x1ae190: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ae190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae194:
    // 0x1ae194: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ae194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1ae198:
    // 0x1ae198: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1ae198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ae19c:
    // 0x1ae19c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1ae19cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1ae1a0:
    // 0x1ae1a0: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x1ae1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
label_1ae1a4:
    // 0x1ae1a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ae1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1a8:
    // 0x1ae1a8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1ae1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_1ae1ac:
    // 0x1ae1ac: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1ae1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_1ae1b0:
    // 0x1ae1b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ae1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ae1b4:
    // 0x1ae1b4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ae1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1ae1b8:
    // 0x1ae1b8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1ae1b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ae1bc:
    // 0x1ae1bc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1ae1bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ae1c0:
    // 0x1ae1c0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ae1c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ae1c4:
    // 0x1ae1c4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ae1c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae1c8:
    // 0x1ae1c8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ae1c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ae1cc:
    // 0x1ae1cc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ae1ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ae1d0:
    // 0x1ae1d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ae1d4:
    // 0x1ae1d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae1d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae1d8:
    // 0x1ae1d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae1dc:
    // 0x1ae1dc: 0x3e00008  jr          $ra
label_1ae1e0:
    if (ctx->pc == 0x1AE1E0u) {
        ctx->pc = 0x1AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1DCu;
        // 0x1ae1e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1E4u;
        goto label_1ae1e4;
    }
    ctx->pc = 0x1AE1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1DCu;
        // 0x1ae1e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE1E4u;
label_1ae1e4:
    // 0x1ae1e4: 0x0  nop
    ctx->pc = 0x1ae1e4u;
    // NOP
label_1ae1e8:
    // 0x1ae1e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ae1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1ec:
    // 0x1ae1ec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->pc = 0x1ae1f0u;
    return;
}

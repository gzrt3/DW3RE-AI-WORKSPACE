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


void FUN_0017faa0_part650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bc8f0u: goto label_2bc8f0;
        case 0x2bc8f4u: goto label_2bc8f4;
        case 0x2bc8f8u: goto label_2bc8f8;
        case 0x2bc8fcu: goto label_2bc8fc;
        case 0x2bc900u: goto label_2bc900;
        case 0x2bc904u: goto label_2bc904;
        case 0x2bc908u: goto label_2bc908;
        case 0x2bc90cu: goto label_2bc90c;
        case 0x2bc910u: goto label_2bc910;
        case 0x2bc914u: goto label_2bc914;
        case 0x2bc918u: goto label_2bc918;
        case 0x2bc91cu: goto label_2bc91c;
        case 0x2bc920u: goto label_2bc920;
        case 0x2bc924u: goto label_2bc924;
        case 0x2bc928u: goto label_2bc928;
        case 0x2bc92cu: goto label_2bc92c;
        case 0x2bc930u: goto label_2bc930;
        case 0x2bc934u: goto label_2bc934;
        case 0x2bc938u: goto label_2bc938;
        case 0x2bc93cu: goto label_2bc93c;
        case 0x2bc940u: goto label_2bc940;
        case 0x2bc944u: goto label_2bc944;
        case 0x2bc948u: goto label_2bc948;
        case 0x2bc94cu: goto label_2bc94c;
        case 0x2bc950u: goto label_2bc950;
        case 0x2bc954u: goto label_2bc954;
        case 0x2bc958u: goto label_2bc958;
        case 0x2bc95cu: goto label_2bc95c;
        case 0x2bc960u: goto label_2bc960;
        case 0x2bc964u: goto label_2bc964;
        case 0x2bc968u: goto label_2bc968;
        case 0x2bc96cu: goto label_2bc96c;
        case 0x2bc970u: goto label_2bc970;
        case 0x2bc974u: goto label_2bc974;
        case 0x2bc978u: goto label_2bc978;
        case 0x2bc97cu: goto label_2bc97c;
        case 0x2bc980u: goto label_2bc980;
        case 0x2bc984u: goto label_2bc984;
        case 0x2bc988u: goto label_2bc988;
        case 0x2bc98cu: goto label_2bc98c;
        case 0x2bc990u: goto label_2bc990;
        case 0x2bc994u: goto label_2bc994;
        case 0x2bc998u: goto label_2bc998;
        case 0x2bc99cu: goto label_2bc99c;
        case 0x2bc9a0u: goto label_2bc9a0;
        case 0x2bc9a4u: goto label_2bc9a4;
        case 0x2bc9a8u: goto label_2bc9a8;
        case 0x2bc9acu: goto label_2bc9ac;
        case 0x2bc9b0u: goto label_2bc9b0;
        case 0x2bc9b4u: goto label_2bc9b4;
        case 0x2bc9b8u: goto label_2bc9b8;
        case 0x2bc9bcu: goto label_2bc9bc;
        case 0x2bc9c0u: goto label_2bc9c0;
        case 0x2bc9c4u: goto label_2bc9c4;
        case 0x2bc9c8u: goto label_2bc9c8;
        case 0x2bc9ccu: goto label_2bc9cc;
        case 0x2bc9d0u: goto label_2bc9d0;
        case 0x2bc9d4u: goto label_2bc9d4;
        case 0x2bc9d8u: goto label_2bc9d8;
        case 0x2bc9dcu: goto label_2bc9dc;
        case 0x2bc9e0u: goto label_2bc9e0;
        case 0x2bc9e4u: goto label_2bc9e4;
        case 0x2bc9e8u: goto label_2bc9e8;
        case 0x2bc9ecu: goto label_2bc9ec;
        case 0x2bc9f0u: goto label_2bc9f0;
        case 0x2bc9f4u: goto label_2bc9f4;
        case 0x2bc9f8u: goto label_2bc9f8;
        case 0x2bc9fcu: goto label_2bc9fc;
        case 0x2bca00u: goto label_2bca00;
        case 0x2bca04u: goto label_2bca04;
        case 0x2bca08u: goto label_2bca08;
        case 0x2bca0cu: goto label_2bca0c;
        case 0x2bca10u: goto label_2bca10;
        case 0x2bca14u: goto label_2bca14;
        case 0x2bca18u: goto label_2bca18;
        case 0x2bca1cu: goto label_2bca1c;
        case 0x2bca20u: goto label_2bca20;
        case 0x2bca24u: goto label_2bca24;
        case 0x2bca28u: goto label_2bca28;
        case 0x2bca2cu: goto label_2bca2c;
        case 0x2bca30u: goto label_2bca30;
        case 0x2bca34u: goto label_2bca34;
        case 0x2bca38u: goto label_2bca38;
        case 0x2bca3cu: goto label_2bca3c;
        case 0x2bca40u: goto label_2bca40;
        case 0x2bca44u: goto label_2bca44;
        case 0x2bca48u: goto label_2bca48;
        case 0x2bca4cu: goto label_2bca4c;
        case 0x2bca50u: goto label_2bca50;
        case 0x2bca54u: goto label_2bca54;
        case 0x2bca58u: goto label_2bca58;
        case 0x2bca5cu: goto label_2bca5c;
        case 0x2bca60u: goto label_2bca60;
        case 0x2bca64u: goto label_2bca64;
        case 0x2bca68u: goto label_2bca68;
        case 0x2bca6cu: goto label_2bca6c;
        case 0x2bca70u: goto label_2bca70;
        case 0x2bca74u: goto label_2bca74;
        case 0x2bca78u: goto label_2bca78;
        case 0x2bca7cu: goto label_2bca7c;
        case 0x2bca80u: goto label_2bca80;
        case 0x2bca84u: goto label_2bca84;
        case 0x2bca88u: goto label_2bca88;
        case 0x2bca8cu: goto label_2bca8c;
        case 0x2bca90u: goto label_2bca90;
        case 0x2bca94u: goto label_2bca94;
        case 0x2bca98u: goto label_2bca98;
        case 0x2bca9cu: goto label_2bca9c;
        case 0x2bcaa0u: goto label_2bcaa0;
        case 0x2bcaa4u: goto label_2bcaa4;
        case 0x2bcaa8u: goto label_2bcaa8;
        case 0x2bcaacu: goto label_2bcaac;
        case 0x2bcab0u: goto label_2bcab0;
        case 0x2bcab4u: goto label_2bcab4;
        case 0x2bcab8u: goto label_2bcab8;
        case 0x2bcabcu: goto label_2bcabc;
        case 0x2bcac0u: goto label_2bcac0;
        case 0x2bcac4u: goto label_2bcac4;
        case 0x2bcac8u: goto label_2bcac8;
        case 0x2bcaccu: goto label_2bcacc;
        case 0x2bcad0u: goto label_2bcad0;
        case 0x2bcad4u: goto label_2bcad4;
        case 0x2bcad8u: goto label_2bcad8;
        case 0x2bcadcu: goto label_2bcadc;
        case 0x2bcae0u: goto label_2bcae0;
        case 0x2bcae4u: goto label_2bcae4;
        case 0x2bcae8u: goto label_2bcae8;
        case 0x2bcaecu: goto label_2bcaec;
        case 0x2bcaf0u: goto label_2bcaf0;
        case 0x2bcaf4u: goto label_2bcaf4;
        case 0x2bcaf8u: goto label_2bcaf8;
        case 0x2bcafcu: goto label_2bcafc;
        case 0x2bcb00u: goto label_2bcb00;
        case 0x2bcb04u: goto label_2bcb04;
        case 0x2bcb08u: goto label_2bcb08;
        case 0x2bcb0cu: goto label_2bcb0c;
        case 0x2bcb10u: goto label_2bcb10;
        case 0x2bcb14u: goto label_2bcb14;
        case 0x2bcb18u: goto label_2bcb18;
        case 0x2bcb1cu: goto label_2bcb1c;
        case 0x2bcb20u: goto label_2bcb20;
        case 0x2bcb24u: goto label_2bcb24;
        case 0x2bcb28u: goto label_2bcb28;
        case 0x2bcb2cu: goto label_2bcb2c;
        case 0x2bcb30u: goto label_2bcb30;
        case 0x2bcb34u: goto label_2bcb34;
        case 0x2bcb38u: goto label_2bcb38;
        case 0x2bcb3cu: goto label_2bcb3c;
        case 0x2bcb40u: goto label_2bcb40;
        case 0x2bcb44u: goto label_2bcb44;
        case 0x2bcb48u: goto label_2bcb48;
        case 0x2bcb4cu: goto label_2bcb4c;
        case 0x2bcb50u: goto label_2bcb50;
        case 0x2bcb54u: goto label_2bcb54;
        case 0x2bcb58u: goto label_2bcb58;
        case 0x2bcb5cu: goto label_2bcb5c;
        case 0x2bcb60u: goto label_2bcb60;
        case 0x2bcb64u: goto label_2bcb64;
        case 0x2bcb68u: goto label_2bcb68;
        case 0x2bcb6cu: goto label_2bcb6c;
        case 0x2bcb70u: goto label_2bcb70;
        case 0x2bcb74u: goto label_2bcb74;
        case 0x2bcb78u: goto label_2bcb78;
        case 0x2bcb7cu: goto label_2bcb7c;
        case 0x2bcb80u: goto label_2bcb80;
        case 0x2bcb84u: goto label_2bcb84;
        case 0x2bcb88u: goto label_2bcb88;
        case 0x2bcb8cu: goto label_2bcb8c;
        case 0x2bcb90u: goto label_2bcb90;
        case 0x2bcb94u: goto label_2bcb94;
        case 0x2bcb98u: goto label_2bcb98;
        case 0x2bcb9cu: goto label_2bcb9c;
        case 0x2bcba0u: goto label_2bcba0;
        case 0x2bcba4u: goto label_2bcba4;
        case 0x2bcba8u: goto label_2bcba8;
        case 0x2bcbacu: goto label_2bcbac;
        case 0x2bcbb0u: goto label_2bcbb0;
        case 0x2bcbb4u: goto label_2bcbb4;
        case 0x2bcbb8u: goto label_2bcbb8;
        case 0x2bcbbcu: goto label_2bcbbc;
        case 0x2bcbc0u: goto label_2bcbc0;
        case 0x2bcbc4u: goto label_2bcbc4;
        case 0x2bcbc8u: goto label_2bcbc8;
        case 0x2bcbccu: goto label_2bcbcc;
        case 0x2bcbd0u: goto label_2bcbd0;
        case 0x2bcbd4u: goto label_2bcbd4;
        case 0x2bcbd8u: goto label_2bcbd8;
        case 0x2bcbdcu: goto label_2bcbdc;
        case 0x2bcbe0u: goto label_2bcbe0;
        case 0x2bcbe4u: goto label_2bcbe4;
        case 0x2bcbe8u: goto label_2bcbe8;
        case 0x2bcbecu: goto label_2bcbec;
        case 0x2bcbf0u: goto label_2bcbf0;
        case 0x2bcbf4u: goto label_2bcbf4;
        case 0x2bcbf8u: goto label_2bcbf8;
        case 0x2bcbfcu: goto label_2bcbfc;
        case 0x2bcc00u: goto label_2bcc00;
        case 0x2bcc04u: goto label_2bcc04;
        case 0x2bcc08u: goto label_2bcc08;
        case 0x2bcc0cu: goto label_2bcc0c;
        case 0x2bcc10u: goto label_2bcc10;
        case 0x2bcc14u: goto label_2bcc14;
        case 0x2bcc18u: goto label_2bcc18;
        case 0x2bcc1cu: goto label_2bcc1c;
        case 0x2bcc20u: goto label_2bcc20;
        case 0x2bcc24u: goto label_2bcc24;
        case 0x2bcc28u: goto label_2bcc28;
        case 0x2bcc2cu: goto label_2bcc2c;
        case 0x2bcc30u: goto label_2bcc30;
        case 0x2bcc34u: goto label_2bcc34;
        case 0x2bcc38u: goto label_2bcc38;
        case 0x2bcc3cu: goto label_2bcc3c;
        case 0x2bcc40u: goto label_2bcc40;
        case 0x2bcc44u: goto label_2bcc44;
        case 0x2bcc48u: goto label_2bcc48;
        case 0x2bcc4cu: goto label_2bcc4c;
        case 0x2bcc50u: goto label_2bcc50;
        case 0x2bcc54u: goto label_2bcc54;
        case 0x2bcc58u: goto label_2bcc58;
        case 0x2bcc5cu: goto label_2bcc5c;
        case 0x2bcc60u: goto label_2bcc60;
        case 0x2bcc64u: goto label_2bcc64;
        case 0x2bcc68u: goto label_2bcc68;
        case 0x2bcc6cu: goto label_2bcc6c;
        case 0x2bcc70u: goto label_2bcc70;
        case 0x2bcc74u: goto label_2bcc74;
        case 0x2bcc78u: goto label_2bcc78;
        case 0x2bcc7cu: goto label_2bcc7c;
        case 0x2bcc80u: goto label_2bcc80;
        case 0x2bcc84u: goto label_2bcc84;
        case 0x2bcc88u: goto label_2bcc88;
        case 0x2bcc8cu: goto label_2bcc8c;
        case 0x2bcc90u: goto label_2bcc90;
        case 0x2bcc94u: goto label_2bcc94;
        case 0x2bcc98u: goto label_2bcc98;
        case 0x2bcc9cu: goto label_2bcc9c;
        case 0x2bcca0u: goto label_2bcca0;
        case 0x2bcca4u: goto label_2bcca4;
        case 0x2bcca8u: goto label_2bcca8;
        case 0x2bccacu: goto label_2bccac;
        case 0x2bccb0u: goto label_2bccb0;
        case 0x2bccb4u: goto label_2bccb4;
        case 0x2bccb8u: goto label_2bccb8;
        case 0x2bccbcu: goto label_2bccbc;
        case 0x2bccc0u: goto label_2bccc0;
        case 0x2bccc4u: goto label_2bccc4;
        case 0x2bccc8u: goto label_2bccc8;
        case 0x2bccccu: goto label_2bcccc;
        case 0x2bccd0u: goto label_2bccd0;
        case 0x2bccd4u: goto label_2bccd4;
        case 0x2bccd8u: goto label_2bccd8;
        case 0x2bccdcu: goto label_2bccdc;
        case 0x2bcce0u: goto label_2bcce0;
        case 0x2bcce4u: goto label_2bcce4;
        case 0x2bcce8u: goto label_2bcce8;
        case 0x2bccecu: goto label_2bccec;
        case 0x2bccf0u: goto label_2bccf0;
        case 0x2bccf4u: goto label_2bccf4;
        case 0x2bccf8u: goto label_2bccf8;
        case 0x2bccfcu: goto label_2bccfc;
        case 0x2bcd00u: goto label_2bcd00;
        case 0x2bcd04u: goto label_2bcd04;
        case 0x2bcd08u: goto label_2bcd08;
        case 0x2bcd0cu: goto label_2bcd0c;
        case 0x2bcd10u: goto label_2bcd10;
        case 0x2bcd14u: goto label_2bcd14;
        case 0x2bcd18u: goto label_2bcd18;
        case 0x2bcd1cu: goto label_2bcd1c;
        case 0x2bcd20u: goto label_2bcd20;
        case 0x2bcd24u: goto label_2bcd24;
        case 0x2bcd28u: goto label_2bcd28;
        case 0x2bcd2cu: goto label_2bcd2c;
        case 0x2bcd30u: goto label_2bcd30;
        case 0x2bcd34u: goto label_2bcd34;
        case 0x2bcd38u: goto label_2bcd38;
        case 0x2bcd3cu: goto label_2bcd3c;
        case 0x2bcd40u: goto label_2bcd40;
        case 0x2bcd44u: goto label_2bcd44;
        case 0x2bcd48u: goto label_2bcd48;
        case 0x2bcd4cu: goto label_2bcd4c;
        case 0x2bcd50u: goto label_2bcd50;
        case 0x2bcd54u: goto label_2bcd54;
        case 0x2bcd58u: goto label_2bcd58;
        case 0x2bcd5cu: goto label_2bcd5c;
        case 0x2bcd60u: goto label_2bcd60;
        case 0x2bcd64u: goto label_2bcd64;
        case 0x2bcd68u: goto label_2bcd68;
        case 0x2bcd6cu: goto label_2bcd6c;
        case 0x2bcd70u: goto label_2bcd70;
        case 0x2bcd74u: goto label_2bcd74;
        case 0x2bcd78u: goto label_2bcd78;
        case 0x2bcd7cu: goto label_2bcd7c;
        case 0x2bcd80u: goto label_2bcd80;
        case 0x2bcd84u: goto label_2bcd84;
        case 0x2bcd88u: goto label_2bcd88;
        case 0x2bcd8cu: goto label_2bcd8c;
        case 0x2bcd90u: goto label_2bcd90;
        case 0x2bcd94u: goto label_2bcd94;
        case 0x2bcd98u: goto label_2bcd98;
        case 0x2bcd9cu: goto label_2bcd9c;
        case 0x2bcda0u: goto label_2bcda0;
        case 0x2bcda4u: goto label_2bcda4;
        case 0x2bcda8u: goto label_2bcda8;
        case 0x2bcdacu: goto label_2bcdac;
        case 0x2bcdb0u: goto label_2bcdb0;
        case 0x2bcdb4u: goto label_2bcdb4;
        case 0x2bcdb8u: goto label_2bcdb8;
        case 0x2bcdbcu: goto label_2bcdbc;
        case 0x2bcdc0u: goto label_2bcdc0;
        case 0x2bcdc4u: goto label_2bcdc4;
        case 0x2bcdc8u: goto label_2bcdc8;
        case 0x2bcdccu: goto label_2bcdcc;
        case 0x2bcdd0u: goto label_2bcdd0;
        case 0x2bcdd4u: goto label_2bcdd4;
        case 0x2bcdd8u: goto label_2bcdd8;
        case 0x2bcddcu: goto label_2bcddc;
        case 0x2bcde0u: goto label_2bcde0;
        case 0x2bcde4u: goto label_2bcde4;
        case 0x2bcde8u: goto label_2bcde8;
        case 0x2bcdecu: goto label_2bcdec;
        case 0x2bcdf0u: goto label_2bcdf0;
        case 0x2bcdf4u: goto label_2bcdf4;
        case 0x2bcdf8u: goto label_2bcdf8;
        case 0x2bcdfcu: goto label_2bcdfc;
        case 0x2bce00u: goto label_2bce00;
        case 0x2bce04u: goto label_2bce04;
        case 0x2bce08u: goto label_2bce08;
        case 0x2bce0cu: goto label_2bce0c;
        case 0x2bce10u: goto label_2bce10;
        case 0x2bce14u: goto label_2bce14;
        case 0x2bce18u: goto label_2bce18;
        case 0x2bce1cu: goto label_2bce1c;
        case 0x2bce20u: goto label_2bce20;
        case 0x2bce24u: goto label_2bce24;
        case 0x2bce28u: goto label_2bce28;
        case 0x2bce2cu: goto label_2bce2c;
        case 0x2bce30u: goto label_2bce30;
        case 0x2bce34u: goto label_2bce34;
        case 0x2bce38u: goto label_2bce38;
        case 0x2bce3cu: goto label_2bce3c;
        case 0x2bce40u: goto label_2bce40;
        case 0x2bce44u: goto label_2bce44;
        case 0x2bce48u: goto label_2bce48;
        case 0x2bce4cu: goto label_2bce4c;
        case 0x2bce50u: goto label_2bce50;
        case 0x2bce54u: goto label_2bce54;
        case 0x2bce58u: goto label_2bce58;
        case 0x2bce5cu: goto label_2bce5c;
        case 0x2bce60u: goto label_2bce60;
        case 0x2bce64u: goto label_2bce64;
        case 0x2bce68u: goto label_2bce68;
        case 0x2bce6cu: goto label_2bce6c;
        case 0x2bce70u: goto label_2bce70;
        case 0x2bce74u: goto label_2bce74;
        case 0x2bce78u: goto label_2bce78;
        case 0x2bce7cu: goto label_2bce7c;
        case 0x2bce80u: goto label_2bce80;
        case 0x2bce84u: goto label_2bce84;
        case 0x2bce88u: goto label_2bce88;
        case 0x2bce8cu: goto label_2bce8c;
        case 0x2bce90u: goto label_2bce90;
        case 0x2bce94u: goto label_2bce94;
        case 0x2bce98u: goto label_2bce98;
        case 0x2bce9cu: goto label_2bce9c;
        case 0x2bcea0u: goto label_2bcea0;
        case 0x2bcea4u: goto label_2bcea4;
        case 0x2bcea8u: goto label_2bcea8;
        case 0x2bceacu: goto label_2bceac;
        case 0x2bceb0u: goto label_2bceb0;
        case 0x2bceb4u: goto label_2bceb4;
        case 0x2bceb8u: goto label_2bceb8;
        case 0x2bcebcu: goto label_2bcebc;
        case 0x2bcec0u: goto label_2bcec0;
        case 0x2bcec4u: goto label_2bcec4;
        case 0x2bcec8u: goto label_2bcec8;
        case 0x2bceccu: goto label_2bcecc;
        case 0x2bced0u: goto label_2bced0;
        case 0x2bced4u: goto label_2bced4;
        case 0x2bced8u: goto label_2bced8;
        case 0x2bcedcu: goto label_2bcedc;
        case 0x2bcee0u: goto label_2bcee0;
        case 0x2bcee4u: goto label_2bcee4;
        case 0x2bcee8u: goto label_2bcee8;
        case 0x2bceecu: goto label_2bceec;
        case 0x2bcef0u: goto label_2bcef0;
        case 0x2bcef4u: goto label_2bcef4;
        case 0x2bcef8u: goto label_2bcef8;
        case 0x2bcefcu: goto label_2bcefc;
        case 0x2bcf00u: goto label_2bcf00;
        case 0x2bcf04u: goto label_2bcf04;
        case 0x2bcf08u: goto label_2bcf08;
        case 0x2bcf0cu: goto label_2bcf0c;
        case 0x2bcf10u: goto label_2bcf10;
        case 0x2bcf14u: goto label_2bcf14;
        case 0x2bcf18u: goto label_2bcf18;
        case 0x2bcf1cu: goto label_2bcf1c;
        case 0x2bcf20u: goto label_2bcf20;
        case 0x2bcf24u: goto label_2bcf24;
        case 0x2bcf28u: goto label_2bcf28;
        case 0x2bcf2cu: goto label_2bcf2c;
        case 0x2bcf30u: goto label_2bcf30;
        case 0x2bcf34u: goto label_2bcf34;
        case 0x2bcf38u: goto label_2bcf38;
        case 0x2bcf3cu: goto label_2bcf3c;
        case 0x2bcf40u: goto label_2bcf40;
        case 0x2bcf44u: goto label_2bcf44;
        case 0x2bcf48u: goto label_2bcf48;
        case 0x2bcf4cu: goto label_2bcf4c;
        case 0x2bcf50u: goto label_2bcf50;
        case 0x2bcf54u: goto label_2bcf54;
        case 0x2bcf58u: goto label_2bcf58;
        case 0x2bcf5cu: goto label_2bcf5c;
        case 0x2bcf60u: goto label_2bcf60;
        case 0x2bcf64u: goto label_2bcf64;
        case 0x2bcf68u: goto label_2bcf68;
        case 0x2bcf6cu: goto label_2bcf6c;
        case 0x2bcf70u: goto label_2bcf70;
        case 0x2bcf74u: goto label_2bcf74;
        case 0x2bcf78u: goto label_2bcf78;
        case 0x2bcf7cu: goto label_2bcf7c;
        case 0x2bcf80u: goto label_2bcf80;
        case 0x2bcf84u: goto label_2bcf84;
        case 0x2bcf88u: goto label_2bcf88;
        case 0x2bcf8cu: goto label_2bcf8c;
        case 0x2bcf90u: goto label_2bcf90;
        case 0x2bcf94u: goto label_2bcf94;
        case 0x2bcf98u: goto label_2bcf98;
        case 0x2bcf9cu: goto label_2bcf9c;
        case 0x2bcfa0u: goto label_2bcfa0;
        case 0x2bcfa4u: goto label_2bcfa4;
        case 0x2bcfa8u: goto label_2bcfa8;
        case 0x2bcfacu: goto label_2bcfac;
        case 0x2bcfb0u: goto label_2bcfb0;
        case 0x2bcfb4u: goto label_2bcfb4;
        case 0x2bcfb8u: goto label_2bcfb8;
        case 0x2bcfbcu: goto label_2bcfbc;
        case 0x2bcfc0u: goto label_2bcfc0;
        case 0x2bcfc4u: goto label_2bcfc4;
        case 0x2bcfc8u: goto label_2bcfc8;
        case 0x2bcfccu: goto label_2bcfcc;
        case 0x2bcfd0u: goto label_2bcfd0;
        case 0x2bcfd4u: goto label_2bcfd4;
        case 0x2bcfd8u: goto label_2bcfd8;
        case 0x2bcfdcu: goto label_2bcfdc;
        case 0x2bcfe0u: goto label_2bcfe0;
        case 0x2bcfe4u: goto label_2bcfe4;
        case 0x2bcfe8u: goto label_2bcfe8;
        case 0x2bcfecu: goto label_2bcfec;
        case 0x2bcff0u: goto label_2bcff0;
        case 0x2bcff4u: goto label_2bcff4;
        case 0x2bcff8u: goto label_2bcff8;
        case 0x2bcffcu: goto label_2bcffc;
        case 0x2bd000u: goto label_2bd000;
        case 0x2bd004u: goto label_2bd004;
        case 0x2bd008u: goto label_2bd008;
        case 0x2bd00cu: goto label_2bd00c;
        case 0x2bd010u: goto label_2bd010;
        case 0x2bd014u: goto label_2bd014;
        case 0x2bd018u: goto label_2bd018;
        case 0x2bd01cu: goto label_2bd01c;
        case 0x2bd020u: goto label_2bd020;
        case 0x2bd024u: goto label_2bd024;
        case 0x2bd028u: goto label_2bd028;
        case 0x2bd02cu: goto label_2bd02c;
        case 0x2bd030u: goto label_2bd030;
        case 0x2bd034u: goto label_2bd034;
        case 0x2bd038u: goto label_2bd038;
        case 0x2bd03cu: goto label_2bd03c;
        case 0x2bd040u: goto label_2bd040;
        case 0x2bd044u: goto label_2bd044;
        case 0x2bd048u: goto label_2bd048;
        case 0x2bd04cu: goto label_2bd04c;
        case 0x2bd050u: goto label_2bd050;
        case 0x2bd054u: goto label_2bd054;
        case 0x2bd058u: goto label_2bd058;
        case 0x2bd05cu: goto label_2bd05c;
        case 0x2bd060u: goto label_2bd060;
        case 0x2bd064u: goto label_2bd064;
        case 0x2bd068u: goto label_2bd068;
        case 0x2bd06cu: goto label_2bd06c;
        case 0x2bd070u: goto label_2bd070;
        case 0x2bd074u: goto label_2bd074;
        case 0x2bd078u: goto label_2bd078;
        case 0x2bd07cu: goto label_2bd07c;
        case 0x2bd080u: goto label_2bd080;
        case 0x2bd084u: goto label_2bd084;
        case 0x2bd088u: goto label_2bd088;
        case 0x2bd08cu: goto label_2bd08c;
        case 0x2bd090u: goto label_2bd090;
        case 0x2bd094u: goto label_2bd094;
        case 0x2bd098u: goto label_2bd098;
        case 0x2bd09cu: goto label_2bd09c;
        case 0x2bd0a0u: goto label_2bd0a0;
        case 0x2bd0a4u: goto label_2bd0a4;
        case 0x2bd0a8u: goto label_2bd0a8;
        case 0x2bd0acu: goto label_2bd0ac;
        case 0x2bd0b0u: goto label_2bd0b0;
        case 0x2bd0b4u: goto label_2bd0b4;
        case 0x2bd0b8u: goto label_2bd0b8;
        case 0x2bd0bcu: goto label_2bd0bc;
        default: return;
    }

label_2bc8f0:
    // 0x2bc8f0: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2bc8f0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2bc8f4:
    // 0x2bc8f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc8f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc8f8:
    // 0x2bc8f8: 0x5201002a  beql        $s0, $at, . + 4 + (0x2A << 2)
label_2bc8fc:
    if (ctx->pc == 0x2BC8FCu) {
        ctx->pc = 0x2BC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC8F8u;
        // 0x2bc8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC900u;
        goto label_2bc900;
    }
    ctx->pc = 0x2BC8F8u;
    {
        const bool branch_taken_0x2bc8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc8f8) {
            ctx->pc = 0x2BC8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC8F8u;
            // 0x2bc8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC9A4u;
            goto label_2bc9a4;
        }
    }
    ctx->pc = 0x2BC900u;
label_2bc900:
    // 0x2bc900: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc900u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc904:
    // 0x2bc904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc908:
    // 0x2bc908: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2bc908u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2bc90c:
    // 0x2bc90c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc90cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc910:
    // 0x2bc910: 0x52010027  beql        $s0, $at, . + 4 + (0x27 << 2)
label_2bc914:
    if (ctx->pc == 0x2BC914u) {
        ctx->pc = 0x2BC914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC910u;
        // 0x2bc914: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC918u;
        goto label_2bc918;
    }
    ctx->pc = 0x2BC910u;
    {
        const bool branch_taken_0x2bc910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc910) {
            ctx->pc = 0x2BC914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC910u;
            // 0x2bc914: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC9B0u;
            goto label_2bc9b0;
        }
    }
    ctx->pc = 0x2BC918u;
label_2bc918:
    // 0x2bc918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc91c:
    // 0x2bc91c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc91cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc920:
    // 0x2bc920: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2bc920u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2bc924:
    // 0x2bc924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc928:
    // 0x2bc928: 0x52010024  beql        $s0, $at, . + 4 + (0x24 << 2)
label_2bc92c:
    if (ctx->pc == 0x2BC92Cu) {
        ctx->pc = 0x2BC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC928u;
        // 0x2bc92c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC930u;
        goto label_2bc930;
    }
    ctx->pc = 0x2BC928u;
    {
        const bool branch_taken_0x2bc928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bc928) {
            ctx->pc = 0x2BC92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC928u;
            // 0x2bc92c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BC9BCu;
            goto label_2bc9bc;
        }
    }
    ctx->pc = 0x2BC930u;
label_2bc930:
    // 0x2bc930: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc934:
    // 0x2bc934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc938:
    // 0x2bc938: 0x120f7048  beq         $s0, $t7, . + 4 + (0x7048 << 2)
label_2bc93c:
    if (ctx->pc == 0x2BC93Cu) {
        ctx->pc = 0x2BC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC938u;
        // 0x2bc93c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC940u;
        goto label_2bc940;
    }
    ctx->pc = 0x2BC938u;
    {
        const bool branch_taken_0x2bc938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC938u;
        // 0x2bc93c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc938) {
            ctx->pc = 0x2D8A5Cu;
            return;
        }
    }
    ctx->pc = 0x2BC940u;
label_2bc940:
    // 0x2bc940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc944:
    // 0x2bc944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc948:
    // 0x2bc948: 0x5a00781f  blezl       $s0, . + 4 + (0x781F << 2)
label_2bc94c:
    if (ctx->pc == 0x2BC94Cu) {
        ctx->pc = 0x2BC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC948u;
        // 0x2bc94c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC950u;
        goto label_2bc950;
    }
    ctx->pc = 0x2BC948u;
    {
        const bool branch_taken_0x2bc948 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bc948) {
            ctx->pc = 0x2BC94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BC948u;
            // 0x2bc94c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA9C8u;
            return;
        }
    }
    ctx->pc = 0x2BC950u;
label_2bc950:
    // 0x2bc950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc954:
    // 0x2bc954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc958:
    // 0x2bc958: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bc95c:
    if (ctx->pc == 0x2BC95Cu) {
        ctx->pc = 0x2BC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC958u;
        // 0x2bc95c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC960u;
        goto label_2bc960;
    }
    ctx->pc = 0x2BC958u;
    {
        const bool branch_taken_0x2bc958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC958u;
        // 0x2bc95c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc958) {
            ctx->pc = 0x2D89A4u;
            return;
        }
    }
    ctx->pc = 0x2BC960u;
label_2bc960:
    // 0x2bc960: 0x1f947f8  .word       0x01F947F8                   # dsll        $t0, $t9, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc960u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 25) << 31);
label_2bc964:
    // 0x2bc964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc968:
    // 0x2bc968: 0x1fb47fb  .word       0x01FB47FB                   # dsra        $t0, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc968u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 27) >> 31);
label_2bc96c:
    // 0x2bc96c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc96cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc970:
    // 0x2bc970: 0x1fc47fe  .word       0x01FC47FE                   # dsrl32      $t0, $gp, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc970u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 28) >> (32 + 31));
label_2bc974:
    // 0x2bc974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc978:
    // 0x2bc978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc97c:
    // 0x2bc97c: 0x1f9c93c  .word       0x01F9C93C                   # dsll32      $t9, $t9, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc97cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 4));
label_2bc980:
    // 0x2bc980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc984:
    // 0x2bc984: 0x1fbd93c  .word       0x01FBD93C                   # dsll32      $k1, $k1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc984u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 27) << (32 + 4));
label_2bc988:
    // 0x2bc988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bc988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bc98c:
    // 0x2bc98c: 0x1fce13c  .word       0x01FCE13C                   # dsll32      $gp, $gp, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc98cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 28) << (32 + 4));
label_2bc990:
    // 0x2bc990: 0x3efc801  .word       0x03EFC801                   # INVALID     $ra, $t7, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc990u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BC990 raw=0x03EFC801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc994:
    // 0x2bc994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc998:
    // 0x2bc998: 0x3efd805  .word       0x03EFD805                   # INVALID     $ra, $t7, -0x27FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc998u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BC998 raw=0x03EFD805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc99c:
    // 0x2bc99c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc99cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9a0:
    // 0x2bc9a0: 0x3efe009  .word       0x03EFE009                   # jalr        $gp, $ra # 000F0000 <InstrIdType: CPU_SPECIAL>
label_2bc9a4:
    if (ctx->pc == 0x2BC9A4u) {
        ctx->pc = 0x2BC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9A0u;
        // 0x2bc9a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BC9A8u;
        goto label_2bc9a8;
    }
    ctx->pc = 0x2BC9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 28, 0x2BC9A8u);
        ctx->pc = 0x2BC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC9A0u;
        // 0x2bc9a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC9A0u, 0x2BC9A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BC9A8u;
label_2bc9a8:
    // 0x2bc9a8: 0x1d62ffd  .word       0x01D62FFD                   # INVALID     $t6, $s6, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC9A8 raw=0x01D62FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc9ac:
    // 0x2bc9ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9b0:
    // 0x2bc9b0: 0x1d72ffe  .word       0x01D72FFE                   # dsrl32      $a1, $s7, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 31));
label_2bc9b4:
    // 0x2bc9b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9b8:
    // 0x2bc9b8: 0x1d82fff  .word       0x01D82FFF                   # dsra32      $a1, $t8, 31 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 24) >> (32 + 31));
label_2bc9bc:
    // 0x2bc9bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9c0:
    // 0x2bc9c0: 0x19937fd  .word       0x019937FD                   # INVALID     $t4, $t9, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BC9C0 raw=0x019937FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bc9c4:
    // 0x2bc9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9c8:
    // 0x2bc9c8: 0x19b37fe  .word       0x019B37FE                   # dsrl32      $a2, $k1, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 27) >> (32 + 31));
label_2bc9cc:
    // 0x2bc9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9d0:
    // 0x2bc9d0: 0x19c37ff  .word       0x019C37FF                   # dsra32      $a2, $gp, 31 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9d0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 28) >> (32 + 31));
label_2bc9d4:
    // 0x2bc9d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9d8:
    // 0x2bc9d8: 0x3efb002  .word       0x03EFB002                   # srl         $s6, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_2bc9dc:
    // 0x2bc9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9e0:
    // 0x2bc9e0: 0x3efb806  srlv        $s7, $t7, $ra
    ctx->pc = 0x2bc9e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bc9e4:
    // 0x2bc9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9e8:
    // 0x2bc9e8: 0x3efc00a  movz        $t8, $ra, $t7
    ctx->pc = 0x2bc9e8u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2bc9ec:
    // 0x2bc9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9f0:
    // 0x2bc9f0: 0x3efc803  .word       0x03EFC803                   # sra         $t9, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bc9f0u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 15), 0));
label_2bc9f4:
    // 0x2bc9f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bc9f8:
    // 0x2bc9f8: 0x3efd807  srav        $k1, $t7, $ra
    ctx->pc = 0x2bc9f8u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bc9fc:
    // 0x2bc9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bc9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca00:
    // 0x2bca00: 0x3efe00b  movn        $gp, $ra, $t7
    ctx->pc = 0x2bca00u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 31));
label_2bca04:
    // 0x2bca04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca08:
    // 0x2bca08: 0x3ef8000  .word       0x03EF8000                   # sll         $s0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bca08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_2bca0c:
    // 0x2bca0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca10:
    // 0x2bca10: 0x3ef8804  sllv        $s1, $t7, $ra
    ctx->pc = 0x2bca10u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_2bca14:
    // 0x2bca14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca18:
    // 0x2bca18: 0x3ef9008  .word       0x03EF9008                   # jr          $ra # 000F9000 <InstrIdType: CPU_SPECIAL>
label_2bca1c:
    if (ctx->pc == 0x2BCA1Cu) {
        ctx->pc = 0x2BCA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA18u;
        // 0x2bca1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA20u;
        goto label_2bca20;
    }
    ctx->pc = 0x2BCA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA18u;
        // 0x2bca1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCA20u;
label_2bca20:
    // 0x2bca20: 0x100e700c  beq         $zero, $t6, . + 4 + (0x700C << 2)
label_2bca24:
    if (ctx->pc == 0x2BCA24u) {
        ctx->pc = 0x2BCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA20u;
        // 0x2bca24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA28u;
        goto label_2bca28;
    }
    ctx->pc = 0x2BCA20u;
    {
        const bool branch_taken_0x2bca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA20u;
        // 0x2bca24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca20) {
            ctx->pc = 0x2D8A54u;
            return;
        }
    }
    ctx->pc = 0x2BCA28u;
label_2bca28:
    // 0x2bca28: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bca28u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bca2c:
    // 0x2bca2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca30:
    // 0x2bca30: 0xa8e080a  j           func_A382028
label_2bca34:
    if (ctx->pc == 0x2BCA34u) {
        ctx->pc = 0x2BCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA30u;
        // 0x2bca34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA38u;
        goto label_2bca38;
    }
    ctx->pc = 0x2BCA30u;
    ctx->pc = 0x2BCA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA30u;
    // 0x2bca34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA382028u, 0x2BCA30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCA38u;
label_2bca38:
    // 0x2bca38: 0x40000002  .word       0x40000002                   # mfc0        $zero, Index # 00000002 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bca38u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bca3c:
    // 0x2bca3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca40:
    // 0x2bca40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bca40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bca44:
    // 0x2bca44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca48:
    // 0x2bca48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bca48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bca4c:
    // 0x2bca4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca50:
    // 0x2bca50: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2bca54:
    if (ctx->pc == 0x2BCA54u) {
        ctx->pc = 0x2BCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA50u;
        // 0x2bca54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA58u;
        goto label_2bca58;
    }
    ctx->pc = 0x2BCA50u;
    {
        const bool branch_taken_0x2bca50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA50u;
        // 0x2bca54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca50) {
            ctx->pc = 0x2C2A50u;
            return;
        }
    }
    ctx->pc = 0x2BCA58u;
label_2bca58:
    // 0x2bca58: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2bca58u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2bca5c:
    // 0x2bca5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca60:
    // 0x2bca60: 0xa213fff  j           func_884FFFC
label_2bca64:
    if (ctx->pc == 0x2BCA64u) {
        ctx->pc = 0x2BCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA60u;
        // 0x2bca64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA68u;
        goto label_2bca68;
    }
    ctx->pc = 0x2BCA60u;
    ctx->pc = 0x2BCA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA60u;
    // 0x2bca64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2BCA60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCA68u;
label_2bca68:
    // 0x2bca68: 0xa2147ff  j           func_8851FFC
label_2bca6c:
    if (ctx->pc == 0x2BCA6Cu) {
        ctx->pc = 0x2BCA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA68u;
        // 0x2bca6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA70u;
        goto label_2bca70;
    }
    ctx->pc = 0x2BCA68u;
    ctx->pc = 0x2BCA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA68u;
    // 0x2bca6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8851FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8851FFCu, 0x2BCA68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCA70u;
label_2bca70:
    // 0x2bca70: 0x400007aa  .word       0x400007AA                   # mfc0        $zero, Index # 000007AA <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bca70u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bca74:
    // 0x2bca74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca78:
    // 0x2bca78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bca78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bca7c:
    // 0x2bca7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bca7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bca80:
    // 0x2bca80: 0x0  nop
    ctx->pc = 0x2bca80u;
    // NOP
label_2bca84:
    // 0x2bca84: 0x4a000000  vaddx       $vf0, $vf0, $vf0x
    ctx->pc = 0x2bca84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_2bca88:
    // 0x2bca88: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bca88u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bca8c:
    // 0x2bca8c: 0x3e0298  .word       0x003E0298                   # mult        $zero, $at, $fp # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bca8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2bca90:
    // 0x2bca90: 0x848080a  j           func_1202028
label_2bca94:
    if (ctx->pc == 0x2BCA94u) {
        ctx->pc = 0x2BCA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA90u;
        // 0x2bca94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCA98u;
        goto label_2bca98;
    }
    ctx->pc = 0x2BCA90u;
    ctx->pc = 0x2BCA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA90u;
    // 0x2bca94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1202028u, 0x2BCA90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCA98u;
label_2bca98:
    // 0x2bca98: 0x100708ca  beq         $zero, $a3, . + 4 + (0x8CA << 2)
label_2bca9c:
    if (ctx->pc == 0x2BCA9Cu) {
        ctx->pc = 0x2BCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA98u;
        // 0x2bca9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCAA0u;
        goto label_2bcaa0;
    }
    ctx->pc = 0x2BCA98u;
    {
        const bool branch_taken_0x2bca98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA98u;
        // 0x2bca9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca98) {
            ctx->pc = 0x2BEDC4u;
            { ctx->pc = 0x2bedc4; return; }
        }
    }
    ctx->pc = 0x2BCAA0u;
label_2bcaa0:
    // 0x2bcaa0: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bcaa0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcaa4:
    // 0x2bcaa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcaa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcaa8:
    // 0x2bcaa8: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2bcaa8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcaac:
    // 0x2bcaac: 0x1ea517c  .word       0x01EA517C                   # dsll32      $t2, $t2, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcaacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 5));
label_2bcab0:
    // 0x2bcab0: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2bcab0u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcab4:
    // 0x2bcab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcab8:
    // 0x2bcab8: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bcab8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcabc:
    // 0x2bcabc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcabcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcac0:
    // 0x2bcac0: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2bcac0u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcac4:
    // 0x2bcac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcac8:
    // 0x2bcac8: 0x80083a30  lb          $t0, 0x3A30($zero)
    ctx->pc = 0x2bcac8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x3A30u));
label_2bcacc:
    // 0x2bcacc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcaccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcad0:
    // 0x2bcad0: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2bcad0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bcad4:
    // 0x2bcad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcad8:
    // 0x2bcad8: 0x81e7ab7d  lb          $a3, -0x5483($t7)
    ctx->pc = 0x2bcad8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bcadc:
    // 0x2bcadc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcadcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcae0:
    // 0x2bcae0: 0x81e7b37d  lb          $a3, -0x4C83($t7)
    ctx->pc = 0x2bcae0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bcae4:
    // 0x2bcae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcae8:
    // 0x2bcae8: 0x81e7bb7d  lb          $a3, -0x4483($t7)
    ctx->pc = 0x2bcae8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bcaec:
    // 0x2bcaec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcaecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcaf0:
    // 0x2bcaf0: 0x81e7c37d  lb          $a3, -0x3C83($t7)
    ctx->pc = 0x2bcaf0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bcaf4:
    // 0x2bcaf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcaf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcaf8:
    // 0x2bcaf8: 0x81f40b7c  lb          $s4, 0xB7C($t7)
    ctx->pc = 0x2bcaf8u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcafc:
    // 0x2bcafc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcafcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb00:
    // 0x2bcb00: 0x81f50b7c  lb          $s5, 0xB7C($t7)
    ctx->pc = 0x2bcb00u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcb04:
    // 0x2bcb04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb08:
    // 0x2bcb08: 0x81f60b7c  lb          $s6, 0xB7C($t7)
    ctx->pc = 0x2bcb08u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcb0c:
    // 0x2bcb0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb10:
    // 0x2bcb10: 0x81f70b7c  lb          $s7, 0xB7C($t7)
    ctx->pc = 0x2bcb10u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcb14:
    // 0x2bcb14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb18:
    // 0x2bcb18: 0x81f80b7c  lb          $t8, 0xB7C($t7)
    ctx->pc = 0x2bcb18u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_2bcb1c:
    // 0x2bcb1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb20:
    // 0x2bcb20: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2bcb20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bcb24:
    // 0x2bcb24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb28:
    // 0x2bcb28: 0x81e8ab7d  lb          $t0, -0x5483($t7)
    ctx->pc = 0x2bcb28u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bcb2c:
    // 0x2bcb2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb30:
    // 0x2bcb30: 0x81e8b37d  lb          $t0, -0x4C83($t7)
    ctx->pc = 0x2bcb30u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bcb34:
    // 0x2bcb34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb38:
    // 0x2bcb38: 0x81e8bb7d  lb          $t0, -0x4483($t7)
    ctx->pc = 0x2bcb38u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bcb3c:
    // 0x2bcb3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb40:
    // 0x2bcb40: 0x81e8c37d  lb          $t0, -0x3C83($t7)
    ctx->pc = 0x2bcb40u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bcb44:
    // 0x2bcb44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb48:
    // 0x2bcb48: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2bcb4c:
    if (ctx->pc == 0x2BCB4Cu) {
        ctx->pc = 0x2BCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB48u;
        // 0x2bcb4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB50u;
        goto label_2bcb50;
    }
    ctx->pc = 0x2BCB48u;
    {
        const bool branch_taken_0x2bcb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BCB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB48u;
        // 0x2bcb4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb48) {
            ctx->pc = 0x2BEB50u;
            { ctx->pc = 0x2beb50; return; }
        }
    }
    ctx->pc = 0x2BCB50u;
label_2bcb50:
    // 0x2bcb50: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bcb50u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bcb54:
    // 0x2bcb54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb58:
    // 0x2bcb58: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2bcb5c:
    if (ctx->pc == 0x2BCB5Cu) {
        ctx->pc = 0x2BCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB58u;
        // 0x2bcb5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB60u;
        goto label_2bcb60;
    }
    ctx->pc = 0x2BCB58u;
    {
        const bool branch_taken_0x2bcb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB58u;
        // 0x2bcb5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb58) {
            ctx->pc = 0x2BCB5Cu;
            goto label_2bcb5c;
        }
    }
    ctx->pc = 0x2BCB60u;
label_2bcb60:
    // 0x2bcb60: 0xa8e100a  j           func_A384028
label_2bcb64:
    if (ctx->pc == 0x2BCB64u) {
        ctx->pc = 0x2BCB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB60u;
        // 0x2bcb64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB68u;
        goto label_2bcb68;
    }
    ctx->pc = 0x2BCB60u;
    ctx->pc = 0x2BCB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB60u;
    // 0x2bcb64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA384028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA384028u, 0x2BCB60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCB68u;
label_2bcb68:
    // 0x2bcb68: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bcb6c:
    if (ctx->pc == 0x2BCB6Cu) {
        ctx->pc = 0x2BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB68u;
        // 0x2bcb6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB70u;
        goto label_2bcb70;
    }
    ctx->pc = 0x2BCB68u;
    {
        const bool branch_taken_0x2bcb68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB68u;
        // 0x2bcb6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb68) {
            ctx->pc = 0x2BEB68u;
            { ctx->pc = 0x2beb68; return; }
        }
    }
    ctx->pc = 0x2BCB70u;
label_2bcb70:
    // 0x2bcb70: 0x100b5805  beq         $zero, $t3, . + 4 + (0x5805 << 2)
label_2bcb74:
    if (ctx->pc == 0x2BCB74u) {
        ctx->pc = 0x2BCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB70u;
        // 0x2bcb74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB78u;
        goto label_2bcb78;
    }
    ctx->pc = 0x2BCB70u;
    {
        const bool branch_taken_0x2bcb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB70u;
        // 0x2bcb74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb70) {
            ctx->pc = 0x2D2B88u;
            return;
        }
    }
    ctx->pc = 0x2BCB78u;
label_2bcb78:
    // 0x2bcb78: 0xb0b1000  j           func_C2C4000
label_2bcb7c:
    if (ctx->pc == 0x2BCB7Cu) {
        ctx->pc = 0x2BCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB78u;
        // 0x2bcb7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB80u;
        goto label_2bcb80;
    }
    ctx->pc = 0x2BCB78u;
    ctx->pc = 0x2BCB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB78u;
    // 0x2bcb7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BCB78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCB80u;
label_2bcb80:
    // 0x2bcb80: 0xb0b1005  j           func_C2C4014
label_2bcb84:
    if (ctx->pc == 0x2BCB84u) {
        ctx->pc = 0x2BCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB80u;
        // 0x2bcb84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB88u;
        goto label_2bcb88;
    }
    ctx->pc = 0x2BCB80u;
    ctx->pc = 0x2BCB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB80u;
    // 0x2bcb84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4014u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4014u, 0x2BCB80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCB88u;
label_2bcb88:
    // 0x2bcb88: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcb88u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BCB88 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bcb8c:
    // 0x2bcb8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcb8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcb90:
    // 0x2bcb90: 0x100200a6  beq         $zero, $v0, . + 4 + (0xA6 << 2)
label_2bcb94:
    if (ctx->pc == 0x2BCB94u) {
        ctx->pc = 0x2BCB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB90u;
        // 0x2bcb94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCB98u;
        goto label_2bcb98;
    }
    ctx->pc = 0x2BCB90u;
    {
        const bool branch_taken_0x2bcb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB90u;
        // 0x2bcb94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb90) {
            ctx->pc = 0x2BCE2Cu;
            goto label_2bce2c;
        }
    }
    ctx->pc = 0x2BCB98u;
label_2bcb98:
    // 0x2bcb98: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bcb9c:
    if (ctx->pc == 0x2BCB9Cu) {
        ctx->pc = 0x2BCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB98u;
        // 0x2bcb9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBA0u;
        goto label_2bcba0;
    }
    ctx->pc = 0x2BCB98u;
    {
        const bool branch_taken_0x2bcb98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB98u;
        // 0x2bcb9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb98) {
            ctx->pc = 0x2BEB98u;
            { ctx->pc = 0x2beb98; return; }
        }
    }
    ctx->pc = 0x2BCBA0u;
label_2bcba0:
    // 0x2bcba0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bcba4:
    if (ctx->pc == 0x2BCBA4u) {
        ctx->pc = 0x2BCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBA0u;
        // 0x2bcba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBA8u;
        goto label_2bcba8;
    }
    ctx->pc = 0x2BCBA0u;
    {
        const bool branch_taken_0x2bcba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBA0u;
        // 0x2bcba4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcba0) {
            ctx->pc = 0x2D2BA8u;
            return;
        }
    }
    ctx->pc = 0x2BCBA8u;
label_2bcba8:
    // 0x2bcba8: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcba8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bcbac:
    // 0x2bcbac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcbacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcbb0:
    // 0x2bcbb0: 0xb0b1000  j           func_C2C4000
label_2bcbb4:
    if (ctx->pc == 0x2BCBB4u) {
        ctx->pc = 0x2BCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBB0u;
        // 0x2bcbb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBB8u;
        goto label_2bcbb8;
    }
    ctx->pc = 0x2BCBB0u;
    ctx->pc = 0x2BCBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBB0u;
    // 0x2bcbb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BCBB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCBB8u;
label_2bcbb8:
    // 0x2bcbb8: 0x90c3000  j           func_430C000
label_2bcbbc:
    if (ctx->pc == 0x2BCBBCu) {
        ctx->pc = 0x2BCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBB8u;
        // 0x2bcbbc: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBC0u;
        goto label_2bcbc0;
    }
    ctx->pc = 0x2BCBB8u;
    ctx->pc = 0x2BCBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBB8u;
    // 0x2bcbbc: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C000u, 0x2BCBB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCBC0u;
label_2bcbc0:
    // 0x2bcbc0: 0x82e3000  j           func_B8C000
label_2bcbc4:
    if (ctx->pc == 0x2BCBC4u) {
        ctx->pc = 0x2BCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBC0u;
        // 0x2bcbc4: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBC8u;
        goto label_2bcbc8;
    }
    ctx->pc = 0x2BCBC0u;
    ctx->pc = 0x2BCBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBC0u;
    // 0x2bcbc4: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8C000u, 0x2BCBC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCBC8u;
label_2bcbc8:
    // 0x2bcbc8: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bcbcc:
    if (ctx->pc == 0x2BCBCCu) {
        ctx->pc = 0x2BCBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBC8u;
        // 0x2bcbcc: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBD0u;
        goto label_2bcbd0;
    }
    ctx->pc = 0x2BCBC8u;
    {
        const bool branch_taken_0x2bcbc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBC8u;
        // 0x2bcbcc: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbc8) {
            ctx->pc = 0x2BEBC8u;
            { ctx->pc = 0x2bebc8; return; }
        }
    }
    ctx->pc = 0x2BCBD0u;
label_2bcbd0:
    // 0x2bcbd0: 0x10033001  beq         $zero, $v1, . + 4 + (0x3001 << 2)
label_2bcbd4:
    if (ctx->pc == 0x2BCBD4u) {
        ctx->pc = 0x2BCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBD0u;
        // 0x2bcbd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBD8u;
        goto label_2bcbd8;
    }
    ctx->pc = 0x2BCBD0u;
    {
        const bool branch_taken_0x2bcbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBD0u;
        // 0x2bcbd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbd0) {
            ctx->pc = 0x2C8BD8u;
            return;
        }
    }
    ctx->pc = 0x2BCBD8u;
label_2bcbd8:
    // 0x2bcbd8: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2bcbdc:
    if (ctx->pc == 0x2BCBDCu) {
        ctx->pc = 0x2BCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBD8u;
        // 0x2bcbdc: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBE0u;
        goto label_2bcbe0;
    }
    ctx->pc = 0x2BCBD8u;
    {
        const bool branch_taken_0x2bcbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BCBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBD8u;
        // 0x2bcbdc: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbd8) {
            ctx->pc = 0x2BCBE4u;
            goto label_2bcbe4;
        }
    }
    ctx->pc = 0x2BCBE0u;
label_2bcbe0:
    // 0x2bcbe0: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2bcbe0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2bcbe4:
    // 0x2bcbe4: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bcbe4u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2bcbe8:
    // 0x2bcbe8: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2bcbe8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2bcbec:
    // 0x2bcbec: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bcbecu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2bcbf0:
    // 0x2bcbf0: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2bcbf4:
    if (ctx->pc == 0x2BCBF4u) {
        ctx->pc = 0x2BCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBF0u;
        // 0x2bcbf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCBF8u;
        goto label_2bcbf8;
    }
    ctx->pc = 0x2BCBF0u;
    {
        const bool branch_taken_0x2bcbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bcbf0) {
            ctx->pc = 0x2BCBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCBF0u;
            // 0x2bcbf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCBFCu;
            goto label_2bcbfc;
        }
    }
    ctx->pc = 0x2BCBF8u;
label_2bcbf8:
    // 0x2bcbf8: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2bcbf8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2bcbfc:
    // 0x2bcbfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcbfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc00:
    // 0x2bcc00: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2bcc04:
    if (ctx->pc == 0x2BCC04u) {
        ctx->pc = 0x2BCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC00u;
        // 0x2bcc04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCC08u;
        goto label_2bcc08;
    }
    ctx->pc = 0x2BCC00u;
    {
        const bool branch_taken_0x2bcc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC00u;
        // 0x2bcc04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcc00) {
            ctx->pc = 0x2BCC10u;
            goto label_2bcc10;
        }
    }
    ctx->pc = 0x2BCC08u;
label_2bcc08:
    // 0x2bcc08: 0x800c1930  lb          $t4, 0x1930($zero)
    ctx->pc = 0x2bcc08u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1930u));
label_2bcc0c:
    // 0x2bcc0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc10:
    // 0x2bcc10: 0x800c2170  lb          $t4, 0x2170($zero)
    ctx->pc = 0x2bcc10u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x2170u));
label_2bcc14:
    // 0x2bcc14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc18:
    // 0x2bcc18: 0x1f43000  .word       0x01F43000                   # sll         $a2, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcc18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2bcc1c:
    // 0x2bcc1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc20:
    // 0x2bcc20: 0x800c29b0  lb          $t4, 0x29B0($zero)
    ctx->pc = 0x2bcc20u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x29B0u));
label_2bcc24:
    // 0x2bcc24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc28:
    // 0x2bcc28: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2bcc28u;
    // NOP (addi to $zero)
label_2bcc2c:
    // 0x2bcc2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc30:
    // 0x2bcc30: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2bcc30u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2bcc34:
    // 0x2bcc34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc38:
    // 0x2bcc38: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2bcc38u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bcc3c:
    // 0x2bcc3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc40:
    // 0x2bcc40: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bcc40u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bcc44:
    // 0x2bcc44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc48:
    // 0x2bcc48: 0xa48080a  j           func_9202028
label_2bcc4c:
    if (ctx->pc == 0x2BCC4Cu) {
        ctx->pc = 0x2BCC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCC48u;
        // 0x2bcc4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCC50u;
        goto label_2bcc50;
    }
    ctx->pc = 0x2BCC48u;
    ctx->pc = 0x2BCC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC48u;
    // 0x2bcc4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9202028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9202028u, 0x2BCC48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCC50u;
label_2bcc50:
    // 0x2bcc50: 0x81e8a37d  lb          $t0, -0x5C83($t7)
    ctx->pc = 0x2bcc50u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bcc54:
    // 0x2bcc54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc58:
    // 0x2bcc58: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2bcc58u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2bcc5c:
    // 0x2bcc5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc60:
    // 0x2bcc60: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2bcc60u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2bcc64:
    // 0x2bcc64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc68:
    // 0x2bcc68: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2bcc68u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2bcc6c:
    // 0x2bcc6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc70:
    // 0x2bcc70: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2bcc70u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2bcc74:
    // 0x2bcc74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc78:
    // 0x2bcc78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcc78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcc7c:
    // 0x2bcc7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc80:
    // 0x2bcc80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcc80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcc84:
    // 0x2bcc84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc88:
    // 0x2bcc88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcc88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcc8c:
    // 0x2bcc8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcc8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcc90:
    // 0x2bcc90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcc90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcc94:
    // 0x2bcc94: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcc94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2bcc98:
    // 0x2bcc98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcc98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcc9c:
    // 0x2bcc9c: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcc9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BCC9C raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bcca0:
    // 0x2bcca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcca4:
    // 0x2bcca4: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2bcca8:
    // 0x2bcca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccac:
    // 0x2bccac: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bccacu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2bccb0:
    // 0x2bccb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccb4:
    // 0x2bccb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccb8:
    // 0x2bccb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccbc:
    // 0x2bccbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccc0:
    // 0x2bccc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccc4:
    // 0x2bccc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccc8:
    // 0x2bccc8: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2bccc8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2bcccc:
    // 0x2bcccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccd0:
    // 0x2bccd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccd4:
    // 0x2bccd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccd8:
    // 0x2bccd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccdc:
    // 0x2bccdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcce0:
    // 0x2bcce0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcce0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcce4:
    // 0x2bcce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcce8:
    // 0x2bcce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccec:
    // 0x2bccec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccf0:
    // 0x2bccf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccf4:
    // 0x2bccf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bccf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bccf8:
    // 0x2bccf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bccf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bccfc:
    // 0x2bccfc: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bccfcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2bcd00:
    // 0x2bcd00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd04:
    // 0x2bcd04: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcd04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2bcd08:
    // 0x2bcd08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd0c:
    // 0x2bcd0c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcd0cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BCD0C raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bcd10:
    // 0x2bcd10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd14:
    // 0x2bcd14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd18:
    // 0x2bcd18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd1c:
    // 0x2bcd1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd20:
    // 0x2bcd20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd24:
    // 0x2bcd24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd28:
    // 0x2bcd28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd2c:
    // 0x2bcd2c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcd2cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BCD2C raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bcd30:
    // 0x2bcd30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd34:
    // 0x2bcd34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd38:
    // 0x2bcd38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd3c:
    // 0x2bcd3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd40:
    // 0x2bcd40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd44:
    // 0x2bcd44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd48:
    // 0x2bcd48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd4c:
    // 0x2bcd4c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcd4cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2bcd50:
    // 0x2bcd50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd54:
    // 0x2bcd54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd58:
    // 0x2bcd58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd5c:
    // 0x2bcd5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd60:
    // 0x2bcd60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd64:
    // 0x2bcd64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd68:
    // 0x2bcd68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd6c:
    // 0x2bcd6c: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcd6cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BCD6C raw=0x01FAF97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bcd70:
    // 0x2bcd70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd74:
    // 0x2bcd74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd78:
    // 0x2bcd78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd7c:
    // 0x2bcd7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd80:
    // 0x2bcd80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcd80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcd84:
    // 0x2bcd84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd88:
    // 0x2bcd88: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcd88u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2bcd8c:
    // 0x2bcd8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd90:
    // 0x2bcd90: 0x3e8d002  .word       0x03E8D002                   # srl         $k0, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcd90u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2bcd94:
    // 0x2bcd94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcd98:
    // 0x2bcd98: 0x81f5237c  lb          $s5, 0x237C($t7)
    ctx->pc = 0x2bcd98u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2bcd9c:
    // 0x2bcd9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcd9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcda0:
    // 0x2bcda0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcda0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcda4:
    // 0x2bcda4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcda4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcda8:
    // 0x2bcda8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcda8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcdac:
    // 0x2bcdac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcdacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcdb0:
    // 0x2bcdb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcdb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcdb4:
    // 0x2bcdb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcdb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcdb8:
    // 0x2bcdb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcdb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcdbc:
    // 0x2bcdbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcdbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcdc0:
    // 0x2bcdc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcdc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcdc4:
    // 0x2bcdc4: 0x1cbad6a  .word       0x01CBAD6A                   # slt         $s5, $t6, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcdc4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_2bcdc8:
    // 0x2bcdc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcdc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcdcc:
    // 0x2bcdcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcdccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcdd0:
    // 0x2bcdd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcdd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcdd4:
    // 0x2bcdd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcdd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcdd8:
    // 0x2bcdd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcdd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcddc:
    // 0x2bcddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcde0:
    // 0x2bcde0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcde0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcde4:
    // 0x2bcde4: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcde4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BCDE4 raw=0x01E0AD5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bcde8:
    // 0x2bcde8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcde8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcdec:
    // 0x2bcdec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcdecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcdf0:
    // 0x2bcdf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcdf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcdf4:
    // 0x2bcdf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcdf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcdf8:
    // 0x2bcdf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcdf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcdfc:
    // 0x2bcdfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcdfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce00:
    // 0x2bce00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bce00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bce04:
    // 0x2bce04: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bce04u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2bce08:
    // 0x2bce08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bce08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bce0c:
    // 0x2bce0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce10:
    // 0x2bce10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bce10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bce14:
    // 0x2bce14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce18:
    // 0x2bce18: 0x2275001  .word       0x02275001                   # INVALID     $s1, $a3, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bce18u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BCE18 raw=0x02275001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bce1c:
    // 0x2bce1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce20:
    // 0x2bce20: 0x3c7a801  .word       0x03C7A801                   # INVALID     $fp, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bce20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BCE20 raw=0x03C7A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bce24:
    // 0x2bce24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce28:
    // 0x2bce28: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bce28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BCE28 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bce2c:
    // 0x2bce2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce30:
    // 0x2bce30: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2bce30u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2bce34:
    // 0x2bce34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce38:
    // 0x2bce38: 0x8056033d  lb          $s6, 0x33D($v0)
    ctx->pc = 0x2bce38u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2bce3c:
    // 0x2bce3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce40:
    // 0x2bce40: 0x81942b7c  lb          $s4, 0x2B7C($t4)
    ctx->pc = 0x2bce40u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 11132)));
label_2bce44:
    // 0x2bce44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce48:
    // 0x2bce48: 0x8196337c  lb          $s6, 0x337C($t4)
    ctx->pc = 0x2bce48u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2bce4c:
    // 0x2bce4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce50:
    // 0x2bce50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bce50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bce54:
    // 0x2bce54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce58:
    // 0x2bce58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bce58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bce5c:
    // 0x2bce5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce60:
    // 0x2bce60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bce60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bce64:
    // 0x2bce64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce68:
    // 0x2bce68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bce68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bce6c:
    // 0x2bce6c: 0x1c0a51c  .word       0x01C0A51C                   # dmult       $t6, $zero # 0000A500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bce6cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BCE6C raw=0x01C0A51C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bce70:
    // 0x2bce70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bce70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bce74:
    // 0x2bce74: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bce74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BCE74 raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bce78:
    // 0x2bce78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bce78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bce7c:
    // 0x2bce7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce80:
    // 0x2bce80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bce80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bce84:
    // 0x2bce84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce88:
    // 0x2bce88: 0x3e7a000  .word       0x03E7A000                   # sll         $s4, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bce88u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2bce8c:
    // 0x2bce8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce90:
    // 0x2bce90: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bce90u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2bce94:
    // 0x2bce94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bce94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bce98:
    // 0x2bce98: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2bce98u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2bce9c:
    // 0x2bce9c: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bce9cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2bcea0:
    // 0x2bcea0: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2bcea0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2bcea4:
    // 0x2bcea4: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcea4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BCEA4 raw=0x01F368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bcea8:
    // 0x2bcea8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcea8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bceac:
    // 0x2bceac: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bceacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2bceb0:
    // 0x2bceb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bceb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bceb4:
    // 0x2bceb4: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bceb4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2bceb8:
    // 0x2bceb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bceb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcebc:
    // 0x2bcebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcec0:
    // 0x2bcec0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcec0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcec4:
    // 0x2bcec4: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bcec4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2bcec8:
    // 0x2bcec8: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2bcec8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2bcecc:
    // 0x2bcecc: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bceccu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bced0:
    // 0x2bced0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bced0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bced4:
    // 0x2bced4: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bced4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2bced8:
    // 0x2bced8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bced8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcedc:
    // 0x2bcedc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcedcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcee0:
    // 0x2bcee0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcee0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcee4:
    // 0x2bcee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcee8:
    // 0x2bcee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bceec:
    // 0x2bceec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bceecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcef0:
    // 0x2bcef0: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2bcef0u;
    // NOP (addiu $zero, ...)
label_2bcef4:
    // 0x2bcef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcef8:
    // 0x2bcef8: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2bcef8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2bcefc:
    // 0x2bcefc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcefcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcf00:
    // 0x2bcf00: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2bcf00u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2bcf04:
    // 0x2bcf04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcf04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcf08:
    // 0x2bcf08: 0x10084003  beq         $zero, $t0, . + 4 + (0x4003 << 2)
label_2bcf0c:
    if (ctx->pc == 0x2BCF0Cu) {
        ctx->pc = 0x2BCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF08u;
        // 0x2bcf0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF10u;
        goto label_2bcf10;
    }
    ctx->pc = 0x2BCF08u;
    {
        const bool branch_taken_0x2bcf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF08u;
        // 0x2bcf0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf08) {
            ctx->pc = 0x2CCF18u;
            return;
        }
    }
    ctx->pc = 0x2BCF10u;
label_2bcf10:
    // 0x2bcf10: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2bcf14:
    if (ctx->pc == 0x2BCF14u) {
        ctx->pc = 0x2BCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF10u;
        // 0x2bcf14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF18u;
        goto label_2bcf18;
    }
    ctx->pc = 0x2BCF10u;
    {
        const bool branch_taken_0x2bcf10 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bcf10) {
            ctx->pc = 0x2BCF14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCF10u;
            // 0x2bcf14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6F2Cu;
            return;
        }
    }
    ctx->pc = 0x2BCF18u;
label_2bcf18:
    // 0x2bcf18: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2bcf1c:
    if (ctx->pc == 0x2BCF1Cu) {
        ctx->pc = 0x2BCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF18u;
        // 0x2bcf1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF20u;
        goto label_2bcf20;
    }
    ctx->pc = 0x2BCF18u;
    {
        const bool branch_taken_0x2bcf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF18u;
        // 0x2bcf1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf18) {
            ctx->pc = 0x2CAF28u;
            return;
        }
    }
    ctx->pc = 0x2BCF20u;
label_2bcf20:
    // 0x2bcf20: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2bcf20u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2bcf24:
    // 0x2bcf24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcf24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcf28:
    // 0x2bcf28: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2bcf28u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2bcf2c:
    // 0x2bcf2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcf2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcf30:
    // 0x2bcf30: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2bcf30u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2bcf34:
    // 0x2bcf34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcf34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcf38:
    // 0x2bcf38: 0x5a00481c  blezl       $s0, . + 4 + (0x481C << 2)
label_2bcf3c:
    if (ctx->pc == 0x2BCF3Cu) {
        ctx->pc = 0x2BCF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF38u;
        // 0x2bcf3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF40u;
        goto label_2bcf40;
    }
    ctx->pc = 0x2BCF38u;
    {
        const bool branch_taken_0x2bcf38 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bcf38) {
            ctx->pc = 0x2BCF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCF38u;
            // 0x2bcf3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEFACu;
            return;
        }
    }
    ctx->pc = 0x2BCF40u;
label_2bcf40:
    // 0x2bcf40: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2bcf40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2bcf44:
    // 0x2bcf44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcf44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcf48:
    // 0x2bcf48: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2bcf48u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2bcf4c:
    // 0x2bcf4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcf4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcf50:
    // 0x2bcf50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcf50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcf54:
    // 0x2bcf54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcf54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcf58:
    // 0x2bcf58: 0x520c07a2  beql        $s0, $t4, . + 4 + (0x7A2 << 2)
label_2bcf5c:
    if (ctx->pc == 0x2BCF5Cu) {
        ctx->pc = 0x2BCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF58u;
        // 0x2bcf5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF60u;
        goto label_2bcf60;
    }
    ctx->pc = 0x2BCF58u;
    {
        const bool branch_taken_0x2bcf58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bcf58) {
            ctx->pc = 0x2BCF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCF58u;
            // 0x2bcf5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEDE4u;
            { ctx->pc = 0x2bede4; return; }
        }
    }
    ctx->pc = 0x2BCF60u;
label_2bcf60:
    // 0x2bcf60: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bcf60u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bcf64:
    // 0x2bcf64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcf64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcf68:
    // 0x2bcf68: 0x904100a  j           func_4104028
label_2bcf6c:
    if (ctx->pc == 0x2BCF6Cu) {
        ctx->pc = 0x2BCF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF68u;
        // 0x2bcf6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF70u;
        goto label_2bcf70;
    }
    ctx->pc = 0x2BCF68u;
    ctx->pc = 0x2BCF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF68u;
    // 0x2bcf6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4104028u, 0x2BCF68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCF70u;
label_2bcf70:
    // 0x2bcf70: 0x841100a  j           func_1044028
label_2bcf74:
    if (ctx->pc == 0x2BCF74u) {
        ctx->pc = 0x2BCF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF70u;
        // 0x2bcf74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF78u;
        goto label_2bcf78;
    }
    ctx->pc = 0x2BCF70u;
    ctx->pc = 0x2BCF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF70u;
    // 0x2bcf74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044028u, 0x2BCF70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCF78u;
label_2bcf78:
    // 0x2bcf78: 0x88e100a  j           func_2384028
label_2bcf7c:
    if (ctx->pc == 0x2BCF7Cu) {
        ctx->pc = 0x2BCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF78u;
        // 0x2bcf7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF80u;
        goto label_2bcf80;
    }
    ctx->pc = 0x2BCF78u;
    ctx->pc = 0x2BCF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF78u;
    // 0x2bcf7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2384028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2384028u, 0x2BCF78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCF80u;
label_2bcf80:
    // 0x2bcf80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcf80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcf84:
    // 0x2bcf84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcf84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcf88:
    // 0x2bcf88: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2bcf8c:
    if (ctx->pc == 0x2BCF8Cu) {
        ctx->pc = 0x2BCF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF88u;
        // 0x2bcf8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF90u;
        goto label_2bcf90;
    }
    ctx->pc = 0x2BCF88u;
    {
        const bool branch_taken_0x2bcf88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BCF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF88u;
        // 0x2bcf8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcf88) {
            ctx->pc = 0x2C4F90u;
            return;
        }
    }
    ctx->pc = 0x2BCF90u;
label_2bcf90:
    // 0x2bcf90: 0xb04100a  j           func_C104028
label_2bcf94:
    if (ctx->pc == 0x2BCF94u) {
        ctx->pc = 0x2BCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF90u;
        // 0x2bcf94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCF98u;
        goto label_2bcf98;
    }
    ctx->pc = 0x2BCF90u;
    ctx->pc = 0x2BCF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF90u;
    // 0x2bcf94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC104028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC104028u, 0x2BCF90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCF98u;
label_2bcf98:
    // 0x2bcf98: 0x5a002783  blezl       $s0, . + 4 + (0x2783 << 2)
label_2bcf9c:
    if (ctx->pc == 0x2BCF9Cu) {
        ctx->pc = 0x2BCF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCF98u;
        // 0x2bcf9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCFA0u;
        goto label_2bcfa0;
    }
    ctx->pc = 0x2BCF98u;
    {
        const bool branch_taken_0x2bcf98 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bcf98) {
            ctx->pc = 0x2BCF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCF98u;
            // 0x2bcf9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6DA8u;
            return;
        }
    }
    ctx->pc = 0x2BCFA0u;
label_2bcfa0:
    // 0x2bcfa0: 0x9030800  j           func_40C2000
label_2bcfa4:
    if (ctx->pc == 0x2BCFA4u) {
        ctx->pc = 0x2BCFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFA0u;
        // 0x2bcfa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCFA8u;
        goto label_2bcfa8;
    }
    ctx->pc = 0x2BCFA0u;
    ctx->pc = 0x2BCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFA0u;
    // 0x2bcfa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C2000u, 0x2BCFA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCFA8u;
label_2bcfa8:
    // 0x2bcfa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcfa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcfac:
    // 0x2bcfac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcfacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcfb0:
    // 0x2bcfb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcfb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcfb4:
    // 0x2bcfb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcfb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcfb8:
    // 0x2bcfb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcfb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcfbc:
    // 0x2bcfbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcfbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcfc0:
    // 0x2bcfc0: 0x11eb1fff  beq         $t7, $t3, . + 4 + (0x1FFF << 2)
label_2bcfc4:
    if (ctx->pc == 0x2BCFC4u) {
        ctx->pc = 0x2BCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFC0u;
        // 0x2bcfc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCFC8u;
        goto label_2bcfc8;
    }
    ctx->pc = 0x2BCFC0u;
    {
        const bool branch_taken_0x2bcfc0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFC0u;
        // 0x2bcfc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcfc0) {
            ctx->pc = 0x2C4FC0u;
            return;
        }
    }
    ctx->pc = 0x2BCFC8u;
label_2bcfc8:
    // 0x2bcfc8: 0x800b5872  lb          $t3, 0x5872($zero)
    ctx->pc = 0x2bcfc8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5872u));
label_2bcfcc:
    // 0x2bcfcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcfccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcfd0:
    // 0x2bcfd0: 0xb0b0800  j           func_C2C2000
label_2bcfd4:
    if (ctx->pc == 0x2BCFD4u) {
        ctx->pc = 0x2BCFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFD0u;
        // 0x2bcfd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCFD8u;
        goto label_2bcfd8;
    }
    ctx->pc = 0x2BCFD0u;
    ctx->pc = 0x2BCFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCFD0u;
    // 0x2bcfd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C2000u, 0x2BCFD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BCFD8u;
label_2bcfd8:
    // 0x2bcfd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcfd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcfdc:
    // 0x2bcfdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcfdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcfe0:
    // 0x2bcfe0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcfe0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcfe4:
    // 0x2bcfe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcfe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcfe8:
    // 0x2bcfe8: 0x500e0002  beql        $zero, $t6, . + 4 + (0x2 << 2)
label_2bcfec:
    if (ctx->pc == 0x2BCFECu) {
        ctx->pc = 0x2BCFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCFE8u;
        // 0x2bcfec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BCFF0u;
        goto label_2bcff0;
    }
    ctx->pc = 0x2BCFE8u;
    {
        const bool branch_taken_0x2bcfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2bcfe8) {
            ctx->pc = 0x2BCFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BCFE8u;
            // 0x2bcfec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BCFF4u;
            goto label_2bcff4;
        }
    }
    ctx->pc = 0x2BCFF0u;
label_2bcff0:
    // 0x2bcff0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bcff0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bcff4:
    // 0x2bcff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bcff8:
    // 0x2bcff8: 0x400001ed  .word       0x400001ED                   # mfc0        $zero, Index # 000001ED <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bcff8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bcffc:
    // 0x2bcffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bcffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd000:
    // 0x2bd000: 0x100210ca  beq         $zero, $v0, . + 4 + (0x10CA << 2)
label_2bd004:
    if (ctx->pc == 0x2BD004u) {
        ctx->pc = 0x2BD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD000u;
        // 0x2bd004: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD008u;
        goto label_2bd008;
    }
    ctx->pc = 0x2BD000u;
    {
        const bool branch_taken_0x2bd000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD000u;
        // 0x2bd004: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd000) {
            ctx->pc = 0x2C132Cu;
            return;
        }
    }
    ctx->pc = 0x2BD008u;
label_2bd008:
    // 0x2bd008: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bd008u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bd00c:
    // 0x2bd00c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd00cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd010:
    // 0x2bd010: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd014:
    // 0x2bd014: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bd014u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bd018:
    // 0x2bd018: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd018u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd01c:
    // 0x2bd01c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd01cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd020:
    // 0x2bd020: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2bd020u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2bd024:
    // 0x2bd024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd028:
    // 0x2bd028: 0x88e080a  j           func_2382028
label_2bd02c:
    if (ctx->pc == 0x2BD02Cu) {
        ctx->pc = 0x2BD02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD028u;
        // 0x2bd02c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD030u;
        goto label_2bd030;
    }
    ctx->pc = 0x2BD028u;
    ctx->pc = 0x2BD02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD028u;
    // 0x2bd02c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2382028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2382028u, 0x2BD028u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BD030u;
label_2bd030:
    // 0x2bd030: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2bd030u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2bd034:
    // 0x2bd034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd038:
    // 0x2bd038: 0x52010038  beql        $s0, $at, . + 4 + (0x38 << 2)
label_2bd03c:
    if (ctx->pc == 0x2BD03Cu) {
        ctx->pc = 0x2BD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD038u;
        // 0x2bd03c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD040u;
        goto label_2bd040;
    }
    ctx->pc = 0x2BD038u;
    {
        const bool branch_taken_0x2bd038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bd038) {
            ctx->pc = 0x2BD03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD038u;
            // 0x2bd03c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD11Cu;
            { ctx->pc = 0x2bd11c; return; }
        }
    }
    ctx->pc = 0x2BD040u;
label_2bd040:
    // 0x2bd040: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd040u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd044:
    // 0x2bd044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd048:
    // 0x2bd048: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2bd048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2bd04c:
    // 0x2bd04c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd04cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd050:
    // 0x2bd050: 0x52010035  beql        $s0, $at, . + 4 + (0x35 << 2)
label_2bd054:
    if (ctx->pc == 0x2BD054u) {
        ctx->pc = 0x2BD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD050u;
        // 0x2bd054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD058u;
        goto label_2bd058;
    }
    ctx->pc = 0x2BD050u;
    {
        const bool branch_taken_0x2bd050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bd050) {
            ctx->pc = 0x2BD054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD050u;
            // 0x2bd054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD128u;
            { ctx->pc = 0x2bd128; return; }
        }
    }
    ctx->pc = 0x2BD058u;
label_2bd058:
    // 0x2bd058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd05c:
    // 0x2bd05c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd05cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd060:
    // 0x2bd060: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2bd060u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2bd064:
    // 0x2bd064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd068:
    // 0x2bd068: 0x52010032  beql        $s0, $at, . + 4 + (0x32 << 2)
label_2bd06c:
    if (ctx->pc == 0x2BD06Cu) {
        ctx->pc = 0x2BD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD068u;
        // 0x2bd06c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD070u;
        goto label_2bd070;
    }
    ctx->pc = 0x2BD068u;
    {
        const bool branch_taken_0x2bd068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bd068) {
            ctx->pc = 0x2BD06Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD068u;
            // 0x2bd06c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD134u;
            { ctx->pc = 0x2bd134; return; }
        }
    }
    ctx->pc = 0x2BD070u;
label_2bd070:
    // 0x2bd070: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd070u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd074:
    // 0x2bd074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd078:
    // 0x2bd078: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2bd078u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2bd07c:
    // 0x2bd07c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd07cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd080:
    // 0x2bd080: 0x5201002f  beql        $s0, $at, . + 4 + (0x2F << 2)
label_2bd084:
    if (ctx->pc == 0x2BD084u) {
        ctx->pc = 0x2BD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD080u;
        // 0x2bd084: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD088u;
        goto label_2bd088;
    }
    ctx->pc = 0x2BD080u;
    {
        const bool branch_taken_0x2bd080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bd080) {
            ctx->pc = 0x2BD084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD080u;
            // 0x2bd084: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD140u;
            { ctx->pc = 0x2bd140; return; }
        }
    }
    ctx->pc = 0x2BD088u;
label_2bd088:
    // 0x2bd088: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd088u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd08c:
    // 0x2bd08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd090:
    // 0x2bd090: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2bd090u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2bd094:
    // 0x2bd094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd098:
    // 0x2bd098: 0x5201002c  beql        $s0, $at, . + 4 + (0x2C << 2)
label_2bd09c:
    if (ctx->pc == 0x2BD09Cu) {
        ctx->pc = 0x2BD09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD098u;
        // 0x2bd09c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0A0u;
        goto label_2bd0a0;
    }
    ctx->pc = 0x2BD098u;
    {
        const bool branch_taken_0x2bd098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bd098) {
            ctx->pc = 0x2BD09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD098u;
            // 0x2bd09c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD14Cu;
            { ctx->pc = 0x2bd14c; return; }
        }
    }
    ctx->pc = 0x2BD0A0u;
label_2bd0a0:
    // 0x2bd0a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd0a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd0a4:
    // 0x2bd0a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd0a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd0a8:
    // 0x2bd0a8: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2bd0a8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2bd0ac:
    // 0x2bd0ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd0acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd0b0:
    // 0x2bd0b0: 0x52010029  beql        $s0, $at, . + 4 + (0x29 << 2)
label_2bd0b4:
    if (ctx->pc == 0x2BD0B4u) {
        ctx->pc = 0x2BD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0B0u;
        // 0x2bd0b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD0B8u;
        goto label_2bd0b8;
    }
    ctx->pc = 0x2BD0B0u;
    {
        const bool branch_taken_0x2bd0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2bd0b0) {
            ctx->pc = 0x2BD0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD0B0u;
            // 0x2bd0b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD158u;
            { ctx->pc = 0x2bd158; return; }
        }
    }
    ctx->pc = 0x2BD0B8u;
label_2bd0b8:
    // 0x2bd0b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd0b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd0bc:
    // 0x2bd0bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd0bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2bd0c0u;
    return;
}

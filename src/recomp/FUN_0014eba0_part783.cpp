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


void FUN_0014eba0_part783(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2cc900u: goto label_2cc900;
        case 0x2cc904u: goto label_2cc904;
        case 0x2cc908u: goto label_2cc908;
        case 0x2cc90cu: goto label_2cc90c;
        case 0x2cc910u: goto label_2cc910;
        case 0x2cc914u: goto label_2cc914;
        case 0x2cc918u: goto label_2cc918;
        case 0x2cc91cu: goto label_2cc91c;
        case 0x2cc920u: goto label_2cc920;
        case 0x2cc924u: goto label_2cc924;
        case 0x2cc928u: goto label_2cc928;
        case 0x2cc92cu: goto label_2cc92c;
        case 0x2cc930u: goto label_2cc930;
        case 0x2cc934u: goto label_2cc934;
        case 0x2cc938u: goto label_2cc938;
        case 0x2cc93cu: goto label_2cc93c;
        case 0x2cc940u: goto label_2cc940;
        case 0x2cc944u: goto label_2cc944;
        case 0x2cc948u: goto label_2cc948;
        case 0x2cc94cu: goto label_2cc94c;
        case 0x2cc950u: goto label_2cc950;
        case 0x2cc954u: goto label_2cc954;
        case 0x2cc958u: goto label_2cc958;
        case 0x2cc95cu: goto label_2cc95c;
        case 0x2cc960u: goto label_2cc960;
        case 0x2cc964u: goto label_2cc964;
        case 0x2cc968u: goto label_2cc968;
        case 0x2cc96cu: goto label_2cc96c;
        case 0x2cc970u: goto label_2cc970;
        case 0x2cc974u: goto label_2cc974;
        case 0x2cc978u: goto label_2cc978;
        case 0x2cc97cu: goto label_2cc97c;
        case 0x2cc980u: goto label_2cc980;
        case 0x2cc984u: goto label_2cc984;
        case 0x2cc988u: goto label_2cc988;
        case 0x2cc98cu: goto label_2cc98c;
        case 0x2cc990u: goto label_2cc990;
        case 0x2cc994u: goto label_2cc994;
        case 0x2cc998u: goto label_2cc998;
        case 0x2cc99cu: goto label_2cc99c;
        case 0x2cc9a0u: goto label_2cc9a0;
        case 0x2cc9a4u: goto label_2cc9a4;
        case 0x2cc9a8u: goto label_2cc9a8;
        case 0x2cc9acu: goto label_2cc9ac;
        case 0x2cc9b0u: goto label_2cc9b0;
        case 0x2cc9b4u: goto label_2cc9b4;
        case 0x2cc9b8u: goto label_2cc9b8;
        case 0x2cc9bcu: goto label_2cc9bc;
        case 0x2cc9c0u: goto label_2cc9c0;
        case 0x2cc9c4u: goto label_2cc9c4;
        case 0x2cc9c8u: goto label_2cc9c8;
        case 0x2cc9ccu: goto label_2cc9cc;
        case 0x2cc9d0u: goto label_2cc9d0;
        case 0x2cc9d4u: goto label_2cc9d4;
        case 0x2cc9d8u: goto label_2cc9d8;
        case 0x2cc9dcu: goto label_2cc9dc;
        case 0x2cc9e0u: goto label_2cc9e0;
        case 0x2cc9e4u: goto label_2cc9e4;
        case 0x2cc9e8u: goto label_2cc9e8;
        case 0x2cc9ecu: goto label_2cc9ec;
        case 0x2cc9f0u: goto label_2cc9f0;
        case 0x2cc9f4u: goto label_2cc9f4;
        case 0x2cc9f8u: goto label_2cc9f8;
        case 0x2cc9fcu: goto label_2cc9fc;
        case 0x2cca00u: goto label_2cca00;
        case 0x2cca04u: goto label_2cca04;
        case 0x2cca08u: goto label_2cca08;
        case 0x2cca0cu: goto label_2cca0c;
        case 0x2cca10u: goto label_2cca10;
        case 0x2cca14u: goto label_2cca14;
        case 0x2cca18u: goto label_2cca18;
        case 0x2cca1cu: goto label_2cca1c;
        case 0x2cca20u: goto label_2cca20;
        case 0x2cca24u: goto label_2cca24;
        case 0x2cca28u: goto label_2cca28;
        case 0x2cca2cu: goto label_2cca2c;
        case 0x2cca30u: goto label_2cca30;
        case 0x2cca34u: goto label_2cca34;
        case 0x2cca38u: goto label_2cca38;
        case 0x2cca3cu: goto label_2cca3c;
        case 0x2cca40u: goto label_2cca40;
        case 0x2cca44u: goto label_2cca44;
        case 0x2cca48u: goto label_2cca48;
        case 0x2cca4cu: goto label_2cca4c;
        case 0x2cca50u: goto label_2cca50;
        case 0x2cca54u: goto label_2cca54;
        case 0x2cca58u: goto label_2cca58;
        case 0x2cca5cu: goto label_2cca5c;
        case 0x2cca60u: goto label_2cca60;
        case 0x2cca64u: goto label_2cca64;
        case 0x2cca68u: goto label_2cca68;
        case 0x2cca6cu: goto label_2cca6c;
        case 0x2cca70u: goto label_2cca70;
        case 0x2cca74u: goto label_2cca74;
        case 0x2cca78u: goto label_2cca78;
        case 0x2cca7cu: goto label_2cca7c;
        case 0x2cca80u: goto label_2cca80;
        case 0x2cca84u: goto label_2cca84;
        case 0x2cca88u: goto label_2cca88;
        case 0x2cca8cu: goto label_2cca8c;
        case 0x2cca90u: goto label_2cca90;
        case 0x2cca94u: goto label_2cca94;
        case 0x2cca98u: goto label_2cca98;
        case 0x2cca9cu: goto label_2cca9c;
        case 0x2ccaa0u: goto label_2ccaa0;
        case 0x2ccaa4u: goto label_2ccaa4;
        case 0x2ccaa8u: goto label_2ccaa8;
        case 0x2ccaacu: goto label_2ccaac;
        case 0x2ccab0u: goto label_2ccab0;
        case 0x2ccab4u: goto label_2ccab4;
        case 0x2ccab8u: goto label_2ccab8;
        case 0x2ccabcu: goto label_2ccabc;
        case 0x2ccac0u: goto label_2ccac0;
        case 0x2ccac4u: goto label_2ccac4;
        case 0x2ccac8u: goto label_2ccac8;
        case 0x2ccaccu: goto label_2ccacc;
        case 0x2ccad0u: goto label_2ccad0;
        case 0x2ccad4u: goto label_2ccad4;
        case 0x2ccad8u: goto label_2ccad8;
        case 0x2ccadcu: goto label_2ccadc;
        case 0x2ccae0u: goto label_2ccae0;
        case 0x2ccae4u: goto label_2ccae4;
        case 0x2ccae8u: goto label_2ccae8;
        case 0x2ccaecu: goto label_2ccaec;
        case 0x2ccaf0u: goto label_2ccaf0;
        case 0x2ccaf4u: goto label_2ccaf4;
        case 0x2ccaf8u: goto label_2ccaf8;
        case 0x2ccafcu: goto label_2ccafc;
        case 0x2ccb00u: goto label_2ccb00;
        case 0x2ccb04u: goto label_2ccb04;
        case 0x2ccb08u: goto label_2ccb08;
        case 0x2ccb0cu: goto label_2ccb0c;
        case 0x2ccb10u: goto label_2ccb10;
        case 0x2ccb14u: goto label_2ccb14;
        case 0x2ccb18u: goto label_2ccb18;
        case 0x2ccb1cu: goto label_2ccb1c;
        case 0x2ccb20u: goto label_2ccb20;
        case 0x2ccb24u: goto label_2ccb24;
        case 0x2ccb28u: goto label_2ccb28;
        case 0x2ccb2cu: goto label_2ccb2c;
        case 0x2ccb30u: goto label_2ccb30;
        case 0x2ccb34u: goto label_2ccb34;
        case 0x2ccb38u: goto label_2ccb38;
        case 0x2ccb3cu: goto label_2ccb3c;
        case 0x2ccb40u: goto label_2ccb40;
        case 0x2ccb44u: goto label_2ccb44;
        case 0x2ccb48u: goto label_2ccb48;
        case 0x2ccb4cu: goto label_2ccb4c;
        case 0x2ccb50u: goto label_2ccb50;
        case 0x2ccb54u: goto label_2ccb54;
        case 0x2ccb58u: goto label_2ccb58;
        case 0x2ccb5cu: goto label_2ccb5c;
        case 0x2ccb60u: goto label_2ccb60;
        case 0x2ccb64u: goto label_2ccb64;
        case 0x2ccb68u: goto label_2ccb68;
        case 0x2ccb6cu: goto label_2ccb6c;
        case 0x2ccb70u: goto label_2ccb70;
        case 0x2ccb74u: goto label_2ccb74;
        case 0x2ccb78u: goto label_2ccb78;
        case 0x2ccb7cu: goto label_2ccb7c;
        case 0x2ccb80u: goto label_2ccb80;
        case 0x2ccb84u: goto label_2ccb84;
        case 0x2ccb88u: goto label_2ccb88;
        case 0x2ccb8cu: goto label_2ccb8c;
        case 0x2ccb90u: goto label_2ccb90;
        case 0x2ccb94u: goto label_2ccb94;
        case 0x2ccb98u: goto label_2ccb98;
        case 0x2ccb9cu: goto label_2ccb9c;
        case 0x2ccba0u: goto label_2ccba0;
        case 0x2ccba4u: goto label_2ccba4;
        case 0x2ccba8u: goto label_2ccba8;
        case 0x2ccbacu: goto label_2ccbac;
        case 0x2ccbb0u: goto label_2ccbb0;
        case 0x2ccbb4u: goto label_2ccbb4;
        case 0x2ccbb8u: goto label_2ccbb8;
        case 0x2ccbbcu: goto label_2ccbbc;
        case 0x2ccbc0u: goto label_2ccbc0;
        case 0x2ccbc4u: goto label_2ccbc4;
        case 0x2ccbc8u: goto label_2ccbc8;
        case 0x2ccbccu: goto label_2ccbcc;
        case 0x2ccbd0u: goto label_2ccbd0;
        case 0x2ccbd4u: goto label_2ccbd4;
        case 0x2ccbd8u: goto label_2ccbd8;
        case 0x2ccbdcu: goto label_2ccbdc;
        case 0x2ccbe0u: goto label_2ccbe0;
        case 0x2ccbe4u: goto label_2ccbe4;
        case 0x2ccbe8u: goto label_2ccbe8;
        case 0x2ccbecu: goto label_2ccbec;
        case 0x2ccbf0u: goto label_2ccbf0;
        case 0x2ccbf4u: goto label_2ccbf4;
        case 0x2ccbf8u: goto label_2ccbf8;
        case 0x2ccbfcu: goto label_2ccbfc;
        case 0x2ccc00u: goto label_2ccc00;
        case 0x2ccc04u: goto label_2ccc04;
        case 0x2ccc08u: goto label_2ccc08;
        case 0x2ccc0cu: goto label_2ccc0c;
        case 0x2ccc10u: goto label_2ccc10;
        case 0x2ccc14u: goto label_2ccc14;
        case 0x2ccc18u: goto label_2ccc18;
        case 0x2ccc1cu: goto label_2ccc1c;
        case 0x2ccc20u: goto label_2ccc20;
        case 0x2ccc24u: goto label_2ccc24;
        case 0x2ccc28u: goto label_2ccc28;
        case 0x2ccc2cu: goto label_2ccc2c;
        case 0x2ccc30u: goto label_2ccc30;
        case 0x2ccc34u: goto label_2ccc34;
        case 0x2ccc38u: goto label_2ccc38;
        case 0x2ccc3cu: goto label_2ccc3c;
        case 0x2ccc40u: goto label_2ccc40;
        case 0x2ccc44u: goto label_2ccc44;
        case 0x2ccc48u: goto label_2ccc48;
        case 0x2ccc4cu: goto label_2ccc4c;
        case 0x2ccc50u: goto label_2ccc50;
        case 0x2ccc54u: goto label_2ccc54;
        case 0x2ccc58u: goto label_2ccc58;
        case 0x2ccc5cu: goto label_2ccc5c;
        case 0x2ccc60u: goto label_2ccc60;
        case 0x2ccc64u: goto label_2ccc64;
        case 0x2ccc68u: goto label_2ccc68;
        case 0x2ccc6cu: goto label_2ccc6c;
        case 0x2ccc70u: goto label_2ccc70;
        case 0x2ccc74u: goto label_2ccc74;
        case 0x2ccc78u: goto label_2ccc78;
        case 0x2ccc7cu: goto label_2ccc7c;
        case 0x2ccc80u: goto label_2ccc80;
        case 0x2ccc84u: goto label_2ccc84;
        case 0x2ccc88u: goto label_2ccc88;
        case 0x2ccc8cu: goto label_2ccc8c;
        case 0x2ccc90u: goto label_2ccc90;
        case 0x2ccc94u: goto label_2ccc94;
        case 0x2ccc98u: goto label_2ccc98;
        case 0x2ccc9cu: goto label_2ccc9c;
        case 0x2ccca0u: goto label_2ccca0;
        case 0x2ccca4u: goto label_2ccca4;
        case 0x2ccca8u: goto label_2ccca8;
        case 0x2cccacu: goto label_2cccac;
        case 0x2cccb0u: goto label_2cccb0;
        case 0x2cccb4u: goto label_2cccb4;
        case 0x2cccb8u: goto label_2cccb8;
        case 0x2cccbcu: goto label_2cccbc;
        case 0x2cccc0u: goto label_2cccc0;
        case 0x2cccc4u: goto label_2cccc4;
        case 0x2cccc8u: goto label_2cccc8;
        case 0x2cccccu: goto label_2ccccc;
        case 0x2cccd0u: goto label_2cccd0;
        case 0x2cccd4u: goto label_2cccd4;
        case 0x2cccd8u: goto label_2cccd8;
        case 0x2cccdcu: goto label_2cccdc;
        case 0x2ccce0u: goto label_2ccce0;
        case 0x2ccce4u: goto label_2ccce4;
        case 0x2ccce8u: goto label_2ccce8;
        case 0x2cccecu: goto label_2cccec;
        case 0x2cccf0u: goto label_2cccf0;
        case 0x2cccf4u: goto label_2cccf4;
        case 0x2cccf8u: goto label_2cccf8;
        case 0x2cccfcu: goto label_2cccfc;
        case 0x2ccd00u: goto label_2ccd00;
        case 0x2ccd04u: goto label_2ccd04;
        case 0x2ccd08u: goto label_2ccd08;
        case 0x2ccd0cu: goto label_2ccd0c;
        case 0x2ccd10u: goto label_2ccd10;
        case 0x2ccd14u: goto label_2ccd14;
        case 0x2ccd18u: goto label_2ccd18;
        case 0x2ccd1cu: goto label_2ccd1c;
        case 0x2ccd20u: goto label_2ccd20;
        case 0x2ccd24u: goto label_2ccd24;
        case 0x2ccd28u: goto label_2ccd28;
        case 0x2ccd2cu: goto label_2ccd2c;
        case 0x2ccd30u: goto label_2ccd30;
        case 0x2ccd34u: goto label_2ccd34;
        case 0x2ccd38u: goto label_2ccd38;
        case 0x2ccd3cu: goto label_2ccd3c;
        case 0x2ccd40u: goto label_2ccd40;
        case 0x2ccd44u: goto label_2ccd44;
        case 0x2ccd48u: goto label_2ccd48;
        case 0x2ccd4cu: goto label_2ccd4c;
        case 0x2ccd50u: goto label_2ccd50;
        case 0x2ccd54u: goto label_2ccd54;
        case 0x2ccd58u: goto label_2ccd58;
        case 0x2ccd5cu: goto label_2ccd5c;
        case 0x2ccd60u: goto label_2ccd60;
        case 0x2ccd64u: goto label_2ccd64;
        case 0x2ccd68u: goto label_2ccd68;
        case 0x2ccd6cu: goto label_2ccd6c;
        case 0x2ccd70u: goto label_2ccd70;
        case 0x2ccd74u: goto label_2ccd74;
        case 0x2ccd78u: goto label_2ccd78;
        case 0x2ccd7cu: goto label_2ccd7c;
        case 0x2ccd80u: goto label_2ccd80;
        case 0x2ccd84u: goto label_2ccd84;
        case 0x2ccd88u: goto label_2ccd88;
        case 0x2ccd8cu: goto label_2ccd8c;
        case 0x2ccd90u: goto label_2ccd90;
        case 0x2ccd94u: goto label_2ccd94;
        case 0x2ccd98u: goto label_2ccd98;
        case 0x2ccd9cu: goto label_2ccd9c;
        case 0x2ccda0u: goto label_2ccda0;
        case 0x2ccda4u: goto label_2ccda4;
        case 0x2ccda8u: goto label_2ccda8;
        case 0x2ccdacu: goto label_2ccdac;
        case 0x2ccdb0u: goto label_2ccdb0;
        case 0x2ccdb4u: goto label_2ccdb4;
        case 0x2ccdb8u: goto label_2ccdb8;
        case 0x2ccdbcu: goto label_2ccdbc;
        case 0x2ccdc0u: goto label_2ccdc0;
        case 0x2ccdc4u: goto label_2ccdc4;
        case 0x2ccdc8u: goto label_2ccdc8;
        case 0x2ccdccu: goto label_2ccdcc;
        case 0x2ccdd0u: goto label_2ccdd0;
        case 0x2ccdd4u: goto label_2ccdd4;
        case 0x2ccdd8u: goto label_2ccdd8;
        case 0x2ccddcu: goto label_2ccddc;
        case 0x2ccde0u: goto label_2ccde0;
        case 0x2ccde4u: goto label_2ccde4;
        case 0x2ccde8u: goto label_2ccde8;
        case 0x2ccdecu: goto label_2ccdec;
        case 0x2ccdf0u: goto label_2ccdf0;
        case 0x2ccdf4u: goto label_2ccdf4;
        case 0x2ccdf8u: goto label_2ccdf8;
        case 0x2ccdfcu: goto label_2ccdfc;
        case 0x2cce00u: goto label_2cce00;
        case 0x2cce04u: goto label_2cce04;
        case 0x2cce08u: goto label_2cce08;
        case 0x2cce0cu: goto label_2cce0c;
        case 0x2cce10u: goto label_2cce10;
        case 0x2cce14u: goto label_2cce14;
        case 0x2cce18u: goto label_2cce18;
        case 0x2cce1cu: goto label_2cce1c;
        case 0x2cce20u: goto label_2cce20;
        case 0x2cce24u: goto label_2cce24;
        case 0x2cce28u: goto label_2cce28;
        case 0x2cce2cu: goto label_2cce2c;
        case 0x2cce30u: goto label_2cce30;
        case 0x2cce34u: goto label_2cce34;
        case 0x2cce38u: goto label_2cce38;
        case 0x2cce3cu: goto label_2cce3c;
        case 0x2cce40u: goto label_2cce40;
        case 0x2cce44u: goto label_2cce44;
        case 0x2cce48u: goto label_2cce48;
        case 0x2cce4cu: goto label_2cce4c;
        case 0x2cce50u: goto label_2cce50;
        case 0x2cce54u: goto label_2cce54;
        case 0x2cce58u: goto label_2cce58;
        case 0x2cce5cu: goto label_2cce5c;
        case 0x2cce60u: goto label_2cce60;
        case 0x2cce64u: goto label_2cce64;
        case 0x2cce68u: goto label_2cce68;
        case 0x2cce6cu: goto label_2cce6c;
        case 0x2cce70u: goto label_2cce70;
        case 0x2cce74u: goto label_2cce74;
        case 0x2cce78u: goto label_2cce78;
        case 0x2cce7cu: goto label_2cce7c;
        case 0x2cce80u: goto label_2cce80;
        case 0x2cce84u: goto label_2cce84;
        case 0x2cce88u: goto label_2cce88;
        case 0x2cce8cu: goto label_2cce8c;
        case 0x2cce90u: goto label_2cce90;
        case 0x2cce94u: goto label_2cce94;
        case 0x2cce98u: goto label_2cce98;
        case 0x2cce9cu: goto label_2cce9c;
        case 0x2ccea0u: goto label_2ccea0;
        case 0x2ccea4u: goto label_2ccea4;
        case 0x2ccea8u: goto label_2ccea8;
        case 0x2cceacu: goto label_2cceac;
        case 0x2cceb0u: goto label_2cceb0;
        case 0x2cceb4u: goto label_2cceb4;
        case 0x2cceb8u: goto label_2cceb8;
        case 0x2ccebcu: goto label_2ccebc;
        case 0x2ccec0u: goto label_2ccec0;
        case 0x2ccec4u: goto label_2ccec4;
        case 0x2ccec8u: goto label_2ccec8;
        case 0x2cceccu: goto label_2ccecc;
        case 0x2cced0u: goto label_2cced0;
        case 0x2cced4u: goto label_2cced4;
        case 0x2cced8u: goto label_2cced8;
        case 0x2ccedcu: goto label_2ccedc;
        case 0x2ccee0u: goto label_2ccee0;
        case 0x2ccee4u: goto label_2ccee4;
        case 0x2ccee8u: goto label_2ccee8;
        case 0x2cceecu: goto label_2cceec;
        case 0x2ccef0u: goto label_2ccef0;
        case 0x2ccef4u: goto label_2ccef4;
        case 0x2ccef8u: goto label_2ccef8;
        case 0x2ccefcu: goto label_2ccefc;
        case 0x2ccf00u: goto label_2ccf00;
        case 0x2ccf04u: goto label_2ccf04;
        case 0x2ccf08u: goto label_2ccf08;
        case 0x2ccf0cu: goto label_2ccf0c;
        case 0x2ccf10u: goto label_2ccf10;
        case 0x2ccf14u: goto label_2ccf14;
        case 0x2ccf18u: goto label_2ccf18;
        case 0x2ccf1cu: goto label_2ccf1c;
        case 0x2ccf20u: goto label_2ccf20;
        case 0x2ccf24u: goto label_2ccf24;
        case 0x2ccf28u: goto label_2ccf28;
        case 0x2ccf2cu: goto label_2ccf2c;
        case 0x2ccf30u: goto label_2ccf30;
        case 0x2ccf34u: goto label_2ccf34;
        case 0x2ccf38u: goto label_2ccf38;
        case 0x2ccf3cu: goto label_2ccf3c;
        case 0x2ccf40u: goto label_2ccf40;
        case 0x2ccf44u: goto label_2ccf44;
        case 0x2ccf48u: goto label_2ccf48;
        case 0x2ccf4cu: goto label_2ccf4c;
        case 0x2ccf50u: goto label_2ccf50;
        case 0x2ccf54u: goto label_2ccf54;
        case 0x2ccf58u: goto label_2ccf58;
        case 0x2ccf5cu: goto label_2ccf5c;
        case 0x2ccf60u: goto label_2ccf60;
        case 0x2ccf64u: goto label_2ccf64;
        case 0x2ccf68u: goto label_2ccf68;
        case 0x2ccf6cu: goto label_2ccf6c;
        case 0x2ccf70u: goto label_2ccf70;
        case 0x2ccf74u: goto label_2ccf74;
        case 0x2ccf78u: goto label_2ccf78;
        case 0x2ccf7cu: goto label_2ccf7c;
        case 0x2ccf80u: goto label_2ccf80;
        case 0x2ccf84u: goto label_2ccf84;
        case 0x2ccf88u: goto label_2ccf88;
        case 0x2ccf8cu: goto label_2ccf8c;
        case 0x2ccf90u: goto label_2ccf90;
        case 0x2ccf94u: goto label_2ccf94;
        case 0x2ccf98u: goto label_2ccf98;
        case 0x2ccf9cu: goto label_2ccf9c;
        case 0x2ccfa0u: goto label_2ccfa0;
        case 0x2ccfa4u: goto label_2ccfa4;
        case 0x2ccfa8u: goto label_2ccfa8;
        case 0x2ccfacu: goto label_2ccfac;
        case 0x2ccfb0u: goto label_2ccfb0;
        case 0x2ccfb4u: goto label_2ccfb4;
        case 0x2ccfb8u: goto label_2ccfb8;
        case 0x2ccfbcu: goto label_2ccfbc;
        case 0x2ccfc0u: goto label_2ccfc0;
        case 0x2ccfc4u: goto label_2ccfc4;
        case 0x2ccfc8u: goto label_2ccfc8;
        case 0x2ccfccu: goto label_2ccfcc;
        case 0x2ccfd0u: goto label_2ccfd0;
        case 0x2ccfd4u: goto label_2ccfd4;
        case 0x2ccfd8u: goto label_2ccfd8;
        case 0x2ccfdcu: goto label_2ccfdc;
        case 0x2ccfe0u: goto label_2ccfe0;
        case 0x2ccfe4u: goto label_2ccfe4;
        case 0x2ccfe8u: goto label_2ccfe8;
        case 0x2ccfecu: goto label_2ccfec;
        case 0x2ccff0u: goto label_2ccff0;
        case 0x2ccff4u: goto label_2ccff4;
        case 0x2ccff8u: goto label_2ccff8;
        case 0x2ccffcu: goto label_2ccffc;
        case 0x2cd000u: goto label_2cd000;
        case 0x2cd004u: goto label_2cd004;
        case 0x2cd008u: goto label_2cd008;
        case 0x2cd00cu: goto label_2cd00c;
        case 0x2cd010u: goto label_2cd010;
        case 0x2cd014u: goto label_2cd014;
        case 0x2cd018u: goto label_2cd018;
        case 0x2cd01cu: goto label_2cd01c;
        case 0x2cd020u: goto label_2cd020;
        case 0x2cd024u: goto label_2cd024;
        case 0x2cd028u: goto label_2cd028;
        case 0x2cd02cu: goto label_2cd02c;
        case 0x2cd030u: goto label_2cd030;
        case 0x2cd034u: goto label_2cd034;
        case 0x2cd038u: goto label_2cd038;
        case 0x2cd03cu: goto label_2cd03c;
        case 0x2cd040u: goto label_2cd040;
        case 0x2cd044u: goto label_2cd044;
        case 0x2cd048u: goto label_2cd048;
        case 0x2cd04cu: goto label_2cd04c;
        case 0x2cd050u: goto label_2cd050;
        case 0x2cd054u: goto label_2cd054;
        case 0x2cd058u: goto label_2cd058;
        case 0x2cd05cu: goto label_2cd05c;
        case 0x2cd060u: goto label_2cd060;
        case 0x2cd064u: goto label_2cd064;
        case 0x2cd068u: goto label_2cd068;
        case 0x2cd06cu: goto label_2cd06c;
        case 0x2cd070u: goto label_2cd070;
        case 0x2cd074u: goto label_2cd074;
        case 0x2cd078u: goto label_2cd078;
        case 0x2cd07cu: goto label_2cd07c;
        case 0x2cd080u: goto label_2cd080;
        case 0x2cd084u: goto label_2cd084;
        case 0x2cd088u: goto label_2cd088;
        case 0x2cd08cu: goto label_2cd08c;
        case 0x2cd090u: goto label_2cd090;
        case 0x2cd094u: goto label_2cd094;
        case 0x2cd098u: goto label_2cd098;
        case 0x2cd09cu: goto label_2cd09c;
        case 0x2cd0a0u: goto label_2cd0a0;
        case 0x2cd0a4u: goto label_2cd0a4;
        case 0x2cd0a8u: goto label_2cd0a8;
        case 0x2cd0acu: goto label_2cd0ac;
        case 0x2cd0b0u: goto label_2cd0b0;
        case 0x2cd0b4u: goto label_2cd0b4;
        case 0x2cd0b8u: goto label_2cd0b8;
        case 0x2cd0bcu: goto label_2cd0bc;
        case 0x2cd0c0u: goto label_2cd0c0;
        case 0x2cd0c4u: goto label_2cd0c4;
        case 0x2cd0c8u: goto label_2cd0c8;
        case 0x2cd0ccu: goto label_2cd0cc;
        default: return;
    }

label_2cc900:
    // 0x2cc900: 0x49334d1b  .word       0x49334D1B                   # INVALID     $t1, $s3, 0x4D1B # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2cc900u;
//     throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2CC900 raw=0x49334D1B");
 /* MITIGATED */
label_2cc904:
    // 0x2cc904: 0x736d6574  .word       0x736D6574                   # psllh       $t4, $t5, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc904u;
    SET_GPR_VEC(ctx, 12, _mm_slli_epi16(GPR_VEC(ctx, 13), 21));
label_2cc908:
    // 0x2cc908: 0x314d1b20  andi        $t5, $t2, 0x1B20
    ctx->pc = 0x2cc908u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)6944);
label_2cc90c:
    // 0x2cc90c: 0x45324d1b  .word       0x45324D1B                   # INVALID     $t1, $s2, 0x4D1B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc90cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x1B at 0x2CC90C raw=0x45324D1B");
 /* MITIGATED */
label_2cc910:
    // 0x2cc910: 0x746978  .word       0x00746978                   # dsll        $t5, $s4, 5 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc910u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << 5);
label_2cc914:
    // 0x2cc914: 0x0  nop
    ctx->pc = 0x2cc914u;
    // NOP
label_2cc918:
    // 0x2cc918: 0x0  nop
    ctx->pc = 0x2cc918u;
    // NOP
label_2cc91c:
    // 0x2cc91c: 0x0  nop
    ctx->pc = 0x2cc91cu;
    // NOP
label_2cc920:
    // 0x2cc920: 0x53364d1b  beql        $t9, $s6, . + 4 + (0x4D1B << 2)
label_2cc924:
    if (ctx->pc == 0x2CC924u) {
        ctx->pc = 0x2CC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC920u;
        // 0x2cc924: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC928u;
        goto label_2cc928;
    }
    ctx->pc = 0x2CC920u;
    {
        const bool branch_taken_0x2cc920 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 22));
        if (branch_taken_0x2cc920) {
            ctx->pc = 0x2CC924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC920u;
            // 0x2cc924: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFD90u;
            return;
        }
    }
    ctx->pc = 0x2CC928u;
label_2cc928:
    // 0x2cc928: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc928u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC928 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc92c:
    // 0x2cc92c: 0x63614237  daddi       $at, $k1, 0x4237
    ctx->pc = 0x2cc92cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)16951; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2cc930:
    // 0x2cc930: 0x4d1b206b  .word       0x4D1B206B                   # INVALID     $t0, $k1, 0x206B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc930u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC930 raw=0x4D1B206B");
 /* MITIGATED */
label_2cc934:
    // 0x2cc934: 0x78654e38  lq          $a1, 0x4E38($v1)
    ctx->pc = 0x2cc934u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 20024)));
label_2cc938:
    // 0x2cc938: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc938u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC938 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc93c:
    // 0x2cc93c: 0x69784532  ldl         $t8, 0x4532($t3)
    ctx->pc = 0x2cc93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2cc940:
    // 0x2cc940: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2cc940u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc944:
    // 0x2cc944: 0x0  nop
    ctx->pc = 0x2cc944u;
    // NOP
label_2cc948:
    // 0x2cc948: 0x0  nop
    ctx->pc = 0x2cc948u;
    // NOP
label_2cc94c:
    // 0x2cc94c: 0x0  nop
    ctx->pc = 0x2cc94cu;
    // NOP
label_2cc950:
    // 0x2cc950: 0x52374d1b  beql        $s1, $s7, . + 4 + (0x4D1B << 2)
label_2cc954:
    if (ctx->pc == 0x2CC954u) {
        ctx->pc = 0x2CC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC950u;
        // 0x2cc954: 0x1b205745  blez        $t9, . + 4 + (0x5745 << 2) (Delay Slot)
        // Likely branch instruction at 0x2CC954 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC958u;
        goto label_2cc958;
    }
    ctx->pc = 0x2CC950u;
    {
        const bool branch_taken_0x2cc950 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        if (branch_taken_0x2cc950) {
            ctx->pc = 0x2CC954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC950u;
            // 0x2cc954: 0x1b205745  blez        $t9, . + 4 + (0x5745 << 2) (Delay Slot)
            // Likely branch instruction at 0x2CC954 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFDC0u;
            return;
        }
    }
    ctx->pc = 0x2CC958u;
label_2cc958:
    // 0x2cc958: 0x4646384d  .word       0x4646384D                   # INVALID     $s2, $a2, 0x384D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc958u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x2CC958 raw=0x4646384D");
 /* MITIGATED */
label_2cc95c:
    // 0x2cc95c: 0x334d1b20  andi        $t5, $k0, 0x1B20
    ctx->pc = 0x2cc95cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) & (uint64_t)(uint16_t)6944);
label_2cc960:
    // 0x2cc960: 0x69766552  ldl         $s6, 0x6552($t3)
    ctx->pc = 0x2cc960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25938); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_2cc964:
    // 0x2cc964: 0x1b207765  blez        $t9, . + 4 + (0x7765 << 2)
label_2cc968:
    if (ctx->pc == 0x2CC968u) {
        ctx->pc = 0x2CC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC964u;
        // 0x2cc968: 0x7845314d  lq          $a1, 0x314D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12621)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC96Cu;
        goto label_2cc96c;
    }
    ctx->pc = 0x2CC964u;
    {
        const bool branch_taken_0x2cc964 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC964u;
        // 0x2cc968: 0x7845314d  lq          $a1, 0x314D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12621)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc964) {
            ctx->pc = 0x2EA6FCu;
            return;
        }
    }
    ctx->pc = 0x2CC96Cu;
label_2cc96c:
    // 0x2cc96c: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cc96cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cc970:
    // 0x2cc970: 0x53344d1b  beql        $t9, $s4, . + 4 + (0x4D1B << 2)
label_2cc974:
    if (ctx->pc == 0x2CC974u) {
        ctx->pc = 0x2CC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC970u;
        // 0x2cc974: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC978u;
        goto label_2cc978;
    }
    ctx->pc = 0x2CC970u;
    {
        const bool branch_taken_0x2cc970 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cc970) {
            ctx->pc = 0x2CC974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC970u;
            // 0x2cc974: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFDE0u;
            return;
        }
    }
    ctx->pc = 0x2CC978u;
label_2cc978:
    // 0x2cc978: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc978u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC978 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc97c:
    // 0x2cc97c: 0x61684335  daddi       $t0, $t3, 0x4335
    ctx->pc = 0x2cc97cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17205; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2cc980:
    // 0x2cc980: 0x2065676e  addi        $a1, $v1, 0x676E
    ctx->pc = 0x2cc980u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26478, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc984:
    // 0x2cc984: 0x45314d1b  .word       0x45314D1B                   # INVALID     $t1, $s1, 0x4D1B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc984u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x1B at 0x2CC984 raw=0x45314D1B");
 /* MITIGATED */
label_2cc988:
    // 0x2cc988: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc988u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CC988 raw=0x7265746E");
 /* MITIGATED */
label_2cc98c:
    // 0x2cc98c: 0x304d1b20  andi        $t5, $v0, 0x1B20
    ctx->pc = 0x2cc98cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6944);
label_2cc990:
    // 0x2cc990: 0x706f7453  .word       0x706F7453                   # mtlo1       $v1 # 000F7440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc990u;
    ctx->lo1 = GPR_U64(ctx, 3);
label_2cc994:
    // 0x2cc994: 0x324d1b20  andi        $t5, $s2, 0x1B20
    ctx->pc = 0x2cc994u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6944);
label_2cc998:
    // 0x2cc998: 0x74697845  .word       0x74697845                   # INVALID     $v1, $t1, 0x7845 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc998u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC998 raw=0x74697845");
 /* MITIGATED */
label_2cc99c:
    // 0x2cc99c: 0x0  nop
    ctx->pc = 0x2cc99cu;
    // NOP
label_2cc9a0:
    // 0x2cc9a0: 0x1b394d1b  .word       0x1B394D1B                   # blez        $t9, . + 4 + (0x4D1B << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_2cc9a4:
    if (ctx->pc == 0x2CC9A4u) {
        ctx->pc = 0x2CC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9A0u;
        // 0x2cc9a4: 0x61423a4d  daddi       $v0, $t2, 0x3A4D (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)14925; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC9A8u;
        goto label_2cc9a8;
    }
    ctx->pc = 0x2CC9A0u;
    {
        const bool branch_taken_0x2cc9a0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9A0u;
        // 0x2cc9a4: 0x61423a4d  daddi       $v0, $t2, 0x3A4D (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)14925; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9a0) {
            ctx->pc = 0x2DFE10u;
            return;
        }
    }
    ctx->pc = 0x2CC9A8u;
label_2cc9a8:
    // 0x2cc9a8: 0x6b63  .word       0x00006B63                   # negu        $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc9a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cc9ac:
    // 0x2cc9ac: 0x0  nop
    ctx->pc = 0x2cc9acu;
    // NOP
label_2cc9b0:
    // 0x2cc9b0: 0x1b394d1b  .word       0x1B394D1B                   # blez        $t9, . + 4 + (0x4D1B << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_2cc9b4:
    if (ctx->pc == 0x2CC9B4u) {
        ctx->pc = 0x2CC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9B0u;
        // 0x2cc9b4: 0x65443a4d  daddiu      $a0, $t2, 0x3A4D (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14925);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC9B8u;
        goto label_2cc9b8;
    }
    ctx->pc = 0x2CC9B0u;
    {
        const bool branch_taken_0x2cc9b0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9B0u;
        // 0x2cc9b4: 0x65443a4d  daddiu      $a0, $t2, 0x3A4D (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14925);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9b0) {
            ctx->pc = 0x2DFE20u;
            return;
        }
    }
    ctx->pc = 0x2CC9B8u;
label_2cc9b8:
    // 0x2cc9b8: 0x6c756166  ldr         $s5, 0x6166($v1)
    ctx->pc = 0x2cc9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2cc9bc:
    // 0x2cc9bc: 0x65532074  daddiu      $s3, $t2, 0x2074
    ctx->pc = 0x2cc9bcu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8308);
label_2cc9c0:
    // 0x2cc9c0: 0x6e697474  ldr         $t1, 0x7474($s3)
    ctx->pc = 0x2cc9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29812); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cc9c4:
    // 0x2cc9c4: 0x1b207367  blez        $t9, . + 4 + (0x7367 << 2)
label_2cc9c8:
    if (ctx->pc == 0x2CC9C8u) {
        ctx->pc = 0x2CC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9C4u;
        // 0x2cc9c8: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC9CCu;
        goto label_2cc9cc;
    }
    ctx->pc = 0x2CC9C4u;
    {
        const bool branch_taken_0x2cc9c4 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9C4u;
        // 0x2cc9c8: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9c4) {
            ctx->pc = 0x2E9764u;
            return;
        }
    }
    ctx->pc = 0x2CC9CCu;
label_2cc9cc:
    // 0x2cc9cc: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cc9ccu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cc9d0:
    // 0x2cc9d0: 0x53354d1b  beql        $t9, $s5, . + 4 + (0x4D1B << 2)
label_2cc9d4:
    if (ctx->pc == 0x2CC9D4u) {
        ctx->pc = 0x2CC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9D0u;
        // 0x2cc9d4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC9D8u;
        goto label_2cc9d8;
    }
    ctx->pc = 0x2CC9D0u;
    {
        const bool branch_taken_0x2cc9d0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 21));
        if (branch_taken_0x2cc9d0) {
            ctx->pc = 0x2CC9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC9D0u;
            // 0x2cc9d4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFE40u;
            return;
        }
    }
    ctx->pc = 0x2CC9D8u;
label_2cc9d8:
    // 0x2cc9d8: 0x61432074  daddi       $v1, $t2, 0x2074
    ctx->pc = 0x2cc9d8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cc9dc:
    // 0x2cc9dc: 0x6f676574  ldr         $a3, 0x6574($k1)
    ctx->pc = 0x2cc9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2cc9e0:
    // 0x2cc9e0: 0x1b207972  blez        $t9, . + 4 + (0x7972 << 2)
label_2cc9e4:
    if (ctx->pc == 0x2CC9E4u) {
        ctx->pc = 0x2CC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9E0u;
        // 0x2cc9e4: 0x6553344d  daddiu      $s3, $t2, 0x344D (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)13389);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC9E8u;
        goto label_2cc9e8;
    }
    ctx->pc = 0x2CC9E0u;
    {
        const bool branch_taken_0x2cc9e0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9E0u;
        // 0x2cc9e4: 0x6553344d  daddiu      $s3, $t2, 0x344D (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)13389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9e0) {
            ctx->pc = 0x2EAFACu;
            return;
        }
    }
    ctx->pc = 0x2CC9E8u;
label_2cc9e8:
    // 0x2cc9e8: 0x7463656c  .word       0x7463656C                   # INVALID     $v1, $v1, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc9e8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC9E8 raw=0x7463656C");
 /* MITIGATED */
label_2cc9ec:
    // 0x2cc9ec: 0x61745320  daddi       $s4, $t3, 0x5320
    ctx->pc = 0x2cc9ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cc9f0:
    // 0x2cc9f0: 0x1b206567  blez        $t9, . + 4 + (0x6567 << 2)
label_2cc9f4:
    if (ctx->pc == 0x2CC9F4u) {
        ctx->pc = 0x2CC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9F0u;
        // 0x2cc9f4: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC9F8u;
        goto label_2cc9f8;
    }
    ctx->pc = 0x2CC9F0u;
    {
        const bool branch_taken_0x2cc9f0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9F0u;
        // 0x2cc9f4: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9f0) {
            ctx->pc = 0x2E5F90u;
            return;
        }
    }
    ctx->pc = 0x2CC9F8u;
label_2cc9f8:
    // 0x2cc9f8: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cc9f8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cc9fc:
    // 0x2cc9fc: 0x0  nop
    ctx->pc = 0x2cc9fcu;
    // NOP
label_2cca00:
    // 0x2cca00: 0x53354d1b  beql        $t9, $s5, . + 4 + (0x4D1B << 2)
label_2cca04:
    if (ctx->pc == 0x2CCA04u) {
        ctx->pc = 0x2CCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA00u;
        // 0x2cca04: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCA08u;
        goto label_2cca08;
    }
    ctx->pc = 0x2CCA00u;
    {
        const bool branch_taken_0x2cca00 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 21));
        if (branch_taken_0x2cca00) {
            ctx->pc = 0x2CCA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCA00u;
            // 0x2cca04: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFE70u;
            return;
        }
    }
    ctx->pc = 0x2CCA08u;
label_2cca08:
    // 0x2cca08: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cca08u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCA08 raw=0x4D1B2074");
 /* MITIGATED */
label_2cca0c:
    // 0x2cca0c: 0x384d1b37  xori        $t5, $v0, 0x1B37
    ctx->pc = 0x2cca0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6967);
label_2cca10:
    // 0x2cca10: 0x65727458  daddiu      $s2, $t3, 0x7458
    ctx->pc = 0x2cca10u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29784);
label_2cca14:
    // 0x2cca14: 0x4f2f656d  .word       0x4F2F656D                   # INVALID     $t9, $t7, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cca14u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCA14 raw=0x4F2F656D");
 /* MITIGATED */
label_2cca18:
    // 0x2cca18: 0x69676972  ldl         $a3, 0x6972($t3)
    ctx->pc = 0x2cca18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2cca1c:
    // 0x2cca1c: 0x206c616e  addi        $t4, $v1, 0x616E
    ctx->pc = 0x2cca1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24942, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cca20:
    // 0x2cca20: 0x50314d1b  beql        $at, $s1, . + 4 + (0x4D1B << 2)
label_2cca24:
    if (ctx->pc == 0x2CCA24u) {
        ctx->pc = 0x2CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA20u;
        // 0x2cca24: 0x2079616c  addi        $t9, $v1, 0x616C (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24940, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCA28u;
        goto label_2cca28;
    }
    ctx->pc = 0x2CCA20u;
    {
        const bool branch_taken_0x2cca20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 17));
        if (branch_taken_0x2cca20) {
            ctx->pc = 0x2CCA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCA20u;
            // 0x2cca24: 0x2079616c  addi        $t9, $v1, 0x616C (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24940, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFE90u;
            return;
        }
    }
    ctx->pc = 0x2CCA28u;
label_2cca28:
    // 0x2cca28: 0x45324d1b  .word       0x45324D1B                   # INVALID     $t1, $s2, 0x4D1B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cca28u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x1B at 0x2CCA28 raw=0x45324D1B");
 /* MITIGATED */
label_2cca2c:
    // 0x2cca2c: 0x746978  .word       0x00746978                   # dsll        $t5, $s4, 5 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cca2cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << 5);
label_2cca30:
    // 0x2cca30: 0x1b394d1b  .word       0x1B394D1B                   # blez        $t9, . + 4 + (0x4D1B << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_2cca34:
    if (ctx->pc == 0x2CCA34u) {
        ctx->pc = 0x2CCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA30u;
        // 0x2cca34: 0x6c503a4d  ldr         $s0, 0x3A4D($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 14925); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCA38u;
        goto label_2cca38;
    }
    ctx->pc = 0x2CCA30u;
    {
        const bool branch_taken_0x2cca30 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA30u;
        // 0x2cca34: 0x6c503a4d  ldr         $s0, 0x3A4D($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 14925); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca30) {
            ctx->pc = 0x2DFEA0u;
            return;
        }
    }
    ctx->pc = 0x2CCA38u;
label_2cca38:
    // 0x2cca38: 0x1b207961  blez        $t9, . + 4 + (0x7961 << 2)
label_2cca3c:
    if (ctx->pc == 0x2CCA3Cu) {
        ctx->pc = 0x2CCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA38u;
        // 0x2cca3c: 0x6553364d  daddiu      $s3, $t2, 0x364D (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)13901);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCA40u;
        goto label_2cca40;
    }
    ctx->pc = 0x2CCA38u;
    {
        const bool branch_taken_0x2cca38 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA38u;
        // 0x2cca3c: 0x6553364d  daddiu      $s3, $t2, 0x364D (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)13901);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca38) {
            ctx->pc = 0x2EAFC0u;
            return;
        }
    }
    ctx->pc = 0x2CCA40u;
label_2cca40:
    // 0x2cca40: 0x7463656c  .word       0x7463656C                   # INVALID     $v1, $v1, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cca40u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCA40 raw=0x7463656C");
 /* MITIGATED */
label_2cca44:
    // 0x2cca44: 0x314d1b20  andi        $t5, $t2, 0x1B20
    ctx->pc = 0x2cca44u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)6944);
label_2cca48:
    // 0x2cca48: 0x65746e45  daddiu      $s4, $t3, 0x6E45
    ctx->pc = 0x2cca48u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28229);
label_2cca4c:
    // 0x2cca4c: 0x4d1b2072  .word       0x4D1B2072                   # INVALID     $t0, $k1, 0x2072 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cca4cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCA4C raw=0x4D1B2072");
 /* MITIGATED */
label_2cca50:
    // 0x2cca50: 0x69784532  ldl         $t8, 0x4532($t3)
    ctx->pc = 0x2cca50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2cca54:
    // 0x2cca54: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2cca54u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cca58:
    // 0x2cca58: 0x0  nop
    ctx->pc = 0x2cca58u;
    // NOP
label_2cca5c:
    // 0x2cca5c: 0x0  nop
    ctx->pc = 0x2cca5cu;
    // NOP
label_2cca60:
    // 0x2cca60: 0x53304d1b  beql        $t9, $s0, . + 4 + (0x4D1B << 2)
label_2cca64:
    if (ctx->pc == 0x2CCA64u) {
        ctx->pc = 0x2CCA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA60u;
        // 0x2cca64: 0x2074726f  addi        $s4, $v1, 0x726F (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCA68u;
        goto label_2cca68;
    }
    ctx->pc = 0x2CCA60u;
    {
        const bool branch_taken_0x2cca60 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 16));
        if (branch_taken_0x2cca60) {
            ctx->pc = 0x2CCA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCA60u;
            // 0x2cca64: 0x2074726f  addi        $s4, $v1, 0x726F (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFED0u;
            return;
        }
    }
    ctx->pc = 0x2CCA68u;
label_2cca68:
    // 0x2cca68: 0x46207962  .word       0x46207962                   # INVALID     $s1, $zero, 0x7962 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cca68u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x22 at 0x2CCA68 raw=0x46207962");
 /* MITIGATED */
label_2cca6c:
    // 0x2cca6c: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2cca6cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2cca70:
    // 0x2cca70: 0x354d1b20  ori         $t5, $t2, 0x1B20
    ctx->pc = 0x2cca70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)6944);
label_2cca74:
    // 0x2cca74: 0x6e616843  ldr         $at, 0x6843($s3)
    ctx->pc = 0x2cca74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cca78:
    // 0x2cca78: 0x49206567  .word       0x49206567                   # INVALID     $t1, $zero, 0x6567 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2cca78u;
//     throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2CCA78 raw=0x49206567");
 /* MITIGATED */
label_2cca7c:
    // 0x2cca7c: 0x7865646e  lq          $a1, 0x646E($v1)
    ctx->pc = 0x2cca7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 25710)));
label_2cca80:
    // 0x2cca80: 0x344d1b20  ori         $t5, $v0, 0x1B20
    ctx->pc = 0x2cca80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6944);
label_2cca84:
    // 0x2cca84: 0x656c6553  daddiu      $t4, $t3, 0x6553
    ctx->pc = 0x2cca84u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25939);
label_2cca88:
    // 0x2cca88: 0x1b207463  blez        $t9, . + 4 + (0x7463 << 2)
label_2cca8c:
    if (ctx->pc == 0x2CCA8Cu) {
        ctx->pc = 0x2CCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA88u;
        // 0x2cca8c: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCA90u;
        goto label_2cca90;
    }
    ctx->pc = 0x2CCA88u;
    {
        const bool branch_taken_0x2cca88 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA88u;
        // 0x2cca8c: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca88) {
            ctx->pc = 0x2E9C18u;
            return;
        }
    }
    ctx->pc = 0x2CCA90u;
label_2cca90:
    // 0x2cca90: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cca90u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cca94:
    // 0x2cca94: 0x0  nop
    ctx->pc = 0x2cca94u;
    // NOP
label_2cca98:
    // 0x2cca98: 0x0  nop
    ctx->pc = 0x2cca98u;
    // NOP
label_2cca9c:
    // 0x2cca9c: 0x0  nop
    ctx->pc = 0x2cca9cu;
    // NOP
label_2ccaa0:
    // 0x2ccaa0: 0x53304d1b  beql        $t9, $s0, . + 4 + (0x4D1B << 2)
label_2ccaa4:
    if (ctx->pc == 0x2CCAA4u) {
        ctx->pc = 0x2CCAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAA0u;
        // 0x2ccaa4: 0x2074726f  addi        $s4, $v1, 0x726F (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCAA8u;
        goto label_2ccaa8;
    }
    ctx->pc = 0x2CCAA0u;
    {
        const bool branch_taken_0x2ccaa0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 16));
        if (branch_taken_0x2ccaa0) {
            ctx->pc = 0x2CCAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCAA0u;
            // 0x2ccaa4: 0x2074726f  addi        $s4, $v1, 0x726F (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFF10u;
            return;
        }
    }
    ctx->pc = 0x2CCAA8u;
label_2ccaa8:
    // 0x2ccaa8: 0x68706c41  ldl         $s0, 0x6C41($v1)
    ctx->pc = 0x2ccaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27713); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_2ccaac:
    // 0x2ccaac: 0x74656261  .word       0x74656261                   # INVALID     $v1, $a1, 0x6261 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccaacu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCAAC raw=0x74656261");
 /* MITIGATED */
label_2ccab0:
    // 0x2ccab0: 0x6c616369  ldr         $at, 0x6369($v1)
    ctx->pc = 0x2ccab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2ccab4:
    // 0x2ccab4: 0x1b20796c  blez        $t9, . + 4 + (0x796C << 2)
label_2ccab8:
    if (ctx->pc == 0x2CCAB8u) {
        ctx->pc = 0x2CCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAB4u;
        // 0x2ccab8: 0x6843354d  ldl         $v1, 0x354D($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 13645); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCABCu;
        goto label_2ccabc;
    }
    ctx->pc = 0x2CCAB4u;
    {
        const bool branch_taken_0x2ccab4 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAB4u;
        // 0x2ccab8: 0x6843354d  ldl         $v1, 0x354D($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 13645); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccab4) {
            ctx->pc = 0x2EB068u;
            return;
        }
    }
    ctx->pc = 0x2CCABCu;
label_2ccabc:
    // 0x2ccabc: 0x65676e61  daddiu      $a3, $t3, 0x6E61
    ctx->pc = 0x2ccabcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
label_2ccac0:
    // 0x2ccac0: 0x646e4920  daddiu      $t6, $v1, 0x4920
    ctx->pc = 0x2ccac0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)18720);
label_2ccac4:
    // 0x2ccac4: 0x1b207865  blez        $t9, . + 4 + (0x7865 << 2)
label_2ccac8:
    if (ctx->pc == 0x2CCAC8u) {
        ctx->pc = 0x2CCAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAC4u;
        // 0x2ccac8: 0x6553344d  daddiu      $s3, $t2, 0x344D (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)13389);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCACCu;
        goto label_2ccacc;
    }
    ctx->pc = 0x2CCAC4u;
    {
        const bool branch_taken_0x2ccac4 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAC4u;
        // 0x2ccac8: 0x6553344d  daddiu      $s3, $t2, 0x344D (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)13389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccac4) {
            ctx->pc = 0x2EAC5Cu;
            return;
        }
    }
    ctx->pc = 0x2CCACCu;
label_2ccacc:
    // 0x2ccacc: 0x7463656c  .word       0x7463656C                   # INVALID     $v1, $v1, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccaccu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCACC raw=0x7463656C");
 /* MITIGATED */
label_2ccad0:
    // 0x2ccad0: 0x324d1b20  andi        $t5, $s2, 0x1B20
    ctx->pc = 0x2ccad0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6944);
label_2ccad4:
    // 0x2ccad4: 0x74697845  .word       0x74697845                   # INVALID     $v1, $t1, 0x7845 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccad4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCAD4 raw=0x74697845");
 /* MITIGATED */
label_2ccad8:
    // 0x2ccad8: 0x0  nop
    ctx->pc = 0x2ccad8u;
    // NOP
label_2ccadc:
    // 0x2ccadc: 0x0  nop
    ctx->pc = 0x2ccadcu;
    // NOP
label_2ccae0:
    // 0x2ccae0: 0x1b374d1b  .word       0x1B374D1B                   # blez        $t9, . + 4 + (0x4D1B << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2ccae4:
    if (ctx->pc == 0x2CCAE4u) {
        ctx->pc = 0x2CCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAE0u;
        // 0x2ccae4: 0x6f52384d  ldr         $s2, 0x384D($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14413); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCAE8u;
        goto label_2ccae8;
    }
    ctx->pc = 0x2CCAE0u;
    {
        const bool branch_taken_0x2ccae0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAE0u;
        // 0x2ccae4: 0x6f52384d  ldr         $s2, 0x384D($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14413); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccae0) {
            ctx->pc = 0x2DFF50u;
            return;
        }
    }
    ctx->pc = 0x2CCAE8u;
label_2ccae8:
    // 0x2ccae8: 0x65746174  daddiu      $s4, $t3, 0x6174
    ctx->pc = 0x2ccae8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
label_2ccaec:
    // 0x2ccaec: 0x616d4920  daddi       $t5, $t3, 0x4920
    ctx->pc = 0x2ccaecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18720; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2ccaf0:
    // 0x2ccaf0: 0x6567  .word       0x00006567                   # not         $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccaf0u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2ccaf4:
    // 0x2ccaf4: 0x0  nop
    ctx->pc = 0x2ccaf4u;
    // NOP
label_2ccaf8:
    // 0x2ccaf8: 0x0  nop
    ctx->pc = 0x2ccaf8u;
    // NOP
label_2ccafc:
    // 0x2ccafc: 0x0  nop
    ctx->pc = 0x2ccafcu;
    // NOP
label_2ccb00:
    // 0x2ccb00: 0x53364d1b  beql        $t9, $s6, . + 4 + (0x4D1B << 2)
label_2ccb04:
    if (ctx->pc == 0x2CCB04u) {
        ctx->pc = 0x2CCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB00u;
        // 0x2ccb04: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB08u;
        goto label_2ccb08;
    }
    ctx->pc = 0x2CCB00u;
    {
        const bool branch_taken_0x2ccb00 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ccb00) {
            ctx->pc = 0x2CCB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB00u;
            // 0x2ccb04: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFF70u;
            return;
        }
    }
    ctx->pc = 0x2CCB08u;
label_2ccb08:
    // 0x2ccb08: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccb08u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCB08 raw=0x4D1B2074");
 /* MITIGATED */
label_2ccb0c:
    // 0x2ccb0c: 0x746e4531  .word       0x746E4531                   # INVALID     $v1, $t6, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccb0cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCB0C raw=0x746E4531");
 /* MITIGATED */
label_2ccb10:
    // 0x2ccb10: 0x1b207265  blez        $t9, . + 4 + (0x7265 << 2)
label_2ccb14:
    if (ctx->pc == 0x2CCB14u) {
        ctx->pc = 0x2CCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB10u;
        // 0x2ccb14: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB18u;
        goto label_2ccb18;
    }
    ctx->pc = 0x2CCB10u;
    {
        const bool branch_taken_0x2ccb10 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB10u;
        // 0x2ccb14: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb10) {
            ctx->pc = 0x2E94A8u;
            return;
        }
    }
    ctx->pc = 0x2CCB18u;
label_2ccb18:
    // 0x2ccb18: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ccb18u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2ccb1c:
    // 0x2ccb1c: 0x0  nop
    ctx->pc = 0x2ccb1cu;
    // NOP
label_2ccb20:
    // 0x2ccb20: 0x53344d1b  beql        $t9, $s4, . + 4 + (0x4D1B << 2)
label_2ccb24:
    if (ctx->pc == 0x2CCB24u) {
        ctx->pc = 0x2CCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB20u;
        // 0x2ccb24: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB28u;
        goto label_2ccb28;
    }
    ctx->pc = 0x2CCB20u;
    {
        const bool branch_taken_0x2ccb20 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 20));
        if (branch_taken_0x2ccb20) {
            ctx->pc = 0x2CCB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB20u;
            // 0x2ccb24: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFF90u;
            return;
        }
    }
    ctx->pc = 0x2CCB28u;
label_2ccb28:
    // 0x2ccb28: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccb28u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCB28 raw=0x4D1B2074");
 /* MITIGATED */
label_2ccb2c:
    // 0x2ccb2c: 0x61684335  daddi       $t0, $t3, 0x4335
    ctx->pc = 0x2ccb2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)17205; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2ccb30:
    // 0x2ccb30: 0x2065676e  addi        $a1, $v1, 0x676E
    ctx->pc = 0x2ccb30u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26478, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ccb34:
    // 0x2ccb34: 0x45324d1b  .word       0x45324D1B                   # INVALID     $t1, $s2, 0x4D1B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ccb34u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x1B at 0x2CCB34 raw=0x45324D1B");
 /* MITIGATED */
label_2ccb38:
    // 0x2ccb38: 0x746978  .word       0x00746978                   # dsll        $t5, $s4, 5 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccb38u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << 5);
label_2ccb3c:
    // 0x2ccb3c: 0x0  nop
    ctx->pc = 0x2ccb3cu;
    // NOP
label_2ccb40:
    // 0x2ccb40: 0x53364d1b  beql        $t9, $s6, . + 4 + (0x4D1B << 2)
label_2ccb44:
    if (ctx->pc == 0x2CCB44u) {
        ctx->pc = 0x2CCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB40u;
        // 0x2ccb44: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB48u;
        goto label_2ccb48;
    }
    ctx->pc = 0x2CCB40u;
    {
        const bool branch_taken_0x2ccb40 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ccb40) {
            ctx->pc = 0x2CCB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB40u;
            // 0x2ccb44: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFFB0u;
            return;
        }
    }
    ctx->pc = 0x2CCB48u;
label_2ccb48:
    // 0x2ccb48: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccb48u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCB48 raw=0x4D1B2074");
 /* MITIGATED */
label_2ccb4c:
    // 0x2ccb4c: 0x746e4531  .word       0x746E4531                   # INVALID     $v1, $t6, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccb4cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCB4C raw=0x746E4531");
 /* MITIGATED */
label_2ccb50:
    // 0x2ccb50: 0x1b207265  blez        $t9, . + 4 + (0x7265 << 2)
label_2ccb54:
    if (ctx->pc == 0x2CCB54u) {
        ctx->pc = 0x2CCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB50u;
        // 0x2ccb54: 0x6544324d  daddiu      $a0, $t2, 0x324D (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)12877);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB58u;
        goto label_2ccb58;
    }
    ctx->pc = 0x2CCB50u;
    {
        const bool branch_taken_0x2ccb50 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB50u;
        // 0x2ccb54: 0x6544324d  daddiu      $a0, $t2, 0x324D (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)12877);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb50) {
            ctx->pc = 0x2E94E8u;
            return;
        }
    }
    ctx->pc = 0x2CCB58u;
label_2ccb58:
    // 0x2ccb58: 0x6574656c  daddiu      $s4, $t3, 0x656C
    ctx->pc = 0x2ccb58u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
label_2ccb5c:
    // 0x2ccb5c: 0x394d1b20  xori        $t5, $t2, 0x1B20
    ctx->pc = 0x2ccb5cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)6944);
label_2ccb60:
    // 0x2ccb60: 0x413a4d1b  .word       0x413A4D1B                   # INVALID     $t1, $k0, 0x4D1B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ccb60u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x2CCB60 raw=0x413A4D1B");
 /* MITIGATED */
label_2ccb64:
    // 0x2ccb64: 0x70656363  .word       0x70656363                   # INVALID     $v1, $a1, 0x6363 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ccb64u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x2CCB64 raw=0x70656363");
 /* MITIGATED */
label_2ccb68:
    // 0x2ccb68: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2ccb68u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ccb6c:
    // 0x2ccb6c: 0x0  nop
    ctx->pc = 0x2ccb6cu;
    // NOP
label_2ccb70:
    // 0x2ccb70: 0x53364d1b  beql        $t9, $s6, . + 4 + (0x4D1B << 2)
label_2ccb74:
    if (ctx->pc == 0x2CCB74u) {
        ctx->pc = 0x2CCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB70u;
        // 0x2ccb74: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB78u;
        goto label_2ccb78;
    }
    ctx->pc = 0x2CCB70u;
    {
        const bool branch_taken_0x2ccb70 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ccb70) {
            ctx->pc = 0x2CCB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCB70u;
            // 0x2ccb74: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFFE0u;
            return;
        }
    }
    ctx->pc = 0x2CCB78u;
label_2ccb78:
    // 0x2ccb78: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccb78u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCB78 raw=0x4D1B2074");
 /* MITIGATED */
label_2ccb7c:
    // 0x2ccb7c: 0x706e4931  .word       0x706E4931                   # INVALID     $v1, $t6, 0x4931 # 00000000 <InstrIdType: R5900_MMI_PMTHL>
    ctx->pc = 0x2ccb7cu;
//     throw std::runtime_error("Unhandled PMTHL instruction: function 0x4 at 0x2CCB7C raw=0x706E4931");
 /* MITIGATED */
label_2ccb80:
    // 0x2ccb80: 0x1b207475  blez        $t9, . + 4 + (0x7475 << 2)
label_2ccb84:
    if (ctx->pc == 0x2CCB84u) {
        ctx->pc = 0x2CCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB80u;
        // 0x2ccb84: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB88u;
        goto label_2ccb88;
    }
    ctx->pc = 0x2CCB80u;
    {
        const bool branch_taken_0x2ccb80 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB80u;
        // 0x2ccb84: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb80) {
            ctx->pc = 0x2E9D58u;
            return;
        }
    }
    ctx->pc = 0x2CCB88u;
label_2ccb88:
    // 0x2ccb88: 0x1b207469  blez        $t9, . + 4 + (0x7469 << 2)
label_2ccb8c:
    if (ctx->pc == 0x2CCB8Cu) {
        ctx->pc = 0x2CCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB88u;
        // 0x2ccb8c: 0x4d1b394d  .word       0x4D1B394D                   # INVALID     $t0, $k1, 0x394D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCB8C raw=0x4D1B394D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCB90u;
        goto label_2ccb90;
    }
    ctx->pc = 0x2CCB88u;
    {
        const bool branch_taken_0x2ccb88 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB88u;
        // 0x2ccb8c: 0x4d1b394d  .word       0x4D1B394D                   # INVALID     $t0, $k1, 0x394D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCB8C raw=0x4D1B394D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb88) {
            ctx->pc = 0x2E9D30u;
            return;
        }
    }
    ctx->pc = 0x2CCB90u;
label_2ccb90:
    // 0x2ccb90: 0x6363413a  daddi       $v1, $k1, 0x413A
    ctx->pc = 0x2ccb90u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)16698; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2ccb94:
    // 0x2ccb94: 0x747065  .word       0x00747065                   # or          $t6, $v1, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccb94u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
label_2ccb98:
    // 0x2ccb98: 0x0  nop
    ctx->pc = 0x2ccb98u;
    // NOP
label_2ccb9c:
    // 0x2ccb9c: 0x0  nop
    ctx->pc = 0x2ccb9cu;
    // NOP
label_2ccba0:
    // 0x2ccba0: 0x53344d1b  beql        $t9, $s4, . + 4 + (0x4D1B << 2)
label_2ccba4:
    if (ctx->pc == 0x2CCBA4u) {
        ctx->pc = 0x2CCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBA0u;
        // 0x2ccba4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCBA8u;
        goto label_2ccba8;
    }
    ctx->pc = 0x2CCBA0u;
    {
        const bool branch_taken_0x2ccba0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 20));
        if (branch_taken_0x2ccba0) {
            ctx->pc = 0x2CCBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCBA0u;
            // 0x2ccba4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0010u;
            return;
        }
    }
    ctx->pc = 0x2CCBA8u;
label_2ccba8:
    // 0x2ccba8: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccba8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCBA8 raw=0x4D1B2074");
 /* MITIGATED */
label_2ccbac:
    // 0x2ccbac: 0x746e4531  .word       0x746E4531                   # INVALID     $v1, $t6, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccbacu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCBAC raw=0x746E4531");
 /* MITIGATED */
label_2ccbb0:
    // 0x2ccbb0: 0x1b207265  blez        $t9, . + 4 + (0x7265 << 2)
label_2ccbb4:
    if (ctx->pc == 0x2CCBB4u) {
        ctx->pc = 0x2CCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBB0u;
        // 0x2ccbb4: 0x4d1b394d  .word       0x4D1B394D                   # INVALID     $t0, $k1, 0x394D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCBB4 raw=0x4D1B394D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCBB8u;
        goto label_2ccbb8;
    }
    ctx->pc = 0x2CCBB0u;
    {
        const bool branch_taken_0x2ccbb0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBB0u;
        // 0x2ccbb4: 0x4d1b394d  .word       0x4D1B394D                   # INVALID     $t0, $k1, 0x394D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCBB4 raw=0x4D1B394D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbb0) {
            ctx->pc = 0x2E9548u;
            return;
        }
    }
    ctx->pc = 0x2CCBB8u;
label_2ccbb8:
    // 0x2ccbb8: 0x6978453a  ldl         $t8, 0x453A($t3)
    ctx->pc = 0x2ccbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17722); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2ccbbc:
    // 0x2ccbbc: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2ccbbcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ccbc0:
    // 0x2ccbc0: 0x53354d1b  beql        $t9, $s5, . + 4 + (0x4D1B << 2)
label_2ccbc4:
    if (ctx->pc == 0x2CCBC4u) {
        ctx->pc = 0x2CCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBC0u;
        // 0x2ccbc4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCBC8u;
        goto label_2ccbc8;
    }
    ctx->pc = 0x2CCBC0u;
    {
        const bool branch_taken_0x2ccbc0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ccbc0) {
            ctx->pc = 0x2CCBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCBC0u;
            // 0x2ccbc4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0030u;
            return;
        }
    }
    ctx->pc = 0x2CCBC8u;
label_2ccbc8:
    // 0x2ccbc8: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccbc8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCBC8 raw=0x4D1B2074");
 /* MITIGATED */
label_2ccbcc:
    // 0x2ccbcc: 0x746e4531  .word       0x746E4531                   # INVALID     $v1, $t6, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccbccu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCBCC raw=0x746E4531");
 /* MITIGATED */
label_2ccbd0:
    // 0x2ccbd0: 0x1b207265  blez        $t9, . + 4 + (0x7265 << 2)
label_2ccbd4:
    if (ctx->pc == 0x2CCBD4u) {
        ctx->pc = 0x2CCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBD0u;
        // 0x2ccbd4: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCBD8u;
        goto label_2ccbd8;
    }
    ctx->pc = 0x2CCBD0u;
    {
        const bool branch_taken_0x2ccbd0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBD0u;
        // 0x2ccbd4: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbd0) {
            ctx->pc = 0x2E9568u;
            return;
        }
    }
    ctx->pc = 0x2CCBD8u;
label_2ccbd8:
    // 0x2ccbd8: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ccbd8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2ccbdc:
    // 0x2ccbdc: 0x0  nop
    ctx->pc = 0x2ccbdcu;
    // NOP
label_2ccbe0:
    // 0x2ccbe0: 0x53354d1b  beql        $t9, $s5, . + 4 + (0x4D1B << 2)
label_2ccbe4:
    if (ctx->pc == 0x2CCBE4u) {
        ctx->pc = 0x2CCBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBE0u;
        // 0x2ccbe4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCBE8u;
        goto label_2ccbe8;
    }
    ctx->pc = 0x2CCBE0u;
    {
        const bool branch_taken_0x2ccbe0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 21));
        if (branch_taken_0x2ccbe0) {
            ctx->pc = 0x2CCBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCBE0u;
            // 0x2ccbe4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0050u;
            return;
        }
    }
    ctx->pc = 0x2CCBE8u;
label_2ccbe8:
    // 0x2ccbe8: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccbe8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCBE8 raw=0x4D1B2074");
 /* MITIGATED */
label_2ccbec:
    // 0x2ccbec: 0x75714531  .word       0x75714531                   # INVALID     $t3, $s1, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccbecu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCBEC raw=0x75714531");
 /* MITIGATED */
label_2ccbf0:
    // 0x2ccbf0: 0x1b207069  blez        $t9, . + 4 + (0x7069 << 2)
label_2ccbf4:
    if (ctx->pc == 0x2CCBF4u) {
        ctx->pc = 0x2CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBF0u;
        // 0x2ccbf4: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCBF8u;
        goto label_2ccbf8;
    }
    ctx->pc = 0x2CCBF0u;
    {
        const bool branch_taken_0x2ccbf0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBF0u;
        // 0x2ccbf4: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbf0) {
            ctx->pc = 0x2E8D98u;
            return;
        }
    }
    ctx->pc = 0x2CCBF8u;
label_2ccbf8:
    // 0x2ccbf8: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ccbf8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2ccbfc:
    // 0x2ccbfc: 0x0  nop
    ctx->pc = 0x2ccbfcu;
    // NOP
label_2ccc00:
    // 0x2ccc00: 0x45344d1b  .word       0x45344D1B                   # INVALID     $t1, $s4, 0x4D1B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ccc00u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x1B at 0x2CCC00 raw=0x45344D1B");
 /* MITIGATED */
label_2ccc04:
    // 0x2ccc04: 0x70697571  .word       0x70697571                   # INVALID     $v1, $t1, 0x7571 # 00000000 <InstrIdType: R5900_MMI_PMTHL>
    ctx->pc = 0x2ccc04u;
//     throw std::runtime_error("Unhandled PMTHL instruction: function 0x15 at 0x2CCC04 raw=0x70697571");
 /* MITIGATED */
label_2ccc08:
    // 0x2ccc08: 0x746e656d  .word       0x746E656D                   # INVALID     $v1, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccc08u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCC08 raw=0x746E656D");
 /* MITIGATED */
label_2ccc0c:
    // 0x2ccc0c: 0x324d1b20  andi        $t5, $s2, 0x1B20
    ctx->pc = 0x2ccc0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6944);
label_2ccc10:
    // 0x2ccc10: 0x74697845  .word       0x74697845                   # INVALID     $v1, $t1, 0x7845 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccc10u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CCC10 raw=0x74697845");
 /* MITIGATED */
label_2ccc14:
    // 0x2ccc14: 0x0  nop
    ctx->pc = 0x2ccc14u;
    // NOP
label_2ccc18:
    // 0x2ccc18: 0x0  nop
    ctx->pc = 0x2ccc18u;
    // NOP
label_2ccc1c:
    // 0x2ccc1c: 0x0  nop
    ctx->pc = 0x2ccc1cu;
    // NOP
label_2ccc20:
    // 0x2ccc20: 0x8820c80e  lwl         $zero, -0x37F2($at)
    ctx->pc = 0x2ccc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294952974); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 0) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 0, (int32_t)merged); }
label_2ccc24:
    // 0x2ccc24: 0x0  nop
    ctx->pc = 0x2ccc24u;
    // NOP
label_2ccc28:
    // 0x2ccc28: 0x8020c80e  lb          $zero, -0x37F2($at)
    ctx->pc = 0x2ccc28u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294952974)));
label_2ccc2c:
    // 0x2ccc2c: 0x0  nop
    ctx->pc = 0x2ccc2cu;
    // NOP
label_2ccc30:
    // 0x2ccc30: 0x8042120e  lb          $v0, 0x120E($v0)
    ctx->pc = 0x2ccc30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4622)));
label_2ccc34:
    // 0x2ccc34: 0x0  nop
    ctx->pc = 0x2ccc34u;
    // NOP
label_2ccc38:
    // 0x2ccc38: 0x8004c80e  lb          $a0, -0x37F2($zero)
    ctx->pc = 0x2ccc38u;
    SET_GPR_S32(ctx, 4, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFC80Eu));
label_2ccc3c:
    // 0x2ccc3c: 0x0  nop
    ctx->pc = 0x2ccc3cu;
    // NOP
label_2ccc40:
    // 0x2ccc40: 0x7fff7fff  sq          $ra, 0x7FFF($ra)
    ctx->pc = 0x2ccc40u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 32767), GPR_VEC(ctx, 31));
label_2ccc44:
    // 0x2ccc44: 0x1de  .word       0x000001DE                   # ddiv        $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccc44u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2CCC44 raw=0x000001DE");
 /* MITIGATED */
label_2ccc48:
    // 0x2ccc48: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2ccc48u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2ccc4c:
    // 0x2ccc4c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccc4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccc50:
    // 0x2ccc50: 0xafbff7cf  sw          $ra, -0x831($sp)
    ctx->pc = 0x2ccc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4294965199), GPR_U32(ctx, 31));
label_2ccc54:
    // 0x2ccc54: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccc54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccc58:
    // 0x2ccc58: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2ccc58u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2ccc5c:
    // 0x2ccc5c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccc5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccc60:
    // 0x2ccc60: 0x7ffffebf  sq          $ra, -0x141($ra)
    ctx->pc = 0x2ccc60u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294966975), GPR_VEC(ctx, 31));
label_2ccc64:
    // 0x2ccc64: 0x19e  .word       0x0000019E                   # ddiv        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccc64u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2CCC64 raw=0x0000019E");
 /* MITIGATED */
label_2ccc68:
    // 0x2ccc68: 0xfffffeff  sd          $ra, -0x101($ra)
    ctx->pc = 0x2ccc68u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967039), GPR_U64(ctx, 31));
label_2ccc6c:
    // 0x2ccc6c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccc6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccc70:
    // 0x2ccc70: 0x3064402c  andi        $a0, $v1, 0x402C
    ctx->pc = 0x2ccc70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16428);
label_2ccc74:
    // 0x2ccc74: 0x0  nop
    ctx->pc = 0x2ccc74u;
    // NOP
label_2ccc78:
    // 0x2ccc78: 0x1060082e  beqz        $v1, . + 4 + (0x82E << 2)
label_2ccc7c:
    if (ctx->pc == 0x2CCC7Cu) {
        ctx->pc = 0x2CCC80u;
        goto label_2ccc80;
    }
    ctx->pc = 0x2CCC78u;
    {
        const bool branch_taken_0x2ccc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc78) {
            ctx->pc = 0x2CED34u;
            return;
        }
    }
    ctx->pc = 0x2CCC80u;
label_2ccc80:
    // 0x2ccc80: 0xfffffffd  sd          $ra, -0x3($ra)
    ctx->pc = 0x2ccc80u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967293), GPR_U64(ctx, 31));
label_2ccc84:
    // 0x2ccc84: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccc84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccc88:
    // 0x2ccc88: 0xfffffff7  sd          $ra, -0x9($ra)
    ctx->pc = 0x2ccc88u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967287), GPR_U64(ctx, 31));
label_2ccc8c:
    // 0x2ccc8c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccc8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccc90:
    // 0x2ccc90: 0x30600c2f  andi        $zero, $v1, 0xC2F
    ctx->pc = 0x2ccc90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3119);
label_2ccc94:
    // 0x2ccc94: 0x0  nop
    ctx->pc = 0x2ccc94u;
    // NOP
label_2ccc98:
    // 0x2ccc98: 0x3060442f  andi        $zero, $v1, 0x442F
    ctx->pc = 0x2ccc98u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)17455);
label_2ccc9c:
    // 0x2ccc9c: 0x0  nop
    ctx->pc = 0x2ccc9cu;
    // NOP
label_2ccca0:
    // 0x2ccca0: 0x12600928  beqz        $s3, . + 4 + (0x928 << 2)
label_2ccca4:
    if (ctx->pc == 0x2CCCA4u) {
        ctx->pc = 0x2CCCA8u;
        goto label_2ccca8;
    }
    ctx->pc = 0x2CCCA0u;
    {
        const bool branch_taken_0x2ccca0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccca0) {
            ctx->pc = 0x2CF144u;
            return;
        }
    }
    ctx->pc = 0x2CCCA8u;
label_2ccca8:
    // 0x2ccca8: 0x93210149  lbu         $at, 0x149($t9)
    ctx->pc = 0x2ccca8u;
    SET_GPR_ZE32(ctx, 1, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 329)));
label_2cccac:
    // 0x2cccac: 0x0  nop
    ctx->pc = 0x2cccacu;
    // NOP
label_2cccb0:
    // 0x2cccb0: 0x12600909  beqz        $s3, . + 4 + (0x909 << 2)
label_2cccb4:
    if (ctx->pc == 0x2CCCB4u) {
        ctx->pc = 0x2CCCB8u;
        goto label_2cccb8;
    }
    ctx->pc = 0x2CCCB0u;
    {
        const bool branch_taken_0x2cccb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cccb0) {
            ctx->pc = 0x2CF0D8u;
            return;
        }
    }
    ctx->pc = 0x2CCCB8u;
label_2cccb8:
    // 0x2cccb8: 0xffffbffe  sd          $ra, -0x4002($ra)
    ctx->pc = 0x2cccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294950910), GPR_U64(ctx, 31));
label_2cccbc:
    // 0x2cccbc: 0x1fb  dsra        $zero, $zero, 7
    ctx->pc = 0x2cccbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 7);
label_2cccc0:
    // 0x2cccc0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2cccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2cccc4:
    // 0x2cccc4: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cccc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cccc8:
    // 0x2cccc8: 0xfff7ffff  sd          $s7, -0x1($ra)
    ctx->pc = 0x2cccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 23));
label_2ccccc:
    // 0x2ccccc: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cccccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cccd0:
    // 0x2cccd0: 0xefdff7df  .word       0xEFDFF7DF                   # INVALID     $fp, $ra, -0x821 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cccd0u;
//     throw std::runtime_error("Unhandled opcode: 0x3B at 0x2CCCD0 raw=0xEFDFF7DF");
 /* MITIGATED */
label_2cccd4:
    // 0x2cccd4: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cccd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cccd8:
    // 0x2cccd8: 0x130101a8  beq         $t8, $at, . + 4 + (0x1A8 << 2)
label_2cccdc:
    if (ctx->pc == 0x2CCCDCu) {
        ctx->pc = 0x2CCCE0u;
        goto label_2ccce0;
    }
    ctx->pc = 0x2CCCD8u;
    {
        const bool branch_taken_0x2cccd8 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 1));
        if (branch_taken_0x2cccd8) {
            ctx->pc = 0x2CD37Cu;
            { ctx->pc = 0x2cd37c; return; }
        }
    }
    ctx->pc = 0x2CCCE0u;
label_2ccce0:
    // 0x2ccce0: 0x514008a8  beql        $t2, $zero, . + 4 + (0x8A8 << 2)
label_2ccce4:
    if (ctx->pc == 0x2CCCE4u) {
        ctx->pc = 0x2CCCE8u;
        goto label_2ccce8;
    }
    ctx->pc = 0x2CCCE0u;
    {
        const bool branch_taken_0x2ccce0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccce0) {
            ctx->pc = 0x2CEF84u;
            return;
        }
    }
    ctx->pc = 0x2CCCE8u;
label_2ccce8:
    // 0x2ccce8: 0xfffffffd  sd          $ra, -0x3($ra)
    ctx->pc = 0x2ccce8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967293), GPR_U64(ctx, 31));
label_2cccec:
    // 0x2cccec: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cccecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cccf0:
    // 0x2cccf0: 0xec7fff7f  .word       0xEC7FFF7F                   # INVALID     $v1, $ra, -0x81 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cccf0u;
//     throw std::runtime_error("Unhandled opcode: 0x3B at 0x2CCCF0 raw=0xEC7FFF7F");
 /* MITIGATED */
label_2cccf4:
    // 0x2cccf4: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cccf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cccf8:
    // 0x2cccf8: 0xec7fff7f  .word       0xEC7FFF7F                   # INVALID     $v1, $ra, -0x81 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cccf8u;
//     throw std::runtime_error("Unhandled opcode: 0x3B at 0x2CCCF8 raw=0xEC7FFF7F");
 /* MITIGATED */
label_2cccfc:
    // 0x2cccfc: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cccfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccd00:
    // 0x2ccd00: 0xffefbffa  sd          $t7, -0x4006($ra)
    ctx->pc = 0x2ccd00u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294950906), GPR_U64(ctx, 15));
label_2ccd04:
    // 0x2ccd04: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccd04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccd08:
    // 0x2ccd08: 0xdfdff7ff  ld          $ra, -0x801($fp)
    ctx->pc = 0x2ccd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 30), 4294965247)));
label_2ccd0c:
    // 0x2ccd0c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccd0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccd10:
    // 0x2ccd10: 0x3192081  .word       0x03192081                   # INVALID     $t8, $t9, 0x2081 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccd10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CCD10 raw=0x03192081");
 /* MITIGATED */
label_2ccd14:
    // 0x2ccd14: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2ccd14u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2ccd18:
    // 0x2ccd18: 0x3186401  .word       0x03186401                   # INVALID     $t8, $t8, 0x6401 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccd18u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2CCD18 raw=0x03186401");
 /* MITIGATED */
label_2ccd1c:
    // 0x2ccd1c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x2ccd1cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_2ccd20:
    // 0x2ccd20: 0x80005  .word       0x00080005                   # INVALID     $zero, $t0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccd20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2CCD20 raw=0x00080005");
 /* MITIGATED */
label_2ccd24:
    // 0x2ccd24: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x2ccd24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ccd28:
    // 0x2ccd28: 0x3002000  .word       0x03002000                   # sll         $a0, $zero, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccd28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_2ccd2c:
    // 0x2ccd2c: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ccd2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ccd30:
    // 0x2ccd30: 0x80405  .word       0x00080405                   # INVALID     $zero, $t0, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccd30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2CCD30 raw=0x00080405");
 /* MITIGATED */
label_2ccd34:
    // 0x2ccd34: 0x0  nop
    ctx->pc = 0x2ccd34u;
    // NOP
label_2ccd38:
    // 0x2ccd38: 0xfbf7fdfe  sqc2        $vf23, -0x202($ra)
    ctx->pc = 0x2ccd38u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294966782), _mm_castps_si128(ctx->vu0_vf[23]));
label_2ccd3c:
    // 0x2ccd3c: 0x1fd  .word       0x000001FD                   # INVALID     $zero, $zero, 0x1FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccd3cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2CCD3C raw=0x000001FD");
 /* MITIGATED */
label_2ccd40:
    // 0x2ccd40: 0x9f7fffff  lwu         $ra, -0x1($k1)
    ctx->pc = 0x2ccd40u;
    SET_GPR_ZE32(ctx, 31, READ32(ADD32(GPR_U32(ctx, 27), 4294967295)));
label_2ccd44:
    // 0x2ccd44: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccd44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccd48:
    // 0x2ccd48: 0x8f7fffdf  lw          $ra, -0x21($k1)
    ctx->pc = 0x2ccd48u;
    SET_GPR_S32(ctx, 31, (int32_t)READ32(ADD32(GPR_U32(ctx, 27), 4294967263)));
label_2ccd4c:
    // 0x2ccd4c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccd4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccd50:
    // 0x2ccd50: 0xfffedf7f  sd          $fp, -0x2081($ra)
    ctx->pc = 0x2ccd50u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294958975), GPR_U64(ctx, 30));
label_2ccd54:
    // 0x2ccd54: 0x19f  .word       0x0000019F                   # ddivu       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccd54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2CCD54 raw=0x0000019F");
 /* MITIGATED */
label_2ccd58:
    // 0x2ccd58: 0x434120a0  .word       0x434120A0                   # INVALID     $k0, $at, 0x20A0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ccd58u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2CCD58 raw=0x434120A0");
 /* MITIGATED */
label_2ccd5c:
    // 0x2ccd5c: 0x0  nop
    ctx->pc = 0x2ccd5cu;
    // NOP
label_2ccd60:
    // 0x2ccd60: 0x70c02020  madd1       $a0, $a2, $zero
    ctx->pc = 0x2ccd60u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2ccd64:
    // 0x2ccd64: 0x0  nop
    ctx->pc = 0x2ccd64u;
    // NOP
label_2ccd68:
    // 0x2ccd68: 0x50d00024  beql        $a2, $s0, . + 4 + (0x24 << 2)
label_2ccd6c:
    if (ctx->pc == 0x2CCD6Cu) {
        ctx->pc = 0x2CCD70u;
        goto label_2ccd70;
    }
    ctx->pc = 0x2CCD68u;
    {
        const bool branch_taken_0x2ccd68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        if (branch_taken_0x2ccd68) {
            ctx->pc = 0x2CCDFCu;
            goto label_2ccdfc;
        }
    }
    ctx->pc = 0x2CCD70u;
label_2ccd70:
    // 0x2ccd70: 0x54400424  bnel        $v0, $zero, . + 4 + (0x424 << 2)
label_2ccd74:
    if (ctx->pc == 0x2CCD74u) {
        ctx->pc = 0x2CCD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD70u;
        // 0x2ccd74: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCD78u;
        goto label_2ccd78;
    }
    ctx->pc = 0x2CCD70u;
    {
        const bool branch_taken_0x2ccd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd70) {
            ctx->pc = 0x2CCD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCD70u;
            // 0x2ccd74: 0x2  srl         $zero, $zero, 0 (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE04u;
            { ctx->pc = 0x2cde04; return; }
        }
    }
    ctx->pc = 0x2CCD78u;
label_2ccd78:
    // 0x2ccd78: 0x0  nop
    ctx->pc = 0x2ccd78u;
    // NOP
label_2ccd7c:
    // 0x2ccd7c: 0x0  nop
    ctx->pc = 0x2ccd7cu;
    // NOP
label_2ccd80:
    // 0x2ccd80: 0x0  nop
    ctx->pc = 0x2ccd80u;
    // NOP
label_2ccd84:
    // 0x2ccd84: 0x0  nop
    ctx->pc = 0x2ccd84u;
    // NOP
label_2ccd88:
    // 0x2ccd88: 0x0  nop
    ctx->pc = 0x2ccd88u;
    // NOP
label_2ccd8c:
    // 0x2ccd8c: 0x0  nop
    ctx->pc = 0x2ccd8cu;
    // NOP
label_2ccd90:
    // 0x2ccd90: 0x0  nop
    ctx->pc = 0x2ccd90u;
    // NOP
label_2ccd94:
    // 0x2ccd94: 0x0  nop
    ctx->pc = 0x2ccd94u;
    // NOP
label_2ccd98:
    // 0x2ccd98: 0x0  nop
    ctx->pc = 0x2ccd98u;
    // NOP
label_2ccd9c:
    // 0x2ccd9c: 0x0  nop
    ctx->pc = 0x2ccd9cu;
    // NOP
label_2ccda0:
    // 0x2ccda0: 0x0  nop
    ctx->pc = 0x2ccda0u;
    // NOP
label_2ccda4:
    // 0x2ccda4: 0x0  nop
    ctx->pc = 0x2ccda4u;
    // NOP
label_2ccda8:
    // 0x2ccda8: 0x0  nop
    ctx->pc = 0x2ccda8u;
    // NOP
label_2ccdac:
    // 0x2ccdac: 0x0  nop
    ctx->pc = 0x2ccdacu;
    // NOP
label_2ccdb0:
    // 0x2ccdb0: 0x0  nop
    ctx->pc = 0x2ccdb0u;
    // NOP
label_2ccdb4:
    // 0x2ccdb4: 0x0  nop
    ctx->pc = 0x2ccdb4u;
    // NOP
label_2ccdb8:
    // 0x2ccdb8: 0x0  nop
    ctx->pc = 0x2ccdb8u;
    // NOP
label_2ccdbc:
    // 0x2ccdbc: 0x0  nop
    ctx->pc = 0x2ccdbcu;
    // NOP
label_2ccdc0:
    // 0x2ccdc0: 0x0  nop
    ctx->pc = 0x2ccdc0u;
    // NOP
label_2ccdc4:
    // 0x2ccdc4: 0x0  nop
    ctx->pc = 0x2ccdc4u;
    // NOP
label_2ccdc8:
    // 0x2ccdc8: 0x0  nop
    ctx->pc = 0x2ccdc8u;
    // NOP
label_2ccdcc:
    // 0x2ccdcc: 0x0  nop
    ctx->pc = 0x2ccdccu;
    // NOP
label_2ccdd0:
    // 0x2ccdd0: 0x0  nop
    ctx->pc = 0x2ccdd0u;
    // NOP
label_2ccdd4:
    // 0x2ccdd4: 0x0  nop
    ctx->pc = 0x2ccdd4u;
    // NOP
label_2ccdd8:
    // 0x2ccdd8: 0x0  nop
    ctx->pc = 0x2ccdd8u;
    // NOP
label_2ccddc:
    // 0x2ccddc: 0x0  nop
    ctx->pc = 0x2ccddcu;
    // NOP
label_2ccde0:
    // 0x2ccde0: 0xf7ffffff  sdc1        $f31, -0x1($ra)
    ctx->pc = 0x2ccde0u;
//     throw std::runtime_error("Unhandled opcode: 0x3D at 0x2CCDE0 raw=0xF7FFFFFF");
 /* MITIGATED */
label_2ccde4:
    // 0x2ccde4: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccde4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccde8:
    // 0x2ccde8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2ccde8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2ccdec:
    // 0x2ccdec: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccdecu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2ccdf0:
    // 0x2ccdf0: 0xffbdedff  sd          $sp, -0x1201($sp)
    ctx->pc = 0x2ccdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294962687), GPR_U64(ctx, 29));
label_2ccdf4:
    // 0x2ccdf4: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccdf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccdf8:
    // 0x2ccdf8: 0xfffb37f1  sd          $k1, 0x37F1($ra)
    ctx->pc = 0x2ccdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 14321), GPR_U64(ctx, 27));
label_2ccdfc:
    // 0x2ccdfc: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccdfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce00:
    // 0x2cce00: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2cce00u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2cce04:
    // 0x2cce04: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cce04u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cce08:
    // 0x2cce08: 0xf7ffffff  sdc1        $f31, -0x1($ra)
    ctx->pc = 0x2cce08u;
//     throw std::runtime_error("Unhandled opcode: 0x3D at 0x2CCE08 raw=0xF7FFFFFF");
 /* MITIGATED */
label_2cce0c:
    // 0x2cce0c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce10:
    // 0x2cce10: 0xffbdedff  sd          $sp, -0x1201($sp)
    ctx->pc = 0x2cce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294962687), GPR_U64(ctx, 29));
label_2cce14:
    // 0x2cce14: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce18:
    // 0x2cce18: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2cce18u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2cce1c:
    // 0x2cce1c: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cce1cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cce20:
    // 0x2cce20: 0xffbdedff  sd          $sp, -0x1201($sp)
    ctx->pc = 0x2cce20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294962687), GPR_U64(ctx, 29));
label_2cce24:
    // 0x2cce24: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce28:
    // 0x2cce28: 0xdffbbffb  ld          $k1, -0x4005($ra)
    ctx->pc = 0x2cce28u;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 31), 4294950907)));
label_2cce2c:
    // 0x2cce2c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce30:
    // 0x2cce30: 0xffffefff  sd          $ra, -0x1001($ra)
    ctx->pc = 0x2cce30u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294963199), GPR_U64(ctx, 31));
label_2cce34:
    // 0x2cce34: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce38:
    // 0x2cce38: 0xfffffdff  sd          $ra, -0x201($ra)
    ctx->pc = 0x2cce38u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294966783), GPR_U64(ctx, 31));
label_2cce3c:
    // 0x2cce3c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce40:
    // 0x2cce40: 0xffbdedff  sd          $sp, -0x1201($sp)
    ctx->pc = 0x2cce40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294962687), GPR_U64(ctx, 29));
label_2cce44:
    // 0x2cce44: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce48:
    // 0x2cce48: 0xdffbffff  ld          $k1, -0x1($ra)
    ctx->pc = 0x2cce48u;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 31), 4294967295)));
label_2cce4c:
    // 0x2cce4c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce50:
    // 0x2cce50: 0xf7ffffff  sdc1        $f31, -0x1($ra)
    ctx->pc = 0x2cce50u;
//     throw std::runtime_error("Unhandled opcode: 0x3D at 0x2CCE50 raw=0xF7FFFFFF");
 /* MITIGATED */
label_2cce54:
    // 0x2cce54: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce58:
    // 0x2cce58: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2cce58u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2cce5c:
    // 0x2cce5c: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cce5cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cce60:
    // 0x2cce60: 0xffbfedff  sd          $ra, -0x1201($sp)
    ctx->pc = 0x2cce60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294962687), GPR_U64(ctx, 31));
label_2cce64:
    // 0x2cce64: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce68:
    // 0x2cce68: 0xfffdffff  sd          $sp, -0x1($ra)
    ctx->pc = 0x2cce68u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 29));
label_2cce6c:
    // 0x2cce6c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce70:
    // 0x2cce70: 0xf7ffffff  sdc1        $f31, -0x1($ra)
    ctx->pc = 0x2cce70u;
//     throw std::runtime_error("Unhandled opcode: 0x3D at 0x2CCE70 raw=0xF7FFFFFF");
 /* MITIGATED */
label_2cce74:
    // 0x2cce74: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce78:
    // 0x2cce78: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2cce78u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2cce7c:
    // 0x2cce7c: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cce7cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cce80:
    // 0x2cce80: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2cce80u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2cce84:
    // 0x2cce84: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cce84u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cce88:
    // 0x2cce88: 0xffbdffff  sd          $sp, -0x1($sp)
    ctx->pc = 0x2cce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294967295), GPR_U64(ctx, 29));
label_2cce8c:
    // 0x2cce8c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce90:
    // 0x2cce90: 0xffbdedff  sd          $sp, -0x1201($sp)
    ctx->pc = 0x2cce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294962687), GPR_U64(ctx, 29));
label_2cce94:
    // 0x2cce94: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cce98:
    // 0x2cce98: 0xdffbffff  ld          $k1, -0x1($ra)
    ctx->pc = 0x2cce98u;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 31), 4294967295)));
label_2cce9c:
    // 0x2cce9c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cce9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccea0:
    // 0x2ccea0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2ccea0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2ccea4:
    // 0x2ccea4: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccea4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2ccea8:
    // 0x2ccea8: 0xdffbffff  ld          $k1, -0x1($ra)
    ctx->pc = 0x2ccea8u;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 31), 4294967295)));
label_2cceac:
    // 0x2cceac: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cceacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cceb0:
    // 0x2cceb0: 0xffbdedff  sd          $sp, -0x1201($sp)
    ctx->pc = 0x2cceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294962687), GPR_U64(ctx, 29));
label_2cceb4:
    // 0x2cceb4: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cceb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cceb8:
    // 0x2cceb8: 0xffbfedff  sd          $ra, -0x1201($sp)
    ctx->pc = 0x2cceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294962687), GPR_U64(ctx, 31));
label_2ccebc:
    // 0x2ccebc: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccec0:
    // 0x2ccec0: 0xf7ffffff  sdc1        $f31, -0x1($ra)
    ctx->pc = 0x2ccec0u;
//     throw std::runtime_error("Unhandled opcode: 0x3D at 0x2CCEC0 raw=0xF7FFFFFF");
 /* MITIGATED */
label_2ccec4:
    // 0x2ccec4: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccec8:
    // 0x2ccec8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2ccec8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2ccecc:
    // 0x2ccecc: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cceccu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2cced0:
    // 0x2cced0: 0xf7ffffff  sdc1        $f31, -0x1($ra)
    ctx->pc = 0x2cced0u;
//     throw std::runtime_error("Unhandled opcode: 0x3D at 0x2CCED0 raw=0xF7FFFFFF");
 /* MITIGATED */
label_2cced4:
    // 0x2cced4: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2cced4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2cced8:
    // 0x2cced8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2cced8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2ccedc:
    // 0x2ccedc: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccedcu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2ccee0:
    // 0x2ccee0: 0x9ffbffff  lwu         $k1, -0x1($ra)
    ctx->pc = 0x2ccee0u;
    SET_GPR_ZE32(ctx, 27, READ32(ADD32(GPR_U32(ctx, 31), 4294967295)));
label_2ccee4:
    // 0x2ccee4: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccee8:
    // 0x2ccee8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2ccee8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2cceec:
    // 0x2cceec: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cceecu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2ccef0:
    // 0x2ccef0: 0xffbfedff  sd          $ra, -0x1201($sp)
    ctx->pc = 0x2ccef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294962687), GPR_U64(ctx, 31));
label_2ccef4:
    // 0x2ccef4: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccef8:
    // 0x2ccef8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2ccef8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2ccefc:
    // 0x2ccefc: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccefcu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2ccf00:
    // 0x2ccf00: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2ccf00u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2ccf04:
    // 0x2ccf04: 0x1e7  .word       0x000001E7                   # not         $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf04u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2ccf08:
    // 0x2ccf08: 0xfffdffff  sd          $sp, -0x1($ra)
    ctx->pc = 0x2ccf08u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 29));
label_2ccf0c:
    // 0x2ccf0c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccf0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccf10:
    // 0x2ccf10: 0xdffbffff  ld          $k1, -0x1($ra)
    ctx->pc = 0x2ccf10u;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 31), 4294967295)));
label_2ccf14:
    // 0x2ccf14: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccf14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccf18:
    // 0x2ccf18: 0xf7ffffff  sdc1        $f31, -0x1($ra)
    ctx->pc = 0x2ccf18u;
//     throw std::runtime_error("Unhandled opcode: 0x3D at 0x2CCF18 raw=0xF7FFFFFF");
 /* MITIGATED */
label_2ccf1c:
    // 0x2ccf1c: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccf1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccf20:
    // 0x2ccf20: 0xfffdffff  sd          $sp, -0x1($ra)
    ctx->pc = 0x2ccf20u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 29));
label_2ccf24:
    // 0x2ccf24: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x2ccf24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_2ccf28:
    // 0x2ccf28: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x2ccf28u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_2ccf2c:
    // 0x2ccf2c: 0x1ef  .word       0x000001EF                   # dsubu       $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf2cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2ccf30:
    // 0x2ccf30: 0x0  nop
    ctx->pc = 0x2ccf30u;
    // NOP
label_2ccf34:
    // 0x2ccf34: 0x0  nop
    ctx->pc = 0x2ccf34u;
    // NOP
label_2ccf38:
    // 0x2ccf38: 0x0  nop
    ctx->pc = 0x2ccf38u;
    // NOP
label_2ccf3c:
    // 0x2ccf3c: 0x0  nop
    ctx->pc = 0x2ccf3cu;
    // NOP
label_2ccf40:
    // 0x2ccf40: 0x0  nop
    ctx->pc = 0x2ccf40u;
    // NOP
label_2ccf44:
    // 0x2ccf44: 0x0  nop
    ctx->pc = 0x2ccf44u;
    // NOP
label_2ccf48:
    // 0x2ccf48: 0x5031  tgeu        $zero, $zero, 320
    ctx->pc = 0x2ccf48u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ccf4c:
    // 0x2ccf4c: 0x0  nop
    ctx->pc = 0x2ccf4cu;
    // NOP
label_2ccf50:
    // 0x2ccf50: 0x1e98e4  .word       0x001E98E4                   # and         $s3, $zero, $fp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 30));
label_2ccf54:
    // 0x2ccf54: 0x1e9998  .word       0x001E9998                   # mult        $s3, $zero, $fp # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ccf54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_2ccf58:
    // 0x2ccf58: 0x1e99b8  dsll        $s3, $fp, 6
    ctx->pc = 0x2ccf58u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 30) << 6);
label_2ccf5c:
    // 0x2ccf5c: 0x1e99d8  .word       0x001E99D8                   # mult        $s3, $zero, $fp # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ccf5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_2ccf60:
    // 0x2ccf60: 0x1e9a94  .word       0x001E9A94                   # dsllv       $s3, $fp, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 30) << (GPR_U32(ctx, 0) & 0x3F));
label_2ccf64:
    // 0x2ccf64: 0x1e9948  .word       0x001E9948                   # jr          $zero # 001E9940 <InstrIdType: CPU_SPECIAL>
label_2ccf68:
    if (ctx->pc == 0x2CCF68u) {
        ctx->pc = 0x2CCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF64u;
        // 0x2ccf68: 0x1e9948  .word       0x001E9948                   # jr          $zero # 001E9940 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCF6Cu;
        goto label_2ccf6c;
    }
    ctx->pc = 0x2CCF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF64u;
        // 0x2ccf68: 0x1e9948  .word       0x001E9948                   # jr          $zero # 001E9940 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCF64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CCF6Cu;
label_2ccf6c:
    // 0x2ccf6c: 0x1e9988  .word       0x001E9988                   # jr          $zero # 001E9980 <InstrIdType: CPU_SPECIAL>
label_2ccf70:
    if (ctx->pc == 0x2CCF70u) {
        ctx->pc = 0x2CCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF6Cu;
        // 0x2ccf70: 0x1e9b0c  .word       0x001E9B0C                   # syscall     620 # 001E0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x2CCF74u;
        runtime->handleSyscall(rdram, ctx, 0x7A6Cu);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCF74u;
        goto label_2ccf74;
    }
    ctx->pc = 0x2CCF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF6Cu;
        // 0x2ccf70: 0x1e9b0c  .word       0x001E9B0C                   # syscall     620 # 001E0000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x2CCF74u;
        runtime->handleSyscall(rdram, ctx, 0x7A6Cu);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCF6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CCF74u;
label_2ccf74:
    // 0x2ccf74: 0x1e9a44  .word       0x001E9A44                   # sllv        $s3, $fp, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf74u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 30), GPR_U32(ctx, 0) & 0x1F));
label_2ccf78:
    // 0x2ccf78: 0x1e99f8  dsll        $s3, $fp, 7
    ctx->pc = 0x2ccf78u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 30) << 7);
label_2ccf7c:
    // 0x2ccf7c: 0x1e9ab4  teq         $zero, $fp, 618
    ctx->pc = 0x2ccf7cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_2ccf80:
    // 0x2ccf80: 0x1e9ac8  .word       0x001E9AC8                   # jr          $zero # 001E9AC0 <InstrIdType: CPU_SPECIAL>
label_2ccf84:
    if (ctx->pc == 0x2CCF84u) {
        ctx->pc = 0x2CCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF80u;
        // 0x2ccf84: 0x1e9928  .word       0x001E9928                   # mfsa        $s3 # 001E0100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 19, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCF88u;
        goto label_2ccf88;
    }
    ctx->pc = 0x2CCF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF80u;
        // 0x2ccf84: 0x1e9928  .word       0x001E9928                   # mfsa        $s3 # 001E0100 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 19, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCF80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CCF88u;
label_2ccf88:
    // 0x2ccf88: 0x1e9b0c  .word       0x001E9B0C                   # syscall     620 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf88u;
    ctx->pc = 0x2CCF8Cu;
runtime->handleSyscall(rdram, ctx, 0x7A6Cu);
label_2ccf8c:
    // 0x2ccf8c: 0x1e9b0c  .word       0x001E9B0C                   # syscall     620 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf8cu;
    ctx->pc = 0x2CCF90u;
runtime->handleSyscall(rdram, ctx, 0x7A6Cu);
label_2ccf90:
    // 0x2ccf90: 0x1e9b0c  .word       0x001E9B0C                   # syscall     620 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf90u;
    ctx->pc = 0x2CCF94u;
runtime->handleSyscall(rdram, ctx, 0x7A6Cu);
label_2ccf94:
    // 0x2ccf94: 0x1e9b0c  .word       0x001E9B0C                   # syscall     620 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf94u;
    ctx->pc = 0x2CCF98u;
runtime->handleSyscall(rdram, ctx, 0x7A6Cu);
label_2ccf98:
    // 0x2ccf98: 0x1e9b0c  .word       0x001E9B0C                   # syscall     620 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf98u;
    ctx->pc = 0x2CCF9Cu;
runtime->handleSyscall(rdram, ctx, 0x7A6Cu);
label_2ccf9c:
    // 0x2ccf9c: 0x1e9b0c  .word       0x001E9B0C                   # syscall     620 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccf9cu;
    ctx->pc = 0x2CCFA0u;
runtime->handleSyscall(rdram, ctx, 0x7A6Cu);
label_2ccfa0:
    // 0x2ccfa0: 0x1e98e4  .word       0x001E98E4                   # and         $s3, $zero, $fp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccfa0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 30));
label_2ccfa4:
    // 0x2ccfa4: 0x1e9908  .word       0x001E9908                   # jr          $zero # 001E9900 <InstrIdType: CPU_SPECIAL>
label_2ccfa8:
    if (ctx->pc == 0x2CCFA8u) {
        ctx->pc = 0x2CCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFA4u;
        // 0x2ccfa8: 0x1e9ad8  .word       0x001E9AD8                   # mult        $s3, $zero, $fp # 000002C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCFACu;
        goto label_2ccfac;
    }
    ctx->pc = 0x2CCFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFA4u;
        // 0x2ccfa8: 0x1e9ad8  .word       0x001E9AD8                   # mult        $s3, $zero, $fp # 000002C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCFA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CCFACu;
label_2ccfac:
    // 0x2ccfac: 0x1e9ae8  .word       0x001E9AE8                   # mfsa        $s3 # 001E02C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ccfacu;
    SET_GPR_U32(ctx, 19, ctx->sa);
label_2ccfb0:
    // 0x2ccfb0: 0x1e9b0c  .word       0x001E9B0C                   # syscall     620 # 001E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccfb0u;
    ctx->pc = 0x2CCFB4u;
runtime->handleSyscall(rdram, ctx, 0x7A6Cu);
label_2ccfb4:
    // 0x2ccfb4: 0x1e9af8  dsll        $s3, $fp, 11
    ctx->pc = 0x2ccfb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 30) << 11);
label_2ccfb8:
    // 0x2ccfb8: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x2ccfb8u;
    // NOP (addi to $zero)
label_2ccfbc:
    // 0x2ccfbc: 0x45524620  .word       0x45524620                   # INVALID     $t2, $s2, 0x4620 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ccfbcu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x20 at 0x2CCFBC raw=0x45524620");
 /* MITIGATED */
label_2ccfc0:
    // 0x2ccfc0: 0x4f4d2045  .word       0x4F4D2045                   # INVALID     $k0, $t5, 0x2045 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccfc0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCFC0 raw=0x4F4D2045");
 /* MITIGATED */
label_2ccfc4:
    // 0x2ccfc4: 0x4544  .word       0x00004544                   # sllv        $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccfc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2ccfc8:
    // 0x2ccfc8: 0x20202020  addi        $zero, $at, 0x2020
    ctx->pc = 0x2ccfc8u;
    // NOP (addi to $zero)
label_2ccfcc:
    // 0x2ccfcc: 0x4f53554d  .word       0x4F53554D                   # INVALID     $k0, $s3, 0x554D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccfccu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCFCC raw=0x4F53554D");
 /* MITIGATED */
label_2ccfd0:
    // 0x2ccfd0: 0x4f4d2055  .word       0x4F4D2055                   # INVALID     $k0, $t5, 0x2055 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccfd0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCFD0 raw=0x4F4D2055");
 /* MITIGATED */
label_2ccfd4:
    // 0x2ccfd4: 0x4544  .word       0x00004544                   # sllv        $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccfd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2ccfd8:
    // 0x2ccfd8: 0x56202020  bnel        $s1, $zero, . + 4 + (0x2020 << 2)
label_2ccfdc:
    if (ctx->pc == 0x2CCFDCu) {
        ctx->pc = 0x2CCFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCFD8u;
        // 0x2ccfdc: 0x55535245  bnel        $t2, $s3, . + 4 + (0x5245 << 2) (Delay Slot)
        // Likely branch instruction at 0x2CCFDC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CCFE0u;
        goto label_2ccfe0;
    }
    ctx->pc = 0x2CCFD8u;
    {
        const bool branch_taken_0x2ccfd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccfd8) {
            ctx->pc = 0x2CCFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCFD8u;
            // 0x2ccfdc: 0x55535245  bnel        $t2, $s3, . + 4 + (0x5245 << 2) (Delay Slot)
            // Likely branch instruction at 0x2CCFDC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D505Cu;
            return;
        }
    }
    ctx->pc = 0x2CCFE0u;
label_2ccfe0:
    // 0x2ccfe0: 0x4f4d2053  .word       0x4F4D2053                   # INVALID     $k0, $t5, 0x2053 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccfe0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCFE0 raw=0x4F4D2053");
 /* MITIGATED */
label_2ccfe4:
    // 0x2ccfe4: 0x4544  .word       0x00004544                   # sllv        $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccfe4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2ccfe8:
    // 0x2ccfe8: 0x4c414843  .word       0x4C414843                   # INVALID     $v0, $at, 0x4843 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccfe8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCFE8 raw=0x4C414843");
 /* MITIGATED */
label_2ccfec:
    // 0x2ccfec: 0x474e454c  .word       0x474E454C                   # INVALID     $k0, $t6, 0x454C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2ccfecu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0xC at 0x2CCFEC raw=0x474E454C");
 /* MITIGATED */
label_2ccff0:
    // 0x2ccff0: 0x4f4d2045  .word       0x4F4D2045                   # INVALID     $k0, $t5, 0x2045 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ccff0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CCFF0 raw=0x4F4D2045");
 /* MITIGATED */
label_2ccff4:
    // 0x2ccff4: 0x4544  .word       0x00004544                   # sllv        $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ccff4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2ccff8:
    // 0x2ccff8: 0x0  nop
    ctx->pc = 0x2ccff8u;
    // NOP
label_2ccffc:
    // 0x2ccffc: 0x0  nop
    ctx->pc = 0x2ccffcu;
    // NOP
label_2cd000:
    // 0x2cd000: 0x1eadb8  dsll        $s5, $fp, 22
    ctx->pc = 0x2cd000u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 30) << 22);
label_2cd004:
    // 0x2cd004: 0x1eadc8  .word       0x001EADC8                   # jr          $zero # 001EADC0 <InstrIdType: CPU_SPECIAL>
label_2cd008:
    if (ctx->pc == 0x2CD008u) {
        ctx->pc = 0x2CD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD004u;
        // 0x2cd008: 0x1eadc8  .word       0x001EADC8                   # jr          $zero # 001EADC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD00Cu;
        goto label_2cd00c;
    }
    ctx->pc = 0x2CD004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CD008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD004u;
        // 0x2cd008: 0x1eadc8  .word       0x001EADC8                   # jr          $zero # 001EADC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD004u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CD00Cu;
label_2cd00c:
    // 0x2cd00c: 0x1eadb0  tge         $zero, $fp, 694
    ctx->pc = 0x2cd00cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_2cd010:
    // 0x2cd010: 0x1eadc8  .word       0x001EADC8                   # jr          $zero # 001EADC0 <InstrIdType: CPU_SPECIAL>
label_2cd014:
    if (ctx->pc == 0x2CD014u) {
        ctx->pc = 0x2CD014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD010u;
        // 0x2cd014: 0x1eadc0  sll         $s5, $fp, 23 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD018u;
        goto label_2cd018;
    }
    ctx->pc = 0x2CD010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CD014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD010u;
        // 0x2cd014: 0x1eadc0  sll         $s5, $fp, 23 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 30), 23));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD010u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CD018u;
label_2cd018:
    // 0x2cd018: 0x1eadc8  .word       0x001EADC8                   # jr          $zero # 001EADC0 <InstrIdType: CPU_SPECIAL>
label_2cd01c:
    if (ctx->pc == 0x2CD01Cu) {
        ctx->pc = 0x2CD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD018u;
        // 0x2cd01c: 0x1eadc8  .word       0x001EADC8                   # jr          $zero # 001EADC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD020u;
        goto label_2cd020;
    }
    ctx->pc = 0x2CD018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD018u;
        // 0x2cd01c: 0x1eadc8  .word       0x001EADC8                   # jr          $zero # 001EADC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CD020u;
label_2cd020:
    // 0x2cd020: 0x1eadc8  .word       0x001EADC8                   # jr          $zero # 001EADC0 <InstrIdType: CPU_SPECIAL>
label_2cd024:
    if (ctx->pc == 0x2CD024u) {
        ctx->pc = 0x2CD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD020u;
        // 0x2cd024: 0x1eadb8  dsll        $s5, $fp, 22 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 30) << 22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD028u;
        goto label_2cd028;
    }
    ctx->pc = 0x2CD020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2CD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD020u;
        // 0x2cd024: 0x1eadb8  dsll        $s5, $fp, 22 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 30) << 22);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD020u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CD028u;
label_2cd028:
    // 0x2cd028: 0x1eadb8  dsll        $s5, $fp, 22
    ctx->pc = 0x2cd028u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 30) << 22);
label_2cd02c:
    // 0x2cd02c: 0x1eadb0  tge         $zero, $fp, 694
    ctx->pc = 0x2cd02cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_2cd030:
    // 0x2cd030: 0x1eadb0  tge         $zero, $fp, 694
    ctx->pc = 0x2cd030u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_2cd034:
    // 0x2cd034: 0x1eadb0  tge         $zero, $fp, 694
    ctx->pc = 0x2cd034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_2cd038:
    // 0x2cd038: 0x1eadb0  tge         $zero, $fp, 694
    ctx->pc = 0x2cd038u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 30)) { runtime->handleTrap(rdram, ctx); }
label_2cd03c:
    // 0x2cd03c: 0x0  nop
    ctx->pc = 0x2cd03cu;
    // NOP
label_2cd040:
    // 0x2cd040: 0x454d4954  .word       0x454D4954                   # INVALID     $t2, $t5, 0x4954 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cd040u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x14 at 0x2CD040 raw=0x454D4954");
 /* MITIGATED */
label_2cd044:
    // 0x2cd044: 0x505520  .word       0x00505520                   # add         $t2, $v0, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd044u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2cd048:
    // 0x2cd048: 0x27643225  addiu       $a0, $k1, 0x3225
    ctx->pc = 0x2cd048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 27), 12837));
label_2cd04c:
    // 0x2cd04c: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x2cd04cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_2cd050:
    // 0x2cd050: 0x32302522  andi        $s0, $s1, 0x2522
    ctx->pc = 0x2cd050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9506);
label_2cd054:
    // 0x2cd054: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd054u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cd058:
    // 0x2cd058: 0x27643325  addiu       $a0, $k1, 0x3325
    ctx->pc = 0x2cd058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 27), 13093));
label_2cd05c:
    // 0x2cd05c: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x2cd05cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_2cd060:
    // 0x2cd060: 0x32302522  andi        $s0, $s1, 0x2522
    ctx->pc = 0x2cd060u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9506);
label_2cd064:
    // 0x2cd064: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd064u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cd068:
    // 0x2cd068: 0x0  nop
    ctx->pc = 0x2cd068u;
    // NOP
label_2cd06c:
    // 0x2cd06c: 0x0  nop
    ctx->pc = 0x2cd06cu;
    // NOP
label_2cd070:
    // 0x2cd070: 0x31252d20  andi        $a1, $t1, 0x2D20
    ctx->pc = 0x2cd070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)11552);
label_2cd074:
    // 0x2cd074: 0x30252764  andi        $a1, $at, 0x2764
    ctx->pc = 0x2cd074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)10084);
label_2cd078:
    // 0x2cd078: 0x25226432  addiu       $v0, $t1, 0x6432
    ctx->pc = 0x2cd078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 25650));
label_2cd07c:
    // 0x2cd07c: 0x643230  tge         $v1, $a0, 200
    ctx->pc = 0x2cd07cu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2cd080:
    // 0x2cd080: 0x31252b20  andi        $a1, $t1, 0x2B20
    ctx->pc = 0x2cd080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)11040);
label_2cd084:
    // 0x2cd084: 0x30252764  andi        $a1, $at, 0x2764
    ctx->pc = 0x2cd084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)10084);
label_2cd088:
    // 0x2cd088: 0x25226432  addiu       $v0, $t1, 0x6432
    ctx->pc = 0x2cd088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 25650));
label_2cd08c:
    // 0x2cd08c: 0x643230  tge         $v1, $a0, 200
    ctx->pc = 0x2cd08cu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_2cd090:
    // 0x2cd090: 0x0  nop
    ctx->pc = 0x2cd090u;
    // NOP
label_2cd094:
    // 0x2cd094: 0x0  nop
    ctx->pc = 0x2cd094u;
    // NOP
label_2cd098:
    // 0x2cd098: 0x48535550  .word       0x48535550                   # cfc2.ni     $s3, $vi10 # 00000550 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2cd098u;
    SET_GPR_U32(ctx, 19, static_cast<uint32_t>(ctx->vi[10]));
label_2cd09c:
    // 0x2cd09c: 0x41545320  .word       0x41545320                   # INVALID     $t2, $s4, 0x5320 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cd09cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2CD09C raw=0x41545320");
 /* MITIGATED */
label_2cd0a0:
    // 0x2cd0a0: 0x5452  .word       0x00005452                   # mflo        $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd0a0u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_2cd0a4:
    // 0x2cd0a4: 0x0  nop
    ctx->pc = 0x2cd0a4u;
    // NOP
label_2cd0a8:
    // 0x2cd0a8: 0x50205032  beql        $at, $zero, . + 4 + (0x5032 << 2)
label_2cd0ac:
    if (ctx->pc == 0x2CD0ACu) {
        ctx->pc = 0x2CD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0A8u;
        // 0x2cd0ac: 0x20485355  addi        $t0, $v0, 0x5355 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21333, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD0B0u;
        goto label_2cd0b0;
    }
    ctx->pc = 0x2CD0A8u;
    {
        const bool branch_taken_0x2cd0a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd0a8) {
            ctx->pc = 0x2CD0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD0A8u;
            // 0x2cd0ac: 0x20485355  addi        $t0, $v0, 0x5355 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21333, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1174u;
            return;
        }
    }
    ctx->pc = 0x2CD0B0u;
label_2cd0b0:
    // 0x2cd0b0: 0x52415453  beql        $s2, $at, . + 4 + (0x5453 << 2)
label_2cd0b4:
    if (ctx->pc == 0x2CD0B4u) {
        ctx->pc = 0x2CD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0B0u;
        // 0x2cd0b4: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD0B8u;
        goto label_2cd0b8;
    }
    ctx->pc = 0x2CD0B0u;
    {
        const bool branch_taken_0x2cd0b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x2cd0b0) {
            ctx->pc = 0x2CD0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD0B0u;
            // 0x2cd0b4: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2200u;
            return;
        }
    }
    ctx->pc = 0x2CD0B8u;
label_2cd0b8:
    // 0x2cd0b8: 0x57205032  bnel        $t9, $zero, . + 4 + (0x5032 << 2)
label_2cd0bc:
    if (ctx->pc == 0x2CD0BCu) {
        ctx->pc = 0x2CD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0B8u;
        // 0x2cd0bc: 0x49544941  .word       0x49544941                   # INVALID     $t2, $s4, 0x4941 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//         throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2CD0BC raw=0x49544941");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD0C0u;
        goto label_2cd0c0;
    }
    ctx->pc = 0x2CD0B8u;
    {
        const bool branch_taken_0x2cd0b8 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd0b8) {
            ctx->pc = 0x2CD0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD0B8u;
            // 0x2cd0bc: 0x49544941  .word       0x49544941                   # INVALID     $t2, $s4, 0x4941 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//             throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2CD0BC raw=0x49544941");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1184u;
            return;
        }
    }
    ctx->pc = 0x2CD0C0u;
label_2cd0c0:
    // 0x2cd0c0: 0x2e2e474e  sltiu       $t6, $s1, 0x474E
    ctx->pc = 0x2cd0c0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)18254) ? 1 : 0);
label_2cd0c4:
    // 0x2cd0c4: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cd0c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cd0c8:
    // 0x2cd0c8: 0x0  nop
    ctx->pc = 0x2cd0c8u;
    // NOP
label_2cd0cc:
    // 0x2cd0cc: 0x0  nop
    ctx->pc = 0x2cd0ccu;
    // NOP
    ctx->pc = 0x2cd0d0u;
    return;
}

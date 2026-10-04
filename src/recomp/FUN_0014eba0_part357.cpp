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


void FUN_0014eba0_part357(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fc8e0u: goto label_1fc8e0;
        case 0x1fc8e4u: goto label_1fc8e4;
        case 0x1fc8e8u: goto label_1fc8e8;
        case 0x1fc8ecu: goto label_1fc8ec;
        case 0x1fc8f0u: goto label_1fc8f0;
        case 0x1fc8f4u: goto label_1fc8f4;
        case 0x1fc8f8u: goto label_1fc8f8;
        case 0x1fc8fcu: goto label_1fc8fc;
        case 0x1fc900u: goto label_1fc900;
        case 0x1fc904u: goto label_1fc904;
        case 0x1fc908u: goto label_1fc908;
        case 0x1fc90cu: goto label_1fc90c;
        case 0x1fc910u: goto label_1fc910;
        case 0x1fc914u: goto label_1fc914;
        case 0x1fc918u: goto label_1fc918;
        case 0x1fc91cu: goto label_1fc91c;
        case 0x1fc920u: goto label_1fc920;
        case 0x1fc924u: goto label_1fc924;
        case 0x1fc928u: goto label_1fc928;
        case 0x1fc92cu: goto label_1fc92c;
        case 0x1fc930u: goto label_1fc930;
        case 0x1fc934u: goto label_1fc934;
        case 0x1fc938u: goto label_1fc938;
        case 0x1fc93cu: goto label_1fc93c;
        case 0x1fc940u: goto label_1fc940;
        case 0x1fc944u: goto label_1fc944;
        case 0x1fc948u: goto label_1fc948;
        case 0x1fc94cu: goto label_1fc94c;
        case 0x1fc950u: goto label_1fc950;
        case 0x1fc954u: goto label_1fc954;
        case 0x1fc958u: goto label_1fc958;
        case 0x1fc95cu: goto label_1fc95c;
        case 0x1fc960u: goto label_1fc960;
        case 0x1fc964u: goto label_1fc964;
        case 0x1fc968u: goto label_1fc968;
        case 0x1fc96cu: goto label_1fc96c;
        case 0x1fc970u: goto label_1fc970;
        case 0x1fc974u: goto label_1fc974;
        case 0x1fc978u: goto label_1fc978;
        case 0x1fc97cu: goto label_1fc97c;
        case 0x1fc980u: goto label_1fc980;
        case 0x1fc984u: goto label_1fc984;
        case 0x1fc988u: goto label_1fc988;
        case 0x1fc98cu: goto label_1fc98c;
        case 0x1fc990u: goto label_1fc990;
        case 0x1fc994u: goto label_1fc994;
        case 0x1fc998u: goto label_1fc998;
        case 0x1fc99cu: goto label_1fc99c;
        case 0x1fc9a0u: goto label_1fc9a0;
        case 0x1fc9a4u: goto label_1fc9a4;
        case 0x1fc9a8u: goto label_1fc9a8;
        case 0x1fc9acu: goto label_1fc9ac;
        case 0x1fc9b0u: goto label_1fc9b0;
        case 0x1fc9b4u: goto label_1fc9b4;
        case 0x1fc9b8u: goto label_1fc9b8;
        case 0x1fc9bcu: goto label_1fc9bc;
        case 0x1fc9c0u: goto label_1fc9c0;
        case 0x1fc9c4u: goto label_1fc9c4;
        case 0x1fc9c8u: goto label_1fc9c8;
        case 0x1fc9ccu: goto label_1fc9cc;
        case 0x1fc9d0u: goto label_1fc9d0;
        case 0x1fc9d4u: goto label_1fc9d4;
        case 0x1fc9d8u: goto label_1fc9d8;
        case 0x1fc9dcu: goto label_1fc9dc;
        case 0x1fc9e0u: goto label_1fc9e0;
        case 0x1fc9e4u: goto label_1fc9e4;
        case 0x1fc9e8u: goto label_1fc9e8;
        case 0x1fc9ecu: goto label_1fc9ec;
        case 0x1fc9f0u: goto label_1fc9f0;
        case 0x1fc9f4u: goto label_1fc9f4;
        case 0x1fc9f8u: goto label_1fc9f8;
        case 0x1fc9fcu: goto label_1fc9fc;
        case 0x1fca00u: goto label_1fca00;
        case 0x1fca04u: goto label_1fca04;
        case 0x1fca08u: goto label_1fca08;
        case 0x1fca0cu: goto label_1fca0c;
        case 0x1fca10u: goto label_1fca10;
        case 0x1fca14u: goto label_1fca14;
        case 0x1fca18u: goto label_1fca18;
        case 0x1fca1cu: goto label_1fca1c;
        case 0x1fca20u: goto label_1fca20;
        case 0x1fca24u: goto label_1fca24;
        case 0x1fca28u: goto label_1fca28;
        case 0x1fca2cu: goto label_1fca2c;
        case 0x1fca30u: goto label_1fca30;
        case 0x1fca34u: goto label_1fca34;
        case 0x1fca38u: goto label_1fca38;
        case 0x1fca3cu: goto label_1fca3c;
        case 0x1fca40u: goto label_1fca40;
        case 0x1fca44u: goto label_1fca44;
        case 0x1fca48u: goto label_1fca48;
        case 0x1fca4cu: goto label_1fca4c;
        case 0x1fca50u: goto label_1fca50;
        case 0x1fca54u: goto label_1fca54;
        case 0x1fca58u: goto label_1fca58;
        case 0x1fca5cu: goto label_1fca5c;
        case 0x1fca60u: goto label_1fca60;
        case 0x1fca64u: goto label_1fca64;
        case 0x1fca68u: goto label_1fca68;
        case 0x1fca6cu: goto label_1fca6c;
        case 0x1fca70u: goto label_1fca70;
        case 0x1fca74u: goto label_1fca74;
        case 0x1fca78u: goto label_1fca78;
        case 0x1fca7cu: goto label_1fca7c;
        case 0x1fca80u: goto label_1fca80;
        case 0x1fca84u: goto label_1fca84;
        case 0x1fca88u: goto label_1fca88;
        case 0x1fca8cu: goto label_1fca8c;
        case 0x1fca90u: goto label_1fca90;
        case 0x1fca94u: goto label_1fca94;
        case 0x1fca98u: goto label_1fca98;
        case 0x1fca9cu: goto label_1fca9c;
        case 0x1fcaa0u: goto label_1fcaa0;
        case 0x1fcaa4u: goto label_1fcaa4;
        case 0x1fcaa8u: goto label_1fcaa8;
        case 0x1fcaacu: goto label_1fcaac;
        case 0x1fcab0u: goto label_1fcab0;
        case 0x1fcab4u: goto label_1fcab4;
        case 0x1fcab8u: goto label_1fcab8;
        case 0x1fcabcu: goto label_1fcabc;
        case 0x1fcac0u: goto label_1fcac0;
        case 0x1fcac4u: goto label_1fcac4;
        case 0x1fcac8u: goto label_1fcac8;
        case 0x1fcaccu: goto label_1fcacc;
        case 0x1fcad0u: goto label_1fcad0;
        case 0x1fcad4u: goto label_1fcad4;
        case 0x1fcad8u: goto label_1fcad8;
        case 0x1fcadcu: goto label_1fcadc;
        case 0x1fcae0u: goto label_1fcae0;
        case 0x1fcae4u: goto label_1fcae4;
        case 0x1fcae8u: goto label_1fcae8;
        case 0x1fcaecu: goto label_1fcaec;
        case 0x1fcaf0u: goto label_1fcaf0;
        case 0x1fcaf4u: goto label_1fcaf4;
        case 0x1fcaf8u: goto label_1fcaf8;
        case 0x1fcafcu: goto label_1fcafc;
        case 0x1fcb00u: goto label_1fcb00;
        case 0x1fcb04u: goto label_1fcb04;
        case 0x1fcb08u: goto label_1fcb08;
        case 0x1fcb0cu: goto label_1fcb0c;
        case 0x1fcb10u: goto label_1fcb10;
        case 0x1fcb14u: goto label_1fcb14;
        case 0x1fcb18u: goto label_1fcb18;
        case 0x1fcb1cu: goto label_1fcb1c;
        case 0x1fcb20u: goto label_1fcb20;
        case 0x1fcb24u: goto label_1fcb24;
        case 0x1fcb28u: goto label_1fcb28;
        case 0x1fcb2cu: goto label_1fcb2c;
        case 0x1fcb30u: goto label_1fcb30;
        case 0x1fcb34u: goto label_1fcb34;
        case 0x1fcb38u: goto label_1fcb38;
        case 0x1fcb3cu: goto label_1fcb3c;
        case 0x1fcb40u: goto label_1fcb40;
        case 0x1fcb44u: goto label_1fcb44;
        case 0x1fcb48u: goto label_1fcb48;
        case 0x1fcb4cu: goto label_1fcb4c;
        case 0x1fcb50u: goto label_1fcb50;
        case 0x1fcb54u: goto label_1fcb54;
        case 0x1fcb58u: goto label_1fcb58;
        case 0x1fcb5cu: goto label_1fcb5c;
        case 0x1fcb60u: goto label_1fcb60;
        case 0x1fcb64u: goto label_1fcb64;
        case 0x1fcb68u: goto label_1fcb68;
        case 0x1fcb6cu: goto label_1fcb6c;
        case 0x1fcb70u: goto label_1fcb70;
        case 0x1fcb74u: goto label_1fcb74;
        case 0x1fcb78u: goto label_1fcb78;
        case 0x1fcb7cu: goto label_1fcb7c;
        case 0x1fcb80u: goto label_1fcb80;
        case 0x1fcb84u: goto label_1fcb84;
        case 0x1fcb88u: goto label_1fcb88;
        case 0x1fcb8cu: goto label_1fcb8c;
        case 0x1fcb90u: goto label_1fcb90;
        case 0x1fcb94u: goto label_1fcb94;
        case 0x1fcb98u: goto label_1fcb98;
        case 0x1fcb9cu: goto label_1fcb9c;
        case 0x1fcba0u: goto label_1fcba0;
        case 0x1fcba4u: goto label_1fcba4;
        case 0x1fcba8u: goto label_1fcba8;
        case 0x1fcbacu: goto label_1fcbac;
        case 0x1fcbb0u: goto label_1fcbb0;
        case 0x1fcbb4u: goto label_1fcbb4;
        case 0x1fcbb8u: goto label_1fcbb8;
        case 0x1fcbbcu: goto label_1fcbbc;
        case 0x1fcbc0u: goto label_1fcbc0;
        case 0x1fcbc4u: goto label_1fcbc4;
        case 0x1fcbc8u: goto label_1fcbc8;
        case 0x1fcbccu: goto label_1fcbcc;
        case 0x1fcbd0u: goto label_1fcbd0;
        case 0x1fcbd4u: goto label_1fcbd4;
        case 0x1fcbd8u: goto label_1fcbd8;
        case 0x1fcbdcu: goto label_1fcbdc;
        case 0x1fcbe0u: goto label_1fcbe0;
        case 0x1fcbe4u: goto label_1fcbe4;
        case 0x1fcbe8u: goto label_1fcbe8;
        case 0x1fcbecu: goto label_1fcbec;
        case 0x1fcbf0u: goto label_1fcbf0;
        case 0x1fcbf4u: goto label_1fcbf4;
        case 0x1fcbf8u: goto label_1fcbf8;
        case 0x1fcbfcu: goto label_1fcbfc;
        case 0x1fcc00u: goto label_1fcc00;
        case 0x1fcc04u: goto label_1fcc04;
        case 0x1fcc08u: goto label_1fcc08;
        case 0x1fcc0cu: goto label_1fcc0c;
        case 0x1fcc10u: goto label_1fcc10;
        case 0x1fcc14u: goto label_1fcc14;
        case 0x1fcc18u: goto label_1fcc18;
        case 0x1fcc1cu: goto label_1fcc1c;
        case 0x1fcc20u: goto label_1fcc20;
        case 0x1fcc24u: goto label_1fcc24;
        case 0x1fcc28u: goto label_1fcc28;
        case 0x1fcc2cu: goto label_1fcc2c;
        case 0x1fcc30u: goto label_1fcc30;
        case 0x1fcc34u: goto label_1fcc34;
        case 0x1fcc38u: goto label_1fcc38;
        case 0x1fcc3cu: goto label_1fcc3c;
        case 0x1fcc40u: goto label_1fcc40;
        case 0x1fcc44u: goto label_1fcc44;
        case 0x1fcc48u: goto label_1fcc48;
        case 0x1fcc4cu: goto label_1fcc4c;
        case 0x1fcc50u: goto label_1fcc50;
        case 0x1fcc54u: goto label_1fcc54;
        case 0x1fcc58u: goto label_1fcc58;
        case 0x1fcc5cu: goto label_1fcc5c;
        case 0x1fcc60u: goto label_1fcc60;
        case 0x1fcc64u: goto label_1fcc64;
        case 0x1fcc68u: goto label_1fcc68;
        case 0x1fcc6cu: goto label_1fcc6c;
        case 0x1fcc70u: goto label_1fcc70;
        case 0x1fcc74u: goto label_1fcc74;
        case 0x1fcc78u: goto label_1fcc78;
        case 0x1fcc7cu: goto label_1fcc7c;
        case 0x1fcc80u: goto label_1fcc80;
        case 0x1fcc84u: goto label_1fcc84;
        case 0x1fcc88u: goto label_1fcc88;
        case 0x1fcc8cu: goto label_1fcc8c;
        case 0x1fcc90u: goto label_1fcc90;
        case 0x1fcc94u: goto label_1fcc94;
        case 0x1fcc98u: goto label_1fcc98;
        case 0x1fcc9cu: goto label_1fcc9c;
        case 0x1fcca0u: goto label_1fcca0;
        case 0x1fcca4u: goto label_1fcca4;
        case 0x1fcca8u: goto label_1fcca8;
        case 0x1fccacu: goto label_1fccac;
        case 0x1fccb0u: goto label_1fccb0;
        case 0x1fccb4u: goto label_1fccb4;
        case 0x1fccb8u: goto label_1fccb8;
        case 0x1fccbcu: goto label_1fccbc;
        case 0x1fccc0u: goto label_1fccc0;
        case 0x1fccc4u: goto label_1fccc4;
        case 0x1fccc8u: goto label_1fccc8;
        case 0x1fccccu: goto label_1fcccc;
        case 0x1fccd0u: goto label_1fccd0;
        case 0x1fccd4u: goto label_1fccd4;
        case 0x1fccd8u: goto label_1fccd8;
        case 0x1fccdcu: goto label_1fccdc;
        case 0x1fcce0u: goto label_1fcce0;
        case 0x1fcce4u: goto label_1fcce4;
        case 0x1fcce8u: goto label_1fcce8;
        case 0x1fccecu: goto label_1fccec;
        case 0x1fccf0u: goto label_1fccf0;
        case 0x1fccf4u: goto label_1fccf4;
        case 0x1fccf8u: goto label_1fccf8;
        case 0x1fccfcu: goto label_1fccfc;
        case 0x1fcd00u: goto label_1fcd00;
        case 0x1fcd04u: goto label_1fcd04;
        case 0x1fcd08u: goto label_1fcd08;
        case 0x1fcd0cu: goto label_1fcd0c;
        case 0x1fcd10u: goto label_1fcd10;
        case 0x1fcd14u: goto label_1fcd14;
        case 0x1fcd18u: goto label_1fcd18;
        case 0x1fcd1cu: goto label_1fcd1c;
        case 0x1fcd20u: goto label_1fcd20;
        case 0x1fcd24u: goto label_1fcd24;
        case 0x1fcd28u: goto label_1fcd28;
        case 0x1fcd2cu: goto label_1fcd2c;
        case 0x1fcd30u: goto label_1fcd30;
        case 0x1fcd34u: goto label_1fcd34;
        case 0x1fcd38u: goto label_1fcd38;
        case 0x1fcd3cu: goto label_1fcd3c;
        case 0x1fcd40u: goto label_1fcd40;
        case 0x1fcd44u: goto label_1fcd44;
        case 0x1fcd48u: goto label_1fcd48;
        case 0x1fcd4cu: goto label_1fcd4c;
        case 0x1fcd50u: goto label_1fcd50;
        case 0x1fcd54u: goto label_1fcd54;
        case 0x1fcd58u: goto label_1fcd58;
        case 0x1fcd5cu: goto label_1fcd5c;
        case 0x1fcd60u: goto label_1fcd60;
        case 0x1fcd64u: goto label_1fcd64;
        case 0x1fcd68u: goto label_1fcd68;
        case 0x1fcd6cu: goto label_1fcd6c;
        case 0x1fcd70u: goto label_1fcd70;
        case 0x1fcd74u: goto label_1fcd74;
        case 0x1fcd78u: goto label_1fcd78;
        case 0x1fcd7cu: goto label_1fcd7c;
        case 0x1fcd80u: goto label_1fcd80;
        case 0x1fcd84u: goto label_1fcd84;
        case 0x1fcd88u: goto label_1fcd88;
        case 0x1fcd8cu: goto label_1fcd8c;
        case 0x1fcd90u: goto label_1fcd90;
        case 0x1fcd94u: goto label_1fcd94;
        case 0x1fcd98u: goto label_1fcd98;
        case 0x1fcd9cu: goto label_1fcd9c;
        case 0x1fcda0u: goto label_1fcda0;
        case 0x1fcda4u: goto label_1fcda4;
        case 0x1fcda8u: goto label_1fcda8;
        case 0x1fcdacu: goto label_1fcdac;
        case 0x1fcdb0u: goto label_1fcdb0;
        case 0x1fcdb4u: goto label_1fcdb4;
        case 0x1fcdb8u: goto label_1fcdb8;
        case 0x1fcdbcu: goto label_1fcdbc;
        case 0x1fcdc0u: goto label_1fcdc0;
        case 0x1fcdc4u: goto label_1fcdc4;
        case 0x1fcdc8u: goto label_1fcdc8;
        case 0x1fcdccu: goto label_1fcdcc;
        case 0x1fcdd0u: goto label_1fcdd0;
        case 0x1fcdd4u: goto label_1fcdd4;
        case 0x1fcdd8u: goto label_1fcdd8;
        case 0x1fcddcu: goto label_1fcddc;
        case 0x1fcde0u: goto label_1fcde0;
        case 0x1fcde4u: goto label_1fcde4;
        case 0x1fcde8u: goto label_1fcde8;
        case 0x1fcdecu: goto label_1fcdec;
        case 0x1fcdf0u: goto label_1fcdf0;
        case 0x1fcdf4u: goto label_1fcdf4;
        case 0x1fcdf8u: goto label_1fcdf8;
        case 0x1fcdfcu: goto label_1fcdfc;
        case 0x1fce00u: goto label_1fce00;
        case 0x1fce04u: goto label_1fce04;
        case 0x1fce08u: goto label_1fce08;
        case 0x1fce0cu: goto label_1fce0c;
        case 0x1fce10u: goto label_1fce10;
        case 0x1fce14u: goto label_1fce14;
        case 0x1fce18u: goto label_1fce18;
        case 0x1fce1cu: goto label_1fce1c;
        case 0x1fce20u: goto label_1fce20;
        case 0x1fce24u: goto label_1fce24;
        case 0x1fce28u: goto label_1fce28;
        case 0x1fce2cu: goto label_1fce2c;
        case 0x1fce30u: goto label_1fce30;
        case 0x1fce34u: goto label_1fce34;
        case 0x1fce38u: goto label_1fce38;
        case 0x1fce3cu: goto label_1fce3c;
        case 0x1fce40u: goto label_1fce40;
        case 0x1fce44u: goto label_1fce44;
        case 0x1fce48u: goto label_1fce48;
        case 0x1fce4cu: goto label_1fce4c;
        case 0x1fce50u: goto label_1fce50;
        case 0x1fce54u: goto label_1fce54;
        case 0x1fce58u: goto label_1fce58;
        case 0x1fce5cu: goto label_1fce5c;
        case 0x1fce60u: goto label_1fce60;
        case 0x1fce64u: goto label_1fce64;
        case 0x1fce68u: goto label_1fce68;
        case 0x1fce6cu: goto label_1fce6c;
        case 0x1fce70u: goto label_1fce70;
        case 0x1fce74u: goto label_1fce74;
        case 0x1fce78u: goto label_1fce78;
        case 0x1fce7cu: goto label_1fce7c;
        case 0x1fce80u: goto label_1fce80;
        case 0x1fce84u: goto label_1fce84;
        case 0x1fce88u: goto label_1fce88;
        case 0x1fce8cu: goto label_1fce8c;
        case 0x1fce90u: goto label_1fce90;
        case 0x1fce94u: goto label_1fce94;
        case 0x1fce98u: goto label_1fce98;
        case 0x1fce9cu: goto label_1fce9c;
        case 0x1fcea0u: goto label_1fcea0;
        case 0x1fcea4u: goto label_1fcea4;
        case 0x1fcea8u: goto label_1fcea8;
        case 0x1fceacu: goto label_1fceac;
        case 0x1fceb0u: goto label_1fceb0;
        case 0x1fceb4u: goto label_1fceb4;
        case 0x1fceb8u: goto label_1fceb8;
        case 0x1fcebcu: goto label_1fcebc;
        case 0x1fcec0u: goto label_1fcec0;
        case 0x1fcec4u: goto label_1fcec4;
        case 0x1fcec8u: goto label_1fcec8;
        case 0x1fceccu: goto label_1fcecc;
        case 0x1fced0u: goto label_1fced0;
        case 0x1fced4u: goto label_1fced4;
        case 0x1fced8u: goto label_1fced8;
        case 0x1fcedcu: goto label_1fcedc;
        case 0x1fcee0u: goto label_1fcee0;
        case 0x1fcee4u: goto label_1fcee4;
        case 0x1fcee8u: goto label_1fcee8;
        case 0x1fceecu: goto label_1fceec;
        case 0x1fcef0u: goto label_1fcef0;
        case 0x1fcef4u: goto label_1fcef4;
        case 0x1fcef8u: goto label_1fcef8;
        case 0x1fcefcu: goto label_1fcefc;
        case 0x1fcf00u: goto label_1fcf00;
        case 0x1fcf04u: goto label_1fcf04;
        case 0x1fcf08u: goto label_1fcf08;
        case 0x1fcf0cu: goto label_1fcf0c;
        case 0x1fcf10u: goto label_1fcf10;
        case 0x1fcf14u: goto label_1fcf14;
        case 0x1fcf18u: goto label_1fcf18;
        case 0x1fcf1cu: goto label_1fcf1c;
        case 0x1fcf20u: goto label_1fcf20;
        case 0x1fcf24u: goto label_1fcf24;
        case 0x1fcf28u: goto label_1fcf28;
        case 0x1fcf2cu: goto label_1fcf2c;
        case 0x1fcf30u: goto label_1fcf30;
        case 0x1fcf34u: goto label_1fcf34;
        case 0x1fcf38u: goto label_1fcf38;
        case 0x1fcf3cu: goto label_1fcf3c;
        case 0x1fcf40u: goto label_1fcf40;
        case 0x1fcf44u: goto label_1fcf44;
        case 0x1fcf48u: goto label_1fcf48;
        case 0x1fcf4cu: goto label_1fcf4c;
        case 0x1fcf50u: goto label_1fcf50;
        case 0x1fcf54u: goto label_1fcf54;
        case 0x1fcf58u: goto label_1fcf58;
        case 0x1fcf5cu: goto label_1fcf5c;
        case 0x1fcf60u: goto label_1fcf60;
        case 0x1fcf64u: goto label_1fcf64;
        case 0x1fcf68u: goto label_1fcf68;
        case 0x1fcf6cu: goto label_1fcf6c;
        case 0x1fcf70u: goto label_1fcf70;
        case 0x1fcf74u: goto label_1fcf74;
        case 0x1fcf78u: goto label_1fcf78;
        case 0x1fcf7cu: goto label_1fcf7c;
        case 0x1fcf80u: goto label_1fcf80;
        case 0x1fcf84u: goto label_1fcf84;
        case 0x1fcf88u: goto label_1fcf88;
        case 0x1fcf8cu: goto label_1fcf8c;
        case 0x1fcf90u: goto label_1fcf90;
        case 0x1fcf94u: goto label_1fcf94;
        case 0x1fcf98u: goto label_1fcf98;
        case 0x1fcf9cu: goto label_1fcf9c;
        case 0x1fcfa0u: goto label_1fcfa0;
        case 0x1fcfa4u: goto label_1fcfa4;
        case 0x1fcfa8u: goto label_1fcfa8;
        case 0x1fcfacu: goto label_1fcfac;
        case 0x1fcfb0u: goto label_1fcfb0;
        case 0x1fcfb4u: goto label_1fcfb4;
        case 0x1fcfb8u: goto label_1fcfb8;
        case 0x1fcfbcu: goto label_1fcfbc;
        case 0x1fcfc0u: goto label_1fcfc0;
        case 0x1fcfc4u: goto label_1fcfc4;
        case 0x1fcfc8u: goto label_1fcfc8;
        case 0x1fcfccu: goto label_1fcfcc;
        case 0x1fcfd0u: goto label_1fcfd0;
        case 0x1fcfd4u: goto label_1fcfd4;
        case 0x1fcfd8u: goto label_1fcfd8;
        case 0x1fcfdcu: goto label_1fcfdc;
        case 0x1fcfe0u: goto label_1fcfe0;
        case 0x1fcfe4u: goto label_1fcfe4;
        case 0x1fcfe8u: goto label_1fcfe8;
        case 0x1fcfecu: goto label_1fcfec;
        case 0x1fcff0u: goto label_1fcff0;
        case 0x1fcff4u: goto label_1fcff4;
        case 0x1fcff8u: goto label_1fcff8;
        case 0x1fcffcu: goto label_1fcffc;
        case 0x1fd000u: goto label_1fd000;
        case 0x1fd004u: goto label_1fd004;
        case 0x1fd008u: goto label_1fd008;
        case 0x1fd00cu: goto label_1fd00c;
        case 0x1fd010u: goto label_1fd010;
        case 0x1fd014u: goto label_1fd014;
        case 0x1fd018u: goto label_1fd018;
        case 0x1fd01cu: goto label_1fd01c;
        case 0x1fd020u: goto label_1fd020;
        case 0x1fd024u: goto label_1fd024;
        case 0x1fd028u: goto label_1fd028;
        case 0x1fd02cu: goto label_1fd02c;
        case 0x1fd030u: goto label_1fd030;
        case 0x1fd034u: goto label_1fd034;
        case 0x1fd038u: goto label_1fd038;
        case 0x1fd03cu: goto label_1fd03c;
        case 0x1fd040u: goto label_1fd040;
        case 0x1fd044u: goto label_1fd044;
        case 0x1fd048u: goto label_1fd048;
        case 0x1fd04cu: goto label_1fd04c;
        case 0x1fd050u: goto label_1fd050;
        case 0x1fd054u: goto label_1fd054;
        case 0x1fd058u: goto label_1fd058;
        case 0x1fd05cu: goto label_1fd05c;
        case 0x1fd060u: goto label_1fd060;
        case 0x1fd064u: goto label_1fd064;
        case 0x1fd068u: goto label_1fd068;
        case 0x1fd06cu: goto label_1fd06c;
        case 0x1fd070u: goto label_1fd070;
        case 0x1fd074u: goto label_1fd074;
        case 0x1fd078u: goto label_1fd078;
        case 0x1fd07cu: goto label_1fd07c;
        case 0x1fd080u: goto label_1fd080;
        case 0x1fd084u: goto label_1fd084;
        case 0x1fd088u: goto label_1fd088;
        case 0x1fd08cu: goto label_1fd08c;
        case 0x1fd090u: goto label_1fd090;
        case 0x1fd094u: goto label_1fd094;
        case 0x1fd098u: goto label_1fd098;
        case 0x1fd09cu: goto label_1fd09c;
        case 0x1fd0a0u: goto label_1fd0a0;
        case 0x1fd0a4u: goto label_1fd0a4;
        case 0x1fd0a8u: goto label_1fd0a8;
        case 0x1fd0acu: goto label_1fd0ac;
        default: return;
    }

label_1fc8e0:
    // 0x1fc8e0: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1fc8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
label_1fc8e4:
    // 0x1fc8e4: 0x27300008  addiu       $s0, $t9, 0x8
    ctx->pc = 0x1fc8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
label_1fc8e8:
    // 0x1fc8e8: 0xaf2b0008  sw          $t3, 0x8($t9)
    ctx->pc = 0x1fc8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 8), GPR_U32(ctx, 11));
label_1fc8ec:
    // 0x1fc8ec: 0x2731000c  addiu       $s1, $t9, 0xC
    ctx->pc = 0x1fc8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), 12));
label_1fc8f0:
    // 0x1fc8f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1fc8f4:
    if (ctx->pc == 0x1FC8F4u) {
        ctx->pc = 0x1FC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8F0u;
        // 0x1fc8f4: 0xaf2a000c  sw          $t2, 0xC($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC8F8u;
        goto label_1fc8f8;
    }
    ctx->pc = 0x1FC8F0u;
    {
        const bool branch_taken_0x1fc8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8F0u;
        // 0x1fc8f4: 0xaf2a000c  sw          $t2, 0xC($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8f0) {
            ctx->pc = 0x1FC908u;
            goto label_1fc908;
        }
    }
    ctx->pc = 0x1FC8F8u;
label_1fc8f8:
    // 0x1fc8f8: 0xa3290018  sb          $t1, 0x18($t9)
    ctx->pc = 0x1fc8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 24), (uint8_t)GPR_U32(ctx, 9));
label_1fc8fc:
    // 0x1fc8fc: 0xa3290019  sb          $t1, 0x19($t9)
    ctx->pc = 0x1fc8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 25), (uint8_t)GPR_U32(ctx, 9));
label_1fc900:
    // 0x1fc900: 0x10000019  b           . + 4 + (0x19 << 2)
label_1fc904:
    if (ctx->pc == 0x1FC904u) {
        ctx->pc = 0x1FC904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC900u;
        // 0x1fc904: 0xa329001a  sb          $t1, 0x1A($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 26), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC908u;
        goto label_1fc908;
    }
    ctx->pc = 0x1FC900u;
    {
        const bool branch_taken_0x1fc900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC900u;
        // 0x1fc904: 0xa329001a  sb          $t1, 0x1A($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 26), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc900) {
            ctx->pc = 0x1FC968u;
            goto label_1fc968;
        }
    }
    ctx->pc = 0x1FC908u;
label_1fc908:
    // 0x1fc908: 0x8f93863c  lw          $s3, -0x79C4($gp)
    ctx->pc = 0x1fc908u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1fc90c:
    // 0x1fc90c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_1fc910:
    if (ctx->pc == 0x1FC910u) {
        ctx->pc = 0x1FC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC90Cu;
        // 0x1fc910: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC914u;
        goto label_1fc914;
    }
    ctx->pc = 0x1FC90Cu;
    {
        const bool branch_taken_0x1fc90c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC90Cu;
        // 0x1fc910: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc90c) {
            ctx->pc = 0x1FC93Cu;
            goto label_1fc93c;
        }
    }
    ctx->pc = 0x1FC914u;
label_1fc914:
    // 0x1fc914: 0x9033490d  lbu         $s3, 0x490D($at)
    ctx->pc = 0x1fc914u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1fc918:
    // 0x1fc918: 0x139880  sll         $s3, $s3, 2
    ctx->pc = 0x1fc918u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1fc91c:
    // 0x1fc91c: 0x113a021  addu        $s4, $t0, $s3
    ctx->pc = 0x1fc91cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
label_1fc920:
    // 0x1fc920: 0x92930000  lbu         $s3, 0x0($s4)
    ctx->pc = 0x1fc920u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1fc924:
    // 0x1fc924: 0xa3330018  sb          $s3, 0x18($t9)
    ctx->pc = 0x1fc924u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 24), (uint8_t)GPR_U32(ctx, 19));
label_1fc928:
    // 0x1fc928: 0x92930001  lbu         $s3, 0x1($s4)
    ctx->pc = 0x1fc928u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1fc92c:
    // 0x1fc92c: 0xa3330019  sb          $s3, 0x19($t9)
    ctx->pc = 0x1fc92cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 25), (uint8_t)GPR_U32(ctx, 19));
label_1fc930:
    // 0x1fc930: 0x92930002  lbu         $s3, 0x2($s4)
    ctx->pc = 0x1fc930u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_1fc934:
    // 0x1fc934: 0x1000000c  b           . + 4 + (0xC << 2)
label_1fc938:
    if (ctx->pc == 0x1FC938u) {
        ctx->pc = 0x1FC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC934u;
        // 0x1fc938: 0xa333001a  sb          $s3, 0x1A($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 26), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC93Cu;
        goto label_1fc93c;
    }
    ctx->pc = 0x1FC934u;
    {
        const bool branch_taken_0x1fc934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC934u;
        // 0x1fc938: 0xa333001a  sb          $s3, 0x1A($t9) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 25), 26), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc934) {
            ctx->pc = 0x1FC968u;
            goto label_1fc968;
        }
    }
    ctx->pc = 0x1FC93Cu;
label_1fc93c:
    // 0x1fc93c: 0x0  nop
    ctx->pc = 0x1fc93cu;
    // NOP
label_1fc940:
    // 0x1fc940: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fc940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1fc944:
    // 0x1fc944: 0x9033490d  lbu         $s3, 0x490D($at)
    ctx->pc = 0x1fc944u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1fc948:
    // 0x1fc948: 0x139880  sll         $s3, $s3, 2
    ctx->pc = 0x1fc948u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1fc94c:
    // 0x1fc94c: 0xf3a021  addu        $s4, $a3, $s3
    ctx->pc = 0x1fc94cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
label_1fc950:
    // 0x1fc950: 0x92930000  lbu         $s3, 0x0($s4)
    ctx->pc = 0x1fc950u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1fc954:
    // 0x1fc954: 0xa3330018  sb          $s3, 0x18($t9)
    ctx->pc = 0x1fc954u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 24), (uint8_t)GPR_U32(ctx, 19));
label_1fc958:
    // 0x1fc958: 0x92930001  lbu         $s3, 0x1($s4)
    ctx->pc = 0x1fc958u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1fc95c:
    // 0x1fc95c: 0xa3330019  sb          $s3, 0x19($t9)
    ctx->pc = 0x1fc95cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 25), (uint8_t)GPR_U32(ctx, 19));
label_1fc960:
    // 0x1fc960: 0x92930002  lbu         $s3, 0x2($s4)
    ctx->pc = 0x1fc960u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_1fc964:
    // 0x1fc964: 0xa333001a  sb          $s3, 0x1A($t9)
    ctx->pc = 0x1fc964u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 26), (uint8_t)GPR_U32(ctx, 19));
label_1fc968:
    // 0x1fc968: 0xb89821  addu        $s3, $a1, $t8
    ctx->pc = 0x1fc968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
label_1fc96c:
    // 0x1fc96c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1fc96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc970:
    // 0x1fc970: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1fc970u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_1fc974:
    // 0x1fc974: 0xc7210000  lwc1        $f1, 0x0($t9)
    ctx->pc = 0x1fc974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc978:
    // 0x1fc978: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1fc978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1fc97c:
    // 0x1fc97c: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1fc97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fc980:
    // 0x1fc980: 0x29d40002  slti        $s4, $t6, 0x2
    ctx->pc = 0x1fc980u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fc984:
    // 0x1fc984: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x1fc984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fc988:
    // 0x1fc988: 0x25ef001c  addiu       $t7, $t7, 0x1C
    ctx->pc = 0x1fc988u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 28));
label_1fc98c:
    // 0x1fc98c: 0x27180030  addiu       $t8, $t8, 0x30
    ctx->pc = 0x1fc98cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 48));
label_1fc990:
    // 0x1fc990: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1fc990u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fc994:
    // 0x1fc994: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fc994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fc998:
    // 0x1fc998: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x1fc998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_1fc99c:
    // 0x1fc99c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1fc99cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1fc9a0:
    // 0x1fc9a0: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x1fc9a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1fc9a4:
    // 0x1fc9a4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1fc9a4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1fc9a8:
    // 0x1fc9a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fc9a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fc9ac:
    // 0x1fc9ac: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1fc9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1fc9b0:
    // 0x1fc9b0: 0xe7200010  swc1        $f0, 0x10($t9)
    ctx->pc = 0x1fc9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 16), bits); }
label_1fc9b4:
    // 0x1fc9b4: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1fc9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fc9b8:
    // 0x1fc9b8: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x1fc9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fc9bc:
    // 0x1fc9bc: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1fc9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc9c0:
    // 0x1fc9c0: 0xc7200000  lwc1        $f0, 0x0($t9)
    ctx->pc = 0x1fc9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fc9c4:
    // 0x1fc9c4: 0x46042882  mul.s       $f2, $f5, $f4
    ctx->pc = 0x1fc9c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_1fc9c8:
    // 0x1fc9c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fc9c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fc9cc:
    // 0x1fc9cc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1fc9ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fc9d0:
    // 0x1fc9d0: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x1fc9d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1fc9d4:
    // 0x1fc9d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fc9d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1fc9d8:
    // 0x1fc9d8: 0xe7200014  swc1        $f0, 0x14($t9)
    ctx->pc = 0x1fc9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 20), bits); }
label_1fc9dc:
    // 0x1fc9dc: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1fc9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_1fc9e0:
    // 0x1fc9e0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1fc9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1fc9e4:
    // 0x1fc9e4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1fc9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1fc9e8:
    // 0x1fc9e8: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1fc9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_1fc9ec:
    // 0x1fc9ec: 0xdc308ec0  ld          $s0, -0x7140($at)
    ctx->pc = 0x1fc9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 4294938304)));
label_1fc9f0:
    // 0x1fc9f0: 0xfe700010  sd          $s0, 0x10($s3)
    ctx->pc = 0x1fc9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 16));
label_1fc9f4:
    // 0x1fc9f4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1fc9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1fc9f8:
    // 0x1fc9f8: 0xdc308ec8  ld          $s0, -0x7138($at)
    ctx->pc = 0x1fc9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 1), 4294938312)));
label_1fc9fc:
    // 0x1fc9fc: 0xfe700018  sd          $s0, 0x18($s3)
    ctx->pc = 0x1fc9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 16));
label_1fca00:
    // 0x1fca00: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x1fca00u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
label_1fca04:
    // 0x1fca04: 0x1680ffb3  bnez        $s4, . + 4 + (-0x4D << 2)
label_1fca08:
    if (ctx->pc == 0x1FCA08u) {
        ctx->pc = 0x1FCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA04u;
        // 0x1fca08: 0xfe750028  sd          $s5, 0x28($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA0Cu;
        goto label_1fca0c;
    }
    ctx->pc = 0x1FCA04u;
    {
        const bool branch_taken_0x1fca04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA04u;
        // 0x1fca08: 0xfe750028  sd          $s5, 0x28($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca04) {
            ctx->pc = 0x1FC8D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1fc8d4; return; }
        }
    }
    ctx->pc = 0x1FCA0Cu;
label_1fca0c:
    // 0x1fca0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fca0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fca10:
    // 0x1fca10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fca10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fca14:
    // 0x1fca14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fca14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fca18:
    // 0x1fca18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fca18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fca1c:
    // 0x1fca1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fca1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fca20:
    // 0x1fca20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fca20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fca24:
    // 0x1fca24: 0x3e00008  jr          $ra
label_1fca28:
    if (ctx->pc == 0x1FCA28u) {
        ctx->pc = 0x1FCA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA24u;
        // 0x1fca28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA2Cu;
        goto label_1fca2c;
    }
    ctx->pc = 0x1FCA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA24u;
        // 0x1fca28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCA2Cu;
label_1fca2c:
    // 0x1fca2c: 0x0  nop
    ctx->pc = 0x1fca2cu;
    // NOP
label_1fca30:
    // 0x1fca30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fca30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fca34:
    // 0x1fca34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fca38:
    // 0x1fca38: 0x93859040  lbu         $a1, -0x6FC0($gp)
    ctx->pc = 0x1fca38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938688)));
label_1fca3c:
    // 0x1fca3c: 0x93869041  lbu         $a2, -0x6FBF($gp)
    ctx->pc = 0x1fca3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938689)));
label_1fca40:
    // 0x1fca40: 0x93879042  lbu         $a3, -0x6FBE($gp)
    ctx->pc = 0x1fca40u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938690)));
label_1fca44:
    // 0x1fca44: 0xc071400  jal         func_1C5000
label_1fca48:
    if (ctx->pc == 0x1FCA48u) {
        ctx->pc = 0x1FCA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA44u;
        // 0x1fca48: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA4Cu;
        goto label_1fca4c;
    }
    ctx->pc = 0x1FCA44u;
    SET_GPR_U32(ctx, 31, 0x1FCA4Cu);
    ctx->pc = 0x1FCA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA44u;
    // 0x1fca48: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    { ctx->pc = 0x1c5000; return; }
    ctx->pc = 0x1FCA4Cu;
label_1fca4c:
    // 0x1fca4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fca50:
    // 0x1fca50: 0x3e00008  jr          $ra
label_1fca54:
    if (ctx->pc == 0x1FCA54u) {
        ctx->pc = 0x1FCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA50u;
        // 0x1fca54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA58u;
        goto label_1fca58;
    }
    ctx->pc = 0x1FCA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA50u;
        // 0x1fca54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCA58u;
label_1fca58:
    // 0x1fca58: 0x0  nop
    ctx->pc = 0x1fca58u;
    // NOP
label_1fca5c:
    // 0x1fca5c: 0x0  nop
    ctx->pc = 0x1fca5cu;
    // NOP
label_1fca60:
    // 0x1fca60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1fca64:
    // 0x1fca64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fca64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fca68:
    // 0x1fca68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1fca6c:
    // 0x1fca6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fca6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fca70:
    // 0x1fca70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fca74:
    // 0x1fca74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fca74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fca78:
    // 0x1fca78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fca7c:
    // 0x1fca7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fca80:
    // 0x1fca80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fca84:
    // 0x1fca84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fca84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fca88:
    // 0x1fca88: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1fca88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fca8c:
    // 0x1fca8c: 0xc085cc4  jal         func_217310
label_1fca90:
    if (ctx->pc == 0x1FCA90u) {
        ctx->pc = 0x1FCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA8Cu;
        // 0x1fca90: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCA94u;
        goto label_1fca94;
    }
    ctx->pc = 0x1FCA8Cu;
    SET_GPR_U32(ctx, 31, 0x1FCA94u);
    ctx->pc = 0x1FCA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA8Cu;
    // 0x1fca90: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1FCA94u;
label_1fca94:
    // 0x1fca94: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1fca94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_1fca98:
    // 0x1fca98: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1fca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1fca9c:
    // 0x1fca9c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1fca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1fcaa0:
    // 0x1fcaa0: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1fcaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1fcaa4:
    // 0x1fcaa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcaa8:
    // 0x1fcaa8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fcaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fcaac:
    // 0x1fcaac: 0xaf829044  sw          $v0, -0x6FBC($gp)
    ctx->pc = 0x1fcaacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938692), GPR_U32(ctx, 2));
label_1fcab0:
    // 0x1fcab0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1fcab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1fcab4:
    // 0x1fcab4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fcab8:
    // 0x1fcab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fcab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcabc:
    // 0x1fcabc: 0x24523620  addiu       $s2, $v0, 0x3620
    ctx->pc = 0x1fcabcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_1fcac0:
    // 0x1fcac0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fcac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fcac4:
    // 0x1fcac4: 0x2463a760  addiu       $v1, $v1, -0x58A0
    ctx->pc = 0x1fcac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944608));
label_1fcac8:
    // 0x1fcac8: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x1fcac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1fcacc:
    // 0x1fcacc: 0x9042005e  lbu         $v0, 0x5E($v0)
    ctx->pc = 0x1fcaccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 94)));
label_1fcad0:
    // 0x1fcad0: 0x28410028  slti        $at, $v0, 0x28
    ctx->pc = 0x1fcad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
label_1fcad4:
    // 0x1fcad4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1fcad8:
    if (ctx->pc == 0x1FCAD8u) {
        ctx->pc = 0x1FCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAD4u;
        // 0x1fcad8: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCADCu;
        goto label_1fcadc;
    }
    ctx->pc = 0x1FCAD4u;
    {
        const bool branch_taken_0x1fcad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAD4u;
        // 0x1fcad8: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcad4) {
            ctx->pc = 0x1FCAF0u;
            goto label_1fcaf0;
        }
    }
    ctx->pc = 0x1FCADCu;
label_1fcadc:
    // 0x1fcadc: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x1fcadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
label_1fcae0:
    // 0x1fcae0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fcae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1fcae4:
    // 0x1fcae4: 0x8f829044  lw          $v0, -0x6FBC($gp)
    ctx->pc = 0x1fcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938692)));
label_1fcae8:
    // 0x1fcae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fcae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fcaec:
    // 0x1fcaec: 0xaf829044  sw          $v0, -0x6FBC($gp)
    ctx->pc = 0x1fcaecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938692), GPR_U32(ctx, 2));
label_1fcaf0:
    // 0x1fcaf0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fcaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1fcaf4:
    // 0x1fcaf4: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x1fcaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_1fcaf8:
    // 0x1fcaf8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1fcafc:
    if (ctx->pc == 0x1FCAFCu) {
        ctx->pc = 0x1FCAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAF8u;
        // 0x1fcafc: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB00u;
        goto label_1fcb00;
    }
    ctx->pc = 0x1FCAF8u;
    {
        const bool branch_taken_0x1fcaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAF8u;
        // 0x1fcafc: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaf8) {
            ctx->pc = 0x1FCACCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcacc;
        }
    }
    ctx->pc = 0x1FCB00u;
label_1fcb00:
    // 0x1fcb00: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fcb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1fcb04:
    // 0x1fcb04: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x1fcb04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1fcb08:
    // 0x1fcb08: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x1fcb08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_1fcb0c:
    // 0x1fcb0c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1fcb10:
    if (ctx->pc == 0x1FCB10u) {
        ctx->pc = 0x1FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB0Cu;
        // 0x1fcb10: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB14u;
        goto label_1fcb14;
    }
    ctx->pc = 0x1FCB0Cu;
    {
        const bool branch_taken_0x1fcb0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB0Cu;
        // 0x1fcb10: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb0c) {
            ctx->pc = 0x1FCB24u;
            goto label_1fcb24;
        }
    }
    ctx->pc = 0x1FCB14u;
label_1fcb14:
    // 0x1fcb14: 0xc078050  jal         func_1E0140
label_1fcb18:
    if (ctx->pc == 0x1FCB18u) {
        ctx->pc = 0x1FCB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB14u;
        // 0x1fcb18: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB1Cu;
        goto label_1fcb1c;
    }
    ctx->pc = 0x1FCB14u;
    SET_GPR_U32(ctx, 31, 0x1FCB1Cu);
    ctx->pc = 0x1FCB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB14u;
    // 0x1fcb18: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1FCB1Cu;
label_1fcb1c:
    // 0x1fcb1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fcb20:
    if (ctx->pc == 0x1FCB20u) {
        ctx->pc = 0x1FCB24u;
        goto label_1fcb24;
    }
    ctx->pc = 0x1FCB1Cu;
    {
        const bool branch_taken_0x1fcb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcb1c) {
            ctx->pc = 0x1FCB2Cu;
            goto label_1fcb2c;
        }
    }
    ctx->pc = 0x1FCB24u;
label_1fcb24:
    // 0x1fcb24: 0xc078050  jal         func_1E0140
label_1fcb28:
    if (ctx->pc == 0x1FCB28u) {
        ctx->pc = 0x1FCB2Cu;
        goto label_1fcb2c;
    }
    ctx->pc = 0x1FCB24u;
    SET_GPR_U32(ctx, 31, 0x1FCB2Cu);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1FCB2Cu;
label_1fcb2c:
    // 0x1fcb2c: 0xc078070  jal         func_1E01C0
label_1fcb30:
    if (ctx->pc == 0x1FCB30u) {
        ctx->pc = 0x1FCB34u;
        goto label_1fcb34;
    }
    ctx->pc = 0x1FCB2Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB34u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1FCB34u;
label_1fcb34:
    // 0x1fcb34: 0xc0801f8  jal         func_2007E0
label_1fcb38:
    if (ctx->pc == 0x1FCB38u) {
        ctx->pc = 0x1FCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB34u;
        // 0x1fcb38: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB3Cu;
        goto label_1fcb3c;
    }
    ctx->pc = 0x1FCB34u;
    SET_GPR_U32(ctx, 31, 0x1FCB3Cu);
    ctx->pc = 0x1FCB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB34u;
    // 0x1fcb38: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2007E0u;
    { ctx->pc = 0x2007e0; return; }
    ctx->pc = 0x1FCB3Cu;
label_1fcb3c:
    // 0x1fcb3c: 0xc080130  jal         func_2004C0
label_1fcb40:
    if (ctx->pc == 0x1FCB40u) {
        ctx->pc = 0x1FCB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB3Cu;
        // 0x1fcb40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB44u;
        goto label_1fcb44;
    }
    ctx->pc = 0x1FCB3Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB44u);
    ctx->pc = 0x1FCB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB3Cu;
    // 0x1fcb40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2004C0u;
    { ctx->pc = 0x2004c0; return; }
    ctx->pc = 0x1FCB44u;
label_1fcb44:
    // 0x1fcb44: 0xc085904  jal         func_216410
label_1fcb48:
    if (ctx->pc == 0x1FCB48u) {
        ctx->pc = 0x1FCB4Cu;
        goto label_1fcb4c;
    }
    ctx->pc = 0x1FCB44u;
    SET_GPR_U32(ctx, 31, 0x1FCB4Cu);
    ctx->pc = 0x216410u;
    { ctx->pc = 0x216410; return; }
    ctx->pc = 0x1FCB4Cu;
label_1fcb4c:
    // 0x1fcb4c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1fcb50:
    if (ctx->pc == 0x1FCB50u) {
        ctx->pc = 0x1FCB54u;
        goto label_1fcb54;
    }
    ctx->pc = 0x1FCB4Cu;
    {
        const bool branch_taken_0x1fcb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcb4c) {
            ctx->pc = 0x1FCB7Cu;
            goto label_1fcb7c;
        }
    }
    ctx->pc = 0x1FCB54u;
label_1fcb54:
    // 0x1fcb54: 0xc07b48c  jal         func_1ED230
label_1fcb58:
    if (ctx->pc == 0x1FCB58u) {
        ctx->pc = 0x1FCB5Cu;
        goto label_1fcb5c;
    }
    ctx->pc = 0x1FCB54u;
    SET_GPR_U32(ctx, 31, 0x1FCB5Cu);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1FCB5Cu;
label_1fcb5c:
    // 0x1fcb5c: 0xc085904  jal         func_216410
label_1fcb60:
    if (ctx->pc == 0x1FCB60u) {
        ctx->pc = 0x1FCB64u;
        goto label_1fcb64;
    }
    ctx->pc = 0x1FCB5Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB64u);
    ctx->pc = 0x216410u;
    { ctx->pc = 0x216410; return; }
    ctx->pc = 0x1FCB64u;
label_1fcb64:
    // 0x1fcb64: 0x0  nop
    ctx->pc = 0x1fcb64u;
    // NOP
label_1fcb68:
    // 0x1fcb68: 0x0  nop
    ctx->pc = 0x1fcb68u;
    // NOP
label_1fcb6c:
    // 0x1fcb6c: 0x0  nop
    ctx->pc = 0x1fcb6cu;
    // NOP
label_1fcb70:
    // 0x1fcb70: 0x0  nop
    ctx->pc = 0x1fcb70u;
    // NOP
label_1fcb74:
    // 0x1fcb74: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1fcb78:
    if (ctx->pc == 0x1FCB78u) {
        ctx->pc = 0x1FCB7Cu;
        goto label_1fcb7c;
    }
    ctx->pc = 0x1FCB74u;
    {
        const bool branch_taken_0x1fcb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcb74) {
            ctx->pc = 0x1FCB54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcb54;
        }
    }
    ctx->pc = 0x1FCB7Cu;
label_1fcb7c:
    // 0x1fcb7c: 0x0  nop
    ctx->pc = 0x1fcb7cu;
    // NOP
label_1fcb80:
    // 0x1fcb80: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1fcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1fcb84:
    // 0x1fcb84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fcb88:
    if (ctx->pc == 0x1FCB88u) {
        ctx->pc = 0x1FCB8Cu;
        goto label_1fcb8c;
    }
    ctx->pc = 0x1FCB84u;
    {
        const bool branch_taken_0x1fcb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcb84) {
            ctx->pc = 0x1FCB94u;
            goto label_1fcb94;
        }
    }
    ctx->pc = 0x1FCB8Cu;
label_1fcb8c:
    // 0x1fcb8c: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_1fcb90:
    if (ctx->pc == 0x1FCB90u) {
        ctx->pc = 0x1FCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB8Cu;
        // 0x1fcb90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCB94u;
        goto label_1fcb94;
    }
    ctx->pc = 0x1FCB8Cu;
    {
        const bool branch_taken_0x1fcb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB8Cu;
        // 0x1fcb90: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb8c) {
            ctx->pc = 0x1FCE58u;
            goto label_1fce58;
        }
    }
    ctx->pc = 0x1FCB94u;
label_1fcb94:
    // 0x1fcb94: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1fcb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1fcb98:
    // 0x1fcb98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1fcb9c:
    if (ctx->pc == 0x1FCB9Cu) {
        ctx->pc = 0x1FCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB98u;
        // 0x1fcb9c: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBA0u;
        goto label_1fcba0;
    }
    ctx->pc = 0x1FCB98u;
    {
        const bool branch_taken_0x1fcb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB98u;
        // 0x1fcb9c: 0x132100  sll         $a0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb98) {
            ctx->pc = 0x1FCBA8u;
            goto label_1fcba8;
        }
    }
    ctx->pc = 0x1FCBA0u;
label_1fcba0:
    // 0x1fcba0: 0x100000ad  b           . + 4 + (0xAD << 2)
label_1fcba4:
    if (ctx->pc == 0x1FCBA4u) {
        ctx->pc = 0x1FCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBA0u;
        // 0x1fcba4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBA8u;
        goto label_1fcba8;
    }
    ctx->pc = 0x1FCBA0u;
    {
        const bool branch_taken_0x1fcba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBA0u;
        // 0x1fcba4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcba0) {
            ctx->pc = 0x1FCE58u;
            goto label_1fce58;
        }
    }
    ctx->pc = 0x1FCBA8u;
label_1fcba8:
    // 0x1fcba8: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1fcba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1fcbac:
    // 0x1fcbac: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1fcbacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1fcbb0:
    // 0x1fcbb0: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1fcbb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1fcbb4:
    // 0x1fcbb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fcbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1fcbb8:
    // 0x1fcbb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1fcbbc:
    if (ctx->pc == 0x1FCBBCu) {
        ctx->pc = 0x1FCBC0u;
        goto label_1fcbc0;
    }
    ctx->pc = 0x1FCBB8u;
    {
        const bool branch_taken_0x1fcbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcbb8) {
            ctx->pc = 0x1FCBD4u;
            goto label_1fcbd4;
        }
    }
    ctx->pc = 0x1FCBC0u;
label_1fcbc0:
    // 0x1fcbc0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1fcbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fcbc4:
    // 0x1fcbc4: 0xc05b420  jal         func_16D080
label_1fcbc8:
    if (ctx->pc == 0x1FCBC8u) {
        ctx->pc = 0x1FCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBC4u;
        // 0x1fcbc8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBCCu;
        goto label_1fcbcc;
    }
    ctx->pc = 0x1FCBC4u;
    SET_GPR_U32(ctx, 31, 0x1FCBCCu);
    ctx->pc = 0x1FCBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBC4u;
    // 0x1fcbc8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1FCBCCu;
label_1fcbcc:
    // 0x1fcbcc: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_1fcbd0:
    if (ctx->pc == 0x1FCBD0u) {
        ctx->pc = 0x1FCBD4u;
        goto label_1fcbd4;
    }
    ctx->pc = 0x1FCBCCu;
    {
        const bool branch_taken_0x1fcbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcbcc) {
            ctx->pc = 0x1FCE58u;
            goto label_1fce58;
        }
    }
    ctx->pc = 0x1FCBD4u;
label_1fcbd4:
    // 0x1fcbd4: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1fcbd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1fcbd8:
    // 0x1fcbd8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fcbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1fcbdc:
    // 0x1fcbdc: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1fcbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1fcbe0:
    // 0x1fcbe0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fcbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1fcbe4:
    // 0x1fcbe4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1fcbe8:
    if (ctx->pc == 0x1FCBE8u) {
        ctx->pc = 0x1FCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBE4u;
        // 0x1fcbe8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBECu;
        goto label_1fcbec;
    }
    ctx->pc = 0x1FCBE4u;
    {
        const bool branch_taken_0x1fcbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBE4u;
        // 0x1fcbe8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbe4) {
            ctx->pc = 0x1FCC20u;
            goto label_1fcc20;
        }
    }
    ctx->pc = 0x1FCBECu;
label_1fcbec:
    // 0x1fcbec: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1fcbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1fcbf0:
    // 0x1fcbf0: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1fcbf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1fcbf4:
    // 0x1fcbf4: 0x14620093  bne         $v1, $v0, . + 4 + (0x93 << 2)
label_1fcbf8:
    if (ctx->pc == 0x1FCBF8u) {
        ctx->pc = 0x1FCBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBF4u;
        // 0x1fcbf8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCBFCu;
        goto label_1fcbfc;
    }
    ctx->pc = 0x1FCBF4u;
    {
        const bool branch_taken_0x1fcbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FCBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBF4u;
        // 0x1fcbf8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbf4) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCBFCu;
label_1fcbfc:
    // 0x1fcbfc: 0xc05b420  jal         func_16D080
label_1fcc00:
    if (ctx->pc == 0x1FCC00u) {
        ctx->pc = 0x1FCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBFCu;
        // 0x1fcc00: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC04u;
        goto label_1fcc04;
    }
    ctx->pc = 0x1FCBFCu;
    SET_GPR_U32(ctx, 31, 0x1FCC04u);
    ctx->pc = 0x1FCC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBFCu;
    // 0x1fcc00: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1FCC04u;
label_1fcc04:
    // 0x1fcc04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fcc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc08:
    // 0x1fcc08: 0xc081954  jal         func_206550
label_1fcc0c:
    if (ctx->pc == 0x1FCC0Cu) {
        ctx->pc = 0x1FCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC08u;
        // 0x1fcc0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC10u;
        goto label_1fcc10;
    }
    ctx->pc = 0x1FCC08u;
    SET_GPR_U32(ctx, 31, 0x1FCC10u);
    ctx->pc = 0x1FCC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC08u;
    // 0x1fcc0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206550u;
    { ctx->pc = 0x206550; return; }
    ctx->pc = 0x1FCC10u;
label_1fcc10:
    // 0x1fcc10: 0xc080130  jal         func_2004C0
label_1fcc14:
    if (ctx->pc == 0x1FCC14u) {
        ctx->pc = 0x1FCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC10u;
        // 0x1fcc14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC18u;
        goto label_1fcc18;
    }
    ctx->pc = 0x1FCC10u;
    SET_GPR_U32(ctx, 31, 0x1FCC18u);
    ctx->pc = 0x1FCC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC10u;
    // 0x1fcc14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2004C0u;
    { ctx->pc = 0x2004c0; return; }
    ctx->pc = 0x1FCC18u;
label_1fcc18:
    // 0x1fcc18: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1fcc1c:
    if (ctx->pc == 0x1FCC1Cu) {
        ctx->pc = 0x1FCC20u;
        goto label_1fcc20;
    }
    ctx->pc = 0x1FCC18u;
    {
        const bool branch_taken_0x1fcc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc18) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCC20u;
label_1fcc20:
    // 0x1fcc20: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fcc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fcc24:
    // 0x1fcc24: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1fcc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1fcc28:
    // 0x1fcc28: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x1fcc28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_1fcc2c:
    // 0x1fcc2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fcc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1fcc30:
    // 0x1fcc30: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_1fcc34:
    if (ctx->pc == 0x1FCC34u) {
        ctx->pc = 0x1FCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC30u;
        // 0x1fcc34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC38u;
        goto label_1fcc38;
    }
    ctx->pc = 0x1FCC30u;
    {
        const bool branch_taken_0x1fcc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC30u;
        // 0x1fcc34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc30) {
            ctx->pc = 0x1FCD34u;
            goto label_1fcd34;
        }
    }
    ctx->pc = 0x1FCC38u;
label_1fcc38:
    // 0x1fcc38: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
label_1fcc3c:
    if (ctx->pc == 0x1FCC3Cu) {
        ctx->pc = 0x1FCC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC38u;
        // 0x1fcc3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC40u;
        goto label_1fcc40;
    }
    ctx->pc = 0x1FCC38u;
    {
        const bool branch_taken_0x1fcc38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FCC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC38u;
        // 0x1fcc3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc38) {
            ctx->pc = 0x1FCC80u;
            goto label_1fcc80;
        }
    }
    ctx->pc = 0x1FCC40u;
label_1fcc40:
    // 0x1fcc40: 0xc05b420  jal         func_16D080
label_1fcc44:
    if (ctx->pc == 0x1FCC44u) {
        ctx->pc = 0x1FCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC40u;
        // 0x1fcc44: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC48u;
        goto label_1fcc48;
    }
    ctx->pc = 0x1FCC40u;
    SET_GPR_U32(ctx, 31, 0x1FCC48u);
    ctx->pc = 0x1FCC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC40u;
    // 0x1fcc44: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1FCC48u;
label_1fcc48:
    // 0x1fcc48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fcc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc4c:
    // 0x1fcc4c: 0xc0801f8  jal         func_2007E0
label_1fcc50:
    if (ctx->pc == 0x1FCC50u) {
        ctx->pc = 0x1FCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC4Cu;
        // 0x1fcc50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC54u;
        goto label_1fcc54;
    }
    ctx->pc = 0x1FCC4Cu;
    SET_GPR_U32(ctx, 31, 0x1FCC54u);
    ctx->pc = 0x1FCC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC4Cu;
    // 0x1fcc50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2007E0u;
    { ctx->pc = 0x2007e0; return; }
    ctx->pc = 0x1FCC54u;
label_1fcc54:
    // 0x1fcc54: 0xc07f708  jal         func_1FDC20
label_1fcc58:
    if (ctx->pc == 0x1FCC58u) {
        ctx->pc = 0x1FCC5Cu;
        goto label_1fcc5c;
    }
    ctx->pc = 0x1FCC54u;
    SET_GPR_U32(ctx, 31, 0x1FCC5Cu);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x1FCC5Cu;
label_1fcc5c:
    // 0x1fcc5c: 0x9245005d  lbu         $a1, 0x5D($s2)
    ctx->pc = 0x1fcc5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
label_1fcc60:
    // 0x1fcc60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fcc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc64:
    // 0x1fcc64: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1fcc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1fcc68:
    // 0x1fcc68: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1fcc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1fcc6c:
    // 0x1fcc6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fcc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcc70:
    // 0x1fcc70: 0xc07fadc  jal         func_1FEB70
label_1fcc74:
    if (ctx->pc == 0x1FCC74u) {
        ctx->pc = 0x1FCC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC70u;
        // 0x1fcc74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC78u;
        goto label_1fcc78;
    }
    ctx->pc = 0x1FCC70u;
    SET_GPR_U32(ctx, 31, 0x1FCC78u);
    ctx->pc = 0x1FCC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC70u;
    // 0x1fcc74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    { ctx->pc = 0x1feb70; return; }
    ctx->pc = 0x1FCC78u;
label_1fcc78:
    // 0x1fcc78: 0x10000072  b           . + 4 + (0x72 << 2)
label_1fcc7c:
    if (ctx->pc == 0x1FCC7Cu) {
        ctx->pc = 0x1FCC80u;
        goto label_1fcc80;
    }
    ctx->pc = 0x1FCC78u;
    {
        const bool branch_taken_0x1fcc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc78) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCC80u;
label_1fcc80:
    // 0x1fcc80: 0x8f829044  lw          $v0, -0x6FBC($gp)
    ctx->pc = 0x1fcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938692)));
label_1fcc84:
    // 0x1fcc84: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1fcc84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fcc88:
    // 0x1fcc88: 0x1420006e  bnez        $at, . + 4 + (0x6E << 2)
label_1fcc8c:
    if (ctx->pc == 0x1FCC8Cu) {
        ctx->pc = 0x1FCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC88u;
        // 0x1fcc8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC90u;
        goto label_1fcc90;
    }
    ctx->pc = 0x1FCC88u;
    {
        const bool branch_taken_0x1fcc88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC88u;
        // 0x1fcc8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc88) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCC90u;
label_1fcc90:
    // 0x1fcc90: 0xc05b420  jal         func_16D080
label_1fcc94:
    if (ctx->pc == 0x1FCC94u) {
        ctx->pc = 0x1FCC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC90u;
        // 0x1fcc94: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCC98u;
        goto label_1fcc98;
    }
    ctx->pc = 0x1FCC90u;
    SET_GPR_U32(ctx, 31, 0x1FCC98u);
    ctx->pc = 0x1FCC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC90u;
    // 0x1fcc94: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1FCC98u;
label_1fcc98:
    // 0x1fcc98: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_1fcc9c:
    if (ctx->pc == 0x1FCC9Cu) {
        ctx->pc = 0x1FCCA0u;
        goto label_1fcca0;
    }
    ctx->pc = 0x1FCC98u;
    {
        const bool branch_taken_0x1fcc98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc98) {
            ctx->pc = 0x1FCCACu;
            goto label_1fccac;
        }
    }
    ctx->pc = 0x1FCCA0u;
label_1fcca0:
    // 0x1fcca0: 0x8f829044  lw          $v0, -0x6FBC($gp)
    ctx->pc = 0x1fcca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938692)));
label_1fcca4:
    // 0x1fcca4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fcca8:
    if (ctx->pc == 0x1FCCA8u) {
        ctx->pc = 0x1FCCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCA4u;
        // 0x1fcca8: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCCACu;
        goto label_1fccac;
    }
    ctx->pc = 0x1FCCA4u;
    {
        const bool branch_taken_0x1fcca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCA4u;
        // 0x1fcca8: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcca4) {
            ctx->pc = 0x1FCCB0u;
            goto label_1fccb0;
        }
    }
    ctx->pc = 0x1FCCACu;
label_1fccac:
    // 0x1fccac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1fccacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1fccb0:
    // 0x1fccb0: 0xc0801f8  jal         func_2007E0
label_1fccb4:
    if (ctx->pc == 0x1FCCB4u) {
        ctx->pc = 0x1FCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCB0u;
        // 0x1fccb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCCB8u;
        goto label_1fccb8;
    }
    ctx->pc = 0x1FCCB0u;
    SET_GPR_U32(ctx, 31, 0x1FCCB8u);
    ctx->pc = 0x1FCCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCB0u;
    // 0x1fccb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2007E0u;
    { ctx->pc = 0x2007e0; return; }
    ctx->pc = 0x1FCCB8u;
label_1fccb8:
    // 0x1fccb8: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
label_1fccbc:
    if (ctx->pc == 0x1FCCBCu) {
        ctx->pc = 0x1FCCC0u;
        goto label_1fccc0;
    }
    ctx->pc = 0x1FCCB8u;
    {
        const bool branch_taken_0x1fccb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fccb8) {
            ctx->pc = 0x1FCCECu;
            goto label_1fccec;
        }
    }
    ctx->pc = 0x1FCCC0u;
label_1fccc0:
    // 0x1fccc0: 0xc07f708  jal         func_1FDC20
label_1fccc4:
    if (ctx->pc == 0x1FCCC4u) {
        ctx->pc = 0x1FCCC8u;
        goto label_1fccc8;
    }
    ctx->pc = 0x1FCCC0u;
    SET_GPR_U32(ctx, 31, 0x1FCCC8u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x1FCCC8u;
label_1fccc8:
    // 0x1fccc8: 0x9245005d  lbu         $a1, 0x5D($s2)
    ctx->pc = 0x1fccc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
label_1fcccc:
    // 0x1fcccc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fccd0:
    // 0x1fccd0: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1fccd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1fccd4:
    // 0x1fccd4: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1fccd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1fccd8:
    // 0x1fccd8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fccd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fccdc:
    // 0x1fccdc: 0xc07fadc  jal         func_1FEB70
label_1fcce0:
    if (ctx->pc == 0x1FCCE0u) {
        ctx->pc = 0x1FCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCDCu;
        // 0x1fcce0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCCE4u;
        goto label_1fcce4;
    }
    ctx->pc = 0x1FCCDCu;
    SET_GPR_U32(ctx, 31, 0x1FCCE4u);
    ctx->pc = 0x1FCCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCDCu;
    // 0x1fcce0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    { ctx->pc = 0x1feb70; return; }
    ctx->pc = 0x1FCCE4u;
label_1fcce4:
    // 0x1fcce4: 0x10000057  b           . + 4 + (0x57 << 2)
label_1fcce8:
    if (ctx->pc == 0x1FCCE8u) {
        ctx->pc = 0x1FCCECu;
        goto label_1fccec;
    }
    ctx->pc = 0x1FCCE4u;
    {
        const bool branch_taken_0x1fcce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcce4) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCCECu;
label_1fccec:
    // 0x1fccec: 0x0  nop
    ctx->pc = 0x1fccecu;
    // NOP
label_1fccf0:
    // 0x1fccf0: 0xc07fa38  jal         func_1FE8E0
label_1fccf4:
    if (ctx->pc == 0x1FCCF4u) {
        ctx->pc = 0x1FCCF8u;
        goto label_1fccf8;
    }
    ctx->pc = 0x1FCCF0u;
    SET_GPR_U32(ctx, 31, 0x1FCCF8u);
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x1FCCF8u;
label_1fccf8:
    // 0x1fccf8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fccfc:
    // 0x1fccfc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1fccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1fcd00:
    // 0x1fcd00: 0x2442a760  addiu       $v0, $v0, -0x58A0
    ctx->pc = 0x1fcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944608));
label_1fcd04:
    // 0x1fcd04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fcd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd08:
    // 0x1fcd08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fcd0c:
    // 0x1fcd0c: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x1fcd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1fcd10:
    // 0x1fcd10: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x1fcd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_1fcd14:
    // 0x1fcd14: 0x24080078  addiu       $t0, $zero, 0x78
    ctx->pc = 0x1fcd14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1fcd18:
    // 0x1fcd18: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fcd18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcd1c:
    // 0x1fcd1c: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1fcd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1fcd20:
    // 0x1fcd20: 0x9046005e  lbu         $a2, 0x5E($v0)
    ctx->pc = 0x1fcd20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 94)));
label_1fcd24:
    // 0x1fcd24: 0xc07f734  jal         func_1FDCD0
label_1fcd28:
    if (ctx->pc == 0x1FCD28u) {
        ctx->pc = 0x1FCD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD24u;
        // 0x1fcd28: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD2Cu;
        goto label_1fcd2c;
    }
    ctx->pc = 0x1FCD24u;
    SET_GPR_U32(ctx, 31, 0x1FCD2Cu);
    ctx->pc = 0x1FCD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD24u;
    // 0x1fcd28: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x1FCD2Cu;
label_1fcd2c:
    // 0x1fcd2c: 0x10000045  b           . + 4 + (0x45 << 2)
label_1fcd30:
    if (ctx->pc == 0x1FCD30u) {
        ctx->pc = 0x1FCD34u;
        goto label_1fcd34;
    }
    ctx->pc = 0x1FCD2Cu;
    {
        const bool branch_taken_0x1fcd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd2c) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCD34u;
label_1fcd34:
    // 0x1fcd34: 0x0  nop
    ctx->pc = 0x1fcd34u;
    // NOP
label_1fcd38:
    // 0x1fcd38: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1fcd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1fcd3c:
    // 0x1fcd3c: 0x821804  sllv        $v1, $v0, $a0
    ctx->pc = 0x1fcd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_1fcd40:
    // 0x1fcd40: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x1fcd40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_1fcd44:
    // 0x1fcd44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fcd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1fcd48:
    // 0x1fcd48: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1fcd4c:
    if (ctx->pc == 0x1FCD4Cu) {
        ctx->pc = 0x1FCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD48u;
        // 0x1fcd4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD50u;
        goto label_1fcd50;
    }
    ctx->pc = 0x1FCD48u;
    {
        const bool branch_taken_0x1fcd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD48u;
        // 0x1fcd4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd48) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCD50u;
label_1fcd50:
    // 0x1fcd50: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
label_1fcd54:
    if (ctx->pc == 0x1FCD54u) {
        ctx->pc = 0x1FCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD50u;
        // 0x1fcd54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD58u;
        goto label_1fcd58;
    }
    ctx->pc = 0x1FCD50u;
    {
        const bool branch_taken_0x1fcd50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD50u;
        // 0x1fcd54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd50) {
            ctx->pc = 0x1FCD98u;
            goto label_1fcd98;
        }
    }
    ctx->pc = 0x1FCD58u;
label_1fcd58:
    // 0x1fcd58: 0xc05b420  jal         func_16D080
label_1fcd5c:
    if (ctx->pc == 0x1FCD5Cu) {
        ctx->pc = 0x1FCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD58u;
        // 0x1fcd5c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD60u;
        goto label_1fcd60;
    }
    ctx->pc = 0x1FCD58u;
    SET_GPR_U32(ctx, 31, 0x1FCD60u);
    ctx->pc = 0x1FCD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD58u;
    // 0x1fcd5c: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1FCD60u;
label_1fcd60:
    // 0x1fcd60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fcd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd64:
    // 0x1fcd64: 0xc0801f8  jal         func_2007E0
label_1fcd68:
    if (ctx->pc == 0x1FCD68u) {
        ctx->pc = 0x1FCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD64u;
        // 0x1fcd68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD6Cu;
        goto label_1fcd6c;
    }
    ctx->pc = 0x1FCD64u;
    SET_GPR_U32(ctx, 31, 0x1FCD6Cu);
    ctx->pc = 0x1FCD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD64u;
    // 0x1fcd68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2007E0u;
    { ctx->pc = 0x2007e0; return; }
    ctx->pc = 0x1FCD6Cu;
label_1fcd6c:
    // 0x1fcd6c: 0xc07f708  jal         func_1FDC20
label_1fcd70:
    if (ctx->pc == 0x1FCD70u) {
        ctx->pc = 0x1FCD74u;
        goto label_1fcd74;
    }
    ctx->pc = 0x1FCD6Cu;
    SET_GPR_U32(ctx, 31, 0x1FCD74u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x1FCD74u;
label_1fcd74:
    // 0x1fcd74: 0x9245005d  lbu         $a1, 0x5D($s2)
    ctx->pc = 0x1fcd74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
label_1fcd78:
    // 0x1fcd78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fcd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd7c:
    // 0x1fcd7c: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1fcd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1fcd80:
    // 0x1fcd80: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1fcd80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1fcd84:
    // 0x1fcd84: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcd88:
    // 0x1fcd88: 0xc07fadc  jal         func_1FEB70
label_1fcd8c:
    if (ctx->pc == 0x1FCD8Cu) {
        ctx->pc = 0x1FCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD88u;
        // 0x1fcd8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCD90u;
        goto label_1fcd90;
    }
    ctx->pc = 0x1FCD88u;
    SET_GPR_U32(ctx, 31, 0x1FCD90u);
    ctx->pc = 0x1FCD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD88u;
    // 0x1fcd8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    { ctx->pc = 0x1feb70; return; }
    ctx->pc = 0x1FCD90u;
label_1fcd90:
    // 0x1fcd90: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1fcd94:
    if (ctx->pc == 0x1FCD94u) {
        ctx->pc = 0x1FCD98u;
        goto label_1fcd98;
    }
    ctx->pc = 0x1FCD90u;
    {
        const bool branch_taken_0x1fcd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd90) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCD98u;
label_1fcd98:
    // 0x1fcd98: 0x8f829044  lw          $v0, -0x6FBC($gp)
    ctx->pc = 0x1fcd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938692)));
label_1fcd9c:
    // 0x1fcd9c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1fcd9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fcda0:
    // 0x1fcda0: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
label_1fcda4:
    if (ctx->pc == 0x1FCDA4u) {
        ctx->pc = 0x1FCDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDA0u;
        // 0x1fcda4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDA8u;
        goto label_1fcda8;
    }
    ctx->pc = 0x1FCDA0u;
    {
        const bool branch_taken_0x1fcda0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDA0u;
        // 0x1fcda4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcda0) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCDA8u;
label_1fcda8:
    // 0x1fcda8: 0xc05b420  jal         func_16D080
label_1fcdac:
    if (ctx->pc == 0x1FCDACu) {
        ctx->pc = 0x1FCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDA8u;
        // 0x1fcdac: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDB0u;
        goto label_1fcdb0;
    }
    ctx->pc = 0x1FCDA8u;
    SET_GPR_U32(ctx, 31, 0x1FCDB0u);
    ctx->pc = 0x1FCDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDA8u;
    // 0x1fcdac: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    { ctx->pc = 0x16d080; return; }
    ctx->pc = 0x1FCDB0u;
label_1fcdb0:
    // 0x1fcdb0: 0x8f829044  lw          $v0, -0x6FBC($gp)
    ctx->pc = 0x1fcdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938692)));
label_1fcdb4:
    // 0x1fcdb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fcdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fcdb8:
    // 0x1fcdb8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1fcdbc:
    if (ctx->pc == 0x1FCDBCu) {
        ctx->pc = 0x1FCDC0u;
        goto label_1fcdc0;
    }
    ctx->pc = 0x1FCDB8u;
    {
        const bool branch_taken_0x1fcdb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fcdb8) {
            ctx->pc = 0x1FCDC8u;
            goto label_1fcdc8;
        }
    }
    ctx->pc = 0x1FCDC0u;
label_1fcdc0:
    // 0x1fcdc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fcdc4:
    if (ctx->pc == 0x1FCDC4u) {
        ctx->pc = 0x1FCDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDC0u;
        // 0x1fcdc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDC8u;
        goto label_1fcdc8;
    }
    ctx->pc = 0x1FCDC0u;
    {
        const bool branch_taken_0x1fcdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDC0u;
        // 0x1fcdc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdc0) {
            ctx->pc = 0x1FCDCCu;
            goto label_1fcdcc;
        }
    }
    ctx->pc = 0x1FCDC8u;
label_1fcdc8:
    // 0x1fcdc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fcdc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fcdcc:
    // 0x1fcdcc: 0xc0801f8  jal         func_2007E0
label_1fcdd0:
    if (ctx->pc == 0x1FCDD0u) {
        ctx->pc = 0x1FCDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDCCu;
        // 0x1fcdd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCDD4u;
        goto label_1fcdd4;
    }
    ctx->pc = 0x1FCDCCu;
    SET_GPR_U32(ctx, 31, 0x1FCDD4u);
    ctx->pc = 0x1FCDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDCCu;
    // 0x1fcdd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2007E0u;
    { ctx->pc = 0x2007e0; return; }
    ctx->pc = 0x1FCDD4u;
label_1fcdd4:
    // 0x1fcdd4: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
label_1fcdd8:
    if (ctx->pc == 0x1FCDD8u) {
        ctx->pc = 0x1FCDDCu;
        goto label_1fcddc;
    }
    ctx->pc = 0x1FCDD4u;
    {
        const bool branch_taken_0x1fcdd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcdd4) {
            ctx->pc = 0x1FCE08u;
            goto label_1fce08;
        }
    }
    ctx->pc = 0x1FCDDCu;
label_1fcddc:
    // 0x1fcddc: 0xc07f708  jal         func_1FDC20
label_1fcde0:
    if (ctx->pc == 0x1FCDE0u) {
        ctx->pc = 0x1FCDE4u;
        goto label_1fcde4;
    }
    ctx->pc = 0x1FCDDCu;
    SET_GPR_U32(ctx, 31, 0x1FCDE4u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x1FCDE4u;
label_1fcde4:
    // 0x1fcde4: 0x9245005d  lbu         $a1, 0x5D($s2)
    ctx->pc = 0x1fcde4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 93)));
label_1fcde8:
    // 0x1fcde8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fcde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fcdec:
    // 0x1fcdec: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1fcdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1fcdf0:
    // 0x1fcdf0: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1fcdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1fcdf4:
    // 0x1fcdf4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fcdf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcdf8:
    // 0x1fcdf8: 0xc07fadc  jal         func_1FEB70
label_1fcdfc:
    if (ctx->pc == 0x1FCDFCu) {
        ctx->pc = 0x1FCDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDF8u;
        // 0x1fcdfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE00u;
        goto label_1fce00;
    }
    ctx->pc = 0x1FCDF8u;
    SET_GPR_U32(ctx, 31, 0x1FCE00u);
    ctx->pc = 0x1FCDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDF8u;
    // 0x1fcdfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    { ctx->pc = 0x1feb70; return; }
    ctx->pc = 0x1FCE00u;
label_1fce00:
    // 0x1fce00: 0x10000010  b           . + 4 + (0x10 << 2)
label_1fce04:
    if (ctx->pc == 0x1FCE04u) {
        ctx->pc = 0x1FCE08u;
        goto label_1fce08;
    }
    ctx->pc = 0x1FCE00u;
    {
        const bool branch_taken_0x1fce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce00) {
            ctx->pc = 0x1FCE44u;
            goto label_1fce44;
        }
    }
    ctx->pc = 0x1FCE08u;
label_1fce08:
    // 0x1fce08: 0xc07fa38  jal         func_1FE8E0
label_1fce0c:
    if (ctx->pc == 0x1FCE0Cu) {
        ctx->pc = 0x1FCE10u;
        goto label_1fce10;
    }
    ctx->pc = 0x1FCE08u;
    SET_GPR_U32(ctx, 31, 0x1FCE10u);
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x1FCE10u;
label_1fce10:
    // 0x1fce10: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fce10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fce14:
    // 0x1fce14: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1fce14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1fce18:
    // 0x1fce18: 0x2442a760  addiu       $v0, $v0, -0x58A0
    ctx->pc = 0x1fce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944608));
label_1fce1c:
    // 0x1fce1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fce1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fce20:
    // 0x1fce20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fce20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fce24:
    // 0x1fce24: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x1fce24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1fce28:
    // 0x1fce28: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x1fce28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_1fce2c:
    // 0x1fce2c: 0x24080078  addiu       $t0, $zero, 0x78
    ctx->pc = 0x1fce2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1fce30:
    // 0x1fce30: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fce30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fce34:
    // 0x1fce34: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1fce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1fce38:
    // 0x1fce38: 0x9046005e  lbu         $a2, 0x5E($v0)
    ctx->pc = 0x1fce38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 94)));
label_1fce3c:
    // 0x1fce3c: 0xc07f734  jal         func_1FDCD0
label_1fce40:
    if (ctx->pc == 0x1FCE40u) {
        ctx->pc = 0x1FCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE3Cu;
        // 0x1fce40: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE44u;
        goto label_1fce44;
    }
    ctx->pc = 0x1FCE3Cu;
    SET_GPR_U32(ctx, 31, 0x1FCE44u);
    ctx->pc = 0x1FCE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE3Cu;
    // 0x1fce40: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDCD0u;
    { ctx->pc = 0x1fdcd0; return; }
    ctx->pc = 0x1FCE44u;
label_1fce44:
    // 0x1fce44: 0x0  nop
    ctx->pc = 0x1fce44u;
    // NOP
label_1fce48:
    // 0x1fce48: 0xc07b48c  jal         func_1ED230
label_1fce4c:
    if (ctx->pc == 0x1FCE4Cu) {
        ctx->pc = 0x1FCE50u;
        goto label_1fce50;
    }
    ctx->pc = 0x1FCE48u;
    SET_GPR_U32(ctx, 31, 0x1FCE50u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1FCE50u;
label_1fce50:
    // 0x1fce50: 0x1000ff4a  b           . + 4 + (-0xB6 << 2)
label_1fce54:
    if (ctx->pc == 0x1FCE54u) {
        ctx->pc = 0x1FCE58u;
        goto label_1fce58;
    }
    ctx->pc = 0x1FCE50u;
    {
        const bool branch_taken_0x1fce50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce50) {
            ctx->pc = 0x1FCB7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcb7c;
        }
    }
    ctx->pc = 0x1FCE58u;
label_1fce58:
    // 0x1fce58: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1fce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1fce5c:
    // 0x1fce5c: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
label_1fce60:
    if (ctx->pc == 0x1FCE60u) {
        ctx->pc = 0x1FCE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE5Cu;
        // 0x1fce60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE64u;
        goto label_1fce64;
    }
    ctx->pc = 0x1FCE5Cu;
    {
        const bool branch_taken_0x1fce5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FCE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE5Cu;
        // 0x1fce60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce5c) {
            ctx->pc = 0x1FCEC4u;
            goto label_1fcec4;
        }
    }
    ctx->pc = 0x1FCE64u;
label_1fce64:
    // 0x1fce64: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fce64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fce68:
    // 0x1fce68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fce68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fce6c:
    // 0x1fce6c: 0xc085cc4  jal         func_217310
label_1fce70:
    if (ctx->pc == 0x1FCE70u) {
        ctx->pc = 0x1FCE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE6Cu;
        // 0x1fce70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE74u;
        goto label_1fce74;
    }
    ctx->pc = 0x1FCE6Cu;
    SET_GPR_U32(ctx, 31, 0x1FCE74u);
    ctx->pc = 0x1FCE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE6Cu;
    // 0x1fce70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217310u;
    { ctx->pc = 0x217310; return; }
    ctx->pc = 0x1FCE74u;
label_1fce74:
    // 0x1fce74: 0xc07fa38  jal         func_1FE8E0
label_1fce78:
    if (ctx->pc == 0x1FCE78u) {
        ctx->pc = 0x1FCE7Cu;
        goto label_1fce7c;
    }
    ctx->pc = 0x1FCE74u;
    SET_GPR_U32(ctx, 31, 0x1FCE7Cu);
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x1FCE7Cu;
label_1fce7c:
    // 0x1fce7c: 0xc07f708  jal         func_1FDC20
label_1fce80:
    if (ctx->pc == 0x1FCE80u) {
        ctx->pc = 0x1FCE84u;
        goto label_1fce84;
    }
    ctx->pc = 0x1FCE7Cu;
    SET_GPR_U32(ctx, 31, 0x1FCE84u);
    ctx->pc = 0x1FDC20u;
    { ctx->pc = 0x1fdc20; return; }
    ctx->pc = 0x1FCE84u;
label_1fce84:
    // 0x1fce84: 0xc08012c  jal         func_2004B0
label_1fce88:
    if (ctx->pc == 0x1FCE88u) {
        ctx->pc = 0x1FCE8Cu;
        goto label_1fce8c;
    }
    ctx->pc = 0x1FCE84u;
    SET_GPR_U32(ctx, 31, 0x1FCE8Cu);
    ctx->pc = 0x2004B0u;
    { ctx->pc = 0x2004b0; return; }
    ctx->pc = 0x1FCE8Cu;
label_1fce8c:
    // 0x1fce8c: 0xc078078  jal         func_1E01E0
label_1fce90:
    if (ctx->pc == 0x1FCE90u) {
        ctx->pc = 0x1FCE94u;
        goto label_1fce94;
    }
    ctx->pc = 0x1FCE8Cu;
    SET_GPR_U32(ctx, 31, 0x1FCE94u);
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1FCE94u;
label_1fce94:
    // 0x1fce94: 0xc085bd0  jal         func_216F40
label_1fce98:
    if (ctx->pc == 0x1FCE98u) {
        ctx->pc = 0x1FCE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE94u;
        // 0x1fce98: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCE9Cu;
        goto label_1fce9c;
    }
    ctx->pc = 0x1FCE94u;
    SET_GPR_U32(ctx, 31, 0x1FCE9Cu);
    ctx->pc = 0x1FCE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE94u;
    // 0x1fce98: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F40u;
    { ctx->pc = 0x216f40; return; }
    ctx->pc = 0x1FCE9Cu;
label_1fce9c:
    // 0x1fce9c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1fce9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1fcea0:
    // 0x1fcea0: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1fcea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1fcea4:
    // 0x1fcea4: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1fcea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1fcea8:
    // 0x1fcea8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1fceac:
    if (ctx->pc == 0x1FCEACu) {
        ctx->pc = 0x1FCEB0u;
        goto label_1fceb0;
    }
    ctx->pc = 0x1FCEA8u;
    {
        const bool branch_taken_0x1fcea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fcea8) {
            ctx->pc = 0x1FCEC0u;
            goto label_1fcec0;
        }
    }
    ctx->pc = 0x1FCEB0u;
label_1fceb0:
    // 0x1fceb0: 0xc06f114  jal         func_1BC450
label_1fceb4:
    if (ctx->pc == 0x1FCEB4u) {
        ctx->pc = 0x1FCEB8u;
        goto label_1fceb8;
    }
    ctx->pc = 0x1FCEB0u;
    SET_GPR_U32(ctx, 31, 0x1FCEB8u);
    ctx->pc = 0x1BC450u;
    { ctx->pc = 0x1bc450; return; }
    ctx->pc = 0x1FCEB8u;
label_1fceb8:
    // 0x1fceb8: 0xc05680c  jal         func_15A030
label_1fcebc:
    if (ctx->pc == 0x1FCEBCu) {
        ctx->pc = 0x1FCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEB8u;
        // 0x1fcebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCEC0u;
        goto label_1fcec0;
    }
    ctx->pc = 0x1FCEB8u;
    SET_GPR_U32(ctx, 31, 0x1FCEC0u);
    ctx->pc = 0x1FCEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCEB8u;
    // 0x1fcebc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A030u;
    { ctx->pc = 0x15a030; return; }
    ctx->pc = 0x1FCEC0u;
label_1fcec0:
    // 0x1fcec0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fcec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fcec4:
    // 0x1fcec4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fcec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fcec8:
    // 0x1fcec8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fcec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fcecc:
    // 0x1fcecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fceccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fced0:
    // 0x1fced0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fced0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fced4:
    // 0x1fced4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fced4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fced8:
    // 0x1fced8: 0x3e00008  jr          $ra
label_1fcedc:
    if (ctx->pc == 0x1FCEDCu) {
        ctx->pc = 0x1FCEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCED8u;
        // 0x1fcedc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCEE0u;
        goto label_1fcee0;
    }
    ctx->pc = 0x1FCED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCED8u;
        // 0x1fcedc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCEE0u;
label_1fcee0:
    // 0x1fcee0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fcee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1fcee4:
    // 0x1fcee4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fcee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcee8:
    // 0x1fcee8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fcee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1fceec:
    // 0x1fceec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fceecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcef0:
    // 0x1fcef0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1fcef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1fcef4:
    // 0x1fcef4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1fcef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1fcef8:
    // 0x1fcef8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1fcef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1fcefc:
    // 0x1fcefc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1fcefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1fcf00:
    // 0x1fcf00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fcf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1fcf04:
    // 0x1fcf04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fcf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1fcf08:
    // 0x1fcf08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fcf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fcf0c:
    // 0x1fcf0c: 0xaf809054  sw          $zero, -0x6FAC($gp)
    ctx->pc = 0x1fcf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938708), GPR_U32(ctx, 0));
label_1fcf10:
    // 0x1fcf10: 0xaf809050  sw          $zero, -0x6FB0($gp)
    ctx->pc = 0x1fcf10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938704), GPR_U32(ctx, 0));
label_1fcf14:
    // 0x1fcf14: 0xaf80904c  sw          $zero, -0x6FB4($gp)
    ctx->pc = 0x1fcf14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938700), GPR_U32(ctx, 0));
label_1fcf18:
    // 0x1fcf18: 0xaf809048  sw          $zero, -0x6FB8($gp)
    ctx->pc = 0x1fcf18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938696), GPR_U32(ctx, 0));
label_1fcf1c:
    // 0x1fcf1c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fcf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fcf20:
    // 0x1fcf20: 0x2463a780  addiu       $v1, $v1, -0x5880
    ctx->pc = 0x1fcf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944640));
label_1fcf24:
    // 0x1fcf24: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1fcf24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1fcf28:
    // 0x1fcf28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fcf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1fcf2c:
    // 0x1fcf2c: 0xc01021  addu        $v0, $a2, $zero
    ctx->pc = 0x1fcf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
label_1fcf30:
    // 0x1fcf30: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1fcf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1fcf34:
    // 0x1fcf34: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fcf34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1fcf38:
    // 0x1fcf38: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1fcf38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1fcf3c:
    // 0x1fcf3c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1fcf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fcf40:
    // 0x1fcf40: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1fcf40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_1fcf44:
    // 0x1fcf44: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1fcf48:
    if (ctx->pc == 0x1FCF48u) {
        ctx->pc = 0x1FCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF44u;
        // 0x1fcf48: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF4Cu;
        goto label_1fcf4c;
    }
    ctx->pc = 0x1FCF44u;
    {
        const bool branch_taken_0x1fcf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF44u;
        // 0x1fcf48: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf44) {
            ctx->pc = 0x1FCF24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcf24;
        }
    }
    ctx->pc = 0x1FCF4Cu;
label_1fcf4c:
    // 0x1fcf4c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1fcf4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf50:
    // 0x1fcf50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fcf50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf54:
    // 0x1fcf54: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fcf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fcf58:
    // 0x1fcf58: 0x240500b9  addiu       $a1, $zero, 0xB9
    ctx->pc = 0x1fcf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_1fcf5c:
    // 0x1fcf5c: 0x2442a7a0  addiu       $v0, $v0, -0x5860
    ctx->pc = 0x1fcf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944672));
label_1fcf60:
    // 0x1fcf60: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x1fcf60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1fcf64:
    // 0x1fcf64: 0xc05e234  jal         func_1788D0
label_1fcf68:
    if (ctx->pc == 0x1FCF68u) {
        ctx->pc = 0x1FCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF64u;
        // 0x1fcf68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCF6Cu;
        goto label_1fcf6c;
    }
    ctx->pc = 0x1FCF64u;
    SET_GPR_U32(ctx, 31, 0x1FCF6Cu);
    ctx->pc = 0x1FCF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF64u;
    // 0x1fcf68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x1FCF6Cu;
label_1fcf6c:
    // 0x1fcf6c: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1fcf6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fcf70:
    // 0x1fcf70: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1fcf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1fcf74:
    // 0x1fcf74: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x1fcf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_1fcf78:
    // 0x1fcf78: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1fcf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1fcf7c:
    // 0x1fcf7c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1fcf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1fcf80:
    // 0x1fcf80: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1fcf80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fcf84:
    // 0x1fcf84: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1fcf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1fcf88:
    // 0x1fcf88: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1fcf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1fcf8c:
    // 0x1fcf8c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1fcf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fcf90:
    // 0x1fcf90: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1fcf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fcf94:
    // 0x1fcf94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fcf94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf98:
    // 0x1fcf98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fcf98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf9c:
    // 0x1fcf9c: 0xc07c110  jal         func_1F0440
label_1fcfa0:
    if (ctx->pc == 0x1FCFA0u) {
        ctx->pc = 0x1FCFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF9Cu;
        // 0x1fcfa0: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFA4u;
        goto label_1fcfa4;
    }
    ctx->pc = 0x1FCF9Cu;
    SET_GPR_U32(ctx, 31, 0x1FCFA4u);
    ctx->pc = 0x1FCFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF9Cu;
    // 0x1fcfa0: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x1FCFA4u;
label_1fcfa4:
    // 0x1fcfa4: 0xc070834  jal         func_1C20D0
label_1fcfa8:
    if (ctx->pc == 0x1FCFA8u) {
        ctx->pc = 0x1FCFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFA4u;
        // 0x1fcfa8: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFACu;
        goto label_1fcfac;
    }
    ctx->pc = 0x1FCFA4u;
    SET_GPR_U32(ctx, 31, 0x1FCFACu);
    ctx->pc = 0x1FCFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFA4u;
    // 0x1fcfa8: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FCFACu;
label_1fcfac:
    // 0x1fcfac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fcfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcfb0:
    // 0x1fcfb0: 0x26240380  addiu       $a0, $s1, 0x380
    ctx->pc = 0x1fcfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_1fcfb4:
    // 0x1fcfb4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1fcfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1fcfb8:
    // 0x1fcfb8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fcfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fcfbc:
    // 0x1fcfbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fcfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fcfc0:
    // 0x1fcfc0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fcfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fcfc4:
    // 0x1fcfc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fcfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fcfc8:
    // 0x1fcfc8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fcfc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fcfcc:
    // 0x1fcfcc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fcfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fcfd0:
    // 0x1fcfd0: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x1fcfd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1fcfd4:
    // 0x1fcfd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fcfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fcfd8:
    // 0x1fcfd8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fcfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fcfdc:
    // 0x1fcfdc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fcfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fcfe0:
    // 0x1fcfe0: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x1fcfe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fcfe4:
    // 0x1fcfe4: 0xc05de30  jal         func_1778C0
label_1fcfe8:
    if (ctx->pc == 0x1FCFE8u) {
        ctx->pc = 0x1FCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFE4u;
        // 0x1fcfe8: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFECu;
        goto label_1fcfec;
    }
    ctx->pc = 0x1FCFE4u;
    SET_GPR_U32(ctx, 31, 0x1FCFECu);
    ctx->pc = 0x1FCFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFE4u;
    // 0x1fcfe8: 0x240b0038  addiu       $t3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x1FCFECu;
label_1fcfec:
    // 0x1fcfec: 0xc070834  jal         func_1C20D0
label_1fcff0:
    if (ctx->pc == 0x1FCFF0u) {
        ctx->pc = 0x1FCFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFECu;
        // 0x1fcff0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FCFF4u;
        goto label_1fcff4;
    }
    ctx->pc = 0x1FCFECu;
    SET_GPR_U32(ctx, 31, 0x1FCFF4u);
    ctx->pc = 0x1FCFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFECu;
    // 0x1fcff0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FCFF4u;
label_1fcff4:
    // 0x1fcff4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1fcff4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fcff8:
    // 0x1fcff8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fcff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcffc:
    // 0x1fcffc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fcffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd000:
    // 0x1fd000: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fd000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fd004:
    // 0x1fd004: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fd004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fd008:
    // 0x1fd008: 0x232a021  addu        $s4, $s1, $s2
    ctx->pc = 0x1fd008u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1fd00c:
    // 0x1fd00c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd010:
    // 0x1fd010: 0x26840420  addiu       $a0, $s4, 0x420
    ctx->pc = 0x1fd010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1056));
label_1fd014:
    // 0x1fd014: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fd014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fd018:
    // 0x1fd018: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fd018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fd01c:
    // 0x1fd01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd020:
    // 0x1fd020: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fd020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fd024:
    // 0x1fd024: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fd024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fd028:
    // 0x1fd028: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fd028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fd02c:
    // 0x1fd02c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fd02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fd030:
    // 0x1fd030: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fd030u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fd034:
    // 0x1fd034: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x1fd034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_1fd038:
    // 0x1fd038: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x1fd038u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1fd03c:
    // 0x1fd03c: 0xc05de30  jal         func_1778C0
label_1fd040:
    if (ctx->pc == 0x1FD040u) {
        ctx->pc = 0x1FD040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD03Cu;
        // 0x1fd040: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD044u;
        goto label_1fd044;
    }
    ctx->pc = 0x1FD03Cu;
    SET_GPR_U32(ctx, 31, 0x1FD044u);
    ctx->pc = 0x1FD040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD03Cu;
    // 0x1fd040: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x1FD044u;
label_1fd044:
    // 0x1fd044: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1fd044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1fd048:
    // 0x1fd048: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1fd048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1fd04c:
    // 0x1fd04c: 0xa2830490  sb          $v1, 0x490($s4)
    ctx->pc = 0x1fd04cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1168), (uint8_t)GPR_U32(ctx, 3));
label_1fd050:
    // 0x1fd050: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1fd050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1fd054:
    // 0x1fd054: 0xa2830491  sb          $v1, 0x491($s4)
    ctx->pc = 0x1fd054u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1169), (uint8_t)GPR_U32(ctx, 3));
label_1fd058:
    // 0x1fd058: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1fd058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fd05c:
    // 0x1fd05c: 0xa2830492  sb          $v1, 0x492($s4)
    ctx->pc = 0x1fd05cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1170), (uint8_t)GPR_U32(ctx, 3));
label_1fd060:
    // 0x1fd060: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fd060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fd064:
    // 0x1fd064: 0xa2820493  sb          $v0, 0x493($s4)
    ctx->pc = 0x1fd064u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1171), (uint8_t)GPR_U32(ctx, 2));
label_1fd068:
    // 0x1fd068: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fd068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fd06c:
    // 0x1fd06c: 0xae840494  sw          $a0, 0x494($s4)
    ctx->pc = 0x1fd06cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1172), GPR_U32(ctx, 4));
label_1fd070:
    // 0x1fd070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd074:
    // 0x1fd074: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x1fd074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_1fd078:
    // 0x1fd078: 0x268406a0  addiu       $a0, $s4, 0x6A0
    ctx->pc = 0x1fd078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1696));
label_1fd07c:
    // 0x1fd07c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1fd07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1fd080:
    // 0x1fd080: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fd080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fd084:
    // 0x1fd084: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fd084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fd088:
    // 0x1fd088: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fd088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fd08c:
    // 0x1fd08c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fd08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fd090:
    // 0x1fd090: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fd090u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fd094:
    // 0x1fd094: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x1fd094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_1fd098:
    // 0x1fd098: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x1fd098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1fd09c:
    // 0x1fd09c: 0xc05de30  jal         func_1778C0
label_1fd0a0:
    if (ctx->pc == 0x1FD0A0u) {
        ctx->pc = 0x1FD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD09Cu;
        // 0x1fd0a0: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD0A4u;
        goto label_1fd0a4;
    }
    ctx->pc = 0x1FD09Cu;
    SET_GPR_U32(ctx, 31, 0x1FD0A4u);
    ctx->pc = 0x1FD0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD09Cu;
    // 0x1fd0a0: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x1FD0A4u;
label_1fd0a4:
    // 0x1fd0a4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fd0a8:
    // 0x1fd0a8: 0x26840920  addiu       $a0, $s4, 0x920
    ctx->pc = 0x1fd0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2336));
label_1fd0ac:
    // 0x1fd0ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fd0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1fd0b0u;
    return;
}

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


void FUN_0017faa0_part652(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bd890u: goto label_2bd890;
        case 0x2bd894u: goto label_2bd894;
        case 0x2bd898u: goto label_2bd898;
        case 0x2bd89cu: goto label_2bd89c;
        case 0x2bd8a0u: goto label_2bd8a0;
        case 0x2bd8a4u: goto label_2bd8a4;
        case 0x2bd8a8u: goto label_2bd8a8;
        case 0x2bd8acu: goto label_2bd8ac;
        case 0x2bd8b0u: goto label_2bd8b0;
        case 0x2bd8b4u: goto label_2bd8b4;
        case 0x2bd8b8u: goto label_2bd8b8;
        case 0x2bd8bcu: goto label_2bd8bc;
        case 0x2bd8c0u: goto label_2bd8c0;
        case 0x2bd8c4u: goto label_2bd8c4;
        case 0x2bd8c8u: goto label_2bd8c8;
        case 0x2bd8ccu: goto label_2bd8cc;
        case 0x2bd8d0u: goto label_2bd8d0;
        case 0x2bd8d4u: goto label_2bd8d4;
        case 0x2bd8d8u: goto label_2bd8d8;
        case 0x2bd8dcu: goto label_2bd8dc;
        case 0x2bd8e0u: goto label_2bd8e0;
        case 0x2bd8e4u: goto label_2bd8e4;
        case 0x2bd8e8u: goto label_2bd8e8;
        case 0x2bd8ecu: goto label_2bd8ec;
        case 0x2bd8f0u: goto label_2bd8f0;
        case 0x2bd8f4u: goto label_2bd8f4;
        case 0x2bd8f8u: goto label_2bd8f8;
        case 0x2bd8fcu: goto label_2bd8fc;
        case 0x2bd900u: goto label_2bd900;
        case 0x2bd904u: goto label_2bd904;
        case 0x2bd908u: goto label_2bd908;
        case 0x2bd90cu: goto label_2bd90c;
        case 0x2bd910u: goto label_2bd910;
        case 0x2bd914u: goto label_2bd914;
        case 0x2bd918u: goto label_2bd918;
        case 0x2bd91cu: goto label_2bd91c;
        case 0x2bd920u: goto label_2bd920;
        case 0x2bd924u: goto label_2bd924;
        case 0x2bd928u: goto label_2bd928;
        case 0x2bd92cu: goto label_2bd92c;
        case 0x2bd930u: goto label_2bd930;
        case 0x2bd934u: goto label_2bd934;
        case 0x2bd938u: goto label_2bd938;
        case 0x2bd93cu: goto label_2bd93c;
        case 0x2bd940u: goto label_2bd940;
        case 0x2bd944u: goto label_2bd944;
        case 0x2bd948u: goto label_2bd948;
        case 0x2bd94cu: goto label_2bd94c;
        case 0x2bd950u: goto label_2bd950;
        case 0x2bd954u: goto label_2bd954;
        case 0x2bd958u: goto label_2bd958;
        case 0x2bd95cu: goto label_2bd95c;
        case 0x2bd960u: goto label_2bd960;
        case 0x2bd964u: goto label_2bd964;
        case 0x2bd968u: goto label_2bd968;
        case 0x2bd96cu: goto label_2bd96c;
        case 0x2bd970u: goto label_2bd970;
        case 0x2bd974u: goto label_2bd974;
        case 0x2bd978u: goto label_2bd978;
        case 0x2bd97cu: goto label_2bd97c;
        case 0x2bd980u: goto label_2bd980;
        case 0x2bd984u: goto label_2bd984;
        case 0x2bd988u: goto label_2bd988;
        case 0x2bd98cu: goto label_2bd98c;
        case 0x2bd990u: goto label_2bd990;
        case 0x2bd994u: goto label_2bd994;
        case 0x2bd998u: goto label_2bd998;
        case 0x2bd99cu: goto label_2bd99c;
        case 0x2bd9a0u: goto label_2bd9a0;
        case 0x2bd9a4u: goto label_2bd9a4;
        case 0x2bd9a8u: goto label_2bd9a8;
        case 0x2bd9acu: goto label_2bd9ac;
        case 0x2bd9b0u: goto label_2bd9b0;
        case 0x2bd9b4u: goto label_2bd9b4;
        case 0x2bd9b8u: goto label_2bd9b8;
        case 0x2bd9bcu: goto label_2bd9bc;
        case 0x2bd9c0u: goto label_2bd9c0;
        case 0x2bd9c4u: goto label_2bd9c4;
        case 0x2bd9c8u: goto label_2bd9c8;
        case 0x2bd9ccu: goto label_2bd9cc;
        case 0x2bd9d0u: goto label_2bd9d0;
        case 0x2bd9d4u: goto label_2bd9d4;
        case 0x2bd9d8u: goto label_2bd9d8;
        case 0x2bd9dcu: goto label_2bd9dc;
        case 0x2bd9e0u: goto label_2bd9e0;
        case 0x2bd9e4u: goto label_2bd9e4;
        case 0x2bd9e8u: goto label_2bd9e8;
        case 0x2bd9ecu: goto label_2bd9ec;
        case 0x2bd9f0u: goto label_2bd9f0;
        case 0x2bd9f4u: goto label_2bd9f4;
        case 0x2bd9f8u: goto label_2bd9f8;
        case 0x2bd9fcu: goto label_2bd9fc;
        case 0x2bda00u: goto label_2bda00;
        case 0x2bda04u: goto label_2bda04;
        case 0x2bda08u: goto label_2bda08;
        case 0x2bda0cu: goto label_2bda0c;
        case 0x2bda10u: goto label_2bda10;
        case 0x2bda14u: goto label_2bda14;
        case 0x2bda18u: goto label_2bda18;
        case 0x2bda1cu: goto label_2bda1c;
        case 0x2bda20u: goto label_2bda20;
        case 0x2bda24u: goto label_2bda24;
        case 0x2bda28u: goto label_2bda28;
        case 0x2bda2cu: goto label_2bda2c;
        case 0x2bda30u: goto label_2bda30;
        case 0x2bda34u: goto label_2bda34;
        case 0x2bda38u: goto label_2bda38;
        case 0x2bda3cu: goto label_2bda3c;
        case 0x2bda40u: goto label_2bda40;
        case 0x2bda44u: goto label_2bda44;
        case 0x2bda48u: goto label_2bda48;
        case 0x2bda4cu: goto label_2bda4c;
        case 0x2bda50u: goto label_2bda50;
        case 0x2bda54u: goto label_2bda54;
        case 0x2bda58u: goto label_2bda58;
        case 0x2bda5cu: goto label_2bda5c;
        case 0x2bda60u: goto label_2bda60;
        case 0x2bda64u: goto label_2bda64;
        case 0x2bda68u: goto label_2bda68;
        case 0x2bda6cu: goto label_2bda6c;
        case 0x2bda70u: goto label_2bda70;
        case 0x2bda74u: goto label_2bda74;
        case 0x2bda78u: goto label_2bda78;
        case 0x2bda7cu: goto label_2bda7c;
        case 0x2bda80u: goto label_2bda80;
        case 0x2bda84u: goto label_2bda84;
        case 0x2bda88u: goto label_2bda88;
        case 0x2bda8cu: goto label_2bda8c;
        case 0x2bda90u: goto label_2bda90;
        case 0x2bda94u: goto label_2bda94;
        case 0x2bda98u: goto label_2bda98;
        case 0x2bda9cu: goto label_2bda9c;
        case 0x2bdaa0u: goto label_2bdaa0;
        case 0x2bdaa4u: goto label_2bdaa4;
        case 0x2bdaa8u: goto label_2bdaa8;
        case 0x2bdaacu: goto label_2bdaac;
        case 0x2bdab0u: goto label_2bdab0;
        case 0x2bdab4u: goto label_2bdab4;
        case 0x2bdab8u: goto label_2bdab8;
        case 0x2bdabcu: goto label_2bdabc;
        case 0x2bdac0u: goto label_2bdac0;
        case 0x2bdac4u: goto label_2bdac4;
        case 0x2bdac8u: goto label_2bdac8;
        case 0x2bdaccu: goto label_2bdacc;
        case 0x2bdad0u: goto label_2bdad0;
        case 0x2bdad4u: goto label_2bdad4;
        case 0x2bdad8u: goto label_2bdad8;
        case 0x2bdadcu: goto label_2bdadc;
        case 0x2bdae0u: goto label_2bdae0;
        case 0x2bdae4u: goto label_2bdae4;
        case 0x2bdae8u: goto label_2bdae8;
        case 0x2bdaecu: goto label_2bdaec;
        case 0x2bdaf0u: goto label_2bdaf0;
        case 0x2bdaf4u: goto label_2bdaf4;
        case 0x2bdaf8u: goto label_2bdaf8;
        case 0x2bdafcu: goto label_2bdafc;
        case 0x2bdb00u: goto label_2bdb00;
        case 0x2bdb04u: goto label_2bdb04;
        case 0x2bdb08u: goto label_2bdb08;
        case 0x2bdb0cu: goto label_2bdb0c;
        case 0x2bdb10u: goto label_2bdb10;
        case 0x2bdb14u: goto label_2bdb14;
        case 0x2bdb18u: goto label_2bdb18;
        case 0x2bdb1cu: goto label_2bdb1c;
        case 0x2bdb20u: goto label_2bdb20;
        case 0x2bdb24u: goto label_2bdb24;
        case 0x2bdb28u: goto label_2bdb28;
        case 0x2bdb2cu: goto label_2bdb2c;
        case 0x2bdb30u: goto label_2bdb30;
        case 0x2bdb34u: goto label_2bdb34;
        case 0x2bdb38u: goto label_2bdb38;
        case 0x2bdb3cu: goto label_2bdb3c;
        case 0x2bdb40u: goto label_2bdb40;
        case 0x2bdb44u: goto label_2bdb44;
        case 0x2bdb48u: goto label_2bdb48;
        case 0x2bdb4cu: goto label_2bdb4c;
        case 0x2bdb50u: goto label_2bdb50;
        case 0x2bdb54u: goto label_2bdb54;
        case 0x2bdb58u: goto label_2bdb58;
        case 0x2bdb5cu: goto label_2bdb5c;
        case 0x2bdb60u: goto label_2bdb60;
        case 0x2bdb64u: goto label_2bdb64;
        case 0x2bdb68u: goto label_2bdb68;
        case 0x2bdb6cu: goto label_2bdb6c;
        case 0x2bdb70u: goto label_2bdb70;
        case 0x2bdb74u: goto label_2bdb74;
        case 0x2bdb78u: goto label_2bdb78;
        case 0x2bdb7cu: goto label_2bdb7c;
        case 0x2bdb80u: goto label_2bdb80;
        case 0x2bdb84u: goto label_2bdb84;
        case 0x2bdb88u: goto label_2bdb88;
        case 0x2bdb8cu: goto label_2bdb8c;
        case 0x2bdb90u: goto label_2bdb90;
        case 0x2bdb94u: goto label_2bdb94;
        case 0x2bdb98u: goto label_2bdb98;
        case 0x2bdb9cu: goto label_2bdb9c;
        case 0x2bdba0u: goto label_2bdba0;
        case 0x2bdba4u: goto label_2bdba4;
        case 0x2bdba8u: goto label_2bdba8;
        case 0x2bdbacu: goto label_2bdbac;
        case 0x2bdbb0u: goto label_2bdbb0;
        case 0x2bdbb4u: goto label_2bdbb4;
        case 0x2bdbb8u: goto label_2bdbb8;
        case 0x2bdbbcu: goto label_2bdbbc;
        case 0x2bdbc0u: goto label_2bdbc0;
        case 0x2bdbc4u: goto label_2bdbc4;
        case 0x2bdbc8u: goto label_2bdbc8;
        case 0x2bdbccu: goto label_2bdbcc;
        case 0x2bdbd0u: goto label_2bdbd0;
        case 0x2bdbd4u: goto label_2bdbd4;
        case 0x2bdbd8u: goto label_2bdbd8;
        case 0x2bdbdcu: goto label_2bdbdc;
        case 0x2bdbe0u: goto label_2bdbe0;
        case 0x2bdbe4u: goto label_2bdbe4;
        case 0x2bdbe8u: goto label_2bdbe8;
        case 0x2bdbecu: goto label_2bdbec;
        case 0x2bdbf0u: goto label_2bdbf0;
        case 0x2bdbf4u: goto label_2bdbf4;
        case 0x2bdbf8u: goto label_2bdbf8;
        case 0x2bdbfcu: goto label_2bdbfc;
        case 0x2bdc00u: goto label_2bdc00;
        case 0x2bdc04u: goto label_2bdc04;
        case 0x2bdc08u: goto label_2bdc08;
        case 0x2bdc0cu: goto label_2bdc0c;
        case 0x2bdc10u: goto label_2bdc10;
        case 0x2bdc14u: goto label_2bdc14;
        case 0x2bdc18u: goto label_2bdc18;
        case 0x2bdc1cu: goto label_2bdc1c;
        case 0x2bdc20u: goto label_2bdc20;
        case 0x2bdc24u: goto label_2bdc24;
        case 0x2bdc28u: goto label_2bdc28;
        case 0x2bdc2cu: goto label_2bdc2c;
        case 0x2bdc30u: goto label_2bdc30;
        case 0x2bdc34u: goto label_2bdc34;
        case 0x2bdc38u: goto label_2bdc38;
        case 0x2bdc3cu: goto label_2bdc3c;
        case 0x2bdc40u: goto label_2bdc40;
        case 0x2bdc44u: goto label_2bdc44;
        case 0x2bdc48u: goto label_2bdc48;
        case 0x2bdc4cu: goto label_2bdc4c;
        case 0x2bdc50u: goto label_2bdc50;
        case 0x2bdc54u: goto label_2bdc54;
        case 0x2bdc58u: goto label_2bdc58;
        case 0x2bdc5cu: goto label_2bdc5c;
        case 0x2bdc60u: goto label_2bdc60;
        case 0x2bdc64u: goto label_2bdc64;
        case 0x2bdc68u: goto label_2bdc68;
        case 0x2bdc6cu: goto label_2bdc6c;
        case 0x2bdc70u: goto label_2bdc70;
        case 0x2bdc74u: goto label_2bdc74;
        case 0x2bdc78u: goto label_2bdc78;
        case 0x2bdc7cu: goto label_2bdc7c;
        case 0x2bdc80u: goto label_2bdc80;
        case 0x2bdc84u: goto label_2bdc84;
        case 0x2bdc88u: goto label_2bdc88;
        case 0x2bdc8cu: goto label_2bdc8c;
        case 0x2bdc90u: goto label_2bdc90;
        case 0x2bdc94u: goto label_2bdc94;
        case 0x2bdc98u: goto label_2bdc98;
        case 0x2bdc9cu: goto label_2bdc9c;
        case 0x2bdca0u: goto label_2bdca0;
        case 0x2bdca4u: goto label_2bdca4;
        case 0x2bdca8u: goto label_2bdca8;
        case 0x2bdcacu: goto label_2bdcac;
        case 0x2bdcb0u: goto label_2bdcb0;
        case 0x2bdcb4u: goto label_2bdcb4;
        case 0x2bdcb8u: goto label_2bdcb8;
        case 0x2bdcbcu: goto label_2bdcbc;
        case 0x2bdcc0u: goto label_2bdcc0;
        case 0x2bdcc4u: goto label_2bdcc4;
        case 0x2bdcc8u: goto label_2bdcc8;
        case 0x2bdcccu: goto label_2bdccc;
        case 0x2bdcd0u: goto label_2bdcd0;
        case 0x2bdcd4u: goto label_2bdcd4;
        case 0x2bdcd8u: goto label_2bdcd8;
        case 0x2bdcdcu: goto label_2bdcdc;
        case 0x2bdce0u: goto label_2bdce0;
        case 0x2bdce4u: goto label_2bdce4;
        case 0x2bdce8u: goto label_2bdce8;
        case 0x2bdcecu: goto label_2bdcec;
        case 0x2bdcf0u: goto label_2bdcf0;
        case 0x2bdcf4u: goto label_2bdcf4;
        case 0x2bdcf8u: goto label_2bdcf8;
        case 0x2bdcfcu: goto label_2bdcfc;
        case 0x2bdd00u: goto label_2bdd00;
        case 0x2bdd04u: goto label_2bdd04;
        case 0x2bdd08u: goto label_2bdd08;
        case 0x2bdd0cu: goto label_2bdd0c;
        case 0x2bdd10u: goto label_2bdd10;
        case 0x2bdd14u: goto label_2bdd14;
        case 0x2bdd18u: goto label_2bdd18;
        case 0x2bdd1cu: goto label_2bdd1c;
        case 0x2bdd20u: goto label_2bdd20;
        case 0x2bdd24u: goto label_2bdd24;
        case 0x2bdd28u: goto label_2bdd28;
        case 0x2bdd2cu: goto label_2bdd2c;
        case 0x2bdd30u: goto label_2bdd30;
        case 0x2bdd34u: goto label_2bdd34;
        case 0x2bdd38u: goto label_2bdd38;
        case 0x2bdd3cu: goto label_2bdd3c;
        case 0x2bdd40u: goto label_2bdd40;
        case 0x2bdd44u: goto label_2bdd44;
        case 0x2bdd48u: goto label_2bdd48;
        case 0x2bdd4cu: goto label_2bdd4c;
        case 0x2bdd50u: goto label_2bdd50;
        case 0x2bdd54u: goto label_2bdd54;
        case 0x2bdd58u: goto label_2bdd58;
        case 0x2bdd5cu: goto label_2bdd5c;
        case 0x2bdd60u: goto label_2bdd60;
        case 0x2bdd64u: goto label_2bdd64;
        case 0x2bdd68u: goto label_2bdd68;
        case 0x2bdd6cu: goto label_2bdd6c;
        case 0x2bdd70u: goto label_2bdd70;
        case 0x2bdd74u: goto label_2bdd74;
        case 0x2bdd78u: goto label_2bdd78;
        case 0x2bdd7cu: goto label_2bdd7c;
        case 0x2bdd80u: goto label_2bdd80;
        case 0x2bdd84u: goto label_2bdd84;
        case 0x2bdd88u: goto label_2bdd88;
        case 0x2bdd8cu: goto label_2bdd8c;
        case 0x2bdd90u: goto label_2bdd90;
        case 0x2bdd94u: goto label_2bdd94;
        case 0x2bdd98u: goto label_2bdd98;
        case 0x2bdd9cu: goto label_2bdd9c;
        case 0x2bdda0u: goto label_2bdda0;
        case 0x2bdda4u: goto label_2bdda4;
        case 0x2bdda8u: goto label_2bdda8;
        case 0x2bddacu: goto label_2bddac;
        case 0x2bddb0u: goto label_2bddb0;
        case 0x2bddb4u: goto label_2bddb4;
        case 0x2bddb8u: goto label_2bddb8;
        case 0x2bddbcu: goto label_2bddbc;
        case 0x2bddc0u: goto label_2bddc0;
        case 0x2bddc4u: goto label_2bddc4;
        case 0x2bddc8u: goto label_2bddc8;
        case 0x2bddccu: goto label_2bddcc;
        case 0x2bddd0u: goto label_2bddd0;
        case 0x2bddd4u: goto label_2bddd4;
        case 0x2bddd8u: goto label_2bddd8;
        case 0x2bdddcu: goto label_2bdddc;
        case 0x2bdde0u: goto label_2bdde0;
        case 0x2bdde4u: goto label_2bdde4;
        case 0x2bdde8u: goto label_2bdde8;
        case 0x2bddecu: goto label_2bddec;
        case 0x2bddf0u: goto label_2bddf0;
        case 0x2bddf4u: goto label_2bddf4;
        case 0x2bddf8u: goto label_2bddf8;
        case 0x2bddfcu: goto label_2bddfc;
        case 0x2bde00u: goto label_2bde00;
        case 0x2bde04u: goto label_2bde04;
        case 0x2bde08u: goto label_2bde08;
        case 0x2bde0cu: goto label_2bde0c;
        case 0x2bde10u: goto label_2bde10;
        case 0x2bde14u: goto label_2bde14;
        case 0x2bde18u: goto label_2bde18;
        case 0x2bde1cu: goto label_2bde1c;
        case 0x2bde20u: goto label_2bde20;
        case 0x2bde24u: goto label_2bde24;
        case 0x2bde28u: goto label_2bde28;
        case 0x2bde2cu: goto label_2bde2c;
        case 0x2bde30u: goto label_2bde30;
        case 0x2bde34u: goto label_2bde34;
        case 0x2bde38u: goto label_2bde38;
        case 0x2bde3cu: goto label_2bde3c;
        case 0x2bde40u: goto label_2bde40;
        case 0x2bde44u: goto label_2bde44;
        case 0x2bde48u: goto label_2bde48;
        case 0x2bde4cu: goto label_2bde4c;
        case 0x2bde50u: goto label_2bde50;
        case 0x2bde54u: goto label_2bde54;
        case 0x2bde58u: goto label_2bde58;
        case 0x2bde5cu: goto label_2bde5c;
        case 0x2bde60u: goto label_2bde60;
        case 0x2bde64u: goto label_2bde64;
        case 0x2bde68u: goto label_2bde68;
        case 0x2bde6cu: goto label_2bde6c;
        case 0x2bde70u: goto label_2bde70;
        case 0x2bde74u: goto label_2bde74;
        case 0x2bde78u: goto label_2bde78;
        case 0x2bde7cu: goto label_2bde7c;
        case 0x2bde80u: goto label_2bde80;
        case 0x2bde84u: goto label_2bde84;
        case 0x2bde88u: goto label_2bde88;
        case 0x2bde8cu: goto label_2bde8c;
        case 0x2bde90u: goto label_2bde90;
        case 0x2bde94u: goto label_2bde94;
        case 0x2bde98u: goto label_2bde98;
        case 0x2bde9cu: goto label_2bde9c;
        case 0x2bdea0u: goto label_2bdea0;
        case 0x2bdea4u: goto label_2bdea4;
        case 0x2bdea8u: goto label_2bdea8;
        case 0x2bdeacu: goto label_2bdeac;
        case 0x2bdeb0u: goto label_2bdeb0;
        case 0x2bdeb4u: goto label_2bdeb4;
        case 0x2bdeb8u: goto label_2bdeb8;
        case 0x2bdebcu: goto label_2bdebc;
        case 0x2bdec0u: goto label_2bdec0;
        case 0x2bdec4u: goto label_2bdec4;
        case 0x2bdec8u: goto label_2bdec8;
        case 0x2bdeccu: goto label_2bdecc;
        case 0x2bded0u: goto label_2bded0;
        case 0x2bded4u: goto label_2bded4;
        case 0x2bded8u: goto label_2bded8;
        case 0x2bdedcu: goto label_2bdedc;
        case 0x2bdee0u: goto label_2bdee0;
        case 0x2bdee4u: goto label_2bdee4;
        case 0x2bdee8u: goto label_2bdee8;
        case 0x2bdeecu: goto label_2bdeec;
        case 0x2bdef0u: goto label_2bdef0;
        case 0x2bdef4u: goto label_2bdef4;
        case 0x2bdef8u: goto label_2bdef8;
        case 0x2bdefcu: goto label_2bdefc;
        case 0x2bdf00u: goto label_2bdf00;
        case 0x2bdf04u: goto label_2bdf04;
        case 0x2bdf08u: goto label_2bdf08;
        case 0x2bdf0cu: goto label_2bdf0c;
        case 0x2bdf10u: goto label_2bdf10;
        case 0x2bdf14u: goto label_2bdf14;
        case 0x2bdf18u: goto label_2bdf18;
        case 0x2bdf1cu: goto label_2bdf1c;
        case 0x2bdf20u: goto label_2bdf20;
        case 0x2bdf24u: goto label_2bdf24;
        case 0x2bdf28u: goto label_2bdf28;
        case 0x2bdf2cu: goto label_2bdf2c;
        case 0x2bdf30u: goto label_2bdf30;
        case 0x2bdf34u: goto label_2bdf34;
        case 0x2bdf38u: goto label_2bdf38;
        case 0x2bdf3cu: goto label_2bdf3c;
        case 0x2bdf40u: goto label_2bdf40;
        case 0x2bdf44u: goto label_2bdf44;
        case 0x2bdf48u: goto label_2bdf48;
        case 0x2bdf4cu: goto label_2bdf4c;
        case 0x2bdf50u: goto label_2bdf50;
        case 0x2bdf54u: goto label_2bdf54;
        case 0x2bdf58u: goto label_2bdf58;
        case 0x2bdf5cu: goto label_2bdf5c;
        case 0x2bdf60u: goto label_2bdf60;
        case 0x2bdf64u: goto label_2bdf64;
        case 0x2bdf68u: goto label_2bdf68;
        case 0x2bdf6cu: goto label_2bdf6c;
        case 0x2bdf70u: goto label_2bdf70;
        case 0x2bdf74u: goto label_2bdf74;
        case 0x2bdf78u: goto label_2bdf78;
        case 0x2bdf7cu: goto label_2bdf7c;
        case 0x2bdf80u: goto label_2bdf80;
        case 0x2bdf84u: goto label_2bdf84;
        case 0x2bdf88u: goto label_2bdf88;
        case 0x2bdf8cu: goto label_2bdf8c;
        case 0x2bdf90u: goto label_2bdf90;
        case 0x2bdf94u: goto label_2bdf94;
        case 0x2bdf98u: goto label_2bdf98;
        case 0x2bdf9cu: goto label_2bdf9c;
        case 0x2bdfa0u: goto label_2bdfa0;
        case 0x2bdfa4u: goto label_2bdfa4;
        case 0x2bdfa8u: goto label_2bdfa8;
        case 0x2bdfacu: goto label_2bdfac;
        case 0x2bdfb0u: goto label_2bdfb0;
        case 0x2bdfb4u: goto label_2bdfb4;
        case 0x2bdfb8u: goto label_2bdfb8;
        case 0x2bdfbcu: goto label_2bdfbc;
        case 0x2bdfc0u: goto label_2bdfc0;
        case 0x2bdfc4u: goto label_2bdfc4;
        case 0x2bdfc8u: goto label_2bdfc8;
        case 0x2bdfccu: goto label_2bdfcc;
        case 0x2bdfd0u: goto label_2bdfd0;
        case 0x2bdfd4u: goto label_2bdfd4;
        case 0x2bdfd8u: goto label_2bdfd8;
        case 0x2bdfdcu: goto label_2bdfdc;
        case 0x2bdfe0u: goto label_2bdfe0;
        case 0x2bdfe4u: goto label_2bdfe4;
        case 0x2bdfe8u: goto label_2bdfe8;
        case 0x2bdfecu: goto label_2bdfec;
        case 0x2bdff0u: goto label_2bdff0;
        case 0x2bdff4u: goto label_2bdff4;
        case 0x2bdff8u: goto label_2bdff8;
        case 0x2bdffcu: goto label_2bdffc;
        case 0x2be000u: goto label_2be000;
        case 0x2be004u: goto label_2be004;
        case 0x2be008u: goto label_2be008;
        case 0x2be00cu: goto label_2be00c;
        case 0x2be010u: goto label_2be010;
        case 0x2be014u: goto label_2be014;
        case 0x2be018u: goto label_2be018;
        case 0x2be01cu: goto label_2be01c;
        case 0x2be020u: goto label_2be020;
        case 0x2be024u: goto label_2be024;
        case 0x2be028u: goto label_2be028;
        case 0x2be02cu: goto label_2be02c;
        case 0x2be030u: goto label_2be030;
        case 0x2be034u: goto label_2be034;
        case 0x2be038u: goto label_2be038;
        case 0x2be03cu: goto label_2be03c;
        case 0x2be040u: goto label_2be040;
        case 0x2be044u: goto label_2be044;
        case 0x2be048u: goto label_2be048;
        case 0x2be04cu: goto label_2be04c;
        case 0x2be050u: goto label_2be050;
        case 0x2be054u: goto label_2be054;
        case 0x2be058u: goto label_2be058;
        case 0x2be05cu: goto label_2be05c;
        default: return;
    }

label_2bd890:
    // 0x2bd890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd894:
    // 0x2bd894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd898:
    // 0x2bd898: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bd89c:
    if (ctx->pc == 0x2BD89Cu) {
        ctx->pc = 0x2BD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD898u;
        // 0x2bd89c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8A0u;
        goto label_2bd8a0;
    }
    ctx->pc = 0x2BD898u;
    {
        const bool branch_taken_0x2bd898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bd898) {
            ctx->pc = 0x2BD89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD898u;
            // 0x2bd89c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF888u;
            { ctx->pc = 0x2bf888; return; }
        }
    }
    ctx->pc = 0x2BD8A0u;
label_2bd8a0:
    // 0x2bd8a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd8a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd8a4:
    // 0x2bd8a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8a8:
    // 0x2bd8a8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd8ac:
    if (ctx->pc == 0x2BD8ACu) {
        ctx->pc = 0x2BD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8A8u;
        // 0x2bd8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8B0u;
        goto label_2bd8b0;
    }
    ctx->pc = 0x2BD8A8u;
    {
        const bool branch_taken_0x2bd8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8A8u;
        // 0x2bd8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8a8) {
            ctx->pc = 0x2C392Cu;
            return;
        }
    }
    ctx->pc = 0x2BD8B0u;
label_2bd8b0:
    // 0x2bd8b0: 0x42020029  .word       0x42020029                   # INVALID     $s0, $v0, 0x29 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd8b0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x29 at 0x2BD8B0 raw=0x42020029"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd8b4:
    // 0x2bd8b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8b8:
    // 0x2bd8b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd8b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd8bc:
    // 0x2bd8bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8c0:
    // 0x2bd8c0: 0x500b0025  beql        $zero, $t3, . + 4 + (0x25 << 2)
label_2bd8c4:
    if (ctx->pc == 0x2BD8C4u) {
        ctx->pc = 0x2BD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8C0u;
        // 0x2bd8c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8C8u;
        goto label_2bd8c8;
    }
    ctx->pc = 0x2BD8C0u;
    {
        const bool branch_taken_0x2bd8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bd8c0) {
            ctx->pc = 0x2BD8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD8C0u;
            // 0x2bd8c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD958u;
            goto label_2bd958;
        }
    }
    ctx->pc = 0x2BD8C8u;
label_2bd8c8:
    // 0x2bd8c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd8c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd8cc:
    // 0x2bd8cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8d0:
    // 0x2bd8d0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bd8d0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bd8d4:
    // 0x2bd8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8d8:
    // 0x2bd8d8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bd8d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bd8dc:
    // 0x2bd8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8e0:
    // 0x2bd8e0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bd8e4:
    if (ctx->pc == 0x2BD8E4u) {
        ctx->pc = 0x2BD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E0u;
        // 0x2bd8e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8E8u;
        goto label_2bd8e8;
    }
    ctx->pc = 0x2BD8E0u;
    {
        const bool branch_taken_0x2bd8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E0u;
        // 0x2bd8e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8e0) {
            ctx->pc = 0x2BD8E4u;
            goto label_2bd8e4;
        }
    }
    ctx->pc = 0x2BD8E8u;
label_2bd8e8:
    // 0x2bd8e8: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2bd8ec:
    if (ctx->pc == 0x2BD8ECu) {
        ctx->pc = 0x2BD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E8u;
        // 0x2bd8ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD8F0u;
        goto label_2bd8f0;
    }
    ctx->pc = 0x2BD8E8u;
    {
        const bool branch_taken_0x2bd8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8E8u;
        // 0x2bd8ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd8e8) {
            ctx->pc = 0x2BDA84u;
            goto label_2bda84;
        }
    }
    ctx->pc = 0x2BD8F0u;
label_2bd8f0:
    // 0x2bd8f0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd8f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BD8F0 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd8f4:
    // 0x2bd8f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd8f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd8f8:
    // 0x2bd8f8: 0x5203081e  beql        $s0, $v1, . + 4 + (0x81E << 2)
label_2bd8fc:
    if (ctx->pc == 0x2BD8FCu) {
        ctx->pc = 0x2BD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD8F8u;
        // 0x2bd8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD900u;
        goto label_2bd900;
    }
    ctx->pc = 0x2BD8F8u;
    {
        const bool branch_taken_0x2bd8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bd8f8) {
            ctx->pc = 0x2BD8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD8F8u;
            // 0x2bd8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF974u;
            { ctx->pc = 0x2bf974; return; }
        }
    }
    ctx->pc = 0x2BD900u;
label_2bd900:
    // 0x2bd900: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2bd904:
    if (ctx->pc == 0x2BD904u) {
        ctx->pc = 0x2BD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD900u;
        // 0x2bd904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD908u;
        goto label_2bd908;
    }
    ctx->pc = 0x2BD900u;
    {
        const bool branch_taken_0x2bd900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD900u;
        // 0x2bd904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd900) {
            ctx->pc = 0x2C3A04u;
            return;
        }
    }
    ctx->pc = 0x2BD908u;
label_2bd908:
    // 0x2bd908: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2bd90c:
    if (ctx->pc == 0x2BD90Cu) {
        ctx->pc = 0x2BD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD908u;
        // 0x2bd90c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD910u;
        goto label_2bd910;
    }
    ctx->pc = 0x2BD908u;
    {
        const bool branch_taken_0x2bd908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD908u;
        // 0x2bd90c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd908) {
            ctx->pc = 0x2D1928u;
            return;
        }
    }
    ctx->pc = 0x2BD910u;
label_2bd910:
    // 0x2bd910: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd910u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bd914:
    // 0x2bd914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd918:
    // 0x2bd918: 0x5a00081a  blezl       $s0, . + 4 + (0x81A << 2)
label_2bd91c:
    if (ctx->pc == 0x2BD91Cu) {
        ctx->pc = 0x2BD91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD918u;
        // 0x2bd91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD920u;
        goto label_2bd920;
    }
    ctx->pc = 0x2BD918u;
    {
        const bool branch_taken_0x2bd918 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bd918) {
            ctx->pc = 0x2BD91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD918u;
            // 0x2bd91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF984u;
            { ctx->pc = 0x2bf984; return; }
        }
    }
    ctx->pc = 0x2BD920u;
label_2bd920:
    // 0x2bd920: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd920u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd924:
    // 0x2bd924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd928:
    // 0x2bd928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd92c:
    // 0x2bd92c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd92cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd930:
    // 0x2bd930: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bd930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bd934:
    // 0x2bd934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd938:
    // 0x2bd938: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd938u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BD938 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd93c:
    // 0x2bd93c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd93cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd940:
    // 0x2bd940: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2bd944:
    if (ctx->pc == 0x2BD944u) {
        ctx->pc = 0x2BD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD940u;
        // 0x2bd944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD948u;
        goto label_2bd948;
    }
    ctx->pc = 0x2BD940u;
    {
        const bool branch_taken_0x2bd940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD940u;
        // 0x2bd944: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd940) {
            ctx->pc = 0x2C1948u;
            return;
        }
    }
    ctx->pc = 0x2BD948u;
label_2bd948:
    // 0x2bd948: 0x800a5070  lb          $t2, 0x5070($zero)
    ctx->pc = 0x2bd948u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x5070u));
label_2bd94c:
    // 0x2bd94c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd94cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd950:
    // 0x2bd950: 0x800a0870  lb          $t2, 0x870($zero)
    ctx->pc = 0x2bd950u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x870u));
label_2bd954:
    // 0x2bd954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd958:
    // 0x2bd958: 0x80012870  lb          $at, 0x2870($zero)
    ctx->pc = 0x2bd958u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2870u));
label_2bd95c:
    // 0x2bd95c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd95cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd960:
    // 0x2bd960: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2bd964:
    if (ctx->pc == 0x2BD964u) {
        ctx->pc = 0x2BD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD960u;
        // 0x2bd964: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD968u;
        goto label_2bd968;
    }
    ctx->pc = 0x2BD960u;
    {
        const bool branch_taken_0x2bd960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD960u;
        // 0x2bd964: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd960) {
            ctx->pc = 0x2BF968u;
            { ctx->pc = 0x2bf968; return; }
        }
    }
    ctx->pc = 0x2BD968u;
label_2bd968:
    // 0x2bd968: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2bd96c:
    if (ctx->pc == 0x2BD96Cu) {
        ctx->pc = 0x2BD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD968u;
        // 0x2bd96c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD970u;
        goto label_2bd970;
    }
    ctx->pc = 0x2BD968u;
    {
        const bool branch_taken_0x2bd968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD968u;
        // 0x2bd96c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd968) {
            ctx->pc = 0x2C39ECu;
            return;
        }
    }
    ctx->pc = 0x2BD970u;
label_2bd970:
    // 0x2bd970: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bd974:
    if (ctx->pc == 0x2BD974u) {
        ctx->pc = 0x2BD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD970u;
        // 0x2bd974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD978u;
        goto label_2bd978;
    }
    ctx->pc = 0x2BD970u;
    {
        const bool branch_taken_0x2bd970 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD970u;
        // 0x2bd974: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd970) {
            ctx->pc = 0x2D3970u;
            return;
        }
    }
    ctx->pc = 0x2BD978u;
label_2bd978:
    // 0x2bd978: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bd97c:
    if (ctx->pc == 0x2BD97Cu) {
        ctx->pc = 0x2BD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD978u;
        // 0x2bd97c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD980u;
        goto label_2bd980;
    }
    ctx->pc = 0x2BD978u;
    {
        const bool branch_taken_0x2bd978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD978u;
        // 0x2bd97c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd978) {
            ctx->pc = 0x2D3980u;
            return;
        }
    }
    ctx->pc = 0x2BD980u;
label_2bd980:
    // 0x2bd980: 0x3e5d000  .word       0x03E5D000                   # sll         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd980u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2bd984:
    // 0x2bd984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd988:
    // 0x2bd988: 0x3e6d000  .word       0x03E6D000                   # sll         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bd988u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2bd98c:
    // 0x2bd98c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd98cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd990:
    // 0x2bd990: 0xb0b2800  j           func_C2CA000
label_2bd994:
    if (ctx->pc == 0x2BD994u) {
        ctx->pc = 0x2BD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD990u;
        // 0x2bd994: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD998u;
        goto label_2bd998;
    }
    ctx->pc = 0x2BD990u;
    ctx->pc = 0x2BD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD990u;
    // 0x2bd994: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CA000u, 0x2BD990u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BD998u;
label_2bd998:
    // 0x2bd998: 0xb0b3000  j           func_C2CC000
label_2bd99c:
    if (ctx->pc == 0x2BD99Cu) {
        ctx->pc = 0x2BD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD998u;
        // 0x2bd99c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9A0u;
        goto label_2bd9a0;
    }
    ctx->pc = 0x2BD998u;
    ctx->pc = 0x2BD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD998u;
    // 0x2bd99c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CC000u, 0x2BD998u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BD9A0u;
label_2bd9a0:
    // 0x2bd9a0: 0x42010070  .word       0x42010070                   # INVALID     $s0, $at, 0x70 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bd9a0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x30 at 0x2BD9A0 raw=0x42010070"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bd9a4:
    // 0x2bd9a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9a8:
    // 0x2bd9a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd9a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd9ac:
    // 0x2bd9ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9b0:
    // 0x2bd9b0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bd9b0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bd9b4:
    // 0x2bd9b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9b8:
    // 0x2bd9b8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bd9b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bd9bc:
    // 0x2bd9bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9c0:
    // 0x2bd9c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd9c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd9c4:
    // 0x2bd9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9c8:
    // 0x2bd9c8: 0x80002efc  lb          $zero, 0x2EFC($zero)
    ctx->pc = 0x2bd9c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2EFCu));
label_2bd9cc:
    // 0x2bd9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9d0:
    // 0x2bd9d0: 0x10021005  beq         $zero, $v0, . + 4 + (0x1005 << 2)
label_2bd9d4:
    if (ctx->pc == 0x2BD9D4u) {
        ctx->pc = 0x2BD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9D0u;
        // 0x2bd9d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BD9D8u;
        goto label_2bd9d8;
    }
    ctx->pc = 0x2BD9D0u;
    {
        const bool branch_taken_0x2bd9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9D0u;
        // 0x2bd9d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9d0) {
            ctx->pc = 0x2C19E8u;
            return;
        }
    }
    ctx->pc = 0x2BD9D8u;
label_2bd9d8:
    // 0x2bd9d8: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bd9d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bd9dc:
    // 0x2bd9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9e0:
    // 0x2bd9e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd9e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd9e4:
    // 0x2bd9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9e8:
    // 0x2bd9e8: 0x800036fc  lb          $zero, 0x36FC($zero)
    ctx->pc = 0x2bd9e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x36FCu));
label_2bd9ec:
    // 0x2bd9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9f0:
    // 0x2bd9f0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bd9f0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BD9F0 raw=0x48007800");
 /* MITIGATED */
label_2bd9f4:
    // 0x2bd9f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bd9f8:
    // 0x2bd9f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bd9f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bd9fc:
    // 0x2bd9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bd9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda00:
    // 0x2bda00: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2bda04:
    // 0x2bda04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda08:
    // 0x2bda08: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda08u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BDA08 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bda0c:
    // 0x2bda0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda10:
    // 0x2bda10: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda10u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2bda14:
    // 0x2bda14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda18:
    // 0x2bda18: 0x1f84003  .word       0x01F84003                   # sra         $t0, $t8, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda18u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 24), 0));
label_2bda1c:
    // 0x2bda1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda20:
    // 0x2bda20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda24:
    // 0x2bda24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda28:
    // 0x2bda28: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2bda28u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bda2c:
    // 0x2bda2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda30:
    // 0x2bda30: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2bda30u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bda34:
    // 0x2bda34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda38:
    // 0x2bda38: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2bda38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bda3c:
    // 0x2bda3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda40:
    // 0x2bda40: 0x81e9c37d  lb          $t1, -0x3C83($t7)
    ctx->pc = 0x2bda40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2bda44:
    // 0x2bda44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda48:
    // 0x2bda48: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bda48u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BDA48 raw=0x48001000");
 /* MITIGATED */
label_2bda4c:
    // 0x2bda4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda50:
    // 0x2bda50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda54:
    // 0x2bda54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda58:
    // 0x2bda58: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bda58u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bda5c:
    // 0x2bda5c: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bda5cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bda60:
    // 0x2bda60: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bda60u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bda64:
    // 0x2bda64: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bda64u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bda68:
    // 0x2bda68: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bda68u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bda6c:
    // 0x2bda6c: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bda6cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bda70:
    // 0x2bda70: 0x81e5437c  lb          $a1, 0x437C($t7)
    ctx->pc = 0x2bda70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bda74:
    // 0x2bda74: 0x1e5fd28  .word       0x01E5FD28                   # mfsa        $ra # 01E50500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bda74u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bda78:
    // 0x2bda78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda7c:
    // 0x2bda7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bda80:
    // 0x2bda80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda84:
    // 0x2bda84: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda84u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bda88:
    // 0x2bda88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda8c:
    // 0x2bda8c: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bda8cu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2bda90:
    // 0x2bda90: 0x0  nop
    ctx->pc = 0x2bda90u;
    // NOP
label_2bda94:
    // 0x2bda94: 0x4a000200  vaddx       $vf8, $vf0, $vf0x
    ctx->pc = 0x2bda94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_2bda98:
    // 0x2bda98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bda98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bda9c:
    // 0x2bda9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bda9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdaa0:
    // 0x2bdaa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdaa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdaa4:
    // 0x2bdaa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdaa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdaa8:
    // 0x2bdaa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdaa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdaac:
    // 0x2bdaac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdaacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdab0:
    // 0x2bdab0: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2bdab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2bdab4:
    // 0x2bdab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdab8:
    // 0x2bdab8: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2bdab8u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2bdabc:
    // 0x2bdabc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdabcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdac0:
    // 0x2bdac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdac4:
    // 0x2bdac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdac8:
    // 0x2bdac8: 0x50040010  beql        $zero, $a0, . + 4 + (0x10 << 2)
label_2bdacc:
    if (ctx->pc == 0x2BDACCu) {
        ctx->pc = 0x2BDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAC8u;
        // 0x2bdacc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDAD0u;
        goto label_2bdad0;
    }
    ctx->pc = 0x2BDAC8u;
    {
        const bool branch_taken_0x2bdac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bdac8) {
            ctx->pc = 0x2BDACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDAC8u;
            // 0x2bdacc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDB0Cu;
            goto label_2bdb0c;
        }
    }
    ctx->pc = 0x2BDAD0u;
label_2bdad0:
    // 0x2bdad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdad4:
    // 0x2bdad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdad8:
    // 0x2bdad8: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bdad8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bdadc:
    // 0x2bdadc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdadcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdae0:
    // 0x2bdae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdae4:
    // 0x2bdae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdae8:
    // 0x2bdae8: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2bdaec:
    if (ctx->pc == 0x2BDAECu) {
        ctx->pc = 0x2BDAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDAE8u;
        // 0x2bdaec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDAF0u;
        goto label_2bdaf0;
    }
    ctx->pc = 0x2BDAE8u;
    {
        const bool branch_taken_0x2bdae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bdae8) {
            ctx->pc = 0x2BDAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDAE8u;
            // 0x2bdaec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDAF8u;
            goto label_2bdaf8;
        }
    }
    ctx->pc = 0x2BDAF0u;
label_2bdaf0:
    // 0x2bdaf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdaf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdaf4:
    // 0x2bdaf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdaf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdaf8:
    // 0x2bdaf8: 0x40000020  .word       0x40000020                   # mfc0        $zero, Index # 00000020 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bdaf8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bdafc:
    // 0x2bdafc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdafcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb00:
    // 0x2bdb00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb04:
    // 0x2bdb04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb08:
    // 0x2bdb08: 0x42010020  .word       0x42010020                   # INVALID     $s0, $at, 0x20 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bdb08u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x20 at 0x2BDB08 raw=0x42010020"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdb0c:
    // 0x2bdb0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb10:
    // 0x2bdb10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb14:
    // 0x2bdb14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb18:
    // 0x2bdb18: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bdb18u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bdb1c:
    // 0x2bdb1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb20:
    // 0x2bdb20: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bdb20u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bdb24:
    // 0x2bdb24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb28:
    // 0x2bdb28: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bdb28u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bdb2c:
    // 0x2bdb2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb30:
    // 0x2bdb30: 0x81e9eb7d  lb          $t1, -0x1483($t7)
    ctx->pc = 0x2bdb30u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294962045)));
label_2bdb34:
    // 0x2bdb34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb38:
    // 0x2bdb38: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bdb3c:
    if (ctx->pc == 0x2BDB3Cu) {
        ctx->pc = 0x2BDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB38u;
        // 0x2bdb3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB40u;
        goto label_2bdb40;
    }
    ctx->pc = 0x2BDB38u;
    {
        const bool branch_taken_0x2bdb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB38u;
        // 0x2bdb3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb38) {
            ctx->pc = 0x2D3B40u;
            return;
        }
    }
    ctx->pc = 0x2BDB40u;
label_2bdb40:
    // 0x2bdb40: 0x40000017  .word       0x40000017                   # mfc0        $zero, Index # 00000017 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bdb40u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bdb44:
    // 0x2bdb44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb48:
    // 0x2bdb48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb4c:
    // 0x2bdb4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb50:
    // 0x2bdb50: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bdb50u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bdb54:
    // 0x2bdb54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb58:
    // 0x2bdb58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb5c:
    // 0x2bdb5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb60:
    // 0x2bdb60: 0x5004000e  beql        $zero, $a0, . + 4 + (0xE << 2)
label_2bdb64:
    if (ctx->pc == 0x2BDB64u) {
        ctx->pc = 0x2BDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDB60u;
        // 0x2bdb64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDB68u;
        goto label_2bdb68;
    }
    ctx->pc = 0x2BDB60u;
    {
        const bool branch_taken_0x2bdb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bdb60) {
            ctx->pc = 0x2BDB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDB60u;
            // 0x2bdb64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDB9Cu;
            goto label_2bdb9c;
        }
    }
    ctx->pc = 0x2BDB68u;
label_2bdb68:
    // 0x2bdb68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb6c:
    // 0x2bdb6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb70:
    // 0x2bdb70: 0x42010013  .word       0x42010013                   # INVALID     $s0, $at, 0x13 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bdb70u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x13 at 0x2BDB70 raw=0x42010013"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdb74:
    // 0x2bdb74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb78:
    // 0x2bdb78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdb78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdb7c:
    // 0x2bdb7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb80:
    // 0x2bdb80: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bdb80u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bdb84:
    // 0x2bdb84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb88:
    // 0x2bdb88: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bdb88u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bdb8c:
    // 0x2bdb8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb90:
    // 0x2bdb90: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bdb90u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2bdb94:
    // 0x2bdb94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdb98:
    // 0x2bdb98: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2bdb98u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bdb9c:
    // 0x2bdb9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdb9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdba0:
    // 0x2bdba0: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bdba0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bdba4:
    // 0x2bdba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdba8:
    // 0x2bdba8: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bdba8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bdbac:
    // 0x2bdbac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbb0:
    // 0x2bdbb0: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bdbb0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bdbb4:
    // 0x2bdbb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbb8:
    // 0x2bdbb8: 0x81e9eb7d  lb          $t1, -0x1483($t7)
    ctx->pc = 0x2bdbb8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294962045)));
label_2bdbbc:
    // 0x2bdbbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbc0:
    // 0x2bdbc0: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2bdbc4:
    if (ctx->pc == 0x2BDBC4u) {
        ctx->pc = 0x2BDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBC0u;
        // 0x2bdbc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDBC8u;
        goto label_2bdbc8;
    }
    ctx->pc = 0x2BDBC0u;
    {
        const bool branch_taken_0x2bdbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BDBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBC0u;
        // 0x2bdbc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbc0) {
            ctx->pc = 0x2D3BCCu;
            return;
        }
    }
    ctx->pc = 0x2BDBC8u;
label_2bdbc8:
    // 0x2bdbc8: 0x40000006  .word       0x40000006                   # mfc0        $zero, Index # 00000006 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bdbc8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bdbcc:
    // 0x2bdbcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbd0:
    // 0x2bdbd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdbd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdbd4:
    // 0x2bdbd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbd8:
    // 0x2bdbd8: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bdbd8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bdbdc:
    // 0x2bdbdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbe0:
    // 0x2bdbe0: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bdbe0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bdbe4:
    // 0x2bdbe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbe8:
    // 0x2bdbe8: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bdbe8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2bdbec:
    // 0x2bdbec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbf0:
    // 0x2bdbf0: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2bdbf0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2bdbf4:
    // 0x2bdbf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdbf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdbf8:
    // 0x2bdbf8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bdbfc:
    if (ctx->pc == 0x2BDBFCu) {
        ctx->pc = 0x2BDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBF8u;
        // 0x2bdbfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC00u;
        goto label_2bdc00;
    }
    ctx->pc = 0x2BDBF8u;
    {
        const bool branch_taken_0x2bdbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BDBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDBF8u;
        // 0x2bdbfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbf8) {
            ctx->pc = 0x2D3C00u;
            return;
        }
    }
    ctx->pc = 0x2BDC00u;
label_2bdc00:
    // 0x2bdc00: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bdc00u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BDC00 raw=0x48001000");
 /* MITIGATED */
label_2bdc04:
    // 0x2bdc04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc08:
    // 0x2bdc08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc0c:
    // 0x2bdc0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc10:
    // 0x2bdc10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc14:
    // 0x2bdc14: 0x3c8e58  .word       0x003C8E58                   # mult        $s1, $at, $gp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdc14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2bdc18:
    // 0x2bdc18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc1c:
    // 0x2bdc1c: 0x3cae98  .word       0x003CAE98                   # mult        $s5, $at, $gp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdc1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2bdc20:
    // 0x2bdc20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc24:
    // 0x2bdc24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc28:
    // 0x2bdc28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc2c:
    // 0x2bdc2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc30:
    // 0x2bdc30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc34:
    // 0x2bdc34: 0x1f98e47  .word       0x01F98E47                   # srav        $s1, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdc34u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2bdc38:
    // 0x2bdc38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc3c:
    // 0x2bdc3c: 0x1faae87  .word       0x01FAAE87                   # srav        $s5, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdc3cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2bdc40:
    // 0x2bdc40: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2bdc40u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2bdc44:
    // 0x2bdc44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc48:
    // 0x2bdc48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc4c:
    // 0x2bdc4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc50:
    // 0x2bdc50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc54:
    // 0x2bdc54: 0x1f9c9fd  .word       0x01F9C9FD                   # INVALID     $t7, $t9, -0x3603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdc54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BDC54 raw=0x01F9C9FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdc58:
    // 0x2bdc58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc5c:
    // 0x2bdc5c: 0x1fad1fd  .word       0x01FAD1FD                   # INVALID     $t7, $k0, -0x2E03 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdc5cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BDC5C raw=0x01FAD1FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdc60:
    // 0x2bdc60: 0x500c0004  beql        $zero, $t4, . + 4 + (0x4 << 2)
label_2bdc64:
    if (ctx->pc == 0x2BDC64u) {
        ctx->pc = 0x2BDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC60u;
        // 0x2bdc64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC68u;
        goto label_2bdc68;
    }
    ctx->pc = 0x2BDC60u;
    {
        const bool branch_taken_0x2bdc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2bdc60) {
            ctx->pc = 0x2BDC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDC60u;
            // 0x2bdc64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BDC74u;
            goto label_2bdc74;
        }
    }
    ctx->pc = 0x2BDC68u;
label_2bdc68:
    // 0x2bdc68: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2bdc6c:
    if (ctx->pc == 0x2BDC6Cu) {
        ctx->pc = 0x2BDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC68u;
        // 0x2bdc6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDC70u;
        goto label_2bdc70;
    }
    ctx->pc = 0x2BDC68u;
    {
        const bool branch_taken_0x2bdc68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2BDC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDC68u;
        // 0x2bdc6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdc68) {
            ctx->pc = 0x2D5C70u;
            return;
        }
    }
    ctx->pc = 0x2BDC70u;
label_2bdc70:
    // 0x2bdc70: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2bdc70u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2bdc74:
    // 0x2bdc74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc78:
    // 0x2bdc78: 0x400007fc  .word       0x400007FC                   # mfc0        $zero, Index # 000007FC <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bdc78u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bdc7c:
    // 0x2bdc7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc80:
    // 0x2bdc80: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2bdc80u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2bdc84:
    // 0x2bdc84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc88:
    // 0x2bdc88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc8c:
    // 0x2bdc8c: 0x1d9d6e8  .word       0x01D9D6E8                   # mfsa        $k0 # 01D906C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdc8cu;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2bdc90:
    // 0x2bdc90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc94:
    // 0x2bdc94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdc98:
    // 0x2bdc98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdc98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdc9c:
    // 0x2bdc9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdc9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdca0:
    // 0x2bdca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdca4:
    // 0x2bdca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdca8:
    // 0x2bdca8: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2bdca8u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2bdcac:
    // 0x2bdcac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdcacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdcb0:
    // 0x2bdcb0: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2bdcb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2bdcb4:
    // 0x2bdcb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdcb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdcb8:
    // 0x2bdcb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdcb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdcbc:
    // 0x2bdcbc: 0x800720  .word       0x00800720                   # add         $zero, $a0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdcbcu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2bdcc0:
    // 0x2bdcc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdcc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdcc4:
    // 0x2bdcc4: 0x1f1ae6c  .word       0x01F1AE6C                   # dadd        $s5, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdcc4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 17); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_2bdcc8:
    // 0x2bdcc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdcc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdccc:
    // 0x2bdccc: 0x1f2b6ac  .word       0x01F2B6AC                   # dadd        $s6, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdcccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2bdcd0:
    // 0x2bdcd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdcd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdcd4:
    // 0x2bdcd4: 0x1f3beec  .word       0x01F3BEEC                   # dadd        $s7, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdcd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_2bdcd8:
    // 0x2bdcd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdcd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdcdc:
    // 0x2bdcdc: 0x1f42f6c  .word       0x01F42F6C                   # dadd        $a1, $t7, $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdcdcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_2bdce0:
    // 0x2bdce0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdce0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdce4:
    // 0x2bdce4: 0x1fcce59  .word       0x01FCCE59                   # multu       $t7, $gp # 0000CE40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdce4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2bdce8:
    // 0x2bdce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdcec:
    // 0x2bdcec: 0x1fcd699  .word       0x01FCD699                   # multu       $t7, $gp # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdcecu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2bdcf0:
    // 0x2bdcf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdcf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdcf4:
    // 0x2bdcf4: 0x1fcded9  .word       0x01FCDED9                   # multu       $t7, $gp # 0000DEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdcf4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2bdcf8:
    // 0x2bdcf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdcf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdcfc:
    // 0x2bdcfc: 0x1fcef59  .word       0x01FCEF59                   # multu       $t7, $gp # 0000EF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdcfcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_2bdd00:
    // 0x2bdd00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd04:
    // 0x2bdd04: 0x1f1ce68  .word       0x01F1CE68                   # mfsa        $t9 # 01F10640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdd04u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2bdd08:
    // 0x2bdd08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd0c:
    // 0x2bdd0c: 0x1f2d6a8  .word       0x01F2D6A8                   # mfsa        $k0 # 01F20680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdd0cu;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2bdd10:
    // 0x2bdd10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd14:
    // 0x2bdd14: 0x1f3dee8  .word       0x01F3DEE8                   # mfsa        $k1 # 01F306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdd14u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2bdd18:
    // 0x2bdd18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd1c:
    // 0x2bdd1c: 0x1f4ef68  .word       0x01F4EF68                   # mfsa        $sp # 01F40740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdd1cu;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_2bdd20:
    // 0x2bdd20: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bdd20u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BDD20 raw=0x48000800");
 /* MITIGATED */
label_2bdd24:
    // 0x2bdd24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdd24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdd28:
    // 0x2bdd28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd2c:
    // 0x2bdd2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdd2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdd30:
    // 0x2bdd30: 0x1f1000a  movz        $zero, $t7, $s1
    ctx->pc = 0x2bdd30u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2bdd34:
    // 0x2bdd34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdd34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdd38:
    // 0x2bdd38: 0x1f2000b  movn        $zero, $t7, $s2
    ctx->pc = 0x2bdd38u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2bdd3c:
    // 0x2bdd3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdd3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdd40:
    // 0x2bdd40: 0x1f3000c  .word       0x01F3000C                   # syscall     0 # 01F30000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdd40u;
    ctx->pc = 0x2BDD44u;
runtime->handleSyscall(rdram, ctx, 0x7CC00u);
label_2bdd44:
    // 0x2bdd44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdd44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdd48:
    // 0x2bdd48: 0x1f4000d  break       500
    ctx->pc = 0x2bdd48u;
    runtime->handleBreak(rdram, ctx);
label_2bdd4c:
    // 0x2bdd4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdd4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdd50:
    // 0x2bdd50: 0x10072801  beq         $zero, $a3, . + 4 + (0x2801 << 2)
label_2bdd54:
    if (ctx->pc == 0x2BDD54u) {
        ctx->pc = 0x2BDD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD50u;
        // 0x2bdd54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD58u;
        goto label_2bdd58;
    }
    ctx->pc = 0x2BDD50u;
    {
        const bool branch_taken_0x2bdd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BDD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD50u;
        // 0x2bdd54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd50) {
            ctx->pc = 0x2C7D58u;
            return;
        }
    }
    ctx->pc = 0x2BDD58u;
label_2bdd58:
    // 0x2bdd58: 0x10093001  beq         $zero, $t1, . + 4 + (0x3001 << 2)
label_2bdd5c:
    if (ctx->pc == 0x2BDD5Cu) {
        ctx->pc = 0x2BDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD58u;
        // 0x2bdd5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDD60u;
        goto label_2bdd60;
    }
    ctx->pc = 0x2BDD58u;
    {
        const bool branch_taken_0x2bdd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD58u;
        // 0x2bdd5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd58) {
            ctx->pc = 0x2C9D60u;
            return;
        }
    }
    ctx->pc = 0x2BDD60u;
label_2bdd60:
    // 0x2bdd60: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdd60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2bdd64:
    // 0x2bdd64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdd64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdd68:
    // 0x2bdd68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd6c:
    // 0x2bdd6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdd6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdd70:
    // 0x2bdd70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd74:
    // 0x2bdd74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdd74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdd78:
    // 0x2bdd78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd7c:
    // 0x2bdd7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdd7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdd80:
    // 0x2bdd80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd84:
    // 0x2bdd84: 0x1f589bc  .word       0x01F589BC                   # dsll32      $s1, $s5, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdd84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 6));
label_2bdd88:
    // 0x2bdd88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd8c:
    // 0x2bdd8c: 0x1f590bd  .word       0x01F590BD                   # INVALID     $t7, $s5, -0x6F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdd8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BDD8C raw=0x01F590BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdd90:
    // 0x2bdd90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd94:
    // 0x2bdd94: 0x1f598be  .word       0x01F598BE                   # dsrl32      $s3, $s5, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdd94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) >> (32 + 2));
label_2bdd98:
    // 0x2bdd98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdd98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdd9c:
    // 0x2bdd9c: 0x1f5a64b  .word       0x01F5A64B                   # movn        $s4, $t7, $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdd9cu;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 15));
label_2bdda0:
    // 0x2bdda0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdda0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdda4:
    // 0x2bdda4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdda4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdda8:
    // 0x2bdda8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdda8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bddac:
    // 0x2bddac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bddacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bddb0:
    // 0x2bddb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bddb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bddb4:
    // 0x2bddb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bddb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bddb8:
    // 0x2bddb8: 0x81f903bc  lb          $t9, 0x3BC($t7)
    ctx->pc = 0x2bddb8u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2bddbc:
    // 0x2bddbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bddbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bddc0:
    // 0x2bddc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bddc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bddc4:
    // 0x2bddc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bddc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bddc8:
    // 0x2bddc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bddc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bddcc:
    // 0x2bddcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bddccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bddd0:
    // 0x2bddd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bddd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bddd4:
    // 0x2bddd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bddd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bddd8:
    // 0x2bddd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bddd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdddc:
    // 0x2bdddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdde0:
    // 0x2bdde0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdde0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdde4:
    // 0x2bdde4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdde4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdde8:
    // 0x2bdde8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdde8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bddec:
    // 0x2bddec: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bddecu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2bddf0:
    // 0x2bddf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bddf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bddf4:
    // 0x2bddf4: 0x20f6a1  .word       0x0020F6A1                   # addu        $fp, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bddf4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2bddf8:
    // 0x2bddf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bddf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bddfc:
    // 0x2bddfc: 0x1e0ce1c  .word       0x01E0CE1C                   # dmult       $t7, $zero # 0000CE00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bddfcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BDDFC raw=0x01E0CE1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bde00:
    // 0x2bde00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde04:
    // 0x2bde04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde08:
    // 0x2bde08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde0c:
    // 0x2bde0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde10:
    // 0x2bde10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde14:
    // 0x2bde14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde18:
    // 0x2bde18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde1c:
    // 0x2bde1c: 0x20d69f  .word       0x0020D69F                   # ddivu       $k0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bde1cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BDE1C raw=0x0020D69F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bde20:
    // 0x2bde20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde24:
    // 0x2bde24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde28:
    // 0x2bde28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde2c:
    // 0x2bde2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde30:
    // 0x2bde30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde34:
    // 0x2bde34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde38:
    // 0x2bde38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde3c:
    // 0x2bde3c: 0x20d610  .word       0x0020D610                   # mfhi        $k0 # 00200600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bde3cu;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_2bde40:
    // 0x2bde40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde44:
    // 0x2bde44: 0x1fac17d  .word       0x01FAC17D                   # INVALID     $t7, $k0, -0x3E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bde44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BDE44 raw=0x01FAC17D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bde48:
    // 0x2bde48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde4c:
    // 0x2bde4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde50:
    // 0x2bde50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde54:
    // 0x2bde54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde58:
    // 0x2bde58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde5c:
    // 0x2bde5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde60:
    // 0x2bde60: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bde60u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2bde64:
    // 0x2bde64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde68:
    // 0x2bde68: 0x3e9d002  .word       0x03E9D002                   # srl         $k0, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bde68u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
label_2bde6c:
    // 0x2bde6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde70:
    // 0x2bde70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde74:
    // 0x2bde74: 0x400583  .word       0x00400583                   # sra         $zero, $zero, 22 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bde74u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 22));
label_2bde78:
    // 0x2bde78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde7c:
    // 0x2bde7c: 0x400183  .word       0x00400183                   # sra         $zero, $zero, 6 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bde7cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 6));
label_2bde80:
    // 0x2bde80: 0x1964002  .word       0x01964002                   # srl         $t0, $s6, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bde80u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 22), 0));
label_2bde84:
    // 0x2bde84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde88:
    // 0x2bde88: 0x1864003  .word       0x01864003                   # sra         $t0, $a2, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bde88u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 0));
label_2bde8c:
    // 0x2bde8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde90:
    // 0x2bde90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde94:
    // 0x2bde94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bde98:
    // 0x2bde98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bde98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bde9c:
    // 0x2bde9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bde9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdea0:
    // 0x2bdea0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdea0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdea4:
    // 0x2bdea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdea8:
    // 0x2bdea8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdea8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdeac:
    // 0x2bdeac: 0x1c0b59c  .word       0x01C0B59C                   # dmult       $t6, $zero # 0000B580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdeacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BDEAC raw=0x01C0B59C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdeb0:
    // 0x2bdeb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdeb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdeb4:
    // 0x2bdeb4: 0x1c0319c  .word       0x01C0319C                   # dmult       $t6, $zero # 00003180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdeb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BDEB4 raw=0x01C0319C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdeb8:
    // 0x2bdeb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdeb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdebc:
    // 0x2bdebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdec0:
    // 0x2bdec0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdec0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdec4:
    // 0x2bdec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdec8:
    // 0x2bdec8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdec8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdecc:
    // 0x2bdecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdeccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bded0:
    // 0x2bded0: 0x3e7b000  .word       0x03E7B000                   # sll         $s6, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bded0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2bded4:
    // 0x2bded4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bded4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bded8:
    // 0x2bded8: 0x3e93000  .word       0x03E93000                   # sll         $a2, $t1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bded8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_2bdedc:
    // 0x2bdedc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdedcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdee0:
    // 0x2bdee0: 0x1fb4001  .word       0x01FB4001                   # INVALID     $t7, $k1, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BDEE0 raw=0x01FB4001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdee4:
    // 0x2bdee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdee8:
    // 0x2bdee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdeec:
    // 0x2bdeec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdeecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdef0:
    // 0x2bdef0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdef0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdef4:
    // 0x2bdef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdef8:
    // 0x2bdef8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdef8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdefc:
    // 0x2bdefc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdefcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf00:
    // 0x2bdf00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdf00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdf04:
    // 0x2bdf04: 0x1fdd97c  .word       0x01FDD97C                   # dsll32      $k1, $sp, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdf04u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 29) << (32 + 5));
label_2bdf08:
    // 0x2bdf08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdf08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdf0c:
    // 0x2bdf0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf10:
    // 0x2bdf10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdf10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdf14:
    // 0x2bdf14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf18:
    // 0x2bdf18: 0x2275001  .word       0x02275001                   # INVALID     $s1, $a3, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdf18u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BDF18 raw=0x02275001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdf1c:
    // 0x2bdf1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf20:
    // 0x2bdf20: 0x3c7e801  .word       0x03C7E801                   # INVALID     $fp, $a3, -0x17FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdf20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BDF20 raw=0x03C7E801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdf24:
    // 0x2bdf24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf28:
    // 0x2bdf28: 0x3e9e801  .word       0x03E9E801                   # INVALID     $ra, $t1, -0x17FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdf28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BDF28 raw=0x03E9E801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdf2c:
    // 0x2bdf2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf30:
    // 0x2bdf30: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2bdf34:
    if (ctx->pc == 0x2BDF34u) {
        ctx->pc = 0x2BDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF30u;
        // 0x2bdf34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF38u;
        goto label_2bdf38;
    }
    ctx->pc = 0x2BDF30u;
    {
        const bool branch_taken_0x2bdf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF30u;
        // 0x2bdf34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf30) {
            ctx->pc = 0x2CBF40u;
            return;
        }
    }
    ctx->pc = 0x2BDF38u;
label_2bdf38:
    // 0x2bdf38: 0x10094803  beq         $zero, $t1, . + 4 + (0x4803 << 2)
label_2bdf3c:
    if (ctx->pc == 0x2BDF3Cu) {
        ctx->pc = 0x2BDF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF38u;
        // 0x2bdf3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF40u;
        goto label_2bdf40;
    }
    ctx->pc = 0x2BDF38u;
    {
        const bool branch_taken_0x2bdf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BDF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF38u;
        // 0x2bdf3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf38) {
            ctx->pc = 0x2CFF48u;
            return;
        }
    }
    ctx->pc = 0x2BDF40u;
label_2bdf40:
    // 0x2bdf40: 0x10084004  beq         $zero, $t0, . + 4 + (0x4004 << 2)
label_2bdf44:
    if (ctx->pc == 0x2BDF44u) {
        ctx->pc = 0x2BDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF40u;
        // 0x2bdf44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF48u;
        goto label_2bdf48;
    }
    ctx->pc = 0x2BDF40u;
    {
        const bool branch_taken_0x2bdf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF40u;
        // 0x2bdf44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf40) {
            ctx->pc = 0x2CDF54u;
            return;
        }
    }
    ctx->pc = 0x2BDF48u;
label_2bdf48:
    // 0x2bdf48: 0x800a57f2  lb          $t2, 0x57F2($zero)
    ctx->pc = 0x2bdf48u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x57F2u));
label_2bdf4c:
    // 0x2bdf4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf50:
    // 0x2bdf50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdf50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdf54:
    // 0x2bdf54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf58:
    // 0x2bdf58: 0x520a07c0  beql        $s0, $t2, . + 4 + (0x7C0 << 2)
label_2bdf5c:
    if (ctx->pc == 0x2BDF5Cu) {
        ctx->pc = 0x2BDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF58u;
        // 0x2bdf5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF60u;
        goto label_2bdf60;
    }
    ctx->pc = 0x2BDF58u;
    {
        const bool branch_taken_0x2bdf58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bdf58) {
            ctx->pc = 0x2BDF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BDF58u;
            // 0x2bdf5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFE5Cu;
            return;
        }
    }
    ctx->pc = 0x2BDF60u;
label_2bdf60:
    // 0x2bdf60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdf60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdf64:
    // 0x2bdf64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf68:
    // 0x2bdf68: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bdf68u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BDF68 raw=0x48000800");
 /* MITIGATED */
label_2bdf6c:
    // 0x2bdf6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf70:
    // 0x2bdf70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bdf70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bdf74:
    // 0x2bdf74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf78:
    // 0x2bdf78: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2bdf78u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2bdf7c:
    // 0x2bdf7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf80:
    // 0x2bdf80: 0x1001100b  beq         $zero, $at, . + 4 + (0x100B << 2)
label_2bdf84:
    if (ctx->pc == 0x2BDF84u) {
        ctx->pc = 0x2BDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF80u;
        // 0x2bdf84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF88u;
        goto label_2bdf88;
    }
    ctx->pc = 0x2BDF80u;
    {
        const bool branch_taken_0x2bdf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF80u;
        // 0x2bdf84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf80) {
            ctx->pc = 0x2C1FB0u;
            return;
        }
    }
    ctx->pc = 0x2BDF88u;
label_2bdf88:
    // 0x2bdf88: 0x10030066  beq         $zero, $v1, . + 4 + (0x66 << 2)
label_2bdf8c:
    if (ctx->pc == 0x2BDF8Cu) {
        ctx->pc = 0x2BDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF88u;
        // 0x2bdf8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDF90u;
        goto label_2bdf90;
    }
    ctx->pc = 0x2BDF88u;
    {
        const bool branch_taken_0x2bdf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF88u;
        // 0x2bdf8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf88) {
            ctx->pc = 0x2BE124u;
            { ctx->pc = 0x2be124; return; }
        }
    }
    ctx->pc = 0x2BDF90u;
label_2bdf90:
    // 0x2bdf90: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdf90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BDF90 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdf94:
    // 0x2bdf94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdf94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdf98:
    // 0x2bdf98: 0x1002104b  beq         $zero, $v0, . + 4 + (0x104B << 2)
label_2bdf9c:
    if (ctx->pc == 0x2BDF9Cu) {
        ctx->pc = 0x2BDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF98u;
        // 0x2bdf9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFA0u;
        goto label_2bdfa0;
    }
    ctx->pc = 0x2BDF98u;
    {
        const bool branch_taken_0x2bdf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDF98u;
        // 0x2bdf9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdf98) {
            ctx->pc = 0x2C20C8u;
            return;
        }
    }
    ctx->pc = 0x2BDFA0u;
label_2bdfa0:
    // 0x2bdfa0: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2bdfa4:
    if (ctx->pc == 0x2BDFA4u) {
        ctx->pc = 0x2BDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFA0u;
        // 0x2bdfa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFA8u;
        goto label_2bdfa8;
    }
    ctx->pc = 0x2BDFA0u;
    {
        const bool branch_taken_0x2bdfa0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BDFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFA0u;
        // 0x2bdfa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfa0) {
            ctx->pc = 0x2BFFA0u;
            return;
        }
    }
    ctx->pc = 0x2BDFA8u;
label_2bdfa8:
    // 0x2bdfa8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bdfac:
    if (ctx->pc == 0x2BDFACu) {
        ctx->pc = 0x2BDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFA8u;
        // 0x2bdfac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFB0u;
        goto label_2bdfb0;
    }
    ctx->pc = 0x2BDFA8u;
    {
        const bool branch_taken_0x2bdfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BDFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFA8u;
        // 0x2bdfac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfa8) {
            ctx->pc = 0x2D3FB0u;
            return;
        }
    }
    ctx->pc = 0x2BDFB0u;
label_2bdfb0:
    // 0x2bdfb0: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdfb0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bdfb4:
    // 0x2bdfb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdfb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdfb8:
    // 0x2bdfb8: 0x3e2d001  .word       0x03E2D001                   # INVALID     $ra, $v0, -0x2FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdfb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BDFB8 raw=0x03E2D001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdfbc:
    // 0x2bdfbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdfbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdfc0:
    // 0x2bdfc0: 0xb0b1000  j           func_C2C4000
label_2bdfc4:
    if (ctx->pc == 0x2BDFC4u) {
        ctx->pc = 0x2BDFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFC0u;
        // 0x2bdfc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFC8u;
        goto label_2bdfc8;
    }
    ctx->pc = 0x2BDFC0u;
    ctx->pc = 0x2BDFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFC0u;
    // 0x2bdfc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BDFC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BDFC8u;
label_2bdfc8:
    // 0x2bdfc8: 0xa800fff  j           func_A003FFC
label_2bdfcc:
    if (ctx->pc == 0x2BDFCCu) {
        ctx->pc = 0x2BDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFC8u;
        // 0x2bdfcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFD0u;
        goto label_2bdfd0;
    }
    ctx->pc = 0x2BDFC8u;
    ctx->pc = 0x2BDFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFC8u;
    // 0x2bdfcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA003FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA003FFCu, 0x2BDFC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BDFD0u;
label_2bdfd0:
    // 0x2bdfd0: 0xb030fff  j           func_C0C3FFC
label_2bdfd4:
    if (ctx->pc == 0x2BDFD4u) {
        ctx->pc = 0x2BDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFD0u;
        // 0x2bdfd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFD8u;
        goto label_2bdfd8;
    }
    ctx->pc = 0x2BDFD0u;
    ctx->pc = 0x2BDFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFD0u;
    // 0x2bdfd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0C3FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0C3FFCu, 0x2BDFD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BDFD8u;
label_2bdfd8:
    // 0x2bdfd8: 0x100f7012  beq         $zero, $t7, . + 4 + (0x7012 << 2)
label_2bdfdc:
    if (ctx->pc == 0x2BDFDCu) {
        ctx->pc = 0x2BDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFD8u;
        // 0x2bdfdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BDFE0u;
        goto label_2bdfe0;
    }
    ctx->pc = 0x2BDFD8u;
    {
        const bool branch_taken_0x2bdfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2BDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFD8u;
        // 0x2bdfdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdfd8) {
            ctx->pc = 0x2DA024u;
            return;
        }
    }
    ctx->pc = 0x2BDFE0u;
label_2bdfe0:
    // 0x2bdfe0: 0x1f67ff6  tne         $t7, $s6, 511
    ctx->pc = 0x2bdfe0u;
    if (GPR_U64(ctx, 15) != GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_2bdfe4:
    // 0x2bdfe4: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bdfe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2bdfe8:
    // 0x2bdfe8: 0x1f77ffa  .word       0x01F77FFA                   # dsrl        $t7, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdfe8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) >> 31);
label_2bdfec:
    // 0x2bdfec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdfecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdff0:
    // 0x2bdff0: 0x1f87ffe  .word       0x01F87FFE                   # dsrl32      $t7, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdff0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) >> (32 + 31));
label_2bdff4:
    // 0x2bdff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bdff8:
    // 0x2bdff8: 0x1f57ff5  .word       0x01F57FF5                   # INVALID     $t7, $s5, 0x7FF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bdff8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2BDFF8 raw=0x01F57FF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bdffc:
    // 0x2bdffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bdffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be000:
    // 0x2be000: 0x1f37ff9  .word       0x01F37FF9                   # INVALID     $t7, $s3, 0x7FF9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be000u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2BE000 raw=0x01F37FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be004:
    // 0x2be004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be008:
    // 0x2be008: 0x1f47ffd  .word       0x01F47FFD                   # INVALID     $t7, $s4, 0x7FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be008u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BE008 raw=0x01F47FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be00c:
    // 0x2be00c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be00cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be010:
    // 0x2be010: 0x1f07ff4  teq         $t7, $s0, 511
    ctx->pc = 0x2be010u;
    if (GPR_U64(ctx, 15) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_2be014:
    // 0x2be014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be018:
    // 0x2be018: 0x1f17ff8  .word       0x01F17FF8                   # dsll        $t7, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be018u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << 31);
label_2be01c:
    // 0x2be01c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be01cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be020:
    // 0x2be020: 0x1f27ffc  .word       0x01F27FFC                   # dsll32      $t7, $s2, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be020u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) << (32 + 31));
label_2be024:
    // 0x2be024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be028:
    // 0x2be028: 0x1f97ff7  .word       0x01F97FF7                   # INVALID     $t7, $t9, 0x7FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be028u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2BE028 raw=0x01F97FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be02c:
    // 0x2be02c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be02cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be030:
    // 0x2be030: 0x1fa7ffb  .word       0x01FA7FFB                   # dsra        $t7, $k0, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be030u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 26) >> 31);
label_2be034:
    // 0x2be034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be038:
    // 0x2be038: 0x1fb7fff  .word       0x01FB7FFF                   # dsra32      $t7, $k1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be038u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 27) >> (32 + 31));
label_2be03c:
    // 0x2be03c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be03cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be040:
    // 0x2be040: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2be040u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2be044:
    // 0x2be044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be048:
    // 0x2be048: 0x1008100b  beq         $zero, $t0, . + 4 + (0x100B << 2)
label_2be04c:
    if (ctx->pc == 0x2BE04Cu) {
        ctx->pc = 0x2BE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE048u;
        // 0x2be04c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE050u;
        goto label_2be050;
    }
    ctx->pc = 0x2BE048u;
    {
        const bool branch_taken_0x2be048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE048u;
        // 0x2be04c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be048) {
            ctx->pc = 0x2C2078u;
            return;
        }
    }
    ctx->pc = 0x2BE050u;
label_2be050:
    // 0x2be050: 0x1009102b  beq         $zero, $t1, . + 4 + (0x102B << 2)
label_2be054:
    if (ctx->pc == 0x2BE054u) {
        ctx->pc = 0x2BE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE050u;
        // 0x2be054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE058u;
        goto label_2be058;
    }
    ctx->pc = 0x2BE050u;
    {
        const bool branch_taken_0x2be050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE050u;
        // 0x2be054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be050) {
            ctx->pc = 0x2C2100u;
            return;
        }
    }
    ctx->pc = 0x2BE058u;
label_2be058:
    // 0x2be058: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be058u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BE058 raw=0x03E8A801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be05c:
    // 0x2be05c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be05cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2be060u;
    return;
}

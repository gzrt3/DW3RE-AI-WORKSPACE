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


void FUN_0014eba0_part785(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2cd8a0u: goto label_2cd8a0;
        case 0x2cd8a4u: goto label_2cd8a4;
        case 0x2cd8a8u: goto label_2cd8a8;
        case 0x2cd8acu: goto label_2cd8ac;
        case 0x2cd8b0u: goto label_2cd8b0;
        case 0x2cd8b4u: goto label_2cd8b4;
        case 0x2cd8b8u: goto label_2cd8b8;
        case 0x2cd8bcu: goto label_2cd8bc;
        case 0x2cd8c0u: goto label_2cd8c0;
        case 0x2cd8c4u: goto label_2cd8c4;
        case 0x2cd8c8u: goto label_2cd8c8;
        case 0x2cd8ccu: goto label_2cd8cc;
        case 0x2cd8d0u: goto label_2cd8d0;
        case 0x2cd8d4u: goto label_2cd8d4;
        case 0x2cd8d8u: goto label_2cd8d8;
        case 0x2cd8dcu: goto label_2cd8dc;
        case 0x2cd8e0u: goto label_2cd8e0;
        case 0x2cd8e4u: goto label_2cd8e4;
        case 0x2cd8e8u: goto label_2cd8e8;
        case 0x2cd8ecu: goto label_2cd8ec;
        case 0x2cd8f0u: goto label_2cd8f0;
        case 0x2cd8f4u: goto label_2cd8f4;
        case 0x2cd8f8u: goto label_2cd8f8;
        case 0x2cd8fcu: goto label_2cd8fc;
        case 0x2cd900u: goto label_2cd900;
        case 0x2cd904u: goto label_2cd904;
        case 0x2cd908u: goto label_2cd908;
        case 0x2cd90cu: goto label_2cd90c;
        case 0x2cd910u: goto label_2cd910;
        case 0x2cd914u: goto label_2cd914;
        case 0x2cd918u: goto label_2cd918;
        case 0x2cd91cu: goto label_2cd91c;
        case 0x2cd920u: goto label_2cd920;
        case 0x2cd924u: goto label_2cd924;
        case 0x2cd928u: goto label_2cd928;
        case 0x2cd92cu: goto label_2cd92c;
        case 0x2cd930u: goto label_2cd930;
        case 0x2cd934u: goto label_2cd934;
        case 0x2cd938u: goto label_2cd938;
        case 0x2cd93cu: goto label_2cd93c;
        case 0x2cd940u: goto label_2cd940;
        case 0x2cd944u: goto label_2cd944;
        case 0x2cd948u: goto label_2cd948;
        case 0x2cd94cu: goto label_2cd94c;
        case 0x2cd950u: goto label_2cd950;
        case 0x2cd954u: goto label_2cd954;
        case 0x2cd958u: goto label_2cd958;
        case 0x2cd95cu: goto label_2cd95c;
        case 0x2cd960u: goto label_2cd960;
        case 0x2cd964u: goto label_2cd964;
        case 0x2cd968u: goto label_2cd968;
        case 0x2cd96cu: goto label_2cd96c;
        case 0x2cd970u: goto label_2cd970;
        case 0x2cd974u: goto label_2cd974;
        case 0x2cd978u: goto label_2cd978;
        case 0x2cd97cu: goto label_2cd97c;
        case 0x2cd980u: goto label_2cd980;
        case 0x2cd984u: goto label_2cd984;
        case 0x2cd988u: goto label_2cd988;
        case 0x2cd98cu: goto label_2cd98c;
        case 0x2cd990u: goto label_2cd990;
        case 0x2cd994u: goto label_2cd994;
        case 0x2cd998u: goto label_2cd998;
        case 0x2cd99cu: goto label_2cd99c;
        case 0x2cd9a0u: goto label_2cd9a0;
        case 0x2cd9a4u: goto label_2cd9a4;
        case 0x2cd9a8u: goto label_2cd9a8;
        case 0x2cd9acu: goto label_2cd9ac;
        case 0x2cd9b0u: goto label_2cd9b0;
        case 0x2cd9b4u: goto label_2cd9b4;
        case 0x2cd9b8u: goto label_2cd9b8;
        case 0x2cd9bcu: goto label_2cd9bc;
        case 0x2cd9c0u: goto label_2cd9c0;
        case 0x2cd9c4u: goto label_2cd9c4;
        case 0x2cd9c8u: goto label_2cd9c8;
        case 0x2cd9ccu: goto label_2cd9cc;
        case 0x2cd9d0u: goto label_2cd9d0;
        case 0x2cd9d4u: goto label_2cd9d4;
        case 0x2cd9d8u: goto label_2cd9d8;
        case 0x2cd9dcu: goto label_2cd9dc;
        case 0x2cd9e0u: goto label_2cd9e0;
        case 0x2cd9e4u: goto label_2cd9e4;
        case 0x2cd9e8u: goto label_2cd9e8;
        case 0x2cd9ecu: goto label_2cd9ec;
        case 0x2cd9f0u: goto label_2cd9f0;
        case 0x2cd9f4u: goto label_2cd9f4;
        case 0x2cd9f8u: goto label_2cd9f8;
        case 0x2cd9fcu: goto label_2cd9fc;
        case 0x2cda00u: goto label_2cda00;
        case 0x2cda04u: goto label_2cda04;
        case 0x2cda08u: goto label_2cda08;
        case 0x2cda0cu: goto label_2cda0c;
        case 0x2cda10u: goto label_2cda10;
        case 0x2cda14u: goto label_2cda14;
        case 0x2cda18u: goto label_2cda18;
        case 0x2cda1cu: goto label_2cda1c;
        case 0x2cda20u: goto label_2cda20;
        case 0x2cda24u: goto label_2cda24;
        case 0x2cda28u: goto label_2cda28;
        case 0x2cda2cu: goto label_2cda2c;
        case 0x2cda30u: goto label_2cda30;
        case 0x2cda34u: goto label_2cda34;
        case 0x2cda38u: goto label_2cda38;
        case 0x2cda3cu: goto label_2cda3c;
        case 0x2cda40u: goto label_2cda40;
        case 0x2cda44u: goto label_2cda44;
        case 0x2cda48u: goto label_2cda48;
        case 0x2cda4cu: goto label_2cda4c;
        case 0x2cda50u: goto label_2cda50;
        case 0x2cda54u: goto label_2cda54;
        case 0x2cda58u: goto label_2cda58;
        case 0x2cda5cu: goto label_2cda5c;
        case 0x2cda60u: goto label_2cda60;
        case 0x2cda64u: goto label_2cda64;
        case 0x2cda68u: goto label_2cda68;
        case 0x2cda6cu: goto label_2cda6c;
        case 0x2cda70u: goto label_2cda70;
        case 0x2cda74u: goto label_2cda74;
        case 0x2cda78u: goto label_2cda78;
        case 0x2cda7cu: goto label_2cda7c;
        case 0x2cda80u: goto label_2cda80;
        case 0x2cda84u: goto label_2cda84;
        case 0x2cda88u: goto label_2cda88;
        case 0x2cda8cu: goto label_2cda8c;
        case 0x2cda90u: goto label_2cda90;
        case 0x2cda94u: goto label_2cda94;
        case 0x2cda98u: goto label_2cda98;
        case 0x2cda9cu: goto label_2cda9c;
        case 0x2cdaa0u: goto label_2cdaa0;
        case 0x2cdaa4u: goto label_2cdaa4;
        case 0x2cdaa8u: goto label_2cdaa8;
        case 0x2cdaacu: goto label_2cdaac;
        case 0x2cdab0u: goto label_2cdab0;
        case 0x2cdab4u: goto label_2cdab4;
        case 0x2cdab8u: goto label_2cdab8;
        case 0x2cdabcu: goto label_2cdabc;
        case 0x2cdac0u: goto label_2cdac0;
        case 0x2cdac4u: goto label_2cdac4;
        case 0x2cdac8u: goto label_2cdac8;
        case 0x2cdaccu: goto label_2cdacc;
        case 0x2cdad0u: goto label_2cdad0;
        case 0x2cdad4u: goto label_2cdad4;
        case 0x2cdad8u: goto label_2cdad8;
        case 0x2cdadcu: goto label_2cdadc;
        case 0x2cdae0u: goto label_2cdae0;
        case 0x2cdae4u: goto label_2cdae4;
        case 0x2cdae8u: goto label_2cdae8;
        case 0x2cdaecu: goto label_2cdaec;
        case 0x2cdaf0u: goto label_2cdaf0;
        case 0x2cdaf4u: goto label_2cdaf4;
        case 0x2cdaf8u: goto label_2cdaf8;
        case 0x2cdafcu: goto label_2cdafc;
        case 0x2cdb00u: goto label_2cdb00;
        case 0x2cdb04u: goto label_2cdb04;
        case 0x2cdb08u: goto label_2cdb08;
        case 0x2cdb0cu: goto label_2cdb0c;
        case 0x2cdb10u: goto label_2cdb10;
        case 0x2cdb14u: goto label_2cdb14;
        case 0x2cdb18u: goto label_2cdb18;
        case 0x2cdb1cu: goto label_2cdb1c;
        case 0x2cdb20u: goto label_2cdb20;
        case 0x2cdb24u: goto label_2cdb24;
        case 0x2cdb28u: goto label_2cdb28;
        case 0x2cdb2cu: goto label_2cdb2c;
        case 0x2cdb30u: goto label_2cdb30;
        case 0x2cdb34u: goto label_2cdb34;
        case 0x2cdb38u: goto label_2cdb38;
        case 0x2cdb3cu: goto label_2cdb3c;
        case 0x2cdb40u: goto label_2cdb40;
        case 0x2cdb44u: goto label_2cdb44;
        case 0x2cdb48u: goto label_2cdb48;
        case 0x2cdb4cu: goto label_2cdb4c;
        case 0x2cdb50u: goto label_2cdb50;
        case 0x2cdb54u: goto label_2cdb54;
        case 0x2cdb58u: goto label_2cdb58;
        case 0x2cdb5cu: goto label_2cdb5c;
        case 0x2cdb60u: goto label_2cdb60;
        case 0x2cdb64u: goto label_2cdb64;
        case 0x2cdb68u: goto label_2cdb68;
        case 0x2cdb6cu: goto label_2cdb6c;
        case 0x2cdb70u: goto label_2cdb70;
        case 0x2cdb74u: goto label_2cdb74;
        case 0x2cdb78u: goto label_2cdb78;
        case 0x2cdb7cu: goto label_2cdb7c;
        case 0x2cdb80u: goto label_2cdb80;
        case 0x2cdb84u: goto label_2cdb84;
        case 0x2cdb88u: goto label_2cdb88;
        case 0x2cdb8cu: goto label_2cdb8c;
        case 0x2cdb90u: goto label_2cdb90;
        case 0x2cdb94u: goto label_2cdb94;
        case 0x2cdb98u: goto label_2cdb98;
        case 0x2cdb9cu: goto label_2cdb9c;
        case 0x2cdba0u: goto label_2cdba0;
        case 0x2cdba4u: goto label_2cdba4;
        case 0x2cdba8u: goto label_2cdba8;
        case 0x2cdbacu: goto label_2cdbac;
        case 0x2cdbb0u: goto label_2cdbb0;
        case 0x2cdbb4u: goto label_2cdbb4;
        case 0x2cdbb8u: goto label_2cdbb8;
        case 0x2cdbbcu: goto label_2cdbbc;
        case 0x2cdbc0u: goto label_2cdbc0;
        case 0x2cdbc4u: goto label_2cdbc4;
        case 0x2cdbc8u: goto label_2cdbc8;
        case 0x2cdbccu: goto label_2cdbcc;
        case 0x2cdbd0u: goto label_2cdbd0;
        case 0x2cdbd4u: goto label_2cdbd4;
        case 0x2cdbd8u: goto label_2cdbd8;
        case 0x2cdbdcu: goto label_2cdbdc;
        case 0x2cdbe0u: goto label_2cdbe0;
        case 0x2cdbe4u: goto label_2cdbe4;
        case 0x2cdbe8u: goto label_2cdbe8;
        case 0x2cdbecu: goto label_2cdbec;
        case 0x2cdbf0u: goto label_2cdbf0;
        case 0x2cdbf4u: goto label_2cdbf4;
        case 0x2cdbf8u: goto label_2cdbf8;
        case 0x2cdbfcu: goto label_2cdbfc;
        case 0x2cdc00u: goto label_2cdc00;
        case 0x2cdc04u: goto label_2cdc04;
        case 0x2cdc08u: goto label_2cdc08;
        case 0x2cdc0cu: goto label_2cdc0c;
        case 0x2cdc10u: goto label_2cdc10;
        case 0x2cdc14u: goto label_2cdc14;
        case 0x2cdc18u: goto label_2cdc18;
        case 0x2cdc1cu: goto label_2cdc1c;
        case 0x2cdc20u: goto label_2cdc20;
        case 0x2cdc24u: goto label_2cdc24;
        case 0x2cdc28u: goto label_2cdc28;
        case 0x2cdc2cu: goto label_2cdc2c;
        case 0x2cdc30u: goto label_2cdc30;
        case 0x2cdc34u: goto label_2cdc34;
        case 0x2cdc38u: goto label_2cdc38;
        case 0x2cdc3cu: goto label_2cdc3c;
        case 0x2cdc40u: goto label_2cdc40;
        case 0x2cdc44u: goto label_2cdc44;
        case 0x2cdc48u: goto label_2cdc48;
        case 0x2cdc4cu: goto label_2cdc4c;
        case 0x2cdc50u: goto label_2cdc50;
        case 0x2cdc54u: goto label_2cdc54;
        case 0x2cdc58u: goto label_2cdc58;
        case 0x2cdc5cu: goto label_2cdc5c;
        case 0x2cdc60u: goto label_2cdc60;
        case 0x2cdc64u: goto label_2cdc64;
        case 0x2cdc68u: goto label_2cdc68;
        case 0x2cdc6cu: goto label_2cdc6c;
        case 0x2cdc70u: goto label_2cdc70;
        case 0x2cdc74u: goto label_2cdc74;
        case 0x2cdc78u: goto label_2cdc78;
        case 0x2cdc7cu: goto label_2cdc7c;
        case 0x2cdc80u: goto label_2cdc80;
        case 0x2cdc84u: goto label_2cdc84;
        case 0x2cdc88u: goto label_2cdc88;
        case 0x2cdc8cu: goto label_2cdc8c;
        case 0x2cdc90u: goto label_2cdc90;
        case 0x2cdc94u: goto label_2cdc94;
        case 0x2cdc98u: goto label_2cdc98;
        case 0x2cdc9cu: goto label_2cdc9c;
        case 0x2cdca0u: goto label_2cdca0;
        case 0x2cdca4u: goto label_2cdca4;
        case 0x2cdca8u: goto label_2cdca8;
        case 0x2cdcacu: goto label_2cdcac;
        case 0x2cdcb0u: goto label_2cdcb0;
        case 0x2cdcb4u: goto label_2cdcb4;
        case 0x2cdcb8u: goto label_2cdcb8;
        case 0x2cdcbcu: goto label_2cdcbc;
        case 0x2cdcc0u: goto label_2cdcc0;
        case 0x2cdcc4u: goto label_2cdcc4;
        case 0x2cdcc8u: goto label_2cdcc8;
        case 0x2cdcccu: goto label_2cdccc;
        case 0x2cdcd0u: goto label_2cdcd0;
        case 0x2cdcd4u: goto label_2cdcd4;
        case 0x2cdcd8u: goto label_2cdcd8;
        case 0x2cdcdcu: goto label_2cdcdc;
        case 0x2cdce0u: goto label_2cdce0;
        case 0x2cdce4u: goto label_2cdce4;
        case 0x2cdce8u: goto label_2cdce8;
        case 0x2cdcecu: goto label_2cdcec;
        case 0x2cdcf0u: goto label_2cdcf0;
        case 0x2cdcf4u: goto label_2cdcf4;
        case 0x2cdcf8u: goto label_2cdcf8;
        case 0x2cdcfcu: goto label_2cdcfc;
        case 0x2cdd00u: goto label_2cdd00;
        case 0x2cdd04u: goto label_2cdd04;
        case 0x2cdd08u: goto label_2cdd08;
        case 0x2cdd0cu: goto label_2cdd0c;
        case 0x2cdd10u: goto label_2cdd10;
        case 0x2cdd14u: goto label_2cdd14;
        case 0x2cdd18u: goto label_2cdd18;
        case 0x2cdd1cu: goto label_2cdd1c;
        case 0x2cdd20u: goto label_2cdd20;
        case 0x2cdd24u: goto label_2cdd24;
        case 0x2cdd28u: goto label_2cdd28;
        case 0x2cdd2cu: goto label_2cdd2c;
        case 0x2cdd30u: goto label_2cdd30;
        case 0x2cdd34u: goto label_2cdd34;
        case 0x2cdd38u: goto label_2cdd38;
        case 0x2cdd3cu: goto label_2cdd3c;
        case 0x2cdd40u: goto label_2cdd40;
        case 0x2cdd44u: goto label_2cdd44;
        case 0x2cdd48u: goto label_2cdd48;
        case 0x2cdd4cu: goto label_2cdd4c;
        case 0x2cdd50u: goto label_2cdd50;
        case 0x2cdd54u: goto label_2cdd54;
        case 0x2cdd58u: goto label_2cdd58;
        case 0x2cdd5cu: goto label_2cdd5c;
        case 0x2cdd60u: goto label_2cdd60;
        case 0x2cdd64u: goto label_2cdd64;
        case 0x2cdd68u: goto label_2cdd68;
        case 0x2cdd6cu: goto label_2cdd6c;
        case 0x2cdd70u: goto label_2cdd70;
        case 0x2cdd74u: goto label_2cdd74;
        case 0x2cdd78u: goto label_2cdd78;
        case 0x2cdd7cu: goto label_2cdd7c;
        case 0x2cdd80u: goto label_2cdd80;
        case 0x2cdd84u: goto label_2cdd84;
        case 0x2cdd88u: goto label_2cdd88;
        case 0x2cdd8cu: goto label_2cdd8c;
        case 0x2cdd90u: goto label_2cdd90;
        case 0x2cdd94u: goto label_2cdd94;
        case 0x2cdd98u: goto label_2cdd98;
        case 0x2cdd9cu: goto label_2cdd9c;
        case 0x2cdda0u: goto label_2cdda0;
        case 0x2cdda4u: goto label_2cdda4;
        case 0x2cdda8u: goto label_2cdda8;
        case 0x2cddacu: goto label_2cddac;
        case 0x2cddb0u: goto label_2cddb0;
        case 0x2cddb4u: goto label_2cddb4;
        case 0x2cddb8u: goto label_2cddb8;
        case 0x2cddbcu: goto label_2cddbc;
        case 0x2cddc0u: goto label_2cddc0;
        case 0x2cddc4u: goto label_2cddc4;
        case 0x2cddc8u: goto label_2cddc8;
        case 0x2cddccu: goto label_2cddcc;
        case 0x2cddd0u: goto label_2cddd0;
        case 0x2cddd4u: goto label_2cddd4;
        case 0x2cddd8u: goto label_2cddd8;
        case 0x2cdddcu: goto label_2cdddc;
        case 0x2cdde0u: goto label_2cdde0;
        case 0x2cdde4u: goto label_2cdde4;
        case 0x2cdde8u: goto label_2cdde8;
        case 0x2cddecu: goto label_2cddec;
        case 0x2cddf0u: goto label_2cddf0;
        case 0x2cddf4u: goto label_2cddf4;
        case 0x2cddf8u: goto label_2cddf8;
        case 0x2cddfcu: goto label_2cddfc;
        case 0x2cde00u: goto label_2cde00;
        case 0x2cde04u: goto label_2cde04;
        case 0x2cde08u: goto label_2cde08;
        case 0x2cde0cu: goto label_2cde0c;
        case 0x2cde10u: goto label_2cde10;
        case 0x2cde14u: goto label_2cde14;
        case 0x2cde18u: goto label_2cde18;
        case 0x2cde1cu: goto label_2cde1c;
        case 0x2cde20u: goto label_2cde20;
        case 0x2cde24u: goto label_2cde24;
        case 0x2cde28u: goto label_2cde28;
        case 0x2cde2cu: goto label_2cde2c;
        case 0x2cde30u: goto label_2cde30;
        case 0x2cde34u: goto label_2cde34;
        case 0x2cde38u: goto label_2cde38;
        case 0x2cde3cu: goto label_2cde3c;
        case 0x2cde40u: goto label_2cde40;
        case 0x2cde44u: goto label_2cde44;
        case 0x2cde48u: goto label_2cde48;
        case 0x2cde4cu: goto label_2cde4c;
        case 0x2cde50u: goto label_2cde50;
        case 0x2cde54u: goto label_2cde54;
        case 0x2cde58u: goto label_2cde58;
        case 0x2cde5cu: goto label_2cde5c;
        case 0x2cde60u: goto label_2cde60;
        case 0x2cde64u: goto label_2cde64;
        case 0x2cde68u: goto label_2cde68;
        case 0x2cde6cu: goto label_2cde6c;
        case 0x2cde70u: goto label_2cde70;
        case 0x2cde74u: goto label_2cde74;
        case 0x2cde78u: goto label_2cde78;
        case 0x2cde7cu: goto label_2cde7c;
        case 0x2cde80u: goto label_2cde80;
        case 0x2cde84u: goto label_2cde84;
        case 0x2cde88u: goto label_2cde88;
        case 0x2cde8cu: goto label_2cde8c;
        case 0x2cde90u: goto label_2cde90;
        case 0x2cde94u: goto label_2cde94;
        case 0x2cde98u: goto label_2cde98;
        case 0x2cde9cu: goto label_2cde9c;
        case 0x2cdea0u: goto label_2cdea0;
        case 0x2cdea4u: goto label_2cdea4;
        case 0x2cdea8u: goto label_2cdea8;
        case 0x2cdeacu: goto label_2cdeac;
        case 0x2cdeb0u: goto label_2cdeb0;
        case 0x2cdeb4u: goto label_2cdeb4;
        case 0x2cdeb8u: goto label_2cdeb8;
        case 0x2cdebcu: goto label_2cdebc;
        case 0x2cdec0u: goto label_2cdec0;
        case 0x2cdec4u: goto label_2cdec4;
        case 0x2cdec8u: goto label_2cdec8;
        case 0x2cdeccu: goto label_2cdecc;
        case 0x2cded0u: goto label_2cded0;
        case 0x2cded4u: goto label_2cded4;
        case 0x2cded8u: goto label_2cded8;
        case 0x2cdedcu: goto label_2cdedc;
        case 0x2cdee0u: goto label_2cdee0;
        case 0x2cdee4u: goto label_2cdee4;
        case 0x2cdee8u: goto label_2cdee8;
        case 0x2cdeecu: goto label_2cdeec;
        case 0x2cdef0u: goto label_2cdef0;
        case 0x2cdef4u: goto label_2cdef4;
        case 0x2cdef8u: goto label_2cdef8;
        case 0x2cdefcu: goto label_2cdefc;
        case 0x2cdf00u: goto label_2cdf00;
        case 0x2cdf04u: goto label_2cdf04;
        case 0x2cdf08u: goto label_2cdf08;
        case 0x2cdf0cu: goto label_2cdf0c;
        case 0x2cdf10u: goto label_2cdf10;
        case 0x2cdf14u: goto label_2cdf14;
        case 0x2cdf18u: goto label_2cdf18;
        case 0x2cdf1cu: goto label_2cdf1c;
        case 0x2cdf20u: goto label_2cdf20;
        case 0x2cdf24u: goto label_2cdf24;
        case 0x2cdf28u: goto label_2cdf28;
        case 0x2cdf2cu: goto label_2cdf2c;
        case 0x2cdf30u: goto label_2cdf30;
        case 0x2cdf34u: goto label_2cdf34;
        case 0x2cdf38u: goto label_2cdf38;
        case 0x2cdf3cu: goto label_2cdf3c;
        case 0x2cdf40u: goto label_2cdf40;
        case 0x2cdf44u: goto label_2cdf44;
        case 0x2cdf48u: goto label_2cdf48;
        case 0x2cdf4cu: goto label_2cdf4c;
        case 0x2cdf50u: goto label_2cdf50;
        case 0x2cdf54u: goto label_2cdf54;
        case 0x2cdf58u: goto label_2cdf58;
        case 0x2cdf5cu: goto label_2cdf5c;
        case 0x2cdf60u: goto label_2cdf60;
        case 0x2cdf64u: goto label_2cdf64;
        case 0x2cdf68u: goto label_2cdf68;
        case 0x2cdf6cu: goto label_2cdf6c;
        case 0x2cdf70u: goto label_2cdf70;
        case 0x2cdf74u: goto label_2cdf74;
        case 0x2cdf78u: goto label_2cdf78;
        case 0x2cdf7cu: goto label_2cdf7c;
        case 0x2cdf80u: goto label_2cdf80;
        case 0x2cdf84u: goto label_2cdf84;
        case 0x2cdf88u: goto label_2cdf88;
        case 0x2cdf8cu: goto label_2cdf8c;
        case 0x2cdf90u: goto label_2cdf90;
        case 0x2cdf94u: goto label_2cdf94;
        case 0x2cdf98u: goto label_2cdf98;
        case 0x2cdf9cu: goto label_2cdf9c;
        case 0x2cdfa0u: goto label_2cdfa0;
        case 0x2cdfa4u: goto label_2cdfa4;
        case 0x2cdfa8u: goto label_2cdfa8;
        case 0x2cdfacu: goto label_2cdfac;
        case 0x2cdfb0u: goto label_2cdfb0;
        case 0x2cdfb4u: goto label_2cdfb4;
        case 0x2cdfb8u: goto label_2cdfb8;
        case 0x2cdfbcu: goto label_2cdfbc;
        case 0x2cdfc0u: goto label_2cdfc0;
        case 0x2cdfc4u: goto label_2cdfc4;
        case 0x2cdfc8u: goto label_2cdfc8;
        case 0x2cdfccu: goto label_2cdfcc;
        case 0x2cdfd0u: goto label_2cdfd0;
        case 0x2cdfd4u: goto label_2cdfd4;
        case 0x2cdfd8u: goto label_2cdfd8;
        case 0x2cdfdcu: goto label_2cdfdc;
        case 0x2cdfe0u: goto label_2cdfe0;
        case 0x2cdfe4u: goto label_2cdfe4;
        case 0x2cdfe8u: goto label_2cdfe8;
        case 0x2cdfecu: goto label_2cdfec;
        case 0x2cdff0u: goto label_2cdff0;
        case 0x2cdff4u: goto label_2cdff4;
        case 0x2cdff8u: goto label_2cdff8;
        case 0x2cdffcu: goto label_2cdffc;
        case 0x2ce000u: goto label_2ce000;
        case 0x2ce004u: goto label_2ce004;
        case 0x2ce008u: goto label_2ce008;
        case 0x2ce00cu: goto label_2ce00c;
        case 0x2ce010u: goto label_2ce010;
        case 0x2ce014u: goto label_2ce014;
        case 0x2ce018u: goto label_2ce018;
        case 0x2ce01cu: goto label_2ce01c;
        case 0x2ce020u: goto label_2ce020;
        case 0x2ce024u: goto label_2ce024;
        case 0x2ce028u: goto label_2ce028;
        case 0x2ce02cu: goto label_2ce02c;
        case 0x2ce030u: goto label_2ce030;
        case 0x2ce034u: goto label_2ce034;
        case 0x2ce038u: goto label_2ce038;
        case 0x2ce03cu: goto label_2ce03c;
        case 0x2ce040u: goto label_2ce040;
        case 0x2ce044u: goto label_2ce044;
        case 0x2ce048u: goto label_2ce048;
        case 0x2ce04cu: goto label_2ce04c;
        case 0x2ce050u: goto label_2ce050;
        case 0x2ce054u: goto label_2ce054;
        case 0x2ce058u: goto label_2ce058;
        case 0x2ce05cu: goto label_2ce05c;
        case 0x2ce060u: goto label_2ce060;
        case 0x2ce064u: goto label_2ce064;
        case 0x2ce068u: goto label_2ce068;
        case 0x2ce06cu: goto label_2ce06c;
        default: return;
    }

label_2cd8a0:
    // 0x2cd8a0: 0x20687469  addi        $t0, $v1, 0x7469
    ctx->pc = 0x2cd8a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29801, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2cd8a4:
    // 0x2cd8a4: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cd8a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd8a8:
    // 0x2cd8a8: 0x65727458  daddiu      $s2, $t3, 0x7458
    ctx->pc = 0x2cd8a8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29784);
label_2cd8ac:
    // 0x2cd8ac: 0x4c20656d  .word       0x4C20656D                   # INVALID     $at, $zero, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd8acu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CD8AC raw=0x4C20656D");
 /* MITIGATED */
label_2cd8b0:
    // 0x2cd8b0: 0x6e656765  ldr         $a1, 0x6765($s3)
    ctx->pc = 0x2cd8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cd8b4:
    // 0x2cd8b4: 0x64207364  daddiu      $zero, $at, 0x7364
    ctx->pc = 0x2cd8b4u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29540);
label_2cd8b8:
    // 0x2cd8b8: 0x2e617461  sltiu       $at, $s3, 0x7461
    ctx->pc = 0x2cd8b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_2cd8bc:
    // 0x2cd8bc: 0x0  nop
    ctx->pc = 0x2cd8bcu;
    // NOP
label_2cd8c0:
    // 0x2cd8c0: 0x20756f59  addi        $s5, $v1, 0x6F59
    ctx->pc = 0x2cd8c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28505, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2cd8c4:
    // 0x2cd8c4: 0x206e6163  addi        $t6, $v1, 0x6163
    ctx->pc = 0x2cd8c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24931, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cd8c8:
    // 0x2cd8c8: 0x61657263  daddi       $a1, $t3, 0x7263
    ctx->pc = 0x2cd8c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29283; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cd8cc:
    // 0x2cd8cc: 0x58206574  blezl       $at, . + 4 + (0x6574 << 2)
label_2cd8d0:
    if (ctx->pc == 0x2CD8D0u) {
        ctx->pc = 0x2CD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8CCu;
        // 0x2cd8d0: 0x6d657274  ldr         $a1, 0x7274($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8D4u;
        goto label_2cd8d4;
    }
    ctx->pc = 0x2CD8CCu;
    {
        const bool branch_taken_0x2cd8cc = (GPR_S32(ctx, 1) <= 0);
        if (branch_taken_0x2cd8cc) {
            ctx->pc = 0x2CD8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD8CCu;
            // 0x2cd8d0: 0x6d657274  ldr         $a1, 0x7274($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6EA0u;
            return;
        }
    }
    ctx->pc = 0x2CD8D4u;
label_2cd8d4:
    // 0x2cd8d4: 0x654c2065  daddiu      $t4, $t2, 0x2065
    ctx->pc = 0x2cd8d4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8293);
label_2cd8d8:
    // 0x2cd8d8: 0x646e6567  daddiu      $t6, $v1, 0x6567
    ctx->pc = 0x2cd8d8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25959);
label_2cd8dc:
    // 0x2cd8dc: 0x61642073  daddi       $a0, $t3, 0x2073
    ctx->pc = 0x2cd8dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8307; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_2cd8e0:
    // 0x2cd8e0: 0x77206174  .word       0x77206174                   # INVALID     $t9, $zero, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd8e0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD8E0 raw=0x77206174");
 /* MITIGATED */
label_2cd8e4:
    // 0x2cd8e4: 0x20687469  addi        $t0, $v1, 0x7469
    ctx->pc = 0x2cd8e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29801, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2cd8e8:
    // 0x2cd8e8: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cd8e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd8ec:
    // 0x2cd8ec: 0x72616863  .word       0x72616863                   # INVALID     $s3, $at, 0x6863 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd8ecu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x2CD8EC raw=0x72616863");
 /* MITIGATED */
label_2cd8f0:
    // 0x2cd8f0: 0x65746361  daddiu      $s4, $t3, 0x6361
    ctx->pc = 0x2cd8f0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25441);
label_2cd8f4:
    // 0x2cd8f4: 0x61642072  daddi       $a0, $t3, 0x2072
    ctx->pc = 0x2cd8f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_2cd8f8:
    // 0x2cd8f8: 0x202c6174  addi        $t4, $at, 0x6174
    ctx->pc = 0x2cd8f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)24948, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cd8fc:
    // 0x2cd8fc: 0x6d657469  ldr         $a1, 0x7469($t3)
    ctx->pc = 0x2cd8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cd900:
    // 0x2cd900: 0x6e612073  ldr         $at, 0x2073($s3)
    ctx->pc = 0x2cd900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cd904:
    // 0x2cd904: 0x65772064  daddiu      $s7, $t3, 0x2064
    ctx->pc = 0x2cd904u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
label_2cd908:
    // 0x2cd908: 0x6e6f7061  ldr         $t7, 0x7061($s3)
    ctx->pc = 0x2cd908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28769); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cd90c:
    // 0x2cd90c: 0x72662073  .word       0x72662073                   # INVALID     $s3, $a2, 0x2073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd90cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CD90C raw=0x72662073");
 /* MITIGATED */
label_2cd910:
    // 0x2cd910: 0x79206d6f  lq          $zero, 0x6D6F($t1)
    ctx->pc = 0x2cd910u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 28015)));
label_2cd914:
    // 0x2cd914: 0x2072756f  addi        $s2, $v1, 0x756F
    ctx->pc = 0x2cd914u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30063, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cd918:
    // 0x2cd918: 0x616e7944  daddi       $t6, $t3, 0x7944
    ctx->pc = 0x2cd918u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)31044; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2cd91c:
    // 0x2cd91c: 0x20797473  addi        $t9, $v1, 0x7473
    ctx->pc = 0x2cd91cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29811, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2cd920:
    // 0x2cd920: 0x72726157  .word       0x72726157                   # INVALID     $s3, $s2, 0x6157 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd920u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x17 at 0x2CD920 raw=0x72726157");
 /* MITIGATED */
label_2cd924:
    // 0x2cd924: 0x73726f69  .word       0x73726F69                   # INVALID     $k1, $s2, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x2cd924u;
//     throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x2CD924 raw=0x73726F69");
 /* MITIGATED */
label_2cd928:
    // 0x2cd928: 0x64203320  daddiu      $zero, $at, 0x3320
    ctx->pc = 0x2cd928u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)13088);
label_2cd92c:
    // 0x2cd92c: 0x20617461  addi        $at, $v1, 0x7461
    ctx->pc = 0x2cd92cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2cd930:
    // 0x2cd930: 0x74206e6f  .word       0x74206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd930u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD930 raw=0x74206E6F");
 /* MITIGATED */
label_2cd934:
    // 0x2cd934: 0x6d206568  ldr         $zero, 0x6568($t1)
    ctx->pc = 0x2cd934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cd938:
    // 0x2cd938: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd938u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CD938 raw=0x726F6D65");
 /* MITIGATED */
label_2cd93c:
    // 0x2cd93c: 0x61632079  daddi       $v1, $t3, 0x2079
    ctx->pc = 0x2cd93cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cd940:
    // 0x2cd940: 0x28206472  slti        $zero, $at, 0x6472
    ctx->pc = 0x2cd940u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25714) ? 1 : 0);
label_2cd944:
    // 0x2cd944: 0x29424d38  slti        $v0, $t2, 0x4D38
    ctx->pc = 0x2cd944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19768) ? 1 : 0);
label_2cd948:
    // 0x2cd948: 0x726f6628  paddub      $t4, $s3, $t7
    ctx->pc = 0x2cd948u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 15)));
label_2cd94c:
    // 0x2cd94c: 0x616c5020  daddi       $t4, $t3, 0x5020
    ctx->pc = 0x2cd94cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)20512; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2cd950:
    // 0x2cd950: 0x61745379  daddi       $s4, $t3, 0x5379
    ctx->pc = 0x2cd950u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21369; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cd954:
    // 0x2cd954: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x2cd954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cd958:
    // 0x2cd958: 0x2029325c  addi        $t1, $at, 0x325C
    ctx->pc = 0x2cd958u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)12892, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2cd95c:
    // 0x2cd95c: 0x25206e69  addiu       $zero, $t1, 0x6E69
    ctx->pc = 0x2cd95cu;
    // NOP (addiu $zero, ...)
label_2cd960:
    // 0x2cd960: 0x57202e73  bnel        $t9, $zero, . + 4 + (0x2E73 << 2)
label_2cd964:
    if (ctx->pc == 0x2CD964u) {
        ctx->pc = 0x2CD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD960u;
        // 0x2cd964: 0x206c6c69  addi        $t4, $v1, 0x6C69 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27753, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD968u;
        goto label_2cd968;
    }
    ctx->pc = 0x2CD960u;
    {
        const bool branch_taken_0x2cd960 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd960) {
            ctx->pc = 0x2CD964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD960u;
            // 0x2cd964: 0x206c6c69  addi        $t4, $v1, 0x6C69 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27753, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9330u;
            return;
        }
    }
    ctx->pc = 0x2CD968u;
label_2cd968:
    // 0x2cd968: 0x20756f79  addi        $s5, $v1, 0x6F79
    ctx->pc = 0x2cd968u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2cd96c:
    // 0x2cd96c: 0x746e6f63  .word       0x746E6F63                   # INVALID     $v1, $t6, 0x6F63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd96cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD96C raw=0x746E6F63");
 /* MITIGATED */
label_2cd970:
    // 0x2cd970: 0x65756e69  daddiu      $s5, $t3, 0x6E69
    ctx->pc = 0x2cd970u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_2cd974:
    // 0x2cd974: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x2cd974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_2cd978:
    // 0x2cd978: 0x0  nop
    ctx->pc = 0x2cd978u;
    // NOP
label_2cd97c:
    // 0x2cd97c: 0x0  nop
    ctx->pc = 0x2cd97cu;
    // NOP
label_2cd980:
    // 0x2cd980: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2cd980u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd984:
    // 0x2cd984: 0x6f6d656d  ldr         $t5, 0x656D($k1)
    ctx->pc = 0x2cd984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2cd988:
    // 0x2cd988: 0x63207972  daddi       $zero, $t9, 0x7972
    ctx->pc = 0x2cd988u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)31090; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cd98c:
    // 0x2cd98c: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x2cd98cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cd990:
    // 0x2cd990: 0x424d3828  .word       0x424D3828                   # INVALID     $s2, $t5, 0x3828 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cd990u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CD990 raw=0x424D3828");
 /* MITIGATED */
label_2cd994:
    // 0x2cd994: 0x6f662829  ldr         $a2, 0x2829($k1)
    ctx->pc = 0x2cd994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cd998:
    // 0x2cd998: 0x6c502072  ldr         $s0, 0x2072($v0)
    ctx->pc = 0x2cd998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cd99c:
    // 0x2cd99c: 0x74537961  .word       0x74537961                   # INVALID     $v0, $s3, 0x7961 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd99cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD99C raw=0x74537961");
 /* MITIGATED */
label_2cd9a0:
    // 0x2cd9a0: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x2cd9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd9a4:
    // 0x2cd9a4: 0x29325c6e  slti        $s2, $t1, 0x5C6E
    ctx->pc = 0x2cd9a4u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)23662) ? 1 : 0);
label_2cd9a8:
    // 0x2cd9a8: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x2cd9a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cd9ac:
    // 0x2cd9ac: 0x69207325  ldl         $zero, 0x7325($t1)
    ctx->pc = 0x2cd9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cd9b0:
    // 0x2cd9b0: 0x74276e73  .word       0x74276E73                   # INVALID     $at, $a3, 0x6E73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd9b0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD9B0 raw=0x74276E73");
 /* MITIGATED */
label_2cd9b4:
    // 0x2cd9b4: 0x726f6620  .word       0x726F6620                   # madd1       $t4, $s3, $t7 # 00000600 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd9b4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cd9b8:
    // 0x2cd9b8: 0x7474616d  .word       0x7474616D                   # INVALID     $v1, $s4, 0x616D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd9b8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD9B8 raw=0x7474616D");
 /* MITIGATED */
label_2cd9bc:
    // 0x2cd9bc: 0x2e6465  .word       0x002E6465                   # or          $t4, $at, $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd9bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) | GPR_U64(ctx, 14));
label_2cd9c0:
    // 0x2cd9c0: 0x72656854  .word       0x72656854                   # INVALID     $s3, $a1, 0x6854 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd9c0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x2CD9C0 raw=0x72656854");
 /* MITIGATED */
label_2cd9c4:
    // 0x2cd9c4: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd9c4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CD9C4 raw=0x73692065");
 /* MITIGATED */
label_2cd9c8:
    // 0x2cd9c8: 0x206f6e20  addi        $t7, $v1, 0x6E20
    ctx->pc = 0x2cd9c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28192, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2cd9cc:
    // 0x2cd9cc: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x2cd9ccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cd9d0:
    // 0x2cd9d0: 0x206e6f20  addi        $t6, $v1, 0x6F20
    ctx->pc = 0x2cd9d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cd9d4:
    // 0x2cd9d4: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cd9d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd9d8:
    // 0x2cd9d8: 0x6f6d656d  ldr         $t5, 0x656D($k1)
    ctx->pc = 0x2cd9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2cd9dc:
    // 0x2cd9dc: 0x63207972  daddi       $zero, $t9, 0x7972
    ctx->pc = 0x2cd9dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)31090; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cd9e0:
    // 0x2cd9e0: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x2cd9e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cd9e4:
    // 0x2cd9e4: 0x424d3828  .word       0x424D3828                   # INVALID     $s2, $t5, 0x3828 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cd9e4u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CD9E4 raw=0x424D3828");
 /* MITIGATED */
label_2cd9e8:
    // 0x2cd9e8: 0x6f662829  ldr         $a2, 0x2829($k1)
    ctx->pc = 0x2cd9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cd9ec:
    // 0x2cd9ec: 0x6c502072  ldr         $s0, 0x2072($v0)
    ctx->pc = 0x2cd9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cd9f0:
    // 0x2cd9f0: 0x74537961  .word       0x74537961                   # INVALID     $v0, $s3, 0x7961 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd9f0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD9F0 raw=0x74537961");
 /* MITIGATED */
label_2cd9f4:
    // 0x2cd9f4: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x2cd9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd9f8:
    // 0x2cd9f8: 0x29325c6e  slti        $s2, $t1, 0x5C6E
    ctx->pc = 0x2cd9f8u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)23662) ? 1 : 0);
label_2cd9fc:
    // 0x2cd9fc: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x2cd9fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cda00:
    // 0x2cda00: 0x2e7325  .word       0x002E7325                   # or          $t6, $at, $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cda00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) | GPR_U64(ctx, 14));
label_2cda04:
    // 0x2cda04: 0x0  nop
    ctx->pc = 0x2cda04u;
    // NOP
label_2cda08:
    // 0x2cda08: 0x0  nop
    ctx->pc = 0x2cda08u;
    // NOP
label_2cda0c:
    // 0x2cda0c: 0x0  nop
    ctx->pc = 0x2cda0cu;
    // NOP
label_2cda10:
    // 0x2cda10: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2cda10u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cda14:
    // 0x2cda14: 0x6f6d656d  ldr         $t5, 0x656D($k1)
    ctx->pc = 0x2cda14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2cda18:
    // 0x2cda18: 0x63207972  daddi       $zero, $t9, 0x7972
    ctx->pc = 0x2cda18u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)31090; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cda1c:
    // 0x2cda1c: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x2cda1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cda20:
    // 0x2cda20: 0x424d3828  .word       0x424D3828                   # INVALID     $s2, $t5, 0x3828 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cda20u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CDA20 raw=0x424D3828");
 /* MITIGATED */
label_2cda24:
    // 0x2cda24: 0x6f662829  ldr         $a2, 0x2829($k1)
    ctx->pc = 0x2cda24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cda28:
    // 0x2cda28: 0x6c502072  ldr         $s0, 0x2072($v0)
    ctx->pc = 0x2cda28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cda2c:
    // 0x2cda2c: 0x74537961  .word       0x74537961                   # INVALID     $v0, $s3, 0x7961 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cda2cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDA2C raw=0x74537961");
 /* MITIGATED */
label_2cda30:
    // 0x2cda30: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x2cda30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cda34:
    // 0x2cda34: 0x29325c6e  slti        $s2, $t1, 0x5C6E
    ctx->pc = 0x2cda34u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)23662) ? 1 : 0);
label_2cda38:
    // 0x2cda38: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x2cda38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cda3c:
    // 0x2cda3c: 0x68207325  ldl         $zero, 0x7325($at)
    ctx->pc = 0x2cda3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cda40:
    // 0x2cda40: 0x73207361  .word       0x73207361                   # maddu1      $t6, $t9, $zero # 00000340 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cda40u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 25) * (uint64_t)GPR_U32(ctx, 0); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2cda44:
    // 0x2cda44: 0x64657661  daddiu      $a1, $v1, 0x7661
    ctx->pc = 0x2cda44u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30305);
label_2cda48:
    // 0x2cda48: 0x74616420  .word       0x74616420                   # INVALID     $v1, $at, 0x6420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cda48u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDA48 raw=0x74616420");
 /* MITIGATED */
label_2cda4c:
    // 0x2cda4c: 0x2e61  .word       0x00002E61                   # addu        $a1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cda4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cda50:
    // 0x2cda50: 0x20776f4e  addi        $s7, $v1, 0x6F4E
    ctx->pc = 0x2cda50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cda54:
    // 0x2cda54: 0x6d726f66  ldr         $s2, 0x6F66($t3)
    ctx->pc = 0x2cda54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cda58:
    // 0x2cda58: 0x69747461  ldl         $s4, 0x7461($t3)
    ctx->pc = 0x2cda58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cda5c:
    // 0x2cda5c: 0x7420676e  .word       0x7420676E                   # INVALID     $at, $zero, 0x676E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cda5cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDA5C raw=0x7420676E");
 /* MITIGATED */
label_2cda60:
    // 0x2cda60: 0x6d206568  ldr         $zero, 0x6568($t1)
    ctx->pc = 0x2cda60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cda64:
    // 0x2cda64: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cda64u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CDA64 raw=0x726F6D65");
 /* MITIGATED */
label_2cda68:
    // 0x2cda68: 0x61632079  daddi       $v1, $t3, 0x2079
    ctx->pc = 0x2cda68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cda6c:
    // 0x2cda6c: 0x28206472  slti        $zero, $at, 0x6472
    ctx->pc = 0x2cda6cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25714) ? 1 : 0);
label_2cda70:
    // 0x2cda70: 0x29424d38  slti        $v0, $t2, 0x4D38
    ctx->pc = 0x2cda70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19768) ? 1 : 0);
label_2cda74:
    // 0x2cda74: 0x726f6628  paddub      $t4, $s3, $t7
    ctx->pc = 0x2cda74u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 15)));
label_2cda78:
    // 0x2cda78: 0x616c5020  daddi       $t4, $t3, 0x5020
    ctx->pc = 0x2cda78u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)20512; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2cda7c:
    // 0x2cda7c: 0x61745379  daddi       $s4, $t3, 0x5379
    ctx->pc = 0x2cda7cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21369; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cda80:
    // 0x2cda80: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x2cda80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cda84:
    // 0x2cda84: 0x2029325c  addi        $t1, $at, 0x325C
    ctx->pc = 0x2cda84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)12892, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2cda88:
    // 0x2cda88: 0x25206e69  addiu       $zero, $t1, 0x6E69
    ctx->pc = 0x2cda88u;
    // NOP (addiu $zero, ...)
label_2cda8c:
    // 0x2cda8c: 0x2e73  tltu        $zero, $zero, 185
    ctx->pc = 0x2cda8cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cda90:
    // 0x2cda90: 0x20776f4e  addi        $s7, $v1, 0x6F4E
    ctx->pc = 0x2cda90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cda94:
    // 0x2cda94: 0x69766173  ldl         $s6, 0x6173($t3)
    ctx->pc = 0x2cda94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_2cda98:
    // 0x2cda98: 0x7420676e  .word       0x7420676E                   # INVALID     $at, $zero, 0x676E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cda98u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDA98 raw=0x7420676E");
 /* MITIGATED */
label_2cda9c:
    // 0x2cda9c: 0x6874206f  ldl         $s4, 0x206F($v1)
    ctx->pc = 0x2cda9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cdaa0:
    // 0x2cdaa0: 0x656d2065  daddiu      $t5, $t3, 0x2065
    ctx->pc = 0x2cdaa0u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
label_2cdaa4:
    // 0x2cdaa4: 0x79726f6d  lq          $s2, 0x6F6D($t3)
    ctx->pc = 0x2cdaa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 28525)));
label_2cdaa8:
    // 0x2cdaa8: 0x72616320  .word       0x72616320                   # madd1       $t4, $s3, $at # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdaa8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cdaac:
    // 0x2cdaac: 0x38282064  xori        $t0, $at, 0x2064
    ctx->pc = 0x2cdaacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)8292);
label_2cdab0:
    // 0x2cdab0: 0x2829424d  slti        $t1, $at, 0x424D
    ctx->pc = 0x2cdab0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)16973) ? 1 : 0);
label_2cdab4:
    // 0x2cdab4: 0x20726f66  addi        $s2, $v1, 0x6F66
    ctx->pc = 0x2cdab4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28518, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cdab8:
    // 0x2cdab8: 0x79616c50  lq          $at, 0x6C50($t3)
    ctx->pc = 0x2cdab8u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27728)));
label_2cdabc:
    // 0x2cdabc: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdabcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDABC raw=0x74617453");
 /* MITIGATED */
label_2cdac0:
    // 0x2cdac0: 0x5c6e6f69  .word       0x5C6E6F69                   # bgtzl       $v1, . + 4 + (0x6F69 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_2cdac4:
    if (ctx->pc == 0x2CDAC4u) {
        ctx->pc = 0x2CDAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAC0u;
        // 0x2cdac4: 0x69202932  ldl         $zero, 0x2932($t1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 9), 10546); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDAC8u;
        goto label_2cdac8;
    }
    ctx->pc = 0x2CDAC0u;
    {
        const bool branch_taken_0x2cdac0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2cdac0) {
            ctx->pc = 0x2CDAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDAC0u;
            // 0x2cdac4: 0x69202932  ldl         $zero, 0x2932($t1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 9), 10546); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9868u;
            return;
        }
    }
    ctx->pc = 0x2CDAC8u;
label_2cdac8:
    // 0x2cdac8: 0x7325206e  .word       0x7325206E                   # INVALID     $t9, $a1, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdac8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CDAC8 raw=0x7325206E");
 /* MITIGATED */
label_2cdacc:
    // 0x2cdacc: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cdaccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cdad0:
    // 0x2cdad0: 0x20776f4e  addi        $s7, $v1, 0x6F4E
    ctx->pc = 0x2cdad0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cdad4:
    // 0x2cdad4: 0x64616f6c  daddiu      $at, $v1, 0x6F6C
    ctx->pc = 0x2cdad4u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
label_2cdad8:
    // 0x2cdad8: 0x20676e69  addi        $a3, $v1, 0x6E69
    ctx->pc = 0x2cdad8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2cdadc:
    // 0x2cdadc: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cdadcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cdae0:
    // 0x2cdae0: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x2cdae0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cdae4:
    // 0x2cdae4: 0x6f726620  ldr         $s2, 0x6620($k1)
    ctx->pc = 0x2cdae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cdae8:
    // 0x2cdae8: 0x6874206d  ldl         $s4, 0x206D($v1)
    ctx->pc = 0x2cdae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8301); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cdaec:
    // 0x2cdaec: 0x656d2065  daddiu      $t5, $t3, 0x2065
    ctx->pc = 0x2cdaecu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
label_2cdaf0:
    // 0x2cdaf0: 0x79726f6d  lq          $s2, 0x6F6D($t3)
    ctx->pc = 0x2cdaf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 28525)));
label_2cdaf4:
    // 0x2cdaf4: 0x72616320  .word       0x72616320                   # madd1       $t4, $s3, $at # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdaf4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cdaf8:
    // 0x2cdaf8: 0x38282064  xori        $t0, $at, 0x2064
    ctx->pc = 0x2cdaf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)8292);
label_2cdafc:
    // 0x2cdafc: 0x2829424d  slti        $t1, $at, 0x424D
    ctx->pc = 0x2cdafcu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)16973) ? 1 : 0);
label_2cdb00:
    // 0x2cdb00: 0x20726f66  addi        $s2, $v1, 0x6F66
    ctx->pc = 0x2cdb00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28518, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cdb04:
    // 0x2cdb04: 0x79616c50  lq          $at, 0x6C50($t3)
    ctx->pc = 0x2cdb04u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27728)));
label_2cdb08:
    // 0x2cdb08: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdb08u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDB08 raw=0x74617453");
 /* MITIGATED */
label_2cdb0c:
    // 0x2cdb0c: 0x5c6e6f69  .word       0x5C6E6F69                   # bgtzl       $v1, . + 4 + (0x6F69 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_2cdb10:
    if (ctx->pc == 0x2CDB10u) {
        ctx->pc = 0x2CDB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB0Cu;
        // 0x2cdb10: 0x69202932  ldl         $zero, 0x2932($t1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 9), 10546); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDB14u;
        goto label_2cdb14;
    }
    ctx->pc = 0x2CDB0Cu;
    {
        const bool branch_taken_0x2cdb0c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2cdb0c) {
            ctx->pc = 0x2CDB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDB0Cu;
            // 0x2cdb10: 0x69202932  ldl         $zero, 0x2932($t1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 9), 10546); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E98B4u;
            return;
        }
    }
    ctx->pc = 0x2CDB14u;
label_2cdb14:
    // 0x2cdb14: 0x7325206e  .word       0x7325206E                   # INVALID     $t9, $a1, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdb14u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CDB14 raw=0x7325206E");
 /* MITIGATED */
label_2cdb18:
    // 0x2cdb18: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cdb18u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cdb1c:
    // 0x2cdb1c: 0x0  nop
    ctx->pc = 0x2cdb1cu;
    // NOP
label_2cdb20:
    // 0x2cdb20: 0x72656854  .word       0x72656854                   # INVALID     $s3, $a1, 0x6854 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdb20u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x2CDB20 raw=0x72656854");
 /* MITIGATED */
label_2cdb24:
    // 0x2cdb24: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdb24u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CDB24 raw=0x73692065");
 /* MITIGATED */
label_2cdb28:
    // 0x2cdb28: 0x206f6e20  addi        $t7, $v1, 0x6E20
    ctx->pc = 0x2cdb28u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28192, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2cdb2c:
    // 0x2cdb2c: 0x6f6d656d  ldr         $t5, 0x656D($k1)
    ctx->pc = 0x2cdb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2cdb30:
    // 0x2cdb30: 0x63207972  daddi       $zero, $t9, 0x7972
    ctx->pc = 0x2cdb30u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)31090; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cdb34:
    // 0x2cdb34: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x2cdb34u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cdb38:
    // 0x2cdb38: 0x424d3828  .word       0x424D3828                   # INVALID     $s2, $t5, 0x3828 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cdb38u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CDB38 raw=0x424D3828");
 /* MITIGATED */
label_2cdb3c:
    // 0x2cdb3c: 0x6f662829  ldr         $a2, 0x2829($k1)
    ctx->pc = 0x2cdb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cdb40:
    // 0x2cdb40: 0x6c502072  ldr         $s0, 0x2072($v0)
    ctx->pc = 0x2cdb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cdb44:
    // 0x2cdb44: 0x74537961  .word       0x74537961                   # INVALID     $v0, $s3, 0x7961 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdb44u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDB44 raw=0x74537961");
 /* MITIGATED */
label_2cdb48:
    // 0x2cdb48: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x2cdb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cdb4c:
    // 0x2cdb4c: 0x29325c6e  slti        $s2, $t1, 0x5C6E
    ctx->pc = 0x2cdb4cu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)23662) ? 1 : 0);
label_2cdb50:
    // 0x2cdb50: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x2cdb50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cdb54:
    // 0x2cdb54: 0x2e7325  .word       0x002E7325                   # or          $t6, $at, $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdb54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) | GPR_U64(ctx, 14));
label_2cdb58:
    // 0x2cdb58: 0x0  nop
    ctx->pc = 0x2cdb58u;
    // NOP
label_2cdb5c:
    // 0x2cdb5c: 0x0  nop
    ctx->pc = 0x2cdb5cu;
    // NOP
label_2cdb60:
    // 0x2cdb60: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2cdb60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cdb64:
    // 0x2cdb64: 0x6f6d656d  ldr         $t5, 0x656D($k1)
    ctx->pc = 0x2cdb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2cdb68:
    // 0x2cdb68: 0x63207972  daddi       $zero, $t9, 0x7972
    ctx->pc = 0x2cdb68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)31090; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cdb6c:
    // 0x2cdb6c: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x2cdb6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cdb70:
    // 0x2cdb70: 0x424d3828  .word       0x424D3828                   # INVALID     $s2, $t5, 0x3828 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cdb70u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CDB70 raw=0x424D3828");
 /* MITIGATED */
label_2cdb74:
    // 0x2cdb74: 0x6f662829  ldr         $a2, 0x2829($k1)
    ctx->pc = 0x2cdb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cdb78:
    // 0x2cdb78: 0x6c502072  ldr         $s0, 0x2072($v0)
    ctx->pc = 0x2cdb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cdb7c:
    // 0x2cdb7c: 0x74537961  .word       0x74537961                   # INVALID     $v0, $s3, 0x7961 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdb7cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDB7C raw=0x74537961");
 /* MITIGATED */
label_2cdb80:
    // 0x2cdb80: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x2cdb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cdb84:
    // 0x2cdb84: 0x29325c6e  slti        $s2, $t1, 0x5C6E
    ctx->pc = 0x2cdb84u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)23662) ? 1 : 0);
label_2cdb88:
    // 0x2cdb88: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x2cdb88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cdb8c:
    // 0x2cdb8c: 0x69207325  ldl         $zero, 0x7325($t1)
    ctx->pc = 0x2cdb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cdb90:
    // 0x2cdb90: 0x6f632073  ldr         $v1, 0x2073($k1)
    ctx->pc = 0x2cdb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cdb94:
    // 0x2cdb94: 0x70757272  .word       0x70757272                   # INVALID     $v1, $s5, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdb94u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CDB94 raw=0x70757272");
 /* MITIGATED */
label_2cdb98:
    // 0x2cdb98: 0x2e646574  sltiu       $a0, $s3, 0x6574
    ctx->pc = 0x2cdb98u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25972) ? 1 : 0);
label_2cdb9c:
    // 0x2cdb9c: 0x0  nop
    ctx->pc = 0x2cdb9cu;
    // NOP
label_2cdba0:
    // 0x2cdba0: 0x6d726f46  ldr         $s2, 0x6F46($t3)
    ctx->pc = 0x2cdba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28486); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cdba4:
    // 0x2cdba4: 0x63207461  daddi       $zero, $t9, 0x7461
    ctx->pc = 0x2cdba4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29793; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cdba8:
    // 0x2cdba8: 0x65636e61  daddiu      $v1, $t3, 0x6E61
    ctx->pc = 0x2cdba8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
label_2cdbac:
    // 0x2cdbac: 0x64656c6c  daddiu      $a1, $v1, 0x6C6C
    ctx->pc = 0x2cdbacu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27756);
label_2cdbb0:
    // 0x2cdbb0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cdbb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cdbb4:
    // 0x2cdbb4: 0x0  nop
    ctx->pc = 0x2cdbb4u;
    // NOP
label_2cdbb8:
    // 0x2cdbb8: 0x0  nop
    ctx->pc = 0x2cdbb8u;
    // NOP
label_2cdbbc:
    // 0x2cdbbc: 0x0  nop
    ctx->pc = 0x2cdbbcu;
    // NOP
label_2cdbc0:
    // 0x2cdbc0: 0x65766153  daddiu      $s6, $t3, 0x6153
    ctx->pc = 0x2cdbc0u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24915);
label_2cdbc4:
    // 0x2cdbc4: 0x6e616320  ldr         $at, 0x6320($s3)
    ctx->pc = 0x2cdbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cdbc8:
    // 0x2cdbc8: 0x6c6c6563  ldr         $t4, 0x6563($v1)
    ctx->pc = 0x2cdbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cdbcc:
    // 0x2cdbcc: 0x2e6465  .word       0x002E6465                   # or          $t4, $at, $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdbccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) | GPR_U64(ctx, 14));
label_2cdbd0:
    // 0x2cdbd0: 0x64616f4c  daddiu      $at, $v1, 0x6F4C
    ctx->pc = 0x2cdbd0u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28492);
label_2cdbd4:
    // 0x2cdbd4: 0x6e616320  ldr         $at, 0x6320($s3)
    ctx->pc = 0x2cdbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cdbd8:
    // 0x2cdbd8: 0x6c6c6563  ldr         $t4, 0x6563($v1)
    ctx->pc = 0x2cdbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cdbdc:
    // 0x2cdbdc: 0x2e6465  .word       0x002E6465                   # or          $t4, $at, $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdbdcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) | GPR_U64(ctx, 14));
label_2cdbe0:
    // 0x2cdbe0: 0x6c6c6957  ldr         $t4, 0x6957($v1)
    ctx->pc = 0x2cdbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26967); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cdbe4:
    // 0x2cdbe4: 0x756f7920  .word       0x756F7920                   # INVALID     $t3, $t7, 0x7920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdbe4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDBE4 raw=0x756F7920");
 /* MITIGATED */
label_2cdbe8:
    // 0x2cdbe8: 0x61747320  daddi       $s4, $t3, 0x7320
    ctx->pc = 0x2cdbe8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29472; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cdbec:
    // 0x2cdbec: 0x74207472  .word       0x74207472                   # INVALID     $at, $zero, 0x7472 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdbecu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDBEC raw=0x74207472");
 /* MITIGATED */
label_2cdbf0:
    // 0x2cdbf0: 0x67206568  daddiu      $zero, $t9, 0x6568
    ctx->pc = 0x2cdbf0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)25960);
label_2cdbf4:
    // 0x2cdbf4: 0x20656d61  addi        $a1, $v1, 0x6D61
    ctx->pc = 0x2cdbf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28001, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cdbf8:
    // 0x2cdbf8: 0x42206e69  .word       0x42206E69                   # INVALID     $s1, $zero, 0x6E69 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cdbf8u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x2CDBF8 raw=0x42206E69");
 /* MITIGATED */
label_2cdbfc:
    // 0x2cdbfc: 0x6e696765  ldr         $t1, 0x6765($s3)
    ctx->pc = 0x2cdbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cdc00:
    // 0x2cdc00: 0x2072656e  addi        $s2, $v1, 0x656E
    ctx->pc = 0x2cdc00u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25966, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cdc04:
    // 0x2cdc04: 0x65646f4d  daddiu      $a0, $t3, 0x6F4D
    ctx->pc = 0x2cdc04u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28493);
label_2cdc08:
    // 0x2cdc08: 0x5928203f  .word       0x5928203F                   # blezl       $t1, . + 4 + (0x203F << 2) # 00080000 <InstrIdType: CPU_NORMAL>
label_2cdc0c:
    if (ctx->pc == 0x2CDC0Cu) {
        ctx->pc = 0x2CDC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDC08u;
        // 0x2cdc0c: 0x6320756f  daddi       $zero, $t9, 0x756F (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)30063; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDC10u;
        goto label_2cdc10;
    }
    ctx->pc = 0x2CDC08u;
    {
        const bool branch_taken_0x2cdc08 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x2cdc08) {
            ctx->pc = 0x2CDC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDC08u;
            // 0x2cdc0c: 0x6320756f  daddi       $zero, $t9, 0x756F (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)30063; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5D08u;
            return;
        }
    }
    ctx->pc = 0x2CDC10u;
label_2cdc10:
    // 0x2cdc10: 0x63206e61  daddi       $zero, $t9, 0x6E61
    ctx->pc = 0x2cdc10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)28257; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cdc14:
    // 0x2cdc14: 0x676e6168  daddiu      $t6, $k1, 0x6168
    ctx->pc = 0x2cdc14u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
label_2cdc18:
    // 0x2cdc18: 0x68742065  ldl         $s4, 0x2065($v1)
    ctx->pc = 0x2cdc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cdc1c:
    // 0x2cdc1c: 0x69642065  ldl         $a0, 0x2065($t3)
    ctx->pc = 0x2cdc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2cdc20:
    // 0x2cdc20: 0x63696666  daddi       $t1, $k1, 0x6666
    ctx->pc = 0x2cdc20u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26214; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2cdc24:
    // 0x2cdc24: 0x79746c75  lq          $s4, 0x6C75($t3)
    ctx->pc = 0x2cdc24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 11), 27765)));
label_2cdc28:
    // 0x2cdc28: 0x76656c20  .word       0x76656C20                   # INVALID     $s3, $a1, 0x6C20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdc28u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDC28 raw=0x76656C20");
 /* MITIGATED */
label_2cdc2c:
    // 0x2cdc2c: 0x69206c65  ldl         $zero, 0x6C65($t1)
    ctx->pc = 0x2cdc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 27749); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cdc30:
    // 0x2cdc30: 0x6874206e  ldl         $s4, 0x206E($v1)
    ctx->pc = 0x2cdc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cdc34:
    // 0x2cdc34: 0x704f2065  .word       0x704F2065                   # INVALID     $v0, $t7, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdc34u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CDC34 raw=0x704F2065");
 /* MITIGATED */
label_2cdc38:
    // 0x2cdc38: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x2cdc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cdc3c:
    // 0x2cdc3c: 0x656d2073  daddiu      $t5, $t3, 0x2073
    ctx->pc = 0x2cdc3cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8307);
label_2cdc40:
    // 0x2cdc40: 0x292e756e  slti        $t6, $t1, 0x756E
    ctx->pc = 0x2cdc40u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)30062) ? 1 : 0);
label_2cdc44:
    // 0x2cdc44: 0x0  nop
    ctx->pc = 0x2cdc44u;
    // NOP
label_2cdc48:
    // 0x2cdc48: 0x65766153  daddiu      $s6, $t3, 0x6153
    ctx->pc = 0x2cdc48u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24915);
label_2cdc4c:
    // 0x2cdc4c: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x2cdc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2cdc50:
    // 0x2cdc50: 0x2e64656c  sltiu       $a0, $s3, 0x656C
    ctx->pc = 0x2cdc50u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_2cdc54:
    // 0x2cdc54: 0x0  nop
    ctx->pc = 0x2cdc54u;
    // NOP
label_2cdc58:
    // 0x2cdc58: 0x64616f4c  daddiu      $at, $v1, 0x6F4C
    ctx->pc = 0x2cdc58u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28492);
label_2cdc5c:
    // 0x2cdc5c: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x2cdc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2cdc60:
    // 0x2cdc60: 0x2e64656c  sltiu       $a0, $s3, 0x656C
    ctx->pc = 0x2cdc60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_2cdc64:
    // 0x2cdc64: 0x0  nop
    ctx->pc = 0x2cdc64u;
    // NOP
label_2cdc68:
    // 0x2cdc68: 0x0  nop
    ctx->pc = 0x2cdc68u;
    // NOP
label_2cdc6c:
    // 0x2cdc6c: 0x0  nop
    ctx->pc = 0x2cdc6cu;
    // NOP
label_2cdc70:
    // 0x2cdc70: 0x69570a2e  ldl         $s7, 0xA2E($t2)
    ctx->pc = 0x2cdc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 2606); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
label_2cdc74:
    // 0x2cdc74: 0x79206c6c  lq          $zero, 0x6C6C($t1)
    ctx->pc = 0x2cdc74u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 27756)));
label_2cdc78:
    // 0x2cdc78: 0x6620756f  daddiu      $zero, $s1, 0x756F
    ctx->pc = 0x2cdc78u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)30063);
label_2cdc7c:
    // 0x2cdc7c: 0x616d726f  daddi       $t5, $t3, 0x726F
    ctx->pc = 0x2cdc7cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2cdc80:
    // 0x2cdc80: 0x3f74  teq         $zero, $zero, 253
    ctx->pc = 0x2cdc80u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cdc84:
    // 0x2cdc84: 0x0  nop
    ctx->pc = 0x2cdc84u;
    // NOP
label_2cdc88:
    // 0x2cdc88: 0x0  nop
    ctx->pc = 0x2cdc88u;
    // NOP
label_2cdc8c:
    // 0x2cdc8c: 0x0  nop
    ctx->pc = 0x2cdc8cu;
    // NOP
label_2cdc90:
    // 0x2cdc90: 0x6572430a  daddiu      $s2, $t3, 0x430A
    ctx->pc = 0x2cdc90u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17162);
label_2cdc94:
    // 0x2cdc94: 0x20657461  addi        $a1, $v1, 0x7461
    ctx->pc = 0x2cdc94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cdc98:
    // 0x2cdc98: 0x2077656e  addi        $s7, $v1, 0x656E
    ctx->pc = 0x2cdc98u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25966, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cdc9c:
    // 0x2cdc9c: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x2cdc9cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cdca0:
    // 0x2cdca0: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x2cdca0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_2cdca4:
    // 0x2cdca4: 0x0  nop
    ctx->pc = 0x2cdca4u;
    // NOP
label_2cdca8:
    // 0x2cdca8: 0x0  nop
    ctx->pc = 0x2cdca8u;
    // NOP
label_2cdcac:
    // 0x2cdcac: 0x0  nop
    ctx->pc = 0x2cdcacu;
    // NOP
label_2cdcb0:
    // 0x2cdcb0: 0x6c69570a  ldr         $t1, 0x570A($v1)
    ctx->pc = 0x2cdcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 22282); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cdcb4:
    // 0x2cdcb4: 0x6f79206c  ldr         $t9, 0x206C($k1)
    ctx->pc = 0x2cdcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2cdcb8:
    // 0x2cdcb8: 0x766f2075  .word       0x766F2075                   # INVALID     $s3, $t7, 0x2075 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdcb8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDCB8 raw=0x766F2075");
 /* MITIGATED */
label_2cdcbc:
    // 0x2cdcbc: 0x72777265  .word       0x72777265                   # INVALID     $s3, $s7, 0x7265 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdcbcu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CDCBC raw=0x72777265");
 /* MITIGATED */
label_2cdcc0:
    // 0x2cdcc0: 0x20657469  addi        $a1, $v1, 0x7469
    ctx->pc = 0x2cdcc0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29801, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cdcc4:
    // 0x2cdcc4: 0x73696874  .word       0x73696874                   # psllh       $t5, $t1, 1 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdcc4u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 9), 1));
label_2cdcc8:
    // 0x2cdcc8: 0x74616420  .word       0x74616420                   # INVALID     $v1, $at, 0x6420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdcc8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDCC8 raw=0x74616420");
 /* MITIGATED */
label_2cdccc:
    // 0x2cdccc: 0x3f61  .word       0x00003F61                   # addu        $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdcccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2cdcd0:
    // 0x2cdcd0: 0x6c69570a  ldr         $t1, 0x570A($v1)
    ctx->pc = 0x2cdcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 22282); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cdcd4:
    // 0x2cdcd4: 0x6f79206c  ldr         $t9, 0x206C($k1)
    ctx->pc = 0x2cdcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2cdcd8:
    // 0x2cdcd8: 0x6f6c2075  ldr         $t4, 0x2075($k1)
    ctx->pc = 0x2cdcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8309); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cdcdc:
    // 0x2cdcdc: 0x74206461  .word       0x74206461                   # INVALID     $at, $zero, 0x6461 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdcdcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDCDC raw=0x74206461");
 /* MITIGATED */
label_2cdce0:
    // 0x2cdce0: 0x20736968  addi        $s3, $v1, 0x6968
    ctx->pc = 0x2cdce0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26984, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cdce4:
    // 0x2cdce4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x2cdce4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cdce8:
    // 0x2cdce8: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x2cdce8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_2cdcec:
    // 0x2cdcec: 0x0  nop
    ctx->pc = 0x2cdcecu;
    // NOP
label_2cdcf0:
    // 0x2cdcf0: 0x656c500a  daddiu      $t4, $t3, 0x500A
    ctx->pc = 0x2cdcf0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)20490);
label_2cdcf4:
    // 0x2cdcf4: 0x20657361  addi        $a1, $v1, 0x7361
    ctx->pc = 0x2cdcf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cdcf8:
    // 0x2cdcf8: 0x6e206f64  ldr         $zero, 0x6F64($s1)
    ctx->pc = 0x2cdcf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28516); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cdcfc:
    // 0x2cdcfc: 0x7220746f  .word       0x7220746F                   # INVALID     $s1, $zero, 0x746F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdcfcu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2CDCFC raw=0x7220746F");
 /* MITIGATED */
label_2cdd00:
    // 0x2cdd00: 0x766f6d65  .word       0x766F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdd00u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDD00 raw=0x766F6D65");
 /* MITIGATED */
label_2cdd04:
    // 0x2cdd04: 0x68742065  ldl         $s4, 0x2065($v1)
    ctx->pc = 0x2cdd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cdd08:
    // 0x2cdd08: 0x656d2065  daddiu      $t5, $t3, 0x2065
    ctx->pc = 0x2cdd08u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
label_2cdd0c:
    // 0x2cdd0c: 0x79726f6d  lq          $s2, 0x6F6D($t3)
    ctx->pc = 0x2cdd0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 28525)));
label_2cdd10:
    // 0x2cdd10: 0x72616320  .word       0x72616320                   # madd1       $t4, $s3, $at # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdd10u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cdd14:
    // 0x2cdd14: 0x38282064  xori        $t0, $at, 0x2064
    ctx->pc = 0x2cdd14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)8292);
label_2cdd18:
    // 0x2cdd18: 0x2829424d  slti        $t1, $at, 0x424D
    ctx->pc = 0x2cdd18u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)16973) ? 1 : 0);
label_2cdd1c:
    // 0x2cdd1c: 0x20726f66  addi        $s2, $v1, 0x6F66
    ctx->pc = 0x2cdd1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28518, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cdd20:
    // 0x2cdd20: 0x79616c50  lq          $at, 0x6C50($t3)
    ctx->pc = 0x2cdd20u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27728)));
label_2cdd24:
    // 0x2cdd24: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdd24u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDD24 raw=0x74617453");
 /* MITIGATED */
label_2cdd28:
    // 0x2cdd28: 0x5c6e6f69  .word       0x5C6E6F69                   # bgtzl       $v1, . + 4 + (0x6F69 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_2cdd2c:
    if (ctx->pc == 0x2CDD2Cu) {
        ctx->pc = 0x2CDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD28u;
        // 0x2cdd2c: 0x202c2932  addi        $t4, $at, 0x2932 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10546, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD30u;
        goto label_2cdd30;
    }
    ctx->pc = 0x2CDD28u;
    {
        const bool branch_taken_0x2cdd28 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2cdd28) {
            ctx->pc = 0x2CDD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDD28u;
            // 0x2cdd2c: 0x202c2932  addi        $t4, $at, 0x2932 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10546, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9AD0u;
            return;
        }
    }
    ctx->pc = 0x2CDD30u;
label_2cdd30:
    // 0x2cdd30: 0x746e6f63  .word       0x746E6F63                   # INVALID     $v1, $t6, 0x6F63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdd30u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDD30 raw=0x746E6F63");
 /* MITIGATED */
label_2cdd34:
    // 0x2cdd34: 0x6c6c6f72  ldr         $t4, 0x6F72($v1)
    ctx->pc = 0x2cdd34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cdd38:
    // 0x2cdd38: 0x6f207265  ldr         $zero, 0x7265($t9)
    ctx->pc = 0x2cdd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cdd3c:
    // 0x2cdd3c: 0x75742072  .word       0x75742072                   # INVALID     $t3, $s4, 0x2072 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdd3cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDD3C raw=0x75742072");
 /* MITIGATED */
label_2cdd40:
    // 0x2cdd40: 0x6f206e72  ldr         $zero, 0x6E72($t9)
    ctx->pc = 0x2cdd40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 28274); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cdd44:
    // 0x2cdd44: 0x74206666  .word       0x74206666                   # INVALID     $at, $zero, 0x6666 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdd44u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDD44 raw=0x74206666");
 /* MITIGATED */
label_2cdd48:
    // 0x2cdd48: 0x70206568  psubuh      $t4, $at, $zero
    ctx->pc = 0x2cdd48u;
    SET_GPR_VEC(ctx, 12, _mm_sub_epi16(GPR_VEC(ctx, 1), GPR_VEC(ctx, 0)));
label_2cdd4c:
    // 0x2cdd4c: 0x7265776f  .word       0x7265776F                   # INVALID     $s3, $a1, 0x776F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdd4cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2CDD4C raw=0x7265776F");
 /* MITIGATED */
label_2cdd50:
    // 0x2cdd50: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cdd50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cdd54:
    // 0x2cdd54: 0x0  nop
    ctx->pc = 0x2cdd54u;
    // NOP
label_2cdd58:
    // 0x2cdd58: 0x0  nop
    ctx->pc = 0x2cdd58u;
    // NOP
label_2cdd5c:
    // 0x2cdd5c: 0x0  nop
    ctx->pc = 0x2cdd5cu;
    // NOP
label_2cdd60:
    // 0x2cdd60: 0x656c500a  daddiu      $t4, $t3, 0x500A
    ctx->pc = 0x2cdd60u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)20490);
label_2cdd64:
    // 0x2cdd64: 0x20657361  addi        $a1, $v1, 0x7361
    ctx->pc = 0x2cdd64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cdd68:
    // 0x2cdd68: 0x65736e69  daddiu      $s3, $t3, 0x6E69
    ctx->pc = 0x2cdd68u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_2cdd6c:
    // 0x2cdd6c: 0x61207472  daddi       $zero, $t1, 0x7472
    ctx->pc = 0x2cdd6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29810; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cdd70:
    // 0x2cdd70: 0x6d656d20  ldr         $a1, 0x6D20($t3)
    ctx->pc = 0x2cdd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cdd74:
    // 0x2cdd74: 0x2079726f  addi        $t9, $v1, 0x726F
    ctx->pc = 0x2cdd74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2cdd78:
    // 0x2cdd78: 0x64726163  daddiu      $s2, $v1, 0x6163
    ctx->pc = 0x2cdd78u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24931);
label_2cdd7c:
    // 0x2cdd7c: 0x4d382820  .word       0x4D382820                   # INVALID     $t1, $t8, 0x2820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdd7cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CDD7C raw=0x4D382820");
 /* MITIGATED */
label_2cdd80:
    // 0x2cdd80: 0x66282942  daddiu      $t0, $s1, 0x2942
    ctx->pc = 0x2cdd80u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)10562);
label_2cdd84:
    // 0x2cdd84: 0x5020726f  beql        $at, $zero, . + 4 + (0x726F << 2)
label_2cdd88:
    if (ctx->pc == 0x2CDD88u) {
        ctx->pc = 0x2CDD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD84u;
        // 0x2cdd88: 0x5379616c  beql        $k1, $t9, . + 4 + (0x616C << 2) (Delay Slot)
        // Likely branch instruction at 0x2CDD88 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDD8Cu;
        goto label_2cdd8c;
    }
    ctx->pc = 0x2CDD84u;
    {
        const bool branch_taken_0x2cdd84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd84) {
            ctx->pc = 0x2CDD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDD84u;
            // 0x2cdd88: 0x5379616c  beql        $k1, $t9, . + 4 + (0x616C << 2) (Delay Slot)
            // Likely branch instruction at 0x2CDD88 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA744u;
            return;
        }
    }
    ctx->pc = 0x2CDD8Cu;
label_2cdd8c:
    // 0x2cdd8c: 0x69746174  ldl         $s4, 0x6174($t3)
    ctx->pc = 0x2cdd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cdd90:
    // 0x2cdd90: 0x325c6e6f  andi        $gp, $s2, 0x6E6F
    ctx->pc = 0x2cdd90u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)28271);
label_2cdd94:
    // 0x2cdd94: 0x2e29  .word       0x00002E29                   # mtsa        $zero # 00002E00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cdd94u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cdd98:
    // 0x2cdd98: 0x0  nop
    ctx->pc = 0x2cdd98u;
    // NOP
label_2cdd9c:
    // 0x2cdd9c: 0x0  nop
    ctx->pc = 0x2cdd9cu;
    // NOP
label_2cdda0:
    // 0x2cdda0: 0x6e61430a  ldr         $at, 0x430A($s3)
    ctx->pc = 0x2cdda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17162); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cdda4:
    // 0x2cdda4: 0x6c6c6563  ldr         $t4, 0x6563($v1)
    ctx->pc = 0x2cdda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cdda8:
    // 0x2cdda8: 0x20676e69  addi        $a3, $v1, 0x6E69
    ctx->pc = 0x2cdda8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_2cddac:
    // 0x2cddac: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cddacu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cddb0:
    // 0x2cddb0: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x2cddb0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cddb4:
    // 0x2cddb4: 0x6d6f6320  ldr         $t7, 0x6320($t3)
    ctx->pc = 0x2cddb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cddb8:
    // 0x2cddb8: 0x616e6962  daddi       $t6, $t3, 0x6962
    ctx->pc = 0x2cddb8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26978; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2cddbc:
    // 0x2cddbc: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x2cddbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cddc0:
    // 0x2cddc0: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cddc0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cddc4:
    // 0x2cddc4: 0x0  nop
    ctx->pc = 0x2cddc4u;
    // NOP
label_2cddc8:
    // 0x2cddc8: 0x0  nop
    ctx->pc = 0x2cddc8u;
    // NOP
label_2cddcc:
    // 0x2cddcc: 0x0  nop
    ctx->pc = 0x2cddccu;
    // NOP
label_2cddd0:
    // 0x2cddd0: 0x756f590a  .word       0x756F590A                   # INVALID     $t3, $t7, 0x590A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cddd0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDDD0 raw=0x756F590A");
 /* MITIGATED */
label_2cddd4:
    // 0x2cddd4: 0x6c697720  ldr         $t1, 0x7720($v1)
    ctx->pc = 0x2cddd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cddd8:
    // 0x2cddd8: 0x6562206c  daddiu      $v0, $t3, 0x206C
    ctx->pc = 0x2cddd8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8300);
label_2cdddc:
    // 0x2cdddc: 0x616e7520  daddi       $t6, $t3, 0x7520
    ctx->pc = 0x2cdddcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29984; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2cdde0:
    // 0x2cdde0: 0x20656c62  addi        $a1, $v1, 0x6C62
    ctx->pc = 0x2cdde0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27746, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cdde4:
    // 0x2cdde4: 0x73206f74  .word       0x73206F74                   # psllh       $t5, $zero, 29 # 03200000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdde4u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 0), 29));
label_2cdde8:
    // 0x2cdde8: 0x2e657661  sltiu       $a1, $s3, 0x7661
    ctx->pc = 0x2cdde8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)30305) ? 1 : 0);
label_2cddec:
    // 0x2cddec: 0x6e6f4320  ldr         $t7, 0x4320($s3)
    ctx->pc = 0x2cddecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cddf0:
    // 0x2cddf0: 0x756e6974  .word       0x756E6974                   # INVALID     $t3, $t6, 0x6974 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cddf0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDDF0 raw=0x756E6974");
 /* MITIGATED */
label_2cddf4:
    // 0x2cddf4: 0x6e612065  ldr         $at, 0x2065($s3)
    ctx->pc = 0x2cddf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cddf8:
    // 0x2cddf8: 0x79617779  lq          $at, 0x7779($t3)
    ctx->pc = 0x2cddf8u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 30585)));
label_2cddfc:
    // 0x2cddfc: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x2cddfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_2cde00:
    // 0x2cde00: 0x75736e49  .word       0x75736E49                   # INVALID     $t3, $s3, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cde00u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDE00 raw=0x75736E49");
 /* MITIGATED */
label_2cde04:
    // 0x2cde04: 0x63696666  daddi       $t1, $k1, 0x6666
    ctx->pc = 0x2cde04u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26214; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2cde08:
    // 0x2cde08: 0x746e6569  .word       0x746E6569                   # INVALID     $v1, $t6, 0x6569 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cde08u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDE08 raw=0x746E6569");
 /* MITIGATED */
label_2cde0c:
    // 0x2cde0c: 0x65726620  daddiu      $s2, $t3, 0x6620
    ctx->pc = 0x2cde0cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26144);
label_2cde10:
    // 0x2cde10: 0x70732065  .word       0x70732065                   # INVALID     $v1, $s3, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cde10u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CDE10 raw=0x70732065");
 /* MITIGATED */
label_2cde14:
    // 0x2cde14: 0x20656361  addi        $a1, $v1, 0x6361
    ctx->pc = 0x2cde14u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25441, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cde18:
    // 0x2cde18: 0x74206e6f  .word       0x74206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cde18u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDE18 raw=0x74206E6F");
 /* MITIGATED */
label_2cde1c:
    // 0x2cde1c: 0x6d206568  ldr         $zero, 0x6568($t1)
    ctx->pc = 0x2cde1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cde20:
    // 0x2cde20: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cde20u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CDE20 raw=0x726F6D65");
 /* MITIGATED */
label_2cde24:
    // 0x2cde24: 0x61632079  daddi       $v1, $t3, 0x2079
    ctx->pc = 0x2cde24u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cde28:
    // 0x2cde28: 0x28206472  slti        $zero, $at, 0x6472
    ctx->pc = 0x2cde28u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25714) ? 1 : 0);
label_2cde2c:
    // 0x2cde2c: 0x29424d38  slti        $v0, $t2, 0x4D38
    ctx->pc = 0x2cde2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19768) ? 1 : 0);
label_2cde30:
    // 0x2cde30: 0x726f6628  paddub      $t4, $s3, $t7
    ctx->pc = 0x2cde30u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 15)));
label_2cde34:
    // 0x2cde34: 0x616c5020  daddi       $t4, $t3, 0x5020
    ctx->pc = 0x2cde34u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)20512; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2cde38:
    // 0x2cde38: 0x61745379  daddi       $s4, $t3, 0x5379
    ctx->pc = 0x2cde38u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21369; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cde3c:
    // 0x2cde3c: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x2cde3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cde40:
    // 0x2cde40: 0x2029325c  addi        $t1, $at, 0x325C
    ctx->pc = 0x2cde40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)12892, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2cde44:
    // 0x2cde44: 0x25206e69  addiu       $zero, $t1, 0x6E69
    ctx->pc = 0x2cde44u;
    // NOP (addiu $zero, ...)
label_2cde48:
    // 0x2cde48: 0x49202e73  .word       0x49202E73                   # INVALID     $t1, $zero, 0x2E73 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2cde48u;
//     throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2CDE48 raw=0x49202E73");
 /* MITIGATED */
label_2cde4c:
    // 0x2cde4c: 0x726f206e  .word       0x726F206E                   # INVALID     $s3, $t7, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cde4cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CDE4C raw=0x726F206E");
 /* MITIGATED */
label_2cde50:
    // 0x2cde50: 0x20726564  addi        $s2, $v1, 0x6564
    ctx->pc = 0x2cde50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cde54:
    // 0x2cde54: 0x73206f74  .word       0x73206F74                   # psllh       $t5, $zero, 29 # 03200000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cde54u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 0), 29));
label_2cde58:
    // 0x2cde58: 0x20657661  addi        $a1, $v1, 0x7661
    ctx->pc = 0x2cde58u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30305, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cde5c:
    // 0x2cde5c: 0x65727458  daddiu      $s2, $t3, 0x7458
    ctx->pc = 0x2cde5cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29784);
label_2cde60:
    // 0x2cde60: 0x4c20656d  .word       0x4C20656D                   # INVALID     $at, $zero, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cde60u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CDE60 raw=0x4C20656D");
 /* MITIGATED */
label_2cde64:
    // 0x2cde64: 0x6e656765  ldr         $a1, 0x6765($s3)
    ctx->pc = 0x2cde64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cde68:
    // 0x2cde68: 0x64207364  daddiu      $zero, $at, 0x7364
    ctx->pc = 0x2cde68u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29540);
label_2cde6c:
    // 0x2cde6c: 0x2c617461  sltiu       $at, $v1, 0x7461
    ctx->pc = 0x2cde6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)29793) ? 1 : 0);
label_2cde70:
    // 0x2cde70: 0x20746120  addi        $s4, $v1, 0x6120
    ctx->pc = 0x2cde70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24864, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2cde74:
    // 0x2cde74: 0x7361656c  .word       0x7361656C                   # INVALID     $k1, $at, 0x656C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cde74u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x2CDE74 raw=0x7361656C");
 /* MITIGATED */
label_2cde78:
    // 0x2cde78: 0x64252074  daddiu      $a1, $at, 0x2074
    ctx->pc = 0x2cde78u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)8308);
label_2cde7c:
    // 0x2cde7c: 0x6f20424b  ldr         $zero, 0x424B($t9)
    ctx->pc = 0x2cde7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 16971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cde80:
    // 0x2cde80: 0x72662066  .word       0x72662066                   # INVALID     $s3, $a2, 0x2066 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cde80u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x2CDE80 raw=0x72662066");
 /* MITIGATED */
label_2cde84:
    // 0x2cde84: 0x73206565  .word       0x73206565                   # INVALID     $t9, $zero, 0x6565 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cde84u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CDE84 raw=0x73206565");
 /* MITIGATED */
label_2cde88:
    // 0x2cde88: 0x65636170  daddiu      $v1, $t3, 0x6170
    ctx->pc = 0x2cde88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24944);
label_2cde8c:
    // 0x2cde8c: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2cde8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cde90:
    // 0x2cde90: 0x75716572  .word       0x75716572                   # INVALID     $t3, $s1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cde90u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CDE90 raw=0x75716572");
 /* MITIGATED */
label_2cde94:
    // 0x2cde94: 0x64657269  daddiu      $a1, $v1, 0x7269
    ctx->pc = 0x2cde94u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29289);
label_2cde98:
    // 0x2cde98: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cde98u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cde9c:
    // 0x2cde9c: 0x0  nop
    ctx->pc = 0x2cde9cu;
    // NOP
label_2cdea0:
    // 0x2cdea0: 0x202ed0  .word       0x00202ED0                   # mfhi        $a1 # 002006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdea0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2cdea4:
    // 0x2cdea4: 0x202ef8  .word       0x00202EF8                   # dsll        $a1, $zero, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << 27);
label_2cdea8:
    // 0x2cdea8: 0x202f20  .word       0x00202F20                   # add         $a1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdea8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_2cdeac:
    // 0x2cdeac: 0x202f4c  .word       0x00202F4C                   # syscall     189 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdeacu;
    ctx->pc = 0x2CDEB0u;
runtime->handleSyscall(rdram, ctx, 0x80BDu);
label_2cdeb0:
    // 0x2cdeb0: 0x202f94  .word       0x00202F94                   # dsllv       $a1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdeb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (GPR_U32(ctx, 1) & 0x3F));
label_2cdeb4:
    // 0x2cdeb4: 0x202ff0  tge         $at, $zero, 191
    ctx->pc = 0x2cdeb4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cdeb8:
    // 0x2cdeb8: 0x203034  teq         $at, $zero, 192
    ctx->pc = 0x2cdeb8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cdebc:
    // 0x2cdebc: 0x20330c  .word       0x0020330C                   # syscall     204 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdebcu;
    ctx->pc = 0x2CDEC0u;
runtime->handleSyscall(rdram, ctx, 0x80CCu);
label_2cdec0:
    // 0x2cdec0: 0x203318  .word       0x00203318                   # mult        $a2, $at, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cdec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2cdec4:
    // 0x2cdec4: 0x203084  .word       0x00203084                   # sllv        $a2, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_2cdec8:
    // 0x2cdec8: 0x2030e4  .word       0x002030E4                   # and         $a2, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) & GPR_U64(ctx, 0));
label_2cdecc:
    // 0x2cdecc: 0x20312c  .word       0x0020312C                   # dadd        $a2, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdeccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_2cded0:
    // 0x2cded0: 0x20330c  .word       0x0020330C                   # syscall     204 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cded0u;
    ctx->pc = 0x2CDED4u;
runtime->handleSyscall(rdram, ctx, 0x80CCu);
label_2cded4:
    // 0x2cded4: 0x203318  .word       0x00203318                   # mult        $a2, $at, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cded4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2cded8:
    // 0x2cded8: 0x203184  .word       0x00203184                   # sllv        $a2, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cded8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_2cdedc:
    // 0x2cdedc: 0x203260  .word       0x00203260                   # add         $a2, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdedcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2cdee0:
    // 0x2cdee0: 0x2032a8  .word       0x002032A8                   # mfsa        $a2 # 00200280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cdee0u;
    SET_GPR_U32(ctx, 6, ctx->sa);
label_2cdee4:
    // 0x2cdee4: 0x20330c  .word       0x0020330C                   # syscall     204 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdee4u;
    ctx->pc = 0x2CDEE8u;
runtime->handleSyscall(rdram, ctx, 0x80CCu);
label_2cdee8:
    // 0x2cdee8: 0x203318  .word       0x00203318                   # mult        $a2, $at, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cdee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2cdeec:
    // 0x2cdeec: 0x0  nop
    ctx->pc = 0x2cdeecu;
    // NOP
label_2cdef0:
    // 0x2cdef0: 0x203384  .word       0x00203384                   # sllv        $a2, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_2cdef4:
    // 0x2cdef4: 0x203438  .word       0x00203438                   # dsll        $a2, $zero, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << 16);
label_2cdef8:
    // 0x2cdef8: 0x20352c  .word       0x0020352C                   # dadd        $a2, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdef8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_2cdefc:
    // 0x2cdefc: 0x203534  teq         $at, $zero, 212
    ctx->pc = 0x2cdefcu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cdf00:
    // 0x2cdf00: 0x20353c  .word       0x0020353C                   # dsll32      $a2, $zero, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 20));
label_2cdf04:
    // 0x2cdf04: 0x203544  .word       0x00203544                   # sllv        $a2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_2cdf08:
    // 0x2cdf08: 0x20354c  .word       0x0020354C                   # syscall     213 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf08u;
    ctx->pc = 0x2CDF0Cu;
runtime->handleSyscall(rdram, ctx, 0x80D5u);
label_2cdf0c:
    // 0x2cdf0c: 0x203554  .word       0x00203554                   # dsllv       $a2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 1) & 0x3F));
label_2cdf10:
    // 0x2cdf10: 0x20355c  .word       0x0020355C                   # dmult       $at, $zero # 00003540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CDF10 raw=0x0020355C");
 /* MITIGATED */
label_2cdf14:
    // 0x2cdf14: 0x203564  .word       0x00203564                   # and         $a2, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) & GPR_U64(ctx, 0));
label_2cdf18:
    // 0x2cdf18: 0x20356c  .word       0x0020356C                   # dadd        $a2, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf18u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_2cdf1c:
    // 0x2cdf1c: 0x203574  teq         $at, $zero, 213
    ctx->pc = 0x2cdf1cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cdf20:
    // 0x2cdf20: 0x20357c  .word       0x0020357C                   # dsll32      $a2, $zero, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (32 + 21));
label_2cdf24:
    // 0x2cdf24: 0x203584  .word       0x00203584                   # sllv        $a2, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_2cdf28:
    // 0x2cdf28: 0x20358c  .word       0x0020358C                   # syscall     214 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf28u;
    ctx->pc = 0x2CDF2Cu;
runtime->handleSyscall(rdram, ctx, 0x80D6u);
label_2cdf2c:
    // 0x2cdf2c: 0x203594  .word       0x00203594                   # dsllv       $a2, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) << (GPR_U32(ctx, 1) & 0x3F));
label_2cdf30:
    // 0x2cdf30: 0x20359c  .word       0x0020359C                   # dmult       $at, $zero # 00003580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CDF30 raw=0x0020359C");
 /* MITIGATED */
label_2cdf34:
    // 0x2cdf34: 0x2035a4  .word       0x002035A4                   # and         $a2, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) & GPR_U64(ctx, 0));
label_2cdf38:
    // 0x2cdf38: 0x2035ac  .word       0x002035AC                   # dadd        $a2, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf38u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_2cdf3c:
    // 0x2cdf3c: 0x0  nop
    ctx->pc = 0x2cdf3cu;
    // NOP
label_2cdf40:
    // 0x2cdf40: 0x73252f  .word       0x0073252F                   # dsubu       $a0, $v1, $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
label_2cdf44:
    // 0x2cdf44: 0x0  nop
    ctx->pc = 0x2cdf44u;
    // NOP
label_2cdf48:
    // 0x2cdf48: 0x0  nop
    ctx->pc = 0x2cdf48u;
    // NOP
label_2cdf4c:
    // 0x2cdf4c: 0x0  nop
    ctx->pc = 0x2cdf4cu;
    // NOP
label_2cdf50:
    // 0x2cdf50: 0x4c534142  .word       0x4C534142                   # INVALID     $v0, $s3, 0x4142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdf50u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CDF50 raw=0x4C534142");
 /* MITIGATED */
label_2cdf54:
    // 0x2cdf54: 0x322d5355  andi        $t5, $s1, 0x5355
    ctx->pc = 0x2cdf54u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)21333);
label_2cdf58:
    // 0x2cdf58: 0x37373230  ori         $s7, $t9, 0x3230
    ctx->pc = 0x2cdf58u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)12848);
label_2cdf5c:
    // 0x2cdf5c: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2cdf60:
    if (ctx->pc == 0x2CDF60u) {
        ctx->pc = 0x2CDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF5Cu;
        // 0x2cdf60: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2CDF60 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDF64u;
        goto label_2cdf64;
    }
    ctx->pc = 0x2CDF5Cu;
    {
        const bool branch_taken_0x2cdf5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cdf5c) {
            ctx->pc = 0x2CDF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDF5Cu;
            // 0x2cdf60: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2CDF60 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E40C0u;
            return;
        }
    }
    ctx->pc = 0x2CDF64u;
label_2cdf64:
    // 0x2cdf64: 0x0  nop
    ctx->pc = 0x2cdf64u;
    // NOP
label_2cdf68:
    // 0x2cdf68: 0x2f73252f  sltiu       $s3, $k1, 0x252F
    ctx->pc = 0x2cdf68u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)9519) ? 1 : 0);
label_2cdf6c:
    // 0x2cdf6c: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cdf70:
    // 0x2cdf70: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x2cdf70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cdf74:
    // 0x2cdf74: 0x7379732e  .word       0x7379732E                   # INVALID     $k1, $t9, 0x732E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cdf74u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CDF74 raw=0x7379732E");
 /* MITIGATED */
label_2cdf78:
    // 0x2cdf78: 0x0  nop
    ctx->pc = 0x2cdf78u;
    // NOP
label_2cdf7c:
    // 0x2cdf7c: 0x0  nop
    ctx->pc = 0x2cdf7cu;
    // NOP
label_2cdf80:
    // 0x2cdf80: 0x6f73756d  ldr         $s3, 0x756D($k1)
    ctx->pc = 0x2cdf80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30061); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2cdf84:
    // 0x2cdf84: 0x63692e75  daddi       $t1, $k1, 0x2E75
    ctx->pc = 0x2cdf84u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)11893; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2cdf88:
    // 0x2cdf88: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdf88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2cdf8c:
    // 0x2cdf8c: 0x0  nop
    ctx->pc = 0x2cdf8cu;
    // NOP
label_2cdf90:
    // 0x2cdf90: 0x2f73252f  sltiu       $s3, $k1, 0x252F
    ctx->pc = 0x2cdf90u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)9519) ? 1 : 0);
label_2cdf94:
    // 0x2cdf94: 0x2a  slt         $zero, $zero, $zero
    ctx->pc = 0x2cdf94u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2cdf98:
    // 0x2cdf98: 0x0  nop
    ctx->pc = 0x2cdf98u;
    // NOP
label_2cdf9c:
    // 0x2cdf9c: 0x0  nop
    ctx->pc = 0x2cdf9cu;
    // NOP
label_2cdfa0:
    // 0x2cdfa0: 0x4c534142  .word       0x4C534142                   # INVALID     $v0, $s3, 0x4142 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cdfa0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CDFA0 raw=0x4C534142");
 /* MITIGATED */
label_2cdfa4:
    // 0x2cdfa4: 0x322d5355  andi        $t5, $s1, 0x5355
    ctx->pc = 0x2cdfa4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)21333);
label_2cdfa8:
    // 0x2cdfa8: 0x37313630  ori         $s1, $t9, 0x3630
    ctx->pc = 0x2cdfa8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)13872);
label_2cdfac:
    // 0x2cdfac: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL>
label_2cdfb0:
    if (ctx->pc == 0x2CDFB0u) {
        ctx->pc = 0x2CDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFACu;
        // 0x2cdfb0: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2CDFB0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CDFB4u;
        goto label_2cdfb4;
    }
    ctx->pc = 0x2CDFACu;
    {
        const bool branch_taken_0x2cdfac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cdfac) {
            ctx->pc = 0x2CDFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CDFACu;
            // 0x2cdfb0: 0x58585858  .word       0x58585858                   # blezl       $v0, . + 4 + (0x5858 << 2) # 00180000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2CDFB0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4110u;
            return;
        }
    }
    ctx->pc = 0x2CDFB4u;
label_2cdfb4:
    // 0x2cdfb4: 0x0  nop
    ctx->pc = 0x2cdfb4u;
    // NOP
label_2cdfb8:
    // 0x2cdfb8: 0x0  nop
    ctx->pc = 0x2cdfb8u;
    // NOP
label_2cdfbc:
    // 0x2cdfbc: 0x0  nop
    ctx->pc = 0x2cdfbcu;
    // NOP
label_2cdfc0:
    // 0x2cdfc0: 0x203fbc  .word       0x00203FBC                   # dsll32      $a3, $zero, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdfc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (32 + 30));
label_2cdfc4:
    // 0x2cdfc4: 0x203fdc  .word       0x00203FDC                   # dmult       $at, $zero # 00003FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdfc4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CDFC4 raw=0x00203FDC");
 /* MITIGATED */
label_2cdfc8:
    // 0x2cdfc8: 0x204004  sllv        $t0, $zero, $at
    ctx->pc = 0x2cdfc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_2cdfcc:
    // 0x2cdfcc: 0x20402c  dadd        $t0, $at, $zero
    ctx->pc = 0x2cdfccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_2cdfd0:
    // 0x2cdfd0: 0x204050  .word       0x00204050                   # mfhi        $t0 # 00200040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdfd0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2cdfd4:
    // 0x2cdfd4: 0x204070  tge         $at, $zero, 257
    ctx->pc = 0x2cdfd4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cdfd8:
    // 0x2cdfd8: 0x204090  .word       0x00204090                   # mfhi        $t0 # 00200080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdfd8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2cdfdc:
    // 0x2cdfdc: 0x2040b8  .word       0x002040B8                   # dsll        $t0, $zero, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdfdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << 2);
label_2cdfe0:
    // 0x2cdfe0: 0x2040e0  .word       0x002040E0                   # add         $t0, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdfe0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2cdfe4:
    // 0x2cdfe4: 0x204104  .word       0x00204104                   # sllv        $t0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdfe4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_2cdfe8:
    // 0x2cdfe8: 0x0  nop
    ctx->pc = 0x2cdfe8u;
    // NOP
label_2cdfec:
    // 0x2cdfec: 0x0  nop
    ctx->pc = 0x2cdfecu;
    // NOP
label_2cdff0:
    // 0x2cdff0: 0x20455c  .word       0x0020455C                   # dmult       $at, $zero # 00004540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdff0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CDFF0 raw=0x0020455C");
 /* MITIGATED */
label_2cdff4:
    // 0x2cdff4: 0x2044e0  .word       0x002044E0                   # add         $t0, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdff4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2cdff8:
    // 0x2cdff8: 0x2044f8  .word       0x002044F8                   # dsll        $t0, $zero, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cdff8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << 19);
label_2cdffc:
    // 0x2cdffc: 0x204508  .word       0x00204508                   # jr          $at # 00004500 <InstrIdType: CPU_SPECIAL>
label_2ce000:
    if (ctx->pc == 0x2CE000u) {
        ctx->pc = 0x2CE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFFCu;
        // 0x2ce000: 0x204520  .word       0x00204520                   # add         $t0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE004u;
        goto label_2ce004;
    }
    ctx->pc = 0x2CDFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFFCu;
        // 0x2ce000: 0x204520  .word       0x00204520                   # add         $t0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDFFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE004u;
label_2ce004:
    // 0x2ce004: 0x204538  .word       0x00204538                   # dsll        $t0, $zero, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce004u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << 20);
label_2ce008:
    // 0x2ce008: 0x204550  .word       0x00204550                   # mfhi        $t0 # 00200540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce008u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2ce00c:
    // 0x2ce00c: 0x0  nop
    ctx->pc = 0x2ce00cu;
    // NOP
label_2ce010:
    // 0x2ce010: 0x206148  .word       0x00206148                   # jr          $at # 00006140 <InstrIdType: CPU_SPECIAL>
label_2ce014:
    if (ctx->pc == 0x2CE014u) {
        ctx->pc = 0x2CE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE010u;
        // 0x2ce014: 0x206170  tge         $at, $zero, 389 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CE018u;
        goto label_2ce018;
    }
    ctx->pc = 0x2CE010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x2CE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE010u;
        // 0x2ce014: 0x206170  tge         $at, $zero, 389 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE010u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE018u;
label_2ce018:
    // 0x2ce018: 0x20619c  .word       0x0020619C                   # dmult       $at, $zero # 00006180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce018u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2CE018 raw=0x0020619C");
 /* MITIGATED */
label_2ce01c:
    // 0x2ce01c: 0x206244  .word       0x00206244                   # sllv        $t4, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce01cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 1) & 0x1F));
label_2ce020:
    // 0x2ce020: 0x2062a8  .word       0x002062A8                   # mfsa        $t4 # 00200280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ce020u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_2ce024:
    // 0x2ce024: 0x2062d0  .word       0x002062D0                   # mfhi        $t4 # 002002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce024u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2ce028:
    // 0x2ce028: 0x0  nop
    ctx->pc = 0x2ce028u;
    // NOP
label_2ce02c:
    // 0x2ce02c: 0x0  nop
    ctx->pc = 0x2ce02cu;
    // NOP
label_2ce030:
    // 0x2ce030: 0x643525  .word       0x00643525                   # or          $a2, $v1, $a0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2ce034:
    // 0x2ce034: 0x0  nop
    ctx->pc = 0x2ce034u;
    // NOP
label_2ce038:
    // 0x2ce038: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce038u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2ce03c:
    // 0x2ce03c: 0x0  nop
    ctx->pc = 0x2ce03cu;
    // NOP
label_2ce040:
    // 0x2ce040: 0x64252f  .word       0x0064252F                   # dsubu       $a0, $v1, $a0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_2ce044:
    // 0x2ce044: 0x0  nop
    ctx->pc = 0x2ce044u;
    // NOP
label_2ce048:
    // 0x2ce048: 0x0  nop
    ctx->pc = 0x2ce048u;
    // NOP
label_2ce04c:
    // 0x2ce04c: 0x0  nop
    ctx->pc = 0x2ce04cu;
    // NOP
label_2ce050:
    // 0x2ce050: 0x252f6425  addiu       $t7, $t1, 0x6425
    ctx->pc = 0x2ce050u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_2ce054:
    // 0x2ce054: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ce054u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2ce058:
    // 0x2ce058: 0x0  nop
    ctx->pc = 0x2ce058u;
    // NOP
label_2ce05c:
    // 0x2ce05c: 0x0  nop
    ctx->pc = 0x2ce05cu;
    // NOP
label_2ce060:
    // 0x2ce060: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2ce060u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ce064:
    // 0x2ce064: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x2ce064u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2ce068:
    // 0x2ce068: 0x73616820  madd1       $t5, $k1, $at
    ctx->pc = 0x2ce068u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2ce06c:
    // 0x2ce06c: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ce06cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CE06C raw=0x746F6E20");
 /* MITIGATED */
    ctx->pc = 0x2ce070u;
    return;
}

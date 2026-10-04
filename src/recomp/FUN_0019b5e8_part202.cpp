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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part202(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fd838u: goto label_1fd838;
        case 0x1fd83cu: goto label_1fd83c;
        case 0x1fd840u: goto label_1fd840;
        case 0x1fd844u: goto label_1fd844;
        case 0x1fd848u: goto label_1fd848;
        case 0x1fd84cu: goto label_1fd84c;
        case 0x1fd850u: goto label_1fd850;
        case 0x1fd854u: goto label_1fd854;
        case 0x1fd858u: goto label_1fd858;
        case 0x1fd85cu: goto label_1fd85c;
        case 0x1fd860u: goto label_1fd860;
        case 0x1fd864u: goto label_1fd864;
        case 0x1fd868u: goto label_1fd868;
        case 0x1fd86cu: goto label_1fd86c;
        case 0x1fd870u: goto label_1fd870;
        case 0x1fd874u: goto label_1fd874;
        case 0x1fd878u: goto label_1fd878;
        case 0x1fd87cu: goto label_1fd87c;
        case 0x1fd880u: goto label_1fd880;
        case 0x1fd884u: goto label_1fd884;
        case 0x1fd888u: goto label_1fd888;
        case 0x1fd88cu: goto label_1fd88c;
        case 0x1fd890u: goto label_1fd890;
        case 0x1fd894u: goto label_1fd894;
        case 0x1fd898u: goto label_1fd898;
        case 0x1fd89cu: goto label_1fd89c;
        case 0x1fd8a0u: goto label_1fd8a0;
        case 0x1fd8a4u: goto label_1fd8a4;
        case 0x1fd8a8u: goto label_1fd8a8;
        case 0x1fd8acu: goto label_1fd8ac;
        case 0x1fd8b0u: goto label_1fd8b0;
        case 0x1fd8b4u: goto label_1fd8b4;
        case 0x1fd8b8u: goto label_1fd8b8;
        case 0x1fd8bcu: goto label_1fd8bc;
        case 0x1fd8c0u: goto label_1fd8c0;
        case 0x1fd8c4u: goto label_1fd8c4;
        case 0x1fd8c8u: goto label_1fd8c8;
        case 0x1fd8ccu: goto label_1fd8cc;
        case 0x1fd8d0u: goto label_1fd8d0;
        case 0x1fd8d4u: goto label_1fd8d4;
        case 0x1fd8d8u: goto label_1fd8d8;
        case 0x1fd8dcu: goto label_1fd8dc;
        case 0x1fd8e0u: goto label_1fd8e0;
        case 0x1fd8e4u: goto label_1fd8e4;
        case 0x1fd8e8u: goto label_1fd8e8;
        case 0x1fd8ecu: goto label_1fd8ec;
        case 0x1fd8f0u: goto label_1fd8f0;
        case 0x1fd8f4u: goto label_1fd8f4;
        case 0x1fd8f8u: goto label_1fd8f8;
        case 0x1fd8fcu: goto label_1fd8fc;
        case 0x1fd900u: goto label_1fd900;
        case 0x1fd904u: goto label_1fd904;
        case 0x1fd908u: goto label_1fd908;
        case 0x1fd90cu: goto label_1fd90c;
        case 0x1fd910u: goto label_1fd910;
        case 0x1fd914u: goto label_1fd914;
        case 0x1fd918u: goto label_1fd918;
        case 0x1fd91cu: goto label_1fd91c;
        case 0x1fd920u: goto label_1fd920;
        case 0x1fd924u: goto label_1fd924;
        case 0x1fd928u: goto label_1fd928;
        case 0x1fd92cu: goto label_1fd92c;
        case 0x1fd930u: goto label_1fd930;
        case 0x1fd934u: goto label_1fd934;
        case 0x1fd938u: goto label_1fd938;
        case 0x1fd93cu: goto label_1fd93c;
        case 0x1fd940u: goto label_1fd940;
        case 0x1fd944u: goto label_1fd944;
        case 0x1fd948u: goto label_1fd948;
        case 0x1fd94cu: goto label_1fd94c;
        case 0x1fd950u: goto label_1fd950;
        case 0x1fd954u: goto label_1fd954;
        case 0x1fd958u: goto label_1fd958;
        case 0x1fd95cu: goto label_1fd95c;
        case 0x1fd960u: goto label_1fd960;
        case 0x1fd964u: goto label_1fd964;
        case 0x1fd968u: goto label_1fd968;
        case 0x1fd96cu: goto label_1fd96c;
        case 0x1fd970u: goto label_1fd970;
        case 0x1fd974u: goto label_1fd974;
        case 0x1fd978u: goto label_1fd978;
        case 0x1fd97cu: goto label_1fd97c;
        case 0x1fd980u: goto label_1fd980;
        case 0x1fd984u: goto label_1fd984;
        case 0x1fd988u: goto label_1fd988;
        case 0x1fd98cu: goto label_1fd98c;
        case 0x1fd990u: goto label_1fd990;
        case 0x1fd994u: goto label_1fd994;
        case 0x1fd998u: goto label_1fd998;
        case 0x1fd99cu: goto label_1fd99c;
        case 0x1fd9a0u: goto label_1fd9a0;
        case 0x1fd9a4u: goto label_1fd9a4;
        case 0x1fd9a8u: goto label_1fd9a8;
        case 0x1fd9acu: goto label_1fd9ac;
        case 0x1fd9b0u: goto label_1fd9b0;
        case 0x1fd9b4u: goto label_1fd9b4;
        case 0x1fd9b8u: goto label_1fd9b8;
        case 0x1fd9bcu: goto label_1fd9bc;
        case 0x1fd9c0u: goto label_1fd9c0;
        case 0x1fd9c4u: goto label_1fd9c4;
        case 0x1fd9c8u: goto label_1fd9c8;
        case 0x1fd9ccu: goto label_1fd9cc;
        case 0x1fd9d0u: goto label_1fd9d0;
        case 0x1fd9d4u: goto label_1fd9d4;
        case 0x1fd9d8u: goto label_1fd9d8;
        case 0x1fd9dcu: goto label_1fd9dc;
        case 0x1fd9e0u: goto label_1fd9e0;
        case 0x1fd9e4u: goto label_1fd9e4;
        case 0x1fd9e8u: goto label_1fd9e8;
        case 0x1fd9ecu: goto label_1fd9ec;
        case 0x1fd9f0u: goto label_1fd9f0;
        case 0x1fd9f4u: goto label_1fd9f4;
        case 0x1fd9f8u: goto label_1fd9f8;
        case 0x1fd9fcu: goto label_1fd9fc;
        case 0x1fda00u: goto label_1fda00;
        case 0x1fda04u: goto label_1fda04;
        case 0x1fda08u: goto label_1fda08;
        case 0x1fda0cu: goto label_1fda0c;
        case 0x1fda10u: goto label_1fda10;
        case 0x1fda14u: goto label_1fda14;
        case 0x1fda18u: goto label_1fda18;
        case 0x1fda1cu: goto label_1fda1c;
        case 0x1fda20u: goto label_1fda20;
        case 0x1fda24u: goto label_1fda24;
        case 0x1fda28u: goto label_1fda28;
        case 0x1fda2cu: goto label_1fda2c;
        case 0x1fda30u: goto label_1fda30;
        case 0x1fda34u: goto label_1fda34;
        case 0x1fda38u: goto label_1fda38;
        case 0x1fda3cu: goto label_1fda3c;
        case 0x1fda40u: goto label_1fda40;
        case 0x1fda44u: goto label_1fda44;
        case 0x1fda48u: goto label_1fda48;
        case 0x1fda4cu: goto label_1fda4c;
        case 0x1fda50u: goto label_1fda50;
        case 0x1fda54u: goto label_1fda54;
        case 0x1fda58u: goto label_1fda58;
        case 0x1fda5cu: goto label_1fda5c;
        case 0x1fda60u: goto label_1fda60;
        case 0x1fda64u: goto label_1fda64;
        case 0x1fda68u: goto label_1fda68;
        case 0x1fda6cu: goto label_1fda6c;
        case 0x1fda70u: goto label_1fda70;
        case 0x1fda74u: goto label_1fda74;
        case 0x1fda78u: goto label_1fda78;
        case 0x1fda7cu: goto label_1fda7c;
        case 0x1fda80u: goto label_1fda80;
        case 0x1fda84u: goto label_1fda84;
        case 0x1fda88u: goto label_1fda88;
        case 0x1fda8cu: goto label_1fda8c;
        case 0x1fda90u: goto label_1fda90;
        case 0x1fda94u: goto label_1fda94;
        case 0x1fda98u: goto label_1fda98;
        case 0x1fda9cu: goto label_1fda9c;
        case 0x1fdaa0u: goto label_1fdaa0;
        case 0x1fdaa4u: goto label_1fdaa4;
        case 0x1fdaa8u: goto label_1fdaa8;
        case 0x1fdaacu: goto label_1fdaac;
        case 0x1fdab0u: goto label_1fdab0;
        case 0x1fdab4u: goto label_1fdab4;
        case 0x1fdab8u: goto label_1fdab8;
        case 0x1fdabcu: goto label_1fdabc;
        case 0x1fdac0u: goto label_1fdac0;
        case 0x1fdac4u: goto label_1fdac4;
        case 0x1fdac8u: goto label_1fdac8;
        case 0x1fdaccu: goto label_1fdacc;
        case 0x1fdad0u: goto label_1fdad0;
        case 0x1fdad4u: goto label_1fdad4;
        case 0x1fdad8u: goto label_1fdad8;
        case 0x1fdadcu: goto label_1fdadc;
        case 0x1fdae0u: goto label_1fdae0;
        case 0x1fdae4u: goto label_1fdae4;
        case 0x1fdae8u: goto label_1fdae8;
        case 0x1fdaecu: goto label_1fdaec;
        case 0x1fdaf0u: goto label_1fdaf0;
        case 0x1fdaf4u: goto label_1fdaf4;
        case 0x1fdaf8u: goto label_1fdaf8;
        case 0x1fdafcu: goto label_1fdafc;
        case 0x1fdb00u: goto label_1fdb00;
        case 0x1fdb04u: goto label_1fdb04;
        case 0x1fdb08u: goto label_1fdb08;
        case 0x1fdb0cu: goto label_1fdb0c;
        case 0x1fdb10u: goto label_1fdb10;
        case 0x1fdb14u: goto label_1fdb14;
        case 0x1fdb18u: goto label_1fdb18;
        case 0x1fdb1cu: goto label_1fdb1c;
        case 0x1fdb20u: goto label_1fdb20;
        case 0x1fdb24u: goto label_1fdb24;
        case 0x1fdb28u: goto label_1fdb28;
        case 0x1fdb2cu: goto label_1fdb2c;
        case 0x1fdb30u: goto label_1fdb30;
        case 0x1fdb34u: goto label_1fdb34;
        case 0x1fdb38u: goto label_1fdb38;
        case 0x1fdb3cu: goto label_1fdb3c;
        case 0x1fdb40u: goto label_1fdb40;
        case 0x1fdb44u: goto label_1fdb44;
        case 0x1fdb48u: goto label_1fdb48;
        case 0x1fdb4cu: goto label_1fdb4c;
        case 0x1fdb50u: goto label_1fdb50;
        case 0x1fdb54u: goto label_1fdb54;
        case 0x1fdb58u: goto label_1fdb58;
        case 0x1fdb5cu: goto label_1fdb5c;
        case 0x1fdb60u: goto label_1fdb60;
        case 0x1fdb64u: goto label_1fdb64;
        case 0x1fdb68u: goto label_1fdb68;
        case 0x1fdb6cu: goto label_1fdb6c;
        case 0x1fdb70u: goto label_1fdb70;
        case 0x1fdb74u: goto label_1fdb74;
        case 0x1fdb78u: goto label_1fdb78;
        case 0x1fdb7cu: goto label_1fdb7c;
        case 0x1fdb80u: goto label_1fdb80;
        case 0x1fdb84u: goto label_1fdb84;
        case 0x1fdb88u: goto label_1fdb88;
        case 0x1fdb8cu: goto label_1fdb8c;
        case 0x1fdb90u: goto label_1fdb90;
        case 0x1fdb94u: goto label_1fdb94;
        case 0x1fdb98u: goto label_1fdb98;
        case 0x1fdb9cu: goto label_1fdb9c;
        case 0x1fdba0u: goto label_1fdba0;
        case 0x1fdba4u: goto label_1fdba4;
        case 0x1fdba8u: goto label_1fdba8;
        case 0x1fdbacu: goto label_1fdbac;
        case 0x1fdbb0u: goto label_1fdbb0;
        case 0x1fdbb4u: goto label_1fdbb4;
        case 0x1fdbb8u: goto label_1fdbb8;
        case 0x1fdbbcu: goto label_1fdbbc;
        case 0x1fdbc0u: goto label_1fdbc0;
        case 0x1fdbc4u: goto label_1fdbc4;
        case 0x1fdbc8u: goto label_1fdbc8;
        case 0x1fdbccu: goto label_1fdbcc;
        case 0x1fdbd0u: goto label_1fdbd0;
        case 0x1fdbd4u: goto label_1fdbd4;
        case 0x1fdbd8u: goto label_1fdbd8;
        case 0x1fdbdcu: goto label_1fdbdc;
        case 0x1fdbe0u: goto label_1fdbe0;
        case 0x1fdbe4u: goto label_1fdbe4;
        case 0x1fdbe8u: goto label_1fdbe8;
        case 0x1fdbecu: goto label_1fdbec;
        case 0x1fdbf0u: goto label_1fdbf0;
        case 0x1fdbf4u: goto label_1fdbf4;
        case 0x1fdbf8u: goto label_1fdbf8;
        case 0x1fdbfcu: goto label_1fdbfc;
        case 0x1fdc00u: goto label_1fdc00;
        case 0x1fdc04u: goto label_1fdc04;
        case 0x1fdc08u: goto label_1fdc08;
        case 0x1fdc0cu: goto label_1fdc0c;
        case 0x1fdc10u: goto label_1fdc10;
        case 0x1fdc14u: goto label_1fdc14;
        case 0x1fdc18u: goto label_1fdc18;
        case 0x1fdc1cu: goto label_1fdc1c;
        case 0x1fdc20u: goto label_1fdc20;
        case 0x1fdc24u: goto label_1fdc24;
        case 0x1fdc28u: goto label_1fdc28;
        case 0x1fdc2cu: goto label_1fdc2c;
        case 0x1fdc30u: goto label_1fdc30;
        case 0x1fdc34u: goto label_1fdc34;
        case 0x1fdc38u: goto label_1fdc38;
        case 0x1fdc3cu: goto label_1fdc3c;
        case 0x1fdc40u: goto label_1fdc40;
        case 0x1fdc44u: goto label_1fdc44;
        case 0x1fdc48u: goto label_1fdc48;
        case 0x1fdc4cu: goto label_1fdc4c;
        case 0x1fdc50u: goto label_1fdc50;
        case 0x1fdc54u: goto label_1fdc54;
        case 0x1fdc58u: goto label_1fdc58;
        case 0x1fdc5cu: goto label_1fdc5c;
        case 0x1fdc60u: goto label_1fdc60;
        case 0x1fdc64u: goto label_1fdc64;
        case 0x1fdc68u: goto label_1fdc68;
        case 0x1fdc6cu: goto label_1fdc6c;
        case 0x1fdc70u: goto label_1fdc70;
        case 0x1fdc74u: goto label_1fdc74;
        case 0x1fdc78u: goto label_1fdc78;
        case 0x1fdc7cu: goto label_1fdc7c;
        case 0x1fdc80u: goto label_1fdc80;
        case 0x1fdc84u: goto label_1fdc84;
        case 0x1fdc88u: goto label_1fdc88;
        case 0x1fdc8cu: goto label_1fdc8c;
        case 0x1fdc90u: goto label_1fdc90;
        case 0x1fdc94u: goto label_1fdc94;
        case 0x1fdc98u: goto label_1fdc98;
        case 0x1fdc9cu: goto label_1fdc9c;
        case 0x1fdca0u: goto label_1fdca0;
        case 0x1fdca4u: goto label_1fdca4;
        case 0x1fdca8u: goto label_1fdca8;
        case 0x1fdcacu: goto label_1fdcac;
        case 0x1fdcb0u: goto label_1fdcb0;
        case 0x1fdcb4u: goto label_1fdcb4;
        case 0x1fdcb8u: goto label_1fdcb8;
        case 0x1fdcbcu: goto label_1fdcbc;
        case 0x1fdcc0u: goto label_1fdcc0;
        case 0x1fdcc4u: goto label_1fdcc4;
        case 0x1fdcc8u: goto label_1fdcc8;
        case 0x1fdcccu: goto label_1fdccc;
        case 0x1fdcd0u: goto label_1fdcd0;
        case 0x1fdcd4u: goto label_1fdcd4;
        case 0x1fdcd8u: goto label_1fdcd8;
        case 0x1fdcdcu: goto label_1fdcdc;
        case 0x1fdce0u: goto label_1fdce0;
        case 0x1fdce4u: goto label_1fdce4;
        case 0x1fdce8u: goto label_1fdce8;
        case 0x1fdcecu: goto label_1fdcec;
        case 0x1fdcf0u: goto label_1fdcf0;
        case 0x1fdcf4u: goto label_1fdcf4;
        case 0x1fdcf8u: goto label_1fdcf8;
        case 0x1fdcfcu: goto label_1fdcfc;
        case 0x1fdd00u: goto label_1fdd00;
        case 0x1fdd04u: goto label_1fdd04;
        case 0x1fdd08u: goto label_1fdd08;
        case 0x1fdd0cu: goto label_1fdd0c;
        case 0x1fdd10u: goto label_1fdd10;
        case 0x1fdd14u: goto label_1fdd14;
        case 0x1fdd18u: goto label_1fdd18;
        case 0x1fdd1cu: goto label_1fdd1c;
        case 0x1fdd20u: goto label_1fdd20;
        case 0x1fdd24u: goto label_1fdd24;
        case 0x1fdd28u: goto label_1fdd28;
        case 0x1fdd2cu: goto label_1fdd2c;
        case 0x1fdd30u: goto label_1fdd30;
        case 0x1fdd34u: goto label_1fdd34;
        case 0x1fdd38u: goto label_1fdd38;
        case 0x1fdd3cu: goto label_1fdd3c;
        case 0x1fdd40u: goto label_1fdd40;
        case 0x1fdd44u: goto label_1fdd44;
        case 0x1fdd48u: goto label_1fdd48;
        case 0x1fdd4cu: goto label_1fdd4c;
        case 0x1fdd50u: goto label_1fdd50;
        case 0x1fdd54u: goto label_1fdd54;
        case 0x1fdd58u: goto label_1fdd58;
        case 0x1fdd5cu: goto label_1fdd5c;
        case 0x1fdd60u: goto label_1fdd60;
        case 0x1fdd64u: goto label_1fdd64;
        case 0x1fdd68u: goto label_1fdd68;
        case 0x1fdd6cu: goto label_1fdd6c;
        case 0x1fdd70u: goto label_1fdd70;
        case 0x1fdd74u: goto label_1fdd74;
        case 0x1fdd78u: goto label_1fdd78;
        case 0x1fdd7cu: goto label_1fdd7c;
        case 0x1fdd80u: goto label_1fdd80;
        case 0x1fdd84u: goto label_1fdd84;
        case 0x1fdd88u: goto label_1fdd88;
        case 0x1fdd8cu: goto label_1fdd8c;
        case 0x1fdd90u: goto label_1fdd90;
        case 0x1fdd94u: goto label_1fdd94;
        case 0x1fdd98u: goto label_1fdd98;
        case 0x1fdd9cu: goto label_1fdd9c;
        case 0x1fdda0u: goto label_1fdda0;
        case 0x1fdda4u: goto label_1fdda4;
        case 0x1fdda8u: goto label_1fdda8;
        case 0x1fddacu: goto label_1fddac;
        case 0x1fddb0u: goto label_1fddb0;
        case 0x1fddb4u: goto label_1fddb4;
        case 0x1fddb8u: goto label_1fddb8;
        case 0x1fddbcu: goto label_1fddbc;
        case 0x1fddc0u: goto label_1fddc0;
        case 0x1fddc4u: goto label_1fddc4;
        case 0x1fddc8u: goto label_1fddc8;
        case 0x1fddccu: goto label_1fddcc;
        case 0x1fddd0u: goto label_1fddd0;
        case 0x1fddd4u: goto label_1fddd4;
        case 0x1fddd8u: goto label_1fddd8;
        case 0x1fdddcu: goto label_1fdddc;
        case 0x1fdde0u: goto label_1fdde0;
        case 0x1fdde4u: goto label_1fdde4;
        case 0x1fdde8u: goto label_1fdde8;
        case 0x1fddecu: goto label_1fddec;
        case 0x1fddf0u: goto label_1fddf0;
        case 0x1fddf4u: goto label_1fddf4;
        case 0x1fddf8u: goto label_1fddf8;
        case 0x1fddfcu: goto label_1fddfc;
        case 0x1fde00u: goto label_1fde00;
        case 0x1fde04u: goto label_1fde04;
        case 0x1fde08u: goto label_1fde08;
        case 0x1fde0cu: goto label_1fde0c;
        case 0x1fde10u: goto label_1fde10;
        case 0x1fde14u: goto label_1fde14;
        case 0x1fde18u: goto label_1fde18;
        case 0x1fde1cu: goto label_1fde1c;
        case 0x1fde20u: goto label_1fde20;
        case 0x1fde24u: goto label_1fde24;
        case 0x1fde28u: goto label_1fde28;
        case 0x1fde2cu: goto label_1fde2c;
        case 0x1fde30u: goto label_1fde30;
        case 0x1fde34u: goto label_1fde34;
        case 0x1fde38u: goto label_1fde38;
        case 0x1fde3cu: goto label_1fde3c;
        case 0x1fde40u: goto label_1fde40;
        case 0x1fde44u: goto label_1fde44;
        case 0x1fde48u: goto label_1fde48;
        case 0x1fde4cu: goto label_1fde4c;
        case 0x1fde50u: goto label_1fde50;
        case 0x1fde54u: goto label_1fde54;
        case 0x1fde58u: goto label_1fde58;
        case 0x1fde5cu: goto label_1fde5c;
        case 0x1fde60u: goto label_1fde60;
        case 0x1fde64u: goto label_1fde64;
        case 0x1fde68u: goto label_1fde68;
        case 0x1fde6cu: goto label_1fde6c;
        case 0x1fde70u: goto label_1fde70;
        case 0x1fde74u: goto label_1fde74;
        case 0x1fde78u: goto label_1fde78;
        case 0x1fde7cu: goto label_1fde7c;
        case 0x1fde80u: goto label_1fde80;
        case 0x1fde84u: goto label_1fde84;
        case 0x1fde88u: goto label_1fde88;
        case 0x1fde8cu: goto label_1fde8c;
        case 0x1fde90u: goto label_1fde90;
        case 0x1fde94u: goto label_1fde94;
        case 0x1fde98u: goto label_1fde98;
        case 0x1fde9cu: goto label_1fde9c;
        case 0x1fdea0u: goto label_1fdea0;
        case 0x1fdea4u: goto label_1fdea4;
        case 0x1fdea8u: goto label_1fdea8;
        case 0x1fdeacu: goto label_1fdeac;
        case 0x1fdeb0u: goto label_1fdeb0;
        case 0x1fdeb4u: goto label_1fdeb4;
        case 0x1fdeb8u: goto label_1fdeb8;
        case 0x1fdebcu: goto label_1fdebc;
        case 0x1fdec0u: goto label_1fdec0;
        case 0x1fdec4u: goto label_1fdec4;
        case 0x1fdec8u: goto label_1fdec8;
        case 0x1fdeccu: goto label_1fdecc;
        case 0x1fded0u: goto label_1fded0;
        case 0x1fded4u: goto label_1fded4;
        case 0x1fded8u: goto label_1fded8;
        case 0x1fdedcu: goto label_1fdedc;
        case 0x1fdee0u: goto label_1fdee0;
        case 0x1fdee4u: goto label_1fdee4;
        case 0x1fdee8u: goto label_1fdee8;
        case 0x1fdeecu: goto label_1fdeec;
        case 0x1fdef0u: goto label_1fdef0;
        case 0x1fdef4u: goto label_1fdef4;
        case 0x1fdef8u: goto label_1fdef8;
        case 0x1fdefcu: goto label_1fdefc;
        case 0x1fdf00u: goto label_1fdf00;
        case 0x1fdf04u: goto label_1fdf04;
        case 0x1fdf08u: goto label_1fdf08;
        case 0x1fdf0cu: goto label_1fdf0c;
        case 0x1fdf10u: goto label_1fdf10;
        case 0x1fdf14u: goto label_1fdf14;
        case 0x1fdf18u: goto label_1fdf18;
        case 0x1fdf1cu: goto label_1fdf1c;
        case 0x1fdf20u: goto label_1fdf20;
        case 0x1fdf24u: goto label_1fdf24;
        case 0x1fdf28u: goto label_1fdf28;
        case 0x1fdf2cu: goto label_1fdf2c;
        case 0x1fdf30u: goto label_1fdf30;
        case 0x1fdf34u: goto label_1fdf34;
        case 0x1fdf38u: goto label_1fdf38;
        case 0x1fdf3cu: goto label_1fdf3c;
        case 0x1fdf40u: goto label_1fdf40;
        case 0x1fdf44u: goto label_1fdf44;
        case 0x1fdf48u: goto label_1fdf48;
        case 0x1fdf4cu: goto label_1fdf4c;
        case 0x1fdf50u: goto label_1fdf50;
        case 0x1fdf54u: goto label_1fdf54;
        case 0x1fdf58u: goto label_1fdf58;
        case 0x1fdf5cu: goto label_1fdf5c;
        case 0x1fdf60u: goto label_1fdf60;
        case 0x1fdf64u: goto label_1fdf64;
        case 0x1fdf68u: goto label_1fdf68;
        case 0x1fdf6cu: goto label_1fdf6c;
        case 0x1fdf70u: goto label_1fdf70;
        case 0x1fdf74u: goto label_1fdf74;
        case 0x1fdf78u: goto label_1fdf78;
        case 0x1fdf7cu: goto label_1fdf7c;
        case 0x1fdf80u: goto label_1fdf80;
        case 0x1fdf84u: goto label_1fdf84;
        case 0x1fdf88u: goto label_1fdf88;
        case 0x1fdf8cu: goto label_1fdf8c;
        case 0x1fdf90u: goto label_1fdf90;
        case 0x1fdf94u: goto label_1fdf94;
        case 0x1fdf98u: goto label_1fdf98;
        case 0x1fdf9cu: goto label_1fdf9c;
        case 0x1fdfa0u: goto label_1fdfa0;
        case 0x1fdfa4u: goto label_1fdfa4;
        case 0x1fdfa8u: goto label_1fdfa8;
        case 0x1fdfacu: goto label_1fdfac;
        case 0x1fdfb0u: goto label_1fdfb0;
        case 0x1fdfb4u: goto label_1fdfb4;
        case 0x1fdfb8u: goto label_1fdfb8;
        case 0x1fdfbcu: goto label_1fdfbc;
        case 0x1fdfc0u: goto label_1fdfc0;
        case 0x1fdfc4u: goto label_1fdfc4;
        case 0x1fdfc8u: goto label_1fdfc8;
        case 0x1fdfccu: goto label_1fdfcc;
        case 0x1fdfd0u: goto label_1fdfd0;
        case 0x1fdfd4u: goto label_1fdfd4;
        case 0x1fdfd8u: goto label_1fdfd8;
        case 0x1fdfdcu: goto label_1fdfdc;
        case 0x1fdfe0u: goto label_1fdfe0;
        case 0x1fdfe4u: goto label_1fdfe4;
        case 0x1fdfe8u: goto label_1fdfe8;
        case 0x1fdfecu: goto label_1fdfec;
        case 0x1fdff0u: goto label_1fdff0;
        case 0x1fdff4u: goto label_1fdff4;
        case 0x1fdff8u: goto label_1fdff8;
        case 0x1fdffcu: goto label_1fdffc;
        case 0x1fe000u: goto label_1fe000;
        case 0x1fe004u: goto label_1fe004;
        default: return;
    }

label_1fd838:
    // 0x1fd838: 0x1f39821  addu        $s3, $t7, $s3
    ctx->pc = 0x1fd838u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
label_1fd83c:
    // 0x1fd83c: 0x139900  sll         $s3, $s3, 4
    ctx->pc = 0x1fd83cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1fd840:
    // 0x1fd840: 0x26736c00  addiu       $s3, $s3, 0x6C00
    ctx->pc = 0x1fd840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 27648));
label_1fd844:
    // 0x1fd844: 0xa5330730  sh          $s3, 0x730($t1)
    ctx->pc = 0x1fd844u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1840), (uint16_t)GPR_U32(ctx, 19));
label_1fd848:
    // 0x1fd848: 0xa52c0732  sh          $t4, 0x732($t1)
    ctx->pc = 0x1fd848u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1842), (uint16_t)GPR_U32(ctx, 12));
label_1fd84c:
    // 0x1fd84c: 0xad2e0734  sw          $t6, 0x734($t1)
    ctx->pc = 0x1fd84cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1844), GPR_U32(ctx, 14));
label_1fd850:
    // 0x1fd850: 0xa52d09a0  sh          $t5, 0x9A0($t1)
    ctx->pc = 0x1fd850u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2464), (uint16_t)GPR_U32(ctx, 13));
label_1fd854:
    // 0x1fd854: 0xa52a09a2  sh          $t2, 0x9A2($t1)
    ctx->pc = 0x1fd854u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2466), (uint16_t)GPR_U32(ctx, 10));
label_1fd858:
    // 0x1fd858: 0xad2e09a4  sw          $t6, 0x9A4($t1)
    ctx->pc = 0x1fd858u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2468), GPR_U32(ctx, 14));
label_1fd85c:
    // 0x1fd85c: 0x856a0010  lh          $t2, 0x10($t3)
    ctx->pc = 0x1fd85cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
label_1fd860:
    // 0x1fd860: 0x1ea5021  addu        $t2, $t7, $t2
    ctx->pc = 0x1fd860u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
label_1fd864:
    // 0x1fd864: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1fd864u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1fd868:
    // 0x1fd868: 0x254a6c00  addiu       $t2, $t2, 0x6C00
    ctx->pc = 0x1fd868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27648));
label_1fd86c:
    // 0x1fd86c: 0xa52a09b0  sh          $t2, 0x9B0($t1)
    ctx->pc = 0x1fd86cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2480), (uint16_t)GPR_U32(ctx, 10));
label_1fd870:
    // 0x1fd870: 0xa52c09b2  sh          $t4, 0x9B2($t1)
    ctx->pc = 0x1fd870u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2482), (uint16_t)GPR_U32(ctx, 12));
label_1fd874:
    // 0x1fd874: 0x1640ffd5  bnez        $s2, . + 4 + (-0x2B << 2)
label_1fd878:
    if (ctx->pc == 0x1FD878u) {
        ctx->pc = 0x1FD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD874u;
        // 0x1fd878: 0xad2e09b4  sw          $t6, 0x9B4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 2484), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD87Cu;
        goto label_1fd87c;
    }
    ctx->pc = 0x1FD874u;
    {
        const bool branch_taken_0x1fd874 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD874u;
        // 0x1fd878: 0xad2e09b4  sw          $t6, 0x9B4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 2484), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd874) {
            ctx->pc = 0x1FD7CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1fd7cc; return; }
        }
    }
    ctx->pc = 0x1FD87Cu;
label_1fd87c:
    // 0x1fd87c: 0x8f829050  lw          $v0, -0x6FB0($gp)
    ctx->pc = 0x1fd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938704)));
label_1fd880:
    // 0x1fd880: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1fd880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1fd884:
    // 0x1fd884: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1fd888:
    if (ctx->pc == 0x1FD888u) {
        ctx->pc = 0x1FD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD884u;
        // 0x1fd888: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD88Cu;
        goto label_1fd88c;
    }
    ctx->pc = 0x1FD884u;
    {
        const bool branch_taken_0x1fd884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD884u;
        // 0x1fd888: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd884) {
            ctx->pc = 0x1FD894u;
            goto label_1fd894;
        }
    }
    ctx->pc = 0x1FD88Cu;
label_1fd88c:
    // 0x1fd88c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fd890:
    if (ctx->pc == 0x1FD890u) {
        ctx->pc = 0x1FD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD88Cu;
        // 0x1fd890: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD894u;
        goto label_1fd894;
    }
    ctx->pc = 0x1FD88Cu;
    {
        const bool branch_taken_0x1fd88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD88Cu;
        // 0x1fd890: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd88c) {
            ctx->pc = 0x1FD89Cu;
            goto label_1fd89c;
        }
    }
    ctx->pc = 0x1FD894u;
label_1fd894:
    // 0x1fd894: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1fd894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fd898:
    // 0x1fd898: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fd898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fd89c:
    // 0x1fd89c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fd8a0:
    // 0x1fd8a0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1fd8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1fd8a4:
    // 0x1fd8a4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1fd8a8:
    if (ctx->pc == 0x1FD8A8u) {
        ctx->pc = 0x1FD8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8A4u;
        // 0x1fd8a8: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD8ACu;
        goto label_1fd8ac;
    }
    ctx->pc = 0x1FD8A4u;
    {
        const bool branch_taken_0x1fd8a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1FD8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8A4u;
        // 0x1fd8a8: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8a4) {
            ctx->pc = 0x1FD8B4u;
            goto label_1fd8b4;
        }
    }
    ctx->pc = 0x1FD8ACu;
label_1fd8ac:
    // 0x1fd8ac: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x1fd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1fd8b0:
    // 0x1fd8b0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1fd8b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1fd8b4:
    // 0x1fd8b4: 0x24640011  addiu       $a0, $v1, 0x11
    ctx->pc = 0x1fd8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 17));
label_1fd8b8:
    // 0x1fd8b8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1fd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1fd8bc:
    // 0x1fd8bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fd8c0:
    // 0x1fd8c0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1fd8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1fd8c4:
    // 0x1fd8c4: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1fd8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
label_1fd8c8:
    // 0x1fd8c8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1fd8cc:
    if (ctx->pc == 0x1FD8CCu) {
        ctx->pc = 0x1FD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8C8u;
        // 0x1fd8cc: 0x3193f  dsra32      $v1, $v1, 4 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD8D0u;
        goto label_1fd8d0;
    }
    ctx->pc = 0x1FD8C8u;
    {
        const bool branch_taken_0x1fd8c8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1FD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8C8u;
        // 0x1fd8cc: 0x3193f  dsra32      $v1, $v1, 4 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8c8) {
            ctx->pc = 0x1FD8D8u;
            goto label_1fd8d8;
        }
    }
    ctx->pc = 0x1FD8D0u;
label_1fd8d0:
    // 0x1fd8d0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1fd8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1fd8d4:
    // 0x1fd8d4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1fd8d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1fd8d8:
    // 0x1fd8d8: 0x2463002f  addiu       $v1, $v1, 0x2F
    ctx->pc = 0x1fd8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 47));
label_1fd8dc:
    // 0x1fd8dc: 0xa2040710  sb          $a0, 0x710($s0)
    ctx->pc = 0x1fd8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1808), (uint8_t)GPR_U32(ctx, 4));
label_1fd8e0:
    // 0x1fd8e0: 0xa2030711  sb          $v1, 0x711($s0)
    ctx->pc = 0x1fd8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1809), (uint8_t)GPR_U32(ctx, 3));
label_1fd8e4:
    // 0x1fd8e4: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1fd8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1fd8e8:
    // 0x1fd8e8: 0xa2030712  sb          $v1, 0x712($s0)
    ctx->pc = 0x1fd8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1810), (uint8_t)GPR_U32(ctx, 3));
label_1fd8ec:
    // 0x1fd8ec: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1fd8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1fd8f0:
    // 0x1fd8f0: 0xa2050713  sb          $a1, 0x713($s0)
    ctx->pc = 0x1fd8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1811), (uint8_t)GPR_U32(ctx, 5));
label_1fd8f4:
    // 0x1fd8f4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1fd8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd8f8:
    // 0x1fd8f8: 0xae060714  sw          $a2, 0x714($s0)
    ctx->pc = 0x1fd8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1812), GPR_U32(ctx, 6));
label_1fd8fc:
    // 0x1fd8fc: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x1fd8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1fd900:
    // 0x1fd900: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1fd900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1fd904:
    // 0x1fd904: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1fd904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1fd908:
    // 0x1fd908: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1fd90c:
    if (ctx->pc == 0x1FD90Cu) {
        ctx->pc = 0x1FD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD908u;
        // 0x1fd90c: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD910u;
        goto label_1fd910;
    }
    ctx->pc = 0x1FD908u;
    {
        const bool branch_taken_0x1fd908 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FD90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD908u;
        // 0x1fd90c: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd908) {
            ctx->pc = 0x1FD918u;
            goto label_1fd918;
        }
    }
    ctx->pc = 0x1FD910u;
label_1fd910:
    // 0x1fd910: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x1fd910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1fd914:
    // 0x1fd914: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1fd914u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_1fd918:
    // 0x1fd918: 0x24a80019  addiu       $t0, $a1, 0x19
    ctx->pc = 0x1fd918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 25));
label_1fd91c:
    // 0x1fd91c: 0xa20307b0  sb          $v1, 0x7B0($s0)
    ctx->pc = 0x1fd91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1968), (uint8_t)GPR_U32(ctx, 3));
label_1fd920:
    // 0x1fd920: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1fd920u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fd924:
    // 0x1fd924: 0xa20807b1  sb          $t0, 0x7B1($s0)
    ctx->pc = 0x1fd924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1969), (uint8_t)GPR_U32(ctx, 8));
label_1fd928:
    // 0x1fd928: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fd928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1fd92c:
    // 0x1fd92c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1fd92cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1fd930:
    // 0x1fd930: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1fd930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1fd934:
    // 0x1fd934: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x1fd934u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1fd938:
    // 0x1fd938: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1fd93c:
    if (ctx->pc == 0x1FD93Cu) {
        ctx->pc = 0x1FD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD938u;
        // 0x1fd93c: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD940u;
        goto label_1fd940;
    }
    ctx->pc = 0x1FD938u;
    {
        const bool branch_taken_0x1fd938 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD938u;
        // 0x1fd93c: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd938) {
            ctx->pc = 0x1FD948u;
            goto label_1fd948;
        }
    }
    ctx->pc = 0x1FD940u;
label_1fd940:
    // 0x1fd940: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x1fd940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1fd944:
    // 0x1fd944: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1fd944u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_1fd948:
    // 0x1fd948: 0x24a60025  addiu       $a2, $a1, 0x25
    ctx->pc = 0x1fd948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 37));
label_1fd94c:
    // 0x1fd94c: 0xa20607b2  sb          $a2, 0x7B2($s0)
    ctx->pc = 0x1fd94cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1970), (uint8_t)GPR_U32(ctx, 6));
label_1fd950:
    // 0x1fd950: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1fd950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1fd954:
    // 0x1fd954: 0xa20507b3  sb          $a1, 0x7B3($s0)
    ctx->pc = 0x1fd954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1971), (uint8_t)GPR_U32(ctx, 5));
label_1fd958:
    // 0x1fd958: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1fd958u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1fd95c:
    // 0x1fd95c: 0xae0607b4  sw          $a2, 0x7B4($s0)
    ctx->pc = 0x1fd95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1972), GPR_U32(ctx, 6));
label_1fd960:
    // 0x1fd960: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x1fd960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1fd964:
    // 0x1fd964: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x1fd964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1fd968:
    // 0x1fd968: 0xa2030850  sb          $v1, 0x850($s0)
    ctx->pc = 0x1fd968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2128), (uint8_t)GPR_U32(ctx, 3));
label_1fd96c:
    // 0x1fd96c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1fd970:
    if (ctx->pc == 0x1FD970u) {
        ctx->pc = 0x1FD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD96Cu;
        // 0x1fd970: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD974u;
        goto label_1fd974;
    }
    ctx->pc = 0x1FD96Cu;
    {
        const bool branch_taken_0x1fd96c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD96Cu;
        // 0x1fd970: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd96c) {
            ctx->pc = 0x1FD97Cu;
            goto label_1fd97c;
        }
    }
    ctx->pc = 0x1FD974u;
label_1fd974:
    // 0x1fd974: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x1fd974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1fd978:
    // 0x1fd978: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1fd978u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_1fd97c:
    // 0x1fd97c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1fd97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1fd980:
    // 0x1fd980: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1fd980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1fd984:
    // 0x1fd984: 0xa2050851  sb          $a1, 0x851($s0)
    ctx->pc = 0x1fd984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2129), (uint8_t)GPR_U32(ctx, 5));
label_1fd988:
    // 0x1fd988: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1fd988u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1fd98c:
    // 0x1fd98c: 0xa2080852  sb          $t0, 0x852($s0)
    ctx->pc = 0x1fd98cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2130), (uint8_t)GPR_U32(ctx, 8));
label_1fd990:
    // 0x1fd990: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1fd990u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fd994:
    // 0x1fd994: 0xa2070853  sb          $a3, 0x853($s0)
    ctx->pc = 0x1fd994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2131), (uint8_t)GPR_U32(ctx, 7));
label_1fd998:
    // 0x1fd998: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1fd998u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1fd99c:
    // 0x1fd99c: 0xae060854  sw          $a2, 0x854($s0)
    ctx->pc = 0x1fd99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 6));
label_1fd9a0:
    // 0x1fd9a0: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1fd9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd9a4:
    // 0x1fd9a4: 0xa20408f0  sb          $a0, 0x8F0($s0)
    ctx->pc = 0x1fd9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2288), (uint8_t)GPR_U32(ctx, 4));
label_1fd9a8:
    // 0x1fd9a8: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x1fd9a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
label_1fd9ac:
    // 0x1fd9ac: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_1fd9b0:
    if (ctx->pc == 0x1FD9B0u) {
        ctx->pc = 0x1FD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9ACu;
        // 0x1fd9b0: 0xa20308f1  sb          $v1, 0x8F1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2289), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD9B4u;
        goto label_1fd9b4;
    }
    ctx->pc = 0x1FD9ACu;
    {
        const bool branch_taken_0x1fd9ac = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1FD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9ACu;
        // 0x1fd9b0: 0xa20308f1  sb          $v1, 0x8F1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2289), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9ac) {
            ctx->pc = 0x1FD9BCu;
            goto label_1fd9bc;
        }
    }
    ctx->pc = 0x1FD9B4u;
label_1fd9b4:
    // 0x1fd9b4: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1fd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1fd9b8:
    // 0x1fd9b8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1fd9b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1fd9bc:
    // 0x1fd9bc: 0x2442001b  addiu       $v0, $v0, 0x1B
    ctx->pc = 0x1fd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27));
label_1fd9c0:
    // 0x1fd9c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fd9c4:
    // 0x1fd9c4: 0xa20208f2  sb          $v0, 0x8F2($s0)
    ctx->pc = 0x1fd9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2290), (uint8_t)GPR_U32(ctx, 2));
label_1fd9c8:
    // 0x1fd9c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd9cc:
    // 0x1fd9cc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1fd9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1fd9d0:
    // 0x1fd9d0: 0x240600ba  addiu       $a2, $zero, 0xBA
    ctx->pc = 0x1fd9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
label_1fd9d4:
    // 0x1fd9d4: 0xa20208f3  sb          $v0, 0x8F3($s0)
    ctx->pc = 0x1fd9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2291), (uint8_t)GPR_U32(ctx, 2));
label_1fd9d8:
    // 0x1fd9d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fd9d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd9dc:
    // 0x1fd9dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1fd9e0:
    // 0x1fd9e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fd9e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd9e4:
    // 0x1fd9e4: 0xae0208f4  sw          $v0, 0x8F4($s0)
    ctx->pc = 0x1fd9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2292), GPR_U32(ctx, 2));
label_1fd9e8:
    // 0x1fd9e8: 0xc066c72  jal         func_19B1C8
label_1fd9ec:
    if (ctx->pc == 0x1FD9ECu) {
        ctx->pc = 0x1FD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD9E8u;
        // 0x1fd9ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD9F0u;
        goto label_1fd9f0;
    }
    ctx->pc = 0x1FD9E8u;
    SET_GPR_U32(ctx, 31, 0x1FD9F0u);
    ctx->pc = 0x1FD9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD9E8u;
    // 0x1fd9ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1FD9E8u, 0x1FD9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD9F0u;
label_1fd9f0:
    // 0x1fd9f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fd9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fd9f4:
    // 0x1fd9f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fd9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fd9f8:
    // 0x1fd9f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fd9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd9fc:
    // 0x1fd9fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fda00:
    // 0x1fda00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fda00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fda04:
    // 0x1fda04: 0x3e00008  jr          $ra
label_1fda08:
    if (ctx->pc == 0x1FDA08u) {
        ctx->pc = 0x1FDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA04u;
        // 0x1fda08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA0Cu;
        goto label_1fda0c;
    }
    ctx->pc = 0x1FDA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA04u;
        // 0x1fda08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDA0Cu;
label_1fda0c:
    // 0x1fda0c: 0x0  nop
    ctx->pc = 0x1fda0cu;
    // NOP
label_1fda10:
    // 0x1fda10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fda10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1fda14:
    // 0x1fda14: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1fda14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fda18:
    // 0x1fda18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fda18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1fda1c:
    // 0x1fda1c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fda1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1fda20:
    // 0x1fda20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fda20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1fda24:
    // 0x1fda24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fda24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fda28:
    // 0x1fda28: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fda28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1fda2c:
    // 0x1fda2c: 0xaf829078  sw          $v0, -0x6F88($gp)
    ctx->pc = 0x1fda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938744), GPR_U32(ctx, 2));
label_1fda30:
    // 0x1fda30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fda30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fda34:
    // 0x1fda34: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1fda34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fda38:
    // 0x1fda38: 0xaf809084  sw          $zero, -0x6F7C($gp)
    ctx->pc = 0x1fda38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938756), GPR_U32(ctx, 0));
label_1fda3c:
    // 0x1fda3c: 0xaf80907c  sw          $zero, -0x6F84($gp)
    ctx->pc = 0x1fda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938748), GPR_U32(ctx, 0));
label_1fda40:
    // 0x1fda40: 0xaf829074  sw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1fda40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
label_1fda44:
    // 0x1fda44: 0xaf809070  sw          $zero, -0x6F90($gp)
    ctx->pc = 0x1fda44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 0));
label_1fda48:
    // 0x1fda48: 0xaf80906c  sw          $zero, -0x6F94($gp)
    ctx->pc = 0x1fda48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938732), GPR_U32(ctx, 0));
label_1fda4c:
    // 0x1fda4c: 0xaf809068  sw          $zero, -0x6F98($gp)
    ctx->pc = 0x1fda4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938728), GPR_U32(ctx, 0));
label_1fda50:
    // 0x1fda50: 0xaf809064  sw          $zero, -0x6F9C($gp)
    ctx->pc = 0x1fda50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938724), GPR_U32(ctx, 0));
label_1fda54:
    // 0x1fda54: 0xaf809060  sw          $zero, -0x6FA0($gp)
    ctx->pc = 0x1fda54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938720), GPR_U32(ctx, 0));
label_1fda58:
    // 0x1fda58: 0xaf80905c  sw          $zero, -0x6FA4($gp)
    ctx->pc = 0x1fda58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938716), GPR_U32(ctx, 0));
label_1fda5c:
    // 0x1fda5c: 0xaf809058  sw          $zero, -0x6FA8($gp)
    ctx->pc = 0x1fda5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938712), GPR_U32(ctx, 0));
label_1fda60:
    // 0x1fda60: 0xaf809080  sw          $zero, -0x6F80($gp)
    ctx->pc = 0x1fda60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 0));
label_1fda64:
    // 0x1fda64: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fda64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fda68:
    // 0x1fda68: 0x2405045f  addiu       $a1, $zero, 0x45F
    ctx->pc = 0x1fda68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1119));
label_1fda6c:
    // 0x1fda6c: 0x2442bee0  addiu       $v0, $v0, -0x4120
    ctx->pc = 0x1fda6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950624));
label_1fda70:
    // 0x1fda70: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x1fda70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1fda74:
    // 0x1fda74: 0xc05e234  jal         func_1788D0
label_1fda78:
    if (ctx->pc == 0x1FDA78u) {
        ctx->pc = 0x1FDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA74u;
        // 0x1fda78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDA7Cu;
        goto label_1fda7c;
    }
    ctx->pc = 0x1FDA74u;
    SET_GPR_U32(ctx, 31, 0x1FDA7Cu);
    ctx->pc = 0x1FDA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDA74u;
    // 0x1fda78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1FDA74u, 0x1FDA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA7Cu;
label_1fda7c:
    // 0x1fda7c: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1fda7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fda80:
    // 0x1fda80: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1fda80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1fda84:
    // 0x1fda84: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x1fda84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_1fda88:
    // 0x1fda88: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1fda88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1fda8c:
    // 0x1fda8c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1fda8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1fda90:
    // 0x1fda90: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1fda90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fda94:
    // 0x1fda94: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1fda94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1fda98:
    // 0x1fda98: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1fda98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1fda9c:
    // 0x1fda9c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1fda9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fdaa0:
    // 0x1fdaa0: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1fdaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fdaa4:
    // 0x1fdaa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fdaa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdaa8:
    // 0x1fdaa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fdaa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdaac:
    // 0x1fdaac: 0xc07c110  jal         func_1F0440
label_1fdab0:
    if (ctx->pc == 0x1FDAB0u) {
        ctx->pc = 0x1FDAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAACu;
        // 0x1fdab0: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDAB4u;
        goto label_1fdab4;
    }
    ctx->pc = 0x1FDAACu;
    SET_GPR_U32(ctx, 31, 0x1FDAB4u);
    ctx->pc = 0x1FDAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDAACu;
    // 0x1fdab0: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x1FDAB4u;
label_1fdab4:
    // 0x1fdab4: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1fdab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1fdab8:
    // 0x1fdab8: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1fdab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1fdabc:
    // 0x1fdabc: 0xc07091c  jal         func_1C2470
label_1fdac0:
    if (ctx->pc == 0x1FDAC0u) {
        ctx->pc = 0x1FDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDABCu;
        // 0x1fdac0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDAC4u;
        goto label_1fdac4;
    }
    ctx->pc = 0x1FDABCu;
    SET_GPR_U32(ctx, 31, 0x1FDAC4u);
    ctx->pc = 0x1FDAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDABCu;
    // 0x1fdac0: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1FDAC4u;
label_1fdac4:
    // 0x1fdac4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fdac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdac8:
    // 0x1fdac8: 0x26240380  addiu       $a0, $s1, 0x380
    ctx->pc = 0x1fdac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_1fdacc:
    // 0x1fdacc: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1fdaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1fdad0:
    // 0x1fdad0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fdad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fdad4:
    // 0x1fdad4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fdad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fdad8:
    // 0x1fdad8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fdad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fdadc:
    // 0x1fdadc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fdadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fdae0:
    // 0x1fdae0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fdae0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fdae4:
    // 0x1fdae4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fdae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fdae8:
    // 0x1fdae8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fdae8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdaec:
    // 0x1fdaec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdaf0:
    // 0x1fdaf0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fdaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fdaf4:
    // 0x1fdaf4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fdaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fdaf8:
    // 0x1fdaf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fdaf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdafc:
    // 0x1fdafc: 0xc05de30  jal         func_1778C0
label_1fdb00:
    if (ctx->pc == 0x1FDB00u) {
        ctx->pc = 0x1FDB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAFCu;
        // 0x1fdb00: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB04u;
        goto label_1fdb04;
    }
    ctx->pc = 0x1FDAFCu;
    SET_GPR_U32(ctx, 31, 0x1FDB04u);
    ctx->pc = 0x1FDB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDAFCu;
    // 0x1fdb00: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FDAFCu, 0x1FDB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB04u;
label_1fdb04:
    // 0x1fdb04: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1fdb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fdb08:
    // 0x1fdb08: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fdb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fdb0c:
    // 0x1fdb0c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1fdb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1fdb10:
    // 0x1fdb10: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fdb10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb14:
    // 0x1fdb14: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1fdb14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fdb18:
    // 0x1fdb18: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1fdb18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fdb1c:
    // 0x1fdb1c: 0xc054e5c  jal         func_153970
label_1fdb20:
    if (ctx->pc == 0x1FDB20u) {
        ctx->pc = 0x1FDB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB1Cu;
        // 0x1fdb20: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB24u;
        goto label_1fdb24;
    }
    ctx->pc = 0x1FDB1Cu;
    SET_GPR_U32(ctx, 31, 0x1FDB24u);
    ctx->pc = 0x1FDB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB1Cu;
    // 0x1fdb20: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FDB1Cu, 0x1FDB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB24u;
label_1fdb24:
    // 0x1fdb24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fdb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdb28:
    // 0x1fdb28: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1fdb28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1fdb2c:
    // 0x1fdb2c: 0x26240420  addiu       $a0, $s1, 0x420
    ctx->pc = 0x1fdb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
label_1fdb30:
    // 0x1fdb30: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fdb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fdb34:
    // 0x1fdb34: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fdb34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb38:
    // 0x1fdb38: 0xc054e74  jal         func_1539D0
label_1fdb3c:
    if (ctx->pc == 0x1FDB3Cu) {
        ctx->pc = 0x1FDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB38u;
        // 0x1fdb3c: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB40u;
        goto label_1fdb40;
    }
    ctx->pc = 0x1FDB38u;
    SET_GPR_U32(ctx, 31, 0x1FDB40u);
    ctx->pc = 0x1FDB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB38u;
    // 0x1fdb3c: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FDB38u, 0x1FDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB40u;
label_1fdb40:
    // 0x1fdb40: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1fdb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1fdb44:
    // 0x1fdb44: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1fdb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1fdb48:
    // 0x1fdb48: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1fdb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fdb4c:
    // 0x1fdb4c: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x1fdb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1fdb50:
    // 0x1fdb50: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1fdb50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fdb54:
    // 0x1fdb54: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1fdb54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fdb58:
    // 0x1fdb58: 0xc054e5c  jal         func_153970
label_1fdb5c:
    if (ctx->pc == 0x1FDB5Cu) {
        ctx->pc = 0x1FDB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB58u;
        // 0x1fdb5c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB60u;
        goto label_1fdb60;
    }
    ctx->pc = 0x1FDB58u;
    SET_GPR_U32(ctx, 31, 0x1FDB60u);
    ctx->pc = 0x1FDB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB58u;
    // 0x1fdb5c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FDB58u, 0x1FDB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB60u;
label_1fdb60:
    // 0x1fdb60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fdb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdb64:
    // 0x1fdb64: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1fdb64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1fdb68:
    // 0x1fdb68: 0x262412c0  addiu       $a0, $s1, 0x12C0
    ctx->pc = 0x1fdb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4800));
label_1fdb6c:
    // 0x1fdb6c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1fdb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1fdb70:
    // 0x1fdb70: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fdb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb74:
    // 0x1fdb74: 0xc054e74  jal         func_1539D0
label_1fdb78:
    if (ctx->pc == 0x1FDB78u) {
        ctx->pc = 0x1FDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB74u;
        // 0x1fdb78: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDB7Cu;
        goto label_1fdb7c;
    }
    ctx->pc = 0x1FDB74u;
    SET_GPR_U32(ctx, 31, 0x1FDB7Cu);
    ctx->pc = 0x1FDB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB74u;
    // 0x1fdb78: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FDB74u, 0x1FDB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDB7Cu;
label_1fdb7c:
    // 0x1fdb7c: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1fdb7cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1fdb80:
    // 0x1fdb80: 0x26244380  addiu       $a0, $s1, 0x4380
    ctx->pc = 0x1fdb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17280));
label_1fdb84:
    // 0x1fdb84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fdb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fdb88:
    // 0x1fdb88: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fdb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fdb8c:
    // 0x1fdb8c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fdb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fdb90:
    // 0x1fdb90: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fdb90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fdb94:
    // 0x1fdb94: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fdb94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fdb98:
    // 0x1fdb98: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1fdb98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fdb9c:
    // 0x1fdb9c: 0xc0708ac  jal         func_1C22B0
label_1fdba0:
    if (ctx->pc == 0x1FDBA0u) {
        ctx->pc = 0x1FDBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDB9Cu;
        // 0x1fdba0: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBA4u;
        goto label_1fdba4;
    }
    ctx->pc = 0x1FDB9Cu;
    SET_GPR_U32(ctx, 31, 0x1FDBA4u);
    ctx->pc = 0x1FDBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDB9Cu;
    // 0x1fdba0: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FDBA4u;
label_1fdba4:
    // 0x1fdba4: 0xc070834  jal         func_1C20D0
label_1fdba8:
    if (ctx->pc == 0x1FDBA8u) {
        ctx->pc = 0x1FDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBA4u;
        // 0x1fdba8: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBACu;
        goto label_1fdbac;
    }
    ctx->pc = 0x1FDBA4u;
    SET_GPR_U32(ctx, 31, 0x1FDBACu);
    ctx->pc = 0x1FDBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDBA4u;
    // 0x1fdba8: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FDBACu;
label_1fdbac:
    // 0x1fdbac: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1fdbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fdbb0:
    // 0x1fdbb0: 0x26244560  addiu       $a0, $s1, 0x4560
    ctx->pc = 0x1fdbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 17760));
label_1fdbb4:
    // 0x1fdbb4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1fdbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1fdbb8:
    // 0x1fdbb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fdbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fdbbc:
    // 0x1fdbbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fdbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fdbc0:
    // 0x1fdbc0: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fdbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fdbc4:
    // 0x1fdbc4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1fdbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1fdbc8:
    // 0x1fdbc8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fdbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fdbcc:
    // 0x1fdbcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fdbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdbd0:
    // 0x1fdbd0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fdbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fdbd4:
    // 0x1fdbd4: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1fdbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1fdbd8:
    // 0x1fdbd8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fdbd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fdbdc:
    // 0x1fdbdc: 0x24090298  addiu       $t1, $zero, 0x298
    ctx->pc = 0x1fdbdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
label_1fdbe0:
    // 0x1fdbe0: 0x240a00c8  addiu       $t2, $zero, 0xC8
    ctx->pc = 0x1fdbe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1fdbe4:
    // 0x1fdbe4: 0xc05de30  jal         func_1778C0
label_1fdbe8:
    if (ctx->pc == 0x1FDBE8u) {
        ctx->pc = 0x1FDBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBE4u;
        // 0x1fdbe8: 0x240b0048  addiu       $t3, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBECu;
        goto label_1fdbec;
    }
    ctx->pc = 0x1FDBE4u;
    SET_GPR_U32(ctx, 31, 0x1FDBECu);
    ctx->pc = 0x1FDBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDBE4u;
    // 0x1fdbe8: 0x240b0048  addiu       $t3, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FDBE4u, 0x1FDBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBECu;
label_1fdbec:
    // 0x1fdbec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fdbecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fdbf0:
    // 0x1fdbf0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1fdbf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fdbf4:
    // 0x1fdbf4: 0x1460ff9b  bnez        $v1, . + 4 + (-0x65 << 2)
label_1fdbf8:
    if (ctx->pc == 0x1FDBF8u) {
        ctx->pc = 0x1FDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBF4u;
        // 0x1fdbf8: 0x26524600  addiu       $s2, $s2, 0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 17920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDBFCu;
        goto label_1fdbfc;
    }
    ctx->pc = 0x1FDBF4u;
    {
        const bool branch_taken_0x1fdbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBF4u;
        // 0x1fdbf8: 0x26524600  addiu       $s2, $s2, 0x4600 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 17920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdbf4) {
            ctx->pc = 0x1FDA64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fda64;
        }
    }
    ctx->pc = 0x1FDBFCu;
label_1fdbfc:
    // 0x1fdbfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fdbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fdc00:
    // 0x1fdc00: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1fdc00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fdc04:
    // 0x1fdc04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fdc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fdc08:
    // 0x1fdc08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fdc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fdc0c:
    // 0x1fdc0c: 0x3e00008  jr          $ra
label_1fdc10:
    if (ctx->pc == 0x1FDC10u) {
        ctx->pc = 0x1FDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC0Cu;
        // 0x1fdc10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDC14u;
        goto label_1fdc14;
    }
    ctx->pc = 0x1FDC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC0Cu;
        // 0x1fdc10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDC14u;
label_1fdc14:
    // 0x1fdc14: 0x0  nop
    ctx->pc = 0x1fdc14u;
    // NOP
label_1fdc18:
    // 0x1fdc18: 0x0  nop
    ctx->pc = 0x1fdc18u;
    // NOP
label_1fdc1c:
    // 0x1fdc1c: 0x0  nop
    ctx->pc = 0x1fdc1cu;
    // NOP
label_1fdc20:
    // 0x1fdc20: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1fdc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fdc24:
    // 0x1fdc24: 0xaf809084  sw          $zero, -0x6F7C($gp)
    ctx->pc = 0x1fdc24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938756), GPR_U32(ctx, 0));
label_1fdc28:
    // 0x1fdc28: 0xaf839078  sw          $v1, -0x6F88($gp)
    ctx->pc = 0x1fdc28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938744), GPR_U32(ctx, 3));
label_1fdc2c:
    // 0x1fdc2c: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1fdc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fdc30:
    // 0x1fdc30: 0xaf80907c  sw          $zero, -0x6F84($gp)
    ctx->pc = 0x1fdc30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938748), GPR_U32(ctx, 0));
label_1fdc34:
    // 0x1fdc34: 0xaf839074  sw          $v1, -0x6F8C($gp)
    ctx->pc = 0x1fdc34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 3));
label_1fdc38:
    // 0x1fdc38: 0xaf809070  sw          $zero, -0x6F90($gp)
    ctx->pc = 0x1fdc38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 0));
label_1fdc3c:
    // 0x1fdc3c: 0xaf80906c  sw          $zero, -0x6F94($gp)
    ctx->pc = 0x1fdc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938732), GPR_U32(ctx, 0));
label_1fdc40:
    // 0x1fdc40: 0xaf809068  sw          $zero, -0x6F98($gp)
    ctx->pc = 0x1fdc40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938728), GPR_U32(ctx, 0));
label_1fdc44:
    // 0x1fdc44: 0xaf809064  sw          $zero, -0x6F9C($gp)
    ctx->pc = 0x1fdc44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938724), GPR_U32(ctx, 0));
label_1fdc48:
    // 0x1fdc48: 0xaf809060  sw          $zero, -0x6FA0($gp)
    ctx->pc = 0x1fdc48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938720), GPR_U32(ctx, 0));
label_1fdc4c:
    // 0x1fdc4c: 0xaf80905c  sw          $zero, -0x6FA4($gp)
    ctx->pc = 0x1fdc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938716), GPR_U32(ctx, 0));
label_1fdc50:
    // 0x1fdc50: 0xaf809058  sw          $zero, -0x6FA8($gp)
    ctx->pc = 0x1fdc50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938712), GPR_U32(ctx, 0));
label_1fdc54:
    // 0x1fdc54: 0x3e00008  jr          $ra
label_1fdc58:
    if (ctx->pc == 0x1FDC58u) {
        ctx->pc = 0x1FDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC54u;
        // 0x1fdc58: 0xaf809080  sw          $zero, -0x6F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDC5Cu;
        goto label_1fdc5c;
    }
    ctx->pc = 0x1FDC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC54u;
        // 0x1fdc58: 0xaf809080  sw          $zero, -0x6F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDC5Cu;
label_1fdc5c:
    // 0x1fdc5c: 0x0  nop
    ctx->pc = 0x1fdc5cu;
    // NOP
label_1fdc60:
    // 0x1fdc60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fdc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdc64:
    // 0x1fdc64: 0xaf859078  sw          $a1, -0x6F88($gp)
    ctx->pc = 0x1fdc64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938744), GPR_U32(ctx, 5));
label_1fdc68:
    // 0x1fdc68: 0xaf839080  sw          $v1, -0x6F80($gp)
    ctx->pc = 0x1fdc68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938752), GPR_U32(ctx, 3));
label_1fdc6c:
    // 0x1fdc6c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1fdc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1fdc70:
    // 0x1fdc70: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1fdc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1fdc74:
    // 0x1fdc74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fdc74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1fdc78:
    // 0x1fdc78: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x1fdc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_1fdc7c:
    // 0x1fdc7c: 0xaf869074  sw          $a2, -0x6F8C($gp)
    ctx->pc = 0x1fdc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 6));
label_1fdc80:
    // 0x1fdc80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fdc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1fdc84:
    // 0x1fdc84: 0xaf849068  sw          $a0, -0x6F98($gp)
    ctx->pc = 0x1fdc84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938728), GPR_U32(ctx, 4));
label_1fdc88:
    // 0x1fdc88: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1fdc88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1fdc8c:
    // 0x1fdc8c: 0x90234a19  lbu         $v1, 0x4A19($at)
    ctx->pc = 0x1fdc8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18969)));
label_1fdc90:
    // 0x1fdc90: 0x28610063  slti        $at, $v1, 0x63
    ctx->pc = 0x1fdc90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)99) ? 1 : 0);
label_1fdc94:
    // 0x1fdc94: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1fdc98:
    if (ctx->pc == 0x1FDC98u) {
        ctx->pc = 0x1FDC9Cu;
        goto label_1fdc9c;
    }
    ctx->pc = 0x1FDC94u;
    {
        const bool branch_taken_0x1fdc94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc94) {
            ctx->pc = 0x1FDCA4u;
            goto label_1fdca4;
        }
    }
    ctx->pc = 0x1FDC9Cu;
label_1fdc9c:
    // 0x1fdc9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fdca0:
    if (ctx->pc == 0x1FDCA0u) {
        ctx->pc = 0x1FDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC9Cu;
        // 0x1fdca0: 0xaf839064  sw          $v1, -0x6F9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938724), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDCA4u;
        goto label_1fdca4;
    }
    ctx->pc = 0x1FDC9Cu;
    {
        const bool branch_taken_0x1fdc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDC9Cu;
        // 0x1fdca0: 0xaf839064  sw          $v1, -0x6F9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938724), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc9c) {
            ctx->pc = 0x1FDCACu;
            goto label_1fdcac;
        }
    }
    ctx->pc = 0x1FDCA4u;
label_1fdca4:
    // 0x1fdca4: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1fdca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1fdca8:
    // 0x1fdca8: 0xaf839064  sw          $v1, -0x6F9C($gp)
    ctx->pc = 0x1fdca8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938724), GPR_U32(ctx, 3));
label_1fdcac:
    // 0x1fdcac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1fdcacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1fdcb0:
    // 0x1fdcb0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1fdcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1fdcb4:
    // 0x1fdcb4: 0x2463a4b8  addiu       $v1, $v1, -0x5B48
    ctx->pc = 0x1fdcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943928));
label_1fdcb8:
    // 0x1fdcb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fdcbc:
    // 0x1fdcbc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1fdcbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1fdcc0:
    // 0x1fdcc0: 0xaf839060  sw          $v1, -0x6FA0($gp)
    ctx->pc = 0x1fdcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938720), GPR_U32(ctx, 3));
label_1fdcc4:
    // 0x1fdcc4: 0x3e00008  jr          $ra
label_1fdcc8:
    if (ctx->pc == 0x1FDCC8u) {
        ctx->pc = 0x1FDCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCC4u;
        // 0x1fdcc8: 0xaf879058  sw          $a3, -0x6FA8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938712), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDCCCu;
        goto label_1fdccc;
    }
    ctx->pc = 0x1FDCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCC4u;
        // 0x1fdcc8: 0xaf879058  sw          $a3, -0x6FA8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938712), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDCCCu;
label_1fdccc:
    // 0x1fdccc: 0x0  nop
    ctx->pc = 0x1fdcccu;
    // NOP
label_1fdcd0:
    // 0x1fdcd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fdcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdcd4:
    // 0x1fdcd4: 0xaf879078  sw          $a3, -0x6F88($gp)
    ctx->pc = 0x1fdcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938744), GPR_U32(ctx, 7));
label_1fdcd8:
    // 0x1fdcd8: 0xaf839084  sw          $v1, -0x6F7C($gp)
    ctx->pc = 0x1fdcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938756), GPR_U32(ctx, 3));
label_1fdcdc:
    // 0x1fdcdc: 0x63840  sll         $a3, $a2, 1
    ctx->pc = 0x1fdcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1fdce0:
    // 0x1fdce0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1fdce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1fdce4:
    // 0x1fdce4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fdce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1fdce8:
    // 0x1fdce8: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x1fdce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_1fdcec:
    // 0x1fdcec: 0xaf89907c  sw          $t1, -0x6F84($gp)
    ctx->pc = 0x1fdcecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938748), GPR_U32(ctx, 9));
label_1fdcf0:
    // 0x1fdcf0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1fdcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1fdcf4:
    // 0x1fdcf4: 0xaf889074  sw          $t0, -0x6F8C($gp)
    ctx->pc = 0x1fdcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 8));
label_1fdcf8:
    // 0x1fdcf8: 0xaf849070  sw          $a0, -0x6F90($gp)
    ctx->pc = 0x1fdcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938736), GPR_U32(ctx, 4));
label_1fdcfc:
    // 0x1fdcfc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1fdcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1fdd00:
    // 0x1fdd00: 0xaf85906c  sw          $a1, -0x6F94($gp)
    ctx->pc = 0x1fdd00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938732), GPR_U32(ctx, 5));
label_1fdd04:
    // 0x1fdd04: 0xaf869068  sw          $a2, -0x6F98($gp)
    ctx->pc = 0x1fdd04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938728), GPR_U32(ctx, 6));
label_1fdd08:
    // 0x1fdd08: 0x902339c1  lbu         $v1, 0x39C1($at)
    ctx->pc = 0x1fdd08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14785)));
label_1fdd0c:
    // 0x1fdd0c: 0x28610063  slti        $at, $v1, 0x63
    ctx->pc = 0x1fdd0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)99) ? 1 : 0);
label_1fdd10:
    // 0x1fdd10: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1fdd14:
    if (ctx->pc == 0x1FDD14u) {
        ctx->pc = 0x1FDD18u;
        goto label_1fdd18;
    }
    ctx->pc = 0x1FDD10u;
    {
        const bool branch_taken_0x1fdd10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd10) {
            ctx->pc = 0x1FDD20u;
            goto label_1fdd20;
        }
    }
    ctx->pc = 0x1FDD18u;
label_1fdd18:
    // 0x1fdd18: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fdd1c:
    if (ctx->pc == 0x1FDD1Cu) {
        ctx->pc = 0x1FDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD18u;
        // 0x1fdd1c: 0xaf839064  sw          $v1, -0x6F9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938724), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDD20u;
        goto label_1fdd20;
    }
    ctx->pc = 0x1FDD18u;
    {
        const bool branch_taken_0x1fdd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD18u;
        // 0x1fdd1c: 0xaf839064  sw          $v1, -0x6F9C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938724), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd18) {
            ctx->pc = 0x1FDD28u;
            goto label_1fdd28;
        }
    }
    ctx->pc = 0x1FDD20u;
label_1fdd20:
    // 0x1fdd20: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1fdd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1fdd24:
    // 0x1fdd24: 0xaf839064  sw          $v1, -0x6F9C($gp)
    ctx->pc = 0x1fdd24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938724), GPR_U32(ctx, 3));
label_1fdd28:
    // 0x1fdd28: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1fdd28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1fdd2c:
    // 0x1fdd2c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1fdd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1fdd30:
    // 0x1fdd30: 0x2463a238  addiu       $v1, $v1, -0x5DC8
    ctx->pc = 0x1fdd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943288));
label_1fdd34:
    // 0x1fdd34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fdd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fdd38:
    // 0x1fdd38: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1fdd38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1fdd3c:
    // 0x1fdd3c: 0xaf839060  sw          $v1, -0x6FA0($gp)
    ctx->pc = 0x1fdd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938720), GPR_U32(ctx, 3));
label_1fdd40:
    // 0x1fdd40: 0x3e00008  jr          $ra
label_1fdd44:
    if (ctx->pc == 0x1FDD44u) {
        ctx->pc = 0x1FDD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD40u;
        // 0x1fdd44: 0xaf8a9058  sw          $t2, -0x6FA8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938712), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDD48u;
        goto label_1fdd48;
    }
    ctx->pc = 0x1FDD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD40u;
        // 0x1fdd44: 0xaf8a9058  sw          $t2, -0x6FA8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938712), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDD48u;
label_1fdd48:
    // 0x1fdd48: 0x0  nop
    ctx->pc = 0x1fdd48u;
    // NOP
label_1fdd4c:
    // 0x1fdd4c: 0x0  nop
    ctx->pc = 0x1fdd4cu;
    // NOP
label_1fdd50:
    // 0x1fdd50: 0x8f83905c  lw          $v1, -0x6FA4($gp)
    ctx->pc = 0x1fdd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938716)));
label_1fdd54:
    // 0x1fdd54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fdd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1fdd58:
    // 0x1fdd58: 0x3e00008  jr          $ra
label_1fdd5c:
    if (ctx->pc == 0x1FDD5Cu) {
        ctx->pc = 0x1FDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD58u;
        // 0x1fdd5c: 0xaf83905c  sw          $v1, -0x6FA4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDD60u;
        goto label_1fdd60;
    }
    ctx->pc = 0x1FDD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD58u;
        // 0x1fdd5c: 0xaf83905c  sw          $v1, -0x6FA4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDD60u;
label_1fdd60:
    // 0x1fdd60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fdd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1fdd64:
    // 0x1fdd64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fdd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1fdd68:
    // 0x1fdd68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fdd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fdd6c:
    // 0x1fdd6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fdd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fdd70:
    // 0x1fdd70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fdd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fdd74:
    // 0x1fdd74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fdd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fdd78:
    // 0x1fdd78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fdd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fdd7c:
    // 0x1fdd7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fdd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fdd80:
    // 0x1fdd80: 0x8f839084  lw          $v1, -0x6F7C($gp)
    ctx->pc = 0x1fdd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938756)));
label_1fdd84:
    // 0x1fdd84: 0x106000fe  beqz        $v1, . + 4 + (0xFE << 2)
label_1fdd88:
    if (ctx->pc == 0x1FDD88u) {
        ctx->pc = 0x1FDD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD84u;
        // 0x1fdd88: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDD8Cu;
        goto label_1fdd8c;
    }
    ctx->pc = 0x1FDD84u;
    {
        const bool branch_taken_0x1fdd84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD84u;
        // 0x1fdd88: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd84) {
            ctx->pc = 0x1FE180u;
            { ctx->pc = 0x1fe180; return; }
        }
    }
    ctx->pc = 0x1FDD8Cu;
label_1fdd8c:
    // 0x1fdd8c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fdd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1fdd90:
    // 0x1fdd90: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x1fdd90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1fdd94:
    // 0x1fdd94: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fdd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fdd98:
    // 0x1fdd98: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1fdd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_1fdd9c:
    // 0x1fdd9c: 0x8f82907c  lw          $v0, -0x6F84($gp)
    ctx->pc = 0x1fdd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
label_1fdda0:
    // 0x1fdda0: 0x8f909078  lw          $s0, -0x6F88($gp)
    ctx->pc = 0x1fdda0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
label_1fdda4:
    // 0x1fdda4: 0x2463bee0  addiu       $v1, $v1, -0x4120
    ctx->pc = 0x1fdda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950624));
label_1fdda8:
    // 0x1fdda8: 0x8f919074  lw          $s1, -0x6F8C($gp)
    ctx->pc = 0x1fdda8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
label_1fddac:
    // 0x1fddac: 0x73140  sll         $a2, $a3, 5
    ctx->pc = 0x1fddacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1fddb0:
    // 0x1fddb0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1fddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1fddb4:
    // 0x1fddb4: 0xa6a821  addu        $s5, $a1, $a2
    ctx->pc = 0x1fddb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1fddb8:
    // 0x1fddb8: 0x872823  subu        $a1, $a0, $a3
    ctx->pc = 0x1fddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1fddbc:
    // 0x1fddbc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1fddbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1fddc0:
    // 0x1fddc0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1fddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1fddc4:
    // 0x1fddc4: 0x42240  sll         $a0, $a0, 9
    ctx->pc = 0x1fddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_1fddc8:
    // 0x1fddc8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1fddcc:
    if (ctx->pc == 0x1FDDCCu) {
        ctx->pc = 0x1FDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDC8u;
        // 0x1fddcc: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDD0u;
        goto label_1fddd0;
    }
    ctx->pc = 0x1FDDC8u;
    {
        const bool branch_taken_0x1fddc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDC8u;
        // 0x1fddcc: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddc8) {
            ctx->pc = 0x1FDDF8u;
            goto label_1fddf8;
        }
    }
    ctx->pc = 0x1FDDD0u;
label_1fddd0:
    // 0x1fddd0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1fddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1fddd4:
    // 0x1fddd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fddd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fddd8:
    // 0x1fddd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fddd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fdddc:
    // 0x1fdddc: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x1fdddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fdde0:
    // 0x1fdde0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1fdde0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1fdde4:
    // 0x1fdde4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fdde4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fdde8:
    // 0x1fdde8: 0xc07c17c  jal         func_1F05F0
label_1fddec:
    if (ctx->pc == 0x1FDDECu) {
        ctx->pc = 0x1FDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDE8u;
        // 0x1fddec: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDF0u;
        goto label_1fddf0;
    }
    ctx->pc = 0x1FDDE8u;
    SET_GPR_U32(ctx, 31, 0x1FDDF0u);
    ctx->pc = 0x1FDDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDDE8u;
    // 0x1fddec: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x1FDDF0u;
label_1fddf0:
    // 0x1fddf0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fddf4:
    if (ctx->pc == 0x1FDDF4u) {
        ctx->pc = 0x1FDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF0u;
        // 0x1fddf4: 0x8f82907c  lw          $v0, -0x6F84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDDF8u;
        goto label_1fddf8;
    }
    ctx->pc = 0x1FDDF0u;
    {
        const bool branch_taken_0x1fddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF0u;
        // 0x1fddf4: 0x8f82907c  lw          $v0, -0x6F84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddf0) {
            ctx->pc = 0x1FDE1Cu;
            goto label_1fde1c;
        }
    }
    ctx->pc = 0x1FDDF8u;
label_1fddf8:
    // 0x1fddf8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1fddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1fddfc:
    // 0x1fddfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fddfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fde00:
    // 0x1fde00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fde00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fde04:
    // 0x1fde04: 0x24070178  addiu       $a3, $zero, 0x178
    ctx->pc = 0x1fde04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_1fde08:
    // 0x1fde08: 0x240800a0  addiu       $t0, $zero, 0xA0
    ctx->pc = 0x1fde08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1fde0c:
    // 0x1fde0c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fde0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fde10:
    // 0x1fde10: 0xc07c17c  jal         func_1F05F0
label_1fde14:
    if (ctx->pc == 0x1FDE14u) {
        ctx->pc = 0x1FDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE10u;
        // 0x1fde14: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE18u;
        goto label_1fde18;
    }
    ctx->pc = 0x1FDE10u;
    SET_GPR_U32(ctx, 31, 0x1FDE18u);
    ctx->pc = 0x1FDE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE10u;
    // 0x1fde14: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F05F0u;
    { ctx->pc = 0x1f05f0; return; }
    ctx->pc = 0x1FDE18u;
label_1fde18:
    // 0x1fde18: 0x8f82907c  lw          $v0, -0x6F84($gp)
    ctx->pc = 0x1fde18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
label_1fde1c:
    // 0x1fde1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1fde20:
    if (ctx->pc == 0x1FDE20u) {
        ctx->pc = 0x1FDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE1Cu;
        // 0x1fde20: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE24u;
        goto label_1fde24;
    }
    ctx->pc = 0x1FDE1Cu;
    {
        const bool branch_taken_0x1fde1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE1Cu;
        // 0x1fde20: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde1c) {
            ctx->pc = 0x1FDE30u;
            goto label_1fde30;
        }
    }
    ctx->pc = 0x1FDE24u;
label_1fde24:
    // 0x1fde24: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1fde24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1fde28:
    // 0x1fde28: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fde2c:
    if (ctx->pc == 0x1FDE2Cu) {
        ctx->pc = 0x1FDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE28u;
        // 0x1fde2c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDE30u;
        goto label_1fde30;
    }
    ctx->pc = 0x1FDE28u;
    {
        const bool branch_taken_0x1fde28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE28u;
        // 0x1fde2c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde28) {
            ctx->pc = 0x1FDE34u;
            goto label_1fde34;
        }
    }
    ctx->pc = 0x1FDE30u;
label_1fde30:
    // 0x1fde30: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1fde30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1fde34:
    // 0x1fde34: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fde34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fde38:
    // 0x1fde38: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1fde38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fde3c:
    // 0x1fde3c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1fde3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1fde40:
    // 0x1fde40: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1fde40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1fde44:
    // 0x1fde44: 0xa6430400  sh          $v1, 0x400($s2)
    ctx->pc = 0x1fde44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1024), (uint16_t)GPR_U32(ctx, 3));
label_1fde48:
    // 0x1fde48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fde48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fde4c:
    // 0x1fde4c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1fde4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1fde50:
    // 0x1fde50: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x1fde50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1fde54:
    // 0x1fde54: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1fde54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1fde58:
    // 0x1fde58: 0x24a20090  addiu       $v0, $a1, 0x90
    ctx->pc = 0x1fde58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_1fde5c:
    // 0x1fde5c: 0xa6430402  sh          $v1, 0x402($s2)
    ctx->pc = 0x1fde5cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1026), (uint16_t)GPR_U32(ctx, 3));
label_1fde60:
    // 0x1fde60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fde60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fde64:
    // 0x1fde64: 0xae470404  sw          $a3, 0x404($s2)
    ctx->pc = 0x1fde64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1028), GPR_U32(ctx, 7));
label_1fde68:
    // 0x1fde68: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x1fde68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1fde6c:
    // 0x1fde6c: 0xa6440410  sh          $a0, 0x410($s2)
    ctx->pc = 0x1fde6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1040), (uint16_t)GPR_U32(ctx, 4));
label_1fde70:
    // 0x1fde70: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fde70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fde74:
    // 0x1fde74: 0xa6430412  sh          $v1, 0x412($s2)
    ctx->pc = 0x1fde74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1042), (uint16_t)GPR_U32(ctx, 3));
label_1fde78:
    // 0x1fde78: 0x24422ee0  addiu       $v0, $v0, 0x2EE0
    ctx->pc = 0x1fde78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12000));
label_1fde7c:
    // 0x1fde7c: 0xae470414  sw          $a3, 0x414($s2)
    ctx->pc = 0x1fde7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1044), GPR_U32(ctx, 7));
label_1fde80:
    // 0x1fde80: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1fde80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fde84:
    // 0x1fde84: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fde84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fde88:
    // 0x1fde88: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1fde88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fde8c:
    // 0x1fde8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fde8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fde90:
    // 0x1fde90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fde90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fde94:
    // 0x1fde94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fde94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fde98:
    // 0x1fde98: 0xc055148  jal         func_154520
label_1fde9c:
    if (ctx->pc == 0x1FDE9Cu) {
        ctx->pc = 0x1FDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE98u;
        // 0x1fde9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEA0u;
        goto label_1fdea0;
    }
    ctx->pc = 0x1FDE98u;
    SET_GPR_U32(ctx, 31, 0x1FDEA0u);
    ctx->pc = 0x1FDE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDE98u;
    // 0x1fde9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FDE98u, 0x1FDEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEA0u;
label_1fdea0:
    // 0x1fdea0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1fdea4:
    if (ctx->pc == 0x1FDEA4u) {
        ctx->pc = 0x1FDEA8u;
        goto label_1fdea8;
    }
    ctx->pc = 0x1FDEA0u;
    {
        const bool branch_taken_0x1fdea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdea0) {
            ctx->pc = 0x1FDEACu;
            goto label_1fdeac;
        }
    }
    ctx->pc = 0x1FDEA8u;
label_1fdea8:
    // 0x1fdea8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1fdea8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdeac:
    // 0x1fdeac: 0x8f82907c  lw          $v0, -0x6F84($gp)
    ctx->pc = 0x1fdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
label_1fdeb0:
    // 0x1fdeb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1fdeb4:
    if (ctx->pc == 0x1FDEB4u) {
        ctx->pc = 0x1FDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEB0u;
        // 0x1fdeb4: 0x260800b0  addiu       $t0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEB8u;
        goto label_1fdeb8;
    }
    ctx->pc = 0x1FDEB0u;
    {
        const bool branch_taken_0x1fdeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEB0u;
        // 0x1fdeb4: 0x260800b0  addiu       $t0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdeb0) {
            ctx->pc = 0x1FDEC4u;
            goto label_1fdec4;
        }
    }
    ctx->pc = 0x1FDEB8u;
label_1fdeb8:
    // 0x1fdeb8: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x1fdeb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1fdebc:
    // 0x1fdebc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fdec0:
    if (ctx->pc == 0x1FDEC0u) {
        ctx->pc = 0x1FDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEBCu;
        // 0x1fdec0: 0x262900a8  addiu       $t1, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEC4u;
        goto label_1fdec4;
    }
    ctx->pc = 0x1FDEBCu;
    {
        const bool branch_taken_0x1fdebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEBCu;
        // 0x1fdec0: 0x262900a8  addiu       $t1, $s1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdebc) {
            ctx->pc = 0x1FDEC8u;
            goto label_1fdec8;
        }
    }
    ctx->pc = 0x1FDEC4u;
label_1fdec4:
    // 0x1fdec4: 0x26290028  addiu       $t1, $s1, 0x28
    ctx->pc = 0x1fdec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_1fdec8:
    // 0x1fdec8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1fdec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1fdecc:
    // 0x1fdecc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1fdeccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fded0:
    // 0x1fded0: 0xf3280a  movz        $a1, $a3, $s3
    ctx->pc = 0x1fded0u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1fded4:
    // 0x1fded4: 0x340afe00  ori         $t2, $zero, 0xFE00
    ctx->pc = 0x1fded4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fded8:
    // 0x1fded8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fded8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fdedc:
    // 0x1fdedc: 0xc054e5c  jal         func_153970
label_1fdee0:
    if (ctx->pc == 0x1FDEE0u) {
        ctx->pc = 0x1FDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEDCu;
        // 0x1fdee0: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEE4u;
        goto label_1fdee4;
    }
    ctx->pc = 0x1FDEDCu;
    SET_GPR_U32(ctx, 31, 0x1FDEE4u);
    ctx->pc = 0x1FDEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEDCu;
    // 0x1fdee0: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FDEDCu, 0x1FDEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEE4u;
label_1fdee4:
    // 0x1fdee4: 0x8f839060  lw          $v1, -0x6FA0($gp)
    ctx->pc = 0x1fdee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
label_1fdee8:
    // 0x1fdee8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1fdee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fdeec:
    // 0x1fdeec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdef0:
    // 0x1fdef0: 0xc054e70  jal         func_1539C0
label_1fdef4:
    if (ctx->pc == 0x1FDEF4u) {
        ctx->pc = 0x1FDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDEF0u;
        // 0x1fdef4: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDEF8u;
        goto label_1fdef8;
    }
    ctx->pc = 0x1FDEF0u;
    SET_GPR_U32(ctx, 31, 0x1FDEF8u);
    ctx->pc = 0x1FDEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDEF0u;
    // 0x1fdef4: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539C0u, 0x1FDEF0u, 0x1FDEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDEF8u;
label_1fdef8:
    // 0x1fdef8: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fdef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fdefc:
    // 0x1fdefc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fdefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fdf00:
    // 0x1fdf00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fdf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdf04:
    // 0x1fdf04: 0x24422ee0  addiu       $v0, $v0, 0x2EE0
    ctx->pc = 0x1fdf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12000));
label_1fdf08:
    // 0x1fdf08: 0x26440420  addiu       $a0, $s2, 0x420
    ctx->pc = 0x1fdf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1056));
label_1fdf0c:
    // 0x1fdf0c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fdf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fdf10:
    // 0x1fdf10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fdf10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fdf14:
    // 0x1fdf14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fdf18:
    // 0x1fdf18: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fdf18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fdf1c:
    // 0x1fdf1c: 0xc054e74  jal         func_1539D0
label_1fdf20:
    if (ctx->pc == 0x1FDF20u) {
        ctx->pc = 0x1FDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF1Cu;
        // 0x1fdf20: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF24u;
        goto label_1fdf24;
    }
    ctx->pc = 0x1FDF1Cu;
    SET_GPR_U32(ctx, 31, 0x1FDF24u);
    ctx->pc = 0x1FDF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF1Cu;
    // 0x1fdf20: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FDF1Cu, 0x1FDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF24u;
label_1fdf24:
    // 0x1fdf24: 0x8f82907c  lw          $v0, -0x6F84($gp)
    ctx->pc = 0x1fdf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
label_1fdf28:
    // 0x1fdf28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1fdf2c:
    if (ctx->pc == 0x1FDF2Cu) {
        ctx->pc = 0x1FDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF28u;
        // 0x1fdf2c: 0x261300b0  addiu       $s3, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF30u;
        goto label_1fdf30;
    }
    ctx->pc = 0x1FDF28u;
    {
        const bool branch_taken_0x1fdf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF28u;
        // 0x1fdf2c: 0x261300b0  addiu       $s3, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf28) {
            ctx->pc = 0x1FDF3Cu;
            goto label_1fdf3c;
        }
    }
    ctx->pc = 0x1FDF30u;
label_1fdf30:
    // 0x1fdf30: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x1fdf30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1fdf34:
    // 0x1fdf34: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fdf38:
    if (ctx->pc == 0x1FDF38u) {
        ctx->pc = 0x1FDF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF34u;
        // 0x1fdf38: 0x263400c8  addiu       $s4, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF3Cu;
        goto label_1fdf3c;
    }
    ctx->pc = 0x1FDF34u;
    {
        const bool branch_taken_0x1fdf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF34u;
        // 0x1fdf38: 0x263400c8  addiu       $s4, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf34) {
            ctx->pc = 0x1FDF40u;
            goto label_1fdf40;
        }
    }
    ctx->pc = 0x1FDF3Cu;
label_1fdf3c:
    // 0x1fdf3c: 0x26340058  addiu       $s4, $s1, 0x58
    ctx->pc = 0x1fdf3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_1fdf40:
    // 0x1fdf40: 0x8f829060  lw          $v0, -0x6FA0($gp)
    ctx->pc = 0x1fdf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
label_1fdf44:
    // 0x1fdf44: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1fdf48:
    if (ctx->pc == 0x1FDF48u) {
        ctx->pc = 0x1FDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF44u;
        // 0x1fdf48: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF4Cu;
        goto label_1fdf4c;
    }
    ctx->pc = 0x1FDF44u;
    {
        const bool branch_taken_0x1fdf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF44u;
        // 0x1fdf48: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf44) {
            ctx->pc = 0x1FDFC8u;
            goto label_1fdfc8;
        }
    }
    ctx->pc = 0x1FDF4Cu;
label_1fdf4c:
    // 0x1fdf4c: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fdf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fdf50:
    // 0x1fdf50: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fdf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fdf54:
    // 0x1fdf54: 0x24422f80  addiu       $v0, $v0, 0x2F80
    ctx->pc = 0x1fdf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
label_1fdf58:
    // 0x1fdf58: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x1fdf58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1fdf5c:
    // 0x1fdf5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fdf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fdf60:
    // 0x1fdf60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fdf64:
    // 0x1fdf64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fdf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fdf68:
    // 0x1fdf68: 0xc055148  jal         func_154520
label_1fdf6c:
    if (ctx->pc == 0x1FDF6Cu) {
        ctx->pc = 0x1FDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF68u;
        // 0x1fdf6c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF70u;
        goto label_1fdf70;
    }
    ctx->pc = 0x1FDF68u;
    SET_GPR_U32(ctx, 31, 0x1FDF70u);
    ctx->pc = 0x1FDF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF68u;
    // 0x1fdf6c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FDF68u, 0x1FDF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF70u;
label_1fdf70:
    // 0x1fdf70: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1fdf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1fdf74:
    // 0x1fdf74: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1fdf74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fdf78:
    // 0x1fdf78: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fdf78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf7c:
    // 0x1fdf7c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1fdf7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fdf80:
    // 0x1fdf80: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1fdf80u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1fdf84:
    // 0x1fdf84: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fdf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fdf88:
    // 0x1fdf88: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1fdf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1fdf8c:
    // 0x1fdf8c: 0xc054e5c  jal         func_153970
label_1fdf90:
    if (ctx->pc == 0x1FDF90u) {
        ctx->pc = 0x1FDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF8Cu;
        // 0x1fdf90: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDF94u;
        goto label_1fdf94;
    }
    ctx->pc = 0x1FDF8Cu;
    SET_GPR_U32(ctx, 31, 0x1FDF94u);
    ctx->pc = 0x1FDF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDF8Cu;
    // 0x1fdf90: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FDF8Cu, 0x1FDF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDF94u;
label_1fdf94:
    // 0x1fdf94: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fdf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fdf98:
    // 0x1fdf98: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fdf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fdf9c:
    // 0x1fdf9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fdf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdfa0:
    // 0x1fdfa0: 0x24422f80  addiu       $v0, $v0, 0x2F80
    ctx->pc = 0x1fdfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
label_1fdfa4:
    // 0x1fdfa4: 0x264412c0  addiu       $a0, $s2, 0x12C0
    ctx->pc = 0x1fdfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4800));
label_1fdfa8:
    // 0x1fdfa8: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1fdfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1fdfac:
    // 0x1fdfac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fdfacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fdfb0:
    // 0x1fdfb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fdfb4:
    // 0x1fdfb4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fdfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fdfb8:
    // 0x1fdfb8: 0xc054e74  jal         func_1539D0
label_1fdfbc:
    if (ctx->pc == 0x1FDFBCu) {
        ctx->pc = 0x1FDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFB8u;
        // 0x1fdfbc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFC0u;
        goto label_1fdfc0;
    }
    ctx->pc = 0x1FDFB8u;
    SET_GPR_U32(ctx, 31, 0x1FDFC0u);
    ctx->pc = 0x1FDFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDFB8u;
    // 0x1fdfbc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FDFB8u, 0x1FDFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDFC0u;
label_1fdfc0:
    // 0x1fdfc0: 0x10000014  b           . + 4 + (0x14 << 2)
label_1fdfc4:
    if (ctx->pc == 0x1FDFC4u) {
        ctx->pc = 0x1FDFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFC0u;
        // 0x1fdfc4: 0x8f829060  lw          $v0, -0x6FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFC8u;
        goto label_1fdfc8;
    }
    ctx->pc = 0x1FDFC0u;
    {
        const bool branch_taken_0x1fdfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFC0u;
        // 0x1fdfc4: 0x8f829060  lw          $v0, -0x6FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfc0) {
            ctx->pc = 0x1FE014u;
            { ctx->pc = 0x1fe014; return; }
        }
    }
    ctx->pc = 0x1FDFC8u;
label_1fdfc8:
    // 0x1fdfc8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1fdfc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fdfcc:
    // 0x1fdfcc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1fdfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1fdfd0:
    // 0x1fdfd0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1fdfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fdfd4:
    // 0x1fdfd4: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1fdfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fdfd8:
    // 0x1fdfd8: 0x24070036  addiu       $a3, $zero, 0x36
    ctx->pc = 0x1fdfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1fdfdc:
    // 0x1fdfdc: 0xc054e5c  jal         func_153970
label_1fdfe0:
    if (ctx->pc == 0x1FDFE0u) {
        ctx->pc = 0x1FDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFDCu;
        // 0x1fdfe0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FDFE4u;
        goto label_1fdfe4;
    }
    ctx->pc = 0x1FDFDCu;
    SET_GPR_U32(ctx, 31, 0x1FDFE4u);
    ctx->pc = 0x1FDFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDFDCu;
    // 0x1fdfe0: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FDFDCu, 0x1FDFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDFE4u;
label_1fdfe4:
    // 0x1fdfe4: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fdfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fdfe8:
    // 0x1fdfe8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fdfec:
    // 0x1fdfec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fdfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdff0:
    // 0x1fdff0: 0x24422f80  addiu       $v0, $v0, 0x2F80
    ctx->pc = 0x1fdff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
label_1fdff4:
    // 0x1fdff4: 0x264412c0  addiu       $a0, $s2, 0x12C0
    ctx->pc = 0x1fdff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4800));
label_1fdff8:
    // 0x1fdff8: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1fdff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1fdffc:
    // 0x1fdffc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fdffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fe000:
    // 0x1fe000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe004:
    // 0x1fe004: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fe004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1fe008u;
    return;
}

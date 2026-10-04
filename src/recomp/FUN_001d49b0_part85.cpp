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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part85(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1fe008u: goto label_1fe008;
        case 0x1fe00cu: goto label_1fe00c;
        case 0x1fe010u: goto label_1fe010;
        case 0x1fe014u: goto label_1fe014;
        case 0x1fe018u: goto label_1fe018;
        case 0x1fe01cu: goto label_1fe01c;
        case 0x1fe020u: goto label_1fe020;
        case 0x1fe024u: goto label_1fe024;
        case 0x1fe028u: goto label_1fe028;
        case 0x1fe02cu: goto label_1fe02c;
        case 0x1fe030u: goto label_1fe030;
        case 0x1fe034u: goto label_1fe034;
        case 0x1fe038u: goto label_1fe038;
        case 0x1fe03cu: goto label_1fe03c;
        case 0x1fe040u: goto label_1fe040;
        case 0x1fe044u: goto label_1fe044;
        case 0x1fe048u: goto label_1fe048;
        case 0x1fe04cu: goto label_1fe04c;
        case 0x1fe050u: goto label_1fe050;
        case 0x1fe054u: goto label_1fe054;
        case 0x1fe058u: goto label_1fe058;
        case 0x1fe05cu: goto label_1fe05c;
        case 0x1fe060u: goto label_1fe060;
        case 0x1fe064u: goto label_1fe064;
        case 0x1fe068u: goto label_1fe068;
        case 0x1fe06cu: goto label_1fe06c;
        case 0x1fe070u: goto label_1fe070;
        case 0x1fe074u: goto label_1fe074;
        case 0x1fe078u: goto label_1fe078;
        case 0x1fe07cu: goto label_1fe07c;
        case 0x1fe080u: goto label_1fe080;
        case 0x1fe084u: goto label_1fe084;
        case 0x1fe088u: goto label_1fe088;
        case 0x1fe08cu: goto label_1fe08c;
        case 0x1fe090u: goto label_1fe090;
        case 0x1fe094u: goto label_1fe094;
        case 0x1fe098u: goto label_1fe098;
        case 0x1fe09cu: goto label_1fe09c;
        case 0x1fe0a0u: goto label_1fe0a0;
        case 0x1fe0a4u: goto label_1fe0a4;
        case 0x1fe0a8u: goto label_1fe0a8;
        case 0x1fe0acu: goto label_1fe0ac;
        case 0x1fe0b0u: goto label_1fe0b0;
        case 0x1fe0b4u: goto label_1fe0b4;
        case 0x1fe0b8u: goto label_1fe0b8;
        case 0x1fe0bcu: goto label_1fe0bc;
        case 0x1fe0c0u: goto label_1fe0c0;
        case 0x1fe0c4u: goto label_1fe0c4;
        case 0x1fe0c8u: goto label_1fe0c8;
        case 0x1fe0ccu: goto label_1fe0cc;
        case 0x1fe0d0u: goto label_1fe0d0;
        case 0x1fe0d4u: goto label_1fe0d4;
        case 0x1fe0d8u: goto label_1fe0d8;
        case 0x1fe0dcu: goto label_1fe0dc;
        case 0x1fe0e0u: goto label_1fe0e0;
        case 0x1fe0e4u: goto label_1fe0e4;
        case 0x1fe0e8u: goto label_1fe0e8;
        case 0x1fe0ecu: goto label_1fe0ec;
        case 0x1fe0f0u: goto label_1fe0f0;
        case 0x1fe0f4u: goto label_1fe0f4;
        case 0x1fe0f8u: goto label_1fe0f8;
        case 0x1fe0fcu: goto label_1fe0fc;
        case 0x1fe100u: goto label_1fe100;
        case 0x1fe104u: goto label_1fe104;
        case 0x1fe108u: goto label_1fe108;
        case 0x1fe10cu: goto label_1fe10c;
        case 0x1fe110u: goto label_1fe110;
        case 0x1fe114u: goto label_1fe114;
        case 0x1fe118u: goto label_1fe118;
        case 0x1fe11cu: goto label_1fe11c;
        case 0x1fe120u: goto label_1fe120;
        case 0x1fe124u: goto label_1fe124;
        case 0x1fe128u: goto label_1fe128;
        case 0x1fe12cu: goto label_1fe12c;
        case 0x1fe130u: goto label_1fe130;
        case 0x1fe134u: goto label_1fe134;
        case 0x1fe138u: goto label_1fe138;
        case 0x1fe13cu: goto label_1fe13c;
        case 0x1fe140u: goto label_1fe140;
        case 0x1fe144u: goto label_1fe144;
        case 0x1fe148u: goto label_1fe148;
        case 0x1fe14cu: goto label_1fe14c;
        case 0x1fe150u: goto label_1fe150;
        case 0x1fe154u: goto label_1fe154;
        case 0x1fe158u: goto label_1fe158;
        case 0x1fe15cu: goto label_1fe15c;
        case 0x1fe160u: goto label_1fe160;
        case 0x1fe164u: goto label_1fe164;
        case 0x1fe168u: goto label_1fe168;
        case 0x1fe16cu: goto label_1fe16c;
        case 0x1fe170u: goto label_1fe170;
        case 0x1fe174u: goto label_1fe174;
        case 0x1fe178u: goto label_1fe178;
        case 0x1fe17cu: goto label_1fe17c;
        case 0x1fe180u: goto label_1fe180;
        case 0x1fe184u: goto label_1fe184;
        case 0x1fe188u: goto label_1fe188;
        case 0x1fe18cu: goto label_1fe18c;
        case 0x1fe190u: goto label_1fe190;
        case 0x1fe194u: goto label_1fe194;
        case 0x1fe198u: goto label_1fe198;
        case 0x1fe19cu: goto label_1fe19c;
        case 0x1fe1a0u: goto label_1fe1a0;
        case 0x1fe1a4u: goto label_1fe1a4;
        case 0x1fe1a8u: goto label_1fe1a8;
        case 0x1fe1acu: goto label_1fe1ac;
        case 0x1fe1b0u: goto label_1fe1b0;
        case 0x1fe1b4u: goto label_1fe1b4;
        case 0x1fe1b8u: goto label_1fe1b8;
        case 0x1fe1bcu: goto label_1fe1bc;
        default: return;
    }

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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2470u, 0x1FDABCu, 0x1FDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1FDB9Cu, 0x1FDBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1FDBA4u, 0x1FDBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
            goto label_1fe180;
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
            goto label_1fe014;
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
label_1fe008:
    // 0x1fe008: 0xc054e74  jal         func_1539D0
label_1fe00c:
    if (ctx->pc == 0x1FE00Cu) {
        ctx->pc = 0x1FE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE008u;
        // 0x1fe00c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE010u;
        goto label_1fe010;
    }
    ctx->pc = 0x1FE008u;
    SET_GPR_U32(ctx, 31, 0x1FE010u);
    ctx->pc = 0x1FE00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE008u;
    // 0x1fe00c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FE008u, 0x1FE010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE010u;
label_1fe010:
    // 0x1fe010: 0x8f829060  lw          $v0, -0x6FA0($gp)
    ctx->pc = 0x1fe010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
label_1fe014:
    // 0x1fe014: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1fe018:
    if (ctx->pc == 0x1FE018u) {
        ctx->pc = 0x1FE01Cu;
        goto label_1fe01c;
    }
    ctx->pc = 0x1FE014u;
    {
        const bool branch_taken_0x1fe014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe014) {
            ctx->pc = 0x1FE038u;
            goto label_1fe038;
        }
    }
    ctx->pc = 0x1FE01Cu;
label_1fe01c:
    // 0x1fe01c: 0x8f869064  lw          $a2, -0x6F9C($gp)
    ctx->pc = 0x1fe01cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938724)));
label_1fe020:
    // 0x1fe020: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1fe020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1fe024:
    // 0x1fe024: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fe024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fe028:
    // 0x1fe028: 0xc08f20e  jal         func_23C838
label_1fe02c:
    if (ctx->pc == 0x1FE02Cu) {
        ctx->pc = 0x1FE02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE028u;
        // 0x1fe02c: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE030u;
        goto label_1fe030;
    }
    ctx->pc = 0x1FE028u;
    SET_GPR_U32(ctx, 31, 0x1FE030u);
    ctx->pc = 0x1FE02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE028u;
    // 0x1fe02c: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1FE030u;
label_1fe030:
    // 0x1fe030: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fe034:
    if (ctx->pc == 0x1FE034u) {
        ctx->pc = 0x1FE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE030u;
        // 0x1fe034: 0x8f82907c  lw          $v0, -0x6F84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE038u;
        goto label_1fe038;
    }
    ctx->pc = 0x1FE030u;
    {
        const bool branch_taken_0x1fe030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE030u;
        // 0x1fe034: 0x8f82907c  lw          $v0, -0x6F84($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe030) {
            ctx->pc = 0x1FE040u;
            goto label_1fe040;
        }
    }
    ctx->pc = 0x1FE038u;
label_1fe038:
    // 0x1fe038: 0xa3a00070  sb          $zero, 0x70($sp)
    ctx->pc = 0x1fe038u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 0));
label_1fe03c:
    // 0x1fe03c: 0x8f82907c  lw          $v0, -0x6F84($gp)
    ctx->pc = 0x1fe03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938748)));
label_1fe040:
    // 0x1fe040: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1fe044:
    if (ctx->pc == 0x1FE044u) {
        ctx->pc = 0x1FE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE040u;
        // 0x1fe044: 0x26060140  addiu       $a2, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE048u;
        goto label_1fe048;
    }
    ctx->pc = 0x1FE040u;
    {
        const bool branch_taken_0x1fe040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE040u;
        // 0x1fe044: 0x26060140  addiu       $a2, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe040) {
            ctx->pc = 0x1FE054u;
            goto label_1fe054;
        }
    }
    ctx->pc = 0x1FE048u;
label_1fe048:
    // 0x1fe048: 0x26060098  addiu       $a2, $s0, 0x98
    ctx->pc = 0x1fe048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_1fe04c:
    // 0x1fe04c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe050:
    if (ctx->pc == 0x1FE050u) {
        ctx->pc = 0x1FE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE04Cu;
        // 0x1fe050: 0x262700c8  addiu       $a3, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE054u;
        goto label_1fe054;
    }
    ctx->pc = 0x1FE04Cu;
    {
        const bool branch_taken_0x1fe04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE04Cu;
        // 0x1fe050: 0x262700c8  addiu       $a3, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe04c) {
            ctx->pc = 0x1FE058u;
            goto label_1fe058;
        }
    }
    ctx->pc = 0x1FE054u;
label_1fe054:
    // 0x1fe054: 0x26270058  addiu       $a3, $s1, 0x58
    ctx->pc = 0x1fe054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_1fe058:
    // 0x1fe058: 0x26444380  addiu       $a0, $s2, 0x4380
    ctx->pc = 0x1fe058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17280));
label_1fe05c:
    // 0x1fe05c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fe05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fe060:
    // 0x1fe060: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe060u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe064:
    // 0x1fe064: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fe064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe068:
    // 0x1fe068: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1fe068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe06c:
    // 0x1fe06c: 0xc0708ac  jal         func_1C22B0
label_1fe070:
    if (ctx->pc == 0x1FE070u) {
        ctx->pc = 0x1FE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE06Cu;
        // 0x1fe070: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE074u;
        goto label_1fe074;
    }
    ctx->pc = 0x1FE06Cu;
    SET_GPR_U32(ctx, 31, 0x1FE074u);
    ctx->pc = 0x1FE070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE06Cu;
    // 0x1fe070: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1FE06Cu, 0x1FE074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE074u;
label_1fe074:
    // 0x1fe074: 0x8f849070  lw          $a0, -0x6F90($gp)
    ctx->pc = 0x1fe074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938736)));
label_1fe078:
    // 0x1fe078: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe07c:
    // 0x1fe07c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1fe080:
    if (ctx->pc == 0x1FE080u) {
        ctx->pc = 0x1FE084u;
        goto label_1fe084;
    }
    ctx->pc = 0x1FE07Cu;
    {
        const bool branch_taken_0x1fe07c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fe07c) {
            ctx->pc = 0x1FE094u;
            goto label_1fe094;
        }
    }
    ctx->pc = 0x1FE084u;
label_1fe084:
    // 0x1fe084: 0xc070d40  jal         func_1C3500
label_1fe088:
    if (ctx->pc == 0x1FE088u) {
        ctx->pc = 0x1FE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE084u;
        // 0x1fe088: 0x8f849068  lw          $a0, -0x6F98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE08Cu;
        goto label_1fe08c;
    }
    ctx->pc = 0x1FE084u;
    SET_GPR_U32(ctx, 31, 0x1FE08Cu);
    ctx->pc = 0x1FE088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE084u;
    // 0x1fe088: 0x8f849068  lw          $a0, -0x6F98($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3500u, 0x1FE084u, 0x1FE08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE08Cu;
label_1fe08c:
    // 0x1fe08c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1fe090:
    if (ctx->pc == 0x1FE090u) {
        ctx->pc = 0x1FE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE08Cu;
        // 0x1fe090: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE094u;
        goto label_1fe094;
    }
    ctx->pc = 0x1FE08Cu;
    {
        const bool branch_taken_0x1fe08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE08Cu;
        // 0x1fe090: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe08c) {
            ctx->pc = 0x1FE0A0u;
            goto label_1fe0a0;
        }
    }
    ctx->pc = 0x1FE094u;
label_1fe094:
    // 0x1fe094: 0xc070db0  jal         func_1C36C0
label_1fe098:
    if (ctx->pc == 0x1FE098u) {
        ctx->pc = 0x1FE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE094u;
        // 0x1fe098: 0x8f85906c  lw          $a1, -0x6F94($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938732)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE09Cu;
        goto label_1fe09c;
    }
    ctx->pc = 0x1FE094u;
    SET_GPR_U32(ctx, 31, 0x1FE09Cu);
    ctx->pc = 0x1FE098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE094u;
    // 0x1fe098: 0x8f85906c  lw          $a1, -0x6F94($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C36C0u, 0x1FE094u, 0x1FE09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE09Cu;
label_1fe09c:
    // 0x1fe09c: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x1fe09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_1fe0a0:
    // 0x1fe0a0: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x1fe0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1fe0a4:
    // 0x1fe0a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fe0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fe0a8:
    // 0x1fe0a8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1fe0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1fe0ac:
    // 0x1fe0ac: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1fe0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1fe0b0:
    // 0x1fe0b0: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1fe0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1fe0b4:
    // 0x1fe0b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fe0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fe0b8:
    // 0x1fe0b8: 0xa64345e0  sh          $v1, 0x45E0($s2)
    ctx->pc = 0x1fe0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 17888), (uint16_t)GPR_U32(ctx, 3));
label_1fe0bc:
    // 0x1fe0bc: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1fe0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1fe0c0:
    // 0x1fe0c0: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1fe0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1fe0c4:
    // 0x1fe0c4: 0xa64445e2  sh          $a0, 0x45E2($s2)
    ctx->pc = 0x1fe0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 17890), (uint16_t)GPR_U32(ctx, 4));
label_1fe0c8:
    // 0x1fe0c8: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x1fe0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1fe0cc:
    // 0x1fe0cc: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x1fe0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe0d0:
    // 0x1fe0d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fe0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fe0d4:
    // 0x1fe0d4: 0xae4445e4  sw          $a0, 0x45E4($s2)
    ctx->pc = 0x1fe0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17892), GPR_U32(ctx, 4));
label_1fe0d8:
    // 0x1fe0d8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1fe0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1fe0dc:
    // 0x1fe0dc: 0xa64345f0  sh          $v1, 0x45F0($s2)
    ctx->pc = 0x1fe0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 17904), (uint16_t)GPR_U32(ctx, 3));
label_1fe0e0:
    // 0x1fe0e0: 0xa64245f2  sh          $v0, 0x45F2($s2)
    ctx->pc = 0x1fe0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 17906), (uint16_t)GPR_U32(ctx, 2));
label_1fe0e4:
    // 0x1fe0e4: 0xae4445f4  sw          $a0, 0x45F4($s2)
    ctx->pc = 0x1fe0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17908), GPR_U32(ctx, 4));
label_1fe0e8:
    // 0x1fe0e8: 0x8f829058  lw          $v0, -0x6FA8($gp)
    ctx->pc = 0x1fe0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938712)));
label_1fe0ec:
    // 0x1fe0ec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1fe0f0:
    if (ctx->pc == 0x1FE0F0u) {
        ctx->pc = 0x1FE0F4u;
        goto label_1fe0f4;
    }
    ctx->pc = 0x1FE0ECu;
    {
        const bool branch_taken_0x1fe0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0ec) {
            ctx->pc = 0x1FE158u;
            goto label_1fe158;
        }
    }
    ctx->pc = 0x1FE0F4u;
label_1fe0f4:
    // 0x1fe0f4: 0x8f82905c  lw          $v0, -0x6FA4($gp)
    ctx->pc = 0x1fe0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938716)));
label_1fe0f8:
    // 0x1fe0f8: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1fe0fc:
    if (ctx->pc == 0x1FE0FCu) {
        ctx->pc = 0x1FE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0F8u;
        // 0x1fe0fc: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE100u;
        goto label_1fe100;
    }
    ctx->pc = 0x1FE0F8u;
    {
        const bool branch_taken_0x1fe0f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0F8u;
        // 0x1fe0fc: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0f8) {
            ctx->pc = 0x1FE10Cu;
            goto label_1fe10c;
        }
    }
    ctx->pc = 0x1FE100u;
label_1fe100:
    // 0x1fe100: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fe104:
    if (ctx->pc == 0x1FE104u) {
        ctx->pc = 0x1FE104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE100u;
        // 0x1fe104: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE108u;
        goto label_1fe108;
    }
    ctx->pc = 0x1FE100u;
    {
        const bool branch_taken_0x1fe100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE100u;
        // 0x1fe104: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe100) {
            ctx->pc = 0x1FE110u;
            goto label_1fe110;
        }
    }
    ctx->pc = 0x1FE108u;
label_1fe108:
    // 0x1fe108: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1fe108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1fe10c:
    // 0x1fe10c: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1fe10cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1fe110:
    // 0x1fe110: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1fe114:
    if (ctx->pc == 0x1FE114u) {
        ctx->pc = 0x1FE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE110u;
        // 0x1fe114: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE118u;
        goto label_1fe118;
    }
    ctx->pc = 0x1FE110u;
    {
        const bool branch_taken_0x1fe110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE110u;
        // 0x1fe114: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe110) {
            ctx->pc = 0x1FE134u;
            goto label_1fe134;
        }
    }
    ctx->pc = 0x1FE118u;
label_1fe118:
    // 0x1fe118: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1fe118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1fe11c:
    // 0x1fe11c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1fe120:
    if (ctx->pc == 0x1FE120u) {
        ctx->pc = 0x1FE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE11Cu;
        // 0x1fe120: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE124u;
        goto label_1fe124;
    }
    ctx->pc = 0x1FE11Cu;
    {
        const bool branch_taken_0x1fe11c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FE120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE11Cu;
        // 0x1fe120: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe11c) {
            ctx->pc = 0x1FE12Cu;
            goto label_1fe12c;
        }
    }
    ctx->pc = 0x1FE124u;
label_1fe124:
    // 0x1fe124: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1fe124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1fe128:
    // 0x1fe128: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1fe128u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1fe12c:
    // 0x1fe12c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fe130:
    if (ctx->pc == 0x1FE130u) {
        ctx->pc = 0x1FE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE12Cu;
        // 0x1fe130: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE134u;
        goto label_1fe134;
    }
    ctx->pc = 0x1FE12Cu;
    {
        const bool branch_taken_0x1fe12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE12Cu;
        // 0x1fe130: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe12c) {
            ctx->pc = 0x1FE150u;
            goto label_1fe150;
        }
    }
    ctx->pc = 0x1FE134u;
label_1fe134:
    // 0x1fe134: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe138:
    // 0x1fe138: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1fe138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1fe13c:
    // 0x1fe13c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1fe140:
    if (ctx->pc == 0x1FE140u) {
        ctx->pc = 0x1FE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE13Cu;
        // 0x1fe140: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE144u;
        goto label_1fe144;
    }
    ctx->pc = 0x1FE13Cu;
    {
        const bool branch_taken_0x1fe13c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE13Cu;
        // 0x1fe140: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe13c) {
            ctx->pc = 0x1FE14Cu;
            goto label_1fe14c;
        }
    }
    ctx->pc = 0x1FE144u;
label_1fe144:
    // 0x1fe144: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1fe144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1fe148:
    // 0x1fe148: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1fe148u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1fe14c:
    // 0x1fe14c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1fe14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1fe150:
    // 0x1fe150: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe154:
    if (ctx->pc == 0x1FE154u) {
        ctx->pc = 0x1FE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE150u;
        // 0x1fe154: 0xa24245d3  sb          $v0, 0x45D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 17875), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE158u;
        goto label_1fe158;
    }
    ctx->pc = 0x1FE150u;
    {
        const bool branch_taken_0x1fe150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE150u;
        // 0x1fe154: 0xa24245d3  sb          $v0, 0x45D3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 17875), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe150) {
            ctx->pc = 0x1FE15Cu;
            goto label_1fe15c;
        }
    }
    ctx->pc = 0x1FE158u;
label_1fe158:
    // 0x1fe158: 0xa24045d3  sb          $zero, 0x45D3($s2)
    ctx->pc = 0x1fe158u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 17875), (uint8_t)GPR_U32(ctx, 0));
label_1fe15c:
    // 0x1fe15c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fe15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fe160:
    // 0x1fe160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fe160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe164:
    // 0x1fe164: 0x24060460  addiu       $a2, $zero, 0x460
    ctx->pc = 0x1fe164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
label_1fe168:
    // 0x1fe168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fe168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe16c:
    // 0x1fe16c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe16cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe170:
    // 0x1fe170: 0xc066c72  jal         func_19B1C8
label_1fe174:
    if (ctx->pc == 0x1FE174u) {
        ctx->pc = 0x1FE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE170u;
        // 0x1fe174: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE178u;
        goto label_1fe178;
    }
    ctx->pc = 0x1FE170u;
    SET_GPR_U32(ctx, 31, 0x1FE178u);
    ctx->pc = 0x1FE174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE170u;
    // 0x1fe174: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1FE170u, 0x1FE178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE178u;
label_1fe178:
    // 0x1fe178: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_1fe17c:
    if (ctx->pc == 0x1FE17Cu) {
        ctx->pc = 0x1FE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE178u;
        // 0x1fe17c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE180u;
        goto label_1fe180;
    }
    ctx->pc = 0x1FE178u;
    {
        const bool branch_taken_0x1fe178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE178u;
        // 0x1fe17c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe178) {
            ctx->pc = 0x1FE4D8u;
            { ctx->pc = 0x1fe4d8; return; }
        }
    }
    ctx->pc = 0x1FE180u;
label_1fe180:
    // 0x1fe180: 0x8f839080  lw          $v1, -0x6F80($gp)
    ctx->pc = 0x1fe180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
label_1fe184:
    // 0x1fe184: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
label_1fe188:
    if (ctx->pc == 0x1FE188u) {
        ctx->pc = 0x1FE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE184u;
        // 0x1fe188: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE18Cu;
        goto label_1fe18c;
    }
    ctx->pc = 0x1FE184u;
    {
        const bool branch_taken_0x1fe184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE184u;
        // 0x1fe188: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe184) {
            ctx->pc = 0x1FE4D4u;
            { ctx->pc = 0x1fe4d4; return; }
        }
    }
    ctx->pc = 0x1FE18Cu;
label_1fe18c:
    // 0x1fe18c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1fe18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1fe190:
    // 0x1fe190: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x1fe190u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1fe194:
    // 0x1fe194: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fe194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fe198:
    // 0x1fe198: 0x8f859078  lw          $a1, -0x6F88($gp)
    ctx->pc = 0x1fe198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938744)));
label_1fe19c:
    // 0x1fe19c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1fe19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1fe1a0:
    // 0x1fe1a0: 0x8f869074  lw          $a2, -0x6F8C($gp)
    ctx->pc = 0x1fe1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
label_1fe1a4:
    // 0x1fe1a4: 0x2442bee0  addiu       $v0, $v0, -0x4120
    ctx->pc = 0x1fe1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950624));
label_1fe1a8:
    // 0x1fe1a8: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x1fe1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1fe1ac:
    // 0x1fe1ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1fe1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1fe1b0:
    // 0x1fe1b0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1fe1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fe1b4:
    // 0x1fe1b4: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x1fe1b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1fe1b8:
    // 0x1fe1b8: 0xc5940  sll         $t3, $t4, 5
    ctx->pc = 0x1fe1b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_1fe1bc:
    // 0x1fe1bc: 0xc18c0  sll         $v1, $t4, 3
    ctx->pc = 0x1fe1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    ctx->pc = 0x1fe1c0u;
    return;
}

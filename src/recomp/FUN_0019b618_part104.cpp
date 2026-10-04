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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1cdac8u: goto label_1cdac8;
        case 0x1cdaccu: goto label_1cdacc;
        case 0x1cdad0u: goto label_1cdad0;
        case 0x1cdad4u: goto label_1cdad4;
        case 0x1cdad8u: goto label_1cdad8;
        case 0x1cdadcu: goto label_1cdadc;
        case 0x1cdae0u: goto label_1cdae0;
        case 0x1cdae4u: goto label_1cdae4;
        case 0x1cdae8u: goto label_1cdae8;
        case 0x1cdaecu: goto label_1cdaec;
        case 0x1cdaf0u: goto label_1cdaf0;
        case 0x1cdaf4u: goto label_1cdaf4;
        case 0x1cdaf8u: goto label_1cdaf8;
        case 0x1cdafcu: goto label_1cdafc;
        case 0x1cdb00u: goto label_1cdb00;
        case 0x1cdb04u: goto label_1cdb04;
        case 0x1cdb08u: goto label_1cdb08;
        case 0x1cdb0cu: goto label_1cdb0c;
        case 0x1cdb10u: goto label_1cdb10;
        case 0x1cdb14u: goto label_1cdb14;
        case 0x1cdb18u: goto label_1cdb18;
        case 0x1cdb1cu: goto label_1cdb1c;
        case 0x1cdb20u: goto label_1cdb20;
        case 0x1cdb24u: goto label_1cdb24;
        case 0x1cdb28u: goto label_1cdb28;
        case 0x1cdb2cu: goto label_1cdb2c;
        case 0x1cdb30u: goto label_1cdb30;
        case 0x1cdb34u: goto label_1cdb34;
        case 0x1cdb38u: goto label_1cdb38;
        case 0x1cdb3cu: goto label_1cdb3c;
        case 0x1cdb40u: goto label_1cdb40;
        case 0x1cdb44u: goto label_1cdb44;
        case 0x1cdb48u: goto label_1cdb48;
        case 0x1cdb4cu: goto label_1cdb4c;
        case 0x1cdb50u: goto label_1cdb50;
        case 0x1cdb54u: goto label_1cdb54;
        case 0x1cdb58u: goto label_1cdb58;
        case 0x1cdb5cu: goto label_1cdb5c;
        case 0x1cdb60u: goto label_1cdb60;
        case 0x1cdb64u: goto label_1cdb64;
        case 0x1cdb68u: goto label_1cdb68;
        case 0x1cdb6cu: goto label_1cdb6c;
        case 0x1cdb70u: goto label_1cdb70;
        case 0x1cdb74u: goto label_1cdb74;
        case 0x1cdb78u: goto label_1cdb78;
        case 0x1cdb7cu: goto label_1cdb7c;
        case 0x1cdb80u: goto label_1cdb80;
        case 0x1cdb84u: goto label_1cdb84;
        case 0x1cdb88u: goto label_1cdb88;
        case 0x1cdb8cu: goto label_1cdb8c;
        case 0x1cdb90u: goto label_1cdb90;
        case 0x1cdb94u: goto label_1cdb94;
        case 0x1cdb98u: goto label_1cdb98;
        case 0x1cdb9cu: goto label_1cdb9c;
        case 0x1cdba0u: goto label_1cdba0;
        case 0x1cdba4u: goto label_1cdba4;
        case 0x1cdba8u: goto label_1cdba8;
        case 0x1cdbacu: goto label_1cdbac;
        case 0x1cdbb0u: goto label_1cdbb0;
        case 0x1cdbb4u: goto label_1cdbb4;
        case 0x1cdbb8u: goto label_1cdbb8;
        case 0x1cdbbcu: goto label_1cdbbc;
        case 0x1cdbc0u: goto label_1cdbc0;
        case 0x1cdbc4u: goto label_1cdbc4;
        case 0x1cdbc8u: goto label_1cdbc8;
        case 0x1cdbccu: goto label_1cdbcc;
        case 0x1cdbd0u: goto label_1cdbd0;
        case 0x1cdbd4u: goto label_1cdbd4;
        case 0x1cdbd8u: goto label_1cdbd8;
        case 0x1cdbdcu: goto label_1cdbdc;
        case 0x1cdbe0u: goto label_1cdbe0;
        case 0x1cdbe4u: goto label_1cdbe4;
        case 0x1cdbe8u: goto label_1cdbe8;
        case 0x1cdbecu: goto label_1cdbec;
        case 0x1cdbf0u: goto label_1cdbf0;
        case 0x1cdbf4u: goto label_1cdbf4;
        case 0x1cdbf8u: goto label_1cdbf8;
        case 0x1cdbfcu: goto label_1cdbfc;
        case 0x1cdc00u: goto label_1cdc00;
        case 0x1cdc04u: goto label_1cdc04;
        case 0x1cdc08u: goto label_1cdc08;
        case 0x1cdc0cu: goto label_1cdc0c;
        case 0x1cdc10u: goto label_1cdc10;
        case 0x1cdc14u: goto label_1cdc14;
        case 0x1cdc18u: goto label_1cdc18;
        case 0x1cdc1cu: goto label_1cdc1c;
        case 0x1cdc20u: goto label_1cdc20;
        case 0x1cdc24u: goto label_1cdc24;
        case 0x1cdc28u: goto label_1cdc28;
        case 0x1cdc2cu: goto label_1cdc2c;
        case 0x1cdc30u: goto label_1cdc30;
        case 0x1cdc34u: goto label_1cdc34;
        case 0x1cdc38u: goto label_1cdc38;
        case 0x1cdc3cu: goto label_1cdc3c;
        case 0x1cdc40u: goto label_1cdc40;
        case 0x1cdc44u: goto label_1cdc44;
        case 0x1cdc48u: goto label_1cdc48;
        case 0x1cdc4cu: goto label_1cdc4c;
        case 0x1cdc50u: goto label_1cdc50;
        case 0x1cdc54u: goto label_1cdc54;
        case 0x1cdc58u: goto label_1cdc58;
        case 0x1cdc5cu: goto label_1cdc5c;
        case 0x1cdc60u: goto label_1cdc60;
        case 0x1cdc64u: goto label_1cdc64;
        case 0x1cdc68u: goto label_1cdc68;
        case 0x1cdc6cu: goto label_1cdc6c;
        case 0x1cdc70u: goto label_1cdc70;
        case 0x1cdc74u: goto label_1cdc74;
        case 0x1cdc78u: goto label_1cdc78;
        case 0x1cdc7cu: goto label_1cdc7c;
        case 0x1cdc80u: goto label_1cdc80;
        case 0x1cdc84u: goto label_1cdc84;
        case 0x1cdc88u: goto label_1cdc88;
        case 0x1cdc8cu: goto label_1cdc8c;
        case 0x1cdc90u: goto label_1cdc90;
        case 0x1cdc94u: goto label_1cdc94;
        case 0x1cdc98u: goto label_1cdc98;
        case 0x1cdc9cu: goto label_1cdc9c;
        case 0x1cdca0u: goto label_1cdca0;
        case 0x1cdca4u: goto label_1cdca4;
        case 0x1cdca8u: goto label_1cdca8;
        case 0x1cdcacu: goto label_1cdcac;
        case 0x1cdcb0u: goto label_1cdcb0;
        case 0x1cdcb4u: goto label_1cdcb4;
        case 0x1cdcb8u: goto label_1cdcb8;
        case 0x1cdcbcu: goto label_1cdcbc;
        case 0x1cdcc0u: goto label_1cdcc0;
        case 0x1cdcc4u: goto label_1cdcc4;
        case 0x1cdcc8u: goto label_1cdcc8;
        case 0x1cdcccu: goto label_1cdccc;
        case 0x1cdcd0u: goto label_1cdcd0;
        case 0x1cdcd4u: goto label_1cdcd4;
        case 0x1cdcd8u: goto label_1cdcd8;
        case 0x1cdcdcu: goto label_1cdcdc;
        case 0x1cdce0u: goto label_1cdce0;
        case 0x1cdce4u: goto label_1cdce4;
        case 0x1cdce8u: goto label_1cdce8;
        case 0x1cdcecu: goto label_1cdcec;
        case 0x1cdcf0u: goto label_1cdcf0;
        case 0x1cdcf4u: goto label_1cdcf4;
        case 0x1cdcf8u: goto label_1cdcf8;
        case 0x1cdcfcu: goto label_1cdcfc;
        case 0x1cdd00u: goto label_1cdd00;
        case 0x1cdd04u: goto label_1cdd04;
        case 0x1cdd08u: goto label_1cdd08;
        case 0x1cdd0cu: goto label_1cdd0c;
        case 0x1cdd10u: goto label_1cdd10;
        case 0x1cdd14u: goto label_1cdd14;
        case 0x1cdd18u: goto label_1cdd18;
        case 0x1cdd1cu: goto label_1cdd1c;
        case 0x1cdd20u: goto label_1cdd20;
        case 0x1cdd24u: goto label_1cdd24;
        case 0x1cdd28u: goto label_1cdd28;
        case 0x1cdd2cu: goto label_1cdd2c;
        case 0x1cdd30u: goto label_1cdd30;
        case 0x1cdd34u: goto label_1cdd34;
        case 0x1cdd38u: goto label_1cdd38;
        case 0x1cdd3cu: goto label_1cdd3c;
        case 0x1cdd40u: goto label_1cdd40;
        case 0x1cdd44u: goto label_1cdd44;
        case 0x1cdd48u: goto label_1cdd48;
        case 0x1cdd4cu: goto label_1cdd4c;
        case 0x1cdd50u: goto label_1cdd50;
        case 0x1cdd54u: goto label_1cdd54;
        case 0x1cdd58u: goto label_1cdd58;
        case 0x1cdd5cu: goto label_1cdd5c;
        case 0x1cdd60u: goto label_1cdd60;
        case 0x1cdd64u: goto label_1cdd64;
        case 0x1cdd68u: goto label_1cdd68;
        case 0x1cdd6cu: goto label_1cdd6c;
        case 0x1cdd70u: goto label_1cdd70;
        case 0x1cdd74u: goto label_1cdd74;
        case 0x1cdd78u: goto label_1cdd78;
        case 0x1cdd7cu: goto label_1cdd7c;
        case 0x1cdd80u: goto label_1cdd80;
        case 0x1cdd84u: goto label_1cdd84;
        case 0x1cdd88u: goto label_1cdd88;
        case 0x1cdd8cu: goto label_1cdd8c;
        case 0x1cdd90u: goto label_1cdd90;
        case 0x1cdd94u: goto label_1cdd94;
        case 0x1cdd98u: goto label_1cdd98;
        case 0x1cdd9cu: goto label_1cdd9c;
        case 0x1cdda0u: goto label_1cdda0;
        case 0x1cdda4u: goto label_1cdda4;
        case 0x1cdda8u: goto label_1cdda8;
        case 0x1cddacu: goto label_1cddac;
        case 0x1cddb0u: goto label_1cddb0;
        case 0x1cddb4u: goto label_1cddb4;
        case 0x1cddb8u: goto label_1cddb8;
        case 0x1cddbcu: goto label_1cddbc;
        case 0x1cddc0u: goto label_1cddc0;
        case 0x1cddc4u: goto label_1cddc4;
        case 0x1cddc8u: goto label_1cddc8;
        case 0x1cddccu: goto label_1cddcc;
        case 0x1cddd0u: goto label_1cddd0;
        case 0x1cddd4u: goto label_1cddd4;
        case 0x1cddd8u: goto label_1cddd8;
        case 0x1cdddcu: goto label_1cdddc;
        case 0x1cdde0u: goto label_1cdde0;
        case 0x1cdde4u: goto label_1cdde4;
        case 0x1cdde8u: goto label_1cdde8;
        case 0x1cddecu: goto label_1cddec;
        case 0x1cddf0u: goto label_1cddf0;
        case 0x1cddf4u: goto label_1cddf4;
        case 0x1cddf8u: goto label_1cddf8;
        case 0x1cddfcu: goto label_1cddfc;
        case 0x1cde00u: goto label_1cde00;
        case 0x1cde04u: goto label_1cde04;
        case 0x1cde08u: goto label_1cde08;
        case 0x1cde0cu: goto label_1cde0c;
        case 0x1cde10u: goto label_1cde10;
        case 0x1cde14u: goto label_1cde14;
        case 0x1cde18u: goto label_1cde18;
        case 0x1cde1cu: goto label_1cde1c;
        case 0x1cde20u: goto label_1cde20;
        case 0x1cde24u: goto label_1cde24;
        case 0x1cde28u: goto label_1cde28;
        case 0x1cde2cu: goto label_1cde2c;
        case 0x1cde30u: goto label_1cde30;
        case 0x1cde34u: goto label_1cde34;
        case 0x1cde38u: goto label_1cde38;
        case 0x1cde3cu: goto label_1cde3c;
        case 0x1cde40u: goto label_1cde40;
        case 0x1cde44u: goto label_1cde44;
        case 0x1cde48u: goto label_1cde48;
        case 0x1cde4cu: goto label_1cde4c;
        case 0x1cde50u: goto label_1cde50;
        case 0x1cde54u: goto label_1cde54;
        case 0x1cde58u: goto label_1cde58;
        case 0x1cde5cu: goto label_1cde5c;
        case 0x1cde60u: goto label_1cde60;
        case 0x1cde64u: goto label_1cde64;
        case 0x1cde68u: goto label_1cde68;
        case 0x1cde6cu: goto label_1cde6c;
        case 0x1cde70u: goto label_1cde70;
        case 0x1cde74u: goto label_1cde74;
        case 0x1cde78u: goto label_1cde78;
        case 0x1cde7cu: goto label_1cde7c;
        case 0x1cde80u: goto label_1cde80;
        case 0x1cde84u: goto label_1cde84;
        case 0x1cde88u: goto label_1cde88;
        case 0x1cde8cu: goto label_1cde8c;
        case 0x1cde90u: goto label_1cde90;
        case 0x1cde94u: goto label_1cde94;
        case 0x1cde98u: goto label_1cde98;
        case 0x1cde9cu: goto label_1cde9c;
        case 0x1cdea0u: goto label_1cdea0;
        case 0x1cdea4u: goto label_1cdea4;
        case 0x1cdea8u: goto label_1cdea8;
        case 0x1cdeacu: goto label_1cdeac;
        case 0x1cdeb0u: goto label_1cdeb0;
        case 0x1cdeb4u: goto label_1cdeb4;
        case 0x1cdeb8u: goto label_1cdeb8;
        case 0x1cdebcu: goto label_1cdebc;
        case 0x1cdec0u: goto label_1cdec0;
        case 0x1cdec4u: goto label_1cdec4;
        case 0x1cdec8u: goto label_1cdec8;
        case 0x1cdeccu: goto label_1cdecc;
        case 0x1cded0u: goto label_1cded0;
        case 0x1cded4u: goto label_1cded4;
        case 0x1cded8u: goto label_1cded8;
        case 0x1cdedcu: goto label_1cdedc;
        case 0x1cdee0u: goto label_1cdee0;
        case 0x1cdee4u: goto label_1cdee4;
        case 0x1cdee8u: goto label_1cdee8;
        case 0x1cdeecu: goto label_1cdeec;
        case 0x1cdef0u: goto label_1cdef0;
        case 0x1cdef4u: goto label_1cdef4;
        case 0x1cdef8u: goto label_1cdef8;
        case 0x1cdefcu: goto label_1cdefc;
        case 0x1cdf00u: goto label_1cdf00;
        case 0x1cdf04u: goto label_1cdf04;
        case 0x1cdf08u: goto label_1cdf08;
        case 0x1cdf0cu: goto label_1cdf0c;
        case 0x1cdf10u: goto label_1cdf10;
        case 0x1cdf14u: goto label_1cdf14;
        case 0x1cdf18u: goto label_1cdf18;
        case 0x1cdf1cu: goto label_1cdf1c;
        case 0x1cdf20u: goto label_1cdf20;
        case 0x1cdf24u: goto label_1cdf24;
        case 0x1cdf28u: goto label_1cdf28;
        case 0x1cdf2cu: goto label_1cdf2c;
        case 0x1cdf30u: goto label_1cdf30;
        case 0x1cdf34u: goto label_1cdf34;
        case 0x1cdf38u: goto label_1cdf38;
        case 0x1cdf3cu: goto label_1cdf3c;
        case 0x1cdf40u: goto label_1cdf40;
        case 0x1cdf44u: goto label_1cdf44;
        case 0x1cdf48u: goto label_1cdf48;
        case 0x1cdf4cu: goto label_1cdf4c;
        case 0x1cdf50u: goto label_1cdf50;
        case 0x1cdf54u: goto label_1cdf54;
        case 0x1cdf58u: goto label_1cdf58;
        case 0x1cdf5cu: goto label_1cdf5c;
        case 0x1cdf60u: goto label_1cdf60;
        case 0x1cdf64u: goto label_1cdf64;
        case 0x1cdf68u: goto label_1cdf68;
        case 0x1cdf6cu: goto label_1cdf6c;
        case 0x1cdf70u: goto label_1cdf70;
        case 0x1cdf74u: goto label_1cdf74;
        case 0x1cdf78u: goto label_1cdf78;
        case 0x1cdf7cu: goto label_1cdf7c;
        case 0x1cdf80u: goto label_1cdf80;
        case 0x1cdf84u: goto label_1cdf84;
        case 0x1cdf88u: goto label_1cdf88;
        case 0x1cdf8cu: goto label_1cdf8c;
        case 0x1cdf90u: goto label_1cdf90;
        case 0x1cdf94u: goto label_1cdf94;
        case 0x1cdf98u: goto label_1cdf98;
        case 0x1cdf9cu: goto label_1cdf9c;
        case 0x1cdfa0u: goto label_1cdfa0;
        case 0x1cdfa4u: goto label_1cdfa4;
        case 0x1cdfa8u: goto label_1cdfa8;
        case 0x1cdfacu: goto label_1cdfac;
        case 0x1cdfb0u: goto label_1cdfb0;
        case 0x1cdfb4u: goto label_1cdfb4;
        case 0x1cdfb8u: goto label_1cdfb8;
        case 0x1cdfbcu: goto label_1cdfbc;
        case 0x1cdfc0u: goto label_1cdfc0;
        case 0x1cdfc4u: goto label_1cdfc4;
        case 0x1cdfc8u: goto label_1cdfc8;
        case 0x1cdfccu: goto label_1cdfcc;
        case 0x1cdfd0u: goto label_1cdfd0;
        case 0x1cdfd4u: goto label_1cdfd4;
        case 0x1cdfd8u: goto label_1cdfd8;
        case 0x1cdfdcu: goto label_1cdfdc;
        case 0x1cdfe0u: goto label_1cdfe0;
        case 0x1cdfe4u: goto label_1cdfe4;
        case 0x1cdfe8u: goto label_1cdfe8;
        case 0x1cdfecu: goto label_1cdfec;
        case 0x1cdff0u: goto label_1cdff0;
        case 0x1cdff4u: goto label_1cdff4;
        case 0x1cdff8u: goto label_1cdff8;
        case 0x1cdffcu: goto label_1cdffc;
        case 0x1ce000u: goto label_1ce000;
        case 0x1ce004u: goto label_1ce004;
        case 0x1ce008u: goto label_1ce008;
        case 0x1ce00cu: goto label_1ce00c;
        case 0x1ce010u: goto label_1ce010;
        case 0x1ce014u: goto label_1ce014;
        case 0x1ce018u: goto label_1ce018;
        case 0x1ce01cu: goto label_1ce01c;
        case 0x1ce020u: goto label_1ce020;
        case 0x1ce024u: goto label_1ce024;
        case 0x1ce028u: goto label_1ce028;
        case 0x1ce02cu: goto label_1ce02c;
        case 0x1ce030u: goto label_1ce030;
        case 0x1ce034u: goto label_1ce034;
        case 0x1ce038u: goto label_1ce038;
        case 0x1ce03cu: goto label_1ce03c;
        case 0x1ce040u: goto label_1ce040;
        case 0x1ce044u: goto label_1ce044;
        case 0x1ce048u: goto label_1ce048;
        case 0x1ce04cu: goto label_1ce04c;
        case 0x1ce050u: goto label_1ce050;
        case 0x1ce054u: goto label_1ce054;
        case 0x1ce058u: goto label_1ce058;
        case 0x1ce05cu: goto label_1ce05c;
        case 0x1ce060u: goto label_1ce060;
        case 0x1ce064u: goto label_1ce064;
        case 0x1ce068u: goto label_1ce068;
        case 0x1ce06cu: goto label_1ce06c;
        case 0x1ce070u: goto label_1ce070;
        case 0x1ce074u: goto label_1ce074;
        case 0x1ce078u: goto label_1ce078;
        case 0x1ce07cu: goto label_1ce07c;
        case 0x1ce080u: goto label_1ce080;
        case 0x1ce084u: goto label_1ce084;
        case 0x1ce088u: goto label_1ce088;
        case 0x1ce08cu: goto label_1ce08c;
        case 0x1ce090u: goto label_1ce090;
        case 0x1ce094u: goto label_1ce094;
        case 0x1ce098u: goto label_1ce098;
        case 0x1ce09cu: goto label_1ce09c;
        case 0x1ce0a0u: goto label_1ce0a0;
        case 0x1ce0a4u: goto label_1ce0a4;
        case 0x1ce0a8u: goto label_1ce0a8;
        case 0x1ce0acu: goto label_1ce0ac;
        case 0x1ce0b0u: goto label_1ce0b0;
        case 0x1ce0b4u: goto label_1ce0b4;
        case 0x1ce0b8u: goto label_1ce0b8;
        case 0x1ce0bcu: goto label_1ce0bc;
        case 0x1ce0c0u: goto label_1ce0c0;
        case 0x1ce0c4u: goto label_1ce0c4;
        case 0x1ce0c8u: goto label_1ce0c8;
        case 0x1ce0ccu: goto label_1ce0cc;
        case 0x1ce0d0u: goto label_1ce0d0;
        case 0x1ce0d4u: goto label_1ce0d4;
        case 0x1ce0d8u: goto label_1ce0d8;
        case 0x1ce0dcu: goto label_1ce0dc;
        case 0x1ce0e0u: goto label_1ce0e0;
        case 0x1ce0e4u: goto label_1ce0e4;
        case 0x1ce0e8u: goto label_1ce0e8;
        case 0x1ce0ecu: goto label_1ce0ec;
        case 0x1ce0f0u: goto label_1ce0f0;
        case 0x1ce0f4u: goto label_1ce0f4;
        case 0x1ce0f8u: goto label_1ce0f8;
        case 0x1ce0fcu: goto label_1ce0fc;
        case 0x1ce100u: goto label_1ce100;
        case 0x1ce104u: goto label_1ce104;
        case 0x1ce108u: goto label_1ce108;
        case 0x1ce10cu: goto label_1ce10c;
        case 0x1ce110u: goto label_1ce110;
        case 0x1ce114u: goto label_1ce114;
        case 0x1ce118u: goto label_1ce118;
        case 0x1ce11cu: goto label_1ce11c;
        case 0x1ce120u: goto label_1ce120;
        case 0x1ce124u: goto label_1ce124;
        case 0x1ce128u: goto label_1ce128;
        case 0x1ce12cu: goto label_1ce12c;
        case 0x1ce130u: goto label_1ce130;
        case 0x1ce134u: goto label_1ce134;
        case 0x1ce138u: goto label_1ce138;
        case 0x1ce13cu: goto label_1ce13c;
        case 0x1ce140u: goto label_1ce140;
        case 0x1ce144u: goto label_1ce144;
        case 0x1ce148u: goto label_1ce148;
        case 0x1ce14cu: goto label_1ce14c;
        case 0x1ce150u: goto label_1ce150;
        case 0x1ce154u: goto label_1ce154;
        case 0x1ce158u: goto label_1ce158;
        case 0x1ce15cu: goto label_1ce15c;
        case 0x1ce160u: goto label_1ce160;
        case 0x1ce164u: goto label_1ce164;
        case 0x1ce168u: goto label_1ce168;
        case 0x1ce16cu: goto label_1ce16c;
        case 0x1ce170u: goto label_1ce170;
        case 0x1ce174u: goto label_1ce174;
        case 0x1ce178u: goto label_1ce178;
        case 0x1ce17cu: goto label_1ce17c;
        case 0x1ce180u: goto label_1ce180;
        case 0x1ce184u: goto label_1ce184;
        case 0x1ce188u: goto label_1ce188;
        case 0x1ce18cu: goto label_1ce18c;
        case 0x1ce190u: goto label_1ce190;
        case 0x1ce194u: goto label_1ce194;
        case 0x1ce198u: goto label_1ce198;
        case 0x1ce19cu: goto label_1ce19c;
        case 0x1ce1a0u: goto label_1ce1a0;
        case 0x1ce1a4u: goto label_1ce1a4;
        case 0x1ce1a8u: goto label_1ce1a8;
        case 0x1ce1acu: goto label_1ce1ac;
        case 0x1ce1b0u: goto label_1ce1b0;
        case 0x1ce1b4u: goto label_1ce1b4;
        case 0x1ce1b8u: goto label_1ce1b8;
        case 0x1ce1bcu: goto label_1ce1bc;
        case 0x1ce1c0u: goto label_1ce1c0;
        case 0x1ce1c4u: goto label_1ce1c4;
        case 0x1ce1c8u: goto label_1ce1c8;
        case 0x1ce1ccu: goto label_1ce1cc;
        case 0x1ce1d0u: goto label_1ce1d0;
        case 0x1ce1d4u: goto label_1ce1d4;
        case 0x1ce1d8u: goto label_1ce1d8;
        case 0x1ce1dcu: goto label_1ce1dc;
        case 0x1ce1e0u: goto label_1ce1e0;
        case 0x1ce1e4u: goto label_1ce1e4;
        case 0x1ce1e8u: goto label_1ce1e8;
        case 0x1ce1ecu: goto label_1ce1ec;
        case 0x1ce1f0u: goto label_1ce1f0;
        case 0x1ce1f4u: goto label_1ce1f4;
        case 0x1ce1f8u: goto label_1ce1f8;
        case 0x1ce1fcu: goto label_1ce1fc;
        case 0x1ce200u: goto label_1ce200;
        case 0x1ce204u: goto label_1ce204;
        case 0x1ce208u: goto label_1ce208;
        case 0x1ce20cu: goto label_1ce20c;
        case 0x1ce210u: goto label_1ce210;
        case 0x1ce214u: goto label_1ce214;
        case 0x1ce218u: goto label_1ce218;
        case 0x1ce21cu: goto label_1ce21c;
        case 0x1ce220u: goto label_1ce220;
        case 0x1ce224u: goto label_1ce224;
        case 0x1ce228u: goto label_1ce228;
        case 0x1ce22cu: goto label_1ce22c;
        case 0x1ce230u: goto label_1ce230;
        case 0x1ce234u: goto label_1ce234;
        case 0x1ce238u: goto label_1ce238;
        case 0x1ce23cu: goto label_1ce23c;
        case 0x1ce240u: goto label_1ce240;
        case 0x1ce244u: goto label_1ce244;
        case 0x1ce248u: goto label_1ce248;
        case 0x1ce24cu: goto label_1ce24c;
        case 0x1ce250u: goto label_1ce250;
        case 0x1ce254u: goto label_1ce254;
        case 0x1ce258u: goto label_1ce258;
        case 0x1ce25cu: goto label_1ce25c;
        case 0x1ce260u: goto label_1ce260;
        case 0x1ce264u: goto label_1ce264;
        case 0x1ce268u: goto label_1ce268;
        case 0x1ce26cu: goto label_1ce26c;
        case 0x1ce270u: goto label_1ce270;
        case 0x1ce274u: goto label_1ce274;
        case 0x1ce278u: goto label_1ce278;
        case 0x1ce27cu: goto label_1ce27c;
        case 0x1ce280u: goto label_1ce280;
        case 0x1ce284u: goto label_1ce284;
        case 0x1ce288u: goto label_1ce288;
        case 0x1ce28cu: goto label_1ce28c;
        case 0x1ce290u: goto label_1ce290;
        case 0x1ce294u: goto label_1ce294;
        default: return;
    }

label_1cdac8:
    // 0x1cdac8: 0xc08f0cc  jal         func_23C330
label_1cdacc:
    if (ctx->pc == 0x1CDACCu) {
        ctx->pc = 0x1CDACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAC8u;
        // 0x1cdacc: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDAD0u;
        goto label_1cdad0;
    }
    ctx->pc = 0x1CDAC8u;
    SET_GPR_U32(ctx, 31, 0x1CDAD0u);
    ctx->pc = 0x1CDACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAC8u;
    // 0x1cdacc: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CDAD0u;
label_1cdad0:
    // 0x1cdad0: 0x920302ea  lbu         $v1, 0x2EA($s0)
    ctx->pc = 0x1cdad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
label_1cdad4:
    // 0x1cdad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdad8:
    // 0x1cdad8: 0x0  nop
    ctx->pc = 0x1cdad8u;
    // NOP
label_1cdadc:
    // 0x1cdadc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cdadcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cdae0:
    // 0x1cdae0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cdae4:
    // 0x1cdae4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1cdae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1cdae8:
    // 0x1cdae8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cdae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cdaec:
    // 0x1cdaec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdaf0:
    // 0x1cdaf0: 0x0  nop
    ctx->pc = 0x1cdaf0u;
    // NOP
label_1cdaf4:
    // 0x1cdaf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cdaf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cdaf8:
    // 0x1cdaf8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cdaf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cdafc:
    // 0x1cdafc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cdafcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cdb00:
    // 0x1cdb00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cdb00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cdb04:
    // 0x1cdb04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cdb04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cdb08:
    // 0x1cdb08: 0x0  nop
    ctx->pc = 0x1cdb08u;
    // NOP
label_1cdb0c:
    // 0x1cdb0c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cdb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1cdb10:
    // 0x1cdb10: 0xc08f0cc  jal         func_23C330
label_1cdb14:
    if (ctx->pc == 0x1CDB14u) {
        ctx->pc = 0x1CDB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB10u;
        // 0x1cdb14: 0xa20202e8  sb          $v0, 0x2E8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDB18u;
        goto label_1cdb18;
    }
    ctx->pc = 0x1CDB10u;
    SET_GPR_U32(ctx, 31, 0x1CDB18u);
    ctx->pc = 0x1CDB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB10u;
    // 0x1cdb14: 0xa20202e8  sb          $v0, 0x2E8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CDB18u;
label_1cdb18:
    // 0x1cdb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdb1c:
    // 0x1cdb1c: 0x0  nop
    ctx->pc = 0x1cdb1cu;
    // NOP
label_1cdb20:
    // 0x1cdb20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cdb20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cdb24:
    // 0x1cdb24: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1cdb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1cdb28:
    // 0x1cdb28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cdb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cdb2c:
    // 0x1cdb2c: 0x0  nop
    ctx->pc = 0x1cdb2cu;
    // NOP
label_1cdb30:
    // 0x1cdb30: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1cdb30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1cdb34:
    // 0x1cdb34: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cdb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cdb38:
    // 0x1cdb38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdb3c:
    // 0x1cdb3c: 0x0  nop
    ctx->pc = 0x1cdb3cu;
    // NOP
label_1cdb40:
    // 0x1cdb40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cdb40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cdb44:
    // 0x1cdb44: 0x0  nop
    ctx->pc = 0x1cdb44u;
    // NOP
label_1cdb48:
    // 0x1cdb48: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1cdb48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1cdb4c:
    // 0x1cdb4c: 0xc08f0cc  jal         func_23C330
label_1cdb50:
    if (ctx->pc == 0x1CDB50u) {
        ctx->pc = 0x1CDB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB4Cu;
        // 0x1cdb50: 0xe6000300  swc1        $f0, 0x300($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDB54u;
        goto label_1cdb54;
    }
    ctx->pc = 0x1CDB4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDB54u);
    ctx->pc = 0x1CDB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB4Cu;
    // 0x1cdb50: 0xe6000300  swc1        $f0, 0x300($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CDB54u;
label_1cdb54:
    // 0x1cdb54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cdb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cdb58:
    // 0x1cdb58: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cdb5c:
    // 0x1cdb5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdb5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdb60:
    // 0x1cdb60: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
label_1cdb64:
    // 0x1cdb64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cdb64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cdb68:
    // 0x1cdb68: 0x2484dbb0  addiu       $a0, $a0, -0x2450
    ctx->pc = 0x1cdb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958000));
label_1cdb6c:
    // 0x1cdb6c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1cdb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1cdb70:
    // 0x1cdb70: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x1cdb70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1cdb74:
    // 0x1cdb74: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1cdb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
label_1cdb78:
    // 0x1cdb78: 0x24637180  addiu       $v1, $v1, 0x7180
    ctx->pc = 0x1cdb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29056));
label_1cdb7c:
    // 0x1cdb7c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1cdb7cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1cdb80:
    // 0x1cdb80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cdb80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdb84:
    // 0x1cdb84: 0x0  nop
    ctx->pc = 0x1cdb84u;
    // NOP
label_1cdb88:
    // 0x1cdb88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cdb88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cdb8c:
    // 0x1cdb8c: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x1cdb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
label_1cdb90:
    // 0x1cdb90: 0xae040364  sw          $a0, 0x364($s0)
    ctx->pc = 0x1cdb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 4));
label_1cdb94:
    // 0x1cdb94: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x1cdb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
label_1cdb98:
    // 0x1cdb98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cdb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cdb9c:
    // 0x1cdb9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cdb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cdba0:
    // 0x1cdba0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cdba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cdba4:
    // 0x1cdba4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cdba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdba8:
    // 0x1cdba8: 0x3e00008  jr          $ra
label_1cdbac:
    if (ctx->pc == 0x1CDBACu) {
        ctx->pc = 0x1CDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBA8u;
        // 0x1cdbac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBB0u;
        goto label_1cdbb0;
    }
    ctx->pc = 0x1CDBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBA8u;
        // 0x1cdbac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDBB0u;
label_1cdbb0:
    // 0x1cdbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cdbb4:
    // 0x1cdbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cdbb8:
    // 0x1cdbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cdbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cdbbc:
    // 0x1cdbbc: 0xc071740  jal         func_1C5D00
label_1cdbc0:
    if (ctx->pc == 0x1CDBC0u) {
        ctx->pc = 0x1CDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBBCu;
        // 0x1cdbc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBC4u;
        goto label_1cdbc4;
    }
    ctx->pc = 0x1CDBBCu;
    SET_GPR_U32(ctx, 31, 0x1CDBC4u);
    ctx->pc = 0x1CDBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBBCu;
    // 0x1cdbc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1CDBC4u;
label_1cdbc4:
    // 0x1cdbc4: 0xc071728  jal         func_1C5CA0
label_1cdbc8:
    if (ctx->pc == 0x1CDBC8u) {
        ctx->pc = 0x1CDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBC4u;
        // 0x1cdbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBCCu;
        goto label_1cdbcc;
    }
    ctx->pc = 0x1CDBC4u;
    SET_GPR_U32(ctx, 31, 0x1CDBCCu);
    ctx->pc = 0x1CDBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBC4u;
    // 0x1cdbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    { ctx->pc = 0x1c5ca0; return; }
    ctx->pc = 0x1CDBCCu;
label_1cdbcc:
    // 0x1cdbcc: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x1cdbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdbd0:
    // 0x1cdbd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cdbd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdbd4:
    // 0x1cdbd4: 0x0  nop
    ctx->pc = 0x1cdbd4u;
    // NOP
label_1cdbd8:
    // 0x1cdbd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cdbdc:
    // 0x1cdbdc: 0x0  nop
    ctx->pc = 0x1cdbdcu;
    // NOP
label_1cdbe0:
    // 0x1cdbe0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1cdbe4:
    if (ctx->pc == 0x1CDBE4u) {
        ctx->pc = 0x1CDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE0u;
        // 0x1cdbe4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBE8u;
        goto label_1cdbe8;
    }
    ctx->pc = 0x1CDBE0u;
    {
        const bool branch_taken_0x1cdbe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE0u;
        // 0x1cdbe4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbe0) {
            ctx->pc = 0x1CDBFCu;
            goto label_1cdbfc;
        }
    }
    ctx->pc = 0x1CDBE8u;
label_1cdbe8:
    // 0x1cdbe8: 0xc0591f4  jal         func_1647D0
label_1cdbec:
    if (ctx->pc == 0x1CDBECu) {
        ctx->pc = 0x1CDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE8u;
        // 0x1cdbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBF0u;
        goto label_1cdbf0;
    }
    ctx->pc = 0x1CDBE8u;
    SET_GPR_U32(ctx, 31, 0x1CDBF0u);
    ctx->pc = 0x1CDBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBE8u;
    // 0x1cdbec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CDBE8u, 0x1CDBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBF0u;
label_1cdbf0:
    // 0x1cdbf0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1cdbf4:
    if (ctx->pc == 0x1CDBF4u) {
        ctx->pc = 0x1CDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF0u;
        // 0x1cdbf4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDBF8u;
        goto label_1cdbf8;
    }
    ctx->pc = 0x1CDBF0u;
    {
        const bool branch_taken_0x1cdbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF0u;
        // 0x1cdbf4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbf0) {
            ctx->pc = 0x1CDC6Cu;
            goto label_1cdc6c;
        }
    }
    ctx->pc = 0x1CDBF8u;
label_1cdbf8:
    // 0x1cdbf8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cdbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1cdbfc:
    // 0x1cdbfc: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x1cdbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_1cdc00:
    // 0x1cdc00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdc00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdc04:
    // 0x1cdc04: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1cdc04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cdc08:
    // 0x1cdc08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cdc08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cdc0c:
    // 0x1cdc0c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1cdc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1cdc10:
    // 0x1cdc10: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x1cdc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_1cdc14:
    // 0x1cdc14: 0xc6020300  lwc1        $f2, 0x300($s0)
    ctx->pc = 0x1cdc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cdc18:
    // 0x1cdc18: 0xc6010254  lwc1        $f1, 0x254($s0)
    ctx->pc = 0x1cdc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdc1c:
    // 0x1cdc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdc20:
    // 0x1cdc20: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1cdc20u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_1cdc24:
    // 0x1cdc24: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1cdc24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1cdc28:
    // 0x1cdc28: 0xe6010254  swc1        $f1, 0x254($s0)
    ctx->pc = 0x1cdc28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 596), bits); }
label_1cdc2c:
    // 0x1cdc2c: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x1cdc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdc30:
    // 0x1cdc30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdc30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cdc34:
    // 0x1cdc34: 0x0  nop
    ctx->pc = 0x1cdc34u;
    // NOP
label_1cdc38:
    // 0x1cdc38: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1cdc3c:
    if (ctx->pc == 0x1CDC3Cu) {
        ctx->pc = 0x1CDC40u;
        goto label_1cdc40;
    }
    ctx->pc = 0x1CDC38u;
    {
        const bool branch_taken_0x1cdc38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdc38) {
            ctx->pc = 0x1CDC68u;
            goto label_1cdc68;
        }
    }
    ctx->pc = 0x1CDC40u;
label_1cdc40:
    // 0x1cdc40: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x1cdc40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1cdc44:
    // 0x1cdc44: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1cdc44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cdc48:
    // 0x1cdc48: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1cdc4c:
    if (ctx->pc == 0x1CDC4Cu) {
        ctx->pc = 0x1CDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC48u;
        // 0x1cdc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC50u;
        goto label_1cdc50;
    }
    ctx->pc = 0x1CDC48u;
    {
        const bool branch_taken_0x1cdc48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC48u;
        // 0x1cdc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc48) {
            ctx->pc = 0x1CDC60u;
            goto label_1cdc60;
        }
    }
    ctx->pc = 0x1CDC50u;
label_1cdc50:
    // 0x1cdc50: 0x2463fffb  addiu       $v1, $v1, -0x5
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_1cdc54:
    // 0x1cdc54: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cdc58:
    if (ctx->pc == 0x1CDC58u) {
        ctx->pc = 0x1CDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC54u;
        // 0x1cdc58: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC5Cu;
        goto label_1cdc5c;
    }
    ctx->pc = 0x1CDC54u;
    {
        const bool branch_taken_0x1cdc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC54u;
        // 0x1cdc58: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc54) {
            ctx->pc = 0x1CDC68u;
            goto label_1cdc68;
        }
    }
    ctx->pc = 0x1CDC5Cu;
label_1cdc5c:
    // 0x1cdc5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cdc60:
    // 0x1cdc60: 0xc0591f4  jal         func_1647D0
label_1cdc64:
    if (ctx->pc == 0x1CDC64u) {
        ctx->pc = 0x1CDC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC60u;
        // 0x1cdc64: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC68u;
        goto label_1cdc68;
    }
    ctx->pc = 0x1CDC60u;
    SET_GPR_U32(ctx, 31, 0x1CDC68u);
    ctx->pc = 0x1CDC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC60u;
    // 0x1cdc64: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CDC60u, 0x1CDC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC68u;
label_1cdc68:
    // 0x1cdc68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdc6c:
    // 0x1cdc6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdc6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdc70:
    // 0x1cdc70: 0x3e00008  jr          $ra
label_1cdc74:
    if (ctx->pc == 0x1CDC74u) {
        ctx->pc = 0x1CDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC70u;
        // 0x1cdc74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDC78u;
        goto label_1cdc78;
    }
    ctx->pc = 0x1CDC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC70u;
        // 0x1cdc74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC78u;
label_1cdc78:
    // 0x1cdc78: 0x0  nop
    ctx->pc = 0x1cdc78u;
    // NOP
label_1cdc7c:
    // 0x1cdc7c: 0x0  nop
    ctx->pc = 0x1cdc7cu;
    // NOP
label_1cdc80:
    // 0x1cdc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cdc84:
    // 0x1cdc84: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cdc88:
    // 0x1cdc88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cdc8c:
    // 0x1cdc8c: 0x244290e0  addiu       $v0, $v0, -0x6F20
    ctx->pc = 0x1cdc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938848));
label_1cdc90:
    // 0x1cdc90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cdc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cdc94:
    // 0x1cdc94: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1cdc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cdc98:
    // 0x1cdc98: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1cdc98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1cdc9c:
    // 0x1cdc9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdca0:
    // 0x1cdca0: 0xc071740  jal         func_1C5D00
label_1cdca4:
    if (ctx->pc == 0x1CDCA4u) {
        ctx->pc = 0x1CDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCA0u;
        // 0x1cdca4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCA8u;
        goto label_1cdca8;
    }
    ctx->pc = 0x1CDCA0u;
    SET_GPR_U32(ctx, 31, 0x1CDCA8u);
    ctx->pc = 0x1CDCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCA0u;
    // 0x1cdca4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1CDCA8u;
label_1cdca8:
    // 0x1cdca8: 0xc071728  jal         func_1C5CA0
label_1cdcac:
    if (ctx->pc == 0x1CDCACu) {
        ctx->pc = 0x1CDCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCA8u;
        // 0x1cdcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCB0u;
        goto label_1cdcb0;
    }
    ctx->pc = 0x1CDCA8u;
    SET_GPR_U32(ctx, 31, 0x1CDCB0u);
    ctx->pc = 0x1CDCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCA8u;
    // 0x1cdcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    { ctx->pc = 0x1c5ca0; return; }
    ctx->pc = 0x1CDCB0u;
label_1cdcb0:
    // 0x1cdcb0: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x1cdcb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1cdcb4:
    // 0x1cdcb4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1cdcb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cdcb8:
    // 0x1cdcb8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1cdcbc:
    if (ctx->pc == 0x1CDCBCu) {
        ctx->pc = 0x1CDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCB8u;
        // 0x1cdcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCC0u;
        goto label_1cdcc0;
    }
    ctx->pc = 0x1CDCB8u;
    {
        const bool branch_taken_0x1cdcb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCB8u;
        // 0x1cdcbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcb8) {
            ctx->pc = 0x1CDCD0u;
            goto label_1cdcd0;
        }
    }
    ctx->pc = 0x1CDCC0u;
label_1cdcc0:
    // 0x1cdcc0: 0xc0591f4  jal         func_1647D0
label_1cdcc4:
    if (ctx->pc == 0x1CDCC4u) {
        ctx->pc = 0x1CDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCC0u;
        // 0x1cdcc4: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCC8u;
        goto label_1cdcc8;
    }
    ctx->pc = 0x1CDCC0u;
    SET_GPR_U32(ctx, 31, 0x1CDCC8u);
    ctx->pc = 0x1CDCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCC0u;
    // 0x1cdcc4: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CDCC0u, 0x1CDCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCC8u;
label_1cdcc8:
    // 0x1cdcc8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1cdccc:
    if (ctx->pc == 0x1CDCCCu) {
        ctx->pc = 0x1CDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCC8u;
        // 0x1cdccc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCD0u;
        goto label_1cdcd0;
    }
    ctx->pc = 0x1CDCC8u;
    {
        const bool branch_taken_0x1cdcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCC8u;
        // 0x1cdccc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcc8) {
            ctx->pc = 0x1CDD1Cu;
            goto label_1cdd1c;
        }
    }
    ctx->pc = 0x1CDCD0u;
label_1cdcd0:
    // 0x1cdcd0: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x1cdcd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
label_1cdcd4:
    // 0x1cdcd4: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x1cdcd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
label_1cdcd8:
    // 0x1cdcd8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1cdcdc:
    if (ctx->pc == 0x1CDCDCu) {
        ctx->pc = 0x1CDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCD8u;
        // 0x1cdcdc: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCE0u;
        goto label_1cdce0;
    }
    ctx->pc = 0x1CDCD8u;
    {
        const bool branch_taken_0x1cdcd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCD8u;
        // 0x1cdcdc: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcd8) {
            ctx->pc = 0x1CDCE8u;
            goto label_1cdce8;
        }
    }
    ctx->pc = 0x1CDCE0u;
label_1cdce0:
    // 0x1cdce0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1cdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1cdce4:
    // 0x1cdce4: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x1cdce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
label_1cdce8:
    // 0x1cdce8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cdce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cdcec:
    // 0x1cdcec: 0xc066e02  jal         func_19B808
label_1cdcf0:
    if (ctx->pc == 0x1CDCF0u) {
        ctx->pc = 0x1CDCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCECu;
        // 0x1cdcf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDCF4u;
        goto label_1cdcf4;
    }
    ctx->pc = 0x1CDCECu;
    SET_GPR_U32(ctx, 31, 0x1CDCF4u);
    ctx->pc = 0x1CDCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCECu;
    // 0x1cdcf0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CDCF4u;
label_1cdcf4:
    // 0x1cdcf4: 0xc6010254  lwc1        $f1, 0x254($s0)
    ctx->pc = 0x1cdcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cdcf8:
    // 0x1cdcf8: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x1cdcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
label_1cdcfc:
    // 0x1cdcfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdcfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdd00:
    // 0x1cdd00: 0x0  nop
    ctx->pc = 0x1cdd00u;
    // NOP
label_1cdd04:
    // 0x1cdd04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cdd04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cdd08:
    // 0x1cdd08: 0xe6000254  swc1        $f0, 0x254($s0)
    ctx->pc = 0x1cdd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 596), bits); }
label_1cdd0c:
    // 0x1cdd0c: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1cdd0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
label_1cdd10:
    // 0x1cdd10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cdd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cdd14:
    // 0x1cdd14: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x1cdd14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
label_1cdd18:
    // 0x1cdd18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdd1c:
    // 0x1cdd1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cdd1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdd20:
    // 0x1cdd20: 0x3e00008  jr          $ra
label_1cdd24:
    if (ctx->pc == 0x1CDD24u) {
        ctx->pc = 0x1CDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD20u;
        // 0x1cdd24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD28u;
        goto label_1cdd28;
    }
    ctx->pc = 0x1CDD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD20u;
        // 0x1cdd24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD28u;
label_1cdd28:
    // 0x1cdd28: 0x0  nop
    ctx->pc = 0x1cdd28u;
    // NOP
label_1cdd2c:
    // 0x1cdd2c: 0x0  nop
    ctx->pc = 0x1cdd2cu;
    // NOP
label_1cdd30:
    // 0x1cdd30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cdd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1cdd34:
    // 0x1cdd34: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1cdd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1cdd38:
    // 0x1cdd38: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1cdd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1cdd3c:
    // 0x1cdd3c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1cdd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1cdd40:
    // 0x1cdd40: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x1cdd40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd44:
    // 0x1cdd44: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1cdd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1cdd48:
    // 0x1cdd48: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1cdd48u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd4c:
    // 0x1cdd4c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1cdd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1cdd50:
    // 0x1cdd50: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1cdd50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd54:
    // 0x1cdd54: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1cdd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1cdd58:
    // 0x1cdd58: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1cdd58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd5c:
    // 0x1cdd5c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1cdd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1cdd60:
    // 0x1cdd60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cdd60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd64:
    // 0x1cdd64: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cdd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1cdd68:
    // 0x1cdd68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1cdd68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd6c:
    // 0x1cdd6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cdd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cdd70:
    // 0x1cdd70: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1cdd70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd74:
    // 0x1cdd74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cdd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cdd78:
    // 0x1cdd78: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x1cdd78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd7c:
    // 0x1cdd7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cdd7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cdd80:
    // 0x1cdd80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cdd84:
    // 0x1cdd84: 0xc0590dc  jal         func_164370
label_1cdd88:
    if (ctx->pc == 0x1CDD88u) {
        ctx->pc = 0x1CDD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD84u;
        // 0x1cdd88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDD8Cu;
        goto label_1cdd8c;
    }
    ctx->pc = 0x1CDD84u;
    SET_GPR_U32(ctx, 31, 0x1CDD8Cu);
    ctx->pc = 0x1CDD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD84u;
    // 0x1cdd88: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1CDD84u, 0x1CDD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD8Cu;
label_1cdd8c:
    // 0x1cdd8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cdd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd90:
    // 0x1cdd90: 0x1200008c  beqz        $s0, . + 4 + (0x8C << 2)
label_1cdd94:
    if (ctx->pc == 0x1CDD94u) {
        ctx->pc = 0x1CDD98u;
        goto label_1cdd98;
    }
    ctx->pc = 0x1CDD90u;
    {
        const bool branch_taken_0x1cdd90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd90) {
            ctx->pc = 0x1CDFC4u;
            goto label_1cdfc4;
        }
    }
    ctx->pc = 0x1CDD98u;
label_1cdd98:
    // 0x1cdd98: 0xc08f0cc  jal         func_23C330
label_1cdd9c:
    if (ctx->pc == 0x1CDD9Cu) {
        ctx->pc = 0x1CDDA0u;
        goto label_1cdda0;
    }
    ctx->pc = 0x1CDD98u;
    SET_GPR_U32(ctx, 31, 0x1CDDA0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CDDA0u;
label_1cdda0:
    // 0x1cdda0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdda4:
    // 0x1cdda4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cdda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cdda8:
    // 0x1cdda8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1cdda8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cddac:
    // 0x1cddac: 0xdf868ae8  ld          $a2, -0x7518($gp)
    ctx->pc = 0x1cddacu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937320)));
label_1cddb0:
    // 0x1cddb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1cddb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cddb4:
    // 0x1cddb4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1cddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1cddb8:
    // 0x1cddb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cddb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cddbc:
    // 0x1cddbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cddbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cddc0:
    // 0x1cddc0: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x1cddc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1cddc4:
    // 0x1cddc4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1cddc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cddc8:
    // 0x1cddc8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1cddc8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_1cddcc:
    // 0x1cddcc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1cddccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1cddd0:
    // 0x1cddd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cddd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cddd4:
    // 0x1cddd4: 0x0  nop
    ctx->pc = 0x1cddd4u;
    // NOP
label_1cddd8:
    // 0x1cddd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cddd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cdddc:
    // 0x1cdddc: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x1cdddcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1cdde0:
    // 0x1cdde0: 0xc0717e8  jal         func_1C5FA0
label_1cdde4:
    if (ctx->pc == 0x1CDDE4u) {
        ctx->pc = 0x1CDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDE0u;
        // 0x1cdde4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDE8u;
        goto label_1cdde8;
    }
    ctx->pc = 0x1CDDE0u;
    SET_GPR_U32(ctx, 31, 0x1CDDE8u);
    ctx->pc = 0x1CDDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDE0u;
    // 0x1cdde4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    { ctx->pc = 0x1c5fa0; return; }
    ctx->pc = 0x1CDDE8u;
label_1cdde8:
    // 0x1cdde8: 0xc0717c8  jal         func_1C5F20
label_1cddec:
    if (ctx->pc == 0x1CDDECu) {
        ctx->pc = 0x1CDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDE8u;
        // 0x1cddec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDF0u;
        goto label_1cddf0;
    }
    ctx->pc = 0x1CDDE8u;
    SET_GPR_U32(ctx, 31, 0x1CDDF0u);
    ctx->pc = 0x1CDDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDE8u;
    // 0x1cddec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    { ctx->pc = 0x1c5f20; return; }
    ctx->pc = 0x1CDDF0u;
label_1cddf0:
    // 0x1cddf0: 0xc08f0cc  jal         func_23C330
label_1cddf4:
    if (ctx->pc == 0x1CDDF4u) {
        ctx->pc = 0x1CDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDF0u;
        // 0x1cddf4: 0x921402e9  lbu         $s4, 0x2E9($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDDF8u;
        goto label_1cddf8;
    }
    ctx->pc = 0x1CDDF0u;
    SET_GPR_U32(ctx, 31, 0x1CDDF8u);
    ctx->pc = 0x1CDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDF0u;
    // 0x1cddf4: 0x921402e9  lbu         $s4, 0x2E9($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CDDF8u;
label_1cddf8:
    // 0x1cddf8: 0x920302ea  lbu         $v1, 0x2EA($s0)
    ctx->pc = 0x1cddf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
label_1cddfc:
    // 0x1cddfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cddfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cde00:
    // 0x1cde00: 0x0  nop
    ctx->pc = 0x1cde00u;
    // NOP
label_1cde04:
    // 0x1cde04: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cde04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cde08:
    // 0x1cde08: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cde08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cde0c:
    // 0x1cde0c: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x1cde0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1cde10:
    // 0x1cde10: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cde10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cde14:
    // 0x1cde14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cde14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cde18:
    // 0x1cde18: 0x0  nop
    ctx->pc = 0x1cde18u;
    // NOP
label_1cde1c:
    // 0x1cde1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cde1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cde20:
    // 0x1cde20: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cde20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cde24:
    // 0x1cde24: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cde24u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cde28:
    // 0x1cde28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cde28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cde2c:
    // 0x1cde2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cde2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1cde30:
    // 0x1cde30: 0x0  nop
    ctx->pc = 0x1cde30u;
    // NOP
label_1cde34:
    // 0x1cde34: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1cde34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1cde38:
    // 0x1cde38: 0xa20202e8  sb          $v0, 0x2E8($s0)
    ctx->pc = 0x1cde38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 2));
label_1cde3c:
    // 0x1cde3c: 0xc08f0cc  jal         func_23C330
label_1cde40:
    if (ctx->pc == 0x1CDE40u) {
        ctx->pc = 0x1CDE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE3Cu;
        // 0x1cde40: 0xa21702e1  sb          $s7, 0x2E1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDE44u;
        goto label_1cde44;
    }
    ctx->pc = 0x1CDE3Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE44u);
    ctx->pc = 0x1CDE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE3Cu;
    // 0x1cde40: 0xa21702e1  sb          $s7, 0x2E1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CDE44u;
label_1cde44:
    // 0x1cde44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cde44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cde48:
    // 0x1cde48: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1cde48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1cde4c:
    // 0x1cde4c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cde4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cde50:
    // 0x1cde50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cde50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cde54:
    // 0x1cde54: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cde54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cde58:
    // 0x1cde58: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cde58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cde5c:
    // 0x1cde5c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cde5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1cde60:
    // 0x1cde60: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cde60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cde64:
    // 0x1cde64: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1cde64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cde68:
    // 0x1cde68: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1cde68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cde6c:
    // 0x1cde6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cde6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cde70:
    // 0x1cde70: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1cde70u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1cde74:
    // 0x1cde74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cde74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cde78:
    // 0x1cde78: 0x0  nop
    ctx->pc = 0x1cde78u;
    // NOP
label_1cde7c:
    // 0x1cde7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cde7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cde80:
    // 0x1cde80: 0xc071400  jal         func_1C5000
label_1cde84:
    if (ctx->pc == 0x1CDE84u) {
        ctx->pc = 0x1CDE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE80u;
        // 0x1cde84: 0xe60002a8  swc1        $f0, 0x2A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDE88u;
        goto label_1cde88;
    }
    ctx->pc = 0x1CDE80u;
    SET_GPR_U32(ctx, 31, 0x1CDE88u);
    ctx->pc = 0x1CDE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE80u;
    // 0x1cde84: 0xe60002a8  swc1        $f0, 0x2A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    { ctx->pc = 0x1c5000; return; }
    ctx->pc = 0x1CDE88u;
label_1cde88:
    // 0x1cde88: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1cde88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cde8c:
    // 0x1cde8c: 0xc066e26  jal         func_19B898
label_1cde90:
    if (ctx->pc == 0x1CDE90u) {
        ctx->pc = 0x1CDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE8Cu;
        // 0x1cde90: 0x26040330  addiu       $a0, $s0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDE94u;
        goto label_1cde94;
    }
    ctx->pc = 0x1CDE8Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE94u);
    ctx->pc = 0x1CDE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE8Cu;
    // 0x1cde90: 0x26040330  addiu       $a0, $s0, 0x330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1CDE94u;
label_1cde94:
    // 0x1cde94: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1cde94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1cde98:
    // 0x1cde98: 0xc066e26  jal         func_19B898
label_1cde9c:
    if (ctx->pc == 0x1CDE9Cu) {
        ctx->pc = 0x1CDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE98u;
        // 0x1cde9c: 0x26040340  addiu       $a0, $s0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDEA0u;
        goto label_1cdea0;
    }
    ctx->pc = 0x1CDE98u;
    SET_GPR_U32(ctx, 31, 0x1CDEA0u);
    ctx->pc = 0x1CDE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE98u;
    // 0x1cde9c: 0x26040340  addiu       $a0, $s0, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1CDEA0u;
label_1cdea0:
    // 0x1cdea0: 0x97a300c0  lhu         $v1, 0xC0($sp)
    ctx->pc = 0x1cdea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_1cdea4:
    // 0x1cdea4: 0xa60302f8  sh          $v1, 0x2F8($s0)
    ctx->pc = 0x1cdea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 760), (uint16_t)GPR_U32(ctx, 3));
label_1cdea8:
    // 0x1cdea8: 0x97a300c8  lhu         $v1, 0xC8($sp)
    ctx->pc = 0x1cdea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 200)));
label_1cdeac:
    // 0x1cdeac: 0xa60302fa  sh          $v1, 0x2FA($s0)
    ctx->pc = 0x1cdeacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 762), (uint16_t)GPR_U32(ctx, 3));
label_1cdeb0:
    // 0x1cdeb0: 0x97a300d0  lhu         $v1, 0xD0($sp)
    ctx->pc = 0x1cdeb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
label_1cdeb4:
    // 0x1cdeb4: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_1cdeb8:
    if (ctx->pc == 0x1CDEB8u) {
        ctx->pc = 0x1CDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEB4u;
        // 0x1cdeb8: 0xa60302fc  sh          $v1, 0x2FC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 764), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDEBCu;
        goto label_1cdebc;
    }
    ctx->pc = 0x1CDEB4u;
    {
        const bool branch_taken_0x1cdeb4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1CDEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEB4u;
        // 0x1cdeb8: 0xa60302fc  sh          $v1, 0x2FC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 764), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdeb4) {
            ctx->pc = 0x1CDEC8u;
            goto label_1cdec8;
        }
    }
    ctx->pc = 0x1CDEBCu;
label_1cdebc:
    // 0x1cdebc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1cdebcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdec0:
    // 0x1cdec0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cdec4:
    if (ctx->pc == 0x1CDEC4u) {
        ctx->pc = 0x1CDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEC0u;
        // 0x1cdec4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDEC8u;
        goto label_1cdec8;
    }
    ctx->pc = 0x1CDEC0u;
    {
        const bool branch_taken_0x1cdec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEC0u;
        // 0x1cdec4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdec0) {
            ctx->pc = 0x1CDEE4u;
            goto label_1cdee4;
        }
    }
    ctx->pc = 0x1CDEC8u;
label_1cdec8:
    // 0x1cdec8: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x1cdec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_1cdecc:
    // 0x1cdecc: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x1cdeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1cded0:
    // 0x1cded0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1cded0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1cded4:
    // 0x1cded4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cded4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cded8:
    // 0x1cded8: 0x0  nop
    ctx->pc = 0x1cded8u;
    // NOP
label_1cdedc:
    // 0x1cdedc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cdedcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cdee0:
    // 0x1cdee0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cdee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cdee4:
    // 0x1cdee4: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x1cdee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_1cdee8:
    // 0x1cdee8: 0x97a300b0  lhu         $v1, 0xB0($sp)
    ctx->pc = 0x1cdee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_1cdeec:
    // 0x1cdeec: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1cdef0:
    if (ctx->pc == 0x1CDEF0u) {
        ctx->pc = 0x1CDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEECu;
        // 0x1cdef0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDEF4u;
        goto label_1cdef4;
    }
    ctx->pc = 0x1CDEECu;
    {
        const bool branch_taken_0x1cdeec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1CDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEECu;
        // 0x1cdef0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdeec) {
            ctx->pc = 0x1CDF00u;
            goto label_1cdf00;
        }
    }
    ctx->pc = 0x1CDEF4u;
label_1cdef4:
    // 0x1cdef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cdef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdef8:
    // 0x1cdef8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cdefc:
    if (ctx->pc == 0x1CDEFCu) {
        ctx->pc = 0x1CDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEF8u;
        // 0x1cdefc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDF00u;
        goto label_1cdf00;
    }
    ctx->pc = 0x1CDEF8u;
    {
        const bool branch_taken_0x1cdef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEF8u;
        // 0x1cdefc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdef8) {
            ctx->pc = 0x1CDF18u;
            goto label_1cdf18;
        }
    }
    ctx->pc = 0x1CDF00u;
label_1cdf00:
    // 0x1cdf00: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1cdf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1cdf04:
    // 0x1cdf04: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1cdf04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1cdf08:
    // 0x1cdf08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cdf08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cdf0c:
    // 0x1cdf0c: 0x0  nop
    ctx->pc = 0x1cdf0cu;
    // NOP
label_1cdf10:
    // 0x1cdf10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cdf10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cdf14:
    // 0x1cdf14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cdf14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1cdf18:
    // 0x1cdf18: 0xe6000304  swc1        $f0, 0x304($s0)
    ctx->pc = 0x1cdf18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
label_1cdf1c:
    // 0x1cdf1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cdf20:
    // 0x1cdf20: 0xa20302eb  sb          $v1, 0x2EB($s0)
    ctx->pc = 0x1cdf20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 3));
label_1cdf24:
    // 0x1cdf24: 0xa60002f6  sh          $zero, 0x2F6($s0)
    ctx->pc = 0x1cdf24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 758), (uint16_t)GPR_U32(ctx, 0));
label_1cdf28:
    // 0x1cdf28: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1cdf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1cdf2c:
    // 0x1cdf2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1cdf30:
    if (ctx->pc == 0x1CDF30u) {
        ctx->pc = 0x1CDF34u;
        goto label_1cdf34;
    }
    ctx->pc = 0x1CDF2Cu;
    {
        const bool branch_taken_0x1cdf2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf2c) {
            ctx->pc = 0x1CDF40u;
            goto label_1cdf40;
        }
    }
    ctx->pc = 0x1CDF34u;
label_1cdf34:
    // 0x1cdf34: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cdf34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1cdf38:
    // 0x1cdf38: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1cdf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1cdf3c:
    // 0x1cdf3c: 0xa60302f6  sh          $v1, 0x2F6($s0)
    ctx->pc = 0x1cdf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 758), (uint16_t)GPR_U32(ctx, 3));
label_1cdf40:
    // 0x1cdf40: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1cdf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1cdf44:
    // 0x1cdf44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1cdf48:
    if (ctx->pc == 0x1CDF48u) {
        ctx->pc = 0x1CDF4Cu;
        goto label_1cdf4c;
    }
    ctx->pc = 0x1CDF44u;
    {
        const bool branch_taken_0x1cdf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf44) {
            ctx->pc = 0x1CDF58u;
            goto label_1cdf58;
        }
    }
    ctx->pc = 0x1CDF4Cu;
label_1cdf4c:
    // 0x1cdf4c: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cdf4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1cdf50:
    // 0x1cdf50: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1cdf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1cdf54:
    // 0x1cdf54: 0xa60302f6  sh          $v1, 0x2F6($s0)
    ctx->pc = 0x1cdf54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 758), (uint16_t)GPR_U32(ctx, 3));
label_1cdf58:
    // 0x1cdf58: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1cdf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1cdf5c:
    // 0x1cdf5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1cdf60:
    if (ctx->pc == 0x1CDF60u) {
        ctx->pc = 0x1CDF64u;
        goto label_1cdf64;
    }
    ctx->pc = 0x1CDF5Cu;
    {
        const bool branch_taken_0x1cdf5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf5c) {
            ctx->pc = 0x1CDF70u;
            goto label_1cdf70;
        }
    }
    ctx->pc = 0x1CDF64u;
label_1cdf64:
    // 0x1cdf64: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cdf64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1cdf68:
    // 0x1cdf68: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1cdf68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_1cdf6c:
    // 0x1cdf6c: 0xa60302f6  sh          $v1, 0x2F6($s0)
    ctx->pc = 0x1cdf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 758), (uint16_t)GPR_U32(ctx, 3));
label_1cdf70:
    // 0x1cdf70: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1cdf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1cdf74:
    // 0x1cdf74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1cdf78:
    if (ctx->pc == 0x1CDF78u) {
        ctx->pc = 0x1CDF7Cu;
        goto label_1cdf7c;
    }
    ctx->pc = 0x1CDF74u;
    {
        const bool branch_taken_0x1cdf74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf74) {
            ctx->pc = 0x1CDF88u;
            goto label_1cdf88;
        }
    }
    ctx->pc = 0x1CDF7Cu;
label_1cdf7c:
    // 0x1cdf7c: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cdf7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1cdf80:
    // 0x1cdf80: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1cdf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_1cdf84:
    // 0x1cdf84: 0xa60302f6  sh          $v1, 0x2F6($s0)
    ctx->pc = 0x1cdf84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 758), (uint16_t)GPR_U32(ctx, 3));
label_1cdf88:
    // 0x1cdf88: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1cdf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1cdf8c:
    // 0x1cdf8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1cdf90:
    if (ctx->pc == 0x1CDF90u) {
        ctx->pc = 0x1CDF94u;
        goto label_1cdf94;
    }
    ctx->pc = 0x1CDF8Cu;
    {
        const bool branch_taken_0x1cdf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdf8c) {
            ctx->pc = 0x1CDFA0u;
            goto label_1cdfa0;
        }
    }
    ctx->pc = 0x1CDF94u;
label_1cdf94:
    // 0x1cdf94: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cdf94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1cdf98:
    // 0x1cdf98: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1cdf98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_1cdf9c:
    // 0x1cdf9c: 0xa60302f6  sh          $v1, 0x2F6($s0)
    ctx->pc = 0x1cdf9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 758), (uint16_t)GPR_U32(ctx, 3));
label_1cdfa0:
    // 0x1cdfa0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1cdfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1cdfa4:
    // 0x1cdfa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1cdfa8:
    if (ctx->pc == 0x1CDFA8u) {
        ctx->pc = 0x1CDFACu;
        goto label_1cdfac;
    }
    ctx->pc = 0x1CDFA4u;
    {
        const bool branch_taken_0x1cdfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdfa4) {
            ctx->pc = 0x1CDFB8u;
            goto label_1cdfb8;
        }
    }
    ctx->pc = 0x1CDFACu;
label_1cdfac:
    // 0x1cdfac: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cdfacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1cdfb0:
    // 0x1cdfb0: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1cdfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_1cdfb4:
    // 0x1cdfb4: 0xa60302f6  sh          $v1, 0x2F6($s0)
    ctx->pc = 0x1cdfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 758), (uint16_t)GPR_U32(ctx, 3));
label_1cdfb8:
    // 0x1cdfb8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cdfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_1cdfbc:
    // 0x1cdfbc: 0x2463e000  addiu       $v1, $v1, -0x2000
    ctx->pc = 0x1cdfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959104));
label_1cdfc0:
    // 0x1cdfc0: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x1cdfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_1cdfc4:
    // 0x1cdfc4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1cdfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1cdfc8:
    // 0x1cdfc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cdfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cdfcc:
    // 0x1cdfcc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1cdfccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1cdfd0:
    // 0x1cdfd0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1cdfd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cdfd4:
    // 0x1cdfd4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1cdfd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cdfd8:
    // 0x1cdfd8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1cdfd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cdfdc:
    // 0x1cdfdc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1cdfdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cdfe0:
    // 0x1cdfe0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1cdfe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cdfe4:
    // 0x1cdfe4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1cdfe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cdfe8:
    // 0x1cdfe8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cdfe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cdfec:
    // 0x1cdfec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cdfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cdff0:
    // 0x1cdff0: 0x3e00008  jr          $ra
label_1cdff4:
    if (ctx->pc == 0x1CDFF4u) {
        ctx->pc = 0x1CDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFF0u;
        // 0x1cdff4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CDFF8u;
        goto label_1cdff8;
    }
    ctx->pc = 0x1CDFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFF0u;
        // 0x1cdff4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDFF8u;
label_1cdff8:
    // 0x1cdff8: 0x0  nop
    ctx->pc = 0x1cdff8u;
    // NOP
label_1cdffc:
    // 0x1cdffc: 0x0  nop
    ctx->pc = 0x1cdffcu;
    // NOP
label_1ce000:
    // 0x1ce000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ce004:
    // 0x1ce004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ce008:
    // 0x1ce008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ce00c:
    // 0x1ce00c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ce010:
    // 0x1ce010: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1ce010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_1ce014:
    // 0x1ce014: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x1ce014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_1ce018:
    // 0x1ce018: 0xc066e02  jal         func_19B808
label_1ce01c:
    if (ctx->pc == 0x1CE01Cu) {
        ctx->pc = 0x1CE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE018u;
        // 0x1ce01c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE020u;
        goto label_1ce020;
    }
    ctx->pc = 0x1CE018u;
    SET_GPR_U32(ctx, 31, 0x1CE020u);
    ctx->pc = 0x1CE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE018u;
    // 0x1ce01c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CE020u;
label_1ce020:
    // 0x1ce020: 0x960502f8  lhu         $a1, 0x2F8($s0)
    ctx->pc = 0x1ce020u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
label_1ce024:
    // 0x1ce024: 0x960402fa  lhu         $a0, 0x2FA($s0)
    ctx->pc = 0x1ce024u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 762)));
label_1ce028:
    // 0x1ce028: 0x960302fc  lhu         $v1, 0x2FC($s0)
    ctx->pc = 0x1ce028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 764)));
label_1ce02c:
    // 0x1ce02c: 0x960602e6  lhu         $a2, 0x2E6($s0)
    ctx->pc = 0x1ce02cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
label_1ce030:
    // 0x1ce030: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ce030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ce034:
    // 0x1ce034: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ce034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ce038:
    // 0x1ce038: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1ce038u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ce03c:
    // 0x1ce03c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1ce040:
    if (ctx->pc == 0x1CE040u) {
        ctx->pc = 0x1CE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE03Cu;
        // 0x1ce040: 0x86082a  slt         $at, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE044u;
        goto label_1ce044;
    }
    ctx->pc = 0x1CE03Cu;
    {
        const bool branch_taken_0x1ce03c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE03Cu;
        // 0x1ce040: 0x86082a  slt         $at, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce03c) {
            ctx->pc = 0x1CE054u;
            goto label_1ce054;
        }
    }
    ctx->pc = 0x1CE044u;
label_1ce044:
    // 0x1ce044: 0xc0591f4  jal         func_1647D0
label_1ce048:
    if (ctx->pc == 0x1CE048u) {
        ctx->pc = 0x1CE048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE044u;
        // 0x1ce048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE04Cu;
        goto label_1ce04c;
    }
    ctx->pc = 0x1CE044u;
    SET_GPR_U32(ctx, 31, 0x1CE04Cu);
    ctx->pc = 0x1CE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE044u;
    // 0x1ce048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CE044u, 0x1CE04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE04Cu;
label_1ce04c:
    // 0x1ce04c: 0x10000073  b           . + 4 + (0x73 << 2)
label_1ce050:
    if (ctx->pc == 0x1CE050u) {
        ctx->pc = 0x1CE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE04Cu;
        // 0x1ce050: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE054u;
        goto label_1ce054;
    }
    ctx->pc = 0x1CE04Cu;
    {
        const bool branch_taken_0x1ce04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE04Cu;
        // 0x1ce050: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce04c) {
            ctx->pc = 0x1CE21Cu;
            goto label_1ce21c;
        }
    }
    ctx->pc = 0x1CE054u;
label_1ce054:
    // 0x1ce054: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
label_1ce058:
    if (ctx->pc == 0x1CE058u) {
        ctx->pc = 0x1CE05Cu;
        goto label_1ce05c;
    }
    ctx->pc = 0x1CE054u;
    {
        const bool branch_taken_0x1ce054 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce054) {
            ctx->pc = 0x1CE128u;
            goto label_1ce128;
        }
    }
    ctx->pc = 0x1CE05Cu;
label_1ce05c:
    // 0x1ce05c: 0xc6010304  lwc1        $f1, 0x304($s0)
    ctx->pc = 0x1ce05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce060:
    // 0x1ce060: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ce060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1ce064:
    // 0x1ce064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce068:
    // 0x1ce068: 0x0  nop
    ctx->pc = 0x1ce068u;
    // NOP
label_1ce06c:
    // 0x1ce06c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ce06cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce070:
    // 0x1ce070: 0x0  nop
    ctx->pc = 0x1ce070u;
    // NOP
label_1ce074:
    // 0x1ce074: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1ce078:
    if (ctx->pc == 0x1CE078u) {
        ctx->pc = 0x1CE07Cu;
        goto label_1ce07c;
    }
    ctx->pc = 0x1CE074u;
    {
        const bool branch_taken_0x1ce074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce074) {
            ctx->pc = 0x1CE08Cu;
            goto label_1ce08c;
        }
    }
    ctx->pc = 0x1CE07Cu;
label_1ce07c:
    // 0x1ce07c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce07cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ce080:
    // 0x1ce080: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ce080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ce084:
    // 0x1ce084: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ce088:
    if (ctx->pc == 0x1CE088u) {
        ctx->pc = 0x1CE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE084u;
        // 0x1ce088: 0x920302e3  lbu         $v1, 0x2E3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE08Cu;
        goto label_1ce08c;
    }
    ctx->pc = 0x1CE084u;
    {
        const bool branch_taken_0x1ce084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE084u;
        // 0x1ce088: 0x920302e3  lbu         $v1, 0x2E3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce084) {
            ctx->pc = 0x1CE0A8u;
            goto label_1ce0a8;
        }
    }
    ctx->pc = 0x1CE08Cu;
label_1ce08c:
    // 0x1ce08c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ce08cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ce090:
    // 0x1ce090: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ce090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1ce094:
    // 0x1ce094: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ce098:
    // 0x1ce098: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ce098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ce09c:
    // 0x1ce09c: 0x0  nop
    ctx->pc = 0x1ce09cu;
    // NOP
label_1ce0a0:
    // 0x1ce0a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ce0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1ce0a4:
    // 0x1ce0a4: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x1ce0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1ce0a8:
    // 0x1ce0a8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1ce0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1ce0ac:
    // 0x1ce0ac: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1ce0acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ce0b0:
    // 0x1ce0b0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1ce0b4:
    if (ctx->pc == 0x1CE0B4u) {
        ctx->pc = 0x1CE0B8u;
        goto label_1ce0b8;
    }
    ctx->pc = 0x1CE0B0u;
    {
        const bool branch_taken_0x1ce0b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce0b0) {
            ctx->pc = 0x1CE0C4u;
            goto label_1ce0c4;
        }
    }
    ctx->pc = 0x1CE0B8u;
label_1ce0b8:
    // 0x1ce0b8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ce0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ce0bc:
    // 0x1ce0bc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ce0c0:
    if (ctx->pc == 0x1CE0C0u) {
        ctx->pc = 0x1CE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0BCu;
        // 0x1ce0c0: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE0C4u;
        goto label_1ce0c4;
    }
    ctx->pc = 0x1CE0BCu;
    {
        const bool branch_taken_0x1ce0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0BCu;
        // 0x1ce0c0: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0bc) {
            ctx->pc = 0x1CE0E4u;
            goto label_1ce0e4;
        }
    }
    ctx->pc = 0x1CE0C4u;
label_1ce0c4:
    // 0x1ce0c4: 0xa20002e3  sb          $zero, 0x2E3($s0)
    ctx->pc = 0x1ce0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
label_1ce0c8:
    // 0x1ce0c8: 0x860502f8  lh          $a1, 0x2F8($s0)
    ctx->pc = 0x1ce0c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
label_1ce0cc:
    // 0x1ce0cc: 0x860402fa  lh          $a0, 0x2FA($s0)
    ctx->pc = 0x1ce0ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 762)));
label_1ce0d0:
    // 0x1ce0d0: 0x860302fc  lh          $v1, 0x2FC($s0)
    ctx->pc = 0x1ce0d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 764)));
label_1ce0d4:
    // 0x1ce0d4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ce0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ce0d8:
    // 0x1ce0d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ce0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ce0dc:
    // 0x1ce0dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ce0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ce0e0:
    // 0x1ce0e0: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x1ce0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
label_1ce0e4:
    // 0x1ce0e4: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1ce0e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1ce0e8:
    // 0x1ce0e8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1ce0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1ce0ec:
    // 0x1ce0ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1ce0f0:
    if (ctx->pc == 0x1CE0F0u) {
        ctx->pc = 0x1CE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0ECu;
        // 0x1ce0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE0F4u;
        goto label_1ce0f4;
    }
    ctx->pc = 0x1CE0ECu;
    {
        const bool branch_taken_0x1ce0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0ECu;
        // 0x1ce0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0ec) {
            ctx->pc = 0x1CE104u;
            goto label_1ce104;
        }
    }
    ctx->pc = 0x1CE0F4u;
label_1ce0f4:
    // 0x1ce0f4: 0xc071740  jal         func_1C5D00
label_1ce0f8:
    if (ctx->pc == 0x1CE0F8u) {
        ctx->pc = 0x1CE0FCu;
        goto label_1ce0fc;
    }
    ctx->pc = 0x1CE0F4u;
    SET_GPR_U32(ctx, 31, 0x1CE0FCu);
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1CE0FCu;
label_1ce0fc:
    // 0x1ce0fc: 0xc071728  jal         func_1C5CA0
label_1ce100:
    if (ctx->pc == 0x1CE100u) {
        ctx->pc = 0x1CE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0FCu;
        // 0x1ce100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE104u;
        goto label_1ce104;
    }
    ctx->pc = 0x1CE0FCu;
    SET_GPR_U32(ctx, 31, 0x1CE104u);
    ctx->pc = 0x1CE100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0FCu;
    // 0x1ce100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    { ctx->pc = 0x1c5ca0; return; }
    ctx->pc = 0x1CE104u;
label_1ce104:
    // 0x1ce104: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1ce104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1ce108:
    // 0x1ce108: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1ce108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1ce10c:
    // 0x1ce10c: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_1ce110:
    if (ctx->pc == 0x1CE110u) {
        ctx->pc = 0x1CE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE10Cu;
        // 0x1ce110: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE114u;
        goto label_1ce114;
    }
    ctx->pc = 0x1CE10Cu;
    {
        const bool branch_taken_0x1ce10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE10Cu;
        // 0x1ce110: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce10c) {
            ctx->pc = 0x1CE20Cu;
            goto label_1ce20c;
        }
    }
    ctx->pc = 0x1CE114u;
label_1ce114:
    // 0x1ce114: 0x26060340  addiu       $a2, $s0, 0x340
    ctx->pc = 0x1ce114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_1ce118:
    // 0x1ce118: 0xc066e02  jal         func_19B808
label_1ce11c:
    if (ctx->pc == 0x1CE11Cu) {
        ctx->pc = 0x1CE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE118u;
        // 0x1ce11c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE120u;
        goto label_1ce120;
    }
    ctx->pc = 0x1CE118u;
    SET_GPR_U32(ctx, 31, 0x1CE120u);
    ctx->pc = 0x1CE11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE118u;
    // 0x1ce11c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CE120u;
label_1ce120:
    // 0x1ce120: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1ce124:
    if (ctx->pc == 0x1CE124u) {
        ctx->pc = 0x1CE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE120u;
        // 0x1ce124: 0x960302e6  lhu         $v1, 0x2E6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE128u;
        goto label_1ce128;
    }
    ctx->pc = 0x1CE120u;
    {
        const bool branch_taken_0x1ce120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE120u;
        // 0x1ce124: 0x960302e6  lhu         $v1, 0x2E6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce120) {
            ctx->pc = 0x1CE210u;
            goto label_1ce210;
        }
    }
    ctx->pc = 0x1CE128u;
label_1ce128:
    // 0x1ce128: 0xa6082a  slt         $at, $a1, $a2
    ctx->pc = 0x1ce128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1ce12c:
    // 0x1ce12c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_1ce130:
    if (ctx->pc == 0x1CE130u) {
        ctx->pc = 0x1CE134u;
        goto label_1ce134;
    }
    ctx->pc = 0x1CE12Cu;
    {
        const bool branch_taken_0x1ce12c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce12c) {
            ctx->pc = 0x1CE178u;
            goto label_1ce178;
        }
    }
    ctx->pc = 0x1CE134u;
label_1ce134:
    // 0x1ce134: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1ce134u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1ce138:
    // 0x1ce138: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1ce138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1ce13c:
    // 0x1ce13c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1ce140:
    if (ctx->pc == 0x1CE140u) {
        ctx->pc = 0x1CE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE13Cu;
        // 0x1ce140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE144u;
        goto label_1ce144;
    }
    ctx->pc = 0x1CE13Cu;
    {
        const bool branch_taken_0x1ce13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE13Cu;
        // 0x1ce140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce13c) {
            ctx->pc = 0x1CE154u;
            goto label_1ce154;
        }
    }
    ctx->pc = 0x1CE144u;
label_1ce144:
    // 0x1ce144: 0xc071740  jal         func_1C5D00
label_1ce148:
    if (ctx->pc == 0x1CE148u) {
        ctx->pc = 0x1CE14Cu;
        goto label_1ce14c;
    }
    ctx->pc = 0x1CE144u;
    SET_GPR_U32(ctx, 31, 0x1CE14Cu);
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1CE14Cu;
label_1ce14c:
    // 0x1ce14c: 0xc071728  jal         func_1C5CA0
label_1ce150:
    if (ctx->pc == 0x1CE150u) {
        ctx->pc = 0x1CE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE14Cu;
        // 0x1ce150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE154u;
        goto label_1ce154;
    }
    ctx->pc = 0x1CE14Cu;
    SET_GPR_U32(ctx, 31, 0x1CE154u);
    ctx->pc = 0x1CE150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE14Cu;
    // 0x1ce150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    { ctx->pc = 0x1c5ca0; return; }
    ctx->pc = 0x1CE154u;
label_1ce154:
    // 0x1ce154: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1ce154u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1ce158:
    // 0x1ce158: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1ce158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1ce15c:
    // 0x1ce15c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_1ce160:
    if (ctx->pc == 0x1CE160u) {
        ctx->pc = 0x1CE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE15Cu;
        // 0x1ce160: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE164u;
        goto label_1ce164;
    }
    ctx->pc = 0x1CE15Cu;
    {
        const bool branch_taken_0x1ce15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE15Cu;
        // 0x1ce160: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce15c) {
            ctx->pc = 0x1CE20Cu;
            goto label_1ce20c;
        }
    }
    ctx->pc = 0x1CE164u;
label_1ce164:
    // 0x1ce164: 0x26060340  addiu       $a2, $s0, 0x340
    ctx->pc = 0x1ce164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_1ce168:
    // 0x1ce168: 0xc066e02  jal         func_19B808
label_1ce16c:
    if (ctx->pc == 0x1CE16Cu) {
        ctx->pc = 0x1CE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE168u;
        // 0x1ce16c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE170u;
        goto label_1ce170;
    }
    ctx->pc = 0x1CE168u;
    SET_GPR_U32(ctx, 31, 0x1CE170u);
    ctx->pc = 0x1CE16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE168u;
    // 0x1ce16c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CE170u;
label_1ce170:
    // 0x1ce170: 0x10000026  b           . + 4 + (0x26 << 2)
label_1ce174:
    if (ctx->pc == 0x1CE174u) {
        ctx->pc = 0x1CE178u;
        goto label_1ce178;
    }
    ctx->pc = 0x1CE170u;
    {
        const bool branch_taken_0x1ce170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce170) {
            ctx->pc = 0x1CE20Cu;
            goto label_1ce20c;
        }
    }
    ctx->pc = 0x1CE178u;
label_1ce178:
    // 0x1ce178: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x1ce178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ce17c:
    // 0x1ce17c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ce17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1ce180:
    // 0x1ce180: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ce180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ce184:
    // 0x1ce184: 0x0  nop
    ctx->pc = 0x1ce184u;
    // NOP
label_1ce188:
    // 0x1ce188: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ce188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ce18c:
    // 0x1ce18c: 0x0  nop
    ctx->pc = 0x1ce18cu;
    // NOP
label_1ce190:
    // 0x1ce190: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1ce194:
    if (ctx->pc == 0x1CE194u) {
        ctx->pc = 0x1CE198u;
        goto label_1ce198;
    }
    ctx->pc = 0x1CE190u;
    {
        const bool branch_taken_0x1ce190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce190) {
            ctx->pc = 0x1CE1A8u;
            goto label_1ce1a8;
        }
    }
    ctx->pc = 0x1CE198u;
label_1ce198:
    // 0x1ce198: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ce19c:
    // 0x1ce19c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ce19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ce1a0:
    // 0x1ce1a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ce1a4:
    if (ctx->pc == 0x1CE1A4u) {
        ctx->pc = 0x1CE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1A0u;
        // 0x1ce1a4: 0x920302e3  lbu         $v1, 0x2E3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE1A8u;
        goto label_1ce1a8;
    }
    ctx->pc = 0x1CE1A0u;
    {
        const bool branch_taken_0x1ce1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1A0u;
        // 0x1ce1a4: 0x920302e3  lbu         $v1, 0x2E3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1a0) {
            ctx->pc = 0x1CE1C4u;
            goto label_1ce1c4;
        }
    }
    ctx->pc = 0x1CE1A8u;
label_1ce1a8:
    // 0x1ce1a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ce1a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ce1ac:
    // 0x1ce1ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ce1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1ce1b0:
    // 0x1ce1b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce1b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ce1b4:
    // 0x1ce1b4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1ce1b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ce1b8:
    // 0x1ce1b8: 0x0  nop
    ctx->pc = 0x1ce1b8u;
    // NOP
label_1ce1bc:
    // 0x1ce1bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ce1bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1ce1c0:
    // 0x1ce1c0: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x1ce1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
label_1ce1c4:
    // 0x1ce1c4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1ce1c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ce1c8:
    // 0x1ce1c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ce1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ce1cc:
    // 0x1ce1cc: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x1ce1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
label_1ce1d0:
    // 0x1ce1d0: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1ce1d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1ce1d4:
    // 0x1ce1d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ce1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1ce1d8:
    // 0x1ce1d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1ce1dc:
    if (ctx->pc == 0x1CE1DCu) {
        ctx->pc = 0x1CE1E0u;
        goto label_1ce1e0;
    }
    ctx->pc = 0x1CE1D8u;
    {
        const bool branch_taken_0x1ce1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1d8) {
            ctx->pc = 0x1CE1F0u;
            goto label_1ce1f0;
        }
    }
    ctx->pc = 0x1CE1E0u;
label_1ce1e0:
    // 0x1ce1e0: 0xc071740  jal         func_1C5D00
label_1ce1e4:
    if (ctx->pc == 0x1CE1E4u) {
        ctx->pc = 0x1CE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1E0u;
        // 0x1ce1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE1E8u;
        goto label_1ce1e8;
    }
    ctx->pc = 0x1CE1E0u;
    SET_GPR_U32(ctx, 31, 0x1CE1E8u);
    ctx->pc = 0x1CE1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE1E0u;
    // 0x1ce1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    { ctx->pc = 0x1c5d00; return; }
    ctx->pc = 0x1CE1E8u;
label_1ce1e8:
    // 0x1ce1e8: 0xc071728  jal         func_1C5CA0
label_1ce1ec:
    if (ctx->pc == 0x1CE1ECu) {
        ctx->pc = 0x1CE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1E8u;
        // 0x1ce1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE1F0u;
        goto label_1ce1f0;
    }
    ctx->pc = 0x1CE1E8u;
    SET_GPR_U32(ctx, 31, 0x1CE1F0u);
    ctx->pc = 0x1CE1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE1E8u;
    // 0x1ce1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    { ctx->pc = 0x1c5ca0; return; }
    ctx->pc = 0x1CE1F0u;
label_1ce1f0:
    // 0x1ce1f0: 0x960302f6  lhu         $v1, 0x2F6($s0)
    ctx->pc = 0x1ce1f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 758)));
label_1ce1f4:
    // 0x1ce1f4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1ce1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_1ce1f8:
    // 0x1ce1f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ce1fc:
    if (ctx->pc == 0x1CE1FCu) {
        ctx->pc = 0x1CE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1F8u;
        // 0x1ce1fc: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE200u;
        goto label_1ce200;
    }
    ctx->pc = 0x1CE1F8u;
    {
        const bool branch_taken_0x1ce1f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1F8u;
        // 0x1ce1fc: 0x260402d0  addiu       $a0, $s0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1f8) {
            ctx->pc = 0x1CE20Cu;
            goto label_1ce20c;
        }
    }
    ctx->pc = 0x1CE200u;
label_1ce200:
    // 0x1ce200: 0x26060340  addiu       $a2, $s0, 0x340
    ctx->pc = 0x1ce200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_1ce204:
    // 0x1ce204: 0xc066e02  jal         func_19B808
label_1ce208:
    if (ctx->pc == 0x1CE208u) {
        ctx->pc = 0x1CE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE204u;
        // 0x1ce208: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE20Cu;
        goto label_1ce20c;
    }
    ctx->pc = 0x1CE204u;
    SET_GPR_U32(ctx, 31, 0x1CE20Cu);
    ctx->pc = 0x1CE208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE204u;
    // 0x1ce208: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CE20Cu;
label_1ce20c:
    // 0x1ce20c: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1ce20cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
label_1ce210:
    // 0x1ce210: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ce210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ce214:
    // 0x1ce214: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x1ce214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
label_1ce218:
    // 0x1ce218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce21c:
    // 0x1ce21c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce220:
    // 0x1ce220: 0x3e00008  jr          $ra
label_1ce224:
    if (ctx->pc == 0x1CE224u) {
        ctx->pc = 0x1CE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE220u;
        // 0x1ce224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE228u;
        goto label_1ce228;
    }
    ctx->pc = 0x1CE220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE220u;
        // 0x1ce224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE228u;
label_1ce228:
    // 0x1ce228: 0x0  nop
    ctx->pc = 0x1ce228u;
    // NOP
label_1ce22c:
    // 0x1ce22c: 0x0  nop
    ctx->pc = 0x1ce22cu;
    // NOP
label_1ce230:
    // 0x1ce230: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ce230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ce234:
    // 0x1ce234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ce238:
    // 0x1ce238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ce23c:
    // 0x1ce23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ce240:
    // 0x1ce240: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1ce240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1ce244:
    // 0x1ce244: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1ce244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_1ce248:
    // 0x1ce248: 0x146000f0  bnez        $v1, . + 4 + (0xF0 << 2)
label_1ce24c:
    if (ctx->pc == 0x1CE24Cu) {
        ctx->pc = 0x1CE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE248u;
        // 0x1ce24c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE250u;
        goto label_1ce250;
    }
    ctx->pc = 0x1CE248u;
    {
        const bool branch_taken_0x1ce248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE248u;
        // 0x1ce24c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce248) {
            ctx->pc = 0x1CE60Cu;
            { ctx->pc = 0x1ce60c; return; }
        }
    }
    ctx->pc = 0x1CE250u;
label_1ce250:
    // 0x1ce250: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ce254:
    // 0x1ce254: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1ce254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1ce258:
    // 0x1ce258: 0xc04f310  jal         func_13CC40
label_1ce25c:
    if (ctx->pc == 0x1CE25Cu) {
        ctx->pc = 0x1CE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE258u;
        // 0x1ce25c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE260u;
        goto label_1ce260;
    }
    ctx->pc = 0x1CE258u;
    SET_GPR_U32(ctx, 31, 0x1CE260u);
    ctx->pc = 0x1CE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE258u;
    // 0x1ce25c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x1CE258u, 0x1CE260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE260u;
label_1ce260:
    // 0x1ce260: 0xc0590dc  jal         func_164370
label_1ce264:
    if (ctx->pc == 0x1CE264u) {
        ctx->pc = 0x1CE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE260u;
        // 0x1ce264: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE268u;
        goto label_1ce268;
    }
    ctx->pc = 0x1CE260u;
    SET_GPR_U32(ctx, 31, 0x1CE268u);
    ctx->pc = 0x1CE264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE260u;
    // 0x1ce264: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1CE260u, 0x1CE268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE268u;
label_1ce268:
    // 0x1ce268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce26c:
    // 0x1ce26c: 0x120000e7  beqz        $s0, . + 4 + (0xE7 << 2)
label_1ce270:
    if (ctx->pc == 0x1CE270u) {
        ctx->pc = 0x1CE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE26Cu;
        // 0x1ce270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE274u;
        goto label_1ce274;
    }
    ctx->pc = 0x1CE26Cu;
    {
        const bool branch_taken_0x1ce26c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE26Cu;
        // 0x1ce270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce26c) {
            ctx->pc = 0x1CE60Cu;
            { ctx->pc = 0x1ce60c; return; }
        }
    }
    ctx->pc = 0x1CE274u;
label_1ce274:
    // 0x1ce274: 0xc0646d4  jal         func_191B50
label_1ce278:
    if (ctx->pc == 0x1CE278u) {
        ctx->pc = 0x1CE278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE274u;
        // 0x1ce278: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE27Cu;
        goto label_1ce27c;
    }
    ctx->pc = 0x1CE274u;
    SET_GPR_U32(ctx, 31, 0x1CE27Cu);
    ctx->pc = 0x1CE278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE274u;
    // 0x1ce278: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B50u, 0x1CE274u, 0x1CE27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE27Cu;
label_1ce27c:
    // 0x1ce27c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1ce27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1ce280:
    // 0x1ce280: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ce280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ce284:
    // 0x1ce284: 0x244290d0  addiu       $v0, $v0, -0x6F30
    ctx->pc = 0x1ce284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938832));
label_1ce288:
    // 0x1ce288: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ce288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ce28c:
    // 0x1ce28c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ce28cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1ce290:
    // 0x1ce290: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1ce290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ce294:
    // 0x1ce294: 0xc066d98  jal         func_19B660
    ctx->pc = 0x1ce298u;
    return;
}

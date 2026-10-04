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


void FUN_0019b910_part71(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bdbf0u: goto label_1bdbf0;
        case 0x1bdbf4u: goto label_1bdbf4;
        case 0x1bdbf8u: goto label_1bdbf8;
        case 0x1bdbfcu: goto label_1bdbfc;
        case 0x1bdc00u: goto label_1bdc00;
        case 0x1bdc04u: goto label_1bdc04;
        case 0x1bdc08u: goto label_1bdc08;
        case 0x1bdc0cu: goto label_1bdc0c;
        case 0x1bdc10u: goto label_1bdc10;
        case 0x1bdc14u: goto label_1bdc14;
        case 0x1bdc18u: goto label_1bdc18;
        case 0x1bdc1cu: goto label_1bdc1c;
        case 0x1bdc20u: goto label_1bdc20;
        case 0x1bdc24u: goto label_1bdc24;
        case 0x1bdc28u: goto label_1bdc28;
        case 0x1bdc2cu: goto label_1bdc2c;
        case 0x1bdc30u: goto label_1bdc30;
        case 0x1bdc34u: goto label_1bdc34;
        case 0x1bdc38u: goto label_1bdc38;
        case 0x1bdc3cu: goto label_1bdc3c;
        case 0x1bdc40u: goto label_1bdc40;
        case 0x1bdc44u: goto label_1bdc44;
        case 0x1bdc48u: goto label_1bdc48;
        case 0x1bdc4cu: goto label_1bdc4c;
        case 0x1bdc50u: goto label_1bdc50;
        case 0x1bdc54u: goto label_1bdc54;
        case 0x1bdc58u: goto label_1bdc58;
        case 0x1bdc5cu: goto label_1bdc5c;
        case 0x1bdc60u: goto label_1bdc60;
        case 0x1bdc64u: goto label_1bdc64;
        case 0x1bdc68u: goto label_1bdc68;
        case 0x1bdc6cu: goto label_1bdc6c;
        case 0x1bdc70u: goto label_1bdc70;
        case 0x1bdc74u: goto label_1bdc74;
        case 0x1bdc78u: goto label_1bdc78;
        case 0x1bdc7cu: goto label_1bdc7c;
        case 0x1bdc80u: goto label_1bdc80;
        case 0x1bdc84u: goto label_1bdc84;
        case 0x1bdc88u: goto label_1bdc88;
        case 0x1bdc8cu: goto label_1bdc8c;
        case 0x1bdc90u: goto label_1bdc90;
        case 0x1bdc94u: goto label_1bdc94;
        case 0x1bdc98u: goto label_1bdc98;
        case 0x1bdc9cu: goto label_1bdc9c;
        case 0x1bdca0u: goto label_1bdca0;
        case 0x1bdca4u: goto label_1bdca4;
        case 0x1bdca8u: goto label_1bdca8;
        case 0x1bdcacu: goto label_1bdcac;
        case 0x1bdcb0u: goto label_1bdcb0;
        case 0x1bdcb4u: goto label_1bdcb4;
        case 0x1bdcb8u: goto label_1bdcb8;
        case 0x1bdcbcu: goto label_1bdcbc;
        case 0x1bdcc0u: goto label_1bdcc0;
        case 0x1bdcc4u: goto label_1bdcc4;
        case 0x1bdcc8u: goto label_1bdcc8;
        case 0x1bdcccu: goto label_1bdccc;
        case 0x1bdcd0u: goto label_1bdcd0;
        case 0x1bdcd4u: goto label_1bdcd4;
        case 0x1bdcd8u: goto label_1bdcd8;
        case 0x1bdcdcu: goto label_1bdcdc;
        case 0x1bdce0u: goto label_1bdce0;
        case 0x1bdce4u: goto label_1bdce4;
        case 0x1bdce8u: goto label_1bdce8;
        case 0x1bdcecu: goto label_1bdcec;
        case 0x1bdcf0u: goto label_1bdcf0;
        case 0x1bdcf4u: goto label_1bdcf4;
        case 0x1bdcf8u: goto label_1bdcf8;
        case 0x1bdcfcu: goto label_1bdcfc;
        case 0x1bdd00u: goto label_1bdd00;
        case 0x1bdd04u: goto label_1bdd04;
        case 0x1bdd08u: goto label_1bdd08;
        case 0x1bdd0cu: goto label_1bdd0c;
        case 0x1bdd10u: goto label_1bdd10;
        case 0x1bdd14u: goto label_1bdd14;
        case 0x1bdd18u: goto label_1bdd18;
        case 0x1bdd1cu: goto label_1bdd1c;
        case 0x1bdd20u: goto label_1bdd20;
        case 0x1bdd24u: goto label_1bdd24;
        case 0x1bdd28u: goto label_1bdd28;
        case 0x1bdd2cu: goto label_1bdd2c;
        case 0x1bdd30u: goto label_1bdd30;
        case 0x1bdd34u: goto label_1bdd34;
        case 0x1bdd38u: goto label_1bdd38;
        case 0x1bdd3cu: goto label_1bdd3c;
        case 0x1bdd40u: goto label_1bdd40;
        case 0x1bdd44u: goto label_1bdd44;
        case 0x1bdd48u: goto label_1bdd48;
        case 0x1bdd4cu: goto label_1bdd4c;
        case 0x1bdd50u: goto label_1bdd50;
        case 0x1bdd54u: goto label_1bdd54;
        case 0x1bdd58u: goto label_1bdd58;
        case 0x1bdd5cu: goto label_1bdd5c;
        case 0x1bdd60u: goto label_1bdd60;
        case 0x1bdd64u: goto label_1bdd64;
        case 0x1bdd68u: goto label_1bdd68;
        case 0x1bdd6cu: goto label_1bdd6c;
        case 0x1bdd70u: goto label_1bdd70;
        case 0x1bdd74u: goto label_1bdd74;
        case 0x1bdd78u: goto label_1bdd78;
        case 0x1bdd7cu: goto label_1bdd7c;
        case 0x1bdd80u: goto label_1bdd80;
        case 0x1bdd84u: goto label_1bdd84;
        case 0x1bdd88u: goto label_1bdd88;
        case 0x1bdd8cu: goto label_1bdd8c;
        case 0x1bdd90u: goto label_1bdd90;
        case 0x1bdd94u: goto label_1bdd94;
        case 0x1bdd98u: goto label_1bdd98;
        case 0x1bdd9cu: goto label_1bdd9c;
        case 0x1bdda0u: goto label_1bdda0;
        case 0x1bdda4u: goto label_1bdda4;
        case 0x1bdda8u: goto label_1bdda8;
        case 0x1bddacu: goto label_1bddac;
        case 0x1bddb0u: goto label_1bddb0;
        case 0x1bddb4u: goto label_1bddb4;
        case 0x1bddb8u: goto label_1bddb8;
        case 0x1bddbcu: goto label_1bddbc;
        case 0x1bddc0u: goto label_1bddc0;
        case 0x1bddc4u: goto label_1bddc4;
        case 0x1bddc8u: goto label_1bddc8;
        case 0x1bddccu: goto label_1bddcc;
        case 0x1bddd0u: goto label_1bddd0;
        case 0x1bddd4u: goto label_1bddd4;
        case 0x1bddd8u: goto label_1bddd8;
        case 0x1bdddcu: goto label_1bdddc;
        case 0x1bdde0u: goto label_1bdde0;
        case 0x1bdde4u: goto label_1bdde4;
        case 0x1bdde8u: goto label_1bdde8;
        case 0x1bddecu: goto label_1bddec;
        case 0x1bddf0u: goto label_1bddf0;
        case 0x1bddf4u: goto label_1bddf4;
        case 0x1bddf8u: goto label_1bddf8;
        case 0x1bddfcu: goto label_1bddfc;
        case 0x1bde00u: goto label_1bde00;
        case 0x1bde04u: goto label_1bde04;
        case 0x1bde08u: goto label_1bde08;
        case 0x1bde0cu: goto label_1bde0c;
        case 0x1bde10u: goto label_1bde10;
        case 0x1bde14u: goto label_1bde14;
        case 0x1bde18u: goto label_1bde18;
        case 0x1bde1cu: goto label_1bde1c;
        case 0x1bde20u: goto label_1bde20;
        case 0x1bde24u: goto label_1bde24;
        case 0x1bde28u: goto label_1bde28;
        case 0x1bde2cu: goto label_1bde2c;
        case 0x1bde30u: goto label_1bde30;
        case 0x1bde34u: goto label_1bde34;
        case 0x1bde38u: goto label_1bde38;
        case 0x1bde3cu: goto label_1bde3c;
        case 0x1bde40u: goto label_1bde40;
        case 0x1bde44u: goto label_1bde44;
        case 0x1bde48u: goto label_1bde48;
        case 0x1bde4cu: goto label_1bde4c;
        case 0x1bde50u: goto label_1bde50;
        case 0x1bde54u: goto label_1bde54;
        case 0x1bde58u: goto label_1bde58;
        case 0x1bde5cu: goto label_1bde5c;
        case 0x1bde60u: goto label_1bde60;
        case 0x1bde64u: goto label_1bde64;
        case 0x1bde68u: goto label_1bde68;
        case 0x1bde6cu: goto label_1bde6c;
        case 0x1bde70u: goto label_1bde70;
        case 0x1bde74u: goto label_1bde74;
        case 0x1bde78u: goto label_1bde78;
        case 0x1bde7cu: goto label_1bde7c;
        case 0x1bde80u: goto label_1bde80;
        case 0x1bde84u: goto label_1bde84;
        case 0x1bde88u: goto label_1bde88;
        case 0x1bde8cu: goto label_1bde8c;
        case 0x1bde90u: goto label_1bde90;
        case 0x1bde94u: goto label_1bde94;
        case 0x1bde98u: goto label_1bde98;
        case 0x1bde9cu: goto label_1bde9c;
        case 0x1bdea0u: goto label_1bdea0;
        case 0x1bdea4u: goto label_1bdea4;
        case 0x1bdea8u: goto label_1bdea8;
        case 0x1bdeacu: goto label_1bdeac;
        case 0x1bdeb0u: goto label_1bdeb0;
        case 0x1bdeb4u: goto label_1bdeb4;
        case 0x1bdeb8u: goto label_1bdeb8;
        case 0x1bdebcu: goto label_1bdebc;
        case 0x1bdec0u: goto label_1bdec0;
        case 0x1bdec4u: goto label_1bdec4;
        case 0x1bdec8u: goto label_1bdec8;
        case 0x1bdeccu: goto label_1bdecc;
        case 0x1bded0u: goto label_1bded0;
        case 0x1bded4u: goto label_1bded4;
        case 0x1bded8u: goto label_1bded8;
        case 0x1bdedcu: goto label_1bdedc;
        case 0x1bdee0u: goto label_1bdee0;
        case 0x1bdee4u: goto label_1bdee4;
        case 0x1bdee8u: goto label_1bdee8;
        case 0x1bdeecu: goto label_1bdeec;
        case 0x1bdef0u: goto label_1bdef0;
        case 0x1bdef4u: goto label_1bdef4;
        case 0x1bdef8u: goto label_1bdef8;
        case 0x1bdefcu: goto label_1bdefc;
        case 0x1bdf00u: goto label_1bdf00;
        case 0x1bdf04u: goto label_1bdf04;
        case 0x1bdf08u: goto label_1bdf08;
        case 0x1bdf0cu: goto label_1bdf0c;
        case 0x1bdf10u: goto label_1bdf10;
        case 0x1bdf14u: goto label_1bdf14;
        case 0x1bdf18u: goto label_1bdf18;
        case 0x1bdf1cu: goto label_1bdf1c;
        case 0x1bdf20u: goto label_1bdf20;
        case 0x1bdf24u: goto label_1bdf24;
        case 0x1bdf28u: goto label_1bdf28;
        case 0x1bdf2cu: goto label_1bdf2c;
        case 0x1bdf30u: goto label_1bdf30;
        case 0x1bdf34u: goto label_1bdf34;
        case 0x1bdf38u: goto label_1bdf38;
        case 0x1bdf3cu: goto label_1bdf3c;
        case 0x1bdf40u: goto label_1bdf40;
        case 0x1bdf44u: goto label_1bdf44;
        case 0x1bdf48u: goto label_1bdf48;
        case 0x1bdf4cu: goto label_1bdf4c;
        case 0x1bdf50u: goto label_1bdf50;
        case 0x1bdf54u: goto label_1bdf54;
        case 0x1bdf58u: goto label_1bdf58;
        case 0x1bdf5cu: goto label_1bdf5c;
        case 0x1bdf60u: goto label_1bdf60;
        case 0x1bdf64u: goto label_1bdf64;
        case 0x1bdf68u: goto label_1bdf68;
        case 0x1bdf6cu: goto label_1bdf6c;
        case 0x1bdf70u: goto label_1bdf70;
        case 0x1bdf74u: goto label_1bdf74;
        case 0x1bdf78u: goto label_1bdf78;
        case 0x1bdf7cu: goto label_1bdf7c;
        case 0x1bdf80u: goto label_1bdf80;
        case 0x1bdf84u: goto label_1bdf84;
        case 0x1bdf88u: goto label_1bdf88;
        case 0x1bdf8cu: goto label_1bdf8c;
        case 0x1bdf90u: goto label_1bdf90;
        case 0x1bdf94u: goto label_1bdf94;
        case 0x1bdf98u: goto label_1bdf98;
        case 0x1bdf9cu: goto label_1bdf9c;
        case 0x1bdfa0u: goto label_1bdfa0;
        case 0x1bdfa4u: goto label_1bdfa4;
        case 0x1bdfa8u: goto label_1bdfa8;
        case 0x1bdfacu: goto label_1bdfac;
        case 0x1bdfb0u: goto label_1bdfb0;
        case 0x1bdfb4u: goto label_1bdfb4;
        case 0x1bdfb8u: goto label_1bdfb8;
        case 0x1bdfbcu: goto label_1bdfbc;
        case 0x1bdfc0u: goto label_1bdfc0;
        case 0x1bdfc4u: goto label_1bdfc4;
        case 0x1bdfc8u: goto label_1bdfc8;
        case 0x1bdfccu: goto label_1bdfcc;
        case 0x1bdfd0u: goto label_1bdfd0;
        case 0x1bdfd4u: goto label_1bdfd4;
        case 0x1bdfd8u: goto label_1bdfd8;
        case 0x1bdfdcu: goto label_1bdfdc;
        case 0x1bdfe0u: goto label_1bdfe0;
        case 0x1bdfe4u: goto label_1bdfe4;
        case 0x1bdfe8u: goto label_1bdfe8;
        case 0x1bdfecu: goto label_1bdfec;
        case 0x1bdff0u: goto label_1bdff0;
        case 0x1bdff4u: goto label_1bdff4;
        case 0x1bdff8u: goto label_1bdff8;
        case 0x1bdffcu: goto label_1bdffc;
        case 0x1be000u: goto label_1be000;
        case 0x1be004u: goto label_1be004;
        case 0x1be008u: goto label_1be008;
        case 0x1be00cu: goto label_1be00c;
        case 0x1be010u: goto label_1be010;
        case 0x1be014u: goto label_1be014;
        case 0x1be018u: goto label_1be018;
        case 0x1be01cu: goto label_1be01c;
        case 0x1be020u: goto label_1be020;
        case 0x1be024u: goto label_1be024;
        case 0x1be028u: goto label_1be028;
        case 0x1be02cu: goto label_1be02c;
        case 0x1be030u: goto label_1be030;
        case 0x1be034u: goto label_1be034;
        case 0x1be038u: goto label_1be038;
        case 0x1be03cu: goto label_1be03c;
        case 0x1be040u: goto label_1be040;
        case 0x1be044u: goto label_1be044;
        case 0x1be048u: goto label_1be048;
        case 0x1be04cu: goto label_1be04c;
        case 0x1be050u: goto label_1be050;
        case 0x1be054u: goto label_1be054;
        case 0x1be058u: goto label_1be058;
        case 0x1be05cu: goto label_1be05c;
        case 0x1be060u: goto label_1be060;
        case 0x1be064u: goto label_1be064;
        case 0x1be068u: goto label_1be068;
        case 0x1be06cu: goto label_1be06c;
        case 0x1be070u: goto label_1be070;
        case 0x1be074u: goto label_1be074;
        case 0x1be078u: goto label_1be078;
        case 0x1be07cu: goto label_1be07c;
        case 0x1be080u: goto label_1be080;
        case 0x1be084u: goto label_1be084;
        case 0x1be088u: goto label_1be088;
        case 0x1be08cu: goto label_1be08c;
        case 0x1be090u: goto label_1be090;
        case 0x1be094u: goto label_1be094;
        case 0x1be098u: goto label_1be098;
        case 0x1be09cu: goto label_1be09c;
        case 0x1be0a0u: goto label_1be0a0;
        case 0x1be0a4u: goto label_1be0a4;
        case 0x1be0a8u: goto label_1be0a8;
        case 0x1be0acu: goto label_1be0ac;
        case 0x1be0b0u: goto label_1be0b0;
        case 0x1be0b4u: goto label_1be0b4;
        case 0x1be0b8u: goto label_1be0b8;
        case 0x1be0bcu: goto label_1be0bc;
        case 0x1be0c0u: goto label_1be0c0;
        case 0x1be0c4u: goto label_1be0c4;
        case 0x1be0c8u: goto label_1be0c8;
        case 0x1be0ccu: goto label_1be0cc;
        case 0x1be0d0u: goto label_1be0d0;
        case 0x1be0d4u: goto label_1be0d4;
        case 0x1be0d8u: goto label_1be0d8;
        case 0x1be0dcu: goto label_1be0dc;
        case 0x1be0e0u: goto label_1be0e0;
        case 0x1be0e4u: goto label_1be0e4;
        case 0x1be0e8u: goto label_1be0e8;
        case 0x1be0ecu: goto label_1be0ec;
        case 0x1be0f0u: goto label_1be0f0;
        case 0x1be0f4u: goto label_1be0f4;
        case 0x1be0f8u: goto label_1be0f8;
        case 0x1be0fcu: goto label_1be0fc;
        case 0x1be100u: goto label_1be100;
        case 0x1be104u: goto label_1be104;
        case 0x1be108u: goto label_1be108;
        case 0x1be10cu: goto label_1be10c;
        case 0x1be110u: goto label_1be110;
        case 0x1be114u: goto label_1be114;
        case 0x1be118u: goto label_1be118;
        case 0x1be11cu: goto label_1be11c;
        case 0x1be120u: goto label_1be120;
        case 0x1be124u: goto label_1be124;
        case 0x1be128u: goto label_1be128;
        case 0x1be12cu: goto label_1be12c;
        case 0x1be130u: goto label_1be130;
        case 0x1be134u: goto label_1be134;
        case 0x1be138u: goto label_1be138;
        case 0x1be13cu: goto label_1be13c;
        case 0x1be140u: goto label_1be140;
        case 0x1be144u: goto label_1be144;
        case 0x1be148u: goto label_1be148;
        case 0x1be14cu: goto label_1be14c;
        case 0x1be150u: goto label_1be150;
        case 0x1be154u: goto label_1be154;
        case 0x1be158u: goto label_1be158;
        case 0x1be15cu: goto label_1be15c;
        case 0x1be160u: goto label_1be160;
        case 0x1be164u: goto label_1be164;
        case 0x1be168u: goto label_1be168;
        case 0x1be16cu: goto label_1be16c;
        case 0x1be170u: goto label_1be170;
        case 0x1be174u: goto label_1be174;
        case 0x1be178u: goto label_1be178;
        case 0x1be17cu: goto label_1be17c;
        case 0x1be180u: goto label_1be180;
        case 0x1be184u: goto label_1be184;
        case 0x1be188u: goto label_1be188;
        case 0x1be18cu: goto label_1be18c;
        case 0x1be190u: goto label_1be190;
        case 0x1be194u: goto label_1be194;
        case 0x1be198u: goto label_1be198;
        case 0x1be19cu: goto label_1be19c;
        case 0x1be1a0u: goto label_1be1a0;
        case 0x1be1a4u: goto label_1be1a4;
        case 0x1be1a8u: goto label_1be1a8;
        case 0x1be1acu: goto label_1be1ac;
        case 0x1be1b0u: goto label_1be1b0;
        case 0x1be1b4u: goto label_1be1b4;
        case 0x1be1b8u: goto label_1be1b8;
        case 0x1be1bcu: goto label_1be1bc;
        case 0x1be1c0u: goto label_1be1c0;
        case 0x1be1c4u: goto label_1be1c4;
        case 0x1be1c8u: goto label_1be1c8;
        case 0x1be1ccu: goto label_1be1cc;
        case 0x1be1d0u: goto label_1be1d0;
        case 0x1be1d4u: goto label_1be1d4;
        case 0x1be1d8u: goto label_1be1d8;
        case 0x1be1dcu: goto label_1be1dc;
        case 0x1be1e0u: goto label_1be1e0;
        case 0x1be1e4u: goto label_1be1e4;
        case 0x1be1e8u: goto label_1be1e8;
        case 0x1be1ecu: goto label_1be1ec;
        case 0x1be1f0u: goto label_1be1f0;
        case 0x1be1f4u: goto label_1be1f4;
        case 0x1be1f8u: goto label_1be1f8;
        case 0x1be1fcu: goto label_1be1fc;
        case 0x1be200u: goto label_1be200;
        case 0x1be204u: goto label_1be204;
        case 0x1be208u: goto label_1be208;
        case 0x1be20cu: goto label_1be20c;
        case 0x1be210u: goto label_1be210;
        case 0x1be214u: goto label_1be214;
        case 0x1be218u: goto label_1be218;
        case 0x1be21cu: goto label_1be21c;
        case 0x1be220u: goto label_1be220;
        case 0x1be224u: goto label_1be224;
        case 0x1be228u: goto label_1be228;
        case 0x1be22cu: goto label_1be22c;
        case 0x1be230u: goto label_1be230;
        case 0x1be234u: goto label_1be234;
        case 0x1be238u: goto label_1be238;
        case 0x1be23cu: goto label_1be23c;
        case 0x1be240u: goto label_1be240;
        case 0x1be244u: goto label_1be244;
        case 0x1be248u: goto label_1be248;
        case 0x1be24cu: goto label_1be24c;
        case 0x1be250u: goto label_1be250;
        case 0x1be254u: goto label_1be254;
        case 0x1be258u: goto label_1be258;
        case 0x1be25cu: goto label_1be25c;
        case 0x1be260u: goto label_1be260;
        case 0x1be264u: goto label_1be264;
        case 0x1be268u: goto label_1be268;
        case 0x1be26cu: goto label_1be26c;
        case 0x1be270u: goto label_1be270;
        case 0x1be274u: goto label_1be274;
        case 0x1be278u: goto label_1be278;
        case 0x1be27cu: goto label_1be27c;
        case 0x1be280u: goto label_1be280;
        case 0x1be284u: goto label_1be284;
        case 0x1be288u: goto label_1be288;
        case 0x1be28cu: goto label_1be28c;
        case 0x1be290u: goto label_1be290;
        case 0x1be294u: goto label_1be294;
        case 0x1be298u: goto label_1be298;
        case 0x1be29cu: goto label_1be29c;
        case 0x1be2a0u: goto label_1be2a0;
        case 0x1be2a4u: goto label_1be2a4;
        case 0x1be2a8u: goto label_1be2a8;
        case 0x1be2acu: goto label_1be2ac;
        case 0x1be2b0u: goto label_1be2b0;
        case 0x1be2b4u: goto label_1be2b4;
        case 0x1be2b8u: goto label_1be2b8;
        case 0x1be2bcu: goto label_1be2bc;
        case 0x1be2c0u: goto label_1be2c0;
        case 0x1be2c4u: goto label_1be2c4;
        case 0x1be2c8u: goto label_1be2c8;
        case 0x1be2ccu: goto label_1be2cc;
        case 0x1be2d0u: goto label_1be2d0;
        case 0x1be2d4u: goto label_1be2d4;
        case 0x1be2d8u: goto label_1be2d8;
        case 0x1be2dcu: goto label_1be2dc;
        case 0x1be2e0u: goto label_1be2e0;
        case 0x1be2e4u: goto label_1be2e4;
        case 0x1be2e8u: goto label_1be2e8;
        case 0x1be2ecu: goto label_1be2ec;
        case 0x1be2f0u: goto label_1be2f0;
        case 0x1be2f4u: goto label_1be2f4;
        case 0x1be2f8u: goto label_1be2f8;
        case 0x1be2fcu: goto label_1be2fc;
        case 0x1be300u: goto label_1be300;
        case 0x1be304u: goto label_1be304;
        case 0x1be308u: goto label_1be308;
        case 0x1be30cu: goto label_1be30c;
        case 0x1be310u: goto label_1be310;
        case 0x1be314u: goto label_1be314;
        case 0x1be318u: goto label_1be318;
        case 0x1be31cu: goto label_1be31c;
        case 0x1be320u: goto label_1be320;
        case 0x1be324u: goto label_1be324;
        case 0x1be328u: goto label_1be328;
        case 0x1be32cu: goto label_1be32c;
        case 0x1be330u: goto label_1be330;
        case 0x1be334u: goto label_1be334;
        case 0x1be338u: goto label_1be338;
        case 0x1be33cu: goto label_1be33c;
        case 0x1be340u: goto label_1be340;
        case 0x1be344u: goto label_1be344;
        case 0x1be348u: goto label_1be348;
        case 0x1be34cu: goto label_1be34c;
        case 0x1be350u: goto label_1be350;
        case 0x1be354u: goto label_1be354;
        case 0x1be358u: goto label_1be358;
        case 0x1be35cu: goto label_1be35c;
        case 0x1be360u: goto label_1be360;
        case 0x1be364u: goto label_1be364;
        case 0x1be368u: goto label_1be368;
        case 0x1be36cu: goto label_1be36c;
        case 0x1be370u: goto label_1be370;
        case 0x1be374u: goto label_1be374;
        case 0x1be378u: goto label_1be378;
        case 0x1be37cu: goto label_1be37c;
        case 0x1be380u: goto label_1be380;
        case 0x1be384u: goto label_1be384;
        case 0x1be388u: goto label_1be388;
        case 0x1be38cu: goto label_1be38c;
        case 0x1be390u: goto label_1be390;
        case 0x1be394u: goto label_1be394;
        case 0x1be398u: goto label_1be398;
        case 0x1be39cu: goto label_1be39c;
        case 0x1be3a0u: goto label_1be3a0;
        case 0x1be3a4u: goto label_1be3a4;
        case 0x1be3a8u: goto label_1be3a8;
        case 0x1be3acu: goto label_1be3ac;
        case 0x1be3b0u: goto label_1be3b0;
        case 0x1be3b4u: goto label_1be3b4;
        case 0x1be3b8u: goto label_1be3b8;
        case 0x1be3bcu: goto label_1be3bc;
        default: return;
    }

label_1bdbf0:
    // 0x1bdbf0: 0x0  nop
    ctx->pc = 0x1bdbf0u;
    // NOP
label_1bdbf4:
    // 0x1bdbf4: 0x1810  mfhi        $v1
    ctx->pc = 0x1bdbf4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bdbf8:
    // 0x1bdbf8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bdbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bdbfc:
    // 0x1bdbfc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bdbfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bdc00:
    // 0x1bdc00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bdc04:
    // 0x1bdc04: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bdc04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bdc08:
    // 0x1bdc08: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bdc0c:
    if (ctx->pc == 0x1BDC0Cu) {
        ctx->pc = 0x1BDC10u;
        goto label_1bdc10;
    }
    ctx->pc = 0x1BDC08u;
    {
        const bool branch_taken_0x1bdc08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc08) {
            ctx->pc = 0x1BDC14u;
            goto label_1bdc14;
        }
    }
    ctx->pc = 0x1BDC10u;
label_1bdc10:
    // 0x1bdc10: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bdc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bdc14:
    // 0x1bdc14: 0xa263024e  sb          $v1, 0x24E($s3)
    ctx->pc = 0x1bdc14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 590), (uint8_t)GPR_U32(ctx, 3));
label_1bdc18:
    // 0x1bdc18: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bdc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bdc1c:
    // 0x1bdc1c: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bdc1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
label_1bdc20:
    // 0x1bdc20: 0x24633b89  addiu       $v1, $v1, 0x3B89
    ctx->pc = 0x1bdc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15241));
label_1bdc24:
    // 0x1bdc24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bdc28:
    // 0x1bdc28: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bdc28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bdc2c:
    // 0x1bdc2c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bdc2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bdc30:
    // 0x1bdc30: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bdc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bdc34:
    // 0x1bdc34: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bdc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bdc38:
    // 0x1bdc38: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bdc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bdc3c:
    // 0x1bdc3c: 0x0  nop
    ctx->pc = 0x1bdc3cu;
    // NOP
label_1bdc40:
    // 0x1bdc40: 0x0  nop
    ctx->pc = 0x1bdc40u;
    // NOP
label_1bdc44:
    // 0x1bdc44: 0x1810  mfhi        $v1
    ctx->pc = 0x1bdc44u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bdc48:
    // 0x1bdc48: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bdc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bdc4c:
    // 0x1bdc4c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bdc4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bdc50:
    // 0x1bdc50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bdc54:
    // 0x1bdc54: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bdc54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bdc58:
    // 0x1bdc58: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bdc5c:
    if (ctx->pc == 0x1BDC5Cu) {
        ctx->pc = 0x1BDC60u;
        goto label_1bdc60;
    }
    ctx->pc = 0x1BDC58u;
    {
        const bool branch_taken_0x1bdc58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc58) {
            ctx->pc = 0x1BDC64u;
            goto label_1bdc64;
        }
    }
    ctx->pc = 0x1BDC60u;
label_1bdc60:
    // 0x1bdc60: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bdc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bdc64:
    // 0x1bdc64: 0xa263024f  sb          $v1, 0x24F($s3)
    ctx->pc = 0x1bdc64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 591), (uint8_t)GPR_U32(ctx, 3));
label_1bdc68:
    // 0x1bdc68: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bdc6c:
    // 0x1bdc6c: 0x24633b8a  addiu       $v1, $v1, 0x3B8A
    ctx->pc = 0x1bdc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15242));
label_1bdc70:
    // 0x1bdc70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bdc74:
    // 0x1bdc74: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bdc74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bdc78:
    // 0x1bdc78: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1bdc7c:
    if (ctx->pc == 0x1BDC7Cu) {
        ctx->pc = 0x1BDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC78u;
        // 0x1bdc7c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC80u;
        goto label_1bdc80;
    }
    ctx->pc = 0x1BDC78u;
    {
        const bool branch_taken_0x1bdc78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC78u;
        // 0x1bdc7c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc78) {
            ctx->pc = 0x1BDC8Cu;
            goto label_1bdc8c;
        }
    }
    ctx->pc = 0x1BDC80u;
label_1bdc80:
    // 0x1bdc80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdc80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bdc84:
    // 0x1bdc84: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bdc88:
    if (ctx->pc == 0x1BDC88u) {
        ctx->pc = 0x1BDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC84u;
        // 0x1bdc88: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC8Cu;
        goto label_1bdc8c;
    }
    ctx->pc = 0x1BDC84u;
    {
        const bool branch_taken_0x1bdc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC84u;
        // 0x1bdc88: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc84) {
            ctx->pc = 0x1BDCA4u;
            goto label_1bdca4;
        }
    }
    ctx->pc = 0x1BDC8Cu;
label_1bdc8c:
    // 0x1bdc8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bdc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1bdc90:
    // 0x1bdc90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bdc90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1bdc94:
    // 0x1bdc94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bdc94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bdc98:
    // 0x1bdc98: 0x0  nop
    ctx->pc = 0x1bdc98u;
    // NOP
label_1bdc9c:
    // 0x1bdc9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bdc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bdca0:
    // 0x1bdca0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bdca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bdca4:
    // 0x1bdca4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1bdca8:
    // 0x1bdca8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bdca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bdcac:
    // 0x1bdcac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1bdcacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bdcb0:
    // 0x1bdcb0: 0x24633b8b  addiu       $v1, $v1, 0x3B8B
    ctx->pc = 0x1bdcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15243));
label_1bdcb4:
    // 0x1bdcb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bdcb8:
    // 0x1bdcb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bdcb8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_1bdcbc:
    // 0x1bdcbc: 0x0  nop
    ctx->pc = 0x1bdcbcu;
    // NOP
label_1bdcc0:
    // 0x1bdcc0: 0xe66001e4  swc1        $f0, 0x1E4($s3)
    ctx->pc = 0x1bdcc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 484), bits); }
label_1bdcc4:
    // 0x1bdcc4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bdcc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bdcc8:
    // 0x1bdcc8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1bdccc:
    if (ctx->pc == 0x1BDCCCu) {
        ctx->pc = 0x1BDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCC8u;
        // 0x1bdccc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCD0u;
        goto label_1bdcd0;
    }
    ctx->pc = 0x1BDCC8u;
    {
        const bool branch_taken_0x1bdcc8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCC8u;
        // 0x1bdccc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcc8) {
            ctx->pc = 0x1BDCDCu;
            goto label_1bdcdc;
        }
    }
    ctx->pc = 0x1BDCD0u;
label_1bdcd0:
    // 0x1bdcd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdcd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bdcd4:
    // 0x1bdcd4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bdcd8:
    if (ctx->pc == 0x1BDCD8u) {
        ctx->pc = 0x1BDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCD4u;
        // 0x1bdcd8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDCDCu;
        goto label_1bdcdc;
    }
    ctx->pc = 0x1BDCD4u;
    {
        const bool branch_taken_0x1bdcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCD4u;
        // 0x1bdcd8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcd4) {
            ctx->pc = 0x1BDCF4u;
            goto label_1bdcf4;
        }
    }
    ctx->pc = 0x1BDCDCu;
label_1bdcdc:
    // 0x1bdcdc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bdcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1bdce0:
    // 0x1bdce0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bdce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1bdce4:
    // 0x1bdce4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bdce4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bdce8:
    // 0x1bdce8: 0x0  nop
    ctx->pc = 0x1bdce8u;
    // NOP
label_1bdcec:
    // 0x1bdcec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bdcecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bdcf0:
    // 0x1bdcf0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bdcf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bdcf4:
    // 0x1bdcf4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1bdcf8:
    // 0x1bdcf8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bdcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bdcfc:
    // 0x1bdcfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bdcfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bdd00:
    // 0x1bdd00: 0x24633b8c  addiu       $v1, $v1, 0x3B8C
    ctx->pc = 0x1bdd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15244));
label_1bdd04:
    // 0x1bdd04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bdd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bdd08:
    // 0x1bdd08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bdd08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1bdd0c:
    // 0x1bdd0c: 0x0  nop
    ctx->pc = 0x1bdd0cu;
    // NOP
label_1bdd10:
    // 0x1bdd10: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x1bdd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
label_1bdd14:
    // 0x1bdd14: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1bdd14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1bdd18:
    // 0x1bdd18: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1bdd1c:
    if (ctx->pc == 0x1BDD1Cu) {
        ctx->pc = 0x1BDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD18u;
        // 0x1bdd1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD20u;
        goto label_1bdd20;
    }
    ctx->pc = 0x1BDD18u;
    {
        const bool branch_taken_0x1bdd18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD18u;
        // 0x1bdd1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd18) {
            ctx->pc = 0x1BDD2Cu;
            goto label_1bdd2c;
        }
    }
    ctx->pc = 0x1BDD20u;
label_1bdd20:
    // 0x1bdd20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bdd24:
    // 0x1bdd24: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bdd28:
    if (ctx->pc == 0x1BDD28u) {
        ctx->pc = 0x1BDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD24u;
        // 0x1bdd28: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD2Cu;
        goto label_1bdd2c;
    }
    ctx->pc = 0x1BDD24u;
    {
        const bool branch_taken_0x1bdd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD24u;
        // 0x1bdd28: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd24) {
            ctx->pc = 0x1BDD44u;
            goto label_1bdd44;
        }
    }
    ctx->pc = 0x1BDD2Cu;
label_1bdd2c:
    // 0x1bdd2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bdd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bdd30:
    // 0x1bdd30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bdd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1bdd34:
    // 0x1bdd34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bdd38:
    // 0x1bdd38: 0x0  nop
    ctx->pc = 0x1bdd38u;
    // NOP
label_1bdd3c:
    // 0x1bdd3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bdd3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bdd40:
    // 0x1bdd40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bdd40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bdd44:
    // 0x1bdd44: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1bdd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1bdd48:
    // 0x1bdd48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bdd4c:
    // 0x1bdd4c: 0x0  nop
    ctx->pc = 0x1bdd4cu;
    // NOP
label_1bdd50:
    // 0x1bdd50: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bdd50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1bdd54:
    // 0x1bdd54: 0xe66001ec  swc1        $f0, 0x1EC($s3)
    ctx->pc = 0x1bdd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 492), bits); }
label_1bdd58:
    // 0x1bdd58: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1bdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bdd5c:
    // 0x1bdd5c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1bdd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1bdd60:
    // 0x1bdd60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bdd64:
    if (ctx->pc == 0x1BDD64u) {
        ctx->pc = 0x1BDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD60u;
        // 0x1bdd64: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD68u;
        goto label_1bdd68;
    }
    ctx->pc = 0x1BDD60u;
    {
        const bool branch_taken_0x1bdd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD60u;
        // 0x1bdd64: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd60) {
            ctx->pc = 0x1BDD78u;
            goto label_1bdd78;
        }
    }
    ctx->pc = 0x1BDD68u;
label_1bdd68:
    // 0x1bdd68: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1bdd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bdd6c:
    // 0x1bdd6c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1bdd6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1bdd70:
    // 0x1bdd70: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1bdd74:
    if (ctx->pc == 0x1BDD74u) {
        ctx->pc = 0x1BDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD70u;
        // 0x1bdd74: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDD78u;
        goto label_1bdd78;
    }
    ctx->pc = 0x1BDD70u;
    {
        const bool branch_taken_0x1bdd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD70u;
        // 0x1bdd74: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd70) {
            ctx->pc = 0x1BDDA8u;
            goto label_1bdda8;
        }
    }
    ctx->pc = 0x1BDD78u;
label_1bdd78:
    // 0x1bdd78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bdd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bdd7c:
    // 0x1bdd7c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bdd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1bdd80:
    // 0x1bdd80: 0x24423b8d  addiu       $v0, $v0, 0x3B8D
    ctx->pc = 0x1bdd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15245));
label_1bdd84:
    // 0x1bdd84: 0x9465000a  lhu         $a1, 0xA($v1)
    ctx->pc = 0x1bdd84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1bdd88:
    // 0x1bdd88: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1bdd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1bdd8c:
    // 0x1bdd8c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1bdd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bdd90:
    // 0x1bdd90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bdd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bdd94:
    // 0x1bdd94: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1bdd94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1bdd98:
    // 0x1bdd98: 0xc06fb54  jal         func_1BED50
label_1bdd9c:
    if (ctx->pc == 0x1BDD9Cu) {
        ctx->pc = 0x1BDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD98u;
        // 0x1bdd9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDDA0u;
        goto label_1bdda0;
    }
    ctx->pc = 0x1BDD98u;
    SET_GPR_U32(ctx, 31, 0x1BDDA0u);
    ctx->pc = 0x1BDD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD98u;
    // 0x1bdd9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED50u;
    { ctx->pc = 0x1bed50; return; }
    ctx->pc = 0x1BDDA0u;
label_1bdda0:
    // 0x1bdda0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bdda4:
    if (ctx->pc == 0x1BDDA4u) {
        ctx->pc = 0x1BDDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDA0u;
        // 0x1bdda4: 0x92650244  lbu         $a1, 0x244($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDDA8u;
        goto label_1bdda8;
    }
    ctx->pc = 0x1BDDA0u;
    {
        const bool branch_taken_0x1bdda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDA0u;
        // 0x1bdda4: 0x92650244  lbu         $a1, 0x244($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdda0) {
            ctx->pc = 0x1BDDD4u;
            goto label_1bddd4;
        }
    }
    ctx->pc = 0x1BDDA8u;
label_1bdda8:
    // 0x1bdda8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1bddac:
    if (ctx->pc == 0x1BDDACu) {
        ctx->pc = 0x1BDDB0u;
        goto label_1bddb0;
    }
    ctx->pc = 0x1BDDA8u;
    {
        const bool branch_taken_0x1bdda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdda8) {
            ctx->pc = 0x1BDDB8u;
            goto label_1bddb8;
        }
    }
    ctx->pc = 0x1BDDB0u;
label_1bddb0:
    // 0x1bddb0: 0x86620252  lh          $v0, 0x252($s3)
    ctx->pc = 0x1bddb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 594)));
label_1bddb4:
    // 0x1bddb4: 0xa6620222  sh          $v0, 0x222($s3)
    ctx->pc = 0x1bddb4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 2));
label_1bddb8:
    // 0x1bddb8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1bddbc:
    // 0x1bddbc: 0x2442497d  addiu       $v0, $v0, 0x497D
    ctx->pc = 0x1bddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18813));
label_1bddc0:
    // 0x1bddc0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1bddc4:
    // 0x1bddc4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1bddc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1bddc8:
    // 0x1bddc8: 0xc06fb54  jal         func_1BED50
label_1bddcc:
    if (ctx->pc == 0x1BDDCCu) {
        ctx->pc = 0x1BDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDC8u;
        // 0x1bddcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDDD0u;
        goto label_1bddd0;
    }
    ctx->pc = 0x1BDDC8u;
    SET_GPR_U32(ctx, 31, 0x1BDDD0u);
    ctx->pc = 0x1BDDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDC8u;
    // 0x1bddcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED50u;
    { ctx->pc = 0x1bed50; return; }
    ctx->pc = 0x1BDDD0u;
label_1bddd0:
    // 0x1bddd0: 0x92650244  lbu         $a1, 0x244($s3)
    ctx->pc = 0x1bddd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
label_1bddd4:
    // 0x1bddd4: 0x92660242  lbu         $a2, 0x242($s3)
    ctx->pc = 0x1bddd4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
label_1bddd8:
    // 0x1bddd8: 0xc045784  jal         func_115E10
label_1bdddc:
    if (ctx->pc == 0x1BDDDCu) {
        ctx->pc = 0x1BDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDD8u;
        // 0x1bdddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDDE0u;
        goto label_1bdde0;
    }
    ctx->pc = 0x1BDDD8u;
    SET_GPR_U32(ctx, 31, 0x1BDDE0u);
    ctx->pc = 0x1BDDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDD8u;
    // 0x1bdddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115E10u, 0x1BDDD8u, 0x1BDDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDE0u;
label_1bdde0:
    // 0x1bdde0: 0xc054c24  jal         func_153090
label_1bdde4:
    if (ctx->pc == 0x1BDDE4u) {
        ctx->pc = 0x1BDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDE0u;
        // 0x1bdde4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDDE8u;
        goto label_1bdde8;
    }
    ctx->pc = 0x1BDDE0u;
    SET_GPR_U32(ctx, 31, 0x1BDDE8u);
    ctx->pc = 0x1BDDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDE0u;
    // 0x1bdde4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153090u, 0x1BDDE0u, 0x1BDDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDE8u;
label_1bdde8:
    // 0x1bdde8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bddec:
    // 0x1bddec: 0x90450013  lbu         $a1, 0x13($v0)
    ctx->pc = 0x1bddecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
label_1bddf0:
    // 0x1bddf0: 0xc06fc94  jal         func_1BF250
label_1bddf4:
    if (ctx->pc == 0x1BDDF4u) {
        ctx->pc = 0x1BDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDF0u;
        // 0x1bddf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDDF8u;
        goto label_1bddf8;
    }
    ctx->pc = 0x1BDDF0u;
    SET_GPR_U32(ctx, 31, 0x1BDDF8u);
    ctx->pc = 0x1BDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDF0u;
    // 0x1bddf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF250u;
    { ctx->pc = 0x1bf250; return; }
    ctx->pc = 0x1BDDF8u;
label_1bddf8:
    // 0x1bddf8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1bddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1bddfc:
    // 0x1bddfc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1bddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1bde00:
    // 0x1bde00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bde04:
    if (ctx->pc == 0x1BDE04u) {
        ctx->pc = 0x1BDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE00u;
        // 0x1bde04: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE08u;
        goto label_1bde08;
    }
    ctx->pc = 0x1BDE00u;
    {
        const bool branch_taken_0x1bde00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE00u;
        // 0x1bde04: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde00) {
            ctx->pc = 0x1BDE18u;
            goto label_1bde18;
        }
    }
    ctx->pc = 0x1BDE08u;
label_1bde08:
    // 0x1bde08: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1bde08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bde0c:
    // 0x1bde0c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1bde0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1bde10:
    // 0x1bde10: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1bde14:
    if (ctx->pc == 0x1BDE14u) {
        ctx->pc = 0x1BDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE10u;
        // 0x1bde14: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE18u;
        goto label_1bde18;
    }
    ctx->pc = 0x1BDE10u;
    {
        const bool branch_taken_0x1bde10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE10u;
        // 0x1bde14: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde10) {
            ctx->pc = 0x1BDE2Cu;
            goto label_1bde2c;
        }
    }
    ctx->pc = 0x1BDE18u;
label_1bde18:
    // 0x1bde18: 0x92650247  lbu         $a1, 0x247($s3)
    ctx->pc = 0x1bde18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 583)));
label_1bde1c:
    // 0x1bde1c: 0xc06525c  jal         func_194970
label_1bde20:
    if (ctx->pc == 0x1BDE20u) {
        ctx->pc = 0x1BDE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE1Cu;
        // 0x1bde20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE24u;
        goto label_1bde24;
    }
    ctx->pc = 0x1BDE1Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE24u);
    ctx->pc = 0x1BDE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE1Cu;
    // 0x1bde20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194970u, 0x1BDE1Cu, 0x1BDE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE24u;
label_1bde24:
    // 0x1bde24: 0x10000032  b           . + 4 + (0x32 << 2)
label_1bde28:
    if (ctx->pc == 0x1BDE28u) {
        ctx->pc = 0x1BDE2Cu;
        goto label_1bde2c;
    }
    ctx->pc = 0x1BDE24u;
    {
        const bool branch_taken_0x1bde24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde24) {
            ctx->pc = 0x1BDEF0u;
            goto label_1bdef0;
        }
    }
    ctx->pc = 0x1BDE2Cu;
label_1bde2c:
    // 0x1bde2c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1bde30:
    if (ctx->pc == 0x1BDE30u) {
        ctx->pc = 0x1BDE34u;
        goto label_1bde34;
    }
    ctx->pc = 0x1BDE2Cu;
    {
        const bool branch_taken_0x1bde2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bde2c) {
            ctx->pc = 0x1BDE48u;
            goto label_1bde48;
        }
    }
    ctx->pc = 0x1BDE34u;
label_1bde34:
    // 0x1bde34: 0x92650247  lbu         $a1, 0x247($s3)
    ctx->pc = 0x1bde34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 583)));
label_1bde38:
    // 0x1bde38: 0xc06525c  jal         func_194970
label_1bde3c:
    if (ctx->pc == 0x1BDE3Cu) {
        ctx->pc = 0x1BDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE38u;
        // 0x1bde3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE40u;
        goto label_1bde40;
    }
    ctx->pc = 0x1BDE38u;
    SET_GPR_U32(ctx, 31, 0x1BDE40u);
    ctx->pc = 0x1BDE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE38u;
    // 0x1bde3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194970u, 0x1BDE38u, 0x1BDE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE40u;
label_1bde40:
    // 0x1bde40: 0x10000012  b           . + 4 + (0x12 << 2)
label_1bde44:
    if (ctx->pc == 0x1BDE44u) {
        ctx->pc = 0x1BDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE40u;
        // 0x1bde44: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE48u;
        goto label_1bde48;
    }
    ctx->pc = 0x1BDE40u;
    {
        const bool branch_taken_0x1bde40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE40u;
        // 0x1bde44: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde40) {
            ctx->pc = 0x1BDE8Cu;
            goto label_1bde8c;
        }
    }
    ctx->pc = 0x1BDE48u;
label_1bde48:
    // 0x1bde48: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bde48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1bde4c:
    // 0x1bde4c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1bde50:
    // 0x1bde50: 0x2463497d  addiu       $v1, $v1, 0x497D
    ctx->pc = 0x1bde50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18813));
label_1bde54:
    // 0x1bde54: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1bde54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1bde58:
    // 0x1bde58: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1bde58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1bde5c:
    // 0x1bde5c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1bde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_1bde60:
    // 0x1bde60: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1bde60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bde64:
    // 0x1bde64: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x1bde64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
label_1bde68:
    // 0x1bde68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bde68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bde6c:
    // 0x1bde6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bde6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bde70:
    // 0x1bde70: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1bde70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_1bde74:
    // 0x1bde74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bde74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bde78:
    // 0x1bde78: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bde78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1bde7c:
    // 0x1bde7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bde7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bde80:
    // 0x1bde80: 0xc0653b4  jal         func_194ED0
label_1bde84:
    if (ctx->pc == 0x1BDE84u) {
        ctx->pc = 0x1BDE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE80u;
        // 0x1bde84: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDE88u;
        goto label_1bde88;
    }
    ctx->pc = 0x1BDE80u;
    SET_GPR_U32(ctx, 31, 0x1BDE88u);
    ctx->pc = 0x1BDE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE80u;
    // 0x1bde84: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194ED0u, 0x1BDE80u, 0x1BDE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE88u;
label_1bde88:
    // 0x1bde88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bde88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bde8c:
    // 0x1bde8c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bde8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1bde90:
    // 0x1bde90: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1bde90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1bde94:
    // 0x1bde94: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1bde94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1bde98:
    // 0x1bde98: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1bde98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1bde9c:
    // 0x1bde9c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1bde9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_1bdea0:
    // 0x1bdea0: 0x9063367e  lbu         $v1, 0x367E($v1)
    ctx->pc = 0x1bdea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13950)));
label_1bdea4:
    // 0x1bdea4: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x1bdea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_1bdea8:
    // 0x1bdea8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_1bdeac:
    if (ctx->pc == 0x1BDEACu) {
        ctx->pc = 0x1BDEB0u;
        goto label_1bdeb0;
    }
    ctx->pc = 0x1BDEA8u;
    {
        const bool branch_taken_0x1bdea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdea8) {
            ctx->pc = 0x1BDEDCu;
            goto label_1bdedc;
        }
    }
    ctx->pc = 0x1BDEB0u;
label_1bdeb0:
    // 0x1bdeb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bdeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bdeb4:
    // 0x1bdeb4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bdeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1bdeb8:
    // 0x1bdeb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1bdeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1bdebc:
    // 0x1bdebc: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1bdebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
label_1bdec0:
    // 0x1bdec0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1bdec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1bdec4:
    // 0x1bdec4: 0x342139c0  ori         $at, $at, 0x39C0
    ctx->pc = 0x1bdec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14784);
label_1bdec8:
    // 0x1bdec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bdec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bdecc:
    // 0x1bdecc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bdeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bded0:
    // 0x1bded0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bded0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bded4:
    // 0x1bded4: 0xc06542c  jal         func_1950B0
label_1bded8:
    if (ctx->pc == 0x1BDED8u) {
        ctx->pc = 0x1BDED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDED4u;
        // 0x1bded8: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDEDCu;
        goto label_1bdedc;
    }
    ctx->pc = 0x1BDED4u;
    SET_GPR_U32(ctx, 31, 0x1BDEDCu);
    ctx->pc = 0x1BDED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDED4u;
    // 0x1bded8: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1950B0u, 0x1BDED4u, 0x1BDEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEDCu;
label_1bdedc:
    // 0x1bdedc: 0x0  nop
    ctx->pc = 0x1bdedcu;
    // NOP
label_1bdee0:
    // 0x1bdee0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bdee0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1bdee4:
    // 0x1bdee4: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x1bdee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
label_1bdee8:
    // 0x1bdee8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_1bdeec:
    if (ctx->pc == 0x1BDEECu) {
        ctx->pc = 0x1BDEF0u;
        goto label_1bdef0;
    }
    ctx->pc = 0x1BDEE8u;
    {
        const bool branch_taken_0x1bdee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdee8) {
            ctx->pc = 0x1BDE8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bde8c;
        }
    }
    ctx->pc = 0x1BDEF0u;
label_1bdef0:
    // 0x1bdef0: 0x86640220  lh          $a0, 0x220($s3)
    ctx->pc = 0x1bdef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 544)));
label_1bdef4:
    // 0x1bdef4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bdef8:
    // 0x1bdef8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bdef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bdefc:
    // 0x1bdefc: 0xa664021c  sh          $a0, 0x21C($s3)
    ctx->pc = 0x1bdefcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 4));
label_1bdf00:
    // 0x1bdf00: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x1bdf00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_1bdf04:
    // 0x1bdf04: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_1bdf08:
    if (ctx->pc == 0x1BDF08u) {
        ctx->pc = 0x1BDF0Cu;
        goto label_1bdf0c;
    }
    ctx->pc = 0x1BDF04u;
    {
        const bool branch_taken_0x1bdf04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bdf04) {
            ctx->pc = 0x1BDF2Cu;
            goto label_1bdf2c;
        }
    }
    ctx->pc = 0x1BDF0Cu;
label_1bdf0c:
    // 0x1bdf0c: 0x86630220  lh          $v1, 0x220($s3)
    ctx->pc = 0x1bdf0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 544)));
label_1bdf10:
    // 0x1bdf10: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1bdf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_1bdf14:
    // 0x1bdf14: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1bdf14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
label_1bdf18:
    // 0x1bdf18: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bdf1c:
    if (ctx->pc == 0x1BDF1Cu) {
        ctx->pc = 0x1BDF20u;
        goto label_1bdf20;
    }
    ctx->pc = 0x1BDF18u;
    {
        const bool branch_taken_0x1bdf18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf18) {
            ctx->pc = 0x1BDF24u;
            goto label_1bdf24;
        }
    }
    ctx->pc = 0x1BDF20u;
label_1bdf20:
    // 0x1bdf20: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1bdf24:
    // 0x1bdf24: 0xa6630220  sh          $v1, 0x220($s3)
    ctx->pc = 0x1bdf24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 3));
label_1bdf28:
    // 0x1bdf28: 0xa663021c  sh          $v1, 0x21C($s3)
    ctx->pc = 0x1bdf28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 3));
label_1bdf2c:
    // 0x1bdf2c: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
label_1bdf30:
    if (ctx->pc == 0x1BDF30u) {
        ctx->pc = 0x1BDF34u;
        goto label_1bdf34;
    }
    ctx->pc = 0x1BDF2Cu;
    {
        const bool branch_taken_0x1bdf2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf2c) {
            ctx->pc = 0x1BDF74u;
            goto label_1bdf74;
        }
    }
    ctx->pc = 0x1BDF34u;
label_1bdf34:
    // 0x1bdf34: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bdf38:
    // 0x1bdf38: 0x90234af0  lbu         $v1, 0x4AF0($at)
    ctx->pc = 0x1bdf38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19184)));
label_1bdf3c:
    // 0x1bdf3c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1bdf40:
    if (ctx->pc == 0x1BDF40u) {
        ctx->pc = 0x1BDF44u;
        goto label_1bdf44;
    }
    ctx->pc = 0x1BDF3Cu;
    {
        const bool branch_taken_0x1bdf3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf3c) {
            ctx->pc = 0x1BDF74u;
            goto label_1bdf74;
        }
    }
    ctx->pc = 0x1BDF44u;
label_1bdf44:
    // 0x1bdf44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bdf48:
    // 0x1bdf48: 0x9265024a  lbu         $a1, 0x24A($s3)
    ctx->pc = 0x1bdf48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
label_1bdf4c:
    // 0x1bdf4c: 0x90244928  lbu         $a0, 0x4928($at)
    ctx->pc = 0x1bdf4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18728)));
label_1bdf50:
    // 0x1bdf50: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bdf54:
    // 0x1bdf54: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1bdf54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1bdf58:
    // 0x1bdf58: 0x90234929  lbu         $v1, 0x4929($at)
    ctx->pc = 0x1bdf58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18729)));
label_1bdf5c:
    // 0x1bdf5c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bdf60:
    // 0x1bdf60: 0xac244914  sw          $a0, 0x4914($at)
    ctx->pc = 0x1bdf60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18708), GPR_U32(ctx, 4));
label_1bdf64:
    // 0x1bdf64: 0x9264024b  lbu         $a0, 0x24B($s3)
    ctx->pc = 0x1bdf64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
label_1bdf68:
    // 0x1bdf68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bdf6c:
    // 0x1bdf6c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1bdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bdf70:
    // 0x1bdf70: 0xac234918  sw          $v1, 0x4918($at)
    ctx->pc = 0x1bdf70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18712), GPR_U32(ctx, 3));
label_1bdf74:
    // 0x1bdf74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bdf78:
    // 0x1bdf78: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1bdf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_1bdf7c:
    // 0x1bdf7c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1bdf7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1bdf80:
    // 0x1bdf80: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_1bdf84:
    if (ctx->pc == 0x1BDF84u) {
        ctx->pc = 0x1BDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF80u;
        // 0x1bdf84: 0x24030063  addiu       $v1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDF88u;
        goto label_1bdf88;
    }
    ctx->pc = 0x1BDF80u;
    {
        const bool branch_taken_0x1bdf80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF80u;
        // 0x1bdf84: 0x24030063  addiu       $v1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf80) {
            ctx->pc = 0x1BDF9Cu;
            goto label_1bdf9c;
        }
    }
    ctx->pc = 0x1BDF88u;
label_1bdf88:
    // 0x1bdf88: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1bdf8c:
    if (ctx->pc == 0x1BDF8Cu) {
        ctx->pc = 0x1BDF90u;
        goto label_1bdf90;
    }
    ctx->pc = 0x1BDF88u;
    {
        const bool branch_taken_0x1bdf88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bdf88) {
            ctx->pc = 0x1BDF9Cu;
            goto label_1bdf9c;
        }
    }
    ctx->pc = 0x1BDF90u;
label_1bdf90:
    // 0x1bdf90: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1bdf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1bdf94:
    // 0x1bdf94: 0x148302a4  bne         $a0, $v1, . + 4 + (0x2A4 << 2)
label_1bdf98:
    if (ctx->pc == 0x1BDF98u) {
        ctx->pc = 0x1BDF9Cu;
        goto label_1bdf9c;
    }
    ctx->pc = 0x1BDF94u;
    {
        const bool branch_taken_0x1bdf94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bdf94) {
            ctx->pc = 0x1BEA28u;
            { ctx->pc = 0x1bea28; return; }
        }
    }
    ctx->pc = 0x1BDF9Cu;
label_1bdf9c:
    // 0x1bdf9c: 0x100002a2  b           . + 4 + (0x2A2 << 2)
label_1bdfa0:
    if (ctx->pc == 0x1BDFA0u) {
        ctx->pc = 0x1BDFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF9Cu;
        // 0x1bdfa0: 0xa6600250  sh          $zero, 0x250($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 592), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFA4u;
        goto label_1bdfa4;
    }
    ctx->pc = 0x1BDF9Cu;
    {
        const bool branch_taken_0x1bdf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF9Cu;
        // 0x1bdfa0: 0xa6600250  sh          $zero, 0x250($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 592), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf9c) {
            ctx->pc = 0x1BEA28u;
            { ctx->pc = 0x1bea28; return; }
        }
    }
    ctx->pc = 0x1BDFA4u;
label_1bdfa4:
    // 0x1bdfa4: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1bdfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_1bdfa8:
    // 0x1bdfa8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1bdfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1bdfac:
    // 0x1bdfac: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bdfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1bdfb0:
    // 0x1bdfb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1bdfb4:
    // 0x1bdfb4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1bdfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bdfb8:
    // 0x1bdfb8: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_1bdfbc:
    // 0x1bdfbc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1bdfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1bdfc0:
    // 0x1bdfc0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bdfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bdfc4:
    // 0x1bdfc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1bdfc8:
    // 0x1bdfc8: 0x24923620  addiu       $s2, $a0, 0x3620
    ctx->pc = 0x1bdfc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 13856));
label_1bdfcc:
    // 0x1bdfcc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1bdfccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bdfd0:
    // 0x1bdfd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bdfd4:
    // 0x1bdfd4: 0x24630d80  addiu       $v1, $v1, 0xD80
    ctx->pc = 0x1bdfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3456));
label_1bdfd8:
    // 0x1bdfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdfdc:
    // 0x1bdfdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bdfe0:
    // 0x1bdfe0: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x1bdfe0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bdfe4:
    // 0x1bdfe4: 0xa2620232  sb          $v0, 0x232($s3)
    ctx->pc = 0x1bdfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
label_1bdfe8:
    // 0x1bdfe8: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x1bdfe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1bdfec:
    // 0x1bdfec: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x1bdfecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_1bdff0:
    // 0x1bdff0: 0x1020013f  beqz        $at, . + 4 + (0x13F << 2)
label_1bdff4:
    if (ctx->pc == 0x1BDFF4u) {
        ctx->pc = 0x1BDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFF0u;
        // 0x1bdff4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDFF8u;
        goto label_1bdff8;
    }
    ctx->pc = 0x1BDFF0u;
    {
        const bool branch_taken_0x1bdff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFF0u;
        // 0x1bdff4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdff0) {
            ctx->pc = 0x1BE4F0u;
            { ctx->pc = 0x1be4f0; return; }
        }
    }
    ctx->pc = 0x1BDFF8u;
label_1bdff8:
    // 0x1bdff8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bdff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1bdffc:
    // 0x1bdffc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1bdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_1be000:
    // 0x1be000: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1be004:
    // 0x1be004: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1be004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
label_1be008:
    // 0x1be008: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1be008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1be00c:
    // 0x1be00c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be010:
    // 0x1be010: 0xc056fb4  jal         func_15BED0
label_1be014:
    if (ctx->pc == 0x1BE014u) {
        ctx->pc = 0x1BE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE010u;
        // 0x1be014: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE018u;
        goto label_1be018;
    }
    ctx->pc = 0x1BE010u;
    SET_GPR_U32(ctx, 31, 0x1BE018u);
    ctx->pc = 0x1BE014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE010u;
    // 0x1be014: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BED0u, 0x1BE010u, 0x1BE018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE018u;
label_1be018:
    // 0x1be018: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1be018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1be01c:
    // 0x1be01c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1be020:
    if (ctx->pc == 0x1BE020u) {
        ctx->pc = 0x1BE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE01Cu;
        // 0x1be020: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE024u;
        goto label_1be024;
    }
    ctx->pc = 0x1BE01Cu;
    {
        const bool branch_taken_0x1be01c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE01Cu;
        // 0x1be020: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be01c) {
            ctx->pc = 0x1BE02Cu;
            goto label_1be02c;
        }
    }
    ctx->pc = 0x1BE024u;
label_1be024:
    // 0x1be024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1be024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1be028:
    // 0x1be028: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1be028u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1be02c:
    // 0x1be02c: 0x2482000b  addiu       $v0, $a0, 0xB
    ctx->pc = 0x1be02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 11));
label_1be030:
    // 0x1be030: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_1be034:
    if (ctx->pc == 0x1BE034u) {
        ctx->pc = 0x1BE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE030u;
        // 0x1be034: 0xa2620230  sb          $v0, 0x230($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 560), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE038u;
        goto label_1be038;
    }
    ctx->pc = 0x1BE030u;
    {
        const bool branch_taken_0x1be030 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE030u;
        // 0x1be034: 0xa2620230  sb          $v0, 0x230($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 560), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be030) {
            ctx->pc = 0x1BE05Cu;
            goto label_1be05c;
        }
    }
    ctx->pc = 0x1BE038u;
label_1be038:
    // 0x1be038: 0xdea30270  ld          $v1, 0x270($s5)
    ctx->pc = 0x1be038u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 624)));
label_1be03c:
    // 0x1be03c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1be03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1be040:
    // 0x1be040: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1be040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1be044:
    // 0x1be044: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1be048:
    if (ctx->pc == 0x1BE048u) {
        ctx->pc = 0x1BE048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE044u;
        // 0x1be048: 0x24820006  addiu       $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE04Cu;
        goto label_1be04c;
    }
    ctx->pc = 0x1BE044u;
    {
        const bool branch_taken_0x1be044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE044u;
        // 0x1be048: 0x24820006  addiu       $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be044) {
            ctx->pc = 0x1BE060u;
            goto label_1be060;
        }
    }
    ctx->pc = 0x1BE04Cu;
label_1be04c:
    // 0x1be04c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1be04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1be050:
    // 0x1be050: 0x94228dae  lhu         $v0, -0x7252($at)
    ctx->pc = 0x1be050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294938030)));
label_1be054:
    // 0x1be054: 0x10000010  b           . + 4 + (0x10 << 2)
label_1be058:
    if (ctx->pc == 0x1BE058u) {
        ctx->pc = 0x1BE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE054u;
        // 0x1be058: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE05Cu;
        goto label_1be05c;
    }
    ctx->pc = 0x1BE054u;
    {
        const bool branch_taken_0x1be054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE054u;
        // 0x1be058: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be054) {
            ctx->pc = 0x1BE098u;
            goto label_1be098;
        }
    }
    ctx->pc = 0x1BE05Cu;
label_1be05c:
    // 0x1be05c: 0x24820006  addiu       $v0, $a0, 0x6
    ctx->pc = 0x1be05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
label_1be060:
    // 0x1be060: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1be060u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_1be064:
    // 0x1be064: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1be068:
    if (ctx->pc == 0x1BE068u) {
        ctx->pc = 0x1BE06Cu;
        goto label_1be06c;
    }
    ctx->pc = 0x1BE064u;
    {
        const bool branch_taken_0x1be064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be064) {
            ctx->pc = 0x1BE070u;
            goto label_1be070;
        }
    }
    ctx->pc = 0x1BE06Cu;
label_1be06c:
    // 0x1be06c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1be06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1be070:
    // 0x1be070: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x1be070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_1be074:
    // 0x1be074: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1be078:
    if (ctx->pc == 0x1BE078u) {
        ctx->pc = 0x1BE07Cu;
        goto label_1be07c;
    }
    ctx->pc = 0x1BE074u;
    {
        const bool branch_taken_0x1be074 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be074) {
            ctx->pc = 0x1BE080u;
            goto label_1be080;
        }
    }
    ctx->pc = 0x1BE07Cu;
label_1be07c:
    // 0x1be07c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1be07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1be080:
    // 0x1be080: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1be080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1be084:
    // 0x1be084: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1be084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1be088:
    // 0x1be088: 0x24428d90  addiu       $v0, $v0, -0x7270
    ctx->pc = 0x1be088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938000));
label_1be08c:
    // 0x1be08c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be090:
    // 0x1be090: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1be090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1be094:
    // 0x1be094: 0xa662022c  sh          $v0, 0x22C($s3)
    ctx->pc = 0x1be094u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
label_1be098:
    // 0x1be098: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_1be09c:
    // 0x1be09c: 0x3c0e002b  lui         $t6, 0x2B
    ctx->pc = 0x1be09cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)43 << 16));
label_1be0a0:
    // 0x1be0a0: 0x3c0d002b  lui         $t5, 0x2B
    ctx->pc = 0x1be0a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)43 << 16));
label_1be0a4:
    // 0x1be0a4: 0x3c0c002b  lui         $t4, 0x2B
    ctx->pc = 0x1be0a4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)43 << 16));
label_1be0a8:
    // 0x1be0a8: 0x3c0b002b  lui         $t3, 0x2B
    ctx->pc = 0x1be0a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)43 << 16));
label_1be0ac:
    // 0x1be0ac: 0x3c0a0025  lui         $t2, 0x25
    ctx->pc = 0x1be0acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)37 << 16));
label_1be0b0:
    // 0x1be0b0: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1be0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
label_1be0b4:
    // 0x1be0b4: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1be0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
label_1be0b8:
    // 0x1be0b8: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1be0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
label_1be0bc:
    // 0x1be0bc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1be0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1be0c0:
    // 0x1be0c0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1be0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1be0c4:
    // 0x1be0c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be0c8:
    // 0x1be0c8: 0x34431000  ori         $v1, $v0, 0x1000
    ctx->pc = 0x1be0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_1be0cc:
    // 0x1be0cc: 0x25ceff78  addiu       $t6, $t6, -0x88
    ctx->pc = 0x1be0ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967160));
label_1be0d0:
    // 0x1be0d0: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1be0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1be0d4:
    // 0x1be0d4: 0xa663022c  sh          $v1, 0x22C($s3)
    ctx->pc = 0x1be0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 3));
label_1be0d8:
    // 0x1be0d8: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x1be0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1be0dc:
    // 0x1be0dc: 0x25adff7a  addiu       $t5, $t5, -0x86
    ctx->pc = 0x1be0dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967162));
label_1be0e0:
    // 0x1be0e0: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x1be0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be0e4:
    // 0x1be0e4: 0x258cff7c  addiu       $t4, $t4, -0x84
    ctx->pc = 0x1be0e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967164));
label_1be0e8:
    // 0x1be0e8: 0x256bff7d  addiu       $t3, $t3, -0x83
    ctx->pc = 0x1be0e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967165));
label_1be0ec:
    // 0x1be0ec: 0x254a3b80  addiu       $t2, $t2, 0x3B80
    ctx->pc = 0x1be0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15232));
label_1be0f0:
    // 0x1be0f0: 0x25293b82  addiu       $t1, $t1, 0x3B82
    ctx->pc = 0x1be0f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15234));
label_1be0f4:
    // 0x1be0f4: 0x25083b83  addiu       $t0, $t0, 0x3B83
    ctx->pc = 0x1be0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15235));
label_1be0f8:
    // 0x1be0f8: 0x24e73b84  addiu       $a3, $a3, 0x3B84
    ctx->pc = 0x1be0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15236));
label_1be0fc:
    // 0x1be0fc: 0x24c63b85  addiu       $a2, $a2, 0x3B85
    ctx->pc = 0x1be0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15237));
label_1be100:
    // 0x1be100: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1be100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1be104:
    // 0x1be104: 0x24a53b86  addiu       $a1, $a1, 0x3B86
    ctx->pc = 0x1be104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15238));
label_1be108:
    // 0x1be108: 0xa2620242  sb          $v0, 0x242($s3)
    ctx->pc = 0x1be108u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 2));
label_1be10c:
    // 0x1be10c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be110:
    // 0x1be110: 0x902f4af6  lbu         $t7, 0x4AF6($at)
    ctx->pc = 0x1be110u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be114:
    // 0x1be114: 0xf1040  sll         $v0, $t7, 1
    ctx->pc = 0x1be114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
label_1be118:
    // 0x1be118: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be11c:
    // 0x1be11c: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x1be11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_1be120:
    // 0x1be120: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1be120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1be124:
    // 0x1be124: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1be124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_1be128:
    // 0x1be128: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1be128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1be12c:
    // 0x1be12c: 0xa662021e  sh          $v0, 0x21E($s3)
    ctx->pc = 0x1be12cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 542), (uint16_t)GPR_U32(ctx, 2));
label_1be130:
    // 0x1be130: 0xa662021c  sh          $v0, 0x21C($s3)
    ctx->pc = 0x1be130u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 2));
label_1be134:
    // 0x1be134: 0xa6620220  sh          $v0, 0x220($s3)
    ctx->pc = 0x1be134u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 2));
label_1be138:
    // 0x1be138: 0xa6600222  sh          $zero, 0x222($s3)
    ctx->pc = 0x1be138u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 0));
label_1be13c:
    // 0x1be13c: 0x902e4af6  lbu         $t6, 0x4AF6($at)
    ctx->pc = 0x1be13cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be140:
    // 0x1be140: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x1be140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
label_1be144:
    // 0x1be144: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be148:
    // 0x1be148: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x1be148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_1be14c:
    // 0x1be14c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1be14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1be150:
    // 0x1be150: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_1be154:
    // 0x1be154: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1be154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1be158:
    // 0x1be158: 0xa6620252  sh          $v0, 0x252($s3)
    ctx->pc = 0x1be158u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 2));
label_1be15c:
    // 0x1be15c: 0x902d4af6  lbu         $t5, 0x4AF6($at)
    ctx->pc = 0x1be15cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be160:
    // 0x1be160: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x1be160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
label_1be164:
    // 0x1be164: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be168:
    // 0x1be168: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x1be168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_1be16c:
    // 0x1be16c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1be16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1be170:
    // 0x1be170: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_1be174:
    // 0x1be174: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be178:
    // 0x1be178: 0xa262024a  sb          $v0, 0x24A($s3)
    ctx->pc = 0x1be178u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 586), (uint8_t)GPR_U32(ctx, 2));
label_1be17c:
    // 0x1be17c: 0x902c4af6  lbu         $t4, 0x4AF6($at)
    ctx->pc = 0x1be17cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be180:
    // 0x1be180: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x1be180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_1be184:
    // 0x1be184: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be188:
    // 0x1be188: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x1be188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_1be18c:
    // 0x1be18c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1be18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1be190:
    // 0x1be190: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1be190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_1be194:
    // 0x1be194: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be198:
    // 0x1be198: 0xa262024b  sb          $v0, 0x24B($s3)
    ctx->pc = 0x1be198u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 587), (uint8_t)GPR_U32(ctx, 2));
label_1be19c:
    // 0x1be19c: 0x902b4af6  lbu         $t3, 0x4AF6($at)
    ctx->pc = 0x1be19cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be1a0:
    // 0x1be1a0: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_1be1a4:
    // 0x1be1a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be1a8:
    // 0x1be1a8: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x1be1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1be1ac:
    // 0x1be1ac: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1be1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_1be1b0:
    // 0x1be1b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be1b4:
    // 0x1be1b4: 0xa2620241  sb          $v0, 0x241($s3)
    ctx->pc = 0x1be1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 577), (uint8_t)GPR_U32(ctx, 2));
label_1be1b8:
    // 0x1be1b8: 0x902a4af6  lbu         $t2, 0x4AF6($at)
    ctx->pc = 0x1be1b8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be1bc:
    // 0x1be1bc: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1be1c0:
    // 0x1be1c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be1c4:
    // 0x1be1c4: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1be1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1be1c8:
    // 0x1be1c8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1be1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1be1cc:
    // 0x1be1cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be1ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be1d0:
    // 0x1be1d0: 0xa2620242  sb          $v0, 0x242($s3)
    ctx->pc = 0x1be1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 2));
label_1be1d4:
    // 0x1be1d4: 0x90294af6  lbu         $t1, 0x4AF6($at)
    ctx->pc = 0x1be1d4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be1d8:
    // 0x1be1d8: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x1be1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1be1dc:
    // 0x1be1dc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be1e0:
    // 0x1be1e0: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1be1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1be1e4:
    // 0x1be1e4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1be1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1be1e8:
    // 0x1be1e8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be1ec:
    // 0x1be1ec: 0xa2620243  sb          $v0, 0x243($s3)
    ctx->pc = 0x1be1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 2));
label_1be1f0:
    // 0x1be1f0: 0x90284af6  lbu         $t0, 0x4AF6($at)
    ctx->pc = 0x1be1f0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be1f4:
    // 0x1be1f4: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1be1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1be1f8:
    // 0x1be1f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be1fc:
    // 0x1be1fc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1be1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1be200:
    // 0x1be200: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1be200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1be204:
    // 0x1be204: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be208:
    // 0x1be208: 0xa2620244  sb          $v0, 0x244($s3)
    ctx->pc = 0x1be208u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
label_1be20c:
    // 0x1be20c: 0x90274af6  lbu         $a3, 0x4AF6($at)
    ctx->pc = 0x1be20cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be210:
    // 0x1be210: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1be210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1be214:
    // 0x1be214: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1be218:
    // 0x1be218: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1be218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1be21c:
    // 0x1be21c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1be21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1be220:
    // 0x1be220: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1be224:
    // 0x1be224: 0xa2620246  sb          $v0, 0x246($s3)
    ctx->pc = 0x1be224u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 582), (uint8_t)GPR_U32(ctx, 2));
label_1be228:
    // 0x1be228: 0xa2600240  sb          $zero, 0x240($s3)
    ctx->pc = 0x1be228u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 576), (uint8_t)GPR_U32(ctx, 0));
label_1be22c:
    // 0x1be22c: 0xa2640248  sb          $a0, 0x248($s3)
    ctx->pc = 0x1be22cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 584), (uint8_t)GPR_U32(ctx, 4));
label_1be230:
    // 0x1be230: 0x90264af6  lbu         $a2, 0x4AF6($at)
    ctx->pc = 0x1be230u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1be234:
    // 0x1be234: 0x9264024a  lbu         $a0, 0x24A($s3)
    ctx->pc = 0x1be234u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
label_1be238:
    // 0x1be238: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1be238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1be23c:
    // 0x1be23c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1be23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1be240:
    // 0x1be240: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1be240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1be244:
    // 0x1be244: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1be244u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1be248:
    // 0x1be248: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1be248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1be24c:
    // 0x1be24c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1be24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1be250:
    // 0x1be250: 0x0  nop
    ctx->pc = 0x1be250u;
    // NOP
label_1be254:
    // 0x1be254: 0x0  nop
    ctx->pc = 0x1be254u;
    // NOP
label_1be258:
    // 0x1be258: 0x1810  mfhi        $v1
    ctx->pc = 0x1be258u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1be25c:
    // 0x1be25c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1be25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1be260:
    // 0x1be260: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1be260u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1be264:
    // 0x1be264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1be268:
    // 0x1be268: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1be268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1be26c:
    // 0x1be26c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1be270:
    if (ctx->pc == 0x1BE270u) {
        ctx->pc = 0x1BE274u;
        goto label_1be274;
    }
    ctx->pc = 0x1BE26Cu;
    {
        const bool branch_taken_0x1be26c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be26c) {
            ctx->pc = 0x1BE278u;
            goto label_1be278;
        }
    }
    ctx->pc = 0x1BE274u;
label_1be274:
    // 0x1be274: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1be274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be278:
    // 0x1be278: 0xa263024c  sb          $v1, 0x24C($s3)
    ctx->pc = 0x1be278u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 3));
label_1be27c:
    // 0x1be27c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1be280:
    // 0x1be280: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1be280u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
label_1be284:
    // 0x1be284: 0x24633b87  addiu       $v1, $v1, 0x3B87
    ctx->pc = 0x1be284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15239));
label_1be288:
    // 0x1be288: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be28c:
    // 0x1be28c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1be28cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1be290:
    // 0x1be290: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1be290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1be294:
    // 0x1be294: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1be294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1be298:
    // 0x1be298: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1be298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1be29c:
    // 0x1be29c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1be29cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1be2a0:
    // 0x1be2a0: 0x0  nop
    ctx->pc = 0x1be2a0u;
    // NOP
label_1be2a4:
    // 0x1be2a4: 0x0  nop
    ctx->pc = 0x1be2a4u;
    // NOP
label_1be2a8:
    // 0x1be2a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1be2a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1be2ac:
    // 0x1be2ac: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1be2acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1be2b0:
    // 0x1be2b0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1be2b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1be2b4:
    // 0x1be2b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1be2b8:
    // 0x1be2b8: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1be2b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1be2bc:
    // 0x1be2bc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1be2c0:
    if (ctx->pc == 0x1BE2C0u) {
        ctx->pc = 0x1BE2C4u;
        goto label_1be2c4;
    }
    ctx->pc = 0x1BE2BCu;
    {
        const bool branch_taken_0x1be2bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be2bc) {
            ctx->pc = 0x1BE2C8u;
            goto label_1be2c8;
        }
    }
    ctx->pc = 0x1BE2C4u;
label_1be2c4:
    // 0x1be2c4: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1be2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be2c8:
    // 0x1be2c8: 0xa263024d  sb          $v1, 0x24D($s3)
    ctx->pc = 0x1be2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 3));
label_1be2cc:
    // 0x1be2cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1be2d0:
    // 0x1be2d0: 0x9265024a  lbu         $a1, 0x24A($s3)
    ctx->pc = 0x1be2d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
label_1be2d4:
    // 0x1be2d4: 0x24633b88  addiu       $v1, $v1, 0x3B88
    ctx->pc = 0x1be2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15240));
label_1be2d8:
    // 0x1be2d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be2dc:
    // 0x1be2dc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1be2dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1be2e0:
    // 0x1be2e0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1be2e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1be2e4:
    // 0x1be2e4: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1be2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1be2e8:
    // 0x1be2e8: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1be2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1be2ec:
    // 0x1be2ec: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1be2ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1be2f0:
    // 0x1be2f0: 0x0  nop
    ctx->pc = 0x1be2f0u;
    // NOP
label_1be2f4:
    // 0x1be2f4: 0x0  nop
    ctx->pc = 0x1be2f4u;
    // NOP
label_1be2f8:
    // 0x1be2f8: 0x1810  mfhi        $v1
    ctx->pc = 0x1be2f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1be2fc:
    // 0x1be2fc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1be2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1be300:
    // 0x1be300: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1be300u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1be304:
    // 0x1be304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1be308:
    // 0x1be308: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1be308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1be30c:
    // 0x1be30c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1be310:
    if (ctx->pc == 0x1BE310u) {
        ctx->pc = 0x1BE314u;
        goto label_1be314;
    }
    ctx->pc = 0x1BE30Cu;
    {
        const bool branch_taken_0x1be30c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be30c) {
            ctx->pc = 0x1BE318u;
            goto label_1be318;
        }
    }
    ctx->pc = 0x1BE314u;
label_1be314:
    // 0x1be314: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1be314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be318:
    // 0x1be318: 0xa263024e  sb          $v1, 0x24E($s3)
    ctx->pc = 0x1be318u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 590), (uint8_t)GPR_U32(ctx, 3));
label_1be31c:
    // 0x1be31c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1be320:
    // 0x1be320: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1be320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
label_1be324:
    // 0x1be324: 0x24633b89  addiu       $v1, $v1, 0x3B89
    ctx->pc = 0x1be324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15241));
label_1be328:
    // 0x1be328: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be32c:
    // 0x1be32c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1be32cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1be330:
    // 0x1be330: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1be330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1be334:
    // 0x1be334: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1be334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1be338:
    // 0x1be338: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1be338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1be33c:
    // 0x1be33c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1be33cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1be340:
    // 0x1be340: 0x0  nop
    ctx->pc = 0x1be340u;
    // NOP
label_1be344:
    // 0x1be344: 0x0  nop
    ctx->pc = 0x1be344u;
    // NOP
label_1be348:
    // 0x1be348: 0x1810  mfhi        $v1
    ctx->pc = 0x1be348u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1be34c:
    // 0x1be34c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1be34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1be350:
    // 0x1be350: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1be350u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1be354:
    // 0x1be354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1be358:
    // 0x1be358: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1be358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1be35c:
    // 0x1be35c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1be360:
    if (ctx->pc == 0x1BE360u) {
        ctx->pc = 0x1BE364u;
        goto label_1be364;
    }
    ctx->pc = 0x1BE35Cu;
    {
        const bool branch_taken_0x1be35c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be35c) {
            ctx->pc = 0x1BE368u;
            goto label_1be368;
        }
    }
    ctx->pc = 0x1BE364u;
label_1be364:
    // 0x1be364: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1be364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be368:
    // 0x1be368: 0xa263024f  sb          $v1, 0x24F($s3)
    ctx->pc = 0x1be368u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 591), (uint8_t)GPR_U32(ctx, 3));
label_1be36c:
    // 0x1be36c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1be370:
    // 0x1be370: 0x24633b8a  addiu       $v1, $v1, 0x3B8A
    ctx->pc = 0x1be370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15242));
label_1be374:
    // 0x1be374: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be378:
    // 0x1be378: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1be378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1be37c:
    // 0x1be37c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1be380:
    if (ctx->pc == 0x1BE380u) {
        ctx->pc = 0x1BE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE37Cu;
        // 0x1be380: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE384u;
        goto label_1be384;
    }
    ctx->pc = 0x1BE37Cu;
    {
        const bool branch_taken_0x1be37c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE37Cu;
        // 0x1be380: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be37c) {
            ctx->pc = 0x1BE390u;
            goto label_1be390;
        }
    }
    ctx->pc = 0x1BE384u;
label_1be384:
    // 0x1be384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be388:
    // 0x1be388: 0x10000007  b           . + 4 + (0x7 << 2)
label_1be38c:
    if (ctx->pc == 0x1BE38Cu) {
        ctx->pc = 0x1BE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE388u;
        // 0x1be38c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BE390u;
        goto label_1be390;
    }
    ctx->pc = 0x1BE388u;
    {
        const bool branch_taken_0x1be388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE388u;
        // 0x1be38c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be388) {
            ctx->pc = 0x1BE3A8u;
            goto label_1be3a8;
        }
    }
    ctx->pc = 0x1BE390u;
label_1be390:
    // 0x1be390: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1be390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1be394:
    // 0x1be394: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1be394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1be398:
    // 0x1be398: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1be398u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1be39c:
    // 0x1be39c: 0x0  nop
    ctx->pc = 0x1be39cu;
    // NOP
label_1be3a0:
    // 0x1be3a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1be3a4:
    // 0x1be3a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1be3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1be3a8:
    // 0x1be3a8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1be3ac:
    // 0x1be3ac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1be3b0:
    // 0x1be3b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1be3b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1be3b4:
    // 0x1be3b4: 0x24633b8b  addiu       $v1, $v1, 0x3B8B
    ctx->pc = 0x1be3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15243));
label_1be3b8:
    // 0x1be3b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be3bc:
    // 0x1be3bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1be3bcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    ctx->pc = 0x1be3c0u;
    return;
}

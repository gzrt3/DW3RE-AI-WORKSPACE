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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part71(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2be060u: goto label_2be060;
        case 0x2be064u: goto label_2be064;
        case 0x2be068u: goto label_2be068;
        case 0x2be06cu: goto label_2be06c;
        case 0x2be070u: goto label_2be070;
        case 0x2be074u: goto label_2be074;
        case 0x2be078u: goto label_2be078;
        case 0x2be07cu: goto label_2be07c;
        case 0x2be080u: goto label_2be080;
        case 0x2be084u: goto label_2be084;
        case 0x2be088u: goto label_2be088;
        case 0x2be08cu: goto label_2be08c;
        case 0x2be090u: goto label_2be090;
        case 0x2be094u: goto label_2be094;
        case 0x2be098u: goto label_2be098;
        case 0x2be09cu: goto label_2be09c;
        case 0x2be0a0u: goto label_2be0a0;
        case 0x2be0a4u: goto label_2be0a4;
        case 0x2be0a8u: goto label_2be0a8;
        case 0x2be0acu: goto label_2be0ac;
        case 0x2be0b0u: goto label_2be0b0;
        case 0x2be0b4u: goto label_2be0b4;
        case 0x2be0b8u: goto label_2be0b8;
        case 0x2be0bcu: goto label_2be0bc;
        case 0x2be0c0u: goto label_2be0c0;
        case 0x2be0c4u: goto label_2be0c4;
        case 0x2be0c8u: goto label_2be0c8;
        case 0x2be0ccu: goto label_2be0cc;
        case 0x2be0d0u: goto label_2be0d0;
        case 0x2be0d4u: goto label_2be0d4;
        case 0x2be0d8u: goto label_2be0d8;
        case 0x2be0dcu: goto label_2be0dc;
        case 0x2be0e0u: goto label_2be0e0;
        case 0x2be0e4u: goto label_2be0e4;
        case 0x2be0e8u: goto label_2be0e8;
        case 0x2be0ecu: goto label_2be0ec;
        case 0x2be0f0u: goto label_2be0f0;
        case 0x2be0f4u: goto label_2be0f4;
        case 0x2be0f8u: goto label_2be0f8;
        case 0x2be0fcu: goto label_2be0fc;
        case 0x2be100u: goto label_2be100;
        case 0x2be104u: goto label_2be104;
        case 0x2be108u: goto label_2be108;
        case 0x2be10cu: goto label_2be10c;
        case 0x2be110u: goto label_2be110;
        case 0x2be114u: goto label_2be114;
        case 0x2be118u: goto label_2be118;
        case 0x2be11cu: goto label_2be11c;
        case 0x2be120u: goto label_2be120;
        case 0x2be124u: goto label_2be124;
        case 0x2be128u: goto label_2be128;
        case 0x2be12cu: goto label_2be12c;
        case 0x2be130u: goto label_2be130;
        case 0x2be134u: goto label_2be134;
        case 0x2be138u: goto label_2be138;
        case 0x2be13cu: goto label_2be13c;
        case 0x2be140u: goto label_2be140;
        case 0x2be144u: goto label_2be144;
        case 0x2be148u: goto label_2be148;
        case 0x2be14cu: goto label_2be14c;
        case 0x2be150u: goto label_2be150;
        case 0x2be154u: goto label_2be154;
        case 0x2be158u: goto label_2be158;
        case 0x2be15cu: goto label_2be15c;
        case 0x2be160u: goto label_2be160;
        case 0x2be164u: goto label_2be164;
        case 0x2be168u: goto label_2be168;
        case 0x2be16cu: goto label_2be16c;
        case 0x2be170u: goto label_2be170;
        case 0x2be174u: goto label_2be174;
        case 0x2be178u: goto label_2be178;
        case 0x2be17cu: goto label_2be17c;
        case 0x2be180u: goto label_2be180;
        case 0x2be184u: goto label_2be184;
        case 0x2be188u: goto label_2be188;
        case 0x2be18cu: goto label_2be18c;
        case 0x2be190u: goto label_2be190;
        case 0x2be194u: goto label_2be194;
        case 0x2be198u: goto label_2be198;
        case 0x2be19cu: goto label_2be19c;
        case 0x2be1a0u: goto label_2be1a0;
        case 0x2be1a4u: goto label_2be1a4;
        case 0x2be1a8u: goto label_2be1a8;
        case 0x2be1acu: goto label_2be1ac;
        case 0x2be1b0u: goto label_2be1b0;
        case 0x2be1b4u: goto label_2be1b4;
        case 0x2be1b8u: goto label_2be1b8;
        case 0x2be1bcu: goto label_2be1bc;
        case 0x2be1c0u: goto label_2be1c0;
        case 0x2be1c4u: goto label_2be1c4;
        case 0x2be1c8u: goto label_2be1c8;
        case 0x2be1ccu: goto label_2be1cc;
        case 0x2be1d0u: goto label_2be1d0;
        case 0x2be1d4u: goto label_2be1d4;
        case 0x2be1d8u: goto label_2be1d8;
        case 0x2be1dcu: goto label_2be1dc;
        case 0x2be1e0u: goto label_2be1e0;
        case 0x2be1e4u: goto label_2be1e4;
        case 0x2be1e8u: goto label_2be1e8;
        case 0x2be1ecu: goto label_2be1ec;
        case 0x2be1f0u: goto label_2be1f0;
        case 0x2be1f4u: goto label_2be1f4;
        case 0x2be1f8u: goto label_2be1f8;
        case 0x2be1fcu: goto label_2be1fc;
        case 0x2be200u: goto label_2be200;
        case 0x2be204u: goto label_2be204;
        case 0x2be208u: goto label_2be208;
        case 0x2be20cu: goto label_2be20c;
        case 0x2be210u: goto label_2be210;
        case 0x2be214u: goto label_2be214;
        case 0x2be218u: goto label_2be218;
        case 0x2be21cu: goto label_2be21c;
        case 0x2be220u: goto label_2be220;
        case 0x2be224u: goto label_2be224;
        case 0x2be228u: goto label_2be228;
        case 0x2be22cu: goto label_2be22c;
        case 0x2be230u: goto label_2be230;
        case 0x2be234u: goto label_2be234;
        case 0x2be238u: goto label_2be238;
        case 0x2be23cu: goto label_2be23c;
        case 0x2be240u: goto label_2be240;
        case 0x2be244u: goto label_2be244;
        case 0x2be248u: goto label_2be248;
        case 0x2be24cu: goto label_2be24c;
        case 0x2be250u: goto label_2be250;
        case 0x2be254u: goto label_2be254;
        case 0x2be258u: goto label_2be258;
        case 0x2be25cu: goto label_2be25c;
        case 0x2be260u: goto label_2be260;
        case 0x2be264u: goto label_2be264;
        case 0x2be268u: goto label_2be268;
        case 0x2be26cu: goto label_2be26c;
        case 0x2be270u: goto label_2be270;
        case 0x2be274u: goto label_2be274;
        case 0x2be278u: goto label_2be278;
        case 0x2be27cu: goto label_2be27c;
        case 0x2be280u: goto label_2be280;
        case 0x2be284u: goto label_2be284;
        case 0x2be288u: goto label_2be288;
        case 0x2be28cu: goto label_2be28c;
        case 0x2be290u: goto label_2be290;
        case 0x2be294u: goto label_2be294;
        case 0x2be298u: goto label_2be298;
        case 0x2be29cu: goto label_2be29c;
        case 0x2be2a0u: goto label_2be2a0;
        case 0x2be2a4u: goto label_2be2a4;
        case 0x2be2a8u: goto label_2be2a8;
        case 0x2be2acu: goto label_2be2ac;
        case 0x2be2b0u: goto label_2be2b0;
        case 0x2be2b4u: goto label_2be2b4;
        case 0x2be2b8u: goto label_2be2b8;
        case 0x2be2bcu: goto label_2be2bc;
        case 0x2be2c0u: goto label_2be2c0;
        case 0x2be2c4u: goto label_2be2c4;
        case 0x2be2c8u: goto label_2be2c8;
        case 0x2be2ccu: goto label_2be2cc;
        case 0x2be2d0u: goto label_2be2d0;
        case 0x2be2d4u: goto label_2be2d4;
        case 0x2be2d8u: goto label_2be2d8;
        case 0x2be2dcu: goto label_2be2dc;
        case 0x2be2e0u: goto label_2be2e0;
        case 0x2be2e4u: goto label_2be2e4;
        case 0x2be2e8u: goto label_2be2e8;
        case 0x2be2ecu: goto label_2be2ec;
        case 0x2be2f0u: goto label_2be2f0;
        case 0x2be2f4u: goto label_2be2f4;
        case 0x2be2f8u: goto label_2be2f8;
        case 0x2be2fcu: goto label_2be2fc;
        case 0x2be300u: goto label_2be300;
        case 0x2be304u: goto label_2be304;
        case 0x2be308u: goto label_2be308;
        case 0x2be30cu: goto label_2be30c;
        case 0x2be310u: goto label_2be310;
        case 0x2be314u: goto label_2be314;
        case 0x2be318u: goto label_2be318;
        case 0x2be31cu: goto label_2be31c;
        case 0x2be320u: goto label_2be320;
        case 0x2be324u: goto label_2be324;
        case 0x2be328u: goto label_2be328;
        case 0x2be32cu: goto label_2be32c;
        case 0x2be330u: goto label_2be330;
        case 0x2be334u: goto label_2be334;
        case 0x2be338u: goto label_2be338;
        case 0x2be33cu: goto label_2be33c;
        case 0x2be340u: goto label_2be340;
        case 0x2be344u: goto label_2be344;
        case 0x2be348u: goto label_2be348;
        case 0x2be34cu: goto label_2be34c;
        case 0x2be350u: goto label_2be350;
        case 0x2be354u: goto label_2be354;
        case 0x2be358u: goto label_2be358;
        case 0x2be35cu: goto label_2be35c;
        case 0x2be360u: goto label_2be360;
        case 0x2be364u: goto label_2be364;
        case 0x2be368u: goto label_2be368;
        case 0x2be36cu: goto label_2be36c;
        case 0x2be370u: goto label_2be370;
        case 0x2be374u: goto label_2be374;
        case 0x2be378u: goto label_2be378;
        case 0x2be37cu: goto label_2be37c;
        case 0x2be380u: goto label_2be380;
        case 0x2be384u: goto label_2be384;
        case 0x2be388u: goto label_2be388;
        case 0x2be38cu: goto label_2be38c;
        case 0x2be390u: goto label_2be390;
        case 0x2be394u: goto label_2be394;
        case 0x2be398u: goto label_2be398;
        case 0x2be39cu: goto label_2be39c;
        case 0x2be3a0u: goto label_2be3a0;
        case 0x2be3a4u: goto label_2be3a4;
        case 0x2be3a8u: goto label_2be3a8;
        case 0x2be3acu: goto label_2be3ac;
        case 0x2be3b0u: goto label_2be3b0;
        case 0x2be3b4u: goto label_2be3b4;
        case 0x2be3b8u: goto label_2be3b8;
        case 0x2be3bcu: goto label_2be3bc;
        case 0x2be3c0u: goto label_2be3c0;
        case 0x2be3c4u: goto label_2be3c4;
        case 0x2be3c8u: goto label_2be3c8;
        case 0x2be3ccu: goto label_2be3cc;
        case 0x2be3d0u: goto label_2be3d0;
        case 0x2be3d4u: goto label_2be3d4;
        case 0x2be3d8u: goto label_2be3d8;
        case 0x2be3dcu: goto label_2be3dc;
        case 0x2be3e0u: goto label_2be3e0;
        case 0x2be3e4u: goto label_2be3e4;
        case 0x2be3e8u: goto label_2be3e8;
        case 0x2be3ecu: goto label_2be3ec;
        case 0x2be3f0u: goto label_2be3f0;
        case 0x2be3f4u: goto label_2be3f4;
        case 0x2be3f8u: goto label_2be3f8;
        case 0x2be3fcu: goto label_2be3fc;
        case 0x2be400u: goto label_2be400;
        case 0x2be404u: goto label_2be404;
        case 0x2be408u: goto label_2be408;
        case 0x2be40cu: goto label_2be40c;
        case 0x2be410u: goto label_2be410;
        case 0x2be414u: goto label_2be414;
        case 0x2be418u: goto label_2be418;
        case 0x2be41cu: goto label_2be41c;
        case 0x2be420u: goto label_2be420;
        case 0x2be424u: goto label_2be424;
        case 0x2be428u: goto label_2be428;
        case 0x2be42cu: goto label_2be42c;
        case 0x2be430u: goto label_2be430;
        case 0x2be434u: goto label_2be434;
        case 0x2be438u: goto label_2be438;
        case 0x2be43cu: goto label_2be43c;
        case 0x2be440u: goto label_2be440;
        case 0x2be444u: goto label_2be444;
        case 0x2be448u: goto label_2be448;
        case 0x2be44cu: goto label_2be44c;
        case 0x2be450u: goto label_2be450;
        case 0x2be454u: goto label_2be454;
        case 0x2be458u: goto label_2be458;
        case 0x2be45cu: goto label_2be45c;
        case 0x2be460u: goto label_2be460;
        case 0x2be464u: goto label_2be464;
        case 0x2be468u: goto label_2be468;
        case 0x2be46cu: goto label_2be46c;
        case 0x2be470u: goto label_2be470;
        case 0x2be474u: goto label_2be474;
        case 0x2be478u: goto label_2be478;
        case 0x2be47cu: goto label_2be47c;
        case 0x2be480u: goto label_2be480;
        case 0x2be484u: goto label_2be484;
        case 0x2be488u: goto label_2be488;
        case 0x2be48cu: goto label_2be48c;
        case 0x2be490u: goto label_2be490;
        case 0x2be494u: goto label_2be494;
        default: return;
    }

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
            goto label_2be124;
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
label_2be060:
    // 0x2be060: 0x3e89805  .word       0x03E89805                   # INVALID     $ra, $t0, -0x67FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BE060 raw=0x03E89805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be064:
    // 0x2be064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be068:
    // 0x2be068: 0x3e8a009  .word       0x03E8A009                   # jalr        $s4, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2be06c:
    if (ctx->pc == 0x2BE06Cu) {
        ctx->pc = 0x2BE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE068u;
        // 0x2be06c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE070u;
        goto label_2be070;
    }
    ctx->pc = 0x2BE068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 20, 0x2BE070u);
        ctx->pc = 0x2BE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE068u;
        // 0x2be06c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE068u, 0x2BE070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE070u;
label_2be070:
    // 0x2be070: 0x3e8a80d  break       1000, 672
    ctx->pc = 0x2be070u;
    runtime->handleBreak(rdram, ctx);
label_2be074:
    // 0x2be074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be078:
    // 0x2be078: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be078u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2be07c:
    // 0x2be07c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be07cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be080:
    // 0x2be080: 0x3e8b806  srlv        $s7, $t0, $ra
    ctx->pc = 0x2be080u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2be084:
    // 0x2be084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be088:
    // 0x2be088: 0x3e8c00a  movz        $t8, $ra, $t0
    ctx->pc = 0x2be088u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 31));
label_2be08c:
    // 0x2be08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be090:
    // 0x2be090: 0x3e8b00e  .word       0x03E8B00E                   # INVALID     $ra, $t0, -0x4FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be090u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2BE090 raw=0x03E8B00E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be094:
    // 0x2be094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be098:
    // 0x2be098: 0x3e8c803  .word       0x03E8C803                   # sra         $t9, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be098u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 8), 0));
label_2be09c:
    // 0x2be09c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be09cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0a0:
    // 0x2be0a0: 0x3e8d007  srav        $k0, $t0, $ra
    ctx->pc = 0x2be0a0u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2be0a4:
    // 0x2be0a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0a8:
    // 0x2be0a8: 0x3e8d80b  movn        $k1, $ra, $t0
    ctx->pc = 0x2be0a8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 27, GPR_VEC(ctx, 31));
label_2be0ac:
    // 0x2be0ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0b0:
    // 0x2be0b0: 0x3e8c80f  .word       0x03E8C80F                   # sync # 03E8C800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be0b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2be0b4:
    // 0x2be0b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0b8:
    // 0x2be0b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2be0b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2be0bc:
    // 0x2be0bc: 0x81f182bc  lb          $s1, -0x7D44($t7)
    ctx->pc = 0x2be0bcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935228)));
label_2be0c0:
    // 0x2be0c0: 0x3eaaaaaa  .word       0x3EAAAAAA                   # lui         $t2, 0xAAAA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2be0c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43690 << 16));
label_2be0c4:
    // 0x2be0c4: 0x81e09723  lb          $zero, -0x68DD($t7)
    ctx->pc = 0x2be0c4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294940451)));
label_2be0c8:
    // 0x2be0c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0cc:
    // 0x2be0cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0d0:
    // 0x2be0d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0d4:
    // 0x2be0d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0d8:
    // 0x2be0d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0dc:
    // 0x2be0dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0e0:
    // 0x2be0e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0e4:
    // 0x2be0e4: 0x1e0e71e  .word       0x01E0E71E                   # ddiv        $gp, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be0e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2BE0E4 raw=0x01E0E71E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be0e8:
    // 0x2be0e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0ec:
    // 0x2be0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0f0:
    // 0x2be0f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0f4:
    // 0x2be0f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be0f8:
    // 0x2be0f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be0f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be0fc:
    // 0x2be0fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be100:
    // 0x2be100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be104:
    // 0x2be104: 0x1fc866c  .word       0x01FC866C                   # dadd        $s0, $t7, $gp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be104u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2be108:
    // 0x2be108: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be108u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be10c:
    // 0x2be10c: 0x1fc8eac  .word       0x01FC8EAC                   # dadd        $s1, $t7, $gp # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be10cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2be110:
    // 0x2be110: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be110u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be114:
    // 0x2be114: 0x1fc96ec  .word       0x01FC96EC                   # dadd        $s2, $t7, $gp # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be114u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2be118:
    // 0x2be118: 0x3f808312  .word       0x3F808312                   # lui         $zero, 0x8312 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2be118u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_2be11c:
    // 0x2be11c: 0x81e0e1bf  lb          $zero, -0x1E41($t7)
    ctx->pc = 0x2be11cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959551)));
label_2be120:
    // 0x2be120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be124:
    // 0x2be124: 0x1e0cda3  .word       0x01E0CDA3                   # subu        $t9, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be124u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2be128:
    // 0x2be128: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be128u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be12c:
    // 0x2be12c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be12cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2be130:
    // 0x2be130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be134:
    // 0x2be134: 0x1e0d5e3  .word       0x01E0D5E3                   # subu        $k0, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be134u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2be138:
    // 0x2be138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be13c:
    // 0x2be13c: 0x1e0e1bf  .word       0x01E0E1BF                   # dsra32      $gp, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be13cu;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 0) >> (32 + 6));
label_2be140:
    // 0x2be140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be144:
    // 0x2be144: 0x1e0de23  .word       0x01E0DE23                   # subu        $k1, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be144u;
    SET_GPR_S32(ctx, 27, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 0)));
label_2be148:
    // 0x2be148: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2be148u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2BE148 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be14c:
    // 0x2be14c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2be14cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2be150:
    // 0x2be150: 0x3e8b000  .word       0x03E8B000                   # sll         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be150u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2be154:
    // 0x2be154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be158:
    // 0x2be158: 0x3e8b804  sllv        $s7, $t0, $ra
    ctx->pc = 0x2be158u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2be15c:
    // 0x2be15c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be15cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be160:
    // 0x2be160: 0x3e8c008  .word       0x03E8C008                   # jr          $ra # 0008C000 <InstrIdType: CPU_SPECIAL>
label_2be164:
    if (ctx->pc == 0x2BE164u) {
        ctx->pc = 0x2BE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE160u;
        // 0x2be164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE168u;
        goto label_2be168;
    }
    ctx->pc = 0x2BE160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE160u;
        // 0x2be164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE168u;
label_2be168:
    // 0x2be168: 0x3e8b00c  .word       0x03E8B00C                   # syscall     704 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be168u;
    ctx->pc = 0x2BE16Cu;
runtime->handleSyscall(rdram, ctx, 0xFA2C0u);
label_2be16c:
    // 0x2be16c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be16cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be170:
    // 0x2be170: 0x800040f0  lb          $zero, 0x40F0($zero)
    ctx->pc = 0x2be170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x40F0u));
label_2be174:
    // 0x2be174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be178:
    // 0x2be178: 0x420f0678  .word       0x420F0678                   # ei # 000F0640 <InstrIdType: R5900_COP0_TLB>
    ctx->pc = 0x2be178u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_2be17c:
    // 0x2be17c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be17cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be180:
    // 0x2be180: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be184:
    // 0x2be184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be188:
    // 0x2be188: 0x500a0020  beql        $zero, $t2, . + 4 + (0x20 << 2)
label_2be18c:
    if (ctx->pc == 0x2BE18Cu) {
        ctx->pc = 0x2BE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE188u;
        // 0x2be18c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE190u;
        goto label_2be190;
    }
    ctx->pc = 0x2BE188u;
    {
        const bool branch_taken_0x2be188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        if (branch_taken_0x2be188) {
            ctx->pc = 0x2BE18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE188u;
            // 0x2be18c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE20Cu;
            goto label_2be20c;
        }
    }
    ctx->pc = 0x2BE190u;
label_2be190:
    // 0x2be190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be194:
    // 0x2be194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be198:
    // 0x2be198: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2be19c:
    if (ctx->pc == 0x2BE19Cu) {
        ctx->pc = 0x2BE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE198u;
        // 0x2be19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1A0u;
        goto label_2be1a0;
    }
    ctx->pc = 0x2BE198u;
    {
        const bool branch_taken_0x2be198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE198u;
        // 0x2be19c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be198) {
            ctx->pc = 0x2D21B8u;
            return;
        }
    }
    ctx->pc = 0x2BE1A0u;
label_2be1a0:
    // 0x2be1a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be1a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be1a4:
    // 0x2be1a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1a8:
    // 0x2be1a8: 0x5a000820  blezl       $s0, . + 4 + (0x820 << 2)
label_2be1ac:
    if (ctx->pc == 0x2BE1ACu) {
        ctx->pc = 0x2BE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1A8u;
        // 0x2be1ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1B0u;
        goto label_2be1b0;
    }
    ctx->pc = 0x2BE1A8u;
    {
        const bool branch_taken_0x2be1a8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2be1a8) {
            ctx->pc = 0x2BE1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE1A8u;
            // 0x2be1ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C022Cu;
            return;
        }
    }
    ctx->pc = 0x2BE1B0u;
label_2be1b0:
    // 0x2be1b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be1b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be1b4:
    // 0x2be1b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1b8:
    // 0x2be1b8: 0x10021840  beq         $zero, $v0, . + 4 + (0x1840 << 2)
label_2be1bc:
    if (ctx->pc == 0x2BE1BCu) {
        ctx->pc = 0x2BE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1B8u;
        // 0x2be1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1C0u;
        goto label_2be1c0;
    }
    ctx->pc = 0x2BE1B8u;
    {
        const bool branch_taken_0x2be1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1B8u;
        // 0x2be1bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1b8) {
            ctx->pc = 0x2C42BCu;
            return;
        }
    }
    ctx->pc = 0x2BE1C0u;
label_2be1c0:
    // 0x2be1c0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2be1c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2be1c4:
    // 0x2be1c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1c8:
    // 0x2be1c8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be1c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BE1C8 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be1cc:
    // 0x2be1cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1d0:
    // 0x2be1d0: 0x10051001  beq         $zero, $a1, . + 4 + (0x1001 << 2)
label_2be1d4:
    if (ctx->pc == 0x2BE1D4u) {
        ctx->pc = 0x2BE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1D0u;
        // 0x2be1d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1D8u;
        goto label_2be1d8;
    }
    ctx->pc = 0x2BE1D0u;
    {
        const bool branch_taken_0x2be1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1D0u;
        // 0x2be1d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1d0) {
            ctx->pc = 0x2C21D8u;
            return;
        }
    }
    ctx->pc = 0x2BE1D8u;
label_2be1d8:
    // 0x2be1d8: 0x800a5070  lb          $t2, 0x5070($zero)
    ctx->pc = 0x2be1d8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x5070u));
label_2be1dc:
    // 0x2be1dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1e0:
    // 0x2be1e0: 0x800a0870  lb          $t2, 0x870($zero)
    ctx->pc = 0x2be1e0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x870u));
label_2be1e4:
    // 0x2be1e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1e8:
    // 0x2be1e8: 0x80012870  lb          $at, 0x2870($zero)
    ctx->pc = 0x2be1e8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2870u));
label_2be1ec:
    // 0x2be1ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be1ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be1f0:
    // 0x2be1f0: 0x10060801  beq         $zero, $a2, . + 4 + (0x801 << 2)
label_2be1f4:
    if (ctx->pc == 0x2BE1F4u) {
        ctx->pc = 0x2BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F0u;
        // 0x2be1f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE1F8u;
        goto label_2be1f8;
    }
    ctx->pc = 0x2BE1F0u;
    {
        const bool branch_taken_0x2be1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F0u;
        // 0x2be1f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1f0) {
            ctx->pc = 0x2C01F8u;
            return;
        }
    }
    ctx->pc = 0x2BE1F8u;
label_2be1f8:
    // 0x2be1f8: 0x10081820  beq         $zero, $t0, . + 4 + (0x1820 << 2)
label_2be1fc:
    if (ctx->pc == 0x2BE1FCu) {
        ctx->pc = 0x2BE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F8u;
        // 0x2be1fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE200u;
        goto label_2be200;
    }
    ctx->pc = 0x2BE1F8u;
    {
        const bool branch_taken_0x2be1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F8u;
        // 0x2be1fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1f8) {
            ctx->pc = 0x2C427Cu;
            return;
        }
    }
    ctx->pc = 0x2BE200u;
label_2be200:
    // 0x2be200: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2be204:
    if (ctx->pc == 0x2BE204u) {
        ctx->pc = 0x2BE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE200u;
        // 0x2be204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE208u;
        goto label_2be208;
    }
    ctx->pc = 0x2BE200u;
    {
        const bool branch_taken_0x2be200 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE200u;
        // 0x2be204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be200) {
            ctx->pc = 0x2D4200u;
            return;
        }
    }
    ctx->pc = 0x2BE208u;
label_2be208:
    // 0x2be208: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2be20c:
    if (ctx->pc == 0x2BE20Cu) {
        ctx->pc = 0x2BE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE208u;
        // 0x2be20c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE210u;
        goto label_2be210;
    }
    ctx->pc = 0x2BE208u;
    {
        const bool branch_taken_0x2be208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE208u;
        // 0x2be20c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be208) {
            ctx->pc = 0x2D4210u;
            return;
        }
    }
    ctx->pc = 0x2BE210u;
label_2be210:
    // 0x2be210: 0x3e5d000  .word       0x03E5D000                   # sll         $k0, $a1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be210u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_2be214:
    // 0x2be214: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be214u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be218:
    // 0x2be218: 0x3e6d000  .word       0x03E6D000                   # sll         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be218u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2be21c:
    // 0x2be21c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be21cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be220:
    // 0x2be220: 0xb0b2800  j           func_C2CA000
label_2be224:
    if (ctx->pc == 0x2BE224u) {
        ctx->pc = 0x2BE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE220u;
        // 0x2be224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE228u;
        goto label_2be228;
    }
    ctx->pc = 0x2BE220u;
    ctx->pc = 0x2BE224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE220u;
    // 0x2be224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CA000u, 0x2BE220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE228u;
label_2be228:
    // 0x2be228: 0xb0b3000  j           func_C2CC000
label_2be22c:
    if (ctx->pc == 0x2BE22Cu) {
        ctx->pc = 0x2BE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE228u;
        // 0x2be22c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE230u;
        goto label_2be230;
    }
    ctx->pc = 0x2BE228u;
    ctx->pc = 0x2BE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE228u;
    // 0x2be22c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2CC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2CC000u, 0x2BE228u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE230u;
label_2be230:
    // 0x2be230: 0x4201075f  .word       0x4201075F                   # INVALID     $s0, $at, 0x75F # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2be230u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1F at 0x2BE230 raw=0x4201075F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be234:
    // 0x2be234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be238:
    // 0x2be238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be23c:
    // 0x2be23c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be23cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be240:
    // 0x2be240: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2be240u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2be244:
    // 0x2be244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be248:
    // 0x2be248: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2be248u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2be24c:
    // 0x2be24c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be24cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be250:
    // 0x2be250: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be254:
    // 0x2be254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be258:
    // 0x2be258: 0xa231000  j           func_88C4000
label_2be25c:
    if (ctx->pc == 0x2BE25Cu) {
        ctx->pc = 0x2BE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE258u;
        // 0x2be25c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE260u;
        goto label_2be260;
    }
    ctx->pc = 0x2BE258u;
    ctx->pc = 0x2BE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE258u;
    // 0x2be25c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88C4000u, 0x2BE258u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE260u;
label_2be260:
    // 0x2be260: 0x80002efc  lb          $zero, 0x2EFC($zero)
    ctx->pc = 0x2be260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2EFCu));
label_2be264:
    // 0x2be264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be268:
    // 0x2be268: 0x10021005  beq         $zero, $v0, . + 4 + (0x1005 << 2)
label_2be26c:
    if (ctx->pc == 0x2BE26Cu) {
        ctx->pc = 0x2BE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE268u;
        // 0x2be26c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE270u;
        goto label_2be270;
    }
    ctx->pc = 0x2BE268u;
    {
        const bool branch_taken_0x2be268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE268u;
        // 0x2be26c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be268) {
            ctx->pc = 0x2C2280u;
            return;
        }
    }
    ctx->pc = 0x2BE270u;
label_2be270:
    // 0x2be270: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2be270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2be274:
    // 0x2be274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be278:
    // 0x2be278: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be27c:
    // 0x2be27c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be27cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be280:
    // 0x2be280: 0x800036fc  lb          $zero, 0x36FC($zero)
    ctx->pc = 0x2be280u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x36FCu));
label_2be284:
    // 0x2be284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be288:
    // 0x2be288: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be28c:
    // 0x2be28c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be28cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be290:
    // 0x2be290: 0x120e700c  beq         $s0, $t6, . + 4 + (0x700C << 2)
label_2be294:
    if (ctx->pc == 0x2BE294u) {
        ctx->pc = 0x2BE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE290u;
        // 0x2be294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE298u;
        goto label_2be298;
    }
    ctx->pc = 0x2BE290u;
    {
        const bool branch_taken_0x2be290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2BE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE290u;
        // 0x2be294: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be290) {
            ctx->pc = 0x2DA2C4u;
            return;
        }
    }
    ctx->pc = 0x2BE298u;
label_2be298:
    // 0x2be298: 0x0  nop
    ctx->pc = 0x2be298u;
    // NOP
label_2be29c:
    // 0x2be29c: 0x4a090300  vaddx       $vf12, $vf0, $vf9x
    ctx->pc = 0x2be29cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_2be2a0:
    // 0x2be2a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be2a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be2a4:
    // 0x2be2a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2a8:
    // 0x2be2a8: 0x5a0077a6  blezl       $s0, . + 4 + (0x77A6 << 2)
label_2be2ac:
    if (ctx->pc == 0x2BE2ACu) {
        ctx->pc = 0x2BE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2A8u;
        // 0x2be2ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2B0u;
        goto label_2be2b0;
    }
    ctx->pc = 0x2BE2A8u;
    {
        const bool branch_taken_0x2be2a8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2be2a8) {
            ctx->pc = 0x2BE2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE2A8u;
            // 0x2be2ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC144u;
            return;
        }
    }
    ctx->pc = 0x2BE2B0u;
label_2be2b0:
    // 0x2be2b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be2b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be2b4:
    // 0x2be2b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2b8:
    // 0x2be2b8: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x2be2b8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
label_2be2bc:
    // 0x2be2bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2c0:
    // 0x2be2c0: 0x100108ca  beq         $zero, $at, . + 4 + (0x8CA << 2)
label_2be2c4:
    if (ctx->pc == 0x2BE2C4u) {
        ctx->pc = 0x2BE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2C0u;
        // 0x2be2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE2C8u;
        goto label_2be2c8;
    }
    ctx->pc = 0x2BE2C0u;
    {
        const bool branch_taken_0x2be2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2C0u;
        // 0x2be2c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2c0) {
            ctx->pc = 0x2C05ECu;
            return;
        }
    }
    ctx->pc = 0x2BE2C8u;
label_2be2c8:
    // 0x2be2c8: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x2be2c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
label_2be2cc:
    // 0x2be2cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2d0:
    // 0x2be2d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be2d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be2d4:
    // 0x2be2d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2d8:
    // 0x2be2d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be2d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be2dc:
    // 0x2be2dc: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2be2dcu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2be2e0:
    // 0x2be2e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be2e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be2e4:
    // 0x2be2e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be2e8:
    // 0x2be2e8: 0x0  nop
    ctx->pc = 0x2be2e8u;
    // NOP
label_2be2ec:
    // 0x2be2ec: 0x0  nop
    ctx->pc = 0x2be2ecu;
    // NOP
label_2be2f0:
    // 0x2be2f0: 0x0  nop
    ctx->pc = 0x2be2f0u;
    // NOP
label_2be2f4:
    // 0x2be2f4: 0x4a8a0450  vmaxx.y     $vf17, $vf0, $vf10x
    ctx->pc = 0x2be2f4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
label_2be2f8:
    // 0x2be2f8: 0x800806bc  lb          $t0, 0x6BC($zero)
    ctx->pc = 0x2be2f8u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x6BCu));
label_2be2fc:
    // 0x2be2fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be2fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be300:
    // 0x2be300: 0x810443fe  lb          $a0, 0x43FE($t0)
    ctx->pc = 0x2be300u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 17406)));
label_2be304:
    // 0x2be304: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be304u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be308:
    // 0x2be308: 0x100740d4  beq         $zero, $a3, . + 4 + (0x40D4 << 2)
label_2be30c:
    if (ctx->pc == 0x2BE30Cu) {
        ctx->pc = 0x2BE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE308u;
        // 0x2be30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE310u;
        goto label_2be310;
    }
    ctx->pc = 0x2BE308u;
    {
        const bool branch_taken_0x2be308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE308u;
        // 0x2be30c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be308) {
            ctx->pc = 0x2CE65Cu;
            return;
        }
    }
    ctx->pc = 0x2BE310u;
label_2be310:
    // 0x2be310: 0x10054001  beq         $zero, $a1, . + 4 + (0x4001 << 2)
label_2be314:
    if (ctx->pc == 0x2BE314u) {
        ctx->pc = 0x2BE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE310u;
        // 0x2be314: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE318u;
        goto label_2be318;
    }
    ctx->pc = 0x2BE310u;
    {
        const bool branch_taken_0x2be310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE310u;
        // 0x2be314: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be310) {
            ctx->pc = 0x2CE318u;
            return;
        }
    }
    ctx->pc = 0x2BE318u;
label_2be318:
    // 0x2be318: 0x90c2800  j           func_430A000
label_2be31c:
    if (ctx->pc == 0x2BE31Cu) {
        ctx->pc = 0x2BE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE318u;
        // 0x2be31c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE320u;
        goto label_2be320;
    }
    ctx->pc = 0x2BE318u;
    ctx->pc = 0x2BE31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE318u;
    // 0x2be31c: 0x1e08418  .word       0x01E08418                   # mult        $s0, $t7, $zero # 00000400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x430A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430A000u, 0x2BE318u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE320u;
label_2be320:
    // 0x2be320: 0x82e2800  j           func_B8A000
label_2be324:
    if (ctx->pc == 0x2BE324u) {
        ctx->pc = 0x2BE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE320u;
        // 0x2be324: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE328u;
        goto label_2be328;
    }
    ctx->pc = 0x2BE320u;
    ctx->pc = 0x2BE324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE320u;
    // 0x2be324: 0x1e08c58  .word       0x01E08C58                   # mult        $s1, $t7, $zero # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xB8A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB8A000u, 0x2BE320u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BE328u;
label_2be328:
    // 0x2be328: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
label_2be32c:
    if (ctx->pc == 0x2BE32Cu) {
        ctx->pc = 0x2BE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE328u;
        // 0x2be32c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE330u;
        goto label_2be330;
    }
    ctx->pc = 0x2BE328u;
    {
        const bool branch_taken_0x2be328 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE328u;
        // 0x2be32c: 0x1e09498  .word       0x01E09498                   # mult        $s2, $t7, $zero # 00000480 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be328) {
            ctx->pc = 0x2C0328u;
            return;
        }
    }
    ctx->pc = 0x2BE330u;
label_2be330:
    // 0x2be330: 0x10032801  beq         $zero, $v1, . + 4 + (0x2801 << 2)
label_2be334:
    if (ctx->pc == 0x2BE334u) {
        ctx->pc = 0x2BE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE330u;
        // 0x2be334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE338u;
        goto label_2be338;
    }
    ctx->pc = 0x2BE330u;
    {
        const bool branch_taken_0x2be330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE330u;
        // 0x2be334: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be330) {
            ctx->pc = 0x2C8338u;
            return;
        }
    }
    ctx->pc = 0x2BE338u;
label_2be338:
    // 0x2be338: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_2be33c:
    if (ctx->pc == 0x2BE33Cu) {
        ctx->pc = 0x2BE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE338u;
        // 0x2be33c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE340u;
        goto label_2be340;
    }
    ctx->pc = 0x2BE338u;
    {
        const bool branch_taken_0x2be338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE338u;
        // 0x2be33c: 0x208428  .word       0x00208428                   # mfsa        $s0 # 00200400 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 16, ctx->sa);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be338) {
            ctx->pc = 0x2BE344u;
            goto label_2be344;
        }
    }
    ctx->pc = 0x2BE340u;
label_2be340:
    // 0x2be340: 0x800270b4  lb          $v0, 0x70B4($zero)
    ctx->pc = 0x2be340u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x70B4u));
label_2be344:
    // 0x2be344: 0x208c68  .word       0x00208C68                   # mfsa        $s1 # 00200440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2be344u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2be348:
    // 0x2be348: 0x800b6334  lb          $t3, 0x6334($zero)
    ctx->pc = 0x2be348u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x6334u));
label_2be34c:
    // 0x2be34c: 0x2094a8  .word       0x002094A8                   # mfsa        $s2 # 00200480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2be34cu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2be350:
    // 0x2be350: 0x50020002  beql        $zero, $v0, . + 4 + (0x2 << 2)
label_2be354:
    if (ctx->pc == 0x2BE354u) {
        ctx->pc = 0x2BE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE350u;
        // 0x2be354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE358u;
        goto label_2be358;
    }
    ctx->pc = 0x2BE350u;
    {
        const bool branch_taken_0x2be350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2be350) {
            ctx->pc = 0x2BE354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE350u;
            // 0x2be354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE35Cu;
            goto label_2be35c;
        }
    }
    ctx->pc = 0x2BE358u;
label_2be358:
    // 0x2be358: 0x800d07f2  lb          $t5, 0x7F2($zero)
    ctx->pc = 0x2be358u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x7F2u));
label_2be35c:
    // 0x2be35c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be35cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be360:
    // 0x2be360: 0x100d0003  beq         $zero, $t5, . + 4 + (0x3 << 2)
label_2be364:
    if (ctx->pc == 0x2BE364u) {
        ctx->pc = 0x2BE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE360u;
        // 0x2be364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE368u;
        goto label_2be368;
    }
    ctx->pc = 0x2BE360u;
    {
        const bool branch_taken_0x2be360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE360u;
        // 0x2be364: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be360) {
            ctx->pc = 0x2BE370u;
            goto label_2be370;
        }
    }
    ctx->pc = 0x2BE368u;
label_2be368:
    // 0x2be368: 0x1f42800  .word       0x01F42800                   # sll         $a1, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be368u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2be36c:
    // 0x2be36c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be36cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be370:
    // 0x2be370: 0x800c1970  lb          $t4, 0x1970($zero)
    ctx->pc = 0x2be370u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x1970u));
label_2be374:
    // 0x2be374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be378:
    // 0x2be378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be37c:
    // 0x2be37c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be37cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be380:
    // 0x2be380: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2be380u;
    // NOP (addi to $zero)
label_2be384:
    // 0x2be384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be388:
    // 0x2be388: 0x809e6bfd  lb          $fp, 0x6BFD($a0)
    ctx->pc = 0x2be388u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 27645)));
label_2be38c:
    // 0x2be38c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be38cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be390:
    // 0x2be390: 0x81e7a37d  lb          $a3, -0x5C83($t7)
    ctx->pc = 0x2be390u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2be394:
    // 0x2be394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be398:
    // 0x2be398: 0x800b07b2  lb          $t3, 0x7B2($zero)
    ctx->pc = 0x2be398u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x7B2u));
label_2be39c:
    // 0x2be39c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be39cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3a0:
    // 0x2be3a0: 0x800a07b2  lb          $t2, 0x7B2($zero)
    ctx->pc = 0x2be3a0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7B2u));
label_2be3a4:
    // 0x2be3a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3a8:
    // 0x2be3a8: 0x800907b2  lb          $t1, 0x7B2($zero)
    ctx->pc = 0x2be3a8u;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x7B2u));
label_2be3ac:
    // 0x2be3ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3b0:
    // 0x2be3b0: 0x81f31b7c  lb          $s3, 0x1B7C($t7)
    ctx->pc = 0x2be3b0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
label_2be3b4:
    // 0x2be3b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3b8:
    // 0x2be3b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3bc:
    // 0x2be3bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3c0:
    // 0x2be3c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3c4:
    // 0x2be3c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3c8:
    // 0x2be3c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3cc:
    // 0x2be3cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3d0:
    // 0x2be3d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3d4:
    // 0x2be3d4: 0x1f309bc  .word       0x01F309BC                   # dsll32      $at, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be3d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 19) << (32 + 6));
label_2be3d8:
    // 0x2be3d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3dc:
    // 0x2be3dc: 0x1f310bd  .word       0x01F310BD                   # INVALID     $t7, $s3, 0x10BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be3dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2BE3DC raw=0x01F310BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be3e0:
    // 0x2be3e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3e4:
    // 0x2be3e4: 0x1f318be  .word       0x01F318BE                   # dsrl32      $v1, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> (32 + 2));
label_2be3e8:
    // 0x2be3e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3ec:
    // 0x2be3ec: 0x1e0270b  .word       0x01E0270B                   # movn        $a0, $t7, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be3ecu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 15));
label_2be3f0:
    // 0x2be3f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3f4:
    // 0x2be3f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be3f8:
    // 0x2be3f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be3f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be3fc:
    // 0x2be3fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be3fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be400:
    // 0x2be400: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be400u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be404:
    // 0x2be404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be408:
    // 0x2be408: 0x81fc03bc  lb          $gp, 0x3BC($t7)
    ctx->pc = 0x2be408u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2be40c:
    // 0x2be40c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be40cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be410:
    // 0x2be410: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be410u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be414:
    // 0x2be414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be418:
    // 0x2be418: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be418u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be41c:
    // 0x2be41c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be41cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be420:
    // 0x2be420: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be424:
    // 0x2be424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be428:
    // 0x2be428: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be428u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be42c:
    // 0x2be42c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be42cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be430:
    // 0x2be430: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be430u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be434:
    // 0x2be434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be438:
    // 0x2be438: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be438u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be43c:
    // 0x2be43c: 0x3e01be  .word       0x003E01BE                   # dsrl32      $zero, $fp, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be43cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 6));
label_2be440:
    // 0x2be440: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be440u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be444:
    // 0x2be444: 0x20f721  .word       0x0020F721                   # addu        $fp, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be444u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 0)));
label_2be448:
    // 0x2be448: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be448u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be44c:
    // 0x2be44c: 0x1c0e7dc  .word       0x01C0E7DC                   # dmult       $t6, $zero # 0000E7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be44cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2BE44C raw=0x01C0E7DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be450:
    // 0x2be450: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be450u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be454:
    // 0x2be454: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be454u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be458:
    // 0x2be458: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be458u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be45c:
    // 0x2be45c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be45cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be460:
    // 0x2be460: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be460u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be464:
    // 0x2be464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be468:
    // 0x2be468: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be468u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be46c:
    // 0x2be46c: 0x20e7df  .word       0x0020E7DF                   # ddivu       $gp, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be46cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2BE46C raw=0x0020E7DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2be470:
    // 0x2be470: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be470u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be474:
    // 0x2be474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be478:
    // 0x2be478: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be478u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be47c:
    // 0x2be47c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be47cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be480:
    // 0x2be480: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be480u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be484:
    // 0x2be484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2be488:
    // 0x2be488: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be488u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be48c:
    // 0x2be48c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2be48cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2be490:
    // 0x2be490: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2be490u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2be494:
    // 0x2be494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2be494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2be498u;
    return;
}

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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part102(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ccd18u: goto label_1ccd18;
        case 0x1ccd1cu: goto label_1ccd1c;
        case 0x1ccd20u: goto label_1ccd20;
        case 0x1ccd24u: goto label_1ccd24;
        case 0x1ccd28u: goto label_1ccd28;
        case 0x1ccd2cu: goto label_1ccd2c;
        case 0x1ccd30u: goto label_1ccd30;
        case 0x1ccd34u: goto label_1ccd34;
        case 0x1ccd38u: goto label_1ccd38;
        case 0x1ccd3cu: goto label_1ccd3c;
        case 0x1ccd40u: goto label_1ccd40;
        case 0x1ccd44u: goto label_1ccd44;
        case 0x1ccd48u: goto label_1ccd48;
        case 0x1ccd4cu: goto label_1ccd4c;
        case 0x1ccd50u: goto label_1ccd50;
        case 0x1ccd54u: goto label_1ccd54;
        case 0x1ccd58u: goto label_1ccd58;
        case 0x1ccd5cu: goto label_1ccd5c;
        case 0x1ccd60u: goto label_1ccd60;
        case 0x1ccd64u: goto label_1ccd64;
        case 0x1ccd68u: goto label_1ccd68;
        case 0x1ccd6cu: goto label_1ccd6c;
        case 0x1ccd70u: goto label_1ccd70;
        case 0x1ccd74u: goto label_1ccd74;
        case 0x1ccd78u: goto label_1ccd78;
        case 0x1ccd7cu: goto label_1ccd7c;
        case 0x1ccd80u: goto label_1ccd80;
        case 0x1ccd84u: goto label_1ccd84;
        case 0x1ccd88u: goto label_1ccd88;
        case 0x1ccd8cu: goto label_1ccd8c;
        case 0x1ccd90u: goto label_1ccd90;
        case 0x1ccd94u: goto label_1ccd94;
        case 0x1ccd98u: goto label_1ccd98;
        case 0x1ccd9cu: goto label_1ccd9c;
        case 0x1ccda0u: goto label_1ccda0;
        case 0x1ccda4u: goto label_1ccda4;
        case 0x1ccda8u: goto label_1ccda8;
        case 0x1ccdacu: goto label_1ccdac;
        case 0x1ccdb0u: goto label_1ccdb0;
        case 0x1ccdb4u: goto label_1ccdb4;
        case 0x1ccdb8u: goto label_1ccdb8;
        case 0x1ccdbcu: goto label_1ccdbc;
        case 0x1ccdc0u: goto label_1ccdc0;
        case 0x1ccdc4u: goto label_1ccdc4;
        case 0x1ccdc8u: goto label_1ccdc8;
        case 0x1ccdccu: goto label_1ccdcc;
        case 0x1ccdd0u: goto label_1ccdd0;
        case 0x1ccdd4u: goto label_1ccdd4;
        case 0x1ccdd8u: goto label_1ccdd8;
        case 0x1ccddcu: goto label_1ccddc;
        case 0x1ccde0u: goto label_1ccde0;
        case 0x1ccde4u: goto label_1ccde4;
        case 0x1ccde8u: goto label_1ccde8;
        case 0x1ccdecu: goto label_1ccdec;
        case 0x1ccdf0u: goto label_1ccdf0;
        case 0x1ccdf4u: goto label_1ccdf4;
        case 0x1ccdf8u: goto label_1ccdf8;
        case 0x1ccdfcu: goto label_1ccdfc;
        case 0x1cce00u: goto label_1cce00;
        case 0x1cce04u: goto label_1cce04;
        case 0x1cce08u: goto label_1cce08;
        case 0x1cce0cu: goto label_1cce0c;
        case 0x1cce10u: goto label_1cce10;
        case 0x1cce14u: goto label_1cce14;
        case 0x1cce18u: goto label_1cce18;
        case 0x1cce1cu: goto label_1cce1c;
        case 0x1cce20u: goto label_1cce20;
        case 0x1cce24u: goto label_1cce24;
        case 0x1cce28u: goto label_1cce28;
        case 0x1cce2cu: goto label_1cce2c;
        case 0x1cce30u: goto label_1cce30;
        case 0x1cce34u: goto label_1cce34;
        case 0x1cce38u: goto label_1cce38;
        case 0x1cce3cu: goto label_1cce3c;
        case 0x1cce40u: goto label_1cce40;
        case 0x1cce44u: goto label_1cce44;
        case 0x1cce48u: goto label_1cce48;
        case 0x1cce4cu: goto label_1cce4c;
        case 0x1cce50u: goto label_1cce50;
        case 0x1cce54u: goto label_1cce54;
        case 0x1cce58u: goto label_1cce58;
        case 0x1cce5cu: goto label_1cce5c;
        case 0x1cce60u: goto label_1cce60;
        case 0x1cce64u: goto label_1cce64;
        case 0x1cce68u: goto label_1cce68;
        case 0x1cce6cu: goto label_1cce6c;
        case 0x1cce70u: goto label_1cce70;
        case 0x1cce74u: goto label_1cce74;
        case 0x1cce78u: goto label_1cce78;
        case 0x1cce7cu: goto label_1cce7c;
        case 0x1cce80u: goto label_1cce80;
        case 0x1cce84u: goto label_1cce84;
        case 0x1cce88u: goto label_1cce88;
        case 0x1cce8cu: goto label_1cce8c;
        case 0x1cce90u: goto label_1cce90;
        case 0x1cce94u: goto label_1cce94;
        case 0x1cce98u: goto label_1cce98;
        case 0x1cce9cu: goto label_1cce9c;
        case 0x1ccea0u: goto label_1ccea0;
        case 0x1ccea4u: goto label_1ccea4;
        case 0x1ccea8u: goto label_1ccea8;
        case 0x1cceacu: goto label_1cceac;
        case 0x1cceb0u: goto label_1cceb0;
        case 0x1cceb4u: goto label_1cceb4;
        case 0x1cceb8u: goto label_1cceb8;
        case 0x1ccebcu: goto label_1ccebc;
        case 0x1ccec0u: goto label_1ccec0;
        case 0x1ccec4u: goto label_1ccec4;
        case 0x1ccec8u: goto label_1ccec8;
        case 0x1cceccu: goto label_1ccecc;
        case 0x1cced0u: goto label_1cced0;
        case 0x1cced4u: goto label_1cced4;
        case 0x1cced8u: goto label_1cced8;
        case 0x1ccedcu: goto label_1ccedc;
        case 0x1ccee0u: goto label_1ccee0;
        case 0x1ccee4u: goto label_1ccee4;
        case 0x1ccee8u: goto label_1ccee8;
        case 0x1cceecu: goto label_1cceec;
        case 0x1ccef0u: goto label_1ccef0;
        case 0x1ccef4u: goto label_1ccef4;
        case 0x1ccef8u: goto label_1ccef8;
        case 0x1ccefcu: goto label_1ccefc;
        case 0x1ccf00u: goto label_1ccf00;
        case 0x1ccf04u: goto label_1ccf04;
        case 0x1ccf08u: goto label_1ccf08;
        case 0x1ccf0cu: goto label_1ccf0c;
        case 0x1ccf10u: goto label_1ccf10;
        case 0x1ccf14u: goto label_1ccf14;
        case 0x1ccf18u: goto label_1ccf18;
        case 0x1ccf1cu: goto label_1ccf1c;
        case 0x1ccf20u: goto label_1ccf20;
        case 0x1ccf24u: goto label_1ccf24;
        case 0x1ccf28u: goto label_1ccf28;
        case 0x1ccf2cu: goto label_1ccf2c;
        case 0x1ccf30u: goto label_1ccf30;
        case 0x1ccf34u: goto label_1ccf34;
        case 0x1ccf38u: goto label_1ccf38;
        case 0x1ccf3cu: goto label_1ccf3c;
        case 0x1ccf40u: goto label_1ccf40;
        case 0x1ccf44u: goto label_1ccf44;
        case 0x1ccf48u: goto label_1ccf48;
        case 0x1ccf4cu: goto label_1ccf4c;
        case 0x1ccf50u: goto label_1ccf50;
        case 0x1ccf54u: goto label_1ccf54;
        case 0x1ccf58u: goto label_1ccf58;
        case 0x1ccf5cu: goto label_1ccf5c;
        case 0x1ccf60u: goto label_1ccf60;
        case 0x1ccf64u: goto label_1ccf64;
        case 0x1ccf68u: goto label_1ccf68;
        case 0x1ccf6cu: goto label_1ccf6c;
        case 0x1ccf70u: goto label_1ccf70;
        case 0x1ccf74u: goto label_1ccf74;
        case 0x1ccf78u: goto label_1ccf78;
        case 0x1ccf7cu: goto label_1ccf7c;
        case 0x1ccf80u: goto label_1ccf80;
        case 0x1ccf84u: goto label_1ccf84;
        case 0x1ccf88u: goto label_1ccf88;
        case 0x1ccf8cu: goto label_1ccf8c;
        case 0x1ccf90u: goto label_1ccf90;
        case 0x1ccf94u: goto label_1ccf94;
        case 0x1ccf98u: goto label_1ccf98;
        case 0x1ccf9cu: goto label_1ccf9c;
        case 0x1ccfa0u: goto label_1ccfa0;
        case 0x1ccfa4u: goto label_1ccfa4;
        case 0x1ccfa8u: goto label_1ccfa8;
        case 0x1ccfacu: goto label_1ccfac;
        case 0x1ccfb0u: goto label_1ccfb0;
        case 0x1ccfb4u: goto label_1ccfb4;
        case 0x1ccfb8u: goto label_1ccfb8;
        case 0x1ccfbcu: goto label_1ccfbc;
        case 0x1ccfc0u: goto label_1ccfc0;
        case 0x1ccfc4u: goto label_1ccfc4;
        case 0x1ccfc8u: goto label_1ccfc8;
        case 0x1ccfccu: goto label_1ccfcc;
        case 0x1ccfd0u: goto label_1ccfd0;
        case 0x1ccfd4u: goto label_1ccfd4;
        case 0x1ccfd8u: goto label_1ccfd8;
        case 0x1ccfdcu: goto label_1ccfdc;
        case 0x1ccfe0u: goto label_1ccfe0;
        case 0x1ccfe4u: goto label_1ccfe4;
        case 0x1ccfe8u: goto label_1ccfe8;
        case 0x1ccfecu: goto label_1ccfec;
        case 0x1ccff0u: goto label_1ccff0;
        case 0x1ccff4u: goto label_1ccff4;
        case 0x1ccff8u: goto label_1ccff8;
        case 0x1ccffcu: goto label_1ccffc;
        case 0x1cd000u: goto label_1cd000;
        case 0x1cd004u: goto label_1cd004;
        case 0x1cd008u: goto label_1cd008;
        case 0x1cd00cu: goto label_1cd00c;
        case 0x1cd010u: goto label_1cd010;
        case 0x1cd014u: goto label_1cd014;
        case 0x1cd018u: goto label_1cd018;
        case 0x1cd01cu: goto label_1cd01c;
        case 0x1cd020u: goto label_1cd020;
        case 0x1cd024u: goto label_1cd024;
        case 0x1cd028u: goto label_1cd028;
        case 0x1cd02cu: goto label_1cd02c;
        case 0x1cd030u: goto label_1cd030;
        case 0x1cd034u: goto label_1cd034;
        case 0x1cd038u: goto label_1cd038;
        case 0x1cd03cu: goto label_1cd03c;
        case 0x1cd040u: goto label_1cd040;
        case 0x1cd044u: goto label_1cd044;
        case 0x1cd048u: goto label_1cd048;
        case 0x1cd04cu: goto label_1cd04c;
        case 0x1cd050u: goto label_1cd050;
        case 0x1cd054u: goto label_1cd054;
        case 0x1cd058u: goto label_1cd058;
        case 0x1cd05cu: goto label_1cd05c;
        case 0x1cd060u: goto label_1cd060;
        case 0x1cd064u: goto label_1cd064;
        case 0x1cd068u: goto label_1cd068;
        case 0x1cd06cu: goto label_1cd06c;
        case 0x1cd070u: goto label_1cd070;
        case 0x1cd074u: goto label_1cd074;
        case 0x1cd078u: goto label_1cd078;
        case 0x1cd07cu: goto label_1cd07c;
        case 0x1cd080u: goto label_1cd080;
        case 0x1cd084u: goto label_1cd084;
        case 0x1cd088u: goto label_1cd088;
        case 0x1cd08cu: goto label_1cd08c;
        case 0x1cd090u: goto label_1cd090;
        case 0x1cd094u: goto label_1cd094;
        case 0x1cd098u: goto label_1cd098;
        case 0x1cd09cu: goto label_1cd09c;
        case 0x1cd0a0u: goto label_1cd0a0;
        case 0x1cd0a4u: goto label_1cd0a4;
        case 0x1cd0a8u: goto label_1cd0a8;
        case 0x1cd0acu: goto label_1cd0ac;
        case 0x1cd0b0u: goto label_1cd0b0;
        case 0x1cd0b4u: goto label_1cd0b4;
        case 0x1cd0b8u: goto label_1cd0b8;
        case 0x1cd0bcu: goto label_1cd0bc;
        case 0x1cd0c0u: goto label_1cd0c0;
        case 0x1cd0c4u: goto label_1cd0c4;
        case 0x1cd0c8u: goto label_1cd0c8;
        case 0x1cd0ccu: goto label_1cd0cc;
        case 0x1cd0d0u: goto label_1cd0d0;
        case 0x1cd0d4u: goto label_1cd0d4;
        case 0x1cd0d8u: goto label_1cd0d8;
        case 0x1cd0dcu: goto label_1cd0dc;
        case 0x1cd0e0u: goto label_1cd0e0;
        case 0x1cd0e4u: goto label_1cd0e4;
        case 0x1cd0e8u: goto label_1cd0e8;
        case 0x1cd0ecu: goto label_1cd0ec;
        case 0x1cd0f0u: goto label_1cd0f0;
        case 0x1cd0f4u: goto label_1cd0f4;
        case 0x1cd0f8u: goto label_1cd0f8;
        case 0x1cd0fcu: goto label_1cd0fc;
        case 0x1cd100u: goto label_1cd100;
        case 0x1cd104u: goto label_1cd104;
        case 0x1cd108u: goto label_1cd108;
        case 0x1cd10cu: goto label_1cd10c;
        case 0x1cd110u: goto label_1cd110;
        case 0x1cd114u: goto label_1cd114;
        case 0x1cd118u: goto label_1cd118;
        case 0x1cd11cu: goto label_1cd11c;
        case 0x1cd120u: goto label_1cd120;
        case 0x1cd124u: goto label_1cd124;
        case 0x1cd128u: goto label_1cd128;
        case 0x1cd12cu: goto label_1cd12c;
        case 0x1cd130u: goto label_1cd130;
        case 0x1cd134u: goto label_1cd134;
        case 0x1cd138u: goto label_1cd138;
        case 0x1cd13cu: goto label_1cd13c;
        case 0x1cd140u: goto label_1cd140;
        case 0x1cd144u: goto label_1cd144;
        case 0x1cd148u: goto label_1cd148;
        case 0x1cd14cu: goto label_1cd14c;
        case 0x1cd150u: goto label_1cd150;
        case 0x1cd154u: goto label_1cd154;
        case 0x1cd158u: goto label_1cd158;
        case 0x1cd15cu: goto label_1cd15c;
        case 0x1cd160u: goto label_1cd160;
        case 0x1cd164u: goto label_1cd164;
        case 0x1cd168u: goto label_1cd168;
        case 0x1cd16cu: goto label_1cd16c;
        case 0x1cd170u: goto label_1cd170;
        case 0x1cd174u: goto label_1cd174;
        case 0x1cd178u: goto label_1cd178;
        case 0x1cd17cu: goto label_1cd17c;
        case 0x1cd180u: goto label_1cd180;
        case 0x1cd184u: goto label_1cd184;
        case 0x1cd188u: goto label_1cd188;
        case 0x1cd18cu: goto label_1cd18c;
        case 0x1cd190u: goto label_1cd190;
        case 0x1cd194u: goto label_1cd194;
        case 0x1cd198u: goto label_1cd198;
        case 0x1cd19cu: goto label_1cd19c;
        case 0x1cd1a0u: goto label_1cd1a0;
        case 0x1cd1a4u: goto label_1cd1a4;
        case 0x1cd1a8u: goto label_1cd1a8;
        case 0x1cd1acu: goto label_1cd1ac;
        case 0x1cd1b0u: goto label_1cd1b0;
        case 0x1cd1b4u: goto label_1cd1b4;
        case 0x1cd1b8u: goto label_1cd1b8;
        case 0x1cd1bcu: goto label_1cd1bc;
        case 0x1cd1c0u: goto label_1cd1c0;
        case 0x1cd1c4u: goto label_1cd1c4;
        case 0x1cd1c8u: goto label_1cd1c8;
        case 0x1cd1ccu: goto label_1cd1cc;
        case 0x1cd1d0u: goto label_1cd1d0;
        case 0x1cd1d4u: goto label_1cd1d4;
        case 0x1cd1d8u: goto label_1cd1d8;
        case 0x1cd1dcu: goto label_1cd1dc;
        case 0x1cd1e0u: goto label_1cd1e0;
        case 0x1cd1e4u: goto label_1cd1e4;
        case 0x1cd1e8u: goto label_1cd1e8;
        case 0x1cd1ecu: goto label_1cd1ec;
        case 0x1cd1f0u: goto label_1cd1f0;
        case 0x1cd1f4u: goto label_1cd1f4;
        case 0x1cd1f8u: goto label_1cd1f8;
        case 0x1cd1fcu: goto label_1cd1fc;
        case 0x1cd200u: goto label_1cd200;
        case 0x1cd204u: goto label_1cd204;
        case 0x1cd208u: goto label_1cd208;
        case 0x1cd20cu: goto label_1cd20c;
        case 0x1cd210u: goto label_1cd210;
        case 0x1cd214u: goto label_1cd214;
        case 0x1cd218u: goto label_1cd218;
        case 0x1cd21cu: goto label_1cd21c;
        case 0x1cd220u: goto label_1cd220;
        case 0x1cd224u: goto label_1cd224;
        case 0x1cd228u: goto label_1cd228;
        case 0x1cd22cu: goto label_1cd22c;
        case 0x1cd230u: goto label_1cd230;
        case 0x1cd234u: goto label_1cd234;
        case 0x1cd238u: goto label_1cd238;
        case 0x1cd23cu: goto label_1cd23c;
        case 0x1cd240u: goto label_1cd240;
        case 0x1cd244u: goto label_1cd244;
        case 0x1cd248u: goto label_1cd248;
        case 0x1cd24cu: goto label_1cd24c;
        case 0x1cd250u: goto label_1cd250;
        case 0x1cd254u: goto label_1cd254;
        case 0x1cd258u: goto label_1cd258;
        case 0x1cd25cu: goto label_1cd25c;
        case 0x1cd260u: goto label_1cd260;
        case 0x1cd264u: goto label_1cd264;
        case 0x1cd268u: goto label_1cd268;
        case 0x1cd26cu: goto label_1cd26c;
        case 0x1cd270u: goto label_1cd270;
        case 0x1cd274u: goto label_1cd274;
        case 0x1cd278u: goto label_1cd278;
        case 0x1cd27cu: goto label_1cd27c;
        case 0x1cd280u: goto label_1cd280;
        case 0x1cd284u: goto label_1cd284;
        case 0x1cd288u: goto label_1cd288;
        case 0x1cd28cu: goto label_1cd28c;
        case 0x1cd290u: goto label_1cd290;
        case 0x1cd294u: goto label_1cd294;
        case 0x1cd298u: goto label_1cd298;
        case 0x1cd29cu: goto label_1cd29c;
        case 0x1cd2a0u: goto label_1cd2a0;
        case 0x1cd2a4u: goto label_1cd2a4;
        case 0x1cd2a8u: goto label_1cd2a8;
        case 0x1cd2acu: goto label_1cd2ac;
        case 0x1cd2b0u: goto label_1cd2b0;
        case 0x1cd2b4u: goto label_1cd2b4;
        case 0x1cd2b8u: goto label_1cd2b8;
        case 0x1cd2bcu: goto label_1cd2bc;
        case 0x1cd2c0u: goto label_1cd2c0;
        case 0x1cd2c4u: goto label_1cd2c4;
        case 0x1cd2c8u: goto label_1cd2c8;
        case 0x1cd2ccu: goto label_1cd2cc;
        case 0x1cd2d0u: goto label_1cd2d0;
        case 0x1cd2d4u: goto label_1cd2d4;
        case 0x1cd2d8u: goto label_1cd2d8;
        case 0x1cd2dcu: goto label_1cd2dc;
        case 0x1cd2e0u: goto label_1cd2e0;
        case 0x1cd2e4u: goto label_1cd2e4;
        case 0x1cd2e8u: goto label_1cd2e8;
        case 0x1cd2ecu: goto label_1cd2ec;
        case 0x1cd2f0u: goto label_1cd2f0;
        case 0x1cd2f4u: goto label_1cd2f4;
        case 0x1cd2f8u: goto label_1cd2f8;
        case 0x1cd2fcu: goto label_1cd2fc;
        case 0x1cd300u: goto label_1cd300;
        case 0x1cd304u: goto label_1cd304;
        case 0x1cd308u: goto label_1cd308;
        case 0x1cd30cu: goto label_1cd30c;
        case 0x1cd310u: goto label_1cd310;
        case 0x1cd314u: goto label_1cd314;
        case 0x1cd318u: goto label_1cd318;
        case 0x1cd31cu: goto label_1cd31c;
        case 0x1cd320u: goto label_1cd320;
        case 0x1cd324u: goto label_1cd324;
        case 0x1cd328u: goto label_1cd328;
        case 0x1cd32cu: goto label_1cd32c;
        case 0x1cd330u: goto label_1cd330;
        case 0x1cd334u: goto label_1cd334;
        case 0x1cd338u: goto label_1cd338;
        case 0x1cd33cu: goto label_1cd33c;
        case 0x1cd340u: goto label_1cd340;
        case 0x1cd344u: goto label_1cd344;
        case 0x1cd348u: goto label_1cd348;
        case 0x1cd34cu: goto label_1cd34c;
        case 0x1cd350u: goto label_1cd350;
        case 0x1cd354u: goto label_1cd354;
        case 0x1cd358u: goto label_1cd358;
        case 0x1cd35cu: goto label_1cd35c;
        case 0x1cd360u: goto label_1cd360;
        case 0x1cd364u: goto label_1cd364;
        case 0x1cd368u: goto label_1cd368;
        case 0x1cd36cu: goto label_1cd36c;
        case 0x1cd370u: goto label_1cd370;
        case 0x1cd374u: goto label_1cd374;
        case 0x1cd378u: goto label_1cd378;
        case 0x1cd37cu: goto label_1cd37c;
        case 0x1cd380u: goto label_1cd380;
        case 0x1cd384u: goto label_1cd384;
        case 0x1cd388u: goto label_1cd388;
        case 0x1cd38cu: goto label_1cd38c;
        case 0x1cd390u: goto label_1cd390;
        case 0x1cd394u: goto label_1cd394;
        case 0x1cd398u: goto label_1cd398;
        case 0x1cd39cu: goto label_1cd39c;
        case 0x1cd3a0u: goto label_1cd3a0;
        case 0x1cd3a4u: goto label_1cd3a4;
        case 0x1cd3a8u: goto label_1cd3a8;
        case 0x1cd3acu: goto label_1cd3ac;
        case 0x1cd3b0u: goto label_1cd3b0;
        case 0x1cd3b4u: goto label_1cd3b4;
        case 0x1cd3b8u: goto label_1cd3b8;
        case 0x1cd3bcu: goto label_1cd3bc;
        case 0x1cd3c0u: goto label_1cd3c0;
        case 0x1cd3c4u: goto label_1cd3c4;
        case 0x1cd3c8u: goto label_1cd3c8;
        case 0x1cd3ccu: goto label_1cd3cc;
        case 0x1cd3d0u: goto label_1cd3d0;
        case 0x1cd3d4u: goto label_1cd3d4;
        case 0x1cd3d8u: goto label_1cd3d8;
        case 0x1cd3dcu: goto label_1cd3dc;
        case 0x1cd3e0u: goto label_1cd3e0;
        case 0x1cd3e4u: goto label_1cd3e4;
        case 0x1cd3e8u: goto label_1cd3e8;
        case 0x1cd3ecu: goto label_1cd3ec;
        case 0x1cd3f0u: goto label_1cd3f0;
        case 0x1cd3f4u: goto label_1cd3f4;
        case 0x1cd3f8u: goto label_1cd3f8;
        case 0x1cd3fcu: goto label_1cd3fc;
        case 0x1cd400u: goto label_1cd400;
        case 0x1cd404u: goto label_1cd404;
        case 0x1cd408u: goto label_1cd408;
        case 0x1cd40cu: goto label_1cd40c;
        case 0x1cd410u: goto label_1cd410;
        case 0x1cd414u: goto label_1cd414;
        case 0x1cd418u: goto label_1cd418;
        case 0x1cd41cu: goto label_1cd41c;
        case 0x1cd420u: goto label_1cd420;
        case 0x1cd424u: goto label_1cd424;
        case 0x1cd428u: goto label_1cd428;
        case 0x1cd42cu: goto label_1cd42c;
        case 0x1cd430u: goto label_1cd430;
        case 0x1cd434u: goto label_1cd434;
        case 0x1cd438u: goto label_1cd438;
        case 0x1cd43cu: goto label_1cd43c;
        case 0x1cd440u: goto label_1cd440;
        case 0x1cd444u: goto label_1cd444;
        case 0x1cd448u: goto label_1cd448;
        case 0x1cd44cu: goto label_1cd44c;
        case 0x1cd450u: goto label_1cd450;
        case 0x1cd454u: goto label_1cd454;
        case 0x1cd458u: goto label_1cd458;
        case 0x1cd45cu: goto label_1cd45c;
        case 0x1cd460u: goto label_1cd460;
        case 0x1cd464u: goto label_1cd464;
        case 0x1cd468u: goto label_1cd468;
        case 0x1cd46cu: goto label_1cd46c;
        case 0x1cd470u: goto label_1cd470;
        case 0x1cd474u: goto label_1cd474;
        case 0x1cd478u: goto label_1cd478;
        case 0x1cd47cu: goto label_1cd47c;
        case 0x1cd480u: goto label_1cd480;
        case 0x1cd484u: goto label_1cd484;
        case 0x1cd488u: goto label_1cd488;
        case 0x1cd48cu: goto label_1cd48c;
        case 0x1cd490u: goto label_1cd490;
        case 0x1cd494u: goto label_1cd494;
        case 0x1cd498u: goto label_1cd498;
        case 0x1cd49cu: goto label_1cd49c;
        case 0x1cd4a0u: goto label_1cd4a0;
        case 0x1cd4a4u: goto label_1cd4a4;
        case 0x1cd4a8u: goto label_1cd4a8;
        case 0x1cd4acu: goto label_1cd4ac;
        case 0x1cd4b0u: goto label_1cd4b0;
        case 0x1cd4b4u: goto label_1cd4b4;
        case 0x1cd4b8u: goto label_1cd4b8;
        case 0x1cd4bcu: goto label_1cd4bc;
        case 0x1cd4c0u: goto label_1cd4c0;
        case 0x1cd4c4u: goto label_1cd4c4;
        case 0x1cd4c8u: goto label_1cd4c8;
        case 0x1cd4ccu: goto label_1cd4cc;
        case 0x1cd4d0u: goto label_1cd4d0;
        case 0x1cd4d4u: goto label_1cd4d4;
        case 0x1cd4d8u: goto label_1cd4d8;
        case 0x1cd4dcu: goto label_1cd4dc;
        case 0x1cd4e0u: goto label_1cd4e0;
        case 0x1cd4e4u: goto label_1cd4e4;
        default: return;
    }

label_1ccd18:
    // 0x1ccd18: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1ccd18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ccd1c:
    // 0x1ccd1c: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x1ccd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
label_1ccd20:
    // 0x1ccd20: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1ccd20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1ccd24:
    // 0x1ccd24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ccd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ccd28:
    // 0x1ccd28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ccd28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ccd2c:
    // 0x1ccd2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ccd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ccd30:
    // 0x1ccd30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ccd30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccd34:
    // 0x1ccd34: 0x3e00008  jr          $ra
label_1ccd38:
    if (ctx->pc == 0x1CCD38u) {
        ctx->pc = 0x1CCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD34u;
        // 0x1ccd38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD3Cu;
        goto label_1ccd3c;
    }
    ctx->pc = 0x1CCD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD34u;
        // 0x1ccd38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCD3Cu;
label_1ccd3c:
    // 0x1ccd3c: 0x0  nop
    ctx->pc = 0x1ccd3cu;
    // NOP
label_1ccd40:
    // 0x1ccd40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ccd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ccd44:
    // 0x1ccd44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ccd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ccd48:
    // 0x1ccd48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ccd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ccd4c:
    // 0x1ccd4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ccd4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ccd50:
    // 0x1ccd50: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x1ccd50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
label_1ccd54:
    // 0x1ccd54: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1ccd54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ccd58:
    // 0x1ccd58: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
label_1ccd5c:
    if (ctx->pc == 0x1CCD5Cu) {
        ctx->pc = 0x1CCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD58u;
        // 0x1ccd5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD60u;
        goto label_1ccd60;
    }
    ctx->pc = 0x1CCD58u;
    {
        const bool branch_taken_0x1ccd58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD58u;
        // 0x1ccd5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd58) {
            ctx->pc = 0x1CCDB8u;
            goto label_1ccdb8;
        }
    }
    ctx->pc = 0x1CCD60u;
label_1ccd60:
    // 0x1ccd60: 0xc08f0cc  jal         func_23C330
label_1ccd64:
    if (ctx->pc == 0x1CCD64u) {
        ctx->pc = 0x1CCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD60u;
        // 0x1ccd64: 0xc6140050  lwc1        $f20, 0x50($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCD68u;
        goto label_1ccd68;
    }
    ctx->pc = 0x1CCD60u;
    SET_GPR_U32(ctx, 31, 0x1CCD68u);
    ctx->pc = 0x1CCD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD60u;
    // 0x1ccd64: 0xc6140050  lwc1        $f20, 0x50($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CCD68u;
label_1ccd68:
    // 0x1ccd68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ccd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ccd6c:
    // 0x1ccd6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ccd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1ccd70:
    // 0x1ccd70: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1ccd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1ccd74:
    // 0x1ccd74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ccd74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ccd78:
    // 0x1ccd78: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ccd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1ccd7c:
    // 0x1ccd7c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1ccd7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1ccd80:
    // 0x1ccd80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ccd84:
    // 0x1ccd84: 0x0  nop
    ctx->pc = 0x1ccd84u;
    // NOP
label_1ccd88:
    // 0x1ccd88: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ccd88u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1ccd8c:
    // 0x1ccd8c: 0x0  nop
    ctx->pc = 0x1ccd8cu;
    // NOP
label_1ccd90:
    // 0x1ccd90: 0x0  nop
    ctx->pc = 0x1ccd90u;
    // NOP
label_1ccd94:
    // 0x1ccd94: 0xc066e14  jal         func_19B850
label_1ccd98:
    if (ctx->pc == 0x1CCD98u) {
        ctx->pc = 0x1CCD9Cu;
        goto label_1ccd9c;
    }
    ctx->pc = 0x1CCD94u;
    SET_GPR_U32(ctx, 31, 0x1CCD9Cu);
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1CCD9Cu;
label_1ccd9c:
    // 0x1ccd9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ccd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ccda0:
    // 0x1ccda0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1ccda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1ccda4:
    // 0x1ccda4: 0xc066e02  jal         func_19B808
label_1ccda8:
    if (ctx->pc == 0x1CCDA8u) {
        ctx->pc = 0x1CCDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDA4u;
        // 0x1ccda8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCDACu;
        goto label_1ccdac;
    }
    ctx->pc = 0x1CCDA4u;
    SET_GPR_U32(ctx, 31, 0x1CCDACu);
    ctx->pc = 0x1CCDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDA4u;
    // 0x1ccda8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CCDACu;
label_1ccdac:
    // 0x1ccdac: 0xc0733f4  jal         func_1CCFD0
label_1ccdb0:
    if (ctx->pc == 0x1CCDB0u) {
        ctx->pc = 0x1CCDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDACu;
        // 0x1ccdb0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCDB4u;
        goto label_1ccdb4;
    }
    ctx->pc = 0x1CCDACu;
    SET_GPR_U32(ctx, 31, 0x1CCDB4u);
    ctx->pc = 0x1CCDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCDACu;
    // 0x1ccdb0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFD0u;
    goto label_1ccfd0;
    ctx->pc = 0x1CCDB4u;
label_1ccdb4:
    // 0x1ccdb4: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1ccdb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_1ccdb8:
    // 0x1ccdb8: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1ccdb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1ccdbc:
    // 0x1ccdbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ccdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ccdc0:
    // 0x1ccdc0: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1ccdc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_1ccdc4:
    // 0x1ccdc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ccdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ccdc8:
    // 0x1ccdc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ccdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ccdcc:
    // 0x1ccdcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ccdccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ccdd0:
    // 0x1ccdd0: 0x3e00008  jr          $ra
label_1ccdd4:
    if (ctx->pc == 0x1CCDD4u) {
        ctx->pc = 0x1CCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDD0u;
        // 0x1ccdd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCDD8u;
        goto label_1ccdd8;
    }
    ctx->pc = 0x1CCDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDD0u;
        // 0x1ccdd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCDD8u;
label_1ccdd8:
    // 0x1ccdd8: 0x0  nop
    ctx->pc = 0x1ccdd8u;
    // NOP
label_1ccddc:
    // 0x1ccddc: 0x0  nop
    ctx->pc = 0x1ccddcu;
    // NOP
label_1ccde0:
    // 0x1ccde0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ccde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ccde4:
    // 0x1ccde4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ccde8:
    // 0x1ccde8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ccde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ccdec:
    // 0x1ccdec: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x1ccdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_1ccdf0:
    // 0x1ccdf0: 0x94630014  lhu         $v1, 0x14($v1)
    ctx->pc = 0x1ccdf0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_1ccdf4:
    // 0x1ccdf4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ccdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1ccdf8:
    // 0x1ccdf8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1ccdfc:
    if (ctx->pc == 0x1CCDFCu) {
        ctx->pc = 0x1CCDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDF8u;
        // 0x1ccdfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCE00u;
        goto label_1cce00;
    }
    ctx->pc = 0x1CCDF8u;
    {
        const bool branch_taken_0x1ccdf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDF8u;
        // 0x1ccdfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdf8) {
            ctx->pc = 0x1CCE10u;
            goto label_1cce10;
        }
    }
    ctx->pc = 0x1CCE00u;
label_1cce00:
    // 0x1cce00: 0xc0591f4  jal         func_1647D0
label_1cce04:
    if (ctx->pc == 0x1CCE04u) {
        ctx->pc = 0x1CCE08u;
        goto label_1cce08;
    }
    ctx->pc = 0x1CCE00u;
    SET_GPR_U32(ctx, 31, 0x1CCE08u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CCE00u, 0x1CCE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE08u;
label_1cce08:
    // 0x1cce08: 0x10000039  b           . + 4 + (0x39 << 2)
label_1cce0c:
    if (ctx->pc == 0x1CCE0Cu) {
        ctx->pc = 0x1CCE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE08u;
        // 0x1cce0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCE10u;
        goto label_1cce10;
    }
    ctx->pc = 0x1CCE08u;
    {
        const bool branch_taken_0x1cce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE08u;
        // 0x1cce0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce08) {
            ctx->pc = 0x1CCEF0u;
            goto label_1ccef0;
        }
    }
    ctx->pc = 0x1CCE10u;
label_1cce10:
    // 0x1cce10: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1cce10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1cce14:
    // 0x1cce14: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1cce14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_1cce18:
    // 0x1cce18: 0x14200031  bnez        $at, . + 4 + (0x31 << 2)
label_1cce1c:
    if (ctx->pc == 0x1CCE1Cu) {
        ctx->pc = 0x1CCE20u;
        goto label_1cce20;
    }
    ctx->pc = 0x1CCE18u;
    {
        const bool branch_taken_0x1cce18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cce18) {
            ctx->pc = 0x1CCEE0u;
            goto label_1ccee0;
        }
    }
    ctx->pc = 0x1CCE20u;
label_1cce20:
    // 0x1cce20: 0xc08f0cc  jal         func_23C330
label_1cce24:
    if (ctx->pc == 0x1CCE24u) {
        ctx->pc = 0x1CCE28u;
        goto label_1cce28;
    }
    ctx->pc = 0x1CCE20u;
    SET_GPR_U32(ctx, 31, 0x1CCE28u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CCE28u;
label_1cce28:
    // 0x1cce28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cce28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cce2c:
    // 0x1cce2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cce2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cce30:
    // 0x1cce30: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1cce30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1cce34:
    // 0x1cce34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1cce34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cce38:
    // 0x1cce38: 0x3c02442e  lui         $v0, 0x442E
    ctx->pc = 0x1cce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17454 << 16));
label_1cce3c:
    // 0x1cce3c: 0x344375c3  ori         $v1, $v0, 0x75C3
    ctx->pc = 0x1cce3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30147);
label_1cce40:
    // 0x1cce40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cce40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cce44:
    // 0x1cce44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cce44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cce48:
    // 0x1cce48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cce48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cce4c:
    // 0x1cce4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cce4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cce50:
    // 0x1cce50: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x1cce50u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[2];
label_1cce54:
    // 0x1cce54: 0x0  nop
    ctx->pc = 0x1cce54u;
    // NOP
label_1cce58:
    // 0x1cce58: 0x0  nop
    ctx->pc = 0x1cce58u;
    // NOP
label_1cce5c:
    // 0x1cce5c: 0xc066e14  jal         func_19B850
label_1cce60:
    if (ctx->pc == 0x1CCE60u) {
        ctx->pc = 0x1CCE64u;
        goto label_1cce64;
    }
    ctx->pc = 0x1CCE5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE64u);
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1CCE64u;
label_1cce64:
    // 0x1cce64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1cce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1cce68:
    // 0x1cce68: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1cce68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1cce6c:
    // 0x1cce6c: 0xc066e02  jal         func_19B808
label_1cce70:
    if (ctx->pc == 0x1CCE70u) {
        ctx->pc = 0x1CCE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE6Cu;
        // 0x1cce70: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCE74u;
        goto label_1cce74;
    }
    ctx->pc = 0x1CCE6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE74u);
    ctx->pc = 0x1CCE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE6Cu;
    // 0x1cce70: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CCE74u;
label_1cce74:
    // 0x1cce74: 0xc0733f4  jal         func_1CCFD0
label_1cce78:
    if (ctx->pc == 0x1CCE78u) {
        ctx->pc = 0x1CCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE74u;
        // 0x1cce78: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCE7Cu;
        goto label_1cce7c;
    }
    ctx->pc = 0x1CCE74u;
    SET_GPR_U32(ctx, 31, 0x1CCE7Cu);
    ctx->pc = 0x1CCE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE74u;
    // 0x1cce78: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFD0u;
    goto label_1ccfd0;
    ctx->pc = 0x1CCE7Cu;
label_1cce7c:
    // 0x1cce7c: 0xc08f0cc  jal         func_23C330
label_1cce80:
    if (ctx->pc == 0x1CCE80u) {
        ctx->pc = 0x1CCE84u;
        goto label_1cce84;
    }
    ctx->pc = 0x1CCE7Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE84u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CCE84u;
label_1cce84:
    // 0x1cce84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cce84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cce88:
    // 0x1cce88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cce8c:
    // 0x1cce8c: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x1cce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1cce90:
    // 0x1cce90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cce90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cce94:
    // 0x1cce94: 0x3c024434  lui         $v0, 0x4434
    ctx->pc = 0x1cce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17460 << 16));
label_1cce98:
    // 0x1cce98: 0x34436852  ori         $v1, $v0, 0x6852
    ctx->pc = 0x1cce98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26706);
label_1cce9c:
    // 0x1cce9c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1ccea0:
    // 0x1ccea0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ccea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ccea4:
    // 0x1ccea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ccea8:
    // 0x1ccea8: 0x0  nop
    ctx->pc = 0x1ccea8u;
    // NOP
label_1cceac:
    // 0x1cceac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cceacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cceb0:
    // 0x1cceb0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1cceb0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1cceb4:
    // 0x1cceb4: 0x0  nop
    ctx->pc = 0x1cceb4u;
    // NOP
label_1cceb8:
    // 0x1cceb8: 0x0  nop
    ctx->pc = 0x1cceb8u;
    // NOP
label_1ccebc:
    // 0x1ccebc: 0xc066e14  jal         func_19B850
label_1ccec0:
    if (ctx->pc == 0x1CCEC0u) {
        ctx->pc = 0x1CCEC4u;
        goto label_1ccec4;
    }
    ctx->pc = 0x1CCEBCu;
    SET_GPR_U32(ctx, 31, 0x1CCEC4u);
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1CCEC4u;
label_1ccec4:
    // 0x1ccec4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ccec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ccec8:
    // 0x1ccec8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1ccec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1ccecc:
    // 0x1ccecc: 0xc066e02  jal         func_19B808
label_1cced0:
    if (ctx->pc == 0x1CCED0u) {
        ctx->pc = 0x1CCED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCECCu;
        // 0x1cced0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCED4u;
        goto label_1cced4;
    }
    ctx->pc = 0x1CCECCu;
    SET_GPR_U32(ctx, 31, 0x1CCED4u);
    ctx->pc = 0x1CCED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCECCu;
    // 0x1cced0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CCED4u;
label_1cced4:
    // 0x1cced4: 0xc0733f4  jal         func_1CCFD0
label_1cced8:
    if (ctx->pc == 0x1CCED8u) {
        ctx->pc = 0x1CCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCED4u;
        // 0x1cced8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCEDCu;
        goto label_1ccedc;
    }
    ctx->pc = 0x1CCED4u;
    SET_GPR_U32(ctx, 31, 0x1CCEDCu);
    ctx->pc = 0x1CCED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCED4u;
    // 0x1cced8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFD0u;
    goto label_1ccfd0;
    ctx->pc = 0x1CCEDCu;
label_1ccedc:
    // 0x1ccedc: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1ccedcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_1ccee0:
    // 0x1ccee0: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1ccee0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1ccee4:
    // 0x1ccee4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ccee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ccee8:
    // 0x1ccee8: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1ccee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_1cceec:
    // 0x1cceec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cceecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ccef0:
    // 0x1ccef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ccef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccef4:
    // 0x1ccef4: 0x3e00008  jr          $ra
label_1ccef8:
    if (ctx->pc == 0x1CCEF8u) {
        ctx->pc = 0x1CCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEF4u;
        // 0x1ccef8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCEFCu;
        goto label_1ccefc;
    }
    ctx->pc = 0x1CCEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEF4u;
        // 0x1ccef8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCEFCu;
label_1ccefc:
    // 0x1ccefc: 0x0  nop
    ctx->pc = 0x1ccefcu;
    // NOP
label_1ccf00:
    // 0x1ccf00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ccf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ccf04:
    // 0x1ccf04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ccf08:
    // 0x1ccf08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ccf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ccf0c:
    // 0x1ccf0c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1ccf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_1ccf10:
    // 0x1ccf10: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x1ccf10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_1ccf14:
    // 0x1ccf14: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1ccf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1ccf18:
    // 0x1ccf18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ccf1c:
    if (ctx->pc == 0x1CCF1Cu) {
        ctx->pc = 0x1CCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF18u;
        // 0x1ccf1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCF20u;
        goto label_1ccf20;
    }
    ctx->pc = 0x1CCF18u;
    {
        const bool branch_taken_0x1ccf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF18u;
        // 0x1ccf1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf18) {
            ctx->pc = 0x1CCF30u;
            goto label_1ccf30;
        }
    }
    ctx->pc = 0x1CCF20u;
label_1ccf20:
    // 0x1ccf20: 0xc0591f4  jal         func_1647D0
label_1ccf24:
    if (ctx->pc == 0x1CCF24u) {
        ctx->pc = 0x1CCF28u;
        goto label_1ccf28;
    }
    ctx->pc = 0x1CCF20u;
    SET_GPR_U32(ctx, 31, 0x1CCF28u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CCF20u, 0x1CCF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF28u;
label_1ccf28:
    // 0x1ccf28: 0x10000024  b           . + 4 + (0x24 << 2)
label_1ccf2c:
    if (ctx->pc == 0x1CCF2Cu) {
        ctx->pc = 0x1CCF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF28u;
        // 0x1ccf2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCF30u;
        goto label_1ccf30;
    }
    ctx->pc = 0x1CCF28u;
    {
        const bool branch_taken_0x1ccf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF28u;
        // 0x1ccf2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf28) {
            ctx->pc = 0x1CCFBCu;
            goto label_1ccfbc;
        }
    }
    ctx->pc = 0x1CCF30u;
label_1ccf30:
    // 0x1ccf30: 0xc08f0cc  jal         func_23C330
label_1ccf34:
    if (ctx->pc == 0x1CCF34u) {
        ctx->pc = 0x1CCF38u;
        goto label_1ccf38;
    }
    ctx->pc = 0x1CCF30u;
    SET_GPR_U32(ctx, 31, 0x1CCF38u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CCF38u;
label_1ccf38:
    // 0x1ccf38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccf38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ccf3c:
    // 0x1ccf3c: 0x0  nop
    ctx->pc = 0x1ccf3cu;
    // NOP
label_1ccf40:
    // 0x1ccf40: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ccf40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1ccf44:
    // 0x1ccf44: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ccf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ccf48:
    // 0x1ccf48: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ccf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1ccf4c:
    // 0x1ccf4c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ccf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1ccf50:
    // 0x1ccf50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ccf50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ccf54:
    // 0x1ccf54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ccf58:
    // 0x1ccf58: 0x0  nop
    ctx->pc = 0x1ccf58u;
    // NOP
label_1ccf5c:
    // 0x1ccf5c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ccf5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ccf60:
    // 0x1ccf60: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ccf60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1ccf64:
    // 0x1ccf64: 0x0  nop
    ctx->pc = 0x1ccf64u;
    // NOP
label_1ccf68:
    // 0x1ccf68: 0x0  nop
    ctx->pc = 0x1ccf68u;
    // NOP
label_1ccf6c:
    // 0x1ccf6c: 0xc06d4c0  jal         func_1B5300
label_1ccf70:
    if (ctx->pc == 0x1CCF70u) {
        ctx->pc = 0x1CCF74u;
        goto label_1ccf74;
    }
    ctx->pc = 0x1CCF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF74u);
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1CCF74u;
label_1ccf74:
    // 0x1ccf74: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1ccf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_1ccf78:
    // 0x1ccf78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ccf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ccf7c:
    // 0x1ccf7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ccf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ccf80:
    // 0x1ccf80: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1ccf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1ccf84:
    // 0x1ccf84: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1ccf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1ccf88:
    // 0x1ccf88: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1ccf88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1ccf8c:
    // 0x1ccf8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ccf8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ccf90:
    // 0x1ccf90: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1ccf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1ccf94:
    // 0x1ccf94: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1ccf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_1ccf98:
    // 0x1ccf98: 0xc066e02  jal         func_19B808
label_1ccf9c:
    if (ctx->pc == 0x1CCF9Cu) {
        ctx->pc = 0x1CCF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF98u;
        // 0x1ccf9c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCFA0u;
        goto label_1ccfa0;
    }
    ctx->pc = 0x1CCF98u;
    SET_GPR_U32(ctx, 31, 0x1CCFA0u);
    ctx->pc = 0x1CCF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF98u;
    // 0x1ccf9c: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CCFA0u;
label_1ccfa0:
    // 0x1ccfa0: 0xc0733f4  jal         func_1CCFD0
label_1ccfa4:
    if (ctx->pc == 0x1CCFA4u) {
        ctx->pc = 0x1CCFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFA0u;
        // 0x1ccfa4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCFA8u;
        goto label_1ccfa8;
    }
    ctx->pc = 0x1CCFA0u;
    SET_GPR_U32(ctx, 31, 0x1CCFA8u);
    ctx->pc = 0x1CCFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFA0u;
    // 0x1ccfa4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFD0u;
    goto label_1ccfd0;
    ctx->pc = 0x1CCFA8u;
label_1ccfa8:
    // 0x1ccfa8: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1ccfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_1ccfac:
    // 0x1ccfac: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1ccfacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1ccfb0:
    // 0x1ccfb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ccfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ccfb4:
    // 0x1ccfb4: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1ccfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_1ccfb8:
    // 0x1ccfb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ccfbc:
    // 0x1ccfbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ccfbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccfc0:
    // 0x1ccfc0: 0x3e00008  jr          $ra
label_1ccfc4:
    if (ctx->pc == 0x1CCFC4u) {
        ctx->pc = 0x1CCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFC0u;
        // 0x1ccfc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCFC8u;
        goto label_1ccfc8;
    }
    ctx->pc = 0x1CCFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFC0u;
        // 0x1ccfc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFC8u;
label_1ccfc8:
    // 0x1ccfc8: 0x0  nop
    ctx->pc = 0x1ccfc8u;
    // NOP
label_1ccfcc:
    // 0x1ccfcc: 0x0  nop
    ctx->pc = 0x1ccfccu;
    // NOP
label_1ccfd0:
    // 0x1ccfd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ccfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1ccfd4:
    // 0x1ccfd4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1ccfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1ccfd8:
    // 0x1ccfd8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ccfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1ccfdc:
    // 0x1ccfdc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ccfe0:
    // 0x1ccfe0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1ccfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1ccfe4:
    // 0x1ccfe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccfe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ccfe8:
    // 0x1ccfe8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1ccfe8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1ccfec:
    // 0x1ccfec: 0xc04f310  jal         func_13CC40
label_1ccff0:
    if (ctx->pc == 0x1CCFF0u) {
        ctx->pc = 0x1CCFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFECu;
        // 0x1ccff0: 0x24a57a60  addiu       $a1, $a1, 0x7A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCFF4u;
        goto label_1ccff4;
    }
    ctx->pc = 0x1CCFECu;
    SET_GPR_U32(ctx, 31, 0x1CCFF4u);
    ctx->pc = 0x1CCFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFECu;
    // 0x1ccff0: 0x24a57a60  addiu       $a1, $a1, 0x7A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x1CCFECu, 0x1CCFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFF4u;
label_1ccff4:
    // 0x1ccff4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1ccff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1ccff8:
    // 0x1ccff8: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1ccff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_1ccffc:
    // 0x1ccffc: 0xc4217a64  lwc1        $f1, 0x7A64($at)
    ctx->pc = 0x1ccffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 31332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd000:
    // 0x1cd000: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cd000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1cd004:
    // 0x1cd004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd008:
    // 0x1cd008: 0x24847a60  addiu       $a0, $a0, 0x7A60
    ctx->pc = 0x1cd008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31328));
label_1cd00c:
    // 0x1cd00c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cd00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd010:
    // 0x1cd010: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cd014:
    // 0x1cd014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd018:
    // 0x1cd018: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cd018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cd01c:
    // 0x1cd01c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cd01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cd020:
    // 0x1cd020: 0xc066e14  jal         func_19B850
label_1cd024:
    if (ctx->pc == 0x1CD024u) {
        ctx->pc = 0x1CD024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD020u;
        // 0x1cd024: 0xe4207a64  swc1        $f0, 0x7A64($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 31332), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD028u;
        goto label_1cd028;
    }
    ctx->pc = 0x1CD020u;
    SET_GPR_U32(ctx, 31, 0x1CD028u);
    ctx->pc = 0x1CD024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD020u;
    // 0x1cd024: 0xe4207a64  swc1        $f0, 0x7A64($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 31332), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1CD028u;
label_1cd028:
    // 0x1cd028: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cd028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cd02c:
    // 0x1cd02c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1cd02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1cd030:
    // 0x1cd030: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x1cd030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1cd034:
    // 0x1cd034: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1cd038:
    if (ctx->pc == 0x1CD038u) {
        ctx->pc = 0x1CD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD034u;
        // 0x1cd038: 0x3c024307  lui         $v0, 0x4307 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD03Cu;
        goto label_1cd03c;
    }
    ctx->pc = 0x1CD034u;
    {
        const bool branch_taken_0x1cd034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD034u;
        // 0x1cd038: 0x3c024307  lui         $v0, 0x4307 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd034) {
            ctx->pc = 0x1CD084u;
            goto label_1cd084;
        }
    }
    ctx->pc = 0x1CD03Cu;
label_1cd03c:
    // 0x1cd03c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1cd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1cd040:
    // 0x1cd040: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1cd044:
    if (ctx->pc == 0x1CD044u) {
        ctx->pc = 0x1CD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD040u;
        // 0x1cd044: 0x3c024296  lui         $v0, 0x4296 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD048u;
        goto label_1cd048;
    }
    ctx->pc = 0x1CD040u;
    {
        const bool branch_taken_0x1cd040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD040u;
        // 0x1cd044: 0x3c024296  lui         $v0, 0x4296 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd040) {
            ctx->pc = 0x1CD070u;
            goto label_1cd070;
        }
    }
    ctx->pc = 0x1CD048u;
label_1cd048:
    // 0x1cd048: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1cd048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cd04c:
    // 0x1cd04c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1cd050:
    if (ctx->pc == 0x1CD050u) {
        ctx->pc = 0x1CD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD04Cu;
        // 0x1cd050: 0x3c024307  lui         $v0, 0x4307 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD054u;
        goto label_1cd054;
    }
    ctx->pc = 0x1CD04Cu;
    {
        const bool branch_taken_0x1cd04c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD04Cu;
        // 0x1cd050: 0x3c024307  lui         $v0, 0x4307 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd04c) {
            ctx->pc = 0x1CD05Cu;
            goto label_1cd05c;
        }
    }
    ctx->pc = 0x1CD054u;
label_1cd054:
    // 0x1cd054: 0x10000010  b           . + 4 + (0x10 << 2)
label_1cd058:
    if (ctx->pc == 0x1CD058u) {
        ctx->pc = 0x1CD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD054u;
        // 0x1cd058: 0x3c024307  lui         $v0, 0x4307 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD05Cu;
        goto label_1cd05c;
    }
    ctx->pc = 0x1CD054u;
    {
        const bool branch_taken_0x1cd054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD054u;
        // 0x1cd058: 0x3c024307  lui         $v0, 0x4307 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd054) {
            ctx->pc = 0x1CD098u;
            goto label_1cd098;
        }
    }
    ctx->pc = 0x1CD05Cu;
label_1cd05c:
    // 0x1cd05c: 0x640400ff  daddiu      $a0, $zero, 0xFF
    ctx->pc = 0x1cd05cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_1cd060:
    // 0x1cd060: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd064:
    // 0x1cd064: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1cd064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd068:
    // 0x1cd068: 0x1000000f  b           . + 4 + (0xF << 2)
label_1cd06c:
    if (ctx->pc == 0x1CD06Cu) {
        ctx->pc = 0x1CD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD068u;
        // 0x1cd06c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD070u;
        goto label_1cd070;
    }
    ctx->pc = 0x1CD068u;
    {
        const bool branch_taken_0x1cd068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD068u;
        // 0x1cd06c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd068) {
            ctx->pc = 0x1CD0A8u;
            goto label_1cd0a8;
        }
    }
    ctx->pc = 0x1CD070u;
label_1cd070:
    // 0x1cd070: 0x640400ff  daddiu      $a0, $zero, 0xFF
    ctx->pc = 0x1cd070u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_1cd074:
    // 0x1cd074: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd078:
    // 0x1cd078: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1cd078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd07c:
    // 0x1cd07c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1cd080:
    if (ctx->pc == 0x1CD080u) {
        ctx->pc = 0x1CD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD07Cu;
        // 0x1cd080: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD084u;
        goto label_1cd084;
    }
    ctx->pc = 0x1CD07Cu;
    {
        const bool branch_taken_0x1cd07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD07Cu;
        // 0x1cd080: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd07c) {
            ctx->pc = 0x1CD0A8u;
            goto label_1cd0a8;
        }
    }
    ctx->pc = 0x1CD084u;
label_1cd084:
    // 0x1cd084: 0x64040041  daddiu      $a0, $zero, 0x41
    ctx->pc = 0x1cd084u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)65);
label_1cd088:
    // 0x1cd088: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd08c:
    // 0x1cd08c: 0x64060050  daddiu      $a2, $zero, 0x50
    ctx->pc = 0x1cd08cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)80);
label_1cd090:
    // 0x1cd090: 0x10000005  b           . + 4 + (0x5 << 2)
label_1cd094:
    if (ctx->pc == 0x1CD094u) {
        ctx->pc = 0x1CD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD090u;
        // 0x1cd094: 0x6407006e  daddiu      $a3, $zero, 0x6E (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)110);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD098u;
        goto label_1cd098;
    }
    ctx->pc = 0x1CD090u;
    {
        const bool branch_taken_0x1cd090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD090u;
        // 0x1cd094: 0x6407006e  daddiu      $a3, $zero, 0x6E (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)110);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd090) {
            ctx->pc = 0x1CD0A8u;
            goto label_1cd0a8;
        }
    }
    ctx->pc = 0x1CD098u;
label_1cd098:
    // 0x1cd098: 0x640400ff  daddiu      $a0, $zero, 0xFF
    ctx->pc = 0x1cd098u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_1cd09c:
    // 0x1cd09c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd0a0:
    // 0x1cd0a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1cd0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0a4:
    // 0x1cd0a4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1cd0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0a8:
    // 0x1cd0a8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1cd0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_1cd0ac:
    // 0x1cd0ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cd0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cd0b0:
    // 0x1cd0b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd0b4:
    // 0x1cd0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd0b8:
    // 0x1cd0b8: 0x0  nop
    ctx->pc = 0x1cd0b8u;
    // NOP
label_1cd0bc:
    // 0x1cd0bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cd0bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cd0c0:
    // 0x1cd0c0: 0x0  nop
    ctx->pc = 0x1cd0c0u;
    // NOP
label_1cd0c4:
    // 0x1cd0c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1cd0c8:
    if (ctx->pc == 0x1CD0C8u) {
        ctx->pc = 0x1CD0CCu;
        goto label_1cd0cc;
    }
    ctx->pc = 0x1CD0C4u;
    {
        const bool branch_taken_0x1cd0c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd0c4) {
            ctx->pc = 0x1CD0DCu;
            goto label_1cd0dc;
        }
    }
    ctx->pc = 0x1CD0CCu;
label_1cd0cc:
    // 0x1cd0cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cd0ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1cd0d0:
    // 0x1cd0d0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1cd0d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1cd0d4:
    // 0x1cd0d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cd0d8:
    if (ctx->pc == 0x1CD0D8u) {
        ctx->pc = 0x1CD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0D4u;
        // 0x1cd0d8: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD0DCu;
        goto label_1cd0dc;
    }
    ctx->pc = 0x1CD0D4u;
    {
        const bool branch_taken_0x1cd0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD0D4u;
        // 0x1cd0d8: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0d4) {
            ctx->pc = 0x1CD0F8u;
            goto label_1cd0f8;
        }
    }
    ctx->pc = 0x1CD0DCu;
label_1cd0dc:
    // 0x1cd0dc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cd0dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cd0e0:
    // 0x1cd0e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1cd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1cd0e4:
    // 0x1cd0e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cd0e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1cd0e8:
    // 0x1cd0e8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1cd0e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1cd0ec:
    // 0x1cd0ec: 0x0  nop
    ctx->pc = 0x1cd0ecu;
    // NOP
label_1cd0f0:
    // 0x1cd0f0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1cd0f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1cd0f4:
    // 0x1cd0f4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1cd0f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd0f8:
    // 0x1cd0f8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1cd0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_1cd0fc:
    // 0x1cd0fc: 0x24639100  addiu       $v1, $v1, -0x6F00
    ctx->pc = 0x1cd0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938880));
label_1cd100:
    // 0x1cd100: 0xffac0000  sd          $t4, 0x0($sp)
    ctx->pc = 0x1cd100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
label_1cd104:
    // 0x1cd104: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1cd104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1cd108:
    // 0x1cd108: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1cd108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cd10c:
    // 0x1cd10c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1cd10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1cd110:
    // 0x1cd110: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1cd110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cd114:
    // 0x1cd114: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1cd114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1cd118:
    // 0x1cd118: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1cd118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1cd11c:
    // 0x1cd11c: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1cd11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_1cd120:
    // 0x1cd120: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1cd120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1cd124:
    // 0x1cd124: 0xffac0028  sd          $t4, 0x28($sp)
    ctx->pc = 0x1cd124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 12));
label_1cd128:
    // 0x1cd128: 0x3c0a0047  lui         $t2, 0x47
    ctx->pc = 0x1cd128u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)71 << 16));
label_1cd12c:
    // 0x1cd12c: 0xffac0030  sd          $t4, 0x30($sp)
    ctx->pc = 0x1cd12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 12));
label_1cd130:
    // 0x1cd130: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1cd130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1cd134:
    // 0x1cd134: 0xffac0038  sd          $t4, 0x38($sp)
    ctx->pc = 0x1cd134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 12));
label_1cd138:
    // 0x1cd138: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1cd138u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1cd13c:
    // 0x1cd13c: 0xffac0040  sd          $t4, 0x40($sp)
    ctx->pc = 0x1cd13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 12));
label_1cd140:
    // 0x1cd140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd144:
    // 0x1cd144: 0xffac0048  sd          $t4, 0x48($sp)
    ctx->pc = 0x1cd144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 12));
label_1cd148:
    // 0x1cd148: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cd148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd14c:
    // 0x1cd14c: 0x254a7a60  addiu       $t2, $t2, 0x7A60
    ctx->pc = 0x1cd14cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 31328));
label_1cd150:
    // 0x1cd150: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1cd150u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cd154:
    // 0x1cd154: 0xc07374c  jal         func_1CDD30
label_1cd158:
    if (ctx->pc == 0x1CD158u) {
        ctx->pc = 0x1CD158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD154u;
        // 0x1cd158: 0xffac0050  sd          $t4, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD15Cu;
        goto label_1cd15c;
    }
    ctx->pc = 0x1CD154u;
    SET_GPR_U32(ctx, 31, 0x1CD15Cu);
    ctx->pc = 0x1CD158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD154u;
    // 0x1cd158: 0xffac0050  sd          $t4, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD30u;
    { ctx->pc = 0x1cdd30; return; }
    ctx->pc = 0x1CD15Cu;
label_1cd15c:
    // 0x1cd15c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1cd15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1cd160:
    // 0x1cd160: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1cd160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cd164:
    // 0x1cd164: 0x3e00008  jr          $ra
label_1cd168:
    if (ctx->pc == 0x1CD168u) {
        ctx->pc = 0x1CD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD164u;
        // 0x1cd168: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD16Cu;
        goto label_1cd16c;
    }
    ctx->pc = 0x1CD164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD164u;
        // 0x1cd168: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD16Cu;
label_1cd16c:
    // 0x1cd16c: 0x0  nop
    ctx->pc = 0x1cd16cu;
    // NOP
label_1cd170:
    // 0x1cd170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cd170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cd174:
    // 0x1cd174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cd174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cd178:
    // 0x1cd178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cd178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cd17c:
    // 0x1cd17c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cd17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cd180:
    // 0x1cd180: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cd180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd184:
    // 0x1cd184: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cd184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd188:
    // 0x1cd188: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cd18c:
    // 0x1cd18c: 0xc0590dc  jal         func_164370
label_1cd190:
    if (ctx->pc == 0x1CD190u) {
        ctx->pc = 0x1CD190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD18Cu;
        // 0x1cd190: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD194u;
        goto label_1cd194;
    }
    ctx->pc = 0x1CD18Cu;
    SET_GPR_U32(ctx, 31, 0x1CD194u);
    ctx->pc = 0x1CD190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD18Cu;
    // 0x1cd190: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1CD18Cu, 0x1CD194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD194u;
label_1cd194:
    // 0x1cd194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd198:
    // 0x1cd198: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_1cd19c:
    if (ctx->pc == 0x1CD19Cu) {
        ctx->pc = 0x1CD19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD198u;
        // 0x1cd19c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD1A0u;
        goto label_1cd1a0;
    }
    ctx->pc = 0x1CD198u;
    {
        const bool branch_taken_0x1cd198 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD198u;
        // 0x1cd19c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd198) {
            ctx->pc = 0x1CD1F4u;
            goto label_1cd1f4;
        }
    }
    ctx->pc = 0x1CD1A0u;
label_1cd1a0:
    // 0x1cd1a0: 0xc066e26  jal         func_19B898
label_1cd1a4:
    if (ctx->pc == 0x1CD1A4u) {
        ctx->pc = 0x1CD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1A0u;
        // 0x1cd1a4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD1A8u;
        goto label_1cd1a8;
    }
    ctx->pc = 0x1CD1A0u;
    SET_GPR_U32(ctx, 31, 0x1CD1A8u);
    ctx->pc = 0x1CD1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1A0u;
    // 0x1cd1a4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1CD1A8u;
label_1cd1a8:
    // 0x1cd1a8: 0xc08f0cc  jal         func_23C330
label_1cd1ac:
    if (ctx->pc == 0x1CD1ACu) {
        ctx->pc = 0x1CD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1A8u;
        // 0x1cd1ac: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD1B0u;
        goto label_1cd1b0;
    }
    ctx->pc = 0x1CD1A8u;
    SET_GPR_U32(ctx, 31, 0x1CD1B0u);
    ctx->pc = 0x1CD1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD1A8u;
    // 0x1cd1ac: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD1B0u;
label_1cd1b0:
    // 0x1cd1b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd1b4:
    // 0x1cd1b4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1cd1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_1cd1b8:
    // 0x1cd1b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd1b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd1bc:
    // 0x1cd1bc: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1cd1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_1cd1c0:
    // 0x1cd1c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd1c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd1c4:
    // 0x1cd1c4: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1cd1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_1cd1c8:
    // 0x1cd1c8: 0x2463d210  addiu       $v1, $v1, -0x2DF0
    ctx->pc = 0x1cd1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955536));
label_1cd1cc:
    // 0x1cd1cc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1cd1ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cd1d0:
    // 0x1cd1d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cd1d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd1d4:
    // 0x1cd1d4: 0x0  nop
    ctx->pc = 0x1cd1d4u;
    // NOP
label_1cd1d8:
    // 0x1cd1d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cd1d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1cd1dc:
    // 0x1cd1dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cd1dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1cd1e0:
    // 0x1cd1e0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1cd1e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1cd1e4:
    // 0x1cd1e4: 0x0  nop
    ctx->pc = 0x1cd1e4u;
    // NOP
label_1cd1e8:
    // 0x1cd1e8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1cd1e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1cd1ec:
    // 0x1cd1ec: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x1cd1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
label_1cd1f0:
    // 0x1cd1f0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1cd1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1cd1f4:
    // 0x1cd1f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cd1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cd1f8:
    // 0x1cd1f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cd1f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cd1fc:
    // 0x1cd1fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd1fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cd200:
    // 0x1cd200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd204:
    // 0x1cd204: 0x3e00008  jr          $ra
label_1cd208:
    if (ctx->pc == 0x1CD208u) {
        ctx->pc = 0x1CD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD204u;
        // 0x1cd208: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD20Cu;
        goto label_1cd20c;
    }
    ctx->pc = 0x1CD204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD204u;
        // 0x1cd208: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD20Cu;
label_1cd20c:
    // 0x1cd20c: 0x0  nop
    ctx->pc = 0x1cd20cu;
    // NOP
label_1cd210:
    // 0x1cd210: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cd210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1cd214:
    // 0x1cd214: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1cd214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1cd218:
    // 0x1cd218: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1cd218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1cd21c:
    // 0x1cd21c: 0xe7b50064  swc1        $f21, 0x64($sp)
    ctx->pc = 0x1cd21cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1cd220:
    // 0x1cd220: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1cd220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1cd224:
    // 0x1cd224: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x1cd224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_1cd228:
    // 0x1cd228: 0x94630014  lhu         $v1, 0x14($v1)
    ctx->pc = 0x1cd228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_1cd22c:
    // 0x1cd22c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1cd22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1cd230:
    // 0x1cd230: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1cd234:
    if (ctx->pc == 0x1CD234u) {
        ctx->pc = 0x1CD234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD230u;
        // 0x1cd234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD238u;
        goto label_1cd238;
    }
    ctx->pc = 0x1CD230u;
    {
        const bool branch_taken_0x1cd230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD230u;
        // 0x1cd234: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd230) {
            ctx->pc = 0x1CD248u;
            goto label_1cd248;
        }
    }
    ctx->pc = 0x1CD238u;
label_1cd238:
    // 0x1cd238: 0xc0591f4  jal         func_1647D0
label_1cd23c:
    if (ctx->pc == 0x1CD23Cu) {
        ctx->pc = 0x1CD240u;
        goto label_1cd240;
    }
    ctx->pc = 0x1CD238u;
    SET_GPR_U32(ctx, 31, 0x1CD240u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1CD238u, 0x1CD240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD240u;
label_1cd240:
    // 0x1cd240: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1cd244:
    if (ctx->pc == 0x1CD244u) {
        ctx->pc = 0x1CD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD240u;
        // 0x1cd244: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD248u;
        goto label_1cd248;
    }
    ctx->pc = 0x1CD240u;
    {
        const bool branch_taken_0x1cd240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD240u;
        // 0x1cd244: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd240) {
            ctx->pc = 0x1CD3F0u;
            goto label_1cd3f0;
        }
    }
    ctx->pc = 0x1CD248u;
label_1cd248:
    // 0x1cd248: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1cd248u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1cd24c:
    // 0x1cd24c: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1cd24cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1cd250:
    // 0x1cd250: 0x14200063  bnez        $at, . + 4 + (0x63 << 2)
label_1cd254:
    if (ctx->pc == 0x1CD254u) {
        ctx->pc = 0x1CD258u;
        goto label_1cd258;
    }
    ctx->pc = 0x1CD250u;
    {
        const bool branch_taken_0x1cd250 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd250) {
            ctx->pc = 0x1CD3E0u;
            goto label_1cd3e0;
        }
    }
    ctx->pc = 0x1CD258u;
label_1cd258:
    // 0x1cd258: 0xc08f0cc  jal         func_23C330
label_1cd25c:
    if (ctx->pc == 0x1CD25Cu) {
        ctx->pc = 0x1CD260u;
        goto label_1cd260;
    }
    ctx->pc = 0x1CD258u;
    SET_GPR_U32(ctx, 31, 0x1CD260u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD260u;
label_1cd260:
    // 0x1cd260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd264:
    // 0x1cd264: 0x0  nop
    ctx->pc = 0x1cd264u;
    // NOP
label_1cd268:
    // 0x1cd268: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cd268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cd26c:
    // 0x1cd26c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cd26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cd270:
    // 0x1cd270: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd274:
    // 0x1cd274: 0x0  nop
    ctx->pc = 0x1cd274u;
    // NOP
label_1cd278:
    // 0x1cd278: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1cd278u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
label_1cd27c:
    // 0x1cd27c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1cd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_1cd280:
    // 0x1cd280: 0x0  nop
    ctx->pc = 0x1cd280u;
    // NOP
label_1cd284:
    // 0x1cd284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd288:
    // 0x1cd288: 0xc08f0cc  jal         func_23C330
label_1cd28c:
    if (ctx->pc == 0x1CD28Cu) {
        ctx->pc = 0x1CD28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD288u;
        // 0x1cd28c: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD290u;
        goto label_1cd290;
    }
    ctx->pc = 0x1CD288u;
    SET_GPR_U32(ctx, 31, 0x1CD290u);
    ctx->pc = 0x1CD28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD288u;
    // 0x1cd28c: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD290u;
label_1cd290:
    // 0x1cd290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd294:
    // 0x1cd294: 0x0  nop
    ctx->pc = 0x1cd294u;
    // NOP
label_1cd298:
    // 0x1cd298: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1cd298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1cd29c:
    // 0x1cd29c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cd29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cd2a0:
    // 0x1cd2a0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1cd2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1cd2a4:
    // 0x1cd2a4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1cd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1cd2a8:
    // 0x1cd2a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd2a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd2ac:
    // 0x1cd2ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd2b0:
    // 0x1cd2b0: 0x0  nop
    ctx->pc = 0x1cd2b0u;
    // NOP
label_1cd2b4:
    // 0x1cd2b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cd2b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1cd2b8:
    // 0x1cd2b8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1cd2b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1cd2bc:
    // 0x1cd2bc: 0x0  nop
    ctx->pc = 0x1cd2bcu;
    // NOP
label_1cd2c0:
    // 0x1cd2c0: 0x0  nop
    ctx->pc = 0x1cd2c0u;
    // NOP
label_1cd2c4:
    // 0x1cd2c4: 0xc06d412  jal         func_1B5048
label_1cd2c8:
    if (ctx->pc == 0x1CD2C8u) {
        ctx->pc = 0x1CD2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2C4u;
        // 0x1cd2c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2CCu;
        goto label_1cd2cc;
    }
    ctx->pc = 0x1CD2C4u;
    SET_GPR_U32(ctx, 31, 0x1CD2CCu);
    ctx->pc = 0x1CD2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2C4u;
    // 0x1cd2c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    { ctx->pc = 0x1b5048; return; }
    ctx->pc = 0x1CD2CCu;
label_1cd2cc:
    // 0x1cd2cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cd2ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1cd2d0:
    // 0x1cd2d0: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1cd2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_1cd2d4:
    // 0x1cd2d4: 0xc06d4c0  jal         func_1B5300
label_1cd2d8:
    if (ctx->pc == 0x1CD2D8u) {
        ctx->pc = 0x1CD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2D4u;
        // 0x1cd2d8: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2DCu;
        goto label_1cd2dc;
    }
    ctx->pc = 0x1CD2D4u;
    SET_GPR_U32(ctx, 31, 0x1CD2DCu);
    ctx->pc = 0x1CD2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2D4u;
    // 0x1cd2d8: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x1CD2DCu;
label_1cd2dc:
    // 0x1cd2dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1cd2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1cd2e0:
    // 0x1cd2e0: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1cd2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_1cd2e4:
    // 0x1cd2e4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1cd2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1cd2e8:
    // 0x1cd2e8: 0xc066daa  jal         func_19B6A8
label_1cd2ec:
    if (ctx->pc == 0x1CD2ECu) {
        ctx->pc = 0x1CD2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2E8u;
        // 0x1cd2ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD2F0u;
        goto label_1cd2f0;
    }
    ctx->pc = 0x1CD2E8u;
    SET_GPR_U32(ctx, 31, 0x1CD2F0u);
    ctx->pc = 0x1CD2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2E8u;
    // 0x1cd2ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x1CD2E8u, 0x1CD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2F0u;
label_1cd2f0:
    // 0x1cd2f0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1cd2f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1cd2f4:
    // 0x1cd2f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cd2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1cd2f8:
    // 0x1cd2f8: 0xc066e14  jal         func_19B850
label_1cd2fc:
    if (ctx->pc == 0x1CD2FCu) {
        ctx->pc = 0x1CD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2F8u;
        // 0x1cd2fc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD300u;
        goto label_1cd300;
    }
    ctx->pc = 0x1CD2F8u;
    SET_GPR_U32(ctx, 31, 0x1CD300u);
    ctx->pc = 0x1CD2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2F8u;
    // 0x1cd2fc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1CD300u;
label_1cd300:
    // 0x1cd300: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cd300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1cd304:
    // 0x1cd304: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1cd304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1cd308:
    // 0x1cd308: 0xc066e02  jal         func_19B808
label_1cd30c:
    if (ctx->pc == 0x1CD30Cu) {
        ctx->pc = 0x1CD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD308u;
        // 0x1cd30c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD310u;
        goto label_1cd310;
    }
    ctx->pc = 0x1CD308u;
    SET_GPR_U32(ctx, 31, 0x1CD310u);
    ctx->pc = 0x1CD30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD308u;
    // 0x1cd30c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x1CD310u;
label_1cd310:
    // 0x1cd310: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1cd310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd314:
    // 0x1cd314: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x1cd314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
label_1cd318:
    // 0x1cd318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd31c:
    // 0x1cd31c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cd31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1cd320:
    // 0x1cd320: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1cd320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1cd324:
    // 0x1cd324: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1cd324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1cd328:
    // 0x1cd328: 0x24a57a70  addiu       $a1, $a1, 0x7A70
    ctx->pc = 0x1cd328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31344));
label_1cd32c:
    // 0x1cd32c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cd32cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cd330:
    // 0x1cd330: 0xc04f310  jal         func_13CC40
label_1cd334:
    if (ctx->pc == 0x1CD334u) {
        ctx->pc = 0x1CD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD330u;
        // 0x1cd334: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD338u;
        goto label_1cd338;
    }
    ctx->pc = 0x1CD330u;
    SET_GPR_U32(ctx, 31, 0x1CD338u);
    ctx->pc = 0x1CD334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD330u;
    // 0x1cd334: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x1CD330u, 0x1CD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD338u;
label_1cd338:
    // 0x1cd338: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cd338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cd33c:
    // 0x1cd33c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1cd33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1cd340:
    // 0x1cd340: 0xc4217a74  lwc1        $f1, 0x7A74($at)
    ctx->pc = 0x1cd340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 31348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd344:
    // 0x1cd344: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1cd344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1cd348:
    // 0x1cd348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd34c:
    // 0x1cd34c: 0x24847a70  addiu       $a0, $a0, 0x7A70
    ctx->pc = 0x1cd34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31344));
label_1cd350:
    // 0x1cd350: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cd350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd354:
    // 0x1cd354: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cd358:
    // 0x1cd358: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd35c:
    // 0x1cd35c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cd35cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cd360:
    // 0x1cd360: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1cd360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1cd364:
    // 0x1cd364: 0xc066e14  jal         func_19B850
label_1cd368:
    if (ctx->pc == 0x1CD368u) {
        ctx->pc = 0x1CD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD364u;
        // 0x1cd368: 0xe4207a74  swc1        $f0, 0x7A74($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 31348), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD36Cu;
        goto label_1cd36c;
    }
    ctx->pc = 0x1CD364u;
    SET_GPR_U32(ctx, 31, 0x1CD36Cu);
    ctx->pc = 0x1CD368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD364u;
    // 0x1cd368: 0xe4207a74  swc1        $f0, 0x7A74($at) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 31348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1CD36Cu;
label_1cd36c:
    // 0x1cd36c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1cd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1cd370:
    // 0x1cd370: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1cd370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd374:
    // 0x1cd374: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd378:
    // 0x1cd378: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1cd378u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd37c:
    // 0x1cd37c: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_1cd380:
    // 0x1cd380: 0x3c0a0047  lui         $t2, 0x47
    ctx->pc = 0x1cd380u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)71 << 16));
label_1cd384:
    // 0x1cd384: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1cd384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1cd388:
    // 0x1cd388: 0xffac0000  sd          $t4, 0x0($sp)
    ctx->pc = 0x1cd388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 12));
label_1cd38c:
    // 0x1cd38c: 0x244290f0  addiu       $v0, $v0, -0x6F10
    ctx->pc = 0x1cd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
label_1cd390:
    // 0x1cd390: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cd390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cd394:
    // 0x1cd394: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1cd394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1cd398:
    // 0x1cd398: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1cd398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1cd39c:
    // 0x1cd39c: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1cd39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1cd3a0:
    // 0x1cd3a0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cd3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cd3a4:
    // 0x1cd3a4: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1cd3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1cd3a8:
    // 0x1cd3a8: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1cd3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1cd3ac:
    // 0x1cd3ac: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1cd3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_1cd3b0:
    // 0x1cd3b0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1cd3b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3b4:
    // 0x1cd3b4: 0xffac0028  sd          $t4, 0x28($sp)
    ctx->pc = 0x1cd3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 12));
label_1cd3b8:
    // 0x1cd3b8: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1cd3b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3bc:
    // 0x1cd3bc: 0xffac0030  sd          $t4, 0x30($sp)
    ctx->pc = 0x1cd3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 12));
label_1cd3c0:
    // 0x1cd3c0: 0x254a7a70  addiu       $t2, $t2, 0x7A70
    ctx->pc = 0x1cd3c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 31344));
label_1cd3c4:
    // 0x1cd3c4: 0xffac0038  sd          $t4, 0x38($sp)
    ctx->pc = 0x1cd3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 12));
label_1cd3c8:
    // 0x1cd3c8: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1cd3c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3cc:
    // 0x1cd3cc: 0xffac0040  sd          $t4, 0x40($sp)
    ctx->pc = 0x1cd3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 12));
label_1cd3d0:
    // 0x1cd3d0: 0xffac0048  sd          $t4, 0x48($sp)
    ctx->pc = 0x1cd3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 12));
label_1cd3d4:
    // 0x1cd3d4: 0xc07374c  jal         func_1CDD30
label_1cd3d8:
    if (ctx->pc == 0x1CD3D8u) {
        ctx->pc = 0x1CD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3D4u;
        // 0x1cd3d8: 0xffac0050  sd          $t4, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD3DCu;
        goto label_1cd3dc;
    }
    ctx->pc = 0x1CD3D4u;
    SET_GPR_U32(ctx, 31, 0x1CD3DCu);
    ctx->pc = 0x1CD3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD3D4u;
    // 0x1cd3d8: 0xffac0050  sd          $t4, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD30u;
    { ctx->pc = 0x1cdd30; return; }
    ctx->pc = 0x1CD3DCu;
label_1cd3dc:
    // 0x1cd3dc: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x1cd3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_1cd3e0:
    // 0x1cd3e0: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1cd3e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_1cd3e4:
    // 0x1cd3e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cd3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1cd3e8:
    // 0x1cd3e8: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1cd3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_1cd3ec:
    // 0x1cd3ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cd3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1cd3f0:
    // 0x1cd3f0: 0xc7b50064  lwc1        $f21, 0x64($sp)
    ctx->pc = 0x1cd3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1cd3f4:
    // 0x1cd3f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1cd3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cd3f8:
    // 0x1cd3f8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1cd3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1cd3fc:
    // 0x1cd3fc: 0x3e00008  jr          $ra
label_1cd400:
    if (ctx->pc == 0x1CD400u) {
        ctx->pc = 0x1CD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3FCu;
        // 0x1cd400: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD404u;
        goto label_1cd404;
    }
    ctx->pc = 0x1CD3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD3FCu;
        // 0x1cd400: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD404u;
label_1cd404:
    // 0x1cd404: 0x0  nop
    ctx->pc = 0x1cd404u;
    // NOP
label_1cd408:
    // 0x1cd408: 0x0  nop
    ctx->pc = 0x1cd408u;
    // NOP
label_1cd40c:
    // 0x1cd40c: 0x0  nop
    ctx->pc = 0x1cd40cu;
    // NOP
label_1cd410:
    // 0x1cd410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cd414:
    // 0x1cd414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cd418:
    // 0x1cd418: 0xc07350c  jal         func_1CD430
label_1cd41c:
    if (ctx->pc == 0x1CD41Cu) {
        ctx->pc = 0x1CD420u;
        goto label_1cd420;
    }
    ctx->pc = 0x1CD418u;
    SET_GPR_U32(ctx, 31, 0x1CD420u);
    ctx->pc = 0x1CD430u;
    goto label_1cd430;
    ctx->pc = 0x1CD420u;
label_1cd420:
    // 0x1cd420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd424:
    // 0x1cd424: 0x3e00008  jr          $ra
label_1cd428:
    if (ctx->pc == 0x1CD428u) {
        ctx->pc = 0x1CD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD424u;
        // 0x1cd428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD42Cu;
        goto label_1cd42c;
    }
    ctx->pc = 0x1CD424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD424u;
        // 0x1cd428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD42Cu;
label_1cd42c:
    // 0x1cd42c: 0x0  nop
    ctx->pc = 0x1cd42cu;
    // NOP
label_1cd430:
    // 0x1cd430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cd430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1cd434:
    // 0x1cd434: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cd434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1cd438:
    // 0x1cd438: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cd438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1cd43c:
    // 0x1cd43c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cd43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cd440:
    // 0x1cd440: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cd440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd444:
    // 0x1cd444: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cd448:
    // 0x1cd448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd44c:
    // 0x1cd44c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1cd44cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1cd450:
    // 0x1cd450: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1cd450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cd454:
    // 0x1cd454: 0xc0590dc  jal         func_164370
label_1cd458:
    if (ctx->pc == 0x1CD458u) {
        ctx->pc = 0x1CD458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD454u;
        // 0x1cd458: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD45Cu;
        goto label_1cd45c;
    }
    ctx->pc = 0x1CD454u;
    SET_GPR_U32(ctx, 31, 0x1CD45Cu);
    ctx->pc = 0x1CD458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD454u;
    // 0x1cd458: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1CD454u, 0x1CD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD45Cu;
label_1cd45c:
    // 0x1cd45c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd460:
    // 0x1cd460: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_1cd464:
    if (ctx->pc == 0x1CD464u) {
        ctx->pc = 0x1CD468u;
        goto label_1cd468;
    }
    ctx->pc = 0x1CD460u;
    {
        const bool branch_taken_0x1cd460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd460) {
            ctx->pc = 0x1CD530u;
            { ctx->pc = 0x1cd530; return; }
        }
    }
    ctx->pc = 0x1CD468u;
label_1cd468:
    // 0x1cd468: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1cd468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
label_1cd46c:
    // 0x1cd46c: 0xdf8689c0  ld          $a2, -0x7640($gp)
    ctx->pc = 0x1cd46cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937024)));
label_1cd470:
    // 0x1cd470: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1cd470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1cd474:
    // 0x1cd474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd478:
    // 0x1cd478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd47c:
    // 0x1cd47c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cd47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd480:
    // 0x1cd480: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cd480u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1cd484:
    // 0x1cd484: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1cd484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1cd488:
    // 0x1cd488: 0x46140342  mul.s       $f13, $f0, $f20
    ctx->pc = 0x1cd488u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1cd48c:
    // 0x1cd48c: 0xc0717e8  jal         func_1C5FA0
label_1cd490:
    if (ctx->pc == 0x1CD490u) {
        ctx->pc = 0x1CD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD48Cu;
        // 0x1cd490: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD494u;
        goto label_1cd494;
    }
    ctx->pc = 0x1CD48Cu;
    SET_GPR_U32(ctx, 31, 0x1CD494u);
    ctx->pc = 0x1CD490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD48Cu;
    // 0x1cd490: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    { ctx->pc = 0x1c5fa0; return; }
    ctx->pc = 0x1CD494u;
label_1cd494:
    // 0x1cd494: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1cd494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
label_1cd498:
    // 0x1cd498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd49c:
    // 0x1cd49c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1cd49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1cd4a0:
    // 0x1cd4a0: 0xc0717c8  jal         func_1C5F20
label_1cd4a4:
    if (ctx->pc == 0x1CD4A4u) {
        ctx->pc = 0x1CD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4A0u;
        // 0x1cd4a4: 0xa20202e0  sb          $v0, 0x2E0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD4A8u;
        goto label_1cd4a8;
    }
    ctx->pc = 0x1CD4A0u;
    SET_GPR_U32(ctx, 31, 0x1CD4A8u);
    ctx->pc = 0x1CD4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4A0u;
    // 0x1cd4a4: 0xa20202e0  sb          $v0, 0x2E0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    { ctx->pc = 0x1c5f20; return; }
    ctx->pc = 0x1CD4A8u;
label_1cd4a8:
    // 0x1cd4a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd4ac:
    // 0x1cd4ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd4b0:
    // 0x1cd4b0: 0xa20202e1  sb          $v0, 0x2E1($s0)
    ctx->pc = 0x1cd4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 2));
label_1cd4b4:
    // 0x1cd4b4: 0xa20302eb  sb          $v1, 0x2EB($s0)
    ctx->pc = 0x1cd4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 3));
label_1cd4b8:
    // 0x1cd4b8: 0x3c023c09  lui         $v0, 0x3C09
    ctx->pc = 0x1cd4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15369 << 16));
label_1cd4bc:
    // 0x1cd4bc: 0xe6140330  swc1        $f20, 0x330($s0)
    ctx->pc = 0x1cd4bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
label_1cd4c0:
    // 0x1cd4c0: 0x3443a027  ori         $v1, $v0, 0xA027
    ctx->pc = 0x1cd4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40999);
label_1cd4c4:
    // 0x1cd4c4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1cd4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd4c8:
    // 0x1cd4c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cd4cc:
    // 0x1cd4cc: 0xe6000334  swc1        $f0, 0x334($s0)
    ctx->pc = 0x1cd4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
label_1cd4d0:
    // 0x1cd4d0: 0xae030338  sw          $v1, 0x338($s0)
    ctx->pc = 0x1cd4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 3));
label_1cd4d4:
    // 0x1cd4d4: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x1cd4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
label_1cd4d8:
    // 0x1cd4d8: 0xc08f0cc  jal         func_23C330
label_1cd4dc:
    if (ctx->pc == 0x1CD4DCu) {
        ctx->pc = 0x1CD4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4D8u;
        // 0x1cd4dc: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD4E0u;
        goto label_1cd4e0;
    }
    ctx->pc = 0x1CD4D8u;
    SET_GPR_U32(ctx, 31, 0x1CD4E0u);
    ctx->pc = 0x1CD4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD4D8u;
    // 0x1cd4dc: 0x921102e9  lbu         $s1, 0x2E9($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 745)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CD4E0u;
label_1cd4e0:
    // 0x1cd4e0: 0x920502ea  lbu         $a1, 0x2EA($s0)
    ctx->pc = 0x1cd4e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 746)));
label_1cd4e4:
    // 0x1cd4e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd4e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1cd4e8u;
    return;
}

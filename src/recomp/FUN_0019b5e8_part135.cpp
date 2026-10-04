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


void FUN_0019b5e8_part135(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1dccc8u: goto label_1dccc8;
        case 0x1dccccu: goto label_1dcccc;
        case 0x1dccd0u: goto label_1dccd0;
        case 0x1dccd4u: goto label_1dccd4;
        case 0x1dccd8u: goto label_1dccd8;
        case 0x1dccdcu: goto label_1dccdc;
        case 0x1dcce0u: goto label_1dcce0;
        case 0x1dcce4u: goto label_1dcce4;
        case 0x1dcce8u: goto label_1dcce8;
        case 0x1dccecu: goto label_1dccec;
        case 0x1dccf0u: goto label_1dccf0;
        case 0x1dccf4u: goto label_1dccf4;
        case 0x1dccf8u: goto label_1dccf8;
        case 0x1dccfcu: goto label_1dccfc;
        case 0x1dcd00u: goto label_1dcd00;
        case 0x1dcd04u: goto label_1dcd04;
        case 0x1dcd08u: goto label_1dcd08;
        case 0x1dcd0cu: goto label_1dcd0c;
        case 0x1dcd10u: goto label_1dcd10;
        case 0x1dcd14u: goto label_1dcd14;
        case 0x1dcd18u: goto label_1dcd18;
        case 0x1dcd1cu: goto label_1dcd1c;
        case 0x1dcd20u: goto label_1dcd20;
        case 0x1dcd24u: goto label_1dcd24;
        case 0x1dcd28u: goto label_1dcd28;
        case 0x1dcd2cu: goto label_1dcd2c;
        case 0x1dcd30u: goto label_1dcd30;
        case 0x1dcd34u: goto label_1dcd34;
        case 0x1dcd38u: goto label_1dcd38;
        case 0x1dcd3cu: goto label_1dcd3c;
        case 0x1dcd40u: goto label_1dcd40;
        case 0x1dcd44u: goto label_1dcd44;
        case 0x1dcd48u: goto label_1dcd48;
        case 0x1dcd4cu: goto label_1dcd4c;
        case 0x1dcd50u: goto label_1dcd50;
        case 0x1dcd54u: goto label_1dcd54;
        case 0x1dcd58u: goto label_1dcd58;
        case 0x1dcd5cu: goto label_1dcd5c;
        case 0x1dcd60u: goto label_1dcd60;
        case 0x1dcd64u: goto label_1dcd64;
        case 0x1dcd68u: goto label_1dcd68;
        case 0x1dcd6cu: goto label_1dcd6c;
        case 0x1dcd70u: goto label_1dcd70;
        case 0x1dcd74u: goto label_1dcd74;
        case 0x1dcd78u: goto label_1dcd78;
        case 0x1dcd7cu: goto label_1dcd7c;
        case 0x1dcd80u: goto label_1dcd80;
        case 0x1dcd84u: goto label_1dcd84;
        case 0x1dcd88u: goto label_1dcd88;
        case 0x1dcd8cu: goto label_1dcd8c;
        case 0x1dcd90u: goto label_1dcd90;
        case 0x1dcd94u: goto label_1dcd94;
        case 0x1dcd98u: goto label_1dcd98;
        case 0x1dcd9cu: goto label_1dcd9c;
        case 0x1dcda0u: goto label_1dcda0;
        case 0x1dcda4u: goto label_1dcda4;
        case 0x1dcda8u: goto label_1dcda8;
        case 0x1dcdacu: goto label_1dcdac;
        case 0x1dcdb0u: goto label_1dcdb0;
        case 0x1dcdb4u: goto label_1dcdb4;
        case 0x1dcdb8u: goto label_1dcdb8;
        case 0x1dcdbcu: goto label_1dcdbc;
        case 0x1dcdc0u: goto label_1dcdc0;
        case 0x1dcdc4u: goto label_1dcdc4;
        case 0x1dcdc8u: goto label_1dcdc8;
        case 0x1dcdccu: goto label_1dcdcc;
        case 0x1dcdd0u: goto label_1dcdd0;
        case 0x1dcdd4u: goto label_1dcdd4;
        case 0x1dcdd8u: goto label_1dcdd8;
        case 0x1dcddcu: goto label_1dcddc;
        case 0x1dcde0u: goto label_1dcde0;
        case 0x1dcde4u: goto label_1dcde4;
        case 0x1dcde8u: goto label_1dcde8;
        case 0x1dcdecu: goto label_1dcdec;
        case 0x1dcdf0u: goto label_1dcdf0;
        case 0x1dcdf4u: goto label_1dcdf4;
        case 0x1dcdf8u: goto label_1dcdf8;
        case 0x1dcdfcu: goto label_1dcdfc;
        case 0x1dce00u: goto label_1dce00;
        case 0x1dce04u: goto label_1dce04;
        case 0x1dce08u: goto label_1dce08;
        case 0x1dce0cu: goto label_1dce0c;
        case 0x1dce10u: goto label_1dce10;
        case 0x1dce14u: goto label_1dce14;
        case 0x1dce18u: goto label_1dce18;
        case 0x1dce1cu: goto label_1dce1c;
        case 0x1dce20u: goto label_1dce20;
        case 0x1dce24u: goto label_1dce24;
        case 0x1dce28u: goto label_1dce28;
        case 0x1dce2cu: goto label_1dce2c;
        case 0x1dce30u: goto label_1dce30;
        case 0x1dce34u: goto label_1dce34;
        case 0x1dce38u: goto label_1dce38;
        case 0x1dce3cu: goto label_1dce3c;
        case 0x1dce40u: goto label_1dce40;
        case 0x1dce44u: goto label_1dce44;
        case 0x1dce48u: goto label_1dce48;
        case 0x1dce4cu: goto label_1dce4c;
        case 0x1dce50u: goto label_1dce50;
        case 0x1dce54u: goto label_1dce54;
        case 0x1dce58u: goto label_1dce58;
        case 0x1dce5cu: goto label_1dce5c;
        case 0x1dce60u: goto label_1dce60;
        case 0x1dce64u: goto label_1dce64;
        case 0x1dce68u: goto label_1dce68;
        case 0x1dce6cu: goto label_1dce6c;
        case 0x1dce70u: goto label_1dce70;
        case 0x1dce74u: goto label_1dce74;
        case 0x1dce78u: goto label_1dce78;
        case 0x1dce7cu: goto label_1dce7c;
        case 0x1dce80u: goto label_1dce80;
        case 0x1dce84u: goto label_1dce84;
        case 0x1dce88u: goto label_1dce88;
        case 0x1dce8cu: goto label_1dce8c;
        case 0x1dce90u: goto label_1dce90;
        case 0x1dce94u: goto label_1dce94;
        case 0x1dce98u: goto label_1dce98;
        case 0x1dce9cu: goto label_1dce9c;
        case 0x1dcea0u: goto label_1dcea0;
        case 0x1dcea4u: goto label_1dcea4;
        case 0x1dcea8u: goto label_1dcea8;
        case 0x1dceacu: goto label_1dceac;
        case 0x1dceb0u: goto label_1dceb0;
        case 0x1dceb4u: goto label_1dceb4;
        case 0x1dceb8u: goto label_1dceb8;
        case 0x1dcebcu: goto label_1dcebc;
        case 0x1dcec0u: goto label_1dcec0;
        case 0x1dcec4u: goto label_1dcec4;
        case 0x1dcec8u: goto label_1dcec8;
        case 0x1dceccu: goto label_1dcecc;
        case 0x1dced0u: goto label_1dced0;
        case 0x1dced4u: goto label_1dced4;
        case 0x1dced8u: goto label_1dced8;
        case 0x1dcedcu: goto label_1dcedc;
        case 0x1dcee0u: goto label_1dcee0;
        case 0x1dcee4u: goto label_1dcee4;
        case 0x1dcee8u: goto label_1dcee8;
        case 0x1dceecu: goto label_1dceec;
        case 0x1dcef0u: goto label_1dcef0;
        case 0x1dcef4u: goto label_1dcef4;
        case 0x1dcef8u: goto label_1dcef8;
        case 0x1dcefcu: goto label_1dcefc;
        case 0x1dcf00u: goto label_1dcf00;
        case 0x1dcf04u: goto label_1dcf04;
        case 0x1dcf08u: goto label_1dcf08;
        case 0x1dcf0cu: goto label_1dcf0c;
        case 0x1dcf10u: goto label_1dcf10;
        case 0x1dcf14u: goto label_1dcf14;
        case 0x1dcf18u: goto label_1dcf18;
        case 0x1dcf1cu: goto label_1dcf1c;
        case 0x1dcf20u: goto label_1dcf20;
        case 0x1dcf24u: goto label_1dcf24;
        case 0x1dcf28u: goto label_1dcf28;
        case 0x1dcf2cu: goto label_1dcf2c;
        case 0x1dcf30u: goto label_1dcf30;
        case 0x1dcf34u: goto label_1dcf34;
        case 0x1dcf38u: goto label_1dcf38;
        case 0x1dcf3cu: goto label_1dcf3c;
        case 0x1dcf40u: goto label_1dcf40;
        case 0x1dcf44u: goto label_1dcf44;
        case 0x1dcf48u: goto label_1dcf48;
        case 0x1dcf4cu: goto label_1dcf4c;
        case 0x1dcf50u: goto label_1dcf50;
        case 0x1dcf54u: goto label_1dcf54;
        case 0x1dcf58u: goto label_1dcf58;
        case 0x1dcf5cu: goto label_1dcf5c;
        case 0x1dcf60u: goto label_1dcf60;
        case 0x1dcf64u: goto label_1dcf64;
        case 0x1dcf68u: goto label_1dcf68;
        case 0x1dcf6cu: goto label_1dcf6c;
        case 0x1dcf70u: goto label_1dcf70;
        case 0x1dcf74u: goto label_1dcf74;
        case 0x1dcf78u: goto label_1dcf78;
        case 0x1dcf7cu: goto label_1dcf7c;
        case 0x1dcf80u: goto label_1dcf80;
        case 0x1dcf84u: goto label_1dcf84;
        case 0x1dcf88u: goto label_1dcf88;
        case 0x1dcf8cu: goto label_1dcf8c;
        case 0x1dcf90u: goto label_1dcf90;
        case 0x1dcf94u: goto label_1dcf94;
        case 0x1dcf98u: goto label_1dcf98;
        case 0x1dcf9cu: goto label_1dcf9c;
        case 0x1dcfa0u: goto label_1dcfa0;
        case 0x1dcfa4u: goto label_1dcfa4;
        case 0x1dcfa8u: goto label_1dcfa8;
        case 0x1dcfacu: goto label_1dcfac;
        case 0x1dcfb0u: goto label_1dcfb0;
        case 0x1dcfb4u: goto label_1dcfb4;
        case 0x1dcfb8u: goto label_1dcfb8;
        case 0x1dcfbcu: goto label_1dcfbc;
        case 0x1dcfc0u: goto label_1dcfc0;
        case 0x1dcfc4u: goto label_1dcfc4;
        case 0x1dcfc8u: goto label_1dcfc8;
        case 0x1dcfccu: goto label_1dcfcc;
        case 0x1dcfd0u: goto label_1dcfd0;
        case 0x1dcfd4u: goto label_1dcfd4;
        case 0x1dcfd8u: goto label_1dcfd8;
        case 0x1dcfdcu: goto label_1dcfdc;
        case 0x1dcfe0u: goto label_1dcfe0;
        case 0x1dcfe4u: goto label_1dcfe4;
        case 0x1dcfe8u: goto label_1dcfe8;
        case 0x1dcfecu: goto label_1dcfec;
        case 0x1dcff0u: goto label_1dcff0;
        case 0x1dcff4u: goto label_1dcff4;
        case 0x1dcff8u: goto label_1dcff8;
        case 0x1dcffcu: goto label_1dcffc;
        case 0x1dd000u: goto label_1dd000;
        case 0x1dd004u: goto label_1dd004;
        case 0x1dd008u: goto label_1dd008;
        case 0x1dd00cu: goto label_1dd00c;
        case 0x1dd010u: goto label_1dd010;
        case 0x1dd014u: goto label_1dd014;
        case 0x1dd018u: goto label_1dd018;
        case 0x1dd01cu: goto label_1dd01c;
        case 0x1dd020u: goto label_1dd020;
        case 0x1dd024u: goto label_1dd024;
        case 0x1dd028u: goto label_1dd028;
        case 0x1dd02cu: goto label_1dd02c;
        case 0x1dd030u: goto label_1dd030;
        case 0x1dd034u: goto label_1dd034;
        case 0x1dd038u: goto label_1dd038;
        case 0x1dd03cu: goto label_1dd03c;
        case 0x1dd040u: goto label_1dd040;
        case 0x1dd044u: goto label_1dd044;
        case 0x1dd048u: goto label_1dd048;
        case 0x1dd04cu: goto label_1dd04c;
        case 0x1dd050u: goto label_1dd050;
        case 0x1dd054u: goto label_1dd054;
        case 0x1dd058u: goto label_1dd058;
        case 0x1dd05cu: goto label_1dd05c;
        case 0x1dd060u: goto label_1dd060;
        case 0x1dd064u: goto label_1dd064;
        case 0x1dd068u: goto label_1dd068;
        case 0x1dd06cu: goto label_1dd06c;
        case 0x1dd070u: goto label_1dd070;
        case 0x1dd074u: goto label_1dd074;
        case 0x1dd078u: goto label_1dd078;
        case 0x1dd07cu: goto label_1dd07c;
        case 0x1dd080u: goto label_1dd080;
        case 0x1dd084u: goto label_1dd084;
        case 0x1dd088u: goto label_1dd088;
        case 0x1dd08cu: goto label_1dd08c;
        case 0x1dd090u: goto label_1dd090;
        case 0x1dd094u: goto label_1dd094;
        case 0x1dd098u: goto label_1dd098;
        case 0x1dd09cu: goto label_1dd09c;
        case 0x1dd0a0u: goto label_1dd0a0;
        case 0x1dd0a4u: goto label_1dd0a4;
        case 0x1dd0a8u: goto label_1dd0a8;
        case 0x1dd0acu: goto label_1dd0ac;
        case 0x1dd0b0u: goto label_1dd0b0;
        case 0x1dd0b4u: goto label_1dd0b4;
        case 0x1dd0b8u: goto label_1dd0b8;
        case 0x1dd0bcu: goto label_1dd0bc;
        case 0x1dd0c0u: goto label_1dd0c0;
        case 0x1dd0c4u: goto label_1dd0c4;
        case 0x1dd0c8u: goto label_1dd0c8;
        case 0x1dd0ccu: goto label_1dd0cc;
        case 0x1dd0d0u: goto label_1dd0d0;
        case 0x1dd0d4u: goto label_1dd0d4;
        case 0x1dd0d8u: goto label_1dd0d8;
        case 0x1dd0dcu: goto label_1dd0dc;
        case 0x1dd0e0u: goto label_1dd0e0;
        case 0x1dd0e4u: goto label_1dd0e4;
        case 0x1dd0e8u: goto label_1dd0e8;
        case 0x1dd0ecu: goto label_1dd0ec;
        case 0x1dd0f0u: goto label_1dd0f0;
        case 0x1dd0f4u: goto label_1dd0f4;
        case 0x1dd0f8u: goto label_1dd0f8;
        case 0x1dd0fcu: goto label_1dd0fc;
        case 0x1dd100u: goto label_1dd100;
        case 0x1dd104u: goto label_1dd104;
        case 0x1dd108u: goto label_1dd108;
        case 0x1dd10cu: goto label_1dd10c;
        case 0x1dd110u: goto label_1dd110;
        case 0x1dd114u: goto label_1dd114;
        case 0x1dd118u: goto label_1dd118;
        case 0x1dd11cu: goto label_1dd11c;
        case 0x1dd120u: goto label_1dd120;
        case 0x1dd124u: goto label_1dd124;
        case 0x1dd128u: goto label_1dd128;
        case 0x1dd12cu: goto label_1dd12c;
        case 0x1dd130u: goto label_1dd130;
        case 0x1dd134u: goto label_1dd134;
        case 0x1dd138u: goto label_1dd138;
        case 0x1dd13cu: goto label_1dd13c;
        case 0x1dd140u: goto label_1dd140;
        case 0x1dd144u: goto label_1dd144;
        case 0x1dd148u: goto label_1dd148;
        case 0x1dd14cu: goto label_1dd14c;
        case 0x1dd150u: goto label_1dd150;
        case 0x1dd154u: goto label_1dd154;
        case 0x1dd158u: goto label_1dd158;
        case 0x1dd15cu: goto label_1dd15c;
        case 0x1dd160u: goto label_1dd160;
        case 0x1dd164u: goto label_1dd164;
        case 0x1dd168u: goto label_1dd168;
        case 0x1dd16cu: goto label_1dd16c;
        case 0x1dd170u: goto label_1dd170;
        case 0x1dd174u: goto label_1dd174;
        case 0x1dd178u: goto label_1dd178;
        case 0x1dd17cu: goto label_1dd17c;
        case 0x1dd180u: goto label_1dd180;
        case 0x1dd184u: goto label_1dd184;
        case 0x1dd188u: goto label_1dd188;
        case 0x1dd18cu: goto label_1dd18c;
        case 0x1dd190u: goto label_1dd190;
        case 0x1dd194u: goto label_1dd194;
        case 0x1dd198u: goto label_1dd198;
        case 0x1dd19cu: goto label_1dd19c;
        case 0x1dd1a0u: goto label_1dd1a0;
        case 0x1dd1a4u: goto label_1dd1a4;
        case 0x1dd1a8u: goto label_1dd1a8;
        case 0x1dd1acu: goto label_1dd1ac;
        case 0x1dd1b0u: goto label_1dd1b0;
        case 0x1dd1b4u: goto label_1dd1b4;
        case 0x1dd1b8u: goto label_1dd1b8;
        case 0x1dd1bcu: goto label_1dd1bc;
        case 0x1dd1c0u: goto label_1dd1c0;
        case 0x1dd1c4u: goto label_1dd1c4;
        case 0x1dd1c8u: goto label_1dd1c8;
        case 0x1dd1ccu: goto label_1dd1cc;
        case 0x1dd1d0u: goto label_1dd1d0;
        case 0x1dd1d4u: goto label_1dd1d4;
        case 0x1dd1d8u: goto label_1dd1d8;
        case 0x1dd1dcu: goto label_1dd1dc;
        case 0x1dd1e0u: goto label_1dd1e0;
        case 0x1dd1e4u: goto label_1dd1e4;
        case 0x1dd1e8u: goto label_1dd1e8;
        case 0x1dd1ecu: goto label_1dd1ec;
        case 0x1dd1f0u: goto label_1dd1f0;
        case 0x1dd1f4u: goto label_1dd1f4;
        case 0x1dd1f8u: goto label_1dd1f8;
        case 0x1dd1fcu: goto label_1dd1fc;
        case 0x1dd200u: goto label_1dd200;
        case 0x1dd204u: goto label_1dd204;
        case 0x1dd208u: goto label_1dd208;
        case 0x1dd20cu: goto label_1dd20c;
        case 0x1dd210u: goto label_1dd210;
        case 0x1dd214u: goto label_1dd214;
        case 0x1dd218u: goto label_1dd218;
        case 0x1dd21cu: goto label_1dd21c;
        case 0x1dd220u: goto label_1dd220;
        case 0x1dd224u: goto label_1dd224;
        case 0x1dd228u: goto label_1dd228;
        case 0x1dd22cu: goto label_1dd22c;
        case 0x1dd230u: goto label_1dd230;
        case 0x1dd234u: goto label_1dd234;
        case 0x1dd238u: goto label_1dd238;
        case 0x1dd23cu: goto label_1dd23c;
        case 0x1dd240u: goto label_1dd240;
        case 0x1dd244u: goto label_1dd244;
        case 0x1dd248u: goto label_1dd248;
        case 0x1dd24cu: goto label_1dd24c;
        case 0x1dd250u: goto label_1dd250;
        case 0x1dd254u: goto label_1dd254;
        case 0x1dd258u: goto label_1dd258;
        case 0x1dd25cu: goto label_1dd25c;
        case 0x1dd260u: goto label_1dd260;
        case 0x1dd264u: goto label_1dd264;
        case 0x1dd268u: goto label_1dd268;
        case 0x1dd26cu: goto label_1dd26c;
        case 0x1dd270u: goto label_1dd270;
        case 0x1dd274u: goto label_1dd274;
        case 0x1dd278u: goto label_1dd278;
        case 0x1dd27cu: goto label_1dd27c;
        case 0x1dd280u: goto label_1dd280;
        case 0x1dd284u: goto label_1dd284;
        case 0x1dd288u: goto label_1dd288;
        case 0x1dd28cu: goto label_1dd28c;
        case 0x1dd290u: goto label_1dd290;
        case 0x1dd294u: goto label_1dd294;
        case 0x1dd298u: goto label_1dd298;
        case 0x1dd29cu: goto label_1dd29c;
        case 0x1dd2a0u: goto label_1dd2a0;
        case 0x1dd2a4u: goto label_1dd2a4;
        case 0x1dd2a8u: goto label_1dd2a8;
        case 0x1dd2acu: goto label_1dd2ac;
        case 0x1dd2b0u: goto label_1dd2b0;
        case 0x1dd2b4u: goto label_1dd2b4;
        case 0x1dd2b8u: goto label_1dd2b8;
        case 0x1dd2bcu: goto label_1dd2bc;
        case 0x1dd2c0u: goto label_1dd2c0;
        case 0x1dd2c4u: goto label_1dd2c4;
        case 0x1dd2c8u: goto label_1dd2c8;
        case 0x1dd2ccu: goto label_1dd2cc;
        case 0x1dd2d0u: goto label_1dd2d0;
        case 0x1dd2d4u: goto label_1dd2d4;
        case 0x1dd2d8u: goto label_1dd2d8;
        case 0x1dd2dcu: goto label_1dd2dc;
        case 0x1dd2e0u: goto label_1dd2e0;
        case 0x1dd2e4u: goto label_1dd2e4;
        case 0x1dd2e8u: goto label_1dd2e8;
        case 0x1dd2ecu: goto label_1dd2ec;
        case 0x1dd2f0u: goto label_1dd2f0;
        case 0x1dd2f4u: goto label_1dd2f4;
        case 0x1dd2f8u: goto label_1dd2f8;
        case 0x1dd2fcu: goto label_1dd2fc;
        case 0x1dd300u: goto label_1dd300;
        case 0x1dd304u: goto label_1dd304;
        case 0x1dd308u: goto label_1dd308;
        case 0x1dd30cu: goto label_1dd30c;
        case 0x1dd310u: goto label_1dd310;
        case 0x1dd314u: goto label_1dd314;
        case 0x1dd318u: goto label_1dd318;
        case 0x1dd31cu: goto label_1dd31c;
        case 0x1dd320u: goto label_1dd320;
        case 0x1dd324u: goto label_1dd324;
        case 0x1dd328u: goto label_1dd328;
        case 0x1dd32cu: goto label_1dd32c;
        case 0x1dd330u: goto label_1dd330;
        case 0x1dd334u: goto label_1dd334;
        case 0x1dd338u: goto label_1dd338;
        case 0x1dd33cu: goto label_1dd33c;
        case 0x1dd340u: goto label_1dd340;
        case 0x1dd344u: goto label_1dd344;
        case 0x1dd348u: goto label_1dd348;
        case 0x1dd34cu: goto label_1dd34c;
        case 0x1dd350u: goto label_1dd350;
        case 0x1dd354u: goto label_1dd354;
        case 0x1dd358u: goto label_1dd358;
        case 0x1dd35cu: goto label_1dd35c;
        case 0x1dd360u: goto label_1dd360;
        case 0x1dd364u: goto label_1dd364;
        case 0x1dd368u: goto label_1dd368;
        case 0x1dd36cu: goto label_1dd36c;
        case 0x1dd370u: goto label_1dd370;
        case 0x1dd374u: goto label_1dd374;
        case 0x1dd378u: goto label_1dd378;
        case 0x1dd37cu: goto label_1dd37c;
        case 0x1dd380u: goto label_1dd380;
        case 0x1dd384u: goto label_1dd384;
        case 0x1dd388u: goto label_1dd388;
        case 0x1dd38cu: goto label_1dd38c;
        case 0x1dd390u: goto label_1dd390;
        case 0x1dd394u: goto label_1dd394;
        case 0x1dd398u: goto label_1dd398;
        case 0x1dd39cu: goto label_1dd39c;
        case 0x1dd3a0u: goto label_1dd3a0;
        case 0x1dd3a4u: goto label_1dd3a4;
        case 0x1dd3a8u: goto label_1dd3a8;
        case 0x1dd3acu: goto label_1dd3ac;
        case 0x1dd3b0u: goto label_1dd3b0;
        case 0x1dd3b4u: goto label_1dd3b4;
        case 0x1dd3b8u: goto label_1dd3b8;
        case 0x1dd3bcu: goto label_1dd3bc;
        case 0x1dd3c0u: goto label_1dd3c0;
        case 0x1dd3c4u: goto label_1dd3c4;
        case 0x1dd3c8u: goto label_1dd3c8;
        case 0x1dd3ccu: goto label_1dd3cc;
        case 0x1dd3d0u: goto label_1dd3d0;
        case 0x1dd3d4u: goto label_1dd3d4;
        case 0x1dd3d8u: goto label_1dd3d8;
        case 0x1dd3dcu: goto label_1dd3dc;
        case 0x1dd3e0u: goto label_1dd3e0;
        case 0x1dd3e4u: goto label_1dd3e4;
        case 0x1dd3e8u: goto label_1dd3e8;
        case 0x1dd3ecu: goto label_1dd3ec;
        case 0x1dd3f0u: goto label_1dd3f0;
        case 0x1dd3f4u: goto label_1dd3f4;
        case 0x1dd3f8u: goto label_1dd3f8;
        case 0x1dd3fcu: goto label_1dd3fc;
        case 0x1dd400u: goto label_1dd400;
        case 0x1dd404u: goto label_1dd404;
        case 0x1dd408u: goto label_1dd408;
        case 0x1dd40cu: goto label_1dd40c;
        case 0x1dd410u: goto label_1dd410;
        case 0x1dd414u: goto label_1dd414;
        case 0x1dd418u: goto label_1dd418;
        case 0x1dd41cu: goto label_1dd41c;
        case 0x1dd420u: goto label_1dd420;
        case 0x1dd424u: goto label_1dd424;
        case 0x1dd428u: goto label_1dd428;
        case 0x1dd42cu: goto label_1dd42c;
        case 0x1dd430u: goto label_1dd430;
        case 0x1dd434u: goto label_1dd434;
        case 0x1dd438u: goto label_1dd438;
        case 0x1dd43cu: goto label_1dd43c;
        case 0x1dd440u: goto label_1dd440;
        case 0x1dd444u: goto label_1dd444;
        case 0x1dd448u: goto label_1dd448;
        case 0x1dd44cu: goto label_1dd44c;
        case 0x1dd450u: goto label_1dd450;
        case 0x1dd454u: goto label_1dd454;
        case 0x1dd458u: goto label_1dd458;
        case 0x1dd45cu: goto label_1dd45c;
        case 0x1dd460u: goto label_1dd460;
        case 0x1dd464u: goto label_1dd464;
        case 0x1dd468u: goto label_1dd468;
        case 0x1dd46cu: goto label_1dd46c;
        case 0x1dd470u: goto label_1dd470;
        case 0x1dd474u: goto label_1dd474;
        case 0x1dd478u: goto label_1dd478;
        case 0x1dd47cu: goto label_1dd47c;
        case 0x1dd480u: goto label_1dd480;
        case 0x1dd484u: goto label_1dd484;
        case 0x1dd488u: goto label_1dd488;
        case 0x1dd48cu: goto label_1dd48c;
        case 0x1dd490u: goto label_1dd490;
        case 0x1dd494u: goto label_1dd494;
        default: return;
    }

label_1dccc8:
    // 0x1dccc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dcccc:
    // 0x1dcccc: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1dccd0:
    if (ctx->pc == 0x1DCCD0u) {
        ctx->pc = 0x1DCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCCCu;
        // 0x1dccd0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCCD4u;
        goto label_1dccd4;
    }
    ctx->pc = 0x1DCCCCu;
    {
        const bool branch_taken_0x1dcccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCCCu;
        // 0x1dccd0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcccc) {
            ctx->pc = 0x1DCCE4u;
            goto label_1dcce4;
        }
    }
    ctx->pc = 0x1DCCD4u;
label_1dccd4:
    // 0x1dccd4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1dccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1dccd8:
    // 0x1dccd8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1dccd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1dccdc:
    // 0x1dccdc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1dcce0:
    if (ctx->pc == 0x1DCCE0u) {
        ctx->pc = 0x1DCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCDCu;
        // 0x1dcce0: 0x72100b  movn        $v0, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCCE4u;
        goto label_1dcce4;
    }
    ctx->pc = 0x1DCCDCu;
    {
        const bool branch_taken_0x1dccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCDCu;
        // 0x1dcce0: 0x72100b  movn        $v0, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccdc) {
            ctx->pc = 0x1DCD14u;
            goto label_1dcd14;
        }
    }
    ctx->pc = 0x1DCCE4u;
label_1dcce4:
    // 0x1dcce4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1dcce8:
    if (ctx->pc == 0x1DCCE8u) {
        ctx->pc = 0x1DCCECu;
        goto label_1dccec;
    }
    ctx->pc = 0x1DCCE4u;
    {
        const bool branch_taken_0x1dcce4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcce4) {
            ctx->pc = 0x1DCCFCu;
            goto label_1dccfc;
        }
    }
    ctx->pc = 0x1DCCECu;
label_1dccec:
    // 0x1dccec: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1dccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1dccf0:
    // 0x1dccf0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1dccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1dccf4:
    // 0x1dccf4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dccf8:
    if (ctx->pc == 0x1DCCF8u) {
        ctx->pc = 0x1DCCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCF4u;
        // 0x1dccf8: 0x72100b  movn        $v0, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCCFCu;
        goto label_1dccfc;
    }
    ctx->pc = 0x1DCCF4u;
    {
        const bool branch_taken_0x1dccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCF4u;
        // 0x1dccf8: 0x72100b  movn        $v0, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccf4) {
            ctx->pc = 0x1DCD14u;
            goto label_1dcd14;
        }
    }
    ctx->pc = 0x1DCCFCu;
label_1dccfc:
    // 0x1dccfc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1dccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1dcd00:
    // 0x1dcd00: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_1dcd04:
    if (ctx->pc == 0x1DCD04u) {
        ctx->pc = 0x1DCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD00u;
        // 0x1dcd04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD08u;
        goto label_1dcd08;
    }
    ctx->pc = 0x1DCD00u;
    {
        const bool branch_taken_0x1dcd00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD00u;
        // 0x1dcd04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd00) {
            ctx->pc = 0x1DCD14u;
            goto label_1dcd14;
        }
    }
    ctx->pc = 0x1DCD08u;
label_1dcd08:
    // 0x1dcd08: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1dcd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dcd0c:
    // 0x1dcd0c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1dcd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1dcd10:
    // 0x1dcd10: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x1dcd10u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1dcd14:
    // 0x1dcd14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1dcd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1dcd18:
    // 0x1dcd18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dcd18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dcd1c:
    // 0x1dcd1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dcd1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dcd20:
    // 0x1dcd20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dcd20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dcd24:
    // 0x1dcd24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dcd24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dcd28:
    // 0x1dcd28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dcd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dcd2c:
    // 0x1dcd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dcd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcd30:
    // 0x1dcd30: 0x3e00008  jr          $ra
label_1dcd34:
    if (ctx->pc == 0x1DCD34u) {
        ctx->pc = 0x1DCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD30u;
        // 0x1dcd34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD38u;
        goto label_1dcd38;
    }
    ctx->pc = 0x1DCD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD30u;
        // 0x1dcd34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCD38u;
label_1dcd38:
    // 0x1dcd38: 0x0  nop
    ctx->pc = 0x1dcd38u;
    // NOP
label_1dcd3c:
    // 0x1dcd3c: 0x0  nop
    ctx->pc = 0x1dcd3cu;
    // NOP
label_1dcd40:
    // 0x1dcd40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dcd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1dcd44:
    // 0x1dcd44: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dcd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dcd48:
    // 0x1dcd48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dcd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1dcd4c:
    // 0x1dcd4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dcd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dcd50:
    // 0x1dcd50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dcd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dcd54:
    // 0x1dcd54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dcd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dcd58:
    // 0x1dcd58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dcd58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd5c:
    // 0x1dcd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dcd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dcd60:
    // 0x1dcd60: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
label_1dcd64:
    if (ctx->pc == 0x1DCD64u) {
        ctx->pc = 0x1DCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD60u;
        // 0x1dcd64: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD68u;
        goto label_1dcd68;
    }
    ctx->pc = 0x1DCD60u;
    {
        const bool branch_taken_0x1dcd60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD60u;
        // 0x1dcd64: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd60) {
            ctx->pc = 0x1DCD74u;
            goto label_1dcd74;
        }
    }
    ctx->pc = 0x1DCD68u;
label_1dcd68:
    // 0x1dcd68: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1dcd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1dcd6c:
    // 0x1dcd6c: 0x1642001d  bne         $s2, $v0, . + 4 + (0x1D << 2)
label_1dcd70:
    if (ctx->pc == 0x1DCD70u) {
        ctx->pc = 0x1DCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD6Cu;
        // 0x1dcd70: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD74u;
        goto label_1dcd74;
    }
    ctx->pc = 0x1DCD6Cu;
    {
        const bool branch_taken_0x1dcd6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD6Cu;
        // 0x1dcd70: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd6c) {
            ctx->pc = 0x1DCDE4u;
            goto label_1dcde4;
        }
    }
    ctx->pc = 0x1DCD74u;
label_1dcd74:
    // 0x1dcd74: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1dcd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dcd78:
    // 0x1dcd78: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1dcd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1dcd7c:
    // 0x1dcd7c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1dcd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1dcd80:
    // 0x1dcd80: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1dcd80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1dcd84:
    // 0x1dcd84: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x1dcd84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1dcd88:
    // 0x1dcd88: 0xc07aa5c  jal         func_1EA970
label_1dcd8c:
    if (ctx->pc == 0x1DCD8Cu) {
        ctx->pc = 0x1DCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD88u;
        // 0x1dcd8c: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCD90u;
        goto label_1dcd90;
    }
    ctx->pc = 0x1DCD88u;
    SET_GPR_U32(ctx, 31, 0x1DCD90u);
    ctx->pc = 0x1DCD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD88u;
    // 0x1dcd8c: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x1DCD90u;
label_1dcd90:
    // 0x1dcd90: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1dcd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dcd94:
    // 0x1dcd94: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1dcd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dcd98:
    // 0x1dcd98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dcd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd9c:
    // 0x1dcd9c: 0xc07aa7c  jal         func_1EA9F0
label_1dcda0:
    if (ctx->pc == 0x1DCDA0u) {
        ctx->pc = 0x1DCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD9Cu;
        // 0x1dcda0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDA4u;
        goto label_1dcda4;
    }
    ctx->pc = 0x1DCD9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCDA4u);
    ctx->pc = 0x1DCDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD9Cu;
    // 0x1dcda0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x1DCDA4u;
label_1dcda4:
    // 0x1dcda4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1dcda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dcda8:
    // 0x1dcda8: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_1dcdac:
    if (ctx->pc == 0x1DCDACu) {
        ctx->pc = 0x1DCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDA8u;
        // 0x1dcdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDB0u;
        goto label_1dcdb0;
    }
    ctx->pc = 0x1DCDA8u;
    {
        const bool branch_taken_0x1dcda8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDA8u;
        // 0x1dcdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcda8) {
            ctx->pc = 0x1DCDB4u;
            goto label_1dcdb4;
        }
    }
    ctx->pc = 0x1DCDB0u;
label_1dcdb0:
    // 0x1dcdb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dcdb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcdb4:
    // 0x1dcdb4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dcdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dcdb8:
    // 0x1dcdb8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1dcdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1dcdbc:
    // 0x1dcdbc: 0x2442b6b0  addiu       $v0, $v0, -0x4950
    ctx->pc = 0x1dcdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
label_1dcdc0:
    // 0x1dcdc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dcdc4:
    // 0x1dcdc4: 0xc07aaa8  jal         func_1EAAA0
label_1dcdc8:
    if (ctx->pc == 0x1DCDC8u) {
        ctx->pc = 0x1DCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDC4u;
        // 0x1dcdc8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDCCu;
        goto label_1dcdcc;
    }
    ctx->pc = 0x1DCDC4u;
    SET_GPR_U32(ctx, 31, 0x1DCDCCu);
    ctx->pc = 0x1DCDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDC4u;
    // 0x1dcdc8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x1DCDCCu;
label_1dcdcc:
    // 0x1dcdcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dcdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcdd0:
    // 0x1dcdd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dcdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcdd4:
    // 0x1dcdd4: 0xc07aa94  jal         func_1EAA50
label_1dcdd8:
    if (ctx->pc == 0x1DCDD8u) {
        ctx->pc = 0x1DCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDD4u;
        // 0x1dcdd8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDDCu;
        goto label_1dcddc;
    }
    ctx->pc = 0x1DCDD4u;
    SET_GPR_U32(ctx, 31, 0x1DCDDCu);
    ctx->pc = 0x1DCDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDD4u;
    // 0x1dcdd8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x1DCDDCu;
label_1dcddc:
    // 0x1dcddc: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1dcde0:
    if (ctx->pc == 0x1DCDE0u) {
        ctx->pc = 0x1DCDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDDCu;
        // 0x1dcde0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDE4u;
        goto label_1dcde4;
    }
    ctx->pc = 0x1DCDDCu;
    {
        const bool branch_taken_0x1dcddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDDCu;
        // 0x1dcde0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcddc) {
            ctx->pc = 0x1DCE4Cu;
            goto label_1dce4c;
        }
    }
    ctx->pc = 0x1DCDE4u;
label_1dcde4:
    // 0x1dcde4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1dcde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1dcde8:
    // 0x1dcde8: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1dcde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
label_1dcdec:
    // 0x1dcdec: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x1dcdecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1dcdf0:
    // 0x1dcdf0: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x1dcdf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1dcdf4:
    // 0x1dcdf4: 0xc07aa5c  jal         func_1EA970
label_1dcdf8:
    if (ctx->pc == 0x1DCDF8u) {
        ctx->pc = 0x1DCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDF4u;
        // 0x1dcdf8: 0x24090098  addiu       $t1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCDFCu;
        goto label_1dcdfc;
    }
    ctx->pc = 0x1DCDF4u;
    SET_GPR_U32(ctx, 31, 0x1DCDFCu);
    ctx->pc = 0x1DCDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDF4u;
    // 0x1dcdf8: 0x24090098  addiu       $t1, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    { ctx->pc = 0x1ea970; return; }
    ctx->pc = 0x1DCDFCu;
label_1dcdfc:
    // 0x1dcdfc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1dcdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dce00:
    // 0x1dce00: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1dce00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1dce04:
    // 0x1dce04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dce04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dce08:
    // 0x1dce08: 0xc07aa7c  jal         func_1EA9F0
label_1dce0c:
    if (ctx->pc == 0x1DCE0Cu) {
        ctx->pc = 0x1DCE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE08u;
        // 0x1dce0c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE10u;
        goto label_1dce10;
    }
    ctx->pc = 0x1DCE08u;
    SET_GPR_U32(ctx, 31, 0x1DCE10u);
    ctx->pc = 0x1DCE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE08u;
    // 0x1dce0c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    { ctx->pc = 0x1ea9f0; return; }
    ctx->pc = 0x1DCE10u;
label_1dce10:
    // 0x1dce10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dce14:
    // 0x1dce14: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_1dce18:
    if (ctx->pc == 0x1DCE18u) {
        ctx->pc = 0x1DCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE14u;
        // 0x1dce18: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE1Cu;
        goto label_1dce1c;
    }
    ctx->pc = 0x1DCE14u;
    {
        const bool branch_taken_0x1dce14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE14u;
        // 0x1dce18: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce14) {
            ctx->pc = 0x1DCE20u;
            goto label_1dce20;
        }
    }
    ctx->pc = 0x1DCE1Cu;
label_1dce1c:
    // 0x1dce1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dce20:
    // 0x1dce20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dce20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dce24:
    // 0x1dce24: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1dce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_1dce28:
    // 0x1dce28: 0x2442b6b0  addiu       $v0, $v0, -0x4950
    ctx->pc = 0x1dce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
label_1dce2c:
    // 0x1dce2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dce30:
    // 0x1dce30: 0xc07aaa8  jal         func_1EAAA0
label_1dce34:
    if (ctx->pc == 0x1DCE34u) {
        ctx->pc = 0x1DCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE30u;
        // 0x1dce34: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE38u;
        goto label_1dce38;
    }
    ctx->pc = 0x1DCE30u;
    SET_GPR_U32(ctx, 31, 0x1DCE38u);
    ctx->pc = 0x1DCE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE30u;
    // 0x1dce34: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    { ctx->pc = 0x1eaaa0; return; }
    ctx->pc = 0x1DCE38u;
label_1dce38:
    // 0x1dce38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dce38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dce3c:
    // 0x1dce3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dce3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dce40:
    // 0x1dce40: 0xc07aa94  jal         func_1EAA50
label_1dce44:
    if (ctx->pc == 0x1DCE44u) {
        ctx->pc = 0x1DCE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE40u;
        // 0x1dce44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE48u;
        goto label_1dce48;
    }
    ctx->pc = 0x1DCE40u;
    SET_GPR_U32(ctx, 31, 0x1DCE48u);
    ctx->pc = 0x1DCE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE40u;
    // 0x1dce44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    { ctx->pc = 0x1eaa50; return; }
    ctx->pc = 0x1DCE48u;
label_1dce48:
    // 0x1dce48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dce48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dce4c:
    // 0x1dce4c: 0xc07ab08  jal         func_1EAC20
label_1dce50:
    if (ctx->pc == 0x1DCE50u) {
        ctx->pc = 0x1DCE54u;
        goto label_1dce54;
    }
    ctx->pc = 0x1DCE4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE54u);
    ctx->pc = 0x1EAC20u;
    { ctx->pc = 0x1eac20; return; }
    ctx->pc = 0x1DCE54u;
label_1dce54:
    // 0x1dce54: 0xc07ab38  jal         func_1EACE0
label_1dce58:
    if (ctx->pc == 0x1DCE58u) {
        ctx->pc = 0x1DCE5Cu;
        goto label_1dce5c;
    }
    ctx->pc = 0x1DCE54u;
    SET_GPR_U32(ctx, 31, 0x1DCE5Cu);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1DCE5Cu;
label_1dce5c:
    // 0x1dce5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dce60:
    // 0x1dce60: 0x104300b0  beq         $v0, $v1, . + 4 + (0xB0 << 2)
label_1dce64:
    if (ctx->pc == 0x1DCE64u) {
        ctx->pc = 0x1DCE68u;
        goto label_1dce68;
    }
    ctx->pc = 0x1DCE60u;
    {
        const bool branch_taken_0x1dce60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dce60) {
            ctx->pc = 0x1DD124u;
            goto label_1dd124;
        }
    }
    ctx->pc = 0x1DCE68u;
label_1dce68:
    // 0x1dce68: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dce68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dce6c:
    // 0x1dce6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dce70:
    if (ctx->pc == 0x1DCE70u) {
        ctx->pc = 0x1DCE74u;
        goto label_1dce74;
    }
    ctx->pc = 0x1DCE6Cu;
    {
        const bool branch_taken_0x1dce6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dce6c) {
            ctx->pc = 0x1DCE7Cu;
            goto label_1dce7c;
        }
    }
    ctx->pc = 0x1DCE74u;
label_1dce74:
    // 0x1dce74: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dce78:
    if (ctx->pc == 0x1DCE78u) {
        ctx->pc = 0x1DCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE74u;
        // 0x1dce78: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCE7Cu;
        goto label_1dce7c;
    }
    ctx->pc = 0x1DCE74u;
    {
        const bool branch_taken_0x1dce74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE74u;
        // 0x1dce78: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dce74) {
            ctx->pc = 0x1DCE8Cu;
            goto label_1dce8c;
        }
    }
    ctx->pc = 0x1DCE7Cu;
label_1dce7c:
    // 0x1dce7c: 0x0  nop
    ctx->pc = 0x1dce7cu;
    // NOP
label_1dce80:
    // 0x1dce80: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dce84:
    // 0x1dce84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dce88:
    // 0x1dce88: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dce88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dce8c:
    // 0x1dce8c: 0x0  nop
    ctx->pc = 0x1dce8cu;
    // NOP
label_1dce90:
    // 0x1dce90: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dce90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dce94:
    // 0x1dce94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dce98:
    if (ctx->pc == 0x1DCE98u) {
        ctx->pc = 0x1DCE9Cu;
        goto label_1dce9c;
    }
    ctx->pc = 0x1DCE94u;
    {
        const bool branch_taken_0x1dce94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dce94) {
            ctx->pc = 0x1DCEA8u;
            goto label_1dcea8;
        }
    }
    ctx->pc = 0x1DCE9Cu;
label_1dce9c:
    // 0x1dce9c: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dcea0:
    // 0x1dcea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dcea4:
    // 0x1dcea4: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dcea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dcea8:
    // 0x1dcea8: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dceac:
    // 0x1dceac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dceb0:
    if (ctx->pc == 0x1DCEB0u) {
        ctx->pc = 0x1DCEB4u;
        goto label_1dceb4;
    }
    ctx->pc = 0x1DCEACu;
    {
        const bool branch_taken_0x1dceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dceac) {
            ctx->pc = 0x1DCF10u;
            goto label_1dcf10;
        }
    }
    ctx->pc = 0x1DCEB4u;
label_1dceb4:
    // 0x1dceb4: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dceb8:
    // 0x1dceb8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dceb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dcebc:
    // 0x1dcebc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dcec0:
    if (ctx->pc == 0x1DCEC0u) {
        ctx->pc = 0x1DCEC4u;
        goto label_1dcec4;
    }
    ctx->pc = 0x1DCEBCu;
    {
        const bool branch_taken_0x1dcebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcebc) {
            ctx->pc = 0x1DCEE4u;
            goto label_1dcee4;
        }
    }
    ctx->pc = 0x1DCEC4u;
label_1dcec4:
    // 0x1dcec4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dcec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dcec8:
    // 0x1dcec8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dcec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dcecc:
    // 0x1dcecc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dced0:
    if (ctx->pc == 0x1DCED0u) {
        ctx->pc = 0x1DCED4u;
        goto label_1dced4;
    }
    ctx->pc = 0x1DCECCu;
    {
        const bool branch_taken_0x1dcecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcecc) {
            ctx->pc = 0x1DCEDCu;
            goto label_1dcedc;
        }
    }
    ctx->pc = 0x1DCED4u;
label_1dced4:
    // 0x1dced4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dced8:
    if (ctx->pc == 0x1DCED8u) {
        ctx->pc = 0x1DCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCED4u;
        // 0x1dced8: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCEDCu;
        goto label_1dcedc;
    }
    ctx->pc = 0x1DCED4u;
    {
        const bool branch_taken_0x1dced4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCED4u;
        // 0x1dced8: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dced4) {
            ctx->pc = 0x1DCEE4u;
            goto label_1dcee4;
        }
    }
    ctx->pc = 0x1DCEDCu;
label_1dcedc:
    // 0x1dcedc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dcedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dcee0:
    // 0x1dcee0: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dcee4:
    // 0x1dcee4: 0x0  nop
    ctx->pc = 0x1dcee4u;
    // NOP
label_1dcee8:
    // 0x1dcee8: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dceec:
    // 0x1dceec: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dcef0:
    if (ctx->pc == 0x1DCEF0u) {
        ctx->pc = 0x1DCEF4u;
        goto label_1dcef4;
    }
    ctx->pc = 0x1DCEECu;
    {
        const bool branch_taken_0x1dceec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dceec) {
            ctx->pc = 0x1DCF10u;
            goto label_1dcf10;
        }
    }
    ctx->pc = 0x1DCEF4u;
label_1dcef4:
    // 0x1dcef4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dcef8:
    // 0x1dcef8: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dcef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dcefc:
    // 0x1dcefc: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dcf00:
    // 0x1dcf00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dcf04:
    if (ctx->pc == 0x1DCF04u) {
        ctx->pc = 0x1DCF08u;
        goto label_1dcf08;
    }
    ctx->pc = 0x1DCF00u;
    {
        const bool branch_taken_0x1dcf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf00) {
            ctx->pc = 0x1DCF10u;
            goto label_1dcf10;
        }
    }
    ctx->pc = 0x1DCF08u;
label_1dcf08:
    // 0x1dcf08: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dcf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dcf0c:
    // 0x1dcf0c: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dcf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dcf10:
    // 0x1dcf10: 0xc077a7c  jal         func_1DE9F0
label_1dcf14:
    if (ctx->pc == 0x1DCF14u) {
        ctx->pc = 0x1DCF18u;
        goto label_1dcf18;
    }
    ctx->pc = 0x1DCF10u;
    SET_GPR_U32(ctx, 31, 0x1DCF18u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DCF18u;
label_1dcf18:
    // 0x1dcf18: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dcf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dcf1c:
    // 0x1dcf1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dcf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dcf20:
    // 0x1dcf20: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dcf24:
    if (ctx->pc == 0x1DCF24u) {
        ctx->pc = 0x1DCF28u;
        goto label_1dcf28;
    }
    ctx->pc = 0x1DCF20u;
    {
        const bool branch_taken_0x1dcf20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dcf20) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF28u;
label_1dcf28:
    // 0x1dcf28: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcf2c:
    // 0x1dcf2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dcf30:
    // 0x1dcf30: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dcf34:
    if (ctx->pc == 0x1DCF34u) {
        ctx->pc = 0x1DCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF30u;
        // 0x1dcf34: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF38u;
        goto label_1dcf38;
    }
    ctx->pc = 0x1DCF30u;
    {
        const bool branch_taken_0x1dcf30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF30u;
        // 0x1dcf34: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf30) {
            ctx->pc = 0x1DCF54u;
            goto label_1dcf54;
        }
    }
    ctx->pc = 0x1DCF38u;
label_1dcf38:
    // 0x1dcf38: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcf3c:
    // 0x1dcf3c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dcf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dcf40:
    // 0x1dcf40: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dcf44:
    if (ctx->pc == 0x1DCF44u) {
        ctx->pc = 0x1DCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF40u;
        // 0x1dcf44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF48u;
        goto label_1dcf48;
    }
    ctx->pc = 0x1DCF40u;
    {
        const bool branch_taken_0x1dcf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF40u;
        // 0x1dcf44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf40) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF48u;
label_1dcf48:
    // 0x1dcf48: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dcf48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dcf4c:
    // 0x1dcf4c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dcf50:
    if (ctx->pc == 0x1DCF50u) {
        ctx->pc = 0x1DCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF4Cu;
        // 0x1dcf50: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF54u;
        goto label_1dcf54;
    }
    ctx->pc = 0x1DCF4Cu;
    {
        const bool branch_taken_0x1dcf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF4Cu;
        // 0x1dcf50: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf4c) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF54u;
label_1dcf54:
    // 0x1dcf54: 0x0  nop
    ctx->pc = 0x1dcf54u;
    // NOP
label_1dcf58:
    // 0x1dcf58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dcf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dcf5c:
    // 0x1dcf5c: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dcf60:
    if (ctx->pc == 0x1DCF60u) {
        ctx->pc = 0x1DCF64u;
        goto label_1dcf64;
    }
    ctx->pc = 0x1DCF5Cu;
    {
        const bool branch_taken_0x1dcf5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf5c) {
            ctx->pc = 0x1DCF80u;
            goto label_1dcf80;
        }
    }
    ctx->pc = 0x1DCF64u;
label_1dcf64:
    // 0x1dcf64: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcf68:
    // 0x1dcf68: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dcf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dcf6c:
    // 0x1dcf6c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dcf70:
    if (ctx->pc == 0x1DCF70u) {
        ctx->pc = 0x1DCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF6Cu;
        // 0x1dcf70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF74u;
        goto label_1dcf74;
    }
    ctx->pc = 0x1DCF6Cu;
    {
        const bool branch_taken_0x1dcf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF6Cu;
        // 0x1dcf70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf6c) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF74u;
label_1dcf74:
    // 0x1dcf74: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dcf74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dcf78:
    // 0x1dcf78: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dcf7c:
    if (ctx->pc == 0x1DCF7Cu) {
        ctx->pc = 0x1DCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF78u;
        // 0x1dcf7c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCF80u;
        goto label_1dcf80;
    }
    ctx->pc = 0x1DCF78u;
    {
        const bool branch_taken_0x1dcf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF78u;
        // 0x1dcf7c: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf78) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF80u;
label_1dcf80:
    // 0x1dcf80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dcf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dcf84:
    // 0x1dcf84: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dcf88:
    if (ctx->pc == 0x1DCF88u) {
        ctx->pc = 0x1DCF8Cu;
        goto label_1dcf8c;
    }
    ctx->pc = 0x1DCF84u;
    {
        const bool branch_taken_0x1dcf84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dcf84) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF8Cu;
label_1dcf8c:
    // 0x1dcf8c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dcf90:
    // 0x1dcf90: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dcf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dcf94:
    // 0x1dcf94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dcf98:
    if (ctx->pc == 0x1DCF98u) {
        ctx->pc = 0x1DCF9Cu;
        goto label_1dcf9c;
    }
    ctx->pc = 0x1DCF94u;
    {
        const bool branch_taken_0x1dcf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf94) {
            ctx->pc = 0x1DCFA4u;
            goto label_1dcfa4;
        }
    }
    ctx->pc = 0x1DCF9Cu;
label_1dcf9c:
    // 0x1dcf9c: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dcf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dcfa0:
    // 0x1dcfa0: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dcfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dcfa4:
    // 0x1dcfa4: 0x0  nop
    ctx->pc = 0x1dcfa4u;
    // NOP
label_1dcfa8:
    // 0x1dcfa8: 0xc07a9d8  jal         func_1EA760
label_1dcfac:
    if (ctx->pc == 0x1DCFACu) {
        ctx->pc = 0x1DCFB0u;
        goto label_1dcfb0;
    }
    ctx->pc = 0x1DCFA8u;
    SET_GPR_U32(ctx, 31, 0x1DCFB0u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DCFB0u;
label_1dcfb0:
    // 0x1dcfb0: 0xc04e168  jal         func_1385A0
label_1dcfb4:
    if (ctx->pc == 0x1DCFB4u) {
        ctx->pc = 0x1DCFB8u;
        goto label_1dcfb8;
    }
    ctx->pc = 0x1DCFB0u;
    SET_GPR_U32(ctx, 31, 0x1DCFB8u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DCFB0u, 0x1DCFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCFB8u;
label_1dcfb8:
    // 0x1dcfb8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dcfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dcfbc:
    // 0x1dcfbc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dcfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dcfc0:
    // 0x1dcfc0: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dcfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dcfc4:
    // 0x1dcfc4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dcfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dcfc8:
    // 0x1dcfc8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dcfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dcfcc:
    // 0x1dcfcc: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dcfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dcfd0:
    // 0x1dcfd0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dcfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dcfd4:
    // 0x1dcfd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcfd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfd8:
    // 0x1dcfd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dcfd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcfdc:
    // 0x1dcfdc: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dcfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dcfe0:
    // 0x1dcfe0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dcfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dcfe4:
    // 0x1dcfe4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dcfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dcfe8:
    // 0x1dcfe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dcfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dcfec:
    // 0x1dcfec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dcff0:
    // 0x1dcff0: 0xc066c72  jal         func_19B1C8
label_1dcff4:
    if (ctx->pc == 0x1DCFF4u) {
        ctx->pc = 0x1DCFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFF0u;
        // 0x1dcff4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCFF8u;
        goto label_1dcff8;
    }
    ctx->pc = 0x1DCFF0u;
    SET_GPR_U32(ctx, 31, 0x1DCFF8u);
    ctx->pc = 0x1DCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCFF0u;
    // 0x1dcff4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DCFF0u, 0x1DCFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCFF8u;
label_1dcff8:
    // 0x1dcff8: 0xc077e84  jal         func_1DFA10
label_1dcffc:
    if (ctx->pc == 0x1DCFFCu) {
        ctx->pc = 0x1DD000u;
        goto label_1dd000;
    }
    ctx->pc = 0x1DCFF8u;
    SET_GPR_U32(ctx, 31, 0x1DD000u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DD000u;
label_1dd000:
    // 0x1dd000: 0xc077d90  jal         func_1DF640
label_1dd004:
    if (ctx->pc == 0x1DD004u) {
        ctx->pc = 0x1DD008u;
        goto label_1dd008;
    }
    ctx->pc = 0x1DD000u;
    SET_GPR_U32(ctx, 31, 0x1DD008u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DD008u;
label_1dd008:
    // 0x1dd008: 0xc077ab4  jal         func_1DEAD0
label_1dd00c:
    if (ctx->pc == 0x1DD00Cu) {
        ctx->pc = 0x1DD010u;
        goto label_1dd010;
    }
    ctx->pc = 0x1DD008u;
    SET_GPR_U32(ctx, 31, 0x1DD010u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DD010u;
label_1dd010:
    // 0x1dd010: 0xc077880  jal         func_1DE200
label_1dd014:
    if (ctx->pc == 0x1DD014u) {
        ctx->pc = 0x1DD018u;
        goto label_1dd018;
    }
    ctx->pc = 0x1DD010u;
    SET_GPR_U32(ctx, 31, 0x1DD018u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DD018u;
label_1dd018:
    // 0x1dd018: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dd018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dd01c:
    // 0x1dd01c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dd020:
    if (ctx->pc == 0x1DD020u) {
        ctx->pc = 0x1DD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD01Cu;
        // 0x1dd020: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD024u;
        goto label_1dd024;
    }
    ctx->pc = 0x1DD01Cu;
    {
        const bool branch_taken_0x1dd01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD01Cu;
        // 0x1dd020: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd01c) {
            ctx->pc = 0x1DD0F0u;
            goto label_1dd0f0;
        }
    }
    ctx->pc = 0x1DD024u;
label_1dd024:
    // 0x1dd024: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dd024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dd028:
    // 0x1dd028: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd02c:
    // 0x1dd02c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dd02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dd030:
    // 0x1dd030: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dd030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dd034:
    // 0x1dd034: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dd034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dd038:
    // 0x1dd038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd03c:
    // 0x1dd03c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd03cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd040:
    // 0x1dd040: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd040u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd044:
    // 0x1dd044: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dd044u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dd048:
    // 0x1dd048: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd04c:
    // 0x1dd04c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1dd04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dd050:
    // 0x1dd050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd054:
    // 0x1dd054: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd058:
    // 0x1dd058: 0xc066c72  jal         func_19B1C8
label_1dd05c:
    if (ctx->pc == 0x1DD05Cu) {
        ctx->pc = 0x1DD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD058u;
        // 0x1dd05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD060u;
        goto label_1dd060;
    }
    ctx->pc = 0x1DD058u;
    SET_GPR_U32(ctx, 31, 0x1DD060u);
    ctx->pc = 0x1DD05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD058u;
    // 0x1dd05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DD058u, 0x1DD060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD060u;
label_1dd060:
    // 0x1dd060: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dd060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dd064:
    // 0x1dd064: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd068:
    // 0x1dd068: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd06c:
    // 0x1dd06c: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd070:
    // 0x1dd070: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dd070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dd074:
    // 0x1dd074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd078:
    // 0x1dd078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd07c:
    // 0x1dd07c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1dd07cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd080:
    // 0x1dd080: 0xc070e2c  jal         func_1C38B0
label_1dd084:
    if (ctx->pc == 0x1DD084u) {
        ctx->pc = 0x1DD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD080u;
        // 0x1dd084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD088u;
        goto label_1dd088;
    }
    ctx->pc = 0x1DD080u;
    SET_GPR_U32(ctx, 31, 0x1DD088u);
    ctx->pc = 0x1DD084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD080u;
    // 0x1dd084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DD088u;
label_1dd088:
    // 0x1dd088: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd08c:
    // 0x1dd08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd090:
    // 0x1dd090: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd094:
    // 0x1dd094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd098:
    // 0x1dd098: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd09c:
    // 0x1dd09c: 0xc066c72  jal         func_19B1C8
label_1dd0a0:
    if (ctx->pc == 0x1DD0A0u) {
        ctx->pc = 0x1DD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD09Cu;
        // 0x1dd0a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0A4u;
        goto label_1dd0a4;
    }
    ctx->pc = 0x1DD09Cu;
    SET_GPR_U32(ctx, 31, 0x1DD0A4u);
    ctx->pc = 0x1DD0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD09Cu;
    // 0x1dd0a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DD09Cu, 0x1DD0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0A4u;
label_1dd0a4:
    // 0x1dd0a4: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dd0a8:
    // 0x1dd0a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dd0ac:
    if (ctx->pc == 0x1DD0ACu) {
        ctx->pc = 0x1DD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0A8u;
        // 0x1dd0ac: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0B0u;
        goto label_1dd0b0;
    }
    ctx->pc = 0x1DD0A8u;
    {
        const bool branch_taken_0x1dd0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0A8u;
        // 0x1dd0ac: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0a8) {
            ctx->pc = 0x1DD0F0u;
            goto label_1dd0f0;
        }
    }
    ctx->pc = 0x1DD0B0u;
label_1dd0b0:
    // 0x1dd0b0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd0b4:
    // 0x1dd0b4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd0b8:
    // 0x1dd0b8: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd0bc:
    // 0x1dd0bc: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dd0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dd0c0:
    // 0x1dd0c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd0c4:
    // 0x1dd0c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd0c8:
    // 0x1dd0c8: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1dd0c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd0cc:
    // 0x1dd0cc: 0xc070e2c  jal         func_1C38B0
label_1dd0d0:
    if (ctx->pc == 0x1DD0D0u) {
        ctx->pc = 0x1DD0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0CCu;
        // 0x1dd0d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0D4u;
        goto label_1dd0d4;
    }
    ctx->pc = 0x1DD0CCu;
    SET_GPR_U32(ctx, 31, 0x1DD0D4u);
    ctx->pc = 0x1DD0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0CCu;
    // 0x1dd0d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DD0D4u;
label_1dd0d4:
    // 0x1dd0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0d8:
    // 0x1dd0d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0dc:
    // 0x1dd0dc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd0e0:
    // 0x1dd0e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0e4:
    // 0x1dd0e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd0e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0e8:
    // 0x1dd0e8: 0xc066c72  jal         func_19B1C8
label_1dd0ec:
    if (ctx->pc == 0x1DD0ECu) {
        ctx->pc = 0x1DD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0E8u;
        // 0x1dd0ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0F0u;
        goto label_1dd0f0;
    }
    ctx->pc = 0x1DD0E8u;
    SET_GPR_U32(ctx, 31, 0x1DD0F0u);
    ctx->pc = 0x1DD0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0E8u;
    // 0x1dd0ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DD0E8u, 0x1DD0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0F0u;
label_1dd0f0:
    // 0x1dd0f0: 0xc07a86c  jal         func_1EA1B0
label_1dd0f4:
    if (ctx->pc == 0x1DD0F4u) {
        ctx->pc = 0x1DD0F8u;
        goto label_1dd0f8;
    }
    ctx->pc = 0x1DD0F0u;
    SET_GPR_U32(ctx, 31, 0x1DD0F8u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DD0F8u;
label_1dd0f8:
    // 0x1dd0f8: 0xc04e120  jal         func_138480
label_1dd0fc:
    if (ctx->pc == 0x1DD0FCu) {
        ctx->pc = 0x1DD100u;
        goto label_1dd100;
    }
    ctx->pc = 0x1DD0F8u;
    SET_GPR_U32(ctx, 31, 0x1DD100u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DD0F8u, 0x1DD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD100u;
label_1dd100:
    // 0x1dd100: 0xc05b578  jal         func_16D5E0
label_1dd104:
    if (ctx->pc == 0x1DD104u) {
        ctx->pc = 0x1DD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD100u;
        // 0x1dd104: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD108u;
        goto label_1dd108;
    }
    ctx->pc = 0x1DD100u;
    SET_GPR_U32(ctx, 31, 0x1DD108u);
    ctx->pc = 0x1DD104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD100u;
    // 0x1dd104: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DD100u, 0x1DD108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD108u;
label_1dd108:
    // 0x1dd108: 0xc060258  jal         func_180960
label_1dd10c:
    if (ctx->pc == 0x1DD10Cu) {
        ctx->pc = 0x1DD110u;
        goto label_1dd110;
    }
    ctx->pc = 0x1DD108u;
    SET_GPR_U32(ctx, 31, 0x1DD110u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DD108u, 0x1DD110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD110u;
label_1dd110:
    // 0x1dd110: 0xc07ab38  jal         func_1EACE0
label_1dd114:
    if (ctx->pc == 0x1DD114u) {
        ctx->pc = 0x1DD118u;
        goto label_1dd118;
    }
    ctx->pc = 0x1DD110u;
    SET_GPR_U32(ctx, 31, 0x1DD118u);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1DD118u;
label_1dd118:
    // 0x1dd118: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dd118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd11c:
    // 0x1dd11c: 0x1443ff52  bne         $v0, $v1, . + 4 + (-0xAE << 2)
label_1dd120:
    if (ctx->pc == 0x1DD120u) {
        ctx->pc = 0x1DD124u;
        goto label_1dd124;
    }
    ctx->pc = 0x1DD11Cu;
    {
        const bool branch_taken_0x1dd11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd11c) {
            ctx->pc = 0x1DCE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dce68;
        }
    }
    ctx->pc = 0x1DD124u;
label_1dd124:
    // 0x1dd124: 0x0  nop
    ctx->pc = 0x1dd124u;
    // NOP
label_1dd128:
    // 0x1dd128: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dd128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dd12c:
    // 0x1dd12c: 0x28410385  slti        $at, $v0, 0x385
    ctx->pc = 0x1dd12cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)901) ? 1 : 0);
label_1dd130:
    // 0x1dd130: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1dd134:
    if (ctx->pc == 0x1DD134u) {
        ctx->pc = 0x1DD138u;
        goto label_1dd138;
    }
    ctx->pc = 0x1DD130u;
    {
        const bool branch_taken_0x1dd130 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd130) {
            ctx->pc = 0x1DD140u;
            goto label_1dd140;
        }
    }
    ctx->pc = 0x1DD138u;
label_1dd138:
    // 0x1dd138: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1dd13c:
    if (ctx->pc == 0x1DD13Cu) {
        ctx->pc = 0x1DD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD138u;
        // 0x1dd13c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD140u;
        goto label_1dd140;
    }
    ctx->pc = 0x1DD138u;
    {
        const bool branch_taken_0x1dd138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD138u;
        // 0x1dd13c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd138) {
            ctx->pc = 0x1DD430u;
            goto label_1dd430;
        }
    }
    ctx->pc = 0x1DD140u;
label_1dd140:
    // 0x1dd140: 0xc07aaa4  jal         func_1EAA90
label_1dd144:
    if (ctx->pc == 0x1DD144u) {
        ctx->pc = 0x1DD148u;
        goto label_1dd148;
    }
    ctx->pc = 0x1DD140u;
    SET_GPR_U32(ctx, 31, 0x1DD148u);
    ctx->pc = 0x1EAA90u;
    { ctx->pc = 0x1eaa90; return; }
    ctx->pc = 0x1DD148u;
label_1dd148:
    // 0x1dd148: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dd148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd14c:
    // 0x1dd14c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1dd150:
    if (ctx->pc == 0x1DD150u) {
        ctx->pc = 0x1DD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD14Cu;
        // 0x1dd150: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD154u;
        goto label_1dd154;
    }
    ctx->pc = 0x1DD14Cu;
    {
        const bool branch_taken_0x1dd14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD14Cu;
        // 0x1dd150: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd14c) {
            ctx->pc = 0x1DD164u;
            goto label_1dd164;
        }
    }
    ctx->pc = 0x1DD154u;
label_1dd154:
    // 0x1dd154: 0xc07aaa0  jal         func_1EAA80
label_1dd158:
    if (ctx->pc == 0x1DD158u) {
        ctx->pc = 0x1DD15Cu;
        goto label_1dd15c;
    }
    ctx->pc = 0x1DD154u;
    SET_GPR_U32(ctx, 31, 0x1DD15Cu);
    ctx->pc = 0x1EAA80u;
    { ctx->pc = 0x1eaa80; return; }
    ctx->pc = 0x1DD15Cu;
label_1dd15c:
    // 0x1dd15c: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_1dd160:
    if (ctx->pc == 0x1DD160u) {
        ctx->pc = 0x1DD164u;
        goto label_1dd164;
    }
    ctx->pc = 0x1DD15Cu;
    {
        const bool branch_taken_0x1dd15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd15c) {
            ctx->pc = 0x1DD430u;
            goto label_1dd430;
        }
    }
    ctx->pc = 0x1DD164u;
label_1dd164:
    // 0x1dd164: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_1dd168:
    if (ctx->pc == 0x1DD168u) {
        ctx->pc = 0x1DD16Cu;
        goto label_1dd16c;
    }
    ctx->pc = 0x1DD164u;
    {
        const bool branch_taken_0x1dd164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd164) {
            ctx->pc = 0x1DD180u;
            goto label_1dd180;
        }
    }
    ctx->pc = 0x1DD16Cu;
label_1dd16c:
    // 0x1dd16c: 0xc07aaa0  jal         func_1EAA80
label_1dd170:
    if (ctx->pc == 0x1DD170u) {
        ctx->pc = 0x1DD174u;
        goto label_1dd174;
    }
    ctx->pc = 0x1DD16Cu;
    SET_GPR_U32(ctx, 31, 0x1DD174u);
    ctx->pc = 0x1EAA80u;
    { ctx->pc = 0x1eaa80; return; }
    ctx->pc = 0x1DD174u;
label_1dd174:
    // 0x1dd174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd178:
    // 0x1dd178: 0x100000ad  b           . + 4 + (0xAD << 2)
label_1dd17c:
    if (ctx->pc == 0x1DD17Cu) {
        ctx->pc = 0x1DD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD178u;
        // 0x1dd17c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD180u;
        goto label_1dd180;
    }
    ctx->pc = 0x1DD178u;
    {
        const bool branch_taken_0x1dd178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD178u;
        // 0x1dd17c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd178) {
            ctx->pc = 0x1DD430u;
            goto label_1dd430;
        }
    }
    ctx->pc = 0x1DD180u;
label_1dd180:
    // 0x1dd180: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dd180u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dd184:
    // 0x1dd184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dd188:
    if (ctx->pc == 0x1DD188u) {
        ctx->pc = 0x1DD18Cu;
        goto label_1dd18c;
    }
    ctx->pc = 0x1DD184u;
    {
        const bool branch_taken_0x1dd184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd184) {
            ctx->pc = 0x1DD194u;
            goto label_1dd194;
        }
    }
    ctx->pc = 0x1DD18Cu;
label_1dd18c:
    // 0x1dd18c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dd190:
    if (ctx->pc == 0x1DD190u) {
        ctx->pc = 0x1DD190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD18Cu;
        // 0x1dd190: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD194u;
        goto label_1dd194;
    }
    ctx->pc = 0x1DD18Cu;
    {
        const bool branch_taken_0x1dd18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD18Cu;
        // 0x1dd190: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd18c) {
            ctx->pc = 0x1DD1A4u;
            goto label_1dd1a4;
        }
    }
    ctx->pc = 0x1DD194u;
label_1dd194:
    // 0x1dd194: 0x0  nop
    ctx->pc = 0x1dd194u;
    // NOP
label_1dd198:
    // 0x1dd198: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dd198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dd19c:
    // 0x1dd19c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd1a0:
    // 0x1dd1a0: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dd1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dd1a4:
    // 0x1dd1a4: 0x0  nop
    ctx->pc = 0x1dd1a4u;
    // NOP
label_1dd1a8:
    // 0x1dd1a8: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dd1ac:
    // 0x1dd1ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dd1b0:
    if (ctx->pc == 0x1DD1B0u) {
        ctx->pc = 0x1DD1B4u;
        goto label_1dd1b4;
    }
    ctx->pc = 0x1DD1ACu;
    {
        const bool branch_taken_0x1dd1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd1ac) {
            ctx->pc = 0x1DD1C0u;
            goto label_1dd1c0;
        }
    }
    ctx->pc = 0x1DD1B4u;
label_1dd1b4:
    // 0x1dd1b4: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dd1b8:
    // 0x1dd1b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd1bc:
    // 0x1dd1bc: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dd1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dd1c0:
    // 0x1dd1c0: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dd1c4:
    // 0x1dd1c4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1dd1c8:
    if (ctx->pc == 0x1DD1C8u) {
        ctx->pc = 0x1DD1CCu;
        goto label_1dd1cc;
    }
    ctx->pc = 0x1DD1C4u;
    {
        const bool branch_taken_0x1dd1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd1c4) {
            ctx->pc = 0x1DD228u;
            goto label_1dd228;
        }
    }
    ctx->pc = 0x1DD1CCu;
label_1dd1cc:
    // 0x1dd1cc: 0x8f828cc0  lw          $v0, -0x7340($gp)
    ctx->pc = 0x1dd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1dd1d0:
    // 0x1dd1d0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dd1d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dd1d4:
    // 0x1dd1d4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1dd1d8:
    if (ctx->pc == 0x1DD1D8u) {
        ctx->pc = 0x1DD1DCu;
        goto label_1dd1dc;
    }
    ctx->pc = 0x1DD1D4u;
    {
        const bool branch_taken_0x1dd1d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd1d4) {
            ctx->pc = 0x1DD1FCu;
            goto label_1dd1fc;
        }
    }
    ctx->pc = 0x1DD1DCu;
label_1dd1dc:
    // 0x1dd1dc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1dd1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1dd1e0:
    // 0x1dd1e0: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x1dd1e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_1dd1e4:
    // 0x1dd1e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1dd1e8:
    if (ctx->pc == 0x1DD1E8u) {
        ctx->pc = 0x1DD1ECu;
        goto label_1dd1ec;
    }
    ctx->pc = 0x1DD1E4u;
    {
        const bool branch_taken_0x1dd1e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd1e4) {
            ctx->pc = 0x1DD1F4u;
            goto label_1dd1f4;
        }
    }
    ctx->pc = 0x1DD1ECu;
label_1dd1ec:
    // 0x1dd1ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dd1f0:
    if (ctx->pc == 0x1DD1F0u) {
        ctx->pc = 0x1DD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1ECu;
        // 0x1dd1f0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD1F4u;
        goto label_1dd1f4;
    }
    ctx->pc = 0x1DD1ECu;
    {
        const bool branch_taken_0x1dd1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1ECu;
        // 0x1dd1f0: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1ec) {
            ctx->pc = 0x1DD1FCu;
            goto label_1dd1fc;
        }
    }
    ctx->pc = 0x1DD1F4u;
label_1dd1f4:
    // 0x1dd1f4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1dd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1dd1f8:
    // 0x1dd1f8: 0xaf828cc0  sw          $v0, -0x7340($gp)
    ctx->pc = 0x1dd1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
label_1dd1fc:
    // 0x1dd1fc: 0x0  nop
    ctx->pc = 0x1dd1fcu;
    // NOP
label_1dd200:
    // 0x1dd200: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dd200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dd204:
    // 0x1dd204: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1dd208:
    if (ctx->pc == 0x1DD208u) {
        ctx->pc = 0x1DD20Cu;
        goto label_1dd20c;
    }
    ctx->pc = 0x1DD204u;
    {
        const bool branch_taken_0x1dd204 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dd204) {
            ctx->pc = 0x1DD228u;
            goto label_1dd228;
        }
    }
    ctx->pc = 0x1DD20Cu;
label_1dd20c:
    // 0x1dd20c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1dd210:
    // 0x1dd210: 0xaf828cb0  sw          $v0, -0x7350($gp)
    ctx->pc = 0x1dd210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
label_1dd214:
    // 0x1dd214: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1dd214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1dd218:
    // 0x1dd218: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dd21c:
    if (ctx->pc == 0x1DD21Cu) {
        ctx->pc = 0x1DD220u;
        goto label_1dd220;
    }
    ctx->pc = 0x1DD218u;
    {
        const bool branch_taken_0x1dd218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd218) {
            ctx->pc = 0x1DD228u;
            goto label_1dd228;
        }
    }
    ctx->pc = 0x1DD220u;
label_1dd220:
    // 0x1dd220: 0x8f828ca8  lw          $v0, -0x7358($gp)
    ctx->pc = 0x1dd220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
label_1dd224:
    // 0x1dd224: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1dd224u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1dd228:
    // 0x1dd228: 0xc077a7c  jal         func_1DE9F0
label_1dd22c:
    if (ctx->pc == 0x1DD22Cu) {
        ctx->pc = 0x1DD230u;
        goto label_1dd230;
    }
    ctx->pc = 0x1DD228u;
    SET_GPR_U32(ctx, 31, 0x1DD230u);
    ctx->pc = 0x1DE9F0u;
    { ctx->pc = 0x1de9f0; return; }
    ctx->pc = 0x1DD230u;
label_1dd230:
    // 0x1dd230: 0x8f848ca0  lw          $a0, -0x7360($gp)
    ctx->pc = 0x1dd230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937760)));
label_1dd234:
    // 0x1dd234: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dd234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dd238:
    // 0x1dd238: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
label_1dd23c:
    if (ctx->pc == 0x1DD23Cu) {
        ctx->pc = 0x1DD240u;
        goto label_1dd240;
    }
    ctx->pc = 0x1DD238u;
    {
        const bool branch_taken_0x1dd238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dd238) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD240u;
label_1dd240:
    // 0x1dd240: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd244:
    // 0x1dd244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd248:
    // 0x1dd248: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_1dd24c:
    if (ctx->pc == 0x1DD24Cu) {
        ctx->pc = 0x1DD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD248u;
        // 0x1dd24c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD250u;
        goto label_1dd250;
    }
    ctx->pc = 0x1DD248u;
    {
        const bool branch_taken_0x1dd248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD248u;
        // 0x1dd24c: 0xaf828c9c  sw          $v0, -0x7364($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd248) {
            ctx->pc = 0x1DD26Cu;
            goto label_1dd26c;
        }
    }
    ctx->pc = 0x1DD250u;
label_1dd250:
    // 0x1dd250: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd254:
    // 0x1dd254: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1dd254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1dd258:
    // 0x1dd258: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1dd25c:
    if (ctx->pc == 0x1DD25Cu) {
        ctx->pc = 0x1DD25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD258u;
        // 0x1dd25c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD260u;
        goto label_1dd260;
    }
    ctx->pc = 0x1DD258u;
    {
        const bool branch_taken_0x1dd258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD258u;
        // 0x1dd25c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd258) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD260u;
label_1dd260:
    // 0x1dd260: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dd260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dd264:
    // 0x1dd264: 0x10000015  b           . + 4 + (0x15 << 2)
label_1dd268:
    if (ctx->pc == 0x1DD268u) {
        ctx->pc = 0x1DD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD264u;
        // 0x1dd268: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD26Cu;
        goto label_1dd26c;
    }
    ctx->pc = 0x1DD264u;
    {
        const bool branch_taken_0x1dd264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD264u;
        // 0x1dd268: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd264) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD26Cu;
label_1dd26c:
    // 0x1dd26c: 0x0  nop
    ctx->pc = 0x1dd26cu;
    // NOP
label_1dd270:
    // 0x1dd270: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dd270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd274:
    // 0x1dd274: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
label_1dd278:
    if (ctx->pc == 0x1DD278u) {
        ctx->pc = 0x1DD27Cu;
        goto label_1dd27c;
    }
    ctx->pc = 0x1DD274u;
    {
        const bool branch_taken_0x1dd274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dd274) {
            ctx->pc = 0x1DD298u;
            goto label_1dd298;
        }
    }
    ctx->pc = 0x1DD27Cu;
label_1dd27c:
    // 0x1dd27c: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd280:
    // 0x1dd280: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1dd280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1dd284:
    // 0x1dd284: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1dd288:
    if (ctx->pc == 0x1DD288u) {
        ctx->pc = 0x1DD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD284u;
        // 0x1dd288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD28Cu;
        goto label_1dd28c;
    }
    ctx->pc = 0x1DD284u;
    {
        const bool branch_taken_0x1dd284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD284u;
        // 0x1dd288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd284) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD28Cu;
label_1dd28c:
    // 0x1dd28c: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dd28cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dd290:
    // 0x1dd290: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dd294:
    if (ctx->pc == 0x1DD294u) {
        ctx->pc = 0x1DD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD290u;
        // 0x1dd294: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD298u;
        goto label_1dd298;
    }
    ctx->pc = 0x1DD290u;
    {
        const bool branch_taken_0x1dd290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD290u;
        // 0x1dd294: 0xaf828ca0  sw          $v0, -0x7360($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd290) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD298u;
label_1dd298:
    // 0x1dd298: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dd298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dd29c:
    // 0x1dd29c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1dd2a0:
    if (ctx->pc == 0x1DD2A0u) {
        ctx->pc = 0x1DD2A4u;
        goto label_1dd2a4;
    }
    ctx->pc = 0x1DD29Cu;
    {
        const bool branch_taken_0x1dd29c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dd29c) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD2A4u;
label_1dd2a4:
    // 0x1dd2a4: 0x8f828c9c  lw          $v0, -0x7364($gp)
    ctx->pc = 0x1dd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937756)));
label_1dd2a8:
    // 0x1dd2a8: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1dd2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1dd2ac:
    // 0x1dd2ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1dd2b0:
    if (ctx->pc == 0x1DD2B0u) {
        ctx->pc = 0x1DD2B4u;
        goto label_1dd2b4;
    }
    ctx->pc = 0x1DD2ACu;
    {
        const bool branch_taken_0x1dd2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd2ac) {
            ctx->pc = 0x1DD2BCu;
            goto label_1dd2bc;
        }
    }
    ctx->pc = 0x1DD2B4u;
label_1dd2b4:
    // 0x1dd2b4: 0xaf838ca0  sw          $v1, -0x7360($gp)
    ctx->pc = 0x1dd2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937760), GPR_U32(ctx, 3));
label_1dd2b8:
    // 0x1dd2b8: 0xaf808c9c  sw          $zero, -0x7364($gp)
    ctx->pc = 0x1dd2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937756), GPR_U32(ctx, 0));
label_1dd2bc:
    // 0x1dd2bc: 0x0  nop
    ctx->pc = 0x1dd2bcu;
    // NOP
label_1dd2c0:
    // 0x1dd2c0: 0xc07a9d8  jal         func_1EA760
label_1dd2c4:
    if (ctx->pc == 0x1DD2C4u) {
        ctx->pc = 0x1DD2C8u;
        goto label_1dd2c8;
    }
    ctx->pc = 0x1DD2C0u;
    SET_GPR_U32(ctx, 31, 0x1DD2C8u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x1DD2C8u;
label_1dd2c8:
    // 0x1dd2c8: 0xc04e168  jal         func_1385A0
label_1dd2cc:
    if (ctx->pc == 0x1DD2CCu) {
        ctx->pc = 0x1DD2D0u;
        goto label_1dd2d0;
    }
    ctx->pc = 0x1DD2C8u;
    SET_GPR_U32(ctx, 31, 0x1DD2D0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1DD2C8u, 0x1DD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD2D0u;
label_1dd2d0:
    // 0x1dd2d0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1dd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1dd2d4:
    // 0x1dd2d4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dd2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dd2d8:
    // 0x1dd2d8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1dd2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1dd2dc:
    // 0x1dd2dc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dd2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dd2e0:
    // 0x1dd2e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dd2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1dd2e4:
    // 0x1dd2e4: 0x27828ce0  addiu       $v0, $gp, -0x7320
    ctx->pc = 0x1dd2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937824));
label_1dd2e8:
    // 0x1dd2e8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1dd2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dd2ec:
    // 0x1dd2ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd2ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd2f0:
    // 0x1dd2f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd2f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd2f4:
    // 0x1dd2f4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dd2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dd2f8:
    // 0x1dd2f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd2fc:
    // 0x1dd2fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1dd2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dd300:
    // 0x1dd300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd304:
    // 0x1dd304: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd308:
    // 0x1dd308: 0xc066c72  jal         func_19B1C8
label_1dd30c:
    if (ctx->pc == 0x1DD30Cu) {
        ctx->pc = 0x1DD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD308u;
        // 0x1dd30c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD310u;
        goto label_1dd310;
    }
    ctx->pc = 0x1DD308u;
    SET_GPR_U32(ctx, 31, 0x1DD310u);
    ctx->pc = 0x1DD30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD308u;
    // 0x1dd30c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DD308u, 0x1DD310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD310u;
label_1dd310:
    // 0x1dd310: 0xc077e84  jal         func_1DFA10
label_1dd314:
    if (ctx->pc == 0x1DD314u) {
        ctx->pc = 0x1DD318u;
        goto label_1dd318;
    }
    ctx->pc = 0x1DD310u;
    SET_GPR_U32(ctx, 31, 0x1DD318u);
    ctx->pc = 0x1DFA10u;
    { ctx->pc = 0x1dfa10; return; }
    ctx->pc = 0x1DD318u;
label_1dd318:
    // 0x1dd318: 0xc077d90  jal         func_1DF640
label_1dd31c:
    if (ctx->pc == 0x1DD31Cu) {
        ctx->pc = 0x1DD320u;
        goto label_1dd320;
    }
    ctx->pc = 0x1DD318u;
    SET_GPR_U32(ctx, 31, 0x1DD320u);
    ctx->pc = 0x1DF640u;
    { ctx->pc = 0x1df640; return; }
    ctx->pc = 0x1DD320u;
label_1dd320:
    // 0x1dd320: 0xc077ab4  jal         func_1DEAD0
label_1dd324:
    if (ctx->pc == 0x1DD324u) {
        ctx->pc = 0x1DD328u;
        goto label_1dd328;
    }
    ctx->pc = 0x1DD320u;
    SET_GPR_U32(ctx, 31, 0x1DD328u);
    ctx->pc = 0x1DEAD0u;
    { ctx->pc = 0x1dead0; return; }
    ctx->pc = 0x1DD328u;
label_1dd328:
    // 0x1dd328: 0xc077880  jal         func_1DE200
label_1dd32c:
    if (ctx->pc == 0x1DD32Cu) {
        ctx->pc = 0x1DD330u;
        goto label_1dd330;
    }
    ctx->pc = 0x1DD328u;
    SET_GPR_U32(ctx, 31, 0x1DD330u);
    ctx->pc = 0x1DE200u;
    { ctx->pc = 0x1de200; return; }
    ctx->pc = 0x1DD330u;
label_1dd330:
    // 0x1dd330: 0x8f828c8c  lw          $v0, -0x7374($gp)
    ctx->pc = 0x1dd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937740)));
label_1dd334:
    // 0x1dd334: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_1dd338:
    if (ctx->pc == 0x1DD338u) {
        ctx->pc = 0x1DD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD334u;
        // 0x1dd338: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD33Cu;
        goto label_1dd33c;
    }
    ctx->pc = 0x1DD334u;
    {
        const bool branch_taken_0x1dd334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD334u;
        // 0x1dd338: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd334) {
            ctx->pc = 0x1DD408u;
            goto label_1dd408;
        }
    }
    ctx->pc = 0x1DD33Cu;
label_1dd33c:
    // 0x1dd33c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1dd33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1dd340:
    // 0x1dd340: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd344:
    // 0x1dd344: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1dd344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1dd348:
    // 0x1dd348: 0x27828c90  addiu       $v0, $gp, -0x7370
    ctx->pc = 0x1dd348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937744));
label_1dd34c:
    // 0x1dd34c: 0x2406027a  addiu       $a2, $zero, 0x27A
    ctx->pc = 0x1dd34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
label_1dd350:
    // 0x1dd350: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd354:
    // 0x1dd354: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd358:
    // 0x1dd358: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd35c:
    // 0x1dd35c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1dd35cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dd360:
    // 0x1dd360: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd364:
    // 0x1dd364: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1dd364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1dd368:
    // 0x1dd368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd36c:
    // 0x1dd36c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dd36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd370:
    // 0x1dd370: 0xc066c72  jal         func_19B1C8
label_1dd374:
    if (ctx->pc == 0x1DD374u) {
        ctx->pc = 0x1DD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD370u;
        // 0x1dd374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD378u;
        goto label_1dd378;
    }
    ctx->pc = 0x1DD370u;
    SET_GPR_U32(ctx, 31, 0x1DD378u);
    ctx->pc = 0x1DD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD370u;
    // 0x1dd374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DD370u, 0x1DD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD378u;
label_1dd378:
    // 0x1dd378: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1dd378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1dd37c:
    // 0x1dd37c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd380:
    // 0x1dd380: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd384:
    // 0x1dd384: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd388:
    // 0x1dd388: 0x8f848c80  lw          $a0, -0x7380($gp)
    ctx->pc = 0x1dd388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_1dd38c:
    // 0x1dd38c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd390:
    // 0x1dd390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd394:
    // 0x1dd394: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1dd394u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dd398:
    // 0x1dd398: 0xc070e2c  jal         func_1C38B0
label_1dd39c:
    if (ctx->pc == 0x1DD39Cu) {
        ctx->pc = 0x1DD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD398u;
        // 0x1dd39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3A0u;
        goto label_1dd3a0;
    }
    ctx->pc = 0x1DD398u;
    SET_GPR_U32(ctx, 31, 0x1DD3A0u);
    ctx->pc = 0x1DD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD398u;
    // 0x1dd39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DD3A0u;
label_1dd3a0:
    // 0x1dd3a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3a4:
    // 0x1dd3a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3a8:
    // 0x1dd3a8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd3ac:
    // 0x1dd3ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3b0:
    // 0x1dd3b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd3b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3b4:
    // 0x1dd3b4: 0xc066c72  jal         func_19B1C8
label_1dd3b8:
    if (ctx->pc == 0x1DD3B8u) {
        ctx->pc = 0x1DD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3B4u;
        // 0x1dd3b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3BCu;
        goto label_1dd3bc;
    }
    ctx->pc = 0x1DD3B4u;
    SET_GPR_U32(ctx, 31, 0x1DD3BCu);
    ctx->pc = 0x1DD3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3B4u;
    // 0x1dd3b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DD3B4u, 0x1DD3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3BCu;
label_1dd3bc:
    // 0x1dd3bc: 0x8f828c88  lw          $v0, -0x7378($gp)
    ctx->pc = 0x1dd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937736)));
label_1dd3c0:
    // 0x1dd3c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1dd3c4:
    if (ctx->pc == 0x1DD3C4u) {
        ctx->pc = 0x1DD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3C0u;
        // 0x1dd3c4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3C8u;
        goto label_1dd3c8;
    }
    ctx->pc = 0x1DD3C0u;
    {
        const bool branch_taken_0x1dd3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3C0u;
        // 0x1dd3c4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3c0) {
            ctx->pc = 0x1DD408u;
            goto label_1dd408;
        }
    }
    ctx->pc = 0x1DD3C8u;
label_1dd3c8:
    // 0x1dd3c8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1dd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1dd3cc:
    // 0x1dd3cc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1dd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1dd3d0:
    // 0x1dd3d0: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x1dd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
label_1dd3d4:
    // 0x1dd3d4: 0x8f848c84  lw          $a0, -0x737C($gp)
    ctx->pc = 0x1dd3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937732)));
label_1dd3d8:
    // 0x1dd3d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1dd3dc:
    // 0x1dd3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dd3e0:
    // 0x1dd3e0: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1dd3e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1dd3e4:
    // 0x1dd3e4: 0xc070e2c  jal         func_1C38B0
label_1dd3e8:
    if (ctx->pc == 0x1DD3E8u) {
        ctx->pc = 0x1DD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3E4u;
        // 0x1dd3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD3ECu;
        goto label_1dd3ec;
    }
    ctx->pc = 0x1DD3E4u;
    SET_GPR_U32(ctx, 31, 0x1DD3ECu);
    ctx->pc = 0x1DD3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3E4u;
    // 0x1dd3e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1DD3ECu;
label_1dd3ec:
    // 0x1dd3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3f0:
    // 0x1dd3f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3f4:
    // 0x1dd3f4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1dd3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1dd3f8:
    // 0x1dd3f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd3fc:
    // 0x1dd3fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd3fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd400:
    // 0x1dd400: 0xc066c72  jal         func_19B1C8
label_1dd404:
    if (ctx->pc == 0x1DD404u) {
        ctx->pc = 0x1DD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD400u;
        // 0x1dd404: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD408u;
        goto label_1dd408;
    }
    ctx->pc = 0x1DD400u;
    SET_GPR_U32(ctx, 31, 0x1DD408u);
    ctx->pc = 0x1DD404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD400u;
    // 0x1dd404: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DD400u, 0x1DD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD408u;
label_1dd408:
    // 0x1dd408: 0xc07a86c  jal         func_1EA1B0
label_1dd40c:
    if (ctx->pc == 0x1DD40Cu) {
        ctx->pc = 0x1DD410u;
        goto label_1dd410;
    }
    ctx->pc = 0x1DD408u;
    SET_GPR_U32(ctx, 31, 0x1DD410u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x1DD410u;
label_1dd410:
    // 0x1dd410: 0xc04e120  jal         func_138480
label_1dd414:
    if (ctx->pc == 0x1DD414u) {
        ctx->pc = 0x1DD418u;
        goto label_1dd418;
    }
    ctx->pc = 0x1DD410u;
    SET_GPR_U32(ctx, 31, 0x1DD418u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1DD410u, 0x1DD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD418u;
label_1dd418:
    // 0x1dd418: 0xc05b578  jal         func_16D5E0
label_1dd41c:
    if (ctx->pc == 0x1DD41Cu) {
        ctx->pc = 0x1DD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD418u;
        // 0x1dd41c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD420u;
        goto label_1dd420;
    }
    ctx->pc = 0x1DD418u;
    SET_GPR_U32(ctx, 31, 0x1DD420u);
    ctx->pc = 0x1DD41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD418u;
    // 0x1dd41c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1DD418u, 0x1DD420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD420u;
label_1dd420:
    // 0x1dd420: 0xc060258  jal         func_180960
label_1dd424:
    if (ctx->pc == 0x1DD424u) {
        ctx->pc = 0x1DD428u;
        goto label_1dd428;
    }
    ctx->pc = 0x1DD420u;
    SET_GPR_U32(ctx, 31, 0x1DD428u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1DD420u, 0x1DD428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD428u;
label_1dd428:
    // 0x1dd428: 0x1000ff3e  b           . + 4 + (-0xC2 << 2)
label_1dd42c:
    if (ctx->pc == 0x1DD42Cu) {
        ctx->pc = 0x1DD430u;
        goto label_1dd430;
    }
    ctx->pc = 0x1DD428u;
    {
        const bool branch_taken_0x1dd428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd428) {
            ctx->pc = 0x1DD124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd124;
        }
    }
    ctx->pc = 0x1DD430u;
label_1dd430:
    // 0x1dd430: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dd430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dd434:
    // 0x1dd434: 0x124200b4  beq         $s2, $v0, . + 4 + (0xB4 << 2)
label_1dd438:
    if (ctx->pc == 0x1DD438u) {
        ctx->pc = 0x1DD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD434u;
        // 0x1dd438: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD43Cu;
        goto label_1dd43c;
    }
    ctx->pc = 0x1DD434u;
    {
        const bool branch_taken_0x1dd434 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD434u;
        // 0x1dd438: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd434) {
            ctx->pc = 0x1DD708u;
            { ctx->pc = 0x1dd708; return; }
        }
    }
    ctx->pc = 0x1DD43Cu;
label_1dd43c:
    // 0x1dd43c: 0xc07ab18  jal         func_1EAC60
label_1dd440:
    if (ctx->pc == 0x1DD440u) {
        ctx->pc = 0x1DD444u;
        goto label_1dd444;
    }
    ctx->pc = 0x1DD43Cu;
    SET_GPR_U32(ctx, 31, 0x1DD444u);
    ctx->pc = 0x1EAC60u;
    { ctx->pc = 0x1eac60; return; }
    ctx->pc = 0x1DD444u;
label_1dd444:
    // 0x1dd444: 0xc07ab38  jal         func_1EACE0
label_1dd448:
    if (ctx->pc == 0x1DD448u) {
        ctx->pc = 0x1DD44Cu;
        goto label_1dd44c;
    }
    ctx->pc = 0x1DD444u;
    SET_GPR_U32(ctx, 31, 0x1DD44Cu);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x1DD44Cu;
label_1dd44c:
    // 0x1dd44c: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_1dd450:
    if (ctx->pc == 0x1DD450u) {
        ctx->pc = 0x1DD454u;
        goto label_1dd454;
    }
    ctx->pc = 0x1DD44Cu;
    {
        const bool branch_taken_0x1dd44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd44c) {
            ctx->pc = 0x1DD708u;
            { ctx->pc = 0x1dd708; return; }
        }
    }
    ctx->pc = 0x1DD454u;
label_1dd454:
    // 0x1dd454: 0xdf8287d0  ld          $v0, -0x7830($gp)
    ctx->pc = 0x1dd454u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
label_1dd458:
    // 0x1dd458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dd45c:
    if (ctx->pc == 0x1DD45Cu) {
        ctx->pc = 0x1DD460u;
        goto label_1dd460;
    }
    ctx->pc = 0x1DD458u;
    {
        const bool branch_taken_0x1dd458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd458) {
            ctx->pc = 0x1DD468u;
            goto label_1dd468;
        }
    }
    ctx->pc = 0x1DD460u;
label_1dd460:
    // 0x1dd460: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dd464:
    if (ctx->pc == 0x1DD464u) {
        ctx->pc = 0x1DD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD460u;
        // 0x1dd464: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD468u;
        goto label_1dd468;
    }
    ctx->pc = 0x1DD460u;
    {
        const bool branch_taken_0x1dd460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD460u;
        // 0x1dd464: 0xaf808cf4  sw          $zero, -0x730C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd460) {
            ctx->pc = 0x1DD474u;
            goto label_1dd474;
        }
    }
    ctx->pc = 0x1DD468u;
label_1dd468:
    // 0x1dd468: 0x8f828cf4  lw          $v0, -0x730C($gp)
    ctx->pc = 0x1dd468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937844)));
label_1dd46c:
    // 0x1dd46c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd470:
    // 0x1dd470: 0xaf828cf4  sw          $v0, -0x730C($gp)
    ctx->pc = 0x1dd470u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937844), GPR_U32(ctx, 2));
label_1dd474:
    // 0x1dd474: 0x0  nop
    ctx->pc = 0x1dd474u;
    // NOP
label_1dd478:
    // 0x1dd478: 0x8f828cd4  lw          $v0, -0x732C($gp)
    ctx->pc = 0x1dd478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937812)));
label_1dd47c:
    // 0x1dd47c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dd480:
    if (ctx->pc == 0x1DD480u) {
        ctx->pc = 0x1DD484u;
        goto label_1dd484;
    }
    ctx->pc = 0x1DD47Cu;
    {
        const bool branch_taken_0x1dd47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd47c) {
            ctx->pc = 0x1DD490u;
            goto label_1dd490;
        }
    }
    ctx->pc = 0x1DD484u;
label_1dd484:
    // 0x1dd484: 0x8f828cd0  lw          $v0, -0x7330($gp)
    ctx->pc = 0x1dd484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
label_1dd488:
    // 0x1dd488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dd48c:
    // 0x1dd48c: 0xaf828cd0  sw          $v0, -0x7330($gp)
    ctx->pc = 0x1dd48cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937808), GPR_U32(ctx, 2));
label_1dd490:
    // 0x1dd490: 0x8f828cc4  lw          $v0, -0x733C($gp)
    ctx->pc = 0x1dd490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1dd494:
    // 0x1dd494: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1dd498u;
    return;
}

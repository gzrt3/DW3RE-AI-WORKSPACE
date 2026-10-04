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


void FUN_0019b910_part69(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1bcc50u: goto label_1bcc50;
        case 0x1bcc54u: goto label_1bcc54;
        case 0x1bcc58u: goto label_1bcc58;
        case 0x1bcc5cu: goto label_1bcc5c;
        case 0x1bcc60u: goto label_1bcc60;
        case 0x1bcc64u: goto label_1bcc64;
        case 0x1bcc68u: goto label_1bcc68;
        case 0x1bcc6cu: goto label_1bcc6c;
        case 0x1bcc70u: goto label_1bcc70;
        case 0x1bcc74u: goto label_1bcc74;
        case 0x1bcc78u: goto label_1bcc78;
        case 0x1bcc7cu: goto label_1bcc7c;
        case 0x1bcc80u: goto label_1bcc80;
        case 0x1bcc84u: goto label_1bcc84;
        case 0x1bcc88u: goto label_1bcc88;
        case 0x1bcc8cu: goto label_1bcc8c;
        case 0x1bcc90u: goto label_1bcc90;
        case 0x1bcc94u: goto label_1bcc94;
        case 0x1bcc98u: goto label_1bcc98;
        case 0x1bcc9cu: goto label_1bcc9c;
        case 0x1bcca0u: goto label_1bcca0;
        case 0x1bcca4u: goto label_1bcca4;
        case 0x1bcca8u: goto label_1bcca8;
        case 0x1bccacu: goto label_1bccac;
        case 0x1bccb0u: goto label_1bccb0;
        case 0x1bccb4u: goto label_1bccb4;
        case 0x1bccb8u: goto label_1bccb8;
        case 0x1bccbcu: goto label_1bccbc;
        case 0x1bccc0u: goto label_1bccc0;
        case 0x1bccc4u: goto label_1bccc4;
        case 0x1bccc8u: goto label_1bccc8;
        case 0x1bccccu: goto label_1bcccc;
        case 0x1bccd0u: goto label_1bccd0;
        case 0x1bccd4u: goto label_1bccd4;
        case 0x1bccd8u: goto label_1bccd8;
        case 0x1bccdcu: goto label_1bccdc;
        case 0x1bcce0u: goto label_1bcce0;
        case 0x1bcce4u: goto label_1bcce4;
        case 0x1bcce8u: goto label_1bcce8;
        case 0x1bccecu: goto label_1bccec;
        case 0x1bccf0u: goto label_1bccf0;
        case 0x1bccf4u: goto label_1bccf4;
        case 0x1bccf8u: goto label_1bccf8;
        case 0x1bccfcu: goto label_1bccfc;
        case 0x1bcd00u: goto label_1bcd00;
        case 0x1bcd04u: goto label_1bcd04;
        case 0x1bcd08u: goto label_1bcd08;
        case 0x1bcd0cu: goto label_1bcd0c;
        case 0x1bcd10u: goto label_1bcd10;
        case 0x1bcd14u: goto label_1bcd14;
        case 0x1bcd18u: goto label_1bcd18;
        case 0x1bcd1cu: goto label_1bcd1c;
        case 0x1bcd20u: goto label_1bcd20;
        case 0x1bcd24u: goto label_1bcd24;
        case 0x1bcd28u: goto label_1bcd28;
        case 0x1bcd2cu: goto label_1bcd2c;
        case 0x1bcd30u: goto label_1bcd30;
        case 0x1bcd34u: goto label_1bcd34;
        case 0x1bcd38u: goto label_1bcd38;
        case 0x1bcd3cu: goto label_1bcd3c;
        case 0x1bcd40u: goto label_1bcd40;
        case 0x1bcd44u: goto label_1bcd44;
        case 0x1bcd48u: goto label_1bcd48;
        case 0x1bcd4cu: goto label_1bcd4c;
        case 0x1bcd50u: goto label_1bcd50;
        case 0x1bcd54u: goto label_1bcd54;
        case 0x1bcd58u: goto label_1bcd58;
        case 0x1bcd5cu: goto label_1bcd5c;
        case 0x1bcd60u: goto label_1bcd60;
        case 0x1bcd64u: goto label_1bcd64;
        case 0x1bcd68u: goto label_1bcd68;
        case 0x1bcd6cu: goto label_1bcd6c;
        case 0x1bcd70u: goto label_1bcd70;
        case 0x1bcd74u: goto label_1bcd74;
        case 0x1bcd78u: goto label_1bcd78;
        case 0x1bcd7cu: goto label_1bcd7c;
        case 0x1bcd80u: goto label_1bcd80;
        case 0x1bcd84u: goto label_1bcd84;
        case 0x1bcd88u: goto label_1bcd88;
        case 0x1bcd8cu: goto label_1bcd8c;
        case 0x1bcd90u: goto label_1bcd90;
        case 0x1bcd94u: goto label_1bcd94;
        case 0x1bcd98u: goto label_1bcd98;
        case 0x1bcd9cu: goto label_1bcd9c;
        case 0x1bcda0u: goto label_1bcda0;
        case 0x1bcda4u: goto label_1bcda4;
        case 0x1bcda8u: goto label_1bcda8;
        case 0x1bcdacu: goto label_1bcdac;
        case 0x1bcdb0u: goto label_1bcdb0;
        case 0x1bcdb4u: goto label_1bcdb4;
        case 0x1bcdb8u: goto label_1bcdb8;
        case 0x1bcdbcu: goto label_1bcdbc;
        case 0x1bcdc0u: goto label_1bcdc0;
        case 0x1bcdc4u: goto label_1bcdc4;
        case 0x1bcdc8u: goto label_1bcdc8;
        case 0x1bcdccu: goto label_1bcdcc;
        case 0x1bcdd0u: goto label_1bcdd0;
        case 0x1bcdd4u: goto label_1bcdd4;
        case 0x1bcdd8u: goto label_1bcdd8;
        case 0x1bcddcu: goto label_1bcddc;
        case 0x1bcde0u: goto label_1bcde0;
        case 0x1bcde4u: goto label_1bcde4;
        case 0x1bcde8u: goto label_1bcde8;
        case 0x1bcdecu: goto label_1bcdec;
        case 0x1bcdf0u: goto label_1bcdf0;
        case 0x1bcdf4u: goto label_1bcdf4;
        case 0x1bcdf8u: goto label_1bcdf8;
        case 0x1bcdfcu: goto label_1bcdfc;
        case 0x1bce00u: goto label_1bce00;
        case 0x1bce04u: goto label_1bce04;
        case 0x1bce08u: goto label_1bce08;
        case 0x1bce0cu: goto label_1bce0c;
        case 0x1bce10u: goto label_1bce10;
        case 0x1bce14u: goto label_1bce14;
        case 0x1bce18u: goto label_1bce18;
        case 0x1bce1cu: goto label_1bce1c;
        case 0x1bce20u: goto label_1bce20;
        case 0x1bce24u: goto label_1bce24;
        case 0x1bce28u: goto label_1bce28;
        case 0x1bce2cu: goto label_1bce2c;
        case 0x1bce30u: goto label_1bce30;
        case 0x1bce34u: goto label_1bce34;
        case 0x1bce38u: goto label_1bce38;
        case 0x1bce3cu: goto label_1bce3c;
        case 0x1bce40u: goto label_1bce40;
        case 0x1bce44u: goto label_1bce44;
        case 0x1bce48u: goto label_1bce48;
        case 0x1bce4cu: goto label_1bce4c;
        case 0x1bce50u: goto label_1bce50;
        case 0x1bce54u: goto label_1bce54;
        case 0x1bce58u: goto label_1bce58;
        case 0x1bce5cu: goto label_1bce5c;
        case 0x1bce60u: goto label_1bce60;
        case 0x1bce64u: goto label_1bce64;
        case 0x1bce68u: goto label_1bce68;
        case 0x1bce6cu: goto label_1bce6c;
        case 0x1bce70u: goto label_1bce70;
        case 0x1bce74u: goto label_1bce74;
        case 0x1bce78u: goto label_1bce78;
        case 0x1bce7cu: goto label_1bce7c;
        case 0x1bce80u: goto label_1bce80;
        case 0x1bce84u: goto label_1bce84;
        case 0x1bce88u: goto label_1bce88;
        case 0x1bce8cu: goto label_1bce8c;
        case 0x1bce90u: goto label_1bce90;
        case 0x1bce94u: goto label_1bce94;
        case 0x1bce98u: goto label_1bce98;
        case 0x1bce9cu: goto label_1bce9c;
        case 0x1bcea0u: goto label_1bcea0;
        case 0x1bcea4u: goto label_1bcea4;
        case 0x1bcea8u: goto label_1bcea8;
        case 0x1bceacu: goto label_1bceac;
        case 0x1bceb0u: goto label_1bceb0;
        case 0x1bceb4u: goto label_1bceb4;
        case 0x1bceb8u: goto label_1bceb8;
        case 0x1bcebcu: goto label_1bcebc;
        case 0x1bcec0u: goto label_1bcec0;
        case 0x1bcec4u: goto label_1bcec4;
        case 0x1bcec8u: goto label_1bcec8;
        case 0x1bceccu: goto label_1bcecc;
        case 0x1bced0u: goto label_1bced0;
        case 0x1bced4u: goto label_1bced4;
        case 0x1bced8u: goto label_1bced8;
        case 0x1bcedcu: goto label_1bcedc;
        case 0x1bcee0u: goto label_1bcee0;
        case 0x1bcee4u: goto label_1bcee4;
        case 0x1bcee8u: goto label_1bcee8;
        case 0x1bceecu: goto label_1bceec;
        case 0x1bcef0u: goto label_1bcef0;
        case 0x1bcef4u: goto label_1bcef4;
        case 0x1bcef8u: goto label_1bcef8;
        case 0x1bcefcu: goto label_1bcefc;
        case 0x1bcf00u: goto label_1bcf00;
        case 0x1bcf04u: goto label_1bcf04;
        case 0x1bcf08u: goto label_1bcf08;
        case 0x1bcf0cu: goto label_1bcf0c;
        case 0x1bcf10u: goto label_1bcf10;
        case 0x1bcf14u: goto label_1bcf14;
        case 0x1bcf18u: goto label_1bcf18;
        case 0x1bcf1cu: goto label_1bcf1c;
        case 0x1bcf20u: goto label_1bcf20;
        case 0x1bcf24u: goto label_1bcf24;
        case 0x1bcf28u: goto label_1bcf28;
        case 0x1bcf2cu: goto label_1bcf2c;
        case 0x1bcf30u: goto label_1bcf30;
        case 0x1bcf34u: goto label_1bcf34;
        case 0x1bcf38u: goto label_1bcf38;
        case 0x1bcf3cu: goto label_1bcf3c;
        case 0x1bcf40u: goto label_1bcf40;
        case 0x1bcf44u: goto label_1bcf44;
        case 0x1bcf48u: goto label_1bcf48;
        case 0x1bcf4cu: goto label_1bcf4c;
        case 0x1bcf50u: goto label_1bcf50;
        case 0x1bcf54u: goto label_1bcf54;
        case 0x1bcf58u: goto label_1bcf58;
        case 0x1bcf5cu: goto label_1bcf5c;
        case 0x1bcf60u: goto label_1bcf60;
        case 0x1bcf64u: goto label_1bcf64;
        case 0x1bcf68u: goto label_1bcf68;
        case 0x1bcf6cu: goto label_1bcf6c;
        case 0x1bcf70u: goto label_1bcf70;
        case 0x1bcf74u: goto label_1bcf74;
        case 0x1bcf78u: goto label_1bcf78;
        case 0x1bcf7cu: goto label_1bcf7c;
        case 0x1bcf80u: goto label_1bcf80;
        case 0x1bcf84u: goto label_1bcf84;
        case 0x1bcf88u: goto label_1bcf88;
        case 0x1bcf8cu: goto label_1bcf8c;
        case 0x1bcf90u: goto label_1bcf90;
        case 0x1bcf94u: goto label_1bcf94;
        case 0x1bcf98u: goto label_1bcf98;
        case 0x1bcf9cu: goto label_1bcf9c;
        case 0x1bcfa0u: goto label_1bcfa0;
        case 0x1bcfa4u: goto label_1bcfa4;
        case 0x1bcfa8u: goto label_1bcfa8;
        case 0x1bcfacu: goto label_1bcfac;
        case 0x1bcfb0u: goto label_1bcfb0;
        case 0x1bcfb4u: goto label_1bcfb4;
        case 0x1bcfb8u: goto label_1bcfb8;
        case 0x1bcfbcu: goto label_1bcfbc;
        case 0x1bcfc0u: goto label_1bcfc0;
        case 0x1bcfc4u: goto label_1bcfc4;
        case 0x1bcfc8u: goto label_1bcfc8;
        case 0x1bcfccu: goto label_1bcfcc;
        case 0x1bcfd0u: goto label_1bcfd0;
        case 0x1bcfd4u: goto label_1bcfd4;
        case 0x1bcfd8u: goto label_1bcfd8;
        case 0x1bcfdcu: goto label_1bcfdc;
        case 0x1bcfe0u: goto label_1bcfe0;
        case 0x1bcfe4u: goto label_1bcfe4;
        case 0x1bcfe8u: goto label_1bcfe8;
        case 0x1bcfecu: goto label_1bcfec;
        case 0x1bcff0u: goto label_1bcff0;
        case 0x1bcff4u: goto label_1bcff4;
        case 0x1bcff8u: goto label_1bcff8;
        case 0x1bcffcu: goto label_1bcffc;
        case 0x1bd000u: goto label_1bd000;
        case 0x1bd004u: goto label_1bd004;
        case 0x1bd008u: goto label_1bd008;
        case 0x1bd00cu: goto label_1bd00c;
        case 0x1bd010u: goto label_1bd010;
        case 0x1bd014u: goto label_1bd014;
        case 0x1bd018u: goto label_1bd018;
        case 0x1bd01cu: goto label_1bd01c;
        case 0x1bd020u: goto label_1bd020;
        case 0x1bd024u: goto label_1bd024;
        case 0x1bd028u: goto label_1bd028;
        case 0x1bd02cu: goto label_1bd02c;
        case 0x1bd030u: goto label_1bd030;
        case 0x1bd034u: goto label_1bd034;
        case 0x1bd038u: goto label_1bd038;
        case 0x1bd03cu: goto label_1bd03c;
        case 0x1bd040u: goto label_1bd040;
        case 0x1bd044u: goto label_1bd044;
        case 0x1bd048u: goto label_1bd048;
        case 0x1bd04cu: goto label_1bd04c;
        case 0x1bd050u: goto label_1bd050;
        case 0x1bd054u: goto label_1bd054;
        case 0x1bd058u: goto label_1bd058;
        case 0x1bd05cu: goto label_1bd05c;
        case 0x1bd060u: goto label_1bd060;
        case 0x1bd064u: goto label_1bd064;
        case 0x1bd068u: goto label_1bd068;
        case 0x1bd06cu: goto label_1bd06c;
        case 0x1bd070u: goto label_1bd070;
        case 0x1bd074u: goto label_1bd074;
        case 0x1bd078u: goto label_1bd078;
        case 0x1bd07cu: goto label_1bd07c;
        case 0x1bd080u: goto label_1bd080;
        case 0x1bd084u: goto label_1bd084;
        case 0x1bd088u: goto label_1bd088;
        case 0x1bd08cu: goto label_1bd08c;
        case 0x1bd090u: goto label_1bd090;
        case 0x1bd094u: goto label_1bd094;
        case 0x1bd098u: goto label_1bd098;
        case 0x1bd09cu: goto label_1bd09c;
        case 0x1bd0a0u: goto label_1bd0a0;
        case 0x1bd0a4u: goto label_1bd0a4;
        case 0x1bd0a8u: goto label_1bd0a8;
        case 0x1bd0acu: goto label_1bd0ac;
        case 0x1bd0b0u: goto label_1bd0b0;
        case 0x1bd0b4u: goto label_1bd0b4;
        case 0x1bd0b8u: goto label_1bd0b8;
        case 0x1bd0bcu: goto label_1bd0bc;
        case 0x1bd0c0u: goto label_1bd0c0;
        case 0x1bd0c4u: goto label_1bd0c4;
        case 0x1bd0c8u: goto label_1bd0c8;
        case 0x1bd0ccu: goto label_1bd0cc;
        case 0x1bd0d0u: goto label_1bd0d0;
        case 0x1bd0d4u: goto label_1bd0d4;
        case 0x1bd0d8u: goto label_1bd0d8;
        case 0x1bd0dcu: goto label_1bd0dc;
        case 0x1bd0e0u: goto label_1bd0e0;
        case 0x1bd0e4u: goto label_1bd0e4;
        case 0x1bd0e8u: goto label_1bd0e8;
        case 0x1bd0ecu: goto label_1bd0ec;
        case 0x1bd0f0u: goto label_1bd0f0;
        case 0x1bd0f4u: goto label_1bd0f4;
        case 0x1bd0f8u: goto label_1bd0f8;
        case 0x1bd0fcu: goto label_1bd0fc;
        case 0x1bd100u: goto label_1bd100;
        case 0x1bd104u: goto label_1bd104;
        case 0x1bd108u: goto label_1bd108;
        case 0x1bd10cu: goto label_1bd10c;
        case 0x1bd110u: goto label_1bd110;
        case 0x1bd114u: goto label_1bd114;
        case 0x1bd118u: goto label_1bd118;
        case 0x1bd11cu: goto label_1bd11c;
        case 0x1bd120u: goto label_1bd120;
        case 0x1bd124u: goto label_1bd124;
        case 0x1bd128u: goto label_1bd128;
        case 0x1bd12cu: goto label_1bd12c;
        case 0x1bd130u: goto label_1bd130;
        case 0x1bd134u: goto label_1bd134;
        case 0x1bd138u: goto label_1bd138;
        case 0x1bd13cu: goto label_1bd13c;
        case 0x1bd140u: goto label_1bd140;
        case 0x1bd144u: goto label_1bd144;
        case 0x1bd148u: goto label_1bd148;
        case 0x1bd14cu: goto label_1bd14c;
        case 0x1bd150u: goto label_1bd150;
        case 0x1bd154u: goto label_1bd154;
        case 0x1bd158u: goto label_1bd158;
        case 0x1bd15cu: goto label_1bd15c;
        case 0x1bd160u: goto label_1bd160;
        case 0x1bd164u: goto label_1bd164;
        case 0x1bd168u: goto label_1bd168;
        case 0x1bd16cu: goto label_1bd16c;
        case 0x1bd170u: goto label_1bd170;
        case 0x1bd174u: goto label_1bd174;
        case 0x1bd178u: goto label_1bd178;
        case 0x1bd17cu: goto label_1bd17c;
        case 0x1bd180u: goto label_1bd180;
        case 0x1bd184u: goto label_1bd184;
        case 0x1bd188u: goto label_1bd188;
        case 0x1bd18cu: goto label_1bd18c;
        case 0x1bd190u: goto label_1bd190;
        case 0x1bd194u: goto label_1bd194;
        case 0x1bd198u: goto label_1bd198;
        case 0x1bd19cu: goto label_1bd19c;
        case 0x1bd1a0u: goto label_1bd1a0;
        case 0x1bd1a4u: goto label_1bd1a4;
        case 0x1bd1a8u: goto label_1bd1a8;
        case 0x1bd1acu: goto label_1bd1ac;
        case 0x1bd1b0u: goto label_1bd1b0;
        case 0x1bd1b4u: goto label_1bd1b4;
        case 0x1bd1b8u: goto label_1bd1b8;
        case 0x1bd1bcu: goto label_1bd1bc;
        case 0x1bd1c0u: goto label_1bd1c0;
        case 0x1bd1c4u: goto label_1bd1c4;
        case 0x1bd1c8u: goto label_1bd1c8;
        case 0x1bd1ccu: goto label_1bd1cc;
        case 0x1bd1d0u: goto label_1bd1d0;
        case 0x1bd1d4u: goto label_1bd1d4;
        case 0x1bd1d8u: goto label_1bd1d8;
        case 0x1bd1dcu: goto label_1bd1dc;
        case 0x1bd1e0u: goto label_1bd1e0;
        case 0x1bd1e4u: goto label_1bd1e4;
        case 0x1bd1e8u: goto label_1bd1e8;
        case 0x1bd1ecu: goto label_1bd1ec;
        case 0x1bd1f0u: goto label_1bd1f0;
        case 0x1bd1f4u: goto label_1bd1f4;
        case 0x1bd1f8u: goto label_1bd1f8;
        case 0x1bd1fcu: goto label_1bd1fc;
        case 0x1bd200u: goto label_1bd200;
        case 0x1bd204u: goto label_1bd204;
        case 0x1bd208u: goto label_1bd208;
        case 0x1bd20cu: goto label_1bd20c;
        case 0x1bd210u: goto label_1bd210;
        case 0x1bd214u: goto label_1bd214;
        case 0x1bd218u: goto label_1bd218;
        case 0x1bd21cu: goto label_1bd21c;
        case 0x1bd220u: goto label_1bd220;
        case 0x1bd224u: goto label_1bd224;
        case 0x1bd228u: goto label_1bd228;
        case 0x1bd22cu: goto label_1bd22c;
        case 0x1bd230u: goto label_1bd230;
        case 0x1bd234u: goto label_1bd234;
        case 0x1bd238u: goto label_1bd238;
        case 0x1bd23cu: goto label_1bd23c;
        case 0x1bd240u: goto label_1bd240;
        case 0x1bd244u: goto label_1bd244;
        case 0x1bd248u: goto label_1bd248;
        case 0x1bd24cu: goto label_1bd24c;
        case 0x1bd250u: goto label_1bd250;
        case 0x1bd254u: goto label_1bd254;
        case 0x1bd258u: goto label_1bd258;
        case 0x1bd25cu: goto label_1bd25c;
        case 0x1bd260u: goto label_1bd260;
        case 0x1bd264u: goto label_1bd264;
        case 0x1bd268u: goto label_1bd268;
        case 0x1bd26cu: goto label_1bd26c;
        case 0x1bd270u: goto label_1bd270;
        case 0x1bd274u: goto label_1bd274;
        case 0x1bd278u: goto label_1bd278;
        case 0x1bd27cu: goto label_1bd27c;
        case 0x1bd280u: goto label_1bd280;
        case 0x1bd284u: goto label_1bd284;
        case 0x1bd288u: goto label_1bd288;
        case 0x1bd28cu: goto label_1bd28c;
        case 0x1bd290u: goto label_1bd290;
        case 0x1bd294u: goto label_1bd294;
        case 0x1bd298u: goto label_1bd298;
        case 0x1bd29cu: goto label_1bd29c;
        case 0x1bd2a0u: goto label_1bd2a0;
        case 0x1bd2a4u: goto label_1bd2a4;
        case 0x1bd2a8u: goto label_1bd2a8;
        case 0x1bd2acu: goto label_1bd2ac;
        case 0x1bd2b0u: goto label_1bd2b0;
        case 0x1bd2b4u: goto label_1bd2b4;
        case 0x1bd2b8u: goto label_1bd2b8;
        case 0x1bd2bcu: goto label_1bd2bc;
        case 0x1bd2c0u: goto label_1bd2c0;
        case 0x1bd2c4u: goto label_1bd2c4;
        case 0x1bd2c8u: goto label_1bd2c8;
        case 0x1bd2ccu: goto label_1bd2cc;
        case 0x1bd2d0u: goto label_1bd2d0;
        case 0x1bd2d4u: goto label_1bd2d4;
        case 0x1bd2d8u: goto label_1bd2d8;
        case 0x1bd2dcu: goto label_1bd2dc;
        case 0x1bd2e0u: goto label_1bd2e0;
        case 0x1bd2e4u: goto label_1bd2e4;
        case 0x1bd2e8u: goto label_1bd2e8;
        case 0x1bd2ecu: goto label_1bd2ec;
        case 0x1bd2f0u: goto label_1bd2f0;
        case 0x1bd2f4u: goto label_1bd2f4;
        case 0x1bd2f8u: goto label_1bd2f8;
        case 0x1bd2fcu: goto label_1bd2fc;
        case 0x1bd300u: goto label_1bd300;
        case 0x1bd304u: goto label_1bd304;
        case 0x1bd308u: goto label_1bd308;
        case 0x1bd30cu: goto label_1bd30c;
        case 0x1bd310u: goto label_1bd310;
        case 0x1bd314u: goto label_1bd314;
        case 0x1bd318u: goto label_1bd318;
        case 0x1bd31cu: goto label_1bd31c;
        case 0x1bd320u: goto label_1bd320;
        case 0x1bd324u: goto label_1bd324;
        case 0x1bd328u: goto label_1bd328;
        case 0x1bd32cu: goto label_1bd32c;
        case 0x1bd330u: goto label_1bd330;
        case 0x1bd334u: goto label_1bd334;
        case 0x1bd338u: goto label_1bd338;
        case 0x1bd33cu: goto label_1bd33c;
        case 0x1bd340u: goto label_1bd340;
        case 0x1bd344u: goto label_1bd344;
        case 0x1bd348u: goto label_1bd348;
        case 0x1bd34cu: goto label_1bd34c;
        case 0x1bd350u: goto label_1bd350;
        case 0x1bd354u: goto label_1bd354;
        case 0x1bd358u: goto label_1bd358;
        case 0x1bd35cu: goto label_1bd35c;
        case 0x1bd360u: goto label_1bd360;
        case 0x1bd364u: goto label_1bd364;
        case 0x1bd368u: goto label_1bd368;
        case 0x1bd36cu: goto label_1bd36c;
        case 0x1bd370u: goto label_1bd370;
        case 0x1bd374u: goto label_1bd374;
        case 0x1bd378u: goto label_1bd378;
        case 0x1bd37cu: goto label_1bd37c;
        case 0x1bd380u: goto label_1bd380;
        case 0x1bd384u: goto label_1bd384;
        case 0x1bd388u: goto label_1bd388;
        case 0x1bd38cu: goto label_1bd38c;
        case 0x1bd390u: goto label_1bd390;
        case 0x1bd394u: goto label_1bd394;
        case 0x1bd398u: goto label_1bd398;
        case 0x1bd39cu: goto label_1bd39c;
        case 0x1bd3a0u: goto label_1bd3a0;
        case 0x1bd3a4u: goto label_1bd3a4;
        case 0x1bd3a8u: goto label_1bd3a8;
        case 0x1bd3acu: goto label_1bd3ac;
        case 0x1bd3b0u: goto label_1bd3b0;
        case 0x1bd3b4u: goto label_1bd3b4;
        case 0x1bd3b8u: goto label_1bd3b8;
        case 0x1bd3bcu: goto label_1bd3bc;
        case 0x1bd3c0u: goto label_1bd3c0;
        case 0x1bd3c4u: goto label_1bd3c4;
        case 0x1bd3c8u: goto label_1bd3c8;
        case 0x1bd3ccu: goto label_1bd3cc;
        case 0x1bd3d0u: goto label_1bd3d0;
        case 0x1bd3d4u: goto label_1bd3d4;
        case 0x1bd3d8u: goto label_1bd3d8;
        case 0x1bd3dcu: goto label_1bd3dc;
        case 0x1bd3e0u: goto label_1bd3e0;
        case 0x1bd3e4u: goto label_1bd3e4;
        case 0x1bd3e8u: goto label_1bd3e8;
        case 0x1bd3ecu: goto label_1bd3ec;
        case 0x1bd3f0u: goto label_1bd3f0;
        case 0x1bd3f4u: goto label_1bd3f4;
        case 0x1bd3f8u: goto label_1bd3f8;
        case 0x1bd3fcu: goto label_1bd3fc;
        case 0x1bd400u: goto label_1bd400;
        case 0x1bd404u: goto label_1bd404;
        case 0x1bd408u: goto label_1bd408;
        case 0x1bd40cu: goto label_1bd40c;
        case 0x1bd410u: goto label_1bd410;
        case 0x1bd414u: goto label_1bd414;
        case 0x1bd418u: goto label_1bd418;
        case 0x1bd41cu: goto label_1bd41c;
        default: return;
    }

label_1bcc50:
    // 0x1bcc50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bcc50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc54:
    // 0x1bcc54: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1bcc54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc58:
    // 0x1bcc58: 0xc06f390  jal         func_1BCE40
label_1bcc5c:
    if (ctx->pc == 0x1BCC5Cu) {
        ctx->pc = 0x1BCC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC58u;
        // 0x1bcc5c: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC60u;
        goto label_1bcc60;
    }
    ctx->pc = 0x1BCC58u;
    SET_GPR_U32(ctx, 31, 0x1BCC60u);
    ctx->pc = 0x1BCC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC58u;
    // 0x1bcc5c: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCE40u;
    goto label_1bce40;
    ctx->pc = 0x1BCC60u;
label_1bcc60:
    // 0x1bcc60: 0xc60c0044  lwc1        $f12, 0x44($s0)
    ctx->pc = 0x1bcc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bcc64:
    // 0x1bcc64: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1bcc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1bcc68:
    // 0x1bcc68: 0xc066ec0  jal         func_19BB00
label_1bcc6c:
    if (ctx->pc == 0x1BCC6Cu) {
        ctx->pc = 0x1BCC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCC68u;
        // 0x1bcc6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCC70u;
        goto label_1bcc70;
    }
    ctx->pc = 0x1BCC68u;
    SET_GPR_U32(ctx, 31, 0x1BCC70u);
    ctx->pc = 0x1BCC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCC68u;
    // 0x1bcc6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1BCC70u;
label_1bcc70:
    // 0x1bcc70: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bcc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcc74:
    // 0x1bcc74: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1bcc74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bcc78:
    // 0x1bcc78: 0x1a200023  blez        $s1, . + 4 + (0x23 << 2)
label_1bcc7c:
    if (ctx->pc == 0x1BCC7Cu) {
        ctx->pc = 0x1BCC80u;
        goto label_1bcc80;
    }
    ctx->pc = 0x1BCC78u;
    {
        const bool branch_taken_0x1bcc78 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1bcc78) {
            ctx->pc = 0x1BCD08u;
            goto label_1bcd08;
        }
    }
    ctx->pc = 0x1BCC80u;
label_1bcc80:
    // 0x1bcc80: 0x8f9384d0  lw          $s3, -0x7B30($gp)
    ctx->pc = 0x1bcc80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
label_1bcc84:
    // 0x1bcc84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bcc84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcc88:
    // 0x1bcc88: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1bcc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bcc8c:
    // 0x1bcc8c: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1bcc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bcc90:
    // 0x1bcc90: 0x92630238  lbu         $v1, 0x238($s3)
    ctx->pc = 0x1bcc90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 568)));
label_1bcc94:
    // 0x1bcc94: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_1bcc98:
    if (ctx->pc == 0x1BCC98u) {
        ctx->pc = 0x1BCC9Cu;
        goto label_1bcc9c;
    }
    ctx->pc = 0x1BCC94u;
    {
        const bool branch_taken_0x1bcc94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1bcc94) {
            ctx->pc = 0x1BCCB0u;
            goto label_1bccb0;
        }
    }
    ctx->pc = 0x1BCC9Cu;
label_1bcc9c:
    // 0x1bcc9c: 0x92630233  lbu         $v1, 0x233($s3)
    ctx->pc = 0x1bcc9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 563)));
label_1bcca0:
    // 0x1bcca0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1bcca4:
    if (ctx->pc == 0x1BCCA4u) {
        ctx->pc = 0x1BCCA8u;
        goto label_1bcca8;
    }
    ctx->pc = 0x1BCCA0u;
    {
        const bool branch_taken_0x1bcca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bcca0) {
            ctx->pc = 0x1BCCB0u;
            goto label_1bccb0;
        }
    }
    ctx->pc = 0x1BCCA8u;
label_1bcca8:
    // 0x1bcca8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bccac:
    if (ctx->pc == 0x1BCCACu) {
        ctx->pc = 0x1BCCB0u;
        goto label_1bccb0;
    }
    ctx->pc = 0x1BCCA8u;
    {
        const bool branch_taken_0x1bcca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcca8) {
            ctx->pc = 0x1BCCC4u;
            goto label_1bccc4;
        }
    }
    ctx->pc = 0x1BCCB0u;
label_1bccb0:
    // 0x1bccb0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bccb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1bccb4:
    // 0x1bccb4: 0x28c30080  slti        $v1, $a2, 0x80
    ctx->pc = 0x1bccb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
label_1bccb8:
    // 0x1bccb8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1bccbc:
    if (ctx->pc == 0x1BCCBCu) {
        ctx->pc = 0x1BCCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCB8u;
        // 0x1bccbc: 0x26730290  addiu       $s3, $s3, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCC0u;
        goto label_1bccc0;
    }
    ctx->pc = 0x1BCCB8u;
    {
        const bool branch_taken_0x1bccb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCB8u;
        // 0x1bccbc: 0x26730290  addiu       $s3, $s3, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bccb8) {
            ctx->pc = 0x1BCC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcc90;
        }
    }
    ctx->pc = 0x1BCCC0u;
label_1bccc0:
    // 0x1bccc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bccc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bccc4:
    // 0x1bccc4: 0x0  nop
    ctx->pc = 0x1bccc4u;
    // NOP
label_1bccc8:
    // 0x1bccc8: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x1bccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1bcccc:
    // 0x1bcccc: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_1bccd0:
    if (ctx->pc == 0x1BCCD0u) {
        ctx->pc = 0x1BCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCCCu;
        // 0x1bccd0: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCD4u;
        goto label_1bccd4;
    }
    ctx->pc = 0x1BCCCCu;
    {
        const bool branch_taken_0x1bcccc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCCCu;
        // 0x1bccd0: 0xac730000  sw          $s3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcccc) {
            ctx->pc = 0x1BCD20u;
            goto label_1bcd20;
        }
    }
    ctx->pc = 0x1BCCD4u;
label_1bccd4:
    // 0x1bccd4: 0x2d1001a  div         $zero, $s6, $s1
    ctx->pc = 0x1bccd4u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1bccd8:
    // 0x1bccd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bccd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bccdc:
    // 0x1bccdc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bccdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bcce0:
    // 0x1bcce0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1bcce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1bcce4:
    // 0x1bcce4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1bcce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcce8:
    // 0x1bcce8: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x1bcce8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1bccec:
    // 0x1bccec: 0x3812  mflo        $a3
    ctx->pc = 0x1bccecu;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_1bccf0:
    // 0x1bccf0: 0xc06f390  jal         func_1BCE40
label_1bccf4:
    if (ctx->pc == 0x1BCCF4u) {
        ctx->pc = 0x1BCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCCF0u;
        // 0x1bccf4: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCCF8u;
        goto label_1bccf8;
    }
    ctx->pc = 0x1BCCF0u;
    SET_GPR_U32(ctx, 31, 0x1BCCF8u);
    ctx->pc = 0x1BCCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCCF0u;
    // 0x1bccf4: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCE40u;
    goto label_1bce40;
    ctx->pc = 0x1BCCF8u;
label_1bccf8:
    // 0x1bccf8: 0x8663021c  lh          $v1, 0x21C($s3)
    ctx->pc = 0x1bccf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 540)));
label_1bccfc:
    // 0x1bccfc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1bccfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1bcd00:
    // 0x1bcd00: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bcd04:
    if (ctx->pc == 0x1BCD04u) {
        ctx->pc = 0x1BCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD00u;
        // 0x1bcd04: 0x2c3b023  subu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD08u;
        goto label_1bcd08;
    }
    ctx->pc = 0x1BCD00u;
    {
        const bool branch_taken_0x1bcd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD00u;
        // 0x1bcd04: 0x2c3b023  subu        $s6, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd00) {
            ctx->pc = 0x1BCD10u;
            goto label_1bcd10;
        }
    }
    ctx->pc = 0x1BCD08u;
label_1bcd08:
    // 0x1bcd08: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x1bcd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_1bcd0c:
    // 0x1bcd0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1bcd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1bcd10:
    // 0x1bcd10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bcd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bcd14:
    // 0x1bcd14: 0x2a030009  slti        $v1, $s0, 0x9
    ctx->pc = 0x1bcd14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_1bcd18:
    // 0x1bcd18: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_1bcd1c:
    if (ctx->pc == 0x1BCD1Cu) {
        ctx->pc = 0x1BCD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD18u;
        // 0x1bcd1c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD20u;
        goto label_1bcd20;
    }
    ctx->pc = 0x1BCD18u;
    {
        const bool branch_taken_0x1bcd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD18u;
        // 0x1bcd1c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd18) {
            ctx->pc = 0x1BCC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcc78;
        }
    }
    ctx->pc = 0x1BCD20u;
label_1bcd20:
    // 0x1bcd20: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bcd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bcd24:
    // 0x1bcd24: 0x90640012  lbu         $a0, 0x12($v1)
    ctx->pc = 0x1bcd24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1bcd28:
    // 0x1bcd28: 0x14800036  bnez        $a0, . + 4 + (0x36 << 2)
label_1bcd2c:
    if (ctx->pc == 0x1BCD2Cu) {
        ctx->pc = 0x1BCD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD28u;
        // 0x1bcd2c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD30u;
        goto label_1bcd30;
    }
    ctx->pc = 0x1BCD28u;
    {
        const bool branch_taken_0x1bcd28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD28u;
        // 0x1bcd2c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd28) {
            ctx->pc = 0x1BCE04u;
            goto label_1bce04;
        }
    }
    ctx->pc = 0x1BCD30u;
label_1bcd30:
    // 0x1bcd30: 0x9024497c  lbu         $a0, 0x497C($at)
    ctx->pc = 0x1bcd30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_1bcd34:
    // 0x1bcd34: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1bcd38:
    if (ctx->pc == 0x1BCD38u) {
        ctx->pc = 0x1BCD3Cu;
        goto label_1bcd3c;
    }
    ctx->pc = 0x1BCD34u;
    {
        const bool branch_taken_0x1bcd34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd34) {
            ctx->pc = 0x1BCD6Cu;
            goto label_1bcd6c;
        }
    }
    ctx->pc = 0x1BCD3Cu;
label_1bcd3c:
    // 0x1bcd3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bcd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bcd40:
    // 0x1bcd40: 0x92840034  lbu         $a0, 0x34($s4)
    ctx->pc = 0x1bcd40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1bcd44:
    // 0x1bcd44: 0x8c254974  lw          $a1, 0x4974($at)
    ctx->pc = 0x1bcd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18804)));
label_1bcd48:
    // 0x1bcd48: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
label_1bcd4c:
    if (ctx->pc == 0x1BCD4Cu) {
        ctx->pc = 0x1BCD50u;
        goto label_1bcd50;
    }
    ctx->pc = 0x1BCD48u;
    {
        const bool branch_taken_0x1bcd48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bcd48) {
            ctx->pc = 0x1BCD6Cu;
            goto label_1bcd6c;
        }
    }
    ctx->pc = 0x1BCD50u;
label_1bcd50:
    // 0x1bcd50: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bcd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bcd54:
    // 0x1bcd54: 0x92840035  lbu         $a0, 0x35($s4)
    ctx->pc = 0x1bcd54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
label_1bcd58:
    // 0x1bcd58: 0x8c25496c  lw          $a1, 0x496C($at)
    ctx->pc = 0x1bcd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_1bcd5c:
    // 0x1bcd5c: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
label_1bcd60:
    if (ctx->pc == 0x1BCD60u) {
        ctx->pc = 0x1BCD64u;
        goto label_1bcd64;
    }
    ctx->pc = 0x1BCD5Cu;
    {
        const bool branch_taken_0x1bcd5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bcd5c) {
            ctx->pc = 0x1BCD6Cu;
            goto label_1bcd6c;
        }
    }
    ctx->pc = 0x1BCD64u;
label_1bcd64:
    // 0x1bcd64: 0x10000011  b           . + 4 + (0x11 << 2)
label_1bcd68:
    if (ctx->pc == 0x1BCD68u) {
        ctx->pc = 0x1BCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD64u;
        // 0x1bcd68: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCD6Cu;
        goto label_1bcd6c;
    }
    ctx->pc = 0x1BCD64u;
    {
        const bool branch_taken_0x1bcd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCD64u;
        // 0x1bcd68: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcd64) {
            ctx->pc = 0x1BCDACu;
            goto label_1bcdac;
        }
    }
    ctx->pc = 0x1BCD6Cu;
label_1bcd6c:
    // 0x1bcd6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bcd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bcd70:
    // 0x1bcd70: 0x90244a0c  lbu         $a0, 0x4A0C($at)
    ctx->pc = 0x1bcd70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1bcd74:
    // 0x1bcd74: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1bcd78:
    if (ctx->pc == 0x1BCD78u) {
        ctx->pc = 0x1BCD7Cu;
        goto label_1bcd7c;
    }
    ctx->pc = 0x1BCD74u;
    {
        const bool branch_taken_0x1bcd74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd74) {
            ctx->pc = 0x1BCDACu;
            goto label_1bcdac;
        }
    }
    ctx->pc = 0x1BCD7Cu;
label_1bcd7c:
    // 0x1bcd7c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bcd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bcd80:
    // 0x1bcd80: 0x92840034  lbu         $a0, 0x34($s4)
    ctx->pc = 0x1bcd80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
label_1bcd84:
    // 0x1bcd84: 0x8c254a04  lw          $a1, 0x4A04($at)
    ctx->pc = 0x1bcd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18948)));
label_1bcd88:
    // 0x1bcd88: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
label_1bcd8c:
    if (ctx->pc == 0x1BCD8Cu) {
        ctx->pc = 0x1BCD90u;
        goto label_1bcd90;
    }
    ctx->pc = 0x1BCD88u;
    {
        const bool branch_taken_0x1bcd88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bcd88) {
            ctx->pc = 0x1BCDACu;
            goto label_1bcdac;
        }
    }
    ctx->pc = 0x1BCD90u;
label_1bcd90:
    // 0x1bcd90: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bcd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bcd94:
    // 0x1bcd94: 0x92840035  lbu         $a0, 0x35($s4)
    ctx->pc = 0x1bcd94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
label_1bcd98:
    // 0x1bcd98: 0x8c2549fc  lw          $a1, 0x49FC($at)
    ctx->pc = 0x1bcd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
label_1bcd9c:
    // 0x1bcd9c: 0x14a40003  bne         $a1, $a0, . + 4 + (0x3 << 2)
label_1bcda0:
    if (ctx->pc == 0x1BCDA0u) {
        ctx->pc = 0x1BCDA4u;
        goto label_1bcda4;
    }
    ctx->pc = 0x1BCD9Cu;
    {
        const bool branch_taken_0x1bcd9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bcd9c) {
            ctx->pc = 0x1BCDACu;
            goto label_1bcdac;
        }
    }
    ctx->pc = 0x1BCDA4u;
label_1bcda4:
    // 0x1bcda4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bcda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcda8:
    // 0x1bcda8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1bcda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_1bcdac:
    // 0x1bcdac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bcdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1bcdb0:
    // 0x1bcdb0: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x1bcdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1bcdb4:
    // 0x1bcdb4: 0x90254af6  lbu         $a1, 0x4AF6($at)
    ctx->pc = 0x1bcdb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1bcdb8:
    // 0x1bcdb8: 0x14a40012  bne         $a1, $a0, . + 4 + (0x12 << 2)
label_1bcdbc:
    if (ctx->pc == 0x1BCDBCu) {
        ctx->pc = 0x1BCDC0u;
        goto label_1bcdc0;
    }
    ctx->pc = 0x1BCDB8u;
    {
        const bool branch_taken_0x1bcdb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bcdb8) {
            ctx->pc = 0x1BCE04u;
            goto label_1bce04;
        }
    }
    ctx->pc = 0x1BCDC0u;
label_1bcdc0:
    // 0x1bcdc0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1bcdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1bcdc4:
    // 0x1bcdc4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1bcdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1bcdc8:
    // 0x1bcdc8: 0x24c64989  addiu       $a2, $a2, 0x4989
    ctx->pc = 0x1bcdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18825));
label_1bcdcc:
    // 0x1bcdcc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1bcdccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bcdd0:
    // 0x1bcdd0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1bcdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1bcdd4:
    // 0x1bcdd4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1bcdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bcdd8:
    // 0x1bcdd8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bcdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bcddc:
    // 0x1bcddc: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1bcddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1bcde0:
    // 0x1bcde0: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x1bcde0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1bcde4:
    // 0x1bcde4: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
label_1bcde8:
    if (ctx->pc == 0x1BCDE8u) {
        ctx->pc = 0x1BCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDE4u;
        // 0x1bcde8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDECu;
        goto label_1bcdec;
    }
    ctx->pc = 0x1BCDE4u;
    {
        const bool branch_taken_0x1bcde4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1BCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDE4u;
        // 0x1bcde8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcde4) {
            ctx->pc = 0x1BCDF8u;
            goto label_1bcdf8;
        }
    }
    ctx->pc = 0x1BCDECu;
label_1bcdec:
    // 0x1bcdec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bcdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bcdf0:
    // 0x1bcdf0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bcdf4:
    if (ctx->pc == 0x1BCDF4u) {
        ctx->pc = 0x1BCDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDF0u;
        // 0x1bcdf4: 0xa0640013  sb          $a0, 0x13($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 19), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCDF8u;
        goto label_1bcdf8;
    }
    ctx->pc = 0x1BCDF0u;
    {
        const bool branch_taken_0x1bcdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCDF0u;
        // 0x1bcdf4: 0xa0640013  sb          $a0, 0x13($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 19), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcdf0) {
            ctx->pc = 0x1BCE04u;
            goto label_1bce04;
        }
    }
    ctx->pc = 0x1BCDF8u;
label_1bcdf8:
    // 0x1bcdf8: 0x14c40002  bne         $a2, $a0, . + 4 + (0x2 << 2)
label_1bcdfc:
    if (ctx->pc == 0x1BCDFCu) {
        ctx->pc = 0x1BCE00u;
        goto label_1bce00;
    }
    ctx->pc = 0x1BCDF8u;
    {
        const bool branch_taken_0x1bcdf8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bcdf8) {
            ctx->pc = 0x1BCE04u;
            goto label_1bce04;
        }
    }
    ctx->pc = 0x1BCE00u;
label_1bce00:
    // 0x1bce00: 0xa0650013  sb          $a1, 0x13($v1)
    ctx->pc = 0x1bce00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 19), (uint8_t)GPR_U32(ctx, 5));
label_1bce04:
    // 0x1bce04: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1bce04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1bce08:
    // 0x1bce08: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1bce08u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1bce0c:
    // 0x1bce0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bce0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bce10:
    // 0x1bce10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bce10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bce14:
    // 0x1bce14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bce14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bce18:
    // 0x1bce18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bce18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bce1c:
    // 0x1bce1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bce1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bce20:
    // 0x1bce20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bce20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bce24:
    // 0x1bce24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bce24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bce28:
    // 0x1bce28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bce28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1bce2c:
    // 0x1bce2c: 0x3e00008  jr          $ra
label_1bce30:
    if (ctx->pc == 0x1BCE30u) {
        ctx->pc = 0x1BCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE2Cu;
        // 0x1bce30: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCE34u;
        goto label_1bce34;
    }
    ctx->pc = 0x1BCE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE2Cu;
        // 0x1bce30: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCE34u;
label_1bce34:
    // 0x1bce34: 0x0  nop
    ctx->pc = 0x1bce34u;
    // NOP
label_1bce38:
    // 0x1bce38: 0x0  nop
    ctx->pc = 0x1bce38u;
    // NOP
label_1bce3c:
    // 0x1bce3c: 0x0  nop
    ctx->pc = 0x1bce3cu;
    // NOP
label_1bce40:
    // 0x1bce40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1bce44:
    // 0x1bce44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bce44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bce48:
    // 0x1bce48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bce48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1bce4c:
    // 0x1bce4c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1bce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1bce50:
    // 0x1bce50: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bce50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1bce54:
    // 0x1bce54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bce54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1bce58:
    // 0x1bce58: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1bce58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bce5c:
    // 0x1bce5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1bce60:
    // 0x1bce60: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1bce60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1bce64:
    // 0x1bce64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bce64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1bce68:
    // 0x1bce68: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bce68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bce6c:
    // 0x1bce6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bce70:
    // 0x1bce70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1bce70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bce74:
    // 0x1bce74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bce74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1bce78:
    // 0x1bce78: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1bce78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1bce7c:
    // 0x1bce7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1bce80:
    // 0x1bce80: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1bce80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1bce84:
    // 0x1bce84: 0xa0a0023a  sb          $zero, 0x23A($a1)
    ctx->pc = 0x1bce84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 570), (uint8_t)GPR_U32(ctx, 0));
label_1bce88:
    // 0x1bce88: 0xa0a3023b  sb          $v1, 0x23B($a1)
    ctx->pc = 0x1bce88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 571), (uint8_t)GPR_U32(ctx, 3));
label_1bce8c:
    // 0x1bce8c: 0xa0a20235  sb          $v0, 0x235($a1)
    ctx->pc = 0x1bce8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 565), (uint8_t)GPR_U32(ctx, 2));
label_1bce90:
    // 0x1bce90: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x1bce90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bce94:
    // 0x1bce94: 0xa0a30236  sb          $v1, 0x236($a1)
    ctx->pc = 0x1bce94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 566), (uint8_t)GPR_U32(ctx, 3));
label_1bce98:
    // 0x1bce98: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x1bce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
label_1bce9c:
    // 0x1bce9c: 0x90870035  lbu         $a3, 0x35($a0)
    ctx->pc = 0x1bce9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
label_1bcea0:
    // 0x1bcea0: 0x34462400  ori         $a2, $v0, 0x2400
    ctx->pc = 0x1bcea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_1bcea4:
    // 0x1bcea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bcea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bcea8:
    // 0x1bcea8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bceac:
    // 0x1bceac: 0xa0a70239  sb          $a3, 0x239($a1)
    ctx->pc = 0x1bceacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 569), (uint8_t)GPR_U32(ctx, 7));
label_1bceb0:
    // 0x1bceb0: 0xa0a0023d  sb          $zero, 0x23D($a1)
    ctx->pc = 0x1bceb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 573), (uint8_t)GPR_U32(ctx, 0));
label_1bceb4:
    // 0x1bceb4: 0xa4a00224  sh          $zero, 0x224($a1)
    ctx->pc = 0x1bceb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 548), (uint16_t)GPR_U32(ctx, 0));
label_1bceb8:
    // 0x1bceb8: 0xaca60260  sw          $a2, 0x260($a1)
    ctx->pc = 0x1bceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 608), GPR_U32(ctx, 6));
label_1bcebc:
    // 0x1bcebc: 0xa0a3023c  sb          $v1, 0x23C($a1)
    ctx->pc = 0x1bcebcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 572), (uint8_t)GPR_U32(ctx, 3));
label_1bcec0:
    // 0x1bcec0: 0xaca00268  sw          $zero, 0x268($a1)
    ctx->pc = 0x1bcec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 616), GPR_U32(ctx, 0));
label_1bcec4:
    // 0x1bcec4: 0xaca00264  sw          $zero, 0x264($a1)
    ctx->pc = 0x1bcec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 0));
label_1bcec8:
    // 0x1bcec8: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x1bcec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_1bcecc:
    // 0x1bcecc: 0xa0a30238  sb          $v1, 0x238($a1)
    ctx->pc = 0x1bceccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 568), (uint8_t)GPR_U32(ctx, 3));
label_1bced0:
    // 0x1bced0: 0xa0a80233  sb          $t0, 0x233($a1)
    ctx->pc = 0x1bced0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 563), (uint8_t)GPR_U32(ctx, 8));
label_1bced4:
    // 0x1bced4: 0x90830034  lbu         $v1, 0x34($a0)
    ctx->pc = 0x1bced4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_1bced8:
    // 0x1bced8: 0xa0a30234  sb          $v1, 0x234($a1)
    ctx->pc = 0x1bced8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 564), (uint8_t)GPR_U32(ctx, 3));
label_1bcedc:
    // 0x1bcedc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bcedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bcee0:
    // 0x1bcee0: 0xa0aa0245  sb          $t2, 0x245($a1)
    ctx->pc = 0x1bcee0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 581), (uint8_t)GPR_U32(ctx, 10));
label_1bcee4:
    // 0x1bcee4: 0xc06ea84  jal         func_1BAA10
label_1bcee8:
    if (ctx->pc == 0x1BCEE8u) {
        ctx->pc = 0x1BCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEE4u;
        // 0x1bcee8: 0xa4a20250  sh          $v0, 0x250($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 592), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCEECu;
        goto label_1bceec;
    }
    ctx->pc = 0x1BCEE4u;
    SET_GPR_U32(ctx, 31, 0x1BCEECu);
    ctx->pc = 0x1BCEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEE4u;
    // 0x1bcee8: 0xa4a20250  sh          $v0, 0x250($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 592), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA10u;
    { ctx->pc = 0x1baa10; return; }
    ctx->pc = 0x1BCEECu;
label_1bceec:
    // 0x1bceec: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bcef0:
    // 0x1bcef0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bcef4:
    // 0x1bcef4: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x1bcef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
label_1bcef8:
    // 0x1bcef8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1bcefc:
    if (ctx->pc == 0x1BCEFCu) {
        ctx->pc = 0x1BCEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEF8u;
        // 0x1bcefc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF00u;
        goto label_1bcf00;
    }
    ctx->pc = 0x1BCEF8u;
    {
        const bool branch_taken_0x1bcef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BCEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEF8u;
        // 0x1bcefc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcef8) {
            ctx->pc = 0x1BCF0Cu;
            goto label_1bcf0c;
        }
    }
    ctx->pc = 0x1BCF00u;
label_1bcf00:
    // 0x1bcf00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bcf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bcf04:
    // 0x1bcf04: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1bcf08:
    if (ctx->pc == 0x1BCF08u) {
        ctx->pc = 0x1BCF0Cu;
        goto label_1bcf0c;
    }
    ctx->pc = 0x1BCF04u;
    {
        const bool branch_taken_0x1bcf04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcf04) {
            ctx->pc = 0x1BCF14u;
            goto label_1bcf14;
        }
    }
    ctx->pc = 0x1BCF0Cu;
label_1bcf0c:
    // 0x1bcf0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bcf10:
    if (ctx->pc == 0x1BCF10u) {
        ctx->pc = 0x1BCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF0Cu;
        // 0x1bcf10: 0x92830036  lbu         $v1, 0x36($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF14u;
        goto label_1bcf14;
    }
    ctx->pc = 0x1BCF0Cu;
    {
        const bool branch_taken_0x1bcf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF0Cu;
        // 0x1bcf10: 0x92830036  lbu         $v1, 0x36($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf0c) {
            ctx->pc = 0x1BCF1Cu;
            goto label_1bcf1c;
        }
    }
    ctx->pc = 0x1BCF14u;
label_1bcf14:
    // 0x1bcf14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bcf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcf18:
    // 0x1bcf18: 0x92830036  lbu         $v1, 0x36($s4)
    ctx->pc = 0x1bcf18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 54)));
label_1bcf1c:
    // 0x1bcf1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bcf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bcf20:
    // 0x1bcf20: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_1bcf24:
    if (ctx->pc == 0x1BCF24u) {
        ctx->pc = 0x1BCF28u;
        goto label_1bcf28;
    }
    ctx->pc = 0x1BCF20u;
    {
        const bool branch_taken_0x1bcf20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bcf20) {
            ctx->pc = 0x1BCF68u;
            goto label_1bcf68;
        }
    }
    ctx->pc = 0x1BCF28u;
label_1bcf28:
    // 0x1bcf28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1bcf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1bcf2c:
    // 0x1bcf2c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1bcf30:
    if (ctx->pc == 0x1BCF30u) {
        ctx->pc = 0x1BCF34u;
        goto label_1bcf34;
    }
    ctx->pc = 0x1BCF2Cu;
    {
        const bool branch_taken_0x1bcf2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bcf2c) {
            ctx->pc = 0x1BCF60u;
            goto label_1bcf60;
        }
    }
    ctx->pc = 0x1BCF34u;
label_1bcf34:
    // 0x1bcf34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcf38:
    // 0x1bcf38: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1bcf3c:
    if (ctx->pc == 0x1BCF3Cu) {
        ctx->pc = 0x1BCF40u;
        goto label_1bcf40;
    }
    ctx->pc = 0x1BCF38u;
    {
        const bool branch_taken_0x1bcf38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bcf38) {
            ctx->pc = 0x1BCF58u;
            goto label_1bcf58;
        }
    }
    ctx->pc = 0x1BCF40u;
label_1bcf40:
    // 0x1bcf40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1bcf44:
    if (ctx->pc == 0x1BCF44u) {
        ctx->pc = 0x1BCF48u;
        goto label_1bcf48;
    }
    ctx->pc = 0x1BCF40u;
    {
        const bool branch_taken_0x1bcf40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf40) {
            ctx->pc = 0x1BCF50u;
            goto label_1bcf50;
        }
    }
    ctx->pc = 0x1BCF48u;
label_1bcf48:
    // 0x1bcf48: 0x10000009  b           . + 4 + (0x9 << 2)
label_1bcf4c:
    if (ctx->pc == 0x1BCF4Cu) {
        ctx->pc = 0x1BCF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF48u;
        // 0x1bcf4c: 0xa672021c  sh          $s2, 0x21C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF50u;
        goto label_1bcf50;
    }
    ctx->pc = 0x1BCF48u;
    {
        const bool branch_taken_0x1bcf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF48u;
        // 0x1bcf4c: 0xa672021c  sh          $s2, 0x21C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf48) {
            ctx->pc = 0x1BCF70u;
            goto label_1bcf70;
        }
    }
    ctx->pc = 0x1BCF50u;
label_1bcf50:
    // 0x1bcf50: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bcf54:
    if (ctx->pc == 0x1BCF54u) {
        ctx->pc = 0x1BCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF50u;
        // 0x1bcf54: 0xa2600237  sb          $zero, 0x237($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 567), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF58u;
        goto label_1bcf58;
    }
    ctx->pc = 0x1BCF50u;
    {
        const bool branch_taken_0x1bcf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF50u;
        // 0x1bcf54: 0xa2600237  sb          $zero, 0x237($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 567), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf50) {
            ctx->pc = 0x1BCF6Cu;
            goto label_1bcf6c;
        }
    }
    ctx->pc = 0x1BCF58u;
label_1bcf58:
    // 0x1bcf58: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bcf5c:
    if (ctx->pc == 0x1BCF5Cu) {
        ctx->pc = 0x1BCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF58u;
        // 0x1bcf5c: 0xa2620237  sb          $v0, 0x237($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 567), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF60u;
        goto label_1bcf60;
    }
    ctx->pc = 0x1BCF58u;
    {
        const bool branch_taken_0x1bcf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF58u;
        // 0x1bcf5c: 0xa2620237  sb          $v0, 0x237($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 567), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf58) {
            ctx->pc = 0x1BCF6Cu;
            goto label_1bcf6c;
        }
    }
    ctx->pc = 0x1BCF60u;
label_1bcf60:
    // 0x1bcf60: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bcf64:
    if (ctx->pc == 0x1BCF64u) {
        ctx->pc = 0x1BCF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF60u;
        // 0x1bcf64: 0xa2620237  sb          $v0, 0x237($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 567), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCF68u;
        goto label_1bcf68;
    }
    ctx->pc = 0x1BCF60u;
    {
        const bool branch_taken_0x1bcf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF60u;
        // 0x1bcf64: 0xa2620237  sb          $v0, 0x237($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 567), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf60) {
            ctx->pc = 0x1BCF6Cu;
            goto label_1bcf6c;
        }
    }
    ctx->pc = 0x1BCF68u;
label_1bcf68:
    // 0x1bcf68: 0xa2620237  sb          $v0, 0x237($s3)
    ctx->pc = 0x1bcf68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 567), (uint8_t)GPR_U32(ctx, 2));
label_1bcf6c:
    // 0x1bcf6c: 0xa672021c  sh          $s2, 0x21C($s3)
    ctx->pc = 0x1bcf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 18));
label_1bcf70:
    // 0x1bcf70: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1bcf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1bcf74:
    // 0x1bcf74: 0xa672021e  sh          $s2, 0x21E($s3)
    ctx->pc = 0x1bcf74u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 542), (uint16_t)GPR_U32(ctx, 18));
label_1bcf78:
    // 0x1bcf78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1bcf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1bcf7c:
    // 0x1bcf7c: 0x9287003a  lbu         $a3, 0x3A($s4)
    ctx->pc = 0x1bcf7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 58)));
label_1bcf80:
    // 0x1bcf80: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1bcf80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1bcf84:
    // 0x1bcf84: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bcf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1bcf88:
    // 0x1bcf88: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1bcf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1bcf8c:
    // 0x1bcf8c: 0x2442f8b0  addiu       $v0, $v0, -0x750
    ctx->pc = 0x1bcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965424));
label_1bcf90:
    // 0x1bcf90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bcf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1bcf94:
    // 0x1bcf94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bcf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bcf98:
    // 0x1bcf98: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1bcf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1bcf9c:
    // 0x1bcf9c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1bcf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1bcfa0:
    // 0x1bcfa0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1bcfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bcfa4:
    // 0x1bcfa4: 0xa267023f  sb          $a3, 0x23F($s3)
    ctx->pc = 0x1bcfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 575), (uint8_t)GPR_U32(ctx, 7));
label_1bcfa8:
    // 0x1bcfa8: 0xa260023e  sb          $zero, 0x23E($s3)
    ctx->pc = 0x1bcfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 574), (uint8_t)GPR_U32(ctx, 0));
label_1bcfac:
    // 0x1bcfac: 0xc066d7a  jal         func_19B5E8
label_1bcfb0:
    if (ctx->pc == 0x1BCFB0u) {
        ctx->pc = 0x1BCFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFACu;
        // 0x1bcfb0: 0xa2600249  sb          $zero, 0x249($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 585), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCFB4u;
        goto label_1bcfb4;
    }
    ctx->pc = 0x1BCFACu;
    SET_GPR_U32(ctx, 31, 0x1BCFB4u);
    ctx->pc = 0x1BCFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCFACu;
    // 0x1bcfb0: 0xa2600249  sb          $zero, 0x249($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 585), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1BCFACu, 0x1BCFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFB4u;
label_1bcfb4:
    // 0x1bcfb4: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1bcfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcfb8:
    // 0x1bcfb8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1bcfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bcfbc:
    // 0x1bcfbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bcfbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bcfc0:
    // 0x1bcfc0: 0xe6600210  swc1        $f0, 0x210($s3)
    ctx->pc = 0x1bcfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 528), bits); }
label_1bcfc4:
    // 0x1bcfc4: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1bcfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bcfc8:
    // 0x1bcfc8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1bcfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bcfcc:
    // 0x1bcfcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bcfccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bcfd0:
    // 0x1bcfd0: 0xe6600214  swc1        $f0, 0x214($s3)
    ctx->pc = 0x1bcfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 532), bits); }
label_1bcfd4:
    // 0x1bcfd4: 0x9282003a  lbu         $v0, 0x3A($s4)
    ctx->pc = 0x1bcfd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 58)));
label_1bcfd8:
    // 0x1bcfd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bcfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bcfdc:
    // 0x1bcfdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1bcfe0:
    if (ctx->pc == 0x1BCFE0u) {
        ctx->pc = 0x1BCFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFDCu;
        // 0x1bcfe0: 0x3c02c7c3  lui         $v0, 0xC7C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCFE4u;
        goto label_1bcfe4;
    }
    ctx->pc = 0x1BCFDCu;
    {
        const bool branch_taken_0x1bcfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFDCu;
        // 0x1bcfe0: 0x3c02c7c3  lui         $v0, 0xC7C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcfdc) {
            ctx->pc = 0x1BCFECu;
            goto label_1bcfec;
        }
    }
    ctx->pc = 0x1BCFE4u;
label_1bcfe4:
    // 0x1bcfe4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bcfe8:
    if (ctx->pc == 0x1BCFE8u) {
        ctx->pc = 0x1BCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFE4u;
        // 0x1bcfe8: 0xae600054  sw          $zero, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCFECu;
        goto label_1bcfec;
    }
    ctx->pc = 0x1BCFE4u;
    {
        const bool branch_taken_0x1bcfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFE4u;
        // 0x1bcfe8: 0xae600054  sw          $zero, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcfe4) {
            ctx->pc = 0x1BCFF4u;
            goto label_1bcff4;
        }
    }
    ctx->pc = 0x1BCFECu;
label_1bcfec:
    // 0x1bcfec: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x1bcfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_1bcff0:
    // 0x1bcff0: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x1bcff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_1bcff4:
    // 0x1bcff4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bcff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1bcff8:
    // 0x1bcff8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bcff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bcffc:
    // 0x1bcffc: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x1bcffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
label_1bd000:
    // 0x1bd000: 0x92830022  lbu         $v1, 0x22($s4)
    ctx->pc = 0x1bd000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
label_1bd004:
    // 0x1bd004: 0xa2630218  sb          $v1, 0x218($s3)
    ctx->pc = 0x1bd004u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 536), (uint8_t)GPR_U32(ctx, 3));
label_1bd008:
    // 0x1bd008: 0x92830023  lbu         $v1, 0x23($s4)
    ctx->pc = 0x1bd008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
label_1bd00c:
    // 0x1bd00c: 0xa2630219  sb          $v1, 0x219($s3)
    ctx->pc = 0x1bd00cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 537), (uint8_t)GPR_U32(ctx, 3));
label_1bd010:
    // 0x1bd010: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1bd010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd014:
    // 0x1bd014: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x1bd014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_1bd018:
    // 0x1bd018: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1bd01c:
    if (ctx->pc == 0x1BD01Cu) {
        ctx->pc = 0x1BD020u;
        goto label_1bd020;
    }
    ctx->pc = 0x1BD018u;
    {
        const bool branch_taken_0x1bd018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd018) {
            ctx->pc = 0x1BD040u;
            goto label_1bd040;
        }
    }
    ctx->pc = 0x1BD020u;
label_1bd020:
    // 0x1bd020: 0x12a00040  beqz        $s5, . + 4 + (0x40 << 2)
label_1bd024:
    if (ctx->pc == 0x1BD024u) {
        ctx->pc = 0x1BD028u;
        goto label_1bd028;
    }
    ctx->pc = 0x1BD020u;
    {
        const bool branch_taken_0x1bd020 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd020) {
            ctx->pc = 0x1BD124u;
            goto label_1bd124;
        }
    }
    ctx->pc = 0x1BD028u;
label_1bd028:
    // 0x1bd028: 0x90820012  lbu         $v0, 0x12($a0)
    ctx->pc = 0x1bd028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_1bd02c:
    // 0x1bd02c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bd030:
    if (ctx->pc == 0x1BD030u) {
        ctx->pc = 0x1BD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD02Cu;
        // 0x1bd030: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD034u;
        goto label_1bd034;
    }
    ctx->pc = 0x1BD02Cu;
    {
        const bool branch_taken_0x1bd02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD02Cu;
        // 0x1bd030: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd02c) {
            ctx->pc = 0x1BD040u;
            goto label_1bd040;
        }
    }
    ctx->pc = 0x1BD034u;
label_1bd034:
    // 0x1bd034: 0x90224af0  lbu         $v0, 0x4AF0($at)
    ctx->pc = 0x1bd034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19184)));
label_1bd038:
    // 0x1bd038: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_1bd03c:
    if (ctx->pc == 0x1BD03Cu) {
        ctx->pc = 0x1BD040u;
        goto label_1bd040;
    }
    ctx->pc = 0x1BD038u;
    {
        const bool branch_taken_0x1bd038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd038) {
            ctx->pc = 0x1BD124u;
            goto label_1bd124;
        }
    }
    ctx->pc = 0x1BD040u;
label_1bd040:
    // 0x1bd040: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x1bd040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_1bd044:
    // 0x1bd044: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1bd048:
    if (ctx->pc == 0x1BD048u) {
        ctx->pc = 0x1BD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD044u;
        // 0x1bd048: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD04Cu;
        goto label_1bd04c;
    }
    ctx->pc = 0x1BD044u;
    {
        const bool branch_taken_0x1bd044 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD044u;
        // 0x1bd048: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd044) {
            ctx->pc = 0x1BD058u;
            goto label_1bd058;
        }
    }
    ctx->pc = 0x1BD04Cu;
label_1bd04c:
    // 0x1bd04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd050:
    // 0x1bd050: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bd054:
    if (ctx->pc == 0x1BD054u) {
        ctx->pc = 0x1BD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD050u;
        // 0x1bd054: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD058u;
        goto label_1bd058;
    }
    ctx->pc = 0x1BD050u;
    {
        const bool branch_taken_0x1bd050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD050u;
        // 0x1bd054: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd050) {
            ctx->pc = 0x1BD070u;
            goto label_1bd070;
        }
    }
    ctx->pc = 0x1BD058u;
label_1bd058:
    // 0x1bd058: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bd058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bd05c:
    // 0x1bd05c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bd05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1bd060:
    // 0x1bd060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd064:
    // 0x1bd064: 0x0  nop
    ctx->pc = 0x1bd064u;
    // NOP
label_1bd068:
    // 0x1bd068: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bd068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1bd06c:
    // 0x1bd06c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bd06cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bd070:
    // 0x1bd070: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x1bd070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_1bd074:
    // 0x1bd074: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bd074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1bd078:
    // 0x1bd078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd07c:
    // 0x1bd07c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1bd080:
    // 0x1bd080: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bd080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bd084:
    // 0x1bd084: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bd084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bd088:
    // 0x1bd088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd08c:
    // 0x1bd08c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1bd08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1bd090:
    // 0x1bd090: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1bd090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bd094:
    // 0x1bd094: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd098:
    // 0x1bd098: 0x0  nop
    ctx->pc = 0x1bd098u;
    // NOP
label_1bd09c:
    // 0x1bd09c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1bd09cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_1bd0a0:
    // 0x1bd0a0: 0x0  nop
    ctx->pc = 0x1bd0a0u;
    // NOP
label_1bd0a4:
    // 0x1bd0a4: 0x0  nop
    ctx->pc = 0x1bd0a4u;
    // NOP
label_1bd0a8:
    // 0x1bd0a8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1bd0a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bd0ac:
    // 0x1bd0ac: 0x0  nop
    ctx->pc = 0x1bd0acu;
    // NOP
label_1bd0b0:
    // 0x1bd0b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1bd0b4:
    if (ctx->pc == 0x1BD0B4u) {
        ctx->pc = 0x1BD0B8u;
        goto label_1bd0b8;
    }
    ctx->pc = 0x1BD0B0u;
    {
        const bool branch_taken_0x1bd0b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd0b0) {
            ctx->pc = 0x1BD0BCu;
            goto label_1bd0bc;
        }
    }
    ctx->pc = 0x1BD0B8u;
label_1bd0b8:
    // 0x1bd0b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bd0b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd0bc:
    // 0x1bd0bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1bd0c0:
    if (ctx->pc == 0x1BD0C0u) {
        ctx->pc = 0x1BD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0BCu;
        // 0x1bd0c0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD0C4u;
        goto label_1bd0c4;
    }
    ctx->pc = 0x1BD0BCu;
    {
        const bool branch_taken_0x1bd0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0BCu;
        // 0x1bd0c0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0bc) {
            ctx->pc = 0x1BD0D8u;
            goto label_1bd0d8;
        }
    }
    ctx->pc = 0x1BD0C4u;
label_1bd0c4:
    // 0x1bd0c4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1bd0c8:
    // 0x1bd0c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1bd0cc:
    // 0x1bd0cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd0d0:
    // 0x1bd0d0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bd0d4:
    if (ctx->pc == 0x1BD0D4u) {
        ctx->pc = 0x1BD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0D0u;
        // 0x1bd0d4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD0D8u;
        goto label_1bd0d8;
    }
    ctx->pc = 0x1BD0D0u;
    {
        const bool branch_taken_0x1bd0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0D0u;
        // 0x1bd0d4: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0d0) {
            ctx->pc = 0x1BD108u;
            goto label_1bd108;
        }
    }
    ctx->pc = 0x1BD0D8u;
label_1bd0d8:
    // 0x1bd0d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1bd0dc:
    // 0x1bd0dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd0e0:
    // 0x1bd0e0: 0x0  nop
    ctx->pc = 0x1bd0e0u;
    // NOP
label_1bd0e4:
    // 0x1bd0e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bd0e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bd0e8:
    // 0x1bd0e8: 0x0  nop
    ctx->pc = 0x1bd0e8u;
    // NOP
label_1bd0ec:
    // 0x1bd0ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1bd0f0:
    if (ctx->pc == 0x1BD0F0u) {
        ctx->pc = 0x1BD0F4u;
        goto label_1bd0f4;
    }
    ctx->pc = 0x1BD0ECu;
    {
        const bool branch_taken_0x1bd0ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bd0ec) {
            ctx->pc = 0x1BD108u;
            goto label_1bd108;
        }
    }
    ctx->pc = 0x1BD0F4u;
label_1bd0f4:
    // 0x1bd0f4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1bd0f8:
    // 0x1bd0f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1bd0fc:
    // 0x1bd0fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bd100:
    // 0x1bd100: 0x10000001  b           . + 4 + (0x1 << 2)
label_1bd104:
    if (ctx->pc == 0x1BD104u) {
        ctx->pc = 0x1BD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD100u;
        // 0x1bd104: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD108u;
        goto label_1bd108;
    }
    ctx->pc = 0x1BD100u;
    {
        const bool branch_taken_0x1bd100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD100u;
        // 0x1bd104: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd100) {
            ctx->pc = 0x1BD108u;
            goto label_1bd108;
        }
    }
    ctx->pc = 0x1BD108u;
label_1bd108:
    // 0x1bd108: 0xe6610044  swc1        $f1, 0x44($s3)
    ctx->pc = 0x1bd108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_1bd10c:
    // 0x1bd10c: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x1bd10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1bd110:
    // 0x1bd110: 0xc6600210  lwc1        $f0, 0x210($s3)
    ctx->pc = 0x1bd110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd114:
    // 0x1bd114: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x1bd114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_1bd118:
    // 0x1bd118: 0xc6600214  lwc1        $f0, 0x214($s3)
    ctx->pc = 0x1bd118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd11c:
    // 0x1bd11c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bd120:
    if (ctx->pc == 0x1BD120u) {
        ctx->pc = 0x1BD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD11Cu;
        // 0x1bd120: 0xe6600058  swc1        $f0, 0x58($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD124u;
        goto label_1bd124;
    }
    ctx->pc = 0x1BD11Cu;
    {
        const bool branch_taken_0x1bd11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD11Cu;
        // 0x1bd120: 0xe6600058  swc1        $f0, 0x58($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd11c) {
            ctx->pc = 0x1BD150u;
            goto label_1bd150;
        }
    }
    ctx->pc = 0x1BD124u;
label_1bd124:
    // 0x1bd124: 0x9286003a  lbu         $a2, 0x3A($s4)
    ctx->pc = 0x1bd124u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 58)));
label_1bd128:
    // 0x1bd128: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bd128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bd12c:
    // 0x1bd12c: 0xc06fcec  jal         func_1BF3B0
label_1bd130:
    if (ctx->pc == 0x1BD130u) {
        ctx->pc = 0x1BD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD12Cu;
        // 0x1bd130: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD134u;
        goto label_1bd134;
    }
    ctx->pc = 0x1BD12Cu;
    SET_GPR_U32(ctx, 31, 0x1BD134u);
    ctx->pc = 0x1BD130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD12Cu;
    // 0x1bd130: 0x26840004  addiu       $a0, $s4, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF3B0u;
    { ctx->pc = 0x1bf3b0; return; }
    ctx->pc = 0x1BD134u;
label_1bd134:
    // 0x1bd134: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x1bd134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd138:
    // 0x1bd138: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x1bd138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
label_1bd13c:
    // 0x1bd13c: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1bd13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_1bd140:
    // 0x1bd140: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1bd140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd144:
    // 0x1bd144: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x1bd144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
label_1bd148:
    // 0x1bd148: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1bd148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd14c:
    // 0x1bd14c: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x1bd14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
label_1bd150:
    // 0x1bd150: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x1bd150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd154:
    // 0x1bd154: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x1bd154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_1bd158:
    // 0x1bd158: 0x34464dd3  ori         $a2, $v0, 0x4DD3
    ctx->pc = 0x1bd158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_1bd15c:
    // 0x1bd15c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bd15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1bd160:
    // 0x1bd160: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1bd160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1bd164:
    // 0x1bd164: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bd164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bd168:
    // 0x1bd168: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1bd168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1bd16c:
    // 0x1bd16c: 0x0  nop
    ctx->pc = 0x1bd16cu;
    // NOP
label_1bd170:
    // 0x1bd170: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x1bd170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd174:
    // 0x1bd174: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1bd174u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd178:
    // 0x1bd178: 0x0  nop
    ctx->pc = 0x1bd178u;
    // NOP
label_1bd17c:
    // 0x1bd17c: 0x2010  mfhi        $a0
    ctx->pc = 0x1bd17cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bd180:
    // 0x1bd180: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x1bd180u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_1bd184:
    // 0x1bd184: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bd184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bd188:
    // 0x1bd188: 0xa264021a  sb          $a0, 0x21A($s3)
    ctx->pc = 0x1bd188u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 538), (uint8_t)GPR_U32(ctx, 4));
label_1bd18c:
    // 0x1bd18c: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x1bd18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd190:
    // 0x1bd190: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bd190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1bd194:
    // 0x1bd194: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1bd194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1bd198:
    // 0x1bd198: 0x0  nop
    ctx->pc = 0x1bd198u;
    // NOP
label_1bd19c:
    // 0x1bd19c: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x1bd19cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd1a0:
    // 0x1bd1a0: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1bd1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd1a4:
    // 0x1bd1a4: 0x0  nop
    ctx->pc = 0x1bd1a4u;
    // NOP
label_1bd1a8:
    // 0x1bd1a8: 0x2010  mfhi        $a0
    ctx->pc = 0x1bd1a8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1bd1ac:
    // 0x1bd1ac: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x1bd1acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_1bd1b0:
    // 0x1bd1b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bd1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bd1b4:
    // 0x1bd1b4: 0xa264021b  sb          $a0, 0x21B($s3)
    ctx->pc = 0x1bd1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 539), (uint8_t)GPR_U32(ctx, 4));
label_1bd1b8:
    // 0x1bd1b8: 0xae630284  sw          $v1, 0x284($s3)
    ctx->pc = 0x1bd1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 644), GPR_U32(ctx, 3));
label_1bd1bc:
    // 0x1bd1bc: 0xfe600270  sd          $zero, 0x270($s3)
    ctx->pc = 0x1bd1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 624), GPR_U64(ctx, 0));
label_1bd1c0:
    // 0x1bd1c0: 0xa6600288  sh          $zero, 0x288($s3)
    ctx->pc = 0x1bd1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 648), (uint16_t)GPR_U32(ctx, 0));
label_1bd1c4:
    // 0x1bd1c4: 0xa662028a  sh          $v0, 0x28A($s3)
    ctx->pc = 0x1bd1c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 650), (uint16_t)GPR_U32(ctx, 2));
label_1bd1c8:
    // 0x1bd1c8: 0xa660028c  sh          $zero, 0x28C($s3)
    ctx->pc = 0x1bd1c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 652), (uint16_t)GPR_U32(ctx, 0));
label_1bd1cc:
    // 0x1bd1cc: 0xa660028e  sh          $zero, 0x28E($s3)
    ctx->pc = 0x1bd1ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 654), (uint16_t)GPR_U32(ctx, 0));
label_1bd1d0:
    // 0x1bd1d0: 0xae60020c  sw          $zero, 0x20C($s3)
    ctx->pc = 0x1bd1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 0));
label_1bd1d4:
    // 0x1bd1d4: 0xa2600282  sb          $zero, 0x282($s3)
    ctx->pc = 0x1bd1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 642), (uint8_t)GPR_U32(ctx, 0));
label_1bd1d8:
    // 0x1bd1d8: 0xae630278  sw          $v1, 0x278($s3)
    ctx->pc = 0x1bd1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 632), GPR_U32(ctx, 3));
label_1bd1dc:
    // 0x1bd1dc: 0xa6600280  sh          $zero, 0x280($s3)
    ctx->pc = 0x1bd1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 640), (uint16_t)GPR_U32(ctx, 0));
label_1bd1e0:
    // 0x1bd1e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd1e4:
    // 0x1bd1e4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x1bd1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_1bd1e8:
    // 0x1bd1e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1bd1ec:
    if (ctx->pc == 0x1BD1ECu) {
        ctx->pc = 0x1BD1F0u;
        goto label_1bd1f0;
    }
    ctx->pc = 0x1BD1E8u;
    {
        const bool branch_taken_0x1bd1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd1e8) {
            ctx->pc = 0x1BD208u;
            goto label_1bd208;
        }
    }
    ctx->pc = 0x1BD1F0u;
label_1bd1f0:
    // 0x1bd1f0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1bd1f4:
    if (ctx->pc == 0x1BD1F4u) {
        ctx->pc = 0x1BD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1F0u;
        // 0x1bd1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD1F8u;
        goto label_1bd1f8;
    }
    ctx->pc = 0x1BD1F0u;
    {
        const bool branch_taken_0x1bd1f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1F0u;
        // 0x1bd1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1f0) {
            ctx->pc = 0x1BD200u;
            goto label_1bd200;
        }
    }
    ctx->pc = 0x1BD1F8u;
label_1bd1f8:
    // 0x1bd1f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1bd1fc:
    if (ctx->pc == 0x1BD1FCu) {
        ctx->pc = 0x1BD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1F8u;
        // 0x1bd1fc: 0xa2600232  sb          $zero, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD200u;
        goto label_1bd200;
    }
    ctx->pc = 0x1BD1F8u;
    {
        const bool branch_taken_0x1bd1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1F8u;
        // 0x1bd1fc: 0xa2600232  sb          $zero, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1f8) {
            ctx->pc = 0x1BD220u;
            goto label_1bd220;
        }
    }
    ctx->pc = 0x1BD200u;
label_1bd200:
    // 0x1bd200: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bd204:
    if (ctx->pc == 0x1BD204u) {
        ctx->pc = 0x1BD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD200u;
        // 0x1bd204: 0xa2620232  sb          $v0, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD208u;
        goto label_1bd208;
    }
    ctx->pc = 0x1BD200u;
    {
        const bool branch_taken_0x1bd200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD200u;
        // 0x1bd204: 0xa2620232  sb          $v0, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd200) {
            ctx->pc = 0x1BD220u;
            goto label_1bd220;
        }
    }
    ctx->pc = 0x1BD208u;
label_1bd208:
    // 0x1bd208: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1bd20c:
    if (ctx->pc == 0x1BD20Cu) {
        ctx->pc = 0x1BD210u;
        goto label_1bd210;
    }
    ctx->pc = 0x1BD208u;
    {
        const bool branch_taken_0x1bd208 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd208) {
            ctx->pc = 0x1BD218u;
            goto label_1bd218;
        }
    }
    ctx->pc = 0x1BD210u;
label_1bd210:
    // 0x1bd210: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bd214:
    if (ctx->pc == 0x1BD214u) {
        ctx->pc = 0x1BD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD210u;
        // 0x1bd214: 0xa2620232  sb          $v0, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD218u;
        goto label_1bd218;
    }
    ctx->pc = 0x1BD210u;
    {
        const bool branch_taken_0x1bd210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD210u;
        // 0x1bd214: 0xa2620232  sb          $v0, 0x232($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd210) {
            ctx->pc = 0x1BD220u;
            goto label_1bd220;
        }
    }
    ctx->pc = 0x1BD218u;
label_1bd218:
    // 0x1bd218: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1bd218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bd21c:
    // 0x1bd21c: 0xa2620232  sb          $v0, 0x232($s3)
    ctx->pc = 0x1bd21cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
label_1bd220:
    // 0x1bd220: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd224:
    // 0x1bd224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bd228:
    // 0x1bd228: 0x90450018  lbu         $a1, 0x18($v0)
    ctx->pc = 0x1bd228u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_1bd22c:
    // 0x1bd22c: 0xc06fe14  jal         func_1BF850
label_1bd230:
    if (ctx->pc == 0x1BD230u) {
        ctx->pc = 0x1BD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD22Cu;
        // 0x1bd230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD234u;
        goto label_1bd234;
    }
    ctx->pc = 0x1BD22Cu;
    SET_GPR_U32(ctx, 31, 0x1BD234u);
    ctx->pc = 0x1BD230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD22Cu;
    // 0x1bd230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF850u;
    { ctx->pc = 0x1bf850; return; }
    ctx->pc = 0x1BD234u;
label_1bd234:
    // 0x1bd234: 0x16200101  bnez        $s1, . + 4 + (0x101 << 2)
label_1bd238:
    if (ctx->pc == 0x1BD238u) {
        ctx->pc = 0x1BD23Cu;
        goto label_1bd23c;
    }
    ctx->pc = 0x1BD234u;
    {
        const bool branch_taken_0x1bd234 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd234) {
            ctx->pc = 0x1BD63Cu;
            { ctx->pc = 0x1bd63c; return; }
        }
    }
    ctx->pc = 0x1BD23Cu;
label_1bd23c:
    // 0x1bd23c: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bd23cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd240:
    // 0x1bd240: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1bd240u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1bd244:
    // 0x1bd244: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bd244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bd248:
    // 0x1bd248: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bd248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1bd24c:
    // 0x1bd24c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd250:
    // 0x1bd250: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bd250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1bd254:
    // 0x1bd254: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1bd254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1bd258:
    // 0x1bd258: 0x24a53b82  addiu       $a1, $a1, 0x3B82
    ctx->pc = 0x1bd258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15234));
label_1bd25c:
    // 0x1bd25c: 0x24843b83  addiu       $a0, $a0, 0x3B83
    ctx->pc = 0x1bd25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15235));
label_1bd260:
    // 0x1bd260: 0x24633b84  addiu       $v1, $v1, 0x3B84
    ctx->pc = 0x1bd260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15236));
label_1bd264:
    // 0x1bd264: 0x24423b85  addiu       $v0, $v0, 0x3B85
    ctx->pc = 0x1bd264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15237));
label_1bd268:
    // 0x1bd268: 0x84e70008  lh          $a3, 0x8($a3)
    ctx->pc = 0x1bd268u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1bd26c:
    // 0x1bd26c: 0xa6670220  sh          $a3, 0x220($s3)
    ctx->pc = 0x1bd26cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 7));
label_1bd270:
    // 0x1bd270: 0xa6670252  sh          $a3, 0x252($s3)
    ctx->pc = 0x1bd270u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 7));
label_1bd274:
    // 0x1bd274: 0xa6670222  sh          $a3, 0x222($s3)
    ctx->pc = 0x1bd274u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 7));
label_1bd278:
    // 0x1bd278: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bd278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd27c:
    // 0x1bd27c: 0x90e70012  lbu         $a3, 0x12($a3)
    ctx->pc = 0x1bd27cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
label_1bd280:
    // 0x1bd280: 0xa2670232  sb          $a3, 0x232($s3)
    ctx->pc = 0x1bd280u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 7));
label_1bd284:
    // 0x1bd284: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bd284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd288:
    // 0x1bd288: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1bd288u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1bd28c:
    // 0x1bd28c: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1bd28cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1bd290:
    // 0x1bd290: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1bd290u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1bd294:
    // 0x1bd294: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1bd294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1bd298:
    // 0x1bd298: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1bd298u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1bd29c:
    // 0x1bd29c: 0xa2660241  sb          $a2, 0x241($s3)
    ctx->pc = 0x1bd29cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 577), (uint8_t)GPR_U32(ctx, 6));
label_1bd2a0:
    // 0x1bd2a0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1bd2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd2a4:
    // 0x1bd2a4: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1bd2a4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1bd2a8:
    // 0x1bd2a8: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1bd2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1bd2ac:
    // 0x1bd2ac: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1bd2acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1bd2b0:
    // 0x1bd2b0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bd2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bd2b4:
    // 0x1bd2b4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bd2b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bd2b8:
    // 0x1bd2b8: 0xa2650242  sb          $a1, 0x242($s3)
    ctx->pc = 0x1bd2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 5));
label_1bd2bc:
    // 0x1bd2bc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1bd2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd2c0:
    // 0x1bd2c0: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x1bd2c0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_1bd2c4:
    // 0x1bd2c4: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1bd2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1bd2c8:
    // 0x1bd2c8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1bd2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1bd2cc:
    // 0x1bd2cc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bd2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bd2d0:
    // 0x1bd2d0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1bd2d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd2d4:
    // 0x1bd2d4: 0xa2640243  sb          $a0, 0x243($s3)
    ctx->pc = 0x1bd2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 4));
label_1bd2d8:
    // 0x1bd2d8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1bd2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd2dc:
    // 0x1bd2dc: 0x9485000a  lhu         $a1, 0xA($a0)
    ctx->pc = 0x1bd2dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_1bd2e0:
    // 0x1bd2e0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1bd2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1bd2e4:
    // 0x1bd2e4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1bd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1bd2e8:
    // 0x1bd2e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd2ec:
    // 0x1bd2ec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bd2ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd2f0:
    // 0x1bd2f0: 0xa2630244  sb          $v1, 0x244($s3)
    ctx->pc = 0x1bd2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 3));
label_1bd2f4:
    // 0x1bd2f4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bd2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd2f8:
    // 0x1bd2f8: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x1bd2f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1bd2fc:
    // 0x1bd2fc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1bd2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1bd300:
    // 0x1bd300: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bd300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd304:
    // 0x1bd304: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1bd308:
    // 0x1bd308: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1bd308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1bd30c:
    // 0x1bd30c: 0xa2620246  sb          $v0, 0x246($s3)
    ctx->pc = 0x1bd30cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 582), (uint8_t)GPR_U32(ctx, 2));
label_1bd310:
    // 0x1bd310: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1bd310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1bd314:
    // 0x1bd314: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1bd318:
    if (ctx->pc == 0x1BD318u) {
        ctx->pc = 0x1BD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD314u;
        // 0x1bd318: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD31Cu;
        goto label_1bd31c;
    }
    ctx->pc = 0x1BD314u;
    {
        const bool branch_taken_0x1bd314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD314u;
        // 0x1bd318: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd314) {
            ctx->pc = 0x1BD348u;
            goto label_1bd348;
        }
    }
    ctx->pc = 0x1BD31Cu;
label_1bd31c:
    // 0x1bd31c: 0xc056a38  jal         func_15A8E0
label_1bd320:
    if (ctx->pc == 0x1BD320u) {
        ctx->pc = 0x1BD324u;
        goto label_1bd324;
    }
    ctx->pc = 0x1BD31Cu;
    SET_GPR_U32(ctx, 31, 0x1BD324u);
    ctx->pc = 0x15A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8E0u, 0x1BD31Cu, 0x1BD324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD324u;
label_1bd324:
    // 0x1bd324: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1bd324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1bd328:
    // 0x1bd328: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1bd32c:
    if (ctx->pc == 0x1BD32Cu) {
        ctx->pc = 0x1BD330u;
        goto label_1bd330;
    }
    ctx->pc = 0x1BD328u;
    {
        const bool branch_taken_0x1bd328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd328) {
            ctx->pc = 0x1BD348u;
            goto label_1bd348;
        }
    }
    ctx->pc = 0x1BD330u;
label_1bd330:
    // 0x1bd330: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bd330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd334:
    // 0x1bd334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd338:
    // 0x1bd338: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x1bd338u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1bd33c:
    // 0x1bd33c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1bd340:
    if (ctx->pc == 0x1BD340u) {
        ctx->pc = 0x1BD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD33Cu;
        // 0x1bd340: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD344u;
        goto label_1bd344;
    }
    ctx->pc = 0x1BD33Cu;
    {
        const bool branch_taken_0x1bd33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD33Cu;
        // 0x1bd340: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd33c) {
            ctx->pc = 0x1BD348u;
            goto label_1bd348;
        }
    }
    ctx->pc = 0x1BD344u;
label_1bd344:
    // 0x1bd344: 0xa2620246  sb          $v0, 0x246($s3)
    ctx->pc = 0x1bd344u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 582), (uint8_t)GPR_U32(ctx, 2));
label_1bd348:
    // 0x1bd348: 0x92840047  lbu         $a0, 0x47($s4)
    ctx->pc = 0x1bd348u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 71)));
label_1bd34c:
    // 0x1bd34c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1bd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
label_1bd350:
    // 0x1bd350: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bd350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1bd354:
    // 0x1bd354: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x1bd354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_1bd358:
    // 0x1bd358: 0x24a53b86  addiu       $a1, $a1, 0x3B86
    ctx->pc = 0x1bd358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15238));
label_1bd35c:
    // 0x1bd35c: 0xa2640240  sb          $a0, 0x240($s3)
    ctx->pc = 0x1bd35cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 576), (uint8_t)GPR_U32(ctx, 4));
label_1bd360:
    // 0x1bd360: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd364:
    // 0x1bd364: 0x90420017  lbu         $v0, 0x17($v0)
    ctx->pc = 0x1bd364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
label_1bd368:
    // 0x1bd368: 0xa2620248  sb          $v0, 0x248($s3)
    ctx->pc = 0x1bd368u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 584), (uint8_t)GPR_U32(ctx, 2));
label_1bd36c:
    // 0x1bd36c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd370:
    // 0x1bd370: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x1bd370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_1bd374:
    // 0x1bd374: 0xa262024a  sb          $v0, 0x24A($s3)
    ctx->pc = 0x1bd374u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 586), (uint8_t)GPR_U32(ctx, 2));
label_1bd378:
    // 0x1bd378: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd37c:
    // 0x1bd37c: 0x9042000f  lbu         $v0, 0xF($v0)
    ctx->pc = 0x1bd37cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
label_1bd380:
    // 0x1bd380: 0xa262024b  sb          $v0, 0x24B($s3)
    ctx->pc = 0x1bd380u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 587), (uint8_t)GPR_U32(ctx, 2));
label_1bd384:
    // 0x1bd384: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bd388:
    // 0x1bd388: 0x9264024a  lbu         $a0, 0x24A($s3)
    ctx->pc = 0x1bd388u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
label_1bd38c:
    // 0x1bd38c: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1bd38cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1bd390:
    // 0x1bd390: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1bd390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1bd394:
    // 0x1bd394: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1bd394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1bd398:
    // 0x1bd398: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1bd398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1bd39c:
    // 0x1bd39c: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bd39cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1bd3a0:
    // 0x1bd3a0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1bd3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bd3a4:
    // 0x1bd3a4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd3a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd3a8:
    // 0x1bd3a8: 0x0  nop
    ctx->pc = 0x1bd3a8u;
    // NOP
label_1bd3ac:
    // 0x1bd3ac: 0x0  nop
    ctx->pc = 0x1bd3acu;
    // NOP
label_1bd3b0:
    // 0x1bd3b0: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd3b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bd3b4:
    // 0x1bd3b4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd3b8:
    // 0x1bd3b8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bd3bc:
    // 0x1bd3bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd3c0:
    // 0x1bd3c0: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd3c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bd3c4:
    // 0x1bd3c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bd3c8:
    if (ctx->pc == 0x1BD3C8u) {
        ctx->pc = 0x1BD3CCu;
        goto label_1bd3cc;
    }
    ctx->pc = 0x1BD3C4u;
    {
        const bool branch_taken_0x1bd3c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd3c4) {
            ctx->pc = 0x1BD3D0u;
            goto label_1bd3d0;
        }
    }
    ctx->pc = 0x1BD3CCu;
label_1bd3cc:
    // 0x1bd3cc: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd3d0:
    // 0x1bd3d0: 0xa263024c  sb          $v1, 0x24C($s3)
    ctx->pc = 0x1bd3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 3));
label_1bd3d4:
    // 0x1bd3d4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1bd3d8:
    // 0x1bd3d8: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bd3d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
label_1bd3dc:
    // 0x1bd3dc: 0x24633b87  addiu       $v1, $v1, 0x3B87
    ctx->pc = 0x1bd3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15239));
label_1bd3e0:
    // 0x1bd3e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bd3e4:
    // 0x1bd3e4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd3e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd3e8:
    // 0x1bd3e8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd3e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1bd3ec:
    // 0x1bd3ec: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1bd3f0:
    // 0x1bd3f0: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1bd3f4:
    // 0x1bd3f4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1bd3f8:
    // 0x1bd3f8: 0x0  nop
    ctx->pc = 0x1bd3f8u;
    // NOP
label_1bd3fc:
    // 0x1bd3fc: 0x0  nop
    ctx->pc = 0x1bd3fcu;
    // NOP
label_1bd400:
    // 0x1bd400: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd400u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1bd404:
    // 0x1bd404: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd404u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1bd408:
    // 0x1bd408: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd408u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1bd40c:
    // 0x1bd40c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1bd410:
    // 0x1bd410: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd410u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
label_1bd414:
    // 0x1bd414: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1bd418:
    if (ctx->pc == 0x1BD418u) {
        ctx->pc = 0x1BD41Cu;
        goto label_1bd41c;
    }
    ctx->pc = 0x1BD414u;
    {
        const bool branch_taken_0x1bd414 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd414) {
            ctx->pc = 0x1BD420u;
            { ctx->pc = 0x1bd420; return; }
        }
    }
    ctx->pc = 0x1BD41Cu;
label_1bd41c:
    // 0x1bd41c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x1bd420u;
    return;
}

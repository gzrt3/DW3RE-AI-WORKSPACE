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


void FUN_0019b5e8_part266(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21cc38u: goto label_21cc38;
        case 0x21cc3cu: goto label_21cc3c;
        case 0x21cc40u: goto label_21cc40;
        case 0x21cc44u: goto label_21cc44;
        case 0x21cc48u: goto label_21cc48;
        case 0x21cc4cu: goto label_21cc4c;
        case 0x21cc50u: goto label_21cc50;
        case 0x21cc54u: goto label_21cc54;
        case 0x21cc58u: goto label_21cc58;
        case 0x21cc5cu: goto label_21cc5c;
        case 0x21cc60u: goto label_21cc60;
        case 0x21cc64u: goto label_21cc64;
        case 0x21cc68u: goto label_21cc68;
        case 0x21cc6cu: goto label_21cc6c;
        case 0x21cc70u: goto label_21cc70;
        case 0x21cc74u: goto label_21cc74;
        case 0x21cc78u: goto label_21cc78;
        case 0x21cc7cu: goto label_21cc7c;
        case 0x21cc80u: goto label_21cc80;
        case 0x21cc84u: goto label_21cc84;
        case 0x21cc88u: goto label_21cc88;
        case 0x21cc8cu: goto label_21cc8c;
        case 0x21cc90u: goto label_21cc90;
        case 0x21cc94u: goto label_21cc94;
        case 0x21cc98u: goto label_21cc98;
        case 0x21cc9cu: goto label_21cc9c;
        case 0x21cca0u: goto label_21cca0;
        case 0x21cca4u: goto label_21cca4;
        case 0x21cca8u: goto label_21cca8;
        case 0x21ccacu: goto label_21ccac;
        case 0x21ccb0u: goto label_21ccb0;
        case 0x21ccb4u: goto label_21ccb4;
        case 0x21ccb8u: goto label_21ccb8;
        case 0x21ccbcu: goto label_21ccbc;
        case 0x21ccc0u: goto label_21ccc0;
        case 0x21ccc4u: goto label_21ccc4;
        case 0x21ccc8u: goto label_21ccc8;
        case 0x21ccccu: goto label_21cccc;
        case 0x21ccd0u: goto label_21ccd0;
        case 0x21ccd4u: goto label_21ccd4;
        case 0x21ccd8u: goto label_21ccd8;
        case 0x21ccdcu: goto label_21ccdc;
        case 0x21cce0u: goto label_21cce0;
        case 0x21cce4u: goto label_21cce4;
        case 0x21cce8u: goto label_21cce8;
        case 0x21ccecu: goto label_21ccec;
        case 0x21ccf0u: goto label_21ccf0;
        case 0x21ccf4u: goto label_21ccf4;
        case 0x21ccf8u: goto label_21ccf8;
        case 0x21ccfcu: goto label_21ccfc;
        case 0x21cd00u: goto label_21cd00;
        case 0x21cd04u: goto label_21cd04;
        case 0x21cd08u: goto label_21cd08;
        case 0x21cd0cu: goto label_21cd0c;
        case 0x21cd10u: goto label_21cd10;
        case 0x21cd14u: goto label_21cd14;
        case 0x21cd18u: goto label_21cd18;
        case 0x21cd1cu: goto label_21cd1c;
        case 0x21cd20u: goto label_21cd20;
        case 0x21cd24u: goto label_21cd24;
        case 0x21cd28u: goto label_21cd28;
        case 0x21cd2cu: goto label_21cd2c;
        case 0x21cd30u: goto label_21cd30;
        case 0x21cd34u: goto label_21cd34;
        case 0x21cd38u: goto label_21cd38;
        case 0x21cd3cu: goto label_21cd3c;
        case 0x21cd40u: goto label_21cd40;
        case 0x21cd44u: goto label_21cd44;
        case 0x21cd48u: goto label_21cd48;
        case 0x21cd4cu: goto label_21cd4c;
        case 0x21cd50u: goto label_21cd50;
        case 0x21cd54u: goto label_21cd54;
        case 0x21cd58u: goto label_21cd58;
        case 0x21cd5cu: goto label_21cd5c;
        case 0x21cd60u: goto label_21cd60;
        case 0x21cd64u: goto label_21cd64;
        case 0x21cd68u: goto label_21cd68;
        case 0x21cd6cu: goto label_21cd6c;
        case 0x21cd70u: goto label_21cd70;
        case 0x21cd74u: goto label_21cd74;
        case 0x21cd78u: goto label_21cd78;
        case 0x21cd7cu: goto label_21cd7c;
        case 0x21cd80u: goto label_21cd80;
        case 0x21cd84u: goto label_21cd84;
        case 0x21cd88u: goto label_21cd88;
        case 0x21cd8cu: goto label_21cd8c;
        case 0x21cd90u: goto label_21cd90;
        case 0x21cd94u: goto label_21cd94;
        case 0x21cd98u: goto label_21cd98;
        case 0x21cd9cu: goto label_21cd9c;
        case 0x21cda0u: goto label_21cda0;
        case 0x21cda4u: goto label_21cda4;
        case 0x21cda8u: goto label_21cda8;
        case 0x21cdacu: goto label_21cdac;
        case 0x21cdb0u: goto label_21cdb0;
        case 0x21cdb4u: goto label_21cdb4;
        case 0x21cdb8u: goto label_21cdb8;
        case 0x21cdbcu: goto label_21cdbc;
        case 0x21cdc0u: goto label_21cdc0;
        case 0x21cdc4u: goto label_21cdc4;
        case 0x21cdc8u: goto label_21cdc8;
        case 0x21cdccu: goto label_21cdcc;
        case 0x21cdd0u: goto label_21cdd0;
        case 0x21cdd4u: goto label_21cdd4;
        case 0x21cdd8u: goto label_21cdd8;
        case 0x21cddcu: goto label_21cddc;
        case 0x21cde0u: goto label_21cde0;
        case 0x21cde4u: goto label_21cde4;
        case 0x21cde8u: goto label_21cde8;
        case 0x21cdecu: goto label_21cdec;
        case 0x21cdf0u: goto label_21cdf0;
        case 0x21cdf4u: goto label_21cdf4;
        case 0x21cdf8u: goto label_21cdf8;
        case 0x21cdfcu: goto label_21cdfc;
        case 0x21ce00u: goto label_21ce00;
        case 0x21ce04u: goto label_21ce04;
        case 0x21ce08u: goto label_21ce08;
        case 0x21ce0cu: goto label_21ce0c;
        case 0x21ce10u: goto label_21ce10;
        case 0x21ce14u: goto label_21ce14;
        case 0x21ce18u: goto label_21ce18;
        case 0x21ce1cu: goto label_21ce1c;
        case 0x21ce20u: goto label_21ce20;
        case 0x21ce24u: goto label_21ce24;
        case 0x21ce28u: goto label_21ce28;
        case 0x21ce2cu: goto label_21ce2c;
        case 0x21ce30u: goto label_21ce30;
        case 0x21ce34u: goto label_21ce34;
        case 0x21ce38u: goto label_21ce38;
        case 0x21ce3cu: goto label_21ce3c;
        case 0x21ce40u: goto label_21ce40;
        case 0x21ce44u: goto label_21ce44;
        case 0x21ce48u: goto label_21ce48;
        case 0x21ce4cu: goto label_21ce4c;
        case 0x21ce50u: goto label_21ce50;
        case 0x21ce54u: goto label_21ce54;
        case 0x21ce58u: goto label_21ce58;
        case 0x21ce5cu: goto label_21ce5c;
        case 0x21ce60u: goto label_21ce60;
        case 0x21ce64u: goto label_21ce64;
        case 0x21ce68u: goto label_21ce68;
        case 0x21ce6cu: goto label_21ce6c;
        case 0x21ce70u: goto label_21ce70;
        case 0x21ce74u: goto label_21ce74;
        case 0x21ce78u: goto label_21ce78;
        case 0x21ce7cu: goto label_21ce7c;
        case 0x21ce80u: goto label_21ce80;
        case 0x21ce84u: goto label_21ce84;
        case 0x21ce88u: goto label_21ce88;
        case 0x21ce8cu: goto label_21ce8c;
        case 0x21ce90u: goto label_21ce90;
        case 0x21ce94u: goto label_21ce94;
        case 0x21ce98u: goto label_21ce98;
        case 0x21ce9cu: goto label_21ce9c;
        case 0x21cea0u: goto label_21cea0;
        case 0x21cea4u: goto label_21cea4;
        case 0x21cea8u: goto label_21cea8;
        case 0x21ceacu: goto label_21ceac;
        case 0x21ceb0u: goto label_21ceb0;
        case 0x21ceb4u: goto label_21ceb4;
        case 0x21ceb8u: goto label_21ceb8;
        case 0x21cebcu: goto label_21cebc;
        case 0x21cec0u: goto label_21cec0;
        case 0x21cec4u: goto label_21cec4;
        case 0x21cec8u: goto label_21cec8;
        case 0x21ceccu: goto label_21cecc;
        case 0x21ced0u: goto label_21ced0;
        case 0x21ced4u: goto label_21ced4;
        case 0x21ced8u: goto label_21ced8;
        case 0x21cedcu: goto label_21cedc;
        case 0x21cee0u: goto label_21cee0;
        case 0x21cee4u: goto label_21cee4;
        case 0x21cee8u: goto label_21cee8;
        case 0x21ceecu: goto label_21ceec;
        case 0x21cef0u: goto label_21cef0;
        case 0x21cef4u: goto label_21cef4;
        case 0x21cef8u: goto label_21cef8;
        case 0x21cefcu: goto label_21cefc;
        case 0x21cf00u: goto label_21cf00;
        case 0x21cf04u: goto label_21cf04;
        case 0x21cf08u: goto label_21cf08;
        case 0x21cf0cu: goto label_21cf0c;
        case 0x21cf10u: goto label_21cf10;
        case 0x21cf14u: goto label_21cf14;
        case 0x21cf18u: goto label_21cf18;
        case 0x21cf1cu: goto label_21cf1c;
        case 0x21cf20u: goto label_21cf20;
        case 0x21cf24u: goto label_21cf24;
        case 0x21cf28u: goto label_21cf28;
        case 0x21cf2cu: goto label_21cf2c;
        case 0x21cf30u: goto label_21cf30;
        case 0x21cf34u: goto label_21cf34;
        case 0x21cf38u: goto label_21cf38;
        case 0x21cf3cu: goto label_21cf3c;
        case 0x21cf40u: goto label_21cf40;
        case 0x21cf44u: goto label_21cf44;
        case 0x21cf48u: goto label_21cf48;
        case 0x21cf4cu: goto label_21cf4c;
        case 0x21cf50u: goto label_21cf50;
        case 0x21cf54u: goto label_21cf54;
        case 0x21cf58u: goto label_21cf58;
        case 0x21cf5cu: goto label_21cf5c;
        case 0x21cf60u: goto label_21cf60;
        case 0x21cf64u: goto label_21cf64;
        case 0x21cf68u: goto label_21cf68;
        case 0x21cf6cu: goto label_21cf6c;
        case 0x21cf70u: goto label_21cf70;
        case 0x21cf74u: goto label_21cf74;
        case 0x21cf78u: goto label_21cf78;
        case 0x21cf7cu: goto label_21cf7c;
        case 0x21cf80u: goto label_21cf80;
        case 0x21cf84u: goto label_21cf84;
        case 0x21cf88u: goto label_21cf88;
        case 0x21cf8cu: goto label_21cf8c;
        case 0x21cf90u: goto label_21cf90;
        case 0x21cf94u: goto label_21cf94;
        case 0x21cf98u: goto label_21cf98;
        case 0x21cf9cu: goto label_21cf9c;
        case 0x21cfa0u: goto label_21cfa0;
        case 0x21cfa4u: goto label_21cfa4;
        case 0x21cfa8u: goto label_21cfa8;
        case 0x21cfacu: goto label_21cfac;
        case 0x21cfb0u: goto label_21cfb0;
        case 0x21cfb4u: goto label_21cfb4;
        case 0x21cfb8u: goto label_21cfb8;
        case 0x21cfbcu: goto label_21cfbc;
        case 0x21cfc0u: goto label_21cfc0;
        case 0x21cfc4u: goto label_21cfc4;
        case 0x21cfc8u: goto label_21cfc8;
        case 0x21cfccu: goto label_21cfcc;
        case 0x21cfd0u: goto label_21cfd0;
        case 0x21cfd4u: goto label_21cfd4;
        case 0x21cfd8u: goto label_21cfd8;
        case 0x21cfdcu: goto label_21cfdc;
        case 0x21cfe0u: goto label_21cfe0;
        case 0x21cfe4u: goto label_21cfe4;
        case 0x21cfe8u: goto label_21cfe8;
        case 0x21cfecu: goto label_21cfec;
        case 0x21cff0u: goto label_21cff0;
        case 0x21cff4u: goto label_21cff4;
        case 0x21cff8u: goto label_21cff8;
        case 0x21cffcu: goto label_21cffc;
        case 0x21d000u: goto label_21d000;
        case 0x21d004u: goto label_21d004;
        case 0x21d008u: goto label_21d008;
        case 0x21d00cu: goto label_21d00c;
        case 0x21d010u: goto label_21d010;
        case 0x21d014u: goto label_21d014;
        case 0x21d018u: goto label_21d018;
        case 0x21d01cu: goto label_21d01c;
        case 0x21d020u: goto label_21d020;
        case 0x21d024u: goto label_21d024;
        case 0x21d028u: goto label_21d028;
        case 0x21d02cu: goto label_21d02c;
        case 0x21d030u: goto label_21d030;
        case 0x21d034u: goto label_21d034;
        case 0x21d038u: goto label_21d038;
        case 0x21d03cu: goto label_21d03c;
        case 0x21d040u: goto label_21d040;
        case 0x21d044u: goto label_21d044;
        case 0x21d048u: goto label_21d048;
        case 0x21d04cu: goto label_21d04c;
        case 0x21d050u: goto label_21d050;
        case 0x21d054u: goto label_21d054;
        case 0x21d058u: goto label_21d058;
        case 0x21d05cu: goto label_21d05c;
        case 0x21d060u: goto label_21d060;
        case 0x21d064u: goto label_21d064;
        case 0x21d068u: goto label_21d068;
        case 0x21d06cu: goto label_21d06c;
        case 0x21d070u: goto label_21d070;
        case 0x21d074u: goto label_21d074;
        case 0x21d078u: goto label_21d078;
        case 0x21d07cu: goto label_21d07c;
        case 0x21d080u: goto label_21d080;
        case 0x21d084u: goto label_21d084;
        case 0x21d088u: goto label_21d088;
        case 0x21d08cu: goto label_21d08c;
        case 0x21d090u: goto label_21d090;
        case 0x21d094u: goto label_21d094;
        case 0x21d098u: goto label_21d098;
        case 0x21d09cu: goto label_21d09c;
        case 0x21d0a0u: goto label_21d0a0;
        case 0x21d0a4u: goto label_21d0a4;
        case 0x21d0a8u: goto label_21d0a8;
        case 0x21d0acu: goto label_21d0ac;
        case 0x21d0b0u: goto label_21d0b0;
        case 0x21d0b4u: goto label_21d0b4;
        case 0x21d0b8u: goto label_21d0b8;
        case 0x21d0bcu: goto label_21d0bc;
        case 0x21d0c0u: goto label_21d0c0;
        case 0x21d0c4u: goto label_21d0c4;
        case 0x21d0c8u: goto label_21d0c8;
        case 0x21d0ccu: goto label_21d0cc;
        case 0x21d0d0u: goto label_21d0d0;
        case 0x21d0d4u: goto label_21d0d4;
        case 0x21d0d8u: goto label_21d0d8;
        case 0x21d0dcu: goto label_21d0dc;
        case 0x21d0e0u: goto label_21d0e0;
        case 0x21d0e4u: goto label_21d0e4;
        case 0x21d0e8u: goto label_21d0e8;
        case 0x21d0ecu: goto label_21d0ec;
        case 0x21d0f0u: goto label_21d0f0;
        case 0x21d0f4u: goto label_21d0f4;
        case 0x21d0f8u: goto label_21d0f8;
        case 0x21d0fcu: goto label_21d0fc;
        case 0x21d100u: goto label_21d100;
        case 0x21d104u: goto label_21d104;
        case 0x21d108u: goto label_21d108;
        case 0x21d10cu: goto label_21d10c;
        case 0x21d110u: goto label_21d110;
        case 0x21d114u: goto label_21d114;
        case 0x21d118u: goto label_21d118;
        case 0x21d11cu: goto label_21d11c;
        case 0x21d120u: goto label_21d120;
        case 0x21d124u: goto label_21d124;
        case 0x21d128u: goto label_21d128;
        case 0x21d12cu: goto label_21d12c;
        case 0x21d130u: goto label_21d130;
        case 0x21d134u: goto label_21d134;
        case 0x21d138u: goto label_21d138;
        case 0x21d13cu: goto label_21d13c;
        case 0x21d140u: goto label_21d140;
        case 0x21d144u: goto label_21d144;
        case 0x21d148u: goto label_21d148;
        case 0x21d14cu: goto label_21d14c;
        case 0x21d150u: goto label_21d150;
        case 0x21d154u: goto label_21d154;
        case 0x21d158u: goto label_21d158;
        case 0x21d15cu: goto label_21d15c;
        case 0x21d160u: goto label_21d160;
        case 0x21d164u: goto label_21d164;
        case 0x21d168u: goto label_21d168;
        case 0x21d16cu: goto label_21d16c;
        case 0x21d170u: goto label_21d170;
        case 0x21d174u: goto label_21d174;
        case 0x21d178u: goto label_21d178;
        case 0x21d17cu: goto label_21d17c;
        case 0x21d180u: goto label_21d180;
        case 0x21d184u: goto label_21d184;
        case 0x21d188u: goto label_21d188;
        case 0x21d18cu: goto label_21d18c;
        case 0x21d190u: goto label_21d190;
        case 0x21d194u: goto label_21d194;
        case 0x21d198u: goto label_21d198;
        case 0x21d19cu: goto label_21d19c;
        case 0x21d1a0u: goto label_21d1a0;
        case 0x21d1a4u: goto label_21d1a4;
        case 0x21d1a8u: goto label_21d1a8;
        case 0x21d1acu: goto label_21d1ac;
        case 0x21d1b0u: goto label_21d1b0;
        case 0x21d1b4u: goto label_21d1b4;
        case 0x21d1b8u: goto label_21d1b8;
        case 0x21d1bcu: goto label_21d1bc;
        case 0x21d1c0u: goto label_21d1c0;
        case 0x21d1c4u: goto label_21d1c4;
        case 0x21d1c8u: goto label_21d1c8;
        case 0x21d1ccu: goto label_21d1cc;
        case 0x21d1d0u: goto label_21d1d0;
        case 0x21d1d4u: goto label_21d1d4;
        case 0x21d1d8u: goto label_21d1d8;
        case 0x21d1dcu: goto label_21d1dc;
        case 0x21d1e0u: goto label_21d1e0;
        case 0x21d1e4u: goto label_21d1e4;
        case 0x21d1e8u: goto label_21d1e8;
        case 0x21d1ecu: goto label_21d1ec;
        case 0x21d1f0u: goto label_21d1f0;
        case 0x21d1f4u: goto label_21d1f4;
        case 0x21d1f8u: goto label_21d1f8;
        case 0x21d1fcu: goto label_21d1fc;
        case 0x21d200u: goto label_21d200;
        case 0x21d204u: goto label_21d204;
        case 0x21d208u: goto label_21d208;
        case 0x21d20cu: goto label_21d20c;
        case 0x21d210u: goto label_21d210;
        case 0x21d214u: goto label_21d214;
        case 0x21d218u: goto label_21d218;
        case 0x21d21cu: goto label_21d21c;
        case 0x21d220u: goto label_21d220;
        case 0x21d224u: goto label_21d224;
        case 0x21d228u: goto label_21d228;
        case 0x21d22cu: goto label_21d22c;
        case 0x21d230u: goto label_21d230;
        case 0x21d234u: goto label_21d234;
        case 0x21d238u: goto label_21d238;
        case 0x21d23cu: goto label_21d23c;
        case 0x21d240u: goto label_21d240;
        case 0x21d244u: goto label_21d244;
        case 0x21d248u: goto label_21d248;
        case 0x21d24cu: goto label_21d24c;
        case 0x21d250u: goto label_21d250;
        case 0x21d254u: goto label_21d254;
        case 0x21d258u: goto label_21d258;
        case 0x21d25cu: goto label_21d25c;
        case 0x21d260u: goto label_21d260;
        case 0x21d264u: goto label_21d264;
        case 0x21d268u: goto label_21d268;
        case 0x21d26cu: goto label_21d26c;
        case 0x21d270u: goto label_21d270;
        case 0x21d274u: goto label_21d274;
        case 0x21d278u: goto label_21d278;
        case 0x21d27cu: goto label_21d27c;
        case 0x21d280u: goto label_21d280;
        case 0x21d284u: goto label_21d284;
        case 0x21d288u: goto label_21d288;
        case 0x21d28cu: goto label_21d28c;
        case 0x21d290u: goto label_21d290;
        case 0x21d294u: goto label_21d294;
        case 0x21d298u: goto label_21d298;
        case 0x21d29cu: goto label_21d29c;
        case 0x21d2a0u: goto label_21d2a0;
        case 0x21d2a4u: goto label_21d2a4;
        case 0x21d2a8u: goto label_21d2a8;
        case 0x21d2acu: goto label_21d2ac;
        case 0x21d2b0u: goto label_21d2b0;
        case 0x21d2b4u: goto label_21d2b4;
        case 0x21d2b8u: goto label_21d2b8;
        case 0x21d2bcu: goto label_21d2bc;
        case 0x21d2c0u: goto label_21d2c0;
        case 0x21d2c4u: goto label_21d2c4;
        case 0x21d2c8u: goto label_21d2c8;
        case 0x21d2ccu: goto label_21d2cc;
        case 0x21d2d0u: goto label_21d2d0;
        case 0x21d2d4u: goto label_21d2d4;
        case 0x21d2d8u: goto label_21d2d8;
        case 0x21d2dcu: goto label_21d2dc;
        case 0x21d2e0u: goto label_21d2e0;
        case 0x21d2e4u: goto label_21d2e4;
        case 0x21d2e8u: goto label_21d2e8;
        case 0x21d2ecu: goto label_21d2ec;
        case 0x21d2f0u: goto label_21d2f0;
        case 0x21d2f4u: goto label_21d2f4;
        case 0x21d2f8u: goto label_21d2f8;
        case 0x21d2fcu: goto label_21d2fc;
        case 0x21d300u: goto label_21d300;
        case 0x21d304u: goto label_21d304;
        case 0x21d308u: goto label_21d308;
        case 0x21d30cu: goto label_21d30c;
        case 0x21d310u: goto label_21d310;
        case 0x21d314u: goto label_21d314;
        case 0x21d318u: goto label_21d318;
        case 0x21d31cu: goto label_21d31c;
        case 0x21d320u: goto label_21d320;
        case 0x21d324u: goto label_21d324;
        case 0x21d328u: goto label_21d328;
        case 0x21d32cu: goto label_21d32c;
        case 0x21d330u: goto label_21d330;
        case 0x21d334u: goto label_21d334;
        case 0x21d338u: goto label_21d338;
        case 0x21d33cu: goto label_21d33c;
        case 0x21d340u: goto label_21d340;
        case 0x21d344u: goto label_21d344;
        case 0x21d348u: goto label_21d348;
        case 0x21d34cu: goto label_21d34c;
        case 0x21d350u: goto label_21d350;
        case 0x21d354u: goto label_21d354;
        case 0x21d358u: goto label_21d358;
        case 0x21d35cu: goto label_21d35c;
        case 0x21d360u: goto label_21d360;
        case 0x21d364u: goto label_21d364;
        case 0x21d368u: goto label_21d368;
        case 0x21d36cu: goto label_21d36c;
        case 0x21d370u: goto label_21d370;
        case 0x21d374u: goto label_21d374;
        case 0x21d378u: goto label_21d378;
        case 0x21d37cu: goto label_21d37c;
        case 0x21d380u: goto label_21d380;
        case 0x21d384u: goto label_21d384;
        case 0x21d388u: goto label_21d388;
        case 0x21d38cu: goto label_21d38c;
        case 0x21d390u: goto label_21d390;
        case 0x21d394u: goto label_21d394;
        case 0x21d398u: goto label_21d398;
        case 0x21d39cu: goto label_21d39c;
        case 0x21d3a0u: goto label_21d3a0;
        case 0x21d3a4u: goto label_21d3a4;
        case 0x21d3a8u: goto label_21d3a8;
        case 0x21d3acu: goto label_21d3ac;
        case 0x21d3b0u: goto label_21d3b0;
        case 0x21d3b4u: goto label_21d3b4;
        case 0x21d3b8u: goto label_21d3b8;
        case 0x21d3bcu: goto label_21d3bc;
        case 0x21d3c0u: goto label_21d3c0;
        case 0x21d3c4u: goto label_21d3c4;
        case 0x21d3c8u: goto label_21d3c8;
        case 0x21d3ccu: goto label_21d3cc;
        case 0x21d3d0u: goto label_21d3d0;
        case 0x21d3d4u: goto label_21d3d4;
        case 0x21d3d8u: goto label_21d3d8;
        case 0x21d3dcu: goto label_21d3dc;
        case 0x21d3e0u: goto label_21d3e0;
        case 0x21d3e4u: goto label_21d3e4;
        case 0x21d3e8u: goto label_21d3e8;
        case 0x21d3ecu: goto label_21d3ec;
        case 0x21d3f0u: goto label_21d3f0;
        case 0x21d3f4u: goto label_21d3f4;
        case 0x21d3f8u: goto label_21d3f8;
        case 0x21d3fcu: goto label_21d3fc;
        case 0x21d400u: goto label_21d400;
        case 0x21d404u: goto label_21d404;
        default: return;
    }

label_21cc38:
    // 0x21cc38: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x21cc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_21cc3c:
    // 0x21cc3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21cc40:
    // 0x21cc40: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21cc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_21cc44:
    // 0x21cc44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_21cc48:
    // 0x21cc48: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x21cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_21cc4c:
    // 0x21cc4c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_21cc50:
    // 0x21cc50: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x21cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_21cc54:
    // 0x21cc54: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_21cc58:
    if (ctx->pc == 0x21CC58u) {
        ctx->pc = 0x21CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC54u;
        // 0x21cc58: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CC5Cu;
        goto label_21cc5c;
    }
    ctx->pc = 0x21CC54u;
    {
        const bool branch_taken_0x21cc54 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x21CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC54u;
        // 0x21cc58: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc54) {
            ctx->pc = 0x21CC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cc3c;
        }
    }
    ctx->pc = 0x21CC5Cu;
label_21cc5c:
    // 0x21cc5c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x21cc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_21cc60:
    // 0x21cc60: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x21cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_21cc64:
    // 0x21cc64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21cc68:
    // 0x21cc68: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_21cc6c:
    // 0x21cc6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_21cc70:
    // 0x21cc70: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x21cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_21cc74:
    // 0x21cc74: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x21cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_21cc78:
    // 0x21cc78: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x21cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_21cc7c:
    // 0x21cc7c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_21cc80:
    if (ctx->pc == 0x21CC80u) {
        ctx->pc = 0x21CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC7Cu;
        // 0x21cc80: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CC84u;
        goto label_21cc84;
    }
    ctx->pc = 0x21CC7Cu;
    {
        const bool branch_taken_0x21cc7c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x21CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC7Cu;
        // 0x21cc80: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc7c) {
            ctx->pc = 0x21CC64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cc64;
        }
    }
    ctx->pc = 0x21CC84u;
label_21cc84:
    // 0x21cc84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_21cc88:
    // 0x21cc88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_21cc8c:
    // 0x21cc8c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_21cc90:
    if (ctx->pc == 0x21CC90u) {
        ctx->pc = 0x21CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC8Cu;
        // 0x21cc90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CC94u;
        goto label_21cc94;
    }
    ctx->pc = 0x21CC8Cu;
    {
        const bool branch_taken_0x21cc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC8Cu;
        // 0x21cc90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc8c) {
            ctx->pc = 0x21CC9Cu;
            goto label_21cc9c;
        }
    }
    ctx->pc = 0x21CC94u;
label_21cc94:
    // 0x21cc94: 0x10000037  b           . + 4 + (0x37 << 2)
label_21cc98:
    if (ctx->pc == 0x21CC98u) {
        ctx->pc = 0x21CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC94u;
        // 0x21cc98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CC9Cu;
        goto label_21cc9c;
    }
    ctx->pc = 0x21CC94u;
    {
        const bool branch_taken_0x21cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC94u;
        // 0x21cc98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc94) {
            ctx->pc = 0x21CD74u;
            goto label_21cd74;
        }
    }
    ctx->pc = 0x21CC9Cu;
label_21cc9c:
    // 0x21cc9c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x21cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_21cca0:
    // 0x21cca0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x21cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_21cca4:
    // 0x21cca4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_21cca8:
    if (ctx->pc == 0x21CCA8u) {
        ctx->pc = 0x21CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCA4u;
        // 0x21cca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CCACu;
        goto label_21ccac;
    }
    ctx->pc = 0x21CCA4u;
    {
        const bool branch_taken_0x21cca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCA4u;
        // 0x21cca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cca4) {
            ctx->pc = 0x21CCB4u;
            goto label_21ccb4;
        }
    }
    ctx->pc = 0x21CCACu;
label_21ccac:
    // 0x21ccac: 0x10000030  b           . + 4 + (0x30 << 2)
label_21ccb0:
    if (ctx->pc == 0x21CCB0u) {
        ctx->pc = 0x21CCB4u;
        goto label_21ccb4;
    }
    ctx->pc = 0x21CCACu;
    {
        const bool branch_taken_0x21ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ccac) {
            ctx->pc = 0x21CD70u;
            goto label_21cd70;
        }
    }
    ctx->pc = 0x21CCB4u;
label_21ccb4:
    // 0x21ccb4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x21ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_21ccb8:
    // 0x21ccb8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_21ccbc:
    // 0x21ccbc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_21ccc0:
    if (ctx->pc == 0x21CCC0u) {
        ctx->pc = 0x21CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCBCu;
        // 0x21ccc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CCC4u;
        goto label_21ccc4;
    }
    ctx->pc = 0x21CCBCu;
    {
        const bool branch_taken_0x21ccbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCBCu;
        // 0x21ccc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccbc) {
            ctx->pc = 0x21CCCCu;
            goto label_21cccc;
        }
    }
    ctx->pc = 0x21CCC4u;
label_21ccc4:
    // 0x21ccc4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_21ccc8:
    if (ctx->pc == 0x21CCC8u) {
        ctx->pc = 0x21CCCCu;
        goto label_21cccc;
    }
    ctx->pc = 0x21CCC4u;
    {
        const bool branch_taken_0x21ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ccc4) {
            ctx->pc = 0x21CD70u;
            goto label_21cd70;
        }
    }
    ctx->pc = 0x21CCCCu;
label_21cccc:
    // 0x21cccc: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x21ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_21ccd0:
    // 0x21ccd0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x21ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_21ccd4:
    // 0x21ccd4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_21ccd8:
    if (ctx->pc == 0x21CCD8u) {
        ctx->pc = 0x21CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCD4u;
        // 0x21ccd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CCDCu;
        goto label_21ccdc;
    }
    ctx->pc = 0x21CCD4u;
    {
        const bool branch_taken_0x21ccd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCD4u;
        // 0x21ccd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccd4) {
            ctx->pc = 0x21CCE4u;
            goto label_21cce4;
        }
    }
    ctx->pc = 0x21CCDCu;
label_21ccdc:
    // 0x21ccdc: 0x10000024  b           . + 4 + (0x24 << 2)
label_21cce0:
    if (ctx->pc == 0x21CCE0u) {
        ctx->pc = 0x21CCE4u;
        goto label_21cce4;
    }
    ctx->pc = 0x21CCDCu;
    {
        const bool branch_taken_0x21ccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ccdc) {
            ctx->pc = 0x21CD70u;
            goto label_21cd70;
        }
    }
    ctx->pc = 0x21CCE4u;
label_21cce4:
    // 0x21cce4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x21cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_21cce8:
    // 0x21cce8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_21ccec:
    if (ctx->pc == 0x21CCECu) {
        ctx->pc = 0x21CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCE8u;
        // 0x21ccec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CCF0u;
        goto label_21ccf0;
    }
    ctx->pc = 0x21CCE8u;
    {
        const bool branch_taken_0x21cce8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCE8u;
        // 0x21ccec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cce8) {
            ctx->pc = 0x21CCFCu;
            goto label_21ccfc;
        }
    }
    ctx->pc = 0x21CCF0u;
label_21ccf0:
    // 0x21ccf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ccf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21ccf4:
    // 0x21ccf4: 0x10000007  b           . + 4 + (0x7 << 2)
label_21ccf8:
    if (ctx->pc == 0x21CCF8u) {
        ctx->pc = 0x21CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCF4u;
        // 0x21ccf8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CCFCu;
        goto label_21ccfc;
    }
    ctx->pc = 0x21CCF4u;
    {
        const bool branch_taken_0x21ccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCF4u;
        // 0x21ccf8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccf4) {
            ctx->pc = 0x21CD14u;
            goto label_21cd14;
        }
    }
    ctx->pc = 0x21CCFCu;
label_21ccfc:
    // 0x21ccfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21cd00:
    // 0x21cd00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21cd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_21cd04:
    // 0x21cd04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cd04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21cd08:
    // 0x21cd08: 0x0  nop
    ctx->pc = 0x21cd08u;
    // NOP
label_21cd0c:
    // 0x21cd0c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x21cd0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_21cd10:
    // 0x21cd10: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x21cd10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_21cd14:
    // 0x21cd14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_21cd18:
    // 0x21cd18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21cd18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21cd1c:
    // 0x21cd1c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x21cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21cd20:
    // 0x21cd20: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x21cd20u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
label_21cd24:
    // 0x21cd24: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x21cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_21cd28:
    // 0x21cd28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21cd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21cd2c:
    // 0x21cd2c: 0x0  nop
    ctx->pc = 0x21cd2cu;
    // NOP
label_21cd30:
    // 0x21cd30: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x21cd30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_21cd34:
    // 0x21cd34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21cd34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21cd38:
    // 0x21cd38: 0x0  nop
    ctx->pc = 0x21cd38u;
    // NOP
label_21cd3c:
    // 0x21cd3c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_21cd40:
    if (ctx->pc == 0x21CD40u) {
        ctx->pc = 0x21CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD3Cu;
        // 0x21cd40: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CD44u;
        goto label_21cd44;
    }
    ctx->pc = 0x21CD3Cu;
    {
        const bool branch_taken_0x21cd3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD3Cu;
        // 0x21cd40: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd3c) {
            ctx->pc = 0x21CD5Cu;
            goto label_21cd5c;
        }
    }
    ctx->pc = 0x21CD44u;
label_21cd44:
    // 0x21cd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21cd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21cd48:
    // 0x21cd48: 0x0  nop
    ctx->pc = 0x21cd48u;
    // NOP
label_21cd4c:
    // 0x21cd4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21cd4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21cd50:
    // 0x21cd50: 0x0  nop
    ctx->pc = 0x21cd50u;
    // NOP
label_21cd54:
    // 0x21cd54: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_21cd58:
    if (ctx->pc == 0x21CD58u) {
        ctx->pc = 0x21CD5Cu;
        goto label_21cd5c;
    }
    ctx->pc = 0x21CD54u;
    {
        const bool branch_taken_0x21cd54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21cd54) {
            ctx->pc = 0x21CD6Cu;
            goto label_21cd6c;
        }
    }
    ctx->pc = 0x21CD5Cu;
label_21cd5c:
    // 0x21cd5c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_21cd60:
    if (ctx->pc == 0x21CD60u) {
        ctx->pc = 0x21CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD5Cu;
        // 0x21cd60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CD64u;
        goto label_21cd64;
    }
    ctx->pc = 0x21CD5Cu;
    {
        const bool branch_taken_0x21cd5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD5Cu;
        // 0x21cd60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd5c) {
            ctx->pc = 0x21CD70u;
            goto label_21cd70;
        }
    }
    ctx->pc = 0x21CD64u;
label_21cd64:
    // 0x21cd64: 0x10000002  b           . + 4 + (0x2 << 2)
label_21cd68:
    if (ctx->pc == 0x21CD68u) {
        ctx->pc = 0x21CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD64u;
        // 0x21cd68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CD6Cu;
        goto label_21cd6c;
    }
    ctx->pc = 0x21CD64u;
    {
        const bool branch_taken_0x21cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD64u;
        // 0x21cd68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd64) {
            ctx->pc = 0x21CD70u;
            goto label_21cd70;
        }
    }
    ctx->pc = 0x21CD6Cu;
label_21cd6c:
    // 0x21cd6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21cd70:
    // 0x21cd70: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x21cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_21cd74:
    // 0x21cd74: 0x3e00008  jr          $ra
label_21cd78:
    if (ctx->pc == 0x21CD78u) {
        ctx->pc = 0x21CD7Cu;
        goto label_21cd7c;
    }
    ctx->pc = 0x21CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CD7Cu;
label_21cd7c:
    // 0x21cd7c: 0x0  nop
    ctx->pc = 0x21cd7cu;
    // NOP
label_21cd80:
    // 0x21cd80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21cd80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cd84:
    // 0x21cd84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21cd84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cd88:
    // 0x21cd88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21cd88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cd8c:
    // 0x21cd8c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x21cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21cd90:
    // 0x21cd90: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x21cd90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21cd94:
    // 0x21cd94: 0x84878  dsll        $t1, $t0, 1
    ctx->pc = 0x21cd94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << 1);
label_21cd98:
    // 0x21cd98: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21cd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21cd9c:
    // 0x21cd9c: 0x128482d  daddu       $t1, $t1, $t0
    ctx->pc = 0x21cd9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 8));
label_21cda0:
    // 0x21cda0: 0x80ca0000  lb          $t2, 0x0($a2)
    ctx->pc = 0x21cda0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21cda4:
    // 0x21cda4: 0x948b8  dsll        $t1, $t1, 2
    ctx->pc = 0x21cda4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 2);
label_21cda8:
    // 0x21cda8: 0x128402d  daddu       $t0, $t1, $t0
    ctx->pc = 0x21cda8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 8));
label_21cdac:
    // 0x21cdac: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cdacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
label_21cdb0:
    // 0x21cdb0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x21cdb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21cdb4:
    // 0x21cdb4: 0x254cffbf  addiu       $t4, $t2, -0x41
    ctx->pc = 0x21cdb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967231));
label_21cdb8:
    // 0x21cdb8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21cdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21cdbc:
    // 0x21cdbc: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x21cdbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21cdc0:
    // 0x21cdc0: 0x812b0000  lb          $t3, 0x0($t1)
    ctx->pc = 0x21cdc0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_21cdc4:
    // 0x21cdc4: 0x24660002  addiu       $a2, $v1, 0x2
    ctx->pc = 0x21cdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_21cdc8:
    // 0x21cdc8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21cdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21cdcc:
    // 0x21cdcc: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x21cdccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21cdd0:
    // 0x21cdd0: 0x812a0000  lb          $t2, 0x0($t1)
    ctx->pc = 0x21cdd0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_21cdd4:
    // 0x21cdd4: 0x24660003  addiu       $a2, $v1, 0x3
    ctx->pc = 0x21cdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_21cdd8:
    // 0x21cdd8: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21cdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21cddc:
    // 0x21cddc: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21cddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21cde0:
    // 0x21cde0: 0xc483c  dsll32      $t1, $t4, 0
    ctx->pc = 0x21cde0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) << (32 + 0));
label_21cde4:
    // 0x21cde4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x21cde4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_21cde8:
    // 0x21cde8: 0x109402d  daddu       $t0, $t0, $t1
    ctx->pc = 0x21cde8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 9));
label_21cdec:
    // 0x21cdec: 0x80c90000  lb          $t1, 0x0($a2)
    ctx->pc = 0x21cdecu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21cdf0:
    // 0x21cdf0: 0x83078  dsll        $a2, $t0, 1
    ctx->pc = 0x21cdf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 1);
label_21cdf4:
    // 0x21cdf4: 0x2529ffbf  addiu       $t1, $t1, -0x41
    ctx->pc = 0x21cdf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967231));
label_21cdf8:
    // 0x21cdf8: 0xc8602d  daddu       $t4, $a2, $t0
    ctx->pc = 0x21cdf8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
label_21cdfc:
    // 0x21cdfc: 0x9683c  dsll32      $t5, $t1, 0
    ctx->pc = 0x21cdfcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) << (32 + 0));
label_21ce00:
    // 0x21ce00: 0x2566ffbf  addiu       $a2, $t3, -0x41
    ctx->pc = 0x21ce00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967231));
label_21ce04:
    // 0x21ce04: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x21ce04u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_21ce08:
    // 0x21ce08: 0xc58b8  dsll        $t3, $t4, 2
    ctx->pc = 0x21ce08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 2);
label_21ce0c:
    // 0x21ce0c: 0x6603c  dsll32      $t4, $a2, 0
    ctx->pc = 0x21ce0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) << (32 + 0));
label_21ce10:
    // 0x21ce10: 0x168402d  daddu       $t0, $t3, $t0
    ctx->pc = 0x21ce10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 8));
label_21ce14:
    // 0x21ce14: 0x2546ffbf  addiu       $a2, $t2, -0x41
    ctx->pc = 0x21ce14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967231));
label_21ce18:
    // 0x21ce18: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x21ce18u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_21ce1c:
    // 0x21ce1c: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x21ce1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
label_21ce20:
    // 0x21ce20: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21ce20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
label_21ce24:
    // 0x21ce24: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x21ce24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_21ce28:
    // 0x21ce28: 0x10c402d  daddu       $t0, $t0, $t4
    ctx->pc = 0x21ce28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 12));
label_21ce2c:
    // 0x21ce2c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21ce2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21ce30:
    // 0x21ce30: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x21ce30u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_21ce34:
    // 0x21ce34: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21ce34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21ce38:
    // 0x21ce38: 0x80c90000  lb          $t1, 0x0($a2)
    ctx->pc = 0x21ce38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21ce3c:
    // 0x21ce3c: 0x83078  dsll        $a2, $t0, 1
    ctx->pc = 0x21ce3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 1);
label_21ce40:
    // 0x21ce40: 0x2529ffbf  addiu       $t1, $t1, -0x41
    ctx->pc = 0x21ce40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967231));
label_21ce44:
    // 0x21ce44: 0xc8502d  daddu       $t2, $a2, $t0
    ctx->pc = 0x21ce44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
label_21ce48:
    // 0x21ce48: 0x9603c  dsll32      $t4, $t1, 0
    ctx->pc = 0x21ce48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (32 + 0));
label_21ce4c:
    // 0x21ce4c: 0x24660005  addiu       $a2, $v1, 0x5
    ctx->pc = 0x21ce4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_21ce50:
    // 0x21ce50: 0xa50b8  dsll        $t2, $t2, 2
    ctx->pc = 0x21ce50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 2);
label_21ce54:
    // 0x21ce54: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21ce54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21ce58:
    // 0x21ce58: 0x148402d  daddu       $t0, $t2, $t0
    ctx->pc = 0x21ce58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 8));
label_21ce5c:
    // 0x21ce5c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21ce5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21ce60:
    // 0x21ce60: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21ce60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
label_21ce64:
    // 0x21ce64: 0x80ca0000  lb          $t2, 0x0($a2)
    ctx->pc = 0x21ce64u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21ce68:
    // 0x21ce68: 0x10b402d  daddu       $t0, $t0, $t3
    ctx->pc = 0x21ce68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 11));
label_21ce6c:
    // 0x21ce6c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x21ce6cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_21ce70:
    // 0x21ce70: 0x24660006  addiu       $a2, $v1, 0x6
    ctx->pc = 0x21ce70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
label_21ce74:
    // 0x21ce74: 0x254affbf  addiu       $t2, $t2, -0x41
    ctx->pc = 0x21ce74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967231));
label_21ce78:
    // 0x21ce78: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21ce78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21ce7c:
    // 0x21ce7c: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21ce7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21ce80:
    // 0x21ce80: 0x80c90000  lb          $t1, 0x0($a2)
    ctx->pc = 0x21ce80u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21ce84:
    // 0x21ce84: 0x83078  dsll        $a2, $t0, 1
    ctx->pc = 0x21ce84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 1);
label_21ce88:
    // 0x21ce88: 0xc8582d  daddu       $t3, $a2, $t0
    ctx->pc = 0x21ce88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
label_21ce8c:
    // 0x21ce8c: 0xb58b8  dsll        $t3, $t3, 2
    ctx->pc = 0x21ce8cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 2);
label_21ce90:
    // 0x21ce90: 0x24660007  addiu       $a2, $v1, 0x7
    ctx->pc = 0x21ce90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_21ce94:
    // 0x21ce94: 0x168402d  daddu       $t0, $t3, $t0
    ctx->pc = 0x21ce94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 8));
label_21ce98:
    // 0x21ce98: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x21ce98u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_21ce9c:
    // 0x21ce9c: 0xa583c  dsll32      $t3, $t2, 0
    ctx->pc = 0x21ce9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << (32 + 0));
label_21cea0:
    // 0x21cea0: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
label_21cea4:
    // 0x21cea4: 0x252affbf  addiu       $t2, $t1, -0x41
    ctx->pc = 0x21cea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967231));
label_21cea8:
    // 0x21cea8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x21cea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21ceac:
    // 0x21ceac: 0x80c90000  lb          $t1, 0x0($a2)
    ctx->pc = 0x21ceacu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_21ceb0:
    // 0x21ceb0: 0x10d402d  daddu       $t0, $t0, $t5
    ctx->pc = 0x21ceb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 13));
label_21ceb4:
    // 0x21ceb4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x21ceb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
label_21ceb8:
    // 0x21ceb8: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x21ceb8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_21cebc:
    // 0x21cebc: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x21cebcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
label_21cec0:
    // 0x21cec0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_21cec4:
    // 0x21cec4: 0x83078  dsll        $a2, $t0, 1
    ctx->pc = 0x21cec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 1);
label_21cec8:
    // 0x21cec8: 0x2529ffbf  addiu       $t1, $t1, -0x41
    ctx->pc = 0x21cec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967231));
label_21cecc:
    // 0x21cecc: 0xc8302d  daddu       $a2, $a2, $t0
    ctx->pc = 0x21ceccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
label_21ced0:
    // 0x21ced0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x21ced0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
label_21ced4:
    // 0x21ced4: 0x668b8  dsll        $t5, $a2, 2
    ctx->pc = 0x21ced4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) << 2);
label_21ced8:
    // 0x21ced8: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x21ced8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_21cedc:
    // 0x21cedc: 0x1a8402d  daddu       $t0, $t5, $t0
    ctx->pc = 0x21cedcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 8));
label_21cee0:
    // 0x21cee0: 0x28660004  slti        $a2, $v1, 0x4
    ctx->pc = 0x21cee0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_21cee4:
    // 0x21cee4: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cee4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
label_21cee8:
    // 0x21cee8: 0x10c402d  daddu       $t0, $t0, $t4
    ctx->pc = 0x21cee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 12));
label_21ceec:
    // 0x21ceec: 0x86078  dsll        $t4, $t0, 1
    ctx->pc = 0x21ceecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) << 1);
label_21cef0:
    // 0x21cef0: 0x188602d  daddu       $t4, $t4, $t0
    ctx->pc = 0x21cef0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 8));
label_21cef4:
    // 0x21cef4: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x21cef4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
label_21cef8:
    // 0x21cef8: 0x188402d  daddu       $t0, $t4, $t0
    ctx->pc = 0x21cef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 8));
label_21cefc:
    // 0x21cefc: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cefcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
label_21cf00:
    // 0x21cf00: 0x10b402d  daddu       $t0, $t0, $t3
    ctx->pc = 0x21cf00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 11));
label_21cf04:
    // 0x21cf04: 0x85878  dsll        $t3, $t0, 1
    ctx->pc = 0x21cf04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << 1);
label_21cf08:
    // 0x21cf08: 0x168582d  daddu       $t3, $t3, $t0
    ctx->pc = 0x21cf08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 8));
label_21cf0c:
    // 0x21cf0c: 0xb58b8  dsll        $t3, $t3, 2
    ctx->pc = 0x21cf0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 2);
label_21cf10:
    // 0x21cf10: 0x168402d  daddu       $t0, $t3, $t0
    ctx->pc = 0x21cf10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 8));
label_21cf14:
    // 0x21cf14: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cf14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
label_21cf18:
    // 0x21cf18: 0x10a402d  daddu       $t0, $t0, $t2
    ctx->pc = 0x21cf18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 10));
label_21cf1c:
    // 0x21cf1c: 0x85078  dsll        $t2, $t0, 1
    ctx->pc = 0x21cf1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << 1);
label_21cf20:
    // 0x21cf20: 0x148502d  daddu       $t2, $t2, $t0
    ctx->pc = 0x21cf20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 8));
label_21cf24:
    // 0x21cf24: 0xa50b8  dsll        $t2, $t2, 2
    ctx->pc = 0x21cf24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 2);
label_21cf28:
    // 0x21cf28: 0x148402d  daddu       $t0, $t2, $t0
    ctx->pc = 0x21cf28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 8));
label_21cf2c:
    // 0x21cf2c: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x21cf2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
label_21cf30:
    // 0x21cf30: 0x14c0ff97  bnez        $a2, . + 4 + (-0x69 << 2)
label_21cf34:
    if (ctx->pc == 0x21CF34u) {
        ctx->pc = 0x21CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF30u;
        // 0x21cf34: 0x109402d  daddu       $t0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF38u;
        goto label_21cf38;
    }
    ctx->pc = 0x21CF30u;
    {
        const bool branch_taken_0x21cf30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF30u;
        // 0x21cf34: 0x109402d  daddu       $t0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf30) {
            ctx->pc = 0x21CD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cd90;
        }
    }
    ctx->pc = 0x21CF38u;
label_21cf38:
    // 0x21cf38: 0x2861000c  slti        $at, $v1, 0xC
    ctx->pc = 0x21cf38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_21cf3c:
    // 0x21cf3c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_21cf40:
    if (ctx->pc == 0x21CF40u) {
        ctx->pc = 0x21CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF3Cu;
        // 0x21cf40: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF44u;
        goto label_21cf44;
    }
    ctx->pc = 0x21CF3Cu;
    {
        const bool branch_taken_0x21cf3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF3Cu;
        // 0x21cf40: 0x2409000b  addiu       $t1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf3c) {
            ctx->pc = 0x21CF80u;
            goto label_21cf80;
        }
    }
    ctx->pc = 0x21CF44u;
label_21cf44:
    // 0x21cf44: 0x83078  dsll        $a2, $t0, 1
    ctx->pc = 0x21cf44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << 1);
label_21cf48:
    // 0x21cf48: 0x1231023  subu        $v0, $t1, $v1
    ctx->pc = 0x21cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_21cf4c:
    // 0x21cf4c: 0xc8302d  daddu       $a2, $a2, $t0
    ctx->pc = 0x21cf4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 8));
label_21cf50:
    // 0x21cf50: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21cf54:
    // 0x21cf54: 0x650b8  dsll        $t2, $a2, 2
    ctx->pc = 0x21cf54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << 2);
label_21cf58:
    // 0x21cf58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21cf5c:
    // 0x21cf5c: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x21cf5cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21cf60:
    // 0x21cf60: 0x148102d  daddu       $v0, $t2, $t0
    ctx->pc = 0x21cf60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 8));
label_21cf64:
    // 0x21cf64: 0x24c6ffbf  addiu       $a2, $a2, -0x41
    ctx->pc = 0x21cf64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
label_21cf68:
    // 0x21cf68: 0x24078  dsll        $t0, $v0, 1
    ctx->pc = 0x21cf68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 1);
label_21cf6c:
    // 0x21cf6c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x21cf6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_21cf70:
    // 0x21cf70: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x21cf70u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_21cf74:
    // 0x21cf74: 0x2862000c  slti        $v0, $v1, 0xC
    ctx->pc = 0x21cf74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_21cf78:
    // 0x21cf78: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_21cf7c:
    if (ctx->pc == 0x21CF7Cu) {
        ctx->pc = 0x21CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF78u;
        // 0x21cf7c: 0x106402d  daddu       $t0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CF80u;
        goto label_21cf80;
    }
    ctx->pc = 0x21CF78u;
    {
        const bool branch_taken_0x21cf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CF78u;
        // 0x21cf7c: 0x106402d  daddu       $t0, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cf78) {
            ctx->pc = 0x21CF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cf44;
        }
    }
    ctx->pc = 0x21CF80u;
label_21cf80:
    // 0x21cf80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21cf80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21cf84:
    // 0x21cf84: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21cf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21cf88:
    // 0x21cf88: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x21cf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21cf8c:
    // 0x21cf8c: 0xc91023  subu        $v0, $a2, $t1
    ctx->pc = 0x21cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_21cf90:
    // 0x21cf90: 0x75078  dsll        $t2, $a3, 1
    ctx->pc = 0x21cf90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 1);
label_21cf94:
    // 0x21cf94: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21cf98:
    // 0x21cf98: 0x147502d  daddu       $t2, $t2, $a3
    ctx->pc = 0x21cf98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
label_21cf9c:
    // 0x21cf9c: 0x804b000c  lb          $t3, 0xC($v0)
    ctx->pc = 0x21cf9cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_21cfa0:
    // 0x21cfa0: 0xa50b8  dsll        $t2, $t2, 2
    ctx->pc = 0x21cfa0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 2);
label_21cfa4:
    // 0x21cfa4: 0x147382d  daddu       $a3, $t2, $a3
    ctx->pc = 0x21cfa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
label_21cfa8:
    // 0x21cfa8: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21cfa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21cfac:
    // 0x21cfac: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x21cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21cfb0:
    // 0x21cfb0: 0x6b6823  subu        $t5, $v1, $t3
    ctx->pc = 0x21cfb0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_21cfb4:
    // 0x21cfb4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x21cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21cfb8:
    // 0x21cfb8: 0xa25021  addu        $t2, $a1, $v0
    ctx->pc = 0x21cfb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21cfbc:
    // 0x21cfbc: 0x814c000c  lb          $t4, 0xC($t2)
    ctx->pc = 0x21cfbcu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
label_21cfc0:
    // 0x21cfc0: 0x25220002  addiu       $v0, $t1, 0x2
    ctx->pc = 0x21cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_21cfc4:
    // 0x21cfc4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x21cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21cfc8:
    // 0x21cfc8: 0xa25021  addu        $t2, $a1, $v0
    ctx->pc = 0x21cfc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21cfcc:
    // 0x21cfcc: 0x814b000c  lb          $t3, 0xC($t2)
    ctx->pc = 0x21cfccu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
label_21cfd0:
    // 0x21cfd0: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x21cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_21cfd4:
    // 0x21cfd4: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x21cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21cfd8:
    // 0x21cfd8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21cfdc:
    // 0x21cfdc: 0xd503c  dsll32      $t2, $t5, 0
    ctx->pc = 0x21cfdcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) << (32 + 0));
label_21cfe0:
    // 0x21cfe0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x21cfe0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
label_21cfe4:
    // 0x21cfe4: 0xea382d  daddu       $a3, $a3, $t2
    ctx->pc = 0x21cfe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 10));
label_21cfe8:
    // 0x21cfe8: 0x804a000c  lb          $t2, 0xC($v0)
    ctx->pc = 0x21cfe8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_21cfec:
    // 0x21cfec: 0x71078  dsll        $v0, $a3, 1
    ctx->pc = 0x21cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 1);
label_21cff0:
    // 0x21cff0: 0x47682d  daddu       $t5, $v0, $a3
    ctx->pc = 0x21cff0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
label_21cff4:
    // 0x21cff4: 0x6c1023  subu        $v0, $v1, $t4
    ctx->pc = 0x21cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_21cff8:
    // 0x21cff8: 0xd68b8  dsll        $t5, $t5, 2
    ctx->pc = 0x21cff8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 2);
label_21cffc:
    // 0x21cffc: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x21cffcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
label_21d000:
    // 0x21d000: 0x1a7382d  daddu       $a3, $t5, $a3
    ctx->pc = 0x21d000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 7));
label_21d004:
    // 0x21d004: 0x6b1023  subu        $v0, $v1, $t3
    ctx->pc = 0x21d004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_21d008:
    // 0x21d008: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x21d008u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_21d00c:
    // 0x21d00c: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x21d00cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
label_21d010:
    // 0x21d010: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d014:
    // 0x21d014: 0x25220004  addiu       $v0, $t1, 0x4
    ctx->pc = 0x21d014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_21d018:
    // 0x21d018: 0x6a5823  subu        $t3, $v1, $t2
    ctx->pc = 0x21d018u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_21d01c:
    // 0x21d01c: 0xc25023  subu        $t2, $a2, $v0
    ctx->pc = 0x21d01cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21d020:
    // 0x21d020: 0xec382d  daddu       $a3, $a3, $t4
    ctx->pc = 0x21d020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 12));
label_21d024:
    // 0x21d024: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x21d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_21d028:
    // 0x21d028: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x21d028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_21d02c:
    // 0x21d02c: 0x814b000c  lb          $t3, 0xC($t2)
    ctx->pc = 0x21d02cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
label_21d030:
    // 0x21d030: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x21d030u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_21d034:
    // 0x21d034: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21d034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_21d038:
    // 0x21d038: 0x75078  dsll        $t2, $a3, 1
    ctx->pc = 0x21d038u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 1);
label_21d03c:
    // 0x21d03c: 0x6b5823  subu        $t3, $v1, $t3
    ctx->pc = 0x21d03cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_21d040:
    // 0x21d040: 0x147602d  daddu       $t4, $t2, $a3
    ctx->pc = 0x21d040u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
label_21d044:
    // 0x21d044: 0x252a0005  addiu       $t2, $t1, 0x5
    ctx->pc = 0x21d044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
label_21d048:
    // 0x21d048: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x21d048u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
label_21d04c:
    // 0x21d04c: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x21d04cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_21d050:
    // 0x21d050: 0x187382d  daddu       $a3, $t4, $a3
    ctx->pc = 0x21d050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 7));
label_21d054:
    // 0x21d054: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x21d054u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_21d058:
    // 0x21d058: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d058u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d05c:
    // 0x21d05c: 0x814c000c  lb          $t4, 0xC($t2)
    ctx->pc = 0x21d05cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
label_21d060:
    // 0x21d060: 0xed382d  daddu       $a3, $a3, $t5
    ctx->pc = 0x21d060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 13));
label_21d064:
    // 0x21d064: 0xb683c  dsll32      $t5, $t3, 0
    ctx->pc = 0x21d064u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) << (32 + 0));
label_21d068:
    // 0x21d068: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x21d068u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
label_21d06c:
    // 0x21d06c: 0x252a0006  addiu       $t2, $t1, 0x6
    ctx->pc = 0x21d06cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
label_21d070:
    // 0x21d070: 0x6c6023  subu        $t4, $v1, $t4
    ctx->pc = 0x21d070u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_21d074:
    // 0x21d074: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x21d074u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_21d078:
    // 0x21d078: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x21d078u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
label_21d07c:
    // 0x21d07c: 0xaa5021  addu        $t2, $a1, $t2
    ctx->pc = 0x21d07cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_21d080:
    // 0x21d080: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x21d080u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_21d084:
    // 0x21d084: 0x814b000c  lb          $t3, 0xC($t2)
    ctx->pc = 0x21d084u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
label_21d088:
    // 0x21d088: 0x75078  dsll        $t2, $a3, 1
    ctx->pc = 0x21d088u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) << 1);
label_21d08c:
    // 0x21d08c: 0x6b5823  subu        $t3, $v1, $t3
    ctx->pc = 0x21d08cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_21d090:
    // 0x21d090: 0x147702d  daddu       $t6, $t2, $a3
    ctx->pc = 0x21d090u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 7));
label_21d094:
    // 0x21d094: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x21d094u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
label_21d098:
    // 0x21d098: 0xe70b8  dsll        $t6, $t6, 2
    ctx->pc = 0x21d098u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 2);
label_21d09c:
    // 0x21d09c: 0x252a0007  addiu       $t2, $t1, 0x7
    ctx->pc = 0x21d09cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_21d0a0:
    // 0x21d0a0: 0x1c7382d  daddu       $a3, $t6, $a3
    ctx->pc = 0x21d0a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 7));
label_21d0a4:
    // 0x21d0a4: 0xca5023  subu        $t2, $a2, $t2
    ctx->pc = 0x21d0a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_21d0a8:
    // 0x21d0a8: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d0a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d0ac:
    // 0x21d0ac: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x21d0acu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_21d0b0:
    // 0x21d0b0: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x21d0b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
label_21d0b4:
    // 0x21d0b4: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x21d0b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_21d0b8:
    // 0x21d0b8: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x21d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_21d0bc:
    // 0x21d0bc: 0x804a000c  lb          $t2, 0xC($v0)
    ctx->pc = 0x21d0bcu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_21d0c0:
    // 0x21d0c0: 0x71078  dsll        $v0, $a3, 1
    ctx->pc = 0x21d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 1);
label_21d0c4:
    // 0x21d0c4: 0x6a5023  subu        $t2, $v1, $t2
    ctx->pc = 0x21d0c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_21d0c8:
    // 0x21d0c8: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x21d0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
label_21d0cc:
    // 0x21d0cc: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x21d0ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
label_21d0d0:
    // 0x21d0d0: 0x270b8  dsll        $t6, $v0, 2
    ctx->pc = 0x21d0d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) << 2);
label_21d0d4:
    // 0x21d0d4: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x21d0d4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
label_21d0d8:
    // 0x21d0d8: 0x1c7382d  daddu       $a3, $t6, $a3
    ctx->pc = 0x21d0d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 7));
label_21d0dc:
    // 0x21d0dc: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x21d0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
label_21d0e0:
    // 0x21d0e0: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d0e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d0e4:
    // 0x21d0e4: 0xed382d  daddu       $a3, $a3, $t5
    ctx->pc = 0x21d0e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 13));
label_21d0e8:
    // 0x21d0e8: 0x76878  dsll        $t5, $a3, 1
    ctx->pc = 0x21d0e8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) << 1);
label_21d0ec:
    // 0x21d0ec: 0x1a7682d  daddu       $t5, $t5, $a3
    ctx->pc = 0x21d0ecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 7));
label_21d0f0:
    // 0x21d0f0: 0xd68b8  dsll        $t5, $t5, 2
    ctx->pc = 0x21d0f0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 2);
label_21d0f4:
    // 0x21d0f4: 0x1a7382d  daddu       $a3, $t5, $a3
    ctx->pc = 0x21d0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 7));
label_21d0f8:
    // 0x21d0f8: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d0fc:
    // 0x21d0fc: 0xec382d  daddu       $a3, $a3, $t4
    ctx->pc = 0x21d0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 12));
label_21d100:
    // 0x21d100: 0x76078  dsll        $t4, $a3, 1
    ctx->pc = 0x21d100u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) << 1);
label_21d104:
    // 0x21d104: 0x187602d  daddu       $t4, $t4, $a3
    ctx->pc = 0x21d104u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 7));
label_21d108:
    // 0x21d108: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x21d108u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
label_21d10c:
    // 0x21d10c: 0x187382d  daddu       $a3, $t4, $a3
    ctx->pc = 0x21d10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 7));
label_21d110:
    // 0x21d110: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d114:
    // 0x21d114: 0xeb382d  daddu       $a3, $a3, $t3
    ctx->pc = 0x21d114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 11));
label_21d118:
    // 0x21d118: 0x75878  dsll        $t3, $a3, 1
    ctx->pc = 0x21d118u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << 1);
label_21d11c:
    // 0x21d11c: 0x167582d  daddu       $t3, $t3, $a3
    ctx->pc = 0x21d11cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 7));
label_21d120:
    // 0x21d120: 0xb58b8  dsll        $t3, $t3, 2
    ctx->pc = 0x21d120u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 2);
label_21d124:
    // 0x21d124: 0x167382d  daddu       $a3, $t3, $a3
    ctx->pc = 0x21d124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 7));
label_21d128:
    // 0x21d128: 0x73878  dsll        $a3, $a3, 1
    ctx->pc = 0x21d128u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 1);
label_21d12c:
    // 0x21d12c: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_21d130:
    if (ctx->pc == 0x21D130u) {
        ctx->pc = 0x21D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D12Cu;
        // 0x21d130: 0xea382d  daddu       $a3, $a3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D134u;
        goto label_21d134;
    }
    ctx->pc = 0x21D12Cu;
    {
        const bool branch_taken_0x21d12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D12Cu;
        // 0x21d130: 0xea382d  daddu       $a3, $a3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d12c) {
            ctx->pc = 0x21CF8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cf8c;
        }
    }
    ctx->pc = 0x21D134u;
label_21d134:
    // 0x21d134: 0x2921000c  slti        $at, $t1, 0xC
    ctx->pc = 0x21d134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
label_21d138:
    // 0x21d138: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_21d13c:
    if (ctx->pc == 0x21D13Cu) {
        ctx->pc = 0x21D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D138u;
        // 0x21d13c: 0x240a000b  addiu       $t2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D140u;
        goto label_21d140;
    }
    ctx->pc = 0x21D138u;
    {
        const bool branch_taken_0x21d138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D138u;
        // 0x21d13c: 0x240a000b  addiu       $t2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d138) {
            ctx->pc = 0x21D180u;
            goto label_21d180;
        }
    }
    ctx->pc = 0x21D140u;
label_21d140:
    // 0x21d140: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x21d140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_21d144:
    // 0x21d144: 0x71878  dsll        $v1, $a3, 1
    ctx->pc = 0x21d144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 1);
label_21d148:
    // 0x21d148: 0x1491023  subu        $v0, $t2, $t1
    ctx->pc = 0x21d148u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_21d14c:
    // 0x21d14c: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x21d14cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
label_21d150:
    // 0x21d150: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x21d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21d154:
    // 0x21d154: 0x358b8  dsll        $t3, $v1, 2
    ctx->pc = 0x21d154u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 2);
label_21d158:
    // 0x21d158: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21d158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21d15c:
    // 0x21d15c: 0x8043000c  lb          $v1, 0xC($v0)
    ctx->pc = 0x21d15cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_21d160:
    // 0x21d160: 0x167102d  daddu       $v0, $t3, $a3
    ctx->pc = 0x21d160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 7));
label_21d164:
    // 0x21d164: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x21d164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_21d168:
    // 0x21d168: 0x23878  dsll        $a3, $v0, 1
    ctx->pc = 0x21d168u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 1);
label_21d16c:
    // 0x21d16c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x21d16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_21d170:
    // 0x21d170: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x21d170u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_21d174:
    // 0x21d174: 0x2922000c  slti        $v0, $t1, 0xC
    ctx->pc = 0x21d174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
label_21d178:
    // 0x21d178: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_21d17c:
    if (ctx->pc == 0x21D17Cu) {
        ctx->pc = 0x21D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D178u;
        // 0x21d17c: 0xe3382d  daddu       $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D180u;
        goto label_21d180;
    }
    ctx->pc = 0x21D178u;
    {
        const bool branch_taken_0x21d178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D178u;
        // 0x21d17c: 0xe3382d  daddu       $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d178) {
            ctx->pc = 0x21D144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d144;
        }
    }
    ctx->pc = 0x21D180u;
label_21d180:
    // 0x21d180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d184:
    // 0x21d184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d188:
    // 0x21d188: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21d188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d18c:
    // 0x21d18c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x21d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_21d190:
    // 0x21d190: 0x2463e150  addiu       $v1, $v1, -0x1EB0
    ctx->pc = 0x21d190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959440));
label_21d194:
    // 0x21d194: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21d198:
    // 0x21d198: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21d198u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21d19c:
    // 0x21d19c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21d1a0:
    if (ctx->pc == 0x21D1A0u) {
        ctx->pc = 0x21D1A4u;
        goto label_21d1a4;
    }
    ctx->pc = 0x21D19Cu;
    {
        const bool branch_taken_0x21d19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d19c) {
            ctx->pc = 0x21D1B8u;
            goto label_21d1b8;
        }
    }
    ctx->pc = 0x21D1A4u;
label_21d1a4:
    // 0x21d1a4: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x21d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
label_21d1a8:
    // 0x21d1a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21d1ac:
    // 0x21d1ac: 0xc2302d  daddu       $a2, $a2, $v0
    ctx->pc = 0x21d1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_21d1b0:
    // 0x21d1b0: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_21d1b4:
    if (ctx->pc == 0x21D1B4u) {
        ctx->pc = 0x21D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1B0u;
        // 0x21d1b4: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D1B8u;
        goto label_21d1b8;
    }
    ctx->pc = 0x21D1B0u;
    {
        const bool branch_taken_0x21d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1B0u;
        // 0x21d1b4: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1b0) {
            ctx->pc = 0x21D194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d194;
        }
    }
    ctx->pc = 0x21D1B8u;
label_21d1b8:
    // 0x21d1b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21d1b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d1bc:
    // 0x21d1bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d1c0:
    // 0x21d1c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21d1c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d1c4:
    // 0x21d1c4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x21d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_21d1c8:
    // 0x21d1c8: 0x2463e158  addiu       $v1, $v1, -0x1EA8
    ctx->pc = 0x21d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959448));
label_21d1cc:
    // 0x21d1cc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21d1d0:
    // 0x21d1d0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21d1d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21d1d4:
    // 0x21d1d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21d1d8:
    if (ctx->pc == 0x21D1D8u) {
        ctx->pc = 0x21D1DCu;
        goto label_21d1dc;
    }
    ctx->pc = 0x21D1D4u;
    {
        const bool branch_taken_0x21d1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d1d4) {
            ctx->pc = 0x21D1F0u;
            goto label_21d1f0;
        }
    }
    ctx->pc = 0x21D1DCu;
label_21d1dc:
    // 0x21d1dc: 0x1421014  dsllv       $v0, $v0, $t2
    ctx->pc = 0x21d1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 10) & 0x3F));
label_21d1e0:
    // 0x21d1e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21d1e4:
    // 0x21d1e4: 0x122482d  daddu       $t1, $t1, $v0
    ctx->pc = 0x21d1e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 2));
label_21d1e8:
    // 0x21d1e8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_21d1ec:
    if (ctx->pc == 0x21D1ECu) {
        ctx->pc = 0x21D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1E8u;
        // 0x21d1ec: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D1F0u;
        goto label_21d1f0;
    }
    ctx->pc = 0x21D1E8u;
    {
        const bool branch_taken_0x21d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1E8u;
        // 0x21d1ec: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1e8) {
            ctx->pc = 0x21D1CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d1cc;
        }
    }
    ctx->pc = 0x21D1F0u;
label_21d1f0:
    // 0x21d1f0: 0x1064026  xor         $t0, $t0, $a2
    ctx->pc = 0x21d1f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 6));
label_21d1f4:
    // 0x21d1f4: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x21d1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
label_21d1f8:
    // 0x21d1f8: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x21d1f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
label_21d1fc:
    // 0x21d1fc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x21d1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
label_21d200:
    // 0x21d200: 0x3e00008  jr          $ra
label_21d204:
    if (ctx->pc == 0x21D204u) {
        ctx->pc = 0x21D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D200u;
        // 0x21d204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D208u;
        goto label_21d208;
    }
    ctx->pc = 0x21D200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D200u;
        // 0x21d204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D208u;
label_21d208:
    // 0x21d208: 0x0  nop
    ctx->pc = 0x21d208u;
    // NOP
label_21d20c:
    // 0x21d20c: 0x0  nop
    ctx->pc = 0x21d20cu;
    // NOP
label_21d210:
    // 0x21d210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21d214:
    // 0x21d214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d218:
    // 0x21d218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21d21c:
    // 0x21d21c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21d21cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d220:
    // 0x21d220: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21d224:
    // 0x21d224: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21d224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21d228:
    // 0x21d228: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21d228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21d22c:
    // 0x21d22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21d230:
    // 0x21d230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d234:
    // 0x21d234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21d238:
    // 0x21d238: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x21d238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_21d23c:
    // 0x21d23c: 0x2463e150  addiu       $v1, $v1, -0x1EB0
    ctx->pc = 0x21d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959440));
label_21d240:
    // 0x21d240: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21d240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21d244:
    // 0x21d244: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21d244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21d248:
    // 0x21d248: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21d24c:
    if (ctx->pc == 0x21D24Cu) {
        ctx->pc = 0x21D250u;
        goto label_21d250;
    }
    ctx->pc = 0x21D248u;
    {
        const bool branch_taken_0x21d248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d248) {
            ctx->pc = 0x21D264u;
            goto label_21d264;
        }
    }
    ctx->pc = 0x21D250u;
label_21d250:
    // 0x21d250: 0xe21014  dsllv       $v0, $v0, $a3
    ctx->pc = 0x21d250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 7) & 0x3F));
label_21d254:
    // 0x21d254: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21d258:
    // 0x21d258: 0xc2302d  daddu       $a2, $a2, $v0
    ctx->pc = 0x21d258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_21d25c:
    // 0x21d25c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_21d260:
    if (ctx->pc == 0x21D260u) {
        ctx->pc = 0x21D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D25Cu;
        // 0x21d260: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D264u;
        goto label_21d264;
    }
    ctx->pc = 0x21D25Cu;
    {
        const bool branch_taken_0x21d25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D25Cu;
        // 0x21d260: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d25c) {
            ctx->pc = 0x21D240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d240;
        }
    }
    ctx->pc = 0x21D264u;
label_21d264:
    // 0x21d264: 0x0  nop
    ctx->pc = 0x21d264u;
    // NOP
label_21d268:
    // 0x21d268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21d268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d26c:
    // 0x21d26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d270:
    // 0x21d270: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21d270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d274:
    // 0x21d274: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x21d274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_21d278:
    // 0x21d278: 0x2463e158  addiu       $v1, $v1, -0x1EA8
    ctx->pc = 0x21d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959448));
label_21d27c:
    // 0x21d27c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x21d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_21d280:
    // 0x21d280: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x21d280u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_21d284:
    // 0x21d284: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_21d288:
    if (ctx->pc == 0x21D288u) {
        ctx->pc = 0x21D28Cu;
        goto label_21d28c;
    }
    ctx->pc = 0x21D284u;
    {
        const bool branch_taken_0x21d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d284) {
            ctx->pc = 0x21D2A0u;
            goto label_21d2a0;
        }
    }
    ctx->pc = 0x21D28Cu;
label_21d28c:
    // 0x21d28c: 0x1021014  dsllv       $v0, $v0, $t0
    ctx->pc = 0x21d28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 8) & 0x3F));
label_21d290:
    // 0x21d290: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21d290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21d294:
    // 0x21d294: 0xe2382d  daddu       $a3, $a3, $v0
    ctx->pc = 0x21d294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
label_21d298:
    // 0x21d298: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_21d29c:
    if (ctx->pc == 0x21D29Cu) {
        ctx->pc = 0x21D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D298u;
        // 0x21d29c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2A0u;
        goto label_21d2a0;
    }
    ctx->pc = 0x21D298u;
    {
        const bool branch_taken_0x21d298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D298u;
        // 0x21d29c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d298) {
            ctx->pc = 0x21D27Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d27c;
        }
    }
    ctx->pc = 0x21D2A0u;
label_21d2a0:
    // 0x21d2a0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x21d2a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_21d2a4:
    // 0x21d2a4: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x21d2a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_21d2a8:
    // 0x21d2a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21d2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d2ac:
    // 0x21d2ac: 0x668826  xor         $s1, $v1, $a2
    ctx->pc = 0x21d2acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
label_21d2b0:
    // 0x21d2b0: 0x479026  xor         $s2, $v0, $a3
    ctx->pc = 0x21d2b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
label_21d2b4:
    // 0x21d2b4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d2b8:
    // 0x21d2b8: 0xc06d9fe  jal         func_1B67F8
label_21d2bc:
    if (ctx->pc == 0x21D2BCu) {
        ctx->pc = 0x21D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2B8u;
        // 0x21d2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2C0u;
        goto label_21d2c0;
    }
    ctx->pc = 0x21D2B8u;
    SET_GPR_U32(ctx, 31, 0x21D2C0u);
    ctx->pc = 0x21D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2B8u;
    // 0x21d2bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D2C0u;
label_21d2c0:
    // 0x21d2c0: 0x64420041  daddiu      $v0, $v0, 0x41
    ctx->pc = 0x21d2c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d2c4:
    // 0x21d2c4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d2c8:
    // 0x21d2c8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x21d2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_21d2cc:
    // 0x21d2cc: 0xc06d89e  jal         func_1B6278
label_21d2d0:
    if (ctx->pc == 0x21D2D0u) {
        ctx->pc = 0x21D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2CCu;
        // 0x21d2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2D4u;
        goto label_21d2d4;
    }
    ctx->pc = 0x21D2CCu;
    SET_GPR_U32(ctx, 31, 0x21D2D4u);
    ctx->pc = 0x21D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2CCu;
    // 0x21d2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D2D4u;
label_21d2d4:
    // 0x21d2d4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d2d8:
    // 0x21d2d8: 0xc06d9fe  jal         func_1B67F8
label_21d2dc:
    if (ctx->pc == 0x21D2DCu) {
        ctx->pc = 0x21D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2D8u;
        // 0x21d2dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2E0u;
        goto label_21d2e0;
    }
    ctx->pc = 0x21D2D8u;
    SET_GPR_U32(ctx, 31, 0x21D2E0u);
    ctx->pc = 0x21D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2D8u;
    // 0x21d2dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D2E0u;
label_21d2e0:
    // 0x21d2e0: 0x64420041  daddiu      $v0, $v0, 0x41
    ctx->pc = 0x21d2e0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d2e4:
    // 0x21d2e4: 0x240502a4  addiu       $a1, $zero, 0x2A4
    ctx->pc = 0x21d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
label_21d2e8:
    // 0x21d2e8: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x21d2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_21d2ec:
    // 0x21d2ec: 0xc06d89e  jal         func_1B6278
label_21d2f0:
    if (ctx->pc == 0x21D2F0u) {
        ctx->pc = 0x21D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2ECu;
        // 0x21d2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2F4u;
        goto label_21d2f4;
    }
    ctx->pc = 0x21D2ECu;
    SET_GPR_U32(ctx, 31, 0x21D2F4u);
    ctx->pc = 0x21D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2ECu;
    // 0x21d2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D2F4u;
label_21d2f4:
    // 0x21d2f4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d2f8:
    // 0x21d2f8: 0xc06d9fe  jal         func_1B67F8
label_21d2fc:
    if (ctx->pc == 0x21D2FCu) {
        ctx->pc = 0x21D2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2F8u;
        // 0x21d2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D300u;
        goto label_21d300;
    }
    ctx->pc = 0x21D2F8u;
    SET_GPR_U32(ctx, 31, 0x21D300u);
    ctx->pc = 0x21D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2F8u;
    // 0x21d2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D300u;
label_21d300:
    // 0x21d300: 0x64420041  daddiu      $v0, $v0, 0x41
    ctx->pc = 0x21d300u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d304:
    // 0x21d304: 0x240544a8  addiu       $a1, $zero, 0x44A8
    ctx->pc = 0x21d304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17576));
label_21d308:
    // 0x21d308: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x21d308u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_21d30c:
    // 0x21d30c: 0xc06d89e  jal         func_1B6278
label_21d310:
    if (ctx->pc == 0x21D310u) {
        ctx->pc = 0x21D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D30Cu;
        // 0x21d310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D314u;
        goto label_21d314;
    }
    ctx->pc = 0x21D30Cu;
    SET_GPR_U32(ctx, 31, 0x21D314u);
    ctx->pc = 0x21D310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D30Cu;
    // 0x21d310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D314u;
label_21d314:
    // 0x21d314: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d318:
    // 0x21d318: 0xc06d9fe  jal         func_1B67F8
label_21d31c:
    if (ctx->pc == 0x21D31Cu) {
        ctx->pc = 0x21D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D318u;
        // 0x21d31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D320u;
        goto label_21d320;
    }
    ctx->pc = 0x21D318u;
    SET_GPR_U32(ctx, 31, 0x21D320u);
    ctx->pc = 0x21D31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D318u;
    // 0x21d31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D320u;
label_21d320:
    // 0x21d320: 0x64430041  daddiu      $v1, $v0, 0x41
    ctx->pc = 0x21d320u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d324:
    // 0x21d324: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d328:
    // 0x21d328: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x21d328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_21d32c:
    // 0x21d32c: 0xa2630003  sb          $v1, 0x3($s3)
    ctx->pc = 0x21d32cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 3));
label_21d330:
    // 0x21d330: 0xc06d89e  jal         func_1B6278
label_21d334:
    if (ctx->pc == 0x21D334u) {
        ctx->pc = 0x21D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D330u;
        // 0x21d334: 0x3445f910  ori         $a1, $v0, 0xF910 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63760);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D338u;
        goto label_21d338;
    }
    ctx->pc = 0x21D330u;
    SET_GPR_U32(ctx, 31, 0x21D338u);
    ctx->pc = 0x21D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D330u;
    // 0x21d334: 0x3445f910  ori         $a1, $v0, 0xF910 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63760);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D338u;
label_21d338:
    // 0x21d338: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d33c:
    // 0x21d33c: 0xc06d9fe  jal         func_1B67F8
label_21d340:
    if (ctx->pc == 0x21D340u) {
        ctx->pc = 0x21D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D33Cu;
        // 0x21d340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D344u;
        goto label_21d344;
    }
    ctx->pc = 0x21D33Cu;
    SET_GPR_U32(ctx, 31, 0x21D344u);
    ctx->pc = 0x21D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D33Cu;
    // 0x21d340: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D344u;
label_21d344:
    // 0x21d344: 0x64430041  daddiu      $v1, $v0, 0x41
    ctx->pc = 0x21d344u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d348:
    // 0x21d348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d34c:
    // 0x21d34c: 0x3c0200b5  lui         $v0, 0xB5
    ctx->pc = 0x21d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)181 << 16));
label_21d350:
    // 0x21d350: 0xa2630004  sb          $v1, 0x4($s3)
    ctx->pc = 0x21d350u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 3));
label_21d354:
    // 0x21d354: 0xc06d89e  jal         func_1B6278
label_21d358:
    if (ctx->pc == 0x21D358u) {
        ctx->pc = 0x21D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D354u;
        // 0x21d358: 0x34454ba0  ori         $a1, $v0, 0x4BA0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19360);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D35Cu;
        goto label_21d35c;
    }
    ctx->pc = 0x21D354u;
    SET_GPR_U32(ctx, 31, 0x21D35Cu);
    ctx->pc = 0x21D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D354u;
    // 0x21d358: 0x34454ba0  ori         $a1, $v0, 0x4BA0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19360);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D35Cu;
label_21d35c:
    // 0x21d35c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d360:
    // 0x21d360: 0xc06d9fe  jal         func_1B67F8
label_21d364:
    if (ctx->pc == 0x21D364u) {
        ctx->pc = 0x21D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D360u;
        // 0x21d364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D368u;
        goto label_21d368;
    }
    ctx->pc = 0x21D360u;
    SET_GPR_U32(ctx, 31, 0x21D368u);
    ctx->pc = 0x21D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D360u;
    // 0x21d364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D368u;
label_21d368:
    // 0x21d368: 0x64430041  daddiu      $v1, $v0, 0x41
    ctx->pc = 0x21d368u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d36c:
    // 0x21d36c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d370:
    // 0x21d370: 0x3c021269  lui         $v0, 0x1269
    ctx->pc = 0x21d370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4713 << 16));
label_21d374:
    // 0x21d374: 0xa2630005  sb          $v1, 0x5($s3)
    ctx->pc = 0x21d374u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 3));
label_21d378:
    // 0x21d378: 0xc06d89e  jal         func_1B6278
label_21d37c:
    if (ctx->pc == 0x21D37Cu) {
        ctx->pc = 0x21D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D378u;
        // 0x21d37c: 0x3445ae40  ori         $a1, $v0, 0xAE40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44608);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D380u;
        goto label_21d380;
    }
    ctx->pc = 0x21D378u;
    SET_GPR_U32(ctx, 31, 0x21D380u);
    ctx->pc = 0x21D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D378u;
    // 0x21d37c: 0x3445ae40  ori         $a1, $v0, 0xAE40 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44608);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D380u;
label_21d380:
    // 0x21d380: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d384:
    // 0x21d384: 0xc06d9fe  jal         func_1B67F8
label_21d388:
    if (ctx->pc == 0x21D388u) {
        ctx->pc = 0x21D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D384u;
        // 0x21d388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D38Cu;
        goto label_21d38c;
    }
    ctx->pc = 0x21D384u;
    SET_GPR_U32(ctx, 31, 0x21D38Cu);
    ctx->pc = 0x21D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D384u;
    // 0x21d388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D38Cu;
label_21d38c:
    // 0x21d38c: 0x64430041  daddiu      $v1, $v0, 0x41
    ctx->pc = 0x21d38cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d390:
    // 0x21d390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d394:
    // 0x21d394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d398:
    // 0x21d398: 0xa2630006  sb          $v1, 0x6($s3)
    ctx->pc = 0x21d398u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 6), (uint8_t)GPR_U32(ctx, 3));
label_21d39c:
    // 0x21d39c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21d39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21d3a0:
    // 0x21d3a0: 0x3402debb  ori         $v0, $zero, 0xDEBB
    ctx->pc = 0x21d3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57019);
label_21d3a4:
    // 0x21d3a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21d3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_21d3a8:
    // 0x21d3a8: 0x3442b280  ori         $v0, $v0, 0xB280
    ctx->pc = 0x21d3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45696);
label_21d3ac:
    // 0x21d3ac: 0xc06d89e  jal         func_1B6278
label_21d3b0:
    if (ctx->pc == 0x21D3B0u) {
        ctx->pc = 0x21D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3ACu;
        // 0x21d3b0: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D3B4u;
        goto label_21d3b4;
    }
    ctx->pc = 0x21D3ACu;
    SET_GPR_U32(ctx, 31, 0x21D3B4u);
    ctx->pc = 0x21D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3ACu;
    // 0x21d3b0: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D3B4u;
label_21d3b4:
    // 0x21d3b4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x21d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_21d3b8:
    // 0x21d3b8: 0xc06d9fe  jal         func_1B67F8
label_21d3bc:
    if (ctx->pc == 0x21D3BCu) {
        ctx->pc = 0x21D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3B8u;
        // 0x21d3bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D3C0u;
        goto label_21d3c0;
    }
    ctx->pc = 0x21D3B8u;
    SET_GPR_U32(ctx, 31, 0x21D3C0u);
    ctx->pc = 0x21D3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3B8u;
    // 0x21d3bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x21D3C0u;
label_21d3c0:
    // 0x21d3c0: 0x64420041  daddiu      $v0, $v0, 0x41
    ctx->pc = 0x21d3c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)65);
label_21d3c4:
    // 0x21d3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d3c8:
    // 0x21d3c8: 0xa2620007  sb          $v0, 0x7($s3)
    ctx->pc = 0x21d3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7), (uint8_t)GPR_U32(ctx, 2));
label_21d3cc:
    // 0x21d3cc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x21d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_21d3d0:
    // 0x21d3d0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21d3d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_21d3d4:
    // 0x21d3d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21d3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21d3d8:
    // 0x21d3d8: 0x34029f10  ori         $v0, $zero, 0x9F10
    ctx->pc = 0x21d3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40720);
label_21d3dc:
    // 0x21d3dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21d3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_21d3e0:
    // 0x21d3e0: 0x34422100  ori         $v0, $v0, 0x2100
    ctx->pc = 0x21d3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8448);
label_21d3e4:
    // 0x21d3e4: 0xc06d89e  jal         func_1B6278
label_21d3e8:
    if (ctx->pc == 0x21D3E8u) {
        ctx->pc = 0x21D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3E4u;
        // 0x21d3e8: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D3ECu;
        goto label_21d3ec;
    }
    ctx->pc = 0x21D3E4u;
    SET_GPR_U32(ctx, 31, 0x21D3ECu);
    ctx->pc = 0x21D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3E4u;
    // 0x21d3e8: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6278u;
    { ctx->pc = 0x1b6278; return; }
    ctx->pc = 0x21D3ECu;
label_21d3ec:
    // 0x21d3ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21d3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d3f0:
    // 0x21d3f0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x21d3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_21d3f4:
    // 0x21d3f4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x21d3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_21d3f8:
    // 0x21d3f8: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_21d3fc:
    if (ctx->pc == 0x21D3FCu) {
        ctx->pc = 0x21D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3F8u;
        // 0x21d3fc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D400u;
        goto label_21d400;
    }
    ctx->pc = 0x21D3F8u;
    {
        const bool branch_taken_0x21d3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3F8u;
        // 0x21d3fc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3f8) {
            ctx->pc = 0x21D2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d2b8;
        }
    }
    ctx->pc = 0x21D400u;
label_21d400:
    // 0x21d400: 0x2a01000c  slti        $at, $s0, 0xC
    ctx->pc = 0x21d400u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_21d404:
    // 0x21d404: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x21d408u;
    return;
}

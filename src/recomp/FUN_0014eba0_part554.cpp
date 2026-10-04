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


void FUN_0014eba0_part554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25cbf0u: goto label_25cbf0;
        case 0x25cbf4u: goto label_25cbf4;
        case 0x25cbf8u: goto label_25cbf8;
        case 0x25cbfcu: goto label_25cbfc;
        case 0x25cc00u: goto label_25cc00;
        case 0x25cc04u: goto label_25cc04;
        case 0x25cc08u: goto label_25cc08;
        case 0x25cc0cu: goto label_25cc0c;
        case 0x25cc10u: goto label_25cc10;
        case 0x25cc14u: goto label_25cc14;
        case 0x25cc18u: goto label_25cc18;
        case 0x25cc1cu: goto label_25cc1c;
        case 0x25cc20u: goto label_25cc20;
        case 0x25cc24u: goto label_25cc24;
        case 0x25cc28u: goto label_25cc28;
        case 0x25cc2cu: goto label_25cc2c;
        case 0x25cc30u: goto label_25cc30;
        case 0x25cc34u: goto label_25cc34;
        case 0x25cc38u: goto label_25cc38;
        case 0x25cc3cu: goto label_25cc3c;
        case 0x25cc40u: goto label_25cc40;
        case 0x25cc44u: goto label_25cc44;
        case 0x25cc48u: goto label_25cc48;
        case 0x25cc4cu: goto label_25cc4c;
        case 0x25cc50u: goto label_25cc50;
        case 0x25cc54u: goto label_25cc54;
        case 0x25cc58u: goto label_25cc58;
        case 0x25cc5cu: goto label_25cc5c;
        case 0x25cc60u: goto label_25cc60;
        case 0x25cc64u: goto label_25cc64;
        case 0x25cc68u: goto label_25cc68;
        case 0x25cc6cu: goto label_25cc6c;
        case 0x25cc70u: goto label_25cc70;
        case 0x25cc74u: goto label_25cc74;
        case 0x25cc78u: goto label_25cc78;
        case 0x25cc7cu: goto label_25cc7c;
        case 0x25cc80u: goto label_25cc80;
        case 0x25cc84u: goto label_25cc84;
        case 0x25cc88u: goto label_25cc88;
        case 0x25cc8cu: goto label_25cc8c;
        case 0x25cc90u: goto label_25cc90;
        case 0x25cc94u: goto label_25cc94;
        case 0x25cc98u: goto label_25cc98;
        case 0x25cc9cu: goto label_25cc9c;
        case 0x25cca0u: goto label_25cca0;
        case 0x25cca4u: goto label_25cca4;
        case 0x25cca8u: goto label_25cca8;
        case 0x25ccacu: goto label_25ccac;
        case 0x25ccb0u: goto label_25ccb0;
        case 0x25ccb4u: goto label_25ccb4;
        case 0x25ccb8u: goto label_25ccb8;
        case 0x25ccbcu: goto label_25ccbc;
        case 0x25ccc0u: goto label_25ccc0;
        case 0x25ccc4u: goto label_25ccc4;
        case 0x25ccc8u: goto label_25ccc8;
        case 0x25ccccu: goto label_25cccc;
        case 0x25ccd0u: goto label_25ccd0;
        case 0x25ccd4u: goto label_25ccd4;
        case 0x25ccd8u: goto label_25ccd8;
        case 0x25ccdcu: goto label_25ccdc;
        case 0x25cce0u: goto label_25cce0;
        case 0x25cce4u: goto label_25cce4;
        case 0x25cce8u: goto label_25cce8;
        case 0x25ccecu: goto label_25ccec;
        case 0x25ccf0u: goto label_25ccf0;
        case 0x25ccf4u: goto label_25ccf4;
        case 0x25ccf8u: goto label_25ccf8;
        case 0x25ccfcu: goto label_25ccfc;
        case 0x25cd00u: goto label_25cd00;
        case 0x25cd04u: goto label_25cd04;
        case 0x25cd08u: goto label_25cd08;
        case 0x25cd0cu: goto label_25cd0c;
        case 0x25cd10u: goto label_25cd10;
        case 0x25cd14u: goto label_25cd14;
        case 0x25cd18u: goto label_25cd18;
        case 0x25cd1cu: goto label_25cd1c;
        case 0x25cd20u: goto label_25cd20;
        case 0x25cd24u: goto label_25cd24;
        case 0x25cd28u: goto label_25cd28;
        case 0x25cd2cu: goto label_25cd2c;
        case 0x25cd30u: goto label_25cd30;
        case 0x25cd34u: goto label_25cd34;
        case 0x25cd38u: goto label_25cd38;
        case 0x25cd3cu: goto label_25cd3c;
        case 0x25cd40u: goto label_25cd40;
        case 0x25cd44u: goto label_25cd44;
        case 0x25cd48u: goto label_25cd48;
        case 0x25cd4cu: goto label_25cd4c;
        case 0x25cd50u: goto label_25cd50;
        case 0x25cd54u: goto label_25cd54;
        case 0x25cd58u: goto label_25cd58;
        case 0x25cd5cu: goto label_25cd5c;
        case 0x25cd60u: goto label_25cd60;
        case 0x25cd64u: goto label_25cd64;
        case 0x25cd68u: goto label_25cd68;
        case 0x25cd6cu: goto label_25cd6c;
        case 0x25cd70u: goto label_25cd70;
        case 0x25cd74u: goto label_25cd74;
        case 0x25cd78u: goto label_25cd78;
        case 0x25cd7cu: goto label_25cd7c;
        case 0x25cd80u: goto label_25cd80;
        case 0x25cd84u: goto label_25cd84;
        case 0x25cd88u: goto label_25cd88;
        case 0x25cd8cu: goto label_25cd8c;
        case 0x25cd90u: goto label_25cd90;
        case 0x25cd94u: goto label_25cd94;
        case 0x25cd98u: goto label_25cd98;
        case 0x25cd9cu: goto label_25cd9c;
        case 0x25cda0u: goto label_25cda0;
        case 0x25cda4u: goto label_25cda4;
        case 0x25cda8u: goto label_25cda8;
        case 0x25cdacu: goto label_25cdac;
        case 0x25cdb0u: goto label_25cdb0;
        case 0x25cdb4u: goto label_25cdb4;
        case 0x25cdb8u: goto label_25cdb8;
        case 0x25cdbcu: goto label_25cdbc;
        case 0x25cdc0u: goto label_25cdc0;
        case 0x25cdc4u: goto label_25cdc4;
        case 0x25cdc8u: goto label_25cdc8;
        case 0x25cdccu: goto label_25cdcc;
        case 0x25cdd0u: goto label_25cdd0;
        case 0x25cdd4u: goto label_25cdd4;
        case 0x25cdd8u: goto label_25cdd8;
        case 0x25cddcu: goto label_25cddc;
        case 0x25cde0u: goto label_25cde0;
        case 0x25cde4u: goto label_25cde4;
        case 0x25cde8u: goto label_25cde8;
        case 0x25cdecu: goto label_25cdec;
        case 0x25cdf0u: goto label_25cdf0;
        case 0x25cdf4u: goto label_25cdf4;
        case 0x25cdf8u: goto label_25cdf8;
        case 0x25cdfcu: goto label_25cdfc;
        case 0x25ce00u: goto label_25ce00;
        case 0x25ce04u: goto label_25ce04;
        case 0x25ce08u: goto label_25ce08;
        case 0x25ce0cu: goto label_25ce0c;
        case 0x25ce10u: goto label_25ce10;
        case 0x25ce14u: goto label_25ce14;
        case 0x25ce18u: goto label_25ce18;
        case 0x25ce1cu: goto label_25ce1c;
        case 0x25ce20u: goto label_25ce20;
        case 0x25ce24u: goto label_25ce24;
        case 0x25ce28u: goto label_25ce28;
        case 0x25ce2cu: goto label_25ce2c;
        case 0x25ce30u: goto label_25ce30;
        case 0x25ce34u: goto label_25ce34;
        case 0x25ce38u: goto label_25ce38;
        case 0x25ce3cu: goto label_25ce3c;
        case 0x25ce40u: goto label_25ce40;
        case 0x25ce44u: goto label_25ce44;
        case 0x25ce48u: goto label_25ce48;
        case 0x25ce4cu: goto label_25ce4c;
        case 0x25ce50u: goto label_25ce50;
        case 0x25ce54u: goto label_25ce54;
        case 0x25ce58u: goto label_25ce58;
        case 0x25ce5cu: goto label_25ce5c;
        case 0x25ce60u: goto label_25ce60;
        case 0x25ce64u: goto label_25ce64;
        case 0x25ce68u: goto label_25ce68;
        case 0x25ce6cu: goto label_25ce6c;
        case 0x25ce70u: goto label_25ce70;
        case 0x25ce74u: goto label_25ce74;
        case 0x25ce78u: goto label_25ce78;
        case 0x25ce7cu: goto label_25ce7c;
        case 0x25ce80u: goto label_25ce80;
        case 0x25ce84u: goto label_25ce84;
        case 0x25ce88u: goto label_25ce88;
        case 0x25ce8cu: goto label_25ce8c;
        case 0x25ce90u: goto label_25ce90;
        case 0x25ce94u: goto label_25ce94;
        case 0x25ce98u: goto label_25ce98;
        case 0x25ce9cu: goto label_25ce9c;
        case 0x25cea0u: goto label_25cea0;
        case 0x25cea4u: goto label_25cea4;
        case 0x25cea8u: goto label_25cea8;
        case 0x25ceacu: goto label_25ceac;
        case 0x25ceb0u: goto label_25ceb0;
        case 0x25ceb4u: goto label_25ceb4;
        case 0x25ceb8u: goto label_25ceb8;
        case 0x25cebcu: goto label_25cebc;
        case 0x25cec0u: goto label_25cec0;
        case 0x25cec4u: goto label_25cec4;
        case 0x25cec8u: goto label_25cec8;
        case 0x25ceccu: goto label_25cecc;
        case 0x25ced0u: goto label_25ced0;
        case 0x25ced4u: goto label_25ced4;
        case 0x25ced8u: goto label_25ced8;
        case 0x25cedcu: goto label_25cedc;
        case 0x25cee0u: goto label_25cee0;
        case 0x25cee4u: goto label_25cee4;
        case 0x25cee8u: goto label_25cee8;
        case 0x25ceecu: goto label_25ceec;
        case 0x25cef0u: goto label_25cef0;
        case 0x25cef4u: goto label_25cef4;
        case 0x25cef8u: goto label_25cef8;
        case 0x25cefcu: goto label_25cefc;
        case 0x25cf00u: goto label_25cf00;
        case 0x25cf04u: goto label_25cf04;
        case 0x25cf08u: goto label_25cf08;
        case 0x25cf0cu: goto label_25cf0c;
        case 0x25cf10u: goto label_25cf10;
        case 0x25cf14u: goto label_25cf14;
        case 0x25cf18u: goto label_25cf18;
        case 0x25cf1cu: goto label_25cf1c;
        case 0x25cf20u: goto label_25cf20;
        case 0x25cf24u: goto label_25cf24;
        case 0x25cf28u: goto label_25cf28;
        case 0x25cf2cu: goto label_25cf2c;
        case 0x25cf30u: goto label_25cf30;
        case 0x25cf34u: goto label_25cf34;
        case 0x25cf38u: goto label_25cf38;
        case 0x25cf3cu: goto label_25cf3c;
        case 0x25cf40u: goto label_25cf40;
        case 0x25cf44u: goto label_25cf44;
        case 0x25cf48u: goto label_25cf48;
        case 0x25cf4cu: goto label_25cf4c;
        case 0x25cf50u: goto label_25cf50;
        case 0x25cf54u: goto label_25cf54;
        case 0x25cf58u: goto label_25cf58;
        case 0x25cf5cu: goto label_25cf5c;
        case 0x25cf60u: goto label_25cf60;
        case 0x25cf64u: goto label_25cf64;
        case 0x25cf68u: goto label_25cf68;
        case 0x25cf6cu: goto label_25cf6c;
        case 0x25cf70u: goto label_25cf70;
        case 0x25cf74u: goto label_25cf74;
        case 0x25cf78u: goto label_25cf78;
        case 0x25cf7cu: goto label_25cf7c;
        case 0x25cf80u: goto label_25cf80;
        case 0x25cf84u: goto label_25cf84;
        case 0x25cf88u: goto label_25cf88;
        case 0x25cf8cu: goto label_25cf8c;
        case 0x25cf90u: goto label_25cf90;
        case 0x25cf94u: goto label_25cf94;
        case 0x25cf98u: goto label_25cf98;
        case 0x25cf9cu: goto label_25cf9c;
        case 0x25cfa0u: goto label_25cfa0;
        case 0x25cfa4u: goto label_25cfa4;
        case 0x25cfa8u: goto label_25cfa8;
        case 0x25cfacu: goto label_25cfac;
        case 0x25cfb0u: goto label_25cfb0;
        case 0x25cfb4u: goto label_25cfb4;
        case 0x25cfb8u: goto label_25cfb8;
        case 0x25cfbcu: goto label_25cfbc;
        case 0x25cfc0u: goto label_25cfc0;
        case 0x25cfc4u: goto label_25cfc4;
        case 0x25cfc8u: goto label_25cfc8;
        case 0x25cfccu: goto label_25cfcc;
        case 0x25cfd0u: goto label_25cfd0;
        case 0x25cfd4u: goto label_25cfd4;
        case 0x25cfd8u: goto label_25cfd8;
        case 0x25cfdcu: goto label_25cfdc;
        case 0x25cfe0u: goto label_25cfe0;
        case 0x25cfe4u: goto label_25cfe4;
        case 0x25cfe8u: goto label_25cfe8;
        case 0x25cfecu: goto label_25cfec;
        case 0x25cff0u: goto label_25cff0;
        case 0x25cff4u: goto label_25cff4;
        case 0x25cff8u: goto label_25cff8;
        case 0x25cffcu: goto label_25cffc;
        case 0x25d000u: goto label_25d000;
        case 0x25d004u: goto label_25d004;
        case 0x25d008u: goto label_25d008;
        case 0x25d00cu: goto label_25d00c;
        case 0x25d010u: goto label_25d010;
        case 0x25d014u: goto label_25d014;
        case 0x25d018u: goto label_25d018;
        case 0x25d01cu: goto label_25d01c;
        case 0x25d020u: goto label_25d020;
        case 0x25d024u: goto label_25d024;
        case 0x25d028u: goto label_25d028;
        case 0x25d02cu: goto label_25d02c;
        case 0x25d030u: goto label_25d030;
        case 0x25d034u: goto label_25d034;
        case 0x25d038u: goto label_25d038;
        case 0x25d03cu: goto label_25d03c;
        case 0x25d040u: goto label_25d040;
        case 0x25d044u: goto label_25d044;
        case 0x25d048u: goto label_25d048;
        case 0x25d04cu: goto label_25d04c;
        case 0x25d050u: goto label_25d050;
        case 0x25d054u: goto label_25d054;
        case 0x25d058u: goto label_25d058;
        case 0x25d05cu: goto label_25d05c;
        case 0x25d060u: goto label_25d060;
        case 0x25d064u: goto label_25d064;
        case 0x25d068u: goto label_25d068;
        case 0x25d06cu: goto label_25d06c;
        case 0x25d070u: goto label_25d070;
        case 0x25d074u: goto label_25d074;
        case 0x25d078u: goto label_25d078;
        case 0x25d07cu: goto label_25d07c;
        case 0x25d080u: goto label_25d080;
        case 0x25d084u: goto label_25d084;
        case 0x25d088u: goto label_25d088;
        case 0x25d08cu: goto label_25d08c;
        case 0x25d090u: goto label_25d090;
        case 0x25d094u: goto label_25d094;
        case 0x25d098u: goto label_25d098;
        case 0x25d09cu: goto label_25d09c;
        case 0x25d0a0u: goto label_25d0a0;
        case 0x25d0a4u: goto label_25d0a4;
        case 0x25d0a8u: goto label_25d0a8;
        case 0x25d0acu: goto label_25d0ac;
        case 0x25d0b0u: goto label_25d0b0;
        case 0x25d0b4u: goto label_25d0b4;
        case 0x25d0b8u: goto label_25d0b8;
        case 0x25d0bcu: goto label_25d0bc;
        case 0x25d0c0u: goto label_25d0c0;
        case 0x25d0c4u: goto label_25d0c4;
        case 0x25d0c8u: goto label_25d0c8;
        case 0x25d0ccu: goto label_25d0cc;
        case 0x25d0d0u: goto label_25d0d0;
        case 0x25d0d4u: goto label_25d0d4;
        case 0x25d0d8u: goto label_25d0d8;
        case 0x25d0dcu: goto label_25d0dc;
        case 0x25d0e0u: goto label_25d0e0;
        case 0x25d0e4u: goto label_25d0e4;
        case 0x25d0e8u: goto label_25d0e8;
        case 0x25d0ecu: goto label_25d0ec;
        case 0x25d0f0u: goto label_25d0f0;
        case 0x25d0f4u: goto label_25d0f4;
        case 0x25d0f8u: goto label_25d0f8;
        case 0x25d0fcu: goto label_25d0fc;
        case 0x25d100u: goto label_25d100;
        case 0x25d104u: goto label_25d104;
        case 0x25d108u: goto label_25d108;
        case 0x25d10cu: goto label_25d10c;
        case 0x25d110u: goto label_25d110;
        case 0x25d114u: goto label_25d114;
        case 0x25d118u: goto label_25d118;
        case 0x25d11cu: goto label_25d11c;
        case 0x25d120u: goto label_25d120;
        case 0x25d124u: goto label_25d124;
        case 0x25d128u: goto label_25d128;
        case 0x25d12cu: goto label_25d12c;
        case 0x25d130u: goto label_25d130;
        case 0x25d134u: goto label_25d134;
        case 0x25d138u: goto label_25d138;
        case 0x25d13cu: goto label_25d13c;
        case 0x25d140u: goto label_25d140;
        case 0x25d144u: goto label_25d144;
        case 0x25d148u: goto label_25d148;
        case 0x25d14cu: goto label_25d14c;
        case 0x25d150u: goto label_25d150;
        case 0x25d154u: goto label_25d154;
        case 0x25d158u: goto label_25d158;
        case 0x25d15cu: goto label_25d15c;
        case 0x25d160u: goto label_25d160;
        case 0x25d164u: goto label_25d164;
        case 0x25d168u: goto label_25d168;
        case 0x25d16cu: goto label_25d16c;
        case 0x25d170u: goto label_25d170;
        case 0x25d174u: goto label_25d174;
        case 0x25d178u: goto label_25d178;
        case 0x25d17cu: goto label_25d17c;
        case 0x25d180u: goto label_25d180;
        case 0x25d184u: goto label_25d184;
        case 0x25d188u: goto label_25d188;
        case 0x25d18cu: goto label_25d18c;
        case 0x25d190u: goto label_25d190;
        case 0x25d194u: goto label_25d194;
        case 0x25d198u: goto label_25d198;
        case 0x25d19cu: goto label_25d19c;
        case 0x25d1a0u: goto label_25d1a0;
        case 0x25d1a4u: goto label_25d1a4;
        case 0x25d1a8u: goto label_25d1a8;
        case 0x25d1acu: goto label_25d1ac;
        case 0x25d1b0u: goto label_25d1b0;
        case 0x25d1b4u: goto label_25d1b4;
        case 0x25d1b8u: goto label_25d1b8;
        case 0x25d1bcu: goto label_25d1bc;
        case 0x25d1c0u: goto label_25d1c0;
        case 0x25d1c4u: goto label_25d1c4;
        case 0x25d1c8u: goto label_25d1c8;
        case 0x25d1ccu: goto label_25d1cc;
        case 0x25d1d0u: goto label_25d1d0;
        case 0x25d1d4u: goto label_25d1d4;
        case 0x25d1d8u: goto label_25d1d8;
        case 0x25d1dcu: goto label_25d1dc;
        case 0x25d1e0u: goto label_25d1e0;
        case 0x25d1e4u: goto label_25d1e4;
        case 0x25d1e8u: goto label_25d1e8;
        case 0x25d1ecu: goto label_25d1ec;
        case 0x25d1f0u: goto label_25d1f0;
        case 0x25d1f4u: goto label_25d1f4;
        case 0x25d1f8u: goto label_25d1f8;
        case 0x25d1fcu: goto label_25d1fc;
        case 0x25d200u: goto label_25d200;
        case 0x25d204u: goto label_25d204;
        case 0x25d208u: goto label_25d208;
        case 0x25d20cu: goto label_25d20c;
        case 0x25d210u: goto label_25d210;
        case 0x25d214u: goto label_25d214;
        case 0x25d218u: goto label_25d218;
        case 0x25d21cu: goto label_25d21c;
        case 0x25d220u: goto label_25d220;
        case 0x25d224u: goto label_25d224;
        case 0x25d228u: goto label_25d228;
        case 0x25d22cu: goto label_25d22c;
        case 0x25d230u: goto label_25d230;
        case 0x25d234u: goto label_25d234;
        case 0x25d238u: goto label_25d238;
        case 0x25d23cu: goto label_25d23c;
        case 0x25d240u: goto label_25d240;
        case 0x25d244u: goto label_25d244;
        case 0x25d248u: goto label_25d248;
        case 0x25d24cu: goto label_25d24c;
        case 0x25d250u: goto label_25d250;
        case 0x25d254u: goto label_25d254;
        case 0x25d258u: goto label_25d258;
        case 0x25d25cu: goto label_25d25c;
        case 0x25d260u: goto label_25d260;
        case 0x25d264u: goto label_25d264;
        case 0x25d268u: goto label_25d268;
        case 0x25d26cu: goto label_25d26c;
        case 0x25d270u: goto label_25d270;
        case 0x25d274u: goto label_25d274;
        case 0x25d278u: goto label_25d278;
        case 0x25d27cu: goto label_25d27c;
        case 0x25d280u: goto label_25d280;
        case 0x25d284u: goto label_25d284;
        case 0x25d288u: goto label_25d288;
        case 0x25d28cu: goto label_25d28c;
        case 0x25d290u: goto label_25d290;
        case 0x25d294u: goto label_25d294;
        case 0x25d298u: goto label_25d298;
        case 0x25d29cu: goto label_25d29c;
        case 0x25d2a0u: goto label_25d2a0;
        case 0x25d2a4u: goto label_25d2a4;
        case 0x25d2a8u: goto label_25d2a8;
        case 0x25d2acu: goto label_25d2ac;
        case 0x25d2b0u: goto label_25d2b0;
        case 0x25d2b4u: goto label_25d2b4;
        case 0x25d2b8u: goto label_25d2b8;
        case 0x25d2bcu: goto label_25d2bc;
        case 0x25d2c0u: goto label_25d2c0;
        case 0x25d2c4u: goto label_25d2c4;
        case 0x25d2c8u: goto label_25d2c8;
        case 0x25d2ccu: goto label_25d2cc;
        case 0x25d2d0u: goto label_25d2d0;
        case 0x25d2d4u: goto label_25d2d4;
        case 0x25d2d8u: goto label_25d2d8;
        case 0x25d2dcu: goto label_25d2dc;
        case 0x25d2e0u: goto label_25d2e0;
        case 0x25d2e4u: goto label_25d2e4;
        case 0x25d2e8u: goto label_25d2e8;
        case 0x25d2ecu: goto label_25d2ec;
        case 0x25d2f0u: goto label_25d2f0;
        case 0x25d2f4u: goto label_25d2f4;
        case 0x25d2f8u: goto label_25d2f8;
        case 0x25d2fcu: goto label_25d2fc;
        case 0x25d300u: goto label_25d300;
        case 0x25d304u: goto label_25d304;
        case 0x25d308u: goto label_25d308;
        case 0x25d30cu: goto label_25d30c;
        case 0x25d310u: goto label_25d310;
        case 0x25d314u: goto label_25d314;
        case 0x25d318u: goto label_25d318;
        case 0x25d31cu: goto label_25d31c;
        case 0x25d320u: goto label_25d320;
        case 0x25d324u: goto label_25d324;
        case 0x25d328u: goto label_25d328;
        case 0x25d32cu: goto label_25d32c;
        case 0x25d330u: goto label_25d330;
        case 0x25d334u: goto label_25d334;
        case 0x25d338u: goto label_25d338;
        case 0x25d33cu: goto label_25d33c;
        case 0x25d340u: goto label_25d340;
        case 0x25d344u: goto label_25d344;
        case 0x25d348u: goto label_25d348;
        case 0x25d34cu: goto label_25d34c;
        case 0x25d350u: goto label_25d350;
        case 0x25d354u: goto label_25d354;
        case 0x25d358u: goto label_25d358;
        case 0x25d35cu: goto label_25d35c;
        case 0x25d360u: goto label_25d360;
        case 0x25d364u: goto label_25d364;
        case 0x25d368u: goto label_25d368;
        case 0x25d36cu: goto label_25d36c;
        case 0x25d370u: goto label_25d370;
        case 0x25d374u: goto label_25d374;
        case 0x25d378u: goto label_25d378;
        case 0x25d37cu: goto label_25d37c;
        case 0x25d380u: goto label_25d380;
        case 0x25d384u: goto label_25d384;
        case 0x25d388u: goto label_25d388;
        case 0x25d38cu: goto label_25d38c;
        case 0x25d390u: goto label_25d390;
        case 0x25d394u: goto label_25d394;
        case 0x25d398u: goto label_25d398;
        case 0x25d39cu: goto label_25d39c;
        case 0x25d3a0u: goto label_25d3a0;
        case 0x25d3a4u: goto label_25d3a4;
        case 0x25d3a8u: goto label_25d3a8;
        case 0x25d3acu: goto label_25d3ac;
        case 0x25d3b0u: goto label_25d3b0;
        case 0x25d3b4u: goto label_25d3b4;
        case 0x25d3b8u: goto label_25d3b8;
        case 0x25d3bcu: goto label_25d3bc;
        default: return;
    }

label_25cbf0:
    // 0x25cbf0: 0x6591  .word       0x00006591                   # mthi        $zero # 00006580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cbf0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25cbf4:
    // 0x25cbf4: 0x11ba0  .word       0x00011BA0                   # add         $v1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cbf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25cbf8:
    // 0x25cbf8: 0x0  nop
    ctx->pc = 0x25cbf8u;
    // NOP
label_25cbfc:
    // 0x25cbfc: 0x0  nop
    ctx->pc = 0x25cbfcu;
    // NOP
label_25cc00:
    // 0x25cc00: 0x65b5  .word       0x000065B5                   # INVALID     $zero, $zero, 0x65B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25CC00 raw=0x000065B5");
 /* MITIGATED */
label_25cc04:
    // 0x25cc04: 0x100c0  sll         $zero, $at, 3
    ctx->pc = 0x25cc04u;
    
label_25cc08:
    // 0x25cc08: 0x0  nop
    ctx->pc = 0x25cc08u;
    // NOP
label_25cc0c:
    // 0x25cc0c: 0x0  nop
    ctx->pc = 0x25cc0cu;
    // NOP
label_25cc10:
    // 0x25cc10: 0x65d6  .word       0x000065D6                   # dsrlv       $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc10u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25cc14:
    // 0x25cc14: 0xd390  .word       0x0000D390                   # mfhi        $k0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc14u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25cc18:
    // 0x25cc18: 0x0  nop
    ctx->pc = 0x25cc18u;
    // NOP
label_25cc1c:
    // 0x25cc1c: 0x0  nop
    ctx->pc = 0x25cc1cu;
    // NOP
label_25cc20:
    // 0x25cc20: 0x65f1  tgeu        $zero, $zero, 407
    ctx->pc = 0x25cc20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cc24:
    // 0x25cc24: 0x10520  .word       0x00010520                   # add         $zero, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_25cc28:
    // 0x25cc28: 0x0  nop
    ctx->pc = 0x25cc28u;
    // NOP
label_25cc2c:
    // 0x25cc2c: 0x0  nop
    ctx->pc = 0x25cc2cu;
    // NOP
label_25cc30:
    // 0x25cc30: 0x6612  .word       0x00006612                   # mflo        $t4 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc30u;
    SET_GPR_U64(ctx, 12, ctx->lo);
label_25cc34:
    // 0x25cc34: 0xc300  sll         $t8, $zero, 12
    ctx->pc = 0x25cc34u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25cc38:
    // 0x25cc38: 0x0  nop
    ctx->pc = 0x25cc38u;
    // NOP
label_25cc3c:
    // 0x25cc3c: 0x0  nop
    ctx->pc = 0x25cc3cu;
    // NOP
label_25cc40:
    // 0x25cc40: 0x662b  .word       0x0000662B                   # sltu        $t4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc40u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25cc44:
    // 0x25cc44: 0xad50  .word       0x0000AD50                   # mfhi        $s5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc44u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25cc48:
    // 0x25cc48: 0x0  nop
    ctx->pc = 0x25cc48u;
    // NOP
label_25cc4c:
    // 0x25cc4c: 0x0  nop
    ctx->pc = 0x25cc4cu;
    // NOP
label_25cc50:
    // 0x25cc50: 0x6641  .word       0x00006641                   # INVALID     $zero, $zero, 0x6641 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc50u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25CC50 raw=0x00006641");
 /* MITIGATED */
label_25cc54:
    // 0x25cc54: 0xf300  sll         $fp, $zero, 12
    ctx->pc = 0x25cc54u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25cc58:
    // 0x25cc58: 0x0  nop
    ctx->pc = 0x25cc58u;
    // NOP
label_25cc5c:
    // 0x25cc5c: 0x0  nop
    ctx->pc = 0x25cc5cu;
    // NOP
label_25cc60:
    // 0x25cc60: 0x6660  .word       0x00006660                   # add         $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc60u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25cc64:
    // 0x25cc64: 0xd700  sll         $k0, $zero, 28
    ctx->pc = 0x25cc64u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_25cc68:
    // 0x25cc68: 0x0  nop
    ctx->pc = 0x25cc68u;
    // NOP
label_25cc6c:
    // 0x25cc6c: 0x0  nop
    ctx->pc = 0x25cc6cu;
    // NOP
label_25cc70:
    // 0x25cc70: 0x667b  dsra        $t4, $zero, 25
    ctx->pc = 0x25cc70u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> 25);
label_25cc74:
    // 0x25cc74: 0xc340  sll         $t8, $zero, 13
    ctx->pc = 0x25cc74u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25cc78:
    // 0x25cc78: 0x0  nop
    ctx->pc = 0x25cc78u;
    // NOP
label_25cc7c:
    // 0x25cc7c: 0x0  nop
    ctx->pc = 0x25cc7cu;
    // NOP
label_25cc80:
    // 0x25cc80: 0x6694  .word       0x00006694                   # dsllv       $t4, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25cc84:
    // 0x25cc84: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x25cc84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25cc88:
    // 0x25cc88: 0x0  nop
    ctx->pc = 0x25cc88u;
    // NOP
label_25cc8c:
    // 0x25cc8c: 0x0  nop
    ctx->pc = 0x25cc8cu;
    // NOP
label_25cc90:
    // 0x25cc90: 0x66a2  .word       0x000066A2                   # neg         $t4, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_25cc94:
    // 0x25cc94: 0x11420  .word       0x00011420                   # add         $v0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cc94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_25cc98:
    // 0x25cc98: 0x0  nop
    ctx->pc = 0x25cc98u;
    // NOP
label_25cc9c:
    // 0x25cc9c: 0x0  nop
    ctx->pc = 0x25cc9cu;
    // NOP
label_25cca0:
    // 0x25cca0: 0x66c5  .word       0x000066C5                   # INVALID     $zero, $zero, 0x66C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cca0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25CCA0 raw=0x000066C5");
 /* MITIGATED */
label_25cca4:
    // 0x25cca4: 0xa270  tge         $zero, $zero, 649
    ctx->pc = 0x25cca4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cca8:
    // 0x25cca8: 0x0  nop
    ctx->pc = 0x25cca8u;
    // NOP
label_25ccac:
    // 0x25ccac: 0x0  nop
    ctx->pc = 0x25ccacu;
    // NOP
label_25ccb0:
    // 0x25ccb0: 0x66da  .word       0x000066DA                   # div         $t4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ccb0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25ccb4:
    // 0x25ccb4: 0xdf50  .word       0x0000DF50                   # mfhi        $k1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ccb4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25ccb8:
    // 0x25ccb8: 0x0  nop
    ctx->pc = 0x25ccb8u;
    // NOP
label_25ccbc:
    // 0x25ccbc: 0x0  nop
    ctx->pc = 0x25ccbcu;
    // NOP
label_25ccc0:
    // 0x25ccc0: 0x66f6  tne         $zero, $zero, 411
    ctx->pc = 0x25ccc0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ccc4:
    // 0x25ccc4: 0xc350  .word       0x0000C350                   # mfhi        $t8 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ccc4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25ccc8:
    // 0x25ccc8: 0x0  nop
    ctx->pc = 0x25ccc8u;
    // NOP
label_25cccc:
    // 0x25cccc: 0x0  nop
    ctx->pc = 0x25ccccu;
    // NOP
label_25ccd0:
    // 0x25ccd0: 0x670f  .word       0x0000670F                   # sync.p # 00006000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ccd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25ccd4:
    // 0x25ccd4: 0xb770  tge         $zero, $zero, 733
    ctx->pc = 0x25ccd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ccd8:
    // 0x25ccd8: 0x0  nop
    ctx->pc = 0x25ccd8u;
    // NOP
label_25ccdc:
    // 0x25ccdc: 0x0  nop
    ctx->pc = 0x25ccdcu;
    // NOP
label_25cce0:
    // 0x25cce0: 0x6726  .word       0x00006726                   # xor         $t4, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cce0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25cce4:
    // 0x25cce4: 0xc9a0  .word       0x0000C9A0                   # add         $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cce4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25cce8:
    // 0x25cce8: 0x0  nop
    ctx->pc = 0x25cce8u;
    // NOP
label_25ccec:
    // 0x25ccec: 0x0  nop
    ctx->pc = 0x25ccecu;
    // NOP
label_25ccf0:
    // 0x25ccf0: 0x6740  sll         $t4, $zero, 29
    ctx->pc = 0x25ccf0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25ccf4:
    // 0x25ccf4: 0xce00  sll         $t9, $zero, 24
    ctx->pc = 0x25ccf4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25ccf8:
    // 0x25ccf8: 0x0  nop
    ctx->pc = 0x25ccf8u;
    // NOP
label_25ccfc:
    // 0x25ccfc: 0x0  nop
    ctx->pc = 0x25ccfcu;
    // NOP
label_25cd00:
    // 0x25cd00: 0x675a  .word       0x0000675A                   # div         $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd00u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25cd04:
    // 0x25cd04: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd04u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25cd08:
    // 0x25cd08: 0x0  nop
    ctx->pc = 0x25cd08u;
    // NOP
label_25cd0c:
    // 0x25cd0c: 0x0  nop
    ctx->pc = 0x25cd0cu;
    // NOP
label_25cd10:
    // 0x25cd10: 0x6769  .word       0x00006769                   # mtsa        $zero # 00006740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cd10u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25cd14:
    // 0x25cd14: 0x6b30  tge         $zero, $zero, 428
    ctx->pc = 0x25cd14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cd18:
    // 0x25cd18: 0x0  nop
    ctx->pc = 0x25cd18u;
    // NOP
label_25cd1c:
    // 0x25cd1c: 0x0  nop
    ctx->pc = 0x25cd1cu;
    // NOP
label_25cd20:
    // 0x25cd20: 0x6777  .word       0x00006777                   # INVALID     $zero, $zero, 0x6777 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25CD20 raw=0x00006777");
 /* MITIGATED */
label_25cd24:
    // 0x25cd24: 0x6b40  sll         $t5, $zero, 13
    ctx->pc = 0x25cd24u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25cd28:
    // 0x25cd28: 0x0  nop
    ctx->pc = 0x25cd28u;
    // NOP
label_25cd2c:
    // 0x25cd2c: 0x0  nop
    ctx->pc = 0x25cd2cu;
    // NOP
label_25cd30:
    // 0x25cd30: 0x6785  .word       0x00006785                   # INVALID     $zero, $zero, 0x6785 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25CD30 raw=0x00006785");
 /* MITIGATED */
label_25cd34:
    // 0x25cd34: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x25cd34u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25cd38:
    // 0x25cd38: 0x0  nop
    ctx->pc = 0x25cd38u;
    // NOP
label_25cd3c:
    // 0x25cd3c: 0x0  nop
    ctx->pc = 0x25cd3cu;
    // NOP
label_25cd40:
    // 0x25cd40: 0x6794  .word       0x00006794                   # dsllv       $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25cd44:
    // 0x25cd44: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x25cd44u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25cd48:
    // 0x25cd48: 0x0  nop
    ctx->pc = 0x25cd48u;
    // NOP
label_25cd4c:
    // 0x25cd4c: 0x0  nop
    ctx->pc = 0x25cd4cu;
    // NOP
label_25cd50:
    // 0x25cd50: 0x67a2  .word       0x000067A2                   # neg         $t4, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd50u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_25cd54:
    // 0x25cd54: 0x5f30  tge         $zero, $zero, 380
    ctx->pc = 0x25cd54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cd58:
    // 0x25cd58: 0x0  nop
    ctx->pc = 0x25cd58u;
    // NOP
label_25cd5c:
    // 0x25cd5c: 0x0  nop
    ctx->pc = 0x25cd5cu;
    // NOP
label_25cd60:
    // 0x25cd60: 0x67ae  .word       0x000067AE                   # dsub        $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd60u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_25cd64:
    // 0x25cd64: 0x75d0  .word       0x000075D0                   # mfhi        $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd64u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25cd68:
    // 0x25cd68: 0x0  nop
    ctx->pc = 0x25cd68u;
    // NOP
label_25cd6c:
    // 0x25cd6c: 0x0  nop
    ctx->pc = 0x25cd6cu;
    // NOP
label_25cd70:
    // 0x25cd70: 0x67bd  .word       0x000067BD                   # INVALID     $zero, $zero, 0x67BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25CD70 raw=0x000067BD");
 /* MITIGATED */
label_25cd74:
    // 0x25cd74: 0x75d0  .word       0x000075D0                   # mfhi        $t6 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd74u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25cd78:
    // 0x25cd78: 0x0  nop
    ctx->pc = 0x25cd78u;
    // NOP
label_25cd7c:
    // 0x25cd7c: 0x0  nop
    ctx->pc = 0x25cd7cu;
    // NOP
label_25cd80:
    // 0x25cd80: 0x67cc  syscall     415
    ctx->pc = 0x25cd80u;
    ctx->pc = 0x25CD84u;
runtime->handleSyscall(rdram, ctx, 0x19Fu);
label_25cd84:
    // 0x25cd84: 0x7250  .word       0x00007250                   # mfhi        $t6 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd84u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25cd88:
    // 0x25cd88: 0x0  nop
    ctx->pc = 0x25cd88u;
    // NOP
label_25cd8c:
    // 0x25cd8c: 0x0  nop
    ctx->pc = 0x25cd8cu;
    // NOP
label_25cd90:
    // 0x25cd90: 0x67db  .word       0x000067DB                   # divu        $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd90u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25cd94:
    // 0x25cd94: 0x7bd0  .word       0x00007BD0                   # mfhi        $t7 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cd94u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25cd98:
    // 0x25cd98: 0x0  nop
    ctx->pc = 0x25cd98u;
    // NOP
label_25cd9c:
    // 0x25cd9c: 0x0  nop
    ctx->pc = 0x25cd9cu;
    // NOP
label_25cda0:
    // 0x25cda0: 0x67eb  .word       0x000067EB                   # sltu        $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cda0u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25cda4:
    // 0x25cda4: 0x7a10  .word       0x00007A10                   # mfhi        $t7 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cda4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25cda8:
    // 0x25cda8: 0x0  nop
    ctx->pc = 0x25cda8u;
    // NOP
label_25cdac:
    // 0x25cdac: 0x0  nop
    ctx->pc = 0x25cdacu;
    // NOP
label_25cdb0:
    // 0x25cdb0: 0x67fb  dsra        $t4, $zero, 31
    ctx->pc = 0x25cdb0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> 31);
label_25cdb4:
    // 0x25cdb4: 0x7020  add         $t6, $zero, $zero
    ctx->pc = 0x25cdb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25cdb8:
    // 0x25cdb8: 0x0  nop
    ctx->pc = 0x25cdb8u;
    // NOP
label_25cdbc:
    // 0x25cdbc: 0x0  nop
    ctx->pc = 0x25cdbcu;
    // NOP
label_25cdc0:
    // 0x25cdc0: 0x680a  movz        $t5, $zero, $zero
    ctx->pc = 0x25cdc0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_25cdc4:
    // 0x25cdc4: 0x7c20  .word       0x00007C20                   # add         $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cdc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25cdc8:
    // 0x25cdc8: 0x0  nop
    ctx->pc = 0x25cdc8u;
    // NOP
label_25cdcc:
    // 0x25cdcc: 0x0  nop
    ctx->pc = 0x25cdccu;
    // NOP
label_25cdd0:
    // 0x25cdd0: 0x681a  div         $t5, $zero, $zero
    ctx->pc = 0x25cdd0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25cdd4:
    // 0x25cdd4: 0x75e0  .word       0x000075E0                   # add         $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cdd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25cdd8:
    // 0x25cdd8: 0x0  nop
    ctx->pc = 0x25cdd8u;
    // NOP
label_25cddc:
    // 0x25cddc: 0x0  nop
    ctx->pc = 0x25cddcu;
    // NOP
label_25cde0:
    // 0x25cde0: 0x6829  .word       0x00006829                   # mtsa        $zero # 00006800 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cde0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25cde4:
    // 0x25cde4: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x25cde4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25cde8:
    // 0x25cde8: 0x0  nop
    ctx->pc = 0x25cde8u;
    // NOP
label_25cdec:
    // 0x25cdec: 0x0  nop
    ctx->pc = 0x25cdecu;
    // NOP
label_25cdf0:
    // 0x25cdf0: 0x6839  .word       0x00006839                   # INVALID     $zero, $zero, 0x6839 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cdf0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25CDF0 raw=0x00006839");
 /* MITIGATED */
label_25cdf4:
    // 0x25cdf4: 0x6890  .word       0x00006890                   # mfhi        $t5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cdf4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25cdf8:
    // 0x25cdf8: 0x0  nop
    ctx->pc = 0x25cdf8u;
    // NOP
label_25cdfc:
    // 0x25cdfc: 0x0  nop
    ctx->pc = 0x25cdfcu;
    // NOP
label_25ce00:
    // 0x25ce00: 0x6847  .word       0x00006847                   # srav        $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce00u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25ce04:
    // 0x25ce04: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x25ce04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25ce08:
    // 0x25ce08: 0x0  nop
    ctx->pc = 0x25ce08u;
    // NOP
label_25ce0c:
    // 0x25ce0c: 0x0  nop
    ctx->pc = 0x25ce0cu;
    // NOP
label_25ce10:
    // 0x25ce10: 0x6857  .word       0x00006857                   # dsrav       $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce10u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25ce14:
    // 0x25ce14: 0x8080  sll         $s0, $zero, 2
    ctx->pc = 0x25ce14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_25ce18:
    // 0x25ce18: 0x0  nop
    ctx->pc = 0x25ce18u;
    // NOP
label_25ce1c:
    // 0x25ce1c: 0x0  nop
    ctx->pc = 0x25ce1cu;
    // NOP
label_25ce20:
    // 0x25ce20: 0x6868  .word       0x00006868                   # mfsa        $t5 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ce20u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_25ce24:
    // 0x25ce24: 0x70e0  .word       0x000070E0                   # add         $t6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25ce28:
    // 0x25ce28: 0x0  nop
    ctx->pc = 0x25ce28u;
    // NOP
label_25ce2c:
    // 0x25ce2c: 0x0  nop
    ctx->pc = 0x25ce2cu;
    // NOP
label_25ce30:
    // 0x25ce30: 0x6877  .word       0x00006877                   # INVALID     $zero, $zero, 0x6877 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25CE30 raw=0x00006877");
 /* MITIGATED */
label_25ce34:
    // 0x25ce34: 0x7560  .word       0x00007560                   # add         $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25ce38:
    // 0x25ce38: 0x0  nop
    ctx->pc = 0x25ce38u;
    // NOP
label_25ce3c:
    // 0x25ce3c: 0x0  nop
    ctx->pc = 0x25ce3cu;
    // NOP
label_25ce40:
    // 0x25ce40: 0x6886  .word       0x00006886                   # srlv        $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce40u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25ce44:
    // 0x25ce44: 0x7f80  sll         $t7, $zero, 30
    ctx->pc = 0x25ce44u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25ce48:
    // 0x25ce48: 0x0  nop
    ctx->pc = 0x25ce48u;
    // NOP
label_25ce4c:
    // 0x25ce4c: 0x0  nop
    ctx->pc = 0x25ce4cu;
    // NOP
label_25ce50:
    // 0x25ce50: 0x6896  .word       0x00006896                   # dsrlv       $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce50u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25ce54:
    // 0x25ce54: 0x7f00  sll         $t7, $zero, 28
    ctx->pc = 0x25ce54u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_25ce58:
    // 0x25ce58: 0x0  nop
    ctx->pc = 0x25ce58u;
    // NOP
label_25ce5c:
    // 0x25ce5c: 0x0  nop
    ctx->pc = 0x25ce5cu;
    // NOP
label_25ce60:
    // 0x25ce60: 0x68a6  .word       0x000068A6                   # xor         $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25ce64:
    // 0x25ce64: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x25ce64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25ce68:
    // 0x25ce68: 0x0  nop
    ctx->pc = 0x25ce68u;
    // NOP
label_25ce6c:
    // 0x25ce6c: 0x0  nop
    ctx->pc = 0x25ce6cu;
    // NOP
label_25ce70:
    // 0x25ce70: 0x68b2  tlt         $zero, $zero, 418
    ctx->pc = 0x25ce70u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ce74:
    // 0x25ce74: 0x71e0  .word       0x000071E0                   # add         $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25ce78:
    // 0x25ce78: 0x0  nop
    ctx->pc = 0x25ce78u;
    // NOP
label_25ce7c:
    // 0x25ce7c: 0x0  nop
    ctx->pc = 0x25ce7cu;
    // NOP
label_25ce80:
    // 0x25ce80: 0x68c1  .word       0x000068C1                   # INVALID     $zero, $zero, 0x68C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25CE80 raw=0x000068C1");
 /* MITIGATED */
label_25ce84:
    // 0x25ce84: 0x7420  .word       0x00007420                   # add         $t6, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25ce88:
    // 0x25ce88: 0x0  nop
    ctx->pc = 0x25ce88u;
    // NOP
label_25ce8c:
    // 0x25ce8c: 0x0  nop
    ctx->pc = 0x25ce8cu;
    // NOP
label_25ce90:
    // 0x25ce90: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ce90u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25ce94:
    // 0x25ce94: 0x7400  sll         $t6, $zero, 16
    ctx->pc = 0x25ce94u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25ce98:
    // 0x25ce98: 0x0  nop
    ctx->pc = 0x25ce98u;
    // NOP
label_25ce9c:
    // 0x25ce9c: 0x0  nop
    ctx->pc = 0x25ce9cu;
    // NOP
label_25cea0:
    // 0x25cea0: 0x68df  .word       0x000068DF                   # ddivu       $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cea0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25CEA0 raw=0x000068DF");
 /* MITIGATED */
label_25cea4:
    // 0x25cea4: 0x5d20  .word       0x00005D20                   # add         $t3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25cea8:
    // 0x25cea8: 0x0  nop
    ctx->pc = 0x25cea8u;
    // NOP
label_25ceac:
    // 0x25ceac: 0x0  nop
    ctx->pc = 0x25ceacu;
    // NOP
label_25ceb0:
    // 0x25ceb0: 0x68eb  .word       0x000068EB                   # sltu        $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ceb0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25ceb4:
    // 0x25ceb4: 0x85c0  sll         $s0, $zero, 23
    ctx->pc = 0x25ceb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25ceb8:
    // 0x25ceb8: 0x0  nop
    ctx->pc = 0x25ceb8u;
    // NOP
label_25cebc:
    // 0x25cebc: 0x0  nop
    ctx->pc = 0x25cebcu;
    // NOP
label_25cec0:
    // 0x25cec0: 0x68fc  dsll32      $t5, $zero, 3
    ctx->pc = 0x25cec0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (32 + 3));
label_25cec4:
    // 0x25cec4: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cec4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25cec8:
    // 0x25cec8: 0x0  nop
    ctx->pc = 0x25cec8u;
    // NOP
label_25cecc:
    // 0x25cecc: 0x0  nop
    ctx->pc = 0x25ceccu;
    // NOP
label_25ced0:
    // 0x25ced0: 0x6909  .word       0x00006909                   # jalr        $t5, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_25ced4:
    if (ctx->pc == 0x25CED4u) {
        ctx->pc = 0x25CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CED0u;
        // 0x25ced4: 0x8370  tge         $zero, $zero, 525 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CED8u;
        goto label_25ced8;
    }
    ctx->pc = 0x25CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x25CED8u);
        ctx->pc = 0x25CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CED0u;
        // 0x25ced4: 0x8370  tge         $zero, $zero, 525 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CED0u, 0x25CED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CED8u;
label_25ced8:
    // 0x25ced8: 0x0  nop
    ctx->pc = 0x25ced8u;
    // NOP
label_25cedc:
    // 0x25cedc: 0x0  nop
    ctx->pc = 0x25cedcu;
    // NOP
label_25cee0:
    // 0x25cee0: 0x691a  .word       0x0000691A                   # div         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cee0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25cee4:
    // 0x25cee4: 0x8fe0  .word       0x00008FE0                   # add         $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cee4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25cee8:
    // 0x25cee8: 0x0  nop
    ctx->pc = 0x25cee8u;
    // NOP
label_25ceec:
    // 0x25ceec: 0x0  nop
    ctx->pc = 0x25ceecu;
    // NOP
label_25cef0:
    // 0x25cef0: 0x692c  .word       0x0000692C                   # dadd        $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cef0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_25cef4:
    // 0x25cef4: 0x69e0  .word       0x000069E0                   # add         $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25cef8:
    // 0x25cef8: 0x0  nop
    ctx->pc = 0x25cef8u;
    // NOP
label_25cefc:
    // 0x25cefc: 0x0  nop
    ctx->pc = 0x25cefcu;
    // NOP
label_25cf00:
    // 0x25cf00: 0x693a  dsrl        $t5, $zero, 4
    ctx->pc = 0x25cf00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> 4);
label_25cf04:
    // 0x25cf04: 0x78a0  .word       0x000078A0                   # add         $t7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25cf08:
    // 0x25cf08: 0x0  nop
    ctx->pc = 0x25cf08u;
    // NOP
label_25cf0c:
    // 0x25cf0c: 0x0  nop
    ctx->pc = 0x25cf0cu;
    // NOP
label_25cf10:
    // 0x25cf10: 0x694a  .word       0x0000694A                   # movz        $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf10u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_25cf14:
    // 0x25cf14: 0x7d50  .word       0x00007D50                   # mfhi        $t7 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf14u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25cf18:
    // 0x25cf18: 0x0  nop
    ctx->pc = 0x25cf18u;
    // NOP
label_25cf1c:
    // 0x25cf1c: 0x0  nop
    ctx->pc = 0x25cf1cu;
    // NOP
label_25cf20:
    // 0x25cf20: 0x695a  .word       0x0000695A                   # div         $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf20u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25cf24:
    // 0x25cf24: 0x6e50  .word       0x00006E50                   # mfhi        $t5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf24u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25cf28:
    // 0x25cf28: 0x0  nop
    ctx->pc = 0x25cf28u;
    // NOP
label_25cf2c:
    // 0x25cf2c: 0x0  nop
    ctx->pc = 0x25cf2cu;
    // NOP
label_25cf30:
    // 0x25cf30: 0x6968  .word       0x00006968                   # mfsa        $t5 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cf30u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_25cf34:
    // 0x25cf34: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25cf38:
    // 0x25cf38: 0x0  nop
    ctx->pc = 0x25cf38u;
    // NOP
label_25cf3c:
    // 0x25cf3c: 0x0  nop
    ctx->pc = 0x25cf3cu;
    // NOP
label_25cf40:
    // 0x25cf40: 0x6977  .word       0x00006977                   # INVALID     $zero, $zero, 0x6977 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25CF40 raw=0x00006977");
 /* MITIGATED */
label_25cf44:
    // 0x25cf44: 0x8320  .word       0x00008320                   # add         $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25cf48:
    // 0x25cf48: 0x0  nop
    ctx->pc = 0x25cf48u;
    // NOP
label_25cf4c:
    // 0x25cf4c: 0x0  nop
    ctx->pc = 0x25cf4cu;
    // NOP
label_25cf50:
    // 0x25cf50: 0x6988  .word       0x00006988                   # jr          $zero # 00006980 <InstrIdType: CPU_SPECIAL>
label_25cf54:
    if (ctx->pc == 0x25CF54u) {
        ctx->pc = 0x25CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF50u;
        // 0x25cf54: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CF58u;
        goto label_25cf58;
    }
    ctx->pc = 0x25CF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25CF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF50u;
        // 0x25cf54: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CF50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25CF58u;
label_25cf58:
    // 0x25cf58: 0x0  nop
    ctx->pc = 0x25cf58u;
    // NOP
label_25cf5c:
    // 0x25cf5c: 0x0  nop
    ctx->pc = 0x25cf5cu;
    // NOP
label_25cf60:
    // 0x25cf60: 0x6998  .word       0x00006998                   # mult        $t5, $zero, $zero # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cf60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_25cf64:
    // 0x25cf64: 0x7fc0  sll         $t7, $zero, 31
    ctx->pc = 0x25cf64u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25cf68:
    // 0x25cf68: 0x0  nop
    ctx->pc = 0x25cf68u;
    // NOP
label_25cf6c:
    // 0x25cf6c: 0x0  nop
    ctx->pc = 0x25cf6cu;
    // NOP
label_25cf70:
    // 0x25cf70: 0x69a8  .word       0x000069A8                   # mfsa        $t5 # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cf70u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_25cf74:
    // 0x25cf74: 0x70a0  .word       0x000070A0                   # add         $t6, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25cf78:
    // 0x25cf78: 0x0  nop
    ctx->pc = 0x25cf78u;
    // NOP
label_25cf7c:
    // 0x25cf7c: 0x0  nop
    ctx->pc = 0x25cf7cu;
    // NOP
label_25cf80:
    // 0x25cf80: 0x69b7  .word       0x000069B7                   # INVALID     $zero, $zero, 0x69B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25CF80 raw=0x000069B7");
 /* MITIGATED */
label_25cf84:
    // 0x25cf84: 0x78a0  .word       0x000078A0                   # add         $t7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25cf88:
    // 0x25cf88: 0x0  nop
    ctx->pc = 0x25cf88u;
    // NOP
label_25cf8c:
    // 0x25cf8c: 0x0  nop
    ctx->pc = 0x25cf8cu;
    // NOP
label_25cf90:
    // 0x25cf90: 0x69c7  .word       0x000069C7                   # srav        $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf90u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25cf94:
    // 0x25cf94: 0x7f50  .word       0x00007F50                   # mfhi        $t7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cf94u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25cf98:
    // 0x25cf98: 0x0  nop
    ctx->pc = 0x25cf98u;
    // NOP
label_25cf9c:
    // 0x25cf9c: 0x0  nop
    ctx->pc = 0x25cf9cu;
    // NOP
label_25cfa0:
    // 0x25cfa0: 0x69d7  .word       0x000069D7                   # dsrav       $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cfa0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25cfa4:
    // 0x25cfa4: 0x8f80  sll         $s1, $zero, 30
    ctx->pc = 0x25cfa4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_25cfa8:
    // 0x25cfa8: 0x0  nop
    ctx->pc = 0x25cfa8u;
    // NOP
label_25cfac:
    // 0x25cfac: 0x0  nop
    ctx->pc = 0x25cfacu;
    // NOP
label_25cfb0:
    // 0x25cfb0: 0x69e9  .word       0x000069E9                   # mtsa        $zero # 000069C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25cfb0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25cfb4:
    // 0x25cfb4: 0x8090  .word       0x00008090                   # mfhi        $s0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cfb4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25cfb8:
    // 0x25cfb8: 0x0  nop
    ctx->pc = 0x25cfb8u;
    // NOP
label_25cfbc:
    // 0x25cfbc: 0x0  nop
    ctx->pc = 0x25cfbcu;
    // NOP
label_25cfc0:
    // 0x25cfc0: 0x69fa  dsrl        $t5, $zero, 7
    ctx->pc = 0x25cfc0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> 7);
label_25cfc4:
    // 0x25cfc4: 0x8d60  .word       0x00008D60                   # add         $s1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cfc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25cfc8:
    // 0x25cfc8: 0x0  nop
    ctx->pc = 0x25cfc8u;
    // NOP
label_25cfcc:
    // 0x25cfcc: 0x0  nop
    ctx->pc = 0x25cfccu;
    // NOP
label_25cfd0:
    // 0x25cfd0: 0x6a0c  syscall     424
    ctx->pc = 0x25cfd0u;
    ctx->pc = 0x25CFD4u;
runtime->handleSyscall(rdram, ctx, 0x1A8u);
label_25cfd4:
    // 0x25cfd4: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cfd4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25cfd8:
    // 0x25cfd8: 0x0  nop
    ctx->pc = 0x25cfd8u;
    // NOP
label_25cfdc:
    // 0x25cfdc: 0x0  nop
    ctx->pc = 0x25cfdcu;
    // NOP
label_25cfe0:
    // 0x25cfe0: 0x6a1f  .word       0x00006A1F                   # ddivu       $t5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cfe0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25CFE0 raw=0x00006A1F");
 /* MITIGATED */
label_25cfe4:
    // 0x25cfe4: 0x7e40  sll         $t7, $zero, 25
    ctx->pc = 0x25cfe4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25cfe8:
    // 0x25cfe8: 0x0  nop
    ctx->pc = 0x25cfe8u;
    // NOP
label_25cfec:
    // 0x25cfec: 0x0  nop
    ctx->pc = 0x25cfecu;
    // NOP
label_25cff0:
    // 0x25cff0: 0x6a2f  .word       0x00006A2F                   # dsubu       $t5, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25cff0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25cff4:
    // 0x25cff4: 0x8b30  tge         $zero, $zero, 556
    ctx->pc = 0x25cff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25cff8:
    // 0x25cff8: 0x0  nop
    ctx->pc = 0x25cff8u;
    // NOP
label_25cffc:
    // 0x25cffc: 0x0  nop
    ctx->pc = 0x25cffcu;
    // NOP
label_25d000:
    // 0x25d000: 0x6a41  .word       0x00006A41                   # INVALID     $zero, $zero, 0x6A41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d000u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25D000 raw=0x00006A41");
 /* MITIGATED */
label_25d004:
    // 0x25d004: 0x8ca0  .word       0x00008CA0                   # add         $s1, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25d008:
    // 0x25d008: 0x0  nop
    ctx->pc = 0x25d008u;
    // NOP
label_25d00c:
    // 0x25d00c: 0x0  nop
    ctx->pc = 0x25d00cu;
    // NOP
label_25d010:
    // 0x25d010: 0x6a53  .word       0x00006A53                   # mtlo        $zero # 00006A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d010u;
    ctx->lo = GPR_U64(ctx, 0);
label_25d014:
    // 0x25d014: 0x6820  add         $t5, $zero, $zero
    ctx->pc = 0x25d014u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25d018:
    // 0x25d018: 0x0  nop
    ctx->pc = 0x25d018u;
    // NOP
label_25d01c:
    // 0x25d01c: 0x0  nop
    ctx->pc = 0x25d01cu;
    // NOP
label_25d020:
    // 0x25d020: 0x6a61  .word       0x00006A61                   # addu        $t5, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d020u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25d024:
    // 0x25d024: 0x9650  .word       0x00009650                   # mfhi        $s2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d024u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25d028:
    // 0x25d028: 0x0  nop
    ctx->pc = 0x25d028u;
    // NOP
label_25d02c:
    // 0x25d02c: 0x0  nop
    ctx->pc = 0x25d02cu;
    // NOP
label_25d030:
    // 0x25d030: 0x6a74  teq         $zero, $zero, 425
    ctx->pc = 0x25d030u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d034:
    // 0x25d034: 0x7c00  sll         $t7, $zero, 16
    ctx->pc = 0x25d034u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25d038:
    // 0x25d038: 0x0  nop
    ctx->pc = 0x25d038u;
    // NOP
label_25d03c:
    // 0x25d03c: 0x0  nop
    ctx->pc = 0x25d03cu;
    // NOP
label_25d040:
    // 0x25d040: 0x6a84  .word       0x00006A84                   # sllv        $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d040u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d044:
    // 0x25d044: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25d048:
    // 0x25d048: 0x0  nop
    ctx->pc = 0x25d048u;
    // NOP
label_25d04c:
    // 0x25d04c: 0x0  nop
    ctx->pc = 0x25d04cu;
    // NOP
label_25d050:
    // 0x25d050: 0x6a95  .word       0x00006A95                   # INVALID     $zero, $zero, 0x6A95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d050u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25D050 raw=0x00006A95");
 /* MITIGATED */
label_25d054:
    // 0x25d054: 0x8500  sll         $s0, $zero, 20
    ctx->pc = 0x25d054u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25d058:
    // 0x25d058: 0x0  nop
    ctx->pc = 0x25d058u;
    // NOP
label_25d05c:
    // 0x25d05c: 0x0  nop
    ctx->pc = 0x25d05cu;
    // NOP
label_25d060:
    // 0x25d060: 0x6aa6  .word       0x00006AA6                   # xor         $t5, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d060u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25d064:
    // 0x25d064: 0x8690  .word       0x00008690                   # mfhi        $s0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d064u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25d068:
    // 0x25d068: 0x0  nop
    ctx->pc = 0x25d068u;
    // NOP
label_25d06c:
    // 0x25d06c: 0x0  nop
    ctx->pc = 0x25d06cu;
    // NOP
label_25d070:
    // 0x25d070: 0x6ab7  .word       0x00006AB7                   # INVALID     $zero, $zero, 0x6AB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d070u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25D070 raw=0x00006AB7");
 /* MITIGATED */
label_25d074:
    // 0x25d074: 0x8620  .word       0x00008620                   # add         $s0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d074u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25d078:
    // 0x25d078: 0x0  nop
    ctx->pc = 0x25d078u;
    // NOP
label_25d07c:
    // 0x25d07c: 0x0  nop
    ctx->pc = 0x25d07cu;
    // NOP
label_25d080:
    // 0x25d080: 0x6ac8  .word       0x00006AC8                   # jr          $zero # 00006AC0 <InstrIdType: CPU_SPECIAL>
label_25d084:
    if (ctx->pc == 0x25D084u) {
        ctx->pc = 0x25D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D080u;
        // 0x25d084: 0x82c0  sll         $s0, $zero, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D088u;
        goto label_25d088;
    }
    ctx->pc = 0x25D080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D080u;
        // 0x25d084: 0x82c0  sll         $s0, $zero, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25D088u;
label_25d088:
    // 0x25d088: 0x0  nop
    ctx->pc = 0x25d088u;
    // NOP
label_25d08c:
    // 0x25d08c: 0x0  nop
    ctx->pc = 0x25d08cu;
    // NOP
label_25d090:
    // 0x25d090: 0x6ad9  .word       0x00006AD9                   # multu       $zero, $zero # 00006AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d090u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_25d094:
    // 0x25d094: 0x75e0  .word       0x000075E0                   # add         $t6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25d098:
    // 0x25d098: 0x0  nop
    ctx->pc = 0x25d098u;
    // NOP
label_25d09c:
    // 0x25d09c: 0x0  nop
    ctx->pc = 0x25d09cu;
    // NOP
label_25d0a0:
    // 0x25d0a0: 0x6ae8  .word       0x00006AE8                   # mfsa        $t5 # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d0a0u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_25d0a4:
    // 0x25d0a4: 0x7d60  .word       0x00007D60                   # add         $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25d0a8:
    // 0x25d0a8: 0x0  nop
    ctx->pc = 0x25d0a8u;
    // NOP
label_25d0ac:
    // 0x25d0ac: 0x0  nop
    ctx->pc = 0x25d0acu;
    // NOP
label_25d0b0:
    // 0x25d0b0: 0x6af8  dsll        $t5, $zero, 11
    ctx->pc = 0x25d0b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 11);
label_25d0b4:
    // 0x25d0b4: 0x84c0  sll         $s0, $zero, 19
    ctx->pc = 0x25d0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25d0b8:
    // 0x25d0b8: 0x0  nop
    ctx->pc = 0x25d0b8u;
    // NOP
label_25d0bc:
    // 0x25d0bc: 0x0  nop
    ctx->pc = 0x25d0bcu;
    // NOP
label_25d0c0:
    // 0x25d0c0: 0x6b09  .word       0x00006B09                   # jalr        $t5, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_25d0c4:
    if (ctx->pc == 0x25D0C4u) {
        ctx->pc = 0x25D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0C0u;
        // 0x25d0c4: 0x8aa0  .word       0x00008AA0                   # add         $s1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0C8u;
        goto label_25d0c8;
    }
    ctx->pc = 0x25D0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 13, 0x25D0C8u);
        ctx->pc = 0x25D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0C0u;
        // 0x25d0c4: 0x8aa0  .word       0x00008AA0                   # add         $s1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D0C0u, 0x25D0C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D0C8u;
label_25d0c8:
    // 0x25d0c8: 0x0  nop
    ctx->pc = 0x25d0c8u;
    // NOP
label_25d0cc:
    // 0x25d0cc: 0x0  nop
    ctx->pc = 0x25d0ccu;
    // NOP
label_25d0d0:
    // 0x25d0d0: 0x6b1b  .word       0x00006B1B                   # divu        $t5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25d0d4:
    // 0x25d0d4: 0x8ed0  .word       0x00008ED0                   # mfhi        $s1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0d4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25d0d8:
    // 0x25d0d8: 0x0  nop
    ctx->pc = 0x25d0d8u;
    // NOP
label_25d0dc:
    // 0x25d0dc: 0x0  nop
    ctx->pc = 0x25d0dcu;
    // NOP
label_25d0e0:
    // 0x25d0e0: 0x6b2d  .word       0x00006B2D                   # daddu       $t5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0e0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d0e4:
    // 0x25d0e4: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25d0e8:
    // 0x25d0e8: 0x0  nop
    ctx->pc = 0x25d0e8u;
    // NOP
label_25d0ec:
    // 0x25d0ec: 0x0  nop
    ctx->pc = 0x25d0ecu;
    // NOP
label_25d0f0:
    // 0x25d0f0: 0x6b3d  .word       0x00006B3D                   # INVALID     $zero, $zero, 0x6B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25D0F0 raw=0x00006B3D");
 /* MITIGATED */
label_25d0f4:
    // 0x25d0f4: 0x71e0  .word       0x000071E0                   # add         $t6, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25d0f8:
    // 0x25d0f8: 0x0  nop
    ctx->pc = 0x25d0f8u;
    // NOP
label_25d0fc:
    // 0x25d0fc: 0x0  nop
    ctx->pc = 0x25d0fcu;
    // NOP
label_25d100:
    // 0x25d100: 0x6b4c  syscall     429
    ctx->pc = 0x25d100u;
    ctx->pc = 0x25D104u;
runtime->handleSyscall(rdram, ctx, 0x1ADu);
label_25d104:
    // 0x25d104: 0x9190  .word       0x00009190                   # mfhi        $s2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d104u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25d108:
    // 0x25d108: 0x0  nop
    ctx->pc = 0x25d108u;
    // NOP
label_25d10c:
    // 0x25d10c: 0x0  nop
    ctx->pc = 0x25d10cu;
    // NOP
label_25d110:
    // 0x25d110: 0x6b5f  .word       0x00006B5F                   # ddivu       $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d110u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25D110 raw=0x00006B5F");
 /* MITIGATED */
label_25d114:
    // 0x25d114: 0x9720  .word       0x00009720                   # add         $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25d118:
    // 0x25d118: 0x0  nop
    ctx->pc = 0x25d118u;
    // NOP
label_25d11c:
    // 0x25d11c: 0x0  nop
    ctx->pc = 0x25d11cu;
    // NOP
label_25d120:
    // 0x25d120: 0x6b72  tlt         $zero, $zero, 429
    ctx->pc = 0x25d120u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d124:
    // 0x25d124: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d124u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25d128:
    // 0x25d128: 0x0  nop
    ctx->pc = 0x25d128u;
    // NOP
label_25d12c:
    // 0x25d12c: 0x0  nop
    ctx->pc = 0x25d12cu;
    // NOP
label_25d130:
    // 0x25d130: 0x6b83  sra         $t5, $zero, 14
    ctx->pc = 0x25d130u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), 14));
label_25d134:
    // 0x25d134: 0x8cc0  sll         $s1, $zero, 19
    ctx->pc = 0x25d134u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25d138:
    // 0x25d138: 0x0  nop
    ctx->pc = 0x25d138u;
    // NOP
label_25d13c:
    // 0x25d13c: 0x0  nop
    ctx->pc = 0x25d13cu;
    // NOP
label_25d140:
    // 0x25d140: 0x6b95  .word       0x00006B95                   # INVALID     $zero, $zero, 0x6B95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d140u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25D140 raw=0x00006B95");
 /* MITIGATED */
label_25d144:
    // 0x25d144: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x25d144u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25d148:
    // 0x25d148: 0x0  nop
    ctx->pc = 0x25d148u;
    // NOP
label_25d14c:
    // 0x25d14c: 0x0  nop
    ctx->pc = 0x25d14cu;
    // NOP
label_25d150:
    // 0x25d150: 0x6ba7  .word       0x00006BA7                   # not         $t5, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d150u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25d154:
    // 0x25d154: 0x82e0  .word       0x000082E0                   # add         $s0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25d158:
    // 0x25d158: 0x0  nop
    ctx->pc = 0x25d158u;
    // NOP
label_25d15c:
    // 0x25d15c: 0x0  nop
    ctx->pc = 0x25d15cu;
    // NOP
label_25d160:
    // 0x25d160: 0x6bb8  dsll        $t5, $zero, 14
    ctx->pc = 0x25d160u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << 14);
label_25d164:
    // 0x25d164: 0x6f90  .word       0x00006F90                   # mfhi        $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d164u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25d168:
    // 0x25d168: 0x0  nop
    ctx->pc = 0x25d168u;
    // NOP
label_25d16c:
    // 0x25d16c: 0x0  nop
    ctx->pc = 0x25d16cu;
    // NOP
label_25d170:
    // 0x25d170: 0x6bc6  .word       0x00006BC6                   # srlv        $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d170u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d174:
    // 0x25d174: 0x8590  .word       0x00008590                   # mfhi        $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d174u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25d178:
    // 0x25d178: 0x0  nop
    ctx->pc = 0x25d178u;
    // NOP
label_25d17c:
    // 0x25d17c: 0x0  nop
    ctx->pc = 0x25d17cu;
    // NOP
label_25d180:
    // 0x25d180: 0x6bd7  .word       0x00006BD7                   # dsrav       $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d180u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25d184:
    // 0x25d184: 0x8c60  .word       0x00008C60                   # add         $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25d188:
    // 0x25d188: 0x0  nop
    ctx->pc = 0x25d188u;
    // NOP
label_25d18c:
    // 0x25d18c: 0x0  nop
    ctx->pc = 0x25d18cu;
    // NOP
label_25d190:
    // 0x25d190: 0x6be9  .word       0x00006BE9                   # mtsa        $zero # 00006BC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d190u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25d194:
    // 0x25d194: 0x8dc0  sll         $s1, $zero, 23
    ctx->pc = 0x25d194u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25d198:
    // 0x25d198: 0x0  nop
    ctx->pc = 0x25d198u;
    // NOP
label_25d19c:
    // 0x25d19c: 0x0  nop
    ctx->pc = 0x25d19cu;
    // NOP
label_25d1a0:
    // 0x25d1a0: 0x6bfb  dsra        $t5, $zero, 15
    ctx->pc = 0x25d1a0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> 15);
label_25d1a4:
    // 0x25d1a4: 0x8510  .word       0x00008510                   # mfhi        $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1a4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25d1a8:
    // 0x25d1a8: 0x0  nop
    ctx->pc = 0x25d1a8u;
    // NOP
label_25d1ac:
    // 0x25d1ac: 0x0  nop
    ctx->pc = 0x25d1acu;
    // NOP
label_25d1b0:
    // 0x25d1b0: 0x6c0c  syscall     432
    ctx->pc = 0x25d1b0u;
    ctx->pc = 0x25D1B4u;
runtime->handleSyscall(rdram, ctx, 0x1B0u);
label_25d1b4:
    // 0x25d1b4: 0x93e0  .word       0x000093E0                   # add         $s2, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25d1b8:
    // 0x25d1b8: 0x0  nop
    ctx->pc = 0x25d1b8u;
    // NOP
label_25d1bc:
    // 0x25d1bc: 0x0  nop
    ctx->pc = 0x25d1bcu;
    // NOP
label_25d1c0:
    // 0x25d1c0: 0x6c1f  .word       0x00006C1F                   # ddivu       $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25D1C0 raw=0x00006C1F");
 /* MITIGATED */
label_25d1c4:
    // 0x25d1c4: 0x9090  .word       0x00009090                   # mfhi        $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1c4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25d1c8:
    // 0x25d1c8: 0x0  nop
    ctx->pc = 0x25d1c8u;
    // NOP
label_25d1cc:
    // 0x25d1cc: 0x0  nop
    ctx->pc = 0x25d1ccu;
    // NOP
label_25d1d0:
    // 0x25d1d0: 0x6c32  tlt         $zero, $zero, 432
    ctx->pc = 0x25d1d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d1d4:
    // 0x25d1d4: 0x90d0  .word       0x000090D0                   # mfhi        $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25d1d8:
    // 0x25d1d8: 0x0  nop
    ctx->pc = 0x25d1d8u;
    // NOP
label_25d1dc:
    // 0x25d1dc: 0x0  nop
    ctx->pc = 0x25d1dcu;
    // NOP
label_25d1e0:
    // 0x25d1e0: 0x6c45  .word       0x00006C45                   # INVALID     $zero, $zero, 0x6C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25D1E0 raw=0x00006C45");
 /* MITIGATED */
label_25d1e4:
    // 0x25d1e4: 0x89b0  tge         $zero, $zero, 550
    ctx->pc = 0x25d1e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d1e8:
    // 0x25d1e8: 0x0  nop
    ctx->pc = 0x25d1e8u;
    // NOP
label_25d1ec:
    // 0x25d1ec: 0x0  nop
    ctx->pc = 0x25d1ecu;
    // NOP
label_25d1f0:
    // 0x25d1f0: 0x6c57  .word       0x00006C57                   # dsrav       $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d1f0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25d1f4:
    // 0x25d1f4: 0xa0f0  tge         $zero, $zero, 643
    ctx->pc = 0x25d1f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d1f8:
    // 0x25d1f8: 0x0  nop
    ctx->pc = 0x25d1f8u;
    // NOP
label_25d1fc:
    // 0x25d1fc: 0x0  nop
    ctx->pc = 0x25d1fcu;
    // NOP
label_25d200:
    // 0x25d200: 0x6c6c  .word       0x00006C6C                   # dadd        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_25d204:
    // 0x25d204: 0x8e70  tge         $zero, $zero, 569
    ctx->pc = 0x25d204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d208:
    // 0x25d208: 0x0  nop
    ctx->pc = 0x25d208u;
    // NOP
label_25d20c:
    // 0x25d20c: 0x0  nop
    ctx->pc = 0x25d20cu;
    // NOP
label_25d210:
    // 0x25d210: 0x6c7e  dsrl32      $t5, $zero, 17
    ctx->pc = 0x25d210u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (32 + 17));
label_25d214:
    // 0x25d214: 0x78a0  .word       0x000078A0                   # add         $t7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25d218:
    // 0x25d218: 0x0  nop
    ctx->pc = 0x25d218u;
    // NOP
label_25d21c:
    // 0x25d21c: 0x0  nop
    ctx->pc = 0x25d21cu;
    // NOP
label_25d220:
    // 0x25d220: 0x6c8e  .word       0x00006C8E                   # INVALID     $zero, $zero, 0x6C8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d220u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25D220 raw=0x00006C8E");
 /* MITIGATED */
label_25d224:
    // 0x25d224: 0xc9c0  sll         $t9, $zero, 7
    ctx->pc = 0x25d224u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25d228:
    // 0x25d228: 0x0  nop
    ctx->pc = 0x25d228u;
    // NOP
label_25d22c:
    // 0x25d22c: 0x0  nop
    ctx->pc = 0x25d22cu;
    // NOP
label_25d230:
    // 0x25d230: 0x6ca8  .word       0x00006CA8                   # mfsa        $t5 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d230u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_25d234:
    // 0x25d234: 0xda80  sll         $k1, $zero, 10
    ctx->pc = 0x25d234u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25d238:
    // 0x25d238: 0x0  nop
    ctx->pc = 0x25d238u;
    // NOP
label_25d23c:
    // 0x25d23c: 0x0  nop
    ctx->pc = 0x25d23cu;
    // NOP
label_25d240:
    // 0x25d240: 0x6cc4  .word       0x00006CC4                   # sllv        $t5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d240u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d244:
    // 0x25d244: 0xe160  .word       0x0000E160                   # add         $gp, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25d248:
    // 0x25d248: 0x0  nop
    ctx->pc = 0x25d248u;
    // NOP
label_25d24c:
    // 0x25d24c: 0x0  nop
    ctx->pc = 0x25d24cu;
    // NOP
label_25d250:
    // 0x25d250: 0x6ce1  .word       0x00006CE1                   # addu        $t5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d250u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25d254:
    // 0x25d254: 0xc960  .word       0x0000C960                   # add         $t9, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25d258:
    // 0x25d258: 0x0  nop
    ctx->pc = 0x25d258u;
    // NOP
label_25d25c:
    // 0x25d25c: 0x0  nop
    ctx->pc = 0x25d25cu;
    // NOP
label_25d260:
    // 0x25d260: 0x6cfb  dsra        $t5, $zero, 19
    ctx->pc = 0x25d260u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> 19);
label_25d264:
    // 0x25d264: 0xa810  mfhi        $s5
    ctx->pc = 0x25d264u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25d268:
    // 0x25d268: 0x0  nop
    ctx->pc = 0x25d268u;
    // NOP
label_25d26c:
    // 0x25d26c: 0x0  nop
    ctx->pc = 0x25d26cu;
    // NOP
label_25d270:
    // 0x25d270: 0x6d11  .word       0x00006D11                   # mthi        $zero # 00006D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d270u;
    ctx->hi = GPR_U64(ctx, 0);
label_25d274:
    // 0x25d274: 0xd1d0  .word       0x0000D1D0                   # mfhi        $k0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d274u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25d278:
    // 0x25d278: 0x0  nop
    ctx->pc = 0x25d278u;
    // NOP
label_25d27c:
    // 0x25d27c: 0x0  nop
    ctx->pc = 0x25d27cu;
    // NOP
label_25d280:
    // 0x25d280: 0x6d2c  .word       0x00006D2C                   # dadd        $t5, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d280u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_25d284:
    // 0x25d284: 0xef60  .word       0x0000EF60                   # add         $sp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_25d288:
    // 0x25d288: 0x0  nop
    ctx->pc = 0x25d288u;
    // NOP
label_25d28c:
    // 0x25d28c: 0x0  nop
    ctx->pc = 0x25d28cu;
    // NOP
label_25d290:
    // 0x25d290: 0x6d4a  .word       0x00006D4A                   # movz        $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d290u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
label_25d294:
    // 0x25d294: 0xe110  .word       0x0000E110                   # mfhi        $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d294u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_25d298:
    // 0x25d298: 0x0  nop
    ctx->pc = 0x25d298u;
    // NOP
label_25d29c:
    // 0x25d29c: 0x0  nop
    ctx->pc = 0x25d29cu;
    // NOP
label_25d2a0:
    // 0x25d2a0: 0x6d67  .word       0x00006D67                   # not         $t5, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2a0u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25d2a4:
    // 0x25d2a4: 0xb160  .word       0x0000B160                   # add         $s6, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25d2a8:
    // 0x25d2a8: 0x0  nop
    ctx->pc = 0x25d2a8u;
    // NOP
label_25d2ac:
    // 0x25d2ac: 0x0  nop
    ctx->pc = 0x25d2acu;
    // NOP
label_25d2b0:
    // 0x25d2b0: 0x6d7e  dsrl32      $t5, $zero, 21
    ctx->pc = 0x25d2b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) >> (32 + 21));
label_25d2b4:
    // 0x25d2b4: 0xc8f0  tge         $zero, $zero, 803
    ctx->pc = 0x25d2b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d2b8:
    // 0x25d2b8: 0x0  nop
    ctx->pc = 0x25d2b8u;
    // NOP
label_25d2bc:
    // 0x25d2bc: 0x0  nop
    ctx->pc = 0x25d2bcu;
    // NOP
label_25d2c0:
    // 0x25d2c0: 0x6d98  .word       0x00006D98                   # mult        $t5, $zero, $zero # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_25d2c4:
    // 0x25d2c4: 0xd3d0  .word       0x0000D3D0                   # mfhi        $k0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2c4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25d2c8:
    // 0x25d2c8: 0x0  nop
    ctx->pc = 0x25d2c8u;
    // NOP
label_25d2cc:
    // 0x25d2cc: 0x0  nop
    ctx->pc = 0x25d2ccu;
    // NOP
label_25d2d0:
    // 0x25d2d0: 0x6db3  tltu        $zero, $zero, 438
    ctx->pc = 0x25d2d0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d2d4:
    // 0x25d2d4: 0xedc0  sll         $sp, $zero, 23
    ctx->pc = 0x25d2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25d2d8:
    // 0x25d2d8: 0x0  nop
    ctx->pc = 0x25d2d8u;
    // NOP
label_25d2dc:
    // 0x25d2dc: 0x0  nop
    ctx->pc = 0x25d2dcu;
    // NOP
label_25d2e0:
    // 0x25d2e0: 0x6dd1  .word       0x00006DD1                   # mthi        $zero # 00006DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25d2e4:
    // 0x25d2e4: 0xdd50  .word       0x0000DD50                   # mfhi        $k1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2e4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_25d2e8:
    // 0x25d2e8: 0x0  nop
    ctx->pc = 0x25d2e8u;
    // NOP
label_25d2ec:
    // 0x25d2ec: 0x0  nop
    ctx->pc = 0x25d2ecu;
    // NOP
label_25d2f0:
    // 0x25d2f0: 0x6ded  .word       0x00006DED                   # daddu       $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d2f0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d2f4:
    // 0x25d2f4: 0xc870  tge         $zero, $zero, 801
    ctx->pc = 0x25d2f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d2f8:
    // 0x25d2f8: 0x0  nop
    ctx->pc = 0x25d2f8u;
    // NOP
label_25d2fc:
    // 0x25d2fc: 0x0  nop
    ctx->pc = 0x25d2fcu;
    // NOP
label_25d300:
    // 0x25d300: 0x6e07  .word       0x00006E07                   # srav        $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d300u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d304:
    // 0x25d304: 0xe3c0  sll         $gp, $zero, 15
    ctx->pc = 0x25d304u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_25d308:
    // 0x25d308: 0x0  nop
    ctx->pc = 0x25d308u;
    // NOP
label_25d30c:
    // 0x25d30c: 0x0  nop
    ctx->pc = 0x25d30cu;
    // NOP
label_25d310:
    // 0x25d310: 0x6e24  .word       0x00006E24                   # and         $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d310u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25d314:
    // 0x25d314: 0xd9e0  .word       0x0000D9E0                   # add         $k1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25d318:
    // 0x25d318: 0x0  nop
    ctx->pc = 0x25d318u;
    // NOP
label_25d31c:
    // 0x25d31c: 0x0  nop
    ctx->pc = 0x25d31cu;
    // NOP
label_25d320:
    // 0x25d320: 0x6e40  sll         $t5, $zero, 25
    ctx->pc = 0x25d320u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25d324:
    // 0x25d324: 0xb470  tge         $zero, $zero, 721
    ctx->pc = 0x25d324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d328:
    // 0x25d328: 0x0  nop
    ctx->pc = 0x25d328u;
    // NOP
label_25d32c:
    // 0x25d32c: 0x0  nop
    ctx->pc = 0x25d32cu;
    // NOP
label_25d330:
    // 0x25d330: 0x6e57  .word       0x00006E57                   # dsrav       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d330u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25d334:
    // 0x25d334: 0xb5e0  .word       0x0000B5E0                   # add         $s6, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d334u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_25d338:
    // 0x25d338: 0x0  nop
    ctx->pc = 0x25d338u;
    // NOP
label_25d33c:
    // 0x25d33c: 0x0  nop
    ctx->pc = 0x25d33cu;
    // NOP
label_25d340:
    // 0x25d340: 0x6e6e  .word       0x00006E6E                   # dsub        $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d340u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_25d344:
    // 0x25d344: 0xc670  tge         $zero, $zero, 793
    ctx->pc = 0x25d344u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d348:
    // 0x25d348: 0x0  nop
    ctx->pc = 0x25d348u;
    // NOP
label_25d34c:
    // 0x25d34c: 0x0  nop
    ctx->pc = 0x25d34cu;
    // NOP
label_25d350:
    // 0x25d350: 0x6e87  .word       0x00006E87                   # srav        $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d350u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d354:
    // 0x25d354: 0xdf20  .word       0x0000DF20                   # add         $k1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d354u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25d358:
    // 0x25d358: 0x0  nop
    ctx->pc = 0x25d358u;
    // NOP
label_25d35c:
    // 0x25d35c: 0x0  nop
    ctx->pc = 0x25d35cu;
    // NOP
label_25d360:
    // 0x25d360: 0x6ea3  .word       0x00006EA3                   # negu        $t5, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d360u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25d364:
    // 0x25d364: 0x9660  .word       0x00009660                   # add         $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25d368:
    // 0x25d368: 0x0  nop
    ctx->pc = 0x25d368u;
    // NOP
label_25d36c:
    // 0x25d36c: 0x0  nop
    ctx->pc = 0x25d36cu;
    // NOP
label_25d370:
    // 0x25d370: 0x6eb6  tne         $zero, $zero, 442
    ctx->pc = 0x25d370u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25d374:
    // 0x25d374: 0xf000  sll         $fp, $zero, 0
    ctx->pc = 0x25d374u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25d378:
    // 0x25d378: 0x0  nop
    ctx->pc = 0x25d378u;
    // NOP
label_25d37c:
    // 0x25d37c: 0x0  nop
    ctx->pc = 0x25d37cu;
    // NOP
label_25d380:
    // 0x25d380: 0x6ed4  .word       0x00006ED4                   # dsllv       $t5, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d380u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25d384:
    // 0x25d384: 0xa490  .word       0x0000A490                   # mfhi        $s4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d384u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25d388:
    // 0x25d388: 0x0  nop
    ctx->pc = 0x25d388u;
    // NOP
label_25d38c:
    // 0x25d38c: 0x0  nop
    ctx->pc = 0x25d38cu;
    // NOP
label_25d390:
    // 0x25d390: 0x6ee9  .word       0x00006EE9                   # mtsa        $zero # 00006EC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25d390u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25d394:
    // 0x25d394: 0xd2e0  .word       0x0000D2E0                   # add         $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25d398:
    // 0x25d398: 0x0  nop
    ctx->pc = 0x25d398u;
    // NOP
label_25d39c:
    // 0x25d39c: 0x0  nop
    ctx->pc = 0x25d39cu;
    // NOP
label_25d3a0:
    // 0x25d3a0: 0x6f04  .word       0x00006F04                   # sllv        $t5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25d3a4:
    // 0x25d3a4: 0xce90  .word       0x0000CE90                   # mfhi        $t9 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3a4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25d3a8:
    // 0x25d3a8: 0x0  nop
    ctx->pc = 0x25d3a8u;
    // NOP
label_25d3ac:
    // 0x25d3ac: 0x0  nop
    ctx->pc = 0x25d3acu;
    // NOP
label_25d3b0:
    // 0x25d3b0: 0x6f1e  .word       0x00006F1E                   # ddiv        $t5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25D3B0 raw=0x00006F1E");
 /* MITIGATED */
label_25d3b4:
    // 0x25d3b4: 0xc290  .word       0x0000C290                   # mfhi        $t8 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25d3b4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25d3b8:
    // 0x25d3b8: 0x0  nop
    ctx->pc = 0x25d3b8u;
    // NOP
label_25d3bc:
    // 0x25d3bc: 0x0  nop
    ctx->pc = 0x25d3bcu;
    // NOP
    ctx->pc = 0x25d3c0u;
    return;
}

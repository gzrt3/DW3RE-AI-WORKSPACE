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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part233(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20ccd0u: goto label_20ccd0;
        case 0x20ccd4u: goto label_20ccd4;
        case 0x20ccd8u: goto label_20ccd8;
        case 0x20ccdcu: goto label_20ccdc;
        case 0x20cce0u: goto label_20cce0;
        case 0x20cce4u: goto label_20cce4;
        case 0x20cce8u: goto label_20cce8;
        case 0x20ccecu: goto label_20ccec;
        case 0x20ccf0u: goto label_20ccf0;
        case 0x20ccf4u: goto label_20ccf4;
        case 0x20ccf8u: goto label_20ccf8;
        case 0x20ccfcu: goto label_20ccfc;
        case 0x20cd00u: goto label_20cd00;
        case 0x20cd04u: goto label_20cd04;
        case 0x20cd08u: goto label_20cd08;
        case 0x20cd0cu: goto label_20cd0c;
        case 0x20cd10u: goto label_20cd10;
        case 0x20cd14u: goto label_20cd14;
        case 0x20cd18u: goto label_20cd18;
        case 0x20cd1cu: goto label_20cd1c;
        case 0x20cd20u: goto label_20cd20;
        case 0x20cd24u: goto label_20cd24;
        case 0x20cd28u: goto label_20cd28;
        case 0x20cd2cu: goto label_20cd2c;
        case 0x20cd30u: goto label_20cd30;
        case 0x20cd34u: goto label_20cd34;
        case 0x20cd38u: goto label_20cd38;
        case 0x20cd3cu: goto label_20cd3c;
        case 0x20cd40u: goto label_20cd40;
        case 0x20cd44u: goto label_20cd44;
        case 0x20cd48u: goto label_20cd48;
        case 0x20cd4cu: goto label_20cd4c;
        case 0x20cd50u: goto label_20cd50;
        case 0x20cd54u: goto label_20cd54;
        case 0x20cd58u: goto label_20cd58;
        case 0x20cd5cu: goto label_20cd5c;
        case 0x20cd60u: goto label_20cd60;
        case 0x20cd64u: goto label_20cd64;
        case 0x20cd68u: goto label_20cd68;
        case 0x20cd6cu: goto label_20cd6c;
        case 0x20cd70u: goto label_20cd70;
        case 0x20cd74u: goto label_20cd74;
        case 0x20cd78u: goto label_20cd78;
        case 0x20cd7cu: goto label_20cd7c;
        case 0x20cd80u: goto label_20cd80;
        case 0x20cd84u: goto label_20cd84;
        case 0x20cd88u: goto label_20cd88;
        case 0x20cd8cu: goto label_20cd8c;
        case 0x20cd90u: goto label_20cd90;
        case 0x20cd94u: goto label_20cd94;
        case 0x20cd98u: goto label_20cd98;
        case 0x20cd9cu: goto label_20cd9c;
        case 0x20cda0u: goto label_20cda0;
        case 0x20cda4u: goto label_20cda4;
        case 0x20cda8u: goto label_20cda8;
        case 0x20cdacu: goto label_20cdac;
        case 0x20cdb0u: goto label_20cdb0;
        case 0x20cdb4u: goto label_20cdb4;
        case 0x20cdb8u: goto label_20cdb8;
        case 0x20cdbcu: goto label_20cdbc;
        case 0x20cdc0u: goto label_20cdc0;
        case 0x20cdc4u: goto label_20cdc4;
        case 0x20cdc8u: goto label_20cdc8;
        case 0x20cdccu: goto label_20cdcc;
        case 0x20cdd0u: goto label_20cdd0;
        case 0x20cdd4u: goto label_20cdd4;
        case 0x20cdd8u: goto label_20cdd8;
        case 0x20cddcu: goto label_20cddc;
        case 0x20cde0u: goto label_20cde0;
        case 0x20cde4u: goto label_20cde4;
        case 0x20cde8u: goto label_20cde8;
        case 0x20cdecu: goto label_20cdec;
        case 0x20cdf0u: goto label_20cdf0;
        case 0x20cdf4u: goto label_20cdf4;
        case 0x20cdf8u: goto label_20cdf8;
        case 0x20cdfcu: goto label_20cdfc;
        case 0x20ce00u: goto label_20ce00;
        case 0x20ce04u: goto label_20ce04;
        case 0x20ce08u: goto label_20ce08;
        case 0x20ce0cu: goto label_20ce0c;
        case 0x20ce10u: goto label_20ce10;
        case 0x20ce14u: goto label_20ce14;
        case 0x20ce18u: goto label_20ce18;
        case 0x20ce1cu: goto label_20ce1c;
        case 0x20ce20u: goto label_20ce20;
        case 0x20ce24u: goto label_20ce24;
        case 0x20ce28u: goto label_20ce28;
        case 0x20ce2cu: goto label_20ce2c;
        case 0x20ce30u: goto label_20ce30;
        case 0x20ce34u: goto label_20ce34;
        case 0x20ce38u: goto label_20ce38;
        case 0x20ce3cu: goto label_20ce3c;
        case 0x20ce40u: goto label_20ce40;
        case 0x20ce44u: goto label_20ce44;
        case 0x20ce48u: goto label_20ce48;
        case 0x20ce4cu: goto label_20ce4c;
        case 0x20ce50u: goto label_20ce50;
        case 0x20ce54u: goto label_20ce54;
        case 0x20ce58u: goto label_20ce58;
        case 0x20ce5cu: goto label_20ce5c;
        case 0x20ce60u: goto label_20ce60;
        case 0x20ce64u: goto label_20ce64;
        case 0x20ce68u: goto label_20ce68;
        case 0x20ce6cu: goto label_20ce6c;
        case 0x20ce70u: goto label_20ce70;
        case 0x20ce74u: goto label_20ce74;
        case 0x20ce78u: goto label_20ce78;
        case 0x20ce7cu: goto label_20ce7c;
        case 0x20ce80u: goto label_20ce80;
        case 0x20ce84u: goto label_20ce84;
        case 0x20ce88u: goto label_20ce88;
        case 0x20ce8cu: goto label_20ce8c;
        case 0x20ce90u: goto label_20ce90;
        case 0x20ce94u: goto label_20ce94;
        case 0x20ce98u: goto label_20ce98;
        case 0x20ce9cu: goto label_20ce9c;
        case 0x20cea0u: goto label_20cea0;
        case 0x20cea4u: goto label_20cea4;
        case 0x20cea8u: goto label_20cea8;
        case 0x20ceacu: goto label_20ceac;
        case 0x20ceb0u: goto label_20ceb0;
        case 0x20ceb4u: goto label_20ceb4;
        case 0x20ceb8u: goto label_20ceb8;
        case 0x20cebcu: goto label_20cebc;
        case 0x20cec0u: goto label_20cec0;
        case 0x20cec4u: goto label_20cec4;
        case 0x20cec8u: goto label_20cec8;
        case 0x20ceccu: goto label_20cecc;
        case 0x20ced0u: goto label_20ced0;
        case 0x20ced4u: goto label_20ced4;
        case 0x20ced8u: goto label_20ced8;
        case 0x20cedcu: goto label_20cedc;
        case 0x20cee0u: goto label_20cee0;
        case 0x20cee4u: goto label_20cee4;
        case 0x20cee8u: goto label_20cee8;
        case 0x20ceecu: goto label_20ceec;
        case 0x20cef0u: goto label_20cef0;
        case 0x20cef4u: goto label_20cef4;
        case 0x20cef8u: goto label_20cef8;
        case 0x20cefcu: goto label_20cefc;
        case 0x20cf00u: goto label_20cf00;
        case 0x20cf04u: goto label_20cf04;
        case 0x20cf08u: goto label_20cf08;
        case 0x20cf0cu: goto label_20cf0c;
        case 0x20cf10u: goto label_20cf10;
        case 0x20cf14u: goto label_20cf14;
        case 0x20cf18u: goto label_20cf18;
        case 0x20cf1cu: goto label_20cf1c;
        case 0x20cf20u: goto label_20cf20;
        case 0x20cf24u: goto label_20cf24;
        case 0x20cf28u: goto label_20cf28;
        case 0x20cf2cu: goto label_20cf2c;
        case 0x20cf30u: goto label_20cf30;
        case 0x20cf34u: goto label_20cf34;
        case 0x20cf38u: goto label_20cf38;
        case 0x20cf3cu: goto label_20cf3c;
        case 0x20cf40u: goto label_20cf40;
        case 0x20cf44u: goto label_20cf44;
        case 0x20cf48u: goto label_20cf48;
        case 0x20cf4cu: goto label_20cf4c;
        case 0x20cf50u: goto label_20cf50;
        case 0x20cf54u: goto label_20cf54;
        case 0x20cf58u: goto label_20cf58;
        case 0x20cf5cu: goto label_20cf5c;
        case 0x20cf60u: goto label_20cf60;
        case 0x20cf64u: goto label_20cf64;
        case 0x20cf68u: goto label_20cf68;
        case 0x20cf6cu: goto label_20cf6c;
        case 0x20cf70u: goto label_20cf70;
        case 0x20cf74u: goto label_20cf74;
        case 0x20cf78u: goto label_20cf78;
        case 0x20cf7cu: goto label_20cf7c;
        case 0x20cf80u: goto label_20cf80;
        case 0x20cf84u: goto label_20cf84;
        case 0x20cf88u: goto label_20cf88;
        case 0x20cf8cu: goto label_20cf8c;
        case 0x20cf90u: goto label_20cf90;
        case 0x20cf94u: goto label_20cf94;
        case 0x20cf98u: goto label_20cf98;
        case 0x20cf9cu: goto label_20cf9c;
        case 0x20cfa0u: goto label_20cfa0;
        case 0x20cfa4u: goto label_20cfa4;
        case 0x20cfa8u: goto label_20cfa8;
        case 0x20cfacu: goto label_20cfac;
        case 0x20cfb0u: goto label_20cfb0;
        case 0x20cfb4u: goto label_20cfb4;
        case 0x20cfb8u: goto label_20cfb8;
        case 0x20cfbcu: goto label_20cfbc;
        case 0x20cfc0u: goto label_20cfc0;
        case 0x20cfc4u: goto label_20cfc4;
        case 0x20cfc8u: goto label_20cfc8;
        case 0x20cfccu: goto label_20cfcc;
        case 0x20cfd0u: goto label_20cfd0;
        case 0x20cfd4u: goto label_20cfd4;
        case 0x20cfd8u: goto label_20cfd8;
        case 0x20cfdcu: goto label_20cfdc;
        case 0x20cfe0u: goto label_20cfe0;
        case 0x20cfe4u: goto label_20cfe4;
        case 0x20cfe8u: goto label_20cfe8;
        case 0x20cfecu: goto label_20cfec;
        case 0x20cff0u: goto label_20cff0;
        case 0x20cff4u: goto label_20cff4;
        case 0x20cff8u: goto label_20cff8;
        case 0x20cffcu: goto label_20cffc;
        case 0x20d000u: goto label_20d000;
        case 0x20d004u: goto label_20d004;
        case 0x20d008u: goto label_20d008;
        case 0x20d00cu: goto label_20d00c;
        case 0x20d010u: goto label_20d010;
        case 0x20d014u: goto label_20d014;
        case 0x20d018u: goto label_20d018;
        case 0x20d01cu: goto label_20d01c;
        case 0x20d020u: goto label_20d020;
        case 0x20d024u: goto label_20d024;
        case 0x20d028u: goto label_20d028;
        case 0x20d02cu: goto label_20d02c;
        case 0x20d030u: goto label_20d030;
        case 0x20d034u: goto label_20d034;
        case 0x20d038u: goto label_20d038;
        case 0x20d03cu: goto label_20d03c;
        case 0x20d040u: goto label_20d040;
        case 0x20d044u: goto label_20d044;
        case 0x20d048u: goto label_20d048;
        case 0x20d04cu: goto label_20d04c;
        case 0x20d050u: goto label_20d050;
        case 0x20d054u: goto label_20d054;
        case 0x20d058u: goto label_20d058;
        case 0x20d05cu: goto label_20d05c;
        case 0x20d060u: goto label_20d060;
        case 0x20d064u: goto label_20d064;
        case 0x20d068u: goto label_20d068;
        case 0x20d06cu: goto label_20d06c;
        case 0x20d070u: goto label_20d070;
        case 0x20d074u: goto label_20d074;
        case 0x20d078u: goto label_20d078;
        case 0x20d07cu: goto label_20d07c;
        case 0x20d080u: goto label_20d080;
        case 0x20d084u: goto label_20d084;
        case 0x20d088u: goto label_20d088;
        case 0x20d08cu: goto label_20d08c;
        case 0x20d090u: goto label_20d090;
        case 0x20d094u: goto label_20d094;
        case 0x20d098u: goto label_20d098;
        case 0x20d09cu: goto label_20d09c;
        case 0x20d0a0u: goto label_20d0a0;
        case 0x20d0a4u: goto label_20d0a4;
        case 0x20d0a8u: goto label_20d0a8;
        case 0x20d0acu: goto label_20d0ac;
        case 0x20d0b0u: goto label_20d0b0;
        case 0x20d0b4u: goto label_20d0b4;
        case 0x20d0b8u: goto label_20d0b8;
        case 0x20d0bcu: goto label_20d0bc;
        case 0x20d0c0u: goto label_20d0c0;
        case 0x20d0c4u: goto label_20d0c4;
        case 0x20d0c8u: goto label_20d0c8;
        case 0x20d0ccu: goto label_20d0cc;
        case 0x20d0d0u: goto label_20d0d0;
        case 0x20d0d4u: goto label_20d0d4;
        case 0x20d0d8u: goto label_20d0d8;
        case 0x20d0dcu: goto label_20d0dc;
        case 0x20d0e0u: goto label_20d0e0;
        case 0x20d0e4u: goto label_20d0e4;
        case 0x20d0e8u: goto label_20d0e8;
        case 0x20d0ecu: goto label_20d0ec;
        case 0x20d0f0u: goto label_20d0f0;
        case 0x20d0f4u: goto label_20d0f4;
        case 0x20d0f8u: goto label_20d0f8;
        case 0x20d0fcu: goto label_20d0fc;
        case 0x20d100u: goto label_20d100;
        case 0x20d104u: goto label_20d104;
        case 0x20d108u: goto label_20d108;
        case 0x20d10cu: goto label_20d10c;
        case 0x20d110u: goto label_20d110;
        case 0x20d114u: goto label_20d114;
        case 0x20d118u: goto label_20d118;
        case 0x20d11cu: goto label_20d11c;
        case 0x20d120u: goto label_20d120;
        case 0x20d124u: goto label_20d124;
        case 0x20d128u: goto label_20d128;
        case 0x20d12cu: goto label_20d12c;
        case 0x20d130u: goto label_20d130;
        case 0x20d134u: goto label_20d134;
        case 0x20d138u: goto label_20d138;
        case 0x20d13cu: goto label_20d13c;
        case 0x20d140u: goto label_20d140;
        case 0x20d144u: goto label_20d144;
        case 0x20d148u: goto label_20d148;
        case 0x20d14cu: goto label_20d14c;
        case 0x20d150u: goto label_20d150;
        case 0x20d154u: goto label_20d154;
        case 0x20d158u: goto label_20d158;
        case 0x20d15cu: goto label_20d15c;
        case 0x20d160u: goto label_20d160;
        case 0x20d164u: goto label_20d164;
        case 0x20d168u: goto label_20d168;
        case 0x20d16cu: goto label_20d16c;
        case 0x20d170u: goto label_20d170;
        case 0x20d174u: goto label_20d174;
        case 0x20d178u: goto label_20d178;
        case 0x20d17cu: goto label_20d17c;
        case 0x20d180u: goto label_20d180;
        case 0x20d184u: goto label_20d184;
        case 0x20d188u: goto label_20d188;
        case 0x20d18cu: goto label_20d18c;
        case 0x20d190u: goto label_20d190;
        case 0x20d194u: goto label_20d194;
        case 0x20d198u: goto label_20d198;
        case 0x20d19cu: goto label_20d19c;
        case 0x20d1a0u: goto label_20d1a0;
        case 0x20d1a4u: goto label_20d1a4;
        case 0x20d1a8u: goto label_20d1a8;
        case 0x20d1acu: goto label_20d1ac;
        case 0x20d1b0u: goto label_20d1b0;
        case 0x20d1b4u: goto label_20d1b4;
        case 0x20d1b8u: goto label_20d1b8;
        case 0x20d1bcu: goto label_20d1bc;
        case 0x20d1c0u: goto label_20d1c0;
        case 0x20d1c4u: goto label_20d1c4;
        case 0x20d1c8u: goto label_20d1c8;
        case 0x20d1ccu: goto label_20d1cc;
        case 0x20d1d0u: goto label_20d1d0;
        case 0x20d1d4u: goto label_20d1d4;
        case 0x20d1d8u: goto label_20d1d8;
        case 0x20d1dcu: goto label_20d1dc;
        case 0x20d1e0u: goto label_20d1e0;
        case 0x20d1e4u: goto label_20d1e4;
        case 0x20d1e8u: goto label_20d1e8;
        case 0x20d1ecu: goto label_20d1ec;
        case 0x20d1f0u: goto label_20d1f0;
        case 0x20d1f4u: goto label_20d1f4;
        case 0x20d1f8u: goto label_20d1f8;
        case 0x20d1fcu: goto label_20d1fc;
        case 0x20d200u: goto label_20d200;
        case 0x20d204u: goto label_20d204;
        case 0x20d208u: goto label_20d208;
        case 0x20d20cu: goto label_20d20c;
        case 0x20d210u: goto label_20d210;
        case 0x20d214u: goto label_20d214;
        case 0x20d218u: goto label_20d218;
        case 0x20d21cu: goto label_20d21c;
        case 0x20d220u: goto label_20d220;
        case 0x20d224u: goto label_20d224;
        case 0x20d228u: goto label_20d228;
        case 0x20d22cu: goto label_20d22c;
        case 0x20d230u: goto label_20d230;
        case 0x20d234u: goto label_20d234;
        case 0x20d238u: goto label_20d238;
        case 0x20d23cu: goto label_20d23c;
        case 0x20d240u: goto label_20d240;
        case 0x20d244u: goto label_20d244;
        case 0x20d248u: goto label_20d248;
        case 0x20d24cu: goto label_20d24c;
        case 0x20d250u: goto label_20d250;
        case 0x20d254u: goto label_20d254;
        case 0x20d258u: goto label_20d258;
        case 0x20d25cu: goto label_20d25c;
        case 0x20d260u: goto label_20d260;
        case 0x20d264u: goto label_20d264;
        case 0x20d268u: goto label_20d268;
        case 0x20d26cu: goto label_20d26c;
        case 0x20d270u: goto label_20d270;
        case 0x20d274u: goto label_20d274;
        case 0x20d278u: goto label_20d278;
        case 0x20d27cu: goto label_20d27c;
        case 0x20d280u: goto label_20d280;
        case 0x20d284u: goto label_20d284;
        case 0x20d288u: goto label_20d288;
        case 0x20d28cu: goto label_20d28c;
        case 0x20d290u: goto label_20d290;
        case 0x20d294u: goto label_20d294;
        case 0x20d298u: goto label_20d298;
        case 0x20d29cu: goto label_20d29c;
        case 0x20d2a0u: goto label_20d2a0;
        case 0x20d2a4u: goto label_20d2a4;
        case 0x20d2a8u: goto label_20d2a8;
        case 0x20d2acu: goto label_20d2ac;
        case 0x20d2b0u: goto label_20d2b0;
        case 0x20d2b4u: goto label_20d2b4;
        case 0x20d2b8u: goto label_20d2b8;
        case 0x20d2bcu: goto label_20d2bc;
        case 0x20d2c0u: goto label_20d2c0;
        case 0x20d2c4u: goto label_20d2c4;
        case 0x20d2c8u: goto label_20d2c8;
        case 0x20d2ccu: goto label_20d2cc;
        case 0x20d2d0u: goto label_20d2d0;
        case 0x20d2d4u: goto label_20d2d4;
        case 0x20d2d8u: goto label_20d2d8;
        case 0x20d2dcu: goto label_20d2dc;
        case 0x20d2e0u: goto label_20d2e0;
        case 0x20d2e4u: goto label_20d2e4;
        case 0x20d2e8u: goto label_20d2e8;
        case 0x20d2ecu: goto label_20d2ec;
        case 0x20d2f0u: goto label_20d2f0;
        case 0x20d2f4u: goto label_20d2f4;
        case 0x20d2f8u: goto label_20d2f8;
        case 0x20d2fcu: goto label_20d2fc;
        case 0x20d300u: goto label_20d300;
        case 0x20d304u: goto label_20d304;
        case 0x20d308u: goto label_20d308;
        case 0x20d30cu: goto label_20d30c;
        case 0x20d310u: goto label_20d310;
        case 0x20d314u: goto label_20d314;
        case 0x20d318u: goto label_20d318;
        case 0x20d31cu: goto label_20d31c;
        case 0x20d320u: goto label_20d320;
        case 0x20d324u: goto label_20d324;
        case 0x20d328u: goto label_20d328;
        case 0x20d32cu: goto label_20d32c;
        case 0x20d330u: goto label_20d330;
        case 0x20d334u: goto label_20d334;
        case 0x20d338u: goto label_20d338;
        case 0x20d33cu: goto label_20d33c;
        case 0x20d340u: goto label_20d340;
        case 0x20d344u: goto label_20d344;
        case 0x20d348u: goto label_20d348;
        case 0x20d34cu: goto label_20d34c;
        case 0x20d350u: goto label_20d350;
        case 0x20d354u: goto label_20d354;
        case 0x20d358u: goto label_20d358;
        case 0x20d35cu: goto label_20d35c;
        case 0x20d360u: goto label_20d360;
        case 0x20d364u: goto label_20d364;
        case 0x20d368u: goto label_20d368;
        case 0x20d36cu: goto label_20d36c;
        case 0x20d370u: goto label_20d370;
        case 0x20d374u: goto label_20d374;
        case 0x20d378u: goto label_20d378;
        case 0x20d37cu: goto label_20d37c;
        case 0x20d380u: goto label_20d380;
        case 0x20d384u: goto label_20d384;
        case 0x20d388u: goto label_20d388;
        case 0x20d38cu: goto label_20d38c;
        case 0x20d390u: goto label_20d390;
        case 0x20d394u: goto label_20d394;
        case 0x20d398u: goto label_20d398;
        case 0x20d39cu: goto label_20d39c;
        case 0x20d3a0u: goto label_20d3a0;
        case 0x20d3a4u: goto label_20d3a4;
        case 0x20d3a8u: goto label_20d3a8;
        case 0x20d3acu: goto label_20d3ac;
        case 0x20d3b0u: goto label_20d3b0;
        case 0x20d3b4u: goto label_20d3b4;
        case 0x20d3b8u: goto label_20d3b8;
        case 0x20d3bcu: goto label_20d3bc;
        case 0x20d3c0u: goto label_20d3c0;
        case 0x20d3c4u: goto label_20d3c4;
        case 0x20d3c8u: goto label_20d3c8;
        case 0x20d3ccu: goto label_20d3cc;
        case 0x20d3d0u: goto label_20d3d0;
        case 0x20d3d4u: goto label_20d3d4;
        case 0x20d3d8u: goto label_20d3d8;
        case 0x20d3dcu: goto label_20d3dc;
        case 0x20d3e0u: goto label_20d3e0;
        case 0x20d3e4u: goto label_20d3e4;
        case 0x20d3e8u: goto label_20d3e8;
        case 0x20d3ecu: goto label_20d3ec;
        case 0x20d3f0u: goto label_20d3f0;
        case 0x20d3f4u: goto label_20d3f4;
        case 0x20d3f8u: goto label_20d3f8;
        case 0x20d3fcu: goto label_20d3fc;
        case 0x20d400u: goto label_20d400;
        case 0x20d404u: goto label_20d404;
        case 0x20d408u: goto label_20d408;
        case 0x20d40cu: goto label_20d40c;
        case 0x20d410u: goto label_20d410;
        case 0x20d414u: goto label_20d414;
        case 0x20d418u: goto label_20d418;
        case 0x20d41cu: goto label_20d41c;
        case 0x20d420u: goto label_20d420;
        case 0x20d424u: goto label_20d424;
        case 0x20d428u: goto label_20d428;
        case 0x20d42cu: goto label_20d42c;
        case 0x20d430u: goto label_20d430;
        case 0x20d434u: goto label_20d434;
        case 0x20d438u: goto label_20d438;
        case 0x20d43cu: goto label_20d43c;
        case 0x20d440u: goto label_20d440;
        case 0x20d444u: goto label_20d444;
        case 0x20d448u: goto label_20d448;
        case 0x20d44cu: goto label_20d44c;
        case 0x20d450u: goto label_20d450;
        case 0x20d454u: goto label_20d454;
        case 0x20d458u: goto label_20d458;
        case 0x20d45cu: goto label_20d45c;
        case 0x20d460u: goto label_20d460;
        case 0x20d464u: goto label_20d464;
        case 0x20d468u: goto label_20d468;
        case 0x20d46cu: goto label_20d46c;
        case 0x20d470u: goto label_20d470;
        case 0x20d474u: goto label_20d474;
        case 0x20d478u: goto label_20d478;
        case 0x20d47cu: goto label_20d47c;
        case 0x20d480u: goto label_20d480;
        case 0x20d484u: goto label_20d484;
        case 0x20d488u: goto label_20d488;
        case 0x20d48cu: goto label_20d48c;
        case 0x20d490u: goto label_20d490;
        case 0x20d494u: goto label_20d494;
        case 0x20d498u: goto label_20d498;
        case 0x20d49cu: goto label_20d49c;
        default: return;
    }

label_20ccd0:
    // 0x20ccd0: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20ccd4:
    // 0x20ccd4: 0x1040fcb7  beqz        $v0, . + 4 + (-0x349 << 2)
label_20ccd8:
    if (ctx->pc == 0x20CCD8u) {
        ctx->pc = 0x20CCDCu;
        goto label_20ccdc;
    }
    ctx->pc = 0x20CCD4u;
    {
        const bool branch_taken_0x20ccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ccd4) {
            ctx->pc = 0x20BFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20bfb4; return; }
        }
    }
    ctx->pc = 0x20CCDCu;
label_20ccdc:
    // 0x20ccdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cce0:
    // 0x20cce0: 0x1000fcb4  b           . + 4 + (-0x34C << 2)
label_20cce4:
    if (ctx->pc == 0x20CCE4u) {
        ctx->pc = 0x20CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCE0u;
        // 0x20cce4: 0xaf829168  sw          $v0, -0x6E98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCE8u;
        goto label_20cce8;
    }
    ctx->pc = 0x20CCE0u;
    {
        const bool branch_taken_0x20cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCE0u;
        // 0x20cce4: 0xaf829168  sw          $v0, -0x6E98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cce0) {
            ctx->pc = 0x20BFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20bfb4; return; }
        }
    }
    ctx->pc = 0x20CCE8u;
label_20cce8:
    // 0x20cce8: 0xc078078  jal         func_1E01E0
label_20ccec:
    if (ctx->pc == 0x20CCECu) {
        ctx->pc = 0x20CCF0u;
        goto label_20ccf0;
    }
    ctx->pc = 0x20CCE8u;
    SET_GPR_U32(ctx, 31, 0x20CCF0u);
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x20CCF0u;
label_20ccf0:
    // 0x20ccf0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20ccf4:
    // 0x20ccf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20ccf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ccf8:
    // 0x20ccf8: 0xc04e188  jal         func_138620
label_20ccfc:
    if (ctx->pc == 0x20CCFCu) {
        ctx->pc = 0x20CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCF8u;
        // 0x20ccfc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD00u;
        goto label_20cd00;
    }
    ctx->pc = 0x20CCF8u;
    SET_GPR_U32(ctx, 31, 0x20CD00u);
    ctx->pc = 0x20CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCF8u;
    // 0x20ccfc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x20CCF8u, 0x20CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD00u;
label_20cd00:
    // 0x20cd00: 0xc04e198  jal         func_138660
label_20cd04:
    if (ctx->pc == 0x20CD04u) {
        ctx->pc = 0x20CD08u;
        goto label_20cd08;
    }
    ctx->pc = 0x20CD00u;
    SET_GPR_U32(ctx, 31, 0x20CD08u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20CD00u, 0x20CD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD08u;
label_20cd08:
    // 0x20cd08: 0x1440009d  bnez        $v0, . + 4 + (0x9D << 2)
label_20cd0c:
    if (ctx->pc == 0x20CD0Cu) {
        ctx->pc = 0x20CD10u;
        goto label_20cd10;
    }
    ctx->pc = 0x20CD08u;
    {
        const bool branch_taken_0x20cd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cd08) {
            ctx->pc = 0x20CF80u;
            goto label_20cf80;
        }
    }
    ctx->pc = 0x20CD10u;
label_20cd10:
    // 0x20cd10: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20cd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_20cd14:
    // 0x20cd14: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_20cd18:
    if (ctx->pc == 0x20CD18u) {
        ctx->pc = 0x20CD1Cu;
        goto label_20cd1c;
    }
    ctx->pc = 0x20CD14u;
    {
        const bool branch_taken_0x20cd14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cd14) {
            ctx->pc = 0x20CD6Cu;
            goto label_20cd6c;
        }
    }
    ctx->pc = 0x20CD1Cu;
label_20cd1c:
    // 0x20cd1c: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_20cd20:
    // 0x20cd20: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20cd24:
    // 0x20cd24: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_20cd28:
    if (ctx->pc == 0x20CD28u) {
        ctx->pc = 0x20CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD24u;
        // 0x20cd28: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD2Cu;
        goto label_20cd2c;
    }
    ctx->pc = 0x20CD24u;
    {
        const bool branch_taken_0x20cd24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD24u;
        // 0x20cd28: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd24) {
            ctx->pc = 0x20CD38u;
            goto label_20cd38;
        }
    }
    ctx->pc = 0x20CD2Cu;
label_20cd2c:
    // 0x20cd2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20cd30:
    if (ctx->pc == 0x20CD30u) {
        ctx->pc = 0x20CD34u;
        goto label_20cd34;
    }
    ctx->pc = 0x20CD2Cu;
    {
        const bool branch_taken_0x20cd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cd2c) {
            ctx->pc = 0x20CD38u;
            goto label_20cd38;
        }
    }
    ctx->pc = 0x20CD34u;
label_20cd34:
    // 0x20cd34: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20cd38:
    // 0x20cd38: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
label_20cd3c:
    // 0x20cd3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cd40:
    // 0x20cd40: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_20cd44:
    if (ctx->pc == 0x20CD44u) {
        ctx->pc = 0x20CD48u;
        goto label_20cd48;
    }
    ctx->pc = 0x20CD40u;
    {
        const bool branch_taken_0x20cd40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20cd40) {
            ctx->pc = 0x20CD6Cu;
            goto label_20cd6c;
        }
    }
    ctx->pc = 0x20CD48u;
label_20cd48:
    // 0x20cd48: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20cd4c:
    // 0x20cd4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20cd50:
    // 0x20cd50: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
label_20cd54:
    // 0x20cd54: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20cd58:
    // 0x20cd58: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20cd58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
label_20cd5c:
    // 0x20cd5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20cd60:
    if (ctx->pc == 0x20CD60u) {
        ctx->pc = 0x20CD64u;
        goto label_20cd64;
    }
    ctx->pc = 0x20CD5Cu;
    {
        const bool branch_taken_0x20cd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cd5c) {
            ctx->pc = 0x20CD6Cu;
            goto label_20cd6c;
        }
    }
    ctx->pc = 0x20CD64u;
label_20cd64:
    // 0x20cd64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20cd68:
    // 0x20cd68: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20cd6c:
    // 0x20cd6c: 0x0  nop
    ctx->pc = 0x20cd6cu;
    // NOP
label_20cd70:
    // 0x20cd70: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20cd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20cd74:
    // 0x20cd74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cd78:
    // 0x20cd78: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_20cd7c:
    if (ctx->pc == 0x20CD7Cu) {
        ctx->pc = 0x20CD80u;
        goto label_20cd80;
    }
    ctx->pc = 0x20CD78u;
    {
        const bool branch_taken_0x20cd78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20cd78) {
            ctx->pc = 0x20CDB8u;
            goto label_20cdb8;
        }
    }
    ctx->pc = 0x20CD80u;
label_20cd80:
    // 0x20cd80: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20cd84:
    // 0x20cd84: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20cd88:
    // 0x20cd88: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20cd88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20cd8c:
    // 0x20cd8c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20cd90:
    if (ctx->pc == 0x20CD90u) {
        ctx->pc = 0x20CD94u;
        goto label_20cd94;
    }
    ctx->pc = 0x20CD8Cu;
    {
        const bool branch_taken_0x20cd8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cd8c) {
            ctx->pc = 0x20CD9Cu;
            goto label_20cd9c;
        }
    }
    ctx->pc = 0x20CD94u;
label_20cd94:
    // 0x20cd94: 0x10000003  b           . + 4 + (0x3 << 2)
label_20cd98:
    if (ctx->pc == 0x20CD98u) {
        ctx->pc = 0x20CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD94u;
        // 0x20cd98: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CD9Cu;
        goto label_20cd9c;
    }
    ctx->pc = 0x20CD94u;
    {
        const bool branch_taken_0x20cd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD94u;
        // 0x20cd98: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd94) {
            ctx->pc = 0x20CDA4u;
            goto label_20cda4;
        }
    }
    ctx->pc = 0x20CD9Cu;
label_20cd9c:
    // 0x20cd9c: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_20cda0:
    // 0x20cda0: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20cda4:
    // 0x20cda4: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20cda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20cda8:
    // 0x20cda8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20cdac:
    if (ctx->pc == 0x20CDACu) {
        ctx->pc = 0x20CDB0u;
        goto label_20cdb0;
    }
    ctx->pc = 0x20CDA8u;
    {
        const bool branch_taken_0x20cda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cda8) {
            ctx->pc = 0x20CDB8u;
            goto label_20cdb8;
        }
    }
    ctx->pc = 0x20CDB0u;
label_20cdb0:
    // 0x20cdb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20cdb4:
    // 0x20cdb4: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20cdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20cdb8:
    // 0x20cdb8: 0xc078030  jal         func_1E00C0
label_20cdbc:
    if (ctx->pc == 0x20CDBCu) {
        ctx->pc = 0x20CDC0u;
        goto label_20cdc0;
    }
    ctx->pc = 0x20CDB8u;
    SET_GPR_U32(ctx, 31, 0x20CDC0u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x20CDC0u;
label_20cdc0:
    // 0x20cdc0: 0xc07a9d8  jal         func_1EA760
label_20cdc4:
    if (ctx->pc == 0x20CDC4u) {
        ctx->pc = 0x20CDC8u;
        goto label_20cdc8;
    }
    ctx->pc = 0x20CDC0u;
    SET_GPR_U32(ctx, 31, 0x20CDC8u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x20CDC8u;
label_20cdc8:
    // 0x20cdc8: 0xc04e168  jal         func_1385A0
label_20cdcc:
    if (ctx->pc == 0x20CDCCu) {
        ctx->pc = 0x20CDD0u;
        goto label_20cdd0;
    }
    ctx->pc = 0x20CDC8u;
    SET_GPR_U32(ctx, 31, 0x20CDD0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20CDC8u, 0x20CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDD0u;
label_20cdd0:
    // 0x20cdd0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_20cdd4:
    // 0x20cdd4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20cdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20cdd8:
    // 0x20cdd8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20cdd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_20cddc:
    // 0x20cddc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20cddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20cde0:
    // 0x20cde0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20cde4:
    // 0x20cde4: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20cde8:
    // 0x20cde8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20cde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20cdec:
    // 0x20cdec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20cdecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cdf0:
    // 0x20cdf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cdf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cdf4:
    // 0x20cdf4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20cdf8:
    // 0x20cdf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20cdfc:
    // 0x20cdfc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20cdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20ce00:
    // 0x20ce00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ce04:
    // 0x20ce04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20ce04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ce08:
    // 0x20ce08: 0xc066c72  jal         func_19B1C8
label_20ce0c:
    if (ctx->pc == 0x20CE0Cu) {
        ctx->pc = 0x20CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE08u;
        // 0x20ce0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CE10u;
        goto label_20ce10;
    }
    ctx->pc = 0x20CE08u;
    SET_GPR_U32(ctx, 31, 0x20CE10u);
    ctx->pc = 0x20CE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE08u;
    // 0x20ce0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20CE08u, 0x20CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE10u;
label_20ce10:
    // 0x20ce10: 0xc08372c  jal         func_20DCB0
label_20ce14:
    if (ctx->pc == 0x20CE14u) {
        ctx->pc = 0x20CE18u;
        goto label_20ce18;
    }
    ctx->pc = 0x20CE10u;
    SET_GPR_U32(ctx, 31, 0x20CE18u);
    ctx->pc = 0x20DCB0u;
    { ctx->pc = 0x20dcb0; return; }
    ctx->pc = 0x20CE18u;
label_20ce18:
    // 0x20ce18: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20ce1c:
    // 0x20ce1c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_20ce20:
    if (ctx->pc == 0x20CE20u) {
        ctx->pc = 0x20CE24u;
        goto label_20ce24;
    }
    ctx->pc = 0x20CE1Cu;
    {
        const bool branch_taken_0x20ce1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ce1c) {
            ctx->pc = 0x20CEE8u;
            goto label_20cee8;
        }
    }
    ctx->pc = 0x20CE24u;
label_20ce24:
    // 0x20ce24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20ce24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20ce28:
    // 0x20ce28: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20ce28u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20ce2c:
    // 0x20ce2c: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20ce2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20ce30:
    // 0x20ce30: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_20ce34:
    // 0x20ce34: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20ce38:
    // 0x20ce38: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20ce3c:
    // 0x20ce3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20ce40:
    // 0x20ce40: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20ce40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_20ce44:
    // 0x20ce44: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20ce44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_20ce48:
    // 0x20ce48: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20ce48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20ce4c:
    // 0x20ce4c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20ce4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20ce50:
    // 0x20ce50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20ce50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ce54:
    // 0x20ce54: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20ce54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
label_20ce58:
    // 0x20ce58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20ce58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ce5c:
    // 0x20ce5c: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20ce5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_20ce60:
    // 0x20ce60: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20ce60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20ce64:
    // 0x20ce64: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20ce64u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_20ce68:
    // 0x20ce68: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20ce68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20ce6c:
    // 0x20ce6c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20ce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_20ce70:
    // 0x20ce70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20ce70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ce74:
    // 0x20ce74: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20ce74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20ce78:
    // 0x20ce78: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20ce78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_20ce7c:
    // 0x20ce7c: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20ce7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
label_20ce80:
    // 0x20ce80: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20ce80u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20ce84:
    // 0x20ce84: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20ce84u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20ce88:
    // 0x20ce88: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20ce88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20ce8c:
    // 0x20ce8c: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20ce8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
label_20ce90:
    // 0x20ce90: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20ce90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
label_20ce94:
    // 0x20ce94: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20ce94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
label_20ce98:
    // 0x20ce98: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_20ce9c:
    // 0x20ce9c: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20ce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_20cea0:
    // 0x20cea0: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20cea0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20cea4:
    // 0x20cea4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20cea8:
    // 0x20cea8: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20cea8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20ceac:
    // 0x20ceac: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
label_20ceb0:
    // 0x20ceb0: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20ceb0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
label_20ceb4:
    // 0x20ceb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20ceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20ceb8:
    // 0x20ceb8: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20ceb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
label_20cebc:
    // 0x20cebc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20cec0:
    // 0x20cec0: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20cec0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
label_20cec4:
    // 0x20cec4: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20cec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
label_20cec8:
    // 0x20cec8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20cec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20cecc:
    // 0x20cecc: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
label_20ced0:
    // 0x20ced0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20ced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20ced4:
    // 0x20ced4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20ced4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20ced8:
    // 0x20ced8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20ced8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_20cedc:
    // 0x20cedc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20cee0:
    // 0x20cee0: 0xc066c72  jal         func_19B1C8
label_20cee4:
    if (ctx->pc == 0x20CEE4u) {
        ctx->pc = 0x20CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEE0u;
        // 0x20cee4: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CEE8u;
        goto label_20cee8;
    }
    ctx->pc = 0x20CEE0u;
    SET_GPR_U32(ctx, 31, 0x20CEE8u);
    ctx->pc = 0x20CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEE0u;
    // 0x20cee4: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20CEE0u, 0x20CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEE8u;
label_20cee8:
    // 0x20cee8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20cee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20ceec:
    // 0x20ceec: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20cef0:
    // 0x20cef0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20cef4:
    // 0x20cef4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20cef8:
    // 0x20cef8: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20cefc:
    // 0x20cefc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20cefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20cf00:
    // 0x20cf00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20cf00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cf04:
    // 0x20cf04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cf04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cf08:
    // 0x20cf08: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20cf08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20cf0c:
    // 0x20cf0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20cf10:
    // 0x20cf10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20cf14:
    // 0x20cf14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20cf18:
    // 0x20cf18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20cf1c:
    // 0x20cf1c: 0xc066c72  jal         func_19B1C8
label_20cf20:
    if (ctx->pc == 0x20CF20u) {
        ctx->pc = 0x20CF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF1Cu;
        // 0x20cf20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF24u;
        goto label_20cf24;
    }
    ctx->pc = 0x20CF1Cu;
    SET_GPR_U32(ctx, 31, 0x20CF24u);
    ctx->pc = 0x20CF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF1Cu;
    // 0x20cf20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20CF1Cu, 0x20CF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF24u;
label_20cf24:
    // 0x20cf24: 0xc077fc4  jal         func_1DFF10
label_20cf28:
    if (ctx->pc == 0x20CF28u) {
        ctx->pc = 0x20CF2Cu;
        goto label_20cf2c;
    }
    ctx->pc = 0x20CF24u;
    SET_GPR_U32(ctx, 31, 0x20CF2Cu);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x20CF2Cu;
label_20cf2c:
    // 0x20cf2c: 0xc07a86c  jal         func_1EA1B0
label_20cf30:
    if (ctx->pc == 0x20CF30u) {
        ctx->pc = 0x20CF34u;
        goto label_20cf34;
    }
    ctx->pc = 0x20CF2Cu;
    SET_GPR_U32(ctx, 31, 0x20CF34u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x20CF34u;
label_20cf34:
    // 0x20cf34: 0xc04e120  jal         func_138480
label_20cf38:
    if (ctx->pc == 0x20CF38u) {
        ctx->pc = 0x20CF3Cu;
        goto label_20cf3c;
    }
    ctx->pc = 0x20CF34u;
    SET_GPR_U32(ctx, 31, 0x20CF3Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20CF34u, 0x20CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF3Cu;
label_20cf3c:
    // 0x20cf3c: 0xc05b578  jal         func_16D5E0
label_20cf40:
    if (ctx->pc == 0x20CF40u) {
        ctx->pc = 0x20CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF3Cu;
        // 0x20cf40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF44u;
        goto label_20cf44;
    }
    ctx->pc = 0x20CF3Cu;
    SET_GPR_U32(ctx, 31, 0x20CF44u);
    ctx->pc = 0x20CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF3Cu;
    // 0x20cf40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20CF3Cu, 0x20CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF44u;
label_20cf44:
    // 0x20cf44: 0xc060258  jal         func_180960
label_20cf48:
    if (ctx->pc == 0x20CF48u) {
        ctx->pc = 0x20CF4Cu;
        goto label_20cf4c;
    }
    ctx->pc = 0x20CF44u;
    SET_GPR_U32(ctx, 31, 0x20CF4Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20CF44u, 0x20CF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF4Cu;
label_20cf4c:
    // 0x20cf4c: 0x8f829164  lw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20cf50:
    // 0x20cf50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20cf54:
    if (ctx->pc == 0x20CF54u) {
        ctx->pc = 0x20CF58u;
        goto label_20cf58;
    }
    ctx->pc = 0x20CF50u;
    {
        const bool branch_taken_0x20cf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf50) {
            ctx->pc = 0x20CF6Cu;
            goto label_20cf6c;
        }
    }
    ctx->pc = 0x20CF58u;
label_20cf58:
    // 0x20cf58: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20cf5c:
    // 0x20cf5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20cf60:
    if (ctx->pc == 0x20CF60u) {
        ctx->pc = 0x20CF64u;
        goto label_20cf64;
    }
    ctx->pc = 0x20CF5Cu;
    {
        const bool branch_taken_0x20cf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf5c) {
            ctx->pc = 0x20CF6Cu;
            goto label_20cf6c;
        }
    }
    ctx->pc = 0x20CF64u;
label_20cf64:
    // 0x20cf64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cf68:
    // 0x20cf68: 0xaf829168  sw          $v0, -0x6E98($gp)
    ctx->pc = 0x20cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
label_20cf6c:
    // 0x20cf6c: 0x0  nop
    ctx->pc = 0x20cf6cu;
    // NOP
label_20cf70:
    // 0x20cf70: 0xc04e198  jal         func_138660
label_20cf74:
    if (ctx->pc == 0x20CF74u) {
        ctx->pc = 0x20CF78u;
        goto label_20cf78;
    }
    ctx->pc = 0x20CF70u;
    SET_GPR_U32(ctx, 31, 0x20CF78u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20CF70u, 0x20CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF78u;
label_20cf78:
    // 0x20cf78: 0x1040ff65  beqz        $v0, . + 4 + (-0x9B << 2)
label_20cf7c:
    if (ctx->pc == 0x20CF7Cu) {
        ctx->pc = 0x20CF80u;
        goto label_20cf80;
    }
    ctx->pc = 0x20CF78u;
    {
        const bool branch_taken_0x20cf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cf78) {
            ctx->pc = 0x20CD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cd10;
        }
    }
    ctx->pc = 0x20CF80u;
label_20cf80:
    // 0x20cf80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20cf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20cf84:
    // 0x20cf84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20cf84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20cf88:
    // 0x20cf88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20cf88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20cf8c:
    // 0x20cf8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20cf8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20cf90:
    // 0x20cf90: 0x3e00008  jr          $ra
label_20cf94:
    if (ctx->pc == 0x20CF94u) {
        ctx->pc = 0x20CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF90u;
        // 0x20cf94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CF98u;
        goto label_20cf98;
    }
    ctx->pc = 0x20CF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF90u;
        // 0x20cf94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CF98u;
label_20cf98:
    // 0x20cf98: 0x0  nop
    ctx->pc = 0x20cf98u;
    // NOP
label_20cf9c:
    // 0x20cf9c: 0x0  nop
    ctx->pc = 0x20cf9cu;
    // NOP
label_20cfa0:
    // 0x20cfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20cfa4:
    // 0x20cfa4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x20cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20cfa8:
    // 0x20cfa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20cfac:
    // 0x20cfac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20cfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cfb0:
    // 0x20cfb0: 0xc04e188  jal         func_138620
label_20cfb4:
    if (ctx->pc == 0x20CFB4u) {
        ctx->pc = 0x20CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFB0u;
        // 0x20cfb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CFB8u;
        goto label_20cfb8;
    }
    ctx->pc = 0x20CFB0u;
    SET_GPR_U32(ctx, 31, 0x20CFB8u);
    ctx->pc = 0x20CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CFB0u;
    // 0x20cfb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x20CFB0u, 0x20CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFB8u;
label_20cfb8:
    // 0x20cfb8: 0xc04e198  jal         func_138660
label_20cfbc:
    if (ctx->pc == 0x20CFBCu) {
        ctx->pc = 0x20CFC0u;
        goto label_20cfc0;
    }
    ctx->pc = 0x20CFB8u;
    SET_GPR_U32(ctx, 31, 0x20CFC0u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20CFB8u, 0x20CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFC0u;
label_20cfc0:
    // 0x20cfc0: 0x14400099  bnez        $v0, . + 4 + (0x99 << 2)
label_20cfc4:
    if (ctx->pc == 0x20CFC4u) {
        ctx->pc = 0x20CFC8u;
        goto label_20cfc8;
    }
    ctx->pc = 0x20CFC0u;
    {
        const bool branch_taken_0x20cfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cfc0) {
            ctx->pc = 0x20D228u;
            goto label_20d228;
        }
    }
    ctx->pc = 0x20CFC8u;
label_20cfc8:
    // 0x20cfc8: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_20cfcc:
    // 0x20cfcc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_20cfd0:
    if (ctx->pc == 0x20CFD0u) {
        ctx->pc = 0x20CFD4u;
        goto label_20cfd4;
    }
    ctx->pc = 0x20CFCCu;
    {
        const bool branch_taken_0x20cfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cfcc) {
            ctx->pc = 0x20D020u;
            goto label_20d020;
        }
    }
    ctx->pc = 0x20CFD4u;
label_20cfd4:
    // 0x20cfd4: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_20cfd8:
    // 0x20cfd8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20cfdc:
    // 0x20cfdc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_20cfe0:
    if (ctx->pc == 0x20CFE0u) {
        ctx->pc = 0x20CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFDCu;
        // 0x20cfe0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CFE4u;
        goto label_20cfe4;
    }
    ctx->pc = 0x20CFDCu;
    {
        const bool branch_taken_0x20cfdc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFDCu;
        // 0x20cfe0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfdc) {
            ctx->pc = 0x20CFF0u;
            goto label_20cff0;
        }
    }
    ctx->pc = 0x20CFE4u;
label_20cfe4:
    // 0x20cfe4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20cfe8:
    if (ctx->pc == 0x20CFE8u) {
        ctx->pc = 0x20CFECu;
        goto label_20cfec;
    }
    ctx->pc = 0x20CFE4u;
    {
        const bool branch_taken_0x20cfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cfe4) {
            ctx->pc = 0x20CFF0u;
            goto label_20cff0;
        }
    }
    ctx->pc = 0x20CFECu;
label_20cfec:
    // 0x20cfec: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20cff0:
    // 0x20cff0: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
label_20cff4:
    // 0x20cff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cff8:
    // 0x20cff8: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_20cffc:
    if (ctx->pc == 0x20CFFCu) {
        ctx->pc = 0x20D000u;
        goto label_20d000;
    }
    ctx->pc = 0x20CFF8u;
    {
        const bool branch_taken_0x20cff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20cff8) {
            ctx->pc = 0x20D020u;
            goto label_20d020;
        }
    }
    ctx->pc = 0x20D000u;
label_20d000:
    // 0x20d000: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20d004:
    // 0x20d004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20d008:
    // 0x20d008: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d008u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
label_20d00c:
    // 0x20d00c: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20d010:
    // 0x20d010: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20d010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
label_20d014:
    // 0x20d014: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_20d018:
    if (ctx->pc == 0x20D018u) {
        ctx->pc = 0x20D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D014u;
        // 0x20d018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D01Cu;
        goto label_20d01c;
    }
    ctx->pc = 0x20D014u;
    {
        const bool branch_taken_0x20d014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D014u;
        // 0x20d018: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d014) {
            ctx->pc = 0x20D020u;
            goto label_20d020;
        }
    }
    ctx->pc = 0x20D01Cu;
label_20d01c:
    // 0x20d01c: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20d020:
    // 0x20d020: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20d020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20d024:
    // 0x20d024: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d028:
    // 0x20d028: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_20d02c:
    if (ctx->pc == 0x20D02Cu) {
        ctx->pc = 0x20D030u;
        goto label_20d030;
    }
    ctx->pc = 0x20D028u;
    {
        const bool branch_taken_0x20d028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d028) {
            ctx->pc = 0x20D068u;
            goto label_20d068;
        }
    }
    ctx->pc = 0x20D030u;
label_20d030:
    // 0x20d030: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20d034:
    // 0x20d034: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20d034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20d038:
    // 0x20d038: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20d038u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20d03c:
    // 0x20d03c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20d040:
    if (ctx->pc == 0x20D040u) {
        ctx->pc = 0x20D044u;
        goto label_20d044;
    }
    ctx->pc = 0x20D03Cu;
    {
        const bool branch_taken_0x20d03c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d03c) {
            ctx->pc = 0x20D04Cu;
            goto label_20d04c;
        }
    }
    ctx->pc = 0x20D044u;
label_20d044:
    // 0x20d044: 0x10000003  b           . + 4 + (0x3 << 2)
label_20d048:
    if (ctx->pc == 0x20D048u) {
        ctx->pc = 0x20D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D044u;
        // 0x20d048: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D04Cu;
        goto label_20d04c;
    }
    ctx->pc = 0x20D044u;
    {
        const bool branch_taken_0x20d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D044u;
        // 0x20d048: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d044) {
            ctx->pc = 0x20D054u;
            goto label_20d054;
        }
    }
    ctx->pc = 0x20D04Cu;
label_20d04c:
    // 0x20d04c: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_20d050:
    // 0x20d050: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20d054:
    // 0x20d054: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20d054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20d058:
    // 0x20d058: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20d05c:
    if (ctx->pc == 0x20D05Cu) {
        ctx->pc = 0x20D060u;
        goto label_20d060;
    }
    ctx->pc = 0x20D058u;
    {
        const bool branch_taken_0x20d058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d058) {
            ctx->pc = 0x20D068u;
            goto label_20d068;
        }
    }
    ctx->pc = 0x20D060u;
label_20d060:
    // 0x20d060: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d064:
    // 0x20d064: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d064u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20d068:
    // 0x20d068: 0xc078030  jal         func_1E00C0
label_20d06c:
    if (ctx->pc == 0x20D06Cu) {
        ctx->pc = 0x20D070u;
        goto label_20d070;
    }
    ctx->pc = 0x20D068u;
    SET_GPR_U32(ctx, 31, 0x20D070u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x20D070u;
label_20d070:
    // 0x20d070: 0xc07a9d8  jal         func_1EA760
label_20d074:
    if (ctx->pc == 0x20D074u) {
        ctx->pc = 0x20D078u;
        goto label_20d078;
    }
    ctx->pc = 0x20D070u;
    SET_GPR_U32(ctx, 31, 0x20D078u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x20D078u;
label_20d078:
    // 0x20d078: 0xc04e168  jal         func_1385A0
label_20d07c:
    if (ctx->pc == 0x20D07Cu) {
        ctx->pc = 0x20D080u;
        goto label_20d080;
    }
    ctx->pc = 0x20D078u;
    SET_GPR_U32(ctx, 31, 0x20D080u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20D078u, 0x20D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D080u;
label_20d080:
    // 0x20d080: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_20d084:
    // 0x20d084: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20d088:
    // 0x20d088: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20d088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_20d08c:
    // 0x20d08c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20d090:
    // 0x20d090: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d094:
    // 0x20d094: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20d098:
    // 0x20d098: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20d09c:
    // 0x20d09c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d09cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d0a0:
    // 0x20d0a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d0a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d0a4:
    // 0x20d0a4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20d0a8:
    // 0x20d0a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20d0ac:
    // 0x20d0ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20d0b0:
    // 0x20d0b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d0b4:
    // 0x20d0b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d0b8:
    // 0x20d0b8: 0xc066c72  jal         func_19B1C8
label_20d0bc:
    if (ctx->pc == 0x20D0BCu) {
        ctx->pc = 0x20D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0B8u;
        // 0x20d0bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D0C0u;
        goto label_20d0c0;
    }
    ctx->pc = 0x20D0B8u;
    SET_GPR_U32(ctx, 31, 0x20D0C0u);
    ctx->pc = 0x20D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0B8u;
    // 0x20d0bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D0B8u, 0x20D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0C0u;
label_20d0c0:
    // 0x20d0c0: 0xc08372c  jal         func_20DCB0
label_20d0c4:
    if (ctx->pc == 0x20D0C4u) {
        ctx->pc = 0x20D0C8u;
        goto label_20d0c8;
    }
    ctx->pc = 0x20D0C0u;
    SET_GPR_U32(ctx, 31, 0x20D0C8u);
    ctx->pc = 0x20DCB0u;
    { ctx->pc = 0x20dcb0; return; }
    ctx->pc = 0x20D0C8u;
label_20d0c8:
    // 0x20d0c8: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20d0cc:
    // 0x20d0cc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_20d0d0:
    if (ctx->pc == 0x20D0D0u) {
        ctx->pc = 0x20D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0CCu;
        // 0x20d0d0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D0D4u;
        goto label_20d0d4;
    }
    ctx->pc = 0x20D0CCu;
    {
        const bool branch_taken_0x20d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0CCu;
        // 0x20d0d0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0cc) {
            ctx->pc = 0x20D194u;
            goto label_20d194;
        }
    }
    ctx->pc = 0x20D0D4u;
label_20d0d4:
    // 0x20d0d4: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d0d4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20d0d8:
    // 0x20d0d8: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20d0d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20d0dc:
    // 0x20d0dc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_20d0e0:
    // 0x20d0e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20d0e4:
    // 0x20d0e4: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20d0e8:
    // 0x20d0e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20d0ec:
    // 0x20d0ec: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20d0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_20d0f0:
    // 0x20d0f0: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20d0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_20d0f4:
    // 0x20d0f4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20d0f8:
    // 0x20d0f8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20d0fc:
    // 0x20d0fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d100:
    // 0x20d100: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20d100u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
label_20d104:
    // 0x20d104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d108:
    // 0x20d108: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20d108u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_20d10c:
    // 0x20d10c: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d10cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20d110:
    // 0x20d110: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20d110u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_20d114:
    // 0x20d114: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d114u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20d118:
    // 0x20d118: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20d118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_20d11c:
    // 0x20d11c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d11cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d120:
    // 0x20d120: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20d120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d124:
    // 0x20d124: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_20d128:
    // 0x20d128: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20d128u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
label_20d12c:
    // 0x20d12c: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d12cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20d130:
    // 0x20d130: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d130u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20d134:
    // 0x20d134: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20d138:
    // 0x20d138: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20d138u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
label_20d13c:
    // 0x20d13c: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20d13cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
label_20d140:
    // 0x20d140: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20d140u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
label_20d144:
    // 0x20d144: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20d144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_20d148:
    // 0x20d148: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20d148u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_20d14c:
    // 0x20d14c: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20d14cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20d150:
    // 0x20d150: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20d150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20d154:
    // 0x20d154: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20d154u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20d158:
    // 0x20d158: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
label_20d15c:
    // 0x20d15c: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20d15cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
label_20d160:
    // 0x20d160: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20d164:
    // 0x20d164: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20d164u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
label_20d168:
    // 0x20d168: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20d16c:
    // 0x20d16c: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20d16cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
label_20d170:
    // 0x20d170: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20d170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
label_20d174:
    // 0x20d174: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20d174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20d178:
    // 0x20d178: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
label_20d17c:
    // 0x20d17c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20d17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20d180:
    // 0x20d180: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20d180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20d184:
    // 0x20d184: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20d184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_20d188:
    // 0x20d188: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20d18c:
    // 0x20d18c: 0xc066c72  jal         func_19B1C8
label_20d190:
    if (ctx->pc == 0x20D190u) {
        ctx->pc = 0x20D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D18Cu;
        // 0x20d190: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D194u;
        goto label_20d194;
    }
    ctx->pc = 0x20D18Cu;
    SET_GPR_U32(ctx, 31, 0x20D194u);
    ctx->pc = 0x20D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D18Cu;
    // 0x20d190: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D18Cu, 0x20D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D194u;
label_20d194:
    // 0x20d194: 0x0  nop
    ctx->pc = 0x20d194u;
    // NOP
label_20d198:
    // 0x20d198: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20d198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20d19c:
    // 0x20d19c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20d1a0:
    // 0x20d1a0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20d1a4:
    // 0x20d1a4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20d1a8:
    // 0x20d1a8: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20d1ac:
    // 0x20d1ac: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20d1b0:
    // 0x20d1b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d1b4:
    // 0x20d1b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d1b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d1b8:
    // 0x20d1b8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20d1bc:
    // 0x20d1bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20d1c0:
    // 0x20d1c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20d1c4:
    // 0x20d1c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d1c8:
    // 0x20d1c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d1cc:
    // 0x20d1cc: 0xc066c72  jal         func_19B1C8
label_20d1d0:
    if (ctx->pc == 0x20D1D0u) {
        ctx->pc = 0x20D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1CCu;
        // 0x20d1d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D1D4u;
        goto label_20d1d4;
    }
    ctx->pc = 0x20D1CCu;
    SET_GPR_U32(ctx, 31, 0x20D1D4u);
    ctx->pc = 0x20D1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1CCu;
    // 0x20d1d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D1CCu, 0x20D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1D4u;
label_20d1d4:
    // 0x20d1d4: 0xc077fc4  jal         func_1DFF10
label_20d1d8:
    if (ctx->pc == 0x20D1D8u) {
        ctx->pc = 0x20D1DCu;
        goto label_20d1dc;
    }
    ctx->pc = 0x20D1D4u;
    SET_GPR_U32(ctx, 31, 0x20D1DCu);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x20D1DCu;
label_20d1dc:
    // 0x20d1dc: 0xc07a86c  jal         func_1EA1B0
label_20d1e0:
    if (ctx->pc == 0x20D1E0u) {
        ctx->pc = 0x20D1E4u;
        goto label_20d1e4;
    }
    ctx->pc = 0x20D1DCu;
    SET_GPR_U32(ctx, 31, 0x20D1E4u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x20D1E4u;
label_20d1e4:
    // 0x20d1e4: 0xc04e120  jal         func_138480
label_20d1e8:
    if (ctx->pc == 0x20D1E8u) {
        ctx->pc = 0x20D1ECu;
        goto label_20d1ec;
    }
    ctx->pc = 0x20D1E4u;
    SET_GPR_U32(ctx, 31, 0x20D1ECu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20D1E4u, 0x20D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1ECu;
label_20d1ec:
    // 0x20d1ec: 0xc05b578  jal         func_16D5E0
label_20d1f0:
    if (ctx->pc == 0x20D1F0u) {
        ctx->pc = 0x20D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1ECu;
        // 0x20d1f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D1F4u;
        goto label_20d1f4;
    }
    ctx->pc = 0x20D1ECu;
    SET_GPR_U32(ctx, 31, 0x20D1F4u);
    ctx->pc = 0x20D1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1ECu;
    // 0x20d1f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20D1ECu, 0x20D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1F4u;
label_20d1f4:
    // 0x20d1f4: 0xc060258  jal         func_180960
label_20d1f8:
    if (ctx->pc == 0x20D1F8u) {
        ctx->pc = 0x20D1FCu;
        goto label_20d1fc;
    }
    ctx->pc = 0x20D1F4u;
    SET_GPR_U32(ctx, 31, 0x20D1FCu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20D1F4u, 0x20D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1FCu;
label_20d1fc:
    // 0x20d1fc: 0x8f829164  lw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20d200:
    // 0x20d200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20d204:
    if (ctx->pc == 0x20D204u) {
        ctx->pc = 0x20D208u;
        goto label_20d208;
    }
    ctx->pc = 0x20D200u;
    {
        const bool branch_taken_0x20d200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d200) {
            ctx->pc = 0x20D218u;
            goto label_20d218;
        }
    }
    ctx->pc = 0x20D208u;
label_20d208:
    // 0x20d208: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_20d20c:
    // 0x20d20c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20d210:
    if (ctx->pc == 0x20D210u) {
        ctx->pc = 0x20D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D20Cu;
        // 0x20d210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D214u;
        goto label_20d214;
    }
    ctx->pc = 0x20D20Cu;
    {
        const bool branch_taken_0x20d20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D20Cu;
        // 0x20d210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d20c) {
            ctx->pc = 0x20D218u;
            goto label_20d218;
        }
    }
    ctx->pc = 0x20D214u;
label_20d214:
    // 0x20d214: 0xaf829168  sw          $v0, -0x6E98($gp)
    ctx->pc = 0x20d214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
label_20d218:
    // 0x20d218: 0xc04e198  jal         func_138660
label_20d21c:
    if (ctx->pc == 0x20D21Cu) {
        ctx->pc = 0x20D220u;
        goto label_20d220;
    }
    ctx->pc = 0x20D218u;
    SET_GPR_U32(ctx, 31, 0x20D220u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20D218u, 0x20D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D220u;
label_20d220:
    // 0x20d220: 0x1040ff69  beqz        $v0, . + 4 + (-0x97 << 2)
label_20d224:
    if (ctx->pc == 0x20D224u) {
        ctx->pc = 0x20D228u;
        goto label_20d228;
    }
    ctx->pc = 0x20D220u;
    {
        const bool branch_taken_0x20d220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d220) {
            ctx->pc = 0x20CFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cfc8;
        }
    }
    ctx->pc = 0x20D228u;
label_20d228:
    // 0x20d228: 0x8f82916c  lw          $v0, -0x6E94($gp)
    ctx->pc = 0x20d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
label_20d22c:
    // 0x20d22c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20d230:
    if (ctx->pc == 0x20D230u) {
        ctx->pc = 0x20D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D22Cu;
        // 0x20d230: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D234u;
        goto label_20d234;
    }
    ctx->pc = 0x20D22Cu;
    {
        const bool branch_taken_0x20d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D22Cu;
        // 0x20d230: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d22c) {
            ctx->pc = 0x20D244u;
            goto label_20d244;
        }
    }
    ctx->pc = 0x20D234u;
label_20d234:
    // 0x20d234: 0xc078050  jal         func_1E0140
label_20d238:
    if (ctx->pc == 0x20D238u) {
        ctx->pc = 0x20D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D234u;
        // 0x20d238: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D23Cu;
        goto label_20d23c;
    }
    ctx->pc = 0x20D234u;
    SET_GPR_U32(ctx, 31, 0x20D23Cu);
    ctx->pc = 0x20D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D234u;
    // 0x20d238: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x20D23Cu;
label_20d23c:
    // 0x20d23c: 0x10000003  b           . + 4 + (0x3 << 2)
label_20d240:
    if (ctx->pc == 0x20D240u) {
        ctx->pc = 0x20D244u;
        goto label_20d244;
    }
    ctx->pc = 0x20D23Cu;
    {
        const bool branch_taken_0x20d23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d23c) {
            ctx->pc = 0x20D24Cu;
            goto label_20d24c;
        }
    }
    ctx->pc = 0x20D244u;
label_20d244:
    // 0x20d244: 0xc078050  jal         func_1E0140
label_20d248:
    if (ctx->pc == 0x20D248u) {
        ctx->pc = 0x20D24Cu;
        goto label_20d24c;
    }
    ctx->pc = 0x20D244u;
    SET_GPR_U32(ctx, 31, 0x20D24Cu);
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x20D24Cu;
label_20d24c:
    // 0x20d24c: 0xc078070  jal         func_1E01C0
label_20d250:
    if (ctx->pc == 0x20D250u) {
        ctx->pc = 0x20D254u;
        goto label_20d254;
    }
    ctx->pc = 0x20D24Cu;
    SET_GPR_U32(ctx, 31, 0x20D254u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x20D254u;
label_20d254:
    // 0x20d254: 0xc083694  jal         func_20DA50
label_20d258:
    if (ctx->pc == 0x20D258u) {
        ctx->pc = 0x20D25Cu;
        goto label_20d25c;
    }
    ctx->pc = 0x20D254u;
    SET_GPR_U32(ctx, 31, 0x20D25Cu);
    ctx->pc = 0x20DA50u;
    { ctx->pc = 0x20da50; return; }
    ctx->pc = 0x20D25Cu;
label_20d25c:
    // 0x20d25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d260:
    // 0x20d260: 0xaf839138  sw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20d260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 3));
label_20d264:
    // 0x20d264: 0x10000094  b           . + 4 + (0x94 << 2)
label_20d268:
    if (ctx->pc == 0x20D268u) {
        ctx->pc = 0x20D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D264u;
        // 0x20d268: 0xaf839130  sw          $v1, -0x6ED0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D26Cu;
        goto label_20d26c;
    }
    ctx->pc = 0x20D264u;
    {
        const bool branch_taken_0x20d264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D264u;
        // 0x20d268: 0xaf839130  sw          $v1, -0x6ED0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d264) {
            ctx->pc = 0x20D4B8u;
            { ctx->pc = 0x20d4b8; return; }
        }
    }
    ctx->pc = 0x20D26Cu;
label_20d26c:
    // 0x20d26c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_20d270:
    if (ctx->pc == 0x20D270u) {
        ctx->pc = 0x20D274u;
        goto label_20d274;
    }
    ctx->pc = 0x20D26Cu;
    {
        const bool branch_taken_0x20d26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d26c) {
            ctx->pc = 0x20D2C0u;
            goto label_20d2c0;
        }
    }
    ctx->pc = 0x20D274u;
label_20d274:
    // 0x20d274: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_20d278:
    // 0x20d278: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20d278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20d27c:
    // 0x20d27c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_20d280:
    if (ctx->pc == 0x20D280u) {
        ctx->pc = 0x20D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D27Cu;
        // 0x20d280: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D284u;
        goto label_20d284;
    }
    ctx->pc = 0x20D27Cu;
    {
        const bool branch_taken_0x20d27c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D27Cu;
        // 0x20d280: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d27c) {
            ctx->pc = 0x20D290u;
            goto label_20d290;
        }
    }
    ctx->pc = 0x20D284u;
label_20d284:
    // 0x20d284: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20d288:
    if (ctx->pc == 0x20D288u) {
        ctx->pc = 0x20D28Cu;
        goto label_20d28c;
    }
    ctx->pc = 0x20D284u;
    {
        const bool branch_taken_0x20d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d284) {
            ctx->pc = 0x20D290u;
            goto label_20d290;
        }
    }
    ctx->pc = 0x20D28Cu;
label_20d28c:
    // 0x20d28c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20d290:
    // 0x20d290: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20d290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
label_20d294:
    // 0x20d294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d298:
    // 0x20d298: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_20d29c:
    if (ctx->pc == 0x20D29Cu) {
        ctx->pc = 0x20D2A0u;
        goto label_20d2a0;
    }
    ctx->pc = 0x20D298u;
    {
        const bool branch_taken_0x20d298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d298) {
            ctx->pc = 0x20D2C0u;
            goto label_20d2c0;
        }
    }
    ctx->pc = 0x20D2A0u;
label_20d2a0:
    // 0x20d2a0: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20d2a4:
    // 0x20d2a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20d2a8:
    // 0x20d2a8: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
label_20d2ac:
    // 0x20d2ac: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20d2b0:
    // 0x20d2b0: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20d2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
label_20d2b4:
    // 0x20d2b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_20d2b8:
    if (ctx->pc == 0x20D2B8u) {
        ctx->pc = 0x20D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2B4u;
        // 0x20d2b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D2BCu;
        goto label_20d2bc;
    }
    ctx->pc = 0x20D2B4u;
    {
        const bool branch_taken_0x20d2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2B4u;
        // 0x20d2b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2b4) {
            ctx->pc = 0x20D2C0u;
            goto label_20d2c0;
        }
    }
    ctx->pc = 0x20D2BCu;
label_20d2bc:
    // 0x20d2bc: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20d2c0:
    // 0x20d2c0: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20d2c4:
    // 0x20d2c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20d2c8:
    // 0x20d2c8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_20d2cc:
    if (ctx->pc == 0x20D2CCu) {
        ctx->pc = 0x20D2D0u;
        goto label_20d2d0;
    }
    ctx->pc = 0x20D2C8u;
    {
        const bool branch_taken_0x20d2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d2c8) {
            ctx->pc = 0x20D308u;
            goto label_20d308;
        }
    }
    ctx->pc = 0x20D2D0u;
label_20d2d0:
    // 0x20d2d0: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20d2d4:
    // 0x20d2d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20d2d8:
    // 0x20d2d8: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20d2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20d2dc:
    // 0x20d2dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20d2e0:
    if (ctx->pc == 0x20D2E0u) {
        ctx->pc = 0x20D2E4u;
        goto label_20d2e4;
    }
    ctx->pc = 0x20D2DCu;
    {
        const bool branch_taken_0x20d2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d2dc) {
            ctx->pc = 0x20D2ECu;
            goto label_20d2ec;
        }
    }
    ctx->pc = 0x20D2E4u;
label_20d2e4:
    // 0x20d2e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_20d2e8:
    if (ctx->pc == 0x20D2E8u) {
        ctx->pc = 0x20D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2E4u;
        // 0x20d2e8: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D2ECu;
        goto label_20d2ec;
    }
    ctx->pc = 0x20D2E4u;
    {
        const bool branch_taken_0x20d2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2E4u;
        // 0x20d2e8: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2e4) {
            ctx->pc = 0x20D2F4u;
            goto label_20d2f4;
        }
    }
    ctx->pc = 0x20D2ECu;
label_20d2ec:
    // 0x20d2ec: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_20d2f0:
    // 0x20d2f0: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20d2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20d2f4:
    // 0x20d2f4: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20d2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20d2f8:
    // 0x20d2f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20d2fc:
    if (ctx->pc == 0x20D2FCu) {
        ctx->pc = 0x20D300u;
        goto label_20d300;
    }
    ctx->pc = 0x20D2F8u;
    {
        const bool branch_taken_0x20d2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d2f8) {
            ctx->pc = 0x20D308u;
            goto label_20d308;
        }
    }
    ctx->pc = 0x20D300u;
label_20d300:
    // 0x20d300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d304:
    // 0x20d304: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20d308:
    // 0x20d308: 0xc078030  jal         func_1E00C0
label_20d30c:
    if (ctx->pc == 0x20D30Cu) {
        ctx->pc = 0x20D310u;
        goto label_20d310;
    }
    ctx->pc = 0x20D308u;
    SET_GPR_U32(ctx, 31, 0x20D310u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x20D310u;
label_20d310:
    // 0x20d310: 0xc07a9d8  jal         func_1EA760
label_20d314:
    if (ctx->pc == 0x20D314u) {
        ctx->pc = 0x20D318u;
        goto label_20d318;
    }
    ctx->pc = 0x20D310u;
    SET_GPR_U32(ctx, 31, 0x20D318u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x20D318u;
label_20d318:
    // 0x20d318: 0xc04e168  jal         func_1385A0
label_20d31c:
    if (ctx->pc == 0x20D31Cu) {
        ctx->pc = 0x20D320u;
        goto label_20d320;
    }
    ctx->pc = 0x20D318u;
    SET_GPR_U32(ctx, 31, 0x20D320u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20D318u, 0x20D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D320u;
label_20d320:
    // 0x20d320: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_20d324:
    // 0x20d324: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20d328:
    // 0x20d328: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20d328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_20d32c:
    // 0x20d32c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20d330:
    // 0x20d330: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20d334:
    // 0x20d334: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20d334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20d338:
    // 0x20d338: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20d33c:
    // 0x20d33c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d340:
    // 0x20d340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d344:
    // 0x20d344: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20d348:
    // 0x20d348: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20d34c:
    // 0x20d34c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20d350:
    // 0x20d350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d354:
    // 0x20d354: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d358:
    // 0x20d358: 0xc066c72  jal         func_19B1C8
label_20d35c:
    if (ctx->pc == 0x20D35Cu) {
        ctx->pc = 0x20D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D358u;
        // 0x20d35c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D360u;
        goto label_20d360;
    }
    ctx->pc = 0x20D358u;
    SET_GPR_U32(ctx, 31, 0x20D360u);
    ctx->pc = 0x20D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D358u;
    // 0x20d35c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D358u, 0x20D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D360u;
label_20d360:
    // 0x20d360: 0xc08372c  jal         func_20DCB0
label_20d364:
    if (ctx->pc == 0x20D364u) {
        ctx->pc = 0x20D368u;
        goto label_20d368;
    }
    ctx->pc = 0x20D360u;
    SET_GPR_U32(ctx, 31, 0x20D368u);
    ctx->pc = 0x20DCB0u;
    { ctx->pc = 0x20dcb0; return; }
    ctx->pc = 0x20D368u;
label_20d368:
    // 0x20d368: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20d36c:
    // 0x20d36c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_20d370:
    if (ctx->pc == 0x20D370u) {
        ctx->pc = 0x20D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D36Cu;
        // 0x20d370: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D374u;
        goto label_20d374;
    }
    ctx->pc = 0x20D36Cu;
    {
        const bool branch_taken_0x20d36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D36Cu;
        // 0x20d370: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d36c) {
            ctx->pc = 0x20D434u;
            goto label_20d434;
        }
    }
    ctx->pc = 0x20D374u;
label_20d374:
    // 0x20d374: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d374u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20d378:
    // 0x20d378: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20d378u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20d37c:
    // 0x20d37c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_20d380:
    // 0x20d380: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20d384:
    // 0x20d384: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20d384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20d388:
    // 0x20d388: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20d388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20d38c:
    // 0x20d38c: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20d38cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_20d390:
    // 0x20d390: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_20d394:
    // 0x20d394: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20d398:
    // 0x20d398: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20d39c:
    // 0x20d39c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d39cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d3a0:
    // 0x20d3a0: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20d3a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
label_20d3a4:
    // 0x20d3a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d3a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d3a8:
    // 0x20d3a8: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20d3a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_20d3ac:
    // 0x20d3ac: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d3acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20d3b0:
    // 0x20d3b0: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20d3b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_20d3b4:
    // 0x20d3b4: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d3b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20d3b8:
    // 0x20d3b8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_20d3bc:
    // 0x20d3bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d3bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d3c0:
    // 0x20d3c0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d3c4:
    // 0x20d3c4: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_20d3c8:
    // 0x20d3c8: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20d3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
label_20d3cc:
    // 0x20d3cc: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d3ccu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20d3d0:
    // 0x20d3d0: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d3d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20d3d4:
    // 0x20d3d4: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d3d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20d3d8:
    // 0x20d3d8: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20d3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
label_20d3dc:
    // 0x20d3dc: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20d3dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
label_20d3e0:
    // 0x20d3e0: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20d3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
label_20d3e4:
    // 0x20d3e4: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_20d3e8:
    // 0x20d3e8: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_20d3ec:
    // 0x20d3ec: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20d3ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20d3f0:
    // 0x20d3f0: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20d3f4:
    // 0x20d3f4: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20d3f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20d3f8:
    // 0x20d3f8: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
label_20d3fc:
    // 0x20d3fc: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20d3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
label_20d400:
    // 0x20d400: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20d404:
    // 0x20d404: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20d404u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
label_20d408:
    // 0x20d408: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20d408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20d40c:
    // 0x20d40c: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20d40cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
label_20d410:
    // 0x20d410: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20d410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
label_20d414:
    // 0x20d414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20d414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20d418:
    // 0x20d418: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20d418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
label_20d41c:
    // 0x20d41c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20d420:
    // 0x20d420: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20d420u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20d424:
    // 0x20d424: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20d424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_20d428:
    // 0x20d428: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20d42c:
    // 0x20d42c: 0xc066c72  jal         func_19B1C8
label_20d430:
    if (ctx->pc == 0x20D430u) {
        ctx->pc = 0x20D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D42Cu;
        // 0x20d430: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D434u;
        goto label_20d434;
    }
    ctx->pc = 0x20D42Cu;
    SET_GPR_U32(ctx, 31, 0x20D434u);
    ctx->pc = 0x20D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D42Cu;
    // 0x20d430: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D42Cu, 0x20D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D434u;
label_20d434:
    // 0x20d434: 0x0  nop
    ctx->pc = 0x20d434u;
    // NOP
label_20d438:
    // 0x20d438: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20d438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20d43c:
    // 0x20d43c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20d440:
    // 0x20d440: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20d444:
    // 0x20d444: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20d448:
    // 0x20d448: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20d44c:
    // 0x20d44c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20d450:
    // 0x20d450: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d454:
    // 0x20d454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d458:
    // 0x20d458: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20d45c:
    // 0x20d45c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20d460:
    // 0x20d460: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20d464:
    // 0x20d464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20d468:
    // 0x20d468: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20d46c:
    // 0x20d46c: 0xc066c72  jal         func_19B1C8
label_20d470:
    if (ctx->pc == 0x20D470u) {
        ctx->pc = 0x20D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D46Cu;
        // 0x20d470: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D474u;
        goto label_20d474;
    }
    ctx->pc = 0x20D46Cu;
    SET_GPR_U32(ctx, 31, 0x20D474u);
    ctx->pc = 0x20D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D46Cu;
    // 0x20d470: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D46Cu, 0x20D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D474u;
label_20d474:
    // 0x20d474: 0xc077fc4  jal         func_1DFF10
label_20d478:
    if (ctx->pc == 0x20D478u) {
        ctx->pc = 0x20D47Cu;
        goto label_20d47c;
    }
    ctx->pc = 0x20D474u;
    SET_GPR_U32(ctx, 31, 0x20D47Cu);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x20D47Cu;
label_20d47c:
    // 0x20d47c: 0xc07a86c  jal         func_1EA1B0
label_20d480:
    if (ctx->pc == 0x20D480u) {
        ctx->pc = 0x20D484u;
        goto label_20d484;
    }
    ctx->pc = 0x20D47Cu;
    SET_GPR_U32(ctx, 31, 0x20D484u);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x20D484u;
label_20d484:
    // 0x20d484: 0xc04e120  jal         func_138480
label_20d488:
    if (ctx->pc == 0x20D488u) {
        ctx->pc = 0x20D48Cu;
        goto label_20d48c;
    }
    ctx->pc = 0x20D484u;
    SET_GPR_U32(ctx, 31, 0x20D48Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20D484u, 0x20D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D48Cu;
label_20d48c:
    // 0x20d48c: 0xc05b578  jal         func_16D5E0
label_20d490:
    if (ctx->pc == 0x20D490u) {
        ctx->pc = 0x20D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D48Cu;
        // 0x20d490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D494u;
        goto label_20d494;
    }
    ctx->pc = 0x20D48Cu;
    SET_GPR_U32(ctx, 31, 0x20D494u);
    ctx->pc = 0x20D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D48Cu;
    // 0x20d490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20D48Cu, 0x20D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D494u;
label_20d494:
    // 0x20d494: 0xc060258  jal         func_180960
label_20d498:
    if (ctx->pc == 0x20D498u) {
        ctx->pc = 0x20D49Cu;
        goto label_20d49c;
    }
    ctx->pc = 0x20D494u;
    SET_GPR_U32(ctx, 31, 0x20D49Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20D494u, 0x20D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D49Cu;
label_20d49c:
    // 0x20d49c: 0x8f839164  lw          $v1, -0x6E9C($gp)
    ctx->pc = 0x20d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
    ctx->pc = 0x20d4a0u;
    return;
}

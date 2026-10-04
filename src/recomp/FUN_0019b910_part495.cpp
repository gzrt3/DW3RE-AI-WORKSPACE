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


void FUN_0019b910_part495(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28cc70u: goto label_28cc70;
        case 0x28cc74u: goto label_28cc74;
        case 0x28cc78u: goto label_28cc78;
        case 0x28cc7cu: goto label_28cc7c;
        case 0x28cc80u: goto label_28cc80;
        case 0x28cc84u: goto label_28cc84;
        case 0x28cc88u: goto label_28cc88;
        case 0x28cc8cu: goto label_28cc8c;
        case 0x28cc90u: goto label_28cc90;
        case 0x28cc94u: goto label_28cc94;
        case 0x28cc98u: goto label_28cc98;
        case 0x28cc9cu: goto label_28cc9c;
        case 0x28cca0u: goto label_28cca0;
        case 0x28cca4u: goto label_28cca4;
        case 0x28cca8u: goto label_28cca8;
        case 0x28ccacu: goto label_28ccac;
        case 0x28ccb0u: goto label_28ccb0;
        case 0x28ccb4u: goto label_28ccb4;
        case 0x28ccb8u: goto label_28ccb8;
        case 0x28ccbcu: goto label_28ccbc;
        case 0x28ccc0u: goto label_28ccc0;
        case 0x28ccc4u: goto label_28ccc4;
        case 0x28ccc8u: goto label_28ccc8;
        case 0x28ccccu: goto label_28cccc;
        case 0x28ccd0u: goto label_28ccd0;
        case 0x28ccd4u: goto label_28ccd4;
        case 0x28ccd8u: goto label_28ccd8;
        case 0x28ccdcu: goto label_28ccdc;
        case 0x28cce0u: goto label_28cce0;
        case 0x28cce4u: goto label_28cce4;
        case 0x28cce8u: goto label_28cce8;
        case 0x28ccecu: goto label_28ccec;
        case 0x28ccf0u: goto label_28ccf0;
        case 0x28ccf4u: goto label_28ccf4;
        case 0x28ccf8u: goto label_28ccf8;
        case 0x28ccfcu: goto label_28ccfc;
        case 0x28cd00u: goto label_28cd00;
        case 0x28cd04u: goto label_28cd04;
        case 0x28cd08u: goto label_28cd08;
        case 0x28cd0cu: goto label_28cd0c;
        case 0x28cd10u: goto label_28cd10;
        case 0x28cd14u: goto label_28cd14;
        case 0x28cd18u: goto label_28cd18;
        case 0x28cd1cu: goto label_28cd1c;
        case 0x28cd20u: goto label_28cd20;
        case 0x28cd24u: goto label_28cd24;
        case 0x28cd28u: goto label_28cd28;
        case 0x28cd2cu: goto label_28cd2c;
        case 0x28cd30u: goto label_28cd30;
        case 0x28cd34u: goto label_28cd34;
        case 0x28cd38u: goto label_28cd38;
        case 0x28cd3cu: goto label_28cd3c;
        case 0x28cd40u: goto label_28cd40;
        case 0x28cd44u: goto label_28cd44;
        case 0x28cd48u: goto label_28cd48;
        case 0x28cd4cu: goto label_28cd4c;
        case 0x28cd50u: goto label_28cd50;
        case 0x28cd54u: goto label_28cd54;
        case 0x28cd58u: goto label_28cd58;
        case 0x28cd5cu: goto label_28cd5c;
        case 0x28cd60u: goto label_28cd60;
        case 0x28cd64u: goto label_28cd64;
        case 0x28cd68u: goto label_28cd68;
        case 0x28cd6cu: goto label_28cd6c;
        case 0x28cd70u: goto label_28cd70;
        case 0x28cd74u: goto label_28cd74;
        case 0x28cd78u: goto label_28cd78;
        case 0x28cd7cu: goto label_28cd7c;
        case 0x28cd80u: goto label_28cd80;
        case 0x28cd84u: goto label_28cd84;
        case 0x28cd88u: goto label_28cd88;
        case 0x28cd8cu: goto label_28cd8c;
        case 0x28cd90u: goto label_28cd90;
        case 0x28cd94u: goto label_28cd94;
        case 0x28cd98u: goto label_28cd98;
        case 0x28cd9cu: goto label_28cd9c;
        case 0x28cda0u: goto label_28cda0;
        case 0x28cda4u: goto label_28cda4;
        case 0x28cda8u: goto label_28cda8;
        case 0x28cdacu: goto label_28cdac;
        case 0x28cdb0u: goto label_28cdb0;
        case 0x28cdb4u: goto label_28cdb4;
        case 0x28cdb8u: goto label_28cdb8;
        case 0x28cdbcu: goto label_28cdbc;
        case 0x28cdc0u: goto label_28cdc0;
        case 0x28cdc4u: goto label_28cdc4;
        case 0x28cdc8u: goto label_28cdc8;
        case 0x28cdccu: goto label_28cdcc;
        case 0x28cdd0u: goto label_28cdd0;
        case 0x28cdd4u: goto label_28cdd4;
        case 0x28cdd8u: goto label_28cdd8;
        case 0x28cddcu: goto label_28cddc;
        case 0x28cde0u: goto label_28cde0;
        case 0x28cde4u: goto label_28cde4;
        case 0x28cde8u: goto label_28cde8;
        case 0x28cdecu: goto label_28cdec;
        case 0x28cdf0u: goto label_28cdf0;
        case 0x28cdf4u: goto label_28cdf4;
        case 0x28cdf8u: goto label_28cdf8;
        case 0x28cdfcu: goto label_28cdfc;
        case 0x28ce00u: goto label_28ce00;
        case 0x28ce04u: goto label_28ce04;
        case 0x28ce08u: goto label_28ce08;
        case 0x28ce0cu: goto label_28ce0c;
        case 0x28ce10u: goto label_28ce10;
        case 0x28ce14u: goto label_28ce14;
        case 0x28ce18u: goto label_28ce18;
        case 0x28ce1cu: goto label_28ce1c;
        case 0x28ce20u: goto label_28ce20;
        case 0x28ce24u: goto label_28ce24;
        case 0x28ce28u: goto label_28ce28;
        case 0x28ce2cu: goto label_28ce2c;
        case 0x28ce30u: goto label_28ce30;
        case 0x28ce34u: goto label_28ce34;
        case 0x28ce38u: goto label_28ce38;
        case 0x28ce3cu: goto label_28ce3c;
        case 0x28ce40u: goto label_28ce40;
        case 0x28ce44u: goto label_28ce44;
        case 0x28ce48u: goto label_28ce48;
        case 0x28ce4cu: goto label_28ce4c;
        case 0x28ce50u: goto label_28ce50;
        case 0x28ce54u: goto label_28ce54;
        case 0x28ce58u: goto label_28ce58;
        case 0x28ce5cu: goto label_28ce5c;
        case 0x28ce60u: goto label_28ce60;
        case 0x28ce64u: goto label_28ce64;
        case 0x28ce68u: goto label_28ce68;
        case 0x28ce6cu: goto label_28ce6c;
        case 0x28ce70u: goto label_28ce70;
        case 0x28ce74u: goto label_28ce74;
        case 0x28ce78u: goto label_28ce78;
        case 0x28ce7cu: goto label_28ce7c;
        case 0x28ce80u: goto label_28ce80;
        case 0x28ce84u: goto label_28ce84;
        case 0x28ce88u: goto label_28ce88;
        case 0x28ce8cu: goto label_28ce8c;
        case 0x28ce90u: goto label_28ce90;
        case 0x28ce94u: goto label_28ce94;
        case 0x28ce98u: goto label_28ce98;
        case 0x28ce9cu: goto label_28ce9c;
        case 0x28cea0u: goto label_28cea0;
        case 0x28cea4u: goto label_28cea4;
        case 0x28cea8u: goto label_28cea8;
        case 0x28ceacu: goto label_28ceac;
        case 0x28ceb0u: goto label_28ceb0;
        case 0x28ceb4u: goto label_28ceb4;
        case 0x28ceb8u: goto label_28ceb8;
        case 0x28cebcu: goto label_28cebc;
        case 0x28cec0u: goto label_28cec0;
        case 0x28cec4u: goto label_28cec4;
        case 0x28cec8u: goto label_28cec8;
        case 0x28ceccu: goto label_28cecc;
        case 0x28ced0u: goto label_28ced0;
        case 0x28ced4u: goto label_28ced4;
        case 0x28ced8u: goto label_28ced8;
        case 0x28cedcu: goto label_28cedc;
        case 0x28cee0u: goto label_28cee0;
        case 0x28cee4u: goto label_28cee4;
        case 0x28cee8u: goto label_28cee8;
        case 0x28ceecu: goto label_28ceec;
        case 0x28cef0u: goto label_28cef0;
        case 0x28cef4u: goto label_28cef4;
        case 0x28cef8u: goto label_28cef8;
        case 0x28cefcu: goto label_28cefc;
        case 0x28cf00u: goto label_28cf00;
        case 0x28cf04u: goto label_28cf04;
        case 0x28cf08u: goto label_28cf08;
        case 0x28cf0cu: goto label_28cf0c;
        case 0x28cf10u: goto label_28cf10;
        case 0x28cf14u: goto label_28cf14;
        case 0x28cf18u: goto label_28cf18;
        case 0x28cf1cu: goto label_28cf1c;
        case 0x28cf20u: goto label_28cf20;
        case 0x28cf24u: goto label_28cf24;
        case 0x28cf28u: goto label_28cf28;
        case 0x28cf2cu: goto label_28cf2c;
        case 0x28cf30u: goto label_28cf30;
        case 0x28cf34u: goto label_28cf34;
        case 0x28cf38u: goto label_28cf38;
        case 0x28cf3cu: goto label_28cf3c;
        case 0x28cf40u: goto label_28cf40;
        case 0x28cf44u: goto label_28cf44;
        case 0x28cf48u: goto label_28cf48;
        case 0x28cf4cu: goto label_28cf4c;
        case 0x28cf50u: goto label_28cf50;
        case 0x28cf54u: goto label_28cf54;
        case 0x28cf58u: goto label_28cf58;
        case 0x28cf5cu: goto label_28cf5c;
        case 0x28cf60u: goto label_28cf60;
        case 0x28cf64u: goto label_28cf64;
        case 0x28cf68u: goto label_28cf68;
        case 0x28cf6cu: goto label_28cf6c;
        case 0x28cf70u: goto label_28cf70;
        case 0x28cf74u: goto label_28cf74;
        case 0x28cf78u: goto label_28cf78;
        case 0x28cf7cu: goto label_28cf7c;
        case 0x28cf80u: goto label_28cf80;
        case 0x28cf84u: goto label_28cf84;
        case 0x28cf88u: goto label_28cf88;
        case 0x28cf8cu: goto label_28cf8c;
        case 0x28cf90u: goto label_28cf90;
        case 0x28cf94u: goto label_28cf94;
        case 0x28cf98u: goto label_28cf98;
        case 0x28cf9cu: goto label_28cf9c;
        case 0x28cfa0u: goto label_28cfa0;
        case 0x28cfa4u: goto label_28cfa4;
        case 0x28cfa8u: goto label_28cfa8;
        case 0x28cfacu: goto label_28cfac;
        case 0x28cfb0u: goto label_28cfb0;
        case 0x28cfb4u: goto label_28cfb4;
        case 0x28cfb8u: goto label_28cfb8;
        case 0x28cfbcu: goto label_28cfbc;
        case 0x28cfc0u: goto label_28cfc0;
        case 0x28cfc4u: goto label_28cfc4;
        case 0x28cfc8u: goto label_28cfc8;
        case 0x28cfccu: goto label_28cfcc;
        case 0x28cfd0u: goto label_28cfd0;
        case 0x28cfd4u: goto label_28cfd4;
        case 0x28cfd8u: goto label_28cfd8;
        case 0x28cfdcu: goto label_28cfdc;
        case 0x28cfe0u: goto label_28cfe0;
        case 0x28cfe4u: goto label_28cfe4;
        case 0x28cfe8u: goto label_28cfe8;
        case 0x28cfecu: goto label_28cfec;
        case 0x28cff0u: goto label_28cff0;
        case 0x28cff4u: goto label_28cff4;
        case 0x28cff8u: goto label_28cff8;
        case 0x28cffcu: goto label_28cffc;
        case 0x28d000u: goto label_28d000;
        case 0x28d004u: goto label_28d004;
        case 0x28d008u: goto label_28d008;
        case 0x28d00cu: goto label_28d00c;
        case 0x28d010u: goto label_28d010;
        case 0x28d014u: goto label_28d014;
        case 0x28d018u: goto label_28d018;
        case 0x28d01cu: goto label_28d01c;
        case 0x28d020u: goto label_28d020;
        case 0x28d024u: goto label_28d024;
        case 0x28d028u: goto label_28d028;
        case 0x28d02cu: goto label_28d02c;
        case 0x28d030u: goto label_28d030;
        case 0x28d034u: goto label_28d034;
        case 0x28d038u: goto label_28d038;
        case 0x28d03cu: goto label_28d03c;
        case 0x28d040u: goto label_28d040;
        case 0x28d044u: goto label_28d044;
        case 0x28d048u: goto label_28d048;
        case 0x28d04cu: goto label_28d04c;
        case 0x28d050u: goto label_28d050;
        case 0x28d054u: goto label_28d054;
        case 0x28d058u: goto label_28d058;
        case 0x28d05cu: goto label_28d05c;
        case 0x28d060u: goto label_28d060;
        case 0x28d064u: goto label_28d064;
        case 0x28d068u: goto label_28d068;
        case 0x28d06cu: goto label_28d06c;
        case 0x28d070u: goto label_28d070;
        case 0x28d074u: goto label_28d074;
        case 0x28d078u: goto label_28d078;
        case 0x28d07cu: goto label_28d07c;
        case 0x28d080u: goto label_28d080;
        case 0x28d084u: goto label_28d084;
        case 0x28d088u: goto label_28d088;
        case 0x28d08cu: goto label_28d08c;
        case 0x28d090u: goto label_28d090;
        case 0x28d094u: goto label_28d094;
        case 0x28d098u: goto label_28d098;
        case 0x28d09cu: goto label_28d09c;
        case 0x28d0a0u: goto label_28d0a0;
        case 0x28d0a4u: goto label_28d0a4;
        case 0x28d0a8u: goto label_28d0a8;
        case 0x28d0acu: goto label_28d0ac;
        case 0x28d0b0u: goto label_28d0b0;
        case 0x28d0b4u: goto label_28d0b4;
        case 0x28d0b8u: goto label_28d0b8;
        case 0x28d0bcu: goto label_28d0bc;
        case 0x28d0c0u: goto label_28d0c0;
        case 0x28d0c4u: goto label_28d0c4;
        case 0x28d0c8u: goto label_28d0c8;
        case 0x28d0ccu: goto label_28d0cc;
        case 0x28d0d0u: goto label_28d0d0;
        case 0x28d0d4u: goto label_28d0d4;
        case 0x28d0d8u: goto label_28d0d8;
        case 0x28d0dcu: goto label_28d0dc;
        case 0x28d0e0u: goto label_28d0e0;
        case 0x28d0e4u: goto label_28d0e4;
        case 0x28d0e8u: goto label_28d0e8;
        case 0x28d0ecu: goto label_28d0ec;
        case 0x28d0f0u: goto label_28d0f0;
        case 0x28d0f4u: goto label_28d0f4;
        case 0x28d0f8u: goto label_28d0f8;
        case 0x28d0fcu: goto label_28d0fc;
        case 0x28d100u: goto label_28d100;
        case 0x28d104u: goto label_28d104;
        case 0x28d108u: goto label_28d108;
        case 0x28d10cu: goto label_28d10c;
        case 0x28d110u: goto label_28d110;
        case 0x28d114u: goto label_28d114;
        case 0x28d118u: goto label_28d118;
        case 0x28d11cu: goto label_28d11c;
        case 0x28d120u: goto label_28d120;
        case 0x28d124u: goto label_28d124;
        case 0x28d128u: goto label_28d128;
        case 0x28d12cu: goto label_28d12c;
        case 0x28d130u: goto label_28d130;
        case 0x28d134u: goto label_28d134;
        case 0x28d138u: goto label_28d138;
        case 0x28d13cu: goto label_28d13c;
        case 0x28d140u: goto label_28d140;
        case 0x28d144u: goto label_28d144;
        case 0x28d148u: goto label_28d148;
        case 0x28d14cu: goto label_28d14c;
        case 0x28d150u: goto label_28d150;
        case 0x28d154u: goto label_28d154;
        case 0x28d158u: goto label_28d158;
        case 0x28d15cu: goto label_28d15c;
        case 0x28d160u: goto label_28d160;
        case 0x28d164u: goto label_28d164;
        case 0x28d168u: goto label_28d168;
        case 0x28d16cu: goto label_28d16c;
        case 0x28d170u: goto label_28d170;
        case 0x28d174u: goto label_28d174;
        case 0x28d178u: goto label_28d178;
        case 0x28d17cu: goto label_28d17c;
        case 0x28d180u: goto label_28d180;
        case 0x28d184u: goto label_28d184;
        case 0x28d188u: goto label_28d188;
        case 0x28d18cu: goto label_28d18c;
        case 0x28d190u: goto label_28d190;
        case 0x28d194u: goto label_28d194;
        case 0x28d198u: goto label_28d198;
        case 0x28d19cu: goto label_28d19c;
        case 0x28d1a0u: goto label_28d1a0;
        case 0x28d1a4u: goto label_28d1a4;
        case 0x28d1a8u: goto label_28d1a8;
        case 0x28d1acu: goto label_28d1ac;
        case 0x28d1b0u: goto label_28d1b0;
        case 0x28d1b4u: goto label_28d1b4;
        case 0x28d1b8u: goto label_28d1b8;
        case 0x28d1bcu: goto label_28d1bc;
        case 0x28d1c0u: goto label_28d1c0;
        case 0x28d1c4u: goto label_28d1c4;
        case 0x28d1c8u: goto label_28d1c8;
        case 0x28d1ccu: goto label_28d1cc;
        case 0x28d1d0u: goto label_28d1d0;
        case 0x28d1d4u: goto label_28d1d4;
        case 0x28d1d8u: goto label_28d1d8;
        case 0x28d1dcu: goto label_28d1dc;
        case 0x28d1e0u: goto label_28d1e0;
        case 0x28d1e4u: goto label_28d1e4;
        case 0x28d1e8u: goto label_28d1e8;
        case 0x28d1ecu: goto label_28d1ec;
        case 0x28d1f0u: goto label_28d1f0;
        case 0x28d1f4u: goto label_28d1f4;
        case 0x28d1f8u: goto label_28d1f8;
        case 0x28d1fcu: goto label_28d1fc;
        case 0x28d200u: goto label_28d200;
        case 0x28d204u: goto label_28d204;
        case 0x28d208u: goto label_28d208;
        case 0x28d20cu: goto label_28d20c;
        case 0x28d210u: goto label_28d210;
        case 0x28d214u: goto label_28d214;
        case 0x28d218u: goto label_28d218;
        case 0x28d21cu: goto label_28d21c;
        case 0x28d220u: goto label_28d220;
        case 0x28d224u: goto label_28d224;
        case 0x28d228u: goto label_28d228;
        case 0x28d22cu: goto label_28d22c;
        case 0x28d230u: goto label_28d230;
        case 0x28d234u: goto label_28d234;
        case 0x28d238u: goto label_28d238;
        case 0x28d23cu: goto label_28d23c;
        case 0x28d240u: goto label_28d240;
        case 0x28d244u: goto label_28d244;
        case 0x28d248u: goto label_28d248;
        case 0x28d24cu: goto label_28d24c;
        case 0x28d250u: goto label_28d250;
        case 0x28d254u: goto label_28d254;
        case 0x28d258u: goto label_28d258;
        case 0x28d25cu: goto label_28d25c;
        case 0x28d260u: goto label_28d260;
        case 0x28d264u: goto label_28d264;
        case 0x28d268u: goto label_28d268;
        case 0x28d26cu: goto label_28d26c;
        case 0x28d270u: goto label_28d270;
        case 0x28d274u: goto label_28d274;
        case 0x28d278u: goto label_28d278;
        case 0x28d27cu: goto label_28d27c;
        case 0x28d280u: goto label_28d280;
        case 0x28d284u: goto label_28d284;
        case 0x28d288u: goto label_28d288;
        case 0x28d28cu: goto label_28d28c;
        case 0x28d290u: goto label_28d290;
        case 0x28d294u: goto label_28d294;
        case 0x28d298u: goto label_28d298;
        case 0x28d29cu: goto label_28d29c;
        case 0x28d2a0u: goto label_28d2a0;
        case 0x28d2a4u: goto label_28d2a4;
        case 0x28d2a8u: goto label_28d2a8;
        case 0x28d2acu: goto label_28d2ac;
        case 0x28d2b0u: goto label_28d2b0;
        case 0x28d2b4u: goto label_28d2b4;
        case 0x28d2b8u: goto label_28d2b8;
        case 0x28d2bcu: goto label_28d2bc;
        case 0x28d2c0u: goto label_28d2c0;
        case 0x28d2c4u: goto label_28d2c4;
        case 0x28d2c8u: goto label_28d2c8;
        case 0x28d2ccu: goto label_28d2cc;
        case 0x28d2d0u: goto label_28d2d0;
        case 0x28d2d4u: goto label_28d2d4;
        case 0x28d2d8u: goto label_28d2d8;
        case 0x28d2dcu: goto label_28d2dc;
        case 0x28d2e0u: goto label_28d2e0;
        case 0x28d2e4u: goto label_28d2e4;
        case 0x28d2e8u: goto label_28d2e8;
        case 0x28d2ecu: goto label_28d2ec;
        case 0x28d2f0u: goto label_28d2f0;
        case 0x28d2f4u: goto label_28d2f4;
        case 0x28d2f8u: goto label_28d2f8;
        case 0x28d2fcu: goto label_28d2fc;
        case 0x28d300u: goto label_28d300;
        case 0x28d304u: goto label_28d304;
        case 0x28d308u: goto label_28d308;
        case 0x28d30cu: goto label_28d30c;
        case 0x28d310u: goto label_28d310;
        case 0x28d314u: goto label_28d314;
        case 0x28d318u: goto label_28d318;
        case 0x28d31cu: goto label_28d31c;
        case 0x28d320u: goto label_28d320;
        case 0x28d324u: goto label_28d324;
        case 0x28d328u: goto label_28d328;
        case 0x28d32cu: goto label_28d32c;
        case 0x28d330u: goto label_28d330;
        case 0x28d334u: goto label_28d334;
        case 0x28d338u: goto label_28d338;
        case 0x28d33cu: goto label_28d33c;
        case 0x28d340u: goto label_28d340;
        case 0x28d344u: goto label_28d344;
        case 0x28d348u: goto label_28d348;
        case 0x28d34cu: goto label_28d34c;
        case 0x28d350u: goto label_28d350;
        case 0x28d354u: goto label_28d354;
        case 0x28d358u: goto label_28d358;
        case 0x28d35cu: goto label_28d35c;
        case 0x28d360u: goto label_28d360;
        case 0x28d364u: goto label_28d364;
        case 0x28d368u: goto label_28d368;
        case 0x28d36cu: goto label_28d36c;
        case 0x28d370u: goto label_28d370;
        case 0x28d374u: goto label_28d374;
        case 0x28d378u: goto label_28d378;
        case 0x28d37cu: goto label_28d37c;
        case 0x28d380u: goto label_28d380;
        case 0x28d384u: goto label_28d384;
        case 0x28d388u: goto label_28d388;
        case 0x28d38cu: goto label_28d38c;
        case 0x28d390u: goto label_28d390;
        case 0x28d394u: goto label_28d394;
        case 0x28d398u: goto label_28d398;
        case 0x28d39cu: goto label_28d39c;
        case 0x28d3a0u: goto label_28d3a0;
        case 0x28d3a4u: goto label_28d3a4;
        case 0x28d3a8u: goto label_28d3a8;
        case 0x28d3acu: goto label_28d3ac;
        case 0x28d3b0u: goto label_28d3b0;
        case 0x28d3b4u: goto label_28d3b4;
        case 0x28d3b8u: goto label_28d3b8;
        case 0x28d3bcu: goto label_28d3bc;
        case 0x28d3c0u: goto label_28d3c0;
        case 0x28d3c4u: goto label_28d3c4;
        case 0x28d3c8u: goto label_28d3c8;
        case 0x28d3ccu: goto label_28d3cc;
        case 0x28d3d0u: goto label_28d3d0;
        case 0x28d3d4u: goto label_28d3d4;
        case 0x28d3d8u: goto label_28d3d8;
        case 0x28d3dcu: goto label_28d3dc;
        case 0x28d3e0u: goto label_28d3e0;
        case 0x28d3e4u: goto label_28d3e4;
        case 0x28d3e8u: goto label_28d3e8;
        case 0x28d3ecu: goto label_28d3ec;
        case 0x28d3f0u: goto label_28d3f0;
        case 0x28d3f4u: goto label_28d3f4;
        case 0x28d3f8u: goto label_28d3f8;
        case 0x28d3fcu: goto label_28d3fc;
        case 0x28d400u: goto label_28d400;
        case 0x28d404u: goto label_28d404;
        case 0x28d408u: goto label_28d408;
        case 0x28d40cu: goto label_28d40c;
        case 0x28d410u: goto label_28d410;
        case 0x28d414u: goto label_28d414;
        case 0x28d418u: goto label_28d418;
        case 0x28d41cu: goto label_28d41c;
        case 0x28d420u: goto label_28d420;
        case 0x28d424u: goto label_28d424;
        case 0x28d428u: goto label_28d428;
        case 0x28d42cu: goto label_28d42c;
        case 0x28d430u: goto label_28d430;
        case 0x28d434u: goto label_28d434;
        case 0x28d438u: goto label_28d438;
        case 0x28d43cu: goto label_28d43c;
        default: return;
    }

label_28cc70:
    // 0x28cc70: 0x0  nop
    ctx->pc = 0x28cc70u;
    // NOP
label_28cc74:
    // 0x28cc74: 0x0  nop
    ctx->pc = 0x28cc74u;
    // NOP
label_28cc78:
    // 0x28cc78: 0x0  nop
    ctx->pc = 0x28cc78u;
    // NOP
label_28cc7c:
    // 0x28cc7c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cc7cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CC7C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cc80:
    // 0x28cc80: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cc80u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CC80 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cc84:
    // 0x28cc84: 0x0  nop
    ctx->pc = 0x28cc84u;
    // NOP
label_28cc88:
    // 0x28cc88: 0x0  nop
    ctx->pc = 0x28cc88u;
    // NOP
label_28cc8c:
    // 0x28cc8c: 0x0  nop
    ctx->pc = 0x28cc8cu;
    // NOP
label_28cc90:
    // 0x28cc90: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cc94:
    // 0x28cc94: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cc94u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28cc98:
    // 0x28cc98: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cc98u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28cc9c:
    // 0x28cc9c: 0x0  nop
    ctx->pc = 0x28cc9cu;
    // NOP
label_28cca0:
    // 0x28cca0: 0x3e8a3d71  .word       0x3E8A3D71                   # lui         $t2, 0x3D71 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cca0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cca4:
    // 0x28cca4: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cca8:
    // 0x28cca8: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cca8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28ccac:
    // 0x28ccac: 0x0  nop
    ctx->pc = 0x28ccacu;
    // NOP
label_28ccb0:
    // 0x28ccb0: 0x3f570a3d  .word       0x3F570A3D                   # lui         $s7, 0xA3D # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccb0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)2621 << 16));
label_28ccb4:
    // 0x28ccb4: 0x3f147ae1  .word       0x3F147AE1                   # lui         $s4, 0x7AE1 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccb4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31457 << 16));
label_28ccb8:
    // 0x28ccb8: 0x3f051eb8  .word       0x3F051EB8                   # lui         $a1, 0x1EB8 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7864 << 16));
label_28ccbc:
    // 0x28ccbc: 0x0  nop
    ctx->pc = 0x28ccbcu;
    // NOP
label_28ccc0:
    // 0x28ccc0: 0x191932  tlt         $zero, $t9, 100
    ctx->pc = 0x28ccc0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28ccc4:
    // 0x28ccc4: 0x0  nop
    ctx->pc = 0x28ccc4u;
    // NOP
label_28ccc8:
    // 0x28ccc8: 0x6b1  tgeu        $zero, $zero, 26
    ctx->pc = 0x28ccc8u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cccc:
    // 0x28cccc: 0x0  nop
    ctx->pc = 0x28ccccu;
    // NOP
label_28ccd0:
    // 0x28ccd0: 0x0  nop
    ctx->pc = 0x28ccd0u;
    // NOP
label_28ccd4:
    // 0x28ccd4: 0x0  nop
    ctx->pc = 0x28ccd4u;
    // NOP
label_28ccd8:
    // 0x28ccd8: 0x0  nop
    ctx->pc = 0x28ccd8u;
    // NOP
label_28ccdc:
    // 0x28ccdc: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ccdcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CCDC raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cce0:
    // 0x28cce0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cce0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CCE0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cce4:
    // 0x28cce4: 0x0  nop
    ctx->pc = 0x28cce4u;
    // NOP
label_28cce8:
    // 0x28cce8: 0x0  nop
    ctx->pc = 0x28cce8u;
    // NOP
label_28ccec:
    // 0x28ccec: 0x0  nop
    ctx->pc = 0x28ccecu;
    // NOP
label_28ccf0:
    // 0x28ccf0: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28ccf4:
    // 0x28ccf4: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccf4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28ccf8:
    // 0x28ccf8: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ccf8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28ccfc:
    // 0x28ccfc: 0x0  nop
    ctx->pc = 0x28ccfcu;
    // NOP
label_28cd00:
    // 0x28cd00: 0x3e8a3d71  .word       0x3E8A3D71                   # lui         $t2, 0x3D71 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cd04:
    // 0x28cd04: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cd08:
    // 0x28cd08: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd08u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cd0c:
    // 0x28cd0c: 0x0  nop
    ctx->pc = 0x28cd0cu;
    // NOP
label_28cd10:
    // 0x28cd10: 0x3f28f5c3  .word       0x3F28F5C3                   # lui         $t0, 0xF5C3 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62915 << 16));
label_28cd14:
    // 0x28cd14: 0x3ef5c28f  .word       0x3EF5C28F                   # lui         $s5, 0xC28F # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd14u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_28cd18:
    // 0x28cd18: 0x3ed1eb85  .word       0x3ED1EB85                   # lui         $s1, 0xEB85 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60293 << 16));
label_28cd1c:
    // 0x28cd1c: 0x0  nop
    ctx->pc = 0x28cd1cu;
    // NOP
label_28cd20:
    // 0x28cd20: 0x191932  tlt         $zero, $t9, 100
    ctx->pc = 0x28cd20u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28cd24:
    // 0x28cd24: 0x0  nop
    ctx->pc = 0x28cd24u;
    // NOP
label_28cd28:
    // 0x28cd28: 0x6b1  tgeu        $zero, $zero, 26
    ctx->pc = 0x28cd28u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cd2c:
    // 0x28cd2c: 0x0  nop
    ctx->pc = 0x28cd2cu;
    // NOP
label_28cd30:
    // 0x28cd30: 0x0  nop
    ctx->pc = 0x28cd30u;
    // NOP
label_28cd34:
    // 0x28cd34: 0x0  nop
    ctx->pc = 0x28cd34u;
    // NOP
label_28cd38:
    // 0x28cd38: 0x0  nop
    ctx->pc = 0x28cd38u;
    // NOP
label_28cd3c:
    // 0x28cd3c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cd3cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CD3C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cd40:
    // 0x28cd40: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cd40u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CD40 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cd44:
    // 0x28cd44: 0x0  nop
    ctx->pc = 0x28cd44u;
    // NOP
label_28cd48:
    // 0x28cd48: 0x0  nop
    ctx->pc = 0x28cd48u;
    // NOP
label_28cd4c:
    // 0x28cd4c: 0x0  nop
    ctx->pc = 0x28cd4cu;
    // NOP
label_28cd50:
    // 0x28cd50: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cd54:
    // 0x28cd54: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd54u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28cd58:
    // 0x28cd58: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd58u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28cd5c:
    // 0x28cd5c: 0x0  nop
    ctx->pc = 0x28cd5cu;
    // NOP
label_28cd60:
    // 0x28cd60: 0x3e8a3d71  .word       0x3E8A3D71                   # lui         $t2, 0x3D71 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cd64:
    // 0x28cd64: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cd68:
    // 0x28cd68: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd68u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cd6c:
    // 0x28cd6c: 0x0  nop
    ctx->pc = 0x28cd6cu;
    // NOP
label_28cd70:
    // 0x28cd70: 0x3f0a3d71  .word       0x3F0A3D71                   # lui         $t2, 0x3D71 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cd74:
    // 0x28cd74: 0x3e8f5c29  .word       0x3E8F5C29                   # lui         $t7, 0x5C29 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_28cd78:
    // 0x28cd78: 0x3e6147ae  .word       0x3E6147AE                   # lui         $at, 0x47AE # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18350 << 16));
label_28cd7c:
    // 0x28cd7c: 0x0  nop
    ctx->pc = 0x28cd7cu;
    // NOP
label_28cd80:
    // 0x28cd80: 0x191932  tlt         $zero, $t9, 100
    ctx->pc = 0x28cd80u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28cd84:
    // 0x28cd84: 0x0  nop
    ctx->pc = 0x28cd84u;
    // NOP
label_28cd88:
    // 0x28cd88: 0x6b1  tgeu        $zero, $zero, 26
    ctx->pc = 0x28cd88u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cd8c:
    // 0x28cd8c: 0x0  nop
    ctx->pc = 0x28cd8cu;
    // NOP
label_28cd90:
    // 0x28cd90: 0x0  nop
    ctx->pc = 0x28cd90u;
    // NOP
label_28cd94:
    // 0x28cd94: 0x0  nop
    ctx->pc = 0x28cd94u;
    // NOP
label_28cd98:
    // 0x28cd98: 0x0  nop
    ctx->pc = 0x28cd98u;
    // NOP
label_28cd9c:
    // 0x28cd9c: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cd9cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CD9C raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cda0:
    // 0x28cda0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cda0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CDA0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cda4:
    // 0x28cda4: 0x0  nop
    ctx->pc = 0x28cda4u;
    // NOP
label_28cda8:
    // 0x28cda8: 0x0  nop
    ctx->pc = 0x28cda8u;
    // NOP
label_28cdac:
    // 0x28cdac: 0x0  nop
    ctx->pc = 0x28cdacu;
    // NOP
label_28cdb0:
    // 0x28cdb0: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cdb4:
    // 0x28cdb4: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdb4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28cdb8:
    // 0x28cdb8: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdb8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28cdbc:
    // 0x28cdbc: 0x0  nop
    ctx->pc = 0x28cdbcu;
    // NOP
label_28cdc0:
    // 0x28cdc0: 0x3e8a3d71  .word       0x3E8A3D71                   # lui         $t2, 0x3D71 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdc0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cdc4:
    // 0x28cdc4: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28cdc8:
    // 0x28cdc8: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdc8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cdcc:
    // 0x28cdcc: 0x0  nop
    ctx->pc = 0x28cdccu;
    // NOP
label_28cdd0:
    // 0x28cdd0: 0x3f5eb852  .word       0x3F5EB852                   # lui         $fp, 0xB852 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdd0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47186 << 16));
label_28cdd4:
    // 0x28cdd4: 0x3f0a3d71  .word       0x3F0A3D71                   # lui         $t2, 0x3D71 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdd4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28cdd8:
    // 0x28cdd8: 0x3ef5c28f  .word       0x3EF5C28F                   # lui         $s5, 0xC28F # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cdd8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_28cddc:
    // 0x28cddc: 0x0  nop
    ctx->pc = 0x28cddcu;
    // NOP
label_28cde0:
    // 0x28cde0: 0x191932  tlt         $zero, $t9, 100
    ctx->pc = 0x28cde0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28cde4:
    // 0x28cde4: 0x0  nop
    ctx->pc = 0x28cde4u;
    // NOP
label_28cde8:
    // 0x28cde8: 0x681  .word       0x00000681                   # INVALID     $zero, $zero, 0x681 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cde8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28CDE8 raw=0x00000681"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cdec:
    // 0x28cdec: 0x0  nop
    ctx->pc = 0x28cdecu;
    // NOP
label_28cdf0:
    // 0x28cdf0: 0x0  nop
    ctx->pc = 0x28cdf0u;
    // NOP
label_28cdf4:
    // 0x28cdf4: 0x0  nop
    ctx->pc = 0x28cdf4u;
    // NOP
label_28cdf8:
    // 0x28cdf8: 0x0  nop
    ctx->pc = 0x28cdf8u;
    // NOP
label_28cdfc:
    // 0x28cdfc: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cdfcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CDFC raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ce00:
    // 0x28ce00: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ce00u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CE00 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ce04:
    // 0x28ce04: 0x0  nop
    ctx->pc = 0x28ce04u;
    // NOP
label_28ce08:
    // 0x28ce08: 0x0  nop
    ctx->pc = 0x28ce08u;
    // NOP
label_28ce0c:
    // 0x28ce0c: 0x0  nop
    ctx->pc = 0x28ce0cu;
    // NOP
label_28ce10:
    // 0x28ce10: 0x3f83d70a  .word       0x3F83D70A                   # lui         $v1, 0xD70A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_28ce14:
    // 0x28ce14: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce14u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28ce18:
    // 0x28ce18: 0x3eae147b  .word       0x3EAE147B                   # lui         $t6, 0x147B # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce18u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_28ce1c:
    // 0x28ce1c: 0x0  nop
    ctx->pc = 0x28ce1cu;
    // NOP
label_28ce20:
    // 0x28ce20: 0x3ee66666  .word       0x3EE66666                   # lui         $a2, 0x6666 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_28ce24:
    // 0x28ce24: 0x3e851eb8  .word       0x3E851EB8                   # lui         $a1, 0x1EB8 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7864 << 16));
label_28ce28:
    // 0x28ce28: 0x3e6b851f  .word       0x3E6B851F                   # lui         $t3, 0x851F # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce28u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34079 << 16));
label_28ce2c:
    // 0x28ce2c: 0x0  nop
    ctx->pc = 0x28ce2cu;
    // NOP
label_28ce30:
    // 0x28ce30: 0x3f5eb852  .word       0x3F5EB852                   # lui         $fp, 0xB852 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce30u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47186 << 16));
label_28ce34:
    // 0x28ce34: 0x3f0a3d71  .word       0x3F0A3D71                   # lui         $t2, 0x3D71 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15729 << 16));
label_28ce38:
    // 0x28ce38: 0x3ef5c28f  .word       0x3EF5C28F                   # lui         $s5, 0xC28F # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ce38u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_28ce3c:
    // 0x28ce3c: 0x0  nop
    ctx->pc = 0x28ce3cu;
    // NOP
label_28ce40:
    // 0x28ce40: 0x234280  .word       0x00234280                   # sll         $t0, $v1, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ce40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_28ce44:
    // 0x28ce44: 0x0  nop
    ctx->pc = 0x28ce44u;
    // NOP
label_28ce48:
    // 0x28ce48: 0x681  .word       0x00000681                   # INVALID     $zero, $zero, 0x681 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ce48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28CE48 raw=0x00000681"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ce4c:
    // 0x28ce4c: 0x0  nop
    ctx->pc = 0x28ce4cu;
    // NOP
label_28ce50:
    // 0x28ce50: 0x0  nop
    ctx->pc = 0x28ce50u;
    // NOP
label_28ce54:
    // 0x28ce54: 0x0  nop
    ctx->pc = 0x28ce54u;
    // NOP
label_28ce58:
    // 0x28ce58: 0x0  nop
    ctx->pc = 0x28ce58u;
    // NOP
label_28ce5c:
    // 0x28ce5c: 0x447a0000  .word       0x447A0000                   # INVALID     $v1, $k0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ce5cu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x0 at 0x28CE5C raw=0x447A0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ce60:
    // 0x28ce60: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ce60u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CE60 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28ce64:
    // 0x28ce64: 0x0  nop
    ctx->pc = 0x28ce64u;
    // NOP
label_28ce68:
    // 0x28ce68: 0x0  nop
    ctx->pc = 0x28ce68u;
    // NOP
label_28ce6c:
    // 0x28ce6c: 0x0  nop
    ctx->pc = 0x28ce6cu;
    // NOP
label_28ce70:
    // 0x28ce70: 0x0  nop
    ctx->pc = 0x28ce70u;
    // NOP
label_28ce74:
    // 0x28ce74: 0x0  nop
    ctx->pc = 0x28ce74u;
    // NOP
label_28ce78:
    // 0x28ce78: 0x0  nop
    ctx->pc = 0x28ce78u;
    // NOP
label_28ce7c:
    // 0x28ce7c: 0x0  nop
    ctx->pc = 0x28ce7cu;
    // NOP
label_28ce80:
    // 0x28ce80: 0x0  nop
    ctx->pc = 0x28ce80u;
    // NOP
label_28ce84:
    // 0x28ce84: 0x0  nop
    ctx->pc = 0x28ce84u;
    // NOP
label_28ce88:
    // 0x28ce88: 0x0  nop
    ctx->pc = 0x28ce88u;
    // NOP
label_28ce8c:
    // 0x28ce8c: 0x0  nop
    ctx->pc = 0x28ce8cu;
    // NOP
label_28ce90:
    // 0x28ce90: 0x0  nop
    ctx->pc = 0x28ce90u;
    // NOP
label_28ce94:
    // 0x28ce94: 0x0  nop
    ctx->pc = 0x28ce94u;
    // NOP
label_28ce98:
    // 0x28ce98: 0x0  nop
    ctx->pc = 0x28ce98u;
    // NOP
label_28ce9c:
    // 0x28ce9c: 0x0  nop
    ctx->pc = 0x28ce9cu;
    // NOP
label_28cea0:
    // 0x28cea0: 0x0  nop
    ctx->pc = 0x28cea0u;
    // NOP
label_28cea4:
    // 0x28cea4: 0x0  nop
    ctx->pc = 0x28cea4u;
    // NOP
label_28cea8:
    // 0x28cea8: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28cea8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ceac:
    // 0x28ceac: 0x0  nop
    ctx->pc = 0x28ceacu;
    // NOP
label_28ceb0:
    // 0x28ceb0: 0x0  nop
    ctx->pc = 0x28ceb0u;
    // NOP
label_28ceb4:
    // 0x28ceb4: 0x3f400000  .word       0x3F400000                   # lui         $zero, 0x0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28ceb4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28ceb8:
    // 0x28ceb8: 0x0  nop
    ctx->pc = 0x28ceb8u;
    // NOP
label_28cebc:
    // 0x28cebc: 0x453b8000  .word       0x453B8000                   # INVALID     $t1, $k1, -0x8000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cebcu;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x0 at 0x28CEBC raw=0x453B8000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cec0:
    // 0x28cec0: 0x459c4000  .word       0x459C4000                   # INVALID     $t4, $gp, 0x4000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cec0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0xC, function 0x0 at 0x28CEC0 raw=0x459C4000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cec4:
    // 0x28cec4: 0x0  nop
    ctx->pc = 0x28cec4u;
    // NOP
label_28cec8:
    // 0x28cec8: 0x0  nop
    ctx->pc = 0x28cec8u;
    // NOP
label_28cecc:
    // 0x28cecc: 0x0  nop
    ctx->pc = 0x28ceccu;
    // NOP
label_28ced0:
    // 0x28ced0: 0x0  nop
    ctx->pc = 0x28ced0u;
    // NOP
label_28ced4:
    // 0x28ced4: 0x0  nop
    ctx->pc = 0x28ced4u;
    // NOP
label_28ced8:
    // 0x28ced8: 0x0  nop
    ctx->pc = 0x28ced8u;
    // NOP
label_28cedc:
    // 0x28cedc: 0x0  nop
    ctx->pc = 0x28cedcu;
    // NOP
label_28cee0:
    // 0x28cee0: 0x0  nop
    ctx->pc = 0x28cee0u;
    // NOP
label_28cee4:
    // 0x28cee4: 0x0  nop
    ctx->pc = 0x28cee4u;
    // NOP
label_28cee8:
    // 0x28cee8: 0x0  nop
    ctx->pc = 0x28cee8u;
    // NOP
label_28ceec:
    // 0x28ceec: 0x0  nop
    ctx->pc = 0x28ceecu;
    // NOP
label_28cef0:
    // 0x28cef0: 0x0  nop
    ctx->pc = 0x28cef0u;
    // NOP
label_28cef4:
    // 0x28cef4: 0x0  nop
    ctx->pc = 0x28cef4u;
    // NOP
label_28cef8:
    // 0x28cef8: 0x0  nop
    ctx->pc = 0x28cef8u;
    // NOP
label_28cefc:
    // 0x28cefc: 0x0  nop
    ctx->pc = 0x28cefcu;
    // NOP
label_28cf00:
    // 0x28cf00: 0x0  nop
    ctx->pc = 0x28cf00u;
    // NOP
label_28cf04:
    // 0x28cf04: 0x0  nop
    ctx->pc = 0x28cf04u;
    // NOP
label_28cf08:
    // 0x28cf08: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x28cf08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cf0c:
    // 0x28cf0c: 0x0  nop
    ctx->pc = 0x28cf0cu;
    // NOP
label_28cf10:
    // 0x28cf10: 0x0  nop
    ctx->pc = 0x28cf10u;
    // NOP
label_28cf14:
    // 0x28cf14: 0x0  nop
    ctx->pc = 0x28cf14u;
    // NOP
label_28cf18:
    // 0x28cf18: 0x0  nop
    ctx->pc = 0x28cf18u;
    // NOP
label_28cf1c:
    // 0x28cf1c: 0x0  nop
    ctx->pc = 0x28cf1cu;
    // NOP
label_28cf20:
    // 0x28cf20: 0x0  nop
    ctx->pc = 0x28cf20u;
    // NOP
label_28cf24:
    // 0x28cf24: 0x0  nop
    ctx->pc = 0x28cf24u;
    // NOP
label_28cf28:
    // 0x28cf28: 0x0  nop
    ctx->pc = 0x28cf28u;
    // NOP
label_28cf2c:
    // 0x28cf2c: 0x0  nop
    ctx->pc = 0x28cf2cu;
    // NOP
label_28cf30:
    // 0x28cf30: 0x0  nop
    ctx->pc = 0x28cf30u;
    // NOP
label_28cf34:
    // 0x28cf34: 0x0  nop
    ctx->pc = 0x28cf34u;
    // NOP
label_28cf38:
    // 0x28cf38: 0x0  nop
    ctx->pc = 0x28cf38u;
    // NOP
label_28cf3c:
    // 0x28cf3c: 0x0  nop
    ctx->pc = 0x28cf3cu;
    // NOP
label_28cf40:
    // 0x28cf40: 0x44325350  .word       0x44325350                   # dmfc1       $s2, $f10 # 00000350 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28cf40u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x10 at 0x28CF40 raw=0x44325350"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cf44:
    // 0x28cf44: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cf44u;
    // NOP
label_28cf48:
    // 0x28cf48: 0x0  nop
    ctx->pc = 0x28cf48u;
    // NOP
label_28cf4c:
    // 0x28cf4c: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x28cf4cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cf50:
    // 0x28cf50: 0x0  nop
    ctx->pc = 0x28cf50u;
    // NOP
label_28cf54:
    // 0x28cf54: 0x0  nop
    ctx->pc = 0x28cf54u;
    // NOP
label_28cf58:
    // 0x28cf58: 0x0  nop
    ctx->pc = 0x28cf58u;
    // NOP
label_28cf5c:
    // 0x28cf5c: 0x0  nop
    ctx->pc = 0x28cf5cu;
    // NOP
label_28cf60:
    // 0x28cf60: 0x0  nop
    ctx->pc = 0x28cf60u;
    // NOP
label_28cf64:
    // 0x28cf64: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x28cf64u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28cf68:
    // 0x28cf68: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x28cf68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28CF68 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28cf6c:
    // 0x28cf6c: 0x0  nop
    ctx->pc = 0x28cf6cu;
    // NOP
label_28cf70:
    // 0x28cf70: 0x0  nop
    ctx->pc = 0x28cf70u;
    // NOP
label_28cf74:
    // 0x28cf74: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cf74u;
    ctx->lo = GPR_U64(ctx, 0);
label_28cf78:
    // 0x28cf78: 0x28  mfsa        $zero
    ctx->pc = 0x28cf78u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28cf7c:
    // 0x28cf7c: 0x0  nop
    ctx->pc = 0x28cf7cu;
    // NOP
label_28cf80:
    // 0x28cf80: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28cf80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28cf84:
    // 0x28cf84: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28cf84u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28cf88:
    // 0x28cf88: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x28cf88u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
label_28cf8c:
    // 0x28cf8c: 0x0  nop
    ctx->pc = 0x28cf8cu;
    // NOP
label_28cf90:
    // 0x28cf90: 0x3f1ac13c  .word       0x3F1AC13C                   # lui         $k0, 0xC13C # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cf90u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)49468 << 16));
label_28cf94:
    // 0x28cf94: 0x3ec86d72  .word       0x3EC86D72                   # lui         $t0, 0x6D72 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cf94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28018 << 16));
label_28cf98:
    // 0x28cf98: 0x3f319b5f  .word       0x3F319B5F                   # lui         $s1, 0x9B5F # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cf98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)39775 << 16));
label_28cf9c:
    // 0x28cf9c: 0x0  nop
    ctx->pc = 0x28cf9cu;
    // NOP
label_28cfa0:
    // 0x28cfa0: 0xbf3ad395  cache       0x1A, -0x2C6B($t9)
    ctx->pc = 0x28cfa0u;
    // CACHE instruction (ignored)
label_28cfa4:
    // 0x28cfa4: 0x3e792d99  .word       0x3E792D99                   # lui         $t9, 0x2D99 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfa4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)11673 << 16));
label_28cfa8:
    // 0x28cfa8: 0xbf238ed2  cache       0x03, -0x712E($t9)
    ctx->pc = 0x28cfa8u;
    // CACHE instruction (ignored)
label_28cfac:
    // 0x28cfac: 0x0  nop
    ctx->pc = 0x28cfacu;
    // NOP
label_28cfb0:
    // 0x28cfb0: 0x0  nop
    ctx->pc = 0x28cfb0u;
    // NOP
label_28cfb4:
    // 0x28cfb4: 0x0  nop
    ctx->pc = 0x28cfb4u;
    // NOP
label_28cfb8:
    // 0x28cfb8: 0x0  nop
    ctx->pc = 0x28cfb8u;
    // NOP
label_28cfbc:
    // 0x28cfbc: 0x0  nop
    ctx->pc = 0x28cfbcu;
    // NOP
label_28cfc0:
    // 0x28cfc0: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfc0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cfc4:
    // 0x28cfc4: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfc4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cfc8:
    // 0x28cfc8: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfc8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28cfcc:
    // 0x28cfcc: 0x0  nop
    ctx->pc = 0x28cfccu;
    // NOP
label_28cfd0:
    // 0x28cfd0: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfd0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cfd4:
    // 0x28cfd4: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfd4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cfd8:
    // 0x28cfd8: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cfd8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_28cfdc:
    // 0x28cfdc: 0x0  nop
    ctx->pc = 0x28cfdcu;
    // NOP
label_28cfe0:
    // 0x28cfe0: 0x0  nop
    ctx->pc = 0x28cfe0u;
    // NOP
label_28cfe4:
    // 0x28cfe4: 0x0  nop
    ctx->pc = 0x28cfe4u;
    // NOP
label_28cfe8:
    // 0x28cfe8: 0x0  nop
    ctx->pc = 0x28cfe8u;
    // NOP
label_28cfec:
    // 0x28cfec: 0x0  nop
    ctx->pc = 0x28cfecu;
    // NOP
label_28cff0:
    // 0x28cff0: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cff0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cff4:
    // 0x28cff4: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cff4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cff8:
    // 0x28cff8: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28cff8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_28cffc:
    // 0x28cffc: 0x0  nop
    ctx->pc = 0x28cffcu;
    // NOP
label_28d000:
    // 0x28d000: 0x99826382  lwr         $v0, 0x6382($t4)
    ctx->pc = 0x28d000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 25474); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_28d004:
    // 0x28d004: 0x81828e82  lb          $v0, -0x717E($t4)
    ctx->pc = 0x28d004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294938242)));
label_28d008:
    // 0x28d008: 0x94829382  lhu         $v0, -0x6C7E($a0)
    ctx->pc = 0x28d008u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294939522)));
label_28d00c:
    // 0x28d00c: 0x40819982  .word       0x40819982                   # mtc0        $at, WatchHi # 00000182 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d00cu;
    // Unimplemented MTC0 to COP0 19
label_28d010:
    // 0x28d010: 0x81827682  lb          $v0, 0x7682($t4)
    ctx->pc = 0x28d010u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 30338)));
label_28d014:
    // 0x28d014: 0x92829282  lbu         $v0, -0x6D7E($s4)
    ctx->pc = 0x28d014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294939266)));
label_28d018:
    // 0x28d018: 0x8f828982  lw          $v0, -0x767E($gp)
    ctx->pc = 0x28d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936962)));
label_28d01c:
    // 0x28d01c: 0x93829282  lbu         $v0, -0x6D7E($gp)
    ctx->pc = 0x28d01cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939266)));
label_28d020:
    // 0x28d020: 0x40815282  .word       0x40815282                   # mtc0        $at, EntryHi # 00000282 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28d020u;
    ctx->cop0_entryhi = GPR_U32(ctx, 1) & 0xC00000FF;
label_28d024:
    // 0x28d024: 0x94827782  lhu         $v0, 0x7782($a0)
    ctx->pc = 0x28d024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30594)));
label_28d028:
    // 0x28d028: 0x85829282  lh          $v0, -0x6D7E($t4)
    ctx->pc = 0x28d028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4294939266)));
label_28d02c:
    // 0x28d02c: 0x85828d82  lh          $v0, -0x727E($t4)
    ctx->pc = 0x28d02cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4294937986)));
label_28d030:
    // 0x28d030: 0x6b824081  ldl         $v0, 0x4081($gp)
    ctx->pc = 0x28d030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 16513); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_28d034:
    // 0x28d034: 0x87828582  lh          $v0, -0x7A7E($gp)
    ctx->pc = 0x28d034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935938)));
label_28d038:
    // 0x28d038: 0x8e828582  lw          $v0, -0x7A7E($s4)
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935938)));
label_28d03c:
    // 0x28d03c: 0x93828482  lbu         $v0, -0x7B7E($gp)
    ctx->pc = 0x28d03cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935682)));
label_28d040:
    // 0x28d040: 0x0  nop
    ctx->pc = 0x28d040u;
    // NOP
label_28d044:
    // 0x28d044: 0x6f73756d  ldr         $s3, 0x756D($k1)
    ctx->pc = 0x28d044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30061); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_28d048:
    // 0x28d048: 0x63692e75  daddi       $t1, $k1, 0x2E75
    ctx->pc = 0x28d048u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)11893; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_28d04c:
    // 0x28d04c: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d04cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28d050:
    // 0x28d050: 0x0  nop
    ctx->pc = 0x28d050u;
    // NOP
label_28d054:
    // 0x28d054: 0x0  nop
    ctx->pc = 0x28d054u;
    // NOP
label_28d058:
    // 0x28d058: 0x0  nop
    ctx->pc = 0x28d058u;
    // NOP
label_28d05c:
    // 0x28d05c: 0x0  nop
    ctx->pc = 0x28d05cu;
    // NOP
label_28d060:
    // 0x28d060: 0x0  nop
    ctx->pc = 0x28d060u;
    // NOP
label_28d064:
    // 0x28d064: 0x0  nop
    ctx->pc = 0x28d064u;
    // NOP
label_28d068:
    // 0x28d068: 0x0  nop
    ctx->pc = 0x28d068u;
    // NOP
label_28d06c:
    // 0x28d06c: 0x0  nop
    ctx->pc = 0x28d06cu;
    // NOP
label_28d070:
    // 0x28d070: 0x0  nop
    ctx->pc = 0x28d070u;
    // NOP
label_28d074:
    // 0x28d074: 0x0  nop
    ctx->pc = 0x28d074u;
    // NOP
label_28d078:
    // 0x28d078: 0x0  nop
    ctx->pc = 0x28d078u;
    // NOP
label_28d07c:
    // 0x28d07c: 0x0  nop
    ctx->pc = 0x28d07cu;
    // NOP
label_28d080:
    // 0x28d080: 0x0  nop
    ctx->pc = 0x28d080u;
    // NOP
label_28d084:
    // 0x28d084: 0x6f73756d  ldr         $s3, 0x756D($k1)
    ctx->pc = 0x28d084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30061); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_28d088:
    // 0x28d088: 0x63692e75  daddi       $t1, $k1, 0x2E75
    ctx->pc = 0x28d088u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)11893; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_28d08c:
    // 0x28d08c: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d08cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28d090:
    // 0x28d090: 0x0  nop
    ctx->pc = 0x28d090u;
    // NOP
label_28d094:
    // 0x28d094: 0x0  nop
    ctx->pc = 0x28d094u;
    // NOP
label_28d098:
    // 0x28d098: 0x0  nop
    ctx->pc = 0x28d098u;
    // NOP
label_28d09c:
    // 0x28d09c: 0x0  nop
    ctx->pc = 0x28d09cu;
    // NOP
label_28d0a0:
    // 0x28d0a0: 0x0  nop
    ctx->pc = 0x28d0a0u;
    // NOP
label_28d0a4:
    // 0x28d0a4: 0x0  nop
    ctx->pc = 0x28d0a4u;
    // NOP
label_28d0a8:
    // 0x28d0a8: 0x0  nop
    ctx->pc = 0x28d0a8u;
    // NOP
label_28d0ac:
    // 0x28d0ac: 0x0  nop
    ctx->pc = 0x28d0acu;
    // NOP
label_28d0b0:
    // 0x28d0b0: 0x0  nop
    ctx->pc = 0x28d0b0u;
    // NOP
label_28d0b4:
    // 0x28d0b4: 0x0  nop
    ctx->pc = 0x28d0b4u;
    // NOP
label_28d0b8:
    // 0x28d0b8: 0x0  nop
    ctx->pc = 0x28d0b8u;
    // NOP
label_28d0bc:
    // 0x28d0bc: 0x0  nop
    ctx->pc = 0x28d0bcu;
    // NOP
label_28d0c0:
    // 0x28d0c0: 0x0  nop
    ctx->pc = 0x28d0c0u;
    // NOP
label_28d0c4:
    // 0x28d0c4: 0x6f73756d  ldr         $s3, 0x756D($k1)
    ctx->pc = 0x28d0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30061); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_28d0c8:
    // 0x28d0c8: 0x63692e75  daddi       $t1, $k1, 0x2E75
    ctx->pc = 0x28d0c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)11893; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_28d0cc:
    // 0x28d0cc: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d0ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28d0d0:
    // 0x28d0d0: 0x0  nop
    ctx->pc = 0x28d0d0u;
    // NOP
label_28d0d4:
    // 0x28d0d4: 0x0  nop
    ctx->pc = 0x28d0d4u;
    // NOP
label_28d0d8:
    // 0x28d0d8: 0x0  nop
    ctx->pc = 0x28d0d8u;
    // NOP
label_28d0dc:
    // 0x28d0dc: 0x0  nop
    ctx->pc = 0x28d0dcu;
    // NOP
label_28d0e0:
    // 0x28d0e0: 0x0  nop
    ctx->pc = 0x28d0e0u;
    // NOP
label_28d0e4:
    // 0x28d0e4: 0x0  nop
    ctx->pc = 0x28d0e4u;
    // NOP
label_28d0e8:
    // 0x28d0e8: 0x0  nop
    ctx->pc = 0x28d0e8u;
    // NOP
label_28d0ec:
    // 0x28d0ec: 0x0  nop
    ctx->pc = 0x28d0ecu;
    // NOP
label_28d0f0:
    // 0x28d0f0: 0x0  nop
    ctx->pc = 0x28d0f0u;
    // NOP
label_28d0f4:
    // 0x28d0f4: 0x0  nop
    ctx->pc = 0x28d0f4u;
    // NOP
label_28d0f8:
    // 0x28d0f8: 0x0  nop
    ctx->pc = 0x28d0f8u;
    // NOP
label_28d0fc:
    // 0x28d0fc: 0x0  nop
    ctx->pc = 0x28d0fcu;
    // NOP
label_28d100:
    // 0x28d100: 0x0  nop
    ctx->pc = 0x28d100u;
    // NOP
label_28d104:
    // 0x28d104: 0x0  nop
    ctx->pc = 0x28d104u;
    // NOP
label_28d108:
    // 0x28d108: 0x0  nop
    ctx->pc = 0x28d108u;
    // NOP
label_28d10c:
    // 0x28d10c: 0x0  nop
    ctx->pc = 0x28d10cu;
    // NOP
label_28d110:
    // 0x28d110: 0x0  nop
    ctx->pc = 0x28d110u;
    // NOP
label_28d114:
    // 0x28d114: 0x0  nop
    ctx->pc = 0x28d114u;
    // NOP
label_28d118:
    // 0x28d118: 0x0  nop
    ctx->pc = 0x28d118u;
    // NOP
label_28d11c:
    // 0x28d11c: 0x0  nop
    ctx->pc = 0x28d11cu;
    // NOP
label_28d120:
    // 0x28d120: 0x0  nop
    ctx->pc = 0x28d120u;
    // NOP
label_28d124:
    // 0x28d124: 0x0  nop
    ctx->pc = 0x28d124u;
    // NOP
label_28d128:
    // 0x28d128: 0x0  nop
    ctx->pc = 0x28d128u;
    // NOP
label_28d12c:
    // 0x28d12c: 0x0  nop
    ctx->pc = 0x28d12cu;
    // NOP
label_28d130:
    // 0x28d130: 0x0  nop
    ctx->pc = 0x28d130u;
    // NOP
label_28d134:
    // 0x28d134: 0x0  nop
    ctx->pc = 0x28d134u;
    // NOP
label_28d138:
    // 0x28d138: 0x0  nop
    ctx->pc = 0x28d138u;
    // NOP
label_28d13c:
    // 0x28d13c: 0x0  nop
    ctx->pc = 0x28d13cu;
    // NOP
label_28d140:
    // 0x28d140: 0x0  nop
    ctx->pc = 0x28d140u;
    // NOP
label_28d144:
    // 0x28d144: 0x0  nop
    ctx->pc = 0x28d144u;
    // NOP
label_28d148:
    // 0x28d148: 0x0  nop
    ctx->pc = 0x28d148u;
    // NOP
label_28d14c:
    // 0x28d14c: 0x0  nop
    ctx->pc = 0x28d14cu;
    // NOP
label_28d150:
    // 0x28d150: 0x0  nop
    ctx->pc = 0x28d150u;
    // NOP
label_28d154:
    // 0x28d154: 0x0  nop
    ctx->pc = 0x28d154u;
    // NOP
label_28d158:
    // 0x28d158: 0x0  nop
    ctx->pc = 0x28d158u;
    // NOP
label_28d15c:
    // 0x28d15c: 0x0  nop
    ctx->pc = 0x28d15cu;
    // NOP
label_28d160:
    // 0x28d160: 0x0  nop
    ctx->pc = 0x28d160u;
    // NOP
label_28d164:
    // 0x28d164: 0x0  nop
    ctx->pc = 0x28d164u;
    // NOP
label_28d168:
    // 0x28d168: 0x0  nop
    ctx->pc = 0x28d168u;
    // NOP
label_28d16c:
    // 0x28d16c: 0x0  nop
    ctx->pc = 0x28d16cu;
    // NOP
label_28d170:
    // 0x28d170: 0x0  nop
    ctx->pc = 0x28d170u;
    // NOP
label_28d174:
    // 0x28d174: 0x0  nop
    ctx->pc = 0x28d174u;
    // NOP
label_28d178:
    // 0x28d178: 0x0  nop
    ctx->pc = 0x28d178u;
    // NOP
label_28d17c:
    // 0x28d17c: 0x0  nop
    ctx->pc = 0x28d17cu;
    // NOP
label_28d180:
    // 0x28d180: 0x0  nop
    ctx->pc = 0x28d180u;
    // NOP
label_28d184:
    // 0x28d184: 0x0  nop
    ctx->pc = 0x28d184u;
    // NOP
label_28d188:
    // 0x28d188: 0x0  nop
    ctx->pc = 0x28d188u;
    // NOP
label_28d18c:
    // 0x28d18c: 0x0  nop
    ctx->pc = 0x28d18cu;
    // NOP
label_28d190:
    // 0x28d190: 0x0  nop
    ctx->pc = 0x28d190u;
    // NOP
label_28d194:
    // 0x28d194: 0x0  nop
    ctx->pc = 0x28d194u;
    // NOP
label_28d198:
    // 0x28d198: 0x0  nop
    ctx->pc = 0x28d198u;
    // NOP
label_28d19c:
    // 0x28d19c: 0x0  nop
    ctx->pc = 0x28d19cu;
    // NOP
label_28d1a0:
    // 0x28d1a0: 0x0  nop
    ctx->pc = 0x28d1a0u;
    // NOP
label_28d1a4:
    // 0x28d1a4: 0x0  nop
    ctx->pc = 0x28d1a4u;
    // NOP
label_28d1a8:
    // 0x28d1a8: 0x0  nop
    ctx->pc = 0x28d1a8u;
    // NOP
label_28d1ac:
    // 0x28d1ac: 0x0  nop
    ctx->pc = 0x28d1acu;
    // NOP
label_28d1b0:
    // 0x28d1b0: 0x0  nop
    ctx->pc = 0x28d1b0u;
    // NOP
label_28d1b4:
    // 0x28d1b4: 0x0  nop
    ctx->pc = 0x28d1b4u;
    // NOP
label_28d1b8:
    // 0x28d1b8: 0x0  nop
    ctx->pc = 0x28d1b8u;
    // NOP
label_28d1bc:
    // 0x28d1bc: 0x0  nop
    ctx->pc = 0x28d1bcu;
    // NOP
label_28d1c0:
    // 0x28d1c0: 0x0  nop
    ctx->pc = 0x28d1c0u;
    // NOP
label_28d1c4:
    // 0x28d1c4: 0x0  nop
    ctx->pc = 0x28d1c4u;
    // NOP
label_28d1c8:
    // 0x28d1c8: 0x0  nop
    ctx->pc = 0x28d1c8u;
    // NOP
label_28d1cc:
    // 0x28d1cc: 0x0  nop
    ctx->pc = 0x28d1ccu;
    // NOP
label_28d1d0:
    // 0x28d1d0: 0x0  nop
    ctx->pc = 0x28d1d0u;
    // NOP
label_28d1d4:
    // 0x28d1d4: 0x0  nop
    ctx->pc = 0x28d1d4u;
    // NOP
label_28d1d8:
    // 0x28d1d8: 0x0  nop
    ctx->pc = 0x28d1d8u;
    // NOP
label_28d1dc:
    // 0x28d1dc: 0x0  nop
    ctx->pc = 0x28d1dcu;
    // NOP
label_28d1e0:
    // 0x28d1e0: 0x0  nop
    ctx->pc = 0x28d1e0u;
    // NOP
label_28d1e4:
    // 0x28d1e4: 0x0  nop
    ctx->pc = 0x28d1e4u;
    // NOP
label_28d1e8:
    // 0x28d1e8: 0x0  nop
    ctx->pc = 0x28d1e8u;
    // NOP
label_28d1ec:
    // 0x28d1ec: 0x0  nop
    ctx->pc = 0x28d1ecu;
    // NOP
label_28d1f0:
    // 0x28d1f0: 0x0  nop
    ctx->pc = 0x28d1f0u;
    // NOP
label_28d1f4:
    // 0x28d1f4: 0x0  nop
    ctx->pc = 0x28d1f4u;
    // NOP
label_28d1f8:
    // 0x28d1f8: 0x0  nop
    ctx->pc = 0x28d1f8u;
    // NOP
label_28d1fc:
    // 0x28d1fc: 0x0  nop
    ctx->pc = 0x28d1fcu;
    // NOP
label_28d200:
    // 0x28d200: 0x0  nop
    ctx->pc = 0x28d200u;
    // NOP
label_28d204:
    // 0x28d204: 0x0  nop
    ctx->pc = 0x28d204u;
    // NOP
label_28d208:
    // 0x28d208: 0x0  nop
    ctx->pc = 0x28d208u;
    // NOP
label_28d20c:
    // 0x28d20c: 0x0  nop
    ctx->pc = 0x28d20cu;
    // NOP
label_28d210:
    // 0x28d210: 0x0  nop
    ctx->pc = 0x28d210u;
    // NOP
label_28d214:
    // 0x28d214: 0x0  nop
    ctx->pc = 0x28d214u;
    // NOP
label_28d218:
    // 0x28d218: 0x0  nop
    ctx->pc = 0x28d218u;
    // NOP
label_28d21c:
    // 0x28d21c: 0x0  nop
    ctx->pc = 0x28d21cu;
    // NOP
label_28d220:
    // 0x28d220: 0x0  nop
    ctx->pc = 0x28d220u;
    // NOP
label_28d224:
    // 0x28d224: 0x0  nop
    ctx->pc = 0x28d224u;
    // NOP
label_28d228:
    // 0x28d228: 0x0  nop
    ctx->pc = 0x28d228u;
    // NOP
label_28d22c:
    // 0x28d22c: 0x0  nop
    ctx->pc = 0x28d22cu;
    // NOP
label_28d230:
    // 0x28d230: 0x0  nop
    ctx->pc = 0x28d230u;
    // NOP
label_28d234:
    // 0x28d234: 0x0  nop
    ctx->pc = 0x28d234u;
    // NOP
label_28d238:
    // 0x28d238: 0x0  nop
    ctx->pc = 0x28d238u;
    // NOP
label_28d23c:
    // 0x28d23c: 0x0  nop
    ctx->pc = 0x28d23cu;
    // NOP
label_28d240:
    // 0x28d240: 0x0  nop
    ctx->pc = 0x28d240u;
    // NOP
label_28d244:
    // 0x28d244: 0x0  nop
    ctx->pc = 0x28d244u;
    // NOP
label_28d248:
    // 0x28d248: 0x0  nop
    ctx->pc = 0x28d248u;
    // NOP
label_28d24c:
    // 0x28d24c: 0x0  nop
    ctx->pc = 0x28d24cu;
    // NOP
label_28d250:
    // 0x28d250: 0x0  nop
    ctx->pc = 0x28d250u;
    // NOP
label_28d254:
    // 0x28d254: 0x0  nop
    ctx->pc = 0x28d254u;
    // NOP
label_28d258:
    // 0x28d258: 0x0  nop
    ctx->pc = 0x28d258u;
    // NOP
label_28d25c:
    // 0x28d25c: 0x0  nop
    ctx->pc = 0x28d25cu;
    // NOP
label_28d260:
    // 0x28d260: 0x0  nop
    ctx->pc = 0x28d260u;
    // NOP
label_28d264:
    // 0x28d264: 0x0  nop
    ctx->pc = 0x28d264u;
    // NOP
label_28d268:
    // 0x28d268: 0x0  nop
    ctx->pc = 0x28d268u;
    // NOP
label_28d26c:
    // 0x28d26c: 0x0  nop
    ctx->pc = 0x28d26cu;
    // NOP
label_28d270:
    // 0x28d270: 0x0  nop
    ctx->pc = 0x28d270u;
    // NOP
label_28d274:
    // 0x28d274: 0x0  nop
    ctx->pc = 0x28d274u;
    // NOP
label_28d278:
    // 0x28d278: 0x0  nop
    ctx->pc = 0x28d278u;
    // NOP
label_28d27c:
    // 0x28d27c: 0x0  nop
    ctx->pc = 0x28d27cu;
    // NOP
label_28d280:
    // 0x28d280: 0x0  nop
    ctx->pc = 0x28d280u;
    // NOP
label_28d284:
    // 0x28d284: 0x0  nop
    ctx->pc = 0x28d284u;
    // NOP
label_28d288:
    // 0x28d288: 0x0  nop
    ctx->pc = 0x28d288u;
    // NOP
label_28d28c:
    // 0x28d28c: 0x0  nop
    ctx->pc = 0x28d28cu;
    // NOP
label_28d290:
    // 0x28d290: 0x0  nop
    ctx->pc = 0x28d290u;
    // NOP
label_28d294:
    // 0x28d294: 0x0  nop
    ctx->pc = 0x28d294u;
    // NOP
label_28d298:
    // 0x28d298: 0x0  nop
    ctx->pc = 0x28d298u;
    // NOP
label_28d29c:
    // 0x28d29c: 0x0  nop
    ctx->pc = 0x28d29cu;
    // NOP
label_28d2a0:
    // 0x28d2a0: 0x0  nop
    ctx->pc = 0x28d2a0u;
    // NOP
label_28d2a4:
    // 0x28d2a4: 0x0  nop
    ctx->pc = 0x28d2a4u;
    // NOP
label_28d2a8:
    // 0x28d2a8: 0x0  nop
    ctx->pc = 0x28d2a8u;
    // NOP
label_28d2ac:
    // 0x28d2ac: 0x0  nop
    ctx->pc = 0x28d2acu;
    // NOP
label_28d2b0:
    // 0x28d2b0: 0x0  nop
    ctx->pc = 0x28d2b0u;
    // NOP
label_28d2b4:
    // 0x28d2b4: 0x0  nop
    ctx->pc = 0x28d2b4u;
    // NOP
label_28d2b8:
    // 0x28d2b8: 0x0  nop
    ctx->pc = 0x28d2b8u;
    // NOP
label_28d2bc:
    // 0x28d2bc: 0x0  nop
    ctx->pc = 0x28d2bcu;
    // NOP
label_28d2c0:
    // 0x28d2c0: 0x0  nop
    ctx->pc = 0x28d2c0u;
    // NOP
label_28d2c4:
    // 0x28d2c4: 0x0  nop
    ctx->pc = 0x28d2c4u;
    // NOP
label_28d2c8:
    // 0x28d2c8: 0x0  nop
    ctx->pc = 0x28d2c8u;
    // NOP
label_28d2cc:
    // 0x28d2cc: 0x0  nop
    ctx->pc = 0x28d2ccu;
    // NOP
label_28d2d0:
    // 0x28d2d0: 0x0  nop
    ctx->pc = 0x28d2d0u;
    // NOP
label_28d2d4:
    // 0x28d2d4: 0x0  nop
    ctx->pc = 0x28d2d4u;
    // NOP
label_28d2d8:
    // 0x28d2d8: 0x0  nop
    ctx->pc = 0x28d2d8u;
    // NOP
label_28d2dc:
    // 0x28d2dc: 0x0  nop
    ctx->pc = 0x28d2dcu;
    // NOP
label_28d2e0:
    // 0x28d2e0: 0x0  nop
    ctx->pc = 0x28d2e0u;
    // NOP
label_28d2e4:
    // 0x28d2e4: 0x0  nop
    ctx->pc = 0x28d2e4u;
    // NOP
label_28d2e8:
    // 0x28d2e8: 0x0  nop
    ctx->pc = 0x28d2e8u;
    // NOP
label_28d2ec:
    // 0x28d2ec: 0x0  nop
    ctx->pc = 0x28d2ecu;
    // NOP
label_28d2f0:
    // 0x28d2f0: 0x0  nop
    ctx->pc = 0x28d2f0u;
    // NOP
label_28d2f4:
    // 0x28d2f4: 0x0  nop
    ctx->pc = 0x28d2f4u;
    // NOP
label_28d2f8:
    // 0x28d2f8: 0x0  nop
    ctx->pc = 0x28d2f8u;
    // NOP
label_28d2fc:
    // 0x28d2fc: 0x0  nop
    ctx->pc = 0x28d2fcu;
    // NOP
label_28d300:
    // 0x28d300: 0x0  nop
    ctx->pc = 0x28d300u;
    // NOP
label_28d304:
    // 0x28d304: 0x0  nop
    ctx->pc = 0x28d304u;
    // NOP
label_28d308:
    // 0x28d308: 0x0  nop
    ctx->pc = 0x28d308u;
    // NOP
label_28d30c:
    // 0x28d30c: 0x0  nop
    ctx->pc = 0x28d30cu;
    // NOP
label_28d310:
    // 0x28d310: 0x2045b0  tge         $at, $zero, 278
    ctx->pc = 0x28d310u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d314:
    // 0x28d314: 0x204730  tge         $at, $zero, 284
    ctx->pc = 0x28d314u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d318:
    // 0x28d318: 0x2047a0  .word       0x002047A0                   # add         $t0, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d318u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_28d31c:
    // 0x28d31c: 0x204830  tge         $at, $zero, 288
    ctx->pc = 0x28d31cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d320:
    // 0x28d320: 0x2048c0  .word       0x002048C0                   # sll         $t1, $zero, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d320u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_28d324:
    // 0x28d324: 0x2048c0  .word       0x002048C0                   # sll         $t1, $zero, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d324u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_28d328:
    // 0x28d328: 0x204830  tge         $at, $zero, 288
    ctx->pc = 0x28d328u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28d32c:
    // 0x28d32c: 0x204950  .word       0x00204950                   # mfhi        $t1 # 00200140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d32cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_28d330:
    // 0x28d330: 0x204960  .word       0x00204960                   # add         $t1, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d330u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_28d334:
    // 0x28d334: 0x2049c0  .word       0x002049C0                   # sll         $t1, $zero, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d334u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_28d338:
    // 0x28d338: 0x0  nop
    ctx->pc = 0x28d338u;
    // NOP
label_28d33c:
    // 0x28d33c: 0x0  nop
    ctx->pc = 0x28d33cu;
    // NOP
label_28d340:
    // 0x28d340: 0x0  nop
    ctx->pc = 0x28d340u;
    // NOP
label_28d344:
    // 0x28d344: 0x0  nop
    ctx->pc = 0x28d344u;
    // NOP
label_28d348:
    // 0x28d348: 0x0  nop
    ctx->pc = 0x28d348u;
    // NOP
label_28d34c:
    // 0x28d34c: 0x0  nop
    ctx->pc = 0x28d34cu;
    // NOP
label_28d350:
    // 0x28d350: 0x0  nop
    ctx->pc = 0x28d350u;
    // NOP
label_28d354:
    // 0x28d354: 0x0  nop
    ctx->pc = 0x28d354u;
    // NOP
label_28d358:
    // 0x28d358: 0x0  nop
    ctx->pc = 0x28d358u;
    // NOP
label_28d35c:
    // 0x28d35c: 0x0  nop
    ctx->pc = 0x28d35cu;
    // NOP
label_28d360:
    // 0x28d360: 0x2cd5c0  .word       0x002CD5C0                   # sll         $k0, $t4, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d360u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_28d364:
    // 0x28d364: 0x2cd600  .word       0x002CD600                   # sll         $k0, $t4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d364u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_28d368:
    // 0x28d368: 0x2cd640  .word       0x002CD640                   # sll         $k0, $t4, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d368u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_28d36c:
    // 0x28d36c: 0x2cd6a0  .word       0x002CD6A0                   # add         $k0, $at, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d36cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_28d370:
    // 0x28d370: 0x2cd6f0  tge         $at, $t4, 859
    ctx->pc = 0x28d370u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d374:
    // 0x28d374: 0x2cd730  tge         $at, $t4, 860
    ctx->pc = 0x28d374u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d378:
    // 0x28d378: 0x2cd770  tge         $at, $t4, 861
    ctx->pc = 0x28d378u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d37c:
    // 0x28d37c: 0x2cd7e0  .word       0x002CD7E0                   # add         $k0, $at, $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d37cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_28d380:
    // 0x28d380: 0x2cd850  .word       0x002CD850                   # mfhi        $k1 # 002C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d380u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d384:
    // 0x28d384: 0x2cd8c0  .word       0x002CD8C0                   # sll         $k1, $t4, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d384u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_28d388:
    // 0x28d388: 0x2cd980  .word       0x002CD980                   # sll         $k1, $t4, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d388u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_28d38c:
    // 0x28d38c: 0x2cd9c0  .word       0x002CD9C0                   # sll         $k1, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d38cu;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_28d390:
    // 0x28d390: 0x2cda10  .word       0x002CDA10                   # mfhi        $k1 # 002C0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d390u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d394:
    // 0x28d394: 0x2cda50  .word       0x002CDA50                   # mfhi        $k1 # 002C0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d394u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d398:
    // 0x28d398: 0x2cda90  .word       0x002CDA90                   # mfhi        $k1 # 002C0280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d398u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d39c:
    // 0x28d39c: 0x2cdad0  .word       0x002CDAD0                   # mfhi        $k1 # 002C02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d39cu;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d3a0:
    // 0x28d3a0: 0x2cdb20  .word       0x002CDB20                   # add         $k1, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3a4:
    // 0x28d3a4: 0x2cdb60  .word       0x002CDB60                   # add         $k1, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3a8:
    // 0x28d3a8: 0x2cdb20  .word       0x002CDB20                   # add         $k1, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3ac:
    // 0x28d3ac: 0x2cdb20  .word       0x002CDB20                   # add         $k1, $at, $t4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3b0:
    // 0x28d3b0: 0x2cdba0  .word       0x002CDBA0                   # add         $k1, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3b4:
    // 0x28d3b4: 0x2cdbc0  .word       0x002CDBC0                   # sll         $k1, $t4, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3b4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 15));
label_28d3b8:
    // 0x28d3b8: 0x2cdbd0  .word       0x002CDBD0                   # mfhi        $k1 # 002C03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3b8u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d3bc:
    // 0x28d3bc: 0x2cdbe0  .word       0x002CDBE0                   # add         $k1, $at, $t4 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3c0:
    // 0x28d3c0: 0x2cdc48  .word       0x002CDC48                   # jr          $at # 000CDC40 <InstrIdType: CPU_SPECIAL>
label_28d3c4:
    if (ctx->pc == 0x28D3C4u) {
        ctx->pc = 0x28D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3C0u;
        // 0x28d3c4: 0x2cdc58  .word       0x002CDC58                   # mult        $k1, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D3C8u;
        goto label_28d3c8;
    }
    ctx->pc = 0x28D3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x28D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3C0u;
        // 0x28d3c4: 0x2cdc58  .word       0x002CDC58                   # mult        $k1, $at, $t4 # 00000440 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D3C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D3C8u;
label_28d3c8:
    // 0x28d3c8: 0x2cdc70  tge         $at, $t4, 881
    ctx->pc = 0x28d3c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d3cc:
    // 0x28d3cc: 0x2cdc90  .word       0x002CDC90                   # mfhi        $k1 # 002C0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3ccu;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d3d0:
    // 0x28d3d0: 0x2cdcb0  tge         $at, $t4, 882
    ctx->pc = 0x28d3d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d3d4:
    // 0x28d3d4: 0x2cdcd0  .word       0x002CDCD0                   # mfhi        $k1 # 002C04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3d4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d3d8:
    // 0x28d3d8: 0x2cdcf0  tge         $at, $t4, 883
    ctx->pc = 0x28d3d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28d3dc:
    // 0x28d3dc: 0x2cdd60  .word       0x002CDD60                   # add         $k1, $at, $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3e0:
    // 0x28d3e0: 0x2cdda0  .word       0x002CDDA0                   # add         $k1, $at, $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3e0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_28d3e4:
    // 0x28d3e4: 0x2cddd0  .word       0x002CDDD0                   # mfhi        $k1 # 002C05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3e4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_28d3e8:
    // 0x28d3e8: 0x2cde00  .word       0x002CDE00                   # sll         $k1, $t4, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d3e8u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
label_28d3ec:
    // 0x28d3ec: 0x0  nop
    ctx->pc = 0x28d3ecu;
    // NOP
label_28d3f0:
    // 0x28d3f0: 0x2010309  .word       0x02010309                   # jalr        $zero, $s0 # 00010300 <InstrIdType: CPU_SPECIAL>
label_28d3f4:
    if (ctx->pc == 0x28D3F4u) {
        ctx->pc = 0x28D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3F0u;
        // 0x28d3f4: 0x70405  .word       0x00070405                   # INVALID     $zero, $a3, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28D3F4 raw=0x00070405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28D3F8u;
        goto label_28d3f8;
    }
    ctx->pc = 0x28D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        ctx->pc = 0x28D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D3F0u;
        // 0x28d3f4: 0x70405  .word       0x00070405                   # INVALID     $zero, $a3, 0x405 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28D3F4 raw=0x00070405"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D3F0u, 0x28D3F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28D3F8u;
label_28d3f8:
    // 0x28d3f8: 0x8  jr          $zero
label_28d3fc:
    if (ctx->pc == 0x28D3FCu) {
        ctx->pc = 0x28D400u;
        goto label_28d400;
    }
    ctx->pc = 0x28D3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D3F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D400u;
label_28d400:
    // 0x28d400: 0xffffff00  sd          $ra, -0x100($ra)
    ctx->pc = 0x28d400u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967040), GPR_U64(ctx, 31));
label_28d404:
    // 0x28d404: 0xff01ffff  sd          $at, -0x1($t8)
    ctx->pc = 0x28d404u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 4294967295), GPR_U64(ctx, 1));
label_28d408:
    // 0x28d408: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x28d408u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_28d40c:
    // 0x28d40c: 0x4ffffff  .word       0x04FFFFFF                   # INVALID     $a3, $ra, -0x1 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28d40cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1F at 0x28D40C raw=0x04FFFFFF");
 /* MITIGATED */
label_28d410:
    // 0x28d410: 0xffff02ff  sd          $ra, 0x2FF($ra)
    ctx->pc = 0x28d410u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 767), GPR_U64(ctx, 31));
label_28d414:
    // 0x28d414: 0x3ffff  dsra32      $ra, $v1, 31
    ctx->pc = 0x28d414u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 3) >> (32 + 31));
label_28d418:
    // 0x28d418: 0x0  nop
    ctx->pc = 0x28d418u;
    // NOP
label_28d41c:
    // 0x28d41c: 0x0  nop
    ctx->pc = 0x28d41cu;
    // NOP
label_28d420:
    // 0x28d420: 0x281  .word       0x00000281                   # INVALID     $zero, $zero, 0x281 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28D420 raw=0x00000281"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d424:
    // 0x28d424: 0x293  .word       0x00000293                   # mtlo        $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d424u;
    ctx->lo = GPR_U64(ctx, 0);
label_28d428:
    // 0x28d428: 0x2aa  .word       0x000002AA                   # slt         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d428u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_28d42c:
    // 0x28d42c: 0x2bc  dsll32      $zero, $zero, 10
    ctx->pc = 0x28d42cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 10));
label_28d430:
    // 0x28d430: 0x2ce  .word       0x000002CE                   # INVALID     $zero, $zero, 0x2CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28D430 raw=0x000002CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28d434:
    // 0x28d434: 0x2e5  .word       0x000002E5                   # move        $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d434u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_28d438:
    // 0x28d438: 0x2fb  dsra        $zero, $zero, 11
    ctx->pc = 0x28d438u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 11);
label_28d43c:
    // 0x28d43c: 0x30e  .word       0x0000030E                   # INVALID     $zero, $zero, 0x30E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28d43cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28D43C raw=0x0000030E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x28d440u;
    return;
}

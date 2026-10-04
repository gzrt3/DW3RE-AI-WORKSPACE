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


void FUN_0019b5e8_part233(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20ca68u: goto label_20ca68;
        case 0x20ca6cu: goto label_20ca6c;
        case 0x20ca70u: goto label_20ca70;
        case 0x20ca74u: goto label_20ca74;
        case 0x20ca78u: goto label_20ca78;
        case 0x20ca7cu: goto label_20ca7c;
        case 0x20ca80u: goto label_20ca80;
        case 0x20ca84u: goto label_20ca84;
        case 0x20ca88u: goto label_20ca88;
        case 0x20ca8cu: goto label_20ca8c;
        case 0x20ca90u: goto label_20ca90;
        case 0x20ca94u: goto label_20ca94;
        case 0x20ca98u: goto label_20ca98;
        case 0x20ca9cu: goto label_20ca9c;
        case 0x20caa0u: goto label_20caa0;
        case 0x20caa4u: goto label_20caa4;
        case 0x20caa8u: goto label_20caa8;
        case 0x20caacu: goto label_20caac;
        case 0x20cab0u: goto label_20cab0;
        case 0x20cab4u: goto label_20cab4;
        case 0x20cab8u: goto label_20cab8;
        case 0x20cabcu: goto label_20cabc;
        case 0x20cac0u: goto label_20cac0;
        case 0x20cac4u: goto label_20cac4;
        case 0x20cac8u: goto label_20cac8;
        case 0x20caccu: goto label_20cacc;
        case 0x20cad0u: goto label_20cad0;
        case 0x20cad4u: goto label_20cad4;
        case 0x20cad8u: goto label_20cad8;
        case 0x20cadcu: goto label_20cadc;
        case 0x20cae0u: goto label_20cae0;
        case 0x20cae4u: goto label_20cae4;
        case 0x20cae8u: goto label_20cae8;
        case 0x20caecu: goto label_20caec;
        case 0x20caf0u: goto label_20caf0;
        case 0x20caf4u: goto label_20caf4;
        case 0x20caf8u: goto label_20caf8;
        case 0x20cafcu: goto label_20cafc;
        case 0x20cb00u: goto label_20cb00;
        case 0x20cb04u: goto label_20cb04;
        case 0x20cb08u: goto label_20cb08;
        case 0x20cb0cu: goto label_20cb0c;
        case 0x20cb10u: goto label_20cb10;
        case 0x20cb14u: goto label_20cb14;
        case 0x20cb18u: goto label_20cb18;
        case 0x20cb1cu: goto label_20cb1c;
        case 0x20cb20u: goto label_20cb20;
        case 0x20cb24u: goto label_20cb24;
        case 0x20cb28u: goto label_20cb28;
        case 0x20cb2cu: goto label_20cb2c;
        case 0x20cb30u: goto label_20cb30;
        case 0x20cb34u: goto label_20cb34;
        case 0x20cb38u: goto label_20cb38;
        case 0x20cb3cu: goto label_20cb3c;
        case 0x20cb40u: goto label_20cb40;
        case 0x20cb44u: goto label_20cb44;
        case 0x20cb48u: goto label_20cb48;
        case 0x20cb4cu: goto label_20cb4c;
        case 0x20cb50u: goto label_20cb50;
        case 0x20cb54u: goto label_20cb54;
        case 0x20cb58u: goto label_20cb58;
        case 0x20cb5cu: goto label_20cb5c;
        case 0x20cb60u: goto label_20cb60;
        case 0x20cb64u: goto label_20cb64;
        case 0x20cb68u: goto label_20cb68;
        case 0x20cb6cu: goto label_20cb6c;
        case 0x20cb70u: goto label_20cb70;
        case 0x20cb74u: goto label_20cb74;
        case 0x20cb78u: goto label_20cb78;
        case 0x20cb7cu: goto label_20cb7c;
        case 0x20cb80u: goto label_20cb80;
        case 0x20cb84u: goto label_20cb84;
        case 0x20cb88u: goto label_20cb88;
        case 0x20cb8cu: goto label_20cb8c;
        case 0x20cb90u: goto label_20cb90;
        case 0x20cb94u: goto label_20cb94;
        case 0x20cb98u: goto label_20cb98;
        case 0x20cb9cu: goto label_20cb9c;
        case 0x20cba0u: goto label_20cba0;
        case 0x20cba4u: goto label_20cba4;
        case 0x20cba8u: goto label_20cba8;
        case 0x20cbacu: goto label_20cbac;
        case 0x20cbb0u: goto label_20cbb0;
        case 0x20cbb4u: goto label_20cbb4;
        case 0x20cbb8u: goto label_20cbb8;
        case 0x20cbbcu: goto label_20cbbc;
        case 0x20cbc0u: goto label_20cbc0;
        case 0x20cbc4u: goto label_20cbc4;
        case 0x20cbc8u: goto label_20cbc8;
        case 0x20cbccu: goto label_20cbcc;
        case 0x20cbd0u: goto label_20cbd0;
        case 0x20cbd4u: goto label_20cbd4;
        case 0x20cbd8u: goto label_20cbd8;
        case 0x20cbdcu: goto label_20cbdc;
        case 0x20cbe0u: goto label_20cbe0;
        case 0x20cbe4u: goto label_20cbe4;
        case 0x20cbe8u: goto label_20cbe8;
        case 0x20cbecu: goto label_20cbec;
        case 0x20cbf0u: goto label_20cbf0;
        case 0x20cbf4u: goto label_20cbf4;
        case 0x20cbf8u: goto label_20cbf8;
        case 0x20cbfcu: goto label_20cbfc;
        case 0x20cc00u: goto label_20cc00;
        case 0x20cc04u: goto label_20cc04;
        case 0x20cc08u: goto label_20cc08;
        case 0x20cc0cu: goto label_20cc0c;
        case 0x20cc10u: goto label_20cc10;
        case 0x20cc14u: goto label_20cc14;
        case 0x20cc18u: goto label_20cc18;
        case 0x20cc1cu: goto label_20cc1c;
        case 0x20cc20u: goto label_20cc20;
        case 0x20cc24u: goto label_20cc24;
        case 0x20cc28u: goto label_20cc28;
        case 0x20cc2cu: goto label_20cc2c;
        case 0x20cc30u: goto label_20cc30;
        case 0x20cc34u: goto label_20cc34;
        case 0x20cc38u: goto label_20cc38;
        case 0x20cc3cu: goto label_20cc3c;
        case 0x20cc40u: goto label_20cc40;
        case 0x20cc44u: goto label_20cc44;
        case 0x20cc48u: goto label_20cc48;
        case 0x20cc4cu: goto label_20cc4c;
        case 0x20cc50u: goto label_20cc50;
        case 0x20cc54u: goto label_20cc54;
        case 0x20cc58u: goto label_20cc58;
        case 0x20cc5cu: goto label_20cc5c;
        case 0x20cc60u: goto label_20cc60;
        case 0x20cc64u: goto label_20cc64;
        case 0x20cc68u: goto label_20cc68;
        case 0x20cc6cu: goto label_20cc6c;
        case 0x20cc70u: goto label_20cc70;
        case 0x20cc74u: goto label_20cc74;
        case 0x20cc78u: goto label_20cc78;
        case 0x20cc7cu: goto label_20cc7c;
        case 0x20cc80u: goto label_20cc80;
        case 0x20cc84u: goto label_20cc84;
        case 0x20cc88u: goto label_20cc88;
        case 0x20cc8cu: goto label_20cc8c;
        case 0x20cc90u: goto label_20cc90;
        case 0x20cc94u: goto label_20cc94;
        case 0x20cc98u: goto label_20cc98;
        case 0x20cc9cu: goto label_20cc9c;
        case 0x20cca0u: goto label_20cca0;
        case 0x20cca4u: goto label_20cca4;
        case 0x20cca8u: goto label_20cca8;
        case 0x20ccacu: goto label_20ccac;
        case 0x20ccb0u: goto label_20ccb0;
        case 0x20ccb4u: goto label_20ccb4;
        case 0x20ccb8u: goto label_20ccb8;
        case 0x20ccbcu: goto label_20ccbc;
        case 0x20ccc0u: goto label_20ccc0;
        case 0x20ccc4u: goto label_20ccc4;
        case 0x20ccc8u: goto label_20ccc8;
        case 0x20ccccu: goto label_20cccc;
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
        default: return;
    }

label_20ca68:
    // 0x20ca68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20ca6c:
    // 0x20ca6c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_20ca70:
    if (ctx->pc == 0x20CA70u) {
        ctx->pc = 0x20CA74u;
        goto label_20ca74;
    }
    ctx->pc = 0x20CA6Cu;
    {
        const bool branch_taken_0x20ca6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ca6c) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20CA74u;
label_20ca74:
    // 0x20ca74: 0xc07ab38  jal         func_1EACE0
label_20ca78:
    if (ctx->pc == 0x20CA78u) {
        ctx->pc = 0x20CA7Cu;
        goto label_20ca7c;
    }
    ctx->pc = 0x20CA74u;
    SET_GPR_U32(ctx, 31, 0x20CA7Cu);
    ctx->pc = 0x1EACE0u;
    { ctx->pc = 0x1eace0; return; }
    ctx->pc = 0x20CA7Cu;
label_20ca7c:
    // 0x20ca7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_20ca80:
    if (ctx->pc == 0x20CA80u) {
        ctx->pc = 0x20CA84u;
        goto label_20ca84;
    }
    ctx->pc = 0x20CA7Cu;
    {
        const bool branch_taken_0x20ca7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ca7c) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20CA84u;
label_20ca84:
    // 0x20ca84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20ca84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ca88:
    // 0x20ca88: 0x8f849130  lw          $a0, -0x6ED0($gp)
    ctx->pc = 0x20ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
label_20ca8c:
    // 0x20ca8c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_20ca90:
    if (ctx->pc == 0x20CA90u) {
        ctx->pc = 0x20CA94u;
        goto label_20ca94;
    }
    ctx->pc = 0x20CA8Cu;
    {
        const bool branch_taken_0x20ca8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ca8c) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CA94u;
label_20ca94:
    // 0x20ca94: 0x8f829128  lw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
label_20ca98:
    // 0x20ca98: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x20ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20ca9c:
    // 0x20ca9c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_20caa0:
    if (ctx->pc == 0x20CAA0u) {
        ctx->pc = 0x20CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA9Cu;
        // 0x20caa0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CAA4u;
        goto label_20caa4;
    }
    ctx->pc = 0x20CA9Cu;
    {
        const bool branch_taken_0x20ca9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA9Cu;
        // 0x20caa0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca9c) {
            ctx->pc = 0x20CAB0u;
            goto label_20cab0;
        }
    }
    ctx->pc = 0x20CAA4u;
label_20caa4:
    // 0x20caa4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20caa8:
    if (ctx->pc == 0x20CAA8u) {
        ctx->pc = 0x20CAACu;
        goto label_20caac;
    }
    ctx->pc = 0x20CAA4u;
    {
        const bool branch_taken_0x20caa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20caa4) {
            ctx->pc = 0x20CAB0u;
            goto label_20cab0;
        }
    }
    ctx->pc = 0x20CAACu;
label_20caac:
    // 0x20caac: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x20caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_20cab0:
    // 0x20cab0: 0xaf829128  sw          $v0, -0x6ED8($gp)
    ctx->pc = 0x20cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 2));
label_20cab4:
    // 0x20cab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cab8:
    // 0x20cab8: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_20cabc:
    if (ctx->pc == 0x20CABCu) {
        ctx->pc = 0x20CAC0u;
        goto label_20cac0;
    }
    ctx->pc = 0x20CAB8u;
    {
        const bool branch_taken_0x20cab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20cab8) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CAC0u;
label_20cac0:
    // 0x20cac0: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20cac4:
    // 0x20cac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20cac8:
    // 0x20cac8: 0xaf82912c  sw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938924), GPR_U32(ctx, 2));
label_20cacc:
    // 0x20cacc: 0x8f82912c  lw          $v0, -0x6ED4($gp)
    ctx->pc = 0x20caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938924)));
label_20cad0:
    // 0x20cad0: 0x2842002c  slti        $v0, $v0, 0x2C
    ctx->pc = 0x20cad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)44) ? 1 : 0);
label_20cad4:
    // 0x20cad4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20cad8:
    if (ctx->pc == 0x20CAD8u) {
        ctx->pc = 0x20CADCu;
        goto label_20cadc;
    }
    ctx->pc = 0x20CAD4u;
    {
        const bool branch_taken_0x20cad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cad4) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CADCu;
label_20cadc:
    // 0x20cadc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20cae0:
    // 0x20cae0: 0xaf829130  sw          $v0, -0x6ED0($gp)
    ctx->pc = 0x20cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 2));
label_20cae4:
    // 0x20cae4: 0x0  nop
    ctx->pc = 0x20cae4u;
    // NOP
label_20cae8:
    // 0x20cae8: 0x8f839138  lw          $v1, -0x6EC8($gp)
    ctx->pc = 0x20cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20caec:
    // 0x20caec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20caf0:
    // 0x20caf0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_20caf4:
    if (ctx->pc == 0x20CAF4u) {
        ctx->pc = 0x20CAF8u;
        goto label_20caf8;
    }
    ctx->pc = 0x20CAF0u;
    {
        const bool branch_taken_0x20caf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20caf0) {
            ctx->pc = 0x20CB30u;
            goto label_20cb30;
        }
    }
    ctx->pc = 0x20CAF8u;
label_20caf8:
    // 0x20caf8: 0x8f829134  lw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20cafc:
    // 0x20cafc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x20cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20cb00:
    // 0x20cb00: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20cb00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20cb04:
    // 0x20cb04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20cb08:
    if (ctx->pc == 0x20CB08u) {
        ctx->pc = 0x20CB0Cu;
        goto label_20cb0c;
    }
    ctx->pc = 0x20CB04u;
    {
        const bool branch_taken_0x20cb04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cb04) {
            ctx->pc = 0x20CB14u;
            goto label_20cb14;
        }
    }
    ctx->pc = 0x20CB0Cu;
label_20cb0c:
    // 0x20cb0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_20cb10:
    if (ctx->pc == 0x20CB10u) {
        ctx->pc = 0x20CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB0Cu;
        // 0x20cb10: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB14u;
        goto label_20cb14;
    }
    ctx->pc = 0x20CB0Cu;
    {
        const bool branch_taken_0x20cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB0Cu;
        // 0x20cb10: 0xaf829134  sw          $v0, -0x6ECC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb0c) {
            ctx->pc = 0x20CB1Cu;
            goto label_20cb1c;
        }
    }
    ctx->pc = 0x20CB14u;
label_20cb14:
    // 0x20cb14: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x20cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_20cb18:
    // 0x20cb18: 0xaf829134  sw          $v0, -0x6ECC($gp)
    ctx->pc = 0x20cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938932), GPR_U32(ctx, 2));
label_20cb1c:
    // 0x20cb1c: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x20cb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_20cb20:
    // 0x20cb20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20cb24:
    if (ctx->pc == 0x20CB24u) {
        ctx->pc = 0x20CB28u;
        goto label_20cb28;
    }
    ctx->pc = 0x20CB20u;
    {
        const bool branch_taken_0x20cb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cb20) {
            ctx->pc = 0x20CB30u;
            goto label_20cb30;
        }
    }
    ctx->pc = 0x20CB28u;
label_20cb28:
    // 0x20cb28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20cb2c:
    // 0x20cb2c: 0xaf829138  sw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938936), GPR_U32(ctx, 2));
label_20cb30:
    // 0x20cb30: 0xc078030  jal         func_1E00C0
label_20cb34:
    if (ctx->pc == 0x20CB34u) {
        ctx->pc = 0x20CB38u;
        goto label_20cb38;
    }
    ctx->pc = 0x20CB30u;
    SET_GPR_U32(ctx, 31, 0x20CB38u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x20CB38u;
label_20cb38:
    // 0x20cb38: 0xc07a9d8  jal         func_1EA760
label_20cb3c:
    if (ctx->pc == 0x20CB3Cu) {
        ctx->pc = 0x20CB40u;
        goto label_20cb40;
    }
    ctx->pc = 0x20CB38u;
    SET_GPR_U32(ctx, 31, 0x20CB40u);
    ctx->pc = 0x1EA760u;
    { ctx->pc = 0x1ea760; return; }
    ctx->pc = 0x20CB40u;
label_20cb40:
    // 0x20cb40: 0xc04e168  jal         func_1385A0
label_20cb44:
    if (ctx->pc == 0x20CB44u) {
        ctx->pc = 0x20CB48u;
        goto label_20cb48;
    }
    ctx->pc = 0x20CB40u;
    SET_GPR_U32(ctx, 31, 0x20CB48u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20CB40u, 0x20CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB48u;
label_20cb48:
    // 0x20cb48: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_20cb4c:
    // 0x20cb4c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20cb50:
    // 0x20cb50: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20cb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_20cb54:
    // 0x20cb54: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20cb58:
    // 0x20cb58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20cb5c:
    // 0x20cb5c: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
label_20cb60:
    // 0x20cb60: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20cb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20cb64:
    // 0x20cb64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20cb64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cb68:
    // 0x20cb68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cb68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cb6c:
    // 0x20cb6c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20cb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20cb70:
    // 0x20cb70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20cb74:
    // 0x20cb74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20cb78:
    // 0x20cb78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20cb7c:
    // 0x20cb7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20cb80:
    // 0x20cb80: 0xc066c72  jal         func_19B1C8
label_20cb84:
    if (ctx->pc == 0x20CB84u) {
        ctx->pc = 0x20CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB80u;
        // 0x20cb84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB88u;
        goto label_20cb88;
    }
    ctx->pc = 0x20CB80u;
    SET_GPR_U32(ctx, 31, 0x20CB88u);
    ctx->pc = 0x20CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB80u;
    // 0x20cb84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20CB80u, 0x20CB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB88u;
label_20cb88:
    // 0x20cb88: 0xc08372c  jal         func_20DCB0
label_20cb8c:
    if (ctx->pc == 0x20CB8Cu) {
        ctx->pc = 0x20CB90u;
        goto label_20cb90;
    }
    ctx->pc = 0x20CB88u;
    SET_GPR_U32(ctx, 31, 0x20CB90u);
    ctx->pc = 0x20DCB0u;
    { ctx->pc = 0x20dcb0; return; }
    ctx->pc = 0x20CB90u;
label_20cb90:
    // 0x20cb90: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
label_20cb94:
    // 0x20cb94: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_20cb98:
    if (ctx->pc == 0x20CB98u) {
        ctx->pc = 0x20CB9Cu;
        goto label_20cb9c;
    }
    ctx->pc = 0x20CB94u;
    {
        const bool branch_taken_0x20cb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cb94) {
            ctx->pc = 0x20CC60u;
            goto label_20cc60;
        }
    }
    ctx->pc = 0x20CB9Cu;
label_20cb9c:
    // 0x20cb9c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20cb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20cba0:
    // 0x20cba0: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20cba0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20cba4:
    // 0x20cba4: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20cba4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20cba8:
    // 0x20cba8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_20cbac:
    // 0x20cbac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20cbb0:
    // 0x20cbb0: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
label_20cbb4:
    // 0x20cbb4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20cbb8:
    // 0x20cbb8: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20cbb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_20cbbc:
    // 0x20cbbc: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_20cbc0:
    // 0x20cbc0: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20cbc4:
    // 0x20cbc4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20cbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20cbc8:
    // 0x20cbc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20cbc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cbcc:
    // 0x20cbcc: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20cbccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
label_20cbd0:
    // 0x20cbd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cbd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cbd4:
    // 0x20cbd4: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20cbd4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
label_20cbd8:
    // 0x20cbd8: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20cbd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20cbdc:
    // 0x20cbdc: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20cbdcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_20cbe0:
    // 0x20cbe0: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20cbe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20cbe4:
    // 0x20cbe4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_20cbe8:
    // 0x20cbe8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20cbe8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cbec:
    // 0x20cbec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20cbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20cbf0:
    // 0x20cbf0: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_20cbf4:
    // 0x20cbf4: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20cbf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
label_20cbf8:
    // 0x20cbf8: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20cbf8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
label_20cbfc:
    // 0x20cbfc: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20cbfcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_20cc00:
    // 0x20cc00: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20cc00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_20cc04:
    // 0x20cc04: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20cc04u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
label_20cc08:
    // 0x20cc08: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20cc08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
label_20cc0c:
    // 0x20cc0c: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20cc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
label_20cc10:
    // 0x20cc10: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_20cc14:
    // 0x20cc14: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_20cc18:
    // 0x20cc18: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20cc18u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20cc1c:
    // 0x20cc1c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_20cc20:
    // 0x20cc20: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20cc20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20cc24:
    // 0x20cc24: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
label_20cc28:
    // 0x20cc28: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20cc28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
label_20cc2c:
    // 0x20cc2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20cc30:
    // 0x20cc30: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20cc30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
label_20cc34:
    // 0x20cc34: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_20cc38:
    // 0x20cc38: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20cc38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
label_20cc3c:
    // 0x20cc3c: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20cc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
label_20cc40:
    // 0x20cc40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20cc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20cc44:
    // 0x20cc44: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
label_20cc48:
    // 0x20cc48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20cc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_20cc4c:
    // 0x20cc4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20cc4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_20cc50:
    // 0x20cc50: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20cc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_20cc54:
    // 0x20cc54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20cc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_20cc58:
    // 0x20cc58: 0xc066c72  jal         func_19B1C8
label_20cc5c:
    if (ctx->pc == 0x20CC5Cu) {
        ctx->pc = 0x20CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC58u;
        // 0x20cc5c: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC60u;
        goto label_20cc60;
    }
    ctx->pc = 0x20CC58u;
    SET_GPR_U32(ctx, 31, 0x20CC60u);
    ctx->pc = 0x20CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC58u;
    // 0x20cc5c: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20CC58u, 0x20CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC60u;
label_20cc60:
    // 0x20cc60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20cc60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20cc64:
    // 0x20cc64: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20cc68:
    // 0x20cc68: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20cc6c:
    // 0x20cc6c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20cc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20cc70:
    // 0x20cc70: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
label_20cc74:
    // 0x20cc74: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20cc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20cc78:
    // 0x20cc78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20cc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cc7c:
    // 0x20cc7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20cc7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cc80:
    // 0x20cc80: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20cc84:
    // 0x20cc84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20cc88:
    // 0x20cc88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20cc8c:
    // 0x20cc8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20cc90:
    // 0x20cc90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20cc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20cc94:
    // 0x20cc94: 0xc066c72  jal         func_19B1C8
label_20cc98:
    if (ctx->pc == 0x20CC98u) {
        ctx->pc = 0x20CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC94u;
        // 0x20cc98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC9Cu;
        goto label_20cc9c;
    }
    ctx->pc = 0x20CC94u;
    SET_GPR_U32(ctx, 31, 0x20CC9Cu);
    ctx->pc = 0x20CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC94u;
    // 0x20cc98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20CC94u, 0x20CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC9Cu;
label_20cc9c:
    // 0x20cc9c: 0xc077fc4  jal         func_1DFF10
label_20cca0:
    if (ctx->pc == 0x20CCA0u) {
        ctx->pc = 0x20CCA4u;
        goto label_20cca4;
    }
    ctx->pc = 0x20CC9Cu;
    SET_GPR_U32(ctx, 31, 0x20CCA4u);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x20CCA4u;
label_20cca4:
    // 0x20cca4: 0xc07a86c  jal         func_1EA1B0
label_20cca8:
    if (ctx->pc == 0x20CCA8u) {
        ctx->pc = 0x20CCACu;
        goto label_20ccac;
    }
    ctx->pc = 0x20CCA4u;
    SET_GPR_U32(ctx, 31, 0x20CCACu);
    ctx->pc = 0x1EA1B0u;
    { ctx->pc = 0x1ea1b0; return; }
    ctx->pc = 0x20CCACu;
label_20ccac:
    // 0x20ccac: 0xc04e120  jal         func_138480
label_20ccb0:
    if (ctx->pc == 0x20CCB0u) {
        ctx->pc = 0x20CCB4u;
        goto label_20ccb4;
    }
    ctx->pc = 0x20CCACu;
    SET_GPR_U32(ctx, 31, 0x20CCB4u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20CCACu, 0x20CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCB4u;
label_20ccb4:
    // 0x20ccb4: 0xc05b578  jal         func_16D5E0
label_20ccb8:
    if (ctx->pc == 0x20CCB8u) {
        ctx->pc = 0x20CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCB4u;
        // 0x20ccb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CCBCu;
        goto label_20ccbc;
    }
    ctx->pc = 0x20CCB4u;
    SET_GPR_U32(ctx, 31, 0x20CCBCu);
    ctx->pc = 0x20CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CCB4u;
    // 0x20ccb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20CCB4u, 0x20CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCBCu;
label_20ccbc:
    // 0x20ccbc: 0xc060258  jal         func_180960
label_20ccc0:
    if (ctx->pc == 0x20CCC0u) {
        ctx->pc = 0x20CCC4u;
        goto label_20ccc4;
    }
    ctx->pc = 0x20CCBCu;
    SET_GPR_U32(ctx, 31, 0x20CCC4u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20CCBCu, 0x20CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CCC4u;
label_20ccc4:
    // 0x20ccc4: 0x8f829164  lw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
label_20ccc8:
    // 0x20ccc8: 0x1040fcba  beqz        $v0, . + 4 + (-0x346 << 2)
label_20cccc:
    if (ctx->pc == 0x20CCCCu) {
        ctx->pc = 0x20CCD0u;
        goto label_20ccd0;
    }
    ctx->pc = 0x20CCC8u;
    {
        const bool branch_taken_0x20ccc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ccc8) {
            ctx->pc = 0x20BFB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20bfb4; return; }
        }
    }
    ctx->pc = 0x20CCD0u;
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
            { ctx->pc = 0x20d244; return; }
        }
    }
    ctx->pc = 0x20D234u;
label_20d234:
    // 0x20d234: 0xc078050  jal         func_1E0140
    ctx->pc = 0x20d238u;
    return;
}

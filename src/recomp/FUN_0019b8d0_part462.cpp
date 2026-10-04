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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part462(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27ca60u: goto label_27ca60;
        case 0x27ca64u: goto label_27ca64;
        case 0x27ca68u: goto label_27ca68;
        case 0x27ca6cu: goto label_27ca6c;
        case 0x27ca70u: goto label_27ca70;
        case 0x27ca74u: goto label_27ca74;
        case 0x27ca78u: goto label_27ca78;
        case 0x27ca7cu: goto label_27ca7c;
        case 0x27ca80u: goto label_27ca80;
        case 0x27ca84u: goto label_27ca84;
        case 0x27ca88u: goto label_27ca88;
        case 0x27ca8cu: goto label_27ca8c;
        case 0x27ca90u: goto label_27ca90;
        case 0x27ca94u: goto label_27ca94;
        case 0x27ca98u: goto label_27ca98;
        case 0x27ca9cu: goto label_27ca9c;
        case 0x27caa0u: goto label_27caa0;
        case 0x27caa4u: goto label_27caa4;
        case 0x27caa8u: goto label_27caa8;
        case 0x27caacu: goto label_27caac;
        case 0x27cab0u: goto label_27cab0;
        case 0x27cab4u: goto label_27cab4;
        case 0x27cab8u: goto label_27cab8;
        case 0x27cabcu: goto label_27cabc;
        case 0x27cac0u: goto label_27cac0;
        case 0x27cac4u: goto label_27cac4;
        case 0x27cac8u: goto label_27cac8;
        case 0x27caccu: goto label_27cacc;
        case 0x27cad0u: goto label_27cad0;
        case 0x27cad4u: goto label_27cad4;
        case 0x27cad8u: goto label_27cad8;
        case 0x27cadcu: goto label_27cadc;
        case 0x27cae0u: goto label_27cae0;
        case 0x27cae4u: goto label_27cae4;
        case 0x27cae8u: goto label_27cae8;
        case 0x27caecu: goto label_27caec;
        case 0x27caf0u: goto label_27caf0;
        case 0x27caf4u: goto label_27caf4;
        case 0x27caf8u: goto label_27caf8;
        case 0x27cafcu: goto label_27cafc;
        case 0x27cb00u: goto label_27cb00;
        case 0x27cb04u: goto label_27cb04;
        case 0x27cb08u: goto label_27cb08;
        case 0x27cb0cu: goto label_27cb0c;
        case 0x27cb10u: goto label_27cb10;
        case 0x27cb14u: goto label_27cb14;
        case 0x27cb18u: goto label_27cb18;
        case 0x27cb1cu: goto label_27cb1c;
        case 0x27cb20u: goto label_27cb20;
        case 0x27cb24u: goto label_27cb24;
        case 0x27cb28u: goto label_27cb28;
        case 0x27cb2cu: goto label_27cb2c;
        case 0x27cb30u: goto label_27cb30;
        case 0x27cb34u: goto label_27cb34;
        case 0x27cb38u: goto label_27cb38;
        case 0x27cb3cu: goto label_27cb3c;
        case 0x27cb40u: goto label_27cb40;
        case 0x27cb44u: goto label_27cb44;
        case 0x27cb48u: goto label_27cb48;
        case 0x27cb4cu: goto label_27cb4c;
        case 0x27cb50u: goto label_27cb50;
        case 0x27cb54u: goto label_27cb54;
        case 0x27cb58u: goto label_27cb58;
        case 0x27cb5cu: goto label_27cb5c;
        case 0x27cb60u: goto label_27cb60;
        case 0x27cb64u: goto label_27cb64;
        case 0x27cb68u: goto label_27cb68;
        case 0x27cb6cu: goto label_27cb6c;
        case 0x27cb70u: goto label_27cb70;
        case 0x27cb74u: goto label_27cb74;
        case 0x27cb78u: goto label_27cb78;
        case 0x27cb7cu: goto label_27cb7c;
        case 0x27cb80u: goto label_27cb80;
        case 0x27cb84u: goto label_27cb84;
        case 0x27cb88u: goto label_27cb88;
        case 0x27cb8cu: goto label_27cb8c;
        case 0x27cb90u: goto label_27cb90;
        case 0x27cb94u: goto label_27cb94;
        case 0x27cb98u: goto label_27cb98;
        case 0x27cb9cu: goto label_27cb9c;
        case 0x27cba0u: goto label_27cba0;
        case 0x27cba4u: goto label_27cba4;
        case 0x27cba8u: goto label_27cba8;
        case 0x27cbacu: goto label_27cbac;
        case 0x27cbb0u: goto label_27cbb0;
        case 0x27cbb4u: goto label_27cbb4;
        case 0x27cbb8u: goto label_27cbb8;
        case 0x27cbbcu: goto label_27cbbc;
        case 0x27cbc0u: goto label_27cbc0;
        case 0x27cbc4u: goto label_27cbc4;
        case 0x27cbc8u: goto label_27cbc8;
        case 0x27cbccu: goto label_27cbcc;
        case 0x27cbd0u: goto label_27cbd0;
        case 0x27cbd4u: goto label_27cbd4;
        case 0x27cbd8u: goto label_27cbd8;
        case 0x27cbdcu: goto label_27cbdc;
        case 0x27cbe0u: goto label_27cbe0;
        case 0x27cbe4u: goto label_27cbe4;
        case 0x27cbe8u: goto label_27cbe8;
        case 0x27cbecu: goto label_27cbec;
        case 0x27cbf0u: goto label_27cbf0;
        case 0x27cbf4u: goto label_27cbf4;
        case 0x27cbf8u: goto label_27cbf8;
        case 0x27cbfcu: goto label_27cbfc;
        case 0x27cc00u: goto label_27cc00;
        case 0x27cc04u: goto label_27cc04;
        case 0x27cc08u: goto label_27cc08;
        case 0x27cc0cu: goto label_27cc0c;
        case 0x27cc10u: goto label_27cc10;
        case 0x27cc14u: goto label_27cc14;
        case 0x27cc18u: goto label_27cc18;
        case 0x27cc1cu: goto label_27cc1c;
        case 0x27cc20u: goto label_27cc20;
        case 0x27cc24u: goto label_27cc24;
        case 0x27cc28u: goto label_27cc28;
        case 0x27cc2cu: goto label_27cc2c;
        case 0x27cc30u: goto label_27cc30;
        case 0x27cc34u: goto label_27cc34;
        case 0x27cc38u: goto label_27cc38;
        case 0x27cc3cu: goto label_27cc3c;
        case 0x27cc40u: goto label_27cc40;
        case 0x27cc44u: goto label_27cc44;
        case 0x27cc48u: goto label_27cc48;
        case 0x27cc4cu: goto label_27cc4c;
        case 0x27cc50u: goto label_27cc50;
        case 0x27cc54u: goto label_27cc54;
        case 0x27cc58u: goto label_27cc58;
        case 0x27cc5cu: goto label_27cc5c;
        case 0x27cc60u: goto label_27cc60;
        case 0x27cc64u: goto label_27cc64;
        case 0x27cc68u: goto label_27cc68;
        case 0x27cc6cu: goto label_27cc6c;
        case 0x27cc70u: goto label_27cc70;
        case 0x27cc74u: goto label_27cc74;
        case 0x27cc78u: goto label_27cc78;
        case 0x27cc7cu: goto label_27cc7c;
        case 0x27cc80u: goto label_27cc80;
        case 0x27cc84u: goto label_27cc84;
        case 0x27cc88u: goto label_27cc88;
        case 0x27cc8cu: goto label_27cc8c;
        case 0x27cc90u: goto label_27cc90;
        case 0x27cc94u: goto label_27cc94;
        case 0x27cc98u: goto label_27cc98;
        case 0x27cc9cu: goto label_27cc9c;
        case 0x27cca0u: goto label_27cca0;
        case 0x27cca4u: goto label_27cca4;
        case 0x27cca8u: goto label_27cca8;
        case 0x27ccacu: goto label_27ccac;
        case 0x27ccb0u: goto label_27ccb0;
        case 0x27ccb4u: goto label_27ccb4;
        case 0x27ccb8u: goto label_27ccb8;
        case 0x27ccbcu: goto label_27ccbc;
        case 0x27ccc0u: goto label_27ccc0;
        case 0x27ccc4u: goto label_27ccc4;
        case 0x27ccc8u: goto label_27ccc8;
        case 0x27ccccu: goto label_27cccc;
        case 0x27ccd0u: goto label_27ccd0;
        case 0x27ccd4u: goto label_27ccd4;
        case 0x27ccd8u: goto label_27ccd8;
        case 0x27ccdcu: goto label_27ccdc;
        case 0x27cce0u: goto label_27cce0;
        case 0x27cce4u: goto label_27cce4;
        case 0x27cce8u: goto label_27cce8;
        case 0x27ccecu: goto label_27ccec;
        case 0x27ccf0u: goto label_27ccf0;
        case 0x27ccf4u: goto label_27ccf4;
        case 0x27ccf8u: goto label_27ccf8;
        case 0x27ccfcu: goto label_27ccfc;
        case 0x27cd00u: goto label_27cd00;
        case 0x27cd04u: goto label_27cd04;
        case 0x27cd08u: goto label_27cd08;
        case 0x27cd0cu: goto label_27cd0c;
        case 0x27cd10u: goto label_27cd10;
        case 0x27cd14u: goto label_27cd14;
        case 0x27cd18u: goto label_27cd18;
        case 0x27cd1cu: goto label_27cd1c;
        case 0x27cd20u: goto label_27cd20;
        case 0x27cd24u: goto label_27cd24;
        case 0x27cd28u: goto label_27cd28;
        case 0x27cd2cu: goto label_27cd2c;
        case 0x27cd30u: goto label_27cd30;
        case 0x27cd34u: goto label_27cd34;
        case 0x27cd38u: goto label_27cd38;
        case 0x27cd3cu: goto label_27cd3c;
        case 0x27cd40u: goto label_27cd40;
        case 0x27cd44u: goto label_27cd44;
        case 0x27cd48u: goto label_27cd48;
        case 0x27cd4cu: goto label_27cd4c;
        case 0x27cd50u: goto label_27cd50;
        case 0x27cd54u: goto label_27cd54;
        case 0x27cd58u: goto label_27cd58;
        case 0x27cd5cu: goto label_27cd5c;
        case 0x27cd60u: goto label_27cd60;
        case 0x27cd64u: goto label_27cd64;
        case 0x27cd68u: goto label_27cd68;
        case 0x27cd6cu: goto label_27cd6c;
        case 0x27cd70u: goto label_27cd70;
        case 0x27cd74u: goto label_27cd74;
        case 0x27cd78u: goto label_27cd78;
        case 0x27cd7cu: goto label_27cd7c;
        case 0x27cd80u: goto label_27cd80;
        case 0x27cd84u: goto label_27cd84;
        case 0x27cd88u: goto label_27cd88;
        case 0x27cd8cu: goto label_27cd8c;
        case 0x27cd90u: goto label_27cd90;
        case 0x27cd94u: goto label_27cd94;
        case 0x27cd98u: goto label_27cd98;
        case 0x27cd9cu: goto label_27cd9c;
        case 0x27cda0u: goto label_27cda0;
        case 0x27cda4u: goto label_27cda4;
        case 0x27cda8u: goto label_27cda8;
        case 0x27cdacu: goto label_27cdac;
        case 0x27cdb0u: goto label_27cdb0;
        case 0x27cdb4u: goto label_27cdb4;
        case 0x27cdb8u: goto label_27cdb8;
        case 0x27cdbcu: goto label_27cdbc;
        case 0x27cdc0u: goto label_27cdc0;
        case 0x27cdc4u: goto label_27cdc4;
        case 0x27cdc8u: goto label_27cdc8;
        case 0x27cdccu: goto label_27cdcc;
        case 0x27cdd0u: goto label_27cdd0;
        case 0x27cdd4u: goto label_27cdd4;
        case 0x27cdd8u: goto label_27cdd8;
        case 0x27cddcu: goto label_27cddc;
        case 0x27cde0u: goto label_27cde0;
        case 0x27cde4u: goto label_27cde4;
        case 0x27cde8u: goto label_27cde8;
        case 0x27cdecu: goto label_27cdec;
        case 0x27cdf0u: goto label_27cdf0;
        case 0x27cdf4u: goto label_27cdf4;
        case 0x27cdf8u: goto label_27cdf8;
        case 0x27cdfcu: goto label_27cdfc;
        case 0x27ce00u: goto label_27ce00;
        case 0x27ce04u: goto label_27ce04;
        case 0x27ce08u: goto label_27ce08;
        case 0x27ce0cu: goto label_27ce0c;
        case 0x27ce10u: goto label_27ce10;
        case 0x27ce14u: goto label_27ce14;
        case 0x27ce18u: goto label_27ce18;
        case 0x27ce1cu: goto label_27ce1c;
        case 0x27ce20u: goto label_27ce20;
        case 0x27ce24u: goto label_27ce24;
        case 0x27ce28u: goto label_27ce28;
        case 0x27ce2cu: goto label_27ce2c;
        case 0x27ce30u: goto label_27ce30;
        case 0x27ce34u: goto label_27ce34;
        case 0x27ce38u: goto label_27ce38;
        case 0x27ce3cu: goto label_27ce3c;
        case 0x27ce40u: goto label_27ce40;
        case 0x27ce44u: goto label_27ce44;
        case 0x27ce48u: goto label_27ce48;
        case 0x27ce4cu: goto label_27ce4c;
        case 0x27ce50u: goto label_27ce50;
        case 0x27ce54u: goto label_27ce54;
        case 0x27ce58u: goto label_27ce58;
        case 0x27ce5cu: goto label_27ce5c;
        case 0x27ce60u: goto label_27ce60;
        case 0x27ce64u: goto label_27ce64;
        case 0x27ce68u: goto label_27ce68;
        case 0x27ce6cu: goto label_27ce6c;
        case 0x27ce70u: goto label_27ce70;
        case 0x27ce74u: goto label_27ce74;
        case 0x27ce78u: goto label_27ce78;
        case 0x27ce7cu: goto label_27ce7c;
        case 0x27ce80u: goto label_27ce80;
        case 0x27ce84u: goto label_27ce84;
        case 0x27ce88u: goto label_27ce88;
        case 0x27ce8cu: goto label_27ce8c;
        case 0x27ce90u: goto label_27ce90;
        case 0x27ce94u: goto label_27ce94;
        case 0x27ce98u: goto label_27ce98;
        case 0x27ce9cu: goto label_27ce9c;
        case 0x27cea0u: goto label_27cea0;
        case 0x27cea4u: goto label_27cea4;
        case 0x27cea8u: goto label_27cea8;
        case 0x27ceacu: goto label_27ceac;
        case 0x27ceb0u: goto label_27ceb0;
        case 0x27ceb4u: goto label_27ceb4;
        case 0x27ceb8u: goto label_27ceb8;
        case 0x27cebcu: goto label_27cebc;
        case 0x27cec0u: goto label_27cec0;
        case 0x27cec4u: goto label_27cec4;
        case 0x27cec8u: goto label_27cec8;
        case 0x27ceccu: goto label_27cecc;
        case 0x27ced0u: goto label_27ced0;
        case 0x27ced4u: goto label_27ced4;
        case 0x27ced8u: goto label_27ced8;
        case 0x27cedcu: goto label_27cedc;
        case 0x27cee0u: goto label_27cee0;
        case 0x27cee4u: goto label_27cee4;
        case 0x27cee8u: goto label_27cee8;
        case 0x27ceecu: goto label_27ceec;
        case 0x27cef0u: goto label_27cef0;
        case 0x27cef4u: goto label_27cef4;
        case 0x27cef8u: goto label_27cef8;
        case 0x27cefcu: goto label_27cefc;
        case 0x27cf00u: goto label_27cf00;
        case 0x27cf04u: goto label_27cf04;
        case 0x27cf08u: goto label_27cf08;
        case 0x27cf0cu: goto label_27cf0c;
        case 0x27cf10u: goto label_27cf10;
        case 0x27cf14u: goto label_27cf14;
        case 0x27cf18u: goto label_27cf18;
        case 0x27cf1cu: goto label_27cf1c;
        case 0x27cf20u: goto label_27cf20;
        case 0x27cf24u: goto label_27cf24;
        case 0x27cf28u: goto label_27cf28;
        case 0x27cf2cu: goto label_27cf2c;
        case 0x27cf30u: goto label_27cf30;
        case 0x27cf34u: goto label_27cf34;
        case 0x27cf38u: goto label_27cf38;
        case 0x27cf3cu: goto label_27cf3c;
        case 0x27cf40u: goto label_27cf40;
        case 0x27cf44u: goto label_27cf44;
        case 0x27cf48u: goto label_27cf48;
        case 0x27cf4cu: goto label_27cf4c;
        case 0x27cf50u: goto label_27cf50;
        case 0x27cf54u: goto label_27cf54;
        case 0x27cf58u: goto label_27cf58;
        case 0x27cf5cu: goto label_27cf5c;
        case 0x27cf60u: goto label_27cf60;
        case 0x27cf64u: goto label_27cf64;
        case 0x27cf68u: goto label_27cf68;
        case 0x27cf6cu: goto label_27cf6c;
        case 0x27cf70u: goto label_27cf70;
        case 0x27cf74u: goto label_27cf74;
        case 0x27cf78u: goto label_27cf78;
        case 0x27cf7cu: goto label_27cf7c;
        case 0x27cf80u: goto label_27cf80;
        case 0x27cf84u: goto label_27cf84;
        case 0x27cf88u: goto label_27cf88;
        case 0x27cf8cu: goto label_27cf8c;
        case 0x27cf90u: goto label_27cf90;
        case 0x27cf94u: goto label_27cf94;
        case 0x27cf98u: goto label_27cf98;
        case 0x27cf9cu: goto label_27cf9c;
        case 0x27cfa0u: goto label_27cfa0;
        case 0x27cfa4u: goto label_27cfa4;
        case 0x27cfa8u: goto label_27cfa8;
        case 0x27cfacu: goto label_27cfac;
        case 0x27cfb0u: goto label_27cfb0;
        case 0x27cfb4u: goto label_27cfb4;
        case 0x27cfb8u: goto label_27cfb8;
        case 0x27cfbcu: goto label_27cfbc;
        case 0x27cfc0u: goto label_27cfc0;
        case 0x27cfc4u: goto label_27cfc4;
        case 0x27cfc8u: goto label_27cfc8;
        case 0x27cfccu: goto label_27cfcc;
        case 0x27cfd0u: goto label_27cfd0;
        case 0x27cfd4u: goto label_27cfd4;
        case 0x27cfd8u: goto label_27cfd8;
        case 0x27cfdcu: goto label_27cfdc;
        case 0x27cfe0u: goto label_27cfe0;
        case 0x27cfe4u: goto label_27cfe4;
        case 0x27cfe8u: goto label_27cfe8;
        case 0x27cfecu: goto label_27cfec;
        case 0x27cff0u: goto label_27cff0;
        case 0x27cff4u: goto label_27cff4;
        case 0x27cff8u: goto label_27cff8;
        case 0x27cffcu: goto label_27cffc;
        case 0x27d000u: goto label_27d000;
        case 0x27d004u: goto label_27d004;
        case 0x27d008u: goto label_27d008;
        case 0x27d00cu: goto label_27d00c;
        case 0x27d010u: goto label_27d010;
        case 0x27d014u: goto label_27d014;
        case 0x27d018u: goto label_27d018;
        case 0x27d01cu: goto label_27d01c;
        case 0x27d020u: goto label_27d020;
        case 0x27d024u: goto label_27d024;
        case 0x27d028u: goto label_27d028;
        case 0x27d02cu: goto label_27d02c;
        case 0x27d030u: goto label_27d030;
        case 0x27d034u: goto label_27d034;
        case 0x27d038u: goto label_27d038;
        case 0x27d03cu: goto label_27d03c;
        case 0x27d040u: goto label_27d040;
        case 0x27d044u: goto label_27d044;
        case 0x27d048u: goto label_27d048;
        case 0x27d04cu: goto label_27d04c;
        case 0x27d050u: goto label_27d050;
        case 0x27d054u: goto label_27d054;
        case 0x27d058u: goto label_27d058;
        case 0x27d05cu: goto label_27d05c;
        case 0x27d060u: goto label_27d060;
        case 0x27d064u: goto label_27d064;
        case 0x27d068u: goto label_27d068;
        case 0x27d06cu: goto label_27d06c;
        case 0x27d070u: goto label_27d070;
        case 0x27d074u: goto label_27d074;
        case 0x27d078u: goto label_27d078;
        case 0x27d07cu: goto label_27d07c;
        case 0x27d080u: goto label_27d080;
        case 0x27d084u: goto label_27d084;
        case 0x27d088u: goto label_27d088;
        case 0x27d08cu: goto label_27d08c;
        case 0x27d090u: goto label_27d090;
        case 0x27d094u: goto label_27d094;
        case 0x27d098u: goto label_27d098;
        case 0x27d09cu: goto label_27d09c;
        case 0x27d0a0u: goto label_27d0a0;
        case 0x27d0a4u: goto label_27d0a4;
        case 0x27d0a8u: goto label_27d0a8;
        case 0x27d0acu: goto label_27d0ac;
        case 0x27d0b0u: goto label_27d0b0;
        case 0x27d0b4u: goto label_27d0b4;
        case 0x27d0b8u: goto label_27d0b8;
        case 0x27d0bcu: goto label_27d0bc;
        case 0x27d0c0u: goto label_27d0c0;
        case 0x27d0c4u: goto label_27d0c4;
        case 0x27d0c8u: goto label_27d0c8;
        case 0x27d0ccu: goto label_27d0cc;
        case 0x27d0d0u: goto label_27d0d0;
        case 0x27d0d4u: goto label_27d0d4;
        case 0x27d0d8u: goto label_27d0d8;
        case 0x27d0dcu: goto label_27d0dc;
        case 0x27d0e0u: goto label_27d0e0;
        case 0x27d0e4u: goto label_27d0e4;
        case 0x27d0e8u: goto label_27d0e8;
        case 0x27d0ecu: goto label_27d0ec;
        case 0x27d0f0u: goto label_27d0f0;
        case 0x27d0f4u: goto label_27d0f4;
        case 0x27d0f8u: goto label_27d0f8;
        case 0x27d0fcu: goto label_27d0fc;
        case 0x27d100u: goto label_27d100;
        case 0x27d104u: goto label_27d104;
        case 0x27d108u: goto label_27d108;
        case 0x27d10cu: goto label_27d10c;
        case 0x27d110u: goto label_27d110;
        case 0x27d114u: goto label_27d114;
        case 0x27d118u: goto label_27d118;
        case 0x27d11cu: goto label_27d11c;
        case 0x27d120u: goto label_27d120;
        case 0x27d124u: goto label_27d124;
        case 0x27d128u: goto label_27d128;
        case 0x27d12cu: goto label_27d12c;
        case 0x27d130u: goto label_27d130;
        case 0x27d134u: goto label_27d134;
        case 0x27d138u: goto label_27d138;
        case 0x27d13cu: goto label_27d13c;
        case 0x27d140u: goto label_27d140;
        case 0x27d144u: goto label_27d144;
        case 0x27d148u: goto label_27d148;
        case 0x27d14cu: goto label_27d14c;
        case 0x27d150u: goto label_27d150;
        case 0x27d154u: goto label_27d154;
        case 0x27d158u: goto label_27d158;
        case 0x27d15cu: goto label_27d15c;
        case 0x27d160u: goto label_27d160;
        case 0x27d164u: goto label_27d164;
        case 0x27d168u: goto label_27d168;
        case 0x27d16cu: goto label_27d16c;
        case 0x27d170u: goto label_27d170;
        case 0x27d174u: goto label_27d174;
        case 0x27d178u: goto label_27d178;
        case 0x27d17cu: goto label_27d17c;
        case 0x27d180u: goto label_27d180;
        case 0x27d184u: goto label_27d184;
        case 0x27d188u: goto label_27d188;
        case 0x27d18cu: goto label_27d18c;
        case 0x27d190u: goto label_27d190;
        case 0x27d194u: goto label_27d194;
        case 0x27d198u: goto label_27d198;
        case 0x27d19cu: goto label_27d19c;
        case 0x27d1a0u: goto label_27d1a0;
        case 0x27d1a4u: goto label_27d1a4;
        case 0x27d1a8u: goto label_27d1a8;
        case 0x27d1acu: goto label_27d1ac;
        case 0x27d1b0u: goto label_27d1b0;
        case 0x27d1b4u: goto label_27d1b4;
        case 0x27d1b8u: goto label_27d1b8;
        case 0x27d1bcu: goto label_27d1bc;
        case 0x27d1c0u: goto label_27d1c0;
        case 0x27d1c4u: goto label_27d1c4;
        case 0x27d1c8u: goto label_27d1c8;
        case 0x27d1ccu: goto label_27d1cc;
        case 0x27d1d0u: goto label_27d1d0;
        case 0x27d1d4u: goto label_27d1d4;
        case 0x27d1d8u: goto label_27d1d8;
        case 0x27d1dcu: goto label_27d1dc;
        case 0x27d1e0u: goto label_27d1e0;
        case 0x27d1e4u: goto label_27d1e4;
        case 0x27d1e8u: goto label_27d1e8;
        case 0x27d1ecu: goto label_27d1ec;
        case 0x27d1f0u: goto label_27d1f0;
        case 0x27d1f4u: goto label_27d1f4;
        case 0x27d1f8u: goto label_27d1f8;
        case 0x27d1fcu: goto label_27d1fc;
        case 0x27d200u: goto label_27d200;
        case 0x27d204u: goto label_27d204;
        case 0x27d208u: goto label_27d208;
        case 0x27d20cu: goto label_27d20c;
        case 0x27d210u: goto label_27d210;
        case 0x27d214u: goto label_27d214;
        case 0x27d218u: goto label_27d218;
        case 0x27d21cu: goto label_27d21c;
        case 0x27d220u: goto label_27d220;
        case 0x27d224u: goto label_27d224;
        case 0x27d228u: goto label_27d228;
        case 0x27d22cu: goto label_27d22c;
        default: return;
    }

label_27ca60:
    // 0x27ca60: 0x13b5b  .word       0x00013B5B                   # divu        $a3, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ca60u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27ca64:
    // 0x27ca64: 0xa7d0  .word       0x0000A7D0                   # mfhi        $s4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ca64u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27ca68:
    // 0x27ca68: 0x0  nop
    ctx->pc = 0x27ca68u;
    // NOP
label_27ca6c:
    // 0x27ca6c: 0x0  nop
    ctx->pc = 0x27ca6cu;
    // NOP
label_27ca70:
    // 0x27ca70: 0x13b70  tge         $zero, $at, 237
    ctx->pc = 0x27ca70u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ca74:
    // 0x27ca74: 0x78e0  .word       0x000078E0                   # add         $t7, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ca74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27ca78:
    // 0x27ca78: 0x0  nop
    ctx->pc = 0x27ca78u;
    // NOP
label_27ca7c:
    // 0x27ca7c: 0x0  nop
    ctx->pc = 0x27ca7cu;
    // NOP
label_27ca80:
    // 0x27ca80: 0x13b80  sll         $a3, $at, 14
    ctx->pc = 0x27ca80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_27ca84:
    // 0x27ca84: 0x9f40  sll         $s3, $zero, 29
    ctx->pc = 0x27ca84u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27ca88:
    // 0x27ca88: 0x0  nop
    ctx->pc = 0x27ca88u;
    // NOP
label_27ca8c:
    // 0x27ca8c: 0x0  nop
    ctx->pc = 0x27ca8cu;
    // NOP
label_27ca90:
    // 0x27ca90: 0x13b94  .word       0x00013B94                   # dsllv       $a3, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ca90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27ca94:
    // 0x27ca94: 0x9610  .word       0x00009610                   # mfhi        $s2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ca94u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27ca98:
    // 0x27ca98: 0x0  nop
    ctx->pc = 0x27ca98u;
    // NOP
label_27ca9c:
    // 0x27ca9c: 0x0  nop
    ctx->pc = 0x27ca9cu;
    // NOP
label_27caa0:
    // 0x27caa0: 0x13ba7  .word       0x00013BA7                   # nor         $a3, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27caa0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27caa4:
    // 0x27caa4: 0x7310  .word       0x00007310                   # mfhi        $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27caa4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27caa8:
    // 0x27caa8: 0x0  nop
    ctx->pc = 0x27caa8u;
    // NOP
label_27caac:
    // 0x27caac: 0x0  nop
    ctx->pc = 0x27caacu;
    // NOP
label_27cab0:
    // 0x27cab0: 0x13bb6  tne         $zero, $at, 238
    ctx->pc = 0x27cab0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27cab4:
    // 0x27cab4: 0x95c0  sll         $s2, $zero, 23
    ctx->pc = 0x27cab4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27cab8:
    // 0x27cab8: 0x0  nop
    ctx->pc = 0x27cab8u;
    // NOP
label_27cabc:
    // 0x27cabc: 0x0  nop
    ctx->pc = 0x27cabcu;
    // NOP
label_27cac0:
    // 0x27cac0: 0x13bc9  .word       0x00013BC9                   # jalr        $a3, $zero # 000103C0 <InstrIdType: CPU_SPECIAL>
label_27cac4:
    if (ctx->pc == 0x27CAC4u) {
        ctx->pc = 0x27CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAC0u;
        // 0x27cac4: 0xbf70  tge         $zero, $zero, 765 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CAC8u;
        goto label_27cac8;
    }
    ctx->pc = 0x27CAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x27CAC8u);
        ctx->pc = 0x27CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAC0u;
        // 0x27cac4: 0xbf70  tge         $zero, $zero, 765 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CAC0u, 0x27CAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27CAC8u;
label_27cac8:
    // 0x27cac8: 0x0  nop
    ctx->pc = 0x27cac8u;
    // NOP
label_27cacc:
    // 0x27cacc: 0x0  nop
    ctx->pc = 0x27caccu;
    // NOP
label_27cad0:
    // 0x27cad0: 0x13be1  .word       0x00013BE1                   # addu        $a3, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27cad4:
    // 0x27cad4: 0x9060  .word       0x00009060                   # add         $s2, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cad4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27cad8:
    // 0x27cad8: 0x0  nop
    ctx->pc = 0x27cad8u;
    // NOP
label_27cadc:
    // 0x27cadc: 0x0  nop
    ctx->pc = 0x27cadcu;
    // NOP
label_27cae0:
    // 0x27cae0: 0x13bf4  teq         $zero, $at, 239
    ctx->pc = 0x27cae0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27cae4:
    // 0x27cae4: 0xd540  sll         $k0, $zero, 21
    ctx->pc = 0x27cae4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_27cae8:
    // 0x27cae8: 0x0  nop
    ctx->pc = 0x27cae8u;
    // NOP
label_27caec:
    // 0x27caec: 0x0  nop
    ctx->pc = 0x27caecu;
    // NOP
label_27caf0:
    // 0x27caf0: 0x13c0f  .word       0x00013C0F                   # sync.p # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27caf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27caf4:
    // 0x27caf4: 0xbe20  .word       0x0000BE20                   # add         $s7, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27caf4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27caf8:
    // 0x27caf8: 0x0  nop
    ctx->pc = 0x27caf8u;
    // NOP
label_27cafc:
    // 0x27cafc: 0x0  nop
    ctx->pc = 0x27cafcu;
    // NOP
label_27cb00:
    // 0x27cb00: 0x13c27  .word       0x00013C27                   # nor         $a3, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cb00u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27cb04:
    // 0x27cb04: 0xdc60  .word       0x0000DC60                   # add         $k1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cb04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_27cb08:
    // 0x27cb08: 0x0  nop
    ctx->pc = 0x27cb08u;
    // NOP
label_27cb0c:
    // 0x27cb0c: 0x0  nop
    ctx->pc = 0x27cb0cu;
    // NOP
label_27cb10:
    // 0x27cb10: 0x13c43  sra         $a3, $at, 17
    ctx->pc = 0x27cb10u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), 17));
label_27cb14:
    // 0x27cb14: 0x9410  .word       0x00009410                   # mfhi        $s2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cb14u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27cb18:
    // 0x27cb18: 0x0  nop
    ctx->pc = 0x27cb18u;
    // NOP
label_27cb1c:
    // 0x27cb1c: 0x0  nop
    ctx->pc = 0x27cb1cu;
    // NOP
label_27cb20:
    // 0x27cb20: 0x13c56  .word       0x00013C56                   # dsrlv       $a3, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cb20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27cb24:
    // 0x27cb24: 0xccf0  tge         $zero, $zero, 819
    ctx->pc = 0x27cb24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cb28:
    // 0x27cb28: 0x0  nop
    ctx->pc = 0x27cb28u;
    // NOP
label_27cb2c:
    // 0x27cb2c: 0x0  nop
    ctx->pc = 0x27cb2cu;
    // NOP
label_27cb30:
    // 0x27cb30: 0x13c70  tge         $zero, $at, 241
    ctx->pc = 0x27cb30u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27cb34:
    // 0x27cb34: 0xc3b0  tge         $zero, $zero, 782
    ctx->pc = 0x27cb34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cb38:
    // 0x27cb38: 0x0  nop
    ctx->pc = 0x27cb38u;
    // NOP
label_27cb3c:
    // 0x27cb3c: 0x0  nop
    ctx->pc = 0x27cb3cu;
    // NOP
label_27cb40:
    // 0x27cb40: 0x13c89  .word       0x00013C89                   # jalr        $a3, $zero # 00010480 <InstrIdType: CPU_SPECIAL>
label_27cb44:
    if (ctx->pc == 0x27CB44u) {
        ctx->pc = 0x27CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB40u;
        // 0x27cb44: 0x101c0  sll         $zero, $at, 7 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB48u;
        goto label_27cb48;
    }
    ctx->pc = 0x27CB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x27CB48u);
        ctx->pc = 0x27CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB40u;
        // 0x27cb44: 0x101c0  sll         $zero, $at, 7 (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CB40u, 0x27CB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27CB48u;
label_27cb48:
    // 0x27cb48: 0x0  nop
    ctx->pc = 0x27cb48u;
    // NOP
label_27cb4c:
    // 0x27cb4c: 0x0  nop
    ctx->pc = 0x27cb4cu;
    // NOP
label_27cb50:
    // 0x27cb50: 0x13caa  .word       0x00013CAA                   # slt         $a3, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cb50u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27cb54:
    // 0x27cb54: 0xe9e0  .word       0x0000E9E0                   # add         $sp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cb54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_27cb58:
    // 0x27cb58: 0x0  nop
    ctx->pc = 0x27cb58u;
    // NOP
label_27cb5c:
    // 0x27cb5c: 0x0  nop
    ctx->pc = 0x27cb5cu;
    // NOP
label_27cb60:
    // 0x27cb60: 0x13cc8  .word       0x00013CC8                   # jr          $zero # 00013CC0 <InstrIdType: CPU_SPECIAL>
label_27cb64:
    if (ctx->pc == 0x27CB64u) {
        ctx->pc = 0x27CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB60u;
        // 0x27cb64: 0xcd00  sll         $t9, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB68u;
        goto label_27cb68;
    }
    ctx->pc = 0x27CB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB60u;
        // 0x27cb64: 0xcd00  sll         $t9, $zero, 20 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CB60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27CB68u;
label_27cb68:
    // 0x27cb68: 0x0  nop
    ctx->pc = 0x27cb68u;
    // NOP
label_27cb6c:
    // 0x27cb6c: 0x0  nop
    ctx->pc = 0x27cb6cu;
    // NOP
label_27cb70:
    // 0x27cb70: 0x13ce2  .word       0x00013CE2                   # neg         $a3, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cb70u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_27cb74:
    // 0x27cb74: 0xa2d0  .word       0x0000A2D0                   # mfhi        $s4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cb74u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27cb78:
    // 0x27cb78: 0x0  nop
    ctx->pc = 0x27cb78u;
    // NOP
label_27cb7c:
    // 0x27cb7c: 0x0  nop
    ctx->pc = 0x27cb7cu;
    // NOP
label_27cb80:
    // 0x27cb80: 0x13cf7  .word       0x00013CF7                   # INVALID     $zero, $at, 0x3CF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cb80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27CB80 raw=0x00013CF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cb84:
    // 0x27cb84: 0xab80  sll         $s5, $zero, 14
    ctx->pc = 0x27cb84u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_27cb88:
    // 0x27cb88: 0x0  nop
    ctx->pc = 0x27cb88u;
    // NOP
label_27cb8c:
    // 0x27cb8c: 0x0  nop
    ctx->pc = 0x27cb8cu;
    // NOP
label_27cb90:
    // 0x27cb90: 0x13d0d  break       1, 244
    ctx->pc = 0x27cb90u;
    runtime->handleBreak(rdram, ctx);
label_27cb94:
    // 0x27cb94: 0x7620  .word       0x00007620                   # add         $t6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cb94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27cb98:
    // 0x27cb98: 0x0  nop
    ctx->pc = 0x27cb98u;
    // NOP
label_27cb9c:
    // 0x27cb9c: 0x0  nop
    ctx->pc = 0x27cb9cu;
    // NOP
label_27cba0:
    // 0x27cba0: 0x13d1c  .word       0x00013D1C                   # dmult       $zero, $at # 00003D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27CBA0 raw=0x00013D1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cba4:
    // 0x27cba4: 0x4f20  .word       0x00004F20                   # add         $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cba4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27cba8:
    // 0x27cba8: 0x0  nop
    ctx->pc = 0x27cba8u;
    // NOP
label_27cbac:
    // 0x27cbac: 0x0  nop
    ctx->pc = 0x27cbacu;
    // NOP
label_27cbb0:
    // 0x27cbb0: 0x13d26  .word       0x00013D26                   # xor         $a3, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cbb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27cbb4:
    // 0x27cbb4: 0x9e00  sll         $s3, $zero, 24
    ctx->pc = 0x27cbb4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27cbb8:
    // 0x27cbb8: 0x0  nop
    ctx->pc = 0x27cbb8u;
    // NOP
label_27cbbc:
    // 0x27cbbc: 0x0  nop
    ctx->pc = 0x27cbbcu;
    // NOP
label_27cbc0:
    // 0x27cbc0: 0x13d3a  dsrl        $a3, $at, 20
    ctx->pc = 0x27cbc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> 20);
label_27cbc4:
    // 0x27cbc4: 0xa260  .word       0x0000A260                   # add         $s4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cbc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27cbc8:
    // 0x27cbc8: 0x0  nop
    ctx->pc = 0x27cbc8u;
    // NOP
label_27cbcc:
    // 0x27cbcc: 0x0  nop
    ctx->pc = 0x27cbccu;
    // NOP
label_27cbd0:
    // 0x27cbd0: 0x13d4f  .word       0x00013D4F                   # sync.p # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cbd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27cbd4:
    // 0x27cbd4: 0xb2e0  .word       0x0000B2E0                   # add         $s6, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cbd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_27cbd8:
    // 0x27cbd8: 0x0  nop
    ctx->pc = 0x27cbd8u;
    // NOP
label_27cbdc:
    // 0x27cbdc: 0x0  nop
    ctx->pc = 0x27cbdcu;
    // NOP
label_27cbe0:
    // 0x27cbe0: 0x13d66  .word       0x00013D66                   # xor         $a3, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cbe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27cbe4:
    // 0x27cbe4: 0x8c70  tge         $zero, $zero, 561
    ctx->pc = 0x27cbe4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cbe8:
    // 0x27cbe8: 0x0  nop
    ctx->pc = 0x27cbe8u;
    // NOP
label_27cbec:
    // 0x27cbec: 0x0  nop
    ctx->pc = 0x27cbecu;
    // NOP
label_27cbf0:
    // 0x27cbf0: 0x13d78  dsll        $a3, $at, 21
    ctx->pc = 0x27cbf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << 21);
label_27cbf4:
    // 0x27cbf4: 0xa530  tge         $zero, $zero, 660
    ctx->pc = 0x27cbf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cbf8:
    // 0x27cbf8: 0x0  nop
    ctx->pc = 0x27cbf8u;
    // NOP
label_27cbfc:
    // 0x27cbfc: 0x0  nop
    ctx->pc = 0x27cbfcu;
    // NOP
label_27cc00:
    // 0x27cc00: 0x13d8d  break       1, 246
    ctx->pc = 0x27cc00u;
    runtime->handleBreak(rdram, ctx);
label_27cc04:
    // 0x27cc04: 0xabc0  sll         $s5, $zero, 15
    ctx->pc = 0x27cc04u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_27cc08:
    // 0x27cc08: 0x0  nop
    ctx->pc = 0x27cc08u;
    // NOP
label_27cc0c:
    // 0x27cc0c: 0x0  nop
    ctx->pc = 0x27cc0cu;
    // NOP
label_27cc10:
    // 0x27cc10: 0x13da3  .word       0x00013DA3                   # negu        $a3, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27cc14:
    // 0x27cc14: 0x90e0  .word       0x000090E0                   # add         $s2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27cc18:
    // 0x27cc18: 0x0  nop
    ctx->pc = 0x27cc18u;
    // NOP
label_27cc1c:
    // 0x27cc1c: 0x0  nop
    ctx->pc = 0x27cc1cu;
    // NOP
label_27cc20:
    // 0x27cc20: 0x13db6  tne         $zero, $at, 246
    ctx->pc = 0x27cc20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27cc24:
    // 0x27cc24: 0xb6b0  tge         $zero, $zero, 730
    ctx->pc = 0x27cc24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cc28:
    // 0x27cc28: 0x0  nop
    ctx->pc = 0x27cc28u;
    // NOP
label_27cc2c:
    // 0x27cc2c: 0x0  nop
    ctx->pc = 0x27cc2cu;
    // NOP
label_27cc30:
    // 0x27cc30: 0x13dcd  break       1, 247
    ctx->pc = 0x27cc30u;
    runtime->handleBreak(rdram, ctx);
label_27cc34:
    // 0x27cc34: 0xd220  .word       0x0000D220                   # add         $k0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27cc38:
    // 0x27cc38: 0x0  nop
    ctx->pc = 0x27cc38u;
    // NOP
label_27cc3c:
    // 0x27cc3c: 0x0  nop
    ctx->pc = 0x27cc3cu;
    // NOP
label_27cc40:
    // 0x27cc40: 0x13de8  .word       0x00013DE8                   # mfsa        $a3 # 000105C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27cc40u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_27cc44:
    // 0x27cc44: 0x5aa0  .word       0x00005AA0                   # add         $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_27cc48:
    // 0x27cc48: 0x0  nop
    ctx->pc = 0x27cc48u;
    // NOP
label_27cc4c:
    // 0x27cc4c: 0x0  nop
    ctx->pc = 0x27cc4cu;
    // NOP
label_27cc50:
    // 0x27cc50: 0x13df4  teq         $zero, $at, 247
    ctx->pc = 0x27cc50u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27cc54:
    // 0x27cc54: 0x9400  sll         $s2, $zero, 16
    ctx->pc = 0x27cc54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27cc58:
    // 0x27cc58: 0x0  nop
    ctx->pc = 0x27cc58u;
    // NOP
label_27cc5c:
    // 0x27cc5c: 0x0  nop
    ctx->pc = 0x27cc5cu;
    // NOP
label_27cc60:
    // 0x27cc60: 0x13e07  .word       0x00013E07                   # srav        $a3, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc60u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27cc64:
    // 0x27cc64: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc64u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27cc68:
    // 0x27cc68: 0x0  nop
    ctx->pc = 0x27cc68u;
    // NOP
label_27cc6c:
    // 0x27cc6c: 0x0  nop
    ctx->pc = 0x27cc6cu;
    // NOP
label_27cc70:
    // 0x27cc70: 0x13e13  .word       0x00013E13                   # mtlo        $zero # 00013E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc70u;
    ctx->lo = GPR_U64(ctx, 0);
label_27cc74:
    // 0x27cc74: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27cc78:
    // 0x27cc78: 0x0  nop
    ctx->pc = 0x27cc78u;
    // NOP
label_27cc7c:
    // 0x27cc7c: 0x0  nop
    ctx->pc = 0x27cc7cu;
    // NOP
label_27cc80:
    // 0x27cc80: 0x13e20  .word       0x00013E20                   # add         $a3, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27cc84:
    // 0x27cc84: 0xa120  .word       0x0000A120                   # add         $s4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27cc88:
    // 0x27cc88: 0x0  nop
    ctx->pc = 0x27cc88u;
    // NOP
label_27cc8c:
    // 0x27cc8c: 0x0  nop
    ctx->pc = 0x27cc8cu;
    // NOP
label_27cc90:
    // 0x27cc90: 0x13e35  .word       0x00013E35                   # INVALID     $zero, $at, 0x3E35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27CC90 raw=0x00013E35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cc94:
    // 0x27cc94: 0xfe50  .word       0x0000FE50                   # mfhi        $ra # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cc94u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_27cc98:
    // 0x27cc98: 0x0  nop
    ctx->pc = 0x27cc98u;
    // NOP
label_27cc9c:
    // 0x27cc9c: 0x0  nop
    ctx->pc = 0x27cc9cu;
    // NOP
label_27cca0:
    // 0x27cca0: 0x13e55  .word       0x00013E55                   # INVALID     $zero, $at, 0x3E55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cca0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27CCA0 raw=0x00013E55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cca4:
    // 0x27cca4: 0xf210  .word       0x0000F210                   # mfhi        $fp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cca4u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_27cca8:
    // 0x27cca8: 0x0  nop
    ctx->pc = 0x27cca8u;
    // NOP
label_27ccac:
    // 0x27ccac: 0x0  nop
    ctx->pc = 0x27ccacu;
    // NOP
label_27ccb0:
    // 0x27ccb0: 0x13e74  teq         $zero, $at, 249
    ctx->pc = 0x27ccb0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ccb4:
    // 0x27ccb4: 0x9660  .word       0x00009660                   # add         $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ccb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27ccb8:
    // 0x27ccb8: 0x0  nop
    ctx->pc = 0x27ccb8u;
    // NOP
label_27ccbc:
    // 0x27ccbc: 0x0  nop
    ctx->pc = 0x27ccbcu;
    // NOP
label_27ccc0:
    // 0x27ccc0: 0x13e87  .word       0x00013E87                   # srav        $a3, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ccc0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27ccc4:
    // 0x27ccc4: 0x6eb0  tge         $zero, $zero, 442
    ctx->pc = 0x27ccc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ccc8:
    // 0x27ccc8: 0x0  nop
    ctx->pc = 0x27ccc8u;
    // NOP
label_27cccc:
    // 0x27cccc: 0x0  nop
    ctx->pc = 0x27ccccu;
    // NOP
label_27ccd0:
    // 0x27ccd0: 0x13e95  .word       0x00013E95                   # INVALID     $zero, $at, 0x3E95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ccd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27CCD0 raw=0x00013E95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ccd4:
    // 0x27ccd4: 0xbd50  .word       0x0000BD50                   # mfhi        $s7 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ccd4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27ccd8:
    // 0x27ccd8: 0x0  nop
    ctx->pc = 0x27ccd8u;
    // NOP
label_27ccdc:
    // 0x27ccdc: 0x0  nop
    ctx->pc = 0x27ccdcu;
    // NOP
label_27cce0:
    // 0x27cce0: 0x13ead  .word       0x00013EAD                   # daddu       $a3, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27cce4:
    // 0x27cce4: 0xf800  sll         $ra, $zero, 0
    ctx->pc = 0x27cce4u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27cce8:
    // 0x27cce8: 0x0  nop
    ctx->pc = 0x27cce8u;
    // NOP
label_27ccec:
    // 0x27ccec: 0x0  nop
    ctx->pc = 0x27ccecu;
    // NOP
label_27ccf0:
    // 0x27ccf0: 0x13ecc  .word       0x00013ECC                   # syscall     251 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ccf0u;
    ctx->pc = 0x27CCF4u;
runtime->handleSyscall(rdram, ctx, 0x4FBu);
label_27ccf4:
    // 0x27ccf4: 0xbf70  tge         $zero, $zero, 765
    ctx->pc = 0x27ccf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ccf8:
    // 0x27ccf8: 0x0  nop
    ctx->pc = 0x27ccf8u;
    // NOP
label_27ccfc:
    // 0x27ccfc: 0x0  nop
    ctx->pc = 0x27ccfcu;
    // NOP
label_27cd00:
    // 0x27cd00: 0x13ee4  .word       0x00013EE4                   # and         $a3, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cd00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27cd04:
    // 0x27cd04: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x27cd04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cd08:
    // 0x27cd08: 0x0  nop
    ctx->pc = 0x27cd08u;
    // NOP
label_27cd0c:
    // 0x27cd0c: 0x0  nop
    ctx->pc = 0x27cd0cu;
    // NOP
label_27cd10:
    // 0x27cd10: 0x13ef5  .word       0x00013EF5                   # INVALID     $zero, $at, 0x3EF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cd10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27CD10 raw=0x00013EF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cd14:
    // 0x27cd14: 0x3e00  sll         $a3, $zero, 24
    ctx->pc = 0x27cd14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27cd18:
    // 0x27cd18: 0x0  nop
    ctx->pc = 0x27cd18u;
    // NOP
label_27cd1c:
    // 0x27cd1c: 0x0  nop
    ctx->pc = 0x27cd1cu;
    // NOP
label_27cd20:
    // 0x27cd20: 0x13efd  .word       0x00013EFD                   # INVALID     $zero, $at, 0x3EFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cd20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27CD20 raw=0x00013EFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cd24:
    // 0x27cd24: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cd24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27cd28:
    // 0x27cd28: 0x0  nop
    ctx->pc = 0x27cd28u;
    // NOP
label_27cd2c:
    // 0x27cd2c: 0x0  nop
    ctx->pc = 0x27cd2cu;
    // NOP
label_27cd30:
    // 0x27cd30: 0x13f13  .word       0x00013F13                   # mtlo        $zero # 00013F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cd30u;
    ctx->lo = GPR_U64(ctx, 0);
label_27cd34:
    // 0x27cd34: 0xa750  .word       0x0000A750                   # mfhi        $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cd34u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27cd38:
    // 0x27cd38: 0x0  nop
    ctx->pc = 0x27cd38u;
    // NOP
label_27cd3c:
    // 0x27cd3c: 0x0  nop
    ctx->pc = 0x27cd3cu;
    // NOP
label_27cd40:
    // 0x27cd40: 0x13f28  .word       0x00013F28                   # mfsa        $a3 # 00010700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27cd40u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_27cd44:
    // 0x27cd44: 0xab00  sll         $s5, $zero, 12
    ctx->pc = 0x27cd44u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27cd48:
    // 0x27cd48: 0x0  nop
    ctx->pc = 0x27cd48u;
    // NOP
label_27cd4c:
    // 0x27cd4c: 0x0  nop
    ctx->pc = 0x27cd4cu;
    // NOP
label_27cd50:
    // 0x27cd50: 0x13f3e  dsrl32      $a3, $at, 28
    ctx->pc = 0x27cd50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (32 + 28));
label_27cd54:
    // 0x27cd54: 0xc9c0  sll         $t9, $zero, 7
    ctx->pc = 0x27cd54u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27cd58:
    // 0x27cd58: 0x0  nop
    ctx->pc = 0x27cd58u;
    // NOP
label_27cd5c:
    // 0x27cd5c: 0x0  nop
    ctx->pc = 0x27cd5cu;
    // NOP
label_27cd60:
    // 0x27cd60: 0x13f58  .word       0x00013F58                   # mult        $a3, $zero, $at # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27cd60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_27cd64:
    // 0x27cd64: 0x8510  .word       0x00008510                   # mfhi        $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cd64u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27cd68:
    // 0x27cd68: 0x0  nop
    ctx->pc = 0x27cd68u;
    // NOP
label_27cd6c:
    // 0x27cd6c: 0x0  nop
    ctx->pc = 0x27cd6cu;
    // NOP
label_27cd70:
    // 0x27cd70: 0x13f69  .word       0x00013F69                   # mtsa        $zero # 00013F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27cd70u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27cd74:
    // 0x27cd74: 0x8120  .word       0x00008120                   # add         $s0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cd74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27cd78:
    // 0x27cd78: 0x0  nop
    ctx->pc = 0x27cd78u;
    // NOP
label_27cd7c:
    // 0x27cd7c: 0x0  nop
    ctx->pc = 0x27cd7cu;
    // NOP
label_27cd80:
    // 0x27cd80: 0x13f7a  dsrl        $a3, $at, 29
    ctx->pc = 0x27cd80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> 29);
label_27cd84:
    // 0x27cd84: 0xd260  .word       0x0000D260                   # add         $k0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cd84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_27cd88:
    // 0x27cd88: 0x0  nop
    ctx->pc = 0x27cd88u;
    // NOP
label_27cd8c:
    // 0x27cd8c: 0x0  nop
    ctx->pc = 0x27cd8cu;
    // NOP
label_27cd90:
    // 0x27cd90: 0x13f95  .word       0x00013F95                   # INVALID     $zero, $at, 0x3F95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cd90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27CD90 raw=0x00013F95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cd94:
    // 0x27cd94: 0x8a30  tge         $zero, $zero, 552
    ctx->pc = 0x27cd94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cd98:
    // 0x27cd98: 0x0  nop
    ctx->pc = 0x27cd98u;
    // NOP
label_27cd9c:
    // 0x27cd9c: 0x0  nop
    ctx->pc = 0x27cd9cu;
    // NOP
label_27cda0:
    // 0x27cda0: 0x13fa7  .word       0x00013FA7                   # nor         $a3, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cda0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27cda4:
    // 0x27cda4: 0x87e0  .word       0x000087E0                   # add         $s0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cda4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27cda8:
    // 0x27cda8: 0x0  nop
    ctx->pc = 0x27cda8u;
    // NOP
label_27cdac:
    // 0x27cdac: 0x0  nop
    ctx->pc = 0x27cdacu;
    // NOP
label_27cdb0:
    // 0x27cdb0: 0x13fb8  dsll        $a3, $at, 30
    ctx->pc = 0x27cdb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) << 30);
label_27cdb4:
    // 0x27cdb4: 0x5020  add         $t2, $zero, $zero
    ctx->pc = 0x27cdb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27cdb8:
    // 0x27cdb8: 0x0  nop
    ctx->pc = 0x27cdb8u;
    // NOP
label_27cdbc:
    // 0x27cdbc: 0x0  nop
    ctx->pc = 0x27cdbcu;
    // NOP
label_27cdc0:
    // 0x27cdc0: 0x13fc3  sra         $a3, $at, 31
    ctx->pc = 0x27cdc0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 1), 31));
label_27cdc4:
    // 0x27cdc4: 0x5a20  .word       0x00005A20                   # add         $t3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cdc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_27cdc8:
    // 0x27cdc8: 0x0  nop
    ctx->pc = 0x27cdc8u;
    // NOP
label_27cdcc:
    // 0x27cdcc: 0x0  nop
    ctx->pc = 0x27cdccu;
    // NOP
label_27cdd0:
    // 0x27cdd0: 0x13fcf  .word       0x00013FCF                   # sync.p # 00013800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cdd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27cdd4:
    // 0x27cdd4: 0x5000  sll         $t2, $zero, 0
    ctx->pc = 0x27cdd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27cdd8:
    // 0x27cdd8: 0x0  nop
    ctx->pc = 0x27cdd8u;
    // NOP
label_27cddc:
    // 0x27cddc: 0x0  nop
    ctx->pc = 0x27cddcu;
    // NOP
label_27cde0:
    // 0x27cde0: 0x13fd9  .word       0x00013FD9                   # multu       $zero, $at # 00003FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cde0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_27cde4:
    // 0x27cde4: 0x6030  tge         $zero, $zero, 384
    ctx->pc = 0x27cde4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cde8:
    // 0x27cde8: 0x0  nop
    ctx->pc = 0x27cde8u;
    // NOP
label_27cdec:
    // 0x27cdec: 0x0  nop
    ctx->pc = 0x27cdecu;
    // NOP
label_27cdf0:
    // 0x27cdf0: 0x13fe6  .word       0x00013FE6                   # xor         $a3, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cdf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27cdf4:
    // 0x27cdf4: 0x80f0  tge         $zero, $zero, 515
    ctx->pc = 0x27cdf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cdf8:
    // 0x27cdf8: 0x0  nop
    ctx->pc = 0x27cdf8u;
    // NOP
label_27cdfc:
    // 0x27cdfc: 0x0  nop
    ctx->pc = 0x27cdfcu;
    // NOP
label_27ce00:
    // 0x27ce00: 0x13ff7  .word       0x00013FF7                   # INVALID     $zero, $at, 0x3FF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27CE00 raw=0x00013FF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ce04:
    // 0x27ce04: 0x6ce0  .word       0x00006CE0                   # add         $t5, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27ce08:
    // 0x27ce08: 0x0  nop
    ctx->pc = 0x27ce08u;
    // NOP
label_27ce0c:
    // 0x27ce0c: 0x0  nop
    ctx->pc = 0x27ce0cu;
    // NOP
label_27ce10:
    // 0x27ce10: 0x14005  .word       0x00014005                   # INVALID     $zero, $at, 0x4005 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27CE10 raw=0x00014005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ce14:
    // 0x27ce14: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27ce18:
    // 0x27ce18: 0x0  nop
    ctx->pc = 0x27ce18u;
    // NOP
label_27ce1c:
    // 0x27ce1c: 0x0  nop
    ctx->pc = 0x27ce1cu;
    // NOP
label_27ce20:
    // 0x27ce20: 0x14019  .word       0x00014019                   # multu       $zero, $at # 00004000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_27ce24:
    // 0x27ce24: 0xefa0  .word       0x0000EFA0                   # add         $sp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_27ce28:
    // 0x27ce28: 0x0  nop
    ctx->pc = 0x27ce28u;
    // NOP
label_27ce2c:
    // 0x27ce2c: 0x0  nop
    ctx->pc = 0x27ce2cu;
    // NOP
label_27ce30:
    // 0x27ce30: 0x14037  .word       0x00014037                   # INVALID     $zero, $at, 0x4037 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27CE30 raw=0x00014037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ce34:
    // 0x27ce34: 0xa620  .word       0x0000A620                   # add         $s4, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27ce38:
    // 0x27ce38: 0x0  nop
    ctx->pc = 0x27ce38u;
    // NOP
label_27ce3c:
    // 0x27ce3c: 0x0  nop
    ctx->pc = 0x27ce3cu;
    // NOP
label_27ce40:
    // 0x27ce40: 0x1404c  .word       0x0001404C                   # syscall     257 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce40u;
    ctx->pc = 0x27CE44u;
runtime->handleSyscall(rdram, ctx, 0x501u);
label_27ce44:
    // 0x27ce44: 0x8fd0  .word       0x00008FD0                   # mfhi        $s1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce44u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27ce48:
    // 0x27ce48: 0x0  nop
    ctx->pc = 0x27ce48u;
    // NOP
label_27ce4c:
    // 0x27ce4c: 0x0  nop
    ctx->pc = 0x27ce4cu;
    // NOP
label_27ce50:
    // 0x27ce50: 0x1405e  .word       0x0001405E                   # ddiv        $t0, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27CE50 raw=0x0001405E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ce54:
    // 0x27ce54: 0xbf40  sll         $s7, $zero, 29
    ctx->pc = 0x27ce54u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27ce58:
    // 0x27ce58: 0x0  nop
    ctx->pc = 0x27ce58u;
    // NOP
label_27ce5c:
    // 0x27ce5c: 0x0  nop
    ctx->pc = 0x27ce5cu;
    // NOP
label_27ce60:
    // 0x27ce60: 0x14076  tne         $zero, $at, 257
    ctx->pc = 0x27ce60u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ce64:
    // 0x27ce64: 0xde60  .word       0x0000DE60                   # add         $k1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_27ce68:
    // 0x27ce68: 0x0  nop
    ctx->pc = 0x27ce68u;
    // NOP
label_27ce6c:
    // 0x27ce6c: 0x0  nop
    ctx->pc = 0x27ce6cu;
    // NOP
label_27ce70:
    // 0x27ce70: 0x14092  .word       0x00014092                   # mflo        $t0 # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce70u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_27ce74:
    // 0x27ce74: 0xe360  .word       0x0000E360                   # add         $gp, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_27ce78:
    // 0x27ce78: 0x0  nop
    ctx->pc = 0x27ce78u;
    // NOP
label_27ce7c:
    // 0x27ce7c: 0x0  nop
    ctx->pc = 0x27ce7cu;
    // NOP
label_27ce80:
    // 0x27ce80: 0x140af  .word       0x000140AF                   # dsubu       $t0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27ce84:
    // 0x27ce84: 0xdc90  .word       0x0000DC90                   # mfhi        $k1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce84u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_27ce88:
    // 0x27ce88: 0x0  nop
    ctx->pc = 0x27ce88u;
    // NOP
label_27ce8c:
    // 0x27ce8c: 0x0  nop
    ctx->pc = 0x27ce8cu;
    // NOP
label_27ce90:
    // 0x27ce90: 0x140cb  .word       0x000140CB                   # movn        $t0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce90u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_27ce94:
    // 0x27ce94: 0xc750  .word       0x0000C750                   # mfhi        $t8 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ce94u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27ce98:
    // 0x27ce98: 0x0  nop
    ctx->pc = 0x27ce98u;
    // NOP
label_27ce9c:
    // 0x27ce9c: 0x0  nop
    ctx->pc = 0x27ce9cu;
    // NOP
label_27cea0:
    // 0x27cea0: 0x140e4  .word       0x000140E4                   # and         $t0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27cea4:
    // 0x27cea4: 0x90e0  .word       0x000090E0                   # add         $s2, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27cea8:
    // 0x27cea8: 0x0  nop
    ctx->pc = 0x27cea8u;
    // NOP
label_27ceac:
    // 0x27ceac: 0x0  nop
    ctx->pc = 0x27ceacu;
    // NOP
label_27ceb0:
    // 0x27ceb0: 0x140f7  .word       0x000140F7                   # INVALID     $zero, $at, 0x40F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ceb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27CEB0 raw=0x000140F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ceb4:
    // 0x27ceb4: 0x55d0  .word       0x000055D0                   # mfhi        $t2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ceb4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27ceb8:
    // 0x27ceb8: 0x0  nop
    ctx->pc = 0x27ceb8u;
    // NOP
label_27cebc:
    // 0x27cebc: 0x0  nop
    ctx->pc = 0x27cebcu;
    // NOP
label_27cec0:
    // 0x27cec0: 0x14102  srl         $t0, $at, 4
    ctx->pc = 0x27cec0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 4));
label_27cec4:
    // 0x27cec4: 0xa210  .word       0x0000A210                   # mfhi        $s4 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cec4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27cec8:
    // 0x27cec8: 0x0  nop
    ctx->pc = 0x27cec8u;
    // NOP
label_27cecc:
    // 0x27cecc: 0x0  nop
    ctx->pc = 0x27ceccu;
    // NOP
label_27ced0:
    // 0x27ced0: 0x14117  .word       0x00014117                   # dsrav       $t0, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ced0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27ced4:
    // 0x27ced4: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ced4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27ced8:
    // 0x27ced8: 0x0  nop
    ctx->pc = 0x27ced8u;
    // NOP
label_27cedc:
    // 0x27cedc: 0x0  nop
    ctx->pc = 0x27cedcu;
    // NOP
label_27cee0:
    // 0x27cee0: 0x14126  .word       0x00014126                   # xor         $t0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cee0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27cee4:
    // 0x27cee4: 0x8650  .word       0x00008650                   # mfhi        $s0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cee4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27cee8:
    // 0x27cee8: 0x0  nop
    ctx->pc = 0x27cee8u;
    // NOP
label_27ceec:
    // 0x27ceec: 0x0  nop
    ctx->pc = 0x27ceecu;
    // NOP
label_27cef0:
    // 0x27cef0: 0x14137  .word       0x00014137                   # INVALID     $zero, $at, 0x4137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cef0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27CEF0 raw=0x00014137"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cef4:
    // 0x27cef4: 0x10980  sll         $at, $at, 6
    ctx->pc = 0x27cef4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_27cef8:
    // 0x27cef8: 0x0  nop
    ctx->pc = 0x27cef8u;
    // NOP
label_27cefc:
    // 0x27cefc: 0x0  nop
    ctx->pc = 0x27cefcu;
    // NOP
label_27cf00:
    // 0x27cf00: 0x14159  .word       0x00014159                   # multu       $zero, $at # 00004140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf00u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_27cf04:
    // 0x27cf04: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27cf08:
    // 0x27cf08: 0x0  nop
    ctx->pc = 0x27cf08u;
    // NOP
label_27cf0c:
    // 0x27cf0c: 0x0  nop
    ctx->pc = 0x27cf0cu;
    // NOP
label_27cf10:
    // 0x27cf10: 0x1416e  .word       0x0001416E                   # dsub        $t0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_27cf14:
    // 0x27cf14: 0x4c70  tge         $zero, $zero, 305
    ctx->pc = 0x27cf14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cf18:
    // 0x27cf18: 0x0  nop
    ctx->pc = 0x27cf18u;
    // NOP
label_27cf1c:
    // 0x27cf1c: 0x0  nop
    ctx->pc = 0x27cf1cu;
    // NOP
label_27cf20:
    // 0x27cf20: 0x14178  dsll        $t0, $at, 5
    ctx->pc = 0x27cf20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << 5);
label_27cf24:
    // 0x27cf24: 0x9c50  .word       0x00009C50                   # mfhi        $s3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf24u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27cf28:
    // 0x27cf28: 0x0  nop
    ctx->pc = 0x27cf28u;
    // NOP
label_27cf2c:
    // 0x27cf2c: 0x0  nop
    ctx->pc = 0x27cf2cu;
    // NOP
label_27cf30:
    // 0x27cf30: 0x1418c  .word       0x0001418C                   # syscall     262 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf30u;
    ctx->pc = 0x27CF34u;
runtime->handleSyscall(rdram, ctx, 0x506u);
label_27cf34:
    // 0x27cf34: 0x88c0  sll         $s1, $zero, 3
    ctx->pc = 0x27cf34u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_27cf38:
    // 0x27cf38: 0x0  nop
    ctx->pc = 0x27cf38u;
    // NOP
label_27cf3c:
    // 0x27cf3c: 0x0  nop
    ctx->pc = 0x27cf3cu;
    // NOP
label_27cf40:
    // 0x27cf40: 0x1419e  .word       0x0001419E                   # ddiv        $t0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27CF40 raw=0x0001419E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cf44:
    // 0x27cf44: 0x9a50  .word       0x00009A50                   # mfhi        $s3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf44u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27cf48:
    // 0x27cf48: 0x0  nop
    ctx->pc = 0x27cf48u;
    // NOP
label_27cf4c:
    // 0x27cf4c: 0x0  nop
    ctx->pc = 0x27cf4cu;
    // NOP
label_27cf50:
    // 0x27cf50: 0x141b2  tlt         $zero, $at, 262
    ctx->pc = 0x27cf50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27cf54:
    // 0x27cf54: 0x8bb0  tge         $zero, $zero, 558
    ctx->pc = 0x27cf54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cf58:
    // 0x27cf58: 0x0  nop
    ctx->pc = 0x27cf58u;
    // NOP
label_27cf5c:
    // 0x27cf5c: 0x0  nop
    ctx->pc = 0x27cf5cu;
    // NOP
label_27cf60:
    // 0x27cf60: 0x141c4  .word       0x000141C4                   # sllv        $t0, $at, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27cf64:
    // 0x27cf64: 0x99d0  .word       0x000099D0                   # mfhi        $s3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf64u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27cf68:
    // 0x27cf68: 0x0  nop
    ctx->pc = 0x27cf68u;
    // NOP
label_27cf6c:
    // 0x27cf6c: 0x0  nop
    ctx->pc = 0x27cf6cu;
    // NOP
label_27cf70:
    // 0x27cf70: 0x141d8  .word       0x000141D8                   # mult        $t0, $zero, $at # 000001C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27cf70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_27cf74:
    // 0x27cf74: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x27cf74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cf78:
    // 0x27cf78: 0x0  nop
    ctx->pc = 0x27cf78u;
    // NOP
label_27cf7c:
    // 0x27cf7c: 0x0  nop
    ctx->pc = 0x27cf7cu;
    // NOP
label_27cf80:
    // 0x27cf80: 0x141e6  .word       0x000141E6                   # xor         $t0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27cf84:
    // 0x27cf84: 0xa230  tge         $zero, $zero, 648
    ctx->pc = 0x27cf84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cf88:
    // 0x27cf88: 0x0  nop
    ctx->pc = 0x27cf88u;
    // NOP
label_27cf8c:
    // 0x27cf8c: 0x0  nop
    ctx->pc = 0x27cf8cu;
    // NOP
label_27cf90:
    // 0x27cf90: 0x141fb  dsra        $t0, $at, 7
    ctx->pc = 0x27cf90u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 7);
label_27cf94:
    // 0x27cf94: 0x5b50  .word       0x00005B50                   # mfhi        $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cf94u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27cf98:
    // 0x27cf98: 0x0  nop
    ctx->pc = 0x27cf98u;
    // NOP
label_27cf9c:
    // 0x27cf9c: 0x0  nop
    ctx->pc = 0x27cf9cu;
    // NOP
label_27cfa0:
    // 0x27cfa0: 0x14207  .word       0x00014207                   # srav        $t0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfa0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27cfa4:
    // 0x27cfa4: 0xab60  .word       0x0000AB60                   # add         $s5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27cfa8:
    // 0x27cfa8: 0x0  nop
    ctx->pc = 0x27cfa8u;
    // NOP
label_27cfac:
    // 0x27cfac: 0x0  nop
    ctx->pc = 0x27cfacu;
    // NOP
label_27cfb0:
    // 0x27cfb0: 0x1421d  .word       0x0001421D                   # dmultu      $zero, $at # 00004200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27CFB0 raw=0x0001421D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cfb4:
    // 0x27cfb4: 0xbb90  .word       0x0000BB90                   # mfhi        $s7 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfb4u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27cfb8:
    // 0x27cfb8: 0x0  nop
    ctx->pc = 0x27cfb8u;
    // NOP
label_27cfbc:
    // 0x27cfbc: 0x0  nop
    ctx->pc = 0x27cfbcu;
    // NOP
label_27cfc0:
    // 0x27cfc0: 0x14235  .word       0x00014235                   # INVALID     $zero, $at, 0x4235 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27CFC0 raw=0x00014235"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27cfc4:
    // 0x27cfc4: 0xadc0  sll         $s5, $zero, 23
    ctx->pc = 0x27cfc4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27cfc8:
    // 0x27cfc8: 0x0  nop
    ctx->pc = 0x27cfc8u;
    // NOP
label_27cfcc:
    // 0x27cfcc: 0x0  nop
    ctx->pc = 0x27cfccu;
    // NOP
label_27cfd0:
    // 0x27cfd0: 0x1424b  .word       0x0001424B                   # movn        $t0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfd0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_27cfd4:
    // 0x27cfd4: 0xca20  .word       0x0000CA20                   # add         $t9, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_27cfd8:
    // 0x27cfd8: 0x0  nop
    ctx->pc = 0x27cfd8u;
    // NOP
label_27cfdc:
    // 0x27cfdc: 0x0  nop
    ctx->pc = 0x27cfdcu;
    // NOP
label_27cfe0:
    // 0x27cfe0: 0x14265  .word       0x00014265                   # or          $t0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27cfe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27cfe4:
    // 0x27cfe4: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x27cfe4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27cfe8:
    // 0x27cfe8: 0x0  nop
    ctx->pc = 0x27cfe8u;
    // NOP
label_27cfec:
    // 0x27cfec: 0x0  nop
    ctx->pc = 0x27cfecu;
    // NOP
label_27cff0:
    // 0x27cff0: 0x14273  tltu        $zero, $at, 265
    ctx->pc = 0x27cff0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27cff4:
    // 0x27cff4: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x27cff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27cff8:
    // 0x27cff8: 0x0  nop
    ctx->pc = 0x27cff8u;
    // NOP
label_27cffc:
    // 0x27cffc: 0x0  nop
    ctx->pc = 0x27cffcu;
    // NOP
label_27d000:
    // 0x27d000: 0x14284  .word       0x00014284                   # sllv        $t0, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d000u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d004:
    // 0x27d004: 0x8c60  .word       0x00008C60                   # add         $s1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27d008:
    // 0x27d008: 0x0  nop
    ctx->pc = 0x27d008u;
    // NOP
label_27d00c:
    // 0x27d00c: 0x0  nop
    ctx->pc = 0x27d00cu;
    // NOP
label_27d010:
    // 0x27d010: 0x14296  .word       0x00014296                   # dsrlv       $t0, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d010u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27d014:
    // 0x27d014: 0xb350  .word       0x0000B350                   # mfhi        $s6 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d014u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27d018:
    // 0x27d018: 0x0  nop
    ctx->pc = 0x27d018u;
    // NOP
label_27d01c:
    // 0x27d01c: 0x0  nop
    ctx->pc = 0x27d01cu;
    // NOP
label_27d020:
    // 0x27d020: 0x142ad  .word       0x000142AD                   # daddu       $t0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d020u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27d024:
    // 0x27d024: 0xb170  tge         $zero, $zero, 709
    ctx->pc = 0x27d024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d028:
    // 0x27d028: 0x0  nop
    ctx->pc = 0x27d028u;
    // NOP
label_27d02c:
    // 0x27d02c: 0x0  nop
    ctx->pc = 0x27d02cu;
    // NOP
label_27d030:
    // 0x27d030: 0x142c4  .word       0x000142C4                   # sllv        $t0, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d030u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d034:
    // 0x27d034: 0xac30  tge         $zero, $zero, 688
    ctx->pc = 0x27d034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d038:
    // 0x27d038: 0x0  nop
    ctx->pc = 0x27d038u;
    // NOP
label_27d03c:
    // 0x27d03c: 0x0  nop
    ctx->pc = 0x27d03cu;
    // NOP
label_27d040:
    // 0x27d040: 0x142da  .word       0x000142DA                   # div         $t0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d040u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27d044:
    // 0x27d044: 0x8a50  .word       0x00008A50                   # mfhi        $s1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d044u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27d048:
    // 0x27d048: 0x0  nop
    ctx->pc = 0x27d048u;
    // NOP
label_27d04c:
    // 0x27d04c: 0x0  nop
    ctx->pc = 0x27d04cu;
    // NOP
label_27d050:
    // 0x27d050: 0x142ec  .word       0x000142EC                   # dadd        $t0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d050u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_27d054:
    // 0x27d054: 0x7b90  .word       0x00007B90                   # mfhi        $t7 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d054u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27d058:
    // 0x27d058: 0x0  nop
    ctx->pc = 0x27d058u;
    // NOP
label_27d05c:
    // 0x27d05c: 0x0  nop
    ctx->pc = 0x27d05cu;
    // NOP
label_27d060:
    // 0x27d060: 0x142fc  dsll32      $t0, $at, 11
    ctx->pc = 0x27d060u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << (32 + 11));
label_27d064:
    // 0x27d064: 0x3a20  .word       0x00003A20                   # add         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27d068:
    // 0x27d068: 0x0  nop
    ctx->pc = 0x27d068u;
    // NOP
label_27d06c:
    // 0x27d06c: 0x0  nop
    ctx->pc = 0x27d06cu;
    // NOP
label_27d070:
    // 0x27d070: 0x14304  .word       0x00014304                   # sllv        $t0, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d070u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27d074:
    // 0x27d074: 0x8010  mfhi        $s0
    ctx->pc = 0x27d074u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27d078:
    // 0x27d078: 0x0  nop
    ctx->pc = 0x27d078u;
    // NOP
label_27d07c:
    // 0x27d07c: 0x0  nop
    ctx->pc = 0x27d07cu;
    // NOP
label_27d080:
    // 0x27d080: 0x14315  .word       0x00014315                   # INVALID     $zero, $at, 0x4315 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d080u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D080 raw=0x00014315"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d084:
    // 0x27d084: 0x6a00  sll         $t5, $zero, 8
    ctx->pc = 0x27d084u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_27d088:
    // 0x27d088: 0x0  nop
    ctx->pc = 0x27d088u;
    // NOP
label_27d08c:
    // 0x27d08c: 0x0  nop
    ctx->pc = 0x27d08cu;
    // NOP
label_27d090:
    // 0x27d090: 0x14323  .word       0x00014323                   # negu        $t0, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d090u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27d094:
    // 0x27d094: 0xbdf0  tge         $zero, $zero, 759
    ctx->pc = 0x27d094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d098:
    // 0x27d098: 0x0  nop
    ctx->pc = 0x27d098u;
    // NOP
label_27d09c:
    // 0x27d09c: 0x0  nop
    ctx->pc = 0x27d09cu;
    // NOP
label_27d0a0:
    // 0x27d0a0: 0x1433b  dsra        $t0, $at, 12
    ctx->pc = 0x27d0a0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 12);
label_27d0a4:
    // 0x27d0a4: 0x81b0  tge         $zero, $zero, 518
    ctx->pc = 0x27d0a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d0a8:
    // 0x27d0a8: 0x0  nop
    ctx->pc = 0x27d0a8u;
    // NOP
label_27d0ac:
    // 0x27d0ac: 0x0  nop
    ctx->pc = 0x27d0acu;
    // NOP
label_27d0b0:
    // 0x27d0b0: 0x1434c  .word       0x0001434C                   # syscall     269 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0b0u;
    ctx->pc = 0x27D0B4u;
runtime->handleSyscall(rdram, ctx, 0x50Du);
label_27d0b4:
    // 0x27d0b4: 0x10890  .word       0x00010890                   # mfhi        $at # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0b4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_27d0b8:
    // 0x27d0b8: 0x0  nop
    ctx->pc = 0x27d0b8u;
    // NOP
label_27d0bc:
    // 0x27d0bc: 0x0  nop
    ctx->pc = 0x27d0bcu;
    // NOP
label_27d0c0:
    // 0x27d0c0: 0x1436e  .word       0x0001436E                   # dsub        $t0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0c0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_27d0c4:
    // 0x27d0c4: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x27d0c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27d0c8:
    // 0x27d0c8: 0x0  nop
    ctx->pc = 0x27d0c8u;
    // NOP
label_27d0cc:
    // 0x27d0cc: 0x0  nop
    ctx->pc = 0x27d0ccu;
    // NOP
label_27d0d0:
    // 0x27d0d0: 0x1437b  dsra        $t0, $at, 13
    ctx->pc = 0x27d0d0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 13);
label_27d0d4:
    // 0x27d0d4: 0x7430  tge         $zero, $zero, 464
    ctx->pc = 0x27d0d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d0d8:
    // 0x27d0d8: 0x0  nop
    ctx->pc = 0x27d0d8u;
    // NOP
label_27d0dc:
    // 0x27d0dc: 0x0  nop
    ctx->pc = 0x27d0dcu;
    // NOP
label_27d0e0:
    // 0x27d0e0: 0x1438a  .word       0x0001438A                   # movz        $t0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0e0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_27d0e4:
    // 0x27d0e4: 0x9710  .word       0x00009710                   # mfhi        $s2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0e4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27d0e8:
    // 0x27d0e8: 0x0  nop
    ctx->pc = 0x27d0e8u;
    // NOP
label_27d0ec:
    // 0x27d0ec: 0x0  nop
    ctx->pc = 0x27d0ecu;
    // NOP
label_27d0f0:
    // 0x27d0f0: 0x1439d  .word       0x0001439D                   # dmultu      $zero, $at # 00004380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D0F0 raw=0x0001439D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d0f4:
    // 0x27d0f4: 0xa360  .word       0x0000A360                   # add         $s4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27d0f8:
    // 0x27d0f8: 0x0  nop
    ctx->pc = 0x27d0f8u;
    // NOP
label_27d0fc:
    // 0x27d0fc: 0x0  nop
    ctx->pc = 0x27d0fcu;
    // NOP
label_27d100:
    // 0x27d100: 0x143b2  tlt         $zero, $at, 270
    ctx->pc = 0x27d100u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d104:
    // 0x27d104: 0x7e50  .word       0x00007E50                   # mfhi        $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d104u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27d108:
    // 0x27d108: 0x0  nop
    ctx->pc = 0x27d108u;
    // NOP
label_27d10c:
    // 0x27d10c: 0x0  nop
    ctx->pc = 0x27d10cu;
    // NOP
label_27d110:
    // 0x27d110: 0x143c2  srl         $t0, $at, 15
    ctx->pc = 0x27d110u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 15));
label_27d114:
    // 0x27d114: 0xa810  mfhi        $s5
    ctx->pc = 0x27d114u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27d118:
    // 0x27d118: 0x0  nop
    ctx->pc = 0x27d118u;
    // NOP
label_27d11c:
    // 0x27d11c: 0x0  nop
    ctx->pc = 0x27d11cu;
    // NOP
label_27d120:
    // 0x27d120: 0x143d8  .word       0x000143D8                   # mult        $t0, $zero, $at # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27d120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_27d124:
    // 0x27d124: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x27d124u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_27d128:
    // 0x27d128: 0x0  nop
    ctx->pc = 0x27d128u;
    // NOP
label_27d12c:
    // 0x27d12c: 0x0  nop
    ctx->pc = 0x27d12cu;
    // NOP
label_27d130:
    // 0x27d130: 0x143ea  .word       0x000143EA                   # slt         $t0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d130u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27d134:
    // 0x27d134: 0x7610  .word       0x00007610                   # mfhi        $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d134u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27d138:
    // 0x27d138: 0x0  nop
    ctx->pc = 0x27d138u;
    // NOP
label_27d13c:
    // 0x27d13c: 0x0  nop
    ctx->pc = 0x27d13cu;
    // NOP
label_27d140:
    // 0x27d140: 0x143f9  .word       0x000143F9                   # INVALID     $zero, $at, 0x43F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27D140 raw=0x000143F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d144:
    // 0x27d144: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x27d144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d148:
    // 0x27d148: 0x0  nop
    ctx->pc = 0x27d148u;
    // NOP
label_27d14c:
    // 0x27d14c: 0x0  nop
    ctx->pc = 0x27d14cu;
    // NOP
label_27d150:
    // 0x27d150: 0x1440e  .word       0x0001440E                   # INVALID     $zero, $at, 0x440E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27D150 raw=0x0001440E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d154:
    // 0x27d154: 0x5270  tge         $zero, $zero, 329
    ctx->pc = 0x27d154u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d158:
    // 0x27d158: 0x0  nop
    ctx->pc = 0x27d158u;
    // NOP
label_27d15c:
    // 0x27d15c: 0x0  nop
    ctx->pc = 0x27d15cu;
    // NOP
label_27d160:
    // 0x27d160: 0x14419  .word       0x00014419                   # multu       $zero, $at # 00004400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d160u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_27d164:
    // 0x27d164: 0x5b40  sll         $t3, $zero, 13
    ctx->pc = 0x27d164u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27d168:
    // 0x27d168: 0x0  nop
    ctx->pc = 0x27d168u;
    // NOP
label_27d16c:
    // 0x27d16c: 0x0  nop
    ctx->pc = 0x27d16cu;
    // NOP
label_27d170:
    // 0x27d170: 0x14425  .word       0x00014425                   # or          $t0, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d170u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27d174:
    // 0x27d174: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x27d174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d178:
    // 0x27d178: 0x0  nop
    ctx->pc = 0x27d178u;
    // NOP
label_27d17c:
    // 0x27d17c: 0x0  nop
    ctx->pc = 0x27d17cu;
    // NOP
label_27d180:
    // 0x27d180: 0x14436  tne         $zero, $at, 272
    ctx->pc = 0x27d180u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27d184:
    // 0x27d184: 0xb300  sll         $s6, $zero, 12
    ctx->pc = 0x27d184u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27d188:
    // 0x27d188: 0x0  nop
    ctx->pc = 0x27d188u;
    // NOP
label_27d18c:
    // 0x27d18c: 0x0  nop
    ctx->pc = 0x27d18cu;
    // NOP
label_27d190:
    // 0x27d190: 0x1444d  break       1, 273
    ctx->pc = 0x27d190u;
    runtime->handleBreak(rdram, ctx);
label_27d194:
    // 0x27d194: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x27d194u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27d198:
    // 0x27d198: 0x0  nop
    ctx->pc = 0x27d198u;
    // NOP
label_27d19c:
    // 0x27d19c: 0x0  nop
    ctx->pc = 0x27d19cu;
    // NOP
label_27d1a0:
    // 0x27d1a0: 0x1445d  .word       0x0001445D                   # dmultu      $zero, $at # 00004440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D1A0 raw=0x0001445D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d1a4:
    // 0x27d1a4: 0x68d0  .word       0x000068D0                   # mfhi        $t5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1a4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27d1a8:
    // 0x27d1a8: 0x0  nop
    ctx->pc = 0x27d1a8u;
    // NOP
label_27d1ac:
    // 0x27d1ac: 0x0  nop
    ctx->pc = 0x27d1acu;
    // NOP
label_27d1b0:
    // 0x27d1b0: 0x1446b  .word       0x0001446B                   # sltu        $t0, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1b0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27d1b4:
    // 0x27d1b4: 0x93d0  .word       0x000093D0                   # mfhi        $s2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27d1b8:
    // 0x27d1b8: 0x0  nop
    ctx->pc = 0x27d1b8u;
    // NOP
label_27d1bc:
    // 0x27d1bc: 0x0  nop
    ctx->pc = 0x27d1bcu;
    // NOP
label_27d1c0:
    // 0x27d1c0: 0x1447e  dsrl32      $t0, $at, 17
    ctx->pc = 0x27d1c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) >> (32 + 17));
label_27d1c4:
    // 0x27d1c4: 0xb530  tge         $zero, $zero, 724
    ctx->pc = 0x27d1c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d1c8:
    // 0x27d1c8: 0x0  nop
    ctx->pc = 0x27d1c8u;
    // NOP
label_27d1cc:
    // 0x27d1cc: 0x0  nop
    ctx->pc = 0x27d1ccu;
    // NOP
label_27d1d0:
    // 0x27d1d0: 0x14495  .word       0x00014495                   # INVALID     $zero, $at, 0x4495 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D1D0 raw=0x00014495"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d1d4:
    // 0x27d1d4: 0xaf30  tge         $zero, $zero, 700
    ctx->pc = 0x27d1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27d1d8:
    // 0x27d1d8: 0x0  nop
    ctx->pc = 0x27d1d8u;
    // NOP
label_27d1dc:
    // 0x27d1dc: 0x0  nop
    ctx->pc = 0x27d1dcu;
    // NOP
label_27d1e0:
    // 0x27d1e0: 0x144ab  .word       0x000144AB                   # sltu        $t0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1e0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27d1e4:
    // 0x27d1e4: 0x7ca0  .word       0x00007CA0                   # add         $t7, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27d1e8:
    // 0x27d1e8: 0x0  nop
    ctx->pc = 0x27d1e8u;
    // NOP
label_27d1ec:
    // 0x27d1ec: 0x0  nop
    ctx->pc = 0x27d1ecu;
    // NOP
label_27d1f0:
    // 0x27d1f0: 0x144bb  dsra        $t0, $at, 18
    ctx->pc = 0x27d1f0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 18);
label_27d1f4:
    // 0x27d1f4: 0x9f60  .word       0x00009F60                   # add         $s3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27d1f8:
    // 0x27d1f8: 0x0  nop
    ctx->pc = 0x27d1f8u;
    // NOP
label_27d1fc:
    // 0x27d1fc: 0x0  nop
    ctx->pc = 0x27d1fcu;
    // NOP
label_27d200:
    // 0x27d200: 0x144cf  .word       0x000144CF                   # sync.p # 00014000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d200u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27d204:
    // 0x27d204: 0x6de0  .word       0x00006DE0                   # add         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27d208:
    // 0x27d208: 0x0  nop
    ctx->pc = 0x27d208u;
    // NOP
label_27d20c:
    // 0x27d20c: 0x0  nop
    ctx->pc = 0x27d20cu;
    // NOP
label_27d210:
    // 0x27d210: 0x144dd  .word       0x000144DD                   # dmultu      $zero, $at # 000044C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D210 raw=0x000144DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27d214:
    // 0x27d214: 0x6340  sll         $t4, $zero, 13
    ctx->pc = 0x27d214u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27d218:
    // 0x27d218: 0x0  nop
    ctx->pc = 0x27d218u;
    // NOP
label_27d21c:
    // 0x27d21c: 0x0  nop
    ctx->pc = 0x27d21cu;
    // NOP
label_27d220:
    // 0x27d220: 0x144ea  .word       0x000144EA                   # slt         $t0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d220u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27d224:
    // 0x27d224: 0xca80  sll         $t9, $zero, 10
    ctx->pc = 0x27d224u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27d228:
    // 0x27d228: 0x0  nop
    ctx->pc = 0x27d228u;
    // NOP
label_27d22c:
    // 0x27d22c: 0x0  nop
    ctx->pc = 0x27d22cu;
    // NOP
    ctx->pc = 0x27d230u;
    return;
}

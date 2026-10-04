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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28ac10u: goto label_28ac10;
        case 0x28ac14u: goto label_28ac14;
        case 0x28ac18u: goto label_28ac18;
        case 0x28ac1cu: goto label_28ac1c;
        case 0x28ac20u: goto label_28ac20;
        case 0x28ac24u: goto label_28ac24;
        case 0x28ac28u: goto label_28ac28;
        case 0x28ac2cu: goto label_28ac2c;
        case 0x28ac30u: goto label_28ac30;
        case 0x28ac34u: goto label_28ac34;
        case 0x28ac38u: goto label_28ac38;
        case 0x28ac3cu: goto label_28ac3c;
        case 0x28ac40u: goto label_28ac40;
        case 0x28ac44u: goto label_28ac44;
        case 0x28ac48u: goto label_28ac48;
        case 0x28ac4cu: goto label_28ac4c;
        case 0x28ac50u: goto label_28ac50;
        case 0x28ac54u: goto label_28ac54;
        case 0x28ac58u: goto label_28ac58;
        case 0x28ac5cu: goto label_28ac5c;
        case 0x28ac60u: goto label_28ac60;
        case 0x28ac64u: goto label_28ac64;
        case 0x28ac68u: goto label_28ac68;
        case 0x28ac6cu: goto label_28ac6c;
        case 0x28ac70u: goto label_28ac70;
        case 0x28ac74u: goto label_28ac74;
        case 0x28ac78u: goto label_28ac78;
        case 0x28ac7cu: goto label_28ac7c;
        case 0x28ac80u: goto label_28ac80;
        case 0x28ac84u: goto label_28ac84;
        case 0x28ac88u: goto label_28ac88;
        case 0x28ac8cu: goto label_28ac8c;
        case 0x28ac90u: goto label_28ac90;
        case 0x28ac94u: goto label_28ac94;
        case 0x28ac98u: goto label_28ac98;
        case 0x28ac9cu: goto label_28ac9c;
        case 0x28aca0u: goto label_28aca0;
        case 0x28aca4u: goto label_28aca4;
        case 0x28aca8u: goto label_28aca8;
        case 0x28acacu: goto label_28acac;
        case 0x28acb0u: goto label_28acb0;
        case 0x28acb4u: goto label_28acb4;
        case 0x28acb8u: goto label_28acb8;
        case 0x28acbcu: goto label_28acbc;
        case 0x28acc0u: goto label_28acc0;
        case 0x28acc4u: goto label_28acc4;
        case 0x28acc8u: goto label_28acc8;
        case 0x28acccu: goto label_28accc;
        case 0x28acd0u: goto label_28acd0;
        case 0x28acd4u: goto label_28acd4;
        case 0x28acd8u: goto label_28acd8;
        case 0x28acdcu: goto label_28acdc;
        case 0x28ace0u: goto label_28ace0;
        case 0x28ace4u: goto label_28ace4;
        case 0x28ace8u: goto label_28ace8;
        case 0x28acecu: goto label_28acec;
        case 0x28acf0u: goto label_28acf0;
        case 0x28acf4u: goto label_28acf4;
        case 0x28acf8u: goto label_28acf8;
        case 0x28acfcu: goto label_28acfc;
        case 0x28ad00u: goto label_28ad00;
        case 0x28ad04u: goto label_28ad04;
        case 0x28ad08u: goto label_28ad08;
        case 0x28ad0cu: goto label_28ad0c;
        case 0x28ad10u: goto label_28ad10;
        case 0x28ad14u: goto label_28ad14;
        case 0x28ad18u: goto label_28ad18;
        case 0x28ad1cu: goto label_28ad1c;
        case 0x28ad20u: goto label_28ad20;
        case 0x28ad24u: goto label_28ad24;
        case 0x28ad28u: goto label_28ad28;
        case 0x28ad2cu: goto label_28ad2c;
        case 0x28ad30u: goto label_28ad30;
        case 0x28ad34u: goto label_28ad34;
        case 0x28ad38u: goto label_28ad38;
        case 0x28ad3cu: goto label_28ad3c;
        case 0x28ad40u: goto label_28ad40;
        case 0x28ad44u: goto label_28ad44;
        case 0x28ad48u: goto label_28ad48;
        case 0x28ad4cu: goto label_28ad4c;
        case 0x28ad50u: goto label_28ad50;
        case 0x28ad54u: goto label_28ad54;
        case 0x28ad58u: goto label_28ad58;
        case 0x28ad5cu: goto label_28ad5c;
        case 0x28ad60u: goto label_28ad60;
        case 0x28ad64u: goto label_28ad64;
        case 0x28ad68u: goto label_28ad68;
        case 0x28ad6cu: goto label_28ad6c;
        case 0x28ad70u: goto label_28ad70;
        case 0x28ad74u: goto label_28ad74;
        case 0x28ad78u: goto label_28ad78;
        case 0x28ad7cu: goto label_28ad7c;
        case 0x28ad80u: goto label_28ad80;
        case 0x28ad84u: goto label_28ad84;
        case 0x28ad88u: goto label_28ad88;
        case 0x28ad8cu: goto label_28ad8c;
        case 0x28ad90u: goto label_28ad90;
        case 0x28ad94u: goto label_28ad94;
        case 0x28ad98u: goto label_28ad98;
        case 0x28ad9cu: goto label_28ad9c;
        case 0x28ada0u: goto label_28ada0;
        case 0x28ada4u: goto label_28ada4;
        case 0x28ada8u: goto label_28ada8;
        case 0x28adacu: goto label_28adac;
        case 0x28adb0u: goto label_28adb0;
        case 0x28adb4u: goto label_28adb4;
        case 0x28adb8u: goto label_28adb8;
        case 0x28adbcu: goto label_28adbc;
        case 0x28adc0u: goto label_28adc0;
        case 0x28adc4u: goto label_28adc4;
        case 0x28adc8u: goto label_28adc8;
        case 0x28adccu: goto label_28adcc;
        case 0x28add0u: goto label_28add0;
        case 0x28add4u: goto label_28add4;
        case 0x28add8u: goto label_28add8;
        case 0x28addcu: goto label_28addc;
        case 0x28ade0u: goto label_28ade0;
        case 0x28ade4u: goto label_28ade4;
        case 0x28ade8u: goto label_28ade8;
        case 0x28adecu: goto label_28adec;
        case 0x28adf0u: goto label_28adf0;
        case 0x28adf4u: goto label_28adf4;
        case 0x28adf8u: goto label_28adf8;
        case 0x28adfcu: goto label_28adfc;
        case 0x28ae00u: goto label_28ae00;
        case 0x28ae04u: goto label_28ae04;
        case 0x28ae08u: goto label_28ae08;
        case 0x28ae0cu: goto label_28ae0c;
        case 0x28ae10u: goto label_28ae10;
        case 0x28ae14u: goto label_28ae14;
        case 0x28ae18u: goto label_28ae18;
        case 0x28ae1cu: goto label_28ae1c;
        case 0x28ae20u: goto label_28ae20;
        case 0x28ae24u: goto label_28ae24;
        case 0x28ae28u: goto label_28ae28;
        case 0x28ae2cu: goto label_28ae2c;
        case 0x28ae30u: goto label_28ae30;
        case 0x28ae34u: goto label_28ae34;
        case 0x28ae38u: goto label_28ae38;
        case 0x28ae3cu: goto label_28ae3c;
        case 0x28ae40u: goto label_28ae40;
        case 0x28ae44u: goto label_28ae44;
        case 0x28ae48u: goto label_28ae48;
        case 0x28ae4cu: goto label_28ae4c;
        case 0x28ae50u: goto label_28ae50;
        case 0x28ae54u: goto label_28ae54;
        case 0x28ae58u: goto label_28ae58;
        case 0x28ae5cu: goto label_28ae5c;
        case 0x28ae60u: goto label_28ae60;
        case 0x28ae64u: goto label_28ae64;
        case 0x28ae68u: goto label_28ae68;
        case 0x28ae6cu: goto label_28ae6c;
        case 0x28ae70u: goto label_28ae70;
        case 0x28ae74u: goto label_28ae74;
        case 0x28ae78u: goto label_28ae78;
        case 0x28ae7cu: goto label_28ae7c;
        case 0x28ae80u: goto label_28ae80;
        case 0x28ae84u: goto label_28ae84;
        case 0x28ae88u: goto label_28ae88;
        case 0x28ae8cu: goto label_28ae8c;
        case 0x28ae90u: goto label_28ae90;
        case 0x28ae94u: goto label_28ae94;
        case 0x28ae98u: goto label_28ae98;
        case 0x28ae9cu: goto label_28ae9c;
        case 0x28aea0u: goto label_28aea0;
        case 0x28aea4u: goto label_28aea4;
        case 0x28aea8u: goto label_28aea8;
        case 0x28aeacu: goto label_28aeac;
        case 0x28aeb0u: goto label_28aeb0;
        case 0x28aeb4u: goto label_28aeb4;
        case 0x28aeb8u: goto label_28aeb8;
        case 0x28aebcu: goto label_28aebc;
        case 0x28aec0u: goto label_28aec0;
        case 0x28aec4u: goto label_28aec4;
        case 0x28aec8u: goto label_28aec8;
        case 0x28aeccu: goto label_28aecc;
        case 0x28aed0u: goto label_28aed0;
        case 0x28aed4u: goto label_28aed4;
        case 0x28aed8u: goto label_28aed8;
        case 0x28aedcu: goto label_28aedc;
        case 0x28aee0u: goto label_28aee0;
        case 0x28aee4u: goto label_28aee4;
        case 0x28aee8u: goto label_28aee8;
        case 0x28aeecu: goto label_28aeec;
        case 0x28aef0u: goto label_28aef0;
        case 0x28aef4u: goto label_28aef4;
        case 0x28aef8u: goto label_28aef8;
        case 0x28aefcu: goto label_28aefc;
        case 0x28af00u: goto label_28af00;
        case 0x28af04u: goto label_28af04;
        case 0x28af08u: goto label_28af08;
        case 0x28af0cu: goto label_28af0c;
        case 0x28af10u: goto label_28af10;
        case 0x28af14u: goto label_28af14;
        case 0x28af18u: goto label_28af18;
        case 0x28af1cu: goto label_28af1c;
        case 0x28af20u: goto label_28af20;
        case 0x28af24u: goto label_28af24;
        case 0x28af28u: goto label_28af28;
        case 0x28af2cu: goto label_28af2c;
        case 0x28af30u: goto label_28af30;
        case 0x28af34u: goto label_28af34;
        case 0x28af38u: goto label_28af38;
        case 0x28af3cu: goto label_28af3c;
        case 0x28af40u: goto label_28af40;
        case 0x28af44u: goto label_28af44;
        case 0x28af48u: goto label_28af48;
        case 0x28af4cu: goto label_28af4c;
        case 0x28af50u: goto label_28af50;
        case 0x28af54u: goto label_28af54;
        case 0x28af58u: goto label_28af58;
        case 0x28af5cu: goto label_28af5c;
        case 0x28af60u: goto label_28af60;
        case 0x28af64u: goto label_28af64;
        case 0x28af68u: goto label_28af68;
        case 0x28af6cu: goto label_28af6c;
        case 0x28af70u: goto label_28af70;
        case 0x28af74u: goto label_28af74;
        case 0x28af78u: goto label_28af78;
        case 0x28af7cu: goto label_28af7c;
        case 0x28af80u: goto label_28af80;
        case 0x28af84u: goto label_28af84;
        case 0x28af88u: goto label_28af88;
        case 0x28af8cu: goto label_28af8c;
        case 0x28af90u: goto label_28af90;
        case 0x28af94u: goto label_28af94;
        case 0x28af98u: goto label_28af98;
        case 0x28af9cu: goto label_28af9c;
        case 0x28afa0u: goto label_28afa0;
        case 0x28afa4u: goto label_28afa4;
        case 0x28afa8u: goto label_28afa8;
        case 0x28afacu: goto label_28afac;
        case 0x28afb0u: goto label_28afb0;
        case 0x28afb4u: goto label_28afb4;
        case 0x28afb8u: goto label_28afb8;
        case 0x28afbcu: goto label_28afbc;
        case 0x28afc0u: goto label_28afc0;
        case 0x28afc4u: goto label_28afc4;
        case 0x28afc8u: goto label_28afc8;
        case 0x28afccu: goto label_28afcc;
        case 0x28afd0u: goto label_28afd0;
        case 0x28afd4u: goto label_28afd4;
        case 0x28afd8u: goto label_28afd8;
        case 0x28afdcu: goto label_28afdc;
        case 0x28afe0u: goto label_28afe0;
        case 0x28afe4u: goto label_28afe4;
        case 0x28afe8u: goto label_28afe8;
        case 0x28afecu: goto label_28afec;
        case 0x28aff0u: goto label_28aff0;
        case 0x28aff4u: goto label_28aff4;
        case 0x28aff8u: goto label_28aff8;
        case 0x28affcu: goto label_28affc;
        case 0x28b000u: goto label_28b000;
        case 0x28b004u: goto label_28b004;
        case 0x28b008u: goto label_28b008;
        case 0x28b00cu: goto label_28b00c;
        case 0x28b010u: goto label_28b010;
        case 0x28b014u: goto label_28b014;
        case 0x28b018u: goto label_28b018;
        case 0x28b01cu: goto label_28b01c;
        case 0x28b020u: goto label_28b020;
        case 0x28b024u: goto label_28b024;
        case 0x28b028u: goto label_28b028;
        case 0x28b02cu: goto label_28b02c;
        case 0x28b030u: goto label_28b030;
        case 0x28b034u: goto label_28b034;
        case 0x28b038u: goto label_28b038;
        case 0x28b03cu: goto label_28b03c;
        case 0x28b040u: goto label_28b040;
        case 0x28b044u: goto label_28b044;
        case 0x28b048u: goto label_28b048;
        case 0x28b04cu: goto label_28b04c;
        case 0x28b050u: goto label_28b050;
        case 0x28b054u: goto label_28b054;
        case 0x28b058u: goto label_28b058;
        case 0x28b05cu: goto label_28b05c;
        case 0x28b060u: goto label_28b060;
        case 0x28b064u: goto label_28b064;
        case 0x28b068u: goto label_28b068;
        case 0x28b06cu: goto label_28b06c;
        case 0x28b070u: goto label_28b070;
        case 0x28b074u: goto label_28b074;
        case 0x28b078u: goto label_28b078;
        case 0x28b07cu: goto label_28b07c;
        case 0x28b080u: goto label_28b080;
        case 0x28b084u: goto label_28b084;
        case 0x28b088u: goto label_28b088;
        case 0x28b08cu: goto label_28b08c;
        case 0x28b090u: goto label_28b090;
        case 0x28b094u: goto label_28b094;
        case 0x28b098u: goto label_28b098;
        case 0x28b09cu: goto label_28b09c;
        case 0x28b0a0u: goto label_28b0a0;
        case 0x28b0a4u: goto label_28b0a4;
        case 0x28b0a8u: goto label_28b0a8;
        case 0x28b0acu: goto label_28b0ac;
        case 0x28b0b0u: goto label_28b0b0;
        case 0x28b0b4u: goto label_28b0b4;
        case 0x28b0b8u: goto label_28b0b8;
        case 0x28b0bcu: goto label_28b0bc;
        case 0x28b0c0u: goto label_28b0c0;
        case 0x28b0c4u: goto label_28b0c4;
        case 0x28b0c8u: goto label_28b0c8;
        case 0x28b0ccu: goto label_28b0cc;
        case 0x28b0d0u: goto label_28b0d0;
        case 0x28b0d4u: goto label_28b0d4;
        case 0x28b0d8u: goto label_28b0d8;
        case 0x28b0dcu: goto label_28b0dc;
        case 0x28b0e0u: goto label_28b0e0;
        case 0x28b0e4u: goto label_28b0e4;
        case 0x28b0e8u: goto label_28b0e8;
        case 0x28b0ecu: goto label_28b0ec;
        case 0x28b0f0u: goto label_28b0f0;
        case 0x28b0f4u: goto label_28b0f4;
        case 0x28b0f8u: goto label_28b0f8;
        case 0x28b0fcu: goto label_28b0fc;
        case 0x28b100u: goto label_28b100;
        case 0x28b104u: goto label_28b104;
        case 0x28b108u: goto label_28b108;
        case 0x28b10cu: goto label_28b10c;
        case 0x28b110u: goto label_28b110;
        case 0x28b114u: goto label_28b114;
        case 0x28b118u: goto label_28b118;
        case 0x28b11cu: goto label_28b11c;
        case 0x28b120u: goto label_28b120;
        case 0x28b124u: goto label_28b124;
        case 0x28b128u: goto label_28b128;
        case 0x28b12cu: goto label_28b12c;
        case 0x28b130u: goto label_28b130;
        case 0x28b134u: goto label_28b134;
        case 0x28b138u: goto label_28b138;
        case 0x28b13cu: goto label_28b13c;
        case 0x28b140u: goto label_28b140;
        case 0x28b144u: goto label_28b144;
        case 0x28b148u: goto label_28b148;
        case 0x28b14cu: goto label_28b14c;
        case 0x28b150u: goto label_28b150;
        case 0x28b154u: goto label_28b154;
        case 0x28b158u: goto label_28b158;
        case 0x28b15cu: goto label_28b15c;
        case 0x28b160u: goto label_28b160;
        case 0x28b164u: goto label_28b164;
        case 0x28b168u: goto label_28b168;
        case 0x28b16cu: goto label_28b16c;
        case 0x28b170u: goto label_28b170;
        case 0x28b174u: goto label_28b174;
        case 0x28b178u: goto label_28b178;
        case 0x28b17cu: goto label_28b17c;
        case 0x28b180u: goto label_28b180;
        case 0x28b184u: goto label_28b184;
        case 0x28b188u: goto label_28b188;
        case 0x28b18cu: goto label_28b18c;
        case 0x28b190u: goto label_28b190;
        case 0x28b194u: goto label_28b194;
        case 0x28b198u: goto label_28b198;
        case 0x28b19cu: goto label_28b19c;
        case 0x28b1a0u: goto label_28b1a0;
        case 0x28b1a4u: goto label_28b1a4;
        case 0x28b1a8u: goto label_28b1a8;
        case 0x28b1acu: goto label_28b1ac;
        case 0x28b1b0u: goto label_28b1b0;
        case 0x28b1b4u: goto label_28b1b4;
        case 0x28b1b8u: goto label_28b1b8;
        case 0x28b1bcu: goto label_28b1bc;
        case 0x28b1c0u: goto label_28b1c0;
        case 0x28b1c4u: goto label_28b1c4;
        case 0x28b1c8u: goto label_28b1c8;
        case 0x28b1ccu: goto label_28b1cc;
        case 0x28b1d0u: goto label_28b1d0;
        case 0x28b1d4u: goto label_28b1d4;
        case 0x28b1d8u: goto label_28b1d8;
        case 0x28b1dcu: goto label_28b1dc;
        case 0x28b1e0u: goto label_28b1e0;
        case 0x28b1e4u: goto label_28b1e4;
        case 0x28b1e8u: goto label_28b1e8;
        case 0x28b1ecu: goto label_28b1ec;
        case 0x28b1f0u: goto label_28b1f0;
        case 0x28b1f4u: goto label_28b1f4;
        case 0x28b1f8u: goto label_28b1f8;
        case 0x28b1fcu: goto label_28b1fc;
        case 0x28b200u: goto label_28b200;
        case 0x28b204u: goto label_28b204;
        case 0x28b208u: goto label_28b208;
        case 0x28b20cu: goto label_28b20c;
        case 0x28b210u: goto label_28b210;
        case 0x28b214u: goto label_28b214;
        case 0x28b218u: goto label_28b218;
        case 0x28b21cu: goto label_28b21c;
        case 0x28b220u: goto label_28b220;
        case 0x28b224u: goto label_28b224;
        case 0x28b228u: goto label_28b228;
        case 0x28b22cu: goto label_28b22c;
        case 0x28b230u: goto label_28b230;
        case 0x28b234u: goto label_28b234;
        case 0x28b238u: goto label_28b238;
        case 0x28b23cu: goto label_28b23c;
        case 0x28b240u: goto label_28b240;
        case 0x28b244u: goto label_28b244;
        case 0x28b248u: goto label_28b248;
        case 0x28b24cu: goto label_28b24c;
        case 0x28b250u: goto label_28b250;
        case 0x28b254u: goto label_28b254;
        case 0x28b258u: goto label_28b258;
        case 0x28b25cu: goto label_28b25c;
        case 0x28b260u: goto label_28b260;
        case 0x28b264u: goto label_28b264;
        case 0x28b268u: goto label_28b268;
        case 0x28b26cu: goto label_28b26c;
        case 0x28b270u: goto label_28b270;
        case 0x28b274u: goto label_28b274;
        case 0x28b278u: goto label_28b278;
        case 0x28b27cu: goto label_28b27c;
        case 0x28b280u: goto label_28b280;
        case 0x28b284u: goto label_28b284;
        case 0x28b288u: goto label_28b288;
        case 0x28b28cu: goto label_28b28c;
        case 0x28b290u: goto label_28b290;
        case 0x28b294u: goto label_28b294;
        case 0x28b298u: goto label_28b298;
        case 0x28b29cu: goto label_28b29c;
        case 0x28b2a0u: goto label_28b2a0;
        case 0x28b2a4u: goto label_28b2a4;
        case 0x28b2a8u: goto label_28b2a8;
        case 0x28b2acu: goto label_28b2ac;
        case 0x28b2b0u: goto label_28b2b0;
        case 0x28b2b4u: goto label_28b2b4;
        case 0x28b2b8u: goto label_28b2b8;
        case 0x28b2bcu: goto label_28b2bc;
        case 0x28b2c0u: goto label_28b2c0;
        case 0x28b2c4u: goto label_28b2c4;
        case 0x28b2c8u: goto label_28b2c8;
        case 0x28b2ccu: goto label_28b2cc;
        case 0x28b2d0u: goto label_28b2d0;
        case 0x28b2d4u: goto label_28b2d4;
        case 0x28b2d8u: goto label_28b2d8;
        case 0x28b2dcu: goto label_28b2dc;
        case 0x28b2e0u: goto label_28b2e0;
        case 0x28b2e4u: goto label_28b2e4;
        case 0x28b2e8u: goto label_28b2e8;
        case 0x28b2ecu: goto label_28b2ec;
        case 0x28b2f0u: goto label_28b2f0;
        case 0x28b2f4u: goto label_28b2f4;
        case 0x28b2f8u: goto label_28b2f8;
        case 0x28b2fcu: goto label_28b2fc;
        case 0x28b300u: goto label_28b300;
        case 0x28b304u: goto label_28b304;
        case 0x28b308u: goto label_28b308;
        case 0x28b30cu: goto label_28b30c;
        case 0x28b310u: goto label_28b310;
        case 0x28b314u: goto label_28b314;
        case 0x28b318u: goto label_28b318;
        case 0x28b31cu: goto label_28b31c;
        case 0x28b320u: goto label_28b320;
        case 0x28b324u: goto label_28b324;
        case 0x28b328u: goto label_28b328;
        case 0x28b32cu: goto label_28b32c;
        case 0x28b330u: goto label_28b330;
        case 0x28b334u: goto label_28b334;
        case 0x28b338u: goto label_28b338;
        case 0x28b33cu: goto label_28b33c;
        case 0x28b340u: goto label_28b340;
        case 0x28b344u: goto label_28b344;
        case 0x28b348u: goto label_28b348;
        case 0x28b34cu: goto label_28b34c;
        case 0x28b350u: goto label_28b350;
        case 0x28b354u: goto label_28b354;
        case 0x28b358u: goto label_28b358;
        case 0x28b35cu: goto label_28b35c;
        case 0x28b360u: goto label_28b360;
        case 0x28b364u: goto label_28b364;
        case 0x28b368u: goto label_28b368;
        case 0x28b36cu: goto label_28b36c;
        case 0x28b370u: goto label_28b370;
        case 0x28b374u: goto label_28b374;
        case 0x28b378u: goto label_28b378;
        case 0x28b37cu: goto label_28b37c;
        case 0x28b380u: goto label_28b380;
        case 0x28b384u: goto label_28b384;
        case 0x28b388u: goto label_28b388;
        case 0x28b38cu: goto label_28b38c;
        case 0x28b390u: goto label_28b390;
        case 0x28b394u: goto label_28b394;
        case 0x28b398u: goto label_28b398;
        case 0x28b39cu: goto label_28b39c;
        case 0x28b3a0u: goto label_28b3a0;
        case 0x28b3a4u: goto label_28b3a4;
        case 0x28b3a8u: goto label_28b3a8;
        case 0x28b3acu: goto label_28b3ac;
        case 0x28b3b0u: goto label_28b3b0;
        case 0x28b3b4u: goto label_28b3b4;
        case 0x28b3b8u: goto label_28b3b8;
        case 0x28b3bcu: goto label_28b3bc;
        case 0x28b3c0u: goto label_28b3c0;
        case 0x28b3c4u: goto label_28b3c4;
        case 0x28b3c8u: goto label_28b3c8;
        case 0x28b3ccu: goto label_28b3cc;
        case 0x28b3d0u: goto label_28b3d0;
        case 0x28b3d4u: goto label_28b3d4;
        case 0x28b3d8u: goto label_28b3d8;
        case 0x28b3dcu: goto label_28b3dc;
        default: return;
    }

label_28ac10:
    // 0x28ac10: 0x15044f02  bne         $t0, $a0, . + 4 + (0x4F02 << 2)
label_28ac14:
    if (ctx->pc == 0x28AC14u) {
        ctx->pc = 0x28AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC10u;
        // 0x28ac14: 0x140c3a05  bne         $zero, $t4, . + 4 + (0x3A05 << 2) (Delay Slot)
        // Likely branch instruction at 0x28AC14 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC18u;
        goto label_28ac18;
    }
    ctx->pc = 0x28AC10u;
    {
        const bool branch_taken_0x28ac10 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        ctx->pc = 0x28AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC10u;
        // 0x28ac14: 0x140c3a05  bne         $zero, $t4, . + 4 + (0x3A05 << 2) (Delay Slot)
        // Likely branch instruction at 0x28AC14 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac10) {
            ctx->pc = 0x29E81Cu;
            { ctx->pc = 0x29e81c; return; }
        }
    }
    ctx->pc = 0x28AC18u;
label_28ac18:
    // 0x28ac18: 0x9c9c0128  lwu         $gp, 0x128($a0)
    ctx->pc = 0x28ac18u;
    SET_GPR_ZE32(ctx, 28, READ32(ADD32(GPR_U32(ctx, 4), 296)));
label_28ac1c:
    // 0x28ac1c: 0x0  nop
    ctx->pc = 0x28ac1cu;
    // NOP
label_28ac20:
    // 0x28ac20: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x28ac20u;
    
label_28ac24:
    // 0x28ac24: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28ac24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28ac28:
    // 0x28ac28: 0x2b054403  slti        $a1, $t8, 0x4403
    ctx->pc = 0x28ac28u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)17411) ? 1 : 0);
label_28ac2c:
    // 0x28ac2c: 0x120a3709  beq         $s0, $t2, . + 4 + (0x3709 << 2)
label_28ac30:
    if (ctx->pc == 0x28AC30u) {
        ctx->pc = 0x28AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC2Cu;
        // 0x28ac30: 0x9d9d0f1a  lwu         $sp, 0xF1A($t4) (Delay Slot)
        SET_GPR_ZE32(ctx, 29, READ32(ADD32(GPR_U32(ctx, 12), 3866)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC34u;
        goto label_28ac34;
    }
    ctx->pc = 0x28AC2Cu;
    {
        const bool branch_taken_0x28ac2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x28AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC2Cu;
        // 0x28ac30: 0x9d9d0f1a  lwu         $sp, 0xF1A($t4) (Delay Slot)
        SET_GPR_ZE32(ctx, 29, READ32(ADD32(GPR_U32(ctx, 12), 3866)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac2c) {
            ctx->pc = 0x298854u;
            { ctx->pc = 0x298854; return; }
        }
    }
    ctx->pc = 0x28AC34u;
label_28ac34:
    // 0x28ac34: 0x0  nop
    ctx->pc = 0x28ac34u;
    // NOP
label_28ac38:
    // 0x28ac38: 0x0  nop
    ctx->pc = 0x28ac38u;
    // NOP
label_28ac3c:
    // 0x28ac3c: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x28ac3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28ac40:
    // 0x28ac40: 0x51031700  beql        $t0, $v1, . + 4 + (0x1700 << 2)
label_28ac44:
    if (ctx->pc == 0x28AC44u) {
        ctx->pc = 0x28AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC40u;
        // 0x28ac44: 0x1c0b2905  .word       0x1C0B2905                   # bgtz        $zero, . + 4 + (0x2905 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28AC44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC48u;
        goto label_28ac48;
    }
    ctx->pc = 0x28AC40u;
    {
        const bool branch_taken_0x28ac40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x28ac40) {
            ctx->pc = 0x28AC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AC40u;
            // 0x28ac44: 0x1c0b2905  .word       0x1C0B2905                   # bgtz        $zero, . + 4 + (0x2905 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x28AC44 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x290844u;
            { ctx->pc = 0x290844; return; }
        }
    }
    ctx->pc = 0x28AC48u;
label_28ac48:
    // 0x28ac48: 0x9e9e0128  lwu         $fp, 0x128($s4)
    ctx->pc = 0x28ac48u;
    SET_GPR_ZE32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 20), 296)));
label_28ac4c:
    // 0x28ac4c: 0x0  nop
    ctx->pc = 0x28ac4cu;
    // NOP
label_28ac50:
    // 0x28ac50: 0x0  nop
    ctx->pc = 0x28ac50u;
    // NOP
label_28ac54:
    // 0x28ac54: 0x4400  sll         $t0, $zero, 16
    ctx->pc = 0x28ac54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28ac58:
    // 0x28ac58: 0x3a074903  xori        $a3, $s0, 0x4903
    ctx->pc = 0x28ac58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)18691);
label_28ac5c:
    // 0x28ac5c: 0x1e0c190b  .word       0x1E0C190B                   # bgtz        $s0, . + 4 + (0x190B << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_28ac60:
    if (ctx->pc == 0x28AC60u) {
        ctx->pc = 0x28AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC5Cu;
        // 0x28ac60: 0x9f9f0128  lwu         $ra, 0x128($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 31, READ32(ADD32(GPR_U32(ctx, 28), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC64u;
        goto label_28ac64;
    }
    ctx->pc = 0x28AC5Cu;
    {
        const bool branch_taken_0x28ac5c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x28AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC5Cu;
        // 0x28ac60: 0x9f9f0128  lwu         $ra, 0x128($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 31, READ32(ADD32(GPR_U32(ctx, 28), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac5c) {
            ctx->pc = 0x29108Cu;
            { ctx->pc = 0x29108c; return; }
        }
    }
    ctx->pc = 0x28AC64u;
label_28ac64:
    // 0x28ac64: 0x0  nop
    ctx->pc = 0x28ac64u;
    // NOP
label_28ac68:
    // 0x28ac68: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x28ac68u;
    
label_28ac6c:
    // 0x28ac6c: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28ac6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28ac70:
    // 0x28ac70: 0x44021500  .word       0x44021500                   # mfc1        $v0, $f2 # 00000500 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28ac70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_28ac74:
    // 0x28ac74: 0x1c0b1604  .word       0x1C0B1604                   # bgtz        $zero, . + 4 + (0x1604 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_28ac78:
    if (ctx->pc == 0x28AC78u) {
        ctx->pc = 0x28AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC74u;
        // 0x28ac78: 0xa0a00128  sb          $zero, 0x128($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 296), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC7Cu;
        goto label_28ac7c;
    }
    ctx->pc = 0x28AC74u;
    {
        const bool branch_taken_0x28ac74 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x28AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC74u;
        // 0x28ac78: 0xa0a00128  sb          $zero, 0x128($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 296), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac74) {
            ctx->pc = 0x290488u;
            { ctx->pc = 0x290488; return; }
        }
    }
    ctx->pc = 0x28AC7Cu;
label_28ac7c:
    // 0x28ac7c: 0x0  nop
    ctx->pc = 0x28ac7cu;
    // NOP
label_28ac80:
    // 0x28ac80: 0x0  nop
    ctx->pc = 0x28ac80u;
    // NOP
label_28ac84:
    // 0x28ac84: 0x4400  sll         $t0, $zero, 16
    ctx->pc = 0x28ac84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28ac88:
    // 0x28ac88: 0x1a045502  .word       0x1A045502                   # blez        $s0, . + 4 + (0x5502 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28ac8c:
    if (ctx->pc == 0x28AC8Cu) {
        ctx->pc = 0x28AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC88u;
        // 0x28ac8c: 0x1c0b3208  .word       0x1C0B3208                   # bgtz        $zero, . + 4 + (0x3208 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28AC8C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC90u;
        goto label_28ac90;
    }
    ctx->pc = 0x28AC88u;
    {
        const bool branch_taken_0x28ac88 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC88u;
        // 0x28ac8c: 0x1c0b3208  .word       0x1C0B3208                   # bgtz        $zero, . + 4 + (0x3208 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28AC8C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac88) {
            ctx->pc = 0x2A0094u;
            { ctx->pc = 0x2a0094; return; }
        }
    }
    ctx->pc = 0x28AC90u;
label_28ac90:
    // 0x28ac90: 0xa1a10128  sb          $at, 0x128($t5)
    ctx->pc = 0x28ac90u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 296), (uint8_t)GPR_U32(ctx, 1));
label_28ac94:
    // 0x28ac94: 0x0  nop
    ctx->pc = 0x28ac94u;
    // NOP
label_28ac98:
    // 0x28ac98: 0x0  nop
    ctx->pc = 0x28ac98u;
    // NOP
label_28ac9c:
    // 0x28ac9c: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x28ac9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28aca0:
    // 0x28aca0: 0x32071600  andi        $a3, $s0, 0x1600
    ctx->pc = 0x28aca0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)5632);
label_28aca4:
    // 0x28aca4: 0x170c1e0b  bne         $t8, $t4, . + 4 + (0x1E0B << 2)
label_28aca8:
    if (ctx->pc == 0x28ACA8u) {
        ctx->pc = 0x28ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACA4u;
        // 0x28aca8: 0xa2a20128  sb          $v0, 0x128($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 296), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACACu;
        goto label_28acac;
    }
    ctx->pc = 0x28ACA4u;
    {
        const bool branch_taken_0x28aca4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 12));
        ctx->pc = 0x28ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACA4u;
        // 0x28aca8: 0xa2a20128  sb          $v0, 0x128($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 296), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aca4) {
            ctx->pc = 0x2924D4u;
            { ctx->pc = 0x2924d4; return; }
        }
    }
    ctx->pc = 0x28ACACu;
label_28acac:
    // 0x28acac: 0x0  nop
    ctx->pc = 0x28acacu;
    // NOP
label_28acb0:
    // 0x28acb0: 0x0  nop
    ctx->pc = 0x28acb0u;
    // NOP
label_28acb4:
    // 0x28acb4: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x28acb4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28acb8:
    // 0x28acb8: 0x52035202  beql        $s0, $v1, . + 4 + (0x5202 << 2)
label_28acbc:
    if (ctx->pc == 0x28ACBCu) {
        ctx->pc = 0x28ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACB8u;
        // 0x28acbc: 0x140c160b  bne         $zero, $t4, . + 4 + (0x160B << 2) (Delay Slot)
        // Likely branch instruction at 0x28ACBC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACC0u;
        goto label_28acc0;
    }
    ctx->pc = 0x28ACB8u;
    {
        const bool branch_taken_0x28acb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x28acb8) {
            ctx->pc = 0x28ACBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ACB8u;
            // 0x28acbc: 0x140c160b  bne         $zero, $t4, . + 4 + (0x160B << 2) (Delay Slot)
            // Likely branch instruction at 0x28ACBC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F4C4u;
            { ctx->pc = 0x29f4c4; return; }
        }
    }
    ctx->pc = 0x28ACC0u;
label_28acc0:
    // 0x28acc0: 0xa3a30128  sb          $v1, 0x128($sp)
    ctx->pc = 0x28acc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 296), (uint8_t)GPR_U32(ctx, 3));
label_28acc4:
    // 0x28acc4: 0x0  nop
    ctx->pc = 0x28acc4u;
    // NOP
label_28acc8:
    // 0x28acc8: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x28acc8u;
    
label_28accc:
    // 0x28accc: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28acccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28acd0:
    // 0x28acd0: 0x38055002  xori        $a1, $zero, 0x5002
    ctx->pc = 0x28acd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)20482);
label_28acd4:
    // 0x28acd4: 0x1e0c3207  .word       0x1E0C3207                   # bgtz        $s0, . + 4 + (0x3207 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_28acd8:
    if (ctx->pc == 0x28ACD8u) {
        ctx->pc = 0x28ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACD4u;
        // 0x28acd8: 0xa4a4051b  sh          $a0, 0x51B($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1307), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACDCu;
        goto label_28acdc;
    }
    ctx->pc = 0x28ACD4u;
    {
        const bool branch_taken_0x28acd4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x28ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACD4u;
        // 0x28acd8: 0xa4a4051b  sh          $a0, 0x51B($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1307), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28acd4) {
            ctx->pc = 0x2974F4u;
            { ctx->pc = 0x2974f4; return; }
        }
    }
    ctx->pc = 0x28ACDCu;
label_28acdc:
    // 0x28acdc: 0x0  nop
    ctx->pc = 0x28acdcu;
    // NOP
label_28ace0:
    // 0x28ace0: 0x0  nop
    ctx->pc = 0x28ace0u;
    // NOP
label_28ace4:
    // 0x28ace4: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x28ace4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28ace8:
    // 0x28ace8: 0x1e041800  .word       0x1E041800                   # bgtz        $s0, . + 4 + (0x1800 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28acec:
    if (ctx->pc == 0x28ACECu) {
        ctx->pc = 0x28ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACE8u;
        // 0x28acec: 0xd0a3608  jal         func_428D820 (Delay Slot)
        // JAL 0x428D820 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACF0u;
        goto label_28acf0;
    }
    ctx->pc = 0x28ACE8u;
    {
        const bool branch_taken_0x28ace8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x28ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACE8u;
        // 0x28acec: 0xd0a3608  jal         func_428D820 (Delay Slot)
        // JAL 0x428D820 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ace8) {
            ctx->pc = 0x290CECu;
            { ctx->pc = 0x290cec; return; }
        }
    }
    ctx->pc = 0x28ACF0u;
label_28acf0:
    // 0x28acf0: 0xa5a5081b  sh          $a1, 0x81B($t5)
    ctx->pc = 0x28acf0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2075), (uint16_t)GPR_U32(ctx, 5));
label_28acf4:
    // 0x28acf4: 0x0  nop
    ctx->pc = 0x28acf4u;
    // NOP
label_28acf8:
    // 0x28acf8: 0x0  nop
    ctx->pc = 0x28acf8u;
    // NOP
label_28acfc:
    // 0x28acfc: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x28acfcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28ad00:
    // 0x28ad00: 0x19044e03  .word       0x19044E03                   # blez        $t0, . + 4 + (0x4E03 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28ad04:
    if (ctx->pc == 0x28AD04u) {
        ctx->pc = 0x28AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD00u;
        // 0x28ad04: 0x2f191a0b  sltiu       $t9, $t8, 0x1A0B (Delay Slot)
        SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)6667) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD08u;
        goto label_28ad08;
    }
    ctx->pc = 0x28AD00u;
    {
        const bool branch_taken_0x28ad00 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x28AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD00u;
        // 0x28ad04: 0x2f191a0b  sltiu       $t9, $t8, 0x1A0B (Delay Slot)
        SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)6667) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad00) {
            ctx->pc = 0x29E510u;
            { ctx->pc = 0x29e510; return; }
        }
    }
    ctx->pc = 0x28AD08u;
label_28ad08:
    // 0x28ad08: 0xa6a60128  sh          $a2, 0x128($s5)
    ctx->pc = 0x28ad08u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 296), (uint16_t)GPR_U32(ctx, 6));
label_28ad0c:
    // 0x28ad0c: 0x0  nop
    ctx->pc = 0x28ad0cu;
    // NOP
label_28ad10:
    // 0x28ad10: 0x0  nop
    ctx->pc = 0x28ad10u;
    // NOP
label_28ad14:
    // 0x28ad14: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x28ad14u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28ad18:
    // 0x28ad18: 0x1a044103  .word       0x1A044103                   # blez        $s0, . + 4 + (0x4103 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28ad1c:
    if (ctx->pc == 0x28AD1Cu) {
        ctx->pc = 0x28AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD18u;
        // 0x28ad1c: 0xa1a160b  j           func_868582C (Delay Slot)
        // J 0x868582C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD20u;
        goto label_28ad20;
    }
    ctx->pc = 0x28AD18u;
    {
        const bool branch_taken_0x28ad18 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD18u;
        // 0x28ad1c: 0xa1a160b  j           func_868582C (Delay Slot)
        // J 0x868582C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad18) {
            ctx->pc = 0x29B128u;
            { ctx->pc = 0x29b128; return; }
        }
    }
    ctx->pc = 0x28AD20u;
label_28ad20:
    // 0x28ad20: 0xa7a70128  sh          $a3, 0x128($sp)
    ctx->pc = 0x28ad20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 296), (uint16_t)GPR_U32(ctx, 7));
label_28ad24:
    // 0x28ad24: 0x0  nop
    ctx->pc = 0x28ad24u;
    // NOP
label_28ad28:
    // 0x28ad28: 0x0  nop
    ctx->pc = 0x28ad28u;
    // NOP
label_28ad2c:
    // 0x28ad2c: 0x4400  sll         $t0, $zero, 16
    ctx->pc = 0x28ad2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28ad30:
    // 0x28ad30: 0x1c045502  .word       0x1C045502                   # bgtz        $zero, . + 4 + (0x5502 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28ad34:
    if (ctx->pc == 0x28AD34u) {
        ctx->pc = 0x28AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD30u;
        // 0x28ad34: 0x160b3607  bne         $s0, $t3, . + 4 + (0x3607 << 2) (Delay Slot)
        // Likely branch instruction at 0x28AD34 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD38u;
        goto label_28ad38;
    }
    ctx->pc = 0x28AD30u;
    {
        const bool branch_taken_0x28ad30 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x28AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD30u;
        // 0x28ad34: 0x160b3607  bne         $s0, $t3, . + 4 + (0x3607 << 2) (Delay Slot)
        // Likely branch instruction at 0x28AD34 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad30) {
            ctx->pc = 0x2A013Cu;
            { ctx->pc = 0x2a013c; return; }
        }
    }
    ctx->pc = 0x28AD38u;
label_28ad38:
    // 0x28ad38: 0xa8a80128  swl         $t0, 0x128($a1)
    ctx->pc = 0x28ad38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 296); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28ad3c:
    // 0x28ad3c: 0x0  nop
    ctx->pc = 0x28ad3cu;
    // NOP
label_28ad40:
    // 0x28ad40: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x28ad40u;
    
label_28ad44:
    // 0x28ad44: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28ad44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28ad48:
    // 0x28ad48: 0x50035602  beql        $zero, $v1, . + 4 + (0x5602 << 2)
label_28ad4c:
    if (ctx->pc == 0x28AD4Cu) {
        ctx->pc = 0x28AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD48u;
        // 0x28ad4c: 0x81b1c0b  j           func_6C702C (Delay Slot)
        // J 0x6C702C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD50u;
        goto label_28ad50;
    }
    ctx->pc = 0x28AD48u;
    {
        const bool branch_taken_0x28ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x28ad48) {
            ctx->pc = 0x28AD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AD48u;
            // 0x28ad4c: 0x81b1c0b  j           func_6C702C (Delay Slot)
            // J 0x6C702C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0554u;
            { ctx->pc = 0x2a0554; return; }
        }
    }
    ctx->pc = 0x28AD50u;
label_28ad50:
    // 0x28ad50: 0xa9a90128  swl         $t1, 0x128($t5)
    ctx->pc = 0x28ad50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 296); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28ad54:
    // 0x28ad54: 0x0  nop
    ctx->pc = 0x28ad54u;
    // NOP
label_28ad58:
    // 0x28ad58: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x28ad58u;
    
label_28ad5c:
    // 0x28ad5c: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28ad5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28ad60:
    // 0x28ad60: 0x29051704  slti        $a1, $t0, 0x1704
    ctx->pc = 0x28ad60u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5892) ? 1 : 0);
label_28ad64:
    // 0x28ad64: 0x140c1e0b  bne         $zero, $t4, . + 4 + (0x1E0B << 2)
label_28ad68:
    if (ctx->pc == 0x28AD68u) {
        ctx->pc = 0x28AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD64u;
        // 0x28ad68: 0xaaaa0128  swl         $t2, 0x128($s5) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 21), 296); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AD6Cu;
        goto label_28ad6c;
    }
    ctx->pc = 0x28AD64u;
    {
        const bool branch_taken_0x28ad64 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 12));
        ctx->pc = 0x28AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD64u;
        // 0x28ad68: 0xaaaa0128  swl         $t2, 0x128($s5) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 21), 296); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ad64) {
            ctx->pc = 0x292594u;
            { ctx->pc = 0x292594; return; }
        }
    }
    ctx->pc = 0x28AD6Cu;
label_28ad6c:
    // 0x28ad6c: 0x0  nop
    ctx->pc = 0x28ad6cu;
    // NOP
label_28ad70:
    // 0x28ad70: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x28ad70u;
    
label_28ad74:
    // 0x28ad74: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28ad74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28ad78:
    // 0x28ad78: 0x0  nop
    ctx->pc = 0x28ad78u;
    // NOP
label_28ad7c:
    // 0x28ad7c: 0x0  nop
    ctx->pc = 0x28ad7cu;
    // NOP
label_28ad80:
    // 0x28ad80: 0xffe0  .word       0x0000FFE0                   # add         $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ad80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_28ad84:
    // 0x28ad84: 0xffe0  .word       0x0000FFE0                   # add         $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ad84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_28ad88:
    // 0x28ad88: 0xffe0  .word       0x0000FFE0                   # add         $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ad88u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_28ad8c:
    // 0x28ad8c: 0xffe1  .word       0x0000FFE1                   # addu        $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ad8cu;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28ad90:
    // 0x28ad90: 0xffe0  .word       0x0000FFE0                   # add         $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ad90u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_28ad94:
    // 0x28ad94: 0xffe1  .word       0x0000FFE1                   # addu        $ra, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ad94u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_28ad98:
    // 0x28ad98: 0x0  nop
    ctx->pc = 0x28ad98u;
    // NOP
label_28ad9c:
    // 0x28ad9c: 0x0  nop
    ctx->pc = 0x28ad9cu;
    // NOP
label_28ada0:
    // 0x28ada0: 0x600270  tge         $v1, $zero, 9
    ctx->pc = 0x28ada0u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28ada4:
    // 0x28ada4: 0x500050  .word       0x00500050                   # mfhi        $zero # 00500040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ada4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28ada8:
    // 0x28ada8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28ada8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28adac:
    // 0x28adac: 0x10  mfhi        $zero
    ctx->pc = 0x28adacu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28adb0:
    // 0x28adb0: 0x600310  .word       0x00600310                   # mfhi        $zero # 00600300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28adb0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28adb4:
    // 0x28adb4: 0x200008  jr          $at
label_28adb8:
    if (ctx->pc == 0x28ADB8u) {
        ctx->pc = 0x28ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADB4u;
        // 0x28adb8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADBCu;
        goto label_28adbc;
    }
    ctx->pc = 0x28ADB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x28ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADB4u;
        // 0x28adb8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ADB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28ADBCu;
label_28adbc:
    // 0x28adbc: 0x11  mthi        $zero
    ctx->pc = 0x28adbcu;
    ctx->hi = GPR_U64(ctx, 0);
label_28adc0:
    // 0x28adc0: 0x600318  .word       0x00600318                   # mult        $zero, $v1, $zero # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28adc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28adc4:
    // 0x28adc4: 0x200008  jr          $at
label_28adc8:
    if (ctx->pc == 0x28ADC8u) {
        ctx->pc = 0x28ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADC4u;
        // 0x28adc8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ADCCu;
        goto label_28adcc;
    }
    ctx->pc = 0x28ADC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x28ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ADC4u;
        // 0x28adc8: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ADC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28ADCCu;
label_28adcc:
    // 0x28adcc: 0x11  mthi        $zero
    ctx->pc = 0x28adccu;
    ctx->hi = GPR_U64(ctx, 0);
label_28add0:
    // 0x28add0: 0x600270  tge         $v1, $zero, 9
    ctx->pc = 0x28add0u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28add4:
    // 0x28add4: 0x500050  .word       0x00500050                   # mfhi        $zero # 00500040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28add4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28add8:
    // 0x28add8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28add8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28addc:
    // 0x28addc: 0x10  mfhi        $zero
    ctx->pc = 0x28addcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28ade0:
    // 0x28ade0: 0x0  nop
    ctx->pc = 0x28ade0u;
    // NOP
label_28ade4:
    // 0x28ade4: 0x500040  .word       0x00500040                   # sll         $zero, $s0, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ade4u;
    
label_28ade8:
    // 0x28ade8: 0x10002  srl         $zero, $at, 0
    ctx->pc = 0x28ade8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
label_28adec:
    // 0x28adec: 0x0  nop
    ctx->pc = 0x28adecu;
    // NOP
label_28adf0:
    // 0x28adf0: 0x6002c0  .word       0x006002C0                   # sll         $zero, $zero, 11 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28adf0u;
    
label_28adf4:
    // 0x28adf4: 0x500050  .word       0x00500050                   # mfhi        $zero # 00500040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28adf4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28adf8:
    // 0x28adf8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28adf8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28adfc:
    // 0x28adfc: 0x11  mthi        $zero
    ctx->pc = 0x28adfcu;
    ctx->hi = GPR_U64(ctx, 0);
label_28ae00:
    // 0x28ae00: 0xc  syscall     0
    ctx->pc = 0x28ae00u;
    ctx->pc = 0x28AE04u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28ae04:
    // 0x28ae04: 0xc  syscall     0
    ctx->pc = 0x28ae04u;
    ctx->pc = 0x28AE08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28ae08:
    // 0x28ae08: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ae08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28ae0c:
    // 0x28ae0c: 0xc  syscall     0
    ctx->pc = 0x28ae0cu;
    ctx->pc = 0x28AE10u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28ae10:
    // 0x28ae10: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ae10u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28ae14:
    // 0x28ae14: 0xc  syscall     0
    ctx->pc = 0x28ae14u;
    ctx->pc = 0x28AE18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28ae18:
    // 0x28ae18: 0xc  syscall     0
    ctx->pc = 0x28ae18u;
    ctx->pc = 0x28AE1Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28ae1c:
    // 0x28ae1c: 0xc  syscall     0
    ctx->pc = 0x28ae1cu;
    ctx->pc = 0x28AE20u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28ae20:
    // 0x28ae20: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x28ae20u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28ae24:
    // 0x28ae24: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x28ae24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28ae28:
    // 0x28ae28: 0xc  syscall     0
    ctx->pc = 0x28ae28u;
    ctx->pc = 0x28AE2Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28ae2c:
    // 0x28ae2c: 0xc  syscall     0
    ctx->pc = 0x28ae2cu;
    ctx->pc = 0x28AE30u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28ae30:
    // 0x28ae30: 0x0  nop
    ctx->pc = 0x28ae30u;
    // NOP
label_28ae34:
    // 0x28ae34: 0x0  nop
    ctx->pc = 0x28ae34u;
    // NOP
label_28ae38:
    // 0x28ae38: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28ae38u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28ae3c:
    // 0x28ae3c: 0x0  nop
    ctx->pc = 0x28ae3cu;
    // NOP
label_28ae40:
    // 0x28ae40: 0x980310  .word       0x00980310                   # mfhi        $zero # 00980300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ae40u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28ae44:
    // 0x28ae44: 0x180008  .word       0x00180008                   # jr          $zero # 00180000 <InstrIdType: CPU_SPECIAL>
label_28ae48:
    if (ctx->pc == 0x28AE48u) {
        ctx->pc = 0x28AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE44u;
        // 0x28ae48: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE4Cu;
        goto label_28ae4c;
    }
    ctx->pc = 0x28AE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE44u;
        // 0x28ae48: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AE44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28AE4Cu;
label_28ae4c:
    // 0x28ae4c: 0x11  mthi        $zero
    ctx->pc = 0x28ae4cu;
    ctx->hi = GPR_U64(ctx, 0);
label_28ae50:
    // 0x28ae50: 0x980318  .word       0x00980318                   # mult        $zero, $a0, $t8 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28ae50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28ae54:
    // 0x28ae54: 0x180008  .word       0x00180008                   # jr          $zero # 00180000 <InstrIdType: CPU_SPECIAL>
label_28ae58:
    if (ctx->pc == 0x28AE58u) {
        ctx->pc = 0x28AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE54u;
        // 0x28ae58: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE5Cu;
        goto label_28ae5c;
    }
    ctx->pc = 0x28AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE54u;
        // 0x28ae58: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AE54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28AE5Cu;
label_28ae5c:
    // 0x28ae5c: 0x11  mthi        $zero
    ctx->pc = 0x28ae5cu;
    ctx->hi = GPR_U64(ctx, 0);
label_28ae60:
    // 0x28ae60: 0x0  nop
    ctx->pc = 0x28ae60u;
    // NOP
label_28ae64:
    // 0x28ae64: 0x0  nop
    ctx->pc = 0x28ae64u;
    // NOP
label_28ae68:
    // 0x28ae68: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28ae68u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28ae6c:
    // 0x28ae6c: 0x0  nop
    ctx->pc = 0x28ae6cu;
    // NOP
label_28ae70:
    // 0x28ae70: 0x0  nop
    ctx->pc = 0x28ae70u;
    // NOP
label_28ae74:
    // 0x28ae74: 0x0  nop
    ctx->pc = 0x28ae74u;
    // NOP
label_28ae78:
    // 0x28ae78: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28ae78u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28ae7c:
    // 0x28ae7c: 0x0  nop
    ctx->pc = 0x28ae7cu;
    // NOP
label_28ae80:
    // 0x28ae80: 0x800310  .word       0x00800310                   # mfhi        $zero # 00800300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28ae80u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28ae84:
    // 0x28ae84: 0x180008  .word       0x00180008                   # jr          $zero # 00180000 <InstrIdType: CPU_SPECIAL>
label_28ae88:
    if (ctx->pc == 0x28AE88u) {
        ctx->pc = 0x28AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE84u;
        // 0x28ae88: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AE8Cu;
        goto label_28ae8c;
    }
    ctx->pc = 0x28AE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AE84u;
        // 0x28ae88: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AE84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28AE8Cu;
label_28ae8c:
    // 0x28ae8c: 0x11  mthi        $zero
    ctx->pc = 0x28ae8cu;
    ctx->hi = GPR_U64(ctx, 0);
label_28ae90:
    // 0x28ae90: 0x0  nop
    ctx->pc = 0x28ae90u;
    // NOP
label_28ae94:
    // 0x28ae94: 0x0  nop
    ctx->pc = 0x28ae94u;
    // NOP
label_28ae98:
    // 0x28ae98: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28ae98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28ae9c:
    // 0x28ae9c: 0x10  mfhi        $zero
    ctx->pc = 0x28ae9cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28aea0:
    // 0x28aea0: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28aea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28aea4:
    // 0x28aea4: 0x10  mfhi        $zero
    ctx->pc = 0x28aea4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28aea8:
    // 0x28aea8: 0x0  nop
    ctx->pc = 0x28aea8u;
    // NOP
label_28aeac:
    // 0x28aeac: 0x0  nop
    ctx->pc = 0x28aeacu;
    // NOP
label_28aeb0:
    // 0x28aeb0: 0x0  nop
    ctx->pc = 0x28aeb0u;
    // NOP
label_28aeb4:
    // 0x28aeb4: 0x0  nop
    ctx->pc = 0x28aeb4u;
    // NOP
label_28aeb8:
    // 0x28aeb8: 0x10  mfhi        $zero
    ctx->pc = 0x28aeb8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28aebc:
    // 0x28aebc: 0x10  mfhi        $zero
    ctx->pc = 0x28aebcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28aec0:
    // 0x28aec0: 0x0  nop
    ctx->pc = 0x28aec0u;
    // NOP
label_28aec4:
    // 0x28aec4: 0x1920104  .word       0x01920104                   # sllv        $zero, $s2, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28aec4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 12) & 0x1F));
label_28aec8:
    // 0x28aec8: 0x1940193  .word       0x01940193                   # mtlo        $t4 # 00140180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28aec8u;
    ctx->lo = GPR_U64(ctx, 12);
label_28aecc:
    // 0x28aecc: 0x59300706  .word       0x59300706                   # blezl       $t1, . + 4 + (0x706 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_28aed0:
    if (ctx->pc == 0x28AED0u) {
        ctx->pc = 0x28AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AECCu;
        // 0x28aed0: 0x82  srl         $zero, $zero, 2 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AED4u;
        goto label_28aed4;
    }
    ctx->pc = 0x28AECCu;
    {
        const bool branch_taken_0x28aecc = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x28aecc) {
            ctx->pc = 0x28AED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AECCu;
            // 0x28aed0: 0x82  srl         $zero, $zero, 2 (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CAE8u;
            { ctx->pc = 0x28cae8; return; }
        }
    }
    ctx->pc = 0x28AED4u;
label_28aed4:
    // 0x28aed4: 0x1680001  .word       0x01680001                   # INVALID     $t3, $t0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28aed4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28AED4 raw=0x01680001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28aed8:
    // 0x28aed8: 0x1960195  .word       0x01960195                   # INVALID     $t4, $s6, 0x195 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28aed8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28AED8 raw=0x01960195"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28aedc:
    // 0x28aedc: 0x9080197  j           func_420065C
label_28aee0:
    if (ctx->pc == 0x28AEE0u) {
        ctx->pc = 0x28AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEDCu;
        // 0x28aee0: 0x835a31  tgeu        $a0, $v1, 360 (Delay Slot)
        if (GPR_U64(ctx, 4) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEE4u;
        goto label_28aee4;
    }
    ctx->pc = 0x28AEDCu;
    ctx->pc = 0x28AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AEDCu;
    // 0x28aee0: 0x835a31  tgeu        $a0, $v1, 360 (Delay Slot)
    if (GPR_U64(ctx, 4) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x420065Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420065Cu, 0x28AEDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28AEE4u;
label_28aee4:
    // 0x28aee4: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x28aee4u;
    
label_28aee8:
    // 0x28aee8: 0x1980104  .word       0x01980104                   # sllv        $zero, $t8, $t4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28aee8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 12) & 0x1F));
label_28aeec:
    // 0x28aeec: 0x19a0199  .word       0x019A0199                   # multu       $t4, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28aeecu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 12) * (uint64_t)GPR_U32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28aef0:
    // 0x28aef0: 0x5b320908  .word       0x5B320908                   # blezl       $t9, . + 4 + (0x908 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_28aef4:
    if (ctx->pc == 0x28AEF4u) {
        ctx->pc = 0x28AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AEF0u;
        // 0x28aef4: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AEF8u;
        goto label_28aef8;
    }
    ctx->pc = 0x28AEF0u;
    {
        const bool branch_taken_0x28aef0 = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x28aef0) {
            ctx->pc = 0x28AEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AEF0u;
            // 0x28aef4: 0x84  .word       0x00000084                   # sllv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D314u;
            { ctx->pc = 0x28d314; return; }
        }
    }
    ctx->pc = 0x28AEF8u;
label_28aef8:
    // 0x28aef8: 0x14a0003  .word       0x014A0003                   # sra         $zero, $t2, 0 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28aef8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 10), 0));
label_28aefc:
    // 0x28aefc: 0x19c019b  .word       0x019C019B                   # divu        $zero, $t4, $gp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28aefcu;
    { uint32_t divisor = GPR_U32(ctx, 28); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
label_28af00:
    // 0x28af00: 0x504019d  .word       0x0504019D                   # INVALID     $t0, $a0, 0x19D # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28af00u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x28AF00 raw=0x0504019D");
 /* MITIGATED */
label_28af04:
    // 0x28af04: 0x855b33  tltu        $a0, $a1, 364
    ctx->pc = 0x28af04u;
    if (GPR_U64(ctx, 4) < GPR_U64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_28af08:
    // 0x28af08: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x28af08u;
    
label_28af0c:
    // 0x28af0c: 0x19e00be  .word       0x019E00BE                   # dsrl32      $zero, $fp, 2 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) >> (32 + 2));
label_28af10:
    // 0x28af10: 0x1a0019f  .word       0x01A0019F                   # ddivu       $zero, $t5, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28AF10 raw=0x01A0019F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28af14:
    // 0x28af14: 0x5d340b0a  .word       0x5D340B0A                   # bgtzl       $t1, . + 4 + (0xB0A << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_28af18:
    if (ctx->pc == 0x28AF18u) {
        ctx->pc = 0x28AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF14u;
        // 0x28af18: 0x1000086  .word       0x01000086                   # srlv        $zero, $zero, $t0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF1Cu;
        goto label_28af1c;
    }
    ctx->pc = 0x28AF14u;
    {
        const bool branch_taken_0x28af14 = (GPR_S32(ctx, 9) > 0);
        if (branch_taken_0x28af14) {
            ctx->pc = 0x28AF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AF14u;
            // 0x28af18: 0x1000086  .word       0x01000086                   # srlv        $zero, $zero, $t0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DB40u;
            { ctx->pc = 0x28db40; return; }
        }
    }
    ctx->pc = 0x28AF1Cu;
label_28af1c:
    // 0x28af1c: 0xbe0005  .word       0x00BE0005                   # INVALID     $a1, $fp, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af1cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28AF1C raw=0x00BE0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28af20:
    // 0x28af20: 0x1a201a1  .word       0x01A201A1                   # addu        $zero, $t5, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af20u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_28af24:
    // 0x28af24: 0xd0c01a3  jal         func_430068C
label_28af28:
    if (ctx->pc == 0x28AF28u) {
        ctx->pc = 0x28AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF24u;
        // 0x28af28: 0x875e35  .word       0x00875E35                   # INVALID     $a0, $a3, 0x5E35 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x28AF28 raw=0x00875E35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF2Cu;
        goto label_28af2c;
    }
    ctx->pc = 0x28AF24u;
    SET_GPR_U32(ctx, 31, 0x28AF2Cu);
    ctx->pc = 0x28AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF24u;
    // 0x28af28: 0x875e35  .word       0x00875E35                   # INVALID     $a0, $a3, 0x5E35 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x28AF28 raw=0x00875E35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x430068Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430068Cu, 0x28AF24u, 0x28AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF2Cu;
label_28af2c:
    // 0x28af2c: 0x60100  sll         $zero, $a2, 4
    ctx->pc = 0x28af2cu;
    
label_28af30:
    // 0x28af30: 0x1a400dc  .word       0x01A400DC                   # dmult       $t5, $a0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28AF30 raw=0x01A400DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28af34:
    // 0x28af34: 0x1a601a5  .word       0x01A601A5                   # or          $zero, $t5, $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 13) | GPR_U64(ctx, 6));
label_28af38:
    // 0x28af38: 0x5f360100  .word       0x5F360100                   # bgtzl       $t9, . + 4 + (0x100 << 2) # 00160000 <InstrIdType: CPU_NORMAL>
label_28af3c:
    if (ctx->pc == 0x28AF3Cu) {
        ctx->pc = 0x28AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF38u;
        // 0x28af3c: 0x1000088  .word       0x01000088                   # jr          $t0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF40u;
        goto label_28af40;
    }
    ctx->pc = 0x28AF38u;
    {
        const bool branch_taken_0x28af38 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x28af38) {
            ctx->pc = 0x28AF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AF38u;
            // 0x28af3c: 0x1000088  .word       0x01000088                   # jr          $t0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // JR $8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B33Cu;
            goto label_28b33c;
        }
    }
    ctx->pc = 0x28AF40u;
label_28af40:
    // 0x28af40: 0xb40007  srav        $zero, $s4, $a1
    ctx->pc = 0x28af40u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 20), GPR_U32(ctx, 5) & 0x1F));
label_28af44:
    // 0x28af44: 0x1a801a7  .word       0x01A801A7                   # nor         $zero, $t5, $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af44u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 13) | GPR_U64(ctx, 8)));
label_28af48:
    // 0x28af48: 0xf0e01a9  jal         func_C3806A4
label_28af4c:
    if (ctx->pc == 0x28AF4Cu) {
        ctx->pc = 0x28AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF48u;
        // 0x28af4c: 0x896037  .word       0x00896037                   # INVALID     $a0, $t1, 0x6037 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28AF4C raw=0x00896037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF50u;
        goto label_28af50;
    }
    ctx->pc = 0x28AF48u;
    SET_GPR_U32(ctx, 31, 0x28AF50u);
    ctx->pc = 0x28AF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF48u;
    // 0x28af4c: 0x896037  .word       0x00896037                   # INVALID     $a0, $t1, 0x6037 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28AF4C raw=0x00896037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xC3806A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC3806A4u, 0x28AF48u, 0x28AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF50u;
label_28af50:
    // 0x28af50: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x28af50u;
    
label_28af54:
    // 0x28af54: 0x1aa012c  .word       0x01AA012C                   # dadd        $zero, $t5, $t2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af54u;
    { int64_t a = (int64_t)GPR_S64(ctx, 13); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28af58:
    // 0x28af58: 0x1ac01ab  .word       0x01AC01AB                   # sltu        $zero, $t5, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af58u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_28af5c:
    // 0x28af5c: 0x61381110  daddi       $t8, $t1, 0x1110
    ctx->pc = 0x28af5cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)4368; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, res); }
label_28af60:
    // 0x28af60: 0x8a  .word       0x0000008A                   # movz        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af60u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28af64:
    // 0x28af64: 0xb40009  .word       0x00B40009                   # jalr        $zero, $a1 # 00140000 <InstrIdType: CPU_SPECIAL>
label_28af68:
    if (ctx->pc == 0x28AF68u) {
        ctx->pc = 0x28AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF64u;
        // 0x28af68: 0x1ae01ad  .word       0x01AE01AD                   # daddu       $zero, $t5, $t6 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF6Cu;
        goto label_28af6c;
    }
    ctx->pc = 0x28AF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = 0x28AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF64u;
        // 0x28af68: 0x1ae01ad  .word       0x01AE01AD                   # daddu       $zero, $t5, $t6 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AF64u, 0x28AF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28AF6Cu;
label_28af6c:
    // 0x28af6c: 0x131201af  beq         $t8, $s2, . + 4 + (0x1AF << 2)
label_28af70:
    if (ctx->pc == 0x28AF70u) {
        ctx->pc = 0x28AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF6Cu;
        // 0x28af70: 0x8b6239  .word       0x008B6239                   # INVALID     $a0, $t3, 0x6239 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28AF70 raw=0x008B6239"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF74u;
        goto label_28af74;
    }
    ctx->pc = 0x28AF6Cu;
    {
        const bool branch_taken_0x28af6c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 18));
        ctx->pc = 0x28AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF6Cu;
        // 0x28af70: 0x8b6239  .word       0x008B6239                   # INVALID     $a0, $t3, 0x6239 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28AF70 raw=0x008B6239"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af6c) {
            ctx->pc = 0x28B62Cu;
            { ctx->pc = 0x28b62c; return; }
        }
    }
    ctx->pc = 0x28AF74u;
label_28af74:
    // 0x28af74: 0xa0100  sll         $zero, $t2, 4
    ctx->pc = 0x28af74u;
    
label_28af78:
    // 0x28af78: 0x1b000b9  .word       0x01B000B9                   # INVALID     $t5, $s0, 0xB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af78u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28AF78 raw=0x01B000B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28af7c:
    // 0x28af7c: 0x1b201b1  tgeu        $t5, $s2, 6
    ctx->pc = 0x28af7cu;
    if (GPR_U64(ctx, 13) >= GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_28af80:
    // 0x28af80: 0x633a1514  daddi       $k0, $t9, 0x1514
    ctx->pc = 0x28af80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)5396; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, res); }
label_28af84:
    // 0x28af84: 0x100008c  .word       0x0100008C                   # syscall     2 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af84u;
    ctx->pc = 0x28AF88u;
runtime->handleSyscall(rdram, ctx, 0x40002u);
label_28af88:
    // 0x28af88: 0x10e000b  movn        $zero, $t0, $t6
    ctx->pc = 0x28af88u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
label_28af8c:
    // 0x28af8c: 0x1b401b3  tltu        $t5, $s4, 6
    ctx->pc = 0x28af8cu;
    if (GPR_U64(ctx, 13) < GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_28af90:
    // 0x28af90: 0x30201b5  .word       0x030201B5                   # INVALID     $t8, $v0, 0x1B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x28AF90 raw=0x030201B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28af94:
    // 0x28af94: 0x8d643b  .word       0x008D643B                   # dsra        $t4, $t5, 16 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af94u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 13) >> 16);
label_28af98:
    // 0x28af98: 0xc0000  sll         $zero, $t4, 0
    ctx->pc = 0x28af98u;
    
label_28af9c:
    // 0x28af9c: 0x1b601b8  .word       0x01B601B8                   # dsll        $zero, $s6, 6 # 01A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28af9cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 22) << 6);
label_28afa0:
    // 0x28afa0: 0x1b801b7  .word       0x01B801B7                   # INVALID     $t5, $t8, 0x1B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28afa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28AFA0 raw=0x01B801B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28afa4:
    // 0x28afa4: 0x653c0908  daddiu      $gp, $t1, 0x908
    ctx->pc = 0x28afa4u;
    SET_GPR_S64(ctx, 28, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)2312);
label_28afa8:
    // 0x28afa8: 0x100008e  .word       0x0100008E                   # INVALID     $t0, $zero, 0x8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28afa8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28AFA8 raw=0x0100008E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28afac:
    // 0x28afac: 0xd2000d  break       210
    ctx->pc = 0x28afacu;
    runtime->handleBreak(rdram, ctx);
label_28afb0:
    // 0x28afb0: 0x1ba01b9  .word       0x01BA01B9                   # INVALID     $t5, $k0, 0x1B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28afb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28AFB0 raw=0x01BA01B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28afb4:
    // 0x28afb4: 0x171601bb  bne         $t8, $s6, . + 4 + (0x1BB << 2)
label_28afb8:
    if (ctx->pc == 0x28AFB8u) {
        ctx->pc = 0x28AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFB4u;
        // 0x28afb8: 0x8f663d  .word       0x008F663D                   # INVALID     $a0, $t7, 0x663D # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28AFB8 raw=0x008F663D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFBCu;
        goto label_28afbc;
    }
    ctx->pc = 0x28AFB4u;
    {
        const bool branch_taken_0x28afb4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 22));
        ctx->pc = 0x28AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFB4u;
        // 0x28afb8: 0x8f663d  .word       0x008F663D                   # INVALID     $a0, $t7, 0x663D # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28AFB8 raw=0x008F663D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afb4) {
            ctx->pc = 0x28B6A4u;
            { ctx->pc = 0x28b6a4; return; }
        }
    }
    ctx->pc = 0x28AFBCu;
label_28afbc:
    // 0x28afbc: 0x290007  srav        $zero, $t1, $at
    ctx->pc = 0x28afbcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 9), GPR_U32(ctx, 1) & 0x1F));
label_28afc0:
    // 0x28afc0: 0x1bc1770  tge         $t5, $gp, 93
    ctx->pc = 0x28afc0u;
    if (GPR_S64(ctx, 13) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_28afc4:
    // 0x28afc4: 0x1be01bd  .word       0x01BE01BD                   # INVALID     $t5, $fp, 0x1BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28afc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28AFC4 raw=0x01BE01BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28afc8:
    // 0x28afc8: 0xabababab  swl         $t3, -0x5455($sp)
    ctx->pc = 0x28afc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294945707); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_28afcc:
    // 0x28afcc: 0x700ab  .word       0x000700AB                   # sltu        $zero, $zero, $a3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28afccu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_28afd0:
    // 0x28afd0: 0x17700029  bne         $k1, $s0, . + 4 + (0x29 << 2)
label_28afd4:
    if (ctx->pc == 0x28AFD4u) {
        ctx->pc = 0x28AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFD0u;
        // 0x28afd4: 0x1c001bf  .word       0x01C001BF                   # dsra32      $zero, $zero, 6 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFD8u;
        goto label_28afd8;
    }
    ctx->pc = 0x28AFD0u;
    {
        const bool branch_taken_0x28afd0 = (GPR_U64(ctx, 27) != GPR_U64(ctx, 16));
        ctx->pc = 0x28AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFD0u;
        // 0x28afd4: 0x1c001bf  .word       0x01C001BF                   # dsra32      $zero, $zero, 6 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afd0) {
            ctx->pc = 0x28B078u;
            goto label_28b078;
        }
    }
    ctx->pc = 0x28AFD8u;
label_28afd8:
    // 0x28afd8: 0xacac01c1  sw          $t4, 0x1C1($a1)
    ctx->pc = 0x28afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 449), GPR_U32(ctx, 12));
label_28afdc:
    // 0x28afdc: 0xacacac  .word       0x00ACACAC                   # dadd        $s5, $a1, $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28afdcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 5); int64_t b = (int64_t)GPR_S64(ctx, 12); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, r); }
label_28afe0:
    // 0x28afe0: 0x290101  .word       0x00290101                   # INVALID     $at, $t1, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28afe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28AFE0 raw=0x00290101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28afe4:
    // 0x28afe4: 0x1c200b4  teq         $t6, $v0, 2
    ctx->pc = 0x28afe4u;
    if (GPR_U64(ctx, 14) == GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28afe8:
    // 0x28afe8: 0x1c401c3  .word       0x01C401C3                   # sra         $zero, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28afe8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 7));
label_28afec:
    // 0x28afec: 0x3020100  .word       0x03020100                   # sll         $zero, $v0, 4 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28afecu;
    
label_28aff0:
    // 0x28aff0: 0x1020003  .word       0x01020003                   # sra         $zero, $v0, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28aff0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 0));
label_28aff4:
    // 0x28aff4: 0xe60029  .word       0x00E60029                   # mtsa        $a3 # 00060000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28aff4u;
    ctx->sa = GPR_U32(ctx, 7) & 0x7F;
label_28aff8:
    // 0x28aff8: 0x1c601c5  .word       0x01C601C5                   # INVALID     $t6, $a2, 0x1C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28aff8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x28AFF8 raw=0x01C601C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28affc:
    // 0x28affc: 0x30201c7  .word       0x030201C7                   # srav        $zero, $v0, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28affcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 24) & 0x1F));
label_28b000:
    // 0x28b000: 0x575757  .word       0x00575757                   # dsrav       $t2, $s7, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b000u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 23) >> (GPR_U32(ctx, 2) & 0x3F));
label_28b004:
    // 0x28b004: 0x330102  .word       0x00330102                   # srl         $zero, $s3, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b004u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
label_28b008:
    // 0x28b008: 0x1c800d2  .word       0x01C800D2                   # mflo        $zero # 01C800C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b008u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28b00c:
    // 0x28b00c: 0x1ca01c9  .word       0x01CA01C9                   # jalr        $zero, $t6 # 000A01C0 <InstrIdType: CPU_SPECIAL>
label_28b010:
    if (ctx->pc == 0x28B010u) {
        ctx->pc = 0x28B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B00Cu;
        // 0x28b010: 0x3020100  .word       0x03020100                   # sll         $zero, $v0, 4 # 03000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B014u;
        goto label_28b014;
    }
    ctx->pc = 0x28B00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 14);
        ctx->pc = 0x28B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B00Cu;
        // 0x28b010: 0x3020100  .word       0x03020100                   # sll         $zero, $v0, 4 # 03000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B00Cu, 0x28B014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B014u;
label_28b014:
    // 0x28b014: 0x1010003  .word       0x01010003                   # sra         $zero, $at, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b014u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 1), 0));
label_28b018:
    // 0x28b018: 0xdc002b  sltu        $zero, $a2, $gp
    ctx->pc = 0x28b018u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 28)) ? 1 : 0);
label_28b01c:
    // 0x28b01c: 0x1cc01cb  .word       0x01CC01CB                   # movn        $zero, $t6, $t4 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b01cu;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 14));
label_28b020:
    // 0x28b020: 0x10001cd  break       256, 7
    ctx->pc = 0x28b020u;
    runtime->handleBreak(rdram, ctx);
label_28b024:
    // 0x28b024: 0x30302  srl         $zero, $v1, 12
    ctx->pc = 0x28b024u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_28b028:
    // 0x28b028: 0x290001  .word       0x00290001                   # INVALID     $at, $t1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b028u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B028 raw=0x00290001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b02c:
    // 0x28b02c: 0x1ce00dc  .word       0x01CE00DC                   # dmult       $t6, $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b02cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28B02C raw=0x01CE00DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b030:
    // 0x28b030: 0x1d001cf  .word       0x01D001CF                   # sync # 01D00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28b034:
    // 0x28b034: 0x43430706  .word       0x43430706                   # INVALID     $k0, $v1, 0x706 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x28b034u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x28B034 raw=0x43430706"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b038:
    // 0x28b038: 0x20043  sra         $zero, $v0, 1
    ctx->pc = 0x28b038u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 2), 1));
label_28b03c:
    // 0x28b03c: 0xdc0029  .word       0x00DC0029                   # mtsa        $a2 # 001C0000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b03cu;
    ctx->sa = GPR_U32(ctx, 6) & 0x7F;
label_28b040:
    // 0x28b040: 0x1d201d1  .word       0x01D201D1                   # mthi        $t6 # 001201C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b040u;
    ctx->hi = GPR_U64(ctx, 14);
label_28b044:
    // 0x28b044: 0x70601d3  .word       0x070601D3                   # INVALID     $t8, $a2, 0x1D3 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28b044u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28B044 raw=0x070601D3");
 /* MITIGATED */
label_28b048:
    // 0x28b048: 0x434343  .word       0x00434343                   # sra         $t0, $v1, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b048u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 13));
label_28b04c:
    // 0x28b04c: 0x290001  .word       0x00290001                   # INVALID     $at, $t1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b04cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B04C raw=0x00290001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b050:
    // 0x28b050: 0x1d400e6  .word       0x01D400E6                   # xor         $zero, $t6, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b050u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 20));
label_28b054:
    // 0x28b054: 0x1d601d5  .word       0x01D601D5                   # INVALID     $t6, $s6, 0x1D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b054u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28B054 raw=0x01D601D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b058:
    // 0x28b058: 0x48480908  .word       0x48480908                   # cfc2.ni     $t0, $vi1 # 00000108 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x28b058u;
    SET_GPR_U32(ctx, 8, static_cast<uint32_t>(ctx->vi[1]));
label_28b05c:
    // 0x28b05c: 0x20048  .word       0x00020048                   # jr          $zero # 00020040 <InstrIdType: CPU_SPECIAL>
label_28b060:
    if (ctx->pc == 0x28B060u) {
        ctx->pc = 0x28B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B05Cu;
        // 0x28b060: 0x1180029  .word       0x01180029                   # mtsa        $t0 # 00180000 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        ctx->sa = GPR_U32(ctx, 8) & 0x7F;
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B064u;
        goto label_28b064;
    }
    ctx->pc = 0x28B05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B05Cu;
        // 0x28b060: 0x1180029  .word       0x01180029                   # mtsa        $t0 # 00180000 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        ctx->sa = GPR_U32(ctx, 8) & 0x7F;
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B05Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B064u;
label_28b064:
    // 0x28b064: 0x1d801d7  .word       0x01D801D7                   # dsrav       $zero, $t8, $t6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 14) & 0x3F));
label_28b068:
    // 0x28b068: 0x90801d9  j           func_4200764
label_28b06c:
    if (ctx->pc == 0x28B06Cu) {
        ctx->pc = 0x28B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B068u;
        // 0x28b06c: 0x484848  .word       0x00484848                   # jr          $v0 # 00084840 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B070u;
        goto label_28b070;
    }
    ctx->pc = 0x28B068u;
    ctx->pc = 0x28B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B068u;
    // 0x28b06c: 0x484848  .word       0x00484848                   # jr          $v0 # 00084840 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    // JR $2 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x4200764u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4200764u, 0x28B068u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28B070u;
label_28b070:
    // 0x28b070: 0x290004  sllv        $zero, $t1, $at
    ctx->pc = 0x28b070u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 1) & 0x1F));
label_28b074:
    // 0x28b074: 0xe70104  .word       0x00E70104                   # sllv        $zero, $a3, $a3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b074u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 7) & 0x1F));
label_28b078:
    // 0x28b078: 0xc2d00e8  jal         func_B403A0
label_28b07c:
    if (ctx->pc == 0x28B07Cu) {
        ctx->pc = 0x28B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B078u;
        // 0x28b07c: 0x59300706  .word       0x59300706                   # blezl       $t1, . + 4 + (0x706 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28B07C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B080u;
        goto label_28b080;
    }
    ctx->pc = 0x28B078u;
    SET_GPR_U32(ctx, 31, 0x28B080u);
    ctx->pc = 0x28B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B078u;
    // 0x28b07c: 0x59300706  .word       0x59300706                   # blezl       $t1, . + 4 + (0x706 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x28B07C - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB403A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB403A0u, 0x28B078u, 0x28B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B080u;
label_28b080:
    // 0x28b080: 0x50059  .word       0x00050059                   # multu       $zero, $a1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b080u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b084:
    // 0x28b084: 0x1040029  .word       0x01040029                   # mtsa        $t0 # 00040000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b084u;
    ctx->sa = GPR_U32(ctx, 8) & 0x7F;
label_28b088:
    // 0x28b088: 0xea00e9  .word       0x00EA00E9                   # mtsa        $a3 # 000A00C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b088u;
    ctx->sa = GPR_U32(ctx, 7) & 0x7F;
label_28b08c:
    // 0x28b08c: 0x7060c2d  .word       0x07060C2D                   # INVALID     $t8, $a2, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28b08cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28B08C raw=0x07060C2D");
 /* MITIGATED */
label_28b090:
    // 0x28b090: 0x595930  tge         $v0, $t9, 356
    ctx->pc = 0x28b090u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_28b094:
    // 0x28b094: 0x1c0000  sll         $zero, $gp, 0
    ctx->pc = 0x28b094u;
    
label_28b098:
    // 0x28b098: 0x1da012c  .word       0x01DA012C                   # dadd        $zero, $t6, $k0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b098u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 26); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28b09c:
    // 0x28b09c: 0x1dc01db  .word       0x01DC01DB                   # divu        $zero, $t6, $gp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b09cu;
    { uint32_t divisor = GPR_U32(ctx, 28); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
label_28b0a0:
    // 0x28b0a0: 0x754c1918  .word       0x754C1918                   # INVALID     $t2, $t4, 0x1918 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b0a0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x28B0A0 raw=0x754C1918");
 /* MITIGATED */
label_28b0a4:
    // 0x28b0a4: 0x9e  .word       0x0000009E                   # ddiv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x28B0A4 raw=0x0000009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b0a8:
    // 0x28b0a8: 0xbe001d  dmultu      $a1, $fp
    ctx->pc = 0x28b0a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B0A8 raw=0x00BE001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b0ac:
    // 0x28b0ac: 0x1de01dd  .word       0x01DE01DD                   # dmultu      $t6, $fp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B0AC raw=0x01DE01DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b0b0:
    // 0x28b0b0: 0x1b1a01df  .word       0x1B1A01DF                   # blez        $t8, . + 4 + (0x1DF << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_28b0b4:
    if (ctx->pc == 0x28B0B4u) {
        ctx->pc = 0x28B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0B0u;
        // 0x28b0b4: 0x9f764d  break       159, 473 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0B8u;
        goto label_28b0b8;
    }
    ctx->pc = 0x28B0B0u;
    {
        const bool branch_taken_0x28b0b0 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x28B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0B0u;
        // 0x28b0b4: 0x9f764d  break       159, 473 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0b0) {
            ctx->pc = 0x28B830u;
            { ctx->pc = 0x28b830; return; }
        }
    }
    ctx->pc = 0x28B0B8u;
label_28b0b8:
    // 0x28b0b8: 0x1e0000  sll         $zero, $fp, 0
    ctx->pc = 0x28b0b8u;
    
label_28b0bc:
    // 0x28b0bc: 0x1e000be  .word       0x01E000BE                   # dsrl32      $zero, $zero, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_28b0c0:
    // 0x28b0c0: 0x1e201e1  .word       0x01E201E1                   # addu        $zero, $t7, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_28b0c4:
    // 0x28b0c4: 0x774e1d1c  .word       0x774E1D1C                   # INVALID     $k0, $t6, 0x1D1C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b0c4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x28B0C4 raw=0x774E1D1C");
 /* MITIGATED */
label_28b0c8:
    // 0x28b0c8: 0xa0  .word       0x000000A0                   # add         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b0cc:
    // 0x28b0cc: 0x118001f  ddivu       $zero, $t0, $t8
    ctx->pc = 0x28b0ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28B0CC raw=0x0118001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b0d0:
    // 0x28b0d0: 0x1e401e3  .word       0x01E401E3                   # subu        $zero, $t7, $a0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
label_28b0d4:
    // 0x28b0d4: 0x1f1e01e5  .word       0x1F1E01E5                   # bgtz        $t8, . + 4 + (0x1E5 << 2) # 001E0000 <InstrIdType: CPU_NORMAL>
label_28b0d8:
    if (ctx->pc == 0x28B0D8u) {
        ctx->pc = 0x28B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0D4u;
        // 0x28b0d8: 0xa1784f  .word       0x00A1784F                   # sync # 00A17800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0DCu;
        goto label_28b0dc;
    }
    ctx->pc = 0x28B0D4u;
    {
        const bool branch_taken_0x28b0d4 = (GPR_S32(ctx, 24) > 0);
        ctx->pc = 0x28B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0D4u;
        // 0x28b0d8: 0xa1784f  .word       0x00A1784F                   # sync # 00A17800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0d4) {
            ctx->pc = 0x28B86Cu;
            { ctx->pc = 0x28b86c; return; }
        }
    }
    ctx->pc = 0x28B0DCu;
label_28b0dc:
    // 0x28b0dc: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0dcu;
    // NOP
label_28b0e0:
    // 0x28b0e0: 0x1e600dc  .word       0x01E600DC                   # dmult       $t7, $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28B0E0 raw=0x01E600DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b0e4:
    // 0x28b0e4: 0x1e801e7  .word       0x01E801E7                   # nor         $zero, $t7, $t0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0e4u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 8)));
label_28b0e8:
    // 0x28b0e8: 0x79502120  lq          $s0, 0x2120($t2)
    ctx->pc = 0x28b0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 10), 8480)));
label_28b0ec:
    // 0x28b0ec: 0xa2  .word       0x000000A2                   # neg         $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0ecu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_28b0f0:
    // 0x28b0f0: 0x10e0021  addu        $zero, $t0, $t6
    ctx->pc = 0x28b0f0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
label_28b0f4:
    // 0x28b0f4: 0x1ea01e9  .word       0x01EA01E9                   # mtsa        $t7 # 000A01C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b0f4u;
    ctx->sa = GPR_U32(ctx, 15) & 0x7F;
label_28b0f8:
    // 0x28b0f8: 0x232201eb  addi        $v0, $t9, 0x1EB
    ctx->pc = 0x28b0f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)491, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_28b0fc:
    // 0x28b0fc: 0xa37a51  .word       0x00A37A51                   # mthi        $a1 # 00037A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b0fcu;
    ctx->hi = GPR_U64(ctx, 5);
label_28b100:
    // 0x28b100: 0x220000  .word       0x00220000                   # sll         $zero, $v0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b100u;
    
label_28b104:
    // 0x28b104: 0x1ec00f0  tge         $t7, $t4, 3
    ctx->pc = 0x28b104u;
    if (GPR_S64(ctx, 15) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_28b108:
    // 0x28b108: 0x1ee01ed  .word       0x01EE01ED                   # daddu       $zero, $t7, $t6 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b108u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 14));
label_28b10c:
    // 0x28b10c: 0x7b522524  lq          $s2, 0x2524($k0)
    ctx->pc = 0x28b10cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 9508)));
label_28b110:
    // 0x28b110: 0xa4  .word       0x000000A4                   # and         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b110u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28b114:
    // 0x28b114: 0xc80023  subu        $zero, $a2, $t0
    ctx->pc = 0x28b114u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_28b118:
    // 0x28b118: 0x1f001ef  .word       0x01F001EF                   # dsubu       $zero, $t7, $s0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b118u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 15) - GPR_U64(ctx, 16));
label_28b11c:
    // 0x28b11c: 0x272601f1  addiu       $a2, $t9, 0x1F1
    ctx->pc = 0x28b11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 25), 497));
label_28b120:
    // 0x28b120: 0xa57c53  .word       0x00A57C53                   # mtlo        $a1 # 00057C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b120u;
    ctx->lo = GPR_U64(ctx, 5);
label_28b124:
    // 0x28b124: 0x240000  .word       0x00240000                   # sll         $zero, $a0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b124u;
    
label_28b128:
    // 0x28b128: 0x1f200a0  .word       0x01F200A0                   # add         $zero, $t7, $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b128u;
    {     int32_t rs_val = GPR_S32(ctx, 15);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b12c:
    // 0x28b12c: 0x1f401f3  tltu        $t7, $s4, 7
    ctx->pc = 0x28b12cu;
    if (GPR_U64(ctx, 15) < GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_28b130:
    // 0x28b130: 0x7d542928  sq          $s4, 0x2928($t2)
    ctx->pc = 0x28b130u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 10536), GPR_VEC(ctx, 20));
label_28b134:
    // 0x28b134: 0xa6  .word       0x000000A6                   # xor         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b134u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_28b138:
    // 0x28b138: 0xb40025  or          $zero, $a1, $s4
    ctx->pc = 0x28b138u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
label_28b13c:
    // 0x28b13c: 0x1f601f5  .word       0x01F601F5                   # INVALID     $t7, $s6, 0x1F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b13cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x28B13C raw=0x01F601F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b140:
    // 0x28b140: 0x2b2a01f7  slti        $t2, $t9, 0x1F7
    ctx->pc = 0x28b140u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)503) ? 1 : 0);
label_28b144:
    // 0x28b144: 0xa77e55  .word       0x00A77E55                   # INVALID     $a1, $a3, 0x7E55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b144u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28B144 raw=0x00A77E55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b148:
    // 0x28b148: 0x270000  .word       0x00270000                   # sll         $zero, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b148u;
    
label_28b14c:
    // 0x28b14c: 0x1f80104  .word       0x01F80104                   # sllv        $zero, $t8, $t7 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b14cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 15) & 0x1F));
label_28b150:
    // 0x28b150: 0x1fa01f9  .word       0x01FA01F9                   # INVALID     $t7, $k0, 0x1F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x28B150 raw=0x01FA01F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b154:
    // 0x28b154: 0x80572d2c  lb          $s7, 0x2D2C($v0)
    ctx->pc = 0x28b154u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11564)));
label_28b158:
    // 0x28b158: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b158u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_28b15c:
    // 0x28b15c: 0x1400028  .word       0x01400028                   # mfsa        $zero # 01400000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b15cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28b160:
    // 0x28b160: 0x1fc01fb  .word       0x01FC01FB                   # dsra        $zero, $gp, 7 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b160u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 28) >> 7);
label_28b164:
    // 0x28b164: 0x2f2e01fd  sltiu       $t6, $t9, 0x1FD
    ctx->pc = 0x28b164u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)509) ? 1 : 0);
label_28b168:
    // 0x28b168: 0xaa8158  .word       0x00AA8158                   # mult        $s0, $a1, $t2 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_28b16c:
    // 0x28b16c: 0x290003  .word       0x00290003                   # sra         $zero, $t1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b16cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 9), 0));
label_28b170:
    // 0x28b170: 0x21c0104  .word       0x021C0104                   # sllv        $zero, $gp, $s0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b170u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 28), GPR_U32(ctx, 16) & 0x1F));
label_28b174:
    // 0x28b174: 0xc2d0c2d  jal         func_B430B4
label_28b178:
    if (ctx->pc == 0x28B178u) {
        ctx->pc = 0x28B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B174u;
        // 0x28b178: 0x59300706  .word       0x59300706                   # blezl       $t1, . + 4 + (0x706 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28B178 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B17Cu;
        goto label_28b17c;
    }
    ctx->pc = 0x28B174u;
    SET_GPR_U32(ctx, 31, 0x28B17Cu);
    ctx->pc = 0x28B178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B174u;
    // 0x28b178: 0x59300706  .word       0x59300706                   # blezl       $t1, . + 4 + (0x706 << 2) # 00100000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x28B178 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x28B174u, 0x28B17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B17Cu;
label_28b17c:
    // 0x28b17c: 0x60082  srl         $zero, $a2, 2
    ctx->pc = 0x28b17cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_28b180:
    // 0x28b180: 0x1040029  .word       0x01040029                   # mtsa        $t0 # 00040000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b180u;
    ctx->sa = GPR_U32(ctx, 8) & 0x7F;
label_28b184:
    // 0x28b184: 0xc2d0c2d  jal         func_B430B4
label_28b188:
    if (ctx->pc == 0x28B188u) {
        ctx->pc = 0x28B188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B184u;
        // 0x28b188: 0x7060c2d  .word       0x07060C2D                   # INVALID     $t8, $a2, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//         throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28B188 raw=0x07060C2D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B18Cu;
        goto label_28b18c;
    }
    ctx->pc = 0x28B184u;
    SET_GPR_U32(ctx, 31, 0x28B18Cu);
    ctx->pc = 0x28B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B184u;
    // 0x28b188: 0x7060c2d  .word       0x07060C2D                   # INVALID     $t8, $a2, 0xC2D # 00000000 <InstrIdType: CPU_REGIMM> (Delay Slot)
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x28B188 raw=0x07060C2D");
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0xB430B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xB430B4u, 0x28B184u, 0x28B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B18Cu;
label_28b18c:
    // 0x28b18c: 0x825930  tge         $a0, $v0, 356
    ctx->pc = 0x28b18cu;
    if (GPR_S64(ctx, 4) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_28b190:
    // 0x28b190: 0x0  nop
    ctx->pc = 0x28b190u;
    // NOP
label_28b194:
    // 0x28b194: 0x0  nop
    ctx->pc = 0x28b194u;
    // NOP
label_28b198:
    // 0x28b198: 0x0  nop
    ctx->pc = 0x28b198u;
    // NOP
label_28b19c:
    // 0x28b19c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28b19cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_28b1a0:
    // 0x28b1a0: 0x400320  .word       0x00400320                   # add         $zero, $v0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1a0u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b1a4:
    // 0x28b1a4: 0x3400020  add         $zero, $k0, $zero
    ctx->pc = 0x28b1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 26);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b1a8:
    // 0x28b1a8: 0x380040  .word       0x00380040                   # sll         $zero, $t8, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1a8u;
    
label_28b1ac:
    // 0x28b1ac: 0x400378  .word       0x00400378                   # dsll        $zero, $zero, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 13);
label_28b1b0:
    // 0x28b1b0: 0x3200038  .word       0x03200038                   # dsll        $zero, $zero, 0 # 03200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 0);
label_28b1b4:
    // 0x28b1b4: 0x3c0050  .word       0x003C0050                   # mfhi        $zero # 003C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1b4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b1b8:
    // 0x28b1b8: 0x50035c  .word       0x0050035C                   # dmult       $v0, $s0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28B1B8 raw=0x0050035C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b1bc:
    // 0x28b1bc: 0x3900034  teq         $gp, $s0, 0
    ctx->pc = 0x28b1bcu;
    if (GPR_U64(ctx, 28) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_28b1c0:
    // 0x28b1c0: 0x1c0050  .word       0x001C0050                   # mfhi        $zero # 001C0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1c0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b1c4:
    // 0x28b1c4: 0x600320  .word       0x00600320                   # add         $zero, $v1, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b1c8:
    // 0x28b1c8: 0x35c003c  .word       0x035C003C                   # dsll32      $zero, $gp, 0 # 03400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) << (32 + 0));
label_28b1cc:
    // 0x28b1cc: 0x240060  .word       0x00240060                   # add         $zero, $at, $a0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1ccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b1d0:
    // 0x28b1d0: 0x600380  .word       0x00600380                   # sll         $zero, $zero, 14 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1d0u;
    
label_28b1d4:
    // 0x28b1d4: 0x3200030  tge         $t9, $zero, 0
    ctx->pc = 0x28b1d4u;
    if (GPR_S64(ctx, 25) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28b1d8:
    // 0x28b1d8: 0x1c0070  tge         $zero, $gp, 1
    ctx->pc = 0x28b1d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 28)) { runtime->handleTrap(rdram, ctx); }
label_28b1dc:
    // 0x28b1dc: 0x70033c  .word       0x0070033C                   # dsll32      $zero, $s0, 12 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) << (32 + 12));
label_28b1e0:
    // 0x28b1e0: 0x3540018  mult        $zero, $k0, $s4
    ctx->pc = 0x28b1e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 26) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b1e4:
    // 0x28b1e4: 0x140070  tge         $zero, $s4, 1
    ctx->pc = 0x28b1e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_28b1e8:
    // 0x28b1e8: 0x700368  .word       0x00700368                   # mfsa        $zero # 00700340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b1e8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28b1ec:
    // 0x28b1ec: 0x374000c  .word       0x0374000C                   # syscall     0 # 03740000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1ecu;
    ctx->pc = 0x28B1F0u;
runtime->handleSyscall(rdram, ctx, 0xDD000u);
label_28b1f0:
    // 0x28b1f0: 0x200070  tge         $at, $zero, 1
    ctx->pc = 0x28b1f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28b1f4:
    // 0x28b1f4: 0x800320  .word       0x00800320                   # add         $zero, $a0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b1f8:
    // 0x28b1f8: 0x32c000c  .word       0x032C000C                   # syscall     0 # 032C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b1f8u;
    ctx->pc = 0x28B1FCu;
runtime->handleSyscall(rdram, ctx, 0xCB000u);
label_28b1fc:
    // 0x28b1fc: 0xc0080  sll         $zero, $t4, 2
    ctx->pc = 0x28b1fcu;
    
label_28b200:
    // 0x28b200: 0x800338  .word       0x00800338                   # dsll        $zero, $zero, 12 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b200u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 12);
label_28b204:
    // 0x28b204: 0x344000c  .word       0x0344000C                   # syscall     0 # 03440000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b204u;
    ctx->pc = 0x28B208u;
runtime->handleSyscall(rdram, ctx, 0xD1000u);
label_28b208:
    // 0x28b208: 0xc0080  sll         $zero, $t4, 2
    ctx->pc = 0x28b208u;
    
label_28b20c:
    // 0x28b20c: 0x800350  .word       0x00800350                   # mfhi        $zero # 00800340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b20cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b210:
    // 0x28b210: 0x35c000c  .word       0x035C000C                   # syscall     0 # 035C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b210u;
    ctx->pc = 0x28B214u;
runtime->handleSyscall(rdram, ctx, 0xD7000u);
label_28b214:
    // 0x28b214: 0xc0080  sll         $zero, $t4, 2
    ctx->pc = 0x28b214u;
    
label_28b218:
    // 0x28b218: 0x800368  .word       0x00800368                   # mfsa        $zero # 00800340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28b218u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28b21c:
    // 0x28b21c: 0x374000c  .word       0x0374000C                   # syscall     0 # 03740000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b21cu;
    ctx->pc = 0x28B220u;
runtime->handleSyscall(rdram, ctx, 0xDD000u);
label_28b220:
    // 0x28b220: 0xc0080  sll         $zero, $t4, 2
    ctx->pc = 0x28b220u;
    
label_28b224:
    // 0x28b224: 0x800380  .word       0x00800380                   # sll         $zero, $zero, 14 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b224u;
    
label_28b228:
    // 0x28b228: 0x38c000c  .word       0x038C000C                   # syscall     0 # 038C0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b228u;
    ctx->pc = 0x28B22Cu;
runtime->handleSyscall(rdram, ctx, 0xE3000u);
label_28b22c:
    // 0x28b22c: 0xc0080  sll         $zero, $t4, 2
    ctx->pc = 0x28b22cu;
    
label_28b230:
    // 0x28b230: 0x900320  .word       0x00900320                   # add         $zero, $a0, $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b230u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b234:
    // 0x28b234: 0x3340014  dsllv       $zero, $s4, $t9
    ctx->pc = 0x28b234u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 20) << (GPR_U32(ctx, 25) & 0x3F));
label_28b238:
    // 0x28b238: 0x140090  .word       0x00140090                   # mfhi        $zero # 00140080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b238u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b23c:
    // 0x28b23c: 0x900348  .word       0x00900348                   # jr          $a0 # 00100340 <InstrIdType: CPU_SPECIAL>
label_28b240:
    if (ctx->pc == 0x28B240u) {
        ctx->pc = 0x28B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B23Cu;
        // 0x28b240: 0x3600018  mult        $zero, $k1, $zero (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B244u;
        goto label_28b244;
    }
    ctx->pc = 0x28B23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x28B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B23Cu;
        // 0x28b240: 0x3600018  mult        $zero, $k1, $zero (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B23Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B244u;
label_28b244:
    // 0x28b244: 0x180090  .word       0x00180090                   # mfhi        $zero # 00180080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b244u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b248:
    // 0x28b248: 0x900378  .word       0x00900378                   # dsll        $zero, $s0, 13 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b248u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 16) << 13);
label_28b24c:
    // 0x28b24c: 0x3200020  add         $zero, $t9, $zero
    ctx->pc = 0x28b24cu;
    {     int32_t rs_val = GPR_S32(ctx, 25);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28b250:
    // 0x28b250: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x28b250u;
    
label_28b254:
    // 0x28b254: 0x0  nop
    ctx->pc = 0x28b254u;
    // NOP
label_28b258:
    // 0x28b258: 0x0  nop
    ctx->pc = 0x28b258u;
    // NOP
label_28b25c:
    // 0x28b25c: 0x0  nop
    ctx->pc = 0x28b25cu;
    // NOP
label_28b260:
    // 0x28b260: 0x0  nop
    ctx->pc = 0x28b260u;
    // NOP
label_28b264:
    // 0x28b264: 0x8  jr          $zero
label_28b268:
    if (ctx->pc == 0x28B268u) {
        ctx->pc = 0x28B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B264u;
        // 0x28b268: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B26Cu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B26Cu;
        goto label_28b26c;
    }
    ctx->pc = 0x28B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B264u;
        // 0x28b268: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B26Cu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B264u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B26Cu;
label_28b26c:
    // 0x28b26c: 0x13  mtlo        $zero
    ctx->pc = 0x28b26cu;
    ctx->lo = GPR_U64(ctx, 0);
label_28b270:
    // 0x28b270: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B270 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b274:
    // 0x28b274: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B274 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b278:
    // 0x28b278: 0x0  nop
    ctx->pc = 0x28b278u;
    // NOP
label_28b27c:
    // 0x28b27c: 0x8  jr          $zero
label_28b280:
    if (ctx->pc == 0x28B280u) {
        ctx->pc = 0x28B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B27Cu;
        // 0x28b280: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B284u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B284u;
        goto label_28b284;
    }
    ctx->pc = 0x28B27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B27Cu;
        // 0x28b280: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B284u;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B27Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B284u;
label_28b284:
    // 0x28b284: 0xf  sync
    ctx->pc = 0x28b284u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28b288:
    // 0x28b288: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b288u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B288 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b28c:
    // 0x28b28c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b28cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B28C raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b290:
    // 0x28b290: 0x0  nop
    ctx->pc = 0x28b290u;
    // NOP
label_28b294:
    // 0x28b294: 0x8  jr          $zero
label_28b298:
    if (ctx->pc == 0x28B298u) {
        ctx->pc = 0x28B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B294u;
        // 0x28b298: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B29Cu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B29Cu;
        goto label_28b29c;
    }
    ctx->pc = 0x28B294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B294u;
        // 0x28b298: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x28B29Cu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B294u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B29Cu;
label_28b29c:
    // 0x28b29c: 0x10  mfhi        $zero
    ctx->pc = 0x28b29cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b2a0:
    // 0x28b2a0: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b2a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B2A0 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2a4:
    // 0x28b2a4: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28b2a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28B2A4 raw=0x0000000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2a8:
    // 0x28b2a8: 0x0  nop
    ctx->pc = 0x28b2a8u;
    // NOP
label_28b2ac:
    // 0x28b2ac: 0x8  jr          $zero
label_28b2b0:
    if (ctx->pc == 0x28B2B0u) {
        ctx->pc = 0x28B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2ACu;
        // 0x28b2b0: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2B4u;
        goto label_28b2b4;
    }
    ctx->pc = 0x28B2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2ACu;
        // 0x28b2b0: 0xd  break       0 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B2ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28B2B4u;
label_28b2b4:
    // 0x28b2b4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2B4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2b8:
    // 0x28b2b8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2B8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2bc:
    // 0x28b2bc: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2BC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2c0:
    // 0x28b2c0: 0x9  jalr        $zero, $zero
label_28b2c4:
    if (ctx->pc == 0x28B2C4u) {
        ctx->pc = 0x28B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2C0u;
        // 0x28b2c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2C8u;
        goto label_28b2c8;
    }
    ctx->pc = 0x28B2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2C0u;
        // 0x28b2c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B2C0u, 0x28B2C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B2C8u;
label_28b2c8:
    // 0x28b2c8: 0xc  syscall     0
    ctx->pc = 0x28b2c8u;
    ctx->pc = 0x28B2CCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b2cc:
    // 0x28b2cc: 0x13  mtlo        $zero
    ctx->pc = 0x28b2ccu;
    ctx->lo = GPR_U64(ctx, 0);
label_28b2d0:
    // 0x28b2d0: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2D0 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2d4:
    // 0x28b2d4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2D4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2d8:
    // 0x28b2d8: 0x9  jalr        $zero, $zero
label_28b2dc:
    if (ctx->pc == 0x28B2DCu) {
        ctx->pc = 0x28B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D8u;
        // 0x28b2dc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2DC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2E0u;
        goto label_28b2e0;
    }
    ctx->pc = 0x28B2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D8u;
        // 0x28b2dc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2DC raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B2D8u, 0x28B2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B2E0u;
label_28b2e0:
    // 0x28b2e0: 0xc  syscall     0
    ctx->pc = 0x28b2e0u;
    ctx->pc = 0x28B2E4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b2e4:
    // 0x28b2e4: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x28b2e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b2e8:
    // 0x28b2e8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2E8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2ec:
    // 0x28b2ec: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b2ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B2EC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b2f0:
    // 0x28b2f0: 0x9  jalr        $zero, $zero
label_28b2f4:
    if (ctx->pc == 0x28B2F4u) {
        ctx->pc = 0x28B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2F0u;
        // 0x28b2f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2F8u;
        goto label_28b2f8;
    }
    ctx->pc = 0x28B2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2F0u;
        // 0x28b2f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B2F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B2F0u, 0x28B2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B2F8u;
label_28b2f8:
    // 0x28b2f8: 0xc  syscall     0
    ctx->pc = 0x28b2f8u;
    ctx->pc = 0x28B2FCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b2fc:
    // 0x28b2fc: 0x19  multu       $zero, $zero
    ctx->pc = 0x28b2fcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28b300:
    // 0x28b300: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B300 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b304:
    // 0x28b304: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b304u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B304 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b308:
    // 0x28b308: 0x9  jalr        $zero, $zero
label_28b30c:
    if (ctx->pc == 0x28B30Cu) {
        ctx->pc = 0x28B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B308u;
        // 0x28b30c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B30C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B310u;
        goto label_28b310;
    }
    ctx->pc = 0x28B308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B308u;
        // 0x28b30c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28B30C raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B308u, 0x28B310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B310u;
label_28b310:
    // 0x28b310: 0xc  syscall     0
    ctx->pc = 0x28b310u;
    ctx->pc = 0x28B314u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b314:
    // 0x28b314: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x28b314u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28b318:
    // 0x28b318: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b318u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B318 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b31c:
    // 0x28b31c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b31cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B31C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b320:
    // 0x28b320: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b320u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b324:
    // 0x28b324: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b324u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b328:
    // 0x28b328: 0xc  syscall     0
    ctx->pc = 0x28b328u;
    ctx->pc = 0x28B32Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b32c:
    // 0x28b32c: 0xf  sync
    ctx->pc = 0x28b32cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28b330:
    // 0x28b330: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B330 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b334:
    // 0x28b334: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B334 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b338:
    // 0x28b338: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b338u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b33c:
    // 0x28b33c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b33cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b340:
    // 0x28b340: 0xc  syscall     0
    ctx->pc = 0x28b340u;
    ctx->pc = 0x28B344u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b344:
    // 0x28b344: 0x10  mfhi        $zero
    ctx->pc = 0x28b344u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b348:
    // 0x28b348: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b348u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B348 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b34c:
    // 0x28b34c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b34cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B34C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b350:
    // 0x28b350: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b350u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b354:
    // 0x28b354: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b354u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b358:
    // 0x28b358: 0xc  syscall     0
    ctx->pc = 0x28b358u;
    ctx->pc = 0x28B35Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b35c:
    // 0x28b35c: 0x12  mflo        $zero
    ctx->pc = 0x28b35cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28b360:
    // 0x28b360: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B360 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b364:
    // 0x28b364: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B364 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b368:
    // 0x28b368: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28b368u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28b36c:
    // 0x28b36c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b36cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b370:
    // 0x28b370: 0xc  syscall     0
    ctx->pc = 0x28b370u;
    ctx->pc = 0x28B374u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b374:
    // 0x28b374: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x28b374u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28b378:
    // 0x28b378: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b378u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B378 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b37c:
    // 0x28b37c: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b37cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B37C raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b380:
    // 0x28b380: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28b380u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28b384:
    // 0x28b384: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b384u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b388:
    // 0x28b388: 0xc  syscall     0
    ctx->pc = 0x28b388u;
    ctx->pc = 0x28B38Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b38c:
    // 0x28b38c: 0xf  sync
    ctx->pc = 0x28b38cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_28b390:
    // 0x28b390: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B390 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b394:
    // 0x28b394: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B394 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b398:
    // 0x28b398: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28b398u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28b39c:
    // 0x28b39c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b39cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b3a0:
    // 0x28b3a0: 0xc  syscall     0
    ctx->pc = 0x28b3a0u;
    ctx->pc = 0x28B3A4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b3a4:
    // 0x28b3a4: 0x10  mfhi        $zero
    ctx->pc = 0x28b3a4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28b3a8:
    // 0x28b3a8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3A8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3ac:
    // 0x28b3ac: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3AC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3b0:
    // 0x28b3b0: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28b3b0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28b3b4:
    // 0x28b3b4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b3b4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b3b8:
    // 0x28b3b8: 0xc  syscall     0
    ctx->pc = 0x28b3b8u;
    ctx->pc = 0x28B3BCu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b3bc:
    // 0x28b3bc: 0x12  mflo        $zero
    ctx->pc = 0x28b3bcu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28b3c0:
    // 0x28b3c0: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3C0 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3c4:
    // 0x28b3c4: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3C4 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3c8:
    // 0x28b3c8: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x28b3c8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_28b3cc:
    // 0x28b3cc: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x28b3ccu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28b3d0:
    // 0x28b3d0: 0xc  syscall     0
    ctx->pc = 0x28b3d0u;
    ctx->pc = 0x28B3D4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_28b3d4:
    // 0x28b3d4: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x28b3d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28b3d8:
    // 0x28b3d8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3D8 raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28b3dc:
    // 0x28b3dc: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x28b3dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28B3DC raw=0x0000001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x28b3e0u;
    return;
}
